// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 33

// StaticStruct @ 14a37c8f0

UScriptStruct * __cdecl FControlRigLayerInstanceProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigLayerInstanceProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigLayerInstanceProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy,(UObject *)pUVar1,
                         L"ControlRigLayerInstanceProxy");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigLayerInstanceProxy.OuterSingleton;
}

// Initialize @ 14a37c930

void __thiscall
FControlRigLayerInstanceProxy::Initialize
          (FControlRigLayerInstanceProxy *this,UAnimInstance *param_1)

{
  (**(code **)(*(longlong *)this + 0xa8))();
  FAnimInstanceProxy::Initialize((FAnimInstanceProxy *)this,param_1);
  *(undefined8 *)&this->field_0x5a8 = 0xffffffffffffffff;
  *(undefined4 *)&this->field_0x5b0 = 0xffff;
  return;
}

// Evaluate @ 14a37c980

bool __thiscall
FControlRigLayerInstanceProxy::Evaluate(FControlRigLayerInstanceProxy *this,FPoseContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  SortControlRigNodes(this);
  if (this->CurrentRoot == (FAnimNode_Base *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\ControlRigLayerInstanceProxy.cpp"
                       ,0x65,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (**(code **)(this->CurrentRoot->_padding_ + 0x18))(this->CurrentRoot,param_1);
  return true;
}

// CacheBones @ 14a37c9f0

void __thiscall FControlRigLayerInstanceProxy::CacheBones(FControlRigLayerInstanceProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FAnimationBaseContext local_28;
  
  if ((this->field_0x801 & 1) != 0) {
    FAnimationBaseContext::FAnimationBaseContext
              (&local_28,(FAnimInstanceProxy *)this,(FAnimationUpdateSharedContext *)0x0);
    if (this->CurrentRoot == (FAnimNode_Base *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\ControlRigLayerInstanceProxy.cpp"
                         ,0x1a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(this->CurrentRoot->_padding_ + 8))(this->CurrentRoot,&local_28);
    this->field_0x801 = this->field_0x801 & 0xfe;
  }
  return;
}

// UpdateAnimationNode @ 14a37ca70

void __thiscall
FControlRigLayerInstanceProxy::UpdateAnimationNode
          (FControlRigLayerInstanceProxy *this,FAnimationUpdateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  *(short *)&this->field_0x5b0 = *(short *)&this->field_0x5b0 + 1;
  *(ulong64 *)&this->field_0x5a8 = GFrameCounter;
  if (*(short *)&this->field_0x5b0 == -1) {
    *(undefined2 *)&this->field_0x5b0 = 0;
  }
  if (this->CurrentRoot == (FAnimNode_Base *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\ControlRigLayerInstanceProxy.cpp"
                       ,0x6e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a37caef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->CurrentRoot->_padding_ + 0x10))(this->CurrentRoot,param_1);
  return;
}

// PreEvaluateAnimation @ 14a37cb00

void __thiscall
FControlRigLayerInstanceProxy::PreEvaluateAnimation
          (FControlRigLayerInstanceProxy *this,UAnimInstance *param_1)

{
  UAnimInstance *this_00;
  
  FAnimInstanceProxy::PreEvaluateAnimation((FAnimInstanceProxy *)this,param_1);
  this_00 = (this->CurrentSourceAnimInstance).field0_0x0.DebugPtr;
  if (this_00 != (UAnimInstance *)0x0) {
    UAnimInstance::PreEvaluateAnimation(this_00);
    return;
  }
  return;
}

// ResetNodes @ 14a37cc70

void __thiscall FControlRigLayerInstanceProxy::ResetNodes(FControlRigLayerInstanceProxy *this)

{
  TObjectPtr<UAnimInstance> *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = &this->CurrentSourceAnimInstance;
  if ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) && ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014a37ccae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)&((this_00->field0_0x0).DebugPtr)->field_0x428 + 0x40))();
      return;
    }
  }
  return;
}

// ResetPose @ 14a37ccc0

void __thiscall FControlRigLayerInstanceProxy::ResetPose(FControlRigLayerInstanceProxy *this)

{
  TObjectPtr<UAnimInstance> *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = &this->CurrentSourceAnimInstance;
  if ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) && ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014a37ccfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)&((this_00->field0_0x0).DebugPtr)->field_0x428 + 0x48))();
      return;
    }
  }
  return;
}

// ConstructNodes @ 14a37cd10

void __thiscall FControlRigLayerInstanceProxy::ConstructNodes(FControlRigLayerInstanceProxy *this)

