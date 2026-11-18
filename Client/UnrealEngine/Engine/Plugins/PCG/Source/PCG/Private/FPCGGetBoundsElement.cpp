// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c0a0c0

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

bool __thiscall
FPCGGetBoundsElement::ExecuteInternal(FPCGGetBoundsElement *this,FPCGContext *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  UPCGMetadata *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FObjectPtr_u_0 FVar11;
  bool bVar12;
  char cVar13;
  undefined1 uVar14;
  bool bVar15;
  int iVar16;
  UClass *pUVar17;
  FText *pFVar18;
  UPCGParamData *pUVar19;
  FName *pFVar20;
  FPCGTaggedData *this_00;
  FObjectPtr_u_0 *pFVar21;
  FObjectPtr_u_0 *pFVar22;
  bool bVar23;
  undefined1 auStackY_168 [32];
  undefined1 local_136 [6];
  FObjectPtr_u_0 *local_130;
  FObjectPtr_u_0 local_128;
  FName local_120;
  FName local_118;
  FString local_110;
  FString local_100;
  FText local_f0;
  FString local_e0;
  FString local_d0;
  FText local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_130 = (FObjectPtr_u_0 *)((ulonglong)local_130 & 0xffffffff00000000);
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId51,"FPCGGetBoundsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetBounds.cpp"
               ,0x33);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId51);
  }
  iVar3 = (param_1->InputData).TaggedData.ArrayNum;
  pFVar22 = (FObjectPtr_u_0 *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
  bVar10 = false;
  local_130 = pFVar22 + (longlong)iVar3 * 0xf;
  pFVar21 = local_130;
  bVar15 = false;
LAB_149c0a167:
  if ((param_1->InputData).TaggedData.ArrayNum != iVar3) {
    local_136[0] = 0;
    `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_136);
  }
  if (pFVar22 == pFVar21) {
    if (bVar23) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return true;
  }
  local_128 = (FObjectPtr_u_0)pFVar22->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c0a1ad:
    if (local_128.Handle == (UObject *)0x0) goto LAB_149c0a57b;
    pUVar17 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&local_128,pUVar17);
    FVar11 = local_128;
    if ((!bVar12) || (pFVar21 = local_130, local_128.Handle == (UObject *)0x0)) goto LAB_149c0a57b;
    cVar13 = (**(code **)(*(longlong *)local_128.Handle + 0x390))(local_128.Handle);
    if (cVar13 != '\0') {
      (**(code **)(*(longlong *)FVar11.Handle + 0x388))(FVar11.Handle);
      if (local_38 != '\0') {
        pUVar19 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
        plVar1 = &pUVar19->_padding_;
        if (((pUVar19 == (UPCGParamData *)0x0) || (*plVar1 == 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ParamData && ParamData->Metadata",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetBounds.cpp"
                                ,0x53,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          uVar14 = (*pcVar5)();
          return (bool)uVar14;
        }
        pUVar4 = (UPCGMetadata *)*plVar1;
        pFVar20 = ::FName::FName(&local_120,"BoundsMin");
        local_a8._s_0.X = local_68;
        local_a8._s_0.Y = dStack_60;
        local_a8._s_0.Z = local_58;
        UPCGMetadata::CreateVectorAttribute
                  (pUVar4,*pFVar20,(TVector<double> *)&local_a8._s_0,true,false);
        pUVar4 = (UPCGMetadata *)*plVar1;
        pFVar20 = ::FName::FName(&local_118,"BoundsMax");
        local_88._s_0.X = local_50;
        local_88._s_0.Y = dStack_48;
        local_88._s_0.Z = local_40;
        UPCGMetadata::CreateVectorAttribute
                  (pUVar4,*pFVar20,(TVector<double> *)&local_88._s_0,true,false);
        UPCGMetadata::AddEntry((UPCGMetadata *)*plVar1,-1);
        iVar16 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar16 == *piVar2) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&param_1->OutputData,piVar2);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar16 + 1;
        this_00 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                             (longlong)iVar16 * 0x78),(FPCGTaggedData *)pFVar22);
        FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar19);
        pFVar21 = local_130;
        bVar15 = bVar10;
        goto LAB_149c0a57b;
      }
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7353501129109405772>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetBounds.cpp"
                          ,0x4c,"InputBounds.IsValid");
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
      pFVar21 = local_130;
      if ((byte)LogPCG._0_1_ < 3) goto LAB_149c0a57b;
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_c0,L"PCGGetBoundsElement",L"InvalidBoundsOnInput",
                           L"Skipped spatial data that had invalid bounds.");
      FText::ToString(pFVar18);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_d0);
        bVar9 = true;
        bVar8 = true;
        FPCGContext::GetExecutionSourceName(param_1,&local_e0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar8) &&
         (bVar8 = false, local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if ((bVar9) &&
         (bVar9 = false, local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      pFVar21 = local_130;
      bVar15 = bVar10;
      if (local_c0.TextData.Reference == (ITextData *)0x0) goto LAB_149c0a57b;
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      pFVar22 = pFVar22 + 0xf;
      pFVar21 = local_130;
      goto LAB_149c0a167;
    }
    pFVar21 = local_130;
    if (!bVar15) {
      bVar10 = true;
      bVar15 = true;
      if ((byte)LogPCG._0_1_ < 3) goto LAB_149c0a57b;
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_f0,L"PCGGetBoundsElement",L"UnboundedInput",
                           L"Skipped unbounded spatial data.");
      FText::ToString(pFVar18);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_100);
        bVar7 = true;
        bVar6 = true;
        FPCGContext::GetExecutionSourceName(param_1,&local_110);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar6) &&
         (bVar6 = false, local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         (bVar7 = false, local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      pFVar21 = local_130;
      bVar15 = bVar10;
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
        pFVar22 = pFVar22 + 0xf;
        pFVar21 = local_130;
        goto LAB_149c0a167;
      }
    }
  }
  else if (local_128.Handle != (UObject *)0x0) {
    UE::GC::MarkAsReachable(local_128.Handle);
    goto LAB_149c0a1ad;
  }
LAB_149c0a57b:
  pFVar22 = pFVar22 + 0xf;
  goto LAB_149c0a167;
}

// ExecutionLoopMode @ 149c22860

EPCGElementExecutionLoopMode __thiscall
FPCGGetBoundsElement::ExecutionLoopMode(FPCGGetBoundsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c35710

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
FPCGGetBoundsElement::SupportsBasePointDataInputs(FPCGGetBoundsElement *this,FPCGContext *param_1)

{
  return true;
}

