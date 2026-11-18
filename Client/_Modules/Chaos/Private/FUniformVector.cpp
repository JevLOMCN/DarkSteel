// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// ~FUniformVector @ 143f4b370

void __thiscall FUniformVector::~FUniformVector(FUniformVector *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c7c0

bool __thiscall FUniformVector::operator==(FUniformVector *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  iVar3 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar4 = (*pcVar1)(this);
  if ((((iVar3 == iVar4) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
      (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
     (((*(float *)&param_1[1]._padding_ == this->Magnitude &&
       ((double)param_1[1].Name == (this->Direction).field0_0x0._s_0.X)) &&
      (((double)param_1[2]._padding_ == (this->Direction).field0_0x0._s_0.Y &&
       ((double)param_1[2].Name == (this->Direction).field0_0x0._s_0.Z)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// EvalMaxMagnitude @ 143f5f6d0

float __thiscall FUniformVector::EvalMaxMagnitude(FUniformVector *this)

{
  return this->Magnitude;
}

// Evaluate @ 143f65ce0

void __thiscall
FUniformVector::Evaluate
          (FUniformVector *this,FFieldContext *param_1,
          TFieldArrayView<UE::Math::TVector<double>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  dVar2 = (this->Direction).field0_0x0._s_0.Z;
  uVar12 = 0;
  iVar3 = (param_1->SampleIndices).ArrayNum;
  dVar9 = (this->Direction).field0_0x0._s_0.X;
  dVar10 = (this->Direction).field0_0x0._s_0.Y;
  if (0 < iVar3) {
    dVar8 = (double)this->Magnitude;
    do {
      uVar14 = 0;
      if ((int)uVar12 < (param_1->SampleIndices).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar4 = (param_1->SampleIndices).ElementArray;
      uVar13 = (param_1->SampleIndices).ArrayOffset + uVar12;
      uVar14 = 0;
      if ((int)uVar13 < pTVar4->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar14 = *(uint *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar13 * 8 + 4);
      uVar13 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar14 = uVar14 + param_2->ArrayOffset;
      pTVar5 = param_2->ElementArray;
      uVar13 = 0;
      if ((int)uVar14 < pTVar5->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = uVar12 + 1;
      pFVar6 = (pTVar5->AllocatorInstance).Data;
      pFVar1 = pFVar6 + (longlong)(int)uVar14 * 0x18;
      *(double *)pFVar1 = dVar8 * dVar9;
      *(double *)(pFVar1 + 8) = dVar8 * dVar10;
      *(double *)(pFVar6 + (longlong)(int)uVar14 * 0x18 + 0x10) = dVar8 * dVar2;
    } while ((int)uVar12 < iVar3);
  }
  return;
}

// FillSetupCount @ 143f67490

void __thiscall FUniformVector::FillSetupCount(FUniformVector *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 6;
  return;
}

// FillSetupDatas @ 143f6b610

void __thiscall
FUniformVector::FillSetupDatas
          (FUniformVector *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_18;
  float local_14;
  float local_10 [2];
  
  FFieldNode<UE::Math::TVector<double>_>::FillSetupDatas
            ((FFieldNode<UE::Math::TVector<double>_> *)this,param_1,param_2,param_3);
  pFVar2 = (param_2->AllocatorInstance).Data;
  pfVar1 = &this->Magnitude;
  if ((pFVar2 <= pfVar1) && (pfVar1 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = *pfVar1;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_18 = (float)(this->Direction).field0_0x0._s_0.X;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_14 = (float)(this->Direction).field0_0x0._s_0.Y;
  if ((pFVar2 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_14;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_10[0] = (float)(this->Direction).field0_0x0._s_0.Z;
  if ((pFVar2 <= (FScriptContainerElement *)local_10) &&
     ((FScriptContainerElement *)local_10 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_10[0];
  return;
}

// NewCopy @ 143f70c60

FFieldNodeBase * __thiscall FUniformVector::NewCopy(FUniformVector *this)

{
  float fVar1;
  FName FVar2;
  FName FVar3;
  double dVar4;
  FFieldNodeBase *pFVar5;
  
  pFVar5 = ::operator_new(0x30);
  if (pFVar5 != (FFieldNodeBase *)0x0) {
    fVar1 = this->Magnitude;
    FVar2 = (FName)(this->Direction).field0_0x0._s_0.Z;
    FVar3 = (FName)(this->Direction).field0_0x0._s_0.X;
    dVar4 = (this->Direction).field0_0x0._s_0.Y;
    (pFVar5->Name).ComparisonIndex = 0;
    (pFVar5->Name).Number = 0;
    pFVar5->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar5->Name,"");
    *(float *)&pFVar5[1]._padding_ = fVar1;
    pFVar5[1].Name = FVar3;
    pFVar5[2]._padding_ = (longlong)dVar4;
    pFVar5->_padding_ = (longlong)&___7FUniformVector__6B_;
    pFVar5[2].Name = FVar2;
    return pFVar5;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73b20

ESerializationType __thiscall FUniformVector::SerializationType(FUniformVector *this)

{
  return FieldNode_FUniformVector;
}

// Serialize @ 143f74af0

void __thiscall FUniformVector::Serialize(FUniformVector *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  pfVar1 = &this->Magnitude;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->Direction);
  return;
}

