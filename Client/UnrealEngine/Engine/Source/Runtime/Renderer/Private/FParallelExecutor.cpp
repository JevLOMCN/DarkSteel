// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 38

// ~FParallelExecutor @ 1448ee6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x0001448ee6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 1448ee700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x0001448ee74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 1448ee760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x0001448ee7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 1448ee7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x0001448ee80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 1448f8890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FMeshBatchDynamicPrimitiveData *this_00;
  ulong64 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  FPrimitiveUniformShaderParameters *pFVar18;
  bool bVar19;
  undefined1 uVar20;
  bool bVar21;
  uint uVar22;
  uint *puVar23;
  FTlsAutoCleanup *pFVar24;
  longlong lVar25;
  undefined8 *puVar26;
  uint uVar27;
  longlong lVar29;
  int iVar30;
  FPrimitiveUniformShaderParameters *pFVar31;
  char cVar32;
  longlong lVar33;
  longlong lVar34;
  int iVar35;
  int iVar36;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_498 [32];
  longlong local_478;
  longlong local_470;
  char local_468;
  char local_467;
  int local_464;
  int local_460;
  ulong64 local_458;
  undefined1 local_450 [4];
  int local_44c;
  int local_448;
  int local_444;
  uint local_440;
  TVector4<float> *local_438;
  FMemMark local_430;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_408;
  longlong local_400;
  longlong local_3f8;
  LARGE_INTEGER local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  LARGE_INTEGER local_3d8;
  code *local_3d0;
  undefined1 *local_3c8;
  FTaskTagScope local_3c0;
  FInheritedContextScope local_3b0;
  FPrimitiveUniformShaderParameters local_388;
  ulonglong local_68;
  int iVar28;
  undefined1 auVar38 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_498;
  local_3e0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_3b0);
  puVar23 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_3c8 = local_450;
  local_3d0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar24 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_3d0,puVar23);
  local_430.Mem = (FMemStackBase *)(pFVar24 + 2);
  local_430.Top = (local_430.Mem)->Top;
  local_430.SavedChunk = *(FTaggedMemory **)(pFVar24 + 4);
  local_430.bPopped = false;
  local_430.NextTopmostMark = *(FMemMark **)(pFVar24 + 5);
  pFVar24[5] = (FTlsAutoCleanup)&local_430;
  *(int *)(pFVar24 + 6) = *(int *)(pFVar24 + 6) + 1;
  lVar29 = *(longlong *)this;
  if (param_1) {
    local_460 = *(int *)(lVar29 + 0x54);
    local_458 = 0xffffffffffffffff;
  }
  else {
    uVar27 = *(uint *)((longlong)this + 8);
    uVar22 = 0;
    if ((int)uVar27 < *(int *)(lVar29 + 0x80)) {
      uVar22 = ~uVar27 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (local_478 = (longlong)(int)uVar27, local_470 = (longlong)*(int *)(lVar29 + 0x80),
       bVar19 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar20 = (*pcVar5)();
      return (bool)uVar20;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar29 + 0x78) + 0x40 + (longlong)(int)uVar27 * 0x48);
    TaskTrace::Started(uVar3);
    iVar36 = *(int *)(*(longlong *)this + 0x54);
    local_460 = iVar36;
    local_458 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar36) {
      lVar29 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar29 + 0x48);
      iVar35 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar29 + 0x80) <= iVar35) {
        iVar35 = -1;
      }
      if (iVar35 != -1) {
        local_408.Reference = *(FParallelForData **)this;
        if (local_408.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_408.Reference)->field_0x8 = *(int *)&(local_408.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_464 = iVar36;
        LaunchTask(&local_408,iVar35,true);
        local_460 = iVar36;
        local_458 = uVar3;
        if (local_408.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_408.Reference)->field_0x8;
          LOCK();
          iVar35 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar35 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_408.Reference != (FParallelForData *)0x0)) {
            local_464 = iVar36;
            (*(code *)**(undefined8 **)local_408.Reference)(local_408.Reference,1);
            local_460 = iVar36;
            local_458 = uVar3;
          }
        }
      }
    }
  }
  iVar36 = local_460;
  bVar19 = CpuChannel->Enabled < 0;
  local_464 = local_460;
  if (bVar19) {
    local_468 = '\0';
  }
  else {
    local_468 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar15 = __real_42e312d000000010;
  dVar14 = __real_416312d000000000;
  cVar32 = !bVar19;
  local_400 = -0x8000000000000000;
  local_3f8 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_467 = '\0';
  }
  else {
    local_467 = '\x01';
    QueryPerformanceCounter(&local_3f0);
    auVar37._8_8_ = extraout_XMM0_Qb;
    auVar37._0_8_ = extraout_XMM0_Qa;
    iVar35 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      iVar35 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_3f0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar14 +
                   dVar15;
    auVar37 = roundpd(auVar37,auVar6,1);
    local_400 = (longlong)auVar37._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)iVar35 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar37 = roundpd(auVar37,auVar7,1);
    local_3f8 = (longlong)auVar37._0_8_;
  }
  lVar29 = *(longlong *)this;
  local_3e8 = *(longlong **)(lVar29 + 0x60);
  local_44c = *(int *)(lVar29 + 0x4c);
  local_448 = *(int *)(lVar29 + 0x50);
  lVar29 = local_400;
  lVar34 = local_3f8;
  iVar35 = iVar36;
  iVar30 = local_44c;
  do {
    do {
      plVar16 = local_3e8;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar28 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar36 < iVar30) && (iVar35 + -1 <= iVar28)) && (iVar28 = iVar35 + -1, !param_1))
      goto LAB_1448f8e29;
      uVar27 = iVar28 * local_448;
      local_444 = iVar30;
      if ((int)(uVar27 + local_448) < iVar30) {
        local_444 = uVar27 + local_448;
      }
      lVar25 = (longlong)(int)uVar27;
      local_440 = uVar27;
      if (lVar25 < local_444) {
        lVar33 = local_444 - lVar25;
        lVar25 = lVar25 * 0x68;
        do {
          FTaskTagScope::FTaskTagScope(&local_3c0,EParallelRenderingThread);
          plVar4 = (longlong *)plVar16[1];
          lVar29 = *(longlong *)(*plVar16 + 0x10);
          lVar34 = *plVar4;
          local_438 = (TVector4<float> *)
                      ((ulonglong)(uVar27 * *(int *)(lVar29 + 0x18)) + *(longlong *)(lVar29 + 8));
          uVar22 = 0;
          if ((int)uVar27 < *(int *)(lVar34 + 0x348)) {
            uVar22 = ~uVar27 >> 0x1f;
          }
          if (uVar22 == 0) {
            local_478 = (longlong)(int)uVar27;
            local_470 = (longlong)*(int *)(lVar34 + 0x348);
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar5 = (code *)swi(3);
              uVar20 = (*pcVar5)();
              return (bool)uVar20;
            }
          }
          lVar29 = 6;
          if (*(longlong *)(lVar34 + 0x340) != 0) {
            lVar34 = *(longlong *)(lVar34 + 0x340);
          }
          this_00 = (FMeshBatchDynamicPrimitiveData *)(lVar25 + lVar34);
          puVar17 = *(undefined8 **)(lVar25 + 0x50 + lVar34);
          pFVar18 = &local_388;
          do {
            pFVar31 = pFVar18;
            puVar26 = puVar17;
            pFVar18 = (FPrimitiveUniformShaderParameters *)((pFVar31->RelativeWorldToLocal).M + 2);
            uVar12 = *puVar26;
            uVar13 = puVar26[1];
            pFVar31->Flags = (int)uVar12;
            pFVar31->InstanceSceneDataOffset = (int)((ulonglong)uVar12 >> 0x20);
            pFVar31->NumInstanceSceneDataEntries = (int)uVar13;
            pFVar31->SingleCaptureIndex = (int)((ulonglong)uVar13 >> 0x20);
            uVar12 = puVar26[3];
            *(undefined8 *)&(pFVar31->PositionHigh).field0_0x0 = puVar26[2];
            *(undefined8 *)((longlong)&(pFVar31->PositionHigh).field0_0x0 + 8) = uVar12;
            uVar12 = puVar26[5];
            *(undefined8 *)(pFVar31->LocalToRelativeWorld).M[0] = puVar26[4];
            *(undefined8 *)((pFVar31->LocalToRelativeWorld).M[0] + 2) = uVar12;
            uVar12 = puVar26[7];
            *(undefined8 *)(pFVar31->LocalToRelativeWorld).M[1] = puVar26[6];
            *(undefined8 *)((pFVar31->LocalToRelativeWorld).M[1] + 2) = uVar12;
            uVar12 = puVar26[9];
            *(undefined8 *)(pFVar31->LocalToRelativeWorld).M[2] = puVar26[8];
            *(undefined8 *)((pFVar31->LocalToRelativeWorld).M[2] + 2) = uVar12;
            uVar12 = puVar26[0xb];
            *(undefined8 *)(pFVar31->LocalToRelativeWorld).M[3] = puVar26[10];
            *(undefined8 *)((pFVar31->LocalToRelativeWorld).M[3] + 2) = uVar12;
            uVar12 = puVar26[0xd];
            *(undefined8 *)(pFVar31->RelativeWorldToLocal).M[0] = puVar26[0xc];
            *(undefined8 *)((pFVar31->RelativeWorldToLocal).M[0] + 2) = uVar12;
            uVar12 = puVar26[0xf];
            *(undefined8 *)(pFVar31->RelativeWorldToLocal).M[1] = puVar26[0xe];
            *(undefined8 *)((pFVar31->RelativeWorldToLocal).M[1] + 2) = uVar12;
            lVar29 = lVar29 + -1;
            puVar17 = puVar26 + 0x10;
          } while (lVar29 != 0);
          uVar12 = puVar26[0x10];
          uVar13 = puVar26[0x11];
          pFVar18->Flags = (int)uVar12;
          pFVar18->InstanceSceneDataOffset = (int)((ulonglong)uVar12 >> 0x20);
          *(undefined8 *)((pFVar31->RelativeWorldToLocal).M[2] + 2) = uVar13;
          fVar9 = *(float *)((longlong)puVar26 + 0x94);
          fVar10 = *(float *)(puVar26 + 0x13);
          fVar11 = *(float *)((longlong)puVar26 + 0x9c);
          (pFVar31->RelativeWorldToLocal).M[3][0] = *(float *)(puVar26 + 0x12);
          (pFVar31->RelativeWorldToLocal).M[3][1] = fVar9;
          (pFVar31->RelativeWorldToLocal).M[3][2] = fVar10;
          (pFVar31->RelativeWorldToLocal).M[3][3] = fVar11;
          local_388.InstanceSceneDataOffset =
               *(int *)&this_00[1].InstanceSceneData.field_0xc + *(int *)((longlong)plVar4 + 0xc);
          local_388.NumInstanceSceneDataEntries = this_00[1].InstanceSceneData.ArrayNum;
          iVar36 = *(int *)&this_00[1].InstanceDynamicData.DataPtr;
          if (iVar36 == -1) {
            local_388.InstancePayloadDataOffset = 0xffffffff;
            local_388.InstancePayloadDataStride = 0;
          }
          else {
            local_388.InstancePayloadDataOffset = iVar36 + (int)plVar4[2];
            local_388.InstancePayloadDataStride =
                 FMeshBatchDynamicPrimitiveData::GetPayloadFloat4Stride(this_00);
          }
          FPrimitiveSceneShaderData::Setup(&local_388,local_438);
          FTaskTagScope::~FTaskTagScope(&local_3c0);
          uVar27 = uVar27 + 1;
          lVar25 = lVar25 + 0x68;
          lVar33 = lVar33 + -1;
          lVar29 = local_400;
          lVar34 = local_3f8;
          this = local_3e0;
          cVar32 = local_468;
          iVar30 = local_44c;
        } while (lVar33 != 0);
      }
      iVar35 = local_460;
      iVar36 = local_464;
      if ((int)local_440 < iVar30) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar28 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar19 = true;
          goto LAB_1448f8e2b;
        }
      }
      if (iVar30 <= local_444) goto LAB_1448f8e29;
    } while (local_467 == '\0');
    QueryPerformanceCounter(&local_3d8);
    auVar38._8_8_ = extraout_XMM0_Qb_00;
    auVar38._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_3d8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar14 +
                   dVar15;
    auVar37 = roundpd(auVar38,auVar8,1);
    iVar30 = local_44c;
  } while ((longlong)auVar37._0_8_ - lVar29 <= lVar34);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_1448f8e29:
  bVar19 = false;
