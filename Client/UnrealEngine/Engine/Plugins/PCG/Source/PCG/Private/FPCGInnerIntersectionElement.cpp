// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c0f930

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
FPCGInnerIntersectionElement::ExecuteInternal
          (FPCGInnerIntersectionElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UPCGSettings *pUVar8;
  TObjectPtr<UPCGSettings>_u_0 TVar9;
  FObjectPtr_u_0 *pFVar10;
  FPCGTaggedData *pFVar11;
  FObjectPtr_u_0 FVar12;
  uint uVar13;
  FObjectPtr_u_0 FVar14;
  uint uVar15;
  FObjectPtr_u_0 *pFVar16;
  FPCGDataPtrWrapper *this_01;
  ForAnyElementType FVar17;
  FObjectPtr_u_0 FVar18;
  <lambda_1> <Var19;
  undefined1 local_res18 [8];
  undefined1 local_res20;
  TObjectPtr<UPCGSettings>_u_0 local_60;
  FObjectPtr_u_0 local_58;
  FObjectPtr_u_0 *local_50;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  
  <Var19 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId51,"FPCGInnerIntersectionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGInnerIntersectionElement.cpp"
               ,0x33);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId51);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar7 = UPCGInnerIntersectionSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar7);
    if (bVar4) {
      TVar9.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar9.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149c0fa32;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar8 = UPCGNode::GetSettings(this_00), pUVar8 == (UPCGSettings *)0x0)) {
    pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGInnerIntersectionSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,<Var19);
    if (pFVar11 != (FPCGTaggedData *)0x0) {
      local_60.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_60.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c0fa30;
        UE::GC::MarkAsReachable((UObject *)local_60.DebugPtr);
      }
      if (local_60.DebugPtr != (UPCGSettings *)0x0) {
        pUVar7 = UPCGInnerIntersectionSettings::StaticClass();
        bVar4 = FObjectPtr::IsA(&local_60.ObjectPtr,pUVar7);
        TVar9 = local_60;
        if (bVar4) goto LAB_149c0fa32;
      }
    }
  }
  else {
    pUVar8 = UPCGNode::GetSettings(this_00);
    TVar9.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar8);
    if (TVar9.DebugPtr != (UPCGSettings *)0x0) {
      pUVar7 = UPCGInnerIntersectionSettings::StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)((TVar9.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar9.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8)
          == &pUVar7->_padding_)) goto LAB_149c0fa32;
    }
  }
LAB_149c0fa30:
  TVar9.DebugPtr = (UPCGSettings *)0x0;
LAB_149c0fa32:
  if ((TVar9.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGInnerIntersectionElement.cpp"
                         ,0x36,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_48,&PCGPinConstants::DefaultInputLabel);
  iVar2 = local_48.ArrayNum;
  local_res20 = (undefined1)TVar9.DebugPtr[1]._padding_;
  FVar18.Handle = (UObject *)0x0;
  FVar12.Handle = (UObject *)0x0;
  uVar15 = 0xffffffff;
  uVar5 = *(undefined1 *)((longlong)&TVar9.DebugPtr[1]._padding_ + 1);
  local_50 = (FObjectPtr_u_0 *)
             (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x78);
  pFVar16 = local_50;
  FVar17.Data = local_48.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_48.ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if ((FObjectPtr_u_0 *)FVar17.Data == pFVar16) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
        if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if ((bool)<Var19) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_58 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar17.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGData *)local_58.Handle != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable(local_58.Handle);
        break;
      }
LAB_149c0fc8b:
      pFVar10 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
      if (pFVar10 <= FVar17.Data) {
        pFVar10 = pFVar10 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf;
joined_r0x000149c0fb57:
        if ((FVar17.Data < pFVar10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
LAB_149c0fceb:
      iVar6 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar6 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78),
                 (FPCGTaggedData *)FVar17.Data);
      FVar17.Data = FVar17.Data + 0x78;
    }
    if ((UPCGData *)local_58.Handle == (UPCGData *)0x0) goto LAB_149c0fc8b;
    pUVar7 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_58,pUVar7);
    if ((!bVar4) || ((UPCGData *)local_58.Handle == (UPCGData *)0x0)) goto LAB_149c0fc8b;
    if ((UPCGData *)FVar18.Handle == (UPCGData *)0x0) {
      pFVar10 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
      uVar15 = (param_1->OutputData).TaggedData.ArrayNum;
      FVar18 = local_58;
      if (pFVar10 <= FVar17.Data) {
        pFVar10 = pFVar10 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf;
        goto joined_r0x000149c0fb57;
      }
      goto LAB_149c0fceb;
    }
    FVar14 = FVar18;
    if ((UPCGData *)FVar12.Handle != (UPCGData *)0x0) {
      FVar14 = FVar12;
    }
    FVar12.Handle =
         (UObject *)(**(code **)(*(longlong *)FVar14.Handle + 1000))(FVar14.Handle,param_1);
    *(undefined1 *)&((TObjectPtr<UPCGMetadata> *)&FVar12.Handle[6].field_0x20)->field0_0x0 =
         local_res20;
    *(undefined1 *)(FVar12.Handle + 2) = uVar5;
    uVar13 = 0;
    if ((int)uVar15 < (param_1->OutputData).TaggedData.ArrayNum) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    this_01 = (FPCGDataPtrWrapper *)
              ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
              (longlong)(int)uVar15 * 0x78);
    FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)FVar12.Handle);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_01 + 1),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)FVar17.Data + 0x10));
    FVar17.Data = FVar17.Data + 0x78;
    pFVar16 = local_50;
  } while( true );
}

// SupportsBasePointDataInputs @ 149c35750

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
FPCGInnerIntersectionElement::SupportsBasePointDataInputs
          (FPCGInnerIntersectionElement *this,FPCGContext *param_1)

{
  return true;
}

