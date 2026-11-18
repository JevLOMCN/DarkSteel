// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticStruct @ 14749f580

UScriptStruct * __cdecl FAnimNode_SequencePlayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar1,
                         L"AnimNode_SequencePlayer");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton;
}

// SetSequence @ 14749f5e0

bool __thiscall
FAnimNode_SequencePlayer::SetSequence(FAnimNode_SequencePlayer *this,UAnimSequenceBase *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Sequence).field0_0x0.DebugPtr = param_1;
    return true;
  }
  (this->Sequence).field0_0x0.DebugPtr = param_1;
  return true;
}

// SetLoopAnimation @ 14749f630

bool __thiscall
FAnimNode_SequencePlayer::SetLoopAnimation(FAnimNode_SequencePlayer *this,bool param_1)

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
  
  if (CachedId_bLoopAnimation.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bLoopAnimation,"bLoopAnimation");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bLoopAnimation,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_bLoopAnimation.Id = pFVar7->Id;
    CachedId_bLoopAnimation.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bLoopAnimation.Index;
  FVar2 = CachedId_bLoopAnimation.Id;
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

// GetSequence @ 14749f7d0

UAnimSequenceBase * __thiscall FAnimNode_SequencePlayer::GetSequence(FAnimNode_SequencePlayer *this)

{
  return (this->Sequence).field0_0x0.DebugPtr;
}

// GetPlayRateBasis @ 14749f7e0

float __thiscall FAnimNode_SequencePlayer::GetPlayRateBasis(FAnimNode_SequencePlayer *this)

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
  
  if (CachedId_PlayRateBasis.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_PlayRateBasis,"PlayRateBasis");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar5,
                           L"AnimNode_SequencePlayer");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_PlayRateBasis,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_PlayRateBasis.Id = pFVar6->Id;
    CachedId_PlayRateBasis.Index = pFVar6->Index;
  }
  iVar3 = CachedId_PlayRateBasis.Index;
  FVar2 = CachedId_PlayRateBasis.Id;
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

// GetPlayRate @ 14749f940

float __thiscall FAnimNode_SequencePlayer::GetPlayRate(FAnimNode_SequencePlayer *this)

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
  
  if (CachedId_PlayRate.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_PlayRate,"PlayRate");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar5,
                           L"AnimNode_SequencePlayer");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_PlayRate,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_PlayRate.Id = pFVar6->Id;
    CachedId_PlayRate.Index = pFVar6->Index;
  }
  iVar3 = CachedId_PlayRate.Index;
  FVar2 = CachedId_PlayRate.Id;
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

// GetPlayRateScaleBiasClampConstants @ 14749faa0

FInputScaleBiasClampConstants * __thiscall
FAnimNode_SequencePlayer::GetPlayRateScaleBiasClampConstants(FAnimNode_SequencePlayer *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FInputScaleBiasClampConstants *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_PlayRateScaleBiasClampConstants.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_PlayRateScaleBiasClampConstants,"PlayRateScaleBiasClampConstants");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar5,
                           L"AnimNode_SequencePlayer");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_PlayRateScaleBiasClampConstants,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_PlayRateScaleBiasClampConstants.Id = pFVar6->Id;
    CachedId_PlayRateScaleBiasClampConstants.Index = pFVar6->Index;
  }
  iVar3 = CachedId_PlayRateScaleBiasClampConstants.Index;
  FVar2 = CachedId_PlayRateScaleBiasClampConstants.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FInputScaleBiasClampConstants *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pFVar7;
}

// GetStartPosition @ 14749fbf0

float __thiscall FAnimNode_SequencePlayer::GetStartPosition(FAnimNode_SequencePlayer *this)

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
  
  if (CachedId_StartPosition.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_StartPosition,"StartPosition");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar5,
                           L"AnimNode_SequencePlayer");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_StartPosition,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_StartPosition.Id = pFVar6->Id;
    CachedId_StartPosition.Index = pFVar6->Index;
  }
  iVar3 = CachedId_StartPosition.Index;
  FVar2 = CachedId_StartPosition.Id;
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

// GetStartFromMatchingPose @ 14749fd50

bool __thiscall FAnimNode_SequencePlayer::GetStartFromMatchingPose(FAnimNode_SequencePlayer *this)

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
  
  if (CachedId_bStartFromMatchingPose.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bStartFromMatchingPose,"bStartFromMatchingPose");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bStartFromMatchingPose,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_bStartFromMatchingPose.Id = pFVar7->Id;
    CachedId_bStartFromMatchingPose.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bStartFromMatchingPose.Index;
  FVar2 = CachedId_bStartFromMatchingPose.Id;
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

