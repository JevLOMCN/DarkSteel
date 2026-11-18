// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1482ceba0

UScriptStruct * __cdecl FNetworkPhysicsSettingsNetworkPhysicsComponent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent,
                           (UObject *)pUVar1,L"NetworkPhysicsSettingsNetworkPhysicsComponent");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent.
         OuterSingleton;
}

// FNetworkPhysicsSettingsNetworkPhysicsComponent @ 1482d8c60

FNetworkPhysicsSettingsNetworkPhysicsComponent * __thiscall
FNetworkPhysicsSettingsNetworkPhysicsComponent::FNetworkPhysicsSettingsNetworkPhysicsComponent
          (FNetworkPhysicsSettingsNetworkPhysicsComponent *this)

{
  this->bOverrideRedundantInputs = 0;
  this->bOverrideInputDecaySetTime = 0;
  this->bOverrideApplyInputDecayOverSetTime = 0;
  this->bOverrideTriggerResimOnInputReceive = 0;
  this->bOverrideApplySimProxyInputAtRuntime = 0;
  this->bOverrideApplySimProxyStateAtRuntime = 0;
  this->bOverrideValidateDataOnGameThread = 0;
  this->bOverrideAllowInputExtrapolation = 0;
  this->bOverrideApplyDataInsteadOfMergeData = 0;
  this->bOverrideEnableReliableFlow = 0;
  this->bOverrideEnableUnreliableFlow = 0;
  this->bOverrideCompareInputToTriggerRewind = 0;
  this->bOverridebCompareStateToTriggerRewindIncludeSimProxies = 0;
  this->bOverrideCompareStateToTriggerRewind = 0;
  this->bOverrideRedundantStates = 0;
  this->bOverrideRedundantRemoteInputs = 0;
  this->RedundantInputs = (ushort)PhysicsReplicationCVars::ResimulationCVars::RedundantInputs;
  this->RedundantRemoteInputs =
       (ushort)PhysicsReplicationCVars::ResimulationCVars::RedundantRemoteInputs;
  this->RedundantStates = (ushort)PhysicsReplicationCVars::ResimulationCVars::RedundantStates;
  this->bCompareStateToTriggerRewind =
       PhysicsReplicationCVars::ResimulationCVars::bCompareStateToTriggerRewind;
  this->bCompareStateToTriggerRewindIncludeSimProxies =
       PhysicsReplicationCVars::ResimulationCVars::bCompareStateToTriggerRewindIncludeSimProxies;
  this->bCompareInputToTriggerRewind =
       PhysicsReplicationCVars::ResimulationCVars::bCompareInputToTriggerRewind;
  this->bEnableUnreliableFlow = PhysicsReplicationCVars::ResimulationCVars::bEnableUnreliableFlow;
  this->bEnableReliableFlow = PhysicsReplicationCVars::ResimulationCVars::bEnableReliableFlow;
  this->bApplyDataInsteadOfMergeData =
       PhysicsReplicationCVars::ResimulationCVars::bApplyDataInsteadOfMergeData;
  this->bAllowInputExtrapolation =
       PhysicsReplicationCVars::ResimulationCVars::bAllowInputExtrapolation;
  this->bValidateDataOnGameThread =
       PhysicsReplicationCVars::ResimulationCVars::bValidateDataOnGameThread;
  this->bApplySimProxyStateAtRuntime =
       PhysicsReplicationCVars::ResimulationCVars::bApplySimProxyStateAtRuntime;
  this->bApplySimProxyInputAtRuntime =
       PhysicsReplicationCVars::ResimulationCVars::bApplySimProxyInputAtRuntime;
  this->bTriggerResimOnInputReceive =
       PhysicsReplicationCVars::ResimulationCVars::bTriggerResimOnInputReceive;
  this->bApplyInputDecayOverSetTime =
       PhysicsReplicationCVars::ResimulationCVars::bApplyInputDecayOverSetTime;
  this->InputDecaySetTime = PhysicsReplicationCVars::ResimulationCVars::InputDecaySetTime;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->InputDecayCurve);
  return this;
}

