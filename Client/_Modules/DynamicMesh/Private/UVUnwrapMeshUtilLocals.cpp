// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// UpdateUnwrapTriangles<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c87aa20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UVUnwrapMeshUtilLocals::UpdateUnwrapTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,FDynamicMesh3 *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  FDynamicMeshAttributeSet *pFVar5;
  code *pcVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  EMeshResult EVar12;
  int iVar13;
  FDynamicMeshAttributeSet *pFVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  FDynamicMeshAttributeSet *this;
  FIdentityFunctor local_res18 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e [6];
  float local_68;
  undefined4 local_64;
  FIndex3i_u_0 local_60;
  FIndex3i_u_0 local_50 [2];
  
  uVar3 = param_3 * 3;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_res20 = param_4;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  iVar11 = 0;
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
    iVar11 = local_98.ArrayNum;
  }
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res18[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
      iVar11 = local_98.ArrayNum;
    }
    if (pFVar16 == pFVar1) break;
    uVar3 = *(uint *)pFVar16;
    if ((-1 < (int)uVar3) &&
       ((int)uVar3 <
        (int)((param_5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_5->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar18 = (ulonglong)(uVar3 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar3 >> 9) * 8) + uVar18 * 2) - 1U) < 0xfffe) {
        lVar4 = *(longlong *)
                 ((param_5->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
        local_80 = *(undefined8 *)(lVar4 + uVar18 * 0xc);
        local_78[0] = *(undefined4 *)(lVar4 + 8 + uVar18 * 0xc);
        if ((local_98.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80) &&
           ((FScriptContainerElement *)&local_80 <
            local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 4)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = local_98.ArrayNum;
        }
        if (iVar11 == local_98.ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_98.AllocatorInstance,&local_98.ArrayMax);
        }
        iVar13 = iVar11 + 1;
        *(undefined4 *)(local_98.AllocatorInstance.Data + (longlong)iVar11 * 4) =
             (undefined4)local_80;
        local_98.ArrayNum = iVar13;
        if (((local_98.AllocatorInstance.Data <=
              (FScriptContainerElement *)((longlong)&local_80 + 4U)) &&
            ((FScriptContainerElement *)((longlong)&local_80 + 4U) <
             local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_98.ArrayNum == local_98.ArrayMax) {
          local_98.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_98.AllocatorInstance,&local_98.ArrayMax);
        }
        iVar11 = local_98.ArrayNum + 1;
        *(undefined4 *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 4) =
             local_80._4_4_;
        local_98.ArrayNum = iVar11;
        if (((local_98.AllocatorInstance.Data <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 <
             local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = local_98.ArrayNum;
        if (local_98.ArrayNum == local_98.ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_98.AllocatorInstance,&local_98.ArrayMax);
        }
        local_98.ArrayNum = iVar11 + 1;
        *(undefined4 *)(local_98.AllocatorInstance.Data + (longlong)iVar11 * 4) = local_78[0];
        UE::Geometry::FDynamicMesh3::RemoveTriangle(param_5,uVar3,false,false);
        iVar11 = local_98.ArrayNum;
      }
    }
    pFVar16 = pFVar16 + 4;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_98.AllocatorInstance.Data,iVar11,local_res18[0],(TLess<void> *)&local_70);
  iVar11 = local_98.ArrayNum;
  if (1 < local_98.ArrayNum) {
    FVar15.Data = local_98.AllocatorInstance.Data;
    FVar17.Data = local_98.AllocatorInstance.Data;
    while (FVar17.Data = FVar17.Data + 4,
          FVar17.Data != local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 4) {
      if ((*(uint *)FVar15.Data != *(uint *)FVar17.Data) &&
         (FVar15.Data = FVar15.Data + 4, FVar15.Data != FVar17.Data)) {
        *(uint *)FVar15.Data = *(uint *)FVar17.Data;
      }
    }
    iVar11 = (int)((longlong)(FVar15.Data + (4 - (longlong)local_98.AllocatorInstance.Data)) >> 2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_98,iVar11,Default);
  (**(code **)(param_5->_padding_ + 0x18))(param_5);
  pTVar8 = local_res20;
  pFVar16 = (local_res20->AllocatorInstance).Data;
  iVar11 = local_res20->ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar11 * 4;
  do {
    while( true ) {
      if (pTVar8->ArrayNum != iVar11) {
        local_88[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_88);
      }
      if (pFVar16 == pFVar1) {
        (**(code **)(param_5->_padding_ + 0x20))(param_5);
        pFVar5 = (param_5->AttributeSet).Ptr;
        this = (FDynamicMeshAttributeSet *)0x0;
        pFVar14 = this;
        if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar14 = pFVar5;
        }
        if (0 < *(int *)&(((TDynamicVector<int,512> *)&pFVar14->UVLayers)->Blocks).AllocatorInstance
                         .Data) {
          this = (FDynamicMeshAttributeSet *)**(undefined8 **)&pFVar14->UVLayers;
        }
        iVar11 = local_98.ArrayNum;
        pFVar1 = local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 4;
        FVar17.Data = local_98.AllocatorInstance.Data;
        goto LAB_14c87af37;
      }
      uVar3 = *(uint *)pFVar16;
      lVar4 = *(longlong *)&param_1->field_0x78;
      uVar7 = uVar3 * 3;
      iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      if (-1 < iVar2) break;
LAB_14c87aeef:
      pFVar16 = pFVar16 + 4;
    }
    if ((((int)uVar3 < 0) ||
        ((int)((param_5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (param_5->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar3)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_5->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
                                    (ulonglong)(uVar3 & 0x1ff) * 2) - 1U))) {
      local_60._s_0.C =
           *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                   (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
      local_60._s_0.B =
           *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                   (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      local_60._s_0.A = iVar2;
      EVar12 = UE::Geometry::FDynamicMesh3::InsertTriangle
                         (param_5,uVar3,(FIndex3i *)&local_60._s_0,0,true);
      if ((EVar12 == Ok) ||
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5588047018133028945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                             ,0x51,"Result == UE::Geometry::EMeshResult::Ok"), !bVar9))
      goto LAB_14c87aeef;
code_r0x00014c87aeee:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5588047018133028936>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                       ,0x48,"false");
    if (bVar9) goto code_r0x00014c87aeee;
    pFVar16 = pFVar16 + 4;
  } while( true );
LAB_14c87af37:
  if (local_98.ArrayNum != iVar11) {
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_6f);
  }
  if (FVar17.Data == pFVar1) {
    UE::Geometry::FRefCountVector::RebuildFreeList((FRefCountVector *)&this->_padding_);
    pTVar8 = local_res20;
    pFVar16 = (local_res20->AllocatorInstance).Data;
    iVar11 = local_res20->ArrayNum;
    pFVar1 = pFVar16 + (longlong)iVar11 * 4;
    while( true ) {
      if (pTVar8->ArrayNum != iVar11) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_6e);
      }
      if (pFVar16 == pFVar1) break;
      lVar4 = *(longlong *)&param_1->field_0x78;
      uVar3 = *(int *)pFVar16 * 3;
      iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                      (ulonglong)(uVar3 & 0x1ff) * 4);
      if (-1 < iVar2) {
        local_50[0]._8_4_ =
             *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                     (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
        local_50[0]._4_4_ =
             *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                     (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
        local_50[0]._0_4_ = iVar2;
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  ((TDynamicMeshOverlay<float,2> *)this,*(int *)pFVar16,
                   (FIndex3i *)&local_50[0]._s_0,true);
      }
      pFVar16 = pFVar16 + 4;
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    return;
  }
  uVar3 = *(uint *)FVar17.Data;
  if (((int)uVar3 < 0) ||
     ((int)((param_5->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_5->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar3)) {
LAB_14c87b02a:
    UE::Geometry::FDynamicMesh3::RemoveVertex(param_5,uVar3,false);
  }
  else {
    uVar10 = *(ushort *)
              (*(longlong *)
                ((param_5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2);
    if (uVar10 == 0xffff) {
      uVar10 = 0;
    }
    if (uVar10 < 2) goto LAB_14c87b02a;
    if (((int)((((FRefCountVector *)&this->_padding_)->RefCounts).CurBlock * 0x200 +
              (((FRefCountVector *)&this->_padding_)->RefCounts).CurBlockUsed) <= (int)uVar3) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((((TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                                          *)&this->_padding_)->AllocatorInstance).Data +
                                      (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2)
                         - 1U))) {
      local_68 = *(float *)(*(longlong *)
                             (*(longlong *)&param_1->field_0x48 +
                             (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                           (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
      local_64 = *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)&param_1->field_0x48 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8)
                  + (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
      UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement
                ((TDynamicMeshOverlay<float,2> *)this,uVar3,&local_68,true);
      FVar17.Data = FVar17.Data + 4;
      goto LAB_14c87af37;
    }
  }
  FVar17.Data = FVar17.Data + 4;
  goto LAB_14c87af37;
}

// UpdateUnwrapTriangles<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14c87b150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UVUnwrapMeshUtilLocals::UpdateUnwrapTriangles<UE::Geometry::FRefCountVector::IndexEnumerable>
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          IndexEnumerable *param_2,int param_3,IndexEnumerable *param_4,FDynamicMesh3 *param_5)

{
  int iVar1;
  short sVar2;
  FRefCountVector *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  EMeshResult EVar11;
  FDynamicMeshAttributeSet *pFVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FDynamicMeshAttributeSet *pFVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  FDynamicMeshAttributeSet *pFVar21;
  FIdentityFunctor local_res18 [8];
  IndexEnumerable *local_res20;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  FIndex3i_u_0 local_78;
  FIndex3i_u_0 local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  IndexIterator local_48;
  
  uVar17 = param_3 * 3;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res20 = param_4;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
  }
  pFVar3 = param_2->Vector;
  iVar16 = (pFVar3->RefCounts).CurBlock * 0x200 + (pFVar3->RefCounts).CurBlockUsed;
  uVar19 = 0;
  if (((iVar16 != 0) &&
      (pFVar4 = (pFVar3->RefCounts).Blocks.AllocatorInstance.Data, uVar19 = 0,
      0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar19 = 1, 1 < iVar16)) {
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar4 + (uVar19 >> 9) * 8) +
                        (ulonglong)((uint)uVar19 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar17 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar17;
    } while ((int)uVar17 < iVar16);
  }
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_48,pFVar3,iVar16,iVar16);
  if ((int)uVar19 != local_48._8_4_) {
    do {
      uVar17 = (uint)uVar19;
      if ((-1 < (int)uVar17) &&
         ((int)uVar17 <
          (int)((param_5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_5->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        uVar13 = (ulonglong)(uVar17 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (uVar19 >> 9) * 8) + uVar13 * 2) - 1U) < 0xfffe) {
          lVar5 = *(longlong *)
                   ((param_5->Triangles).Blocks.AllocatorInstance.Data + (uVar19 >> 9) * 8);
          local_88 = *(undefined8 *)(lVar5 + uVar13 * 0xc);
          local_80[0] = *(undefined4 *)(lVar5 + 8 + uVar13 * 0xc);
          if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = local_58.ArrayNum;
          if (local_58.ArrayNum == local_58.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_58.AllocatorInstance,&local_58.ArrayMax);
          }
          iVar1 = iVar10 + 1;
          *(undefined4 *)(local_58.AllocatorInstance.Data + (longlong)iVar10 * 4) =
               (undefined4)local_88;
          local_58.ArrayNum = iVar1;
          if (((local_58.AllocatorInstance.Data <=
                (FScriptContainerElement *)((longlong)&local_88 + 4U)) &&
              ((FScriptContainerElement *)((longlong)&local_88 + 4U) <
               local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_58.ArrayNum == local_58.ArrayMax) {
            local_58.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_58.AllocatorInstance,&local_58.ArrayMax);
          }
          iVar10 = local_58.ArrayNum + 1;
          *(undefined4 *)(local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 4) =
               local_88._4_4_;
          local_58.ArrayNum = iVar10;
          if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)local_80) &&
              ((FScriptContainerElement *)local_80 <
               local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = local_58.ArrayNum;
          if (local_58.ArrayNum == local_58.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_58.AllocatorInstance,&local_58.ArrayMax);
          }
          local_58.ArrayNum = iVar10 + 1;
          *(undefined4 *)(local_58.AllocatorInstance.Data + (longlong)iVar10 * 4) = local_80[0];
          UE::Geometry::FDynamicMesh3::RemoveTriangle(param_5,uVar17,false,false);
        }
      }
      uVar19 = (ulonglong)(uVar17 + 1);
      if ((int)(uVar17 + 1) < iVar16) {
        do {
          uVar13 = (ulonglong)((uint)uVar19 & 0x1ff);
          lVar5 = *(longlong *)
                   ((pFVar3->RefCounts).Blocks.AllocatorInstance.Data + (uVar19 >> 9) * 8);
          if ((*(short *)(lVar5 + uVar13 * 2) != 0) && (*(short *)(lVar5 + uVar13 * 2) != -1))
          break;
          uVar17 = (uint)uVar19 + 1;
          uVar19 = (ulonglong)uVar17;
        } while ((int)uVar17 < iVar16);
      }
      param_4 = local_res20;
    } while ((int)uVar19 != local_48._8_4_);
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_58.AllocatorInstance.Data,local_58.ArrayNum,local_res18[0],
             (TLess<void> *)local_res18);
  iVar16 = local_58.ArrayNum;
  if (1 < local_58.ArrayNum) {
    FVar14.Data = local_58.AllocatorInstance.Data;
    FVar20.Data = local_58.AllocatorInstance.Data;
    while (FVar20.Data = FVar20.Data + 4,
          FVar20.Data != local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 4) {
      if ((*(uint *)FVar14.Data != *(uint *)FVar20.Data) &&
         (FVar14.Data = FVar14.Data + 4, FVar14.Data != FVar20.Data)) {
        *(uint *)FVar14.Data = *(uint *)FVar20.Data;
      }
    }
    iVar16 = (int)((longlong)(FVar14.Data + (4 - (longlong)local_58.AllocatorInstance.Data)) >> 2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_58,iVar16,Default);
  (**(code **)(param_5->_padding_ + 0x18))(param_5);
  pFVar3 = param_4->Vector;
  uVar17 = (pFVar3->RefCounts).CurBlock * 0x200 + (pFVar3->RefCounts).CurBlockUsed;
  uVar19 = 0;
  if ((uVar17 != 0) &&
     (pFVar4 = (pFVar3->RefCounts).Blocks.AllocatorInstance.Data, uVar19 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar19 = 1;
    uVar18 = 1;
    if ((int)uVar17 < 2) goto joined_r0x00014c87b5ad;
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar4 + (uVar19 >> 9) * 8) +
                        (ulonglong)((uint)uVar19 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar18 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
    } while ((int)uVar18 < (int)uVar17);
  }
  uVar18 = (uint)uVar19;
joined_r0x00014c87b5ad:
  if (uVar18 != uVar17) {
    do {
      lVar5 = *(longlong *)&param_1->field_0x78;
      uVar18 = (uint)uVar19;
      uVar7 = uVar18 * 3;
      iVar16 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
      if (-1 < iVar16) {
        if ((((int)uVar18 < 0) ||
            ((int)((param_5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_5->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar18)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((param_5->TriangleRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (uVar19 >> 9) * 8) +
                                        (ulonglong)(uVar18 & 0x1ff) * 2) - 1U))) {
          local_78._s_0.C =
               *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                       (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          local_78._s_0.B =
               *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          local_78._s_0.A = iVar16;
          EVar11 = UE::Geometry::FDynamicMesh3::InsertTriangle
                             (param_5,uVar18,(FIndex3i *)&local_78._s_0,0,true);
          if ((EVar11 != Ok) &&
             (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5588047018133028945>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                                 ,0x51,"Result == UE::Geometry::EMeshResult::Ok"), bVar8))
          goto code_r0x00014c87b6cb;
        }
        else {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5588047018133028936>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                             ,0x48,"false");
          if (bVar8) {
code_r0x00014c87b6cb:
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      uVar18 = uVar18 + 1;
      uVar19 = (ulonglong)uVar18;
      if ((int)uVar17 <= (int)uVar18) goto joined_r0x00014c87b5ad;
      while( true ) {
        uVar13 = (ulonglong)((uint)uVar19 & 0x1ff);
        lVar5 = *(longlong *)((pFVar3->RefCounts).Blocks.AllocatorInstance.Data + (uVar19 >> 9) * 8)
        ;
        if ((*(short *)(lVar5 + uVar13 * 2) != 0) && (*(short *)(lVar5 + uVar13 * 2) != -1)) break;
        uVar18 = (uint)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        if ((int)uVar17 <= (int)uVar18) goto joined_r0x00014c87b5ad;
      }
    } while( true );
  }
  pFVar15 = (FDynamicMeshAttributeSet *)0x0;
  (**(code **)(param_5->_padding_ + 0x20))(param_5);
  pFVar21 = (param_5->AttributeSet).Ptr;
  pFVar12 = pFVar15;
  if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar12 = pFVar21;
  }
  pFVar21 = pFVar15;
  if (0 < *(int *)&(((TDynamicVector<int,512> *)&pFVar12->UVLayers)->Blocks).AllocatorInstance.Data)
  {
    pFVar21 = (FDynamicMeshAttributeSet *)**(undefined8 **)&pFVar12->UVLayers;
  }
  iVar16 = local_58.ArrayNum;
  pFVar4 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 4;
  FVar20.Data = local_58.AllocatorInstance.Data;
LAB_14c87b760:
  do {
    if (local_58.ArrayNum != iVar16) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (FVar20.Data == pFVar4) break;
    uVar17 = *(uint *)FVar20.Data;
    if (((int)uVar17 < 0) ||
       ((int)((param_5->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_5->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar17)) {
LAB_14c87b84c:
      UE::Geometry::FDynamicMesh3::RemoveVertex(param_5,uVar17,false);
    }
    else {
      uVar9 = *(ushort *)
               (*(longlong *)
                 ((param_5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 2);
      if (uVar9 == 0xffff) {
        uVar9 = 0;
      }
      if (uVar9 < 2) goto LAB_14c87b84c;
      if (((int)((((FRefCountVector *)&pFVar21->_padding_)->RefCounts).CurBlock * 0x200 +
                (((FRefCountVector *)&pFVar21->_padding_)->RefCounts).CurBlockUsed) <= (int)uVar17)
         || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((((TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                                               *)&pFVar21->_padding_)->AllocatorInstance).Data +
                                           (ulonglong)(uVar17 >> 9) * 8) +
                                         (ulonglong)(uVar17 & 0x1ff) * 2) - 1U))) {
        local_90 = (FRefCountVector *)
                   CONCAT44(*(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)&param_1->field_0x48 +
                               (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar17 * 2 + 1 & 0x1ff) * 4),
                            *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)&param_1->field_0x48 +
                               (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar17 * 2 & 0x1ff) * 4));
        UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement
                  ((TDynamicMeshOverlay<float,2> *)pFVar21,uVar17,(float *)&local_90,true);
        FVar20.Data = FVar20.Data + 4;
        goto LAB_14c87b760;
      }
    }
    FVar20.Data = FVar20.Data + 4;
  } while( true );
  UE::Geometry::FRefCountVector::RebuildFreeList((FRefCountVector *)&pFVar21->_padding_);
  pFVar3 = local_res20->Vector;
  uVar17 = (pFVar3->RefCounts).CurBlock * 0x200 + (pFVar3->RefCounts).CurBlockUsed;
  local_90 = pFVar3;
  if ((uVar17 != 0) &&
     (pFVar4 = (pFVar3->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    pFVar15 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar18 = 1;
    if ((int)uVar17 < 2) goto joined_r0x00014c87b8dc;
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar4 + ((ulonglong)pFVar15 >> 9) * 8) +
                        (ulonglong)((uint)pFVar15 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar18 = (uint)pFVar15 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar18;
    } while ((int)uVar18 < (int)uVar17);
  }
  uVar18 = (uint)pFVar15;
joined_r0x00014c87b8dc:
  do {
    if (uVar18 == uVar17) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      lVar5 = *(longlong *)&param_1->field_0x78;
      iVar10 = (int)pFVar15;
      uVar18 = iVar10 * 3;
      iVar16 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar18 >> 9) * 8) +
                       (ulonglong)(uVar18 & 0x1ff) * 4);
      if (-1 < iVar16) {
        local_68._s_0.C =
             *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                     (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
        local_68._s_0.B =
             *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                     (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
        local_68._s_0.A = iVar16;
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  ((TDynamicMeshOverlay<float,2> *)pFVar21,iVar10,(FIndex3i *)&local_68._s_0,true);
      }
      uVar18 = iVar10 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar18;
      if ((int)uVar17 <= (int)uVar18) break;
      while( true ) {
        uVar19 = (ulonglong)((uint)pFVar15 & 0x1ff);
        lVar5 = *(longlong *)
                 ((pFVar3->RefCounts).Blocks.AllocatorInstance.Data + ((ulonglong)pFVar15 >> 9) * 8)
        ;
        if ((*(short *)(lVar5 + uVar19 * 2) != 0) && (*(short *)(lVar5 + uVar19 * 2) != -1)) break;
        uVar18 = (uint)pFVar15 + 1;
        pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar18;
        if ((int)uVar17 <= (int)uVar18) goto joined_r0x00014c87b8dc;
      }
    }
  } while( true );
}

