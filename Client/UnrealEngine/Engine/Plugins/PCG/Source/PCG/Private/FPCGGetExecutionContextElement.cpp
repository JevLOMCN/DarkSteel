// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c0ae30

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
FPCGGetExecutionContextElement::ExecuteInternal
          (FPCGGetExecutionContextElement *this,FPCGContext *param_1)

{
  int *piVar1;
  byte bVar2;
  UPCGNode *this_00;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  FPCGTaggedData *pFVar13;
  UPCGParamData *pUVar14;
  longlong *plVar15;
  UWorld *this_01;
  FPCGMetadataDomain *pFVar16;
  FPCGDataPtrWrapper *this_02;
  UWorld *pUVar17;
  bool bVar18;
  <lambda_1> local_res10 [8];
  TObjectPtr<UPCGSettings>_u_0 local_res18;
  double local_res20;
  FPCGMetadataDomainID local_70;
  FName local_58;
  FPCGMetadataDomainID local_50;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId60,"FPCGGetExecutionContextElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetExecutionContext.cpp"
               ,0x3c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId60);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetExecutionContext.cpp"
                         ,0x3e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
      pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetExecutionContextSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10[0]);
      if (pFVar13 != (FPCGTaggedData *)0x0) {
        local_res18.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res18.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
        }
        if (local_res18.DebugPtr != (UPCGSettings *)0x0) {
          pUVar10 = UPCGGetExecutionContextSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_res18.ObjectPtr,pUVar10);
          TVar12 = local_res18;
          if (bVar5) goto LAB_149c0af99;
        }
      }
    }
    else {
      pUVar11 = UPCGNode::GetSettings(this_00);
      TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
      if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
        pUVar10 = UPCGGetExecutionContextSettings::StaticClass();
        iVar9 = (int)pUVar10->_padding_;
        if ((iVar9 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar10->_padding_)) goto LAB_149c0af99;
      }
    }
LAB_149c0af96:
    TVar12.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar10 = UPCGGetExecutionContextSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (!bVar5) goto LAB_149c0af96;
    TVar12.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c0af99:
  this_01 = (UWorld *)0x0;
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetExecutionContext.cpp"
                         ,0x41,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  bVar2 = (byte)TVar12.DebugPtr[1]._padding_;
  pUVar14 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
  if (((pUVar14 == (UPCGParamData *)0x0) || (pUVar14->_padding_ == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParamData && ParamData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetExecutionContext.cpp"
                         ,0x46,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
  this_02 = (FPCGDataPtrWrapper *)
            ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar9 * 0x78);
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
  bVar5 = false;
  this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
  this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar14);
  pUVar17 = this_01;
  if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar7)) {
    pUVar17 = (UWorld *)(param_1->ExecutionSource).InterfaceInstance;
  }
  if (bVar2 == 10) {
    local_58 = PCGGetExecutionContextConstants::AttributeName;
    local_res20 = 0.0;
    local_50 = PCGMetadataDomainID::Default;
    pFVar16 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar14->_padding_,&local_50)
    ;
    if (pFVar16 != (FPCGMetadataDomain *)0x0) {
      FPCGMetadataDomain::CreateAttribute<double>(pFVar16,local_58,&local_res20,false,false);
    }
    goto LAB_149c0b2a3;
  }
  local_res10[0] = (<lambda_1>)0x0;
  if (pUVar17 != (UWorld *)0x0) {
    plVar15 = (longlong *)(**(code **)(pUVar17->_padding_ + 0x10))(pUVar17);
    this_01 = (UWorld *)(**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (bVar2 < 2) {
    if (((this_01 != (UWorld *)0x0) && (bVar7 = UWorld::IsGameWorld(this_01), bVar7)) ||
       (bVar7 = PCGHelpers::IsRuntimeGeneration((IPCGGraphExecutionSource *)pUVar17), bVar7)) {
      bVar5 = true;
    }
    local_res10[0] = (<lambda_1>)(bVar5 == (bVar2 == 1));
    goto LAB_149c0b213;
  }
  if ((byte)(bVar2 - 2) < 2) {
    if (pUVar17 != (UWorld *)0x0) {
      plVar15 = (longlong *)(**(code **)(pUVar17->_padding_ + 0x10))(pUVar17);
      cVar8 = (**(code **)(*plVar15 + 0xd8))(plVar15);
      if ((bool)cVar8 == (bVar2 == 3)) {
        local_res10[0] = (<lambda_1>)0x1;
        goto LAB_149c0b213;
      }
    }
LAB_149c0b18f:
    local_res10[0] = (<lambda_1>)0x0;
  }
  else {
    if (bVar2 == 4) {
      if (pUVar17 != (UWorld *)0x0) {
        plVar15 = (longlong *)(**(code **)(pUVar17->_padding_ + 0x10))(pUVar17);
        cVar8 = (**(code **)(*plVar15 + 0xd0))(plVar15);
        if (cVar8 != '\0') {
          local_res10[0] = (<lambda_1>)0x1;
          goto LAB_149c0b213;
        }
      }
      goto LAB_149c0b18f;
    }
    if (bVar2 == 5) {
      local_res10[0] =
           (<lambda_1>)PCGHelpers::IsRuntimeGeneration((IPCGGraphExecutionSource *)pUVar17);
    }
    else if (bVar2 == 6) {
      local_res10[0] = (<lambda_1>)PCGHelpers::IsDedicatedServer(this_01);
    }
    else if (bVar2 == 7) {
      local_res10[0] = (<lambda_1>)PCGHelpers::IsListenServer(this_01);
    }
    else {
      if (bVar2 == 8) {
        if (pUVar17 != (UWorld *)0x0) {
          plVar15 = (longlong *)(**(code **)(pUVar17->_padding_ + 0x10))(pUVar17);
          cVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
          if (cVar8 != '\0') {
            local_res10[0] = (<lambda_1>)0x1;
            goto LAB_149c0b213;
          }
        }
        goto LAB_149c0b18f;
      }
      if (bVar2 == 0xb) {
        if ((this_01 == (UWorld *)0x0) || (bVar5 = UWorld::IsGameWorld(this_01), !bVar5))
        goto LAB_149c0b18f;
        local_res10[0] = (<lambda_1>)0x1;
      }
    }
  }
LAB_149c0b213:
  FVar4 = PCGGetExecutionContextConstants::AttributeName;
  local_70 = PCGMetadataDomainID::Default;
  pFVar16 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar14->_padding_,&local_70);
  if (pFVar16 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<bool>(pFVar16,FVar4,(bool *)local_res10,false,false);
  }
LAB_149c0b2a3:
  UPCGMetadata::AddEntry((UPCGMetadata *)pUVar14->_padding_,-1);
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c2d3d0

bool __thiscall
FPCGGetExecutionContextElement::IsCacheable
          (FPCGGetExecutionContextElement *this,UPCGSettings *param_1)

{
  return false;
}