LAB_1448f8e2b:
  if (cVar32 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_458);
  }
  if (local_430.bPopped == false) {
    if (((local_430.Mem)->TopMark != &local_430) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      uVar20 = (*pcVar5)();
      return (bool)uVar20;
    }
    local_430.bPopped = true;
    (local_430.Mem)->NumMarks = (local_430.Mem)->NumMarks + -1;
    if (local_430.SavedChunk != (local_430.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_430.Mem,local_430.SavedChunk);
    }
    (local_430.Mem)->Top = local_430.Top;
    (local_430.Mem)->TopMark = local_430.NextTopmostMark;
    local_430.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_3b0.MetaScope);
  FMemScope::~FMemScope(&local_3b0.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_3b0,local_3b0.LLMScopes.LLMScopes.ArrayNum);
  return bVar19;
}

// operator() @ 1448f8f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  void *this_00;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  char local_108;
  int local_104;
  int local_100;
  ulong64 local_f8;
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  FMemMark local_e0;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  void *local_a0;
  LARGE_INTEGER local_98;
  code *local_90;
  undefined1 *local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  undefined1 auVar27 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_b0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_88 = local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar16);
  lVar21 = 0;
  local_e0.Mem = (FMemStackBase *)(pFVar17 + 2);
  local_e0.Top = (local_e0.Mem)->Top;
  local_e0.SavedChunk = *(FTaggedMemory **)(pFVar17 + 4);
  local_e0.bPopped = false;
  local_e0.NextTopmostMark = *(FMemMark **)(pFVar17 + 5);
  pFVar17[5] = (FTlsAutoCleanup)&local_e0;
  *(int *)(pFVar17 + 6) = *(int *)(pFVar17 + 6) + 1;
  lVar20 = *(longlong *)this;
  if (param_1) {
    local_100 = *(int *)(lVar20 + 0x54);
    local_f8 = 0xffffffffffffffff;
  }
  else {
    uVar15 = *(uint *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar15 < *(int *)(lVar20 + 0x80)) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_118 = (longlong)(int)uVar15, local_110 = (longlong)*(int *)(lVar20 + 0x80),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar20 + 0x78) + 0x40 + (longlong)(int)uVar15 * 0x48);
    TaskTrace::Started(uVar3);
    iVar23 = *(int *)(*(longlong *)this + 0x54);
    local_100 = iVar23;
    local_f8 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar23) {
      lVar20 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar20 + 0x48);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar20 + 0x80) <= iVar18) {
        iVar18 = -1;
      }
      if (iVar18 != -1) {
        local_b8.Reference = *(FParallelForData **)this;
        if (local_b8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_b8.Reference)->field_0x8 = *(int *)&(local_b8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_104 = iVar23;
        LaunchTask(&local_b8,iVar18,true);
        local_100 = iVar23;
        local_f8 = uVar3;
        if (local_b8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_b8.Reference)->field_0x8;
          LOCK();
          iVar18 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar18 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_b8.Reference != (FParallelForData *)0x0)) {
            local_104 = iVar23;
            (*(code *)**(undefined8 **)local_b8.Reference)(local_b8.Reference,1);
            local_100 = iVar23;
            local_f8 = uVar3;
          }
        }
      }
    }
  }
  iVar23 = local_100;
  bVar12 = -1 < CpuChannel->Enabled;
  local_104 = local_100;
  if (bVar12) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar11 = __real_42e312d000000010;
  dVar10 = __real_416312d000000000;
  lVar20 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    QueryPerformanceCounter(&local_a8);
    auVar26._8_8_ = extraout_XMM0_Qb;
    auVar26._0_8_ = extraout_XMM0_Qa;
    uVar15 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar15 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar26 = roundpd(auVar26,auVar6,1);
    lVar20 = (longlong)auVar26._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)(int)uVar15 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar26 = roundpd(auVar26,auVar7,1);
    lVar21 = (longlong)auVar26._0_8_;
  }
  lVar4 = *(longlong *)this;
  local_a0 = *(void **)(lVar4 + 0x60);
  iVar18 = *(int *)(lVar4 + 0x4c);
  local_ec = *(int *)(lVar4 + 0x50);
  local_e8 = iVar18;
  iVar22 = local_ec;
  do {
    do {
      this_00 = local_a0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar23 < iVar18) && (local_100 + -1 <= iVar25)) && (iVar25 = local_100 + -1, !param_1))
      goto LAB_1448f9317;
      iVar25 = iVar25 * iVar22;
      iVar9 = iVar25;
      iVar23 = local_104;
      this = local_b0;
      iVar24 = iVar18;
      if (iVar25 + iVar22 < iVar18) {
        iVar24 = iVar25 + iVar22;
      }
      for (; local_104 = iVar23, local_b0 = this, iVar9 < iVar24; iVar9 = iVar9 + 1) {
        ``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::
        operator()'::__l3::<lambda_1>::operator()(this_00,iVar9);
        iVar18 = local_e8;
        iVar23 = local_104;
        this = local_b0;
        iVar22 = local_ec;
      }
      if (iVar25 < iVar18) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar19 = true;
          goto LAB_1448f931d;
        }
      }
      if (iVar18 <= iVar24) goto LAB_1448f9317;
    } while (local_108 == '\0');
    QueryPerformanceCounter(&local_98);
    auVar27._8_8_ = extraout_XMM0_Qb_00;
    auVar27._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar26 = roundpd(auVar27,auVar8,1);
    iVar22 = local_ec;
  } while ((longlong)auVar26._0_8_ - lVar20 <= lVar21);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_1448f9317:
  bVar19 = false;
LAB_1448f931d:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_f8);
  }
  if (local_e0.bPopped == false) {
    if (((local_e0.Mem)->TopMark != &local_e0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_e0.bPopped = true;
    (local_e0.Mem)->NumMarks = (local_e0.Mem)->NumMarks + -1;
    if (local_e0.SavedChunk != (local_e0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_e0.Mem,local_e0.SavedChunk);
    }
    (local_e0.Mem)->Top = local_e0.Top;
    (local_e0.Mem)->TopMark = local_e0.NextTopmostMark;
    local_e0.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar19;
}

// operator() @ 1448f9410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  void *this_00;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  char local_108;
  int local_104;
  int local_100;
  ulong64 local_f8;
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  FMemMark local_e0;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  void *local_a0;
  LARGE_INTEGER local_98;
  code *local_90;
  undefined1 *local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  undefined1 auVar27 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_b0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_88 = local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar16);
  lVar21 = 0;
  local_e0.Mem = (FMemStackBase *)(pFVar17 + 2);
  local_e0.Top = (local_e0.Mem)->Top;
  local_e0.SavedChunk = *(FTaggedMemory **)(pFVar17 + 4);
  local_e0.bPopped = false;
  local_e0.NextTopmostMark = *(FMemMark **)(pFVar17 + 5);
  pFVar17[5] = (FTlsAutoCleanup)&local_e0;
  *(int *)(pFVar17 + 6) = *(int *)(pFVar17 + 6) + 1;
  lVar20 = *(longlong *)this;
  if (param_1) {
    local_100 = *(int *)(lVar20 + 0x54);
    local_f8 = 0xffffffffffffffff;
  }
  else {
    uVar15 = *(uint *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar15 < *(int *)(lVar20 + 0x80)) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_118 = (longlong)(int)uVar15, local_110 = (longlong)*(int *)(lVar20 + 0x80),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar20 + 0x78) + 0x40 + (longlong)(int)uVar15 * 0x48);
    TaskTrace::Started(uVar3);
    iVar23 = *(int *)(*(longlong *)this + 0x54);
    local_100 = iVar23;
    local_f8 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar23) {
      lVar20 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar20 + 0x48);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar20 + 0x80) <= iVar18) {
        iVar18 = -1;
      }
      if (iVar18 != -1) {
        local_b8.Reference = *(FParallelForData **)this;
        if (local_b8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_b8.Reference)->field_0x8 = *(int *)&(local_b8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_104 = iVar23;
        LaunchTask(&local_b8,iVar18,true);
        local_100 = iVar23;
        local_f8 = uVar3;
        if (local_b8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_b8.Reference)->field_0x8;
          LOCK();
          iVar18 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar18 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_b8.Reference != (FParallelForData *)0x0)) {
            local_104 = iVar23;
            (*(code *)**(undefined8 **)local_b8.Reference)(local_b8.Reference,1);
            local_100 = iVar23;
            local_f8 = uVar3;
          }
        }
      }
    }
  }
  iVar23 = local_100;
  bVar12 = -1 < CpuChannel->Enabled;
  local_104 = local_100;
  if (bVar12) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar11 = __real_42e312d000000010;
  dVar10 = __real_416312d000000000;
  lVar20 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    QueryPerformanceCounter(&local_a8);
    auVar26._8_8_ = extraout_XMM0_Qb;
    auVar26._0_8_ = extraout_XMM0_Qa;
    uVar15 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar15 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar26 = roundpd(auVar26,auVar6,1);
    lVar20 = (longlong)auVar26._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)(int)uVar15 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar26 = roundpd(auVar26,auVar7,1);
    lVar21 = (longlong)auVar26._0_8_;
  }
  lVar4 = *(longlong *)this;
  local_a0 = *(void **)(lVar4 + 0x60);
  iVar18 = *(int *)(lVar4 + 0x4c);
  local_ec = *(int *)(lVar4 + 0x50);
  local_e8 = iVar18;
  iVar22 = local_ec;
  do {
    do {
      this_00 = local_a0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar23 < iVar18) && (local_100 + -1 <= iVar25)) && (iVar25 = local_100 + -1, !param_1))
      goto LAB_1448f9807;
      iVar25 = iVar25 * iVar22;
      iVar9 = iVar25;
      iVar23 = local_104;
      this = local_b0;
      iVar24 = iVar18;
      if (iVar25 + iVar22 < iVar18) {
        iVar24 = iVar25 + iVar22;
      }
      for (; local_104 = iVar23, local_b0 = this, iVar9 < iVar24; iVar9 = iVar9 + 1) {
        ``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::
        operator()'::__l9::<lambda_2>::operator()(this_00,iVar9);
        iVar18 = local_e8;
        iVar23 = local_104;
        this = local_b0;
        iVar22 = local_ec;
      }
      if (iVar25 < iVar18) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar19 = true;
          goto LAB_1448f980d;
        }
      }
      if (iVar18 <= iVar24) goto LAB_1448f9807;
    } while (local_108 == '\0');
    QueryPerformanceCounter(&local_98);
    auVar27._8_8_ = extraout_XMM0_Qb_00;
    auVar27._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar26 = roundpd(auVar27,auVar8,1);
    iVar22 = local_ec;
  } while ((longlong)auVar26._0_8_ - lVar20 <= lVar21);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_1448f9807:
  bVar19 = false;
