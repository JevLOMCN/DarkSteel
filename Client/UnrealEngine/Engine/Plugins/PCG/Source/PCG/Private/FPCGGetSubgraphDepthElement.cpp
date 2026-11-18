// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c0def0

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
FPCGGetSubgraphDepthElement::ExecuteInternal(FPCGGetSubgraphDepthElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UPCGSettings *pUVar8;
  TObjectPtr<UPCGSettings>_u_0 TVar9;
  FPCGTaggedData *pFVar10;
  FText *pFVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  UPCGParamData *pUVar13;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *pFVar14;
  FPCGDataPtrWrapper *this_02;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  TObjectPtr<UPCGSettings>_u_0 TVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  <lambda_1> local_res10;
  FGCScopeGuard local_e8 [4];
  int local_e4;
  int local_e0;
  TObjectPtr<UPCGSettings>_u_0 local_d8;
  FPCGStack *local_d0;
  FName local_b8;
  FPCGMetadataDomainID local_b0;
  FString local_98;
  FString local_88;
  FText local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  
  TVar15.DebugPtr = (UPCGSettings *)0x0;
  iVar6 = 0;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId66,"FPCGGetSubgraphDepthElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSubgraphDepth.cpp"
               ,0x42);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId66);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSubgraphDepth.cpp"
                         ,0x44,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar8 = UPCGNode::GetSettings(this_00), pUVar8 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar10 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetSubgraphDepthSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar10 != (FPCGTaggedData *)0x0) {
        local_d8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar10->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_d8.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c0e078;
          UE::GC::MarkAsReachable((UObject *)local_d8.DebugPtr);
        }
        if (local_d8.DebugPtr != (UPCGSettings *)0x0) {
          pUVar7 = UPCGGetSubgraphDepthSettings::StaticClass();
          bVar4 = FObjectPtr::IsA(&local_d8.ObjectPtr,pUVar7);
          TVar9 = local_d8;
          if (bVar4) goto LAB_149c0e07b;
        }
      }
    }
    else {
      pUVar8 = UPCGNode::GetSettings(this_00);
      TVar9.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar8);
      if (TVar9.DebugPtr != (UPCGSettings *)0x0) {
        pUVar7 = UPCGGetSubgraphDepthSettings::StaticClass();
        iVar18 = (int)pUVar7->_padding_;
        if ((iVar18 <= *(int *)((TVar9.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar9.DebugPtr)->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
            &pUVar7->_padding_)) goto LAB_149c0e07b;
      }
    }
LAB_149c0e078:
    TVar9.DebugPtr = TVar15.DebugPtr;
  }
  else {
    pUVar7 = UPCGGetSubgraphDepthSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar7);
    if (!bVar4) goto LAB_149c0e078;
    TVar9.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c0e07b:
  if ((TVar9.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSubgraphDepth.cpp"
                         ,0x47,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  lVar3 = TVar9.DebugPtr[1]._padding_;
  local_d0 = FPCGStackHandle::GetStack(&param_1->StackHandle);
  if (local_d0 == (FPCGStack *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4650252664376917939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSubgraphDepth.cpp"
                       ,0x4d,"Stack");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (1 < (byte)LogPCG._0_1_) {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_78,L"PCGGetSubgraphDepthElement",L"ContextHasNoExecutionStack",
                           L"The execution context is malformed and has no call stack.");
      FText::ToString(pFVar11);
      FPCGContext::GetTaskName(param_1,&local_88);
      FPCGContext::GetExecutionSourceName(param_1,&local_98);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    goto LAB_149c0e503;
  }
  local_e0 = 0;
  local_e4 = 0;
  if ((local_d0->StackFrames).ArrayNum < 1) {
LAB_149c0e2e7:
    if (((char)TVar9.DebugPtr[1]._padding_ == '\0') && (2 < (byte)LogPCG._0_1_)) {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"PCGGetSubgraphDepthElement",L"InvalidDepthQuery",
                           L"Get depth query failed because of the relative distance to the upstream graph."
                          );
      FText::ToString(pFVar11);
      FPCGContext::GetTaskName(param_1,&local_58);
      FPCGContext::GetExecutionSourceName(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    FGCScopeGuard::FGCScopeGuard(local_e8);
    iVar18 = (local_d0->StackFrames).ArrayNum + -1;
    iVar6 = 0;
    if (-1 < iVar18) {
      lVar17 = (longlong)iVar18 * 0x30;
      TVar16.DebugPtr = TVar15.DebugPtr;
      do {
        if (((local_d0->StackFrames).ArrayNum <= iVar18) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        TVar12.DebugPtr =
             (UPCGSettings *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)
                        ((local_d0->StackFrames).AllocatorInstance.Data + lVar17));
        if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
          pUVar7 = Z_Construct_UClass_UPCGGraph_NoRegister();
          iVar6 = (int)pUVar7->_padding_;
          if ((iVar6 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar7->_padding_)) {
            if ((char)lVar3 == '\x01') {
              if (TVar15.DebugPtr == (UPCGSettings *)0x0) {
                if (local_e0 == *(int *)((longlong)&TVar9.DebugPtr[1]._padding_ + 4)) {
                  TVar16 = (TObjectPtr<UPCGSettings>_u_0)0x1;
                  TVar15.DebugPtr = TVar12.DebugPtr;
                  goto LAB_149c0e2a9;
                }
                local_e0 = local_e0 + 1;
              }
              else if (TVar15.DebugPtr == TVar12.DebugPtr) goto LAB_149c0e2a7;
            }
            else {
LAB_149c0e2a7:
              TVar16._0_4_ = TVar16._0_4_ + 1;
              TVar16._4_4_ = 0;
LAB_149c0e2a9:
              local_e4 = TVar16._0_4_;
            }
          }
        }
        iVar6 = TVar16._0_4_;
        lVar17 = lVar17 + -0x30;
        iVar18 = iVar18 + -1;
      } while (-1 < iVar18);
    }
    FGCScopeGuard::~FGCScopeGuard(local_e8);
    if (iVar6 == 0) goto LAB_149c0e2e7;
  }
  local_e4 = iVar6 + -1;
  if (iVar6 + -1 < 0) {
    local_e4 = 0;
  }
  pUVar13 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
  if (((pUVar13 == (UPCGParamData *)0x0) || (pUVar13->_padding_ == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DepthParamData && DepthParamData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSubgraphDepth.cpp"
                         ,0x85,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar6 = (param_1->OutputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  (param_1->OutputData).TaggedData.ArrayNum = iVar6 + 1;
  this_02 = (FPCGDataPtrWrapper *)
            ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
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
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar13);
  local_b0 = PCGMetadataDomainID::Default;
  local_b8 = PCGGetSubgraphDepthConstants::DepthAttributeName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar13->_padding_,&local_b0);
  if (((this_01 == (FPCGMetadataDomain *)0x0) ||
      (pFVar14 = FPCGMetadataDomain::CreateAttribute<int>(this_01,local_b8,&local_e4,false,false),
      pFVar14 == (FPCGMetadataAttribute<int> *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DepthAttribute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSubgraphDepth.cpp"
                         ,0x8b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  UPCGMetadata::AddEntry((UPCGMetadata *)pUVar13->_padding_,-1);
LAB_149c0e503:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c2d400

bool __thiscall
FPCGGetSubgraphDepthElement::IsCacheable(FPCGGetSubgraphDepthElement *this,UPCGSettings *param_1)

{
  return false;
}

