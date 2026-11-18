// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 9

// <lambda_invoker_cdecl> @ 14cedd5e0

void __cdecl
`FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FLinearColor *param_1,FPCGPoint *param_2)

{
  param_2->Density = 1.0;
  return;
}

// <lambda_invoker_cdecl> @ 14cedd5f0

void __cdecl
`FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FLinearColor *param_1,FPCGPoint *param_2)

{
  param_2->Density = (param_1->field0_0x0)._s_0.R;
  return;
}

// <lambda_invoker_cdecl> @ 14cedd600

void __cdecl
`FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (FLinearColor *param_1,FPCGPoint *param_2)

{
  param_2->Density = (param_1->field0_0x0)._s_0.G;
  return;
}

// <lambda_invoker_cdecl> @ 14cedd620

void __cdecl
`FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FLinearColor *param_1,FPCGPoint *param_2)

{
  param_2->Density = (param_1->field0_0x0)._s_0.B;
  return;
}

// <lambda_invoker_cdecl> @ 14cedd640

void __cdecl
`FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (FLinearColor *param_1,FPCGPoint *param_2)

{
  param_2->Density = (param_1->field0_0x0)._s_0.A;
  return;
}

// CanExecuteOnlyOnMainThread @ 14cee8b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMeshSamplerElement::CanExecuteOnlyOnMainThread
          (FPCGMeshSamplerElement *this,FPCGContext *param_1)

{
  return true;
}

// CreateContext @ 14ceea280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall FPCGMeshSamplerElement::CreateContext(FPCGMeshSamplerElement *this)

{
  FPCGLoadObjectsFromPathContext *this_00;
  
  this_00 = ::operator_new(0x3a0);
  if (this_00 != (FPCGLoadObjectsFromPathContext *)0x0) {
    memset(this_00,0,0x3a0);
    FPCGLoadObjectsFromPathContext::FPCGLoadObjectsFromPathContext(this_00);
    this_00->_padding_ = (longlong)&FPCGMeshSamplerContext::_vftable__for__FPCGContext__;
    this_00->_padding_ = (longlong)&FPCGMeshSamplerContext::_vftable__for__IPCGAsyncLoadingContext__
    ;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = 0;
    return (FPCGContext *)this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 14ceeda00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMeshSamplerElement::ExecuteInternal(FPCGMeshSamplerElement *this,FPCGContext *param_1)

{
  EPCGMeshSamplingMethod EVar1;
  EPCGColorChannel EVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  UPCGMeshSamplerSettings *pUVar7;
  uint uVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  <lambda_2> local_res10 [8];
  <lambda_2> local_res18 [8];
  <lambda_1> local_48;
  <lambda_1> local_30;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId719,"FPCGMeshSamplerElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
               ,0x2cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId719);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                         ,0x2d2,L""), bVar4)) {
    pcVar11 = (code *)swi(3);
    uVar5 = (*pcVar11)();
    return (bool)uVar5;
  }
  if ((*(char *)&param_1[1].DynamicDependencies.Elements != '\0') &&
     (param_1[1].AsyncState.TasksChunksStartEnd.ArrayNum != 0)) {
    pUVar7 = FPCGContext::GetInputSettings<UPCGMeshSamplerSettings>(param_1);
    if ((pUVar7 == (UPCGMeshSamplerSettings *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Settings",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                           ,0x2da,L""), bVar4)) {
      pcVar11 = (code *)swi(3);
      uVar5 = (*pcVar11)();
      return (bool)uVar5;
    }
    pcVar11 = `FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    if (pUVar7->bUseColorChannelAsDensity != false) {
      EVar2 = pUVar7->ColorChannelAsDensity;
      if (EVar2 == Red) {
        pcVar11 = `FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_2>::
                  <lambda_invoker_cdecl>;
      }
      else if (EVar2 == Green) {
        pcVar11 = `FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_3>::
                  <lambda_invoker_cdecl>;
      }
      else if (EVar2 == Blue) {
        pcVar11 = `FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_4>::
                  <lambda_invoker_cdecl>;
      }
      else if (EVar2 == Alpha) {
        pcVar11 = `FPCGMeshSamplerElement::ExecuteInternal'::__l2::<lambda_5>::
                  <lambda_invoker_cdecl>;
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                           ,0x2f9,L"");
        if (bVar4) {
          pcVar11 = (code *)swi(3);
          uVar5 = (*pcVar11)();
          return (bool)uVar5;
        }
      }
    }
    EVar1 = pUVar7->SamplingMethod;
    if (EVar1 == OnePointPerTriangle) {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId111,
                   "FPCGMeshSamplerElement::Execute::OnePointPerTriangle",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                   ,0x6f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId111);
      }
      iVar10 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
      local_30.Context = (FPCGMeshSamplerContext *)param_1;
      local_30.Settings = pUVar7;
      local_30.SetPointDensityPtr = pcVar11;
      if (iVar10 != 0) {
        iVar3 = *(int *)&param_1[1].bIsPaused;
        if (iVar10 + 1 == iVar3) {
          uVar8 = 0;
          if ((int)(iVar3 - 1U) < iVar3) {
            uVar8 = ~(iVar3 - 1U) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar11 = (code *)swi(3);
            uVar5 = (*pcVar11)();
            return (bool)uVar5;
          }
          bVar6 = FPCGAsync::
                  AsyncProcessingOneToOneRangeEx<_PCGMeshSampler::SampleOnePointPerTriangle_::__l2::<lambda_2>,_PCGMeshSampler::SampleOnePointPerTriangle_::__l2::<lambda_1>_&>
                            (&param_1->AsyncState,
                             *(int *)((param_1[1].CompiledTaskId - 4) +
                                     (longlong)*(int *)&param_1[1].bIsPaused * 4),local_res18,
                             &local_30,true,0x40,true);
LAB_14ceede34:
          if (bVar4) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          goto LAB_14ceedc5b;
        }
        iVar10 = 0xae;
        paVar9 = &bGEnsureHasExecuted<676982181238669486>;
LAB_14ceedc44:
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar9,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                           ,iVar10,
                           "Context->DynamicMeshes.Num() + 1 == Context->StartingIndices.Num()");
        if (bVar6) {
          pcVar11 = (code *)swi(3);
          uVar5 = (*pcVar11)();
          return (bool)uVar5;
        }
      }
    }
    else {
      if (EVar1 != OnePointPerVertex) {
        if (EVar1 == PoissonSampling) {
          bVar6 = PCGMeshSampler::PoissonSampling(pUVar7,(FPCGMeshSamplerContext *)param_1,pcVar11);
          goto LAB_14ceedc5b;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                           ,0x312,L"");
        if (bVar4) {
          pcVar11 = (code *)swi(3);
          uVar5 = (*pcVar11)();
          return (bool)uVar5;
        }
        goto LAB_14ceedc58;
      }
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId43,"PCGMeshSampler::SampleOnePointPerVertex",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                   ,0x2b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId43);
      }
      iVar10 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
      local_48.Settings = pUVar7;
      local_48.Context = (FPCGMeshSamplerContext *)param_1;
      local_48.SetPointDensityPtr = pcVar11;
      if (iVar10 != 0) {
        iVar3 = *(int *)&param_1[1].bIsPaused;
        if (iVar10 + 1 == iVar3) {
          uVar8 = 0;
          if ((int)(iVar3 - 1U) < iVar3) {
            uVar8 = ~(iVar3 - 1U) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar11 = (code *)swi(3);
            uVar5 = (*pcVar11)();
            return (bool)uVar5;
          }
          bVar6 = FPCGAsync::
                  AsyncProcessingOneToOneRangeEx<_PCGMeshSampler::SampleOnePointPerVertex_::__l2::<lambda_2>,_PCGMeshSampler::SampleOnePointPerVertex_::__l2::<lambda_1>_&>
                            (&param_1->AsyncState,
                             *(int *)((param_1[1].CompiledTaskId - 4) +
                                     (longlong)*(int *)&param_1[1].bIsPaused * 4),local_res10,
                             &local_48,true,0x40,true);
          goto LAB_14ceede34;
        }
        iVar10 = 99;
        paVar9 = &bGEnsureHasExecuted<676982181238669411>;
        goto LAB_14ceedc44;
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
LAB_14ceedc58:
  bVar6 = true;
LAB_14ceedc5b:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// PrepareDataInternal @ 14cef5290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGMeshSamplerElement::PrepareDataInternal(FPCGMeshSamplerElement *this,FPCGContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  ulong64 *this_00;
  bool *pbVar4;
  int iVar5;
  EGeometryScriptLODType EVar6;
  EPCGMeshSamplingMethod EVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FGeometryScriptDebugMessage *pFVar15;
  FScriptContainerElement *pFVar16;
  UPCGMetadata *this_01;
  code *pcVar17;
  FGeometryScriptMeshReadLOD FVar18;
  double dVar19;
  FGeometryScriptCopyMeshFromAssetOptions FVar20;
  FObjectPtr_u_0 FVar21;
  undefined1 uVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  UPCGMeshSamplerSettings *pUVar31;
  UObject *pUVar32;
  UPCGBasePointData *pUVar33;
  ulonglong uVar34;
  UStaticMesh *pUVar35;
  UClass *pUVar36;
  longlong lVar37;
  FString *pFVar38;
  FText *pFVar39;
  FText *pFVar40;
  FTextFormat *pFVar41;
  UDynamicMesh *pUVar42;
  FPCGMetadataDomain *pFVar43;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar44;
  FText *pFVar45;
  FPCGMetadataAttribute<int> *pFVar46;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar47;
  FPCGDataPtrWrapper *this_02;
  EMeshLODType EVar48;
  uint uVar49;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar50;
  char cVar51;
  FObjectPtr_u_0 *this_03;
  FScriptContainerElement *pFVar52;
  FObjectPtr_u_0 *pFVar53;
  FGeometryScriptCopyMeshFromAssetOptions FVar54;
  ForAnyElementType FVar55;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar56;
  TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *pTVar57;
  UStaticMesh *pUVar58;
  bool bVar59;
  undefined1 auStackY_ba8 [32];
  EGeometryScriptOutcomePins local_b54;
  char local_b53;
  bool local_b52 [2];
  FGeometryScriptCopyMeshFromAssetOptions local_b50;
  UPCGMeshSamplerSettings *local_b48;
  FObjectPtr_u_0 *local_b40;
  FGCScopeGuard local_b38;
  undefined1 local_b37;
  undefined1 local_b36;
  undefined1 local_b35;
  FGCScopeGuard local_b34;
  bool local_b33 [3];
  UPCGBasePointData *local_b30;
  bool local_b28 [8];
  FObjectPtr_u_0 *local_b20;
  UDynamicMesh *local_b18;
  FToMeshOptions local_b10;
  UDynamicMesh *local_b00;
  UDynamicMesh *local_af8;
  FName local_af0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_ae8;
  int local_ad8 [2];
  int local_ad0 [2];
  FObjectPtr_u_0 local_ac8;
  undefined4 local_ac0;
  int iStack_abc;
  uint local_ab8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_ab0;
  TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *local_aa0;
  uint local_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  bool local_a80;
  undefined3 uStack_a7f;
  undefined2 local_a78;
  FText local_a70;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a60;
  FSoftObjectPath local_a50;
  FSoftObjectPath local_a30;
  UPCGBasePointData *local_a10;
  UDynamicMesh *local_a08;
  FName local_a00;
  FName local_9f8;
  FName local_9f0;
  undefined1 local_9e8 [8];
  FText local_9e0;
  FName local_9c8;
  FPCGMetadataDomainID local_9c0;
  FName local_9a8;
  FPCGMetadataDomainID local_9a0;
  FName local_988;
  FPCGMetadataDomainID local_980;
  FName local_968;
  FPCGMetadataDomainID local_960;
  undefined8 local_948;
  FSoftObjectPath local_940;
  FGeometryScriptRemoveHiddenTrianglesOptions local_918;
  FText local_8f8;
  FText local_8e8;
  FString local_8d8;
  TVector2<double>_u_0 local_8c8;
  FString local_8b8;
  FString local_8a8;
  FText local_898;
  FText local_888;
  FString local_878;
  FString local_868;
  FText local_858;
  FText local_848;
  FString local_838;
  FString local_828;
  FText local_818;
  FText local_808;
  FString local_7f8;
  FString local_7e8;
  FText local_7d8;
  FText local_7c8;
  FText local_7b8;
  FText local_7a8;
  FText local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FText local_758;
  FText local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FGeometryScriptSolidifyOptions local_708;
  FText local_698;
  FTextFormat local_688;
  FText local_678;
  FText local_668;
  FTextFormat local_658;
  FText local_648;
  FText local_638;
  FTextFormat local_628;
  FTextFormat local_618;
  FText local_608;
  FTextFormat local_5f8;
  FTextFormat local_5e8;
  FText local_5d8;
  FTextFormat local_5c8;
  FText local_5b8;
  FText local_5a8;
  FText local_598;
  FText local_588;
  FDynamicMesh3 local_578;
  FDynamicMesh3 local_348;
  uint local_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined4 uStack_d7;
  undefined2 uStack_d3;
  undefined1 uStack_d1;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  uint7 uStack_bf;
  double local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_ba8;
  bVar59 = CpuChannel->Enabled < 0;
  if (bVar59) {
    local_b53 = '\0';
  }
  else {
    local_b53 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId456,"FPCGMeshSamplerElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
               ,0x1c8);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
  }
  cVar51 = !bVar59;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                          ,0x1cb,L""), bVar59)) {
    pcVar17 = (code *)swi(3);
    uVar22 = (*pcVar17)();
    return (bool)uVar22;
  }
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar59 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar59)) {
    bVar59 = true;
    goto LAB_14cef7720;
  }
  pUVar31 = FPCGContext::GetInputSettings<UPCGMeshSamplerSettings>(param_1);
  local_b48 = pUVar31;
  if ((pUVar31 == (UPCGMeshSamplerSettings *)0x0) &&
     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                          ,0x1d3,L""), bVar59)) {
    pcVar17 = (code *)swi(3);
    uVar22 = (*pcVar17)();
    return (bool)uVar22;
  }
  local_948 = *(undefined8 *)&(pUVar31->StaticMesh).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            (&local_940,(FSoftObjectPath *)&(pUVar31->StaticMesh).SoftObjectPtr.field_0x8);
  FVar55.Data = local_940.SubPathString.Data.AllocatorInstance.Data;
  if (*(char *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data == '\0') {
    bVar59 = pUVar31->bSynchronousLoad;
    local_a30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a30.SubPathString.Data.ArrayNum = local_940.SubPathString.Data.ArrayNum;
    local_a30.AssetPath.PackageName = local_940.AssetPath.PackageName;
    local_a30.AssetPath.AssetName = local_940.AssetPath.AssetName;
    if (local_940.SubPathString.Data.ArrayNum == 0) {
      local_a30.SubPathString.Data.ArrayMax = local_940.SubPathString.Data.ArrayNum;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_940.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_a30.SubPathString,local_940.SubPathString.Data.ArrayNum
                 ,&local_a30.SubPathString.Data.ArrayMax);
      memcpy(local_a30.SubPathString.Data.AllocatorInstance.Data,FVar55.Data,
             (longlong)local_940.SubPathString.Data.ArrayNum);
    }
    local_ae8.ArrayNum = 1;
    local_ae8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_ae8.AllocatorInstance,1,&local_ae8.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
              (local_ae8.AllocatorInstance.Data,&local_a30,1);
    bVar23 = FPCGLoadObjectsFromPathContext::InitializeAndRequestLoad
                       ((FPCGLoadObjectsFromPathContext *)param_1,PCGPinConstants::DefaultInputLabel
                        ,&pUVar31->InputSource,&local_ae8,false,true,bVar59);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_ae8.AllocatorInstance.Data,local_ae8.ArrayNum);
    if ((FSoftObjectPath *)local_ae8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_ae8.AllocatorInstance.Data);
    }
    if (local_a30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a30.SubPathString.Data.AllocatorInstance.Data);
    }
    bVar59 = false;
    if (bVar23) goto LAB_14cef551a;
  }
  else {
LAB_14cef551a:
    bVar59 = IsInGameThread();
    if (bVar59) {
      pUVar32 = GetTransientPackageAsObject();
      pUVar33 = (UPCGBasePointData *)NewObject<UGeometryScriptDebug>(pUVar32);
      local_b30 = pUVar33;
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar59 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4331830188552749348>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar59)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      FGCScopeGuard::FGCScopeGuard(&local_b38);
      pUVar32 = GetTransientPackageAsObject();
      pUVar33 = (UPCGBasePointData *)NewObject<UGeometryScriptDebug>(pUVar32);
      local_b30 = pUVar33;
      FGCScopeGuard::~FGCScopeGuard(&local_b38);
      if ((pUVar33 == (UPCGBasePointData *)0x0) &&
         (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0x12a,L""), bVar59)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      local_a10 = pUVar33;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar33 != (UPCGBasePointData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar33);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                (&param_1->AsyncObjects,(TObjectPtr<UObject> *)(local_9e8 + 4),(bool *)&local_a10);
    }
    local_ab8 = *(uint *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
    uVar34 = (ulonglong)(int)local_ab8;
    this_03 = (FObjectPtr_u_0 *)param_1[1].InputData.InactiveOutputPinBitmask;
    pFVar53 = this_03 + uVar34 * 5;
    local_b20 = pFVar53;
    while( true ) {
      local_b40 = this_03;
      if (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data != (int)uVar34) {
        local_b37 = 0;
        `TCheckedPointerIterator<TTuple<FSoftObjectPath,int,int>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_b37);
      }
      if (this_03 == pFVar53) break;
      pUVar35 = (UStaticMesh *)FSoftObjectPath::ResolveObject((FSoftObjectPath *)this_03);
      if (pUVar35 == (UStaticMesh *)0x0) {
        if (1 < (byte)LogPCG._0_1_) {
          pFVar38 = FSoftObjectPath::ToString((FSoftObjectPath *)local_b40,&local_8d8);
          pFVar39 = FText::FromString(&local_5d8,pFVar38);
          pFVar40 = FText::AsLocalizable_Advanced_LocText
                              (&local_8e8,L"PCGMeshSampler",L"ObjectDoesNotExist",
                               L"Provided object does not exist or could not be loaded: \'{0}\'");
          pFVar41 = FTextFormat::FTextFormat(&local_5c8,pFVar40,Default);
          pFVar39 = FText::Format<FText>(&local_8f8,pFVar41,pFVar39);
          FText::ToString(pFVar39);
          FPCGContext::GetTaskName(param_1,&local_718);
          FPCGContext::GetExecutionSourceName(param_1,&local_728);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_728.Data.AllocatorInstance.Data);
          }
          if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_718.Data.AllocatorInstance.Data);
          }
          if (local_8f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_8f8.TextData.Reference + 0x10))();
          }
          if (local_8e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_8e8.TextData.Reference + 0x10))();
          }
          if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14cef7707;
      }
      pFVar15 = (FGeometryScriptDebugMessage *)
                (((TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *)
                 &pUVar33->_padding_)->AllocatorInstance).Data;
      pTVar57 = (TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *)
                &pUVar33->_padding_;
      local_b54 = Success;
      iVar25 = (int)pUVar33->_padding_;
      piVar1 = (int *)((longlong)&pUVar33->_padding_ + 4);
      local_aa0 = pTVar57;
      if (*(int *)((longlong)&pUVar33->_padding_ + 4) < 0) {
        DestructItems<FGeometryScriptDebugMessage,int>(pFVar15,iVar25);
        *(int *)&pUVar33->_padding_ = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)pTVar57,0,piVar1);
        }
      }
      else {
        DestructItems<FGeometryScriptDebugMessage,int>(pFVar15,iVar25);
        *(int *)&pUVar33->_padding_ = 0;
      }
      pUVar36 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar25 = (int)pUVar36->_padding_;
      pUVar58 = (UStaticMesh *)0x0;
      if ((iVar25 <= *(int *)(pUVar35->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
          &pUVar36->_padding_)) {
        pUVar58 = pUVar35;
      }
      pUVar36 = Z_Construct_UClass_AActor_NoRegister();
      iVar25 = (int)pUVar36->_padding_;
      if ((iVar25 <= *(int *)(pUVar35->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
          &pUVar36->_padding_)) {
        pUVar58 = *(UStaticMesh **)&pUVar35->LightmapUVDensity;
      }
      if (pUVar58 == (UStaticMesh *)0x0) {
        pUVar36 = Z_Construct_UClass_UStaticMesh_NoRegister();
        pUVar31 = local_b48;
        iVar25 = (int)pUVar36->_padding_;
        if ((*(int *)(pUVar35->_padding_ + 0x38) < iVar25) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar25 * 8) !=
            &pUVar36->_padding_)) {
          if (1 < (byte)LogPCG._0_1_) {
            pFVar38 = FSoftObjectPath::ToString((FSoftObjectPath *)local_b40,&local_738);
            pFVar39 = FText::FromString(&local_608,pFVar38);
            pFVar40 = FText::AsLocalizable_Advanced_LocText
                                (&local_748,L"PCGMeshSampler",L"ObjectNotRightType",
                                 L"Provided object \'{0}\' is not a supported type. Only supports StaticMesh/Actor/SceneComponent."
                                );
            pFVar41 = FTextFormat::FTextFormat(&local_5e8,pFVar40,Default);
            pFVar39 = FText::Format<FText>(&local_758,pFVar41,pFVar39);
            FText::ToString(pFVar39);
            FPCGContext::GetTaskName(param_1,&local_768);
            FPCGContext::GetExecutionSourceName(param_1,&local_778);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_778.Data.AllocatorInstance.Data);
            }
            if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_768.Data.AllocatorInstance.Data);
            }
            if (local_758.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_758.TextData.Reference + 0x10))();
            }
            if (local_748.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_748.TextData.Reference + 0x10))();
            }
            pFVar53 = local_b20;
            if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_738.Data.AllocatorInstance.Data);
              pFVar53 = local_b20;
            }
          }
        }
        else {
          piVar1 = &param_1[1].OutputData.TaggedData.ArrayNum;
          local_ac0 = CONCAT31(local_ac0._1_3_,local_b48->RequestedLODType);
          iStack_abc = local_b48->RequestedLODIndex;
          local_af8 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_1);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_af8 != (UDynamicMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_af8);
          }
          if (((*(UDynamicMesh ***)piVar1 <= &local_af8) &&
              (&local_af8 < *(UDynamicMesh ***)piVar1 + *(int *)&param_1[1].OutputData.field_0x14))
             && (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar59)) {
            pcVar17 = (code *)swi(3);
            uVar22 = (*pcVar17)();
            return (bool)uVar22;
          }
          iVar27._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar27._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar27._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          puVar2 = &param_1[1].OutputData.field_0x14;
          if (iVar27 == *(int *)puVar2) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)piVar1,(int *)puVar2);
          }
          *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty = iVar27 + 1;
          *(UDynamicMesh **)(*(longlong *)piVar1 + (longlong)iVar27 * 8) = local_af8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_af8 != (UDynamicMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_af8);
          }
          iVar25 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
          local_b50.bApplyBuildSettings = true;
          local_b50.bRequestTangents = true;
          local_b50.bIgnoreRemoveDegenerates = true;
          local_b50.bUseBuildScale = true;
          uVar49 = iVar25 - 1;
          uVar26 = 0;
          if ((int)uVar49 < iVar25) {
            uVar26 = ~uVar49 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar59)) {
            pcVar17 = (code *)swi(3);
            uVar22 = (*pcVar17)();
            return (bool)uVar22;
          }
          pUVar33 = local_b30;
          iVar9._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar9._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar9._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          FVar18.LODIndex = iStack_abc;
          FVar18._0_4_ = local_ac0;
          UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMeshV2
                    (pUVar35,*(UDynamicMesh **)(*(longlong *)piVar1 + (longlong)iVar9 * 8 + -8),
                     local_b50,FVar18,&local_b54,false,(UGeometryScriptDebug *)local_b30);
          if (local_b54 != Success) goto LAB_14cef5ce2;
          pFVar53 = local_b20;
          if (pUVar31->bOutputMaterialInfo != false) {
            iVar25 = *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x48;
            puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4c;
            local_a60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a60.ArrayNum = 0;
            local_a60.ArrayMax = 0;
            if (iVar25 == *(int *)puVar2) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)
                                        &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.
                                         field_0x40,(int *)puVar2);
            }
            *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x48 = iVar25 + 1;
            pTVar56 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                      ((longlong)iVar25 * 0x10 +
                      *(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x40);
            (pTVar56->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            pTVar56->ArrayNum = 0;
            pTVar56->ArrayMax = 0;
            UGeometryScriptLibrary_StaticMeshFunctions::GetMaterialListFromStaticMesh
                      (pUVar35,pTVar56,&local_a60,(UGeometryScriptDebug *)0x0);
            if (local_a60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a60.AllocatorInstance.Data);
            }
            goto LAB_14cef5a26;
          }
        }
      }
      else {
        piVar3 = &param_1[1].OutputData.TaggedData.ArrayNum;
        local_b00 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_b00 != (UDynamicMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_b00);
        }
        if (((*(UDynamicMesh ***)piVar3 <= &local_b00) &&
            (&local_b00 < *(UDynamicMesh ***)piVar3 + *(int *)&param_1[1].OutputData.field_0x14)) &&
           (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar59)) {
          pcVar17 = (code *)swi(3);
          uVar22 = (*pcVar17)();
          return (bool)uVar22;
        }
        iVar24._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
        iVar24._1_1_ = param_1[1].OutputData.bCancelExecution;
        iVar24._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
        puVar2 = &param_1[1].OutputData.field_0x14;
        if (iVar24 == *(int *)puVar2) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)piVar3,(int *)puVar2);
        }
        *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty = iVar24 + 1;
        *(UDynamicMesh **)(*(longlong *)piVar3 + (longlong)iVar24 * 8) = local_b00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_b00 != (UDynamicMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_b00);
        }
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        FText::FText(&local_9e0);
        pUVar31 = local_b48;
        EVar48 = MaxAvailable;
        local_b10.bUseClosestLOD = true;
        local_b10.bWantNormals = true;
        local_b10.bWantTangents = true;
        local_b10.bWantInstanceColors = true;
        EVar6 = local_b48->RequestedLODType;
        if (EVar6 != MaxAvailable) {
          if (EVar6 == HiResSourceModel) {
            EVar48 = HiResSourceModel;
          }
          else if (EVar6 == SourceModel) {
            EVar48 = SourceModel;
          }
          else if (EVar6 == RenderData) {
            EVar48 = RenderData;
          }
        }
        local_b10._0_8_ = (ulonglong)(uint)local_b48->RequestedLODIndex << 0x20;
        local_b10.LODType = EVar48;
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_578);
        if (pUVar31->bOutputMaterialInfo == false) {
          pTVar56 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0;
        }
        else {
          iVar25 = *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x38;
          puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x3c;
          if (iVar25 == *(int *)puVar2) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)
                                      &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30
                                ,(int *)puVar2);
          }
          pTVar56 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                    ((longlong)iVar25 * 0x10 +
                    *(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30);
          *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x38 = iVar25 + 1;
          (pTVar56->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar56->ArrayNum = 0;
          pTVar56->ArrayMax = 0;
        }
        pTVar50 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0;
        if (pUVar31->bOutputMaterialInfo != false) {
          iVar25 = *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x48;
          puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4c;
          if (iVar25 == *(int *)puVar2) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)
                                      &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x40
                                ,(int *)puVar2);
          }
          pTVar50 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                    ((longlong)iVar25 * 0x10 +
                    *(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x40);
          *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x48 = iVar25 + 1;
          (pTVar50->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar50->ArrayNum = 0;
          pTVar50->ArrayMax = 0;
        }
        bVar59 = UE::Conversion::SceneComponentToDynamicMesh
                           ((USceneComponent *)pUVar58,&local_b10,false,&local_578,&local_a8,
                            &local_9e0,pTVar56,pTVar50);
        if (bVar59) {
          iVar25 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
          uVar49 = iVar25 - 1;
          uVar26 = 0;
          if ((int)uVar49 < iVar25) {
            uVar26 = ~uVar49 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar59)) {
            pcVar17 = (code *)swi(3);
            uVar22 = (*pcVar17)();
            return (bool)uVar22;
          }
          iVar8._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar8._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar8._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          UDynamicMesh::SetMesh
                    (*(UDynamicMesh **)(*(longlong *)piVar3 + (longlong)iVar8 * 8 + -8),&local_578);
          pTVar57 = local_aa0;
        }
        else {
          local_a78 = 0x100;
          local_b54 = bVar59;
          FText::FText(&local_a70);
          FText::operator=(&local_a70,&local_9e0);
          pTVar57 = local_aa0;
          iVar25 = local_aa0->ArrayNum;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_aa0->AllocatorInstance,piVar1);
          }
          lVar37 = (longlong)iVar25;
          pTVar57->ArrayNum = iVar25 + 1;
          pFVar16 = (pTVar57->AllocatorInstance).Data;
          pFVar16[lVar37 * 0x18] = local_a78._0_1_;
          pFVar16[lVar37 * 0x18 + 1] = local_a78._1_1_;
          FText::FText((FText *)(pFVar16 + lVar37 * 0x18 + 8),&local_a70);
          if (local_a70.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a70.TextData.Reference + 0x10))();
          }
        }
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_578);
        pUVar33 = local_b30;
        if (local_9e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_9e0.TextData.Reference + 0x10))();
          pUVar33 = local_b30;
        }
LAB_14cef5a26:
        pFVar53 = local_b20;
        if (local_b54 != Success) {
LAB_14cef5ce2:
          pFVar38 = FSoftObjectPath::ToString((FSoftObjectPath *)local_b40,&local_788);
          pFVar39 = FText::FromString(&local_598,pFVar38);
          pFVar40 = FText::AsLocalizable_Advanced_LocText
                              (&local_798,L"PCGMeshSampler",L"ObjectToDynamicMeshFailed",
                               L"Object to Dynamic mesh failed for object {0}.");
          pFVar41 = FTextFormat::FTextFormat(&local_618,pFVar40,Default);
          pFVar39 = FText::Format<FText>(&local_7a8,pFVar41,pFVar39);
          PCGLog::LogErrorOnGraph(pFVar39,(FPCGContext *)0x0);
          if (local_7a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_7a8.TextData.Reference + 0x10))();
          }
          if (local_798.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_798.TextData.Reference + 0x10))();
          }
          if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_788.Data.AllocatorInstance.Data);
          }
          if ((pUVar33 == (UPCGBasePointData *)0x0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Context && Debug",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Helpers\\PCGGeometryHelpers.cpp"
                                  ,0x28,L""), bVar59)) {
            pcVar17 = (code *)swi(3);
            uVar22 = (*pcVar17)();
            return (bool)uVar22;
          }
          iVar25 = pTVar57->ArrayNum;
          pFVar52 = (pTVar57->AllocatorInstance).Data;
          pFVar16 = pFVar52 + (longlong)iVar25 * 0x18;
          while( true ) {
            if ((int)pUVar33->_padding_ != iVar25) {
              local_b36 = 0;
              `TCheckedPointerIterator<FGeometryScriptDebugMessage_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&local_b36);
            }
            if (pFVar52 == pFVar16) break;
            if (*pFVar52 == (FScriptContainerElement)0x0) {
              PCGLog::LogErrorOnGraph((FText *)(pFVar52 + 8),param_1);
              pFVar52 = pFVar52 + 0x18;
            }
            else {
              PCGLog::LogWarningOnGraph((FText *)(pFVar52 + 8),param_1);
              pFVar52 = pFVar52 + 0x18;
            }
          }
          piVar1 = &param_1[1].OutputData.TaggedData.ArrayNum;
          iVar25 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
          uVar49 = iVar25 - 1;
          uVar26 = 0;
          if ((int)uVar49 < iVar25) {
            uVar26 = ~uVar49 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar59)) {
            pcVar17 = (code *)swi(3);
            uVar22 = (*pcVar17)();
            return (bool)uVar22;
          }
          iVar10._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar10._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar10._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          UObjectBaseUtility::MarkAsGarbage
                    (*(UObjectBaseUtility **)(*(longlong *)piVar1 + (longlong)iVar10 * 8 + -8));
          iVar11._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar11._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar11._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          uVar49 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty - 1;
          uVar26 = 0;
          if ((int)uVar49 < iVar11) {
            uVar26 = ~uVar49 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar59)) {
            pcVar17 = (code *)swi(3);
            uVar22 = (*pcVar17)();
            return (bool)uVar22;
          }
          iVar25 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar28 = (iVar25 - uVar49) + -1;
          if (1 < iVar28) {
            iVar28 = 1;
          }
          if (iVar28 != 0) {
            memmove((void *)(*(longlong *)piVar1 + (longlong)(int)uVar49 * 8),
                    (void *)(*(longlong *)piVar1 + (longlong)(iVar25 - iVar28) * 8),
                    (longlong)iVar28 << 3);
          }
          pbVar4 = &param_1[1].OutputData.bCancelExecutionOnEmpty;
          *(int *)pbVar4 = *(int *)pbVar4 + -1;
          iVar12._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar12._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar12._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)piVar1,iVar12,(int *)&param_1[1].OutputData.field_0x14
                    );
          pFVar53 = local_b20;
        }
      }
      uVar34 = (ulonglong)local_ab8;
      this_03 = local_b40 + 5;
      pUVar33 = local_b30;
    }
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_ab0,&PCGPinConstants::DefaultInputLabel);
    iVar25 = local_ab0.ArrayNum;
    local_b40 = (FObjectPtr_u_0 *)
                (local_ab0.AllocatorInstance.Data + (longlong)local_ab0.ArrayNum * 0x78);
    pFVar53 = local_b40;
    FVar55.Data = local_ab0.AllocatorInstance.Data;
    while( true ) {
      if (local_ab0.ArrayNum != iVar25) {
        local_b35 = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_b35);
      }
      if ((FObjectPtr_u_0 *)FVar55.Data == pFVar53) break;
      local_ac8 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar55.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cef6236:
        if (local_ac8.Handle == (UObject *)0x0) goto LAB_14cef64b4;
        pUVar36 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
        bVar59 = FObjectPtr::IsA((FObjectPtr *)&local_ac8,pUVar36);
        FVar21 = local_ac8;
        if ((!bVar59) || (local_ac8.Handle == (UObject *)0x0)) goto LAB_14cef64b4;
        piVar1 = &param_1[1].OutputData.TaggedData.ArrayNum;
        if (local_b48->bVoxelize == false) {
          iVar30._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar30._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar30._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          puVar2 = &param_1[1].OutputData.field_0x14;
          pUVar32 = *(UObject **)&local_ac8.Handle[3].field_0x20;
          if (iVar30 == *(int *)puVar2) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)piVar1,(int *)puVar2);
          }
          *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty = iVar30 + 1;
          *(UObject **)(*(longlong *)piVar1 + (longlong)iVar30 * 8) = pUVar32;
          pFVar53 = local_b40;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar32);
            pFVar53 = local_b40;
          }
          goto LAB_14cef64b4;
        }
        bVar59 = IsInGameThread();
        if (bVar59) {
          pUVar32 = GetTransientPackageAsObject();
          pUVar42 = NewObject<UDynamicMesh>(pUVar32);
        }
        else {
          if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
             (bVar59 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4331830188552749348>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                  ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar59)) {
            pcVar17 = (code *)swi(3);
            uVar22 = (*pcVar17)();
            return (bool)uVar22;
          }
          FGCScopeGuard::FGCScopeGuard(&local_b34);
          pUVar32 = GetTransientPackageAsObject();
          pUVar42 = NewObject<UDynamicMesh>(pUVar32);
          FGCScopeGuard::~FGCScopeGuard(&local_b34);
          if ((pUVar42 == (UDynamicMesh *)0x0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                  ,0x12a,L""), bVar59)) {
            pcVar17 = (code *)swi(3);
            uVar22 = (*pcVar17)();
            return (bool)uVar22;
          }
          local_a08 = pUVar42;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar42 != (UDynamicMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar42);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>
                    (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_9e8,(bool *)&local_a08);
        }
        local_b18 = pUVar42;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar42 != (UDynamicMesh *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar42);
        }
        if (((*(UDynamicMesh ***)piVar1 <= &local_b18) &&
            (&local_b18 < *(UDynamicMesh ***)piVar1 + *(int *)&param_1[1].OutputData.field_0x14)) &&
           (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar59)) {
          pcVar17 = (code *)swi(3);
          uVar22 = (*pcVar17)();
          return (bool)uVar22;
        }
        iVar29._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
        iVar29._1_1_ = param_1[1].OutputData.bCancelExecution;
        iVar29._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
        puVar2 = &param_1[1].OutputData.field_0x14;
        if (iVar29 == *(int *)puVar2) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)piVar1,(int *)puVar2);
        }
        *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty = iVar29 + 1;
        lVar37 = *(longlong *)piVar1;
        *(UDynamicMesh **)(lVar37 + (longlong)iVar29 * 8) = local_b18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_b18 != (UDynamicMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_b18);
        }
        pUVar42 = *(UDynamicMesh **)(lVar37 + (longlong)iVar29 * 8);
        UE::Geometry::FDynamicMesh3::FDynamicMesh3
                  (&local_348,*(FDynamicMesh3 **)(*(longlong *)&FVar21.Handle[3].field_0x20 + 0xb8))
        ;
        UDynamicMesh::SetMesh(pUVar42,&local_348);
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_348);
        FVar55.Data = FVar55.Data + 0x78;
        pFVar53 = local_b40;
      }
      else {
        if (local_ac8.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_ac8.Handle);
          goto LAB_14cef6236;
        }
