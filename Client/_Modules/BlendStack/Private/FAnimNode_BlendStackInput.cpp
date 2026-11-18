// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 3

// StaticStruct @ 14a85b660

UScriptStruct * __cdecl FAnimNode_BlendStackInput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BlendStack();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStackInput,(UObject *)pUVar1,
                         L"AnimNode_BlendStackInput");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton;
}

// Update_AnyThread @ 14a85b6a0

void __thiscall
FAnimNode_BlendStackInput::Update_AnyThread
          (FAnimNode_BlendStackInput *this,FAnimationUpdateContext *param_1)

{
  FAnimNode_Mirror_Standalone *pFVar1;
  FBlendStackAnimPlayer *this_00;
  code *pcVar2;
  bool bVar3;
  FExposedValueHandler *this_01;
  IAnimClassInterface *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  void *pvVar7;
  FBlendStackAnimPlayer **ppFVar8;
  uint uVar9;
  uint uVar10;
  
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  ppFVar8 = this->Player;
  if (ppFVar8 == (FBlendStackAnimPlayer **)0x0) {
    pIVar4 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)param_1);
    if (pIVar4 == (IAnimClassInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimBlueprintClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStackInput.cpp"
                         ,0x22,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
    uVar10 = (*(int *)(lVar5 + 8) - this->BlendStackAllocationIndex) - 1;
    if (param_1->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStackInput.cpp"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
    if (((int)uVar10 < 0) || ((int)plVar6[1] <= (int)uVar10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimNodeProperties.IsValidIndex(NodeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStackInput.cpp"
                         ,0x12,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar9 = 0;
    if ((int)uVar10 < (int)plVar6[1]) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       (*(FProperty **)(*plVar6 + (longlong)(int)uVar10 * 8),
                        *(UObject **)(param_1->_padding_ + 0x140),0);
    uVar10 = this->SampleIndex;
    uVar9 = 0;
    if ((int)uVar10 < *(int *)((longlong)pvVar7 + 0x40)) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ppFVar8 = (FBlendStackAnimPlayer **)
              (*(longlong *)((longlong)pvVar7 + 0x38) + (longlong)(int)uVar10 * 0x18);
    this->Player = ppFVar8;
    if (ppFVar8 != (FBlendStackAnimPlayer **)0x0) goto LAB_14a85b86d;
  }
  else {
LAB_14a85b86d:
    if (*ppFVar8 != (FBlendStackAnimPlayer *)0x0) goto LAB_14a85b89d;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Player && *Player",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStackInput.cpp"
                     ,0x2a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a85b89d:
  if (this->bOverridePlayRate != false) {
    FBlendStackAnimPlayer::UpdatePlayRate(*this->Player,this->PlayRate);
  }
  this_00 = *this->Player;
  FBlendStackAnimPlayer::UpdateSourceLinkNode(this_00);
  pFVar1 = &this_00->MirrorNode;
                    /* WARNING: Could not recover jumptable at 0x00014a85b8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,param_1);
  return;
}

// Evaluate_AnyThread @ 14a85b8e0

void __thiscall
FAnimNode_BlendStackInput::Evaluate_AnyThread(FAnimNode_BlendStackInput *this,FPoseContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Player == (FBlendStackAnimPlayer **)0x0) ||
     (*this->Player == (FBlendStackAnimPlayer *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Player && *Player",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStackInput.cpp"
                       ,0xb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBlendStackAnimPlayer::Evaluate_AnyThread(*this->Player,param_1);
  return;
}

