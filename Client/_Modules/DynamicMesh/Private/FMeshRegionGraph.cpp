// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 15

// GetRegionTriCount @ 14c811740

int __thiscall UE::Geometry::FMeshRegionGraph::GetRegionTriCount(FMeshRegionGraph *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = IsRegion(this,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = 0;
  if (param_1 < (this->Regions).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->Regions).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x10);
}

// IsRegion @ 14c818a40

int __thiscall UE::Geometry::FMeshRegionGraph::IsRegion(FMeshRegionGraph *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < (this->Regions).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    if ((this->Regions).AllocatorInstance.Data[(longlong)param_1 * 0x30] !=
        (FScriptContainerElement)0x0) {
      return 1;
    }
  }
  return 0;
}

// operator() @ 14c8a4470

bool __thiscall
`UE::Geometry::FMeshRegionGraph::MergeSmallRegionsPass'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  plVar3 = *(longlong **)this;
  iVar1 = *(int *)(*plVar2 + 0x10 + (longlong)param_1 * 0x30);
  uVar7 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return iVar1 < *(int *)(*plVar3 + 0x10 + (longlong)param_2 * 0x30);
}

// operator() @ 14c8a46e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`UE::Geometry::FMeshRegionGraph::OptimizeBorders'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  uint local_68;
  TArray<int,TFixedAllocator<3>_> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lVar11 = *(longlong *)this;
  lVar10 = (longlong)param_1;
  iVar7 = *(int *)(lVar11 + 0x18);
  uVar6 = 0;
  if (param_1 < iVar7) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_88 = lVar10, local_80 = (longlong)iVar7,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  lVar2 = *(longlong *)this;
  local_74 = *(int *)(*(longlong *)(lVar11 + 0x10) + lVar10 * 4);
  iVar7 = *(int *)(lVar2 + 0x28);
  uVar6 = 0;
  if (param_1 < iVar7) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_88 = lVar10, local_80 = (longlong)iVar7,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  lVar11 = *(longlong *)(lVar2 + 0x20);
  uVar8 = 0;
  local_70 = *(longlong *)(lVar11 + lVar10 * 0xc);
  uVar6 = *(uint *)(lVar11 + 8 + lVar10 * 0xc);
  uVar12 = (uint)local_70;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 3;
  uVar9 = 0;
  local_68 = uVar6;
  if (-1 < (int)(uint)local_70) {
    lVar11 = *(longlong *)this;
    iVar7 = *(int *)(lVar11 + 0x18);
    uVar9 = 0;
    if ((int)(uint)local_70 < iVar7) {
      uVar9 = ~(uint)local_70 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (local_88 = (longlong)(int)(uint)local_70, local_80 = (longlong)iVar7,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    local_78 = *(int *)(*(longlong *)(lVar11 + 0x10) + (longlong)(int)uVar12 * 4);
    lVar11 = (longlong)local_78;
    uVar9 = uVar8;
    if (-1 < local_78) {
      plVar3 = *(longlong **)this;
      iVar7 = (int)plVar3[1];
      if (local_78 < iVar7) {
        if ((local_78 < 0) &&
           (local_88 = lVar11, local_80 = (longlong)iVar7,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if ((*(char *)(*plVar3 + lVar11 * 0x30) != '\0') && (local_78 != local_74)) {
          uVar9 = 1;
          TArray<int,TFixedAllocator<3>_>::AddUniqueImpl<int_const_&>(&local_60,&local_78);
        }
      }
    }
  }
  uVar12 = local_70._4_4_;
  iVar7 = local_74;
  if (-1 < local_70) {
    lVar11 = *(longlong *)this;
    iVar7 = *(int *)(lVar11 + 0x18);
    uVar8 = 0;
    if ((int)local_70._4_4_ < iVar7) {
      uVar8 = ~local_70._4_4_ >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_88 = (longlong)(int)local_70._4_4_, local_80 = (longlong)iVar7,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    local_78 = *(int *)(*(longlong *)(lVar11 + 0x10) + (longlong)(int)uVar12 * 4);
    lVar11 = (longlong)local_78;
    iVar7 = local_74;
    if (-1 < local_78) {
      plVar3 = *(longlong **)this;
      iVar1 = (int)plVar3[1];
      if (local_78 < iVar1) {
        if ((local_78 < 0) &&
           (local_88 = lVar11, local_80 = (longlong)iVar1,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        iVar7 = local_74;
        if ((*(char *)(*plVar3 + lVar11 * 0x30) != '\0') && (local_78 != local_74)) {
          uVar9 = uVar9 + 1;
          TArray<int,TFixedAllocator<3>_>::AddUniqueImpl<int_const_&>(&local_60,&local_78);
        }
      }
    }
  }
  if (-1 < (int)uVar6) {
    lVar11 = *(longlong *)this;
    iVar1 = *(int *)(lVar11 + 0x18);
    uVar12 = 0;
    if ((int)uVar6 < iVar1) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_88 = (longlong)(int)uVar6;
      local_80 = (longlong)iVar1;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    local_78 = *(int *)(*(longlong *)(lVar11 + 0x10) + (longlong)(int)uVar6 * 4);
    lVar11 = (longlong)local_78;
    if (-1 < local_78) {
      plVar3 = *(longlong **)this;
      iVar1 = (int)plVar3[1];
      if (local_78 < iVar1) {
        if ((local_78 < 0) &&
           (local_88 = lVar11, local_80 = (longlong)iVar1,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if ((*(char *)(*plVar3 + lVar11 * 0x30) != '\0') && (local_78 != iVar7)) {
          uVar9 = uVar9 + 1;
          TArray<int,TFixedAllocator<3>_>::AddUniqueImpl<int_const_&>(&local_60,&local_78);
        }
      }
    }
  }
  if ((uVar9 < 2) || (local_60.ArrayNum != 1)) {
    local_60.AllocatorInstance.InlineData[0].Pad[0] = 0xff;
    local_60.AllocatorInstance.InlineData[0].Pad[1] = 0xff;
    local_60.AllocatorInstance.InlineData[0].Pad[2] = 0xff;
    local_60.AllocatorInstance.InlineData[0].Pad[3] = 0xff;
  }
  iVar7._0_1_ = local_60.AllocatorInstance.InlineData[0].Pad[0];
  iVar7._1_1_ = local_60.AllocatorInstance.InlineData[0].Pad[1];
  iVar7._2_1_ = local_60.AllocatorInstance.InlineData[0].Pad[2];
  iVar7._3_1_ = local_60.AllocatorInstance.InlineData[0].Pad[3];
  return iVar7;
}

// AreRegionsConnected @ 14c8bb340

bool __thiscall
UE::Geometry::FMeshRegionGraph::AreRegionsConnected(FMeshRegionGraph *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined1 local_res20 [8];
  
  iVar6 = IsRegion(this,param_1);
  if ((iVar6 != 0) && (iVar6 = IsRegion(this,param_2), iVar6 != 0)) {
    uVar7 = 0;
    if (param_1 < (this->Regions).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->Regions).AllocatorInstance.Data;
    piVar8 = *(int **)(pFVar2 + (longlong)param_1 * 0x30 + 0x18);
    iVar6 = *(int *)(pFVar2 + (longlong)param_1 * 0x30 + 0x20);
    piVar1 = piVar8 + (longlong)iVar6 * 2;
    while( true ) {
      if (*(int *)(pFVar2 + (longlong)param_1 * 0x30 + 0x20) != iVar6) {
        `TCheckedPointerIterator<UE::Geometry::FMeshRegionGraph::FNeighbour_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (piVar8 == piVar1) break;
      if (*piVar8 == param_2) {
        return true;
      }
      piVar8 = piVar8 + 2;
    }
  }
  return false;
}

// BuildFromComponents @ 14c8c1910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshRegionGraph::BuildFromComponents
          (FMeshRegionGraph *this,FDynamicMesh3 *param_1,FMeshConnectedComponents *param_2,
          TFunctionRef<int___cdecl(int)> *param_3,TFunctionRef<bool___cdecl(int,int)> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  uint *puVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_d8 [8];
  int local_d0 [2];
  uint local_c8 [2];
  longlong local_c0;
  FIndex3i_u_0 local_b8;
  int local_a8 [2];
  uint local_a0 [2];
  uint local_98;
  int local_94;
  longlong local_90;
  undefined8 local_88;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_80;
  FIndex3i_u_0 local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  undefined8 *local_60;
  uint *local_58;
  longlong local_50;
  
  iVar14 = (param_2->Components).Array.ArrayNum;
  local_94 = iVar14;
  TArray<UE::Geometry::FMeshRegionGraph::FRegion,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Regions,iVar14,Default);
  local_68 = &this->TriangleToRegionMap;
  local_a8[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (local_68,local_a8,
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  local_80 = &this->TriangleNbrTris;
  local_78._0_8_ = 0xffffffffffffffff;
  local_78._s_0.C = -1;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::Init
            (local_80,(FIndex3i *)&local_78._s_0,
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  uVar20 = 0;
  uVar19 = 0;
  local_50 = (longlong)iVar14;
  if (0 < iVar14) {
    local_c0 = 0;
    local_90 = 0;
    uVar18 = uVar20;
    do {
      lVar5 = local_90;
      lVar16 = local_c0;
      uVar13 = ~uVar18 >> 0x1f;
      uVar10 = uVar19;
      if ((int)uVar18 < (param_2->Components).Array.ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FScriptContainerElement **)
                ((param_2->Components).Array.AllocatorInstance.Data + lVar16 * 8);
      uVar10 = uVar19;
      if ((int)uVar18 < (this->Regions).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (this->Regions).AllocatorInstance.Data + lVar5 + 8;
      if (pFVar15 != pFVar2) {
        iVar14 = *(int *)&pFVar2[8].field_0x0;
        pFVar4 = pFVar15 + 0xc;
        _Src = *(void **)&pFVar2->field_0x0;
        iVar1 = *(int *)pFVar4;
        *(int *)&pFVar15[8].field_0x0 = iVar14;
        if ((iVar14 == 0) && (iVar1 == 0)) {
          *(int *)pFVar4 = 0;
          lVar16 = local_c0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar14,iVar1,(ForAnyElementType *)pFVar15,iVar14,(int *)pFVar4);
          lVar16 = local_c0;
          if (iVar14 != 0) {
            memcpy(*(void **)&pFVar15->field_0x0,_Src,(longlong)iVar14 << 2);
            lVar16 = local_c0;
          }
        }
      }
      local_a0[0] = uVar18;
      uVar11 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_a0);
      uVar10 = uVar19;
      if ((int)uVar18 < (this->Regions).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)((this->Regions).AllocatorInstance.Data + local_90 + 4) = uVar11;
      uVar10 = uVar19;
      if ((int)uVar18 < (param_2->Components).Array.ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_60 = *(undefined8 **)((param_2->Components).Array.AllocatorInstance.Data + lVar16 * 8);
      local_98 = *(uint *)(local_60 + 1);
      uVar12 = (ulonglong)(int)local_98;
      puVar17 = (uint *)*local_60;
      local_58 = puVar17 + uVar12;
      while( true ) {
        puVar7 = local_58;
        if (*(int *)(local_60 + 1) != (int)uVar12) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_d8);
        }
        pTVar6 = local_68;
        if (puVar17 == puVar7) break;
        uVar10 = *puVar17;
        lVar16 = (longlong)(int)uVar10;
        uVar13 = 0;
        if ((int)uVar10 < local_68->ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(uint *)((pTVar6->AllocatorInstance).Data + lVar16 * 4) = uVar18;
        FDynamicMesh3::GetTriNeighbourTris(param_1,(FIndex3i *)&local_b8._s_0,uVar10);
        if (-1 < local_b8._s_0.A) {
          local_d0[0] = local_b8._s_0.A;
          local_c8[0] = uVar10;
          cVar9 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_c8,local_d0);
          if (cVar9 == '\0') {
            local_b8._s_0.A = -1;
          }
        }
        if (-1 < local_b8._s_0.B) {
          local_d0[0] = local_b8._s_0.B;
          local_c8[0] = uVar10;
          cVar9 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_c8,local_d0);
          if (cVar9 == '\0') {
            local_b8._s_0.B = -1;
          }
        }
        if (-1 < local_b8._s_0.C) {
          local_d0[0] = local_b8._s_0.C;
          local_c8[0] = uVar10;
          cVar9 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_c8,local_d0);
          if (cVar9 == '\0') {
            local_b8._s_0.C = -1;
          }
        }
        uVar11 = local_b8._s_0.C;
        local_88 = CONCAT44(local_b8._s_0.B,local_b8._s_0.A);
        uVar13 = 0;
        if ((int)uVar10 < local_80->ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = (ulonglong)local_98;
        puVar17 = puVar17 + 1;
        pFVar2 = (local_80->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar16 * 0xc) = local_88;
        *(undefined4 *)(pFVar2 + lVar16 * 0xc + 8) = uVar11;
      }
      uVar18 = uVar18 + 1;
      local_c0 = local_c0 + 1;
      local_90 = local_90 + 0x30;
      iVar14 = local_94;
    } while (local_c0 < local_50);
  }
  if (0 < iVar14) {
    do {
      BuildNeigbours(this,uVar20);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar14);
  }
  return;
}

// BuildFromTriangleSets @ 14c8c1dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshRegionGraph::BuildFromTriangleSets
          (FMeshRegionGraph *this,FDynamicMesh3 *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<int___cdecl(int)> *param_3,TFunctionRef<bool___cdecl(int,int)> *param_4)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  uint *puVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint *puVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_e8 [8];
  int local_e0 [2];
  uint local_d8 [2];
  longlong local_d0;
  FIndex3i_u_0 local_c8;
  int local_b8 [2];
  uint local_b0 [2];
  uint local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_88;
  FIndex3i_u_0 local_80;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  FScriptContainerElement *local_68;
  uint *local_60;
  longlong local_58;
  
  iVar13 = param_2->ArrayNum;
  local_a4 = iVar13;
  TArray<UE::Geometry::FMeshRegionGraph::FRegion,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Regions,iVar13,Default);
  local_70 = &this->TriangleToRegionMap;
  local_b8[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (local_70,local_b8,
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  local_88 = &this->TriangleNbrTris;
  local_80._0_8_ = 0xffffffffffffffff;
  local_80._s_0.C = -1;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::Init
            (local_88,(FIndex3i *)&local_80._s_0,
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  uVar20 = 0;
  uVar19 = 0;
  local_58 = (longlong)iVar13;
  if (0 < iVar13) {
    local_d0 = 0;
    local_98 = 0;
    local_a0 = 0;
    uVar17 = uVar20;
    do {
      lVar4 = local_98;
      lVar15 = local_a0;
      uVar12 = ~uVar17 >> 0x1f;
      uVar9 = uVar19;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (param_2->AllocatorInstance).Data + lVar4;
      uVar9 = uVar19;
      if ((int)uVar17 < (this->Regions).ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = (this->Regions).AllocatorInstance.Data + lVar15 + 8;
      if (pFVar14 != pFVar18) {
        iVar13 = *(int *)&pFVar18[8].field_0x0;
        pFVar3 = pFVar14 + 0xc;
        _Src = *(void **)&pFVar18->field_0x0;
        iVar1 = *(int *)pFVar3;
        *(int *)&pFVar14[8].field_0x0 = iVar13;
        if ((iVar13 == 0) && (iVar1 == 0)) {
          *(int *)pFVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar13,iVar1,(ForAnyElementType *)pFVar14,iVar13,(int *)pFVar3);
          if (iVar13 != 0) {
            memcpy(*(void **)&pFVar14->field_0x0,_Src,(longlong)iVar13 << 2);
          }
        }
      }
      local_b0[0] = uVar17;
      uVar10 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_b0);
      uVar9 = uVar19;
      if ((int)uVar17 < (this->Regions).ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)((this->Regions).AllocatorInstance.Data + local_a0 + 4) = uVar10;
      uVar9 = uVar19;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_68 = (param_2->AllocatorInstance).Data + local_98;
      local_a8 = *(uint *)(local_68 + 8);
      uVar11 = (ulonglong)(int)local_a8;
      puVar16 = *(uint **)local_68;
      local_60 = puVar16 + uVar11;
      while( true ) {
        puVar6 = local_60;
        if (*(int *)(local_68 + 8) != (int)uVar11) {
          local_e8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_e8);
        }
        pTVar5 = local_70;
        if (puVar16 == puVar6) break;
        uVar9 = *puVar16;
        lVar15 = (longlong)(int)uVar9;
        uVar12 = 0;
        if ((int)uVar9 < local_70->ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((pTVar5->AllocatorInstance).Data + lVar15 * 4) = uVar17;
        FDynamicMesh3::GetTriNeighbourTris(param_1,(FIndex3i *)&local_c8._s_0,uVar9);
        if (-1 < local_c8._s_0.A) {
          local_e0[0] = local_c8._s_0.A;
          local_d8[0] = uVar9;
          cVar8 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_d8,local_e0);
          if (cVar8 == '\0') {
            local_c8._s_0.A = -1;
          }
        }
        if (-1 < local_c8._s_0.B) {
          local_e0[0] = local_c8._s_0.B;
          local_d8[0] = uVar9;
          cVar8 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_d8,local_e0);
          if (cVar8 == '\0') {
            local_c8._s_0.B = -1;
          }
        }
        if (-1 < local_c8._s_0.C) {
          local_e0[0] = local_c8._s_0.C;
          local_d8[0] = uVar9;
          cVar8 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_d8,local_e0);
          if (cVar8 == '\0') {
            local_c8._s_0.C = -1;
          }
        }
        uVar10 = local_c8._s_0.C;
        local_90 = CONCAT44(local_c8._s_0.B,local_c8._s_0.A);
        uVar12 = 0;
        if ((int)uVar9 < local_88->ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = (ulonglong)local_a8;
        puVar16 = puVar16 + 1;
        pFVar18 = (local_88->AllocatorInstance).Data;
        *(undefined8 *)(pFVar18 + lVar15 * 0xc) = local_90;
        *(undefined4 *)(pFVar18 + lVar15 * 0xc + 8) = uVar10;
      }
      uVar17 = uVar17 + 1;
      local_d0 = local_d0 + 1;
      local_a0 = local_a0 + 0x30;
      local_98 = local_98 + 0x10;
      iVar13 = local_a4;
    } while (local_d0 < local_58);
  }
  if (0 < iVar13) {
    do {
      BuildNeigbours(this,uVar20);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar13);
  }
  return;
}

// BuildNeigbours @ 14c8c22b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FMeshRegionGraph::BuildNeigbours(FMeshRegionGraph *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ForElementType<FSetElementId> FVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [8];
  uint local_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  uint *local_d0;
  TPairInitializer<int_const_&,int_const_&> local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  uint *local_a8;
  int *local_a0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar10 = 0;
  if (param_1 < (this->Regions).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  local_e8 = param_1;
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->Regions).AllocatorInstance.Data;
  iVar8 = *(int *)(pFVar3 + (longlong)param_1 * 0x30 + 0x24);
  pFVar1 = pFVar3 + (longlong)param_1 * 0x30 + 0x24;
  *(undefined4 *)(pFVar3 + (longlong)param_1 * 0x30 + 0x20) = 0;
  if (iVar8 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(pFVar3 + (longlong)param_1 * 0x30 + 0x18),0,(int *)pFVar1
              );
  }
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_d8 = *(uint *)(pFVar3 + (longlong)param_1 * 0x30 + 0x10);
  uVar11 = (ulonglong)(int)local_d8;
  puVar14 = *(uint **)(pFVar3 + (longlong)param_1 * 0x30 + 8);
  local_c8.Value = (int *)(puVar14 + uVar11);
  do {
    piVar2 = local_c8.Value;
    local_d0 = puVar14;
    if (*(int *)(pFVar3 + (longlong)param_1 * 0x30 + 0x10) != (int)uVar11) {
      local_f8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (puVar14 == (uint *)piVar2) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    uVar10 = *puVar14;
    lVar15 = (longlong)(int)uVar10;
    uVar7 = 0;
    if ((int)uVar10 < (this->TriangleToRegionMap).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_e4 = *(uint *)((this->TriangleToRegionMap).AllocatorInstance.Data + lVar15 * 4);
    if ((local_e4 != local_e8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegionIndex == RegionIdx",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshRegionGraph.cpp"
                           ,0x193,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = 0;
    if ((int)uVar10 < (this->TriangleNbrTris).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->TriangleNbrTris).AllocatorInstance.Data;
    puVar14 = (uint *)&local_b8;
    lVar16 = 3;
    local_b8 = *(undefined8 *)(pFVar4 + lVar15 * 0xc);
    local_b0 = *(undefined4 *)(pFVar4 + lVar15 * 0xc + 8);
    do {
      uVar10 = *puVar14;
      if (uVar10 == 0xffffffff) {
        pFVar3[(longlong)param_1 * 0x30 + 0x28] = (FScriptContainerElement)0x1;
      }
      else {
        uVar7 = 0;
        if ((int)uVar10 < (this->TriangleToRegionMap).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_e0 = *(uint *)((this->TriangleToRegionMap).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 4);
        if (local_e0 == 0xffffffff) {
          pFVar3[(longlong)param_1 * 0x30 + 0x29] = (FScriptContainerElement)0x1;
        }
        else if (local_e0 != local_e4) {
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar13 = local_98.Hash.SecondaryData;
            }
            uVar10 = *(uint *)((longlong)FVar13 + (ulonglong)(local_98.HashSize - 1U & local_e0) * 4
                              );
            while (uVar10 != 0xffffffff) {
              puVar9 = (uint *)(local_98.Elements._0_8_ + (longlong)(int)uVar10 * 0x10);
              if (*puVar9 == local_e0) {
                puVar12 = puVar9 + 1;
                if (puVar9 == (uint *)0x0) {
                  puVar12 = (uint *)0x0;
                }
                if (puVar12 != (uint *)0x0) {
                  uVar10 = *puVar12;
                  uVar7 = 0;
                  if ((int)uVar10 < *(int *)(pFVar3 + (longlong)param_1 * 0x30 + 0x20)) {
                    uVar7 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  piVar2 = (int *)(*(longlong *)(pFVar3 + (longlong)param_1 * 0x30 + 0x18) + 4 +
                                  (longlong)(int)uVar10 * 8);
                  *piVar2 = *piVar2 + 1;
                  goto LAB_14c8c2654;
                }
                break;
              }
              uVar10 = puVar9[2];
            }
          }
          uStack_ec = 1;
          local_f0 = local_e0;
          if (((*(uint **)(pFVar3 + (longlong)param_1 * 0x30 + 0x18) <= &local_f0) &&
              (&local_f0 <
               *(uint **)(pFVar3 + (longlong)param_1 * 0x30 + 0x18) + (longlong)*(int *)pFVar1 * 2))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = *(int *)(pFVar3 + (longlong)param_1 * 0x30 + 0x20);
          if (iVar8 == *(int *)pFVar1) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)(pFVar3 + (longlong)param_1 * 0x30 + 0x18)
                               ,(int *)pFVar1);
          }
          lVar15 = *(longlong *)(pFVar3 + (longlong)param_1 * 0x30 + 0x18);
          *(int *)(pFVar3 + (longlong)param_1 * 0x30 + 0x20) = iVar8 + 1;
          *(ulonglong *)(lVar15 + (longlong)iVar8 * 8) = CONCAT44(uStack_ec,local_f0);
          local_a8 = &local_e0;
          local_a0 = &local_dc;
          local_dc = iVar8;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_98,&local_c8,(bool *)&local_a8)
          ;
        }
      }
LAB_14c8c2654:
      puVar14 = puVar14 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar11 = (ulonglong)local_d8;
    puVar14 = local_d0 + 1;
  } while( true );
}

// GetNeighbours @ 14c8f4ec0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshRegionGraph::GetNeighbours
          (FMeshRegionGraph *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar7 = IsRegion(this,param_1);
  if (iVar7 != 0) {
    uVar10 = 0;
    if (param_1 < (this->Regions).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    pFVar3 = (this->Regions).AllocatorInstance.Data;
    pFVar11 = *(FScriptContainerElement **)(pFVar3 + (longlong)param_1 * 0x30 + 0x18);
    iVar7 = *(int *)(pFVar3 + (longlong)param_1 * 0x30 + 0x20);
    pFVar1 = pFVar11 + (longlong)iVar7 * 8;
    while( true ) {
      if (*(int *)(pFVar3 + (longlong)param_1 * 0x30 + 0x20) != iVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FMeshRegionGraph::FNeighbour_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar1) break;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar11) &&
          (pFVar11 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      uVar2 = *(undefined4 *)pFVar11;
      pFVar11 = pFVar11 + 8;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
           uVar2;
    }
  }
  return __return_storage_ptr__;
}

// GetRegionTris @ 14c8f5ea0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshRegionGraph::GetRegionTris(FMeshRegionGraph *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  
  iVar3 = IsRegion(this,param_1);
  if (iVar3 == 0) {
    return &this->EmptyTriSet;
  }
  uVar4 = 0;
  if (param_1 < (this->Regions).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((this->Regions).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 8);
}

// MergeRegion @ 14c909120

bool __thiscall
UE::Geometry::FMeshRegionGraph::MergeRegion(FMeshRegionGraph *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined1 local_res20 [8];
  
  iVar6 = IsRegion(this,param_1);
  if ((iVar6 != 0) && (iVar6 = IsRegion(this,param_2), iVar6 != 0)) {
    uVar7 = 0;
    if (param_1 < (this->Regions).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->Regions).AllocatorInstance.Data;
    piVar8 = *(int **)(pFVar2 + (longlong)param_1 * 0x30 + 0x18);
    iVar6 = *(int *)(pFVar2 + (longlong)param_1 * 0x30 + 0x20);
    piVar1 = piVar8 + (longlong)iVar6 * 2;
    while( true ) {
      if (*(int *)(pFVar2 + (longlong)param_1 * 0x30 + 0x20) != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FMeshRegionGraph::FNeighbour_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (piVar8 == piVar1) break;
      if (*piVar8 == param_2) {
        bVar4 = MergeRegionUnsafe(this,param_1,param_2);
        return bVar4;
      }
      piVar8 = piVar8 + 2;
    }
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7938545592597217084>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshRegionGraph.cpp"
                     ,0xc4,"false");
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// MergeRegionUnsafe @ 14c909250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshRegionGraph::MergeRegionUnsafe(FMeshRegionGraph *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  void *_Dst;
  int *piVar2;
  code *pcVar3;
  FMeshRegionGraph *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  undefined1 auStackY_168 [32];
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116 [2];
  uint local_114;
  uint local_110;
  FScriptContainerElement *local_108;
  int local_100;
  uint *local_f8;
  FScriptContainerElement *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  uint *local_e0;
  FScriptContainerElement *local_d8;
  undefined4 local_d0;
  uint local_cc;
  FMeshRegionGraph *local_c8;
  uint *local_c0;
  TPairInitializer<int_const_&,int_&&> local_b8;
  undefined4 *local_a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  lVar19 = (longlong)param_2;
  uVar23 = 0;
  if (param_1 < (this->Regions).ArrayNum) {
    uVar23 = (uint)~param_1 >> 0x1f;
  }
  local_110 = param_2;
  local_100 = param_1;
  local_c8 = this;
  if ((uVar23 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar25 = (this->Regions).AllocatorInstance.Data + (longlong)param_1 * 0x30;
  uVar23 = 0;
  if (param_2 < (this->Regions).ArrayNum) {
    uVar23 = (uint)~param_2 >> 0x1f;
  }
  local_f0 = pFVar25;
  if ((uVar23 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar22 = (this->Regions).AllocatorInstance.Data;
  local_108 = pFVar22 + lVar19 * 0x30;
  uVar23 = *(int *)(pFVar25 + 0x10) + *(int *)(pFVar22 + lVar19 * 0x30 + 0x10);
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  pFVar1 = pFVar22 + lVar19 * 0x30 + 0x14;
  if (*(int *)pFVar1 < (int)uVar23) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar23,(ForAnyElementType *)(pFVar22 + lVar19 * 0x30 + 8),
               *(int *)(pFVar22 + lVar19 * 0x30 + 0x10),(int *)pFVar1);
  }
  puVar12 = *(uint **)(pFVar25 + 8);
  iVar9 = *(int *)(pFVar25 + 0x10);
  local_f8 = puVar12 + iVar9;
  while( true ) {
    if (*(int *)(pFVar25 + 0x10) != iVar9) {
      local_118 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_118);
    }
    if (puVar12 == local_f8) break;
    local_114 = *puVar12;
    if (((*(uint **)(pFVar22 + lVar19 * 0x30 + 8) <= &local_114) &&
        (&local_114 < *(uint **)(pFVar22 + lVar19 * 0x30 + 8) + *(int *)pFVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar7 = *(int *)(pFVar22 + lVar19 * 0x30 + 0x10);
    if (iVar7 == *(int *)pFVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)(pFVar22 + lVar19 * 0x30 + 8),(int *)pFVar1);
    }
    *(int *)(pFVar22 + lVar19 * 0x30 + 0x10) = iVar7 + 1;
    *(uint *)(*(longlong *)(pFVar22 + lVar19 * 0x30 + 8) + (longlong)iVar7 * 4) = local_114;
    lVar20 = (longlong)(int)local_114;
    uVar23 = 0;
    if ((int)local_114 < (local_c8->TriangleToRegionMap).ArrayNum) {
      uVar23 = ~local_114 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    puVar12 = puVar12 + 1;
    *(uint *)((local_c8->TriangleToRegionMap).AllocatorInstance.Data + lVar20 * 4) = local_110;
  }
  *(undefined4 *)(pFVar25 + 0x10) = 0;
  if (*(int *)(pFVar25 + 0x14) < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(pFVar25 + 8),0,(int *)(pFVar25 + 0x14));
  }
  uVar11 = 0;
  *pFVar25 = (FScriptContainerElement)0x0;
  if (pFVar25[0x28] != (FScriptContainerElement)0x0) {
    local_108[0x28] = (FScriptContainerElement)0x1;
  }
  if (pFVar25[0x29] != (FScriptContainerElement)0x0) {
    local_108[0x29] = (FScriptContainerElement)0x1;
  }
  iVar9 = *(int *)(local_108 + 0x20);
  local_d8 = local_108 + 0x18;
  if (iVar9 != 0) {
    piVar2 = *(int **)&local_d8->field_0x0;
    bVar5 = *piVar2 != local_100;
    uVar21 = uVar11;
    uVar26 = uVar11;
    iVar7 = local_100;
    do {
      uVar14 = (uint)uVar21;
      uVar23 = uVar14;
      do {
        uVar11 = uVar11 + 1;
        uVar23 = uVar23 + 1;
        uVar21 = (ulonglong)uVar23;
        if ((longlong)iVar9 <= (longlong)uVar11) break;
      } while (bVar5 == (piVar2[uVar11 * 2] != iVar7));
      if (bVar5 != false) {
        uVar24 = (uint)uVar26;
        if (uVar24 != uVar14) {
          memmove(piVar2 + (longlong)(int)uVar24 * 2,piVar2 + (longlong)(int)uVar14 * 2,
                  (longlong)(int)(uVar23 - uVar14) << 3);
          iVar7 = local_100;
        }
        uVar26 = (ulonglong)(uVar24 + (uVar23 - uVar14));
      }
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar11 < (longlong)iVar9);
    *(int *)&local_d8[8].field_0x0 = (int)uVar26;
    pFVar25 = local_f0;
  }
  pFVar22 = local_108;
  uVar23 = local_110;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  puVar16 = *(uint **)(pFVar25 + 0x18);
  iVar9 = *(int *)(pFVar25 + 0x20);
  puVar12 = puVar16 + (longlong)iVar9 * 2;
  while( true ) {
    if (*(int *)(pFVar25 + 0x20) != iVar9) {
      local_117 = 0;
      `TCheckedPointerIterator<UE::Geometry::FMeshRegionGraph::FNeighbour,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_117);
    }
    if (puVar16 == puVar12) break;
    if (*puVar16 != uVar23) {
      local_a8 = &local_d0;
      local_d0 = 0xffffffff;
      local_b8.Value = (int *)puVar16;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_&&>_>(&local_98,&local_b8,(bool *)&local_b8.Value);
    }
    puVar16 = puVar16 + 2;
  }
  puVar17 = (uint *)0x0;
  puVar12 = puVar17;
  puVar16 = puVar17;
  if (0 < *(int *)(pFVar22 + 0x20)) {
    do {
      uVar14 = (uint)puVar12;
      uVar23 = 0;
      if ((int)uVar14 < *(int *)(pFVar22 + 0x20)) {
        uVar23 = ~uVar14 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar13 = local_98.Hash.SecondaryData;
        }
        uVar23 = *(uint *)((longlong)FVar13 +
                          (ulonglong)
                          (local_98.HashSize - 1U &
                          *(uint *)((longlong)puVar16 + *(longlong *)(pFVar22 + 0x18))) * 4);
        while (uVar23 != 0xffffffff) {
          puVar12 = (uint *)((longlong)(int)uVar23 * 0x10 + local_98.Elements._0_8_);
          if (*puVar12 == *(uint *)((longlong)puVar16 + *(longlong *)(pFVar22 + 0x18))) {
            puVar10 = puVar12 + 1;
            if (puVar12 == (uint *)0x0) {
              puVar10 = puVar17;
            }
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar14;
            }
            break;
          }
          uVar23 = puVar12[2];
        }
      }
      puVar12 = (uint *)(ulonglong)(uVar14 + 1);
      puVar16 = puVar16 + 2;
    } while ((int)(uVar14 + 1) < *(int *)(pFVar22 + 0x20));
  }
  local_cc = *(uint *)(pFVar25 + 0x20);
  uVar11 = (ulonglong)(int)local_cc;
  puVar12 = *(uint **)(pFVar25 + 0x18);
  pFVar22 = (FScriptContainerElement *)(puVar12 + uVar11 * 2);
  local_108 = pFVar22;
  do {
    local_e0 = puVar12;
    if (*(int *)(pFVar25 + 0x20) != (int)uVar11) {
      local_116[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FMeshRegionGraph::FNeighbour,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_116);
    }
    pFVar4 = local_c8;
    uVar23 = local_110;
    if ((FScriptContainerElement *)puVar12 == pFVar22) {
      *(undefined4 *)(pFVar25 + 0x20) = 0;
      if (*(int *)(pFVar25 + 0x24) != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)(pFVar25 + 0x18),0,(int *)(pFVar25 + 0x24));
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return true;
    }
    uVar14 = *puVar12;
    if (uVar14 != local_110) {
      uVar24 = 0;
      if ((int)uVar14 < (local_c8->Regions).ArrayNum) {
        uVar24 = ~uVar14 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      uVar15 = 0;
      pFVar25 = (pFVar4->Regions).AllocatorInstance.Data;
      puVar12 = (uint *)0x0;
      uVar18 = 0xffffffff;
      local_f8 = (uint *)0xffffffffffffffff;
      local_c0 = (uint *)0xffffffffffffffff;
      iVar9 = *(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20);
      uVar24 = uVar18;
      if (0 < iVar9) {
        do {
          uVar8 = 0;
          if ((int)uVar15 < iVar9) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          uVar8 = uVar15;
          puVar16 = puVar12;
          if (*(int *)(*(longlong *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x18) +
                      (longlong)puVar12 * 8) != local_100) {
            uVar8 = 0;
            if ((int)uVar15 < *(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20)) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            uVar8 = uVar18;
            puVar16 = local_f8;
            if (*(uint *)(*(longlong *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x18) +
                         (longlong)puVar12 * 8) == uVar23) {
              uVar24 = uVar15;
              local_c0 = puVar12;
            }
          }
          local_f8 = puVar16;
          uVar18 = uVar8;
          iVar9 = *(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20);
          uVar15 = uVar15 + 1;
          puVar12 = (uint *)((longlong)puVar12 + 1);
        } while ((int)uVar15 < iVar9);
      }
      puVar12 = local_f8;
      if (uVar18 == 0xffffffff) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7938545592597217001>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshRegionGraph.cpp"
                           ,0x117,"NbrsRemoveIdx != INDEX_NONE");
        pFVar22 = local_108;
        pFVar25 = local_f0;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      else {
        uVar15 = ~uVar18 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar18 < iVar9) {
          uVar23 = uVar15;
        }
        if ((uVar23 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        lVar19 = *(longlong *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x18) +
                 (longlong)puVar12 * 8;
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_98.Hash.SecondaryData;
          }
          uVar23 = *(uint *)((longlong)FVar13 + (ulonglong)(local_98.HashSize - 1U & *local_e0) * 4)
          ;
          while (uVar23 != 0xffffffff) {
            puVar16 = (uint *)((longlong)(int)uVar23 * 0x10 + local_98.Elements._0_8_);
            if (*puVar16 == *local_e0) {
              if (puVar16 == (uint *)0x0) goto LAB_14c9099b1;
              goto LAB_14c9099db;
            }
            uVar23 = puVar16[2];
          }
        }
        puVar16 = (uint *)0x0;
LAB_14c9099b1:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
LAB_14c9099db:
        pFVar22 = local_d8;
        uVar23 = puVar16[1];
        if (uVar23 == 0xffffffff) {
          local_e8 = *local_e0;
          uStack_e4 = *(undefined4 *)(lVar19 + 4);
          if (((*(uint **)&local_d8->field_0x0 <= &local_e8) &&
              (&local_e8 < *(uint **)&local_d8->field_0x0 + (longlong)*(int *)(local_d8 + 0xc) * 2))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar9 = *(int *)&pFVar22[8].field_0x0;
          if (iVar9 == *(int *)(pFVar22 + 0xc)) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
          }
          *(int *)&pFVar22[8].field_0x0 = iVar9 + 1;
          *(ulonglong *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar9 * 8) =
               CONCAT44(uStack_e4,local_e8);
        }
        else {
          iVar9 = *(int *)(lVar19 + 4);
          uVar8 = 0;
          if ((int)uVar23 < *(int *)&local_d8[8].field_0x0) {
            uVar8 = ~uVar23 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          piVar2 = (int *)(*(longlong *)&local_d8->field_0x0 + (longlong)(int)uVar23 * 8 + 4);
          *piVar2 = *piVar2 + iVar9;
          puVar12 = local_f8;
        }
        if (uVar24 == 0xffffffff) {
          uVar23 = 0;
          if ((int)uVar18 < *(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20)) {
            uVar23 = uVar15;
          }
          if ((uVar23 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          *(uint *)(*(longlong *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x18) +
                   (longlong)puVar12 * 8) = local_110;
          pFVar22 = local_108;
          pFVar25 = local_f0;
        }
        else {
          iVar9 = *(int *)(lVar19 + 4);
          uVar23 = 0;
          if ((int)uVar24 < *(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20)) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          piVar2 = (int *)(*(longlong *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x18) + 4 +
                          (longlong)local_c0 * 8);
          *piVar2 = *piVar2 + iVar9;
          uVar23 = 0;
          if ((int)uVar18 < *(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20)) {
            uVar23 = uVar15;
          }
          if ((uVar23 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          _Dst = (void *)(*(longlong *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x18) +
                         (longlong)(int)uVar18 * 8);
          if (*(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20) + ~uVar18 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),
                    (longlong)
                    (int)(*(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20) + ~uVar18) << 3);
          }
          iVar9 = *(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20);
          *(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x20) = iVar9 + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,(ForAnyElementType *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x18),
                     iVar9 + -1,(int *)(pFVar25 + (longlong)(int)uVar14 * 0x30 + 0x24));
          pFVar22 = local_108;
          pFVar25 = local_f0;
        }
      }
    }
    uVar11 = (ulonglong)local_cc;
    puVar12 = local_e0 + 2;
  } while( true );
}

// MergeSmallRegions @ 14c90c1a0

bool __thiscall
UE::Geometry::FMeshRegionGraph::MergeSmallRegions
          (FMeshRegionGraph *this,int param_1,TFunctionRef<float___cdecl(int,int)> *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  TFunctionRef<float___cdecl(int,int)> local_18;
  
  bVar4 = false;
  iVar3 = 1;
  do {
    if (param_1 <= iVar3) {
      local_18._0_8_ = *(undefined8 *)param_2;
      local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
      bVar2 = MergeSmallRegionsPass(this,iVar3,&local_18);
      if (!bVar2) {
        return bVar4;
      }
    }
    iVar1 = iVar3 + 1;
    bVar4 = true;
    iVar3 = param_1;
    if (iVar1 < param_1) {
      iVar3 = iVar1;
    }
  } while( true );
}

// MergeSmallRegionsPass @ 14c90c230

bool __thiscall
UE::Geometry::FMeshRegionGraph::MergeSmallRegionsPass
          (FMeshRegionGraph *this,int param_1,TFunctionRef<float___cdecl(int,int)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint unaff_EDI;
  int *piVar10;
  int iVar11;
  FIdentityFunctor local_res8;
  undefined1 local_res20 [8];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  ForAnyElementType local_98;
  int local_90;
  int iStack_8c;
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined1 local_78 [4];
  FMatch local_74;
  int local_68 [2];
  uint local_60 [2];
  longlong local_58;
  FMeshRegionGraph *local_50 [2];
  
  iVar11 = (this->Regions).ArrayNum;
  uVar7 = unaff_EDI & 0xffffff00;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  iStack_8c = 0;
  local_a4 = 0;
  local_a0 = uVar7;
  if (0 < iVar11) {
    do {
      uVar6 = local_a4;
      if ((-1 < (int)local_a4) && ((int)local_a4 < iVar11)) {
        if (((int)local_a4 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((this->Regions).AllocatorInstance.Data[(longlong)(int)uVar6 * 0x30] !=
            (FScriptContainerElement)0x0) {
          lVar9 = (longlong)(int)local_a4;
          uVar6 = 0;
          if ((int)local_a4 < (this->Regions).ArrayNum) {
            uVar6 = ~local_a4 >> 0x1f;
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
          if (*(int *)((this->Regions).AllocatorInstance.Data + lVar9 * 0x30 + 0x10) <= param_1) {
            if (((local_98.Data <= (FScriptContainerElement *)&local_a4) &&
                ((FScriptContainerElement *)&local_a4 < local_98.Data + (longlong)iStack_8c * 4)) &&
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
            if (local_90 == iStack_8c) {
              local_90 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_98,&iStack_8c);
            }
            lVar9 = (longlong)local_90;
            local_90 = local_90 + 1;
            *(uint *)(local_98.Data + lVar9 * 4) = local_a4;
          }
        }
      }
      iVar11 = (this->Regions).ArrayNum;
      local_a4 = local_a4 + 1;
    } while ((int)local_a4 < iVar11);
  }
  if (local_90 == 0) {
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    return false;
  }
  local_res8 = SUB81(this,0);
  local_50[0] = this;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Geometry::FMeshRegionGraph::MergeSmallRegionsPass_::__l2::<lambda_1>_>_>
            ((int *)local_98.Data,local_90,local_res8,(<lambda_1> *)local_50);
  local_a8 = 0;
  if (0 < local_90) {
    local_58 = 0;
    do {
      lVar9 = local_58;
      uVar6 = 0;
      if ((int)local_a8 < local_90) {
        uVar6 = ~local_a8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar6 = *(uint *)(local_98.Data + lVar9);
      lVar9 = (longlong)(int)uVar6;
      if ((-1 < (int)uVar6) && ((int)uVar6 < (this->Regions).ArrayNum)) {
        if (((int)uVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar7 = local_a0;
        if ((this->Regions).AllocatorInstance.Data[lVar9 * 0x30] != (FScriptContainerElement)0x0) {
          uVar7 = 0;
          if ((int)uVar6 < (this->Regions).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          pFVar2 = (this->Regions).AllocatorInstance.Data;
          uVar7 = local_a0;
          if (*(int *)(pFVar2 + lVar9 * 0x30 + 0x10) <= param_1) {
            local_88.Data = (FScriptContainerElement *)0x0;
            local_80 = 0;
            piVar10 = *(int **)(pFVar2 + lVar9 * 0x30 + 0x18);
            iVar11 = *(int *)(pFVar2 + lVar9 * 0x30 + 0x20);
            piVar1 = piVar10 + (longlong)iVar11 * 2;
            while( true ) {
              if (*(int *)(pFVar2 + lVar9 * 0x30 + 0x20) != iVar11) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<UE::Geometry::FMeshRegionGraph::FNeighbour_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res20);
              }
              if (piVar10 == piVar1) break;
              local_68[0] = *piVar10;
              local_60[0] = uVar6;
              local_74.Score =
                   (float)(**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_60,local_68)
              ;
              local_74.Index = *piVar10;
              if (((local_88.Data <= &local_74) &&
                  (&local_74 < (FMatch *)(local_88.Data + (longlong)local_80._4_4_ * 8))) &&
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
              iVar8 = (int)local_80;
              if ((int)local_80 == local_80._4_4_) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_88,(int *)((longlong)&local_80 + 4));
              }
              piVar10 = piVar10 + 2;
              local_80 = CONCAT44(local_80._4_4_,iVar8 + 1);
              *(ulonglong *)(local_88.Data + (longlong)iVar8 * 8) =
                   CONCAT44(local_74.Index,local_74.Score);
            }
            if ((int)local_80 == 0) {
              uVar7 = local_a0;
              if ((FMatch *)local_88.Data != (FMatch *)0x0) {
                FMemory::Free(local_88.Data);
                uVar7 = local_a0;
              }
            }
            else {
              AlgoImpl::
              IntroSortInternal<_UE::Geometry::FMeshRegionGraph::MergeSmallRegionsPass_::__l2::FMatch,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::FMeshRegionGraph::MergeSmallRegionsPass_::__l2::FMatch,_UE::Geometry::FMeshRegionGraph::MergeSmallRegionsPass_::__l12::<lambda_2>_>_>
                        ((FMatch *)local_88.Data,(int)local_80,local_res8,(<lambda_2> *)local_78);
              if (((int)local_80 < 1) &&
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
              bVar4 = MergeRegion(this,uVar6,*(int *)(local_88.Data + 4));
              uVar7 = local_a0 & 0xff;
              if (bVar4) {
                uVar7 = 1;
              }
              local_a0 = uVar7;
              if ((FMatch *)local_88.Data != (FMatch *)0x0) {
                FMemory::Free(local_88.Data);
              }
            }
          }
        }
      }
      local_a8 = local_a8 + 1;
      local_58 = local_58 + 4;
    } while ((int)local_a8 < local_90);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return (bool)(char)uVar7;
}

// OptimizeBorders @ 14c90cb40

bool __thiscall UE::Geometry::FMeshRegionGraph::OptimizeBorders(FMeshRegionGraph *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res20 [8];
  uint local_98;
  undefined1 local_94;
  undefined1 local_93 [3];
  ForAnyElementType local_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  int iStack_78;
  FScriptContainerElement *local_70;
  int local_68;
  FScriptContainerElement *local_60;
  FMeshRegionGraph *local_58 [3];
  
  bVar6 = false;
  local_58[0] = this;
  iVar12 = 0;
  do {
    local_68 = iVar12 + 1;
    if (param_1 <= iVar12) {
      return bVar6;
    }
    local_80 = (this->Regions).ArrayNum;
    uVar13 = (ulonglong)(int)local_80;
    pFVar19 = (this->Regions).AllocatorInstance.Data;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    pFVar18 = pFVar19 + 0x10;
    local_60 = pFVar19 + uVar13 * 0x30;
    while( true ) {
      pFVar3 = local_60;
      local_70 = pFVar19;
      if ((this->Regions).ArrayNum != (int)uVar13) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FMeshRegionGraph::FRegion,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar19 == pFVar3) break;
      puVar16 = *(uint **)(pFVar18 + -8);
      iVar12 = *(int *)pFVar18;
      puVar1 = puVar16 + iVar12;
      while( true ) {
        if (*(int *)pFVar18 != iVar12) {
          local_94 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_94);
        }
        if (puVar16 == puVar1) break;
        uVar8 = *puVar16;
        iVar7 = `UE::Geometry::FMeshRegionGraph::OptimizeBorders'::__l2::<lambda_1>::operator()
                          (local_58,uVar8);
        if ((-1 < iVar7) && (iVar7 < (this->Regions).ArrayNum)) {
          if ((iVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if ((this->Regions).AllocatorInstance.Data[(longlong)iVar7 * 0x30] !=
              (FScriptContainerElement)0x0) {
            local_7c = uVar8;
            iStack_78 = iVar7;
            if (((local_90.Data <= (FScriptContainerElement *)&local_7c) &&
                ((FScriptContainerElement *)&local_7c < local_90.Data + (longlong)local_88._4_4_ * 8
                )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            iVar7 = (uint)local_88;
            if ((uint)local_88 == local_88._4_4_) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_90,(int *)((longlong)&local_88 + 4));
            }
            local_88 = CONCAT44(local_88._4_4_,iVar7 + 1);
            *(ulonglong *)(local_90.Data + (longlong)iVar7 * 8) = CONCAT44(iStack_78,local_7c);
          }
        }
        puVar16 = puVar16 + 1;
      }
      pFVar19 = local_70 + 0x30;
      uVar13 = (ulonglong)local_80;
      pFVar18 = pFVar18 + 0x30;
    }
    uVar13 = (ulonglong)(int)(uint)local_88;
    local_80 = (uint)local_88;
    pFVar18 = local_90.Data + uVar13 * 8;
    FVar17.Data = local_90.Data;
    local_60 = pFVar18;
    while( true ) {
      local_70 = FVar17.Data;
      if ((uint)local_88 != (int)uVar13) {
        local_93[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_93);
      }
      if (FVar17.Data == pFVar18) break;
      local_98 = *(uint *)FVar17.Data;
      lVar15 = (longlong)(int)local_98;
      uVar8 = 0;
      if ((int)local_98 < (this->TriangleToRegionMap).ArrayNum) {
        uVar8 = ~local_98 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar8 = *(uint *)(FVar17.Data + 4);
      uVar11 = *(uint *)((this->TriangleToRegionMap).AllocatorInstance.Data + lVar15 * 4);
      uVar9 = `UE::Geometry::FMeshRegionGraph::OptimizeBorders'::__l2::<lambda_1>::operator()
                        (local_58,local_98);
      if (uVar9 == uVar8) {
        uVar9 = 0;
        if ((int)uVar11 < (this->Regions).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar18 = (this->Regions).AllocatorInstance.Data;
        if (((*(uint **)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 8) <= &local_98) &&
            (&local_98 <
             *(uint **)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 8) +
             *(int *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 0x14))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar12 = *(int *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 0x10);
        uVar9 = 0;
        if (0 < iVar12) {
          lVar15 = 0;
          do {
            uVar14 = 0;
            if ((int)uVar9 < iVar12) {
              uVar14 = ~uVar9 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            uVar14 = uVar9;
            if (*(uint *)(lVar15 + *(longlong *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 8)) ==
                local_98) {
              uVar14 = uVar9 - 1;
              lVar15 = lVar15 + -4;
              uVar10 = 0;
              if ((int)uVar9 < *(int *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 0x10)) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              iVar12 = ~uVar9 + *(int *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 0x10);
              if (1 < iVar12) {
                iVar12 = 1;
              }
              if (iVar12 != 0) {
                memmove((void *)(*(longlong *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 8) +
                                (longlong)(int)uVar9 * 4),
                        (void *)(*(longlong *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 8) +
                                (longlong)
                                (*(int *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 0x10) - iVar12) *
                                4),(longlong)iVar12 << 2);
              }
              *(int *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 0x10) =
                   *(int *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 0x10) + -1;
            }
            iVar12 = *(int *)(pFVar18 + (longlong)(int)uVar11 * 0x30 + 0x10);
            uVar9 = uVar14 + 1;
            lVar15 = lVar15 + 4;
            FVar17.Data = local_70;
          } while ((int)uVar9 < iVar12);
        }
        uVar11 = 0;
        if ((int)uVar8 < (this->Regions).ArrayNum) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar18 = (this->Regions).AllocatorInstance.Data;
        if (((*(uint **)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 8) <= &local_98) &&
            (&local_98 <
             *(uint **)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 8) +
             *(int *)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 0x14))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar12 = *(int *)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 0x10);
        if (iVar12 == *(int *)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 0x14)) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 8)
                              ,(int *)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 0x14));
        }
        *(int *)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 0x10) = iVar12 + 1;
        *(uint *)(*(longlong *)(pFVar18 + (longlong)(int)uVar8 * 0x30 + 8) + (longlong)iVar12 * 4) =
             local_98;
        lVar15 = (longlong)(int)local_98;
        uVar11 = 0;
        if ((int)local_98 < (this->TriangleToRegionMap).ArrayNum) {
          uVar11 = ~local_98 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar6 = true;
        *(uint *)((this->TriangleToRegionMap).AllocatorInstance.Data + lVar15 * 4) = uVar8;
        pFVar18 = local_60;
      }
      uVar13 = (ulonglong)local_80;
      FVar17.Data = FVar17.Data + 8;
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    iVar12 = local_68;
    if ((int)uVar13 == 0) {
      return bVar6;
    }
  } while( true );
}

