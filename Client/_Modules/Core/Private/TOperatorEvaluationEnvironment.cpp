// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// ExecBinary @ 1417c99d0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<void,wchar_t>::ExecBinary
          (TOperatorEvaluationEnvironment<void,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          TExpressionToken<wchar_t> *param_3)

{
  TOperatorJumpTable<void,wchar_t>::ExecBinary
            (this->Operators,__return_storage_ptr__,param_1,param_2,param_3,this->Context);
  return __return_storage_ptr__;
}

// ExecPostUnary @ 1417ca1a0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<void,wchar_t>::ExecPostUnary
          (TOperatorEvaluationEnvironment<void,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<void,wchar_t>::ExecPostUnary
            (this->Operators,__return_storage_ptr__,param_1,param_2,this->Context);
  return __return_storage_ptr__;
}

// ExecPreUnary @ 1417ca760

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<void,wchar_t>::ExecPreUnary
          (TOperatorEvaluationEnvironment<void,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<void,wchar_t>::ExecPreUnary
            (this->Operators,__return_storage_ptr__,param_1,param_2,this->Context);
  return __return_storage_ptr__;
}

// ShouldShortCircuit @ 1417fe630

bool __thiscall
TOperatorEvaluationEnvironment<void,wchar_t>::ShouldShortCircuit
          (TOperatorEvaluationEnvironment<void,wchar_t> *this,TExpressionToken<wchar_t> *param_1,
          TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<void,wchar_t> *pTVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  FGuid *pFVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  void *local_res8;
  FOperatorFunctionID local_68;
  
  local_res8 = this->Context;
  pTVar1 = this->Operators;
  pFVar5 = FExpressionNode::GetTypeId(&param_1->Node);
  local_68.OperatorType.A = pFVar5->A;
  local_68.OperatorType.B = pFVar5->B;
  local_68.OperatorType.C = pFVar5->C;
  local_68.OperatorType.D = pFVar5->D;
  pFVar5 = FExpressionNode::GetTypeId(&param_2->Node);
  local_68.LeftOperandType.A = pFVar5->A;
  local_68.LeftOperandType.B = pFVar5->B;
  local_68.LeftOperandType.C = pFVar5->C;
  local_68.LeftOperandType.D = pFVar5->D;
  local_68.RightOperandType.A = 0;
  local_68.RightOperandType.B = 0;
  local_68.RightOperandType.C = 0;
  local_68.RightOperandType.D = 0;
  uVar4 = ::GetTypeHash(&local_68);
  if (*(int *)&(pTVar1->BinaryShortCircuits).field_0x8 !=
      *(int *)&(pTVar1->BinaryShortCircuits).field_0x34) {
    puVar9 = *(undefined1 **)&(pTVar1->BinaryShortCircuits).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pTVar1->BinaryShortCircuits).field_0x38;
    }
    uVar4 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(pTVar1->BinaryShortCircuits).field_0x48 - 1U & uVar4) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x70 + *(longlong *)&pTVar1->BinaryShortCircuits);
        if (((((local_68.OperatorType.D == puVar6[3] && local_68.OperatorType.C == puVar6[2]) &&
              local_68.OperatorType.B == puVar6[1]) && local_68.OperatorType.A == *puVar6) &&
            (((local_68.LeftOperandType.B == puVar6[5] && local_68.LeftOperandType.D == puVar6[7])
             && local_68.LeftOperandType.C == puVar6[6]) && local_68.LeftOperandType.A == puVar6[4])
            ) && (((local_68.RightOperandType.D == puVar6[0xb] &&
                   local_68.RightOperandType.C == puVar6[10]) &&
                  local_68.RightOperandType.B == puVar6[9]) &&
                  local_68.RightOperandType.A == puVar6[8])) {
          if (uVar4 == 0xffffffff) {
            return false;
          }
          puVar8 = puVar6 + 0xc;
          if (puVar6 == (uint *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 == (uint *)0x0) {
            return false;
          }
          UE::Core::Private::Function::CheckCallable(*(void **)puVar8);
          pcVar2 = *(code **)puVar8;
          puVar6 = puVar8 + 4;
          if (*(uint **)(puVar8 + 10) != (uint *)0x0) {
            puVar6 = *(uint **)(puVar8 + 10);
          }
          uVar7 = (**(code **)(*(longlong *)puVar6 + 8))();
          uVar3 = (*pcVar2)(uVar7,param_2,&local_res8);
          return (bool)uVar3;
        }
        uVar4 = puVar6[0x18];
      } while (uVar4 != 0xffffffff);
    }
  }
  return false;
}

