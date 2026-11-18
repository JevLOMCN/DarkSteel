// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 2

// FMeshArrayHolder @ 146c65010

FMeshArrayHolder * __thiscall
FMeshArrayHolder::FMeshArrayHolder
          (FMeshArrayHolder *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_5)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FMeshArrayHolder *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  uVar13 = 0;
  this->_padding_ = (longlong)&___7FMeshArrayHolder__6B_;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &this->BogusUVs;
  (this->Vertices).ArrayNum = 0;
  piVar1 = &(this->Vertices).ArrayMax;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->BogusTangents;
  *piVar1 = 0;
  pTVar3 = &this->BogusColors;
  (this->Indices).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = param_2->ArrayNum;
  (this->Indices).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BogusUVs).ArrayNum = 0;
  (this->BogusUVs).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BogusTangents).ArrayNum = 0;
  (this->BogusTangents).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BogusColors).ArrayNum = 0;
  (this->BogusColors).ArrayMax = 0;
  iVar5 = param_1->ArrayNum;
  lVar16 = (longlong)iVar5;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar5,&(this->Vertices).AllocatorInstance,&(this->Vertices).ArrayNum,piVar1);
  uVar15 = uVar13;
  if (0 < iVar5) {
    do {
      uVar14 = (uint)uVar15;
      uVar10 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FMeshArrayHolder *)(*pcVar8)();
        return pFVar12;
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      uVar4 = *(undefined8 *)(pFVar7 + uVar13);
      uVar6 = *(undefined4 *)(pFVar7 + uVar13 + 8);
      uVar10 = 0;
      if ((int)uVar14 < (this->Vertices).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FMeshArrayHolder *)(*pcVar8)();
        return pFVar12;
      }
      pFVar7 = (this->Vertices).AllocatorInstance.Data;
      *(undefined8 *)(pFVar7 + uVar13) = uVar4;
      *(undefined4 *)(pFVar7 + uVar13 + 8) = uVar6;
      uVar13 = uVar13 + 0xc;
      lVar16 = lVar16 + -1;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while (lVar16 != 0);
  }
  if (param_3->ArrayNum == iVar5) {
    if (this_00 != param_3) {
      pFVar7 = (this_00->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (this_00->AllocatorInstance).Data = (param_3->AllocatorInstance).Data;
      (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BogusUVs).ArrayNum = param_3->ArrayNum;
      (this->BogusUVs).ArrayMax = param_3->ArrayMax;
      param_3->ArrayNum = 0;
      param_3->ArrayMax = 0;
    }
  }
  else {
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,iVar5);
  }
  if (param_5->ArrayNum == iVar5) {
    if (pTVar3 != param_5) {
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar3->AllocatorInstance).Data = (param_5->AllocatorInstance).Data;
      (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BogusColors).ArrayNum = param_5->ArrayNum;
      (this->BogusColors).ArrayMax = param_5->ArrayMax;
      param_5->ArrayNum = 0;
      param_5->ArrayMax = 0;
    }
  }
  else {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar5,&pTVar3->AllocatorInstance,&(this->BogusColors).ArrayNum,
                        &(this->BogusColors).ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4,0,(longlong)iVar5 * 4);
  }
  iVar5 = iVar5 * 2;
  if (param_4->ArrayNum == iVar5) {
    if (pTVar2 != param_4) {
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar2->AllocatorInstance).Data = (param_4->AllocatorInstance).Data;
      (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BogusTangents).ArrayNum = param_4->ArrayNum;
      (this->BogusTangents).ArrayMax = param_4->ArrayMax;
      param_4->ArrayNum = 0;
      param_4->ArrayMax = 0;
    }
  }
  else {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar5,&pTVar2->AllocatorInstance,&(this->BogusTangents).ArrayNum,
                        &(this->BogusTangents).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 4,0,(longlong)iVar5 << 2);
  }
  return this;
}

// FMeshArrayHolder @ 146c65360

FMeshArrayHolder * __thiscall
FMeshArrayHolder::FMeshArrayHolder
          (FMeshArrayHolder *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_5)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *this_01;
  TArray<FColor,TSizedDefaultAllocator<32>_> *this_02;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->Vertices;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FMeshArrayHolder__6B_;
  iVar3 = param_1->ArrayNum;
  piVar2 = &(this->Vertices).ArrayMax;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->Vertices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<UE::Math::TVector<float>,UE::Math::TVector<double>,int>
              ((pTVar1->AllocatorInstance).Data,(TVector<double> *)pFVar4,iVar3);
  }
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &this->BogusUVs;
  this_01 = &this->BogusTangents;
  (this->Indices).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  this_02 = &this->BogusColors;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = param_2->ArrayNum;
  (this->Indices).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  iVar3 = (this->Vertices).ArrayNum;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BogusUVs).ArrayNum = 0;
  (this->BogusUVs).ArrayMax = 0;
  (this_01->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BogusTangents).ArrayNum = 0;
  (this->BogusTangents).ArrayMax = 0;
  (this_02->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BogusColors).ArrayNum = 0;
  (this->BogusColors).ArrayMax = 0;
  if (param_3->ArrayNum == iVar3) {
    if (this_00 != param_3) {
      (this_00->AllocatorInstance).Data = (param_3->AllocatorInstance).Data;
      (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BogusUVs).ArrayNum = param_3->ArrayNum;
      (this->BogusUVs).ArrayMax = param_3->ArrayMax;
      param_3->ArrayNum = 0;
      param_3->ArrayMax = 0;
    }
  }
  else {
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,iVar3);
  }
  if (param_5->ArrayNum == iVar3) {
    if (this_02 != param_5) {
      pFVar4 = (this_02->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (this_02->AllocatorInstance).Data = (param_5->AllocatorInstance).Data;
      (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BogusColors).ArrayNum = param_5->ArrayNum;
      (this->BogusColors).ArrayMax = param_5->ArrayMax;
      param_5->ArrayNum = 0;
      param_5->ArrayMax = 0;
    }
  }
  else {
    TArray<FColor,TSizedDefaultAllocator<32>_>::AddZeroed(this_02,iVar3);
  }
  if (param_4->ArrayNum == iVar3 * 2) {
    if (this_01 != param_4) {
      pFVar4 = (this_01->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (this_01->AllocatorInstance).Data = (param_4->AllocatorInstance).Data;
      (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BogusTangents).ArrayNum = param_4->ArrayNum;
      (this->BogusTangents).ArrayMax = param_4->ArrayMax;
      param_4->ArrayNum = 0;
      param_4->ArrayMax = 0;
    }
  }
  else {
    TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::AddZeroed(this_01,iVar3 * 2);
  }
  return this;
}

