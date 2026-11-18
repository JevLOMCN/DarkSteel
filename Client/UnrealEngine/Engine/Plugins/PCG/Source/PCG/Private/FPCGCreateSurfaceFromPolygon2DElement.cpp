// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149cbfb80

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
FPCGCreateSurfaceFromPolygon2DElement::ExecuteInternal
          (FPCGCreateSurfaceFromPolygon2DElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  FObjectPtr_u_0 FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  UObject *pUVar12;
  UPCGPolygon2DInteriorSurfaceData *this_01;
  FPCGTaggedData *pFVar13;
  ForAnyElementType FVar14;
  FObjectPtr_u_0 *pFVar15;
  <lambda_1> <Var16;
  undefined1 local_res18 [8];
  FGCScopeGuard local_res20 [8];
  TObjectPtr<UObject> local_68;
  TObjectPtr<UPCGSettings>_u_0 local_60;
  FObjectPtr_u_0 local_58;
  UPCGPolygon2DInteriorSurfaceData *local_50;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  
  <Var16 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId20,"FPCGCreateSurfaceFromPolygon2DElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGSurfaceFromPolygon2D.cpp"
               ,0x14);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId20);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar9 = UPCGCreateSurfaceFromPolygon2DSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (bVar6) {
      TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar11.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149cbfc8d;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
    pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromPolygon2DSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,<Var16);
    if (pFVar13 != (FPCGTaggedData *)0x0) {
      local_60.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_60.DebugPtr == (UPCGSettings *)0x0) goto LAB_149cbfc8b;
        UE::GC::MarkAsReachable((UObject *)local_60.DebugPtr);
      }
      if (local_60.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPCGCreateSurfaceFromPolygon2DSettings::StaticClass();
        bVar6 = FObjectPtr::IsA(&local_60.ObjectPtr,pUVar9);
        TVar11 = local_60;
        if (bVar6) goto LAB_149cbfc8d;
      }
    }
  }
  else {
    pUVar10 = UPCGNode::GetSettings(this_00);
    TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
    if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
      pUVar9 = UPCGCreateSurfaceFromPolygon2DSettings::StaticClass();
      iVar2 = (int)pUVar9->_padding_;
      if ((iVar2 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8)
          == &pUVar9->_padding_)) goto LAB_149cbfc8d;
    }
  }
LAB_149cbfc8b:
  TVar11.DebugPtr = (UPCGSettings *)0x0;
LAB_149cbfc8d:
  if ((TVar11.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGSurfaceFromPolygon2D.cpp"
                         ,0x17,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_48,&PCGPinConstants::DefaultInputLabel);
  iVar2 = local_48.ArrayNum;
  pFVar15 = (FObjectPtr_u_0 *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x78)
  ;
  FVar14.Data = local_48.AllocatorInstance.Data;
  do {
    if (local_48.ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((FObjectPtr_u_0 *)FVar14.Data == pFVar15) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if ((bool)<Var16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    local_58 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar14.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149cbfd3f:
      if ((UPCGPolygon2DData *)local_58.Handle != (UPCGPolygon2DData *)0x0) {
        pUVar9 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_58,pUVar9);
        FVar5 = local_58;
        if ((bVar6) && ((UPCGPolygon2DData *)local_58.Handle != (UPCGPolygon2DData *)0x0)) {
          bVar6 = IsInGameThread();
          if (bVar6) {
            pUVar12 = GetTransientPackageAsObject();
            this_01 = NewObject<UPCGPolygon2DInteriorSurfaceData>(pUVar12);
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
            pUVar12 = GetTransientPackageAsObject();
            this_01 = NewObject<UPCGPolygon2DInteriorSurfaceData>(pUVar12);
            FGCScopeGuard::~FGCScopeGuard(local_res20);
            if ((this_01 == (UPCGPolygon2DInteriorSurfaceData *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Object",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                   ,0x12a,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            local_50 = this_01;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_01 != (UPCGPolygon2DInteriorSurfaceData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_68,(bool *)&local_50);
          }
          UPCGPolygon2DInteriorSurfaceData::Initialize
                    (this_01,param_1,(UPCGPolygon2DData *)FVar5.Handle);
          pFVar3 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
          if (((pFVar3 <= FVar14.Data) &&
              (FVar14.Data < pFVar3 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) &&
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
          iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
          pFVar13 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                               (longlong)iVar8 * 0x78),(FPCGTaggedData *)FVar14.Data);
          FPCGDataPtrWrapper::operator=(&pFVar13->Data,(UPCGData *)this_01);
        }
      }
    }
    else if ((UPCGPolygon2DData *)local_58.Handle != (UPCGPolygon2DData *)0x0) {
      UE::GC::MarkAsReachable(local_58.Handle);
      goto LAB_149cbfd3f;
    }
    FVar14.Data = FVar14.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149cc4ee0

EPCGElementExecutionLoopMode __thiscall
FPCGCreateSurfaceFromPolygon2DElement::ExecutionLoopMode
          (FPCGCreateSurfaceFromPolygon2DElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