// ExecBinary @ 1418d8900

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<FShortCircuitTestContext,wchar_t>::ExecBinary
          (TOperatorEvaluationEnvironment<FShortCircuitTestContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          TExpressionToken<wchar_t> *param_3)

{
  TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::ExecBinary
            (this->Operators,__return_storage_ptr__,param_1,param_2,param_3,this->Context);
  return __return_storage_ptr__;
}

// ExecPostUnary @ 1418d90a0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<FShortCircuitTestContext,wchar_t>::ExecPostUnary
          (TOperatorEvaluationEnvironment<FShortCircuitTestContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::ExecPostUnary
            (this->Operators,__return_storage_ptr__,param_1,param_2,this->Context);
  return __return_storage_ptr__;
}

// ExecPreUnary @ 1418d9650

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<FShortCircuitTestContext,wchar_t>::ExecPreUnary
          (TOperatorEvaluationEnvironment<FShortCircuitTestContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::ExecPreUnary
            (this->Operators,__return_storage_ptr__,param_1,param_2,this->Context);
  return __return_storage_ptr__;
}

// ShouldShortCircuit @ 1418f91a0

bool __thiscall
TOperatorEvaluationEnvironment<FShortCircuitTestContext,wchar_t>::ShouldShortCircuit
          (TOperatorEvaluationEnvironment<FShortCircuitTestContext,wchar_t> *this,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *pTVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  FShortCircuitTestContext *local_res8;
  FOperatorFunctionID local_68;
  
  local_68.OperatorType.A = (param_1->Node).TypeId.A;
  local_68.OperatorType.B = (param_1->Node).TypeId.B;
  local_68.OperatorType.C = (param_1->Node).TypeId.C;
  local_68.OperatorType.D = (param_1->Node).TypeId.D;
  pTVar1 = this->Operators;
  local_res8 = this->Context;
  local_68.LeftOperandType.A = (param_2->Node).TypeId.A;
  local_68.LeftOperandType.B = (param_2->Node).TypeId.B;
  local_68.LeftOperandType.C = (param_2->Node).TypeId.C;
  local_68.LeftOperandType.D = (param_2->Node).TypeId.D;
  local_68.RightOperandType.A = 0;
  local_68.RightOperandType.B = 0;
  local_68.RightOperandType.C = 0;
  local_68.RightOperandType.D = 0;
  uVar4 = ::GetTypeHash(&local_68);
  if (*(int *)&(pTVar1->BinaryShortCircuits).field_0x8 !=
      *(int *)&(pTVar1->BinaryShortCircuits).field_0x34) {
    puVar8 = *(undefined1 **)&(pTVar1->BinaryShortCircuits).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pTVar1->BinaryShortCircuits).field_0x38;
    }
    uVar4 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(pTVar1->BinaryShortCircuits).field_0x48 - 1U & uVar4) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x70 + *(longlong *)&pTVar1->BinaryShortCircuits);
        if (((((local_68.OperatorType.D == puVar5[3] && local_68.OperatorType.C == puVar5[2]) &&
              local_68.OperatorType.B == puVar5[1]) && local_68.OperatorType.A == *puVar5) &&
            (((local_68.LeftOperandType.B == puVar5[5] && local_68.LeftOperandType.D == puVar5[7])
             && local_68.LeftOperandType.C == puVar5[6]) && local_68.LeftOperandType.A == puVar5[4])
            ) && (((local_68.RightOperandType.D == puVar5[0xb] &&
                   local_68.RightOperandType.C == puVar5[10]) &&
                  local_68.RightOperandType.B == puVar5[9]) &&
                  local_68.RightOperandType.A == puVar5[8])) {
          if (uVar4 == 0xffffffff) {
            return false;
          }
          puVar7 = puVar5 + 0xc;
          if (puVar5 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 == (uint *)0x0) {
            return false;
          }
          UE::Core::Private::Function::CheckCallable(*(void **)puVar7);
          pcVar2 = *(code **)puVar7;
          puVar5 = puVar7 + 4;
          if (*(uint **)(puVar7 + 10) != (uint *)0x0) {
            puVar5 = *(uint **)(puVar7 + 10);
          }
          uVar6 = (**(code **)(*(longlong *)puVar5 + 8))();
          uVar3 = (*pcVar2)(uVar6,param_2,&local_res8);
          return (bool)uVar3;
        }
        uVar4 = puVar5[0x18];
      } while (uVar4 != 0xffffffff);
    }
  }
  return false;
}