LAB_14cef64b4:
        FVar55.Data = FVar55.Data + 0x78;
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_ab0.AllocatorInstance.Data,local_ab0.ArrayNum);
    cVar51 = local_b53;
    if ((FPCGTaggedData *)local_ab0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_ab0.AllocatorInstance.Data);
    }
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)local_b30);
    if (local_b48->SamplingMethod == OnePointPerTriangle) {
      uVar26 = *(uint *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
      pbVar4 = &param_1[1].bInputDataModified;
      iVar25 = *(int *)&param_1[1].AsyncState.EndTime;
      if (iVar25 < (int)uVar26) {
        iVar28 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,8,uVar26 - iVar25,(ForAnyElementType *)pbVar4,
                            (int *)&param_1[1].AsyncState,
                            (int *)((longlong)&param_1[1].AsyncState.EndTime + 4));
        DefaultConstructItems<FGeometryScriptIndexList,int>
                  ((void *)(*(longlong *)pbVar4 + (longlong)iVar28 * 0x18),uVar26 - iVar25);
      }
      else {
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        if ((int)uVar26 < iVar25) {
          iVar25 = iVar25 - uVar26;
          if (iVar25 < 0) {
            bVar59 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar59) {
              pcVar17 = (code *)swi(3);
              uVar22 = (*pcVar17)();
              return (bool)uVar22;
            }
          }
          else if (iVar25 == 0) goto LAB_14cef66d8;
          TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    ((TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *)pbVar4,uVar26,
                     iVar25);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(ForAnyElementType *)pbVar4,*(int *)&param_1[1].AsyncState.EndTime,
                     (int *)((longlong)&param_1[1].AsyncState.EndTime + 4));
        }
      }
