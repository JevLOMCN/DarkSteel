// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// ~FRadialVector @ 143f4b170

void __thiscall FRadialVector::~FRadialVector(FRadialVector *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c420

bool __thiscall FRadialVector::operator==(FRadialVector *this,FFieldNodeBase *param_1)

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
       ((double)param_1[1].Name == (this->Position).field0_0x0._s_0.X)) &&
      (((double)param_1[2]._padding_ == (this->Position).field0_0x0._s_0.Y &&
       ((double)param_1[2].Name == (this->Position).field0_0x0._s_0.Z)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// ComputeFieldBounds @ 143f5a910

void __thiscall
FRadialVector::ComputeFieldBounds
          (FRadialVector *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  
  (param_1->field0_0x0)._s_0.X = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Y = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Z = -3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.X = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Y = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Z = 3.4028234663852886e+38;
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (this->Position).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  return;
}

// EvalMaxMagnitude @ 143f5f510

float __thiscall FRadialVector::EvalMaxMagnitude(FRadialVector *this)

{
  return this->Magnitude;
}

// Evaluate @ 143f62be0

void __thiscall
FRadialVector::Evaluate
          (FRadialVector *this,FFieldContext *param_1,
          TFieldArrayView<UE::Math::TVector<double>_> *param_2)

{
  int iVar1;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  
  dVar12 = __real_3e45798ee0000000;
  dVar11 = __real_3ff0000000000000;
  iVar1 = (param_1->SampleIndices).ArrayNum;
  uVar18 = 0;
  if (0 < iVar1) {
    do {
      uVar17 = 0;
      if ((int)uVar18 < (param_1->SampleIndices).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar2 = (param_1->SampleIndices).ElementArray;
      uVar16 = (param_1->SampleIndices).ArrayOffset + uVar18;
      uVar17 = 0;
      if ((int)uVar16 < pTVar2->ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      uVar17 = *(uint *)(pFVar3 + (longlong)(int)uVar16 * 8);
      uVar14 = 0;
      if ((int)uVar17 < (param_1->SamplePositions).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = uVar17 + (param_1->SamplePositions).ArrayOffset;
      pTVar4 = (param_1->SamplePositions).ElementArray;
      uVar14 = 0;
      if ((int)uVar17 < pTVar4->ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)uVar17;
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      dVar7 = *(double *)(pFVar5 + lVar15 * 0x18) - (this->Position).field0_0x0._s_0.X;
      dVar20 = *(double *)(pFVar5 + lVar15 * 0x18 + 8) - (this->Position).field0_0x0._s_0.Y;
      dVar8 = *(double *)(pFVar5 + lVar15 * 0x18 + 0x10) - (this->Position).field0_0x0._s_0.Z;
      dVar19 = dVar20 * dVar20 + dVar7 * dVar7 + dVar8 * dVar8;
      uVar21 = dVar20;
      uVar9 = dVar7;
      uVar10 = dVar8;
      if ((dVar19 != dVar11) &&
         (uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar12 <= dVar19)) {
        dVar19 = dVar11 / SQRT(dVar19);
        uVar21 = dVar20 * dVar19;
        uVar9 = dVar7 * dVar19;
        uVar10 = dVar19 * dVar8;
      }
      uVar17 = *(uint *)(pFVar3 + (longlong)(int)uVar16 * 8 + 4);
      dVar7 = (double)this->Magnitude;
      uVar16 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = uVar17 + param_2->ArrayOffset;
      pTVar4 = param_2->ElementArray;
      uVar16 = 0;
      if ((int)uVar17 < pTVar4->ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)uVar17;
      uVar18 = uVar18 + 1;
      pFVar3 = (pTVar4->AllocatorInstance).Data;
      *(double *)(pFVar3 + lVar15 * 0x18) = dVar7 * (double)uVar9;
      *(double *)(pFVar3 + lVar15 * 0x18 + 8) = dVar7 * (double)uVar21;
      *(double *)(pFVar3 + lVar15 * 0x18 + 0x10) = dVar7 * (double)uVar10;
    } while ((int)uVar18 < iVar1);
  }
  return;
}

// FillSetupCount @ 143f67380

void __thiscall FRadialVector::FillSetupCount(FRadialVector *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 6;
  return;
}

// FillSetupDatas @ 143f6aa00

void __thiscall
FRadialVector::FillSetupDatas
          (FRadialVector *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
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
  local_18 = (float)(this->Position).field0_0x0._s_0.X;
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
  local_14 = (float)(this->Position).field0_0x0._s_0.Y;
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
  local_10[0] = (float)(this->Position).field0_0x0._s_0.Z;
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

// NewCopy @ 143f708d0

FFieldNodeBase * __thiscall FRadialVector::NewCopy(FRadialVector *this)

{
  float fVar1;
  FName FVar2;
  FName FVar3;
  double dVar4;
  FFieldNodeBase *pFVar5;
  
  pFVar5 = ::operator_new(0x30);
  if (pFVar5 != (FFieldNodeBase *)0x0) {
    fVar1 = this->Magnitude;
    FVar2 = (FName)(this->Position).field0_0x0._s_0.Z;
    FVar3 = (FName)(this->Position).field0_0x0._s_0.X;
    dVar4 = (this->Position).field0_0x0._s_0.Y;
    (pFVar5->Name).ComparisonIndex = 0;
    (pFVar5->Name).Number = 0;
    pFVar5->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar5->Name,"");
    *(float *)&pFVar5[1]._padding_ = fVar1;
    pFVar5[1].Name = FVar3;
    pFVar5[2]._padding_ = (longlong)dVar4;
    pFVar5->_padding_ = (longlong)&___7FRadialVector__6B_;
    pFVar5[2].Name = FVar2;
    return pFVar5;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73ac0

ESerializationType __thiscall FRadialVector::SerializationType(FRadialVector *this)

{
  return FieldNode_FRadialVector;
}

// Serialize @ 143f746f0

void __thiscall FRadialVector::Serialize(FRadialVector *this,FArchive *param_1)

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
  UE::Math::operator<<(param_1,&this->Position);
  return;
}

