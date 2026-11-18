// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// ToCells @ 14dfd8b50

TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_> *
__thiscall
GroomBinding_Transfer::FTriangleGrid2D::ToCells
          (FTriangleGrid2D *this,
          TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TVector2<float> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_> *pTVar12
  ;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  int local_68;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  fVar20 = (param_1->field0_0x0)._s_0.X;
  if (__real_3f800000 <= fVar20) {
    fVar20 = __real_3f800000;
  }
  fVar21 = (param_1->field0_0x0)._s_0.Y;
  iVar9 = (this->GridResolution).field0_0x0._s_0.X;
  if (__real_3f800000 <= fVar21) {
    fVar21 = __real_3f800000;
  }
  iVar15 = (this->GridResolution).field0_0x0._s_0.Y;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  uVar14 = (int)ROUND((fVar20 + fVar20) * (float)iVar9 - __real_3f000000) >> 1;
  uVar7 = (int)ROUND((fVar21 + fVar21) * (float)iVar15 - __real_3f000000) >> 1;
  uVar13 = iVar15 - 1;
  if ((int)uVar7 < (int)uVar13) {
    uVar13 = uVar7;
  }
  uVar7 = iVar9 - 1U;
  if ((int)uVar14 < (int)(iVar9 - 1U)) {
    uVar7 = uVar14;
  }
  uVar14 = 0;
  if (0 < (int)uVar7) {
    uVar14 = uVar7;
  }
  uVar7 = 0;
  if (0 < (int)uVar13) {
    uVar7 = uVar13;
  }
  uVar13 = uVar7 * iVar9 + uVar14;
  if (((uint)(this->Cells).ArrayNum <= uVar13) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellIndex < uint32(Cells.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x81d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
               *)(*pcVar4)();
    return pTVar12;
  }
  uVar8 = 0;
  if ((int)uVar13 < (this->Cells).ArrayNum) {
    uVar8 = ~uVar13 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
               *)(*pcVar4)();
    return pTVar12;
  }
  if (*(int *)((this->Cells).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10 + 8) < 1) {
    bVar6 = false;
    bVar5 = false;
    iVar9 = 1;
    local_68 = -1;
    do {
      if (local_68 <= iVar9) {
        iVar15 = local_68;
        iVar17 = uVar7 + local_68;
        do {
          iVar18 = uVar7 + local_68 + (uVar14 - uVar7);
          iVar19 = local_68;
          do {
            iVar11 = -iVar19;
            if (-iVar19 < 0) {
              iVar11 = iVar19;
            }
            if (iVar11 == iVar9) {
LAB_14dfd8e1e:
              iVar2 = (this->GridResolution).field0_0x0._s_0.X;
              iVar11 = iVar2 + -1;
              if (iVar18 < iVar11) {
                iVar11 = iVar18;
              }
              iVar10 = (this->GridResolution).field0_0x0._s_0.Y + -1;
              if (iVar17 < iVar10) {
                iVar10 = iVar17;
              }
              iVar16 = 0;
              if (0 < iVar10) {
                iVar16 = iVar10;
              }
              iVar10 = 0;
              if (0 < iVar11) {
                iVar10 = iVar11;
              }
              uVar13 = iVar16 * iVar2 + iVar10;
              if (((uint)(this->Cells).ArrayNum <= uVar13) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CellIndex < uint32(Cells.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                                     ,0x81d,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar12 = (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
                           *)(*pcVar4)();
                return pTVar12;
              }
              uVar8 = 0;
              if ((int)uVar13 < (this->Cells).ArrayNum) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar12 = (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
                           *)(*pcVar4)();
                return pTVar12;
              }
              bVar6 = bVar5;
              if (0 < *(int *)((this->Cells).AllocatorInstance.Data +
                              (longlong)(int)uVar13 * 0x10 + 8)) {
                uVar8 = 0;
                if ((int)uVar13 < (this->Cells).ArrayNum) {
                  uVar8 = ~uVar13 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pTVar12 = (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
                             *)(*pcVar4)();
                  return pTVar12;
                }
                local_50[0] = (this->Cells).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
                piVar1 = &__return_storage_ptr__->ArrayMax;
                pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar3 <= (FScriptContainerElement *)local_50) &&
                    ((FScriptContainerElement *)local_50 < pFVar3 + (longlong)*piVar1 * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pTVar12 = (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
                             *)(*pcVar4)();
                  return pTVar12;
                }
                iVar11 = __return_storage_ptr__->ArrayNum;
                if (iVar11 == *piVar1) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
                }
                __return_storage_ptr__->ArrayNum = iVar11 + 1;
                *(FScriptContainerElement **)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8) =
                     local_50[0];
                bVar5 = true;
                bVar6 = bVar5;
              }
            }
            else {
              iVar11 = -iVar15;
              if (-iVar15 < 0) {
                iVar11 = iVar15;
              }
              if (iVar11 == iVar9) goto LAB_14dfd8e1e;
            }
            iVar19 = iVar19 + 1;
            iVar18 = iVar18 + 1;
          } while (iVar19 <= iVar9);
          iVar15 = iVar15 + 1;
          iVar17 = iVar17 + 1;
          bVar5 = bVar6;
        } while (iVar15 <= iVar9);
      }
      local_68 = local_68 + -1;
      iVar9 = iVar9 + 1;
    } while (!bVar6);
  }
  else {
    uVar7 = 0;
    if ((int)uVar13 < (this->Cells).ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
                 *)(*pcVar4)();
      return pTVar12;
    }
    local_58 = (this->Cells).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell_const_*,TSizedDefaultAllocator<32>_>
                 *)(*pcVar4)();
      return pTVar12;
    }
    iVar9 = __return_storage_ptr__->ArrayNum;
    if (iVar9 == __return_storage_ptr__->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar9 + 1;
    *(FScriptContainerElement **)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_58;
  }
  return __return_storage_ptr__;
}