LAB_14cef66d8:
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[1].CompiledTaskId,
                 *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty + 1,Default);
    }
    else if (local_b48->SamplingMethod == OnePointPerVertex) {
      iVar25._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
      iVar25._1_1_ = param_1[1].OutputData.bCancelExecution;
      iVar25._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
      TArray<FGeometryScriptVectorList,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<FGeometryScriptVectorList,TSizedDefaultAllocator<32>_> *)
                 &param_1[1].OutputData.DataCrcs,iVar25,Default);
      uVar26 = *(uint *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
      this_00 = &param_1[1].OutputData.InactiveOutputPinBitmask;
      iVar25 = param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex;
      if (iVar25 < (int)uVar26) {
        iVar28 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar26 - iVar25,(ForAnyElementType *)this_00,
                            (int *)&param_1[1].ExecutionSource,
                            &param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectSerialNumber);
        DefaultConstructItems<FGeometryScriptColorList,int>
                  ((void *)(*this_00 + (longlong)iVar28 * 0x10),uVar26 - iVar25);
      }
      else {
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        if ((int)uVar26 < iVar25) {
          iVar25 = iVar25 - uVar26;
          if (iVar25 < 0) {
            bVar59 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar59) {
              pcVar17 = (code *)swi(3);
              uVar22 = (*pcVar17)();
              return (bool)uVar22;
            }
          }
          else if (iVar25 == 0) goto LAB_14cef65e9;
          TArray<FGeometryScriptColorList,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    ((TArray<FGeometryScriptColorList,TSizedDefaultAllocator<32>_> *)this_00,uVar26,
                     iVar25);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)this_00,
                     param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex,
                     &param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectSerialNumber);
        }
      }