LAB_1448f980d:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_f8);
  }
  if (local_e0.bPopped == false) {
    if (((local_e0.Mem)->TopMark != &local_e0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_e0.bPopped = true;
    (local_e0.Mem)->NumMarks = (local_e0.Mem)->NumMarks + -1;
    if (local_e0.SavedChunk != (local_e0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_e0.Mem,local_e0.SavedChunk);
    }
    (local_e0.Mem)->Top = local_e0.Top;
    (local_e0.Mem)->TopMark = local_e0.NextTopmostMark;
    local_e0.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar19;
}

// operator() @ 1448f9900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  void *this_00;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  char local_108;
  int local_104;
  int local_100;
  ulong64 local_f8;
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  FMemMark local_e0;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  void *local_a0;
  LARGE_INTEGER local_98;
  code *local_90;
  undefined1 *local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  undefined1 auVar27 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_b0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_88 = local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar16);
  lVar21 = 0;
  local_e0.Mem = (FMemStackBase *)(pFVar17 + 2);
  local_e0.Top = (local_e0.Mem)->Top;
  local_e0.SavedChunk = *(FTaggedMemory **)(pFVar17 + 4);
  local_e0.bPopped = false;
  local_e0.NextTopmostMark = *(FMemMark **)(pFVar17 + 5);
  pFVar17[5] = (FTlsAutoCleanup)&local_e0;
  *(int *)(pFVar17 + 6) = *(int *)(pFVar17 + 6) + 1;
  lVar20 = *(longlong *)this;
  if (param_1) {
    local_100 = *(int *)(lVar20 + 0x54);
    local_f8 = 0xffffffffffffffff;
  }
  else {
    uVar15 = *(uint *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar15 < *(int *)(lVar20 + 0x80)) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_118 = (longlong)(int)uVar15, local_110 = (longlong)*(int *)(lVar20 + 0x80),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar20 + 0x78) + 0x40 + (longlong)(int)uVar15 * 0x48);
    TaskTrace::Started(uVar3);
    iVar23 = *(int *)(*(longlong *)this + 0x54);
    local_100 = iVar23;
    local_f8 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar23) {
      lVar20 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar20 + 0x48);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar20 + 0x80) <= iVar18) {
        iVar18 = -1;
      }
      if (iVar18 != -1) {
        local_b8.Reference = *(FParallelForData **)this;
        if (local_b8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_b8.Reference)->field_0x8 = *(int *)&(local_b8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_104 = iVar23;
        LaunchTask(&local_b8,iVar18,true);
        local_100 = iVar23;
        local_f8 = uVar3;
        if (local_b8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_b8.Reference)->field_0x8;
          LOCK();
          iVar18 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar18 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_b8.Reference != (FParallelForData *)0x0)) {
            local_104 = iVar23;
            (*(code *)**(undefined8 **)local_b8.Reference)(local_b8.Reference,1);
            local_100 = iVar23;
            local_f8 = uVar3;
          }
        }
      }
    }
  }
  iVar23 = local_100;
  bVar12 = -1 < CpuChannel->Enabled;
  local_104 = local_100;
  if (bVar12) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar11 = __real_42e312d000000010;
  dVar10 = __real_416312d000000000;
  lVar20 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    QueryPerformanceCounter(&local_a8);
    auVar26._8_8_ = extraout_XMM0_Qb;
    auVar26._0_8_ = extraout_XMM0_Qa;
    uVar15 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar15 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar26 = roundpd(auVar26,auVar6,1);
    lVar20 = (longlong)auVar26._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)(int)uVar15 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar26 = roundpd(auVar26,auVar7,1);
    lVar21 = (longlong)auVar26._0_8_;
  }
  lVar4 = *(longlong *)this;
  local_a0 = *(void **)(lVar4 + 0x60);
  iVar18 = *(int *)(lVar4 + 0x4c);
  local_ec = *(int *)(lVar4 + 0x50);
  local_e8 = iVar18;
  iVar22 = local_ec;
  do {
    do {
      this_00 = local_a0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar23 < iVar18) && (local_100 + -1 <= iVar25)) && (iVar25 = local_100 + -1, !param_1))
      goto LAB_1448f9cf7;
      iVar25 = iVar25 * iVar22;
      iVar9 = iVar25;
      iVar23 = local_104;
      this = local_b0;
      iVar24 = iVar18;
      if (iVar25 + iVar22 < iVar18) {
        iVar24 = iVar25 + iVar22;
      }
      for (; local_104 = iVar23, local_b0 = this, iVar9 < iVar24; iVar9 = iVar9 + 1) {
        ``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::
        operator()'::__l9::<lambda_2>::operator()(this_00,iVar9);
        iVar18 = local_e8;
        iVar23 = local_104;
        this = local_b0;
        iVar22 = local_ec;
      }
      if (iVar25 < iVar18) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar19 = true;
          goto LAB_1448f9cfd;
        }
      }
      if (iVar18 <= iVar24) goto LAB_1448f9cf7;
    } while (local_108 == '\0');
    QueryPerformanceCounter(&local_98);
    auVar27._8_8_ = extraout_XMM0_Qb_00;
    auVar27._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar26 = roundpd(auVar27,auVar8,1);
    iVar22 = local_ec;
  } while ((longlong)auVar26._0_8_ - lVar20 <= lVar21);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_1448f9cf7:
  bVar19 = false;
