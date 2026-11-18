// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 4

// TGeneralPolygon2<float> @ 1494fefa0

TGeneralPolygon2<float> * __thiscall
UE::Geometry::TGeneralPolygon2<float>::TGeneralPolygon2<float>
          (TGeneralPolygon2<float> *this,TGeneralPolygon2<float> *param_1)

{
  TArray<UE::Geometry::TPolygon2<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  TPolygon2<float>::TPolygon2<float>(&this->Outer,&param_1->Outer);
  pTVar1 = &this->Holes;
  this->bOuterIsCW = param_1->bOuterIsCW;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Holes).ArrayMax;
  iVar3 = (param_1->Holes).ArrayNum;
  pFVar4 = (param_1->Holes).AllocatorInstance.Data;
  (this->Holes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<UE::Geometry::TPolygon2<float>,UE::Geometry::TPolygon2<float>,int>
              ((pTVar1->AllocatorInstance).Data,(TPolygon2<float> *)pFVar4,iVar3);
  }
  return this;
}

// TGeneralPolygon2<double> @ 1494ff040

TGeneralPolygon2<double> * __thiscall
UE::Geometry::TGeneralPolygon2<double>::TGeneralPolygon2<double>
          (TGeneralPolygon2<double> *this,TGeneralPolygon2<double> *param_1)

{
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  TPolygon2<double>::TPolygon2<double>(&this->Outer,&param_1->Outer);
  pTVar1 = &this->Holes;
  this->bOuterIsCW = param_1->bOuterIsCW;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Holes).ArrayMax;
  iVar3 = (param_1->Holes).ArrayNum;
  pFVar4 = (param_1->Holes).AllocatorInstance.Data;
  (this->Holes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<UE::Geometry::TPolygon2<double>,UE::Geometry::TPolygon2<double>,int>
              ((pTVar1->AllocatorInstance).Data,(TPolygon2<double> *)pFVar4,iVar3);
  }
  return this;
}

// AddHole @ 14950a2d0

bool __thiscall
UE::Geometry::TGeneralPolygon2<float>::AddHole
          (TGeneralPolygon2<float> *this,TPolygon2<float> *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TArray<UE::Geometry::TPolygon2<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 local_res18 [16];
  
  if (param_2) {
    iVar6 = (param_1->Vertices).ArrayNum;
    uVar8 = 0;
    if (0 < iVar6) {
      do {
        uVar7 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar7 < (param_1->Vertices).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar3 = TPolygon2<float>::Contains
                          (&this->Outer,
                           (TVector2<float> *)
                           ((param_1->Vertices).AllocatorInstance.Data + uVar8 * 8));
        if (!bVar3) goto LAB_14950a3d3;
        uVar8 = (ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < iVar6);
    }
    bVar3 = TPolygon2<float>::Intersects(&this->Outer,param_1);
    if (!bVar3) {
      iVar6 = (this->Holes).ArrayNum;
      pFVar9 = (this->Holes).AllocatorInstance.Data;
      pFVar10 = pFVar9 + (longlong)iVar6 * 0x10;
      while( true ) {
        if ((this->Holes).ArrayNum != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<float>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar9 == pFVar10) goto LAB_14950a3c0;
        bVar3 = TPolygon2<float>::Overlaps(param_1,(TPolygon2<float> *)pFVar9);
        if (bVar3) break;
        pFVar9 = pFVar9 + 0x10;
      }
    }
  }
  else {
LAB_14950a3c0:
    pTVar11 = &this->Holes;
    if ((!param_3) || (bVar3 = TPolygon2<float>::IsClockwise(param_1), this->bOuterIsCW != bVar3)) {
      pFVar9 = (pTVar11->AllocatorInstance).Data;
      if ((pFVar9 <= param_1) &&
         ((param_1 < pFVar9 + (longlong)(this->Holes).ArrayMax * 0x10 &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)))) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = (this->Holes).ArrayNum;
      piVar1 = &(this->Holes).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar11->AllocatorInstance,piVar1);
        (this->Holes).ArrayNum = iVar6;
      }
      (this->Holes).ArrayNum = iVar6 + 1;
      TPolygon2<float>::TPolygon2<float>
                ((TPolygon2<float> *)((pTVar11->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                 param_1);
      pFVar9 = (param_1->Vertices).AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      return true;
    }
  }
LAB_14950a3d3:
  pFVar9 = (param_1->Vertices).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return false;
}

// AddHole @ 14950a4b0

bool __thiscall
UE::Geometry::TGeneralPolygon2<double>::AddHole
          (TGeneralPolygon2<double> *this,TPolygon2<double> *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 local_res18 [16];
  
  if (param_2) {
    iVar6 = (param_1->Vertices).ArrayNum;
    uVar7 = 0;
    if (0 < iVar6) {
      do {
        uVar5 = 0;
        if ((int)uVar7 < (param_1->Vertices).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar3 = TPolygon2<double>::Contains
                          (&this->Outer,
                           (TVector2<double> *)
                           ((param_1->Vertices).AllocatorInstance.Data + (ulonglong)uVar7 * 0x10));
        if (!bVar3) goto LAB_14950a5bc;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar6);
    }
    bVar3 = TPolygon2<double>::Intersects(&this->Outer,param_1);
    if (!bVar3) {
      iVar6 = (this->Holes).ArrayNum;
      pFVar8 = (this->Holes).AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar6 * 0x10;
      while( true ) {
        if ((this->Holes).ArrayNum != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar8 == pFVar9) goto LAB_14950a5a9;
        bVar3 = TPolygon2<double>::Overlaps(param_1,(TPolygon2<double> *)pFVar8);
        if (bVar3) break;
        pFVar8 = pFVar8 + 0x10;
      }
    }
  }
  else {
LAB_14950a5a9:
    pTVar10 = &this->Holes;
    if ((!param_3) || (bVar3 = TPolygon2<double>::IsClockwise(param_1), this->bOuterIsCW != bVar3))
    {
      pFVar8 = (pTVar10->AllocatorInstance).Data;
      if ((pFVar8 <= param_1) &&
         ((param_1 < pFVar8 + (longlong)(this->Holes).ArrayMax * 0x10 &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)))) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = (this->Holes).ArrayNum;
      piVar1 = &(this->Holes).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar10->AllocatorInstance,piVar1);
        (this->Holes).ArrayNum = iVar6;
      }
      (this->Holes).ArrayNum = iVar6 + 1;
      TPolygon2<double>::TPolygon2<double>
                ((TPolygon2<double> *)((pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                 param_1);
      pFVar8 = (param_1->Vertices).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      return true;
    }
  }
LAB_14950a5bc:
  pFVar8 = (param_1->Vertices).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return false;
}