{
  int iVar1;
  code *pcVar2;
  FAnimNode_Base *pFVar3;
  bool bVar4;
  uint uVar5;
  FAnimNode_Base *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar1 = (this->ControlRigNodes).ArrayNum;
  if (iVar1 < 1) {
    this->CurrentRoot = (FAnimNode_Base *)&this->InputPose;
    return;
  }
  uVar7 = 1;
  pFVar6 = *(FAnimNode_Base **)(this->ControlRigNodes).AllocatorInstance.Data;
  this->CurrentRoot = pFVar6;
  if (1 < iVar1) {
    lVar8 = 0x10;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->ControlRigNodes).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = pFVar6 + 5;
      pFVar6 = *(FAnimNode_Base **)((this->ControlRigNodes).AllocatorInstance.Data + lVar8);
      FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&pFVar3->NodeData,pFVar6);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (this->ControlRigNodes).ArrayNum);
  }
  FPoseLinkBase::SetLinkNode
            ((FPoseLinkBase *)&pFVar6[5].NodeData,(FAnimNode_Base *)&this->InputPose);
  return;
}

// AddReferencedObjects @ 14a37ce20

void __thiscall
FControlRigLayerInstanceProxy::AddReferencedObjects
          (FControlRigLayerInstanceProxy *this,UAnimInstance *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  FAnimInstanceProxy::AddReferencedObjects((FAnimInstanceProxy *)this,param_1,param_2);
  if ((this->CurrentSourceAnimInstance).field0_0x0.DebugPtr != (UAnimInstance *)0x0) {
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&this->CurrentSourceAnimInstance,0,0);
  }
  iVar1 = (this->ControlRigNodes).ArrayNum;
  pFVar4 = (this->ControlRigNodes).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ControlRigNodes).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(param_2->_padding_ + 0x88))(param_2,*(longlong *)pFVar4 + 0x30,0,0);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// FControlRigLayerInstanceProxy @ 14a3b5c00

FControlRigLayerInstanceProxy * __thiscall
FControlRigLayerInstanceProxy::FControlRigLayerInstanceProxy(FControlRigLayerInstanceProxy *this)

{
  FAnimInstanceProxy::FAnimInstanceProxy((FAnimInstanceProxy *)this);
  *(undefined ***)this = &___7FControlRigLayerInstanceProxy__6B_;
  (this->InputPose)._padding_ = (longlong)&___7FAnimNode_ControlRigInputPose__6B_;
  (this->InputPose)._padding_ = 0;
  *(undefined8 *)&(this->InputPose).InputPose = 0;
  *(undefined4 *)&(this->InputPose).InputPose.field_0x8 = 0xffffffff;
  (this->InputPose).InputPose.field_0xc = 0;
  (this->InputPose).InputProxy = (FAnimInstanceProxy *)0x0;
  (this->InputPose).InputAnimInstance = (UAnimInstance *)0x0;
  this->CurrentRoot = (FAnimNode_Base *)0x0;
  (this->ControlRigNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlRigNodes).ArrayNum = 0;
  (this->ControlRigNodes).ArrayMax = 0;
  *(undefined8 *)&this->SequencerToControlRigNodeMap = 0;
  *(undefined8 *)&(this->SequencerToControlRigNodeMap).field_0x8 = 0;
  *(undefined8 *)&(this->SequencerToControlRigNodeMap).field_0x20 = 0;
  *(undefined4 *)&(this->SequencerToControlRigNodeMap).field_0x28 = 0;
  *(undefined4 *)&(this->SequencerToControlRigNodeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequencerToControlRigNodeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequencerToControlRigNodeMap).field_0x34 = 0;
  *(undefined8 *)&(this->SequencerToControlRigNodeMap).field_0x40 = 0;
  *(undefined4 *)&(this->SequencerToControlRigNodeMap).field_0x48 = 0;
  (this->CurrentSourceAnimInstance).field0_0x0.DebugPtr = (UAnimInstance *)0x0;
  return this;
}

// ~FControlRigLayerInstanceProxy @ 14a3bc7b0

void __thiscall
FControlRigLayerInstanceProxy::~FControlRigLayerInstanceProxy(FControlRigLayerInstanceProxy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7FControlRigLayerInstanceProxy__6B_;
  *(undefined4 *)&(this->SequencerToControlRigNodeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SequencerToControlRigNodeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SequencerToControlRigNodeMap);
  DestructItems<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,int>
            ((TSharedPtr<FAnimNode_ControlRig_ExternalSource,1> *)
             (this->ControlRigNodes).AllocatorInstance.Data,(this->ControlRigNodes).ArrayNum);
  pFVar2 = (this->ControlRigNodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->InputPose)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  FAnimInstanceProxy::~FAnimInstanceProxy((FAnimInstanceProxy *)this);
  return;
}

// operator() @ 14a3bfd70

