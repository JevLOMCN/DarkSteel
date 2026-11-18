// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da85000

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

bool __thiscall FPVSlopeElement::ExecuteInternal(FPVSlopeElement *this,FPCGContext *param_1)

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
  undefined1 auStackY_178 [32];
  <lambda_1> local_148;
  undefined1 local_147 [7];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_140;
  uint local_130;
  TObjectPtr<UPCGSettings>_u_0 local_128;
  FObjectPtr_u_0 local_120;
  TObjectPtr<UObject> local_118;
  UPVGrowthData *local_110;
  FObjectPtr_u_0 *local_108;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId45,"FPVSlopeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVSlopeSettings.cpp"
               ,0x2d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId45);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVSlopeSettings.cpp"
                         ,0x2f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVSlopeSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_148);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_128.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_128.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_128.DebugPtr);
        }
        if (local_128.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPVSlopeSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_128.ObjectPtr,pUVar8);
          TVar10 = local_128;
          if (bVar5) goto LAB_14da851ad;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPVSlopeSettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_14da851ad;
      }
    }
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPVSlopeSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    TVar10.DebugPtr = (UPCGSettings *)0x0;
    if (bVar5) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14da851ad:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVSlopeSettings.cpp"
                         ,0x32,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_140,&PCGPinConstants::DefaultInputLabel);
  uVar14 = (ulonglong)local_140.ArrayNum;
  local_130 = local_140.ArrayNum;
  local_108 = (FObjectPtr_u_0 *)(local_140.AllocatorInstance.Data + uVar14 * 0x78);
  FVar16.Data = local_140.AllocatorInstance.Data;
  do {
    pFVar4 = local_108;
    if (local_140.ArrayNum != (uint)uVar14) {
      local_147[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_147);
    }
    if ((FObjectPtr_u_0 *)FVar16.Data == pFVar4) goto LAB_14da8543c;
    local_120 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar16.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14da85252:
      if (local_120.Handle == (UObject *)0x0) goto LAB_14da85272;
      pUVar8 = UPVGrowthData::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_120,pUVar8);
      FVar15 = local_120;
      if (!bVar5) goto LAB_14da85272;
    }
    else {
      if (local_120.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_120.Handle);
        goto LAB_14da85252;
      }
LAB_14da85272:
      FVar15.Handle = (UObject *)0x0;
    }
    if (FVar15.Handle == (UObject *)0x0) {
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
LAB_14da8543c:
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
      if ((FPCGTaggedData *)local_140.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    FManagedArrayCollection::FManagedArrayCollection
              (&local_f8,(FManagedArrayCollection *)&FVar15.Handle[3].field_0x20);
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
      FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_148);
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVGrowthData>(pUVar12);
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_148);
      if ((pUVar13 == (UPVGrowthData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_110 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPVGrowthData *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_118,(bool *)&local_110);
    }
    if (*(float *)&TVar10.DebugPtr[1]._padding_ != 0.0) {
      FPVSlope::ApplySlope((FPVSlopeParams *)(TVar10.DebugPtr + 1),&local_f8);
    }
    FManagedArrayCollection::operator=((FManagedArrayCollection *)&pUVar13->field_0x98,&local_f8);
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
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
    uVar14 = (ulonglong)local_130;
    FVar16.Data = FVar16.Data + 0x78;
  } while( true );
}

