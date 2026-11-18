// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 26

// StaticStruct @ 14a898d40

UScriptStruct * __cdecl FAnimNode_MotionMatching::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar1,
                         L"AnimNode_MotionMatching");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton;
}

// Initialize_AnyThread @ 14a899570

void __thiscall
FAnimNode_MotionMatching::Initialize_AnyThread
          (FAnimNode_MotionMatching *this,FAnimationInitializeContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_MotionMatching::Initialize_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FAnimNode_BlendStack_Standalone::Initialize_AnyThread
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  FMotionMatchingState::Reset(&this->MotionMatchingState);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetIgnoreForRelevancyTest @ 14a8995d0

bool __thiscall FAnimNode_MotionMatching::GetIgnoreForRelevancyTest(FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bIgnoreForRelevancyTest.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bIgnoreForRelevancyTest,"bIgnoreForRelevancyTest");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_bIgnoreForRelevancyTest.Id = pFVar7->Id;
    CachedId_bIgnoreForRelevancyTest.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bIgnoreForRelevancyTest.Index;
  FVar2 = CachedId_bIgnoreForRelevancyTest.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// SetIgnoreForRelevancyTest @ 14a899720

bool __thiscall
FAnimNode_MotionMatching::SetIgnoreForRelevancyTest(FAnimNode_MotionMatching *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  void *pvVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bIgnoreForRelevancyTest.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bIgnoreForRelevancyTest,"bIgnoreForRelevancyTest");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_bIgnoreForRelevancyTest.Id = pFVar7->Id;
    CachedId_bIgnoreForRelevancyTest.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bIgnoreForRelevancyTest.Index;
  FVar2 = CachedId_bIgnoreForRelevancyTest.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pvVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pvVar8 == (void *)0x0) {
    return false;
  }
  *(bool *)pvVar8 = param_1;
  return true;
}

// GetGroupName @ 14a8998a0

FName __thiscall FAnimNode_MotionMatching::GetGroupName(FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNodeDataId *pFVar5;
  FName FVar6;
  undefined8 *puVar7;
  FName in_RDX;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupName.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupName,"GroupName");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar4,
                           L"AnimNode_MotionMatching");
    }
    pFVar5 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_GroupName.Id = pFVar5->Id;
    CachedId_GroupName.Index = pFVar5->Index;
  }
  iVar2 = CachedId_GroupName.Index;
  FVar6 = CachedId_GroupName.Id;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar6 = (FName)(*pcVar1)();
    return FVar6;
  }
  local_28.Id = FVar6;
  local_28.Index = iVar2;
  puVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  *(undefined8 *)in_RDX = *puVar7;
  return in_RDX;
}

// GetGroupRole @ 14a899a10

Type __thiscall FAnimNode_MotionMatching::GetGroupRole(FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  Type TVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  byte *pbVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupRole.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupRole,"GroupRole");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_GroupRole.Id = pFVar7->Id;
    CachedId_GroupRole.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupRole.Index;
  FVar2 = CachedId_GroupRole.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    TVar5 = (*pcVar1)();
    return TVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pbVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (Type)*pbVar8;
}

// GetGroupMethod @ 14a899b60

EAnimSyncMethod __thiscall FAnimNode_MotionMatching::GetGroupMethod(FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EAnimSyncMethod EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EAnimSyncMethod *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Method.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Method,"Method");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_Method.Id = pFVar7->Id;
    CachedId_Method.Index = pFVar7->Index;
  }
  iVar3 = CachedId_Method.Index;
  FVar2 = CachedId_Method.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pEVar8;
}

// GetOverridePositionWhenJoiningSyncGroupAsLeader @ 14a899cb0

bool __thiscall
FAnimNode_MotionMatching::GetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bOverridePositionWhenJoiningSyncGroupAsLeader,
                     "bOverridePositionWhenJoiningSyncGroupAsLeader");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bOverridePositionWhenJoiningSyncGroupAsLeader,
                        (FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Id = pFVar7->Id;
    CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Index;
  FVar2 = CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// IsLooping @ 14a899e00

bool __thiscall FAnimNode_MotionMatching::IsLooping(FAnimNode_MotionMatching *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 == 0) {
    return false;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = FBlendStackAnimPlayer::IsLooping((FBlendStackAnimPlayer *)this->_padding_);
  return bVar3;
}

// SetGroupName @ 14a899e70

bool __thiscall FAnimNode_MotionMatching::SetGroupName(FAnimNode_MotionMatching *this,FName param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  FName *pFVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupName.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupName,"GroupName");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_GroupName.Id = pFVar7->Id;
    CachedId_GroupName.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupName.Index;
  FVar2 = CachedId_GroupName.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pFVar8 == (FName *)0x0) {
    return false;
  }
  *pFVar8 = param_1;
  return true;
}

// SetGroupRole @ 14a899ff0

bool __thiscall FAnimNode_MotionMatching::SetGroupRole(FAnimNode_MotionMatching *this,Type param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupRole.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupRole,"GroupRole");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_GroupRole.Id = pFVar7->Id;
    CachedId_GroupRole.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupRole.Index;
  FVar2 = CachedId_GroupRole.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (puVar8 == (undefined1 *)0x0) {
    return false;
  }
  *puVar8 = (char)param_1;
  return true;
}

// SetGroupMethod @ 14a89a170

bool __thiscall
FAnimNode_MotionMatching::SetGroupMethod(FAnimNode_MotionMatching *this,EAnimSyncMethod param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EAnimSyncMethod *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Method.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Method,"Method");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_Method.Id = pFVar7->Id;
    CachedId_Method.Index = pFVar7->Index;
  }
  iVar3 = CachedId_Method.Index;
  FVar2 = CachedId_Method.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pEVar8 == (EAnimSyncMethod *)0x0) {
    return false;
  }
  *pEVar8 = param_1;
  return true;
}

// SetOverridePositionWhenJoiningSyncGroupAsLeader @ 14a89a2f0

bool __thiscall
FAnimNode_MotionMatching::SetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_MotionMatching *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  void *pvVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bOverridePositionWhenJoiningSyncGroupAsLeader,
                     "bOverridePositionWhenJoiningSyncGroupAsLeader");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bOverridePositionWhenJoiningSyncGroupAsLeader,
                        (FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Id = pFVar7->Id;
    CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Index;
  FVar2 = CachedId_bOverridePositionWhenJoiningSyncGroupAsLeader.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pvVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pvVar8 == (void *)0x0) {
    return false;
  }
  *(bool *)pvVar8 = param_1;
  return true;
}

