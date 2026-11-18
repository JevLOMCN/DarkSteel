// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FUniformScalar @ 143f457f0

FUniformScalar * __thiscall FUniformScalar::FUniformScalar(FUniformScalar *this,float param_1)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Magnitude = param_1;
  this->_padding_ = (longlong)&___7FUniformScalar__6B_;
  return this;
}

// ~FUniformScalar @ 143f4b350

void __thiscall FUniformScalar::~FUniformScalar(FUniformScalar *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c740

bool __thiscall FUniformScalar::operator==(FUniformScalar *this,FFieldNodeBase *param_1)

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
     (*(float *)&param_1[1]._padding_ == this->Magnitude)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// EvalMaxMagnitude @ 143f5f6c0

float __thiscall FUniformScalar::EvalMaxMagnitude(FUniformScalar *this)

{
  return this->Magnitude;
}

// Evaluate @ 143f65b30

void __thiscall
FUniformScalar::Evaluate
          (FUniformScalar *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  float fVar1;
  int iVar2;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = (param_1->SampleIndices).ArrayNum;
  uVar7 = 0;
  fVar1 = this->Magnitude;
  if (0 < iVar2) {
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
      *(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) = fVar1;
    } while ((int)uVar7 < iVar2);
  }
  return;
}

// FillSetupCount @ 143f67480

void __thiscall FUniformScalar::FillSetupCount(FUniformScalar *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 3;
  return;
}

// FillSetupDatas @ 143f6b560

void __thiscall
FUniformScalar::FillSetupDatas
          (FUniformScalar *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  
  FFieldNode<float>::FillSetupDatas((FFieldNode<float> *)this,param_1,param_2,param_3);
  pFVar1 = (param_2->AllocatorInstance).Data;
  pfVar5 = &this->Magnitude;
  if ((pFVar1 <= pfVar5) && (pfVar5 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = *pfVar5;
  return;
}

// NewCopy @ 143f70be0

FFieldNodeBase * __thiscall FUniformScalar::NewCopy(FUniformScalar *this)

{
  float fVar1;
  FFieldNodeBase *pFVar2;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FFieldNodeBase *)0x0) {
    fVar1 = this->Magnitude;
    (pFVar2->Name).ComparisonIndex = 0;
    (pFVar2->Name).Number = 0;
    pFVar2->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar2->Name,"");
    *(float *)&pFVar2[1]._padding_ = fVar1;
    pFVar2->_padding_ = (longlong)&___7FUniformScalar__6B_;
    return pFVar2;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73b10

ESerializationType __thiscall FUniformScalar::SerializationType(FUniformScalar *this)

{
  return FieldNode_FUniformScalar;
}

// Serialize @ 143f74a60

void __thiscall FUniformScalar::Serialize(FUniformScalar *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  pfVar1 = &this->Magnitude;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143f74ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return;
}

