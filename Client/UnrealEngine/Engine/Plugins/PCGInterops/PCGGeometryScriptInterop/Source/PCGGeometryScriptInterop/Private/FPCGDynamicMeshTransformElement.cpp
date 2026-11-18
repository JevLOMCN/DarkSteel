// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// ExecuteInternal @ 14ceecb10

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
FPCGDynamicMeshTransformElement::ExecuteInternal
          (FPCGDynamicMeshTransformElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  UDynamicMesh *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  UPCGDynamicMeshData *pUVar11;
  FPCGTaggedData *this_01;
  ForAnyElementType FVar12;
  FPCGTaggedData *pFVar13;
  <lambda_1> <Var14;
  undefined1 local_res18 [8];
  TObjectPtr<UPCGSettings>_u_0 local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_c8;
  TQuaternion<double>_u_0 local_b8;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  undefined8 uStack_78;
  UPCGSettings *local_70;
  longlong local_58;
  UPCGSettings *local_40;
  
  <Var14 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId39,"FPCGDynamicMeshTransformElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGDynamicMeshTransform.cpp"
               ,0x27);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId39);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGDynamicMeshTransform.cpp"
                         ,0x29,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar8 = UPCGDynamicMeshTransformSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar5) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar10.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_14ceecc41;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
    pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDynamicMeshTransformSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,<Var14);
    if (pFVar13 != (FPCGTaggedData *)0x0) {
      local_res20.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_res20.DebugPtr == (UPCGSettings *)0x0) goto LAB_14ceecc3f;
        UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
      }
      if (local_res20.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPCGDynamicMeshTransformSettings::StaticClass();
        bVar5 = FObjectPtr::IsA(&local_res20.ObjectPtr,pUVar8);
        TVar10 = local_res20;
        if (bVar5) goto LAB_14ceecc41;
      }
    }
  }
  else {
    pUVar9 = UPCGNode::GetSettings(this_00);
    TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
    if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
      pUVar8 = UPCGDynamicMeshTransformSettings::StaticClass();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8)
          == &pUVar8->_padding_)) goto LAB_14ceecc41;
    }
  }
LAB_14ceecc3f:
  TVar10.DebugPtr = (UPCGSettings *)0x0;
LAB_14ceecc41:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGDynamicMeshTransform.cpp"
                         ,0x2c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_c8,&PCGPinConstants::DefaultInputLabel);
  iVar2 = local_c8.ArrayNum;
  pFVar13 = (FPCGTaggedData *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 0x78)
  ;
  FVar12.Data = local_c8.AllocatorInstance.Data;
  while( true ) {
    if (local_c8.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((FPCGTaggedData *)FVar12.Data == pFVar13) break;
    pUVar11 = IPCGDynamicMeshBaseElement::CopyOrSteal((FPCGTaggedData *)FVar12.Data,param_1);
    if (pUVar11 != (UPCGDynamicMeshData *)0x0) {
      local_b8._s_0.X = (double)TVar10.DebugPtr[1]._padding_;
      local_b8._s_0.Y = (double)TVar10.DebugPtr[1]._padding_;
      local_b8._s_0.Z = (double)TVar10.DebugPtr[1]._padding_;
      local_b8._s_0.W = (double)TVar10.DebugPtr[1]._padding_;
      pUVar3 = (pUVar11->DynamicMesh).field0_0x0.DebugPtr;
      local_88 = TVar10.DebugPtr[1]._padding_;
      local_98 = TVar10.DebugPtr[1]._padding_;
      lStack_90 = TVar10.DebugPtr[1]._padding_;
      local_70 = TVar10.DebugPtr[1].OriginalSettings;
      local_80 = TVar10.DebugPtr[1]._padding_;
      uStack_78._0_4_ = (TVar10.DebugPtr + 200)->Seed;
      uStack_78._4_1_ = (TVar10.DebugPtr + 200)->bExecutionDependencyRequired;
      uStack_78._5_3_ = *(undefined3 *)&(TVar10.DebugPtr + 200)->field_0x55;
      pUVar11->bDynamicMeshBoundsAreDirty = true;
      pUVar11->bDynamicMeshOctreeIsDirty = true;
      local_58 = local_88;
      local_40 = local_70;
      MeshTransforms::ApplyTransform
                ((pUVar3->Mesh).Ptr,(TTransformSRT3<double> *)&local_b8._s_0,false,All);
      iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
      this_01 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                           (longlong)iVar7 * 0x78),(FPCGTaggedData *)FVar12.Data);
      FPCGDataPtrWrapper::operator=(&this_01->Data,(UPCGData *)pUVar11);
    }
    FVar12.Data = FVar12.Data + 0x78;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FPCGTaggedData *)local_c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if ((bool)<Var14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

