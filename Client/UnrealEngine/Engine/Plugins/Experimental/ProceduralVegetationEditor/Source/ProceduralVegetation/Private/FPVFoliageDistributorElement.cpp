// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da811a0

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

bool __thiscall
FPVFoliageDistributorElement::ExecuteInternal
          (FPVFoliageDistributorElement *this,FPCGContext *param_1)

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
  UPVFoliageMeshData *pUVar13;
  ulonglong uVar14;
  FObjectPtr_u_0 FVar15;
  FPCGDataPtrWrapper *this_01;
  ForAnyElementType FVar16;
  bool bVar17;
  undefined1 auStackY_1d8 [32];
  <lambda_1> local_198;
  undefined1 local_197 [7];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_190;
  FMiscSettings local_180;
  uint local_17c;
  TObjectPtr<UPCGSettings>_u_0 local_178;
  FObjectPtr_u_0 local_170;
  FPhyllotaxySettings local_168;
  TObjectPtr<UObject> local_158;
  UPVFoliageMeshData *local_150;
  FObjectPtr_u_0 *local_148;
  FVectorSettings local_140;
  void *local_128;
  FScriptContainerElement *pFStack_120;
  float local_118;
  float local_114;
  TObjectPtr<UPropertyBag_const_> *local_110;
  FDistributionSettings local_108;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId77,"FPVFoliageDistributorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVFoliageDistributorSettings.cpp"
               ,0x4d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId77);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVFoliageDistributorSettings.cpp"
                         ,0x4f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVFoliageDistributorSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_198);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_178.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_178.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_178.DebugPtr);
        }
        if (local_178.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPVFoliageDistributorSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_178.ObjectPtr,pUVar8);
          TVar10 = local_178;
          if (bVar5) goto LAB_14da81351;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPVFoliageDistributorSettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_14da81351;
      }
    }
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPVFoliageDistributorSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    TVar10.DebugPtr = (UPCGSettings *)0x0;
    if (bVar5) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14da81351:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVFoliageDistributorSettings.cpp"
                         ,0x52,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_190,&PCGPinConstants::DefaultInputLabel);
  uVar14 = (ulonglong)local_190.ArrayNum;
  local_17c = local_190.ArrayNum;
  local_148 = (FObjectPtr_u_0 *)(local_190.AllocatorInstance.Data + uVar14 * 0x78);
  FVar16.Data = local_190.AllocatorInstance.Data;
  do {
    pFVar4 = local_148;
    if (local_190.ArrayNum != (uint)uVar14) {
      local_197[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_197);
    }
    if ((FObjectPtr_u_0 *)FVar16.Data == pFVar4) goto LAB_14da81704;
    local_170 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar16.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14da813f2:
      if (local_170.Handle == (UObject *)0x0) goto LAB_14da81412;
      pUVar8 = UPVMeshData::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_170,pUVar8);
      FVar15 = local_170;
      if (!bVar5) goto LAB_14da81412;
    }
    else {
      if (local_170.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_170.Handle);
        goto LAB_14da813f2;
      }
LAB_14da81412:
      FVar15.Handle = (UObject *)0x0;
    }
    if (FVar15.Handle == (UObject *)0x0) {
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
LAB_14da81704:
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
      if ((FPCGTaggedData *)local_190.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_190.AllocatorInstance.Data);
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    FManagedArrayCollection::FManagedArrayCollection
              (&local_e8,(FManagedArrayCollection *)&FVar15.Handle[3].field_0x20);
    bVar5 = IsInGameThread();
    if (bVar5) {
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVFoliageMeshData>(pUVar12);
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
      FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_198);
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVFoliageMeshData>(pUVar12);
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_198);
      if ((pUVar13 == (UPVFoliageMeshData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_150 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 != (UPVFoliageMeshData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_158,(bool *)&local_150);
    }
    local_108.EthyleneThreshold = *(float *)&TVar10.DebugPtr[1]._padding_;
    local_110 = &TVar10.DebugPtr[1].OverriddenSettingsPropertyBag;
    local_108.OverrideDistribution = *(bool *)((longlong)&TVar10.DebugPtr[1]._padding_ + 4);
    local_114 = (float)TVar10.DebugPtr[1].CachedOverridableParams.ArrayMax;
    local_140.OverrideAxilAngle = *(bool *)&TVar10.DebugPtr[2].CachedElement.Object;
    local_140.AxilAngleRamp = (FPVFloatRamp *)&TVar10.DebugPtr[2].CachedElement.SharedReferenceCount
    ;
    local_168.OverridePhyllotaxy = SUB81(TVar10.DebugPtr[3]._padding_,0);
    local_168.PhyllotaxyType = *(EPhyllotaxyType *)((longlong)&TVar10.DebugPtr[3]._padding_ + 1);
    local_108.InstanceSpacing = *(float *)&TVar10.DebugPtr[1]._padding_;
    local_168.PhyllotaxyFormation =
         *(EPhyllotaxyFormation *)((longlong)&TVar10.DebugPtr[3]._padding_ + 2);
    local_108.InstanceSpacingRampEffect =
         *(float *)(TVar10.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 1);
    local_168.MinimumNodeBuds = *(int *)((longlong)&TVar10.DebugPtr[3]._padding_ + 4);
    local_128 = TVar10.DebugPtr[1].CacheLock.CriticalSection.Opaque3[2];
    pFStack_120 = TVar10.DebugPtr[1].CachedOverridableParams.AllocatorInstance.Data;
    local_168.MaximumNodeBuds = (int)TVar10.DebugPtr[3]._padding_;
    local_118 = (float)TVar10.DebugPtr[1].CachedOverridableParams.ArrayNum;
    local_180.RandomSeed = (int)TVar10.DebugPtr[3]._padding_;
    local_140.AxilAngle = *(float *)((longlong)&TVar10.DebugPtr[2].CachedElement.Object + 4);
    local_108.InstanceSpacingRamp = (FPVFloatRamp *)&TVar10.DebugPtr[1]._padding_;
    local_140.AxilAngleRampUpperValue = *(float *)&TVar10.DebugPtr[3]._padding_;
    local_108.MaxPerBranch =
         *(int *)((longlong)TVar10.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 0xc);
    local_140.AxilAngleRampEffect = *(float *)((longlong)&TVar10.DebugPtr[3]._padding_ + 4);
    local_168.PhyllotaxyAdditionalAngle = *(float *)((longlong)&TVar10.DebugPtr[3]._padding_ + 4);
    FPVFoliage::DistributeFoliage
              (&local_e8,&local_e8,&local_108,(FScaleSettings *)&local_128,&local_140,&local_168,
               &local_180);
    FManagedArrayCollection::operator=((FManagedArrayCollection *)&pUVar13->field_0x98,&local_e8);
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
    FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
    uVar14 = (ulonglong)local_17c;
    FVar16.Data = FVar16.Data + 0x78;
  } while( true );
}

