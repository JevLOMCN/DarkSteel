// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 14749d3e0

UScriptStruct * __cdecl FAnimNode_AssetPlayerBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,(UObject *)pUVar1,
                         L"AnimNode_AssetPlayerBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerBase.OuterSingleton;
}

// Initialize_AnyThread @ 14749d420

void __thiscall
FAnimNode_AssetPlayerBase::Initialize_AnyThread
          (FAnimNode_AssetPlayerBase *this,FAnimationInitializeContext *param_1)

{
  (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  this->bHasBeenFullWeight = false;
  return;
}

// Update_AnyThread @ 14749d440

void __thiscall
FAnimNode_AssetPlayerBase::Update_AnyThread
          (FAnimNode_AssetPlayerBase *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  
  fVar1 = param_1->CurrentWeight;
  this->BlendWeight = fVar1;
  if ((this->bHasBeenFullWeight == false) && (fVar1 < __real_3f7fff58)) {
    this->bHasBeenFullWeight = false;
                    /* WARNING: Could not recover jumptable at 0x00014749d461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x100))();
    return;
  }
  this->bHasBeenFullWeight = true;
                    /* WARNING: Could not recover jumptable at 0x00014749d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x100))();
  return;
}

// GetAccumulatedTime @ 14749d480

float __thiscall FAnimNode_AssetPlayerBase::GetAccumulatedTime(FAnimNode_AssetPlayerBase *this)

{
  return this->InternalTimeAccumulator;
}

// SetAccumulatedTime @ 14749d490

void __thiscall
FAnimNode_AssetPlayerBase::SetAccumulatedTime(FAnimNode_AssetPlayerBase *this,float param_1)

{
  this->InternalTimeAccumulator = param_1;
  (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  return;
}

// GetCachedBlendWeight @ 14749d4b0

float __thiscall FAnimNode_AssetPlayerBase::GetCachedBlendWeight(FAnimNode_AssetPlayerBase *this)

{
  return this->BlendWeight;
}

// ClearCachedBlendWeight @ 14749d4c0

void __thiscall FAnimNode_AssetPlayerBase::ClearCachedBlendWeight(FAnimNode_AssetPlayerBase *this)

{
  this->BlendWeight = 0.0;
  return;
}

// GetCurrentAssetTimePlayRateAdjusted @ 14749d4d0

float __thiscall
FAnimNode_AssetPlayerBase::GetCurrentAssetTimePlayRateAdjusted(FAnimNode_AssetPlayerBase *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014749d4d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0xc0))();
  return fVar1;
}

// GetDeltaTimeRecord @ 14749d4e0

FDeltaTimeRecord * __thiscall
FAnimNode_AssetPlayerBase::GetDeltaTimeRecord(FAnimNode_AssetPlayerBase *this)

{
  return &this->DeltaTimeRecord;
}

// CreateTickRecordForNode @ 1474cac40

void __thiscall
FAnimNode_AssetPlayerBase::CreateTickRecordForNode
          (FAnimNode_AssetPlayerBase *this,FAnimationUpdateContext *param_1,
          UAnimSequenceBase *param_2,bool param_3,float param_4,bool param_5)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  EAnimSyncMethod EVar4;
  Type TVar5;
  longlong lVar6;
  FAnimSyncDebugInfo *pFVar7;
  FAnimSyncGroupScope *local_res8;
  longlong local_res10;
  FAnimSyncParams local_158;
  FAnimSyncGroupScope **local_148;
  code **local_140;
  longlong *local_138;
  code **local_130;
  FName local_128;
  FAnimSyncGroupScope *local_120;
  code *local_118;
  FAnimSyncGroupScope ***local_110;
  code *local_108;
  code ***local_100;
  code *local_f8;
  longlong **local_f0;
  code *local_e8;
  code ***local_e0;
  FAnimTickRecord local_d8;
  FAnimSyncDebugInfo local_58 [2];
  
  fVar1 = param_1->CurrentWeight;
  if ((param_1->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x10d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_148 = &local_res8;
  lVar6 = 0;
  local_110 = &local_148;
  local_res8 = (FAnimSyncGroupScope *)0x0;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAnimationBaseContext::GetMessageChecked<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::FAnimSyncGroupScope_&>
              ::Call;
  local_140 = &local_118;
  local_100 = &local_140;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
              ::Call;
  UE::Anim::FMessageStack::TopMessage
            ((FMessageStack *)(param_1->_padding_ + 0x148),UE::Anim::FAnimSyncGroupScope::TypeName,
             (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_108);
  if ((local_res8 == (FAnimSyncGroupScope *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Message != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x116,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_120 = local_res8;
  FAnimTickRecord::FAnimTickRecord
            (&local_d8,param_2,param_3,param_4,param_5,fVar1,&this->InternalTimeAccumulator,
             &this->MarkerTickRecord);
  FAnimTickRecord::GatherContextData(&local_d8,param_1);
  local_d8.DeltaTimeRecord = &this->DeltaTimeRecord;
  local_d8.RootMotionWeightModifier = param_1->RootMotionWeightModifier;
  if (param_1->_padding_ == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1442789968400351459>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0xe3,"SharedContext != nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_138 = &local_res10;
    local_f0 = &local_138;
    local_res10 = 0;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::FAnimInertializationSyncScope>'::__l5::<lambda_1>,void,UE::Anim::FAnimInertializationSyncScope_&>
               ::Call;
    local_130 = &local_f8;
    local_e0 = &local_130;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimInertializationSyncScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
               ::Call;
    UE::Anim::FMessageStack::TopMessage
              ((FMessageStack *)(param_1->_padding_ + 0x148),
               UE::Anim::FAnimInertializationSyncScope::TypeName,
               (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_e8);
    lVar6 = local_res10;
  }
  local_d8.bRequestedInertialization = lVar6 != 0;
  pFVar7 = UE::Anim::FAnimSyncDebugInfo::FAnimSyncDebugInfo
                     (local_58,(FAnimationBaseContext *)param_1);
  bVar3 = local_d8.bRequestedInertialization;
  TVar5 = (**(code **)(this->_padding_ + 0x110))(this);
  (**(code **)(this->_padding_ + 0x108))(this,&local_128);
  EVar4 = (**(code **)(this->_padding_ + 0x118))(this);
  local_158.bOverridePositionWhenJoiningSyncGroupAsLeader =
       (bool)(**(code **)(this->_padding_ + 0x120))();
  if (bVar3 == false) {
    if ((1 < TVar5 - TransitionLeader) || (this->bHasBeenFullWeight != false)) goto LAB_1474caec8;
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
  }
  else {
    if (TVar5 - TransitionLeader < 2) {
      local_128.ComparisonIndex.Value = 0;
      local_128.Number = 0;
    }
LAB_1474caec8:
    if (local_128 != (FName)0x0) goto LAB_1474caedb;
  }
  if (EVar4 == SyncGroup) {
    EVar4 = DoNotSync;
  }
LAB_1474caedb:
  local_158.GroupName = local_128;
  local_158.Role = TVar5;
  local_158.Method = EVar4;
  UE::Anim::FAnimSyncGroupScope::AddTickRecord(local_120,&local_d8,&local_158,pFVar7);
  FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

// GetSyncParams @ 1474e0040

FAnimSyncParams * __thiscall
FAnimNode_AssetPlayerBase::GetSyncParams
          (FAnimNode_AssetPlayerBase *this,FAnimSyncParams *__return_storage_ptr__,bool param_1)

{
  EAnimSyncMethod EVar1;
  bool bVar2;
  Type TVar3;
  FName FVar4;
  FName local_res8;
  
  TVar3 = (**(code **)(this->_padding_ + 0x110))();
  (**(code **)(this->_padding_ + 0x108))(this,&local_res8);
  EVar1 = (**(code **)(this->_padding_ + 0x118))(this);
  bVar2 = (bool)(**(code **)(this->_padding_ + 0x120))(this);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (param_1) {
    if (TVar3 - TransitionLeader < 2) {
      local_res8 = FVar4;
    }
LAB_1474e00bb:
    FVar4 = local_res8;
    if (FVar4 != (FName)0x0) goto LAB_1474e00cd;
  }
  else if ((1 < TVar3 - TransitionLeader) || (this->bHasBeenFullWeight != false))
  goto LAB_1474e00bb;
  if (EVar1 == SyncGroup) {
    EVar1 = DoNotSync;
  }
LAB_1474e00cd:
  __return_storage_ptr__->GroupName = FVar4;
  __return_storage_ptr__->Method = EVar1;
  __return_storage_ptr__->Role = TVar3;
  __return_storage_ptr__->bOverridePositionWhenJoiningSyncGroupAsLeader = bVar2;
  return __return_storage_ptr__;
}

