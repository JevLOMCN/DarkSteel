// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// Triangulate<double> @ 14c944ee0

bool __thiscall
UE::Geometry::FDelaunay2::Triangulate<double>
          (FDelaunay2 *this,TGeneralPolygon2<double> *param_1,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  EFillMode EVar12;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_138;
  int local_128;
  int iStack_124;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_120;
  ForAnyElementType local_110;
  int local_108;
  int iStack_104;
  longlong local_100;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_f8;
  ForAnyElementType *local_f0;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_98;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_88;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_78;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_68;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_58;
  
  uVar16 = 0;
  local_f8 = &local_138;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  iStack_104 = 0;
  local_f0 = &local_110;
  `UE::Geometry::FDelaunay2::Triangulate<double>'::__l2::<lambda_1>::operator()
            (&local_f8,(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)param_1);
  if (0 < (param_1->Holes).ArrayNum) {
    local_100 = 0;
    do {
      lVar15 = local_100;
      uVar11 = 0;
      if ((int)uVar16 < (param_1->Holes).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pTVar5 = local_f8;
      pTVar13 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                ((param_1->Holes).AllocatorInstance.Data + lVar15);
      if (pTVar13->ArrayNum != 0) {
        iVar1 = local_f8->ArrayNum;
        if ((local_f8 == pTVar13) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar2 = pTVar13->ArrayNum;
        if (iVar2 != 0) {
          iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar2,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                              &pTVar5->ArrayMax);
          memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar10 * 0x10,
                 (pTVar13->AllocatorInstance).Data,(longlong)iVar2 << 4);
        }
        uVar11 = local_108 + -1 + pTVar13->ArrayNum;
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        if (iStack_104 < (int)uVar11) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar11,&local_110,local_108,&iStack_104);
        }
        iVar2 = pTVar13->ArrayNum;
        uVar11 = iVar2 - 1;
        lVar15 = local_100;
        uVar6 = 0;
        if (0 < iVar2) {
          do {
            uVar14 = uVar6;
            local_128 = uVar11 + iVar1;
            iStack_124 = uVar14 + iVar1;
            if (((local_110.Data <= (FScriptContainerElement *)&local_128) &&
                ((FScriptContainerElement *)&local_128 < local_110.Data + (longlong)iStack_104 * 8))
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            if (local_108 == iStack_104) {
              local_108 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&local_110,&iStack_104);
            }
            iVar10 = local_108 + 1;
            *(ulonglong *)(local_110.Data + (longlong)local_108 * 8) =
                 CONCAT44(iStack_124,local_128);
            lVar15 = local_100;
            uVar6 = uVar14 + 1;
            uVar11 = uVar14;
            local_108 = iVar10;
          } while ((int)(uVar14 + 1) < iVar2);
        }
      }
      local_100 = lVar15 + 0x10;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (param_1->Holes).ArrayNum);
  }
  iVar1 = local_108;
  local_e8 = local_110.Data;
  if ((local_108 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  iStack_e0 = iVar1;
  iVar1 = local_138.ArrayNum;
  local_d8 = local_138.AllocatorInstance.Data;
  if ((local_138.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_98._12_4_ = uStack_dc;
  local_98.ArrayNum = iStack_e0;
  iStack_d0 = iVar1;
  local_88._12_4_ = uStack_cc;
  local_88.ArrayNum = iVar1;
  local_88.DataPtr = (TVector2<double> *)local_d8;
  local_98.DataPtr = (FIndex2i *)local_e8;
  bVar7 = Triangulate(this,&local_88,&local_98);
  iVar1 = local_108;
  if (param_2 != (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)0x0) {
    EVar12 = PositiveWinding;
    if (param_1->bOuterIsCW != false) {
      EVar12 = NegativeWinding;
    }
    if ((bVar7) || (!param_4)) {
      local_a8 = local_110.Data;
      if ((local_108 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iStack_a0 = iVar1;
      local_58._12_4_ = uStack_9c;
      local_58.ArrayNum = iVar1;
      local_58.DataPtr = (FIndex2i *)local_a8;
      local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.ArrayNum = 0;
      local_120.ArrayMax = 0;
      GetFilledTriangles(this,&local_120,&local_58,EVar12);
      if (param_2 != &local_120) {
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (param_2->AllocatorInstance).Data = local_120.AllocatorInstance.Data;
        param_2->ArrayNum = local_120.ArrayNum;
        param_2->ArrayMax = local_120.ArrayMax;
        local_120.ArrayNum = 0;
        local_120.ArrayMax = 0;
        local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
    }
    else {
      local_c8 = local_110.Data;
      if ((local_108 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iStack_c0 = iVar1;
      iVar1 = local_138.ArrayNum;
      local_b8 = local_138.AllocatorInstance.Data;
      if ((local_138.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = iStack_c0;
      iStack_b0 = iVar1;
      local_68._12_4_ = uStack_ac;
      local_68.ArrayNum = iVar1;
      local_68.DataPtr = (TVector2<double> *)local_b8;
      local_78.DataPtr = (FIndex2i *)local_c8;
      GetFilledTrianglesGeneralizedWinding(this,param_2,&local_68,&local_78,EVar12);
    }
  }
  if ((param_3 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (param_3 != &local_138)) {
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_3->AllocatorInstance).Data = local_138.AllocatorInstance.Data;
    param_3->ArrayNum = local_138.ArrayNum;
    param_3->ArrayMax = local_138.ArrayMax;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  return bVar7;
}

// operator() @ 14c94a840

void __thiscall
`UE::Geometry::FDelaunay2::Triangulate<double>'::__l2::<lambda_1>::operator()
          (void *this,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_28;
  int iStack_24;
  
  if (param_1->ArrayNum != 0) {
    pTVar4 = *(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> **)this;
    iVar2 = pTVar4->ArrayNum;
    if ((pTVar4 == param_1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = param_1->ArrayNum;
    if (iVar3 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar3,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax
                        );
      memcpy((pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
             (param_1->AllocatorInstance).Data,(longlong)iVar3 << 4);
    }
    pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
    uVar10 = param_1->ArrayNum + -1 + *(int *)&pFVar5[1].Data;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (*(int *)((longlong)&pFVar5[1].Data + 4) < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar10,pFVar5,*(int *)&pFVar5[1].Data,(int *)((longlong)&pFVar5[1].Data + 4));
    }
    iVar3 = param_1->ArrayNum;
    iVar8 = 0;
    local_28 = iVar3 + -1;
    if (0 < iVar3) {
      do {
        iVar9 = iVar8;
        pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
        local_28 = local_28 + iVar2;
        iStack_24 = iVar9 + iVar2;
        if (((pFVar5->Data <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = *(int *)&pFVar5[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar5,piVar1);
        }
        *(int *)&pFVar5[1].Data = iVar8 + 1;
        *(ulonglong *)(pFVar5->Data + (longlong)iVar8 * 8) = CONCAT44(iStack_24,local_28);
        iVar8 = iVar9 + 1;
        local_28 = iVar9;
      } while (iVar9 + 1 < iVar3);
    }
  }
  return;
}

