// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 24

// FConversionField<int,float> @ 143f404e0

FConversionField<int,float> * __thiscall
FConversionField<int,float>::FConversionField<int,float>
          (FConversionField<int,float> *this,FFieldNode<int> *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->_padding_ = (longlong)&___7__FConversionField_HM__6B_;
  (this->InputField).Ptr = param_1;
  return this;
}

// FConversionField<float,int> @ 143f40540

FConversionField<float,int> * __thiscall
FConversionField<float,int>::FConversionField<float,int>
          (FConversionField<float,int> *this,FFieldNode<float> *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->_padding_ = (longlong)&___7__FConversionField_MH__6B_;
  (this->InputField).Ptr = param_1;
  return this;
}

// ~FConversionField<int,float> @ 143f483c0

void __thiscall
FConversionField<int,float>::~FConversionField<int,float>(FConversionField<int,float> *this)

{
  FFieldNode<int> *pFVar1;
  
  this->_padding_ = (longlong)&___7__FConversionField_HM__6B_;
  pFVar1 = (this->InputField).Ptr;
  if (pFVar1 != (FFieldNode<int> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// ~FConversionField<float,int> @ 143f48400

void __thiscall
FConversionField<float,int>::~FConversionField<float,int>(FConversionField<float,int> *this)

{
  FFieldNode<float> *pFVar1;
  
  this->_padding_ = (longlong)&___7__FConversionField_MH__6B_;
  pFVar1 = (this->InputField).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4b880

bool __thiscall
FConversionField<int,float>::operator==(FConversionField<int,float> *this,FFieldNodeBase *param_1)

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
     (bVar2 = FieldsEqual<FFieldNode<int>_>
                        (&this->InputField,
                         (TUniquePtr<FFieldNode<int>,TDefaultDelete<FFieldNode<int>_>_> *)
                         (param_1 + 1)), bVar2)) {
    return true;
  }
  return false;
}

// operator== @ 143f4b900

bool __thiscall
FConversionField<float,int>::operator==(FConversionField<float,int> *this,FFieldNodeBase *param_1)

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
     (bVar2 = FieldsEqual<FFieldNode<float>_>
                        (&this->InputField,
                         (TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> *)
                         (param_1 + 1)), bVar2)) {
    return true;
  }
  return false;
}

// ComputeFieldBounds @ 143f59ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FConversionField<int,float>::ComputeFieldBounds
          (FConversionField<int,float> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  FFieldNode<int> *pFVar1;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  pFVar1 = (this->InputField).Ptr;
  local_28 = __real_c7efffffe0000000;
  local_10 = __real_47efffffe0000000;
  local_38 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_30 = _UNK_150b2d318;
  local_20 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_18 = _UNK_150b28868;
  if (pFVar1 != (FFieldNode<int> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1,&local_38,&local_20);
  }
  (param_1->field0_0x0)._s_0.X = local_38;
  (param_1->field0_0x0)._s_0.Y = dStack_30;
  (param_1->field0_0x0)._s_0.Z = local_28;
  (param_2->field0_0x0)._s_0.X = local_20;
  (param_2->field0_0x0)._s_0.Y = dStack_18;
  (param_2->field0_0x0)._s_0.Z = local_10;
  return;
}

// ComputeFieldBounds @ 143f59b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FConversionField<float,int>::ComputeFieldBounds
          (FConversionField<float,int> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  FFieldNode<float> *pFVar1;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  pFVar1 = (this->InputField).Ptr;
  local_28 = __real_c7efffffe0000000;
  local_10 = __real_47efffffe0000000;
  local_38 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_30 = _UNK_150b2d318;
  local_20 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_18 = _UNK_150b28868;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1,&local_38,&local_20);
  }
  (param_1->field0_0x0)._s_0.X = local_38;
  (param_1->field0_0x0)._s_0.Y = dStack_30;
  (param_1->field0_0x0)._s_0.Z = local_28;
  (param_2->field0_0x0)._s_0.X = local_20;
  (param_2->field0_0x0)._s_0.Y = dStack_18;
  (param_2->field0_0x0)._s_0.Z = local_10;
  return;
}

// EvalMaxMagnitude @ 143f5f410

float __thiscall FConversionField<int,float>::EvalMaxMagnitude(FConversionField<int,float> *this)

{
  FFieldNode<int> *pFVar1;
  float fVar2;
  
  pFVar1 = (this->InputField).Ptr;
  if (pFVar1 != (FFieldNode<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f5f41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*(longlong *)pFVar1 + 0x40))();
    return fVar2;
  }
  return 0.0;
}

// EvalMaxMagnitude @ 143f5f430

float __thiscall FConversionField<float,int>::EvalMaxMagnitude(FConversionField<float,int> *this)

