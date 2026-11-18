// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 22

// StaticStruct @ 1463ee350

UScriptStruct * __cdecl FAnimNode_BlendSpacePlayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar1,
                         L"AnimNode_BlendSpacePlayer");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton;
}

// GetBlendSpace @ 146447d10

UBlendSpace * __thiscall FAnimNode_BlendSpacePlayer::GetBlendSpace(FAnimNode_BlendSpacePlayer *this)

{
  return (this->BlendSpace).field0_0x0.DebugPtr;
}

// GetGroupMethod @ 14644a4d0

EAnimSyncMethod __thiscall
FAnimNode_BlendSpacePlayer::GetGroupMethod(FAnimNode_BlendSpacePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// GetGroupName @ 14644a630

FName __thiscall FAnimNode_BlendSpacePlayer::GetGroupName(FAnimNode_BlendSpacePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar4,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar5 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// GetGroupRole @ 14644a7c0

Type __thiscall FAnimNode_BlendSpacePlayer::GetGroupRole(FAnimNode_BlendSpacePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// GetIgnoreForRelevancyTest @ 14644ae70

bool __thiscall
FAnimNode_BlendSpacePlayer::GetIgnoreForRelevancyTest(FAnimNode_BlendSpacePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// GetOverridePositionWhenJoiningSyncGroupAsLeader @ 14644c1c0

bool __thiscall
FAnimNode_BlendSpacePlayer::GetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_BlendSpacePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bOverridePositionWhenJoiningSyncGroupAsLeader,
                        (FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// GetPlayRate @ 14644c520

float __thiscall FAnimNode_BlendSpacePlayer::GetPlayRate(FAnimNode_BlendSpacePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar5,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_PlayRate,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// GetPosition @ 14644c800

TVector<double> * __thiscall
FAnimNode_BlendSpacePlayer::GetPosition
          (FAnimNode_BlendSpacePlayer *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  UPackage *pUVar7;
  FNodeDataId *pFVar8;
  TVector<double> *pTVar9;
  float *pfVar10;
  ulonglong uVar11;
  FNodeDataId local_68;
  FNodeDataId local_58;
  FNodeDataId local_48;
  FNodeDataId local_3c [4];
  
  uVar11 = (ulonglong)_tls_index;
  if (CachedId_Y.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Y,"Y");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar7,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar8 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_48,AnimName_Y,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
    CachedId_Y.Id = pFVar8->Id;
    CachedId_Y.Index = pFVar8->Index;
  }
  iVar5 = CachedId_Y.Index;
  FVar4 = CachedId_Y.Id;
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TVector<double> *)(*pcVar3)();
    return pTVar9;
  }
  local_68.Id = FVar4;
  local_68.Index = iVar5;
  pfVar10 = FAnimNodeData::GetData
                      ((FAnimNodeData *)this->_padding_,&local_68,(FAnimNode_Base *)this,
                       (UObject *)0x0);
  fVar1 = *pfVar10;
  if (CachedId_X.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_X,"X");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar7,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar8 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_3c,AnimName_X,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
    CachedId_X.Id = pFVar8->Id;
    CachedId_X.Index = pFVar8->Index;
  }
  iVar5 = CachedId_X.Index;
  FVar4 = CachedId_X.Id;
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TVector<double> *)(*pcVar3)();
    return pTVar9;
  }
  local_58.Id = FVar4;
  local_58.Index = iVar5;
  pfVar10 = FAnimNodeData::GetData
                      ((FAnimNodeData *)this->_padding_,&local_58,(FAnimNode_Base *)this,
                       (UObject *)0x0);
  fVar2 = *pfVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar2;
  return __return_storage_ptr__;
}

// GetStartPosition @ 14644f480

float __thiscall FAnimNode_BlendSpacePlayer::GetStartPosition(FAnimNode_BlendSpacePlayer *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar5,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_StartPosition,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// IsLooping @ 14645ad80

bool __thiscall FAnimNode_BlendSpacePlayer::IsLooping(FAnimNode_BlendSpacePlayer *this)

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
  
  if (CachedId_bLoop.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bLoop,"bLoop");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bLoop,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
    CachedId_bLoop.Id = pFVar7->Id;
    CachedId_bLoop.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bLoop.Index;
  FVar2 = CachedId_bLoop.Id;
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

// SetBlendSpace @ 146467f70

bool __thiscall
FAnimNode_BlendSpacePlayer::SetBlendSpace(FAnimNode_BlendSpacePlayer *this,UBlendSpace *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->BlendSpace).field0_0x0.DebugPtr = param_1;
    return true;
  }
  (this->BlendSpace).field0_0x0.DebugPtr = param_1;
  return true;
}

// SetGroupMethod @ 146468e10

