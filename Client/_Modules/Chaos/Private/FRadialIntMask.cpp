// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// ~FRadialIntMask @ 143f4b150

void __thiscall FRadialIntMask::~FRadialIntMask(FRadialIntMask *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c360

bool __thiscall FRadialIntMask::operator==(FRadialIntMask *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  iVar3 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar4 = (*pcVar1)(this);
  if ((((((iVar3 == iVar4) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
        (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
       ((*(float *)&param_1[1]._padding_ == this->Radius &&
        ((double)param_1[1].Name == (this->Position).field0_0x0._s_0.X)))) &&
      (((double)param_1[2]._padding_ == (this->Position).field0_0x0._s_0.Y &&
       (((double)param_1[2].Name == (this->Position).field0_0x0._s_0.Z &&
        (this->InteriorValue == (int)param_1[3]._padding_)))))) &&
     ((this->ExteriorValue == *(int *)((longlong)&param_1[3]._padding_ + 4) &&
      (this->SetMaskCondition == param_1[3].Name.ComparisonIndex.Value)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// ComputeFieldBounds @ 143f5a830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRadialIntMask::ComputeFieldBounds
          (FRadialIntMask *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (this->ExteriorValue == 0) {
    dVar1 = (double)this->Radius;
    local_28 = (this->Position).field0_0x0._s_0.X - dVar1;
    dStack_20 = (this->Position).field0_0x0._s_0.Y - dVar1;
    dVar1 = (this->Position).field0_0x0._s_0.Z - dVar1;
  }
  else {
    local_28 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dStack_20 = _UNK_150b2d318;
    dVar1 = __real_c7efffffe0000000;
  }
  (param_1->field0_0x0)._s_0.X = local_28;
  (param_1->field0_0x0)._s_0.Y = dStack_20;
  (param_1->field0_0x0)._s_0.Z = dVar1;
  if (this->ExteriorValue == 0) {
    local_18 = (double)this->Radius;
    local_28 = (this->Position).field0_0x0._s_0.X + local_18;
    dStack_20 = (this->Position).field0_0x0._s_0.Y + local_18;
    local_18 = local_18 + (this->Position).field0_0x0._s_0.Z;
  }
  else {
    local_28 = ___xmm_47efffffe000000047efffffe0000000;
    dStack_20 = _UNK_150b28868;
    local_18 = __real_47efffffe0000000;
  }
  (param_2->field0_0x0)._s_0.X = local_28;
  (param_2->field0_0x0)._s_0.Y = dStack_20;
  (param_2->field0_0x0)._s_0.Z = local_18;
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (this->Position).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  return;
}

// EvalMaxMagnitude @ 143f5f500

float __thiscall FRadialIntMask::EvalMaxMagnitude(FRadialIntMask *this)

{
  return __real_3f800000;
}

// Evaluate @ 143f62770

void __thiscall
FRadialIntMask::Evaluate(FRadialIntMask *this,FFieldContext *param_1,TFieldArrayView<int> *param_2)

{
  float fVar1;
  int iVar2;
  ESetMaskConditionType EVar3;
  undefined4 uVar4;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  iVar2 = (param_1->SampleIndices).ArrayNum;
  uVar17 = 0;
  fVar1 = this->Radius;
  if (0 < iVar2) {
    do {
      uVar14 = 0;
      if ((int)uVar17 < (param_1->SampleIndices).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
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
      pTVar5 = (param_1->SampleIndices).ElementArray;
      uVar13 = (param_1->SampleIndices).ArrayOffset + uVar17;
      uVar14 = 0;
      if ((int)uVar13 < pTVar5->ArrayNum) {
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
      pFVar6 = (pTVar5->AllocatorInstance).Data;
      lVar15 = (longlong)(int)uVar13;
      uVar14 = *(uint *)(pFVar6 + lVar15 * 8);
      uVar13 = 0;
      if ((int)uVar14 < (param_1->SamplePositions).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar14 = uVar14 + (param_1->SamplePositions).ArrayOffset;
      pTVar7 = (param_1->SamplePositions).ElementArray;
      uVar13 = 0;
      if ((int)uVar14 < pTVar7->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar12 = (longlong)(int)uVar14;
      pFVar8 = (pTVar7->AllocatorInstance).Data;
      dVar20 = (this->Position).field0_0x0._s_0.Y - *(double *)(pFVar8 + lVar12 * 0x18 + 8);
      dVar19 = (this->Position).field0_0x0._s_0.X - *(double *)(pFVar8 + lVar12 * 0x18);
      dVar18 = (this->Position).field0_0x0._s_0.Z - *(double *)(pFVar8 + lVar12 * 0x18 + 0x10);
      EVar3 = this->SetMaskCondition;
      lVar12 = 0x34;
      if (dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18 < (double)(fVar1 * fVar1)) {
        lVar12 = 0x30;
      }
      uVar4 = *(undefined4 *)((longlong)&this->_padding_ + lVar12);
      if (EVar3 == Field_Set_Always) {
LAB_143f62aec:
        uVar14 = *(uint *)(pFVar6 + lVar15 * 8 + 4);
        uVar13 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar14 = uVar14 + param_2->ArrayOffset;
        pTVar16 = param_2->ElementArray;
        uVar13 = 0;
        if ((int)uVar14 < pTVar16->ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined4 *)((pTVar16->AllocatorInstance).Data + (longlong)(int)uVar14 * 4) = uVar4;
      }
      else if (EVar3 == Field_Set_IFF_NOT_Interior) {
        uVar14 = *(uint *)(pFVar6 + lVar15 * 8 + 4);
        uVar13 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar14 = uVar14 + param_2->ArrayOffset;
        pTVar16 = param_2->ElementArray;
        uVar13 = 0;
        if ((int)uVar14 < pTVar16->ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar11 = this->InteriorValue;
LAB_143f62add:
        if (*(int *)((pTVar16->AllocatorInstance).Data + (longlong)(int)uVar14 * 4) != iVar11)
        goto LAB_143f62aec;
      }
      else if (EVar3 == Field_Set_IFF_NOT_Exterior) {
        uVar14 = *(uint *)(pFVar6 + lVar15 * 8 + 4);
        uVar13 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar14 = uVar14 + param_2->ArrayOffset;
        pTVar16 = param_2->ElementArray;
        uVar13 = 0;
        if ((int)uVar14 < pTVar16->ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar11 = this->ExteriorValue;
        goto LAB_143f62add;
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < iVar2);
  }
  return;
}

// FillSetupCount @ 143f67370

void __thiscall FRadialIntMask::FillSetupCount(FRadialIntMask *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 9;
  return;
}

// FillSetupDatas @ 143f6a540

void __thiscall
FRadialIntMask::FillSetupDatas
          (FRadialIntMask *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14 [3];
  
  FFieldNode<int>::FillSetupDatas((FFieldNode<int> *)this,param_1,param_2,param_3);
  pFVar2 = (param_2->AllocatorInstance).Data;
  pfVar1 = &this->Radius;
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
  local_28 = (float)(this->Position).field0_0x0._s_0.X;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_28;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_24 = (float)(this->Position).field0_0x0._s_0.Y;
  if ((pFVar2 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_24;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_20 = (float)(this->Position).field0_0x0._s_0.Z;
  if ((pFVar2 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_20;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_1c = (float)this->InteriorValue;
  if ((pFVar2 <= (FScriptContainerElement *)&local_1c) &&
     ((FScriptContainerElement *)&local_1c < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_1c;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_18 = (float)this->ExteriorValue;
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
  local_14[0] = (float)(int)this->SetMaskCondition;
  if ((pFVar2 <= (FScriptContainerElement *)local_14) &&
     ((FScriptContainerElement *)local_14 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_14[0];
  return;
}

// NewCopy @ 143f707e0

FFieldNodeBase * __thiscall FRadialIntMask::NewCopy(FRadialIntMask *this)

{
  float fVar1;
  FName FVar2;
  int iVar3;
  ESetMaskConditionType EVar4;
  int iVar5;
  FName FVar6;
  double dVar7;
  FFieldNodeBase *pFVar8;
  
  pFVar8 = ::operator_new(0x40);
  if (pFVar8 != (FFieldNodeBase *)0x0) {
    iVar3 = this->InteriorValue;
    EVar4 = this->SetMaskCondition;
    iVar5 = this->ExteriorValue;
    fVar1 = this->Radius;
    FVar2 = (FName)(this->Position).field0_0x0._s_0.Z;
    FVar6 = (FName)(this->Position).field0_0x0._s_0.X;
    dVar7 = (this->Position).field0_0x0._s_0.Y;
    (pFVar8->Name).ComparisonIndex = 0;
    (pFVar8->Name).Number = 0;
    pFVar8->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar8->Name,"");
    *(float *)&pFVar8[1]._padding_ = fVar1;
    pFVar8[1].Name = FVar6;
    pFVar8[2]._padding_ = (longlong)dVar7;
    pFVar8->_padding_ = (longlong)&___7FRadialIntMask__6B_;
    pFVar8[2].Name = FVar2;
    *(int *)&pFVar8[3]._padding_ = iVar3;
    *(int *)((longlong)&pFVar8[3]._padding_ + 4) = iVar5;
    pFVar8[3].Name.ComparisonIndex.Value = EVar4;
    return pFVar8;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73ab0

ESerializationType __thiscall FRadialIntMask::SerializationType(FRadialIntMask *this)

{
  return FieldNode_FRadialIntMask;
}

// Serialize @ 143f74590

void __thiscall FRadialIntMask::Serialize(FRadialIntMask *this,FArchive *param_1)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  pfVar1 = &this->Radius;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->Position);
  piVar2 = &this->InteriorValue;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->ExteriorValue;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (undefined1)this->SetMaskCondition;
  if ((undefined1 *)plVar5[1] < (undefined1 *)*plVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar5;
    *plVar5 = *plVar5 + 1;
  }
  this->SetMaskCondition = (uint)(byte)local_res8[0];
  return;
}

