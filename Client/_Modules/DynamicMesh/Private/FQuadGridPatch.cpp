// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 12

// ForEachQuad @ 14c809830

void __thiscall
UE::Geometry::FQuadGridPatch::ForEachQuad
          (FQuadGridPatch *this,TFunctionRef<void___cdecl(int,int,UE::Geometry::FIndex2i)> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_res8 [2];
  TFunctionRef<void___cdecl(int,int,UE::Geometry::FIndex2i)> *local_res10;
  uint local_res18 [2];
  undefined8 local_res20;
  
  uVar6 = 0;
  if (0 < this->NumVertexRowsV + -1) {
    lVar7 = 0;
    local_res10 = param_1;
    do {
      uVar5 = 0;
      if (0 < this->NumVertexColsU + -1) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar6 < (this->QuadTriangles).ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->QuadTriangles).AllocatorInstance.Data;
          uVar4 = 0;
          if ((int)uVar5 < *(int *)(pFVar1 + lVar7 + 8)) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_res20 = *(undefined8 *)(lVar8 + *(longlong *)(pFVar1 + lVar7));
          local_res8[0] = uVar5;
          local_res18[0] = uVar6;
          (**(code **)local_res10)
                    (*(undefined8 *)&local_res10->field_0x8,local_res18,local_res8,&local_res20);
          uVar5 = uVar5 + 1;
          lVar8 = lVar8 + 8;
        } while ((int)uVar5 < this->NumVertexColsU + -1);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < this->NumVertexRowsV + -1);
  }
  return;
}

// AppendQuadPatchRows @ 14c8ba220

bool __thiscall
UE::Geometry::FQuadGridPatch::AppendQuadPatchRows
          (FQuadGridPatch *this,FQuadGridPatch *param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_1->NumVertexColsU == this->NumVertexColsU) {
    if (param_2) {
      iVar5 = (this->VertexSpans).ArrayNum;
      uVar6 = iVar5 - 1;
      uVar8 = 0;
      if ((int)uVar6 < iVar5) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = (this->VertexSpans).ArrayNum;
      pFVar7 = (this->VertexSpans).AllocatorInstance.Data;
      if (((param_1->VertexSpans).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar9 = (param_1->VertexSpans).AllocatorInstance.Data;
      uVar8 = 0;
      if (0 < this->NumVertexColsU) {
        lVar10 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(pFVar7 + (longlong)iVar5 * 0x10 + -8)) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          lVar1 = *(longlong *)(pFVar7 + (longlong)iVar5 * 0x10 + -0x10);
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(pFVar9 + 8)) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (*(int *)(lVar1 + lVar10 * 4) != *(int *)(*(longlong *)pFVar9 + lVar10 * 4)) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                               ,0xc3,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            goto LAB_14c8ba653;
          }
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 1;
        } while ((int)uVar8 < this->NumVertexColsU);
      }
    }
    uVar11 = 0;
    iVar5 = param_1->NumVertexRowsV;
    uVar8 = 1;
    if (1 < iVar5) {
      lVar10 = 0x10;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (param_1->VertexSpans).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar7 = (this->VertexSpans).AllocatorInstance.Data;
        pFVar9 = (param_1->VertexSpans).AllocatorInstance.Data + lVar10;
        if (((pFVar7 <= pFVar9) && (pFVar9 < pFVar7 + (longlong)(this->VertexSpans).ArrayMax * 0x10)
            ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar5 = (this->VertexSpans).ArrayNum;
        if (iVar5 == (this->VertexSpans).ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->VertexSpans).AllocatorInstance,
                             &(this->VertexSpans).ArrayMax);
        }
        (this->VertexSpans).ArrayNum = iVar5 + 1;
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x10;
        pFVar7 = (this->VertexSpans).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(undefined8 *)pFVar7 = *(undefined8 *)pFVar9;
        *(undefined8 *)pFVar9 = 0;
        *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar9 + 8);
        *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
        *(undefined8 *)(pFVar9 + 8) = 0;
        iVar5 = param_1->NumVertexRowsV;
      } while ((int)uVar8 < iVar5);
    }
    uVar12 = uVar11;
    if (0 < iVar5 + -1) {
      do {
        uVar6 = (uint)uVar11;
        uVar8 = 0;
        if ((int)uVar6 < (param_1->QuadTriangles).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar7 = (this->QuadTriangles).AllocatorInstance.Data;
        pFVar9 = (param_1->QuadTriangles).AllocatorInstance.Data + uVar12;
        if (((pFVar7 <= pFVar9) &&
            (pFVar9 < pFVar7 + (longlong)(this->QuadTriangles).ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar5 = (this->QuadTriangles).ArrayNum;
        if (iVar5 == (this->QuadTriangles).ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->QuadTriangles).AllocatorInstance,
                             &(this->QuadTriangles).ArrayMax);
        }
        (this->QuadTriangles).ArrayNum = iVar5 + 1;
        uVar11 = (ulonglong)(uVar6 + 1);
        pFVar7 = (this->QuadTriangles).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(undefined8 *)pFVar7 = *(undefined8 *)pFVar9;
        *(undefined8 *)pFVar9 = 0;
        *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar9 + 8);
        *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
        *(undefined8 *)(pFVar9 + 8) = 0;
        uVar12 = uVar12 + 0x10;
      } while ((int)(uVar6 + 1) < param_1->NumVertexRowsV + -1);
    }
    this->NumVertexRowsV = (this->VertexSpans).ArrayNum;
    bVar3 = true;
  }
  else {
LAB_14c8ba653:
    bVar3 = false;
  }
  return bVar3;
}

// FindColumnIndex @ 14c8e6360

int __thiscall UE::Geometry::FQuadGridPatch::FindColumnIndex(FQuadGridPatch *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->VertexSpans).ArrayNum;
  pFVar5 = (this->VertexSpans).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->VertexSpans).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) {
        return -1;
      }
      piVar2 = *(int **)pFVar5;
      piVar4 = piVar2;
      if (piVar2 != piVar2 + *(int *)(pFVar5 + 8)) break;