{
  FFieldNode<float> *pFVar1;
  float fVar2;
  
  pFVar1 = (this->InputField).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f5f43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*(longlong *)pFVar1 + 0x40))();
    return fVar2;
  }
  return 0.0;
}

// Evaluate @ 143f5f6f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FConversionField<int,float>::Evaluate
          (FConversionField<int,float> *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  FFieldNode<int> *pFVar5;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  this_00 = param_1->IntegerResults;
  iVar1 = param_2->ArrayNum;
  iVar2 = (param_1->SampleIndices).ArrayNum;
  uVar3 = this_00->ArrayNum;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar3 + iVar1,No);
  uVar12 = 0;
  if ((int)uVar3 < this_00->ArrayNum) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  memset((this_00->AllocatorInstance).Data + (longlong)(int)uVar3 * 4,0,(longlong)iVar1 << 2);
  if ((this_00->ArrayNum < (int)(uVar3 + iVar1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                          ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = (this->InputField).Ptr;
  (**(code **)(*(longlong *)pFVar5 + 0x50))(pFVar5,param_1);
  uVar12 = 0;
  if (0 < iVar2) {
    do {
      uVar14 = 0;
      if ((int)uVar12 < (param_1->SampleIndices).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar6 = (param_1->SampleIndices).ElementArray;
      uVar13 = (param_1->SampleIndices).ArrayOffset + uVar12;
      uVar14 = 0;
      if ((int)uVar13 < pTVar6->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      uVar14 = *(uint *)(pFVar7 + (longlong)(int)uVar13 * 8 + 4);
      uVar11 = 0;
      if ((int)uVar14 < iVar1) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar14 = uVar14 + uVar3;
      uVar11 = 0;
      if ((int)uVar14 < this_00->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar13 = *(uint *)(pFVar7 + (longlong)(int)uVar13 * 8 + 4);
      iVar4 = *(int *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar14 * 4);
      uVar14 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar13 = uVar13 + param_2->ArrayOffset;
      pTVar8 = param_2->ElementArray;
      uVar14 = 0;
      if ((int)uVar13 < pTVar8->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar12 = uVar12 + 1;
      *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) = (float)iVar4;
    } while ((int)uVar12 < iVar2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar3,No);
  return;
}

// Evaluate @ 143f5fa50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FConversionField<float,int>::Evaluate
          (FConversionField<float,int> *this,FFieldContext *param_1,TFieldArrayView<int> *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  FFieldNode<float> *pFVar5;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  this_00 = param_1->ScalarResults;
  iVar2 = param_2->ArrayNum;
  iVar3 = (param_1->SampleIndices).ArrayNum;
  uVar4 = this_00->ArrayNum;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar4 + iVar2,No);
  uVar12 = 0;
  if ((int)uVar4 < this_00->ArrayNum) {
    uVar12 = ~uVar4 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  memset((this_00->AllocatorInstance).Data + (longlong)(int)uVar4 * 4,0,(longlong)iVar2 << 2);
  if ((this_00->ArrayNum < (int)(uVar4 + iVar2)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                          ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = (this->InputField).Ptr;
  (**(code **)(*(longlong *)pFVar5 + 0x50))(pFVar5,param_1);
  uVar12 = 0;
  if (0 < iVar3) {
    do {
      uVar14 = 0;
      if ((int)uVar12 < (param_1->SampleIndices).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar6 = (param_1->SampleIndices).ElementArray;
      uVar13 = (param_1->SampleIndices).ArrayOffset + uVar12;
      uVar14 = 0;
      if ((int)uVar13 < pTVar6->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      uVar14 = *(uint *)(pFVar7 + (longlong)(int)uVar13 * 8 + 4);
      uVar11 = 0;
      if ((int)uVar14 < iVar2) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar14 = uVar14 + uVar4;
      uVar11 = 0;
      if ((int)uVar14 < this_00->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar13 = *(uint *)(pFVar7 + (longlong)(int)uVar13 * 8 + 4);
      fVar1 = *(float *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar14 * 4);
      uVar14 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar13 = uVar13 + param_2->ArrayOffset;
      pTVar8 = param_2->ElementArray;
      uVar14 = 0;
      if ((int)uVar13 < pTVar8->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar12 = uVar12 + 1;
      *(int *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) = (int)fVar1;
    } while ((int)uVar12 < iVar3);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar4,No);
  return;
}

// FillDefaultSetup @ 143f66b20

void __cdecl
FConversionField<int,float>::FillDefaultSetup
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_2->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  local_14 = 0x40400000;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_18;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  local_10 = 0x41500000;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_14;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  local_c = 0x3f800000;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_10;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&local_c) {
    if ((FScriptContainerElement *)&local_c < pFVar1 + (longlong)param_2->ArrayMax * 4) {
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
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_c;
  return;
}

// FillDefaultSetup @ 143f66dd0

void __cdecl
FConversionField<float,int>::FillDefaultSetup
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_2->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  local_14 = 0x40000000;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_18;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  local_10 = 0x41500000;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_14;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  local_c = 0x3f800000;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_10;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&local_c) {
    if ((FScriptContainerElement *)&local_c < pFVar1 + (longlong)param_2->ArrayMax * 4) {
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
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_c;
  return;
}

// FillSetupCount @ 143f67130

void __thiscall
FConversionField<int,float>::FillSetupCount
          (FConversionField<int,float> *this,int *param_1,int *param_2)

{
  FFieldNode<int> *pFVar1;
  
  pFVar1 = (this->InputField).Ptr;
  if (pFVar1 != (FFieldNode<int> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))();
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 + 3;
    return;
  }
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 3;
  return;
}

// FillSetupCount @ 143f67180

void __thiscall
FConversionField<float,int>::FillSetupCount
          (FConversionField<float,int> *this,int *param_1,int *param_2)

{
  FFieldNode<float> *pFVar1;
  
  pFVar1 = (this->InputField).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))();
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 + 3;
    return;
  }
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 3;
  return;
}

// FillSetupDatas @ 143f674b0

void __thiscall
FConversionField<int,float>::FillSetupDatas
          (FConversionField<int,float> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FFieldNode<int> *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_28 [8];
  
  pFVar1 = (this->InputField).Ptr;
  if (pFVar1 != (FFieldNode<int> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x38))();
  }
  FFieldNode<float>::FillSetupDatas((FFieldNode<float> *)this,param_1,param_2,param_3);
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28[0] = (float)((this->InputField).Ptr != (FFieldNode<int> *)0x0);
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_28[0];
  return;
}

// FillSetupDatas @ 143f675c0

void __thiscall
FConversionField<float,int>::FillSetupDatas
          (FConversionField<float,int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FFieldNode<float> *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_28 [8];
  
  pFVar1 = (this->InputField).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x38))();
  }
  FFieldNode<int>::FillSetupDatas((FFieldNode<int> *)this,param_1,param_2,param_3);
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28[0] = (float)((this->InputField).Ptr != (FFieldNode<float> *)0x0);
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_28[0];
  return;
}

// NewCopy @ 143f6fe40

FFieldNodeBase * __thiscall FConversionField<int,float>::NewCopy(FConversionField<int,float> *this)

{
  FFieldNode<int> *pFVar1;
  FFieldNodeBase *pFVar2;
  longlong lVar3;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FFieldNodeBase *)0x0) {
    pFVar1 = (this->InputField).Ptr;
    if (pFVar1 == (FFieldNode<int> *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(longlong *)pFVar1 + 0x18))();
    }
    (pFVar2->Name).ComparisonIndex = 0;
    (pFVar2->Name).Number = 0;
    pFVar2->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar2->Name,"");
    pFVar2->_padding_ = (longlong)&___7__FConversionField_HM__6B_;
    pFVar2[1]._padding_ = lVar3;
    return pFVar2;
  }
  return (FFieldNodeBase *)0x0;
}