// operator= @ 1482de640

FNetworkPhysicsSettingsNetworkPhysicsComponent * __thiscall
FNetworkPhysicsSettingsNetworkPhysicsComponent::operator=
          (FNetworkPhysicsSettingsNetworkPhysicsComponent *this,
          FNetworkPhysicsSettingsNetworkPhysicsComponent *param_1)

{
  int *piVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  UCurveFloat *pUVar6;
  uint uVar7;
  
  uVar7 = (this->bOverrideRedundantInputs ^ param_1->bOverrideRedundantInputs) & 1 ^ *(uint *)this;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 2 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 4 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 8 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x10 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x20 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x40 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x80 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x100 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x200 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x400 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x800 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x1000 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x2000 ^ uVar7;
  *(uint *)this = uVar7;
  uVar7 = (uVar7 ^ *(uint *)param_1) & 0x4000 ^ uVar7;
  *(uint *)this = uVar7;
  pTVar2 = &(this->InputDecayCurve).EditorCurveData.Keys;
  *(uint *)this = (uVar7 ^ *(uint *)param_1) & 0x8000 ^ uVar7;
  pTVar3 = &(param_1->InputDecayCurve).EditorCurveData.Keys;
  this->RedundantInputs = param_1->RedundantInputs;
  this->RedundantRemoteInputs = param_1->RedundantRemoteInputs;
  this->RedundantStates = param_1->RedundantStates;
  this->bCompareStateToTriggerRewind = param_1->bCompareStateToTriggerRewind;
  this->bCompareStateToTriggerRewindIncludeSimProxies =
       param_1->bCompareStateToTriggerRewindIncludeSimProxies;
  this->bCompareInputToTriggerRewind = param_1->bCompareInputToTriggerRewind;
  this->bEnableUnreliableFlow = param_1->bEnableUnreliableFlow;
  this->bEnableReliableFlow = param_1->bEnableReliableFlow;
  this->bApplyDataInsteadOfMergeData = param_1->bApplyDataInsteadOfMergeData;
  this->bAllowInputExtrapolation = param_1->bAllowInputExtrapolation;
  this->bValidateDataOnGameThread = param_1->bValidateDataOnGameThread;
  this->bApplySimProxyStateAtRuntime = param_1->bApplySimProxyStateAtRuntime;
  this->bApplySimProxyInputAtRuntime = param_1->bApplySimProxyInputAtRuntime;
  this->bTriggerResimOnInputReceive = param_1->bTriggerResimOnInputReceive;
  this->bApplyInputDecayOverSetTime = param_1->bApplyInputDecayOverSetTime;
  this->InputDecaySetTime = param_1->InputDecaySetTime;
  *(int *)&(this->InputDecayCurve).EditorCurveData._padding_ =
       (int)(param_1->InputDecayCurve).EditorCurveData._padding_;
  *(undefined1 *)((longlong)&(this->InputDecayCurve).EditorCurveData._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->InputDecayCurve).EditorCurveData._padding_ + 4);
  *(undefined1 *)((longlong)&(this->InputDecayCurve).EditorCurveData._padding_ + 5) =
       *(undefined1 *)((longlong)&(param_1->InputDecayCurve).EditorCurveData._padding_ + 5);
  if (pTVar2 != pTVar3) {
    iVar4 = (this->InputDecayCurve).EditorCurveData.Keys.ArrayMax;
    piVar1 = &(this->InputDecayCurve).EditorCurveData.Keys.ArrayMax;
    iVar5 = (param_1->InputDecayCurve).EditorCurveData.Keys.ArrayNum;
    _Src = (pTVar3->AllocatorInstance).Data;
    (this->InputDecayCurve).EditorCurveData.Keys.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar5,iVar4,&pTVar2->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0x1c);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->InputDecayCurve).ExternalCurve.field0_0x0.DebugPtr,
     pUVar6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->InputDecayCurve).ExternalCurve.field0_0x0 =
       (param_1->InputDecayCurve).ExternalCurve.field0_0x0;
  return this;
}