// UpdateAssetPlayer @ 14a89a470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_MotionMatching::UpdateAssetPlayer
          (FAnimNode_MotionMatching *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UPoseSearchDatabase_const_>,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPoseSearchDatabase_const_> *pTVar3;
  float *pfVar4;
  float fVar5;
  bool bVar6;
  EPoseSearchInterruptMode EVar7;
  EAlphaBlendOption EVar8;
  EBlendStack_BlendspaceUpdateMode EVar9;
  FScriptContainerElement *pFVar10;
  UPoseSearchDatabase *pUVar11;
  FAnimNode_PoseSearchHistoryCollector_Base *pFVar12;
  UObject *pUVar13;
  FAnimNodeData *pFVar14;
  TObjectPtr<UBlendProfile>_u_0 TVar15;
  UPoseSearchSchema *this_00;
  code *pcVar16;
  double dVar17;
  double dVar18;
  FMotionMatchingState *pFVar19;
  ForElementType<FStructView> FVar20;
  bool bVar21;
  bool bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  short sVar25;
  int iVar26;
  undefined4 uVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_MotionMatching::UpdateAssetPlayer(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_PoseSearch_UpdateAssetPlayer>
  FVar29;
  FExposedValueHandler *this_01;
  UEnum *this_02;
  longlong lVar30;
  UAnimationAsset *pUVar31;
  FPoseHistoryProvider *pFVar32;
  FRootOffsetProvider *pFVar33;
  TTransform<double> *pTVar34;
  UObject *pUVar35;
  TVector<double> *pTVar36;
  FPoseSearchEvent *pFVar37;
  FName FVar38;
  undefined8 uVar39;
  FPoseIndicesHistory *this_03;
  UPackage *pUVar40;
  FNodeDataId *pFVar41;
  FAnimNodeFunctionRef *pFVar42;
  FAnimNode_AssetPlayerBase *pFVar43;
  UClass *pUVar44;
  FGenerateTrajectoryPoseHistory *pFVar45;
  undefined8 *puVar46;
  UMirrorDataTable *pUVar47;
  EBlendStack_BlendspaceUpdateMode *pEVar48;
  short sVar49;
  uint uVar50;
  ulonglong uVar51;
  longlong *plVar52;
  uint uVar53;
  FScriptContainerElement *pFVar54;
  FBlendStackAnimPlayer *pFVar55;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 TVar56;
  undefined1 *puVar57;
  undefined1 *puVar58;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 TVar59;
  FBlendStackAnimPlayer *pFVar60;
  int iVar61;
  int iVar62;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 TVar63;
  FGenerateTrajectoryPoseHistory *pFVar64;
  float fVar65;
  FNameEntryId FVar66;
  float fVar67;
  double dVar68;
  undefined1 auStackY_3328 [32];
  undefined1 local_3288;
  undefined1 local_3287;
  undefined1 local_3286;
  undefined1 local_3285 [5];
  FName local_3280;
  byte local_3278;
  FName local_3270;
  FAnimationUpdateContext *local_3268;
  FGenerateTrajectoryPoseHistory *local_3260;
  FString local_3258;
  FColor_u_0 local_3248 [2];
  FAnimNode_MotionMatching *local_3240;
  undefined1 local_3238 [24];
  bool local_3220;
  undefined3 uStack_321f;
  UPoseSearchDatabase *local_3218;
  UPoseSearchDatabase *local_3210;
  FFloatInterval local_3208;
  undefined8 local_3200;
  undefined8 local_31f8;
  FName local_31f0;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 local_31e8;
  int iStack_31e0;
  undefined4 uStack_31dc;
  FString local_31d8;
  FString local_31c8;
  FString local_31b8;
  FString local_31a8;
  FNodeDataId local_3198;
  FName local_3188;
  FName local_3180;
  FNodeDataId local_3178;
  FName local_3168;
  FName local_3160;
  FName local_3158;
  FString local_3150;
  FString local_3140;
  FString local_3130;
  FString local_3120;
  FString local_3110;
  FString local_3100;
  FString local_30f0;
  FScriptContainerElement *local_30d8;
  int iStack_30d0;
  undefined4 uStack_30cc;
  FPoseSearchInteractionAvailability *local_30c8;
  int iStack_30c0;
  undefined4 uStack_30bc;
  TObjectPtr<UObject_const_>_u_0 local_30b8;
  undefined4 local_30b0;
  undefined1 local_30ac;
  double local_30a8;
  double dStack_30a0;
  double local_3098;
  undefined2 local_3090;
  undefined8 local_3088;
  TVector<double>_u_0 local_3080;
  TVector<double>_u_0 local_3068;
  FSearchResult local_3050;
  FScriptContainerElement *local_3028;
  undefined8 uStack_3020;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 local_3018;
  undefined8 uStack_3010;
  FName local_3008;
  undefined1 local_3000 [8];
  TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope> local_2ff8;
  undefined1 local_2fe0 [8];
  FName local_2fd8 [2];
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_2fc8;
  FNodeDataId local_2fb8;
  FNodeDataId local_2fac;
  FPoseSearchEvent local_2fa0;
  double local_2f78;
  TVector<double> local_2f70;
  FChooserEvaluationContext local_2f58;
  FSearchResults_Single local_2ec8;
  undefined1 local_2da8 [232];
  void *local_2cc0;
  undefined4 local_2cb8;
  ForAnyElementType local_2ca8;
  int local_2c7c;
  undefined4 uStack_2c78;
  undefined8 uStack_2c74;
  int local_2c6c;
  float fStack_2c68;
  undefined4 local_2c64;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_2c28;
  undefined4 local_b60;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_9b8;
  undefined4 local_100;
  TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  local_f0;
  ulonglong local_98;
  
  puVar57 = auStackY_3328;
  puVar58 = auStackY_3328;
  local_98 = __security_cookie.value ^ (ulonglong)&local_3288;
  local_3268 = param_1;
  local_3240 = this;
  FStatsHierarchical::BeginMeasurement("FAnimNode_MotionMatching::UpdateAssetPlayer");
  iVar62 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PoseSearch_UpdateAssetPlayer ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_MotionMatching::UpdateAssetPlayer(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_PoseSearch_UpdateAssetPlayer>
         )0x0) {
      pFVar28 = ::FName::FName(&local_3008,"STAT_PoseSearch_UpdateAssetPlayer");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_UpdateAssetPlayer,*pFVar28,
                 L"STAT_PoseSearch_UpdateAssetPlayer","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar29 = StatPtr_STAT_PoseSearch_UpdateAssetPlayer;
  if (StatPtr_STAT_PoseSearch_UpdateAssetPlayer ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_MotionMatching::UpdateAssetPlayer(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_PoseSearch_UpdateAssetPlayer>
       )0x0) {
    pFVar28 = ::FName::FName(local_2fd8,"STAT_PoseSearch_UpdateAssetPlayer");
    FVar29 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_MotionMatching::UpdateAssetPlayer(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_PoseSearch_UpdateAssetPlayer>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_UpdateAssetPlayer,
                          *pFVar28,L"STAT_PoseSearch_UpdateAssetPlayer","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_3280.ComparisonIndex.Value = 0;
  local_3280.Number = 0;
  local_3278 = 0;
  FVar38 = *(FName *)FVar29;
  if ((FVar38.ComparisonIndex.Value.Value != 0) || (FVar38.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3248[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3248[0]._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      local_3278 = local_3278 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_31f0.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_31f0.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_31f0,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatching.cpp"
                   ,0x52);
        local_3278 = local_3278 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_3280 = FVar38;
      local_3270 = FVar38;
      FThreadStats::AddMessage(FVar38,CycleScopeStart);
      local_3278 = local_3278 | 4;
    }
  }
  if ((param_1->_padding_ == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.AnimInstanceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatching.cpp"
                          ,0x56,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  if ((((this->bResetOnBecomingRelevant != false) &&
       (sVar49 = (this->UpdateCounter).Counter, sVar49 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar49 != *(short *)(param_1->_padding_ + 0x5b0))) {
    sVar25 = (this->UpdateCounter).Counter + 1;
    sVar49 = 0;
    if (sVar25 != -1) {
      sVar49 = sVar25;
    }
    if ((GFrameCounter == 0xffffffffffffffff) || (sVar49 != *(short *)(param_1->_padding_ + 0x5b0)))
    {
      FMotionMatchingState::Reset(&this->MotionMatchingState);
      FAnimNode_BlendStack_Standalone::Reset((FAnimNode_BlendStack_Standalone *)this);
    }
  }
  lVar30 = param_1->_padding_;
  (this->UpdateCounter).Counter = *(short *)(lVar30 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar30 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar30 + 0x5b2);
  if (this->bOverrideDatabaseInput == false) {
    pTVar2 = &this->DatabasesToSearch;
    piVar1 = &(this->DatabasesToSearch).ArrayMax;
    (this->DatabasesToSearch).ArrayNum = 0;
    if ((this->DatabasesToSearch).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pTVar3 = &this->Database;
    if ((pTVar3->field0_0x0).DebugPtr != (UPoseSearchDatabase *)0x0) {
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar10 <= pTVar3) && (pTVar3 < pFVar10 + (longlong)*piVar1 * 8)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar26 = (this->DatabasesToSearch).ArrayNum;
      if (iVar26 == (this->DatabasesToSearch).ArrayMax) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,&(this->DatabasesToSearch).ArrayMax);
      }
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      (this->DatabasesToSearch).ArrayNum = iVar26 + 1;
      pUVar11 = (pTVar3->field0_0x0).DebugPtr;
      *(UPoseSearchDatabase **)(pFVar10 + (longlong)iVar26 * 8) = pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UPoseSearchDatabase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
    }
  }
  fVar67 = __real_3f800000;
  if (GVarAnimNodeMotionMatchingDrawInfo != false) {
    this_02 = StaticEnum<enum_EPoseSearchInterruptMode>();
    if ((this_02 == (UEnum *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumClass != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0xca4,L""), bVar21)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    UEnum::GetNameByValue(this_02,(long64)&local_3188);
    ::FName::ToString(&local_3188,&local_3150);
    ::FString::PrintfImpl(&local_3258,L"NextUpdateInterruptMode(%s)\n");
    if (local_3150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3150.Data.AllocatorInstance.Data);
    }
    pUVar11 = (this->MotionMatchingState).SearchResult.SelectedDatabase.field0_0x0.DebugPtr;
    if (pUVar11 == (UPoseSearchDatabase *)0x0) {
      ::FString::FString(&local_31d8,L"None");
    }
    else {
      local_3158 = (FName)pUVar11->_padding_;
      ::FName::ToString(&local_3158,&local_31d8);
    }
    ::FString::PrintfImpl(&local_30f0,L"Current Database(%s)\n");
    iVar26 = iVar62;
    if (local_30f0.Data.ArrayNum != 0) {
      iVar26 = local_30f0.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(&local_3258,(wchar_t *)local_30f0.Data.AllocatorInstance.Data,iVar26);
    if (local_30f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30f0.Data.AllocatorInstance.Data);
    }
    if (local_31d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_31d8.Data.AllocatorInstance.Data);
    }
    lVar30 = (**(code **)(this->_padding_ + 0xa0))(this);
    if (lVar30 == 0) {
      ::FString::FString(&local_31c8,L"None");
    }
    else {
      local_3180 = *(FName *)(lVar30 + 0x18);
      ::FName::ToString(&local_3180,&local_31c8);
    }
    ::FString::PrintfImpl(&local_3140,L"Current Asset(%s)\n");
    iVar26 = iVar62;
    if (local_3140.Data.ArrayNum != 0) {
      iVar26 = local_3140.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(&local_3258,(wchar_t *)local_3140.Data.AllocatorInstance.Data,iVar26);
    if (local_3140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3140.Data.AllocatorInstance.Data);
    }
    if (local_31c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_31c8.Data.AllocatorInstance.Data);
    }
    if (GVarAnimNodeMotionMatchingDrawInfoVerbose != false) {
      ::FString::PrintfImpl(&local_3130,L"Databases to search:\n");
      iVar26 = local_3130.Data.ArrayNum + -1;
      if (local_3130.Data.ArrayNum == 0) {
        iVar26 = iVar62;
      }
      ::FString::AppendChars(&local_3258,(wchar_t *)local_3130.Data.AllocatorInstance.Data,iVar26);
      if (local_3130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3130.Data.AllocatorInstance.Data);
      }
      pFVar54 = (this->DatabasesToSearch).AllocatorInstance.Data;
      iVar26 = (this->DatabasesToSearch).ArrayNum;
      pFVar10 = pFVar54 + (longlong)iVar26 * 8;
      while( true ) {
        if ((this->DatabasesToSearch).ArrayNum != iVar26) {
          local_3288 = 0;
          `TCheckedPointerIterator<TObjectPtr<UPoseSearchDatabase_const_>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_3288);
        }
        if (pFVar54 == pFVar10) break;
        if (*(longlong *)pFVar54 == 0) {
          ::FString::FString(&local_31b8,L"None");
        }
        else {
          local_3168 = *(FName *)(*(longlong *)pFVar54 + 0x18);
          ::FName::ToString(&local_3168,&local_31b8);
        }
        ::FString::PrintfImpl(&local_3120,L"  %s\n");
        iVar61 = iVar62;
        if (local_3120.Data.ArrayNum != 0) {
          iVar61 = local_3120.Data.ArrayNum + -1;
        }
        ::FString::AppendChars(&local_3258,(wchar_t *)local_3120.Data.AllocatorInstance.Data,iVar61)
        ;
        if (local_3120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3120.Data.AllocatorInstance.Data);
        }
        if (local_31b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_31b8.Data.AllocatorInstance.Data);
        }
        pFVar54 = pFVar54 + 8;
      }
      ::FString::PrintfImpl(&local_3110,L"Blend Stack:\n");
      iVar26 = local_3110.Data.ArrayNum + -1;
      if (local_3110.Data.ArrayNum == 0) {
        iVar26 = iVar62;
      }
      ::FString::AppendChars(&local_3258,(wchar_t *)local_3110.Data.AllocatorInstance.Data,iVar26);
      if (local_3110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3110.Data.AllocatorInstance.Data);
      }
      iVar26 = (int)this->_padding_;
      pFVar55 = (FBlendStackAnimPlayer *)this->_padding_;
      pFVar60 = pFVar55 + iVar26;
      while( true ) {
        if ((int)this->_padding_ != iVar26) {
          local_3287 = 0;
          `TCheckedPointerIterator<FBlendStackAnimPlayer,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3287);
        }
        if (pFVar55 == pFVar60) break;
        FBlendStackAnimPlayer::GetPlayRate(pFVar55);
        FBlendStackAnimPlayer::GetAccumulatedTime(pFVar55);
        pUVar31 = FBlendStackAnimPlayer::GetAnimationAsset(pFVar55);
        if (pUVar31 == (UAnimationAsset *)0x0) {
          ::FString::FString(&local_31a8,L"None");
        }
        else {
          local_3160 = (FName)pUVar31->_padding_;
          ::FName::ToString(&local_3160,&local_31a8);
        }
        ::FString::PrintfImpl(&local_3100,L"  %s [time:%.2f|playrate:%.2f]\n");
        iVar61 = iVar62;
        if (local_3100.Data.ArrayNum != 0) {
          iVar61 = local_3100.Data.ArrayNum + -1;
        }
        ::FString::AppendChars(&local_3258,(wchar_t *)local_3100.Data.AllocatorInstance.Data,iVar61)
        ;
        if (local_3100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3100.Data.AllocatorInstance.Data);
        }
        if (local_31a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_31a8.Data.AllocatorInstance.Data);
        }
        pFVar55 = pFVar55 + 1;
      }
    }
    dVar68 = (double)GVarAnimNodeMotionMatchingDrawInfoHeight;
    local_3080._s_0.Z = dVar68 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    local_3080._8_4_ = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar68,0);
    local_3080._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar68;
    local_3080._12_4_ =
         (int)((ulonglong)(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar68) >> 0x20);
    FAnimInstanceProxy::AnimDrawDebugInWorldMessage
              ((FAnimInstanceProxy *)param_1->_padding_,&local_3258,
               (TVector<double> *)&local_3080._s_0,&FColor::Yellow,fVar67);
    if (local_3258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3258.Data.AllocatorInstance.Data);
    }
  }
  pFVar32 = FAnimationBaseContext::GetMessage<UE::PoseSearch::FPoseHistoryProvider>
                      ((FAnimationBaseContext *)param_1);
  if (pFVar32 != (FPoseHistoryProvider *)0x0) {
    if ((pFVar32->HistoryCollector == (FAnimNode_PoseSearchHistoryCollector_Base *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("HistoryCollector",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseHistoryProvider.cpp"
                            ,0xb,L""), bVar21)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar12 = pFVar32->HistoryCollector;
    if (((pFVar12->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("PoseHistoryPtr.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                            ,0x74,L""), bVar21)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar64 = (pFVar12->PoseHistoryPtr).Object;
    local_3260 = pFVar64;
    if (pFVar64 != (FGenerateTrajectoryPoseHistory *)0x0) {
      pFVar33 = FAnimationBaseContext::GetMessage<UE::AnimationWarping::FRootOffsetProvider>
                          ((FAnimationBaseContext *)param_1);
      lVar30 = param_1->_padding_;
      dVar68 = *(double *)(lVar30 + 0x28);
      pTVar34 = &pFVar33->RootTransform;
      if (pFVar33 == (FRootOffsetProvider *)0x0) {
        pTVar34 = &this->MeshWithoutOffset;
      }
      (this->MeshWithoutOffset).Rotation.XY.m128d_f64[0] = *(double *)(lVar30 + 0x20);
      (this->MeshWithoutOffset).Rotation.XY.m128d_f64[1] = dVar68;
      dVar68 = *(double *)(lVar30 + 0x38);
      (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[0] = *(double *)(lVar30 + 0x30);
      (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[1] = dVar68;
      dVar68 = *(double *)(lVar30 + 0x48);
      (this->MeshWithoutOffset).Translation.XY.m128d_f64[0] = *(double *)(lVar30 + 0x40);
      (this->MeshWithoutOffset).Translation.XY.m128d_f64[1] = dVar68;
      dVar68 = *(double *)(lVar30 + 0x58);
      (this->MeshWithoutOffset).Translation.ZW.m128d_f64[0] = *(double *)(lVar30 + 0x50);
      (this->MeshWithoutOffset).Translation.ZW.m128d_f64[1] = dVar68;
      dVar68 = *(double *)(lVar30 + 0x68);
      (this->MeshWithoutOffset).Scale3D.XY.m128d_f64[0] = *(double *)(lVar30 + 0x60);
      (this->MeshWithoutOffset).Scale3D.XY.m128d_f64[1] = dVar68;
      dVar68 = *(double *)(lVar30 + 0x78);
      (this->MeshWithoutOffset).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar30 + 0x70);
      (this->MeshWithoutOffset).Scale3D.ZW.m128d_f64[1] = dVar68;
      dVar68 = (pTVar34->Rotation).XY.m128d_f64[1];
      (this->MeshWithOffset).Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
      (this->MeshWithOffset).Rotation.XY.m128d_f64[1] = dVar68;
      dVar68 = (pTVar34->Rotation).ZW.m128d_f64[1];
      (this->MeshWithOffset).Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
      (this->MeshWithOffset).Rotation.ZW.m128d_f64[1] = dVar68;
      dVar68 = (pTVar34->Translation).XY.m128d_f64[1];
      (this->MeshWithOffset).Translation.XY.m128d_f64[0] = (pTVar34->Translation).XY.m128d_f64[0];
      (this->MeshWithOffset).Translation.XY.m128d_f64[1] = dVar68;
      dVar68 = (pTVar34->Translation).ZW.m128d_f64[1];
      (this->MeshWithOffset).Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
      (this->MeshWithOffset).Translation.ZW.m128d_f64[1] = dVar68;
      dVar68 = (pTVar34->Scale3D).XY.m128d_f64[1];
      (this->MeshWithOffset).Scale3D.XY.m128d_f64[0] = (pTVar34->Scale3D).XY.m128d_f64[0];
      (this->MeshWithOffset).Scale3D.XY.m128d_f64[1] = dVar68;
      dVar68 = (pTVar34->Scale3D).ZW.m128d_f64[1];
      (this->MeshWithOffset).Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
      (this->MeshWithOffset).Scale3D.ZW.m128d_f64[1] = dVar68;
      pUVar13 = *(UObject **)(param_1->_padding_ + 0x140);
      if ((pUVar13 == (UObject *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("AnimContext",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatching.cpp"
                              ,0xa0,L""), bVar21)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_30c8 = (FPoseSearchInteractionAvailability *)
                   (this->Availabilities).AllocatorInstance.Data;
      iVar62 = (this->Availabilities).ArrayNum;
      fVar65 = this->BlendTime;
      bVar21 = this->bKeepInteractionAlive;
      bVar6 = this->bValidateResultAgainstAvailabilities;
      local_3270.ComparisonIndex.Value = 0;
      local_3270.Number = 0;
      if ((iVar62 < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar22)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_2fc8._12_4_ = uStack_30bc;
      local_2fc8.ArrayNum = iVar62;
      local_2fc8.DataPtr = local_30c8;
      iStack_30c0 = iVar62;
      bVar21 = UPoseSearchInteractionLibrary::MotionMatchInteraction
                         (&(this->MotionMatchingState).SearchResult,&local_2fc8,pUVar13,local_3270,
                          (IPoseHistory *)pFVar64,bVar6,bVar21,fVar65);
      if (!bVar21) {
        pUVar35 = (UObject *)(**(code **)(this->_padding_ + 0xa0))(this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar35 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar35);
        }
        (this->MotionMatchingState).SearchResult.SelectedAnim.field0_0x0.DebugPtr = pUVar35;
        fVar65 = (float)(**(code **)(this->_padding_ + 0xa8))(this);
        (this->MotionMatchingState).SearchResult.SelectedTime = fVar65;
        bVar21 = FAnimNode_BlendStack_Standalone::GetMirror((FAnimNode_BlendStack_Standalone *)this)
        ;
        (this->MotionMatchingState).SearchResult.bIsMirrored = bVar21;
        pTVar36 = FAnimNode_BlendStack_Standalone::GetBlendParameters
                            ((FAnimNode_BlendStack_Standalone *)this,&local_2f70);
        dVar68 = (pTVar36->field0_0x0)._s_0.Y;
        (this->MotionMatchingState).SearchResult.BlendParameters.field0_0x0._s_0.X =
             (pTVar36->field0_0x0)._s_0.X;
        (this->MotionMatchingState).SearchResult.BlendParameters.field0_0x0._s_0.Y = dVar68;
        (this->MotionMatchingState).SearchResult.BlendParameters.field0_0x0._s_0.Z =
             (pTVar36->field0_0x0)._s_0.Z;
        fVar65 = fVar67;
        if (GVarAnimNodeMotionMatchingPlayRateEnabled - 1U < 2) {
          fVar67 = SUB84(this->PlayRate,0);
          fVar65 = SUB84(this->PlayRate,4);
        }
        local_3208._4_4_ = fVar65;
        local_3208._0_4_ = fVar67;
        fVar67 = local_3268->DeltaTime;
        pFVar37 = FPoseSearchEvent::GetPlayRateOverriddenEvent
                            (&this->EventToSearch,&local_2fa0,&local_3208);
        UE::PoseSearch::FSearchContext::FSearchContext
                  ((FSearchContext *)local_2da8,0.0,&this->PoseJumpThresholdTime,pFVar37);
        local_2f58.Params.ArrayMax = 4;
        local_2f58.DebuggingInfo.CurrentChooser = (UObject *)0x0;
        local_2f58.DebuggingInfo.bCurrentDebugTarget = false;
        local_2f58.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
        local_2f58.Params.ArrayNum = 0;
        local_2f58.ObjectParams.ArrayNum = 0;
        local_2f58.ObjectParams.ArrayMax = 4;
        FChooserEvaluationContext::AddObjectParam(&local_2f58,pUVar13);
        local_30d8 = (this->DatabasesToSearch).AllocatorInstance.Data;
        iStack_30d0 = (this->DatabasesToSearch).ArrayNum;
        if ((iStack_30d0 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar21)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uStack_3020 = CONCAT44(uStack_30cc,iStack_30d0);
        local_3028 = local_30d8;
        FVar38 = UE::PoseSearch::GetCommonDefaultRole
                           ((TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> *)
                            local_3000);
        UE::PoseSearch::FSearchContext::AddRole
                  ((FSearchContext *)local_2da8,(FName *)FVar38,&local_2f58,(IPoseHistory *)pFVar64)
        ;
        if ((local_2c7c == -1) ||
           (pfVar4 = &(this->MotionMatchingState).ElapsedPoseSearchTime,
           this->SearchThrottleTime < *pfVar4 || this->SearchThrottleTime == *pfVar4)) {
          bVar21 = true;
        }
        else {
          bVar21 = false;
        }
        if (bVar21) {
          iVar62 = (this->DatabasesToSearch).ArrayNum;
          TVar56.DebugPtr = (UPoseSearchDatabase *)0x0;
          (this->MotionMatchingState).ElapsedPoseSearchTime = 0.0;
          lVar30 = (longlong)iVar62 * 8;
          TVar63.DebugPtr = TVar56.DebugPtr;
          if (lVar30 != 0) {
            uVar51 = lVar30 + 0x1e;
            if (uVar51 <= lVar30 + 0xfU) {
              uVar51 = 0xffffffffffffff0;
            }
            puVar57 = auStackY_3328 + -(uVar51 & 0xfffffffffffffff0);
            TVar63.DebugPtr =
                 (UPoseSearchDatabase *)((longlong)&local_3280 + -(uVar51 & 0xfffffffffffffff0));
          }
          local_31e8 = TVar63;
          iStack_31e0 = iVar62;
          if (iVar62 < 0) {
            *(undefined8 *)(puVar57 + -8) = 0x14a89b14e;
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L"");
            if (bVar21) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          TVar59.DebugPtr = TVar56.DebugPtr;
          if (0 < (this->DatabasesToSearch).ArrayNum) {
            do {
              iVar26 = (this->DatabasesToSearch).ArrayNum;
              uVar53 = TVar56._0_4_;
              uVar50 = 0;
              if ((int)uVar53 < iVar26) {
                uVar50 = ~uVar53 >> 0x1f;
              }
              if (uVar50 == 0) {
                *(longlong *)(puVar57 + 0x28) = (longlong)iVar26;
                *(longlong *)(puVar57 + 0x20) = (longlong)(int)uVar53;
                *(undefined8 *)(puVar57 + -8) = 0x14a89b1ba;
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar21) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
              }
              uVar39 = *(undefined8 *)
                        ((longlong)&(TVar59.DebugPtr)->_padding_ +
                        (longlong)(this->DatabasesToSearch).AllocatorInstance.Data);
              uVar50 = 0;
              if ((int)uVar53 < iVar62) {
                uVar50 = ~uVar53 >> 0x1f;
              }
              if (uVar50 == 0) {
                *(longlong *)(puVar57 + 0x28) = (longlong)iVar62;
                *(longlong *)(puVar57 + 0x20) = (longlong)(int)uVar53;
                *(undefined8 *)(puVar57 + -8) = 0x14a89b204;
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar21) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
              }
              *(undefined8 *)((longlong)&(TVar59.DebugPtr)->_padding_ + (longlong)TVar63.DebugPtr) =
                   uVar39;
              TVar56._0_4_ = uVar53 + 1;
              TVar56._4_4_ = 0;
              TVar59 = (TObjectPtr<UPoseSearchDatabase_const_>_u_0)&(TVar59.DebugPtr)->_padding_;
            } while ((int)TVar56._0_4_ < (this->DatabasesToSearch).ArrayNum);
          }
          *(undefined8 *)(puVar57 + -8) = 0x14a89b233;
          UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_2ec8);
          EVar7 = this->NextUpdateInterruptMode;
          local_30b8.DebugPtr = (UObject *)0x0;
          local_30a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_30a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_30b0 = 0;
          local_3098 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_30ac = 0;
          local_3090 = 0;
          local_3088 = 0;
          *(undefined8 *)(puVar57 + -8) = 0x14a89b294;
          FPoseSearchContinuingProperties::InitFrom
                    ((FPoseSearchContinuingProperties *)&local_30b8.ObjectPtr,
                     &(this->MotionMatchingState).SearchResult,EVar7);
          uStack_3010 = CONCAT44(uStack_31dc,iStack_31e0);
          local_3018 = local_31e8;
          *(undefined8 *)(puVar57 + -8) = 0x14a89b2c4;
          UPoseSearchLibrary::MotionMatch
                    ((FSearchContext *)local_2da8,
                     (TArrayView<UObject_const_*,int> *)&local_3018.ObjectPtr,
                     (FPoseSearchContinuingProperties *)&local_30b8.ObjectPtr,
                     (FSearchResults *)&local_2ec8);
          lVar30 = local_2ec8._padding_;
          *(undefined8 *)(puVar57 + -8) = 0x14a89b2d0;
          UE::Core::Private::Function::CheckCallable((void *)lVar30);
          plVar52 = &local_2ec8._padding_;
          if ((longlong *)local_2ec8._padding_ != (longlong *)0x0) {
            plVar52 = (longlong *)local_2ec8._padding_;
          }
          pcVar16 = *(code **)(*plVar52 + 8);
          *(undefined8 *)(puVar57 + -8) = 0x14a89b2f2;
          uVar39 = (*pcVar16)();
          *(undefined8 *)(puVar57 + -8) = 0x14a89b2fe;
          (*(code *)local_2ec8._padding_)(&local_3050,uVar39);
          local_3238._0_8_ = local_3050._0_8_;
          local_3238._8_8_ = local_3050._8_8_;
          local_3220 = local_3050.bIsContinuingPoseSearch;
          uStack_321f = local_3050._25_3_;
          local_3238._16_4_ = local_3050.EventPoseIdx;
          local_3238._20_4_ = local_3050.AssetTime;
          *(undefined8 *)(puVar57 + -8) = 0x14a89b32b;
          UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_2ec8);
          puVar58 = puVar57;
          pFVar64 = local_3260;
        }
        else {
          local_3238._16_4_ = local_2c6c;
          local_3238._20_4_ = fStack_2c68;
          uStack_321f = SUB43(local_2c64,1);
          local_3220 = true;
          (this->MotionMatchingState).ElapsedPoseSearchTime =
               fVar67 + (this->MotionMatchingState).ElapsedPoseSearchTime;
          pFVar54 = (this->DatabasesToSearch).AllocatorInstance.Data;
          iVar62 = (this->DatabasesToSearch).ArrayNum;
          local_3238._4_4_ = uStack_2c78;
          local_3238._0_4_ = local_2c7c;
          pFVar10 = pFVar54 + (longlong)iVar62 * 8;
          local_3238._8_8_ = uStack_2c74;
          while( true ) {
            if ((this->DatabasesToSearch).ArrayNum != iVar62) {
              local_3286 = 0;
              `TCheckedPointerIterator<TObjectPtr<UPoseSearchDatabase_const_>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_3286);
            }
            if (pFVar54 == pFVar10) break;
            local_3218 = *(UPoseSearchDatabase **)pFVar54;
            if ((local_3218 == (UPoseSearchDatabase *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Database",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                                    ,0x556,L""), bVar21)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar50 = ((uint)((ulonglong)local_3218 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_3218 >> 4)) * -0x7a143595;
            uVar50 = (uVar50 >> 0xd ^ uVar50) * -0x3d4d51cb;
            TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
            ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
                      (&local_f0,uVar50 >> 0x10 ^ uVar50,&local_3218);
            pFVar54 = pFVar54 + 8;
          }
          local_3210 = (UPoseSearchDatabase *)
                       FWeakObjectPtr::Get((FWeakObjectPtr *)(local_3238 + 4));
          if ((local_3210 == (UPoseSearchDatabase *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Database",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                                  ,0x556,L""), bVar21)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uVar50 = ((uint)((ulonglong)local_3210 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_3210 >> 4)) * -0x7a143595;
          uVar50 = (uVar50 >> 0xd ^ uVar50) * -0x3d4d51cb;
          TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
          ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
                    (&local_f0,uVar50 >> 0x10 ^ uVar50,&local_3210);
          puVar58 = auStackY_3328;
        }
        pcVar16 = *(code **)(pFVar64->_padding_ + 0x30);
        *(undefined8 *)(puVar58 + -8) = 0x14a89b494;
        fVar65 = (float)(*pcVar16)(pFVar64);
        *(FPoseSearchEvent **)(puVar58 + 0x20) = &this->EventToSearch;
        *(undefined8 *)(puVar58 + -8) = 0x14a89b4b3;
        fVar65 = UE::PoseSearch::CalculateWantedPlayRate
                           ((FSearchResult *)local_3238,(FSearchContext *)local_2da8,&local_3208,
                            fVar65,*(FPoseSearchEvent **)(puVar58 + 0x20));
        *(undefined8 *)(puVar58 + -8) = 0x14a89b4c9;
        FPoseSearchBlueprintResult::InitFrom
                  (&(this->MotionMatchingState).SearchResult,(FSearchResult *)local_3238,fVar65);
        pcVar16 = *(code **)(pFVar64->_padding_ + 0x60);
        *(undefined8 *)(puVar58 + -8) = 0x14a89b4d3;
        this_03 = (FPoseIndicesHistory *)(*pcVar16)(pFVar64);
        if (this_03 != (FPoseIndicesHistory *)0x0) {
          fVar5 = this->PoseReselectHistory;
          *(undefined8 *)(puVar58 + -8) = 0x14a89b4f0;
          UE::PoseSearch::FPoseIndicesHistory::Update
                    (this_03,(FSearchResult *)local_3238,fVar67,fVar5);
        }
        FVar20 = local_2f58.Params.AllocatorInstance.SecondaryData;
        pUVar13 = (this->MotionMatchingState).SearchResult.SelectedAnim.field0_0x0.DebugPtr;
        *(undefined8 *)&(this->MotionMatchingState).CurrentSearchResult = local_3238._0_8_;
        *(undefined8 *)&(this->MotionMatchingState).CurrentSearchResult.field_0x8 = local_3238._8_8_
        ;
        (this->MotionMatchingState).CurrentSearchResult.EventPoseIdx = local_3238._16_4_;
        (this->MotionMatchingState).CurrentSearchResult.AssetTime = (float)local_3238._20_4_;
        (this->MotionMatchingState).CurrentSearchResult.bIsContinuingPoseSearch = local_3220;
        *(undefined3 *)&(this->MotionMatchingState).CurrentSearchResult.field_0x19 = uStack_321f;
        (this->MotionMatchingState).WantedPlayRate = fVar65;
        if ((pUVar13 == (UObject *)0x0) ||
           ((this->MotionMatchingState).SearchResult.bIsContinuingPoseSearch != false)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        (this->MotionMatchingState).bJumpedToPose = bVar21;
        if (local_2f58.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89b54f;
          FMemory::Free((void *)FVar20);
        }
        local_f0.Pairs.HashSize = 0;
        if (local_f0.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89b567;
          FMemory::Free((void *)local_f0.Pairs.Hash.SecondaryData);
        }
        *(undefined8 *)(puVar58 + -8) = 0x14a89b573;
        TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&local_f0);
        local_100 = 0;
        *(undefined8 *)(puVar58 + -8) = 0x14a89b586;
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                  (&local_9b8);
        local_b60 = 0;
        *(undefined8 *)(puVar58 + -8) = 0x14a89b599;
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                  (&local_2c28);
        if (local_2ca8.Data != (FScriptContainerElement *)0x0) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89b5aa;
          FMemory::Free(local_2ca8.Data);
        }
        local_2cb8 = 0;
        if (local_2cc0 != (void *)0x0) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89b5c2;
          FMemory::Free(local_2cc0);
        }
        *(undefined8 *)(puVar58 + -8) = 0x14a89b5ce;
        TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                    *)(local_2da8 + 0x60));
      }
      fVar67 = this->PlayRateMultiplier * (this->MotionMatchingState).SearchResult.WantedPlayRate;
      if (GVarAnimNodeMotionMatchingPlayRateEnabled != 1) {
        fVar67 = this->PlayRateMultiplier;
      }
      if (CachedId_OnMotionMatchingStateUpdated.Index == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS1) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89bd5e;
          _Init_thread_header(&::_TSS1);
          if (::_TSS1 == -1) {
            *(undefined8 *)(puVar58 + -8) = 0x14a89bd7e;
            ::FName::FName(&AnimName_OnMotionMatchingStateUpdated,"OnMotionMatchingStateUpdated");
            *(undefined8 *)(puVar58 + -8) = 0x14a89bd8a;
            _Init_thread_footer(&::_TSS1);
          }
        }
        if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
            (UScriptStruct *)0x0) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89b63d;
          pUVar40 = Z_Construct_UPackage__Script_PoseSearch();
          *(undefined8 *)(puVar58 + -8) = 0x14a89b653;
          Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar40
                               ,L"AnimNode_MotionMatching");
        }
        *(undefined8 *)(puVar58 + -8) = 0x14a89b673;
        pFVar41 = UE::Anim::FNodeDataId::FNodeDataId
                            (&local_2fac,AnimName_OnMotionMatchingStateUpdated,
                             (FAnimNode_Base *)this,
                             Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.
                             OuterSingleton);
        CachedId_OnMotionMatchingStateUpdated.Id = pFVar41->Id;
        FVar66 = CachedId_OnMotionMatchingStateUpdated.Id.ComparisonIndex.Value;
        uVar50 = CachedId_OnMotionMatchingStateUpdated.Id.Number;
        CachedId_OnMotionMatchingStateUpdated.Index = pFVar41->Index;
      }
      else {
        FVar66 = CachedId_OnMotionMatchingStateUpdated.Id.ComparisonIndex.Value;
        uVar50 = CachedId_OnMotionMatchingStateUpdated.Id.Number;
      }
      iVar62 = CachedId_OnMotionMatchingStateUpdated.Index;
      if (this->_padding_ == 0) {
        *(undefined8 *)(puVar58 + -8) = 0x14a89b6bc;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("NodeData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                            ,0x3e1,L"");
        if (bVar21) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
      pFVar14 = (FAnimNodeData *)this->_padding_;
      local_3178.Id.Number = uVar50;
      local_3178.Id.ComparisonIndex.Value = FVar66.Value;
      local_3178.Index = iVar62;
      *(undefined8 *)(puVar58 + -8) = 0x14a89b6e6;
      pFVar42 = FAnimNodeData::GetData(pFVar14,&local_3178,(FAnimNode_Base *)this,(UObject *)0x0);
      param_1 = local_3268;
      *(undefined8 *)(puVar58 + -8) = 0x14a89b6f8;
      UE::Anim::FNodeFunctionCaller::CallFunction
                (pFVar42,(FAnimationBaseContext *)param_1,(FAnimNode_Base *)this);
      if (((this->MotionMatchingState).SearchResult.SelectedAnim.field0_0x0.DebugPtr ==
           (UObject *)0x0) ||
         ((this->MotionMatchingState).SearchResult.bIsContinuingPoseSearch != false)) {
LAB_14a89ba8f:
        bVar21 = false;
      }
      else {
        local_31e8 = (TObjectPtr<UPoseSearchDatabase_const_>_u_0)
                     (this->MotionMatchingState).SearchResult.SelectedDatabase.field0_0x0.DebugPtr;
        if ((local_31e8.DebugPtr != (UPoseSearchDatabase *)0x0) &&
           (((local_31e8.DebugPtr)->Schema).field0_0x0.DebugPtr != (UPoseSearchSchema *)0x0)) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89b742;
          local_3260 = (FGenerateTrajectoryPoseHistory *)
                       FPoseSearchBlueprintResult::GetAnimationAssetForRole
                                 (&(this->MotionMatchingState).SearchResult);
          if (local_3260 == (FGenerateTrajectoryPoseHistory *)0x0) {
            *(undefined8 *)(puVar58 + -8) = 0x14a89ba75;
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatching.cpp"
                                ,0x128,L"");
            if (bVar21) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          else {
            iVar62 = (int)this->_padding_;
            pFVar55 = (FBlendStackAnimPlayer *)this->_padding_;
            pFVar60 = pFVar55 + iVar62;
            while( true ) {
              if ((int)this->_padding_ != iVar62) {
                local_3285[0] = 0;
                *(undefined8 *)(puVar58 + -8) = 0x14a89b774;
                `TCheckedPointerIterator<FBlendStackAnimPlayer,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_3285);
              }
              if (pFVar55 == pFVar60) break;
              *(undefined8 *)(puVar58 + -8) = 0x14a89b781;
              pFVar43 = FBlendStackAnimPlayer::GetAssetPlayerNode(pFVar55);
              if (pFVar43 != (FAnimNode_AssetPlayerBase *)0x0) {
                pcVar16 = *(code **)(pFVar43->_padding_ + 0x138);
                *(undefined8 *)(puVar58 + -8) = 0x14a89b79b;
                (*pcVar16)(pFVar43,0);
                pcVar16 = *(code **)(pFVar43->_padding_ + 0x130);
                *(undefined8 *)(puVar58 + -8) = 0x14a89b7ad;
                (*pcVar16)(pFVar43,0);
                local_3200 = 0;
                pcVar16 = *(code **)(pFVar43->_padding_ + 0x128);
                *(undefined8 *)(puVar58 + -8) = 0x14a89b7cb;
                (*pcVar16)(pFVar43);
              }
              pFVar55 = pFVar55 + 1;
            }
            if ((int)this->_padding_ != 0) {
              *(undefined8 *)(puVar58 + -8) = 0x14a89b7e7;
              fVar65 = GetBlendspaceParametersDeltaThreshold(this);
              if (0.0 < fVar65) {
                *(undefined8 *)(puVar58 + -8) = 0x14a89b7f6;
                pUVar44 = Z_Construct_UClass_UBlendSpace_NoRegister();
                pFVar64 = local_3260;
                iVar62 = (int)pUVar44->_padding_;
                if ((iVar62 <= *(int *)(local_3260->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(local_3260->_padding_ + 0x30) + (longlong)iVar62 * 8) ==
                    &pUVar44->_padding_)) {
                  iVar62 = (int)this->_padding_;
                  if (iVar62 < 1) {
                    *(longlong *)(puVar58 + 0x28) = (longlong)iVar62;
                    *(undefined8 *)(puVar58 + 0x20) = 0;
                    *(undefined8 *)(puVar58 + -8) = 0x14a89b852;
                    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar21) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                  }
                  pFVar55 = (FBlendStackAnimPlayer *)this->_padding_;
                  *(undefined8 *)(puVar58 + -8) = 0x14a89b861;
                  pFVar45 = (FGenerateTrajectoryPoseHistory *)
                            FBlendStackAnimPlayer::GetAnimationAsset(pFVar55);
                  if (pFVar45 == pFVar64) {
                    iVar62 = (int)this->_padding_;
                    if (iVar62 < 1) {
                      *(longlong *)(puVar58 + 0x28) = (longlong)iVar62;
                      *(undefined8 *)(puVar58 + 0x20) = 0;
                      *(undefined8 *)(puVar58 + -8) = 0x14a89b89c;
                      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar21) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                    }
                    pFVar55 = (FBlendStackAnimPlayer *)this->_padding_;
                    *(undefined8 *)(puVar58 + -8) = 0x14a89b8b2;
                    FBlendStackAnimPlayer::GetBlendParameters
                              (pFVar55,(TVector<double> *)&local_3068._s_0);
                    *(undefined8 *)(puVar58 + -8) = 0x14a89b8ba;
                    pTVar36 = GetBlendspaceParameters(this);
                    local_2f78 = (pTVar36->field0_0x0)._s_0.Z;
                    dVar18 = local_3068._s_0.Z - local_2f78;
                    dVar68 = local_3068._s_0.X - (pTVar36->field0_0x0)._s_0.X;
                    dVar17 = local_3068._s_0.Y - (pTVar36->field0_0x0)._s_0.Y;
                    *(undefined8 *)(puVar58 + -8) = 0x14a89b8ff;
                    fVar65 = GetBlendspaceParametersDeltaThreshold(this);
                    param_1 = local_3268;
                    if ((float)(dVar68 * dVar68 + dVar17 * dVar17 + dVar18 * dVar18) <
                        fVar65 * fVar65) goto LAB_14a89ba81;
                  }
                }
              }
            }
            pcVar16 = *(code **)(this->_padding_ + 0x120);
            *(undefined8 *)(puVar58 + -8) = 0x14a89b932;
            uVar23 = (*pcVar16)(this);
            pcVar16 = *(code **)(this->_padding_ + 0x118);
            *(undefined8 *)(puVar58 + -8) = 0x14a89b945;
            uVar24 = (*pcVar16)(this);
            pcVar16 = *(code **)(this->_padding_ + 0x110);
            *(undefined8 *)(puVar58 + -8) = 0x14a89b958;
            uVar27 = (*pcVar16)(this);
            pcVar16 = *(code **)(this->_padding_ + 0x108);
            *(undefined8 *)(puVar58 + -8) = 0x14a89b972;
            puVar46 = (undefined8 *)(*pcVar16)(this,local_2fe0);
            bVar21 = this->bUseInertialBlend;
            EVar8 = this->BlendOption;
            uVar39 = *puVar46;
            TVar15 = (this->BlendProfile).field0_0x0;
            this_00 = ((local_31e8.DebugPtr)->Schema).field0_0x0.DebugPtr;
            local_31f8 = 0;
            fVar65 = local_3240->BlendTime;
            pFVar19 = &local_3240->MotionMatchingState;
            *(undefined8 *)(puVar58 + -8) = 0x14a89b9ba;
            pUVar47 = UPoseSearchSchema::GetMirrorDataTable(this_00,&(pFVar19->SearchResult).Role);
            pFVar64 = local_3260;
            pFVar19 = &local_3240->MotionMatchingState;
            puVar58[0x90] = uVar23;
            puVar58[0x88] = uVar24;
            *(undefined4 *)(puVar58 + 0x80) = uVar27;
            param_1 = local_3268;
            *(undefined8 *)(puVar58 + 0x78) = uVar39;
            *(undefined4 *)(puVar58 + 0x70) = 0;
            *(float *)(puVar58 + 0x68) = fVar67;
            *(TVector<double> **)(puVar58 + 0x60) = &(pFVar19->SearchResult).BlendParameters;
            *(undefined8 *)(puVar58 + 0x58) = local_31f8;
            puVar58[0x50] = bVar21;
            puVar58[0x48] = EVar8;
            *(TObjectPtr<UBlendProfile>_u_0 *)(puVar58 + 0x40) = TVar15;
            this = local_3240;
            *(float *)(puVar58 + 0x38) = fVar65;
            *(UMirrorDataTable **)(puVar58 + 0x30) = pUVar47;
            fVar65 = (this->MotionMatchingState).SearchResult.SelectedTime;
            puVar58[0x28] = (this->MotionMatchingState).SearchResult.bIsMirrored;
            puVar58[0x20] = (this->MotionMatchingState).SearchResult.bLoop;
            *(undefined8 *)(puVar58 + -8) = 0x14a89ba53;
            FAnimNode_BlendStack_Standalone::BlendTo
                      ((FAnimNode_BlendStack_Standalone *)this,param_1,(UAnimationAsset *)pFVar64,
                       fVar65,(bool)puVar58[0x20],(bool)puVar58[0x28],
                       *(UMirrorDataTable **)(puVar58 + 0x30),*(float *)(puVar58 + 0x38),
                       *(UBlendProfile **)(puVar58 + 0x40),puVar58[0x48],(bool)puVar58[0x50],
                       *(FName *)(puVar58 + 0x58),*(TVector<double> **)(puVar58 + 0x60),
                       *(float *)(puVar58 + 0x68),*(float *)(puVar58 + 0x70),
                       *(FName *)(puVar58 + 0x78),*(Type *)(puVar58 + 0x80),puVar58[0x88],
                       (bool)puVar58[0x90]);
          }
        }
LAB_14a89ba81:
        if (this->bUseInertialBlend == false) goto LAB_14a89ba8f;
        bVar21 = true;
      }
      *(undefined8 *)(puVar58 + -8) = 0x14a89baa0;
      UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope>::
      TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope><>
                ((TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope> *)
                 (local_3000 + 8),bVar21,(FAnimationBaseContext *)param_1);
      *(undefined8 *)(puVar58 + -8) = 0x14a89baac;
      FAnimNode_BlendStack_Standalone::UpdatePlayRate
                ((FAnimNode_BlendStack_Standalone *)this,fVar67);
      *(undefined8 *)(puVar58 + -8) = 0x14a89bab4;
      pTVar36 = GetBlendspaceParameters(this);
      if (CachedId_BlendspaceUpdateMode.Index == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS1) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89bc90;
          _Init_thread_header(&::_TSS1);
          if (::_TSS1 == -1) {
            *(undefined8 *)(puVar58 + -8) = 0x14a89bcb0;
            ::FName::FName(&AnimName_BlendspaceUpdateMode,"BlendspaceUpdateMode");
            *(undefined8 *)(puVar58 + -8) = 0x14a89bcbc;
            _Init_thread_footer(&::_TSS1);
          }
        }
        if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
            (UScriptStruct *)0x0) {
          *(undefined8 *)(puVar58 + -8) = 0x14a89baff;
          pUVar40 = Z_Construct_UPackage__Script_PoseSearch();
          *(undefined8 *)(puVar58 + -8) = 0x14a89bb15;
          Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar40
                               ,L"AnimNode_MotionMatching");
        }
        *(undefined8 *)(puVar58 + -8) = 0x14a89bb35;
        pFVar41 = UE::Anim::FNodeDataId::FNodeDataId
                            (&local_2fb8,AnimName_BlendspaceUpdateMode,(FAnimNode_Base *)this,
                             Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.
                             OuterSingleton);
        CachedId_BlendspaceUpdateMode.Id = pFVar41->Id;
        FVar66 = CachedId_BlendspaceUpdateMode.Id.ComparisonIndex.Value;
        uVar50 = CachedId_BlendspaceUpdateMode.Id.Number;
        CachedId_BlendspaceUpdateMode.Index = pFVar41->Index;
      }
      else {
        FVar66 = CachedId_BlendspaceUpdateMode.Id.ComparisonIndex.Value;
        uVar50 = CachedId_BlendspaceUpdateMode.Id.Number;
      }
      iVar62 = CachedId_BlendspaceUpdateMode.Index;
      if (this->_padding_ == 0) {
        *(undefined8 *)(puVar58 + -8) = 0x14a89bb7e;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("NodeData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                            ,0x3e1,L"");
        if (bVar21) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
      pFVar14 = (FAnimNodeData *)this->_padding_;
      local_3198.Id.Number = uVar50;
      local_3198.Id.ComparisonIndex.Value = FVar66.Value;
      local_3198.Index = iVar62;
      *(undefined8 *)(puVar58 + -8) = 0x14a89bba8;
      pEVar48 = FAnimNodeData::GetData(pFVar14,&local_3198,(FAnimNode_Base *)this,(UObject *)0x0);
      EVar9 = *pEVar48;
      *(undefined8 *)(puVar58 + -8) = 0x14a89bbb6;
      FAnimNode_BlendStack_Standalone::UpdateBlendspaceParameters
                ((FAnimNode_BlendStack_Standalone *)this,EVar9,pTVar36);
      if (local_2ff8.bCondition != false) {
        *(undefined8 *)(puVar58 + -8) = 0x14a89bbcb;
        UE::Anim::FScopedGraphMessage::PopMessage((FScopedGraphMessage *)(local_3000 + 8));
      }
      goto LAB_14a89bbe9;
    }
  }
  puVar58 = auStackY_3328;
  if (1 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    puVar58 = auStackY_3328;
  }