// NewCopy @ 143f6fed0

FFieldNodeBase * __thiscall FConversionField<float,int>::NewCopy(FConversionField<float,int> *this)

{
  FFieldNode<float> *pFVar1;
  FFieldNodeBase *pFVar2;
  longlong lVar3;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FFieldNodeBase *)0x0) {
    pFVar1 = (this->InputField).Ptr;
    if (pFVar1 == (FFieldNode<float> *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(longlong *)pFVar1 + 0x18))();
    }
    (pFVar2->Name).ComparisonIndex = 0;
    (pFVar2->Name).Number = 0;
    pFVar2->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar2->Name,"");
    pFVar2->_padding_ = (longlong)&___7__FConversionField_MH__6B_;
    pFVar2[1]._padding_ = lVar3;
    return pFVar2;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f739b0

ESerializationType __thiscall
FConversionField<int,float>::SerializationType(FConversionField<int,float> *this)

{
  return FieldNode_FConversionField;
}

// SerializationType @ 143f739c0

ESerializationType __thiscall
FConversionField<float,int>::SerializationType(FConversionField<float,int> *this)

{
  return FieldNode_FConversionField;
}

// Serialize @ 143f73b40

void __thiscall
FConversionField<int,float>::Serialize(FConversionField<int,float> *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  SerializeInternal<int>(param_1,&this->InputField);
  return;
}

// Serialize @ 143f73b80

void __thiscall
FConversionField<float,int>::Serialize(FConversionField<float,int> *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  SerializeInternal<float>(param_1,&this->InputField);
  return;
}