bool __thiscall
`FControlRigLayerInstanceProxy::SortControlRigNodes'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FAnimNode_ControlRig_ExternalSource,1> *param_1,
          TSharedPtr<FAnimNode_ControlRig_ExternalSource,1> *param_2)

{
  FAnimNode_ControlRig_ExternalSource *pFVar1;
  FAnimNode_ControlRig_ExternalSource *pFVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  FAnimNode_ControlRig_ExternalSource *pFVar6;
  longlong *plVar7;
  UObjectBaseUtility *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  bool bVar12;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FAnimNode_ControlRig_ExternalSource *)0x0) {
LAB_14a3bfeaa:
    bVar12 = true;
  }
  else {
    pFVar2 = param_2->Object;
    if ((pFVar2 != (FAnimNode_ControlRig_ExternalSource *)0x0) &&
       (lVar5 = (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1), lVar5 != 0)) {
      pFVar6 = TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>::operator->(param_2);
      lVar5 = (**(code **)(pFVar6->_padding_ + 0xb8))(pFVar6);
      if (lVar5 != 0) {
        pFVar6 = TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>::operator->(param_1);
        plVar7 = (longlong *)(**(code **)(pFVar6->_padding_ + 0xb8))(pFVar6);
        cVar3 = (**(code **)(*plVar7 + 0x490))(plVar7);
        pFVar6 = TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>::operator->(param_2);
        plVar7 = (longlong *)(**(code **)(pFVar6->_padding_ + 0xb8))(pFVar6);
        cVar4 = (**(code **)(*plVar7 + 0x490))(plVar7);
        if (cVar3 != cVar4) {
          return (bool)cVar3;
        }
        pUVar8 = (UObjectBaseUtility *)(**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1);
        pUVar9 = UMovieSceneControlRigParameterTrack::StaticClass();
        pUVar10 = UObjectBaseUtility::GetTypedOuter(pUVar8,pUVar9);
        pUVar8 = (UObjectBaseUtility *)(**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2);
        pUVar9 = UMovieSceneControlRigParameterTrack::StaticClass();
        pUVar11 = UObjectBaseUtility::GetTypedOuter(pUVar8,pUVar9);
        if ((pUVar10 != (UObject *)0x0) && (pUVar11 != (UObject *)0x0)) {
          return *(int *)&pUVar10[0xe].field_0x10 < *(int *)&pUVar11[0xe].field_0x10;
        }
        goto LAB_14a3bfeaa;
      }
    }
    lVar5 = (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1);
    bVar12 = lVar5 == 0;
  }
  return bVar12;
}

// AddAnimation @ 14a3c9e30

void __thiscall
FControlRigLayerInstanceProxy::AddAnimation
          (FControlRigLayerInstanceProxy *this,int param_1,UAnimSequenceBase *param_2)

{
  return;
}

// AddControlRigTrack @ 14a3dba00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigLayerInstanceProxy::AddControlRigTrack
          (FControlRigLayerInstanceProxy *this,int param_1,UControlRig *param_2)

{
  int *piVar1;
  TArray<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  UControlRig *pUVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  FAnimNode_ControlRig_ExternalSource *this_00;
  UClass *pUVar9;
  UObject *pUVar10;
  longlong lVar11;
  longlong *plVar12;
  UObjectBaseUtility *this_01;
  UObject *pUVar13;
  TReferenceControllerBase<1> *pTVar14;
  FAnimNode_ControlRig_ExternalSource **ppFVar15;
  FString *pFVar16;
  wchar_t *pwVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  wchar_t *pwVar20;
  uint uVar21;
  longlong lVar22;
  uint local_res10 [2];
  UControlRig *local_res18;
  TReferenceControllerBase<1> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10[0] = param_1;
  local_res18 = param_2;
  this_00 = FindControlRigNode(this,param_1);
  pwVar20 = L"";
  if (this_00 != (FAnimNode_ControlRig_ExternalSource *)0x0) goto LAB_14a3dbdd9;
  pUVar9 = UMovieSceneControlRigParameterTrack::StaticClass();
  pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar9);
  if ((pUVar10 != (UObject *)0x0) && (*(int *)&pUVar10[0xe].field_0x10 == -1)) {
    iVar18 = 100;
    SortControlRigNodes(this);
    pUVar4 = local_res18;
    uVar21 = 0;
    if (0 < (this->ControlRigNodes).ArrayNum) {
      lVar22 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar21 < (this->ControlRigNodes).ArrayNum) {
          uVar8 = ~uVar21 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        plVar12 = *(longlong **)((this->ControlRigNodes).AllocatorInstance.Data + lVar22);
        if (plVar12 != (longlong *)0x0) {
          lVar11 = (**(code **)(*plVar12 + 0xb8))(plVar12);
          if (lVar11 != 0) {
            plVar12 = (longlong *)(**(code **)(*plVar12 + 0xb8))(plVar12);
            pcVar3 = *(code **)(pUVar4->_padding_ + 0x490);
            cVar6 = (**(code **)(*plVar12 + 0x490))(plVar12);
            cVar7 = (*pcVar3)(pUVar4);
            if (cVar6 == cVar7) {
              if ((this->ControlRigNodes).ArrayNum < 1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              pFVar19 = (this->ControlRigNodes).AllocatorInstance.Data;
              if (*(longlong *)pFVar19 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L"");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              this_01 = (UObjectBaseUtility *)(**(code **)(**(longlong **)pFVar19 + 0xb8))();
              pUVar9 = UMovieSceneControlRigParameterTrack::StaticClass();
              pUVar13 = UObjectBaseUtility::GetTypedOuter(this_01,pUVar9);
              if (pUVar13 == (UObject *)0x0) {
                iVar18 = 100 - (this->ControlRigNodes).ArrayNum;
              }
              else {
                iVar18 = *(int *)&pUVar13[0xe].field_0x10 + -1;
              }
            }
          }
        }
        uVar21 = uVar21 + 1;
        lVar22 = lVar22 + 0x10;
      } while ((int)uVar21 < (this->ControlRigNodes).ArrayNum);
      param_2 = local_res18;
      if (iVar18 < 0) {
        *(undefined4 *)&pUVar10[0xe].field_0x10 = 0;
        goto LAB_14a3dbc40;
      }
    }
    *(int *)&pUVar10[0xe].field_0x10 = iVar18;
  }
LAB_14a3dbc40:
  pTVar2 = &this->ControlRigNodes;
  pTVar14 = ::operator_new(0x240);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    local_78 = ___xmm_00000000000000000000000000000010;
    pTStack_70 = _UNK_150651568;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAnimNode_ControlRig_ExternalSource___00_SharedPointerInternals__6B_
    ;
    FAnimNode_ControlRig_ExternalSource::FAnimNode_ControlRig_ExternalSource
              ((FAnimNode_ControlRig_ExternalSource *)(pTVar14 + 1));
    local_78 = pTVar14 + 1;
    if (local_78 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_70 = pTVar14;
  }
  pFVar19 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar19 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar19 + (longlong)(this->ControlRigNodes).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar18 = (this->ControlRigNodes).ArrayNum;
  piVar1 = &(this->ControlRigNodes).ArrayMax;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ControlRigNodes).ArrayNum = iVar18 + 1;
  pFVar19 = (pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar19 = local_78;
  *(TReferenceControllerBase<1> **)(pFVar19 + 8) = pTStack_70;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  local_78 = (TReferenceControllerBase<1> *)0x0;
  this_00 = *(FAnimNode_ControlRig_ExternalSource **)pFVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SortControlRigNodes(this);
  (**(code **)(*(longlong *)this + 0xa8))(this);
  ppFVar15 = TMapBase<int,FAnimNode_ControlRig_ExternalSource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int,FAnimNode_ControlRig_ExternalSource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>_>
                         *)&this->SequencerToControlRigNodeMap,local_res10[0],(int *)local_res10);
  *ppFVar15 = this_00;
LAB_14a3dbdd9:
  FAnimNode_ControlRig_ExternalSource::SetControlRig(this_00,param_2);
  pUVar10 = *(UObject **)&this->field_0x140;
  pcVar3 = *(code **)(this_00->_padding_ + 0x98);
  if (pUVar10 == (UObject *)0x0) {
    pFVar16 = GetTypeName<UAnimInstance>(&local_68);
    if ((pFVar16->Data).ArrayNum != 0) {
      pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar20);
  }
  pUVar9 = Z_Construct_UClass_UAnimInstance_NoRegister();
  iVar18 = (int)pUVar9->_padding_;
  if ((iVar18 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar18 * 8) ==
      &pUVar9->_padding_)) {
    (*pcVar3)(this_00,this,pUVar10);
    return;
  }
  pFVar16 = GetTypeName<UAnimInstance>(&local_58);
  if ((pFVar16->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
  }
  pFVar16 = GetFullNameForCastLogError<UObject>(&local_48,pUVar10);
  if ((pFVar16->Data).ArrayNum != 0) {
    pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar20,pwVar17);
}

// CacheBonesCustomProxy @ 14a3ecf90

void __cdecl FControlRigLayerInstanceProxy::CacheBonesCustomProxy(FAnimInstanceProxy *param_1)

{
  if (param_1 != (FAnimInstanceProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147443528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x50))();
    return;
  }
  return;
}

// EvaluateCustomProxy @ 14a406cc0

void __cdecl
FControlRigLayerInstanceProxy::EvaluateCustomProxy
          (FAnimInstanceProxy *param_1,FPoseContext *param_2)

{
  char cVar1;
  
  if ((param_1 != (FAnimInstanceProxy *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)param_1 + 0x60))(), cVar1 == '\0')) {
    if (param_2->bExpectsAdditivePose != false) {
      FCompactPose::ResetToAdditiveIdentity(&param_2->Pose);
      return;
    }
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_2->Pose,
               *(FBoneContainer **)&(param_2->Pose).field_0x10);
  }
  return;
}

// FindControlRigNode @ 14a40aaa0

FAnimNode_ControlRig_ExternalSource * __thiscall
FControlRigLayerInstanceProxy::FindControlRigNode(FControlRigLayerInstanceProxy *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->SequencerToControlRigNodeMap).field_0x8 !=
      *(int *)&(this->SequencerToControlRigNodeMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->SequencerToControlRigNodeMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->SequencerToControlRigNodeMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->SequencerToControlRigNodeMap).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->SequencerToControlRigNodeMap + (longlong)iVar2 * 0x18;
        if (*(int *)(*(longlong *)&this->SequencerToControlRigNodeMap + (longlong)iVar2 * 0x18) ==
            param_1) {
          if (lVar1 == 0) {
            return (FAnimNode_ControlRig_ExternalSource *)0x0;
          }
          return *(FAnimNode_ControlRig_ExternalSource **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FAnimNode_ControlRig_ExternalSource *)0x0;
}

// GatherCustomProxyDebugData @ 14a40f3f0

void __cdecl
FControlRigLayerInstanceProxy::GatherCustomProxyDebugData
          (FAnimInstanceProxy *param_1,FNodeDebugData *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAnimNode_Base *pFVar3;
  FName FVar4;
  TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [2];
  FMemScope FStackX_20;
  
  FVar4 = NAME_AnimGraph;
  if (param_1 != (FAnimInstanceProxy *)0x0) {
    pFVar3 = param_1->RootNode;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name2200,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(aFStackX_18,LLMScope_Name2200,false,None,Default,true);
    FMemScope::FMemScope(&FStackX_20,&LLMScope_Name2200,true);
    if (pFVar3 != (FAnimNode_Base *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,param_2);
    }
    pTVar5 = TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&param_1->SavedPoseQueueMap,FVar4);
    if (pTVar5 != (TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar6 = (pTVar5->AllocatorInstance).Data;
      iVar2 = pTVar5->ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      while( true ) {
        if (pTVar5->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FAnimNode_SaveCachedPose_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(auStackX_8);
        }
        if (pFVar6 == pFVar1) break;
        (**(code **)(**(longlong **)pFVar6 + 0x28))(*(longlong **)pFVar6,param_2);
        pFVar6 = pFVar6 + 8;
      }
    }
    FMemScope::~FMemScope(&FStackX_20);
    FLLMScope::~FLLMScope(aFStackX_18);
    return;
  }
  return;
}

// GetFirstAvailableControlRig @ 14a413cb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall
FControlRigLayerInstanceProxy::GetFirstAvailableControlRig(FControlRigLayerInstanceProxy *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UControlRig *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ControlRigNodes).ArrayNum;
  pFVar5 = (this->ControlRigNodes).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ControlRigNodes).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UControlRig *)(*pcVar2)();
      return pUVar4;
    }
    pUVar4 = (UControlRig *)(**(code **)(**(longlong **)pFVar5 + 0xb8))();
    if (pUVar4 != (UControlRig *)0x0) {
      return pUVar4;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return (UControlRig *)0x0;
}

// GetSequencerAnimInstance @ 14a4197d0

UAnimSequencerInstance * __thiscall
FControlRigLayerInstanceProxy::GetSequencerAnimInstance(FControlRigLayerInstanceProxy *this)

{
  TObjectPtr<UAnimInstance> *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = &this->CurrentSourceAnimInstance;
  if ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      return (UAnimSequencerInstance *)(this_00->field0_0x0).DebugPtr;
    }
  }
  return (UAnimSequencerInstance *)0x0;
}

// HasControlRigTrack @ 14a41cc30

bool __thiscall
FControlRigLayerInstanceProxy::HasControlRigTrack(FControlRigLayerInstanceProxy *this,int param_1)

{
  FAnimNode_ControlRig_ExternalSource *pFVar1;
  
  pFVar1 = FindControlRigNode(this,param_1);
  return pFVar1 != (FAnimNode_ControlRig_ExternalSource *)0x0;
}

// InitializeCustomProxy @ 14a422620

void __cdecl
FControlRigLayerInstanceProxy::InitializeCustomProxy
          (FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  if ((param_2 != (UAnimInstance *)0x0) && (param_1 != (FAnimInstanceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147466ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 8))();
    return;
  }
  return;
}

// RemoveAnimation @ 14a43d840

void __thiscall
FControlRigLayerInstanceProxy::RemoveAnimation(FControlRigLayerInstanceProxy *this,int param_1)

{
  return;
}

// RemoveControlRigTrack @ 14a442020

void __thiscall
FControlRigLayerInstanceProxy::RemoveControlRigTrack
          (FControlRigLayerInstanceProxy *this,int param_1)

{
  TArray<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FAnimNode_ControlRig_ExternalSource *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FAnimNode_Base *pFVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *_Dst;
  uint uVar10;
  FAnimNode_ControlRig_ExternalSource *pFVar11;
  longlong lVar12;
  int local_res18 [2];
  FAnimNode_ControlRig_ExternalSource *local_res20;
  
  local_res20 = FindControlRigNode(this,param_1);
  if (local_res20 != (FAnimNode_ControlRig_ExternalSource *)0x0) {
    if (0 < (this->ControlRigNodes).ArrayNum) {
      pTVar1 = &this->ControlRigNodes;
      lVar12 = 0;
      pFVar11 = (FAnimNode_ControlRig_ExternalSource *)0x0;
      uVar9 = 0;
      do {
        uVar10 = ~uVar9 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar9 < (this->ControlRigNodes).ArrayNum) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = uVar9 + 1;
        pFVar2 = *(FAnimNode_ControlRig_ExternalSource **)
                  ((pTVar1->AllocatorInstance).Data + lVar12);
        if (pFVar2 == local_res20) {
          if (((int)uVar5 < 0) || ((this->ControlRigNodes).ArrayNum <= (int)uVar5)) {
            pFVar7 = (FAnimNode_Base *)0x0;
          }
          else {
            uVar6 = 0;
            if ((int)uVar5 < (this->ControlRigNodes).ArrayNum) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar7 = *(FAnimNode_Base **)
                      ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10);
          }
          if (pFVar11 != (FAnimNode_ControlRig_ExternalSource *)0x0) {
            if (pFVar7 == (FAnimNode_Base *)0x0) {
              pFVar7 = (FAnimNode_Base *)&this->InputPose;
            }
            FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&pFVar11->_padding_,pFVar7);
          }
          uVar5 = 0;
          if ((int)uVar9 < (this->ControlRigNodes).ArrayNum) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(_Dst + 8));
          iVar8 = (this->ControlRigNodes).ArrayNum + ~uVar9;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + 0x10,(longlong)iVar8 << 4);
          }
          iVar8 = (this->ControlRigNodes).ArrayNum + -1;
          (this->ControlRigNodes).ArrayNum = iVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&pTVar1->AllocatorInstance,iVar8,&(this->ControlRigNodes).ArrayMax);
          break;
        }
        lVar12 = lVar12 + 0x10;
        pFVar11 = pFVar2;
        uVar9 = uVar5;
      } while ((int)uVar5 < (this->ControlRigNodes).ArrayNum);
    }
    iVar8 = (this->ControlRigNodes).ArrayNum;
    if (iVar8 == 0) {
      pFVar7 = (FAnimNode_Base *)&this->InputPose;
    }
    else {
      if ((iVar8 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = *(FAnimNode_Base **)(this->ControlRigNodes).AllocatorInstance.Data;
    }
    this->CurrentRoot = pFVar7;
    if (*(int *)&(this->SequencerToControlRigNodeMap).field_0x8 !=
        *(int *)&(this->SequencerToControlRigNodeMap).field_0x34) {
      local_res18[0] = param_1;
      TSet<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>,FDefaultSetAllocator>
                         *)&this->SequencerToControlRigNodeMap,param_1,local_res18);
    }
  }
  return;
}

// ResetControlRigTracks @ 14a450180

void __thiscall
FControlRigLayerInstanceProxy::ResetControlRigTracks(FControlRigLayerInstanceProxy *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FAnimNode_ControlRig_ExternalSource,1> *pTVar3;
  
  TSet<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>,FDefaultSetAllocator>
           *)&this->SequencerToControlRigNodeMap);
  pTVar3 = (TSharedPtr<FAnimNode_ControlRig_ExternalSource,1> *)
           (this->ControlRigNodes).AllocatorInstance.Data;
  piVar1 = &(this->ControlRigNodes).ArrayMax;
  iVar2 = (this->ControlRigNodes).ArrayNum;
  if (-1 < (this->ControlRigNodes).ArrayMax) {
    DestructItems<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,int>(pTVar3,iVar2);
    (this->ControlRigNodes).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,int>(pTVar3,iVar2);
  (this->ControlRigNodes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ControlRigNodes).AllocatorInstance,0,piVar1);
  }
  return;
}

// ResetCounter @ 14a4504a0

void __cdecl FControlRigLayerInstanceProxy::ResetCounter(FAnimInstanceProxy *param_1)

{
  if (param_1 != (FAnimInstanceProxy *)0x0) {
    (param_1->UpdateCounter).Counter = -1;
    (param_1->UpdateCounter).SkipFrames = 0;
    (param_1->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
    (param_1->EvaluationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
    (param_1->CachedBonesCounter).LastSyncronizedFrame = 0xffffffffffffffff;
    (param_1->EvaluationCounter).Counter = -1;
    (param_1->EvaluationCounter).SkipFrames = 0;
    (param_1->CachedBonesCounter).Counter = -1;
    (param_1->CachedBonesCounter).SkipFrames = 0;
  }
  return;
}

// SetSourceAnimInstance @ 14a45a730

void __thiscall
FControlRigLayerInstanceProxy::SetSourceAnimInstance
          (FControlRigLayerInstanceProxy *this,UAnimInstance *param_1,FAnimInstanceProxy *param_2)

{
  UAnimInstance *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CurrentSourceAnimInstance).field0_0x0.DebugPtr = param_1;
  (this->InputPose).InputProxy = (FAnimInstanceProxy *)0x0;
  (this->InputPose).InputAnimInstance = (UAnimInstance *)0x0;
  FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&(this->InputPose).InputPose,(FAnimNode_Base *)0x0);
  pUVar1 = (this->CurrentSourceAnimInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UAnimInstance *)0x0) {
    (this->InputPose).InputProxy = (FAnimInstanceProxy *)0x0;
    (this->InputPose).InputAnimInstance = (UAnimInstance *)0x0;
    FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&(this->InputPose).InputPose,(FAnimNode_Base *)0x0);
    (this->InputPose).InputAnimInstance = pUVar1;
    (this->InputPose).InputProxy = param_2;
    FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&(this->InputPose).InputPose,param_2->RootNode);
    FAnimInstanceProxy::ResetCounterInputProxy((this->InputPose).InputProxy);
  }
  return;
}

// SortControlRigNodes @ 14a45bef0

void __thiscall
FControlRigLayerInstanceProxy::SortControlRigNodes(FControlRigLayerInstanceProxy *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  TMap<int,FAnimNode_ControlRig_ExternalSource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  longlong local_d8;
  int local_d0;
  TMap<int,FAnimNode_ControlRig_ExternalSource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<int,FAnimNode_ControlRig_ExternalSource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_res18 = 0;
  if (0 < (this->ControlRigNodes).ArrayNum) {
    local_d8 = 0;
    do {
      lVar13 = local_d8;
      uVar17 = 0;
      if ((int)local_res18 < (this->ControlRigNodes).ArrayNum) {
        uVar17 = ~local_res18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar5 = *(longlong **)((this->ControlRigNodes).AllocatorInstance.Data + lVar13);
      if ((plVar5 != (longlong *)0x0) &&
         (lVar12 = (**(code **)(*plVar5 + 0xb8))(plVar5), lVar12 == 0)) {
        puVar1 = &(this->SequencerToControlRigNodeMap).field_0x10;
        iStack_c0 = 0;
        iVar11 = *(int *)&(this->SequencerToControlRigNodeMap).field_0x28;
        local_c8 = &this->SequencerToControlRigNodeMap;
        local_a8 = 0;
        uStack_bc = 1;
        iStack_ac = 0;
        if (iVar11 != 0) {
          puVar6 = *(uint **)&(this->SequencerToControlRigNodeMap).field_0x20;
          puVar19 = (uint *)puVar1;
          if (puVar6 != (uint *)0x0) {
            puVar19 = puVar6;
          }
          uVar17 = *puVar19;
          while (uVar17 == 0) {
            lVar13 = (longlong)iStack_c0;
            local_a8 = local_a8 + 0x20;
            iStack_c0 = iStack_c0 + 1;
            iStack_ac = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
            goto LAB_14a45c05d;
            uVar17 = puVar19[lVar13 + 1];
          }
          uStack_bc = -uVar17 & uVar17;
          uVar3 = (ulonglong)uStack_bc * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_res20 = (int)lVar13;
          iStack_ac = local_a8 + -1 + local_res20;
          if (iVar11 < iStack_ac) {
            iStack_ac = iVar11;
          }
        }
LAB_14a45c05d:
        uVar17 = *(uint *)&(this->SequencerToControlRigNodeMap).field_0x28;
        uStack_a4 = local_4c;
        iStack_a0 = *(int *)&(this->SequencerToControlRigNodeMap).field_0x8 -
                    *(int *)&(this->SequencerToControlRigNodeMap).field_0x34;
        uVar16 = uVar17 & 0xffffffe0;
        TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
        uStack_b0 = 0xffffffff;
        TStack_90.CurrentBitIndex = iStack_ac;
        TStack_90.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar17 >> 5;
        TStack_90._28_4_ = local_4c;
        TStack_90.BaseBitIndex = local_a8;
        uStack_70 = CONCAT44(uStack_9c,iStack_a0);
        local_b8 = puVar1;
        local_98 = local_c8;
        TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar4 = *(uint *)&(this->SequencerToControlRigNodeMap).field_0x28;
        if (uVar17 != uVar4) {
          puVar7 = *(undefined1 **)&(this->SequencerToControlRigNodeMap).field_0x20;
          puVar18 = puVar1;
          if (puVar7 != (undefined1 *)0x0) {
            puVar18 = puVar7;
          }
          uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
          while (uVar17 == 0) {
            lVar13 = (longlong)iVar14;
            uVar16 = uVar16 + 0x20;
            iVar14 = iVar14 + 1;
            uVar17 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_14a45c16e;
            uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_d0 = (int)lVar13;
          uVar17 = local_d0 + -1 + uVar16;
          if ((int)uVar4 < (int)uVar17) {
            uVar17 = uVar4;
          }
        }
LAB_14a45c16e:
        while( true ) {
          pTVar9 = local_98;
          if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
            local_res8[0] = (FIdentityFunctor)0x0;
            `TSparseArray<TSparseSetElement<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_90.CurrentBitIndex == uVar17) &&
              (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (lVar13 = local_d8, pTVar9 == &this->SequencerToControlRigNodeMap)) break;
          lVar13 = *(longlong *)pTVar9;
          pFVar2 = (FScriptContainerElement *)(lVar13 + (longlong)TStack_90.CurrentBitIndex * 0x18);
          if (*(longlong **)(lVar13 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18) == plVar5) {
            if (((local_e8.Data <= pFVar2) &&
                (pFVar2 < local_e8.Data + (longlong)local_e0._4_4_ * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = (int)local_e0;
            if ((int)local_e0 == local_e0._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
            }
            local_e0 = CONCAT44(local_e0._4_4_,iVar11 + 1);
            *(int *)(local_e8.Data + (longlong)iVar11 * 4) = *(int *)pFVar2;
          }
          TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
        }
      }
      local_res18 = local_res18 + 1;
      local_d8 = lVar13 + 0x10;
    } while ((int)local_res18 < (this->ControlRigNodes).ArrayNum);
  }
  iVar11 = (int)local_e0;
  pFVar2 = local_e8.Data + (longlong)(int)local_e0 * 4;
  FVar15.Data = local_e8.Data;
  while( true ) {
    if ((int)local_e0 != iVar11) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar15.Data == pFVar2) break;
    RemoveControlRigTrack(this,*(int *)FVar15.Data);
    FVar15.Data = FVar15.Data + 4;
  }
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,int,FIdentityFunctor,_FControlRigLayerInstanceProxy::SortControlRigNodes_::__l2::<lambda_1>_>
            ((TSharedPtr<FAnimNode_ControlRig_ExternalSource,1> *)
             (this->ControlRigNodes).AllocatorInstance.Data,(this->ControlRigNodes).ArrayNum,
             local_res8[0],(<lambda_1>)local_res8[0]);
  (**(code **)(*(longlong *)this + 0xa8))(this);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