LAB_14a89bbe9:
  *(undefined8 *)(puVar58 + -8) = 0x14a89bbf4;
  FAnimNode_BlendStack_Standalone::UpdateAssetPlayer
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  this->NextUpdateInterruptMode = DoNotInterrupt;
  if ((local_3278 & 1) != 0) {
    *(undefined8 *)(puVar58 + -8) = 0x14a89bc09;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_3278 & 2) != 0) {
    *(undefined8 *)(puVar58 + -8) = 0x14a89bc16;
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar38 = local_3280;
  if ((local_3278 & 4) != 0) {
    *(undefined8 *)(puVar58 + -8) = 0x14a89bc2c;
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  local_3278 = 0;
  *(undefined8 *)(puVar58 + -8) = 0x14a89bc35;
  FStatsHierarchical::EndMeasurement();
  *(undefined8 *)(puVar58 + -8) = 0x14a89bc44;
  return;
}

// Evaluate_AnyThread @ 14a89bdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_MotionMatching::Evaluate_AnyThread(FAnimNode_MotionMatching *this,FPoseContext *param_1)

{
  FName *this_00;
  float fVar1;
  float fVar2;
  UObject *pUVar3;
  UMultiAnimAsset *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  IAnimRootMotionProvider *pIVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  UClass *pUVar18;
  longlong lVar19;
  uint uVar20;
  FStaticBasicLogRecord *pFVar21;
  ForElementType<UE::Math::TTransform<double>_> FVar22;
  undefined1 auStackY_778 [32];
  longlong local_738;
  FName local_728;
  IAnimRootMotionProvider *local_720;
  FName local_718;
  FName local_710;
  FName local_708;
  FName local_700;
  FName local_6f8;
  FString local_6f0;
  ForElementType<UE::Math::TTransform<double>_> local_6d8;
  int iStack_6d0;
  undefined4 uStack_6cc;
  TVector<double>_u_0 local_6c8;
  TVector<double>_u_0 local_6b0;
  TVector<double>_u_0 local_698;
  TVector<double>_u_0 local_680;
  TVector<double>_u_0 local_668;
  TVector<double>_u_0 local_650;
  TVector<double>_u_0 local_638;
  TVector<double>_u_0 local_620;
  FString local_608;
  TArrayView<UE::Math::TTransform<double>,int> local_5f8;
  FInteractionValidator local_5e8;
  TVector<double>_u_0 local_5d8;
  TVector<double>_u_0 local_5c0;
  TVector<double>_u_0 local_5a8;
  TVector<double>_u_0 local_588;
  TVector<double>_u_0 local_568;
  TVector<double>_u_0 local_548;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4e8;
  TVector<double>_u_0 local_4c8;
  TQuat<double> local_4a8;
  TQuat<double> local_488;
  TQuat<double> local_468;
  TQuat<double> local_448;
  double local_428;
  double dStack_420;
  undefined8 local_418;
  double local_410;
  double dStack_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  undefined8 local_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  TTransform<double> local_368;
  TTransform<double> local_308;
  TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_2a8;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_778;
  if ((param_1->_padding_ == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Output.AnimInstanceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatching.cpp"
                          ,0x13d,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::PoseSearch::FInteractionValidator::FInteractionValidator
            (&local_5e8,*(UObject **)(param_1->_padding_ + 0x140));
  FAnimNode_BlendStack_Standalone::Evaluate_AnyThread
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  pUVar3 = *(UObject **)(param_1->_padding_ + 0x140);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a89c89e:
    if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a89c8ba;
    pFVar21 = &::LOG_Static;
  }
  else {
    pUVar18 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) goto LAB_14a89c89e;
    local_720 = UE::Anim::IAnimRootMotionProvider::Get();
    if (local_720 != (IAnimRootMotionProvider *)0x0) {
      if ((this->MotionMatchingState).SearchResult.SelectedAnim.field0_0x0.DebugPtr !=
          (UObject *)0x0) {
        pUVar18 = UMultiAnimAsset::StaticClass();
        bVar15 = FObjectPtr::IsA((FObjectPtr *)&(this->MotionMatchingState).SearchResult,pUVar18);
        if (((bVar15) &&
            (pUVar4 = (UMultiAnimAsset *)
                      (this->MotionMatchingState).SearchResult.SelectedAnim.field0_0x0.DebugPtr,
            pUVar4 != (UMultiAnimAsset *)0x0)) &&
           (iVar16 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4),
           (this->MotionMatchingState).SearchResult.ActorRootTransforms.ArrayNum == iVar16)) {
          this_00 = &(this->MotionMatchingState).SearchResult.Role;
          uVar17 = UE::PoseSearch::GetRoleIndex(pUVar4,this_00);
          if (uVar17 != 0xffffffff) {
            lVar19 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))
                               (pUVar4,&(this->MotionMatchingState).SearchResult.Role);
            if (lVar19 == 0) {
              if (1 < (byte)LogPoseSearch._0_1_) {
                ::FName::ToString(this_00,&local_608);
                local_728.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
                local_728.Number = *(uint *)&pUVar4->field_0x1c;
                ::FName::ToString(&local_728,&local_6f0);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
                if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
                }
                if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_608.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              local_2a8.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::Math::TTransform<double>_>)0x0;
              local_2a8.ArrayNum = 0;
              local_2a8.ArrayMax = 4;
              TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              ::SetNum(&local_2a8,iVar16,Default);
              iStack_6d0 = local_2a8.ArrayNum;
              local_6d8 = (ForElementType<UE::Math::TTransform<double>_>)&local_2a8;
              if (local_2a8.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                local_6d8 = local_2a8.AllocatorInstance.SecondaryData;
              }
              if ((local_2a8.ArrayNum < 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar15)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_5f8._12_4_ = uStack_6cc;
              local_5f8.ArrayNum = iStack_6d0;
              local_5f8.DataPtr = (TTransform<double> *)local_6d8;
              UE::PoseSearch::CalculateFullAlignedTransforms
                        (&(this->MotionMatchingState).SearchResult,this->bWarpUsingRootBone,
                         &local_5f8);
              fVar1 = this->WarpingTranslationRatio;
              fVar2 = this->WarpingRotationRatio;
              uVar20 = 0;
              if ((int)uVar17 < local_2a8.ArrayNum) {
                uVar20 = ~uVar17 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar22 = (ForElementType<UE::Math::TTransform<double>_>)&local_2a8;
              if (local_2a8.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                FVar22 = local_2a8.AllocatorInstance.SecondaryData;
              }
              UE::PoseSearch::CalculateDeltaAlignment
                        (&local_108,&this->MeshWithoutOffset,&this->MeshWithOffset,
                         (TTransform<double> *)((longlong)(int)uVar17 * 0x60 + (longlong)FVar22),
                         fVar2,fVar1);
              pIVar14 = local_720;
              local_368.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_368.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_368.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_368.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_368.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_368.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_368.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_368.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_368.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_368.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_368.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_368.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_368.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_368.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_368.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_368.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_368.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_368.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              (**(code **)((longlong)*local_720 + 0x20))
                        (local_720,&param_1->CustomAttributes,&local_368);
              local_308.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_308.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_308.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_308.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_308.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_308.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_308.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_308.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_308.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_308.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_308.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_308.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_308.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_308.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_308.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_308.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_308.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_308.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply(&local_308,&local_108,&local_368);
              (**(code **)((longlong)*pIVar14 + 0x18))
                        (pIVar14,&local_308,&param_1->CustomAttributes);
              dVar11 = __real_4041800000000000;
              dVar10 = __real_403e000000000000;
              dVar13 = _UNK_150689518;
              dVar12 = ___xmm_00000000000000003ff0000000000000;
              if (FVisualLogger::bIsRecording != 0) {
                local_738 = (longlong)iVar16;
                uVar17 = 0;
                if (0 < local_738) {
                  lVar19 = 0;
                  do {
                    uVar20 = 0;
                    if ((int)uVar17 <
                        (this->MotionMatchingState).SearchResult.ActorRootTransforms.ArrayNum) {
                      uVar20 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar5 = (this->MotionMatchingState).SearchResult.ActorRootTransforms.
                             AllocatorInstance.Data;
                    uVar20 = 0;
                    if ((int)uVar17 < local_2a8.ArrayNum) {
                      uVar20 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    FVar22 = (ForElementType<UE::Math::TTransform<double>_>)&local_2a8;
                    if (local_2a8.AllocatorInstance.SecondaryData !=
                        (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                      FVar22 = local_2a8.AllocatorInstance.SecondaryData;
                    }
                    if (FVisualLogger::bIsRecording != 0) {
                      local_5d8._s_0.X = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x20);
                      local_5d8._s_0.Y = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x20 + 8);
                      local_5d8._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x30);
                      local_5c0._s_0.X =
                           (double)*(undefined8 *)((uchar *)((longlong)FVar22 + 0x20) + lVar19);
                      local_5c0._s_0.Y =
                           (double)*(undefined8 *)((uchar *)((longlong)FVar22 + 0x20) + lVar19 + 8);
                      local_5c0._s_0.Z =
                           (double)*(undefined8 *)((uchar *)((longlong)FVar22 + 0x30) + lVar19);
                      ::FName::FName(&local_718,LogName);
                      FVisualLogger::SegmentLogfImpl
                                (pUVar3,&local_718,Display,(TVector<double> *)&local_5c0._s_0,
                                 (TVector<double> *)&local_5d8._s_0,&FColorList::Orange,1,L"");
                      if (FVisualLogger::bIsRecording != 0) {
                        local_488.X = *(double *)(pFVar5 + lVar19);
                        local_488.Y = *(double *)(pFVar5 + lVar19 + 8);
                        local_488.Z = *(double *)(pFVar5 + lVar19 + 0x10);
                        local_488.W = *(double *)(pFVar5 + lVar19 + 0x10 + 8);
                        dVar7 = *(double *)(pFVar5 + lVar19 + 0x20);
                        dVar8 = *(double *)(pFVar5 + lVar19 + 0x20 + 8);
                        dVar9 = *(double *)(pFVar5 + lVar19 + 0x30);
                        local_418 = 0;
                        local_428 = dVar12;
                        dStack_420 = dVar13;
                        local_5a8._s_0.X = dVar12;
                        local_5a8._s_0.Y = dVar13;
                        local_5a8._s_0.Z = 0.0;
                        local_410 = dVar7;
                        dStack_408 = dVar8;
                        UE::Math::TQuat<double>::RotateVector
                                  (&local_488,(TVector<double> *)&local_680._s_0,
                                   (TVector<double> *)&local_5a8._s_0);
                        local_668._s_0.X = local_680._s_0.X * dVar11 + dVar7;
                        local_668._s_0.Y = local_680._s_0.Y * dVar11 + dVar8;
                        local_668._s_0.Z = local_680._s_0.Z * dVar11 + dVar9;
                        local_588._s_0.X = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x20);
                        local_588._s_0.Y = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x20 + 8);
                        local_588._s_0.Z = dVar9;
                        local_400 = dVar9;
                        ::FName::FName(&local_710,LogName);
                        FVisualLogger::SegmentLogfImpl
                                  (pUVar3,&local_710,Display,(TVector<double> *)&local_588._s_0,
                                   (TVector<double> *)&local_668._s_0,&FColorList::LightGrey,3,L"");
                        if (FVisualLogger::bIsRecording != 0) {
                          local_4a8.X = *(double *)((longlong)FVar22 + lVar19);
                          local_4a8.Y = ((double *)((longlong)FVar22 + lVar19))[1];
                          local_4a8.Z = *(double *)((uchar *)((longlong)FVar22 + 0x10) + lVar19);
                          local_4a8.W = *(double *)((uchar *)((longlong)FVar22 + 0x10) + lVar19 + 8)
                          ;
                          dVar7 = *(double *)((uchar *)((longlong)FVar22 + 0x20) + lVar19);
                          dVar8 = *(double *)((uchar *)((longlong)FVar22 + 0x20) + lVar19 + 8);
                          dVar9 = *(double *)((uchar *)((longlong)FVar22 + 0x30) + lVar19);
                          local_3e8 = 0;
                          local_3f8 = dVar12;
                          dStack_3f0 = dVar13;
                          local_568._s_0.X = dVar12;
                          local_568._s_0.Y = dVar13;
                          local_568._s_0.Z = 0.0;
                          local_3e0 = dVar7;
                          dStack_3d8 = dVar8;
                          UE::Math::TQuat<double>::RotateVector
                                    (&local_4a8,(TVector<double> *)&local_650._s_0,
                                     (TVector<double> *)&local_568._s_0);
                          local_638._s_0.X = local_650._s_0.X * dVar10 + dVar7;
                          local_638._s_0.Y = local_650._s_0.Y * dVar10 + dVar8;
                          local_638._s_0.Z = local_650._s_0.Z * dVar10 + dVar9;
                          local_548._s_0.X =
                               (double)*(undefined8 *)((uchar *)((longlong)FVar22 + 0x20) + lVar19);
                          local_548._s_0.Y =
                               (double)*(undefined8 *)
                                        ((uchar *)((longlong)FVar22 + 0x20) + lVar19 + 8);
                          local_548._s_0.Z = dVar9;
                          local_3d0 = dVar9;
                          ::FName::FName(&local_708,LogName);
                          FVisualLogger::SegmentLogfImpl
                                    (pUVar3,&local_708,Display,(TVector<double> *)&local_548._s_0,
                                     (TVector<double> *)&local_638._s_0,&FColorList::Orange,2,L"");
                        }
                      }
                    }
                    uVar17 = uVar17 + 1;
                    lVar19 = lVar19 + 0x60;
                    local_738 = local_738 + -1;
                  } while (local_738 != 0);
                }
                if (FVisualLogger::bIsRecording != 0) {
                  local_468.X = (this->MeshWithOffset).Rotation.XY.m128d_f64[0];
                  local_468.Y = (this->MeshWithOffset).Rotation.XY.m128d_f64[1];
                  local_468.Z = (this->MeshWithOffset).Rotation.ZW.m128d_f64[0];
                  local_468.W = (this->MeshWithOffset).Rotation.ZW.m128d_f64[1];
                  dVar10 = (this->MeshWithOffset).Translation.XY.m128d_f64[0];
                  dVar7 = (this->MeshWithOffset).Translation.XY.m128d_f64[1];
                  dVar8 = (this->MeshWithOffset).Translation.ZW.m128d_f64[0];
                  local_528._s_0.X = dVar12;
                  local_528._s_0.Y = dVar13;
                  local_528._s_0.Z = 0.0;
                  UE::Math::TQuat<double>::RotateVector
                            (&local_468,(TVector<double> *)&local_620._s_0,
                             (TVector<double> *)&local_528._s_0);
                  local_6c8._s_0.X = local_620._s_0.X * dVar11 + dVar10;
                  local_6c8._s_0.Y = local_620._s_0.Y * dVar11 + dVar7;
                  local_6c8._s_0.Z = local_620._s_0.Z * dVar11 + dVar8;
                  local_508._s_0.X = (this->MeshWithOffset).Translation.XY.m128d_f64[0];
                  local_508._s_0.Y = (this->MeshWithOffset).Translation.XY.m128d_f64[1];
                  local_508._s_0.Z = dVar8;
                  ::FName::FName(&local_700,LogName);
                  FVisualLogger::SegmentLogfImpl
                            (pUVar3,&local_700,Display,(TVector<double> *)&local_508._s_0,
                             (TVector<double> *)&local_6c8._s_0,&FColorList::Blue,3,L"");
                  if (FVisualLogger::bIsRecording != 0) {
                    local_448.X = (this->MeshWithoutOffset).Rotation.XY.m128d_f64[0];
                    local_448.Y = (this->MeshWithoutOffset).Rotation.XY.m128d_f64[1];
                    local_448.Z = (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[0];
                    local_448.W = (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[1];
                    dVar10 = (this->MeshWithoutOffset).Translation.XY.m128d_f64[0];
                    dVar11 = (this->MeshWithoutOffset).Translation.XY.m128d_f64[1];
                    dVar7 = (this->MeshWithoutOffset).Translation.ZW.m128d_f64[0];
                    local_4e8._s_0.X = dVar12;
                    local_4e8._s_0.Y = dVar13;
                    local_4e8._s_0.Z = 0.0;
                    UE::Math::TQuat<double>::RotateVector
                              (&local_448,(TVector<double> *)&local_6b0._s_0,
                               (TVector<double> *)&local_4e8._s_0);
                    local_698._s_0.X = local_6b0._s_0.X * __real_4044000000000000 + dVar10;
                    local_698._s_0.Y = local_6b0._s_0.Y * __real_4044000000000000 + dVar11;
                    local_698._s_0.Z = local_6b0._s_0.Z * __real_4044000000000000 + dVar7;
                    local_4c8._s_0.X = (this->MeshWithoutOffset).Translation.XY.m128d_f64[0];
                    local_4c8._s_0.Y = (this->MeshWithoutOffset).Translation.XY.m128d_f64[1];
                    local_4c8._s_0.Z = dVar7;
                    ::FName::FName(&local_6f8,LogName);
                    FVisualLogger::SegmentLogfImpl
                              (pUVar3,&local_6f8,Display,(TVector<double> *)&local_4c8._s_0,
                               (TVector<double> *)&local_698._s_0,&FColorList::Cyan,4,L"");
                  }
                }
              }
              if (local_2a8.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                FMemory::Free((void *)local_2a8.AllocatorInstance.SecondaryData);
              }
            }
          }
        }
      }
      goto LAB_14a89c8ba;
    }
    if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a89c8ba;
    pFVar21 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar21,(FLogCategoryBase *)&LogPoseSearch);