LAB_1448f9cfd:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_f8);
  }
  if (local_e0.bPopped == false) {
    if (((local_e0.Mem)->TopMark != &local_e0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_e0.bPopped = true;
    (local_e0.Mem)->NumMarks = (local_e0.Mem)->NumMarks + -1;
    if (local_e0.SavedChunk != (local_e0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_e0.Mem,local_e0.SavedChunk);
    }
    (local_e0.Mem)->Top = local_e0.Top;
    (local_e0.Mem)->TopMark = local_e0.NextTopmostMark;
    local_e0.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar19;
}

// LaunchTask @ 14492a680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::`2'::<lambda_2>::operator()'::`3'::<lambda_1>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::`2'::<lambda_2>::operator()'::`3'::<lambda_1>_>'::`2'::<lambda_1>,std::nullptr_t>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// LaunchTask @ 14492a8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::`2'::<lambda_2>::operator()'::`3'::<lambda_1>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::`2'::<lambda_2>::operator()'::`3'::<lambda_1>_>'::`2'::<lambda_1>,std::nullptr_t>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// LaunchTask @ 14492ab60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::`2'::<lambda_2>::operator()'::`9'::<lambda_2>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::`2'::<lambda_2>::operator()'::`9'::<lambda_2>_>'::`2'::<lambda_1>,std::nullptr_t>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// LaunchTask @ 14492add0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()'::__l9::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>,_void___cdecl_ParallelForTemplate<_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_>(wchar_t_const_*,int,int,_public:___cdecl__private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>::operator()(FRHICommandListBase_&)const_::_9_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::`2'::<lambda_2>::operator()'::`9'::<lambda_2>,`ParallelForTemplate<``FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::`2'::<lambda_2>::operator()'::`9'::<lambda_2>_>'::`2'::<lambda_1>,std::nullptr_t>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// ~FParallelExecutor @ 1450389b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FNaniteShadingPipelines::ComputeRelevance'::__l8::<lambda_1>,`ParallelForWithTaskContext<`FNaniteShadingPipelines::ComputeRelevance'::__l2::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,`FNaniteShadingPipelines::ComputeRelevance'::__l8::<lambda_1>_>'::__l5::<lambda_1>,`FNaniteShadingPipelines::ComputeRelevance'::__l2::FRelevanceContext>'
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
                    /* WARNING: Could not recover jumptable at 0x0001450389fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 145038a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<``Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,`ParallelForWithTaskContext<FRHIBatchedShaderParametersAllocator_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,``Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,``Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>'::__l5::<lambda_1>,FRHIBatchedShaderParametersAllocator_*>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    ___672e3032c85065d71f565b3a3b0c3b2b_(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145038a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 145042c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FNaniteShadingPipelines::ComputeRelevance'::__l8::<lambda_1>,`ParallelForWithTaskContext<`FNaniteShadingPipelines::ComputeRelevance'::__l2::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,`FNaniteShadingPipelines::ComputeRelevance'::__l8::<lambda_1>_>'::__l5::<lambda_1>,`FNaniteShadingPipelines::ComputeRelevance'::__l2::FRelevanceContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  longlong lVar17;
  char cVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  char local_148;
  char local_147;
  int local_144;
  int local_140;
  ulong64 local_138;
  undefined1 local_130 [4];
  int local_12c;
  int local_128;
  int local_124;
  uint local_120;
  FMemMark local_118;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>_>(TArray<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>(wchar_t_const_*,int,int,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>_>(TArray<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,int>_const_&)_::_2_::FParallelForData>
  local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  LARGE_INTEGER local_d0;
  longlong *local_c8;
  longlong *local_c0;
  FMaterialRelevance *local_b8;
  LARGE_INTEGER local_b0;
  code *local_a8;
  undefined1 *local_a0;
  FTaskTagScope local_98;
  FInheritedContextScope local_88;
  ulonglong local_68;
  int iVar26;
  undefined1 auVar28 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_d8 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_a0 = local_130;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar15);
  local_118.Mem = (FMemStackBase *)(pFVar16 + 2);
  local_118.Top = (local_118.Mem)->Top;
  local_118.SavedChunk = *(FTaggedMemory **)(pFVar16 + 4);
  local_118.bPopped = false;
  local_118.NextTopmostMark = *(FMemMark **)(pFVar16 + 5);
  pFVar16[5] = (FTlsAutoCleanup)&local_118;
  *(int *)(pFVar16 + 6) = *(int *)(pFVar16 + 6) + 1;
  lVar17 = *(longlong *)this;
  if (param_1) {
    local_140 = *(int *)(lVar17 + 0x54);
    local_138 = 0xffffffffffffffff;
  }
  else {
    uVar25 = *(uint *)((longlong)this + 8);
    uVar13 = 0;
    if ((int)uVar25 < *(int *)(lVar17 + 0x80)) {
      uVar13 = ~uVar25 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (local_158 = (longlong)(int)uVar25, local_150 = (longlong)*(int *)(lVar17 + 0x80),
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar17 + 0x78) + 0x40 + (longlong)(int)uVar25 * 0x48);
    TaskTrace::Started(uVar3);
    iVar22 = *(int *)(*(longlong *)this + 0x54);
    local_140 = iVar22;
    local_138 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar22) {
      lVar17 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar17 + 0x48);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar17 + 0x80) <= iVar24) {
        iVar24 = -1;
      }
      if (iVar24 != -1) {
        local_f0.Reference = *(FParallelForData **)this;
        if (local_f0.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_f0.Reference)->field_0x8 = *(int *)&(local_f0.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_144 = iVar22;
        LaunchTask(&local_f0,iVar24,true);
        local_140 = iVar22;
        local_138 = uVar3;
        if (local_f0.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_f0.Reference)->field_0x8;
          LOCK();
          iVar24 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar24 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_f0.Reference != (FParallelForData *)0x0)) {
            local_144 = iVar22;
            (*(code *)**(undefined8 **)local_f0.Reference)(local_f0.Reference,1);
            local_140 = iVar22;
            local_138 = uVar3;
          }
        }
      }
    }
  }
  iVar22 = local_140;
  bVar10 = CpuChannel->Enabled < 0;
  local_144 = local_140;
  if (bVar10) {
    local_148 = '\0';
  }
  else {
    local_148 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar6 = __real_42e312d000000010;
  dVar5 = __real_416312d000000000;
  cVar18 = !bVar10;
  local_e8 = -0x8000000000000000;
  local_e0 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_147 = '\0';
  }
  else {
    local_147 = '\x01';
    QueryPerformanceCounter(&local_d0);
    auVar27._8_8_ = extraout_XMM0_Qb;
    auVar27._0_8_ = extraout_XMM0_Qa;
    iVar24 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      iVar24 = 0;
    }
    auVar29._0_8_ =
         (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar5 + dVar6;
    auVar29._8_8_ = 0;
    auVar27 = roundpd(auVar27,auVar29,1);
    local_e8 = (longlong)auVar27._0_8_;
    auVar30._0_8_ = (double)iVar24 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar30._8_8_ = 0;
    auVar27 = roundpd(auVar27,auVar30,1);
    local_e0 = (longlong)auVar27._0_8_;
  }
  lVar17 = *(longlong *)this;
  local_c0 = *(longlong **)(lVar17 + 0x58);
  local_128 = *(int *)(lVar17 + 0x4c);
  local_124 = *(int *)(lVar17 + 0x50);
  local_c8 = *(longlong **)(lVar17 + 0x60);
  lVar17 = local_e8;
  lVar19 = local_e0;
  iVar24 = iVar22;
  iVar20 = local_128;
  iVar21 = local_124;
  do {
    do {
      plVar9 = local_c0;
      plVar8 = local_c8;
      plVar7 = local_d8;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar22 < iVar20) && (iVar24 + -1 <= iVar26)) && (iVar26 = iVar24 + -1, !param_1))
      goto LAB_145043150;
      uVar25 = iVar26 * iVar21;
      iVar24 = iVar20;
      if ((int)(uVar25 + iVar21) < iVar20) {
        iVar24 = uVar25 + iVar21;
      }
      local_12c = iVar24;
      local_120 = uVar25;
      if ((int)uVar25 < iVar24) {
        lVar23 = (longlong)(int)uVar25;
        do {
          uVar13 = *(uint *)(plVar7 + 1);
          iVar22 = (int)plVar9[1];
          uVar14 = 0;
          if ((int)uVar13 < iVar22) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_158 = (longlong)(int)uVar13, local_150 = (longlong)iVar22,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          local_b8 = (FMaterialRelevance *)(*plVar9 + (longlong)(int)uVar13 * 8);
          FTaskTagScope::FTaskTagScope(&local_98,EParallelRenderingThread);
          lVar17 = *plVar8;
          iVar22 = *(int *)(lVar17 + 0xb8);
          uVar13 = 0;
          if ((int)uVar25 < iVar22) {
            uVar13 = ~uVar25 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (local_158 = lVar23, local_150 = (longlong)iVar22,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          ComputeMaterialRelevance_Thread
                    (*(Type *)(plVar8 + 1),
                     (TRobinHoodHashMap<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                      *)(*plVar8 + 0x38),
                     (FHashElementId *)(*(longlong *)(lVar17 + 0xb0) + lVar23 * 4),local_b8);
          FTaskTagScope::~FTaskTagScope(&local_98);
          uVar25 = uVar25 + 1;
          lVar23 = lVar23 + 1;
          lVar17 = local_e8;
          lVar19 = local_e0;
          this = local_d8;
          iVar22 = local_140;
          cVar18 = local_148;
          iVar20 = local_128;
          iVar21 = local_124;
        } while ((int)uVar25 < iVar24);
      }
      iVar24 = local_144;
      if ((int)local_120 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar26 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar26 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar10 = true;
          goto LAB_14504315a;
        }
      }
      if (iVar20 <= local_12c) goto LAB_145043150;
    } while (local_147 == '\0');
    QueryPerformanceCounter(&local_b0);
    auVar28._8_8_ = extraout_XMM0_Qb_00;
    auVar28._0_8_ = extraout_XMM0_Qa_00;
    auVar31._0_8_ =
         (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar5 + dVar6;
    auVar31._8_8_ = 0;
    auVar27 = roundpd(auVar28,auVar31,1);
    iVar20 = local_128;
    iVar21 = local_124;
  } while ((longlong)auVar27._0_8_ - lVar17 <= lVar19);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_145043150:
  bVar10 = false;
LAB_14504315a:
  if (cVar18 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_138);
  }
  if (local_118.bPopped == false) {
    if (((local_118.Mem)->TopMark != &local_118) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    local_118.bPopped = true;
    (local_118.Mem)->NumMarks = (local_118.Mem)->NumMarks + -1;
    if (local_118.SavedChunk != (local_118.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_118.Mem,local_118.SavedChunk);
    }
    (local_118.Mem)->Top = local_118.Top;
    (local_118.Mem)->TopMark = local_118.NextTopmostMark;
    local_118.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar10;
}

// operator() @ 145043260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<``Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,`ParallelForWithTaskContext<FRHIBatchedShaderParametersAllocator_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,``Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,``Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>'::__l5::<lambda_1>,FRHIBatchedShaderParametersAllocator_*>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *this_00;
  longlong lVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  int iVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  char local_128;
  char local_127;
  int local_124;
  int local_120;
  ulong64 local_118;
  undefined1 local_110 [4];
  int local_10c;
  int local_108;
  int local_104;
  FMemMark local_100;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<FRHIBatchedShaderParametersAllocator_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_1>,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<FRHIBatchedShaderParametersAllocator_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,int,int,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_1>_const_&,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,FRHIBatchedShaderParametersAllocator_*>(wchar_t_const_*,int,int,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<FRHIBatchedShaderParametersAllocator_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_1>,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<FRHIBatchedShaderParametersAllocator_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,int,int,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_1>_const_&,_public:___cdecl__void___cdecl_Nanite::DispatchComputeShaderBundle(FRHIComputeCommandList_&,FNaniteShadingCommands_&,Nanite::FShadingConfig_const_&,TRefCountPtr<FRHIShaderBundle>_const_&,Nanite::FNaniteShadingPassIntermediates_const_&,unsigned_int,EParallelForFlags)_::_2_::<lambda_1>::operator()(FRHICommandDispatchComputeShaderBundle_&)const_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<FRHIBatchedShaderParametersAllocator_*,int>_const_&)_::_2_::FParallelForData>
  local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  void *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_c0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar18 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = local_110;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar18);
  local_100.Mem = (FMemStackBase *)(pFVar19 + 2);
  local_100.Top = (local_100.Mem)->Top;
  local_100.SavedChunk = *(FTaggedMemory **)(pFVar19 + 4);
  local_100.bPopped = false;
  local_100.NextTopmostMark = *(FMemMark **)(pFVar19 + 5);
  pFVar19[5] = (FTlsAutoCleanup)&local_100;
  *(int *)(pFVar19 + 6) = *(int *)(pFVar19 + 6) + 1;
  lVar22 = *(longlong *)this;
  if (param_1) {
    local_120 = *(int *)(lVar22 + 0x54);
    local_118 = 0xffffffffffffffff;
  }
  else {
    uVar17 = *(uint *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar17 < *(int *)(lVar22 + 0x80)) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_138 = (longlong)(int)uVar17, local_130 = (longlong)*(int *)(lVar22 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar22 + 0x78) + 0x40 + (longlong)(int)uVar17 * 0x48);
    TaskTrace::Started(uVar3);
    iVar28 = *(int *)(*(longlong *)this + 0x54);
    local_120 = iVar28;
    local_118 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar28) {
      lVar22 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar22 + 0x48);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar22 + 0x80) <= iVar26) {
        iVar26 = -1;
      }
      if (iVar26 != -1) {
        local_d8.Reference = *(FParallelForData **)this;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_d8.Reference)->field_0x8 = *(int *)&(local_d8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_124 = iVar28;
        ___672e3032c85065d71f565b3a3b0c3b2b_(&local_d8,iVar26,true);
        local_120 = iVar28;
        local_118 = uVar3;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_d8.Reference)->field_0x8;
          LOCK();
          iVar26 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar26 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_d8.Reference != (FParallelForData *)0x0)) {
            local_124 = iVar28;
            (*(code *)**(undefined8 **)local_d8.Reference)(local_d8.Reference,1);
            local_120 = iVar28;
            local_118 = uVar3;
          }
        }
      }
    }
  }
  iVar28 = local_120;
  bVar13 = CpuChannel->Enabled < 0;
  local_124 = local_120;
  if (bVar13) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar21 = !bVar13;
  local_d0 = -0x8000000000000000;
  local_c8 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    uVar17 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar17 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar29,auVar5,1);
    local_d0 = (longlong)auVar29._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar17 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar6,1);
    local_c8 = (longlong)auVar29._0_8_;
  }
  lVar22 = *(longlong *)this;
  local_10c = *(int *)(lVar22 + 0x4c);
  local_108 = *(int *)(lVar22 + 0x50);
  local_b0 = *(longlong **)(lVar22 + 0x58);
  local_a8 = *(void **)(lVar22 + 0x60);
  lVar22 = local_c8;
  lVar23 = local_d0;
  iVar26 = iVar28;
  iVar20 = local_10c;
  iVar24 = local_108;
  do {
    do {
      this_00 = local_a8;
      plVar11 = local_b0;
      plVar10 = local_c0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar28 < iVar20) && (iVar26 + -1 <= iVar25)) && (iVar25 = iVar26 + -1, !param_1))
      goto LAB_14504370c;
      iVar25 = iVar25 * iVar24;
      local_104 = iVar25;
      lVar12 = local_130;
      iVar28 = local_124;
      iVar26 = local_120;
      iVar27 = iVar20;
      if (iVar25 + iVar24 < iVar20) {
        iVar27 = iVar25 + iVar24;
      }
      for (; local_124 = iVar28, local_120 = iVar26, iVar25 < iVar27; iVar25 = iVar25 + 1) {
        uVar17 = *(uint *)(plVar10 + 1);
        iVar28 = (int)plVar11[1];
        local_130 = (longlong)iVar28;
        uVar16 = 0;
        if ((int)uVar17 < iVar28) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_138 = (longlong)(int)uVar17,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar12 = local_130, bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_130 = lVar12;
        ``Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::
        operator()(this_00,*(FRHIBatchedShaderParametersAllocator **)
                            (*plVar11 + (longlong)(int)uVar17 * 8),iVar25);
        lVar22 = local_c8;
        lVar23 = local_d0;
        this = local_c0;
        cVar21 = local_128;
        lVar12 = local_130;
        iVar28 = local_124;
        iVar26 = local_120;
        iVar20 = local_10c;
        iVar24 = local_108;
      }
      local_130 = lVar12;
      if (local_104 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_145043713;
        }
      }
      if (iVar20 <= iVar27) goto LAB_14504370c;
    } while (local_127 == '\0');
    QueryPerformanceCounter(&local_a0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar30,auVar7,1);
    iVar20 = local_10c;
    iVar24 = local_108;
  } while ((longlong)auVar29._0_8_ - lVar23 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_14504370c:
  bVar13 = false;
LAB_145043713:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_118);
  }
  if (local_100.bPopped == false) {
    if (((local_100.Mem)->TopMark != &local_100) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    local_100.bPopped = true;
    (local_100.Mem)->NumMarks = (local_100.Mem)->NumMarks + -1;
    if (local_100.SavedChunk != (local_100.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_100.Mem,local_100.SavedChunk);
    }
    (local_100.Mem)->Top = local_100.Top;
    (local_100.Mem)->TopMark = local_100.NextTopmostMark;
    local_100.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 14506c520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FNaniteShadingPipelines::ComputeRelevance'::__l8::<lambda_1>,`ParallelForWithTaskContext<`FNaniteShadingPipelines::ComputeRelevance'::__l2::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,`FNaniteShadingPipelines::ComputeRelevance'::__l8::<lambda_1>_>'::__l5::<lambda_1>,`FNaniteShadingPipelines::ComputeRelevance'::__l2::FRelevanceContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>_>(TArray<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>(wchar_t_const_*,int,int,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>_>(TArray<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int,_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_8_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FNaniteShadingPipelines::ComputeRelevance'::`8'::<lambda_1>,`ParallelForWithTaskContext<`FNaniteShadingPipelines::ComputeRelevance'::`2'::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,`FNaniteShadingPipelines::ComputeRelevance'::`8'::<lambda_1>_>'::`5'::<lambda_1>,`FNaniteShadingPipelines::ComputeRelevance'::`2'::FRelevanceContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// ~FParallelExecutor @ 145296340

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::AddStaticMeshes'::__l3::<lambda_1>,`ParallelForTemplate<`FPrimitiveSceneInfo::AddStaticMeshes'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x00014529638c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 1452963a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheNaniteMaterialBins'::__l11::<lambda_1>,`ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,`FPrimitiveSceneInfo::CacheNaniteMaterialBins'::__l11::<lambda_1>_>'::__l5::<lambda_1>,FNaniteMaterialListContext>'
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
                    /* WARNING: Could not recover jumptable at 0x0001452963ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 145296400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l8::<lambda_2>,`ParallelForTemplate<`FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l8::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x00014529644c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 145296460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_2>,`ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_1>,`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_2>_>'::__l5::<lambda_1>,FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x0001452964ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14529cdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::AddStaticMeshes'::__l3::<lambda_1>,`ParallelForTemplate<`FPrimitiveSceneInfo::AddStaticMeshes'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  void *this_00;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  char local_108;
  int local_104;
  int local_100;
  ulong64 local_f8;
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  FMemMark local_e0;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>_>(int,_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>_>(int,_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  void *local_a0;
  LARGE_INTEGER local_98;
  code *local_90;
  undefined1 *local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  undefined1 auVar27 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_b0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_88 = local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar16);
  lVar21 = 0;
  local_e0.Mem = (FMemStackBase *)(pFVar17 + 2);
  local_e0.Top = (local_e0.Mem)->Top;
  local_e0.SavedChunk = *(FTaggedMemory **)(pFVar17 + 4);
  local_e0.bPopped = false;
  local_e0.NextTopmostMark = *(FMemMark **)(pFVar17 + 5);
  pFVar17[5] = (FTlsAutoCleanup)&local_e0;
  *(int *)(pFVar17 + 6) = *(int *)(pFVar17 + 6) + 1;
  lVar20 = *(longlong *)this;
  if (param_1) {
    local_100 = *(int *)(lVar20 + 0x54);
    local_f8 = 0xffffffffffffffff;
  }
  else {
    uVar15 = *(uint *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar15 < *(int *)(lVar20 + 0x80)) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_118 = (longlong)(int)uVar15, local_110 = (longlong)*(int *)(lVar20 + 0x80),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar20 + 0x78) + 0x40 + (longlong)(int)uVar15 * 0x48);
    TaskTrace::Started(uVar3);
    iVar23 = *(int *)(*(longlong *)this + 0x54);
    local_100 = iVar23;
    local_f8 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar23) {
      lVar20 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar20 + 0x48);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar20 + 0x80) <= iVar18) {
        iVar18 = -1;
      }
      if (iVar18 != -1) {
        local_b8.Reference = *(FParallelForData **)this;
        if (local_b8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_b8.Reference)->field_0x8 = *(int *)&(local_b8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_104 = iVar23;
        LaunchTask(&local_b8,iVar18,true);
        local_100 = iVar23;
        local_f8 = uVar3;
        if (local_b8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_b8.Reference)->field_0x8;
          LOCK();
          iVar18 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar18 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_b8.Reference != (FParallelForData *)0x0)) {
            local_104 = iVar23;
            (*(code *)**(undefined8 **)local_b8.Reference)(local_b8.Reference,1);
            local_100 = iVar23;
            local_f8 = uVar3;
          }
        }
      }
    }
  }
  iVar23 = local_100;
  bVar12 = -1 < CpuChannel->Enabled;
  local_104 = local_100;
  if (bVar12) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar11 = __real_42e312d000000010;
  dVar10 = __real_416312d000000000;
  lVar20 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    QueryPerformanceCounter(&local_a8);
    auVar26._8_8_ = extraout_XMM0_Qb;
    auVar26._0_8_ = extraout_XMM0_Qa;
    uVar15 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar15 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar26 = roundpd(auVar26,auVar6,1);
    lVar20 = (longlong)auVar26._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)(int)uVar15 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar26 = roundpd(auVar26,auVar7,1);
    lVar21 = (longlong)auVar26._0_8_;
  }
  lVar4 = *(longlong *)this;
  local_a0 = *(void **)(lVar4 + 0x60);
  iVar18 = *(int *)(lVar4 + 0x4c);
  local_ec = *(int *)(lVar4 + 0x50);
  local_e8 = iVar18;
  iVar22 = local_ec;
  do {
    do {
      this_00 = local_a0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar23 < iVar18) && (local_100 + -1 <= iVar25)) && (iVar25 = local_100 + -1, !param_1))
      goto LAB_14529d1e7;
      iVar25 = iVar25 * iVar22;
      iVar9 = iVar25;
      iVar23 = local_104;
      this = local_b0;
      iVar24 = iVar18;
      if (iVar25 + iVar22 < iVar18) {
        iVar24 = iVar25 + iVar22;
      }
      for (; local_104 = iVar23, local_b0 = this, iVar9 < iVar24; iVar9 = iVar9 + 1) {
        `FPrimitiveSceneInfo::AddStaticMeshes'::__l3::<lambda_1>::operator()(this_00,iVar9);
        iVar18 = local_e8;
        iVar23 = local_104;
        this = local_b0;
        iVar22 = local_ec;
      }
      if (iVar25 < iVar18) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar19 = true;
          goto LAB_14529d1ed;
        }
      }
      if (iVar18 <= iVar24) goto LAB_14529d1e7;
    } while (local_108 == '\0');
    QueryPerformanceCounter(&local_98);
    auVar27._8_8_ = extraout_XMM0_Qb_00;
    auVar27._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar26 = roundpd(auVar27,auVar8,1);
    iVar22 = local_ec;
  } while ((longlong)auVar26._0_8_ - lVar20 <= lVar21);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_14529d1e7:
  bVar19 = false;
LAB_14529d1ed:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_f8);
  }
  if (local_e0.bPopped == false) {
    if (((local_e0.Mem)->TopMark != &local_e0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_e0.bPopped = true;
    (local_e0.Mem)->NumMarks = (local_e0.Mem)->NumMarks + -1;
    if (local_e0.SavedChunk != (local_e0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_e0.Mem,local_e0.SavedChunk);
    }
    (local_e0.Mem)->Top = local_e0.Top;
    (local_e0.Mem)->TopMark = local_e0.NextTopmostMark;
    local_e0.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar19;
}

// operator() @ 14529d2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheNaniteMaterialBins'::__l11::<lambda_1>,`ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,`FPrimitiveSceneInfo::CacheNaniteMaterialBins'::__l11::<lambda_1>_>'::__l5::<lambda_1>,FNaniteMaterialListContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  FPrimitiveSceneInfo **ppFVar19;
  longlong lVar20;
  char cVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  char local_138;
  char local_137;
  int local_134;
  int local_130;
  ulong64 local_128;
  undefined1 local_120 [4];
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  FMemMark local_108;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>_>(TArray<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,FNaniteMaterialListContext>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>_>(TArray<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<FNaniteMaterialListContext,int>_const_&)_::_2_::FParallelForData>
  local_e0;
  longlong local_d8;
  longlong local_d0;
  LARGE_INTEGER local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  LARGE_INTEGER local_b0;
  code *local_a8;
  undefined1 *local_a0;
  FTaskTagScope local_98;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar29 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_168;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar17 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_a0 = local_120;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar17);
  local_108.Mem = (FMemStackBase *)(pFVar18 + 2);
  local_108.Top = (local_108.Mem)->Top;
  local_108.SavedChunk = *(FTaggedMemory **)(pFVar18 + 4);
  local_108.bPopped = false;
  local_108.NextTopmostMark = *(FMemMark **)(pFVar18 + 5);
  pFVar18[5] = (FTlsAutoCleanup)&local_108;
  *(int *)(pFVar18 + 6) = *(int *)(pFVar18 + 6) + 1;
  lVar20 = *(longlong *)this;
  if (param_1) {
    local_130 = *(int *)(lVar20 + 0x54);
    local_128 = 0xffffffffffffffff;
  }
  else {
    uVar16 = *(uint *)((longlong)this + 8);
    uVar15 = 0;
    if ((int)uVar16 < *(int *)(lVar20 + 0x80)) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (local_148 = (longlong)(int)uVar16, local_140 = (longlong)*(int *)(lVar20 + 0x80),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar20 + 0x78) + 0x40 + (longlong)(int)uVar16 * 0x48);
    TaskTrace::Started(uVar3);
    iVar26 = *(int *)(*(longlong *)this + 0x54);
    local_130 = iVar26;
    local_128 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar26) {
      lVar20 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar20 + 0x48);
      iVar27 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar20 + 0x80) <= iVar27) {
        iVar27 = -1;
      }
      if (iVar27 != -1) {
        local_e0.Reference = *(FParallelForData **)this;
        if (local_e0.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_e0.Reference)->field_0x8 = *(int *)&(local_e0.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_134 = iVar26;
        LaunchTask(&local_e0,iVar27,true);
        local_130 = iVar26;
        local_128 = uVar3;
        if (local_e0.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_e0.Reference)->field_0x8;
          LOCK();
          iVar27 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar27 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_e0.Reference != (FParallelForData *)0x0)) {
            local_134 = iVar26;
            (*(code *)**(undefined8 **)local_e0.Reference)(local_e0.Reference,1);
            local_130 = iVar26;
            local_128 = uVar3;
          }
        }
      }
    }
  }
  iVar26 = local_130;
  bVar12 = CpuChannel->Enabled < 0;
  local_134 = local_130;
  if (bVar12) {
    local_138 = '\0';
  }
  else {
    local_138 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar21 = !bVar12;
  local_d8 = -0x8000000000000000;
  local_d0 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_137 = '\0';
  }
  else {
    local_137 = '\x01';
    QueryPerformanceCounter(&local_c8);
    auVar28._8_8_ = extraout_XMM0_Qb;
    auVar28._0_8_ = extraout_XMM0_Qa;
    uVar16 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar16 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar28 = roundpd(auVar28,auVar5,1);
    local_d8 = (longlong)auVar28._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar16 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar28 = roundpd(auVar28,auVar6,1);
    local_d0 = (longlong)auVar28._0_8_;
  }
  lVar20 = *(longlong *)this;
  local_c0 = *(longlong **)(lVar20 + 0x58);
  local_b8 = *(undefined8 **)(lVar20 + 0x60);
  local_114 = *(int *)(lVar20 + 0x4c);
  local_110 = *(int *)(lVar20 + 0x50);
  lVar20 = local_d8;
  lVar22 = local_d0;
  iVar27 = iVar26;
  iVar24 = local_110;
  iVar23 = local_114;
  do {
    do {
      puVar11 = local_b8;
      plVar10 = local_c0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar26 < iVar23) && (iVar27 + -1 <= iVar25)) && (iVar25 = iVar27 + -1, !param_1))
      goto LAB_14529d7d2;
      local_11c = iVar25 * iVar24;
      iVar27 = iVar23;
      if (local_11c + iVar24 < iVar23) {
        iVar27 = local_11c + iVar24;
      }
      local_118 = iVar27;
      local_10c = local_11c;
      if (local_11c < iVar27) {
        do {
          uVar16 = *(uint *)((longlong)this + 8);
          iVar26 = (int)plVar10[1];
          uVar15 = 0;
          if ((int)uVar16 < iVar26) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (local_148 = (longlong)(int)uVar16, local_140 = (longlong)iVar26,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          lVar20 = *plVar10;
          FTaskTagScope::FTaskTagScope(&local_98,EParallelRenderingThread);
          bVar12 = *(bool *)(puVar11 + 2);
          ppFVar19 = TArrayView<FPrimitiveSceneInfo_*,int>::operator[]
                               ((TArrayView<FPrimitiveSceneInfo_*,int> *)puVar11[1],local_11c);
          BuildNaniteMaterialBins
                    ((FScene *)*puVar11,*ppFVar19,bVar12,
                     (FNaniteMaterialListContext *)((longlong)(int)uVar16 * 0x30 + lVar20));
          FTaskTagScope::~FTaskTagScope(&local_98);
          local_11c = local_11c + 1;
          lVar20 = local_d8;
          lVar22 = local_d0;
          iVar26 = local_130;
          cVar21 = local_138;
          iVar24 = local_110;
          iVar23 = local_114;
        } while (local_11c < iVar27);
      }
      iVar27 = local_134;
      if (local_10c < iVar23) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar12 = true;
          goto LAB_14529d7d9;
        }
      }
      if (iVar23 <= local_118) goto LAB_14529d7d2;
    } while (local_137 == '\0');
    QueryPerformanceCounter(&local_b0);
    auVar29._8_8_ = extraout_XMM0_Qb_00;
    auVar29._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar28 = roundpd(auVar29,auVar7,1);
    iVar24 = local_110;
    iVar23 = local_114;
  } while ((longlong)auVar28._0_8_ - lVar20 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_14529d7d2:
  bVar12 = false;
LAB_14529d7d9:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_128);
  }
  if (local_108.bPopped == false) {
    if (((local_108.Mem)->TopMark != &local_108) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    local_108.bPopped = true;
    (local_108.Mem)->NumMarks = (local_108.Mem)->NumMarks + -1;
    if (local_108.SavedChunk != (local_108.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_108.Mem,local_108.SavedChunk);
    }
    (local_108.Mem)->Top = local_108.Top;
    (local_108.Mem)->TopMark = local_108.NextTopmostMark;
    local_108.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar12;
}

// operator() @ 14529d8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l8::<lambda_2>,`ParallelForTemplate<`FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l8::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  longlong lVar17;
  char cVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  char local_138;
  char local_137;
  int local_134;
  int local_130;
  ulong64 local_128;
  undefined1 local_120 [4];
  int local_11c;
  int local_118;
  int local_114;
  FMemMark local_110;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>,_void___cdecl_ParallelForTemplate<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>_>(int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>,_void___cdecl_ParallelForTemplate<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>_>(int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_e8;
  longlong local_e0;
  LARGE_INTEGER local_d8;
  longlong *local_d0;
  longlong *local_c8;
  void *local_c0;
  longlong *local_b8;
  LARGE_INTEGER local_b0;
  code *local_a8;
  undefined1 *local_a0;
  FTaskTagScope local_98;
  FInheritedContextScope local_88;
  ulonglong local_68;
  int iVar28;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_b8 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_a0 = local_120;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar15);
  lVar19 = 0;
  local_110.Mem = (FMemStackBase *)(pFVar16 + 2);
  local_110.Top = (local_110.Mem)->Top;
  local_110.SavedChunk = *(FTaggedMemory **)(pFVar16 + 4);
  local_110.bPopped = false;
  local_110.NextTopmostMark = *(FMemMark **)(pFVar16 + 5);
  pFVar16[5] = (FTlsAutoCleanup)&local_110;
  *(int *)(pFVar16 + 6) = *(int *)(pFVar16 + 6) + 1;
  lVar17 = *(longlong *)this;
  if (param_1) {
    local_130 = *(int *)(lVar17 + 0x54);
    local_128 = 0xffffffffffffffff;
  }
  else {
    uVar27 = *(uint *)((longlong)this + 8);
    uVar26 = 0;
    if ((int)uVar27 < *(int *)(lVar17 + 0x80)) {
      uVar26 = ~uVar27 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (local_148 = (longlong)(int)uVar27, local_140 = (longlong)*(int *)(lVar17 + 0x80),
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar17 + 0x78) + 0x40 + (longlong)(int)uVar27 * 0x48);
    TaskTrace::Started(uVar3);
    iVar25 = *(int *)(*(longlong *)this + 0x54);
    local_130 = iVar25;
    local_128 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar25) {
      lVar17 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar17 + 0x48);
      iVar23 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar17 + 0x80) <= iVar23) {
        iVar23 = -1;
      }
      if (iVar23 != -1) {
        local_e8.Reference = *(FParallelForData **)this;
        if (local_e8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_e8.Reference)->field_0x8 = *(int *)&(local_e8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_134 = iVar25;
        LaunchTask(&local_e8,iVar23,true);
        local_130 = iVar25;
        local_128 = uVar3;
        if (local_e8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_e8.Reference)->field_0x8;
          LOCK();
          iVar23 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar23 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_e8.Reference != (FParallelForData *)0x0)) {
            local_134 = iVar25;
            (*(code *)**(undefined8 **)local_e8.Reference)(local_e8.Reference,1);
            local_130 = iVar25;
            local_128 = uVar3;
          }
        }
      }
    }
  }
  iVar25 = local_130;
  bVar11 = CpuChannel->Enabled < 0;
  local_134 = local_130;
  if (bVar11) {
    local_138 = '\0';
  }
  else {
    local_138 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar18 = !bVar11;
  local_e0 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_137 = '\0';
  }
  else {
    local_137 = '\x01';
    QueryPerformanceCounter(&local_d8);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    uVar27 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar27 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar29,auVar5,1);
    local_e0 = (longlong)auVar29._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar27 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar6,1);
    lVar19 = (longlong)auVar29._0_8_;
  }
  lVar17 = *(longlong *)this;
  local_d0 = *(longlong **)(lVar17 + 0x60);
  local_118 = *(int *)(lVar17 + 0x4c);
  local_114 = *(int *)(lVar17 + 0x50);
  lVar17 = local_e0;
  iVar23 = iVar25;
  iVar20 = local_118;
  iVar21 = local_114;
  do {
    do {
      plVar10 = local_d0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar28 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar25 < iVar20) && (iVar23 + -1 <= iVar28)) && (iVar28 = iVar23 + -1, !param_1))
      goto LAB_14529ddad;
      uVar27 = iVar28 * iVar21;
      iVar25 = iVar20;
      if ((int)(uVar27 + iVar21) < iVar20) {
        iVar25 = uVar27 + iVar21;
      }
      local_11c = iVar25;
      if ((int)uVar27 < iVar25) {
        lVar22 = (longlong)(int)uVar27;
        lVar24 = lVar22 * 0x1f0;
        uVar26 = uVar27;
        do {
          FTaskTagScope::FTaskTagScope(&local_98,EParallelRenderingThread);
          local_c0 = (void *)plVar10[1];
          local_c8 = (longlong *)*plVar10;
          uVar14 = 0;
          if ((int)uVar26 < (int)local_c8[1]) {
            uVar14 = ~uVar26 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_148 = lVar22, local_140 = (longlong)(int)local_c8[1],
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          `FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l2::<lambda_1>::operator()
                    (local_c0,(FCachedPassMeshDrawListContext *)(*local_c8 + lVar24),uVar26);
          FTaskTagScope::~FTaskTagScope(&local_98);
          uVar26 = uVar26 + 1;
          lVar22 = lVar22 + 1;
          lVar24 = lVar24 + 0x1f0;
          lVar17 = local_e0;
          this = local_b8;
          cVar18 = local_138;
          iVar20 = local_118;
          iVar21 = local_114;
        } while ((int)uVar26 < iVar25);
      }
      iVar23 = local_130;
      iVar25 = local_134;
      if ((int)uVar27 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar28 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar11 = true;
          goto LAB_14529ddb4;
        }
      }
      if (iVar20 <= local_11c) goto LAB_14529ddad;
    } while (local_137 == '\0');
    QueryPerformanceCounter(&local_b0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar30,auVar7,1);
    iVar20 = local_118;
    iVar21 = local_114;
  } while ((longlong)auVar29._0_8_ - lVar17 <= lVar19);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_14529ddad:
  bVar11 = false;
LAB_14529ddb4:
  if (cVar18 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_128);
  }
  if (local_110.bPopped == false) {
    if (((local_110.Mem)->TopMark != &local_110) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    local_110.bPopped = true;
    (local_110.Mem)->NumMarks = (local_110.Mem)->NumMarks + -1;
    if (local_110.SavedChunk != (local_110.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_110.Mem,local_110.SavedChunk);
    }
    (local_110.Mem)->Top = local_110.Top;
    (local_110.Mem)->TopMark = local_110.NextTopmostMark;
    local_110.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar11;
}

// operator() @ 14529deb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_2>,`ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_1>,`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_2>_>'::__l5::<lambda_1>,FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>_>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *this_00;
  longlong lVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  int iVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  char local_128;
  char local_127;
  int local_124;
  int local_120;
  ulong64 local_118;
  undefined1 local_110 [4];
  int local_10c;
  int local_108;
  int local_104;
  FMemMark local_100;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_1>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>_>(wchar_t_const_*,TArray<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>_&,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_1>_const_&,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>_>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_1>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>_>(wchar_t_const_*,TArray<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>_&,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_1>_const_&,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,int>_const_&)_::_2_::FParallelForData>
  local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  void *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_c0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar18 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = local_110;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar18);
  local_100.Mem = (FMemStackBase *)(pFVar19 + 2);
  local_100.Top = (local_100.Mem)->Top;
  local_100.SavedChunk = *(FTaggedMemory **)(pFVar19 + 4);
  local_100.bPopped = false;
  local_100.NextTopmostMark = *(FMemMark **)(pFVar19 + 5);
  pFVar19[5] = (FTlsAutoCleanup)&local_100;
  *(int *)(pFVar19 + 6) = *(int *)(pFVar19 + 6) + 1;
  lVar22 = *(longlong *)this;
  if (param_1) {
    local_120 = *(int *)(lVar22 + 0x54);
    local_118 = 0xffffffffffffffff;
  }
  else {
    uVar17 = *(uint *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar17 < *(int *)(lVar22 + 0x80)) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_138 = (longlong)(int)uVar17, local_130 = (longlong)*(int *)(lVar22 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar22 + 0x78) + 0x40 + (longlong)(int)uVar17 * 0x48);
    TaskTrace::Started(uVar3);
    iVar28 = *(int *)(*(longlong *)this + 0x54);
    local_120 = iVar28;
    local_118 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar28) {
      lVar22 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar22 + 0x48);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar22 + 0x80) <= iVar26) {
        iVar26 = -1;
      }
      if (iVar26 != -1) {
        local_d8.Reference = *(FParallelForData **)this;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_d8.Reference)->field_0x8 = *(int *)&(local_d8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_124 = iVar28;
        LaunchTask(&local_d8,iVar26,true);
        local_120 = iVar28;
        local_118 = uVar3;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_d8.Reference)->field_0x8;
          LOCK();
          iVar26 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar26 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_d8.Reference != (FParallelForData *)0x0)) {
            local_124 = iVar28;
            (*(code *)**(undefined8 **)local_d8.Reference)(local_d8.Reference,1);
            local_120 = iVar28;
            local_118 = uVar3;
          }
        }
      }
    }
  }
  iVar28 = local_120;
  bVar13 = CpuChannel->Enabled < 0;
  local_124 = local_120;
  if (bVar13) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar21 = !bVar13;
  local_d0 = -0x8000000000000000;
  local_c8 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    uVar17 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar17 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar29,auVar5,1);
    local_d0 = (longlong)auVar29._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar17 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar6,1);
    local_c8 = (longlong)auVar29._0_8_;
  }
  lVar22 = *(longlong *)this;
  local_10c = *(int *)(lVar22 + 0x4c);
  local_108 = *(int *)(lVar22 + 0x50);
  local_b0 = *(longlong **)(lVar22 + 0x58);
  local_a8 = *(void **)(lVar22 + 0x60);
  lVar22 = local_c8;
  lVar23 = local_d0;
  iVar26 = iVar28;
  iVar20 = local_10c;
  iVar24 = local_108;
  do {
    do {
      this_00 = local_a8;
      plVar11 = local_b0;
      plVar10 = local_c0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar28 < iVar20) && (iVar26 + -1 <= iVar25)) && (iVar25 = iVar26 + -1, !param_1))
      goto LAB_14529e35c;
      iVar25 = iVar25 * iVar24;
      local_104 = iVar25;
      lVar12 = local_130;
      iVar28 = local_124;
      iVar26 = local_120;
      iVar27 = iVar20;
      if (iVar25 + iVar24 < iVar20) {
        iVar27 = iVar25 + iVar24;
      }
      for (; local_124 = iVar28, local_120 = iVar26, iVar25 < iVar27; iVar25 = iVar25 + 1) {
        uVar17 = *(uint *)(plVar10 + 1);
        iVar28 = (int)plVar11[1];
        local_130 = (longlong)iVar28;
        uVar16 = 0;
        if ((int)uVar17 < iVar28) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_138 = (longlong)(int)uVar17,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar12 = local_130, bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_130 = lVar12;
        `FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_2>::operator()
                  (this_00,(FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>
                            *)((longlong)(int)uVar17 * 0x58 + *plVar11),iVar25);
        lVar22 = local_c8;
        lVar23 = local_d0;
        this = local_c0;
        cVar21 = local_128;
        lVar12 = local_130;
        iVar28 = local_124;
        iVar26 = local_120;
        iVar20 = local_10c;
        iVar24 = local_108;
      }
      local_130 = lVar12;
      if (local_104 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_14529e363;
        }
      }
      if (iVar20 <= iVar27) goto LAB_14529e35c;
    } while (local_127 == '\0');
    QueryPerformanceCounter(&local_a0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar30,auVar7,1);
    iVar20 = local_10c;
    iVar24 = local_108;
  } while ((longlong)auVar29._0_8_ - lVar23 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_14529e35c:
  bVar13 = false;
LAB_14529e363:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_118);
  }
  if (local_100.bPopped == false) {
    if (((local_100.Mem)->TopMark != &local_100) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    local_100.bPopped = true;
    (local_100.Mem)->NumMarks = (local_100.Mem)->NumMarks + -1;
    if (local_100.SavedChunk != (local_100.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_100.Mem,local_100.SavedChunk);
    }
    (local_100.Mem)->Top = local_100.Top;
    (local_100.Mem)->TopMark = local_100.NextTopmostMark;
    local_100.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 1452ce770

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::AddStaticMeshes'::__l3::<lambda_1>,`ParallelForTemplate<`FPrimitiveSceneInfo::AddStaticMeshes'::__l3::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>_>(int,_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>,_void___cdecl_ParallelForTemplate<_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>_>(int,_public:_static_void___cdecl_FPrimitiveSceneInfo::AddStaticMeshes(FRHICommandListBase_&,FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>,bool)_::_3_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  ETaskPriority EVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < *(int *)&pFVar2->field_0x80) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = param_1->Reference->DebugName;
  EVar7 = param_1->Reference->Priority;
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&pFVar1->field_0x38 & 0x20) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FPrimitiveSceneInfo::AddStaticMeshes'::`3'::<lambda_1>,`ParallelForTemplate<`FPrimitiveSceneInfo::AddStaticMeshes'::`3'::<lambda_1>_>'::`2'::<lambda_1>,std::nullptr_t>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (EVar7 == Inherit) {
      EVar7 = Default;
    }
  }
  else {
    if (EVar7 == Inherit) {
      EVar7 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)EVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_28);
  uVar11 = *(ulonglong *)&pFVar1->field_0x38;
  do {
    LOCK();
    uVar12 = *(ulonglong *)&pFVar1->field_0x38;
    bVar6 = uVar11 == uVar12;
    if (bVar6) {
      *(ulonglong *)&pFVar1->field_0x38 = uVar11 | 2;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar6);
  if ((uVar12 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar1,GlobalQueuePreference,param_3);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// LaunchTask @ 1452ce9e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheNaniteMaterialBins'::__l11::<lambda_1>,`ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,`FPrimitiveSceneInfo::CacheNaniteMaterialBins'::__l11::<lambda_1>_>'::__l5::<lambda_1>,FNaniteMaterialListContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>_>(TArray<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,FNaniteMaterialListContext>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>_>(TArray<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheNaniteMaterialBins(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_11_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<FNaniteMaterialListContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  ETaskPriority EVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < *(int *)&pFVar2->field_0x80) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = param_1->Reference->DebugName;
  EVar7 = param_1->Reference->Priority;
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&pFVar1->field_0x38 & 0x20) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FPrimitiveSceneInfo::CacheNaniteMaterialBins'::`11'::<lambda_1>,`ParallelForWithTaskContext<FNaniteMaterialListContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,`FPrimitiveSceneInfo::CacheNaniteMaterialBins'::`11'::<lambda_1>_>'::`5'::<lambda_1>,FNaniteMaterialListContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (EVar7 == Inherit) {
      EVar7 = Default;
    }
  }
  else {
    if (EVar7 == Inherit) {
      EVar7 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)EVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_28);
  uVar11 = *(ulonglong *)&pFVar1->field_0x38;
  do {
    LOCK();
    uVar12 = *(ulonglong *)&pFVar1->field_0x38;
    bVar6 = uVar11 == uVar12;
    if (bVar6) {
      *(ulonglong *)&pFVar1->field_0x38 = uVar11 | 2;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar6);
  if ((uVar12 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar1,GlobalQueuePreference,param_3);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// LaunchTask @ 1452cec50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l8::<lambda_2>,`ParallelForTemplate<`FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l8::<lambda_2>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>,_void___cdecl_ParallelForTemplate<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>_>(int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>,_void___cdecl_ParallelForTemplate<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>_>(int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheMeshDrawCommands(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>)_::_8_::<lambda_2>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FPrimitiveSceneInfo::CacheMeshDrawCommands'::`8'::<lambda_2>,`ParallelForTemplate<`FPrimitiveSceneInfo::CacheMeshDrawCommands'::`8'::<lambda_2>_>'::`2'::<lambda_1>,std::nullptr_t>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// LaunchTask @ 1452ceec0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_2>,`ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_1>,`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::__l18::<lambda_2>_>'::__l5::<lambda_1>,FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>_>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_1>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>_>(wchar_t_const_*,TArray<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>_&,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_1>_const_&,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>_>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_1>,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>_>(wchar_t_const_*,TArray<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>_&,int,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_1>_const_&,_private:_static_void___cdecl_FPrimitiveSceneInfo::CacheRayTracingPrimitives(FScene_*,TArrayView<FPrimitiveSceneInfo_*,int>_const_&)_::_18_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::`18'::<lambda_2>,`ParallelForWithTaskContext<FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::`18'::<lambda_1>,`FPrimitiveSceneInfo::CacheRayTracingPrimitives'::`18'::<lambda_2>_>'::`5'::<lambda_1>,FCacheRayTracingPrimitivesContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// ~FParallelExecutor @ 1452ffa30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`RayTracing::GatherRelevantStaticPrimitives'::__l2::<lambda_1>,`ParallelForWithTaskContext<`RayTracing::GatherRelevantStaticPrimitives'::__l2::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>,`RayTracing::GatherRelevantStaticPrimitives'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`RayTracing::GatherRelevantStaticPrimitives'::__l2::FRelevantStaticPrimitivesContext>'
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
                    /* WARNING: Could not recover jumptable at 0x0001452ffa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 1452ffa90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`RayTracing::GatherRelevantPrimitives'::__l5::<lambda_1>,`ParallelForWithTaskContext<`RayTracing::GatherRelevantPrimitives'::__l5::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>,`RayTracing::GatherRelevantPrimitives'::__l5::<lambda_1>_>'::__l5::<lambda_1>,`RayTracing::GatherRelevantPrimitives'::__l5::FGatherRelevantPrimitivesContext>'
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
                    /* WARNING: Could not recover jumptable at 0x0001452ffadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 1453055d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`RayTracing::GatherRelevantStaticPrimitives'::__l2::<lambda_1>,`ParallelForWithTaskContext<`RayTracing::GatherRelevantStaticPrimitives'::__l2::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>,`RayTracing::GatherRelevantStaticPrimitives'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`RayTracing::GatherRelevantStaticPrimitives'::__l2::FRelevantStaticPrimitivesContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  longlong *plVar10;
  void *this_00;
  longlong lVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  int iVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  char local_128;
  char local_127;
  int local_124;
  int local_120;
  ulong64 local_118;
  undefined1 local_110 [4];
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  FMemMark local_f8;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>_>_&,int,int,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext>(wchar_t_const_*,int,int,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>_>_&,int,int,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,int>_const_&)_::_2_::FParallelForData>
  local_d0;
  longlong local_c8;
  longlong local_c0;
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  void *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
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
  lVar22 = *(longlong *)this;
  if (param_1) {
    local_120 = *(int *)(lVar22 + 0x54);
    local_118 = 0xffffffffffffffff;
  }
  else {
    uVar16 = *(uint *)((longlong)this + 8);
    uVar15 = 0;
    if ((int)uVar16 < *(int *)(lVar22 + 0x80)) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (local_138 = (longlong)(int)uVar16, local_130 = (longlong)*(int *)(lVar22 + 0x80),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar22 + 0x78) + 0x40 + (longlong)(int)uVar16 * 0x48);
    TaskTrace::Started(uVar3);
    iVar27 = *(int *)(*(longlong *)this + 0x54);
    local_120 = iVar27;
    local_118 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar27) {
      lVar22 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar22 + 0x48);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar22 + 0x80) <= iVar26) {
        iVar26 = -1;
      }
      if (iVar26 != -1) {
        local_d0.Reference = *(FParallelForData **)this;
        if (local_d0.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_d0.Reference)->field_0x8 = *(int *)&(local_d0.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_124 = iVar27;
        LaunchTask(&local_d0,iVar26,true);
        local_120 = iVar27;
        local_118 = uVar3;
        if (local_d0.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_d0.Reference)->field_0x8;
          LOCK();
          iVar26 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar26 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_d0.Reference != (FParallelForData *)0x0)) {
            local_124 = iVar27;
            (*(code *)**(undefined8 **)local_d0.Reference)(local_d0.Reference,1);
            local_120 = iVar27;
            local_118 = uVar3;
          }
        }
      }
    }
  }
  iVar27 = local_120;
  bVar12 = CpuChannel->Enabled < 0;
  local_124 = local_120;
  if (bVar12) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar21 = !bVar12;
  local_c8 = -0x8000000000000000;
  local_c0 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    uVar16 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar16 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar29,auVar5,1);
    local_c8 = (longlong)auVar29._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar16 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar6,1);
    local_c0 = (longlong)auVar29._0_8_;
  }
  lVar22 = *(longlong *)this;
  local_108 = *(int *)(lVar22 + 0x4c);
  local_104 = *(int *)(lVar22 + 0x50);
  local_b0 = *(longlong **)(lVar22 + 0x58);
  local_a8 = *(void **)(lVar22 + 0x60);
  lVar22 = local_c0;
  lVar23 = local_c8;
  iVar26 = iVar27;
  iVar24 = local_108;
  iVar25 = local_104;
  do {
    do {
      this_00 = local_a8;
      plVar10 = local_b0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar28 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar27 < iVar24) && (iVar26 + -1 <= iVar28)) && (iVar28 = iVar26 + -1, !param_1))
      goto LAB_145305a82;
      iVar28 = iVar28 * iVar25;
      iVar17 = iVar28 + iVar25;
      local_100 = iVar28;
      lVar11 = local_130;
      iVar26 = local_124;
      local_10c = iVar24;
      iVar20 = iVar24;
      if (iVar17 < iVar24) {
        local_10c = iVar17;
        iVar20 = iVar17;
      }
      for (; local_124 = iVar26, iVar28 < iVar20; iVar28 = iVar28 + 1) {
        uVar16 = *(uint *)((longlong)this + 8);
        iVar27 = (int)plVar10[1];
        local_130 = (longlong)iVar27;
        uVar15 = 0;
        if ((int)uVar16 < iVar27) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (local_138 = (longlong)(int)uVar16,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar11 = local_130, bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        local_130 = lVar11;
        `RayTracing::GatherRelevantStaticPrimitives'::__l2::<lambda_1>::operator()
                  (this_00,(FRelevantStaticPrimitivesContext *)
                           ((longlong)(int)uVar16 * 0xa0 + *plVar10),iVar28);
        lVar22 = local_c0;
        lVar23 = local_c8;
        iVar27 = local_120;
        cVar21 = local_128;
        lVar11 = local_130;
        iVar26 = local_124;
        iVar24 = local_108;
        iVar25 = local_104;
      }
      local_130 = lVar11;
      if (local_100 < iVar24) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar28 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar12 = true;
          goto LAB_145305a89;
        }
      }
      if (iVar24 <= local_10c) goto LAB_145305a82;
    } while (local_127 == '\0');
    QueryPerformanceCounter(&local_a0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar30,auVar7,1);
    iVar24 = local_108;
    iVar25 = local_104;
  } while ((longlong)auVar29._0_8_ - lVar23 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_145305a82:
  bVar12 = false;
LAB_145305a89:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_118);
  }
  if (local_f8.bPopped == false) {
    if (((local_f8.Mem)->TopMark != &local_f8) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
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
  return bVar12;
}

// operator() @ 145305b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`RayTracing::GatherRelevantPrimitives'::__l5::<lambda_1>,`ParallelForWithTaskContext<`RayTracing::GatherRelevantPrimitives'::__l5::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>,`RayTracing::GatherRelevantPrimitives'::__l5::<lambda_1>_>'::__l5::<lambda_1>,`RayTracing::GatherRelevantPrimitives'::__l5::FGatherRelevantPrimitivesContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *this_00;
  longlong lVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  int iVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  char local_128;
  char local_127;
  int local_124;
  int local_120;
  ulong64 local_118;
  undefined1 local_110 [4];
  int local_10c;
  int local_108;
  int local_104;
  FMemMark local_100;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>_>(wchar_t_const_*,TArray<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>_>_&,int,int,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext>(wchar_t_const_*,int,int,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>_>(wchar_t_const_*,TArray<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>_>_&,int,int,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,int>_const_&)_::_2_::FParallelForData>
  local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  void *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_c0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar18 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = local_110;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar18);
  local_100.Mem = (FMemStackBase *)(pFVar19 + 2);
  local_100.Top = (local_100.Mem)->Top;
  local_100.SavedChunk = *(FTaggedMemory **)(pFVar19 + 4);
  local_100.bPopped = false;
  local_100.NextTopmostMark = *(FMemMark **)(pFVar19 + 5);
  pFVar19[5] = (FTlsAutoCleanup)&local_100;
  *(int *)(pFVar19 + 6) = *(int *)(pFVar19 + 6) + 1;
  lVar22 = *(longlong *)this;
  if (param_1) {
    local_120 = *(int *)(lVar22 + 0x54);
    local_118 = 0xffffffffffffffff;
  }
  else {
    uVar17 = *(uint *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar17 < *(int *)(lVar22 + 0x80)) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_138 = (longlong)(int)uVar17, local_130 = (longlong)*(int *)(lVar22 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar22 + 0x78) + 0x40 + (longlong)(int)uVar17 * 0x48);
    TaskTrace::Started(uVar3);
    iVar28 = *(int *)(*(longlong *)this + 0x54);
    local_120 = iVar28;
    local_118 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar28) {
      lVar22 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar22 + 0x48);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar22 + 0x80) <= iVar26) {
        iVar26 = -1;
      }
      if (iVar26 != -1) {
        local_d8.Reference = *(FParallelForData **)this;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_d8.Reference)->field_0x8 = *(int *)&(local_d8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_124 = iVar28;
        LaunchTask(&local_d8,iVar26,true);
        local_120 = iVar28;
        local_118 = uVar3;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_d8.Reference)->field_0x8;
          LOCK();
          iVar26 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar26 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_d8.Reference != (FParallelForData *)0x0)) {
            local_124 = iVar28;
            (*(code *)**(undefined8 **)local_d8.Reference)(local_d8.Reference,1);
            local_120 = iVar28;
            local_118 = uVar3;
          }
        }
      }
    }
  }
  iVar28 = local_120;
  bVar13 = CpuChannel->Enabled < 0;
  local_124 = local_120;
  if (bVar13) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar21 = !bVar13;
  local_d0 = -0x8000000000000000;
  local_c8 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    uVar17 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar17 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar29,auVar5,1);
    local_d0 = (longlong)auVar29._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar17 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar6,1);
    local_c8 = (longlong)auVar29._0_8_;
  }
  lVar22 = *(longlong *)this;
  local_10c = *(int *)(lVar22 + 0x4c);
  local_108 = *(int *)(lVar22 + 0x50);
  local_b0 = *(longlong **)(lVar22 + 0x58);
  local_a8 = *(void **)(lVar22 + 0x60);
  lVar22 = local_c8;
  lVar23 = local_d0;
  iVar26 = iVar28;
  iVar20 = local_10c;
  iVar24 = local_108;
  do {
    do {
      this_00 = local_a8;
      plVar11 = local_b0;
      plVar10 = local_c0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar28 < iVar20) && (iVar26 + -1 <= iVar25)) && (iVar25 = iVar26 + -1, !param_1))
      goto LAB_14530602f;
      iVar25 = iVar25 * iVar24;
      local_104 = iVar25;
      lVar12 = local_130;
      iVar28 = local_124;
      iVar26 = local_120;
      iVar27 = iVar20;
      if (iVar25 + iVar24 < iVar20) {
        iVar27 = iVar25 + iVar24;
      }
      for (; local_124 = iVar28, local_120 = iVar26, iVar25 < iVar27; iVar25 = iVar25 + 1) {
        uVar17 = *(uint *)(plVar10 + 1);
        iVar28 = (int)plVar11[1];
        local_130 = (longlong)iVar28;
        uVar16 = 0;
        if ((int)uVar17 < iVar28) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_138 = (longlong)(int)uVar17,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar12 = local_130, bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_130 = lVar12;
        `RayTracing::GatherRelevantPrimitives'::__l5::<lambda_1>::operator()
                  (this_00,(FGatherRelevantPrimitivesContext *)
                           ((longlong)(int)uVar17 * 0xb0 + *plVar11),iVar25);
        lVar22 = local_c8;
        lVar23 = local_d0;
        this = local_c0;
        cVar21 = local_128;
        lVar12 = local_130;
        iVar28 = local_124;
        iVar26 = local_120;
        iVar20 = local_10c;
        iVar24 = local_108;
      }
      local_130 = lVar12;
      if (local_104 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_145306036;
        }
      }
      if (iVar20 <= iVar27) goto LAB_14530602f;
    } while (local_127 == '\0');
    QueryPerformanceCounter(&local_a0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar30,auVar7,1);
    iVar20 = local_10c;
    iVar24 = local_108;
  } while ((longlong)auVar29._0_8_ - lVar23 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_14530602f:
  bVar13 = false;
LAB_145306036:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_118);
  }
  if (local_100.bPopped == false) {
    if (((local_100.Mem)->TopMark != &local_100) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    local_100.bPopped = true;
    (local_100.Mem)->NumMarks = (local_100.Mem)->NumMarks + -1;
    if (local_100.SavedChunk != (local_100.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_100.Mem,local_100.SavedChunk);
    }
    (local_100.Mem)->Top = local_100.Top;
    (local_100.Mem)->TopMark = local_100.NextTopmostMark;
    local_100.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 14532fb70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`RayTracing::GatherRelevantStaticPrimitives'::__l2::<lambda_1>,`ParallelForWithTaskContext<`RayTracing::GatherRelevantStaticPrimitives'::__l2::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>,`RayTracing::GatherRelevantStaticPrimitives'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`RayTracing::GatherRelevantStaticPrimitives'::__l2::FRelevantStaticPrimitivesContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>_>_&,int,int,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext>(wchar_t_const_*,int,int,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>_>_&,int,int,_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_RayTracing::GatherRelevantStaticPrimitives(RayTracing::FGatherInstancesViewTaskData_&,float,int,bool)_::_2_::FRelevantStaticPrimitivesContext,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`RayTracing::GatherRelevantStaticPrimitives'::`2'::<lambda_1>,`ParallelForWithTaskContext<`RayTracing::GatherRelevantStaticPrimitives'::`2'::FRelevantStaticPrimitivesContext,TSizedDefaultAllocator<32>,`RayTracing::GatherRelevantStaticPrimitives'::`2'::<lambda_1>_>'::`5'::<lambda_1>,`RayTracing::GatherRelevantStaticPrimitives'::`2'::FRelevantStaticPrimitivesContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// LaunchTask @ 14532fde0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`RayTracing::GatherRelevantPrimitives'::__l5::<lambda_1>,`ParallelForWithTaskContext<`RayTracing::GatherRelevantPrimitives'::__l5::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>,`RayTracing::GatherRelevantPrimitives'::__l5::<lambda_1>_>'::__l5::<lambda_1>,`RayTracing::GatherRelevantPrimitives'::__l5::FGatherRelevantPrimitivesContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>_>(wchar_t_const_*,TArray<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>_>_&,int,int,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext>(wchar_t_const_*,int,int,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>_>(wchar_t_const_*,TArray<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>_>_&,int,int,_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_RayTracing::GatherRelevantPrimitives(RayTracing::FGatherInstancesViewTaskData_&,bool)_::_5_::FGatherRelevantPrimitivesContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  ETaskPriority EVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < *(int *)&pFVar2->field_0x80) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = param_1->Reference->DebugName;
  EVar7 = param_1->Reference->Priority;
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&pFVar1->field_0x38 & 0x20) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`RayTracing::GatherRelevantPrimitives'::`5'::<lambda_1>,`ParallelForWithTaskContext<`RayTracing::GatherRelevantPrimitives'::`5'::FGatherRelevantPrimitivesContext,TSizedDefaultAllocator<32>,`RayTracing::GatherRelevantPrimitives'::`5'::<lambda_1>_>'::`5'::<lambda_1>,`RayTracing::GatherRelevantPrimitives'::`5'::FGatherRelevantPrimitivesContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (EVar7 == Inherit) {
      EVar7 = Default;
    }
  }
  else {
    if (EVar7 == Inherit) {
      EVar7 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)EVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_28);
  uVar11 = *(ulonglong *)&pFVar1->field_0x38;
  do {
    LOCK();
    uVar12 = *(ulonglong *)&pFVar1->field_0x38;
    bVar6 = uVar11 == uVar12;
    if (bVar6) {
      *(ulonglong *)&pFVar1->field_0x38 = uVar11 | 2;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar6);
  if ((uVar12 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar1,GlobalQueuePreference,param_3);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 14560b280

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l2::<lambda_1>,`ParallelForTemplate<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l2::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x00014560b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 145610210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l2::<lambda_1>,`ParallelForTemplate<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l2::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArrayView<FProjectedShadowInfo_*_const,int> *this_00;
  uint uVar3;
  ulong64 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  FProjectedShadowInfo **ppFVar19;
  int iVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  char local_118;
  char local_117;
  int local_114;
  int local_110;
  ulong64 local_108;
  undefined1 local_100 [4];
  int local_fc;
  int local_f8;
  undefined8 *local_f0;
  FMemMark local_e8;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>,_void___cdecl_ParallelForTemplate<_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>_>(wchar_t_const_*,int,int,_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>,_void___cdecl_ParallelForTemplate<_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>_>(wchar_t_const_*,int,int,_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_c0;
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  code *local_a0;
  undefined1 *local_98;
  FTaskTagScope local_90;
  FInheritedContextScope local_80;
  ulonglong local_60;
  undefined1 auVar30 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_b0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar17 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_98 = local_100;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a0,puVar17);
  local_e8.Mem = (FMemStackBase *)(pFVar18 + 2);
  local_e8.Top = (local_e8.Mem)->Top;
  local_e8.SavedChunk = *(FTaggedMemory **)(pFVar18 + 4);
  local_e8.bPopped = false;
  local_e8.NextTopmostMark = *(FMemMark **)(pFVar18 + 5);
  pFVar18[5] = (FTlsAutoCleanup)&local_e8;
  *(int *)(pFVar18 + 6) = *(int *)(pFVar18 + 6) + 1;
  lVar22 = *(longlong *)this;
  if (param_1) {
    local_110 = *(int *)(lVar22 + 0x54);
    local_108 = 0xffffffffffffffff;
  }
  else {
    uVar3 = *(uint *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar3 < *(int *)(lVar22 + 0x80)) {
      uVar16 = ~uVar3 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_128 = (longlong)(int)uVar3, local_120 = (longlong)*(int *)(lVar22 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    uVar4 = *(ulong64 *)(*(longlong *)(lVar22 + 0x78) + 0x40 + (longlong)(int)uVar3 * 0x48);
    TaskTrace::Started(uVar4);
    iVar28 = *(int *)(*(longlong *)this + 0x54);
    local_110 = iVar28;
    local_108 = uVar4;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar28) {
      lVar22 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar22 + 0x48);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar22 + 0x80) <= iVar25) {
        iVar25 = -1;
      }
      if (iVar25 != -1) {
        local_c0.Reference = *(FParallelForData **)this;
        if (local_c0.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_c0.Reference)->field_0x8 = *(int *)&(local_c0.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_114 = iVar28;
        LaunchTask(&local_c0,iVar25,true);
        local_110 = iVar28;
        local_108 = uVar4;
        if (local_c0.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_c0.Reference)->field_0x8;
          LOCK();
          iVar25 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar25 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_c0.Reference != (FParallelForData *)0x0)) {
            local_114 = iVar28;
            (*(code *)**(undefined8 **)local_c0.Reference)(local_c0.Reference,1);
            local_110 = iVar28;
            local_108 = uVar4;
          }
        }
      }
    }
  }
  iVar28 = local_110;
  bVar13 = CpuChannel->Enabled < 0;
  local_114 = local_110;
  if (bVar13) {
    local_118 = '\0';
  }
  else {
    local_118 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar11 = __real_42e312d000000010;
  dVar10 = __real_416312d000000000;
  cVar21 = !bVar13;
  lVar22 = 0;
  lVar23 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_117 = '\0';
  }
  else {
    local_117 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    iVar25 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      iVar25 = 0;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar29 = roundpd(auVar29,auVar7,1);
    lVar23 = (longlong)auVar29._0_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)iVar25 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar8,1);
    lVar22 = (longlong)auVar29._0_8_;
  }
  lVar5 = *(longlong *)this;
  local_f0 = *(undefined8 **)(lVar5 + 0x60);
  local_fc = *(int *)(lVar5 + 0x4c);
  local_f8 = *(int *)(lVar5 + 0x50);
  iVar25 = iVar28;
  iVar20 = local_fc;
  iVar24 = local_f8;
  do {
    do {
      puVar12 = local_f0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar27 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar28 < iVar20) && (iVar25 + -1 <= iVar27)) && (iVar27 = iVar25 + -1, !param_1))
      goto LAB_145610669;
      iVar27 = iVar27 * iVar24;
      iVar26 = iVar20;
      if (iVar27 + iVar24 < iVar20) {
        iVar26 = iVar27 + iVar24;
      }
      if (iVar27 < iVar26) {
        this_00 = (TArrayView<FProjectedShadowInfo_*_const,int> *)(local_f0 + 1);
        iVar28 = iVar27;
        do {
          FTaskTagScope::FTaskTagScope(&local_90,EParallelRenderingThread);
          ppFVar19 = TArrayView<FProjectedShadowInfo_*_const,int>::operator[](this_00,iVar28);
          FProjectedShadowInfo::SetupShadowDepthView(*ppFVar19,(FSceneRenderer *)*puVar12);
          FTaskTagScope::~FTaskTagScope(&local_90);
          iVar28 = iVar28 + 1;
          this = local_b0;
          cVar21 = local_118;
          iVar20 = local_fc;
          iVar24 = local_f8;
        } while (iVar28 < iVar26);
      }
      iVar25 = local_110;
      iVar28 = local_114;
      if (iVar27 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar27 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar27 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_145610670;
        }
      }
      if (iVar20 <= iVar26) goto LAB_145610669;
    } while (local_117 == '\0');
    QueryPerformanceCounter(&local_a8);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar29 = roundpd(auVar30,auVar9,1);
    iVar20 = local_fc;
    iVar24 = local_f8;
  } while ((longlong)auVar29._0_8_ - lVar23 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_145610669:
  bVar13 = false;
LAB_145610670:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_108);
  }
  if (local_e8.bPopped == false) {
    if (((local_e8.Mem)->TopMark != &local_e8) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    local_e8.bPopped = true;
    (local_e8.Mem)->NumMarks = (local_e8.Mem)->NumMarks + -1;
    if (local_e8.SavedChunk != (local_e8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_e8.Mem,local_e8.SavedChunk);
    }
    (local_e8.Mem)->Top = local_e8.Top;
    (local_e8.Mem)->TopMark = local_e8.NextTopmostMark;
    local_e8.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 14563ab40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l2::<lambda_1>,`ParallelForTemplate<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l2::<lambda_1>_>'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>,_void___cdecl_ParallelForTemplate<_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>_>(wchar_t_const_*,int,int,_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>,_void___cdecl_ParallelForTemplate<_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>_>(wchar_t_const_*,int,int,_protected:_void___cdecl_FSceneRenderer::GatherShadowDynamicMeshElements(FDynamicShadowsTaskData_&)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FSceneRenderer::GatherShadowDynamicMeshElements'::`2'::<lambda_1>,`ParallelForTemplate<`FSceneRenderer::GatherShadowDynamicMeshElements'::`2'::<lambda_1>_>'::`2'::<lambda_1>,std::nullptr_t>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

