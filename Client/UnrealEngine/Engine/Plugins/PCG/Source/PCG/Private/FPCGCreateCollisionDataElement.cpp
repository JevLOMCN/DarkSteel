// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// CanExecuteOnlyOnMainThread @ 149b67b80

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
FPCGCreateCollisionDataElement::CanExecuteOnlyOnMainThread
          (FPCGCreateCollisionDataElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b70eb0

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
FPCGCreateCollisionDataElement::ExecuteInternal
          (FPCGCreateCollisionDataElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  UPCGCreateCollisionDataSettings *pUVar6;
  FPCGTaggedData *pFVar7;
  uint *puVar8;
  uint uVar9;
  FPCGTaggedData *pFVar10;
  uint *puVar11;
  bool bVar12;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_38;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId114,"FPCGCreateCollisionDataElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateCollisionData.cpp"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId114);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateCollisionData.cpp"
                         ,0x74,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar6 = FPCGContext::GetInputSettings<UPCGCreateCollisionDataSettings>(param_1);
  if ((pUVar6 == (UPCGCreateCollisionDataSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateCollisionData.cpp"
                         ,0x78,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_38,&PCGPinConstants::DefaultInputLabel);
  uVar9 = 0;
  if (0 < local_38.ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar9 < local_38.ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar7 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
      pFVar10 = (FPCGTaggedData *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x78);
      if (((pFVar7 <= pFVar10) && (pFVar10 < pFVar7 + (param_1->OutputData).TaggedData.ArrayMax)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar5 = (param_1->OutputData).TaggedData.ArrayNum;
      if (iVar5 == (param_1->OutputData).TaggedData.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,
                           &(param_1->OutputData).TaggedData.ArrayMax);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar5 + 1;
      pFVar7 = FPCGTaggedData::FPCGTaggedData
                         ((FPCGTaggedData *)
                          ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                          (longlong)iVar5 * 0x78),pFVar10);
      puVar11 = (uint *)param_1[1].InputData.InactiveOutputPinBitmask;
      puVar8 = puVar11 + (longlong)*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data
                         * 8;
      for (; puVar11 != puVar8; puVar11 = puVar11 + 8) {
        if (*puVar11 == uVar9) {
          if ((*(longlong *)(puVar11 + 6) == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("MatchingData->Data",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateCollisionData.cpp"
                                 ,0x84,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          UPCGCollisionWrapperData::FinalizeInitializationEx
                    (*(UPCGCollisionWrapperData **)(puVar11 + 6),
                     (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(puVar11 + 2));
          FPCGDataPtrWrapper::operator=(&pFVar7->Data,*(UPCGData **)(puVar11 + 6));
          puVar11[6] = 0;
          puVar11[7] = 0;
          break;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < local_38.ArrayNum);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FPCGTaggedData *)local_38.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88ad0

EPCGElementExecutionLoopMode __thiscall
FPCGCreateCollisionDataElement::ExecutionLoopMode
          (FPCGCreateCollisionDataElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// PrepareDataInternal @ 149b95a40

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
FPCGCreateCollisionDataElement::PrepareDataInternal
          (FPCGCreateCollisionDataElement *this,FPCGContext *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  code *pcVar3;
  FObjectPtr_u_0 FVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  UPCGCreateCollisionDataSettings *pUVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  UPCGCollisionWrapperData *this_00;
  FText *pFVar12;
  uint *puVar13;
  FSoftObjectPath *pFVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  FGCScopeGuard local_res18 [8];
  undefined1 local_res20 [8];
  uint local_a8 [2];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_a0;
  UPCGCollisionWrapperData *local_90;
  FObjectPtr_u_0 local_88;
  longlong local_80;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_68;
  TObjectPtr<UObject> local_58;
  UPCGCollisionWrapperData *local_50;
  FText local_48;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId61,"FPCGCreateCollisionDataElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateCollisionData.cpp"
               ,0x3d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId61);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateCollisionData.cpp"
                         ,0x3e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (*(char *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data == '\0') {
    uVar17 = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    pUVar9 = FPCGContext::GetInputSettings<UPCGCreateCollisionDataSettings>(param_1);
    if ((pUVar9 == (UPCGCreateCollisionDataSettings *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Settings",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateCollisionData.cpp"
                           ,0x46,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_78,&PCGPinConstants::DefaultInputLabel);
    if (0 < local_78.ArrayNum) {
      local_80 = 0;
      do {
        lVar16 = local_80;
        uVar7 = 0;
        if ((int)uVar17 < local_78.ArrayNum) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_88 = (FObjectPtr_u_0)
                   ((FObjectPtr_u_0 *)(local_78.AllocatorInstance.Data + lVar16))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b95be6:
          if ((UPCGBasePointData *)local_88.Handle != (UPCGBasePointData *)0x0) {
            pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_88,pUVar10);
            FVar4 = local_88;
            if ((bVar5) && ((UPCGBasePointData *)local_88.Handle != (UPCGBasePointData *)0x0)) {
              local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_a0.ArrayNum = 0;
              local_a0.ArrayMax = 0;
              local_90 = (UPCGCollisionWrapperData *)0x0;
              local_a8[0] = uVar17;
              bVar5 = IsInGameThread();
              if (param_1 == (FPCGContext *)0x0) {
                if ((!bVar5) &&
                   (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                       ,0xa9,"Context != nullptr || IsInGameThread()"), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
LAB_149b95c61:
                pUVar11 = GetTransientPackageAsObject();
                this_00 = NewObject<UPCGCollisionWrapperData>(pUVar11);
              }
              else {
                if (bVar5) goto LAB_149b95c61;
                if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
                   (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<4331830188552749348>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                       ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
                FGCScopeGuard::FGCScopeGuard(local_res18);
                pUVar11 = GetTransientPackageAsObject();
                this_00 = NewObject<UPCGCollisionWrapperData>(pUVar11);
                FGCScopeGuard::~FGCScopeGuard(local_res18);
                if ((this_00 == (UPCGCollisionWrapperData *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Object",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                       ,0x12a,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
                local_50 = this_00;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this_00 != (UPCGCollisionWrapperData *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this_00);
                }
                TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                ::Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_58,(bool *)&local_50);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this_00 != (UPCGCollisionWrapperData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this_00);
              }
              local_90 = this_00;
              bVar5 = UPCGCollisionWrapperData::PreInitializeAndGatherMeshesEx
                                (this_00,(UPCGBasePointData *)FVar4.Handle,
                                 &pUVar9->CollisionAttribute,pUVar9->CollisionQueryFlag,&local_a0);
              if (bVar5) {
                iVar8 = local_a0.ArrayNum;
                pFVar14 = (FSoftObjectPath *)
                          (local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x20);
                FVar15.Data = local_a0.AllocatorInstance.Data;
                while( true ) {
                  if (local_a0.ArrayNum != iVar8) {
                    local_res20[0] = 0;
                    `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_res20);
                  }
                  if ((FSoftObjectPath *)FVar15.Data == pFVar14) break;
                  if ((((FSoftObjectPath *)FVar15.Data)->AssetPath).PackageName != (FName)0x0) {
                    TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<FSoftObjectPath_const_&>(&local_68,(FSoftObjectPath *)FVar15.Data)
                    ;
                  }
                  FVar15.Data = FVar15.Data + 0x20;
                }
                puVar2 = &param_1[1].InputData.InactiveOutputPinBitmask;
                if ((((uint *)*puVar2 <= local_a8) &&
                    (local_a8 <
                     (uint *)*puVar2 +
                     (longlong)
                     *(int *)((longlong)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data + 4
                             ) * 8)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
                iVar8 = *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
                piVar1 = (int *)((longlong)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data
                                + 4);
                if (iVar8 == *piVar1) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x820,(ForAnyElementType *)puVar2,piVar1);
                }
                *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data = iVar8 + 1;
                puVar13 = (uint *)(*puVar2 + (longlong)iVar8 * 0x20);
                *puVar13 = local_a8[0];
                puVar13[2] = 0;
                puVar13[3] = 0;
                *(FScriptContainerElement **)(puVar13 + 2) = local_a0.AllocatorInstance.Data;
                local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                puVar13[4] = local_a0.ArrayNum;
                puVar13[5] = local_a0.ArrayMax;
                local_a0.ArrayNum = 0;
                local_a0.ArrayMax = 0;
                *(UPCGCollisionWrapperData **)(puVar13 + 6) = local_90;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_90 != (UPCGCollisionWrapperData *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_90);
                }
              }
              else if (pUVar9->bWarnIfAttributeCouldNotBeUsed != false) {
                pFVar12 = FText::AsLocalizable_Advanced_LocText
                                    (&local_48,L"PCGCreateCollisionDataElement",
                                     L"FailedToAccessMeshes",
                                     L"Failed to access the mesh attribute provided - will behave like a PointData."
                                    );
                PCGLog::LogWarningOnGraph(pFVar12,param_1);
                if (local_48.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
                }
              }
              DestructItems<FSoftObjectPath,int>
                        ((FSoftObjectPath *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
              lVar16 = local_80;
              if ((FSoftObjectPath *)local_a0.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
                FMemory::Free(local_a0.AllocatorInstance.Data);
                lVar16 = local_80;
              }
            }
          }
        }
        else if ((UPCGBasePointData *)local_88.Handle != (UPCGBasePointData *)0x0) {
          UE::GC::MarkAsReachable(local_88.Handle);
          goto LAB_149b95be6;
        }
        local_80 = lVar16 + 0x78;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < local_78.ArrayNum);
    }
    bVar5 = IPCGAsyncLoadingContext::RequestResourceLoad
                      ((IPCGAsyncLoadingContext *)(param_1 + 1),param_1,&local_68,
                       pUVar9->bSynchronousLoad == false);
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    if ((FSoftObjectPath *)local_68.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  else {
    bVar5 = true;
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// SupportsBasePointDataInputs @ 149b988a0

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
FPCGCreateCollisionDataElement::SupportsBasePointDataInputs
          (FPCGCreateCollisionDataElement *this,FPCGContext *param_1)

{
  return true;
}