LAB_14a89c8ba:
  UE::PoseSearch::FInteractionValidator::~FInteractionValidator(&local_5e8);
  return;
}

// FAnimNode_MotionMatching @ 14a8aa390

FAnimNode_MotionMatching * __thiscall
FAnimNode_MotionMatching::FAnimNode_MotionMatching(FAnimNode_MotionMatching *this)

{
  FName FVar1;
  undefined8 uVar2;
  
  FAnimNode_BlendStack_Standalone::FAnimNode_BlendStack_Standalone
            ((FAnimNode_BlendStack_Standalone *)this);
  this->BlendTime = 0.2;
  this->_padding_ = (longlong)&___7FAnimNode_MotionMatching__6B_;
  (this->Database).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->EventToSearch).EventTag.TagName = (FName)0x0;
  (this->EventToSearch).TimeToEvent = 0.0;
  (this->EventToSearch).bEnablePoseFilters = false;
  (this->EventToSearch).bUsePlayRateRangeOverride = true;
  *(undefined4 *)&(this->MotionMatchingState).CurrentSearchResult = 0xffffffff;
  *(undefined8 *)&(this->MotionMatchingState).CurrentSearchResult.field_0x4 = 0;
  (this->MotionMatchingState).CurrentSearchResult.EventPoseIdx = -1;
  (this->MotionMatchingState).CurrentSearchResult.AssetTime = 3.4028235e+38;
  (this->MotionMatchingState).CurrentSearchResult.bIsContinuingPoseSearch = false;
  (this->MotionMatchingState).SearchResult.SelectedAnim.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->MotionMatchingState).SearchResult.SelectedTime = 0.0;
  (this->MotionMatchingState).SearchResult.bIsContinuingPoseSearch = false;
  (this->MotionMatchingState).SearchResult.WantedPlayRate = 1.0;
  (this->MotionMatchingState).SearchResult.bLoop = false;
  (this->MotionMatchingState).SearchResult.bIsMirrored = false;
  this->PoseJumpThresholdTime = (FFloatInterval)0x0;
  *(undefined4 *)&this->PlayRate = 0x3f800000;
  *(undefined4 *)&(this->PlayRate).field_0x4 = 0x3f800000;
  *(undefined4 *)&(this->EventToSearch).PlayRateRangeOverride = 0x3f800000;
  *(undefined4 *)&(this->EventToSearch).PlayRateRangeOverride.field_0x4 = 0x3f800000;
  (this->MotionMatchingState).CurrentSearchResult.PoseCost.TotalCost = 3.4028235e+38;
  this->BlendOption = Linear;
  this->PoseReselectHistory = 0.3;
  this->SearchThrottleTime = 0.0;
  this->PlayRateMultiplier = 1.0;
  this->bUseInertialBlend = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FVar1 = UE::PoseSearch::DefaultRole;
  this->bResetOnBecomingRelevant = true;
  this->bShouldSearch = true;
  this->bShouldUseCachedChannelData = false;
  (this->MotionMatchingState).SearchResult.BlendParameters.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MotionMatchingState).SearchResult.BlendParameters.field0_0x0._s_0.Y = (double)uVar2;
  (this->MotionMatchingState).SearchResult.BlendParameters.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->MotionMatchingState).SearchResult.SelectedDatabase.field0_0x0.DebugPtr =
       (UPoseSearchDatabase *)0x0;
  (this->MotionMatchingState).SearchResult.Role = FVar1;
  (this->MotionMatchingState).SearchResult.SearchCost = 3.4028235e+38;
  (this->MotionMatchingState).SearchResult.bIsInteraction = false;
  (this->MotionMatchingState).SearchResult.ActorRootTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MotionMatchingState).SearchResult.ActorRootTransforms.ArrayNum = 0;
  (this->MotionMatchingState).SearchResult.ActorRootTransforms.ArrayMax = 0;
  (this->MotionMatchingState).SearchResult.ActorRootBoneTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MotionMatchingState).SearchResult.ActorRootBoneTransforms.ArrayNum = 0;
  (this->MotionMatchingState).SearchResult.ActorRootBoneTransforms.ArrayMax = 0;
  (this->MotionMatchingState).SearchResult.AnimContexts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MotionMatchingState).SearchResult.AnimContexts.ArrayNum = 0;
  (this->MotionMatchingState).SearchResult.AnimContexts.ArrayMax = 0;
  (this->MotionMatchingState).ElapsedPoseSearchTime = 0.0;
  (this->MotionMatchingState).WantedPlayRate = 1.0;
  (this->MotionMatchingState).bJumpedToPose = false;
  *(undefined8 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime = 0;
  *(undefined8 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x8 = 0;
  *(undefined8 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x20 = 0;
  *(undefined4 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x28 = 0;
  *(undefined4 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x2c = 0x80;
  *(undefined4 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x30 = 0xffffffff
  ;
  *(undefined4 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x34 = 0;
  *(undefined8 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x40 = 0;
  *(undefined4 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x48 = 0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  (this->DatabasesToSearch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DatabasesToSearch).ArrayNum = 0;
  (this->DatabasesToSearch).ArrayMax = 0;
  (this->Availabilities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Availabilities).ArrayNum = 0;
  (this->Availabilities).ArrayMax = 0;
  this->NextUpdateInterruptMode = DoNotInterrupt;
  this->bOverrideDatabaseInput = false;
  this->bValidateResultAgainstAvailabilities = true;
  this->bKeepInteractionAlive = false;
  this->bWarpUsingRootBone = true;
  this->WarpingTranslationRatio = 1.0;
  this->WarpingRotationRatio = 1.0;
  *&(this->MeshWithOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshWithOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshWithOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshWithOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshWithOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshWithOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshWithoutOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshWithoutOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshWithoutOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// operator= @ 14a8ae390

FAnimNode_MotionMatching * __thiscall
FAnimNode_MotionMatching::operator=
          (FAnimNode_MotionMatching *this,FAnimNode_MotionMatching *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int *piVar2;
  FPoseIndicesHistory *pFVar3;
  FPoseIndicesHistory *this_01;
  TArray<TObjectPtr<UPoseSearchDatabase_const_>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  UPoseSearchDatabase *pUVar6;
  UBlendProfile *pUVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  short sVar13;
  undefined4 uVar14;
  FPoseSearchCost FVar15;
  undefined3 uVar16;
  short sVar17;
  
  FAnimNode_BlendStack_Standalone::operator=
            ((FAnimNode_BlendStack_Standalone *)this,(FAnimNode_BlendStack_Standalone *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->Database).field0_0x0.DebugPtr, pUVar6 != (UPoseSearchDatabase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->Database).field0_0x0 = (param_1->Database).field0_0x0;
  this->BlendTime = param_1->BlendTime;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->BlendProfile).field0_0x0.DebugPtr, pUVar7 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->BlendProfile).field0_0x0 = (param_1->BlendProfile).field0_0x0;
  this->BlendOption = param_1->BlendOption;
  this->PoseJumpThresholdTime = param_1->PoseJumpThresholdTime;
  this->PoseReselectHistory = param_1->PoseReselectHistory;
  this->SearchThrottleTime = param_1->SearchThrottleTime;
  this->PlayRate = param_1->PlayRate;
  this->PlayRateMultiplier = param_1->PlayRateMultiplier;
  this->bUseInertialBlend = param_1->bUseInertialBlend;
  this->bResetOnBecomingRelevant = param_1->bResetOnBecomingRelevant;
  this->bShouldSearch = param_1->bShouldSearch;
  this->bShouldUseCachedChannelData = param_1->bShouldUseCachedChannelData;
  fVar10 = (param_1->EventToSearch).TimeToEvent;
  bVar11 = (param_1->EventToSearch).bEnablePoseFilters;
  bVar12 = (param_1->EventToSearch).bUsePlayRateRangeOverride;
  sVar13 = (param_1->EventToSearch)._padding_;
  (this->EventToSearch).EventTag.TagName = (param_1->EventToSearch).EventTag.TagName;
  (this->EventToSearch).TimeToEvent = fVar10;
  (this->EventToSearch).bEnablePoseFilters = bVar11;
  (this->EventToSearch).bUsePlayRateRangeOverride = bVar12;
  (this->EventToSearch)._padding_ = sVar13;
  (this->EventToSearch).PlayRateRangeOverride = (param_1->EventToSearch).PlayRateRangeOverride;
  uVar14 = *(undefined4 *)&(param_1->MotionMatchingState).CurrentSearchResult.field_0x8;
  FVar15.TotalCost = (param_1->MotionMatchingState).CurrentSearchResult.PoseCost.TotalCost;
  *(undefined8 *)&(this->MotionMatchingState).CurrentSearchResult =
       *(undefined8 *)&(param_1->MotionMatchingState).CurrentSearchResult;
  *(undefined4 *)&(this->MotionMatchingState).CurrentSearchResult.field_0x8 = uVar14;
  (this->MotionMatchingState).CurrentSearchResult.PoseCost = (FPoseSearchCost)FVar15.TotalCost;
  fVar10 = (param_1->MotionMatchingState).CurrentSearchResult.AssetTime;
  (this->MotionMatchingState).CurrentSearchResult.EventPoseIdx =
       (param_1->MotionMatchingState).CurrentSearchResult.EventPoseIdx;
  (this->MotionMatchingState).CurrentSearchResult.AssetTime = fVar10;
  uVar16 = *(undefined3 *)&(param_1->MotionMatchingState).CurrentSearchResult.field_0x19;
  (this->MotionMatchingState).CurrentSearchResult.bIsContinuingPoseSearch =
       (param_1->MotionMatchingState).CurrentSearchResult.bIsContinuingPoseSearch;
  *(undefined3 *)&(this->MotionMatchingState).CurrentSearchResult.field_0x19 = uVar16;
  FPoseSearchBlueprintResult::operator=
            (&(this->MotionMatchingState).SearchResult,&(param_1->MotionMatchingState).SearchResult)
  ;
  pFVar3 = &(param_1->MotionMatchingState).PoseIndicesHistory;
  (this->MotionMatchingState).ElapsedPoseSearchTime =
       (param_1->MotionMatchingState).ElapsedPoseSearchTime;
  this_01 = &(this->MotionMatchingState).PoseIndicesHistory;
  (this->MotionMatchingState).WantedPlayRate = (param_1->MotionMatchingState).WantedPlayRate;
  (this->MotionMatchingState).bJumpedToPose = (param_1->MotionMatchingState).bJumpedToPose;
  if (this_01 != pFVar3) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x38,
               (int *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x38,
               *(int *)&(param_1->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x48);
    iVar5 = *(int *)&(param_1->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x8;
    TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar5);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar5,(ForAnyElementType *)this_01,
               (int *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x8,
               (int *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0xc);
    puVar1 = &(param_1->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x10;
    this_00 = &(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x10;
    *(undefined4 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x30 =
         *(undefined4 *)&(param_1->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x30;
    *(undefined4 *)&(this->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x34 =
         *(undefined4 *)&(param_1->MotionMatchingState).PoseIndicesHistory.IndexToTime.field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar5 != 0) {
      memcpy(*(void **)&this_01->IndexToTime,*(void **)&pFVar3->IndexToTime,(longlong)iVar5 * 0x18);
    }
  }
  sVar13 = (param_1->UpdateCounter).Counter;
  sVar17 = (param_1->UpdateCounter).SkipFrames;
  uVar14 = *(undefined4 *)&(param_1->UpdateCounter).field_0xc;
  pTVar4 = &this->DatabasesToSearch;
  (this->UpdateCounter).LastSyncronizedFrame = (param_1->UpdateCounter).LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar13;
  (this->UpdateCounter).SkipFrames = sVar17;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar14;
  if (pTVar4 != &param_1->DatabasesToSearch) {
    iVar5 = (param_1->DatabasesToSearch).ArrayNum;
    piVar2 = &(this->DatabasesToSearch).ArrayMax;
    pFVar8 = (param_1->DatabasesToSearch).AllocatorInstance.Data;
    (this->DatabasesToSearch).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
      ConstructItems<TObjectPtr<UPoseSearchDatabase_const_>,TObjectPtr<UPoseSearchDatabase_const_>,int>
                ((pTVar4->AllocatorInstance).Data,(TObjectPtr<UPoseSearchDatabase_const_> *)pFVar8,
                 iVar5);
    }
  }
  this->NextUpdateInterruptMode = param_1->NextUpdateInterruptMode;
  this->bOverrideDatabaseInput = param_1->bOverrideDatabaseInput;
  TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>::operator=
            (&this->Availabilities,&param_1->Availabilities);
  this->bValidateResultAgainstAvailabilities = param_1->bValidateResultAgainstAvailabilities;
  this->bKeepInteractionAlive = param_1->bKeepInteractionAlive;
  this->bWarpUsingRootBone = param_1->bWarpUsingRootBone;
  this->WarpingTranslationRatio = param_1->WarpingTranslationRatio;
  this->WarpingRotationRatio = param_1->WarpingRotationRatio;
  dVar9 = (param_1->MeshWithOffset).Rotation.XY.m128d_f64[1];
  (this->MeshWithOffset).Rotation.XY.m128d_f64[0] =
       (param_1->MeshWithOffset).Rotation.XY.m128d_f64[0];
  (this->MeshWithOffset).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithOffset).Rotation.ZW.m128d_f64[1];
  (this->MeshWithOffset).Rotation.ZW.m128d_f64[0] =
       (param_1->MeshWithOffset).Rotation.ZW.m128d_f64[0];
  (this->MeshWithOffset).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithOffset).Translation.XY.m128d_f64[1];
  (this->MeshWithOffset).Translation.XY.m128d_f64[0] =
       (param_1->MeshWithOffset).Translation.XY.m128d_f64[0];
  (this->MeshWithOffset).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithOffset).Translation.ZW.m128d_f64[1];
  (this->MeshWithOffset).Translation.ZW.m128d_f64[0] =
       (param_1->MeshWithOffset).Translation.ZW.m128d_f64[0];
  (this->MeshWithOffset).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithOffset).Scale3D.XY.m128d_f64[1];
  (this->MeshWithOffset).Scale3D.XY.m128d_f64[0] = (param_1->MeshWithOffset).Scale3D.XY.m128d_f64[0]
  ;
  (this->MeshWithOffset).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithOffset).Scale3D.ZW.m128d_f64[1];
  (this->MeshWithOffset).Scale3D.ZW.m128d_f64[0] = (param_1->MeshWithOffset).Scale3D.ZW.m128d_f64[0]
  ;
  (this->MeshWithOffset).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithoutOffset).Rotation.XY.m128d_f64[1];
  (this->MeshWithoutOffset).Rotation.XY.m128d_f64[0] =
       (param_1->MeshWithoutOffset).Rotation.XY.m128d_f64[0];
  (this->MeshWithoutOffset).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithoutOffset).Rotation.ZW.m128d_f64[1];
  (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[0] =
       (param_1->MeshWithoutOffset).Rotation.ZW.m128d_f64[0];
  (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithoutOffset).Translation.XY.m128d_f64[1];
  (this->MeshWithoutOffset).Translation.XY.m128d_f64[0] =
       (param_1->MeshWithoutOffset).Translation.XY.m128d_f64[0];
  (this->MeshWithoutOffset).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithoutOffset).Translation.ZW.m128d_f64[1];
  (this->MeshWithoutOffset).Translation.ZW.m128d_f64[0] =
       (param_1->MeshWithoutOffset).Translation.ZW.m128d_f64[0];
  (this->MeshWithoutOffset).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithoutOffset).Scale3D.XY.m128d_f64[1];
  (this->MeshWithoutOffset).Scale3D.XY.m128d_f64[0] =
       (param_1->MeshWithoutOffset).Scale3D.XY.m128d_f64[0];
  (this->MeshWithoutOffset).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->MeshWithoutOffset).Scale3D.ZW.m128d_f64[1];
  (this->MeshWithoutOffset).Scale3D.ZW.m128d_f64[0] =
       (param_1->MeshWithoutOffset).Scale3D.ZW.m128d_f64[0];
  (this->MeshWithoutOffset).Scale3D.ZW.m128d_f64[1] = dVar9;
  return this;
}

// GetBlendspaceParameters @ 14a8b9a20

TVector<double> * __thiscall
FAnimNode_MotionMatching::GetBlendspaceParameters(FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  TVector<double> *pTVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_BlendParameters.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendParameters,"BlendParameters");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar5,
                           L"AnimNode_MotionMatching");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_BlendParameters,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_BlendParameters.Id = pFVar6->Id;
    CachedId_BlendParameters.Index = pFVar6->Index;
  }
  iVar3 = CachedId_BlendParameters.Index;
  FVar2 = CachedId_BlendParameters.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar1)();
    return pTVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pTVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pTVar7;
}

