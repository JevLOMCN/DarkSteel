// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FWrappedOperator @ 1418bd9e0

FWrappedOperator * __thiscall
TExpressionCompiler<char>::FWrappedOperator::FWrappedOperator
          (FWrappedOperator *this,TCompiledToken<char> *param_1,int param_2,int param_3)

{
  bool bVar1;
  EType EVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  *(undefined8 *)&this->Token = 0;
  *(undefined8 *)&(this->Token).field_0x8 = 0;
  FExpressionNode::operator=((FExpressionNode *)this,(FExpressionNode *)param_1);
  uVar3 = *(undefined4 *)&param_1->field_0x40;
  uVar4 = *(undefined4 *)&param_1->field_0x44;
  uVar5 = *(undefined4 *)&param_1->field_0x48;
  uVar6 = *(undefined4 *)&param_1->field_0x4c;
  *(undefined4 *)&(this->Token).field_0x40 = uVar3;
  *(undefined4 *)&(this->Token).field_0x44 = uVar4;
  *(undefined4 *)&(this->Token).field_0x48 = uVar5;
  *(undefined4 *)&(this->Token).field_0x4c = uVar6;
  *(undefined8 *)&(this->Token).field_0x50 = *(undefined8 *)&param_1->field_0x50;
  EVar2 = param_1->Type;
  (this->Token).ShortCircuitIndex.bIsSet = false;
  (this->Token).Type = EVar2;
  bVar1 = (param_1->ShortCircuitIndex).bIsSet;
  (this->Token).ShortCircuitIndex.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Token).ShortCircuitIndex.TypedValue = (param_1->ShortCircuitIndex).TypedValue;
  }
  this->Precedence = param_2;
  this->ShortCircuitIndex = param_3;
  puVar7 = (undefined8 *)&param_1->field_0x10;
  if (((*(int *)&param_1->field_0xc == 0 && *(int *)&param_1->field_0x8 == 0) &&
      *(int *)&param_1->field_0x4 == 0) && *(int *)param_1 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(uVar3,0);
  }
  return this;
}

// FWrappedOperator @ 1418bda80

FWrappedOperator * __thiscall
TExpressionCompiler<char8_t>::FWrappedOperator::FWrappedOperator
          (FWrappedOperator *this,TCompiledToken<char8_t> *param_1,int param_2,int param_3)

{
  bool bVar1;
  EType EVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  *(undefined8 *)&this->Token = 0;
  *(undefined8 *)&(this->Token).field_0x8 = 0;
  FExpressionNode::operator=((FExpressionNode *)this,(FExpressionNode *)param_1);
  uVar3 = *(undefined4 *)&param_1->field_0x40;
  uVar4 = *(undefined4 *)&param_1->field_0x44;
  uVar5 = *(undefined4 *)&param_1->field_0x48;
  uVar6 = *(undefined4 *)&param_1->field_0x4c;
  *(undefined4 *)&(this->Token).field_0x40 = uVar3;
  *(undefined4 *)&(this->Token).field_0x44 = uVar4;
  *(undefined4 *)&(this->Token).field_0x48 = uVar5;
  *(undefined4 *)&(this->Token).field_0x4c = uVar6;
  *(undefined8 *)&(this->Token).field_0x50 = *(undefined8 *)&param_1->field_0x50;
  EVar2 = param_1->Type;
  (this->Token).ShortCircuitIndex.bIsSet = false;
  (this->Token).Type = EVar2;
  bVar1 = (param_1->ShortCircuitIndex).bIsSet;
  (this->Token).ShortCircuitIndex.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Token).ShortCircuitIndex.TypedValue = (param_1->ShortCircuitIndex).TypedValue;
  }
  this->Precedence = param_2;
  this->ShortCircuitIndex = param_3;
  puVar7 = (undefined8 *)&param_1->field_0x10;
  if (((*(int *)&param_1->field_0xc == 0 && *(int *)&param_1->field_0x8 == 0) &&
      *(int *)&param_1->field_0x4 == 0) && *(int *)param_1 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(uVar3,0);
  }
  return this;
}

// FWrappedOperator @ 1418bdb20

FWrappedOperator * __thiscall
TExpressionCompiler<wchar_t>::FWrappedOperator::FWrappedOperator
          (FWrappedOperator *this,TCompiledToken<wchar_t> *param_1,int param_2,int param_3)

{
  bool bVar1;
  EType EVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  *(undefined8 *)&this->Token = 0;
  *(undefined8 *)&(this->Token).field_0x8 = 0;
  FExpressionNode::operator=((FExpressionNode *)this,(FExpressionNode *)param_1);
  uVar3 = *(undefined4 *)&param_1->field_0x40;
  uVar4 = *(undefined4 *)&param_1->field_0x44;
  uVar5 = *(undefined4 *)&param_1->field_0x48;
  uVar6 = *(undefined4 *)&param_1->field_0x4c;
  *(undefined4 *)&(this->Token).field_0x40 = uVar3;
  *(undefined4 *)&(this->Token).field_0x44 = uVar4;
  *(undefined4 *)&(this->Token).field_0x48 = uVar5;
  *(undefined4 *)&(this->Token).field_0x4c = uVar6;
  *(undefined8 *)&(this->Token).field_0x50 = *(undefined8 *)&param_1->field_0x50;
  EVar2 = param_1->Type;
  (this->Token).ShortCircuitIndex.bIsSet = false;
  (this->Token).Type = EVar2;
  bVar1 = (param_1->ShortCircuitIndex).bIsSet;
  (this->Token).ShortCircuitIndex.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Token).ShortCircuitIndex.TypedValue = (param_1->ShortCircuitIndex).TypedValue;
  }
  this->Precedence = param_2;
  this->ShortCircuitIndex = param_3;
  puVar7 = (undefined8 *)&param_1->field_0x10;
  if (((*(int *)&param_1->field_0xc == 0 && *(int *)&param_1->field_0x8 == 0) &&
      *(int *)&param_1->field_0x4 == 0) && *(int *)param_1 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(uVar3,0);
  }
  return this;
}

