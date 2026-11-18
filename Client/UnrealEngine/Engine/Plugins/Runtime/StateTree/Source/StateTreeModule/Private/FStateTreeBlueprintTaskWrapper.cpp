// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 7

// StaticStruct @ 14d4a24e0

UScriptStruct * __cdecl FStateTreeBlueprintTaskWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBlueprintTaskWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBlueprintTaskWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper,(UObject *)pUVar1,
                         L"StateTreeBlueprintTaskWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeBlueprintTaskWrapper.OuterSingleton;
}

// GetInstanceDataType @ 14d4a2520

UStruct * __thiscall
FStateTreeBlueprintTaskWrapper::GetInstanceDataType(FStateTreeBlueprintTaskWrapper *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->TaskClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UStateTreeTaskBlueprintBase::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (UStruct *)(this->TaskClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UStruct *)0x0;
}

// Link @ 14d4a2590

bool __thiscall
FStateTreeBlueprintTaskWrapper::Link(FStateTreeBlueprintTaskWrapper *this,FStateTreeLinker *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = this->TaskFlags;
  bVar2 = ((byte)this->_padding_ ^ bVar1) & 1 ^ (byte)this->_padding_;
  bVar2 = (bVar2 ^ bVar1) & 2 ^ bVar2;
  bVar2 = (bVar2 ^ bVar1) & 4 ^ bVar2;
  bVar2 = (bVar2 ^ bVar1) & 8 ^ bVar2;
  *(byte *)&this->_padding_ = (bVar2 ^ bVar1) & 0x10 ^ bVar2;
  return true;
}

// EnterState @ 14d4a25e0

EStateTreeRunStatus __thiscall
FStateTreeBlueprintTaskWrapper::EnterState
          (FStateTreeBlueprintTaskWrapper *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  EStateTreeRunStatus EVar3;
  UStateTreeTaskBlueprintBase *pUVar4;
  
  pUVar4 = FStateTreeExecutionContext::GetInstanceDataPtr<UStateTreeTaskBlueprintBase>
                     (param_1,(FStateTreeNodeBase *)this);
  if (pUVar4 == (UStateTreeTaskBlueprintBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeTaskBlueprintBase.cpp"
                       ,0xa0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4a2649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,param_1,param_2);
  return EVar3;
}

// ExitState @ 14d4a26a0

void __thiscall
FStateTreeBlueprintTaskWrapper::ExitState
          (FStateTreeBlueprintTaskWrapper *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  UStateTreeTaskBlueprintBase *pUVar3;
  
  pUVar3 = FStateTreeExecutionContext::GetInstanceDataPtr<UStateTreeTaskBlueprintBase>
                     (param_1,(FStateTreeNodeBase *)this);
  if (pUVar3 == (UStateTreeTaskBlueprintBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeTaskBlueprintBase.cpp"
                       ,0xa7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4a2709. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3,param_1,param_2);
  return;
}

// StateCompleted @ 14d4a2720

void __thiscall
FStateTreeBlueprintTaskWrapper::StateCompleted
          (FStateTreeBlueprintTaskWrapper *this,FStateTreeExecutionContext *param_1,
          EStateTreeRunStatus param_2,FStateTreeActiveStates *param_3)

{
  code *pcVar1;
  bool bVar2;
  UStateTreeTaskBlueprintBase *pUVar3;
  
  pUVar3 = FStateTreeExecutionContext::GetInstanceDataPtr<UStateTreeTaskBlueprintBase>
                     (param_1,(FStateTreeNodeBase *)this);
  if (pUVar3 == (UStateTreeTaskBlueprintBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeTaskBlueprintBase.cpp"
                       ,0xae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4a279b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,param_1,param_2,param_3);
  return;
}

// Tick @ 14d4a27b0

EStateTreeRunStatus __thiscall
FStateTreeBlueprintTaskWrapper::Tick
          (FStateTreeBlueprintTaskWrapper *this,FStateTreeExecutionContext *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  EStateTreeRunStatus EVar3;
  UStateTreeTaskBlueprintBase *pUVar4;
  
  pUVar4 = FStateTreeExecutionContext::GetInstanceDataPtr<UStateTreeTaskBlueprintBase>
                     (param_1,(FStateTreeNodeBase *)this);
  if (pUVar4 == (UStateTreeTaskBlueprintBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeTaskBlueprintBase.cpp"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4a2819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(pUVar4->_padding_ + 0x2c8))(pUVar4,param_1,param_2);
  return EVar3;
}

