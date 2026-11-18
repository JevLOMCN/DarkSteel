// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// ExecuteInternal @ 14ceec8b0

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
FPCGCreateEmptyDynamicMeshElement::ExecuteInternal
          (FPCGCreateEmptyDynamicMeshElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  FObjectPtr_u_0 FVar8;
  FPCGTaggedData *pFVar9;
  UPCGDynamicMeshData *pUVar10;
  FPCGDataPtrWrapper *this_01;
  bool bVar11;
  FObjectPtr_u_0 local_res10;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId48,"FPCGCreateEmptyDynamicMeshElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGCreateEmptyDynamicMesh.cpp"
               ,0x30);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId48);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGCreateEmptyDynamicMesh.cpp"
                         ,0x32,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
      pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateEmptyDynamicMeshSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
      if (pFVar9 != (FPCGTaggedData *)0x0) {
        local_res10 = (FObjectPtr_u_0)(pFVar9->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable(local_res10.Handle);
        }
        if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
          pUVar6 = UPCGCreateEmptyDynamicMeshSettings::StaticClass();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar6);
          FVar8 = local_res10;
          if (bVar3) goto LAB_14ceeca24;
        }
      }
    }
    else {
      pUVar7 = UPCGNode::GetSettings(this_00);
      FVar8.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
      if ((UPCGSettings *)FVar8.Handle != (UPCGSettings *)0x0) {
        pUVar6 = UPCGCreateEmptyDynamicMeshSettings::StaticClass();
        iVar5 = (int)pUVar6->_padding_;
        if ((iVar5 <= *(int *)(*(longlong *)&(FVar8.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(FVar8.Handle)->field_0x10 + 0x30) + (longlong)iVar5 * 8)
            == &pUVar6->_padding_)) goto LAB_14ceeca24;
      }
    }
  }
  else {
    pUVar6 = UPCGCreateEmptyDynamicMeshSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (bVar3) {
      FVar8 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_14ceeca24;
    }
  }
  FVar8.Handle = (UObject *)0x0;
LAB_14ceeca24:
  if (((UPCGSettings *)FVar8.Handle == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGCreateEmptyDynamicMesh.cpp"
                         ,0x35,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar10 = FPCGContext::NewObject_AnyThread<UPCGDynamicMeshData>(param_1);
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  iVar5 = (param_1->OutputData).TaggedData.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  (param_1->OutputData).TaggedData.ArrayNum = iVar5 + 1;
  this_01 = (FPCGDataPtrWrapper *)
            ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar5 * 0x78);
  this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
  this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)pUVar10);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