// GetBlendspaceParametersDeltaThreshold @ 14a8b9b70

float __thiscall
FAnimNode_MotionMatching::GetBlendspaceParametersDeltaThreshold(FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_BlendParametersDeltaThreshold.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendParametersDeltaThreshold,"BlendParametersDeltaThreshold");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar5,
                           L"AnimNode_MotionMatching");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_BlendParametersDeltaThreshold,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_BlendParametersDeltaThreshold.Id = pFVar6->Id;
    CachedId_BlendParametersDeltaThreshold.Index = pFVar6->Index;
  }
  iVar3 = CachedId_BlendParametersDeltaThreshold.Index;
  FVar2 = CachedId_BlendParametersDeltaThreshold.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetBlendspaceUpdateMode @ 14a8b9cd0

EBlendStack_BlendspaceUpdateMode __thiscall
FAnimNode_MotionMatching::GetBlendspaceUpdateMode(FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EBlendStack_BlendspaceUpdateMode EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EBlendStack_BlendspaceUpdateMode *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_BlendspaceUpdateMode.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendspaceUpdateMode,"BlendspaceUpdateMode");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar6,
                           L"AnimNode_MotionMatching");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_BlendspaceUpdateMode,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_BlendspaceUpdateMode.Id = pFVar7->Id;
    CachedId_BlendspaceUpdateMode.Index = pFVar7->Index;
  }
  iVar3 = CachedId_BlendspaceUpdateMode.Index;
  FVar2 = CachedId_BlendspaceUpdateMode.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pEVar8;
}

