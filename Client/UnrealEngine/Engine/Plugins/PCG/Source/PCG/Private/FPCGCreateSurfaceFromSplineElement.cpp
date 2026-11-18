// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149b752f0

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
FPCGCreateSurfaceFromSplineElement::ExecuteInternal
          (FPCGCreateSurfaceFromSplineElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  FObjectPtr_u_0 FVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  FText *pFVar13;
  UObject *pUVar14;
  UPCGSplineInteriorSurfaceData *this_01;
  FPCGTaggedData *pFVar15;
  TRefCountPtr<ITextData> TVar16;
  FPCGDataCollection *pFVar17;
  FObjectPtr_u_0 *pFVar18;
  ForAnyElementType FVar19;
  <lambda_1> <Var20;
  undefined1 local_res18 [8];
  FGCScopeGuard local_res20 [8];
  TObjectPtr<UPCGSettings>_u_0 local_d0;
  FObjectPtr_u_0 local_c8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_c0;
  TObjectPtr<UObject> local_b0;
  UPCGSplineInteriorSurfaceData *local_a8;
  FString local_a0;
  FString local_90;
  FText local_80;
  FString local_70;
  FString local_60;
  FText local_50;
  
  TVar12.DebugPtr = (UPCGSettings *)0x0;
  <Var20 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId44,"FPCGCreateSurfaceFromSplineElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateSurfaceFromSpline.cpp"
               ,0x2c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId44);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar10 = UPCGCreateSurfaceFromSplineSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (bVar6) {
      TVar12.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    goto LAB_149b75456;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
    pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromSplineSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,<Var20);
    if (pFVar15 != (FPCGTaggedData *)0x0) {
      local_d0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_d0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b75453;
        UE::GC::MarkAsReachable((UObject *)local_d0.DebugPtr);
      }
      if (local_d0.DebugPtr != (UPCGSettings *)0x0) {
        pUVar10 = UPCGCreateSurfaceFromSplineSettings::StaticClass();
        bVar6 = FObjectPtr::IsA(&local_d0.ObjectPtr,pUVar10);
        TVar12 = local_d0;
        if (bVar6) goto LAB_149b75456;
      }
    }
  }
  else {
    pUVar11 = UPCGNode::GetSettings(this_00);
    TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
    if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
      pUVar10 = UPCGCreateSurfaceFromSplineSettings::StaticClass();
      iVar2 = (int)pUVar10->_padding_;
      if ((iVar2 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8)
          == &pUVar10->_padding_)) goto LAB_149b75456;
    }
  }
LAB_149b75453:
  TVar12.DebugPtr = (UPCGSettings *)0x0;
LAB_149b75456:
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateSurfaceFromSpline.cpp"
                         ,0x2f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_c0,&PCGPinConstants::DefaultInputLabel);
  iVar2 = local_c0.ArrayNum;
  pFVar18 = (FObjectPtr_u_0 *)(local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x78)
  ;
  FVar19.Data = local_c0.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_c0.ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((FObjectPtr_u_0 *)FVar19.Data == pFVar18) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
        if ((FPCGTaggedData *)local_c0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
        if ((bool)<Var20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_c8 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar19.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGSplineData *)local_c8.Handle != (UPCGSplineData *)0x0) {
        UE::GC::MarkAsReachable(local_c8.Handle);
        break;
      }
LAB_149b7579f:
      if (1 < (byte)LogPCG._0_1_) {
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_50,L"PCGCreateSurfaceFromSplineElement",L"InvalidInputData",
                             L"Invalid input. Must be a spline data.");
        FText::ToString(pFVar13);
        FPCGContext::GetTaskName(param_1,&local_60);
        FPCGContext::GetExecutionSourceName(param_1,&local_70);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        TVar16.Reference = local_50.TextData.Reference;
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
          TVar16.Reference = local_50.TextData.Reference;
        }
LAB_149b7586b:
        if (TVar16.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar16.Reference + 0x10))();
        }
      }
LAB_149b7587f:
      FVar19.Data = FVar19.Data + 0x78;
    }
    if ((UPCGSplineData *)local_c8.Handle == (UPCGSplineData *)0x0) goto LAB_149b7579f;
    pUVar10 = Z_Construct_UClass_UPCGSplineData_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_c8,pUVar10);
    FVar5 = local_c8;
    if ((!bVar6) || ((UPCGSplineData *)local_c8.Handle == (UPCGSplineData *)0x0))
    goto LAB_149b7579f;
    cVar8 = (**(code **)(*(longlong *)local_c8.Handle + 0x510))(local_c8.Handle);
    if (cVar8 == '\0') {
      if (1 < (byte)LogPCG._0_1_) {
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_80,L"PCGCreateSurfaceFromSplineElement",L"InvalidOpenSpline",
                             L"Unable to create an implicit surface from an open spline. Make sure your splines are closed."
                            );
        FText::ToString(pFVar13);
        FPCGContext::GetTaskName(param_1,&local_90);
        FPCGContext::GetExecutionSourceName(param_1,&local_a0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        TVar16.Reference = local_80.TextData.Reference;
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
          TVar16.Reference = local_80.TextData.Reference;
        }
        goto LAB_149b7586b;
      }
      goto LAB_149b7587f;
    }
    bVar6 = IsInGameThread();
    if (bVar6) {
      pUVar14 = GetTransientPackageAsObject();
      this_01 = NewObject<UPCGSplineInteriorSurfaceData>(pUVar14);
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      FGCScopeGuard::FGCScopeGuard(local_res20);
      pUVar14 = GetTransientPackageAsObject();
      this_01 = NewObject<UPCGSplineInteriorSurfaceData>(pUVar14);
      FGCScopeGuard::~FGCScopeGuard(local_res20);
      if ((this_01 == (UPCGSplineInteriorSurfaceData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_a8 = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UPCGSplineInteriorSurfaceData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_b0,(bool *)&local_a8);
    }
    pFVar17 = &param_1->OutputData;
    UPCGSplineInteriorSurfaceData::Initialize(this_01,param_1,(UPCGSplineData *)FVar5.Handle);
    pFVar3 = (FObjectPtr_u_0 *)(pFVar17->TaggedData).AllocatorInstance.Data;
    if (((pFVar3 <= FVar19.Data) &&
        (FVar19.Data < pFVar3 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)pFVar17,piVar1);
    }
    (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
    pFVar15 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((pFVar17->TaggedData).AllocatorInstance.Data + (longlong)iVar9 * 0x78),
                         (FPCGTaggedData *)FVar19.Data);
    FPCGDataPtrWrapper::operator=(&pFVar15->Data,(UPCGData *)this_01);
    FVar19.Data = FVar19.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149b88af0

EPCGElementExecutionLoopMode __thiscall
FPCGCreateSurfaceFromSplineElement::ExecutionLoopMode
          (FPCGCreateSurfaceFromSplineElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

