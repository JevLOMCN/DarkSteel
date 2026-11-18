// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FRandomVector @ 143f45540

FRandomVector * __thiscall FRandomVector::FRandomVector(FRandomVector *this,float param_1)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Magnitude = param_1;
  this->_padding_ = (longlong)&___7FRandomVector__6B_;
  return this;
}

// ~FRandomVector @ 143f4b190

void __thiscall FRandomVector::~FRandomVector(FRandomVector *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c4d0

bool __thiscall FRandomVector::operator==(FRandomVector *this,FFieldNodeBase *param_1)

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

// EvalMaxMagnitude @ 143f5f520

float __thiscall FRandomVector::EvalMaxMagnitude(FRandomVector *this)

{
  return this->Magnitude;
}

// Evaluate @ 143f62f90

void __thiscall
FRandomVector::Evaluate
          (FRandomVector *this,FFieldContext *param_1,
          TFieldArrayView<UE::Math::TVector<double>_> *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  
  fVar15 = __real_38800100;
  fVar14 = __real_3f800000;
  dVar13 = __real_3e45798ee0000000;
  dVar12 = __real_3ff0000000000000;
  iVar5 = (param_1->SampleIndices).ArrayNum;
  uVar22 = 0;
  if (0 < iVar5) {
    do {
      uVar21 = 0;
      if ((int)uVar22 < (param_1->SampleIndices).ArrayNum) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar6 = (param_1->SampleIndices).ElementArray;
      uVar20 = (param_1->SampleIndices).ArrayOffset + uVar22;
      uVar21 = 0;
      if ((int)uVar20 < pTVar6->ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      lVar19 = (longlong)(int)uVar20;
      uVar17 = rand();
      uVar21 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
      uVar20 = 0;
      if ((int)uVar21 < param_2->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar21 = uVar21 + param_2->ArrayOffset;
      pTVar8 = param_2->ElementArray;
      uVar20 = 0;
      if ((int)uVar21 < pTVar8->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(double *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x18) =
           (double)((float)(uVar17 & 0x7fff) * fVar15 - fVar14);
      uVar17 = rand();
      uVar21 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
      uVar20 = 0;
      if ((int)uVar21 < param_2->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar21 = uVar21 + param_2->ArrayOffset;
      pTVar8 = param_2->ElementArray;
      uVar20 = 0;
      if ((int)uVar21 < pTVar8->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(double *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x18 + 8) =
           (double)((float)(uVar17 & 0x7fff) * fVar15 - fVar14);
      uVar17 = rand();
      uVar21 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
      uVar20 = 0;
      if ((int)uVar21 < param_2->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar21 = uVar21 + param_2->ArrayOffset;
      pTVar8 = param_2->ElementArray;
      uVar20 = 0;
      if ((int)uVar21 < pTVar8->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(double *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x18 + 0x10) =
           (double)((float)(uVar17 & 0x7fff) * fVar15 - fVar14);
      uVar21 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
      uVar20 = 0;
      if ((int)uVar21 < param_2->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar21 = uVar21 + param_2->ArrayOffset;
      pTVar8 = param_2->ElementArray;
      uVar20 = 0;
      if ((int)uVar21 < pTVar8->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar18 = (longlong)(int)uVar21;
      pFVar9 = (pTVar8->AllocatorInstance).Data;
      dVar2 = *(double *)(pFVar9 + lVar18 * 0x18);
      dVar3 = *(double *)(pFVar9 + lVar18 * 0x18 + 8);
      dVar4 = *(double *)(pFVar9 + lVar18 * 0x18 + 0x10);
      dVar23 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
      if (dVar13 < dVar23) {
        dVar23 = dVar12 / SQRT(dVar23);
        *(double *)(pFVar9 + lVar18 * 0x18) = dVar2 * dVar23;
        *(double *)(pFVar9 + lVar18 * 0x18 + 8) = dVar3 * dVar23;
        *(double *)(pFVar9 + lVar18 * 0x18 + 0x10) = dVar4 * dVar23;
      }
      uVar21 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
      fVar1 = this->Magnitude;
      uVar20 = 0;
      if ((int)uVar21 < param_2->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar21 = uVar21 + param_2->ArrayOffset;
      pTVar8 = param_2->ElementArray;
      uVar20 = 0;
      if ((int)uVar21 < pTVar8->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar19 = (longlong)(int)uVar21;
      uVar22 = uVar22 + 1;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(double *)(pFVar7 + lVar19 * 0x18) = (double)fVar1 * *(double *)(pFVar7 + lVar19 * 0x18);
      dVar2 = (double)fVar1 * *(double *)(pFVar7 + lVar19 * 0x18 + 8 + 8);
      auVar11._8_4_ = SUB84(dVar2,0);
      auVar11._0_8_ = (double)fVar1 * *(double *)(pFVar7 + lVar19 * 0x18 + 8);
      auVar11._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])(pFVar7 + lVar19 * 0x18 + 8) = auVar11;
    } while ((int)uVar22 < iVar5);
  }
  return;
}

// FillSetupCount @ 143f67390

void __thiscall FRandomVector::FillSetupCount(FRandomVector *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 3;
  return;
}

// FillSetupDatas @ 143f6acd0

void __thiscall
FRandomVector::FillSetupDatas
          (FRandomVector *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  
  FFieldNode<UE::Math::TVector<double>_>::FillSetupDatas
            ((FFieldNode<UE::Math::TVector<double>_> *)this,param_1,param_2,param_3);
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

// NewCopy @ 143f70980

FFieldNodeBase * __thiscall FRandomVector::NewCopy(FRandomVector *this)

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
    pFVar2->_padding_ = (longlong)&___7FRandomVector__6B_;
    return pFVar2;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73ad0

ESerializationType __thiscall FRandomVector::SerializationType(FRandomVector *this)

{
  return FieldNode_FRandomVector;
}

// Serialize @ 143f74770

void __thiscall FRandomVector::Serialize(FRandomVector *this,FArchive *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000143f747d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return;
}