// GetEstimatedFutureRootMotionVelocity @ 14a8babf0

TVector<double> * __thiscall
FAnimNode_MotionMatching::GetEstimatedFutureRootMotionVelocity
          (FAnimNode_MotionMatching *this,TVector<double> *__return_storage_ptr__)

{
  FMotionMatchingState::GetEstimatedFutureRootMotionVelocity
            (&this->MotionMatchingState,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOnUpdateMotionMatchingStateFunction @ 14a8bb3a0

FAnimNodeFunctionRef * __thiscall
FAnimNode_MotionMatching::GetOnUpdateMotionMatchingStateFunction(FAnimNode_MotionMatching *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_OnMotionMatchingStateUpdated.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_OnMotionMatchingStateUpdated,"OnMotionMatchingStateUpdated");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar5,
                           L"AnimNode_MotionMatching");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_OnMotionMatchingStateUpdated,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton);
    CachedId_OnMotionMatchingStateUpdated.Id = pFVar6->Id;
    CachedId_OnMotionMatchingStateUpdated.Index = pFVar6->Index;
  }
  iVar3 = CachedId_OnMotionMatchingStateUpdated.Index;
  FVar2 = CachedId_OnMotionMatchingStateUpdated.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pFVar7;
}

// ResetDatabasesToSearch @ 14a8c5500