LAB_14c8e63d7:
      pFVar5 = pFVar5 + 0x10;
    }
    do {
      if (*piVar4 == param_1) {
        iVar3 = (int)((longlong)piVar4 - (longlong)piVar2 >> 2);
        if (iVar3 != -1) {
          return iVar3;
        }
        goto LAB_14c8e63d7;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2 + *(int *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// GetAllTriangles @ 14c8f1e60

void __thiscall
UE::Geometry::FQuadGridPatch::GetAllTriangles
          (FQuadGridPatch *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  undefined8 local_48;
  
  uVar10 = (this->NumVertexRowsV * 2 + -2) * (this->NumVertexColsU + -1) + param_1->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  local_res18 = (this->QuadTriangles).ArrayNum;
  uVar8 = (ulonglong)(int)local_res18;
  pFVar12 = (this->QuadTriangles).AllocatorInstance.Data;
  pFVar11 = pFVar12 + uVar8 * 0x10;
  while( true ) {
    if ((this->QuadTriangles).ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar11) break;
    puVar9 = *(undefined8 **)pFVar12;
    iVar3 = *(int *)(pFVar12 + 8);
    puVar2 = puVar9 + iVar3;
    while( true ) {
      if (*(int *)(pFVar12 + 8) != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex2i_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (puVar9 == puVar2) break;
      local_48 = *puVar9;
      pFVar4 = (param_1->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           (undefined4)local_48;
      pFVar4 = (param_1->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)((longlong)&local_48 + 4U)) &&
         ((FScriptContainerElement *)((longlong)&local_48 + 4U) < pFVar4 + (longlong)*piVar1 * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      puVar9 = puVar9 + 1;
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_48._4_4_;
    }
    uVar8 = (ulonglong)local_res18;
    pFVar12 = pFVar12 + 0x10;
  }
  return;
}

// GetQuadOpeningAngleDeg @ 14c8f5540

double __thiscall
UE::Geometry::FQuadGridPatch::GetQuadOpeningAngleDeg
          (FQuadGridPatch *this,FDynamicMesh3 *param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  
  if (param_3 != param_2 + 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Column1 == (Column0+1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                       ,0x169,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
  }
  uVar5 = 0;
  if (param_4 < (this->VertexSpans).ArrayNum) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
  }
  pFVar1 = (this->VertexSpans).AllocatorInstance.Data;
  uVar5 = 0;
  if (param_2 < *(int *)(pFVar1 + (longlong)param_4 * 0x10 + 8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
  }
  uVar7 = param_4 + 1;
  iVar6 = *(int *)(*(longlong *)(pFVar1 + (longlong)param_4 * 0x10) + (longlong)param_2 * 4);
  uVar5 = 0;
  if ((int)uVar7 < (this->VertexSpans).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
  }
  pFVar1 = (this->VertexSpans).AllocatorInstance.Data;
  uVar5 = 0;
  if (param_2 < *(int *)(pFVar1 + (longlong)(int)uVar7 * 0x10 + 8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
  }
  uVar5 = FDynamicMesh3::FindEdge
                    (param_1,iVar6,
                     *(int *)(*(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x10) +
                             (longlong)param_2 * 4));
  if (uVar5 == 0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EdgeID != IndexConstants::InvalidID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                       ,0x16d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
  }
  uVar2 = *(undefined8 *)
           (*(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) + 8 +
           (ulonglong)(uVar5 & 0x1ff) * 0x10);
  iVar6 = (int)((ulonglong)uVar2 >> 0x20);
  if (iVar6 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EdgeTris.B != IndexConstants::InvalidID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                       ,0x16f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
  }
  FDynamicMesh3::GetTriNormal(param_1,(TVector<double> *)&local_40._s_0,(int)uVar2);
  FDynamicMesh3::GetTriNormal(param_1,(TVector<double> *)&local_58._s_0,iVar6);
  dVar9 = local_58._s_0.Y * local_40._s_0.Y + local_58._s_0.X * local_40._s_0.X +
          local_58._s_0.Z * local_40._s_0.Z;
  dVar8 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar9) && (dVar8 = dVar9, __real_3ff0000000000000 <= dVar9)) {
    dVar8 = __real_3ff0000000000000;
  }
  dVar8 = acos(dVar8);
  return dVar8 * __real_404ca5dc1a63c1f8;
}

// GetQuadTriMappedToSpanIndices @ 14c8f5820

FIndex3i * __thiscall
UE::Geometry::FQuadGridPatch::GetQuadTriMappedToSpanIndices
          (FQuadGridPatch *this,FIndex3i *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FIndex3i *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 local_58;
  undefined4 local_50;
  
  if ((1 < (uint)param_4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TriIndex == 0 || TriIndex == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                         ,0xe8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  if (((param_2 < 0) || (this->NumVertexRowsV + -1 <= param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("QuadRow >= 0 && QuadRow < (NumVertexRowsV-1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                         ,0xe9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  lVar16 = (longlong)param_3;
  if (((param_3 < 0) || (this->NumVertexColsU + -1 <= param_3)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("QuadIndex >= 0 && QuadIndex < (NumVertexColsU-1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                         ,0xea,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  uVar13 = 0;
  uVar26 = (uint)~param_2 >> 0x1f;
  uVar10 = 0;
  uVar24 = uVar10;
  if (param_2 < (this->QuadTriangles).ArrayNum) {
    uVar24 = uVar26;
  }
  if ((uVar24 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  lVar11 = (longlong)param_2 * 0x10;
  pFVar9 = (this->QuadTriangles).AllocatorInstance.Data + lVar11;
  uVar25 = (uint)~param_3 >> 0x1f;
  uVar24 = uVar10;
  if (param_3 < *(int *)(pFVar9 + 8)) {
    uVar24 = uVar25;
  }
  if ((uVar24 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  uVar23 = param_2 + 1;
  uVar24 = *(uint *)(*(longlong *)pFVar9 + ((longlong)param_4 + lVar16 * 2) * 4);
  uVar12 = (ulonglong)(uVar24 & 0x1ff);
  lVar4 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8);
  local_50 = *(undefined4 *)(lVar4 + 8 + uVar12 * 0xc);
  local_58 = *(undefined8 *)(lVar4 + uVar12 * 0xc);
  uVar24 = uVar10;
  if ((int)uVar23 < (this->VertexSpans).ArrayNum) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  uVar24 = param_3 + 1;
  pFVar9 = (this->VertexSpans).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
  if ((int)uVar24 < *(int *)(pFVar9 + 8)) {
    uVar10 = ~uVar24 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  iVar1 = *(int *)((longlong)(int)uVar24 * 4 + *(longlong *)pFVar9);
  uVar7 = 0;
  uVar10 = uVar7;
  if (param_2 + 1 < (this->VertexSpans).ArrayNum) {
    uVar10 = ~uVar23 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  pFVar9 = (this->VertexSpans).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
  uVar10 = uVar7;
  if (param_3 < *(int *)(pFVar9 + 8)) {
    uVar10 = uVar25;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  iVar2 = *(int *)(*(longlong *)pFVar9 + lVar16 * 4);
  uVar10 = uVar7;
  if (param_2 < (this->VertexSpans).ArrayNum) {
    uVar10 = uVar26;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  pFVar9 = (this->VertexSpans).AllocatorInstance.Data + lVar11;
  uVar10 = uVar7;
  if (param_3 + 1 < *(int *)(pFVar9 + 8)) {
    uVar10 = ~uVar24 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = *(int *)((longlong)(int)uVar24 * 4 + *(longlong *)pFVar9);
  if (param_2 < (this->VertexSpans).ArrayNum) {
    uVar7 = uVar26;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  pFVar9 = (this->VertexSpans).AllocatorInstance.Data + lVar11;
  uVar24 = 0;
  if (param_3 < *(int *)(pFVar9 + 8)) {
    uVar24 = uVar25;
  }
  if ((uVar24 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIndex3i *)(*pcVar5)();
    return pFVar8;
  }
  iVar17 = 2;
  uVar25 = param_2 * 0x100000;
  iVar18 = 2;
  iVar19 = *(int *)(*(longlong *)pFVar9 + lVar16 * 4);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0xffffffffffffffff;
  (__return_storage_ptr__->field0_0x0)._s_0.C = -1;
  uVar26 = uVar25 + 0x100000 | param_3;
  uVar24 = param_3 + 1U | uVar25;
  uVar10 = uVar25 + 0x100000 | param_3 + 1U;
  uVar12 = uVar13;
  uVar22 = uVar13;
  do {
    if (*(int *)((longlong)&local_58 + uVar12 * 4) == iVar19) {
      iVar20 = iVar18 + -1;
      iVar20 = iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                        (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
      iVar14 = iVar18 + (iVar18 / 3 + (iVar18 >> 0x1f) +
                        (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
      iVar21 = iVar14;
      if ((*(int *)((longlong)&local_58 + (longlong)iVar20 * 4) == iVar1) ||
         (iVar21 = iVar20, iVar20 = iVar14,
         *(int *)((longlong)&local_58 + (longlong)iVar14 * 4) == iVar1)) {
        (__return_storage_ptr__->field0_0x0).ABC[(int)uVar22] = uVar25 | param_3;
        (__return_storage_ptr__->field0_0x0).ABC[iVar20] = uVar10;
        if (*(int *)((longlong)&local_58 + (longlong)iVar21 * 4) == iVar2) {
          uVar24 = uVar26;
        }
        (__return_storage_ptr__->field0_0x0).ABC[iVar21] = uVar24;
        return __return_storage_ptr__;
      }
    }
    uVar22 = (ulonglong)((int)uVar22 + 1);
    iVar18 = iVar18 + 1;
    uVar12 = uVar12 + 1;
    uVar15 = uVar13;
  } while ((longlong)uVar12 < 3);
  do {
    if (*(int *)((longlong)&local_58 + uVar13 * 4) == iVar3) {
      iVar18 = iVar17 + -1;
      iVar18 = iVar18 + (iVar18 / 3 + (iVar18 >> 0x1f) +
                        (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
      iVar20 = iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                        (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
      iVar19 = iVar20;
      if ((*(int *)((longlong)&local_58 + (longlong)iVar18 * 4) == iVar2) ||
         (iVar19 = iVar18, iVar18 = iVar20,
         *(int *)((longlong)&local_58 + (longlong)iVar20 * 4) == iVar2)) {
        (__return_storage_ptr__->field0_0x0).ABC[(int)uVar15] = uVar24;
        (__return_storage_ptr__->field0_0x0).ABC[iVar18] = uVar26;
        uVar24 = uVar25 | param_3;
        if (*(int *)((longlong)&local_58 + (longlong)iVar19 * 4) == iVar1) {
          uVar24 = uVar10;
        }
        (__return_storage_ptr__->field0_0x0).ABC[iVar19] = uVar24;
        return __return_storage_ptr__;
      }
    }
    iVar17 = iVar17 + 1;
    uVar13 = uVar13 + 1;
    uVar15 = (ulonglong)((int)uVar15 + 1);
    if (2 < (longlong)uVar13) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                         ,0x106,L"");
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIndex3i *)(*pcVar5)();
      return pFVar8;
    }
  } while( true );
}

// GetSubPatchByQuadRange @ 14c8f7d60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuadGridPatch::GetSubPatchByQuadRange
          (FQuadGridPatch *this,int param_1,int param_2,int param_3,int param_4,
          FQuadGridPatch *param_5)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_01;
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  FQuadGridPatch *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  uint local_res20;
  longlong local_d0;
  longlong local_c8;
  longlong local_a8;
  longlong local_80;
  
  pFVar4 = param_5;
  uVar21 = (ulonglong)param_1;
  iVar13 = param_2 - param_1;
  param_5->NumVertexRowsV = iVar13 + 2;
  param_5->NumVertexColsU = (param_4 - param_3) + 2;
  this_00 = &param_5->VertexSpans;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,iVar13 + 2,Default);
  this_01 = &param_5->QuadTriangles;
  TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  SetNum(this_01,param_5->NumVertexRowsV + -1,Default);
  lVar15 = (longlong)iVar13 + 1;
  lVar10 = (longlong)((param_4 - param_3) + 1);
  piVar1 = &(param_5->VertexSpans).ArrayNum;
  if (0 < lVar15) {
    local_d0 = 0;
    iVar6 = -param_1;
    local_c8 = 0;
    lVar16 = uVar21 * 0x10;
    uVar12 = 0;
    param_5 = (FQuadGridPatch *)0x0;
    do {
      lVar17 = 0;
      lVar19 = (longlong)(int)uVar12;
      uVar20 = (uint)uVar21;
      lVar2 = lVar16 + local_c8;
      if (lVar10 < 1) {
        uVar7 = ~(iVar6 + uVar20);
      }
      else {
        uVar18 = iVar6 + uVar20;
        uVar7 = ~uVar18;
        local_80 = (longlong)param_3 * 8;
        local_a8 = (longlong)param_3 * 4;
        uVar12 = param_3;
        do {
          uVar8 = 0;
          if ((int)uVar18 < *piVar1) {
            uVar8 = uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = (this_00->AllocatorInstance).Data + local_c8;
          uVar8 = 0;
          if ((int)uVar20 < (this->VertexSpans).ArrayNum) {
            uVar8 = ~uVar20 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (this->VertexSpans).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10;
          uVar8 = 0;
          if ((int)uVar12 < *(int *)(pFVar14 + 8)) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (FScriptContainerElement *)(*(longlong *)pFVar14 + local_a8);
          if (((*(FScriptContainerElement **)&pFVar11->field_0x0 <= pFVar14) &&
              (pFVar14 < *(FScriptContainerElement **)&pFVar11->field_0x0 +
                         (longlong)*(int *)(pFVar11 + 0xc) * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = *(int *)&pFVar11[8].field_0x0;
          if (iVar9 == *(int *)(pFVar11 + 0xc)) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
          }
          *(int *)&pFVar11[8].field_0x0 = iVar9 + 1;
          *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar9 * 4) =
               *(undefined4 *)pFVar14;
          uVar8 = 0;
          if ((int)uVar18 < (pFVar4->QuadTriangles).ArrayNum) {
            uVar8 = uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = (this_01->AllocatorInstance).Data + local_c8;
          uVar8 = 0;
          if ((int)uVar20 < (this->QuadTriangles).ArrayNum) {
            uVar8 = ~uVar20 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (this->QuadTriangles).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10;
          uVar8 = 0;
          if ((int)uVar12 < *(int *)(pFVar14 + 8)) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (FScriptContainerElement *)(*(longlong *)pFVar14 + local_80);
          if (((*(FScriptContainerElement **)&pFVar11->field_0x0 <= pFVar14) &&
              (pFVar14 < *(FScriptContainerElement **)&pFVar11->field_0x0 +
                         (longlong)*(int *)(pFVar11 + 0xc) * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = *(int *)&pFVar11[8].field_0x0;
          if (iVar9 == *(int *)(pFVar11 + 0xc)) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
          }
          local_a8 = local_a8 + 4;
          local_80 = local_80 + 8;
          uVar12 = uVar12 + 1;
          *(int *)&pFVar11[8].field_0x0 = iVar9 + 1;
          lVar17 = lVar17 + 1;
          *(undefined8 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar9 * 8) =
               *(undefined8 *)pFVar14;
        } while (lVar17 < lVar10);
        uVar12 = (uint)param_5;
      }
      uVar18 = 0;
      if ((int)(iVar6 + uVar20) < *piVar1) {
        uVar18 = uVar7 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (this_00->AllocatorInstance).Data + lVar19 * 0x10;
      uVar7 = 0;
      if ((int)uVar20 < (this->VertexSpans).ArrayNum) {
        uVar7 = ~uVar20 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->VertexSpans).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)(param_4 + 1U) < *(int *)(pFVar14 + lVar2 + 8)) {
        uVar7 = ~(param_4 + 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (FScriptContainerElement *)
                (*(longlong *)(pFVar14 + lVar2) + (longlong)param_4 * 4 + 4);
      if (((*(FScriptContainerElement **)&pFVar11->field_0x0 <= pFVar14) &&
          (pFVar14 < *(FScriptContainerElement **)&pFVar11->field_0x0 +
                     (longlong)*(int *)(pFVar11 + 0xc) * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)&pFVar11[8].field_0x0;
      if (iVar9 == *(int *)(pFVar11 + 0xc)) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      local_d0 = local_d0 + 1;
      uVar21 = (ulonglong)(uVar20 + 1);
      *(int *)&pFVar11[8].field_0x0 = iVar9 + 1;
      local_c8 = local_c8 + 0x10;
      *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar14;
      uVar12 = uVar12 + 1;
      param_5 = (FQuadGridPatch *)(ulonglong)uVar12;
    } while (local_d0 < lVar15);
  }
  if (-1 < lVar10) {
    lVar16 = (longlong)param_3 * 4;
    lVar10 = lVar10 + 1;
    local_res20 = param_3;
    do {
      uVar12 = 0;
      if ((int)(iVar13 + 1U) < *piVar1) {
        uVar12 = ~(iVar13 + 1U) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (this_00->AllocatorInstance).Data + lVar15 * 0x10;
      uVar12 = 0;
      if ((int)(param_2 + 1U) < (this->VertexSpans).ArrayNum) {
        uVar12 = ~(param_2 + 1U) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->VertexSpans).AllocatorInstance.Data + ((longlong)param_2 + 1) * 0x10;
      uVar12 = 0;
      if ((int)local_res20 < *(int *)(pFVar14 + 8)) {
        uVar12 = ~local_res20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (FScriptContainerElement *)(*(longlong *)pFVar14 + lVar16);
      if (((*(FScriptContainerElement **)&pFVar11->field_0x0 <= pFVar14) &&
          (pFVar14 < *(FScriptContainerElement **)&pFVar11->field_0x0 +
                     (longlong)*(int *)(pFVar11 + 0xc) * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)&pFVar11[8].field_0x0;
      if (iVar6 == *(int *)(pFVar11 + 0xc)) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      local_res20 = local_res20 + 1;
      lVar16 = lVar16 + 4;
      *(int *)&pFVar11[8].field_0x0 = iVar6 + 1;
      *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar14;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// GetVertexColumn @ 14c8f9b80

bool __thiscall
UE::Geometry::FQuadGridPatch::GetVertexColumn
          (FQuadGridPatch *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  if (-1 < param_1) {
    if (((this->VertexSpans).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (param_1 < *(int *)((this->VertexSpans).AllocatorInstance.Data + 8)) {
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      }
      uVar8 = 0;
      if (0 < (this->VertexSpans).ArrayNum) {
        lVar10 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < (this->VertexSpans).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (this->VertexSpans).AllocatorInstance.Data;
          uVar6 = 0;
          if (param_1 < *(int *)(pFVar2 + lVar10 + 8)) {
            uVar6 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar9 = (FScriptContainerElement *)
                   (*(longlong *)(pFVar2 + lVar10) + (longlong)param_1 * 4);
          pFVar2 = (param_2->AllocatorInstance).Data;
          if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar7 = param_2->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar7 + 1;
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 0x10;
          *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) =
               *(undefined4 *)pFVar9;
        } while ((int)uVar8 < (this->VertexSpans).ArrayNum);
      }
      return true;
    }
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3257622536694791919>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                     ,0x111,"false");
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// InitializeFromQuadPatch @ 14c8fcdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FQuadGridPatch::InitializeFromQuadPatch
          (FQuadGridPatch *this,FDynamicMesh3 *param_1,
          TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *param_3)

{
  int *piVar1;
  ForElementType<int> FVar2;
  undefined4 *puVar3;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *pTVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  ForElementType<int> FVar18;
  atomic<unsigned_char> *paVar19;
  int iVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 auStackY_168 [32];
  uint local_124;
  undefined8 local_108;
  int local_100 [2];
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  FDynamicMesh3 *local_c0;
  longlong local_b8;
  longlong local_b0;
  TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_a8;
  undefined8 local_a0;
  TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> local_90;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_c0 = param_1;
  if ((param_3->ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar13 = (code *)swi(3);
    uVar16 = (*pcVar13)();
    return (bool)uVar16;
  }
  iVar26 = *(int *)((param_3->AllocatorInstance).Data + 8);
  if ((param_2->ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar13 = (code *)swi(3);
    uVar16 = (*pcVar13)();
    return (bool)uVar16;
  }
  iVar6 = *(int *)((param_2->AllocatorInstance).Data + 8);
  if ((iVar6 == iVar26 + -1) && (param_2->ArrayNum == param_3->ArrayNum + -1)) {
    this->NumVertexColsU = iVar26;
    iVar26 = param_3->ArrayNum;
    this->NumVertexRowsV = iVar26;
    uVar28 = 1;
    uVar21 = 1;
    if (1 < iVar26) {
      lVar29 = 0x10;
      do {
        uVar17 = 0;
        if ((int)uVar21 < param_3->ArrayNum) {
          uVar17 = ~uVar21 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          uVar16 = (*pcVar13)();
          return (bool)uVar16;
        }
        iVar26 = *(int *)((param_3->AllocatorInstance).Data + lVar29 + 8);
        if ((param_3->ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          uVar16 = (*pcVar13)();
          return (bool)uVar16;
        }
        if (iVar26 != *(int *)((param_3->AllocatorInstance).Data + 8)) {
          iVar26 = 0x66;
          paVar19 = &bGEnsureHasExecuted<_3257622536694792090>;
          goto LAB_14c8fd9bb;
        }
        uVar21 = uVar21 + 1;
        lVar29 = lVar29 + 0x10;
      } while ((int)uVar21 < this->NumVertexRowsV);
    }
    local_e0 = (longlong)param_2->ArrayNum;
    if (1 < local_e0) {
      lVar29 = 1;
      lVar30 = 0x10;
      do {
        uVar21 = 0;
        if ((int)uVar28 < param_2->ArrayNum) {
          uVar21 = ~uVar28 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          uVar16 = (*pcVar13)();
          return (bool)uVar16;
        }
        pFVar22 = (param_2->AllocatorInstance).Data;
        if ((param_2->ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          uVar16 = (*pcVar13)();
          return (bool)uVar16;
        }
        if (*(int *)(pFVar22 + lVar30 + 8) != *(int *)((param_2->AllocatorInstance).Data + 8)) {
          iVar26 = 0x6f;
          paVar19 = &bGEnsureHasExecuted<_3257622536694792081>;
          goto LAB_14c8fd9bb;
        }
        uVar28 = uVar28 + 1;
        lVar29 = lVar29 + 1;
        lVar30 = lVar30 + 0x10;
      } while (lVar29 < local_e0);
    }
    lVar29 = local_e0;
    pTVar4 = &this->VertexSpans;
    if (pTVar4 != param_3) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar4->AllocatorInstance).Data,
                 (this->VertexSpans).ArrayNum);
      iVar26 = param_3->ArrayNum;
      piVar1 = &(this->VertexSpans).ArrayMax;
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(param_3->AllocatorInstance).Data;
      (this->VertexSpans).ArrayNum = iVar26;
      if ((iVar26 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar26,*piVar1,&pTVar4->AllocatorInstance,iVar26,piVar1);
        ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((pTVar4->AllocatorInstance).Data,pTVar11,iVar26);
      }
    }
    pTVar5 = &this->QuadTriangles;
    local_a8 = pTVar5;
    if (pTVar5 != param_2) {
      DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
                 (pTVar5->AllocatorInstance).Data,(this->QuadTriangles).ArrayNum);
      iVar26 = param_2->ArrayNum;
      piVar1 = &(this->QuadTriangles).ArrayMax;
      pTVar12 = (TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
                (param_2->AllocatorInstance).Data;
      (this->QuadTriangles).ArrayNum = iVar26;
      if ((iVar26 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar26,*piVar1,&pTVar5->AllocatorInstance,iVar26,piVar1);
        ConstructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
                  ((pTVar5->AllocatorInstance).Data,pTVar12,iVar26);
      }
    }
    bVar15 = true;
    bVar14 = true;
    local_124 = 0;
    if (0 < lVar29) {
      local_d8 = 0;
      do {
        if (!bVar15) goto LAB_14c8fd759;
        uVar21 = 0;
        local_f0 = 0;
        if (0 < (longlong)iVar6) {
          local_b0 = local_d8 + 1;
          local_b8 = (longlong)(int)local_124;
          local_f8 = local_124 + 1;
          local_f4 = ~local_f8 >> 0x1f;
          uVar28 = ~local_124 >> 0x1f;
          local_c8 = local_b0 * 0x10;
          local_e8 = local_b8 << 4;
          do {
            lVar30 = local_e8;
            lVar29 = local_f0;
            uVar17 = 0;
            if ((int)local_124 < (this->VertexSpans).ArrayNum) {
              uVar17 = uVar28;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            pFVar22 = (this->VertexSpans).AllocatorInstance.Data + lVar30;
            uVar24 = ~uVar21 >> 0x1f;
            uVar17 = 0;
            if ((int)uVar21 < *(int *)(pFVar22 + 8)) {
              uVar17 = uVar24;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            iVar26 = *(int *)(*(longlong *)pFVar22 + lVar29 * 4);
            uVar17 = 0;
            if ((int)local_124 < (this->VertexSpans).ArrayNum) {
              uVar17 = uVar28;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            uVar23 = uVar21 + 1;
            pFVar22 = (this->VertexSpans).AllocatorInstance.Data + local_e8;
            uVar17 = 0;
            if ((int)uVar23 < *(int *)(pFVar22 + 8)) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            iVar7 = *(int *)(*(longlong *)pFVar22 + 4 + local_f0 * 4);
            uVar17 = 0;
            if ((int)local_f8 < (this->VertexSpans).ArrayNum) {
              uVar17 = local_f4;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            pFVar22 = (this->VertexSpans).AllocatorInstance.Data + local_c8;
            uVar17 = 0;
            if ((int)uVar23 < *(int *)(pFVar22 + 8)) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            lVar29 = local_f0;
            iVar8 = *(int *)(*(longlong *)pFVar22 + 4 + local_f0 * 4);
            uVar17 = 0;
            if ((int)local_f8 < (this->VertexSpans).ArrayNum) {
              uVar17 = local_f4;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            pFVar22 = (this->VertexSpans).AllocatorInstance.Data + local_c8;
            uVar17 = 0;
            if ((int)uVar21 < *(int *)(pFVar22 + 8)) {
              uVar17 = uVar24;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            pTVar5 = local_a8;
            iVar9 = *(int *)(*(longlong *)pFVar22 + lVar29 * 4);
            uVar17 = 0;
            if ((int)local_124 < local_a8->ArrayNum) {
              uVar17 = uVar28;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            pFVar22 = (pTVar5->AllocatorInstance).Data + local_e8;
            uVar17 = 0;
            if ((int)uVar21 < *(int *)(pFVar22 + 8)) {
              uVar17 = uVar24;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              uVar16 = (*pcVar13)();
              return (bool)uVar16;
            }
            lVar29 = *(longlong *)pFVar22;
            puVar3 = (undefined4 *)(lVar29 + local_f0 * 8);
            uVar17 = *(uint *)(lVar29 + local_f0 * 8);
            if (((int)uVar17 < 0) ||
               (iVar20 = (local_c0->TriangleRefCounts).RefCounts.CurBlockUsed +
                         (local_c0->TriangleRefCounts).RefCounts.CurBlock * 0x200,
               iVar20 <= (int)uVar17)) {
LAB_14c8fd8ef:
              bVar14 = false;
              bVar15 = false;
              break;
            }
            pFVar22 = (local_c0->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
            uVar27 = (ulonglong)(uVar17 & 0x1ff);
            if ((0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar22 + (ulonglong)(uVar17 >> 9) * 8)
                                             + uVar27 * 2) - 1U)) ||
               ((uVar24 = puVar3[1], (int)uVar24 < 0 || (iVar20 <= (int)uVar24))))
            goto LAB_14c8fd8ef;
            uVar25 = (ulonglong)(uVar24 & 0x1ff);
            if (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar22 + (ulonglong)(uVar24 >> 9) * 8) +
                                            uVar25 * 2) - 1U)) goto LAB_14c8fd8ef;
            pFVar22 = (local_c0->Triangles).Blocks.AllocatorInstance.Data;
            lVar29 = *(longlong *)(pFVar22 + (ulonglong)(uVar17 >> 9) * 8);
            local_d0 = *(undefined8 *)(lVar29 + uVar27 * 0xc);
            iVar20 = *(int *)(lVar29 + 8 + uVar27 * 0xc);
            lVar29 = *(longlong *)(pFVar22 + (ulonglong)(uVar24 >> 9) * 8);
            local_108 = *(undefined8 *)(lVar29 + uVar25 * 0xc);
            local_100[0] = *(int *)(lVar29 + 8 + uVar25 * 0xc);
            local_a0._0_4_ = (undefined4)local_d0;
            local_68 = (undefined4)local_a0;
            uStack_64 = (undefined4)((ulonglong)local_d0 >> 0x20);
            local_90.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
            local_90.ArrayNum = 3;
            local_a0 = local_d0;
            local_60 = iVar20;
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,3,0,&local_90.AllocatorInstance,3,&local_90.ArrayMax);
            FVar18 = (ForElementType<int>)&local_90;
            if (local_90.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar18 = local_90.AllocatorInstance.SecondaryData;
            }
            *(ulonglong *)FVar18 = CONCAT44(uStack_64,local_68);
            *(int *)((longlong)FVar18 + 8) = iVar20;
            TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<int_const_&>(&local_90,(int *)&local_108);
            TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<int_const_&>(&local_90,(int *)((longlong)&local_108 + 4));
            TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<int_const_&>(&local_90,local_100);
            if (local_90.ArrayNum != 4) {
joined_r0x00014c8fd8e0:
              if (local_90.AllocatorInstance.SecondaryData == (ForElementType<int>)0x0)
              goto LAB_14c8fd8ef;
              bVar14 = false;
              FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
              bVar15 = bVar14;
              break;
            }
            FVar18 = (ForElementType<int>)&local_90;
            if (local_90.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar18 = local_90.AllocatorInstance.SecondaryData;
            }
            FVar2 = (ForElementType<int>)((longlong)FVar18 + 0x10);
            while( true ) {
              if (FVar18 == FVar2) goto joined_r0x00014c8fd8e0;
              if (*(int *)FVar18 == iVar26) break;
              FVar18 = (ForElementType<int>)((longlong)FVar18 + 4);
            }
            FVar18 = (ForElementType<int>)&local_90;
            if (local_90.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar18 = local_90.AllocatorInstance.SecondaryData;
            }
            FVar2 = (ForElementType<int>)((longlong)FVar18 + 0x10);
            while( true ) {
              if (FVar18 == FVar2) goto joined_r0x00014c8fd8e0;
              if (*(int *)FVar18 == iVar7) break;
              FVar18 = (ForElementType<int>)((longlong)FVar18 + 4);
            }
            FVar18 = (ForElementType<int>)&local_90;
            if (local_90.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar18 = local_90.AllocatorInstance.SecondaryData;
            }
            FVar2 = (ForElementType<int>)((longlong)FVar18 + 0x10);
            while( true ) {
              if (FVar18 == FVar2) goto joined_r0x00014c8fd8e0;
              if (*(int *)FVar18 == iVar8) break;
              FVar18 = (ForElementType<int>)((longlong)FVar18 + 4);
            }
            FVar18 = (ForElementType<int>)&local_90;
            if (local_90.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar18 = local_90.AllocatorInstance.SecondaryData;
            }
            FVar2 = (ForElementType<int>)((longlong)FVar18 + 0x10);
            while( true ) {
              if (FVar18 == FVar2) goto joined_r0x00014c8fd8e0;
              if (*(int *)FVar18 == iVar9) break;
              FVar18 = (ForElementType<int>)((longlong)FVar18 + 4);
            }
            if (((((int)local_108 == iVar26) || (local_108._4_4_ == iVar26)) ||
                (local_100[0] == iVar26)) &&
               ((((int)local_108 == iVar7 || (local_108._4_4_ == iVar7)) || (local_100[0] == iVar7))
               )) {
              local_108 = local_d0;
              uVar10 = *puVar3;
              *puVar3 = puVar3[1];
              puVar3[1] = uVar10;
              local_100[0] = iVar20;
            }
            if (local_90.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
            }
            uVar21 = uVar21 + 1;
            local_f0 = local_f0 + 1;
            bVar15 = bVar14;
          } while (local_f0 < iVar6);
        }
        local_124 = local_124 + 1;
        local_d8 = local_d8 + 1;
      } while (local_d8 < local_e0);
      if (!bVar15) {
LAB_14c8fd759:
        bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3257622536694792029>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                            ,0xa3,"false");
        if (bVar15) {
          pcVar13 = (code *)swi(3);
          uVar16 = (*pcVar13)();
          return (bool)uVar16;
        }
        piVar1 = &(this->VertexSpans).ArrayMax;
        pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  (this->VertexSpans).AllocatorInstance.Data;
        iVar26 = (this->VertexSpans).ArrayNum;
        if ((this->VertexSpans).ArrayMax < 0) {
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar11,iVar26);
          (this->VertexSpans).ArrayNum = 0;
          if (*piVar1 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->VertexSpans).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar11,iVar26);
          (this->VertexSpans).ArrayNum = 0;
        }
        piVar1 = &(this->QuadTriangles).ArrayMax;
        pTVar12 = (TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
                  (this->QuadTriangles).AllocatorInstance.Data;
        iVar26 = (this->QuadTriangles).ArrayNum;
        if ((this->QuadTriangles).ArrayMax < 0) {
          DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
                    (pTVar12,iVar26);
          (this->QuadTriangles).ArrayNum = 0;
          if (*piVar1 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->QuadTriangles).AllocatorInstance,0,piVar1);
          }
          this->NumVertexColsU = 0;
          this->NumVertexRowsV = 0;
        }
        else {
          DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
                    (pTVar12,iVar26);
          (this->QuadTriangles).ArrayNum = 0;
          this->NumVertexColsU = 0;
          this->NumVertexRowsV = 0;
        }
        goto LAB_14c8fd9db;
      }
    }
    bVar15 = true;
  }
  else {
    iVar26 = 0x5c;
    paVar19 = &bGEnsureHasExecuted<_3257622536694792100>;
LAB_14c8fd9bb:
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (paVar19,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                        ,iVar26,"false");
    if (bVar15) {
      pcVar13 = (code *)swi(3);
      uVar16 = (*pcVar13)();
      return (bool)uVar16;
    }
LAB_14c8fd9db:
    bVar15 = false;
  }
  return bVar15;
}

// InitializeFromQuadStrip @ 14c8fda10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuadGridPatch::InitializeFromQuadStrip
          (FQuadGridPatch *this,FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *pTVar9;
  code *pcVar10;
  ulonglong uVar11;
  bool bVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong local_res18;
  int local_88;
  int local_84;
  TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  int local_58;
  
  uVar21 = param_3->ArrayNum;
  iVar19 = param_2->ArrayNum;
  if ((iVar19 != uVar21 - 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumQ == NumV-1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\QuadGridPatch.cpp"
                          ,0x2c,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_00 = &this->VertexSpans;
  this->NumVertexColsU = uVar21;
  this->NumVertexRowsV = 2;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,2,Default);
  if (((this->VertexSpans).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data,param_3);
  if (((this->VertexSpans).ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar8 = (this_00->AllocatorInstance).Data;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (*(int *)(pFVar8 + 0x1c) < (int)uVar21) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar21,(ForAnyElementType *)(pFVar8 + 0x10),*(int *)(pFVar8 + 0x18),
               (int *)(pFVar8 + 0x1c));
  }
  pTVar1 = &this->QuadTriangles;
  local_80 = pTVar1;
  TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  SetNum(pTVar1,1,Default);
  if (((this->QuadTriangles).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar9 = (TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
           (pTVar1->AllocatorInstance).Data;
  if (pTVar9 != param_2) {
    iVar20 = param_2->ArrayNum;
    piVar2 = &pTVar9->ArrayMax;
    pFVar8 = (param_2->AllocatorInstance).Data;
    pTVar9->ArrayNum = iVar20;
    if ((iVar20 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar20,*piVar2,(ForAnyElementType *)pTVar9,iVar20,piVar2);
      if (iVar20 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data,pFVar8,(longlong)iVar20 << 3);
      }
    }
  }
  if (0 < iVar19) {
    local_res18 = 0;
    uVar21 = 0;
    local_78 = (longlong)iVar19;
    do {
      uVar13 = 0;
      if ((int)uVar21 < param_3->ArrayNum) {
        uVar13 = ~uVar21 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar15 = uVar21 + 1;
      iVar19 = *(int *)((param_3->AllocatorInstance).Data + local_res18 * 4);
      uVar13 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar1 = local_80;
      iVar20 = *(int *)((param_3->AllocatorInstance).Data + local_res18 * 4 + 4);
      if ((local_80->ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      uVar13 = 0;
      if ((int)uVar21 < *(int *)(pFVar8 + 8)) {
        uVar13 = ~uVar21 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar16 = *(longlong *)pFVar8;
      uVar13 = *(uint *)(lVar16 + local_res18 * 8);
      puVar3 = (uint *)(lVar16 + local_res18 * 8);
      uVar5 = puVar3[1];
      pFVar8 = (param_1->Triangles).Blocks.AllocatorInstance.Data;
      uVar14 = (ulonglong)(uVar13 & 0x1ff);
      lVar16 = *(longlong *)(pFVar8 + (ulonglong)(uVar13 >> 9) * 8);
      puVar4 = (ulonglong *)(lVar16 + uVar14 * 0xc);
      local_58 = *(int *)(lVar16 + 8 + uVar14 * 0xc);
      local_60 = *(ulonglong *)(lVar16 + uVar14 * 0xc);
      lVar16 = *(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8);
      uVar14 = *(ulonglong *)(lVar16 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_68 = *(int *)(lVar16 + (ulonglong)(uVar5 & 0x1ff) * 0xc + 8);
      local_70 = uVar14;
      iVar18 = (int)(uVar14 >> 0x20);
      if (((((int)uVar14 == iVar19) || (iVar18 == iVar19)) || (local_68 == iVar19)) &&
         ((((int)uVar14 == iVar20 || (iVar18 == iVar20)) || (local_68 == iVar20)))) {
        local_60 = uVar14;
        local_70 = *puVar4;
        local_58 = local_68;
        uVar11 = puVar4[1];
        uVar14 = local_70 & 0xffffffff;
        *puVar3 = uVar5;
        local_68 = (int)uVar11;
        puVar3[1] = uVar13;
      }
      iVar18 = 0;
      iVar17 = 1;
      lVar16 = 0;
      do {
        iVar6 = *(int *)((longlong)&local_60 +
                        (longlong)
                        (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                                  (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -3) * 4);
        iVar7 = *(int *)((longlong)&local_60 + lVar16 * 4);
        if (((iVar19 == iVar7) || (bVar12 = iVar19 == iVar6, iVar6 = iVar7, bVar12)) &&
           (iVar20 == iVar6)) {
          iVar18 = iVar18 + 2;
          local_84 = *(int *)((longlong)&local_60 +
                             (longlong)
                             (iVar18 + (iVar18 / 3 + (iVar18 >> 0x1f) +
                                       (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
          goto LAB_14c8fde67;
        }
        iVar18 = iVar18 + 1;
        iVar17 = iVar17 + 1;
        lVar16 = lVar16 + 1;
      } while (lVar16 < 3);
      local_84 = -1;
LAB_14c8fde67:
      if ((((int)uVar14 == iVar19) || (local_70._4_4_ == iVar19)) || (local_68 == iVar19)) {
        iVar20 = 0;
        iVar18 = 1;
        lVar16 = 0;
        do {
          iVar17 = *(int *)((longlong)&local_70 +
                           (longlong)
                           (iVar18 + (iVar18 / 3 + (iVar18 >> 0x1f) +
                                     (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) &
                                           0xffffffffU) >> 0x1f)) * -3) * 4);
          iVar6 = *(int *)((longlong)&local_70 + lVar16 * 4);
          if (((iVar19 == iVar6) || (bVar12 = iVar19 == iVar17, iVar17 = iVar6, bVar12)) &&
             (local_84 == iVar17)) {
            iVar20 = iVar20 + 2;
            local_88 = *(int *)((longlong)&local_70 +
                               (longlong)
                               (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                                         (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) &
                                               0xffffffffU) >> 0x1f)) * -3) * 4);
            goto LAB_14c8fdf7e;
          }
          iVar20 = iVar20 + 1;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < 3);
        local_88 = -1;
      }
      else {
        iVar19 = 0;
        lVar16 = 0;
        iVar18 = 1;
        do {
          iVar17 = *(int *)((longlong)&local_70 +
                           (longlong)
                           (iVar18 + (iVar18 / 3 + (iVar18 >> 0x1f) +
                                     (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) &
                                           0xffffffffU) >> 0x1f)) * -3) * 4);
          iVar6 = *(int *)((longlong)&local_70 + lVar16 * 4);
          local_88 = local_84;
          if (((iVar20 == iVar6) || (bVar12 = iVar20 == iVar17, iVar17 = iVar6, bVar12)) &&
             (local_84 == iVar17)) {
            iVar19 = iVar19 + 2;
            local_84 = *(int *)((longlong)&local_70 +
                               (longlong)
                               (iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                                         (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) &
                                               0xffffffffU) >> 0x1f)) * -3) * 4);
            goto LAB_14c8fdf7e;
          }
          iVar19 = iVar19 + 1;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < 3);
        local_84 = -1;
      }
LAB_14c8fdf7e:
      if (uVar21 == 0) {
        if (((this->VertexSpans).ArrayNum < 2) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (this_00->AllocatorInstance).Data;
        if (((*(int **)(pFVar8 + 0x10) <= &local_88) &&
            (&local_88 < *(int **)(pFVar8 + 0x10) + *(int *)(pFVar8 + 0x1c))) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = *(int *)(pFVar8 + 0x18);
        if (iVar19 == *(int *)(pFVar8 + 0x1c)) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar8 + 0x10),(int *)(pFVar8 + 0x1c));
        }
        *(int *)(pFVar8 + 0x18) = iVar19 + 1;
        *(int *)(*(longlong *)(pFVar8 + 0x10) + (longlong)iVar19 * 4) = local_88;
      }
      if (((this->VertexSpans).ArrayNum < 2) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (this_00->AllocatorInstance).Data;
      if (((*(int **)(pFVar8 + 0x10) <= &local_84) &&
          (&local_84 < *(int **)(pFVar8 + 0x10) + *(int *)(pFVar8 + 0x1c))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar19 = *(int *)(pFVar8 + 0x18);
      if (iVar19 == *(int *)(pFVar8 + 0x1c)) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pFVar8 + 0x10),(int *)(pFVar8 + 0x1c));
      }
      local_res18 = local_res18 + 1;
      *(int *)(pFVar8 + 0x18) = iVar19 + 1;
      *(int *)(*(longlong *)(pFVar8 + 0x10) + (longlong)iVar19 * 4) = local_84;
      uVar21 = uVar15;
    } while (local_res18 < local_78);
  }
  return;
}

// ReverseRows @ 14c915030

void __thiscall UE::Geometry::FQuadGridPatch::ReverseRows(FQuadGridPatch *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = (this->QuadTriangles).ArrayNum;
  pFVar8 = (this->QuadTriangles).AllocatorInstance.Data;
  iVar5 = iVar1 / 2;
  lVar7 = (longlong)iVar5;
  if (0 < iVar5) {
    pFVar6 = pFVar8 + (longlong)(iVar1 + -1) * 0x10;
    do {
      uVar2 = *(undefined8 *)(pFVar6 + 8);
      uVar3 = *(undefined8 *)pFVar8;
      uVar4 = *(undefined8 *)(pFVar8 + 8);
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar6;
      *(undefined8 *)(pFVar8 + 8) = uVar2;
      pFVar8 = pFVar8 + 0x10;
      *(undefined8 *)pFVar6 = uVar3;
      *(undefined8 *)(pFVar6 + 8) = uVar4;
      lVar7 = lVar7 + -1;
      pFVar6 = pFVar6 + -0x10;
    } while (lVar7 != 0);
  }
  iVar1 = (this->VertexSpans).ArrayNum;
  pFVar8 = (this->VertexSpans).AllocatorInstance.Data;
  iVar5 = iVar1 / 2;
  lVar7 = (longlong)iVar5;
  if (0 < iVar5) {
    pFVar6 = pFVar8 + (longlong)(iVar1 + -1) * 0x10;
    do {
      uVar2 = *(undefined8 *)(pFVar6 + 8);
      uVar3 = *(undefined8 *)pFVar8;
      uVar4 = *(undefined8 *)(pFVar8 + 8);
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar6;
      *(undefined8 *)(pFVar8 + 8) = uVar2;
      pFVar8 = pFVar8 + 0x10;
      *(undefined8 *)pFVar6 = uVar3;
      *(undefined8 *)(pFVar6 + 8) = uVar4;
      lVar7 = lVar7 + -1;
      pFVar6 = pFVar6 + -0x10;
    } while (lVar7 != 0);
  }
  return;
}

// SplitColumnsByPredicate @ 14c91b830

void __thiscall
UE::Geometry::FQuadGridPatch::SplitColumnsByPredicate
          (FQuadGridPatch *this,TFunctionRef<bool___cdecl(int,int)> *param_1,
          TArray<UE::Geometry::FQuadGridPatch,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FQuadGridPatch *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_res8 [2];
  int local_res18 [4];
  FQuadGridPatch local_88;
  FQuadGridPatch local_60;
  
  iVar7 = 0;
  iVar10 = this->NumVertexColsU + -2;
  iVar8 = 0;
  iVar6 = 0;
  iVar9 = 0;
  if (0 < iVar10) {
    do {
      iVar8 = iVar6 + 1;
      local_res8[0] = iVar8;
      local_res18[0] = iVar6;
      cVar4 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res18,local_res8);
      iVar7 = iVar9;
      if (cVar4 != '\0') {
        local_88.NumVertexColsU = 0;
        local_88.NumVertexRowsV = 0;
        local_88.VertexSpans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.VertexSpans.ArrayNum = 0;
        local_88.VertexSpans.ArrayMax = 0;
        local_88.QuadTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.QuadTriangles.ArrayNum = 0;
        local_88.QuadTriangles.ArrayMax = 0;
        GetSubPatchByQuadRange(this,0,this->NumVertexRowsV + -2,iVar9,iVar6,&local_88);
        pFVar2 = (FQuadGridPatch *)(param_2->AllocatorInstance).Data;
        if (((pFVar2 <= &local_88) && (&local_88 < pFVar2 + param_2->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28;
        *(int *)pFVar1 = local_88.NumVertexColsU;
        *(int *)(pFVar1 + 4) = local_88.NumVertexRowsV;
        *(undefined8 *)(pFVar1 + 8) = 0;
        *(FScriptContainerElement **)(pFVar1 + 8) = local_88.VertexSpans.AllocatorInstance.Data;
        local_88.VertexSpans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar1 + 0x10) = local_88.VertexSpans.ArrayNum;
        *(int *)(pFVar1 + 0x14) = local_88.VertexSpans.ArrayMax;
        local_88.VertexSpans.ArrayNum = 0;
        local_88.VertexSpans.ArrayMax = 0;
        *(undefined8 *)(pFVar1 + 0x18) = 0;
        *(FScriptContainerElement **)(pFVar1 + 0x18) = local_88.QuadTriangles.AllocatorInstance.Data
        ;
        local_88.QuadTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar1 + 0x20) = local_88.QuadTriangles.ArrayNum;
        *(int *)(pFVar1 + 0x24) = local_88.QuadTriangles.ArrayMax;
        local_88.QuadTriangles.ArrayNum = 0;
        local_88.QuadTriangles.ArrayMax = 0;
        DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)0x0,0);
        if (local_88.QuadTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.QuadTriangles.AllocatorInstance.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   local_88.VertexSpans.AllocatorInstance.Data,local_88.VertexSpans.ArrayNum);
        iVar7 = iVar8;
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.VertexSpans.AllocatorInstance.Data
            != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_88.VertexSpans.AllocatorInstance.Data);
        }
      }
      iVar6 = iVar8;
      iVar9 = iVar7;
    } while (iVar8 < iVar10);
  }
  local_60.NumVertexColsU = 0;
  local_60.NumVertexRowsV = 0;
  local_60.VertexSpans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.VertexSpans.ArrayNum = 0;
  local_60.VertexSpans.ArrayMax = 0;
  local_60.QuadTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.QuadTriangles.ArrayNum = 0;
  local_60.QuadTriangles.ArrayMax = 0;
  GetSubPatchByQuadRange(this,0,this->NumVertexRowsV + -2,iVar7,iVar8,&local_60);
  pFVar2 = (FQuadGridPatch *)(param_2->AllocatorInstance).Data;
  if (((pFVar2 <= &local_60) && (&local_60 < pFVar2 + param_2->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28;
  *(int *)pFVar1 = local_60.NumVertexColsU;
  *(int *)(pFVar1 + 4) = local_60.NumVertexRowsV;
  *(undefined8 *)(pFVar1 + 8) = 0;
  *(FScriptContainerElement **)(pFVar1 + 8) = local_60.VertexSpans.AllocatorInstance.Data;
  local_60.VertexSpans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar1 + 0x10) = local_60.VertexSpans.ArrayNum;
  *(int *)(pFVar1 + 0x14) = local_60.VertexSpans.ArrayMax;
  local_60.VertexSpans.ArrayNum = 0;
  local_60.VertexSpans.ArrayMax = 0;
  *(undefined8 *)(pFVar1 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar1 + 0x18) = local_60.QuadTriangles.AllocatorInstance.Data;
  local_60.QuadTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar1 + 0x20) = local_60.QuadTriangles.ArrayNum;
  *(int *)(pFVar1 + 0x24) = local_60.QuadTriangles.ArrayMax;
  local_60.QuadTriangles.ArrayNum = 0;
  local_60.QuadTriangles.ArrayMax = 0;
  DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)0x0,0);
  if (local_60.QuadTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.QuadTriangles.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_60.VertexSpans.AllocatorInstance.Data,
             local_60.VertexSpans.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_60.VertexSpans.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_60.VertexSpans.AllocatorInstance.Data);
  }
  return;
}

