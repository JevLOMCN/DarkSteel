// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 16

// StaticStruct @ 14a85e010

UScriptStruct * __cdecl FAnimNode_BlendStack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_BlendStack();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar1,
                         L"AnimNode_BlendStack");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton;
}

// UpdateAssetPlayer @ 14a85e050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_BlendStack::UpdateAssetPlayer(FAnimNode_BlendStack *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  FExposedValueHandler *this_00;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  FName FVar13;
  undefined1 local_res8 [8];
  TSharedRef<UE::Anim::IGraphMessage,1> local_88;
  FScopedGraphMessage local_78;
  char local_68;
  double local_58;
  double dStack_50;
  double local_48;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->bResetOnBecomingRelevant != false) &&
       (sVar2 = (this->UpdateCounter).Counter, sVar2 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar2 != *(short *)(param_1->_padding_ + 0x5b0))) {
    uVar6 = (this->UpdateCounter).Counter + 1;
    pTVar8 = pTVar11;
    if (uVar6 != 0xffff) {
      pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)uVar6;
    }
    if ((((short)pTVar8 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       ((short)pTVar8 != *(short *)(param_1->_padding_ + 0x5b0))) {
      (**(code **)(this->_padding_ + 0x148))(this);
    }
  }
  lVar12 = param_1->_padding_;
  (this->UpdateCounter).Counter = *(short *)(lVar12 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar12 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar12 + 0x5b2);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  bVar5 = ConditionalBlendTo(this,param_1);
  if ((bVar5) && (this->bUseInertialBlend != false)) {
    UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_78,(FAnimationBaseContext *)param_1);
    local_68 = '\x01';
    local_88.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
    if (local_88.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_88.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
      local_88.SharedReferenceCount.ReferenceController = _UNK_150651568;
      FVar13 = UE::Anim::FAnimInertializationSyncScope::TypeName;
    }
    else {
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_88.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAnimInertializationSyncScope_Anim_UE___00_SharedPointerInternals__6B_
      ;
      local_88.SharedReferenceCount.ReferenceController[1]._padding_ =
           (longlong)&___7FAnimInertializationSyncScope_Anim_UE__6B_;
      if (local_88.SharedReferenceCount.ReferenceController + 1 ==
          (TReferenceControllerBase<1> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar13 = UE::Anim::FAnimInertializationSyncScope::TypeName;
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = local_88.SharedReferenceCount.ReferenceController;
      local_88.Object = (IGraphMessage *)(local_88.SharedReferenceCount.ReferenceController + 1);
    }
    UE::Anim::FScopedGraphMessage::PushMessage
              (&local_78,(FAnimationBaseContext *)param_1,&local_88,FVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  else {
    UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_78,(FAnimationBaseContext *)param_1);
    local_68 = '\0';
  }
  iVar3 = (int)this->_padding_;
  fVar1 = this->WantedPlayRate;
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FBlendStackAnimPlayer::UpdatePlayRate((FBlendStackAnimPlayer *)this->_padding_,fVar1);
  }
  if (this->BlendspaceUpdateMode == UpdateAll) {
    lVar12 = this->_padding_;
    iVar3 = (int)this->_padding_;
    plVar9 = (longlong *)(lVar12 + 0xb8);
    lVar10 = (longlong)iVar3 * 0x3a0 + lVar12;
    while( true ) {
      if ((int)this->_padding_ != iVar3) {
        `TCheckedPointerIterator<FBlendStackAnimPlayer,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar12 == lVar10) break;
      lVar7 = (**(code **)(*plVar9 + 0x148))(plVar9);
      if (lVar7 != 0) {
        local_58 = (this->BlendParameters).field0_0x0._s_0.X;
        dStack_50 = (this->BlendParameters).field0_0x0._s_0.Y;
        local_48 = (this->BlendParameters).field0_0x0._s_0.Z;
        (**(code **)(*plVar9 + 0x198))(plVar9,&local_58);
      }
      lVar12 = lVar12 + 0x3a0;
      plVar9 = plVar9 + 0x74;
    }
  }
  else if (this->BlendspaceUpdateMode == UpdateActiveOnly) {
    iVar3 = (int)this->_padding_;
    if (iVar3 != 0) {
      if (iVar3 < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FBlendStackAnimPlayer::SetBlendParameters
                ((FBlendStackAnimPlayer *)this->_padding_,&this->BlendParameters);
    }
  }
  FAnimNode_BlendStack_Standalone::UpdateAssetPlayer
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  if (local_68 != '\0') {
    UE::Anim::FScopedGraphMessage::PopMessage(&local_78);
  }
  return;
}

// GetGroupName @ 14a85e3d0

FName __thiscall FAnimNode_BlendStack::GetGroupName(FAnimNode_BlendStack *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar4,
                           L"AnimNode_BlendStack");
    }
    pFVar5 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton);
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

// GetGroupRole @ 14a85e540

Type __thiscall FAnimNode_BlendStack::GetGroupRole(FAnimNode_BlendStack *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar6,
                           L"AnimNode_BlendStack");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton);
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

// GetGroupMethod @ 14a85e690

EAnimSyncMethod __thiscall FAnimNode_BlendStack::GetGroupMethod(FAnimNode_BlendStack *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar6,
                           L"AnimNode_BlendStack");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton);
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

// GetIgnoreForRelevancyTest @ 14a85e7e0

bool __thiscall FAnimNode_BlendStack::GetIgnoreForRelevancyTest(FAnimNode_BlendStack *this)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar6,
                           L"AnimNode_BlendStack");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton);
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

// IsLooping @ 14a85e930

bool __thiscall FAnimNode_BlendStack::IsLooping(FAnimNode_BlendStack *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 == 0) {
    return false;
  }
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar2 = this->_padding_;
  lVar6 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x148))(lVar2 + 0x20);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a85e9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0xd0))(lVar2 + 0x20);
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)(lVar2 + 0xb8) + 0x148))(lVar2 + 0xb8);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a85e9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*(longlong *)(lVar2 + 0xb8) + 0xd0))(lVar2 + 0xb8);
    return (bool)uVar5;
  }
  return false;
}

// SetGroupName @ 14a85ea10

bool __thiscall FAnimNode_BlendStack::SetGroupName(FAnimNode_BlendStack *this,FName param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar6,
                           L"AnimNode_BlendStack");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton);
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

// SetGroupRole @ 14a85eb90

bool __thiscall FAnimNode_BlendStack::SetGroupRole(FAnimNode_BlendStack *this,Type param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar6,
                           L"AnimNode_BlendStack");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton);
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

// SetGroupMethod @ 14a85ed10

bool __thiscall
FAnimNode_BlendStack::SetGroupMethod(FAnimNode_BlendStack *this,EAnimSyncMethod param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar6,
                           L"AnimNode_BlendStack");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton);
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

// SetIgnoreForRelevancyTest @ 14a85ee90

bool __thiscall
FAnimNode_BlendStack::SetIgnoreForRelevancyTest(FAnimNode_BlendStack *this,bool param_1)

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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar6,
                           L"AnimNode_BlendStack");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton);
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

// Reset @ 14a85f010

void __thiscall FAnimNode_BlendStack::Reset(FAnimNode_BlendStack *this)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = (int)this->_padding_ + 2;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (*piVar1 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3a0,8,uVar6,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,piVar1);
  }
  iVar2 = (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<FBlendStackAnimPlayer,int>((FBlendStackAnimPlayer *)this->_padding_,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3a0,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<FBlendStackAnimPlayer,int>((FBlendStackAnimPlayer *)this->_padding_,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
  }
  if ((char)this->_padding_ != '\0') {
    if (this->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (ForAnyElementType *)this->_padding_;
    iVar2 = *(int *)((longlong)&pFVar3[1].Data + 4);
    *(undefined4 *)&pFVar3[1].Data = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    if (this->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)this->_padding_);
  }
  this->bForceBlendNextUpdate = false;
  return;
}

// FAnimNode_BlendStack @ 14a861100

FAnimNode_BlendStack * __thiscall
FAnimNode_BlendStack::FAnimNode_BlendStack(FAnimNode_BlendStack *this)

{
  undefined8 uVar1;
  
  FAnimNode_BlendStack_Standalone::FAnimNode_BlendStack_Standalone
            ((FAnimNode_BlendStack_Standalone *)this);
  this->AnimationTime = -1.0;
  this->ActivationDelayTime = 0.0;
  this->_padding_ = (longlong)&___7FAnimNode_BlendStack__6B_;
  (this->AnimationAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  this->bLoop = true;
  this->bMirrored = false;
  this->WantedPlayRate = 1.0;
  this->BlendTime = 0.2;
  this->MaxAnimationDeltaTime = -1.0;
  this->BlendOption = HermiteCubic;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->BlendspaceUpdateMode = InitialOnly;
  (this->BlendParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BlendParameters).field0_0x0._s_0.Y = (double)uVar1;
  (this->BlendParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->MirrorDataTable).field0_0x0.DebugPtr = (UMirrorDataTable *)0x0;
  this->BlendParametersDeltaThreshold = 0.0;
  this->bUseInertialBlend = false;
  (this->InertialBlendNodeTag).ComparisonIndex = 0;
  (this->InertialBlendNodeTag).Number = 0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  this->bResetOnBecomingRelevant = true;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  this->bForceBlendNextUpdate = false;
  return this;
}

// ConditionalBlendTo @ 14a865280

bool __thiscall
FAnimNode_BlendStack::ConditionalBlendTo
          (FAnimNode_BlendStack *this,FAnimationUpdateContext *param_1)

{
  int iVar1;
  FBlendStackAnimPlayer *this_00;
  UAnimationAsset *pUVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAnimSyncMethod EVar8;
  Type TVar9;
  UAnimationAsset *pUVar10;
  longlong lVar11;
  FName *pFVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  if (((this->AnimationAsset).field0_0x0.DebugPtr == (UAnimationAsset *)0x0) &&
     (this->bForceBlendNextUpdate == false)) {
    bVar5 = false;
  }
  else {
    iVar1 = (int)this->_padding_;
    if (iVar1 != 0) {
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_00 = (FBlendStackAnimPlayer *)this->_padding_;
      pUVar10 = FBlendStackAnimPlayer::GetAnimationAsset(this_00);
      if (this->bForceBlendNextUpdate == false) {
        pUVar2 = (this->AnimationAsset).field0_0x0.DebugPtr;
        if (pUVar2 == (UAnimationAsset *)0x0) {
          bVar5 = pUVar10 == (UAnimationAsset *)0x0;
        }
        else {
          bVar5 = pUVar2 == pUVar10;
        }
        if ((bVar5) &&
           (cVar7 = (**(code **)((this_00->MirrorNode)._padding_ + 0xb0))(),
           this->bMirrored == (bool)cVar7)) {
          lVar11 = (**(code **)((this_00->BlendSpacePlayerNode)._padding_ + 0x148))
                             (&this_00->BlendSpacePlayerNode);
          if (lVar11 == 0) {
            local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uStack_44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uStack_3c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          else {
            (**(code **)((this_00->BlendSpacePlayerNode)._padding_ + 0x150))
                      (&this_00->BlendSpacePlayerNode,&local_48);
          }
          dVar14 = (this->BlendParameters).field0_0x0._s_0.Y - (double)CONCAT44(uStack_3c,uStack_40)
          ;
          dVar15 = (this->BlendParameters).field0_0x0._s_0.X - (double)CONCAT44(uStack_44,local_48);
          dVar4 = (this->BlendParameters).field0_0x0._s_0.Z - local_38;
          if ((dVar15 * dVar15 + dVar14 * dVar14 + dVar4 * dVar4 <=
               (double)(this->BlendParametersDeltaThreshold * this->BlendParametersDeltaThreshold))
             && ((this->MaxAnimationDeltaTime <= 0.0 && this->MaxAnimationDeltaTime != 0.0 ||
                 (fVar16 = this->AnimationTime,
                 fVar13 = FBlendStackAnimPlayer::GetAccumulatedTime(this_00),
                 fVar16 = (float)((uint)(fVar16 - fVar13) & __xmm_7fffffff7fffffff7fffffff7fffffff),
                 fVar16 < this->MaxAnimationDeltaTime || fVar16 == this->MaxAnimationDeltaTime)))) {
            return false;
          }
        }
      }
      else {
        this->bForceBlendNextUpdate = false;
      }
    }
    EVar8 = (**(code **)(this->_padding_ + 0x118))(this);
    TVar9 = (**(code **)(this->_padding_ + 0x110))(this);
    pFVar12 = (FName *)(**(code **)(this->_padding_ + 0x108))(this,local_res8);
    FAnimNode_BlendStack_Standalone::BlendTo
              ((FAnimNode_BlendStack_Standalone *)this,param_1,
               (this->AnimationAsset).field0_0x0.DebugPtr,this->AnimationTime,this->bLoop,
               this->bMirrored,(this->MirrorDataTable).field0_0x0.DebugPtr,this->BlendTime,
               (this->BlendProfile).field0_0x0.DebugPtr,this->BlendOption,this->bUseInertialBlend,
               this->InertialBlendNodeTag,&this->BlendParameters,this->WantedPlayRate,
               this->ActivationDelayTime,*pFVar12,TVar9,EVar8,false);
    bVar5 = true;
  }
  return bVar5;
}

// ForceBlendNextUpdate @ 14a865b30

void __thiscall FAnimNode_BlendStack::ForceBlendNextUpdate(FAnimNode_BlendStack *this)

{
  this->bForceBlendNextUpdate = true;
  return;
}

// NeedsReset @ 14a868410

bool __thiscall
FAnimNode_BlendStack::NeedsReset(FAnimNode_BlendStack *this,FAnimationUpdateContext *param_1)

{
  short sVar1;
  short sVar2;
  
  if ((((this->bResetOnBecomingRelevant != false) &&
       (sVar2 = (this->UpdateCounter).Counter, sVar2 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar2 != *(short *)(param_1->_padding_ + 0x5b0))) {
    sVar1 = (this->UpdateCounter).Counter + 1;
    sVar2 = 0;
    if (sVar1 != -1) {
      sVar2 = sVar1;
    }
    if (((sVar2 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       (sVar2 != *(short *)(param_1->_padding_ + 0x5b0))) {
      return true;
    }
  }
  return false;
}