// ExecBinary @ 141938b20

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<ITextFilterExpressionContext,wchar_t>::ExecBinary
          (TOperatorEvaluationEnvironment<ITextFilterExpressionContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          TExpressionToken<wchar_t> *param_3)

{
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::ExecBinary
            (this->Operators,__return_storage_ptr__,param_1,param_2,param_3,this->Context);
  return __return_storage_ptr__;
}

// ExecPostUnary @ 1419392f0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<ITextFilterExpressionContext,wchar_t>::ExecPostUnary
          (TOperatorEvaluationEnvironment<ITextFilterExpressionContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::ExecPostUnary
            (this->Operators,__return_storage_ptr__,param_1,param_2,this->Context);
  return __return_storage_ptr__;
}

// ExecPreUnary @ 1419398b0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorEvaluationEnvironment<ITextFilterExpressionContext,wchar_t>::ExecPreUnary
          (TOperatorEvaluationEnvironment<ITextFilterExpressionContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::ExecPreUnary
            (this->Operators,__return_storage_ptr__,param_1,param_2,this->Context);
  return __return_storage_ptr__;
}

// ShouldShortCircuit @ 14196d920

bool __thiscall
TOperatorEvaluationEnvironment<ITextFilterExpressionContext,wchar_t>::ShouldShortCircuit
          (TOperatorEvaluationEnvironment<ITextFilterExpressionContext,wchar_t> *this,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2)

{
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *pTVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  FGuid *pFVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  ITextFilterExpressionContext *local_res8;
  FOperatorFunctionID local_68;
  
  local_res8 = this->Context;
  pTVar1 = this->Operators;
  pFVar5 = FExpressionNode::GetTypeId(&param_1->Node);
  local_68.OperatorType.A = pFVar5->A;
  local_68.OperatorType.B = pFVar5->B;
  local_68.OperatorType.C = pFVar5->C;
  local_68.OperatorType.D = pFVar5->D;
  pFVar5 = FExpressionNode::GetTypeId(&param_2->Node);
  local_68.LeftOperandType.A = pFVar5->A;
  local_68.LeftOperandType.B = pFVar5->B;
  local_68.LeftOperandType.C = pFVar5->C;
  local_68.LeftOperandType.D = pFVar5->D;
  local_68.RightOperandType.A = 0;
  local_68.RightOperandType.B = 0;
  local_68.RightOperandType.C = 0;
  local_68.RightOperandType.D = 0;
  uVar4 = ::GetTypeHash(&local_68);
  if (*(int *)&(pTVar1->BinaryShortCircuits).field_0x8 !=
      *(int *)&(pTVar1->BinaryShortCircuits).field_0x34) {
    puVar9 = *(undefined1 **)&(pTVar1->BinaryShortCircuits).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pTVar1->BinaryShortCircuits).field_0x38;
    }
    uVar4 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(pTVar1->BinaryShortCircuits).field_0x48 - 1U & uVar4) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x70 + *(longlong *)&pTVar1->BinaryShortCircuits);
        if (((((local_68.OperatorType.D == puVar6[3] && local_68.OperatorType.C == puVar6[2]) &&
              local_68.OperatorType.B == puVar6[1]) && local_68.OperatorType.A == *puVar6) &&
            (((local_68.LeftOperandType.B == puVar6[5] && local_68.LeftOperandType.D == puVar6[7])
             && local_68.LeftOperandType.C == puVar6[6]) && local_68.LeftOperandType.A == puVar6[4])
            ) && (((local_68.RightOperandType.D == puVar6[0xb] &&
                   local_68.RightOperandType.C == puVar6[10]) &&
                  local_68.RightOperandType.B == puVar6[9]) &&
                  local_68.RightOperandType.A == puVar6[8])) {
          if (uVar4 == 0xffffffff) {
            return false;
          }
          puVar8 = puVar6 + 0xc;
          if (puVar6 == (uint *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 == (uint *)0x0) {
            return false;
          }
          UE::Core::Private::Function::CheckCallable(*(void **)puVar8);
          pcVar2 = *(code **)puVar8;
          puVar6 = puVar8 + 4;
          if (*(uint **)(puVar8 + 10) != (uint *)0x0) {
            puVar6 = *(uint **)(puVar8 + 10);
          }
          uVar7 = (**(code **)(*(longlong *)puVar6 + 8))();
          uVar3 = (*pcVar2)(uVar7,param_2,&local_res8);
          return (bool)uVar3;
        }
        uVar4 = puVar6[0x18];
      } while (uVar4 != 0xffffffff);
    }
  }
  return false;
}