LAB_14cef65e9:
      iVar28._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
      iVar28._1_1_ = param_1[1].OutputData.bCancelExecution;
      iVar28._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
      TArray<FGeometryScriptVectorList,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<FGeometryScriptVectorList,TSizedDefaultAllocator<32>_> *)
                 &param_1[1].ExecutionSource.InterfaceInstance,iVar28,Default);
      goto LAB_14cef66d8;
    }
    dVar19 = __real_3ff0000000000000;
    local_b50.bApplyBuildSettings = false;
    local_b50.bRequestTangents = false;
    local_b50.bIgnoreRemoveDegenerates = false;
    local_b50.bUseBuildScale = false;
    iVar13._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
    iVar13._1_1_ = param_1[1].OutputData.bCancelExecution;
    iVar13._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
    if (0 < iVar13) {
      local_b40 = (FObjectPtr_u_0 *)0x0;
      do {
        pFVar53 = local_b40;
        pUVar31 = local_b48;
        FVar54 = local_b50;
        iVar14._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
        iVar14._1_1_ = param_1[1].OutputData.bCancelExecution;
        iVar14._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
        uVar49 = ~(uint)local_b50 >> 0x1f;
        uVar26 = 0;
        if ((int)local_b50 < iVar14) {
          uVar26 = uVar49;
        }
        if ((uVar26 == 0) &&
           (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar59)) {
          pcVar17 = (code *)swi(3);
          uVar22 = (*pcVar17)();
          return (bool)uVar22;
        }
        pUVar42 = *(UDynamicMesh **)
                   (*(longlong *)&param_1[1].OutputData.TaggedData.ArrayNum + (longlong)pFVar53 * 8)
        ;
        if (pUVar42 != (UDynamicMesh *)0x0) {
          if (pUVar31->bVoxelize != false) {
            local_708.GridParameters.GridCellSize = pUVar31->VoxelSize;
            local_118 = local_118 & 0xffffff00;
            uStack_d7 = 0;
            uStack_110 = 0x40;
            local_708.GridParameters._0_4_ = local_118;
            local_708.GridParameters.GridResolution = 0x40;
            local_708._12_4_ = uStack_10c;
            uStack_d3 = 0;
            uStack_d1 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0x3f000000;
            uStack_cc = CONCAT31(uStack_cc._1_3_,1);
            local_708.CustomBounds.IsValid = '\0';
            local_708.CustomBounds.Pad[0] = '\0';
            local_708.CustomBounds.Pad[1] = '\0';
            local_708.CustomBounds.Pad[2] = '\0';
            local_708.CustomBounds.Pad[3] = '\0';
            local_708.CustomBounds.Pad[4] = '\0';
            local_708.CustomBounds.Pad[5] = '\0';
            local_708.CustomBounds.Pad[6] = '\0';
            local_708._76_4_ = uStack_cc;
            local_708.WindingThreshold = 0.5;
            local_c8 = 0x3f800000;
            uStack_c4 = 3;
            local_708.ExtendBounds = 1.0;
            local_708.SurfaceSearchSteps = 3;
            local_708._88_8_ = (ulonglong)uStack_bf << 8;
            local_b8 = dVar19;
            local_108 = 0;
            uStack_100 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_708.CustomBounds.Min.field0_0x0._s_0.X = 0.0;
            local_708.CustomBounds.Min.field0_0x0._s_0.Y = 0.0;
            local_708.CustomBounds.Min.field0_0x0._s_0.Z = 0.0;
            local_708.CustomBounds.Max.field0_0x0._s_0.X = 0.0;
            local_708.CustomBounds.Max.field0_0x0._s_0.Y = 0.0;
            local_708.CustomBounds.Max.field0_0x0._s_0.Z = 0.0;
            local_708.ShellThickness = dVar19;
            fStack_114 = local_708.GridParameters.GridCellSize;
            UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify
                      (pUVar42,&local_708,(UGeometryScriptDebug *)0x0);
            if (pUVar31->bRemoveHiddenTriangles != false) {
              uStack_a8c = 0x3f000000;
              uStack_a88 = 0;
              uStack_a94 = 0;
              uStack_a90 = 0;
              local_a98 = local_a98 & 0xffffff00;
              local_918._0_8_ = ZEXT48(local_a98);
              local_918.ShrinkSelection = 0;
              local_918.WindingIsoValue = 0.5;
              uStack_a84 = 0x358637bd;
              local_918.RaysPerSample = 0;
              local_918.NormalOffset = 1e-06;
              local_a80 = true;
              local_918.bCompactResult = true;
              local_918._25_3_ = uStack_a7f;
              UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles
                        (pUVar42,&local_918,(UGeometryScriptDebug *)0x0);
            }
          }
          pUVar33 = FPCGContext::NewPointData_AnyThread(param_1);
          iVar25 = param_1[1].AsyncState.TasksChunksStartEnd.ArrayNum;
          piVar1 = &param_1[1].AsyncState.TasksChunksStartEnd.ArrayMax;
          local_b30 = pUVar33;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance,
                                piVar1);
          }
          param_1[1].AsyncState.TasksChunksStartEnd.ArrayNum = iVar25 + 1;
          *(UPCGBasePointData **)
           (param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data + (longlong)iVar25 * 8)
               = pUVar33;
          if (pUVar33 == (UPCGBasePointData *)0x0) {
LAB_14cef6954:
            pUVar33 = (UPCGBasePointData *)0x0;
          }
          else {
            pUVar36 = Z_Construct_UClass_UPCGPointData_NoRegister();
            iVar25 = (int)pUVar36->_padding_;
            if ((*(int *)(pUVar33->_padding_ + 0x38) < iVar25) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar33->_padding_ + 0x30) + (longlong)iVar25 * 8) !=
                &pUVar36->_padding_)) goto LAB_14cef6954;
          }
          iVar25 = param_1[1].AsyncState.AsyncCurrentWriteIndex;
          puVar2 = &param_1[1].AsyncState.field_0x14;
          if (iVar25 == *(int *)puVar2) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&param_1[1].AsyncState.NumAvailableTasks,
                                (int *)puVar2);
          }
          param_1[1].AsyncState.AsyncCurrentWriteIndex = iVar25 + 1;
          *(UPCGBasePointData **)
           (*(longlong *)&param_1[1].AsyncState.NumAvailableTasks + (longlong)iVar25 * 8) = pUVar33;
          EVar7 = local_b48->SamplingMethod;
          if (EVar7 == OnePointPerTriangle) {
            uVar26 = 0;
            if ((int)FVar54 < *(int *)&param_1[1].AsyncState.EndTime) {
              uVar26 = uVar49;
            }
            if ((uVar26 == 0) &&
               (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar59)) {
              pcVar17 = (code *)swi(3);
              uVar22 = (*pcVar17)();
              return (bool)uVar22;
            }
            UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs
                      (pUVar42,(FGeometryScriptIndexList *)
                               (*(longlong *)&param_1[1].bInputDataModified +
                               (longlong)(int)FVar54 * 0x18),local_b28);
            FVar54 = local_b50;
            uVar26 = 0;
            if ((int)local_b50 < *(int *)&param_1[1].AsyncState.EndTime) {
              uVar26 = uVar49;
            }
            if ((uVar26 == 0) &&
               (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar59)) {
              pcVar17 = (code *)swi(3);
              uVar22 = (*pcVar17)();
              return (bool)uVar22;
            }
            pFVar53 = local_b40;
            lVar37 = *(longlong *)&param_1[1].bInputDataModified;
            if ((*(longlong *)(lVar37 + 8 + (longlong)local_b40 * 0x18) == 0) &&
               (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar59)) {
              pcVar17 = (code *)swi(3);
              uVar22 = (*pcVar17)();
              return (bool)uVar22;
            }
            lVar37 = *(longlong *)(lVar37 + 8 + (longlong)pFVar53 * 0x18);
LAB_14cef6cb6:
            iVar25 = *(int *)(lVar37 + 8);
            pUVar33 = local_b30;
            if (iVar25 != -1) {
              uVar26 = 0;
              if ((int)FVar54 < *(int *)&param_1[1].bIsPaused) {
                uVar26 = uVar49;
              }
              if ((uVar26 == 0) &&
                 (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar59)) {
                pcVar17 = (code *)swi(3);
                uVar22 = (*pcVar17)();
                return (bool)uVar22;
              }
              pFVar53 = local_b40;
              iVar28 = *(int *)(param_1[1].CompiledTaskId + (longlong)local_b40 * 4);
              uVar26 = 0;
              if ((int)((int)FVar54 + 1U) < *(int *)&param_1[1].bIsPaused) {
                uVar26 = ~((int)FVar54 + 1U) >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar59)) {
                pcVar17 = (code *)swi(3);
                uVar22 = (*pcVar17)();
                return (bool)uVar22;
              }
              pUVar33 = local_b30;
              *(int *)(param_1[1].CompiledTaskId + 4 + (longlong)pFVar53 * 4) = iVar28 + iVar25;
              (**(code **)(local_b30->_padding_ + 0x490))(local_b30,iVar25,0);
              (**(code **)(pUVar33->_padding_ + 0x498))(pUVar33,0xff);
            }
          }
          else {
            if (EVar7 == OnePointPerVertex) {
              uVar26 = 0;
              if ((int)FVar54 < param_1[1].OutputData.DataCrcs.ArrayNum) {
                uVar26 = uVar49;
              }
              if ((uVar26 == 0) &&
                 (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar59)) {
                pcVar17 = (code *)swi(3);
                uVar22 = (*pcVar17)();
                return (bool)uVar22;
              }
              lVar37 = (longlong)(int)FVar54 * 0x10;
              UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions
                        (pUVar42,(FGeometryScriptVectorList *)
                                 (param_1[1].OutputData.DataCrcs.AllocatorInstance.Data + lVar37),
                         false,local_b52);
              FVar20 = local_b50;
              uVar26 = 0;
              if ((int)local_b50 < param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex) {
                uVar26 = uVar49;
              }
              if ((uVar26 == 0) &&
                 (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar59)) {
                pcVar17 = (code *)swi(3);
                uVar22 = (*pcVar17)();
                return (bool)uVar22;
              }
              UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors
                        (pUVar42,(FGeometryScriptColorList *)
                                 (param_1[1].OutputData.InactiveOutputPinBitmask + lVar37),local_b52
                         ,local_b33,true);
              uVar26 = 0;
              if ((int)FVar20 < param_1[1].SourceComponent.WeakPtr.ObjectIndex) {
                uVar26 = uVar49;
              }
              if ((uVar26 == 0) &&
                 (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar59)) {
                pcVar17 = (code *)swi(3);
                uVar22 = (*pcVar17)();
                return (bool)uVar22;
              }
              UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals
                        (pUVar42,(FGeometryScriptVectorList *)
                                 (param_1[1].ExecutionSource.InterfaceInstance +
                                 (longlong)(int)FVar54 * 2),local_b52,local_b33,true);
              uVar26 = 0;
              if ((int)FVar20 < param_1[1].OutputData.DataCrcs.ArrayNum) {
                uVar26 = uVar49;
              }
              if ((uVar26 == 0) &&
                 (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar59)) {
                pcVar17 = (code *)swi(3);
                uVar22 = (*pcVar17)();
                return (bool)uVar22;
              }
              pFVar53 = local_b40;
              pFVar16 = param_1[1].OutputData.DataCrcs.AllocatorInstance.Data;
              if ((*(longlong *)(pFVar16 + (longlong)local_b40 * 0x10) == 0) &&
                 (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar59)) {
                pcVar17 = (code *)swi(3);
                uVar22 = (*pcVar17)();
                return (bool)uVar22;
              }
              lVar37 = *(longlong *)(pFVar16 + (longlong)pFVar53 * 0x10);
              FVar54 = local_b50;
              goto LAB_14cef6cb6;
            }
            pUVar33 = local_b30;
            if (EVar7 != PoissonSampling) {
              pFVar39 = FText::AsLocalizable_Advanced_LocText
                                  (&local_7b8,L"PCGMeshSampler",L"InvalidOperation",
                                   L"Invalid sampling operation");
              PCGLog::LogErrorOnGraph(pFVar39,param_1);
              if (local_7b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_7b8.TextData.Reference + 0x10))();
              }
              goto LAB_14cef7707;
            }
          }
          pUVar31 = local_b48;
          this_01 = (UPCGMetadata *)pUVar33->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UPCGMetadata *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          if (pUVar31->SamplingMethod != OnePointPerVertex) {
            local_a00 = pUVar31->UVAttributeName;
            local_8c8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            if (pUVar31->bExtractUVAsAttribute != false) {
              local_9a0 = PCGMetadataDomainID::Default;
              local_9a8 = local_a00;
              pFVar43 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_9a0);
              if (pFVar43 == (FPCGMetadataDomain *)0x0) {
                pFVar44 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
LAB_14cef6e56:
                if (2 < (byte)LogPCG._0_1_) {
                  pFVar39 = FText::FromString(&local_5b8,L"UVs");
                  pFVar40 = FText::FromName(&local_5a8,&local_a00);
                  pFVar45 = FText::AsLocalizable_Advanced_LocText
                                      (&local_888,L"PCGMeshSampler",L"AttributeCreationFailed",
                                       L"Failed to create attribute {0} for {1}. {1} won\'t be computed"
                                      );
                  pFVar41 = FTextFormat::FTextFormat(&local_5f8,pFVar45,Default);
                  pFVar39 = FText::Format<FText,FText>(&local_898,pFVar41,pFVar40,pFVar39);
                  FText::ToString(pFVar39);
                  FPCGContext::GetTaskName(param_1,&local_8a8);
                  FPCGContext::GetExecutionSourceName(param_1,&local_8b8);
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)&PTR_u___s____s____s_152a1fd90,
                             (FLogCategoryBase *)&LogPCG);
                  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
                  }
                  if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
                  }
                  if (local_898.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_898.TextData.Reference + 0x10))();
                  }
                  pUVar31 = local_b48;
                  if (local_888.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_888.TextData.Reference + 0x10))();
                    pUVar31 = local_b48;
                  }
                }
              }
              else {
                pFVar44 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
                                    (pFVar43,local_9a8,(TVector2<double> *)&local_8c8._s_0,true,true
                                    );
                if (pFVar44 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0)
                goto LAB_14cef6e56;
              }
              iVar25 = param_1[1].AsyncState.CurrentChunkToCollapse;
              piVar1 = &param_1[1].AsyncState._padding_;
              if (iVar25 == *piVar1) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)&param_1[1].AsyncState.bStarted,
                                    piVar1);
              }
              param_1[1].AsyncState.CurrentChunkToCollapse = iVar25 + 1;
              *(FPCGMetadataAttribute<UE::Math::TVector2<double>_> **)
               (*(longlong *)&param_1[1].AsyncState.bStarted + (longlong)iVar25 * 8) = pFVar44;
            }
            local_9f8 = pUVar31->TriangleIdAttributeName;
            local_ad8[0] = -1;
            if (pUVar31->bOutputTriangleIds != false) {
              local_9c0 = PCGMetadataDomainID::Default;
              local_9c8 = local_9f8;
              pFVar43 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_9c0);
              if (pFVar43 == (FPCGMetadataDomain *)0x0) {
                pFVar46 = (FPCGMetadataAttribute<int> *)0x0;
LAB_14cef7070:
                if (2 < (byte)LogPCG._0_1_) {
                  pFVar39 = FText::FromString(&local_588,L"Triangle IDs");
                  pFVar40 = FText::FromName(&local_698,&local_9f8);
                  pFVar45 = FText::AsLocalizable_Advanced_LocText
                                      (&local_848,L"PCGMeshSampler",L"AttributeCreationFailed",
                                       L"Failed to create attribute {0} for {1}. {1} won\'t be computed"
                                      );
                  pFVar41 = FTextFormat::FTextFormat(&local_688,pFVar45,Default);
                  pFVar39 = FText::Format<FText,FText>(&local_858,pFVar41,pFVar40,pFVar39);
                  FText::ToString(pFVar39);
                  FPCGContext::GetTaskName(param_1,&local_868);
                  FPCGContext::GetExecutionSourceName(param_1,&local_878);
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)&PTR_u___s____s____s_152a1fe50,
                             (FLogCategoryBase *)&LogPCG);
                  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_878.Data.AllocatorInstance.Data);
                  }
                  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_868.Data.AllocatorInstance.Data);
                  }
                  if (local_858.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_858.TextData.Reference + 0x10))();
                  }
                  pUVar31 = local_b48;
                  if (local_848.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_848.TextData.Reference + 0x10))();
                    pUVar31 = local_b48;
                  }
                }
              }
              else {
                pFVar46 = FPCGMetadataDomain::CreateAttribute<int>
                                    (pFVar43,local_9c8,local_ad8,false,true);
                if (pFVar46 == (FPCGMetadataAttribute<int> *)0x0) goto LAB_14cef7070;
              }
              iVar25 = *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8;
              puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0xc;
              if (iVar25 == *(int *)puVar2) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)
                                          &param_1[1].AsyncState.ChunkToNumElementsWrittenMap,
                                    (int *)puVar2);
              }
              *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 = iVar25 + 1;
              *(FPCGMetadataAttribute<int> **)
               (*(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap +
               (longlong)iVar25 * 8) = pFVar46;
            }
            local_9f0 = pUVar31->MaterialIdAttributeName;
            local_ad0[0] = -1;
            if (pUVar31->bOutputMaterialInfo != false) {
              local_980 = PCGMetadataDomainID::Default;
              local_988 = local_9f0;
              pFVar43 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_980);
              if (pFVar43 == (FPCGMetadataDomain *)0x0) {
                pFVar46 = (FPCGMetadataAttribute<int> *)0x0;
LAB_14cef7286:
                if (2 < (byte)LogPCG._0_1_) {
                  pFVar39 = FText::FromString(&local_678,L"Material IDs");
                  pFVar40 = FText::FromName(&local_668,&local_9f0);
                  pFVar45 = FText::AsLocalizable_Advanced_LocText
                                      (&local_808,L"PCGMeshSampler",L"AttributeCreationFailed",
                                       L"Failed to create attribute {0} for {1}. {1} won\'t be computed"
                                      );
                  pFVar41 = FTextFormat::FTextFormat(&local_658,pFVar45,Default);
                  pFVar39 = FText::Format<FText,FText>(&local_818,pFVar41,pFVar40,pFVar39);
                  FText::ToString(pFVar39);
                  FPCGContext::GetTaskName(param_1,&local_828);
                  FPCGContext::GetExecutionSourceName(param_1,&local_838);
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)&PTR_u___s____s____s_152a1fe50,
                             (FLogCategoryBase *)&LogPCG);
                  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_838.Data.AllocatorInstance.Data);
                  }
                  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_828.Data.AllocatorInstance.Data);
                  }
                  if (local_818.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_818.TextData.Reference + 0x10))();
                  }
                  pUVar31 = local_b48;
                  if (local_808.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_808.TextData.Reference + 0x10))();
                    pUVar31 = local_b48;
                  }
                }
              }
              else {
                pFVar46 = FPCGMetadataDomain::CreateAttribute<int>
                                    (pFVar43,local_988,local_ad0,false,true);
                if (pFVar46 == (FPCGMetadataAttribute<int> *)0x0) goto LAB_14cef7286;
              }
              iVar25 = *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x18;
              puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x1c;
              if (iVar25 == *(int *)puVar2) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)
                                          &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.
                                           field_0x10,(int *)puVar2);
              }
              *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x18 = iVar25 + 1;
              *(FPCGMetadataAttribute<int> **)
               (*(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x10 +
               (longlong)iVar25 * 8) = pFVar46;
            }
            local_af0 = pUVar31->MaterialAttributeName;
            pFVar47 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
            local_a50.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_a50.AssetPath.PackageName.Number = 0;
            local_a50.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_a50.AssetPath.AssetName.Number = 0;
            local_a50.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a50.SubPathString.Data.ArrayNum = 0;
            local_a50.SubPathString.Data.ArrayMax = 0;
            pUVar33 = local_b30;
            if (pUVar31->bOutputMaterialInfo != false) {
              local_960 = PCGMetadataDomainID::Default;
              local_968 = local_af0;
              pFVar43 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_960);
              FVar55.Data = (FScriptContainerElement *)pFVar47;
              if (((pFVar43 == (FPCGMetadataDomain *)0x0) ||
                  (pFVar47 = FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>
                                       (pFVar43,local_968,&local_a50,false,true),
                  FVar55.Data = local_a50.SubPathString.Data.AllocatorInstance.Data,
                  pFVar47 == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) &&
                 (2 < (byte)LogPCG._0_1_)) {
                pFVar39 = FText::FromString(&local_648,L"Material");
                pFVar40 = FText::FromName(&local_638,&local_af0);
                pFVar45 = FText::AsLocalizable_Advanced_LocText
                                    (&local_7c8,L"PCGMeshSampler",L"AttributeCreationFailed",
                                     L"Failed to create attribute {0} for {1}. {1} won\'t be computed"
                                    );
                pFVar41 = FTextFormat::FTextFormat(&local_628,pFVar45,Default);
                pFVar39 = FText::Format<FText,FText>(&local_7d8,pFVar41,pFVar40,pFVar39);
                FText::ToString(pFVar39);
                FPCGContext::GetTaskName(param_1,&local_7e8);
                FPCGContext::GetExecutionSourceName(param_1,&local_7f8);
                UE::Logging::Private::BasicLog<3>
                          ((FStaticBasicLogRecord *)&PTR_u___s____s____s_152a1fe70,
                           (FLogCategoryBase *)&LogPCG);
                if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
                }
                if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
                }
                if (local_7d8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
                }
                if (local_7c8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_7c8.TextData.Reference + 0x10))();
                }
              }
              iVar25 = *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x28;
              puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x2c;
              if (iVar25 == *(int *)puVar2) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)
                                          &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.
                                           field_0x20,(int *)puVar2);
              }
              *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x28 = iVar25 + 1;
              *(FPCGMetadataAttribute<FSoftObjectPath> **)
               (*(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 +
               (longlong)iVar25 * 8) = pFVar47;
              pUVar33 = local_b30;
              if ((FPCGMetadataAttribute<FSoftObjectPath> *)FVar55.Data !=
                  (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
                FMemory::Free(FVar55.Data);
                pUVar33 = local_b30;
              }
            }
          }
          iVar25 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar25 + 1;
          this_02 = (FPCGDataPtrWrapper *)
                    ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                    (longlong)iVar25 * 0x78);
          this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
          (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
          (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
          this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
          this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
          *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
          *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
          this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
          *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
          FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar33);
          pFVar53 = local_b40;
          FVar54 = local_b50;
        }
        local_b50 = (FGeometryScriptCopyMeshFromAssetOptions)((int)FVar54 + 1);
        local_b40 = (FObjectPtr_u_0 *)((longlong)pFVar53 + 1);
        iVar5._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
        iVar5._1_1_ = param_1[1].OutputData.bCancelExecution;
        iVar5._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
      } while ((int)local_b50 < iVar5);
    }
    *(undefined1 *)&param_1[1].DynamicDependencies.Elements = 1;
LAB_14cef7707:
    bVar59 = true;
  }
  if (local_940.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14cef7720:
  if (cVar51 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar59;
}