// UpdateAnimTrack @ 14a45e950

void __thiscall
FControlRigLayerInstanceProxy::UpdateAnimTrack
          (FControlRigLayerInstanceProxy *this,UAnimSequenceBase *param_1,int param_2,float param_3,
          float param_4,float param_5,bool param_6)

{
  TObjectPtr<UAnimInstance> *this_00;
  bool bVar1;
  UClass *pUVar2;
  undefined1 *puVar3;
  
  this_00 = &this->CurrentSourceAnimInstance;
  if ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) && ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0)) {
      puVar3 = &((this_00->field0_0x0).DebugPtr)->field_0x428;
      (**(code **)(*(longlong *)puVar3 + 0x28))
                (puVar3,param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}

// UpdateAnimTrack @ 14a45ea00

void __thiscall
FControlRigLayerInstanceProxy::UpdateAnimTrack
          (FControlRigLayerInstanceProxy *this,UAnimSequenceBase *param_1,int param_2,float param_3,
          float param_4,bool param_5)

{
  TObjectPtr<UAnimInstance> *this_00;
  bool bVar1;
  UClass *pUVar2;
  undefined1 *puVar3;
  
  this_00 = &this->CurrentSourceAnimInstance;
  if ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) && ((this_00->field0_0x0).DebugPtr != (UAnimInstance *)0x0)) {
      puVar3 = &((this_00->field0_0x0).DebugPtr)->field_0x428;
      (**(code **)(*(longlong *)puVar3 + 0x30))(puVar3,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

// UpdateControlRigTrack @ 14a45f780

void __thiscall
FControlRigLayerInstanceProxy::UpdateControlRigTrack
          (FControlRigLayerInstanceProxy *this,int param_1,float param_2,
          FControlRigIOSettings *param_3,bool param_4)

{
  FAnimNode_ControlRig_ExternalSource *pFVar1;
  
  pFVar1 = FindControlRigNode(this,param_1);
  if (pFVar1 != (FAnimNode_ControlRig_ExternalSource *)0x0) {
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)&pFVar1->_padding_ = param_2;
    *(FControlRigIOSettings *)&pFVar1->_padding_ = *param_3;
    *(bool *)((longlong)&pFVar1->_padding_ + 4) = param_4;
  }
  return;
}

// UpdateCustomProxy @ 14a45f9d0

void __cdecl
FControlRigLayerInstanceProxy::UpdateCustomProxy
          (FAnimInstanceProxy *param_1,FAnimationUpdateContext *param_2)

{
  if (param_1 != (FAnimInstanceProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147482088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x28))();
    return;
  }
  return;
}

