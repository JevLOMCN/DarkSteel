// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FUniformInteger @ 143f45790

FUniformInteger * __thiscall FUniformInteger::FUniformInteger(FUniformInteger *this,int param_1)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Magnitude = param_1;
  this->_padding_ = (longlong)&___7FUniformInteger__6B_;
  return this;
}

// ~FUniformInteger @ 143f4b330

void __thiscall FUniformInteger::~FUniformInteger(FUniformInteger *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c6d0

bool __thiscall FUniformInteger::operator==(FUniformInteger *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x10);
  iVar3 = (**(code **)(this->_padding_ + 0x10))();
  iVar4 = (*pcVar1)(param_1);
  if ((((iVar4 == iVar3) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
      (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
     (this->Magnitude == (int)param_1[1]._padding_)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// EvalMaxMagnitude @ 143f5f6b0

float __thiscall FUniformInteger::EvalMaxMagnitude(FUniformInteger *this)

{
  return (float)this->Magnitude;
}

// Evaluate @ 143f65980

void __thiscall
FUniformInteger::Evaluate
          (FUniformInteger *this,FFieldContext *param_1,TFieldArrayView<int> *param_2)

{
  int iVar1;
  int iVar2;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = (param_1->SampleIndices).ArrayNum;
  uVar7 = 0;
  iVar2 = this->Magnitude;
  if (0 < iVar1) {
    do {
      uVar9 = 0;
      if ((int)uVar7 < (param_1->SampleIndices).ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                             ,0x50,L"Array index out of bounds: %i from an array of size %i"), bVar6
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (param_1->SampleIndices).ElementArray;
      uVar8 = (param_1->SampleIndices).ArrayOffset + uVar7;
      uVar9 = 0;
      if ((int)uVar8 < pTVar3->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 8 + 4);
      uVar8 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                             ,0x50,L"Array index out of bounds: %i from an array of size %i"), bVar6
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = uVar9 + param_2->ArrayOffset;
      pTVar4 = param_2->ElementArray;
      uVar8 = 0;
      if ((int)uVar9 < pTVar4->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = uVar7 + 1;
      *(int *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) = iVar2;
    } while ((int)uVar7 < iVar1);
  }
  return;
}

// FillSetupCount @ 143f67470

void __thiscall FUniformInteger::FillSetupCount(FUniformInteger *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 3;
  return;
}

// FillSetupDatas @ 143f6b490

void __thiscall
FUniformInteger::FillSetupDatas
          (FUniformInteger *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  float local_18 [4];
  
  FFieldNode<int>::FillSetupDatas((FFieldNode<int> *)this,param_1,param_2,param_3);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_18[0] = (float)this->Magnitude;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_18[0];
  return;
}

// NewCopy @ 143f70b70

FFieldNodeBase * __thiscall FUniformInteger::NewCopy(FUniformInteger *this)

{
  int iVar1;
  FFieldNodeBase *pFVar2;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FFieldNodeBase *)0x0) {
    iVar1 = this->Magnitude;
    (pFVar2->Name).ComparisonIndex = 0;
    (pFVar2->Name).Number = 0;
    pFVar2->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar2->Name,"");
    *(int *)&pFVar2[1]._padding_ = iVar1;
    pFVar2->_padding_ = (longlong)&___7FUniformInteger__6B_;
    return pFVar2;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73b00

ESerializationType __thiscall FUniformInteger::SerializationType(FUniformInteger *this)

{
  return FieldNode_FUniformInteger;
}

// Serialize @ 143f749d0

void __thiscall FUniformInteger::Serialize(FUniformInteger *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  piVar1 = &this->Magnitude;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143f74a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

