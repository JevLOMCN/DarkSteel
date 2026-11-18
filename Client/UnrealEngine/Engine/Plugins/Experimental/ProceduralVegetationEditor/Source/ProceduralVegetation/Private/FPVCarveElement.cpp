// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da80c80

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

bool __thiscall FPVCarveElement::ExecuteInternal(FPVCarveElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FObjectPtr_u_0 *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  FPCGTaggedData *pFVar11;
  UObject *pUVar12;
  UPVGrowthData *pUVar13;
  ulonglong uVar14;
  FObjectPtr_u_0 FVar15;
  FPCGDataPtrWrapper *this_01;
  ForAnyElementType FVar16;
  bool bVar17;
  undefined1 auStackY_248 [32];
  <lambda_1> local_218;
  undefined1 local_217 [7];
  FObjectPtr_u_0 local_210;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_208;
  uint local_1f8;
  TObjectPtr<UPCGSettings>_u_0 local_1f0;
  TObjectPtr<UObject> local_1e8;
  UPVGrowthData *local_1e0;
  FObjectPtr_u_0 *local_1d8;
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1c0;
  FManagedArrayCollection local_1a8;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId48,"FPVCarveElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVCarveSettings.cpp"
               ,0x30);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId48);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVCarveSettings.cpp"
                         ,0x32,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVCarveSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_218);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_1f0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1f0.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1f0.DebugPtr);
        }
        if (local_1f0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPVCarveSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_1f0.ObjectPtr,pUVar8);
          TVar10 = local_1f0;
          if (bVar5) goto LAB_14da80e2f;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPVCarveSettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_14da80e2f;
      }
    }
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPVCarveSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    TVar10.DebugPtr = (UPCGSettings *)0x0;
    if (bVar5) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14da80e2f:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVCarveSettings.cpp"
                         ,0x35,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_208,&PCGPinConstants::DefaultInputLabel);
  uVar14 = (ulonglong)local_208.ArrayNum;
  local_1f8 = local_208.ArrayNum;
  local_1d8 = (FObjectPtr_u_0 *)(local_208.AllocatorInstance.Data + uVar14 * 0x78);
  FVar16.Data = local_208.AllocatorInstance.Data;
  do {
    pFVar4 = local_1d8;
    if (local_208.ArrayNum != (uint)uVar14) {
      local_217[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_217);
    }
    if ((FObjectPtr_u_0 *)FVar16.Data == pFVar4) goto LAB_14da81119;
    local_210 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar16.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14da80ed4:
      if (local_210.Handle == (UObject *)0x0) goto LAB_14da80ef4;
      pUVar8 = UPVGrowthData::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_210,pUVar8);
      FVar15 = local_210;
      if (!bVar5) goto LAB_14da80ef4;
    }
    else {
      if (local_210.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_210.Handle);
        goto LAB_14da80ed4;
      }
LAB_14da80ef4:
      FVar15.Handle = (UObject *)0x0;
    }
    if (FVar15.Handle == (UObject *)0x0) {
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
LAB_14da81119:
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
      if ((FPCGTaggedData *)local_208.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    FManagedArrayCollection::FManagedArrayCollection
              (&local_f8,(FManagedArrayCollection *)&FVar15.Handle[3].field_0x20);
    FManagedArrayCollection::FManagedArrayCollection(&local_1a8);
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 0;
    local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ArrayNum = 0;
    local_1c0.ArrayMax = 0;
    FManagedArrayCollection::CopyTo(&local_f8,&local_1a8,&local_1c0,&local_1d0);
    bVar5 = IsInGameThread();
    if (bVar5) {
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVGrowthData>(pUVar12);
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_218);
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVGrowthData>(pUVar12);
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_218);
      if ((pUVar13 == (UPVGrowthData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_1e0 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPVGrowthData *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_1e8,(bool *)&local_1e0);
    }
    local_210 = *(FObjectPtr_u_0 *)(TVar10.DebugPtr + 1);
    if ((float)local_210._4_4_ != 0.0) {
      if (local_210._0_1_ == FromBottom) {
        FPVCarve::CarveFromBottom(&local_1a8,&local_f8,(float)local_210._4_4_);
      }
      else {
        FPVCarve::CarveFromTop(&local_1a8,&local_f8,(float)local_210._4_4_,local_210._0_1_);
      }
    }
    FManagedArrayCollection::operator=((FManagedArrayCollection *)&pUVar13->field_0x98,&local_1a8);
    iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    pFVar2 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
    (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
    this_01 = (FPCGDataPtrWrapper *)(pFVar2 + (longlong)iVar7 * 0x78);
    FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_01,(UPCGData *)pUVar13);
    this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
    this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined2 *)&this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
    FManagedArrayCollection::~FManagedArrayCollection(&local_1a8);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
    uVar14 = (ulonglong)local_1f8;
    FVar16.Data = FVar16.Data + 0x78;
  } while( true );
}