void __thiscall
FAnimNode_MotionMatching::ResetDatabasesToSearch
          (FAnimNode_MotionMatching *this,EPoseSearchInterruptMode param_1)

{
  (this->DatabasesToSearch).ArrayNum = 0;
  if ((this->DatabasesToSearch).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DatabasesToSearch).AllocatorInstance,0,
               &(this->DatabasesToSearch).ArrayMax);
    this->bOverrideDatabaseInput = false;
    this->NextUpdateInterruptMode = param_1;
    return;
  }
  this->bOverrideDatabaseInput = false;
  this->NextUpdateInterruptMode = param_1;
  return;
}

// SetDatabaseToSearch @ 14a8cd3f0

void __thiscall
FAnimNode_MotionMatching::SetDatabaseToSearch
          (FAnimNode_MotionMatching *this,UPoseSearchDatabase *param_1,
          EPoseSearchInterruptMode param_2)

{
  UPoseSearchDatabase *local_res10 [3];
  TArrayView<UPoseSearchDatabase_*_const,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  SetDatabasesToSearch(this,&local_18,param_2);
  return;
}

// SetDatabasesToSearch @ 14a8cd4c0

void __thiscall
FAnimNode_MotionMatching::SetDatabasesToSearch
          (FAnimNode_MotionMatching *this,TArrayView<UPoseSearchDatabase_*_const,int> *param_1,
          EPoseSearchInterruptMode param_2)

