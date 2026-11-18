// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// ExecuteInternal @ 149c115e0

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
FPCGMakeConcreteElement::ExecuteInternal(FPCGMakeConcreteElement *this,FPCGContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  FObjectPtr_u_0 this_00;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  FPCGDataTypeBaseId *pFVar8;
  UScriptStruct *pUVar9;
  FPCGDataTypeBaseId *pFVar10;
  FPCGTaggedData *this_01;
  UPCGBasePointData *pUVar11;
  ForAnyElementType FVar12;
  FPCGTaggedData *pFVar13;
  bool bVar14;
  undefined1 auStackY_c8 [32];
  char *pcVar15;
  undefined1 local_97 [7];
  FObjectPtr_u_0 local_90;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  FPCGDataTypeBaseId local_78;
  FPCGDataTypeBaseId local_70;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId43,"FPCGMakeConcreteElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMakeConcreteElement.cpp"
               ,0x2b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId43);
  }
  FPCGDataCollection::GetAllSpatialInputs(&param_1->InputData,&local_88);
  iVar3 = local_88.ArrayNum;
  pFVar13 = (FPCGTaggedData *)(local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x78)
  ;
  FVar12.Data = local_88.AllocatorInstance.Data;
  do {
    if (local_88.ArrayNum != iVar3) {
      local_97[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_97);
    }
    if ((FPCGTaggedData *)FVar12.Data == pFVar13) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
      if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    local_90.Handle = (UObject *)(((FPCGTaggedData *)FVar12.Data)->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c116e6:
      if ((UPCGSpatialData *)local_90.Handle == (UPCGSpatialData *)0x0) goto LAB_149c1182b;
      pUVar7 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_90,pUVar7);
      this_00 = local_90;
      if ((!bVar4) || ((UPCGSpatialData *)local_90.Handle == (UPCGSpatialData *)0x0))
      goto LAB_149c1182b;
      pFVar8 = (FPCGDataTypeBaseId *)
               (**(code **)(((((FPCGTaggedData *)FVar12.Data)->Data).Data.field0_0x0.DebugPtr)->
                            _padding_ + 0x2b8))();
      pUVar9 = FPCGDataTypeInfoSpatial::StaticStruct();
      pFVar10 = FPCGDataTypeBaseId::FPCGDataTypeBaseId(&local_78,pUVar9);
      bVar4 = FPCGDataTypeBaseId::IsChildOf(pFVar8,pFVar10);
      if (!bVar4) {
        pcVar15 = "Input.Data->GetDataTypeId().IsChildOf<FPCGDataTypeInfoSpatial>()";
        goto LAB_149c11830;
      }
      pFVar8 = (FPCGDataTypeBaseId *)
               (**(code **)(((((FPCGTaggedData *)FVar12.Data)->Data).Data.field0_0x0.DebugPtr)->
                            _padding_ + 0x2b8))();
      pUVar9 = FPCGDataTypeInfoConcrete::StaticStruct();
      pFVar10 = FPCGDataTypeBaseId::FPCGDataTypeBaseId(&local_70,pUVar9);
      bVar4 = FPCGDataTypeBaseId::IsChildOf(pFVar8,pFVar10);
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      iVar6 = (param_1->OutputData).TaggedData.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar6 + 1;
      this_01 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                           (longlong)iVar6 * 0x78),(FPCGTaggedData *)FVar12.Data);
      this_01->Pin = PCGPinConstants::DefaultOutputLabel;
      if (!bVar4) {
        local_37 = 0;
        local_33 = 0;
        local_31 = 0;
        local_68._s_0.X = 0.0;
        local_68._s_0.Y = 0.0;
        local_68._s_0.Z = 0.0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = bVar4;
        pUVar11 = UPCGSpatialData::ToBasePointData
                            ((UPCGSpatialData *)this_00.Handle,param_1,
                             (TBox<double> *)&local_68._s_0);
        FPCGDataPtrWrapper::operator=(&this_01->Data,(UPCGData *)pUVar11);
      }
    }
    else {
      if ((UPCGSpatialData *)local_90.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_90.Handle);
        goto LAB_149c116e6;
      }
LAB_149c1182b:
      pcVar15 = "InputSpatialData";
LAB_149c11830:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1974171886426259406>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMakeConcreteElement.cpp"
                         ,0x32,pcVar15);
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FVar12.Data = FVar12.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149c22880

EPCGElementExecutionLoopMode __thiscall
FPCGMakeConcreteElement::ExecutionLoopMode(FPCGMakeConcreteElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// ShouldComputeFullOutputDataCrc @ 149c34340

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
FPCGMakeConcreteElement::ShouldComputeFullOutputDataCrc
          (FPCGMakeConcreteElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149c35770

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
FPCGMakeConcreteElement::SupportsBasePointDataInputs
          (FPCGMakeConcreteElement *this,FPCGContext *param_1)

{
  return true;
}

