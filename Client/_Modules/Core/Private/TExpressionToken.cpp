// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// TExpressionToken<char> @ 1418b9e20

TExpressionToken<char> * __thiscall
TExpressionToken<char>::TExpressionToken<char>
          (TExpressionToken<char> *this,TStringToken<char> *param_1,FExpressionNode *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uchar *puVar6;
  
  (this->Node).TypeId.A = 0;
  (this->Node).TypeId.B = 0;
  (this->Node).TypeId.C = 0;
  (this->Node).TypeId.D = 0;
  FExpressionNode::operator=(&this->Node,param_2);
  uVar1 = *(undefined4 *)&param_1->TokenStart;
  uVar2 = *(undefined4 *)((longlong)&param_1->TokenStart + 4);
  uVar3 = *(undefined4 *)&param_1->TokenEnd;
  uVar4 = *(undefined4 *)((longlong)&param_1->TokenEnd + 4);
  *(undefined4 *)&(this->Context).TokenStart = uVar1;
  *(undefined4 *)((longlong)&(this->Context).TokenStart + 4) = uVar2;
  *(undefined4 *)&(this->Context).TokenEnd = uVar3;
  *(undefined4 *)((longlong)&(this->Context).TokenEnd + 4) = uVar4;
  iVar5 = param_1->CharacterIndex;
  (this->Context).LineNumber = param_1->LineNumber;
  (this->Context).CharacterIndex = iVar5;
  puVar6 = param_2->InlineBytes;
  if ((((param_2->TypeId).D == 0 && (param_2->TypeId).C == 0) && (param_2->TypeId).B == 0) &&
      (param_2->TypeId).A == 0) {
    puVar6 = (uchar *)0x0;
  }
  if (puVar6 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar6)(uVar1,0);
  }
  return this;
}

// TExpressionToken<char8_t> @ 1418b9e90

TExpressionToken<char8_t> * __thiscall
TExpressionToken<char8_t>::TExpressionToken<char8_t>
          (TExpressionToken<char8_t> *this,TStringToken<char8_t> *param_1,FExpressionNode *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uchar *puVar6;
  
  (this->Node).TypeId.A = 0;
  (this->Node).TypeId.B = 0;
  (this->Node).TypeId.C = 0;
  (this->Node).TypeId.D = 0;
  FExpressionNode::operator=(&this->Node,param_2);
  uVar1 = *(undefined4 *)&param_1->TokenStart;
  uVar2 = *(undefined4 *)((longlong)&param_1->TokenStart + 4);
  uVar3 = *(undefined4 *)&param_1->TokenEnd;
  uVar4 = *(undefined4 *)((longlong)&param_1->TokenEnd + 4);
  *(undefined4 *)&(this->Context).TokenStart = uVar1;
  *(undefined4 *)((longlong)&(this->Context).TokenStart + 4) = uVar2;
  *(undefined4 *)&(this->Context).TokenEnd = uVar3;
  *(undefined4 *)((longlong)&(this->Context).TokenEnd + 4) = uVar4;
  iVar5 = param_1->CharacterIndex;
  (this->Context).LineNumber = param_1->LineNumber;
  (this->Context).CharacterIndex = iVar5;
  puVar6 = param_2->InlineBytes;
  if ((((param_2->TypeId).D == 0 && (param_2->TypeId).C == 0) && (param_2->TypeId).B == 0) &&
      (param_2->TypeId).A == 0) {
    puVar6 = (uchar *)0x0;
  }
  if (puVar6 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar6)(uVar1,0);
  }
  return this;
}

// TExpressionToken<wchar_t> @ 1418b9f00

TExpressionToken<wchar_t> * __thiscall
TExpressionToken<wchar_t>::TExpressionToken<wchar_t>
          (TExpressionToken<wchar_t> *this,TStringToken<wchar_t> *param_1,FExpressionNode *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uchar *puVar6;
  
  (this->Node).TypeId.A = 0;
  (this->Node).TypeId.B = 0;
  (this->Node).TypeId.C = 0;
  (this->Node).TypeId.D = 0;
  FExpressionNode::operator=(&this->Node,param_2);
  uVar1 = *(undefined4 *)&param_1->TokenStart;
  uVar2 = *(undefined4 *)((longlong)&param_1->TokenStart + 4);
  uVar3 = *(undefined4 *)&param_1->TokenEnd;
  uVar4 = *(undefined4 *)((longlong)&param_1->TokenEnd + 4);
  *(undefined4 *)&(this->Context).TokenStart = uVar1;
  *(undefined4 *)((longlong)&(this->Context).TokenStart + 4) = uVar2;
  *(undefined4 *)&(this->Context).TokenEnd = uVar3;
  *(undefined4 *)((longlong)&(this->Context).TokenEnd + 4) = uVar4;
  iVar5 = param_1->CharacterIndex;
  (this->Context).LineNumber = param_1->LineNumber;
  (this->Context).CharacterIndex = iVar5;
  puVar6 = param_2->InlineBytes;
  if ((((param_2->TypeId).D == 0 && (param_2->TypeId).C == 0) && (param_2->TypeId).B == 0) &&
      (param_2->TypeId).A == 0) {
    puVar6 = (uchar *)0x0;
  }
  if (puVar6 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar6)(uVar1,0);
  }
  return this;
}

