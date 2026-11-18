// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FillFromTriMesh @ 14827e600

void __thiscall
FBodySetupUVInfo::FillFromTriMesh(FBodySetupUVInfo *this,FTriMeshCollisionData *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  void *_Src;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  
  piVar1 = &(this->IndexBuffer).ArrayMax;
  iVar6 = (param_1->Vertices).ArrayNum;
  piVar2 = &(this->IndexBuffer).ArrayNum;
  iVar13 = (param_1->Indices).ArrayNum;
  *piVar2 = 0;
  if ((this->IndexBuffer).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar13 * 3,(ForAnyElementType *)this,piVar2,piVar1);
  uVar14 = 0;
  if (0 < (param_1->Indices).ArrayNum) {
    lVar16 = 0;
    uVar17 = 2;
    do {
      uVar15 = ~uVar14 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar14 < (param_1->Indices).ArrayNum) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar7 = *(undefined4 *)((param_1->Indices).AllocatorInstance.Data + lVar16);
      uVar12 = 0;
      if ((int)(uVar17 - 2) < *piVar2) {
        uVar12 = ~(uVar17 - 2) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((this->IndexBuffer).AllocatorInstance.Data + lVar16) = uVar7;
      uVar12 = 0;
      if ((int)uVar14 < (param_1->Indices).ArrayNum) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar7 = *(undefined4 *)((param_1->Indices).AllocatorInstance.Data + lVar16 + 4);
      uVar12 = 0;
      if ((int)(uVar17 - 1) < *piVar2) {
        uVar12 = ~(uVar17 - 1) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((this->IndexBuffer).AllocatorInstance.Data + lVar16 + 4) = uVar7;
      uVar12 = 0;
      if ((int)uVar14 < (param_1->Indices).ArrayNum) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar7 = *(undefined4 *)((param_1->Indices).AllocatorInstance.Data + lVar16 + 8);
      uVar12 = 0;
      if ((int)uVar17 < *piVar2) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar14 = uVar14 + 1;
      uVar17 = uVar17 + 3;
      *(undefined4 *)((this->IndexBuffer).AllocatorInstance.Data + lVar16 + 8) = uVar7;
      lVar16 = lVar16 + 0xc;
    } while ((int)uVar14 < (param_1->Indices).ArrayNum);
  }
  pTVar3 = &this->VertPositions;
  piVar1 = &(this->VertPositions).ArrayMax;
  piVar2 = &(this->VertPositions).ArrayNum;
  *piVar2 = 0;
  if ((this->VertPositions).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar6,&pTVar3->AllocatorInstance,piVar2,piVar1);
  iVar13 = (param_1->Vertices).ArrayNum;
  uVar14 = 0;
  if (0 < iVar13) {
    lVar16 = 0;
    lVar19 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar14 < iVar13) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar20 = (param_1->Vertices).AllocatorInstance.Data;
      fVar4 = *(float *)(pFVar20 + lVar19);
      uVar5 = *(undefined8 *)(pFVar20 + lVar19 + 4);
      dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
      uVar17 = 0;
      if ((int)uVar14 < *piVar2) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar20 = (pTVar3->AllocatorInstance).Data;
      uVar14 = uVar14 + 1;
      lVar19 = lVar19 + 0xc;
      *(double *)(pFVar20 + lVar16) = (double)fVar4;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = (double)(float)uVar5;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(pFVar20 + lVar16 + 8) = auVar9;
      iVar13 = (param_1->Vertices).ArrayNum;
      lVar16 = lVar16 + 0x18;
    } while ((int)uVar14 < iVar13);
  }
  uVar14 = 0;
  if (0 < (param_1->UVs).ArrayNum) {
    lVar16 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar14 < (param_1->UVs).ArrayNum) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)((param_1->UVs).AllocatorInstance.Data + lVar16 + 8) != iVar6) {
        return;
      }
      uVar17 = 0;
      if ((int)uVar14 < (param_1->UVs).ArrayNum) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar20 = (this->VertUVs).AllocatorInstance.Data;
      pFVar18 = (param_1->UVs).AllocatorInstance.Data + lVar16;
      if (((pFVar20 <= pFVar18) && (pFVar18 < pFVar20 + (longlong)(this->VertUVs).ArrayMax * 0x10))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = (this->VertUVs).ArrayNum;
      piVar1 = &(this->VertUVs).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->VertUVs).AllocatorInstance,piVar1);
      }
      (this->VertUVs).ArrayNum = iVar13 + 1;
      pFVar20 = (this->VertUVs).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
      *(undefined8 *)&pFVar20->field_0x0 = 0;
      iVar13 = *(int *)(pFVar18 + 8);
      _Src = *(void **)pFVar18;
      *(int *)&pFVar20[8].field_0x0 = iVar13;
      if (iVar13 == 0) {
        *(int *)(pFVar20 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar13,0,(ForAnyElementType *)pFVar20,iVar13,(int *)(pFVar20 + 0xc));
        memcpy(*(void **)&pFVar20->field_0x0,_Src,(longlong)iVar13 << 4);
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar14 < (param_1->UVs).ArrayNum);
  }
  return;
}

// GetResourceSizeEx @ 14828c8e0

void __thiscall FBodySetupUVInfo::GetResourceSizeEx(FBodySetupUVInfo *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->IndexBuffer).ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->VertPositions).ArrayMax * 0x18);
  uVar4 = 0;
  if (0 < (this->VertUVs).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->VertUVs).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes
                (param_1,(longlong)*(int *)((this->VertUVs).AllocatorInstance.Data + lVar5 + 0xc) <<
                         4);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((int)uVar4 < (this->VertUVs).ArrayNum);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->VertUVs).ArrayMax << 4);
  return;
}