bool __thiscall
FAnimNode_BlendSpacePlayer::SetGroupMethod(FAnimNode_BlendSpacePlayer *this,EAnimSyncMethod param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// SetGroupName @ 146468fa0

bool __thiscall
FAnimNode_BlendSpacePlayer::SetGroupName(FAnimNode_BlendSpacePlayer *this,FName param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// SetGroupRole @ 146469130

bool __thiscall
FAnimNode_BlendSpacePlayer::SetGroupRole(FAnimNode_BlendSpacePlayer *this,Type param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// SetIgnoreForRelevancyTest @ 1464692c0

bool __thiscall
FAnimNode_BlendSpacePlayer::SetIgnoreForRelevancyTest(FAnimNode_BlendSpacePlayer *this,bool param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// SetLoop @ 1464695d0

bool __thiscall FAnimNode_BlendSpacePlayer::SetLoop(FAnimNode_BlendSpacePlayer *this,bool param_1)

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
  
  if (CachedId_bLoop.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bLoop,"bLoop");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bLoop,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
    CachedId_bLoop.Id = pFVar7->Id;
    CachedId_bLoop.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bLoop.Index;
  FVar2 = CachedId_bLoop.Id;
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

// SetOverridePositionWhenJoiningSyncGroupAsLeader @ 14646a260

bool __thiscall
FAnimNode_BlendSpacePlayer::SetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_BlendSpacePlayer *this,bool param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bOverridePositionWhenJoiningSyncGroupAsLeader,
                        (FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// SetPlayRate @ 14646a3e0

bool __thiscall
FAnimNode_BlendSpacePlayer::SetPlayRate(FAnimNode_BlendSpacePlayer *this,float param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_38,AnimName_PlayRate,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
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

// SetPosition @ 14646a6c0

bool __thiscall
FAnimNode_BlendSpacePlayer::SetPosition(FAnimNode_BlendSpacePlayer *this,TVector<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  UPackage *pUVar7;
  FNodeDataId *pFVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  FNodeDataId local_68;
  FNodeDataId local_58;
  FNodeDataId local_48;
  FNodeDataId local_3c [3];
  
  uVar11 = (ulonglong)_tls_index;
  if (CachedId_X.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_X,"X");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar7,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar8 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_48,AnimName_X,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
    CachedId_X.Id = pFVar8->Id;
    CachedId_X.Index = pFVar8->Index;
  }
  iVar4 = CachedId_X.Index;
  FVar3 = CachedId_X.Id;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_68.Id = FVar3;
  local_68.Index = iVar4;
  pfVar9 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_68,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (CachedId_Y.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Y,"Y");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar7,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar8 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_3c,AnimName_Y,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
    CachedId_Y.Id = pFVar8->Id;
    CachedId_Y.Index = pFVar8->Index;
  }
  iVar4 = CachedId_Y.Index;
  FVar3 = CachedId_Y.Id;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_58.Id = FVar3;
  local_58.Index = iVar4;
  pfVar10 = FAnimNodeData::GetInstanceData
                      ((FAnimNodeData *)this->_padding_,&local_58,(FAnimNode_Base *)this,
                       (UObject *)0x0);
  if ((pfVar9 == (float *)0x0) || (pfVar10 == (float *)0x0)) {
    bVar5 = false;
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    *pfVar9 = (float)(param_1->field0_0x0)._s_0.X;
    *pfVar10 = (float)dVar1;
    bVar5 = true;
  }
  return bVar5;
}

// SetResetPlayTimeWhenBlendSpaceChanges @ 14646ab50

bool __thiscall
FAnimNode_BlendSpacePlayer::SetResetPlayTimeWhenBlendSpaceChanges
          (FAnimNode_BlendSpacePlayer *this,bool param_1)

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
  
  if (CachedId_bResetPlayTimeWhenBlendSpaceChanges.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bResetPlayTimeWhenBlendSpaceChanges,
                     "bResetPlayTimeWhenBlendSpaceChanges");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bResetPlayTimeWhenBlendSpaceChanges,
                        (FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
    CachedId_bResetPlayTimeWhenBlendSpaceChanges.Id = pFVar7->Id;
    CachedId_bResetPlayTimeWhenBlendSpaceChanges.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bResetPlayTimeWhenBlendSpaceChanges.Index;
  FVar2 = CachedId_bResetPlayTimeWhenBlendSpaceChanges.Id;
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

// ShouldResetPlayTimeWhenBlendSpaceChanges @ 14646b730

bool __thiscall
FAnimNode_BlendSpacePlayer::ShouldResetPlayTimeWhenBlendSpaceChanges
          (FAnimNode_BlendSpacePlayer *this)

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
  
  if (CachedId_bResetPlayTimeWhenBlendSpaceChanges.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bResetPlayTimeWhenBlendSpaceChanges,
                     "bResetPlayTimeWhenBlendSpaceChanges");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar6,
                           L"AnimNode_BlendSpacePlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bResetPlayTimeWhenBlendSpaceChanges,
                        (FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)
    ;
    CachedId_bResetPlayTimeWhenBlendSpaceChanges.Id = pFVar7->Id;
    CachedId_bResetPlayTimeWhenBlendSpaceChanges.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bResetPlayTimeWhenBlendSpaceChanges.Index;
  FVar2 = CachedId_bResetPlayTimeWhenBlendSpaceChanges.Id;
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

