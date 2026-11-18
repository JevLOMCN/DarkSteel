// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// StaticStruct @ 14d4a37f0

UScriptStruct * __cdecl FStateTreeBlueprintEvaluatorWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper,
                         (UObject *)pUVar1,L"StateTreeBlueprintEvaluatorWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper.OuterSingleton;
}

// GetInstanceDataType @ 14d4a3830

UStruct * __thiscall
FStateTreeBlueprintEvaluatorWrapper::GetInstanceDataType(FStateTreeBlueprintEvaluatorWrapper *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->EvaluatorClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UStateTreeEvaluatorBlueprintBase::StaticClass();
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
        return (UStruct *)(this->EvaluatorClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UStruct *)0x0;
}

// TreeStart @ 14d4a38e0

void __thiscall
FStateTreeBlueprintEvaluatorWrapper::TreeStart
          (FStateTreeBlueprintEvaluatorWrapper *this,FStateTreeExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UStateTreeEvaluatorBlueprintBase *pUVar3;
  
  pUVar3 = FStateTreeExecutionContext::GetInstanceDataPtr<UStateTreeEvaluatorBlueprintBase>
                     (param_1,(FStateTreeNodeBase *)this);
  if (pUVar3 == (UStateTreeEvaluatorBlueprintBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeEvaluatorBlueprintBase.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4a3939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,param_1);
  return;
}

// TreeStop @ 14d4a3a40

void __thiscall
FStateTreeBlueprintEvaluatorWrapper::TreeStop
          (FStateTreeBlueprintEvaluatorWrapper *this,FStateTreeExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UStateTreeEvaluatorBlueprintBase *pUVar3;
  
  pUVar3 = FStateTreeExecutionContext::GetInstanceDataPtr<UStateTreeEvaluatorBlueprintBase>
                     (param_1,(FStateTreeNodeBase *)this);
  if (pUVar3 == (UStateTreeEvaluatorBlueprintBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeEvaluatorBlueprintBase.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4a3a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3,param_1);
  return;
}

// Tick @ 14d4a3ab0

void __thiscall
FStateTreeBlueprintEvaluatorWrapper::Tick
          (FStateTreeBlueprintEvaluatorWrapper *this,FStateTreeExecutionContext *param_1,
          float param_2)

{
  code *pcVar1;
  bool bVar2;
  UStateTreeEvaluatorBlueprintBase *pUVar3;
  
  pUVar3 = FStateTreeExecutionContext::GetInstanceDataPtr<UStateTreeEvaluatorBlueprintBase>
                     (param_1,(FStateTreeNodeBase *)this);
  if (pUVar3 == (UStateTreeEvaluatorBlueprintBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeEvaluatorBlueprintBase.cpp"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4a3b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,param_1,param_2);
  return;
}