{
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 *pTVar1;
  int *piVar2;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 *pTVar3;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 local_res8;
  
  piVar2 = &(this->DatabasesToSearch).ArrayMax;
  (this->DatabasesToSearch).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DatabasesToSearch).AllocatorInstance,0,piVar2);
  }
  pTVar3 = (TObjectPtr<UPoseSearchDatabase_const_>_u_0 *)param_1->DataPtr;
  pTVar1 = pTVar3 + param_1->ArrayNum;
  for (; pTVar3 != pTVar1; pTVar3 = pTVar3 + 1) {
    local_res8 = (TObjectPtr<UPoseSearchDatabase_const_>_u_0)pTVar3->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UPoseSearchDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    TArray<TObjectPtr<UPoseSearchDatabase_const_>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UPoseSearchDatabase_const_>_>
              (&this->DatabasesToSearch,
               (TObjectPtr<UPoseSearchDatabase_const_> *)&local_res8.ObjectPtr);
  }
  this->bOverrideDatabaseInput = true;
  this->NextUpdateInterruptMode = param_2;
  return;
}

// SetInterruptMode @ 14a8cd660

void __thiscall
FAnimNode_MotionMatching::SetInterruptMode
          (FAnimNode_MotionMatching *this,EPoseSearchInterruptMode param_1)

{
  this->NextUpdateInterruptMode = param_1;
  return;
}