// SetStartPosition @ 14749feb0

bool __thiscall
FAnimNode_SequencePlayer::SetStartPosition(FAnimNode_SequencePlayer *this,float param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  float *pfVar8;
  FNodeDataId local_48;
  FNodeDataId local_38 [4];
  
  if (CachedId_StartPosition.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_StartPosition,"StartPosition");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_38,AnimName_StartPosition,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_StartPosition.Id = pFVar7->Id;
    CachedId_StartPosition.Index = pFVar7->Index;
  }
  iVar3 = CachedId_StartPosition.Index;
  FVar2 = CachedId_StartPosition.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_48.Id = FVar2;
  local_48.Index = iVar3;
  pfVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_48,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pfVar8 != (float *)0x0) {
    *pfVar8 = param_1;
  }
  return pfVar8 != (float *)0x0;
}

// SetPlayRate @ 1474a0020

bool __thiscall FAnimNode_SequencePlayer::SetPlayRate(FAnimNode_SequencePlayer *this,float param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  float *pfVar8;
  FNodeDataId local_48;
  FNodeDataId local_38 [4];
  
  if (CachedId_PlayRate.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_PlayRate,"PlayRate");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_38,AnimName_PlayRate,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_PlayRate.Id = pFVar7->Id;
    CachedId_PlayRate.Index = pFVar7->Index;
  }
  iVar3 = CachedId_PlayRate.Index;
  FVar2 = CachedId_PlayRate.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_48.Id = FVar2;
  local_48.Index = iVar3;
  pfVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_48,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pfVar8 != (float *)0x0) {
    *pfVar8 = param_1;
  }
  return pfVar8 != (float *)0x0;
}

// GetGroupName @ 1474a0190

FName __thiscall FAnimNode_SequencePlayer::GetGroupName(FAnimNode_SequencePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar4,
                           L"AnimNode_SequencePlayer");
    }
    pFVar5 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// GetGroupRole @ 1474a0300

Type __thiscall FAnimNode_SequencePlayer::GetGroupRole(FAnimNode_SequencePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// GetOverridePositionWhenJoiningSyncGroupAsLeader @ 1474a0450

bool __thiscall
FAnimNode_SequencePlayer::GetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_SequencePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bOverridePositionWhenJoiningSyncGroupAsLeader,
                        (FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// GetGroupMethod @ 1474a05a0

EAnimSyncMethod __thiscall FAnimNode_SequencePlayer::GetGroupMethod(FAnimNode_SequencePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// IsLooping @ 1474a06f0

bool __thiscall FAnimNode_SequencePlayer::IsLooping(FAnimNode_SequencePlayer *this)

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
  
  if (CachedId_bLoopAnimation.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bLoopAnimation,"bLoopAnimation");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bLoopAnimation,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
    CachedId_bLoopAnimation.Id = pFVar7->Id;
    CachedId_bLoopAnimation.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bLoopAnimation.Index;
  FVar2 = CachedId_bLoopAnimation.Id;
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

// GetIgnoreForRelevancyTest @ 1474a0840

bool __thiscall FAnimNode_SequencePlayer::GetIgnoreForRelevancyTest(FAnimNode_SequencePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// SetGroupName @ 1474a0990

bool __thiscall FAnimNode_SequencePlayer::SetGroupName(FAnimNode_SequencePlayer *this,FName param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// SetGroupRole @ 1474a0b90

bool __thiscall FAnimNode_SequencePlayer::SetGroupRole(FAnimNode_SequencePlayer *this,Type param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// SetOverridePositionWhenJoiningSyncGroupAsLeader @ 1474a0d10

bool __thiscall
FAnimNode_SequencePlayer::SetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_SequencePlayer *this,bool param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bOverridePositionWhenJoiningSyncGroupAsLeader,
                        (FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// SetGroupMethod @ 1474a0e90

bool __thiscall
FAnimNode_SequencePlayer::SetGroupMethod(FAnimNode_SequencePlayer *this,EAnimSyncMethod param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

// SetIgnoreForRelevancyTest @ 1474a1010

bool __thiscall
FAnimNode_SequencePlayer::SetIgnoreForRelevancyTest(FAnimNode_SequencePlayer *this,bool param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer,(UObject *)pUVar6,
                           L"AnimNode_SequencePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.OuterSingleton);
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

