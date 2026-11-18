// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 13

// InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 1496f4300

void __thiscall
FMeshRenderBufferSetConversionUtil::
InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_6,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_7,
          TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
          *param_8,bool param_9,bool param_10)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  FMeshRenderBufferSet *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar12;
  longlong lVar13;
  FMeshRenderBufferSet *local_res10;
  FDynamicMesh3 *local_res18;
  <lambda_1> local_res20 [8];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8 [2];
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  ForAnyElementType **local_98;
  ForAnyElementType *local_90;
  FDynamicMesh3 **local_88;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_80;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_78;
  FMeshRenderBufferSetConversionUtil *local_70;
  undefined1 *local_68;
  FMeshRenderBufferSet **local_60;
  TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
  *local_58;
  uint *local_50;
  uint *local_48;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *local_40;
  
  param_1->TriangleCount = param_3;
  if (param_3 != 0) {
    if ((param_7 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) ||
       (this->bIgnoreVertexColors != false)) {
      local_d8[0] = 0;
    }
    else {
      local_d8[0] = 1;
    }
    uVar4 = param_3 * 3;
    local_b8[0] = param_5->ArrayNum;
    local_bc = local_b8[0];
    if ((int)local_b8[0] < 1) {
      local_bc = 1;
    }
    local_res10 = param_1;
    local_res18 = param_2;
    FPositionVertexBuffer::Init(&param_1->PositionVertexBuffer,uVar4,true);
    FStaticMeshVertexBuffer::Init(&local_res10->StaticMeshVertexBuffer,uVar4,local_bc,true);
    FColorVertexBuffer::Init(&local_res10->ColorVertexBuffer,uVar4,true);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&(local_res10->IndexBuffer).Indices.AllocatorInstance,
               &(local_res10->IndexBuffer).Indices.ArrayNum,
               &(local_res10->IndexBuffer).Indices.ArrayMax);
    if ((param_9 == false) && (this->bUseSecondaryTriBuffers == false)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_3,&local_d0,0,(int *)((longlong)&local_c8 + 4));
    pFVar11 = (param_4->AllocatorInstance).Data;
    iVar1 = param_4->ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar1 * 4;
    while( true ) {
      if (param_4->ArrayNum != iVar1) {
        local_res20[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      pFVar5 = local_res10;
      if (pFVar11 == pFVar2) break;
      local_c0 = *(undefined4 *)pFVar11;
      if (((local_d0.Data <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 < local_d0.Data + (longlong)local_c8._4_4_ * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (int)local_c8;
      if ((int)local_c8 == local_c8._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_d0,(int *)((longlong)&local_c8 + 4));
      }
      pFVar11 = pFVar11 + 4;
      local_c8 = CONCAT44(local_c8._4_4_,iVar8 + 1);
      *(undefined4 *)(local_d0.Data + (longlong)iVar8 * 4) = local_c0;
    }
    uVar10 = 0;
    if (0 < (int)uVar4) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar10 < (pFVar5->IndexBuffer).Indices.ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(uint *)((pFVar5->IndexBuffer).Indices.AllocatorInstance.Data + lVar13 * 4) = uVar10;
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uVar4);
    }
    local_90 = &local_d0;
    local_88 = &local_res18;
    local_80 = &param_6;
    local_78 = &param_7;
    local_b0.DataPtr = (void **)0x0;
    local_68 = local_d8;
    local_b0.ArrayNum = 0;
    local_60 = &local_res10;
    local_58 = param_8;
    local_50 = &local_bc;
    local_48 = local_b8;
    local_40 = param_5;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMeshRenderBufferSetConversionUtil::InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_98 = &local_90;
    local_70 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(int)local_c8,1,(TFunctionRef<void___cdecl(int)> *)&local_a0,
               local_res20[0],param_10 ^ ForceSingleThread,&local_b0);
    pFVar5 = local_res10;
    if ((bVar7) &&
       (pTVar12 = &local_res10->Triangles,
       (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_d0 != pTVar12)) {
      pFVar2 = (pTVar12->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar12->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(FScriptContainerElement **)&pTVar12->field0_0x0 = local_d0.Data;
      local_d0.Data = (FScriptContainerElement *)0x0;
      (pFVar5->Triangles).field0_0x0.TypedValue.ArrayNum = (int)local_c8;
      (pFVar5->Triangles).field0_0x0.TypedValue.ArrayMax = local_c8._4_4_;
      local_c8 = 0;
      if (((pFVar5->Triangles).field0_0x0.TypedValue.ArrayMax == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this->bUseSecondaryTriBuffers != false) {
      local_res10->bEnableSecondaryIndexBuffer = true;
      UpdateSecondaryTriangleBuffer(this,local_res10,local_res18,false);
    }
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  return;
}

// InitializeBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 1496f4750

void __thiscall
FMeshRenderBufferSetConversionUtil::
InitializeBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,int param_3,IndexEnumerable *param_4,
          TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_6,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_7,
          TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
          *param_8,bool param_9,bool param_10)

{
  int iVar1;
  short sVar2;
  FRefCountVector *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  FMeshRenderBufferSet *pFVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar14;
  uint uVar15;
  longlong lVar16;
  FMeshRenderBufferSet *local_res10;
  FDynamicMesh3 *local_res18;
  <lambda_1> local_res20 [8];
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  int local_c8;
  uint local_c4;
  uint local_c0 [2];
  TArrayView<std::nullptr_t,int> local_b8;
  code *local_a8;
  ForAnyElementType **local_a0;
  ForAnyElementType *local_98;
  FDynamicMesh3 **local_90;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_88;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_80;
  FMeshRenderBufferSetConversionUtil *local_78;
  <lambda_1> *local_70;
  FMeshRenderBufferSet **local_68;
  TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
  *local_60;
  uint *local_58;
  uint *local_50;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *local_48;
  
  param_1->TriangleCount = param_3;
  if (param_3 == 0) {
    return;
  }
  if ((param_7 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) ||
     (this->bIgnoreVertexColors != false)) {
    local_res20[0] = (<lambda_1>)0x0;
  }
  else {
    local_res20[0] = (<lambda_1>)0x1;
  }
  uVar7 = param_3 * 3;
  local_c0[0] = param_5->ArrayNum;
  local_c4 = local_c0[0];
  if ((int)local_c0[0] < 1) {
    local_c4 = 1;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  FPositionVertexBuffer::Init(&param_1->PositionVertexBuffer,uVar7,true);
  FStaticMeshVertexBuffer::Init(&local_res10->StaticMeshVertexBuffer,uVar7,local_c4,true);
  FColorVertexBuffer::Init(&local_res10->ColorVertexBuffer,uVar7,true);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar7,&(local_res10->IndexBuffer).Indices.AllocatorInstance,
             &(local_res10->IndexBuffer).Indices.ArrayNum,
             &(local_res10->IndexBuffer).Indices.ArrayMax);
  if ((param_9 == false) && (this->bUseSecondaryTriBuffers == false)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  iStack_cc = 0;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_3,&local_d8,0,&iStack_cc);
  pFVar3 = param_4->Vector;
  uVar15 = (pFVar3->RefCounts).CurBlockUsed + (pFVar3->RefCounts).CurBlock * 0x200;
  uVar13 = 0;
  pFVar8 = local_res10;
  if ((uVar15 != 0) &&
     (pFVar4 = (pFVar3->RefCounts).Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar13 = 1;
    uVar11 = 1;
    if ((int)uVar15 < 2) goto joined_r0x0001496f48f9;
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar4 + (uVar13 >> 9) * 8) +
                        (ulonglong)((uint)uVar13 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar11 = (uint)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar15);
  }
  uVar11 = (uint)uVar13;
joined_r0x0001496f48f9:
  do {
    local_res10 = pFVar8;
    if (uVar11 == uVar15) {
      uVar15 = 0;
      if (0 < (longlong)(int)uVar7) {
        lVar16 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar15 < (pFVar8->IndexBuffer).Indices.ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)((pFVar8->IndexBuffer).Indices.AllocatorInstance.Data + lVar16 * 4) = uVar15;
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)uVar7);
      }
      local_98 = &local_d8;
      local_90 = &local_res18;
      local_88 = &param_6;
      local_80 = &param_7;
      local_48 = param_5;
      local_70 = local_res20;
      local_b8.DataPtr = (void **)0x0;
      local_68 = &local_res10;
      local_60 = param_8;
      local_58 = &local_c4;
      local_50 = local_c0;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMeshRenderBufferSetConversionUtil::InitializeBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_a0 = &local_98;
      local_b8.ArrayNum = 0;
      local_78 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_d0,1,(TFunctionRef<void___cdecl(int)> *)&local_a8,
                 local_res20[0],param_10 ^ ForceSingleThread,&local_b8);
      pFVar8 = local_res10;
      if ((bVar10) &&
         (pTVar14 = &local_res10->Triangles,
         (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_d8 != pTVar14)) {
        pFVar4 = (pTVar14->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar14->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(FScriptContainerElement **)&pTVar14->field0_0x0 = local_d8.Data;
        local_d8.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Triangles).field0_0x0.TypedValue.ArrayNum = local_d0;
        (pFVar8->Triangles).field0_0x0.TypedValue.ArrayMax = iStack_cc;
        local_d0 = 0;
        iStack_cc = 0;
        if (((pFVar8->Triangles).field0_0x0.TypedValue.ArrayMax == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (this->bUseSecondaryTriBuffers != false) {
        local_res10->bEnableSecondaryIndexBuffer = true;
        UpdateSecondaryTriangleBuffer(this,local_res10,local_res18,false);
      }
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return;
    }
    while( true ) {
      iVar12 = (int)uVar13;
      local_c8 = iVar12;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)iStack_cc * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      uVar11 = iVar12 + 1;
      uVar13 = (ulonglong)uVar11;
      *(int *)(local_d8.Data + (longlong)local_d0 * 4) = local_c8;
      pFVar8 = local_res10;
      local_d0 = iVar1;
      if ((int)uVar15 <= (int)uVar11) break;
      pFVar4 = (pFVar3->RefCounts).Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar16 = (uVar13 >> 9) * 8;
        lVar6 = (ulonglong)((uint)uVar13 & 0x1ff) * 2;
        if ((*(short *)(lVar6 + *(longlong *)(pFVar4 + lVar16)) != 0) &&
           (*(short *)(lVar6 + *(longlong *)(pFVar4 + lVar16)) != -1)) break;
        uVar11 = (uint)uVar13 + 1;
        uVar13 = (ulonglong)uVar11;
        if ((int)uVar15 <= (int)uVar11) goto joined_r0x0001496f48f9;
      }
    }
  } while( true );
}

// UpdateVertexBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_> @ 1496f6070

void __thiscall
FMeshRenderBufferSetConversionUtil::
UpdateVertexBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_5,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_6,
          TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
          *param_7,bool param_8,bool param_9,bool param_10)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FColor FVar7;
  undefined8 uVar8;
  TVector<double> *pTVar9;
  undefined8 *puVar10;
  undefined4 extraout_var;
  longlong *plVar11;
  FColor_u_0 FVar12;
  ulonglong uVar13;
  FColor_u_0 FVar14;
  uint *puVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  undefined1 local_177 [3];
  uint local_174;
  undefined8 local_170;
  float local_168;
  uint local_160 [2];
  FColor_u_0 local_158 [2];
  int local_150 [2];
  uint local_148 [2];
  uint local_140 [2];
  uint local_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined1 local_c4 [4];
  FDynamicMesh3 *local_c0;
  int local_b8 [4];
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  TVector<float>_u_0 local_88;
  TVector<float>_u_0 local_78;
  TVector<float>_u_0 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  TVector<double> local_40;
  
  if (param_1->TriangleCount != 0) {
    if ((param_6 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) ||
       (bVar6 = true, this->bIgnoreVertexColors != false)) {
      bVar6 = false;
    }
    uVar20 = param_3 * 3;
    if ((param_8) && ((param_1->PositionVertexBuffer).NumVertices != uVar20)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7616530887731053199>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                         ,0x28f,
                         "RenderBuffers->PositionVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar6) {
code_r0x0001496f619b:
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if ((param_9) && ((param_1->StaticMeshVertexBuffer).NumVertices != uVar20)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7616530887731053200>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                         ,0x290,
                         "RenderBuffers->StaticMeshVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar6) goto code_r0x0001496f619b;
    }
    else if ((param_10) && ((param_1->ColorVertexBuffer).NumVertices != uVar20)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7616530887731053201>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                         ,0x291,"RenderBuffers->ColorVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar6) goto code_r0x0001496f619b;
    }
    else {
      uVar20 = 0;
      local_138 = param_4->ArrayNum;
      uVar13 = (ulonglong)(int)local_138;
      pFVar19 = (param_4->AllocatorInstance).Data;
      local_d8 = pFVar19 + uVar13 * 4;
      while( true ) {
        local_e0 = pFVar19;
        if (param_4->ArrayNum != (int)uVar13) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_177);
        }
        if (pFVar19 == local_d8) break;
        local_174 = *(uint *)pFVar19;
        lVar16 = *(longlong *)
                  ((param_2->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_174 >> 9) * 8);
        local_120 = *(undefined8 *)(lVar16 + (ulonglong)(local_174 & 0x1ff) * 0xc);
        local_118 = *(undefined4 *)(lVar16 + 8 + (ulonglong)(local_174 & 0x1ff) * 0xc);
        if ((param_9) &&
           (param_5 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
          lVar16 = *(longlong *)&param_5->field_0x78;
          uVar17 = local_174 * 3;
          local_110._4_4_ =
               *(undefined4 *)
                (*(longlong *)(lVar16 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
          local_110._0_4_ =
               *(undefined4 *)
                (*(longlong *)(lVar16 + (ulonglong)(uVar17 >> 9) * 8) +
                (ulonglong)(uVar17 & 0x1ff) * 4);
          local_b8[2] = *(undefined4 *)
                         (*(longlong *)(lVar16 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                         (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
        }
        else {
          local_110 = 0;
          local_b8[2] = 0;
        }
        uVar17 = local_174 * 3;
        iVar18 = 0;
        local_b8[0] = (undefined4)local_110;
        local_b8[1] = local_110._4_4_;
        if ((param_10) &&
           (param_6 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) {
          lVar16 = *(longlong *)&param_6->field_0x78;
          FVar14 = (this->ConstantVertexColor).field0_0x0;
          local_130 = CONCAT44(*(undefined4 *)
                                (*(longlong *)(lVar16 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                                (ulonglong)(uVar17 + 1 & 0x1ff) * 4),
                               *(undefined4 *)
                                (*(longlong *)(lVar16 + (ulonglong)(uVar17 >> 9) * 8) +
                                (ulonglong)(uVar17 & 0x1ff) * 4));
          local_f0 = local_130;
          local_e8 = *(undefined4 *)
                      (*(longlong *)(lVar16 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                      (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
LAB_1496f6340:
          local_130 = local_f0;
          if ((this->bUsePerTriangleColor != false) &&
             (*(void **)&this->PerTriangleColorFunc != (void *)0x0)) {
            local_160[0] = local_174;
            local_c0 = param_2;
            UE::Core::Private::Function::CheckCallable(*(void **)&this->PerTriangleColorFunc);
            plVar2 = *(longlong **)&(this->PerTriangleColorFunc).field_0x28;
            pcVar5 = *(code **)&this->PerTriangleColorFunc;
            plVar11 = (longlong *)&(this->PerTriangleColorFunc).field_0x10;
            if (plVar2 != (longlong *)0x0) {
              plVar11 = plVar2;
            }
            uVar8 = (**(code **)(*plVar11 + 8))();
            (*pcVar5)(local_158,uVar8,&local_c0,local_160);
            bVar6 = false;
            FVar14 = local_158[0];
          }
        }
        else {
          FVar14 = (this->ConstantVertexColor).field0_0x0;
          local_130 = 0;
          local_f0 = 0;
          local_e8 = 0;
          if (param_10) goto LAB_1496f6340;
        }
        lVar16 = 0;
        do {
          if (param_8) {
            uVar13 = (ulonglong)(*(uint *)((longlong)&local_120 + lVar16) & 0x1ff);
            lVar3 = *(longlong *)
                     ((param_2->Vertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)(*(uint *)((longlong)&local_120 + lVar16) >> 9) * 8);
            puVar4 = (param_1->PositionVertexBuffer).Data;
            pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
            local_58 = *pdVar1;
            dStack_50 = pdVar1[1];
            local_48 = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
            uVar13 = (ulonglong)(uVar20 * (param_1->PositionVertexBuffer).Stride);
            *(float *)(puVar4 + uVar13) = (float)local_58;
            *(float *)(puVar4 + uVar13 + 4) = (float)dStack_50;
            *(float *)(puVar4 + uVar13 + 8) = (float)local_48;
          }
          puVar15 = (uint *)((longlong)&local_120 + lVar16);
          if (param_9) {
            if (this->bUsePerTriangleNormals == false) {
              if ((param_5 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)
                 || (*(int *)((longlong)local_b8 + lVar16) == -1)) {
                puVar15 = (uint *)((longlong)&local_120 + lVar16);
                local_100 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
                local_f8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
                if ((param_2->VertexNormals).bIsSet != false) {
                  uVar13 = (ulonglong)(*puVar15 & 0x1ff);
                  lVar3 = *(longlong *)
                           ((param_2->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                           (ulonglong)(*puVar15 >> 9) * 8);
                  local_100 = *(undefined8 *)(lVar3 + uVar13 * 0xc);
                  local_f8 = *(float *)(lVar3 + 8 + uVar13 * 0xc);
                }
                puVar10 = &local_100;
              }
              else {
                lVar3 = *(longlong *)&param_5->field_0x48;
                uVar17 = *(int *)((longlong)local_b8 + lVar16) * 3;
                local_d0 = *(undefined4 *)
                            (*(longlong *)(lVar3 + (ulonglong)(uVar17 >> 9) * 8) +
                            (ulonglong)(uVar17 & 0x1ff) * 4);
                uStack_cc = *(undefined4 *)
                             (*(longlong *)(lVar3 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                             (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
                puVar10 = (undefined8 *)&local_d0;
                local_c8 = *(undefined4 *)
                            (*(longlong *)(lVar3 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                            (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
              }
              local_170 = *puVar10;
              local_168 = *(float *)(puVar10 + 1);
            }
            else {
              pTVar9 = UE::Geometry::FDynamicMesh3::GetTriNormal(param_2,&local_40,local_174);
              local_168 = (float)(pTVar9->field0_0x0)._s_0.Z;
              local_170 = CONCAT44((float)(pTVar9->field0_0x0)._s_0.Y,
                                   (float)(pTVar9->field0_0x0)._s_0.X);
            }
            local_140[0] = *puVar15;
            local_148[0] = local_174;
            local_150[0] = iVar18;
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,local_140,local_148,local_150,&local_170,
                       &local_98,&local_a8);
            local_88._s_0.Z = local_168;
            local_88._0_8_ = local_170;
            local_78._s_0.Z = local_a0;
            local_78._0_8_ = local_a8;
            local_68._s_0.Z = local_90;
            local_68._0_8_ = local_98;
            FStaticMeshVertexBuffer::SetVertexTangents
                      (&param_1->StaticMeshVertexBuffer,uVar20,(TVector<float> *)&local_68._s_0,
                       (TVector<float> *)&local_78._s_0,(TVector<float> *)&local_88._s_0);
          }
          if (param_10) {
            FVar12 = FVar14;
            if ((bVar6) && (*(int *)((longlong)&local_f0 + lVar16) != -1)) {
              FVar7 = GetOverlayColorAsFColor
                                (this,(TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>
                                       *)local_c4,(int)param_6);
              FVar12 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar7.field0_0x0);
            }
            *(FColor_u_0 *)
             ((param_1->ColorVertexBuffer).Data + uVar20 * (param_1->ColorVertexBuffer).Stride) =
                 FVar12;
          }
          uVar20 = uVar20 + 1;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 4;
        } while (iVar18 < 3);
        pFVar19 = local_e0 + 4;
        uVar13 = (ulonglong)local_138;
      }
    }
  }
  return;
}

// UpdateVertexBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable> @ 1496f66c0

void __thiscall
FMeshRenderBufferSetConversionUtil::
UpdateVertexBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable>
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,int param_3,IndexEnumerable *param_4,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_5,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_6,
          TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
          *param_7,bool param_8,bool param_9,bool param_10)

{
  double *pdVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  FColor FVar9;
  undefined8 uVar10;
  TVector<double> *pTVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined4 extraout_var;
  longlong *plVar14;
  FColor_u_0 FVar15;
  FColor_u_0 FVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  undefined8 local_180;
  float local_178;
  uint local_170 [2];
  FColor_u_0 local_168 [2];
  int local_160 [2];
  uint local_158 [2];
  uint local_150 [2];
  uint local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined1 local_e4 [4];
  FDynamicMesh3 *local_e0;
  FRefCountVector *local_d8;
  int local_d0 [4];
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  TVector<float>_u_0 local_98;
  TVector<float>_u_0 local_88;
  TVector<float>_u_0 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double> local_50;
  
  if (param_1->TriangleCount != 0) {
    if ((param_6 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) ||
       (bVar8 = true, this->bIgnoreVertexColors != false)) {
      bVar8 = false;
    }
    uVar19 = param_3 * 3;
    if ((param_8) && ((param_1->PositionVertexBuffer).NumVertices != uVar19)) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7616530887731053199>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                         ,0x28f,
                         "RenderBuffers->PositionVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar8) {
code_r0x0001496f67f3:
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else if ((param_9) && ((param_1->StaticMeshVertexBuffer).NumVertices != uVar19)) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7616530887731053200>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                         ,0x290,
                         "RenderBuffers->StaticMeshVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar8) goto code_r0x0001496f67f3;
    }
    else if ((param_10) && ((param_1->ColorVertexBuffer).NumVertices != uVar19)) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7616530887731053201>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                         ,0x291,"RenderBuffers->ColorVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar8) goto code_r0x0001496f67f3;
    }
    else {
      uVar20 = 0;
      local_d8 = param_4->Vector;
      local_148 = (local_d8->RefCounts).CurBlockUsed + (local_d8->RefCounts).CurBlock * 0x200;
      uVar19 = 0;
      if ((local_148 != 0) &&
         (pFVar3 = (local_d8->RefCounts).Blocks.AllocatorInstance.Data, uVar19 = 0,
         0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
        uVar18 = 1;
        uVar19 = 1;
        if (1 < (int)local_148) {
          do {
            sVar2 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) +
                              (ulonglong)(uVar18 & 0x1ff) * 2);
            if ((sVar2 != 0) && (uVar19 = uVar18, sVar2 != -1)) break;
            uVar18 = uVar18 + 1;
            uVar19 = uVar18;
          } while ((int)uVar18 < (int)local_148);
        }
      }
      if (uVar19 != local_148) {
LAB_1496f68a0:
        do {
          lVar17 = *(longlong *)
                    ((param_2->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar19 >> 9) * 8);
          local_130 = *(undefined8 *)(lVar17 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
          local_128 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
          if ((param_9) &&
             (param_5 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
            lVar17 = *(longlong *)&param_5->field_0x78;
            uVar18 = uVar19 * 3;
            local_120._4_4_ =
                 *(undefined4 *)
                  (*(longlong *)(lVar17 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                  (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
            local_120._0_4_ =
                 *(undefined4 *)
                  (*(longlong *)(lVar17 + (ulonglong)(uVar18 >> 9) * 8) +
                  (ulonglong)(uVar18 & 0x1ff) * 4);
            local_d0[2] = *(undefined4 *)
                           (*(longlong *)(lVar17 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                           (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
          }
          else {
            local_120 = 0;
            local_d0[2] = 0;
          }
          uVar18 = uVar19 * 3;
          iVar22 = 0;
          local_d0[0] = (undefined4)local_120;
          local_d0[1] = local_120._4_4_;
          if ((param_10) &&
             (param_6 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) {
            lVar17 = *(longlong *)&param_6->field_0x78;
            FVar16 = (this->ConstantVertexColor).field0_0x0;
            local_140 = CONCAT44(*(undefined4 *)
                                  (*(longlong *)(lVar17 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                                  (ulonglong)(uVar18 + 1 & 0x1ff) * 4),
                                 *(undefined4 *)
                                  (*(longlong *)(lVar17 + (ulonglong)(uVar18 >> 9) * 8) +
                                  (ulonglong)(uVar18 & 0x1ff) * 4));
            local_100 = local_140;
            local_f8 = *(undefined4 *)
                        (*(longlong *)(lVar17 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                        (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
LAB_1496f69e2:
            local_140 = local_100;
            if ((this->bUsePerTriangleColor != false) &&
               (*(void **)&this->PerTriangleColorFunc != (void *)0x0)) {
              local_170[0] = uVar19;
              local_e0 = param_2;
              UE::Core::Private::Function::CheckCallable(*(void **)&this->PerTriangleColorFunc);
              plVar4 = *(longlong **)&(this->PerTriangleColorFunc).field_0x28;
              pcVar7 = *(code **)&this->PerTriangleColorFunc;
              plVar14 = (longlong *)&(this->PerTriangleColorFunc).field_0x10;
              if (plVar4 != (longlong *)0x0) {
                plVar14 = plVar4;
              }
              uVar10 = (**(code **)(*plVar14 + 8))();
              (*pcVar7)(local_168,uVar10,&local_e0,local_170);
              bVar8 = false;
              FVar16 = local_168[0];
            }
          }
          else {
            FVar16 = (this->ConstantVertexColor).field0_0x0;
            local_140 = 0;
            local_100 = 0;
            local_f8 = 0;
            if (param_10) goto LAB_1496f69e2;
          }
          lVar17 = 0;
          do {
            if (param_8) {
              uVar12 = (ulonglong)(*(uint *)((longlong)&local_130 + lVar17) & 0x1ff);
              lVar5 = *(longlong *)
                       ((param_2->Vertices).Blocks.AllocatorInstance.Data +
                       (ulonglong)(*(uint *)((longlong)&local_130 + lVar17) >> 9) * 8);
              puVar6 = (param_1->PositionVertexBuffer).Data;
              pdVar1 = (double *)(lVar5 + uVar12 * 0x18);
              local_68 = *pdVar1;
              dStack_60 = pdVar1[1];
              local_58 = *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
              uVar12 = (ulonglong)(uVar20 * (param_1->PositionVertexBuffer).Stride);
              *(float *)(puVar6 + uVar12) = (float)local_68;
              *(float *)(puVar6 + uVar12 + 4) = (float)dStack_60;
              *(float *)(puVar6 + uVar12 + 8) = (float)local_58;
            }
            puVar21 = (uint *)((longlong)&local_130 + lVar17);
            if (param_9) {
              if (this->bUsePerTriangleNormals == false) {
                if ((param_5 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)
                   || (*(int *)((longlong)local_d0 + lVar17) == -1)) {
                  puVar21 = (uint *)((longlong)&local_130 + lVar17);
                  local_110 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
                  local_108 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
                  if ((param_2->VertexNormals).bIsSet != false) {
                    uVar12 = (ulonglong)(*puVar21 & 0x1ff);
                    lVar5 = *(longlong *)
                             ((param_2->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                             (ulonglong)(*puVar21 >> 9) * 8);
                    local_110 = *(undefined8 *)(lVar5 + uVar12 * 0xc);
                    local_108 = *(float *)(lVar5 + 8 + uVar12 * 0xc);
                  }
                  puVar13 = &local_110;
                }
                else {
                  lVar5 = *(longlong *)&param_5->field_0x48;
                  uVar18 = *(int *)((longlong)local_d0 + lVar17) * 3;
                  local_f0 = *(undefined4 *)
                              (*(longlong *)(lVar5 + (ulonglong)(uVar18 >> 9) * 8) +
                              (ulonglong)(uVar18 & 0x1ff) * 4);
                  uStack_ec = *(undefined4 *)
                               (*(longlong *)(lVar5 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                               (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
                  puVar13 = (undefined8 *)&local_f0;
                  local_e8 = *(undefined4 *)
                              (*(longlong *)(lVar5 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                              (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
                }
                local_180 = *puVar13;
                local_178 = *(float *)(puVar13 + 1);
              }
              else {
                pTVar11 = UE::Geometry::FDynamicMesh3::GetTriNormal(param_2,&local_50,uVar19);
                local_178 = (float)(pTVar11->field0_0x0)._s_0.Z;
                local_180 = CONCAT44((float)(pTVar11->field0_0x0)._s_0.Y,
                                     (float)(pTVar11->field0_0x0)._s_0.X);
              }
              local_150[0] = *puVar21;
              local_160[0] = iVar22;
              local_158[0] = uVar19;
              (**(code **)param_7)
                        (*(undefined8 *)&param_7->field_0x8,local_150,local_158,local_160,&local_180
                         ,&local_b0,&local_c0);
              local_98._s_0.Z = local_178;
              local_98._0_8_ = local_180;
              local_88._s_0.Z = local_b8;
              local_88._0_8_ = local_c0;
              local_78._s_0.Z = local_a8;
              local_78._0_8_ = local_b0;
              FStaticMeshVertexBuffer::SetVertexTangents
                        (&param_1->StaticMeshVertexBuffer,uVar20,(TVector<float> *)&local_78._s_0,
                         (TVector<float> *)&local_88._s_0,(TVector<float> *)&local_98._s_0);
            }
            if (param_10) {
              FVar15 = FVar16;
              if ((bVar8) && (*(int *)((longlong)&local_100 + lVar17) != -1)) {
                FVar9 = GetOverlayColorAsFColor
                                  (this,(TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>
                                         *)local_e4,(int)param_6);
                FVar15 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar9.field0_0x0);
              }
              *(FColor_u_0 *)
               ((param_1->ColorVertexBuffer).Data + uVar20 * (param_1->ColorVertexBuffer).Stride) =
                   FVar15;
            }
            uVar20 = uVar20 + 1;
            iVar22 = iVar22 + 1;
            lVar17 = lVar17 + 4;
          } while (iVar22 < 3);
          uVar19 = uVar19 + 1;
          if ((int)uVar19 < (int)local_148) {
            do {
              lVar17 = *(longlong *)
                        ((local_d8->RefCounts).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar19 >> 9) * 8);
              if ((*(short *)(lVar17 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
                 (*(short *)(lVar17 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) goto LAB_1496f68a0;
              uVar19 = uVar19 + 1;
            } while ((int)uVar19 < (int)local_148);
          }
        } while (uVar19 != local_148);
      }
    }
  }
  return;
}

// UpdateVertexUVBufferFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 1496f6dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshRenderBufferSetConversionUtil::
UpdateVertexUVBufferFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedDefaultAllocator<32>_>
          *param_5)

{
  TVector2<float>_u_0 *pTVar1;
  ushort *puVar2;
  int iVar3;
  uchar *puVar4;
  FStaticMeshVertexDataInterface FVar5;
  code *pcVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  TVector2<float>_u_0 TVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *pTVar19;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [2];
  ushort local_106;
  ushort local_104 [2];
  uint local_100;
  uint local_fc;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *local_d0;
  longlong local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  FMeshRenderBufferSet *local_b0;
  FScriptContainerElement *local_a8;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> local_a0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_1->TriangleCount != 0) {
    local_b0 = param_1;
    if ((param_1->StaticMeshVertexBuffer).NumVertices == param_3 * 3) {
      iVar3 = param_5->ArrayNum;
      uVar11 = (param_1->StaticMeshVertexBuffer).NumTexCoords;
      lVar13 = (longlong)(int)uVar11;
      if ((int)uVar11 < iVar3) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7616530887731053280>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                           ,0x2e0,"NumUVOverlays <= NumTexCoords");
        if (bVar9) goto code_r0x0001496f6e81;
      }
      else {
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 8;
        TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_>::SetNum(&local_a0,uVar11,No);
        local_100 = 0;
        local_fc = param_4->ArrayNum;
        uVar10 = (ulonglong)(int)local_fc;
        pFVar16 = (param_4->AllocatorInstance).Data;
        local_a8 = pFVar16 + uVar10 * 4;
        local_f8 = lVar13;
        local_b8 = (longlong)iVar3;
        while( true ) {
          pFVar8 = local_a8;
          uVar11 = local_100;
          local_c0 = pFVar16;
          if (param_4->ArrayNum != (int)uVar10) {
            local_108[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_108);
            lVar13 = local_f8;
          }
          lVar7 = local_b8;
          uVar10 = 0;
          if (pFVar16 == pFVar8) break;
          iVar3 = *(int *)pFVar16;
          if (0 < lVar13) {
            pTVar19 = &local_a0;
            uVar18 = uVar10;
            do {
              uVar12 = (uint)uVar18;
              uVar11 = ~uVar12 >> 0x1f;
              if ((longlong)uVar10 < lVar7) {
                uVar17 = 0;
                if ((int)uVar12 < param_5->ArrayNum) {
                  uVar17 = uVar11;
                }
                if ((uVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(longlong *)((param_5->AllocatorInstance).Data + uVar10 * 8) == 0)
                goto LAB_1496f7074;
                uVar17 = 0;
                if ((int)uVar12 < param_5->ArrayNum) {
                  uVar17 = uVar11;
                }
                if ((uVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar17 = iVar3 * 3;
                lVar13 = *(longlong *)
                          (*(longlong *)((param_5->AllocatorInstance).Data + uVar10 * 8) + 0x78);
                local_f0 = CONCAT44(*(undefined4 *)
                                     (*(longlong *)(lVar13 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                                     (ulonglong)(uVar17 + 1 & 0x1ff) * 4),
                                    *(undefined4 *)
                                     (*(longlong *)(lVar13 + (ulonglong)(uVar17 >> 9) * 8) +
                                     (ulonglong)(uVar17 & 0x1ff) * 4));
                uVar14 = *(undefined4 *)
                          (*(longlong *)(lVar13 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                          (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
              }
              else {
LAB_1496f7074:
                local_f0 = 0xffffffffffffffff;
                uVar14 = 0xffffffff;
              }
              uVar17 = 0;
              if ((int)uVar12 < local_a0.ArrayNum) {
                uVar17 = uVar11;
              }
              if ((uVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar18 = (ulonglong)(uVar12 + 1);
              uVar10 = uVar10 + 1;
              *(undefined8 *)(pTVar19->AllocatorInstance).InlineData[0].Pad = local_f0;
              *(undefined4 *)((pTVar19->AllocatorInstance).InlineData[0].Pad + 8) = uVar14;
              pTVar19 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                        ((pTVar19->AllocatorInstance).InlineData + 1);
              lVar13 = local_f8;
              param_1 = local_b0;
              uVar11 = local_100;
            } while ((longlong)uVar10 < local_f8);
          }
          local_d0 = &local_a0;
          local_c8 = 3;
          do {
            uVar18 = 0;
            uVar10 = uVar18;
            pTVar19 = local_d0;
            if (0 < lVar13) {
              do {
                uVar17 = (uint)uVar18;
                uVar12 = ~uVar17 >> 0x1f;
                uVar11 = 0;
                if ((int)uVar17 < local_a0.ArrayNum) {
                  uVar11 = uVar12;
                }
                if ((uVar11 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                TVar15 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                if (*(int *)(pTVar19->AllocatorInstance).InlineData[0].Pad != -1) {
                  uVar11 = 0;
                  if ((int)uVar17 < param_5->ArrayNum) {
                    uVar11 = uVar12;
                  }
                  if ((uVar11 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar13 = *(longlong *)((param_5->AllocatorInstance).Data + uVar10 * 8);
                  uVar11 = 0;
                  if ((int)uVar17 < local_a0.ArrayNum) {
                    uVar11 = uVar12;
                  }
                  if ((uVar11 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar11 = *(uint *)(pTVar19->AllocatorInstance).InlineData[0].Pad;
                  lVar13 = *(longlong *)(lVar13 + 0x48);
                  local_e0 = *(undefined4 *)
                              (*(longlong *)(lVar13 + (ulonglong)((uVar11 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar11 * 2 & 0x1ff) * 4);
                  uStack_dc = *(undefined4 *)
                               (*(longlong *)(lVar13 + (ulonglong)((uVar11 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar11 * 2 + 1 & 0x1ff) * 4);
                  TVar15._s_0.Y = (float)uStack_dc;
                  TVar15._s_0.X = (float)local_e0;
                }
                puVar4 = (param_1->StaticMeshVertexBuffer).TexcoordDataPtr;
                FVar5 = *(param_1->StaticMeshVertexBuffer).TexcoordData;
                lVar13 = (ulonglong)(param_1->StaticMeshVertexBuffer).NumTexCoords *
                         (ulonglong)local_100 + uVar18;
                local_d8 = TVar15;
                if ((param_1->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
                  puVar2 = (ushort *)(puVar4 + lVar13 * 4);
                  lVar13 = (**(code **)((longlong)FVar5 + 0x50))();
                  if ((puVar4 + lVar13 < puVar2 + 2) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                         ,0x166,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if ((puVar2 < (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                         ,0x167,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_106 = 0;
                  FGenericPlatformMath::StoreHalf(&local_106,(float)local_d8);
                  *puVar2 = local_106;
                  local_104[0] = 0;
                  FGenericPlatformMath::StoreHalf(local_104,local_d8._4_4_);
                  puVar2[1] = local_104[0];
                }
                else {
                  pTVar1 = (TVector2<float>_u_0 *)(puVar4 + lVar13 * 8);
                  lVar13 = (**(code **)((longlong)FVar5 + 0x50))();
                  if (((TVector2<float>_u_0 *)(puVar4 + lVar13) < pTVar1 + 1) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                         ,0x15d,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if ((pTVar1 < (TVector2<float>_u_0 *)
                                (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                         ,0x15e,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pTVar1->_s_0 = (TVector2<float>_u_0_s_0)TVar15;
                }
                uVar18 = (ulonglong)(uVar17 + 1);
                uVar10 = uVar10 + 1;
                lVar13 = local_f8;
                pTVar19 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                          ((pTVar19->AllocatorInstance).InlineData + 1);
                uVar11 = local_100;
              } while ((longlong)uVar10 < local_f8);
            }
            uVar11 = uVar11 + 1;
            local_d0 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                       ((local_d0->AllocatorInstance).InlineData[0].Pad + 4);
            local_c8 = local_c8 + -1;
            local_100 = uVar11;
          } while (local_c8 != 0);
          pFVar16 = local_c0 + 4;
          uVar10 = (ulonglong)local_fc;
          local_c8 = 0;
        }
      }
    }
    else {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7616530887731053273>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                         ,0x2d9,
                         "RenderBuffers->StaticMeshVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar9) {
code_r0x0001496f6e81:
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  return;
}

// UpdateVertexUVBufferFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 1496f7490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshRenderBufferSetConversionUtil::
UpdateVertexUVBufferFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  TVector2<float>_u_0 *pTVar1;
  ushort *puVar2;
  int iVar3;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar4;
  uchar *puVar5;
  FStaticMeshVertexDataInterface FVar6;
  code *pcVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *pTVar16;
  TVector2<float>_u_0 TVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [2];
  ushort local_106;
  ushort local_104 [2];
  uint local_100;
  uint local_fc;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *local_d0;
  longlong local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  FMeshRenderBufferSet *local_b0;
  FScriptContainerElement *local_a8;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> local_a0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_1->TriangleCount != 0) {
    local_b0 = param_1;
    if ((param_1->StaticMeshVertexBuffer).NumVertices == param_3 * 3) {
      iVar3 = param_5->ArrayNum;
      uVar13 = (param_1->StaticMeshVertexBuffer).NumTexCoords;
      lVar15 = (longlong)(int)uVar13;
      if ((int)uVar13 < iVar3) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7616530887731053280>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                            ,0x2e0,"NumUVOverlays <= NumTexCoords");
        if (bVar10) goto code_r0x0001496f7551;
      }
      else {
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 8;
        TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_>::SetNum(&local_a0,uVar13,No);
        local_100 = 0;
        local_fc = param_4->ArrayNum;
        uVar12 = (ulonglong)(int)local_fc;
        pFVar18 = (param_4->AllocatorInstance).Data;
        local_a8 = pFVar18 + uVar12 * 4;
        local_f8 = lVar15;
        local_b8 = (longlong)iVar3;
        while( true ) {
          pFVar9 = local_a8;
          uVar13 = local_100;
          local_c0 = pFVar18;
          if (param_4->ArrayNum != (int)uVar12) {
            local_108[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_108);
            lVar15 = local_f8;
          }
          lVar8 = local_b8;
          uVar12 = 0;
          if (pFVar18 == pFVar9) break;
          iVar3 = *(int *)pFVar18;
          if (0 < lVar15) {
            pTVar16 = &local_a0;
            uVar20 = uVar12;
            do {
              uVar14 = (uint)uVar20;
              uVar13 = ~uVar14 >> 0x1f;
              if ((longlong)uVar12 < lVar8) {
                uVar19 = 0;
                if ((int)uVar14 < param_5->ArrayNum) {
                  uVar19 = uVar13;
                }
                if ((uVar19 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar4 = (param_5->AllocatorInstance).SecondaryData;
                FVar11 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                          )param_5;
                if (FVar4 != (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                              )0x0) {
                  FVar11 = FVar4;
                }
                if (*(longlong *)((longlong)FVar11 + uVar12 * 8) == 0) goto LAB_1496f775a;
                uVar19 = 0;
                if ((int)uVar14 < param_5->ArrayNum) {
                  uVar19 = uVar13;
                }
                if ((uVar19 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar4 = (param_5->AllocatorInstance).SecondaryData;
                uVar19 = iVar3 * 3;
                FVar11 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                          )param_5;
                if (FVar4 != (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                              )0x0) {
                  FVar11 = FVar4;
                }
                lVar15 = *(longlong *)(*(longlong *)((longlong)FVar11 + uVar12 * 8) + 0x78);
                local_f0 = CONCAT44(*(undefined4 *)
                                     (*(longlong *)(lVar15 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                                     (ulonglong)(uVar19 + 1 & 0x1ff) * 4),
                                    *(undefined4 *)
                                     (*(longlong *)(lVar15 + (ulonglong)(uVar19 >> 9) * 8) +
                                     (ulonglong)(uVar19 & 0x1ff) * 4));
                uVar21 = *(undefined4 *)
                          (*(longlong *)(lVar15 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                          (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
              }
              else {
LAB_1496f775a:
                local_f0 = 0xffffffffffffffff;
                uVar21 = 0xffffffff;
              }
              uVar19 = 0;
              if ((int)uVar14 < local_a0.ArrayNum) {
                uVar19 = uVar13;
              }
              if ((uVar19 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar20 = (ulonglong)(uVar14 + 1);
              uVar12 = uVar12 + 1;
              *(undefined8 *)(pTVar16->AllocatorInstance).InlineData[0].Pad = local_f0;
              *(undefined4 *)((pTVar16->AllocatorInstance).InlineData[0].Pad + 8) = uVar21;
              pTVar16 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                        ((pTVar16->AllocatorInstance).InlineData + 1);
              lVar15 = local_f8;
              param_1 = local_b0;
              uVar13 = local_100;
            } while ((longlong)uVar12 < local_f8);
          }
          local_d0 = &local_a0;
          local_c8 = 3;
          do {
            uVar20 = 0;
            uVar12 = uVar20;
            pTVar16 = local_d0;
            if (0 < lVar15) {
              do {
                uVar19 = (uint)uVar20;
                uVar14 = ~uVar19 >> 0x1f;
                uVar13 = 0;
                if ((int)uVar19 < local_a0.ArrayNum) {
                  uVar13 = uVar14;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                TVar17 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                if (*(int *)(pTVar16->AllocatorInstance).InlineData[0].Pad != -1) {
                  uVar13 = 0;
                  if ((int)uVar19 < param_5->ArrayNum) {
                    uVar13 = uVar14;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  FVar4 = (param_5->AllocatorInstance).SecondaryData;
                  FVar11 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                            )param_5;
                  if (FVar4 != (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                                )0x0) {
                    FVar11 = FVar4;
                  }
                  lVar15 = *(longlong *)((longlong)FVar11 + uVar12 * 8);
                  uVar13 = 0;
                  if ((int)uVar19 < local_a0.ArrayNum) {
                    uVar13 = uVar14;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar13 = *(uint *)(pTVar16->AllocatorInstance).InlineData[0].Pad;
                  lVar15 = *(longlong *)(lVar15 + 0x48);
                  local_e0 = *(undefined4 *)
                              (*(longlong *)(lVar15 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
                  uStack_dc = *(undefined4 *)
                               (*(longlong *)(lVar15 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4);
                  TVar17._s_0.Y = (float)uStack_dc;
                  TVar17._s_0.X = (float)local_e0;
                }
                puVar5 = (param_1->StaticMeshVertexBuffer).TexcoordDataPtr;
                FVar6 = *(param_1->StaticMeshVertexBuffer).TexcoordData;
                lVar15 = (ulonglong)(param_1->StaticMeshVertexBuffer).NumTexCoords *
                         (ulonglong)local_100 + uVar20;
                local_d8 = TVar17;
                if ((param_1->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
                  puVar2 = (ushort *)(puVar5 + lVar15 * 4);
                  lVar15 = (**(code **)((longlong)FVar6 + 0x50))();
                  if ((puVar5 + lVar15 < puVar2 + 2) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x166,L""), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar2 < (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x167,L""), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_106 = 0;
                  FGenericPlatformMath::StoreHalf(&local_106,(float)local_d8);
                  *puVar2 = local_106;
                  local_104[0] = 0;
                  FGenericPlatformMath::StoreHalf(local_104,local_d8._4_4_);
                  puVar2[1] = local_104[0];
                }
                else {
                  pTVar1 = (TVector2<float>_u_0 *)(puVar5 + lVar15 * 8);
                  lVar15 = (**(code **)((longlong)FVar6 + 0x50))();
                  if (((TVector2<float>_u_0 *)(puVar5 + lVar15) < pTVar1 + 1) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15d,L""), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((pTVar1 < (TVector2<float>_u_0 *)
                                (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15e,L""), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pTVar1->_s_0 = (TVector2<float>_u_0_s_0)TVar17;
                }
                uVar20 = (ulonglong)(uVar19 + 1);
                uVar12 = uVar12 + 1;
                lVar15 = local_f8;
                pTVar16 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                          ((pTVar16->AllocatorInstance).InlineData + 1);
                uVar13 = local_100;
              } while ((longlong)uVar12 < local_f8);
            }
            uVar13 = uVar13 + 1;
            local_d0 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                       ((local_d0->AllocatorInstance).InlineData[0].Pad + 4);
            local_c8 = local_c8 + -1;
            local_100 = uVar13;
          } while (local_c8 != 0);
          pFVar18 = local_c0 + 4;
          uVar12 = (ulonglong)local_fc;
          local_c8 = 0;
        }
      }
    }
    else {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7616530887731053273>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                          ,0x2d9,
                          "RenderBuffers->StaticMeshVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar10) {
code_r0x0001496f7551:
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  return;
}

// UpdateVertexUVBufferFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 1496f7b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshRenderBufferSetConversionUtil::
UpdateVertexUVBufferFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,int param_3,IndexEnumerable *param_4,
          TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  TVector2<float>_u_0 *pTVar1;
  ushort *puVar2;
  short sVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar6;
  longlong lVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  longlong lVar11;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  TVector2<float>_u_0 TVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *pTVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStackY_138 [32];
  ushort local_108;
  ushort local_106;
  uint local_104;
  uint local_100;
  longlong local_f8;
  uint local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *local_c8;
  longlong local_c0;
  longlong local_b8;
  FMeshRenderBufferSet *local_b0;
  FRefCountVector *local_a8;
  TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> local_a0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_1->TriangleCount != 0) {
    local_b0 = param_1;
    if ((param_1->StaticMeshVertexBuffer).NumVertices == param_3 * 3) {
      iVar4 = param_5->ArrayNum;
      uVar18 = (param_1->StaticMeshVertexBuffer).NumTexCoords;
      if ((int)uVar18 < iVar4) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7616530887731053280>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                            ,0x2e0,"NumUVOverlays <= NumTexCoords");
        if (bVar10) goto code_r0x0001496f7c41;
      }
      else {
        uVar13 = 0;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 8;
        TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_>::SetNum(&local_a0,uVar18,No);
        local_100 = 0;
        local_104 = 0;
        local_a8 = param_4->Vector;
        local_f0 = (local_a8->RefCounts).CurBlockUsed + (local_a8->RefCounts).CurBlock * 0x200;
        uVar22 = uVar13;
        if ((local_f0 != 0) &&
           (pFVar5 = (local_a8->RefCounts).Blocks.AllocatorInstance.Data, uVar22 = 0,
           0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
          uVar22 = 1;
          local_104 = 1;
          if (1 < (int)local_f0) {
            do {
              sVar3 = *(short *)(*(longlong *)(pFVar5 + (uVar22 >> 9) * 8) +
                                (ulonglong)((uint)uVar22 & 0x1ff) * 2);
              if ((sVar3 != 0) && (sVar3 != -1)) break;
              uVar21 = (uint)uVar22 + 1;
              uVar22 = (ulonglong)uVar21;
            } while ((int)uVar21 < (int)local_f0);
            local_104 = (uint)uVar22;
          }
        }
        local_f8 = (longlong)(int)uVar18;
        local_b8 = (longlong)iVar4;
        if ((uint)uVar22 != local_f0) {
LAB_1496f7d40:
          do {
            lVar11 = local_b8;
            uVar14 = 0;
            if (0 < local_f8) {
              pTVar20 = &local_a0;
              uVar13 = uVar14;
              do {
                uVar18 = (uint)uVar13;
                if ((longlong)uVar14 < lVar11) {
                  uVar16 = ~uVar18 >> 0x1f;
                  uVar21 = 0;
                  if ((int)uVar18 < param_5->ArrayNum) {
                    uVar21 = uVar16;
                  }
                  if ((uVar21 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar6 = (param_5->AllocatorInstance).SecondaryData;
                  FVar12 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                            )param_5;
                  if (FVar6 != (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                                )0x0) {
                    FVar12 = FVar6;
                  }
                  if (*(longlong *)((longlong)FVar12 + uVar14 * 8) == 0) goto LAB_1496f7e84;
                  uVar21 = 0;
                  if ((int)uVar18 < param_5->ArrayNum) {
                    uVar21 = uVar16;
                  }
                  if ((uVar21 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar6 = (param_5->AllocatorInstance).SecondaryData;
                  uVar21 = (int)uVar22 * 3;
                  FVar12 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                            )param_5;
                  if (FVar6 != (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                                )0x0) {
                    FVar12 = FVar6;
                  }
                  lVar7 = *(longlong *)(*(longlong *)((longlong)FVar12 + uVar14 * 8) + 0x78);
                  local_e8 = CONCAT44(*(undefined4 *)
                                       (*(longlong *)(lVar7 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                                       (ulonglong)(uVar21 + 1 & 0x1ff) * 4),
                                      *(undefined4 *)
                                       (*(longlong *)(lVar7 + (ulonglong)(uVar21 >> 9) * 8) +
                                       (ulonglong)(uVar21 & 0x1ff) * 4));
                  uVar17 = *(undefined4 *)
                            (*(longlong *)(lVar7 + (ulonglong)(uVar21 + 2 >> 9) * 8) +
                            (ulonglong)(uVar21 + 2 & 0x1ff) * 4);
                }
                else {
LAB_1496f7e84:
                  local_e8 = 0xffffffffffffffff;
                  uVar17 = 0xffffffff;
                }
                uVar21 = 0;
                if ((int)uVar18 < local_a0.ArrayNum) {
                  uVar21 = ~uVar18 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar13 = (ulonglong)(uVar18 + 1);
                uVar14 = uVar14 + 1;
                *(undefined8 *)(pTVar20->AllocatorInstance).InlineData[0].Pad = local_e8;
                *(undefined4 *)((pTVar20->AllocatorInstance).InlineData[0].Pad + 8) = uVar17;
                pTVar20 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                          ((pTVar20->AllocatorInstance).InlineData + 1);
              } while ((longlong)uVar14 < local_f8);
              uVar13 = (ulonglong)local_100;
              param_1 = local_b0;
            }
            local_c8 = &local_a0;
            local_c0 = 3;
            lVar11 = local_f8;
            do {
              uVar14 = 0;
              pTVar20 = local_c8;
              uVar22 = uVar14;
              uVar18 = (uint)uVar13;
              if (0 < lVar11) {
                do {
                  uVar19 = (uint)uVar14;
                  uVar16 = ~uVar19 >> 0x1f;
                  uVar21 = 0;
                  uVar18 = uVar21;
                  if ((int)uVar19 < local_a0.ArrayNum) {
                    uVar18 = uVar16;
                  }
                  if ((uVar18 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  TVar15 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                  if (*(int *)(pTVar20->AllocatorInstance).InlineData[0].Pad != -1) {
                    uVar18 = uVar21;
                    if ((int)uVar19 < param_5->ArrayNum) {
                      uVar18 = uVar16;
                    }
                    if ((uVar18 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    FVar6 = (param_5->AllocatorInstance).SecondaryData;
                    FVar12 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                              )param_5;
                    if (FVar6 != (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                                  )0x0) {
                      FVar12 = FVar6;
                    }
                    lVar11 = *(longlong *)((longlong)FVar12 + uVar22 * 8);
                    if ((int)uVar19 < local_a0.ArrayNum) {
                      uVar21 = uVar16;
                    }
                    if ((uVar21 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    uVar18 = *(uint *)(pTVar20->AllocatorInstance).InlineData[0].Pad;
                    lVar11 = *(longlong *)(lVar11 + 0x48);
                    local_d8 = *(undefined4 *)
                                (*(longlong *)(lVar11 + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8)
                                + (ulonglong)(uVar18 * 2 & 0x1ff) * 4);
                    uStack_d4 = *(undefined4 *)
                                 (*(longlong *)
                                   (lVar11 + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar18 * 2 + 1 & 0x1ff) * 4);
                    TVar15._s_0.Y = (float)uStack_d4;
                    TVar15._s_0.X = (float)local_d8;
                  }
                  puVar8 = (param_1->StaticMeshVertexBuffer).TexcoordDataPtr;
                  pcVar9 = *(code **)((longlong)*(param_1->StaticMeshVertexBuffer).TexcoordData +
                                     0x50);
                  lVar11 = uVar14 + (ulonglong)(param_1->StaticMeshVertexBuffer).NumTexCoords *
                                    (ulonglong)local_100;
                  local_d0 = TVar15;
                  if ((param_1->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
                    puVar2 = (ushort *)(puVar8 + lVar11 * 4);
                    lVar11 = (*pcVar9)();
                    if ((puVar8 + lVar11 < puVar2 + 2) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x166,L""), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if ((puVar2 < (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x167,L""), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    local_108 = 0;
                    FGenericPlatformMath::StoreHalf(&local_108,(float)local_d0);
                    *puVar2 = local_108;
                    local_106 = 0;
                    FGenericPlatformMath::StoreHalf(&local_106,local_d0._4_4_);
                    puVar2[1] = local_106;
                  }
                  else {
                    pTVar1 = (TVector2<float>_u_0 *)(puVar8 + lVar11 * 8);
                    lVar11 = (*pcVar9)();
                    if (((TVector2<float>_u_0 *)(puVar8 + lVar11) < pTVar1 + 1) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x15d,L""), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if ((pTVar1 < (TVector2<float>_u_0 *)
                                  (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x15e,L""), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pTVar1->_s_0 = (TVector2<float>_u_0_s_0)TVar15;
                  }
                  uVar14 = (ulonglong)(uVar19 + 1);
                  uVar22 = uVar22 + 1;
                  lVar11 = local_f8;
                  pTVar20 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                            ((pTVar20->AllocatorInstance).InlineData + 1);
                  uVar18 = local_100;
                } while ((longlong)uVar22 < local_f8);
              }
              local_100 = uVar18 + 1;
              uVar13 = (ulonglong)local_100;
              local_c8 = (TArray<UE::Geometry::FIndex3i,TFixedAllocator<8>_> *)
                         ((local_c8->AllocatorInstance).InlineData[0].Pad + 4);
              local_c0 = local_c0 + -1;
            } while (local_c0 != 0);
            local_104 = local_104 + 1;
            uVar22 = (ulonglong)local_104;
            local_c0 = 0;
            if ((int)local_104 < (int)local_f0) {
              do {
                uVar14 = (ulonglong)((uint)uVar22 & 0x1ff);
                lVar11 = *(longlong *)
                          ((local_a8->RefCounts).Blocks.AllocatorInstance.Data + (uVar22 >> 9) * 8);
                if ((*(short *)(lVar11 + uVar14 * 2) != 0) &&
                   (*(short *)(lVar11 + uVar14 * 2) != -1)) goto LAB_1496f7d40;
                local_104 = (uint)uVar22 + 1;
                uVar22 = (ulonglong)local_104;
              } while ((int)local_104 < (int)local_f0);
            }
          } while (local_104 != local_f0);
        }
      }
    }
    else {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7616530887731053273>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\MeshRenderBufferSet.h"
                          ,0x2d9,
                          "RenderBuffers->StaticMeshVertexBuffer.GetNumVertices() == NumVertices");
      if (bVar10) {
code_r0x0001496f7c41:
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  return;
}

// ~FMeshRenderBufferSetConversionUtil @ 1496fb020

void __thiscall
FMeshRenderBufferSetConversionUtil::~FMeshRenderBufferSetConversionUtil
          (FMeshRenderBufferSetConversionUtil *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->SecondaryTriFilterFunc != 0) {
    plVar1 = *(longlong **)&(this->SecondaryTriFilterFunc).field_0x28;
    plVar2 = (longlong *)&(this->SecondaryTriFilterFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->VertexColorRemappingFunc != 0) {
    plVar1 = *(longlong **)&(this->VertexColorRemappingFunc).field_0x28;
    plVar2 = (longlong *)&(this->VertexColorRemappingFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->PerTriangleColorFunc != 0) {
    plVar1 = *(longlong **)&(this->PerTriangleColorFunc).field_0x28;
    plVar2 = (longlong *)&(this->PerTriangleColorFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fb085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// operator() @ 1496fb880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FMeshRenderBufferSetConversionUtil::
InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  TVector2<float>_u_0 *pTVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  undefined8 uVar14;
  TVector<double> *pTVar15;
  undefined8 *puVar16;
  FLinearColor *pFVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  longlong lVar21;
  uint uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  TVector2<float>_u_0 TVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ushort local_res8 [4];
  ushort local_res10 [4];
  undefined4 local_res18 [2];
  uint local_res20;
  undefined8 local_238;
  undefined8 local_228;
  float local_220;
  uint local_218 [2];
  undefined4 local_210 [2];
  int local_208 [2];
  uint local_200 [2];
  undefined4 local_1f8 [2];
  uint local_1f0;
  longlong local_1e8;
  TVector4<float> local_1d8;
  undefined8 local_1c8;
  float local_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  double local_178;
  longlong local_170;
  ulonglong local_168;
  undefined8 local_160;
  uint local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  float local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_108;
  undefined8 local_f8;
  uint local_f0;
  FLinearColor local_e8;
  FLinearColor local_d8;
  TVector<double> local_c8 [5];
  
  plVar18 = *(longlong **)this;
  iVar26 = 0;
  uVar22 = 0;
  uVar30 = uVar22;
  if (param_1 < (int)plVar18[1]) {
    uVar30 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res20 = *(uint *)(*plVar18 + (longlong)param_1 * 4);
  uVar30 = local_res20 * 3;
  lVar28 = *(longlong *)
            (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x130) +
            (ulonglong)(local_res20 >> 9) * 8);
  local_1a0 = *(undefined4 *)(lVar28 + 8 + (ulonglong)(local_res20 & 0x1ff) * 0xc);
  local_1a8 = *(undefined8 *)(lVar28 + (ulonglong)(local_res20 & 0x1ff) * 0xc);
  if (**(longlong **)((longlong)this + 0x10) == 0) {
    local_238 = 0;
    local_158 = uVar22;
  }
  else {
    lVar28 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x78);
    local_238 = CONCAT44(*(undefined4 *)
                          (*(longlong *)(lVar28 + (ulonglong)(uVar30 + 1 >> 9) * 8) +
                          (ulonglong)(uVar30 + 1 & 0x1ff) * 4),
                         *(undefined4 *)
                          (*(longlong *)(lVar28 + (ulonglong)(uVar30 >> 9) * 8) +
                          (ulonglong)(uVar30 & 0x1ff) * 4));
    local_158 = *(uint *)(*(longlong *)(lVar28 + (ulonglong)(uVar30 + 2 >> 9) * 8) +
                         (ulonglong)(uVar30 + 2 & 0x1ff) * 4);
  }
  local_168 = (ulonglong)uVar30;
  local_160 = local_238;
  if (**(longlong **)((longlong)this + 0x18) == 0) {
    local_238 = 0;
  }
  else {
    lVar28 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x78);
    local_238 = CONCAT44(*(undefined4 *)
                          (*(longlong *)(lVar28 + (ulonglong)(uVar30 + 1 >> 9) * 8) +
                          (ulonglong)(uVar30 + 1 & 0x1ff) * 4),
                         *(undefined4 *)
                          (*(longlong *)(lVar28 + (ulonglong)(uVar30 >> 9) * 8) +
                          (ulonglong)(uVar30 & 0x1ff) * 4));
    uVar22 = *(uint *)(*(longlong *)(lVar28 + (ulonglong)(uVar30 + 2 >> 9) * 8) +
                      (ulonglong)(uVar30 + 2 & 0x1ff) * 4);
  }
  puVar4 = *(undefined4 **)((longlong)this + 0x20);
  local_f8 = local_238;
  local_f0 = uVar22;
  uVar20 = *puVar4;
  if ((*(char *)((longlong)puVar4 + 5) != '\0') && (*(void **)(puVar4 + 4) != (void *)0x0)) {
    local_218[0] = local_res20;
    local_170 = **(longlong **)((longlong)this + 8);
    UE::Core::Private::Function::CheckCallable(*(void **)(puVar4 + 4));
    pcVar6 = *(code **)(puVar4 + 4);
    plVar18 = (longlong *)(puVar4 + 8);
    if (*(longlong **)(puVar4 + 0xe) != (longlong *)0x0) {
      plVar18 = *(longlong **)(puVar4 + 0xe);
    }
    uVar14 = (**(code **)(*plVar18 + 8))();
    (*pcVar6)(local_210,uVar14,&local_170,local_218);
    **(undefined1 **)((longlong)this + 0x28) = 0;
    uVar20 = local_210[0];
  }
  fVar11 = __real_437f0000;
  fVar10 = __real_3b808081;
  fVar9 = __real_3f000000;
  fVar8 = __real_3f800000;
  local_1f0 = param_1 * 3;
  lVar28 = 0;
  uVar22 = local_1f0;
  do {
    uVar25 = (ulonglong)(*(uint *)((longlong)&local_1a8 + lVar28) >> 9);
    uVar24 = (ulonglong)(*(uint *)((longlong)&local_1a8 + lVar28) & 0x1ff);
    lVar29 = *(longlong *)(*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + uVar25 * 8);
    pdVar1 = (double *)(lVar29 + uVar24 * 0x18);
    dVar7 = pdVar1[1];
    local_178 = *(double *)(lVar29 + 0x10 + uVar24 * 0x18);
    lVar29 = *(longlong *)(**(longlong **)((longlong)this + 0x30) + 0x100);
    uVar19 = (ulonglong)(uVar22 * *(int *)(**(longlong **)((longlong)this + 0x30) + 0x108));
    *(float *)(uVar19 + lVar29) = (float)*pdVar1;
    *(float *)(uVar19 + 4 + lVar29) = (float)dVar7;
    *(float *)(uVar19 + 8 + lVar29) = (float)local_178;
    if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x81) == '\0') {
      if ((**(longlong **)((longlong)this + 0x10) == 0) ||
         (*(int *)((longlong)&local_160 + lVar28) == -1)) {
        local_1c8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        local_1c0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        if (*(char *)(**(longlong **)((longlong)this + 8) + 0x70) != '\0') {
          lVar29 = *(longlong *)
                    (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) + uVar25 * 8);
          local_1c8 = *(undefined8 *)(lVar29 + uVar24 * 0xc);
          local_1c0 = *(float *)(lVar29 + 8 + uVar24 * 0xc);
        }
        puVar16 = &local_1c8;
      }
      else {
        lVar29 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x48);
        uVar30 = *(int *)((longlong)&local_160 + lVar28) * 3;
        local_1b4 = *(undefined4 *)
                     (*(longlong *)(lVar29 + (ulonglong)(uVar30 >> 9) * 8) +
                     (ulonglong)(uVar30 & 0x1ff) * 4);
        uStack_1b0 = *(undefined4 *)
                      (*(longlong *)(lVar29 + (ulonglong)(uVar30 + 1 >> 9) * 8) +
                      (ulonglong)(uVar30 + 1 & 0x1ff) * 4);
        puVar16 = (undefined8 *)&local_1b4;
        local_1ac = *(undefined4 *)
                     (*(longlong *)(lVar29 + (ulonglong)(uVar30 + 2 >> 9) * 8) +
                     (ulonglong)(uVar30 + 2 & 0x1ff) * 4);
      }
      local_228 = *puVar16;
      local_220 = *(float *)(puVar16 + 1);
    }
    else {
      pTVar15 = UE::Geometry::FDynamicMesh3::GetTriNormal
                          ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),local_c8,
                           local_res20);
      local_220 = (float)(pTVar15->field0_0x0)._s_0.Z;
      local_228 = CONCAT44((float)(pTVar15->field0_0x0)._s_0.Y,(float)(pTVar15->field0_0x0)._s_0.X);
    }
    local_1f8[0] = *(undefined4 *)((longlong)&local_1a8 + lVar28);
    local_200[0] = local_res20;
    local_208[0] = iVar26;
    (*(code *)**(undefined8 **)((longlong)this + 0x38))
              ((*(undefined8 **)((longlong)this + 0x38))[1],local_1f8,local_200,local_208,&local_228
               ,&local_140,&local_150);
    local_128._s_0.Z = local_220;
    local_118._s_0.Z = local_148;
    local_108._s_0.Z = local_138;
    local_128._0_8_ = local_228;
    local_118._0_8_ = local_150;
    local_108._0_8_ = local_140;
    FStaticMeshVertexBuffer::SetVertexTangents
              ((FStaticMeshVertexBuffer *)(**(longlong **)((longlong)this + 0x30) + 0x10),uVar22,
               (TVector<float> *)&local_108._s_0,(TVector<float> *)&local_118._s_0,
               (TVector<float> *)&local_128._s_0);
    uVar23 = uVar20;
    if ((**(char **)((longlong)this + 0x28) != '\0') &&
       (uVar30 = *(uint *)((longlong)&local_f8 + lVar28), uVar30 != 0xffffffff)) {
      uVar13 = uVar30 * 4;
      lVar29 = *(longlong *)((longlong)this + 0x20);
      lVar21 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x48);
      local_1d8.field0_0x0._s_0.Y =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar21 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.X =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar21 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar13 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.W =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar21 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar13 + 3 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.Z =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar21 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
      if (*(char *)(lVar29 + 0x40) != '\0') {
        UE::Core::Private::Function::CheckCallable(*(void **)(lVar29 + 0x50));
        pcVar6 = *(code **)(lVar29 + 0x50);
        plVar18 = (longlong *)(lVar29 + 0x60);
        if (*(longlong **)(lVar29 + 0x78) != (longlong *)0x0) {
          plVar18 = *(longlong **)(lVar29 + 0x78);
        }
        uVar14 = (**(code **)(*plVar18 + 8))();
        (*pcVar6)(uVar14,&local_1d8);
      }
      if (*(char *)(lVar29 + 0x80) == '\x02') {
        pFVar17 = FLinearColor::FLinearColor(&local_e8,&local_1d8);
        fVar34 = (pFVar17->field0_0x0)._s_0.R;
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        if (fVar8 <= fVar34) {
          fVar34 = fVar8;
        }
        fVar31 = (pFVar17->field0_0x0)._s_0.G;
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        fVar34 = FLinearColor::sRGBToLinearTable[(int)(fVar34 * fVar11 + fVar9) & 0xff];
        if (fVar8 <= fVar31) {
          fVar31 = fVar8;
        }
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        if (fVar8 <= fVar34) {
          fVar34 = fVar8;
        }
        fVar33 = (pFVar17->field0_0x0)._s_0.A;
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        fVar31 = FLinearColor::sRGBToLinearTable[(int)(fVar31 * fVar11 + fVar9) & 0xff];
        if (fVar8 <= fVar33) {
          fVar33 = fVar8;
        }
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        if (fVar8 <= fVar31) {
          fVar31 = fVar8;
        }
        fVar32 = (pFVar17->field0_0x0)._s_0.B;
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        if (fVar8 <= fVar32) {
          fVar32 = fVar8;
        }
        fVar33 = (float)((int)(fVar33 * fVar11 + fVar9) & 0xff) * fVar10;
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        if (fVar8 <= fVar33) {
          fVar33 = fVar8;
        }
        fVar32 = FLinearColor::sRGBToLinearTable[(int)(fVar32 * fVar11 + fVar9) & 0xff];
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        if (fVar8 <= fVar32) {
          fVar32 = fVar8;
        }
        local_res18[0] =
             CONCAT13((char)(int)(fVar33 * fVar11 + fVar9),
                      CONCAT12((char)(int)(fVar34 * fVar11 + fVar9),
                               CONCAT11((char)(int)(fVar31 * fVar11 + fVar9),
                                        (char)(int)(fVar32 * fVar11 + fVar9))));
        uVar23 = local_res18[0];
      }
      else {
        pFVar17 = FLinearColor::FLinearColor(&local_d8,&local_1d8);
        FLinearColor::ToFColor(pFVar17,SUB81(local_res18,0));
        uVar23 = local_res18[0];
      }
    }
    iVar26 = iVar26 + 1;
    lVar28 = lVar28 + 4;
    *(undefined4 *)
     ((ulonglong)(uVar22 * *(int *)(**(longlong **)((longlong)this + 0x30) + 0x158)) +
     *(longlong *)(**(longlong **)((longlong)this + 0x30) + 0x150)) = uVar23;
    uVar22 = uVar22 + 1;
  } while (iVar26 < 3);
  uVar19 = 0;
  if (0 < **(int **)((longlong)this + 0x40)) {
    local_1e8 = 0;
    do {
      lVar28 = local_1e8;
      uVar22 = local_1f0;
      local_res20 = local_1f0;
      uVar30 = (uint)uVar19;
      if ((int)uVar30 < **(int **)((longlong)this + 0x48)) {
        lVar29 = *(longlong *)((longlong)this + 0x50);
        uVar13 = 0;
        if ((int)uVar30 < *(int *)(lVar29 + 0x48)) {
          uVar13 = ~uVar30 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(lVar29 + 0x40) != 0) {
          lVar29 = *(longlong *)(lVar29 + 0x40);
        }
        if (*(longlong *)(lVar29 + lVar28) == 0) goto LAB_1496fc121;
        lVar29 = *(longlong *)((longlong)this + 0x50);
        uVar13 = 0;
        if ((int)uVar30 < *(int *)(lVar29 + 0x48)) {
          uVar13 = ~uVar30 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(lVar29 + 0x40) != 0) {
          lVar29 = *(longlong *)(lVar29 + 0x40);
        }
        uVar13 = (uint)local_168;
        lVar29 = *(longlong *)(*(longlong *)(lVar29 + lVar28) + 0x78);
        local_188 = CONCAT44(*(undefined4 *)
                              (*(longlong *)(lVar29 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                              (ulonglong)(uVar13 + 1 & 0x1ff) * 4),
                             *(undefined4 *)
                              (*(longlong *)(lVar29 + ((local_168 & 0xffffffff) >> 9) * 8) +
                              (ulonglong)(uVar13 & 0x1ff) * 4));
        local_190 = *(undefined4 *)
                     (*(longlong *)(lVar29 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                     (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
      }
      else {
LAB_1496fc121:
        local_188 = 0xffffffffffffffff;
        local_190 = 0xffffffff;
      }
      lVar29 = 0;
      local_198 = local_188;
      do {
        TVar27 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        if (*(int *)((longlong)&local_198 + lVar29 * 4) != -1) {
          lVar21 = *(longlong *)((longlong)this + 0x50);
          uVar13 = 0;
          if ((int)uVar30 < *(int *)(lVar21 + 0x48)) {
            uVar13 = ~uVar30 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(lVar21 + 0x40) != 0) {
            lVar21 = *(longlong *)(lVar21 + 0x40);
          }
          uVar13 = *(uint *)((longlong)&local_198 + lVar29 * 4);
          lVar28 = *(longlong *)(*(longlong *)(lVar21 + lVar28) + 0x48);
          local_1bc = *(undefined4 *)
                       (*(longlong *)(lVar28 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
          uStack_1b8 = *(undefined4 *)
                        (*(longlong *)(lVar28 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4);
          TVar27._s_0.Y = (float)uStack_1b8;
          TVar27._s_0.X = (float)local_1bc;
        }
        lVar21 = **(longlong **)((longlong)this + 0x30);
        lVar5 = *(longlong *)(lVar21 + 0xa8);
        lVar28 = (ulonglong)*(uint *)(lVar21 + 0xb8) * (ulonglong)uVar22 + uVar19;
        if (*(char *)(lVar21 + 0xc0) == '\0') {
          puVar3 = (ushort *)(lVar5 + lVar28 * 4);
          lVar28 = (**(code **)(**(longlong **)(lVar21 + 0x90) + 0x50))();
          if (((ushort *)(lVar28 + lVar5) < puVar3 + 2) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x166,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((puVar3 < *(ushort **)(lVar21 + 0xa8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x167,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_238._0_4_ = TVar27._s_0.X;
          local_res10[0] = 0;
          FGenericPlatformMath::StoreHalf(local_res10,(float)local_238);
          local_238._4_4_ = TVar27._s_0.Y;
          *puVar3 = local_res10[0];
          local_res8[0] = 0;
          FGenericPlatformMath::StoreHalf(local_res8,local_238._4_4_);
          puVar3[1] = local_res8[0];
        }
        else {
          pTVar2 = (TVector2<float>_u_0 *)(lVar5 + lVar28 * 8);
          lVar28 = (**(code **)(**(longlong **)(lVar21 + 0x90) + 0x50))();
          if (((TVector2<float>_u_0 *)(lVar28 + lVar5) < pTVar2 + 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15d,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pTVar2 < *(TVector2<float>_u_0 **)(lVar21 + 0xa8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15e,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar2->_s_0 = (TVector2<float>_u_0_s_0)TVar27;
        }
        lVar29 = lVar29 + 1;
        uVar22 = local_res20 + 1;
        lVar28 = local_1e8;
        local_res20 = uVar22;
      } while (lVar29 < 3);
      local_1e8 = local_1e8 + 8;
      uVar19 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < **(int **)((longlong)this + 0x40));
  }
  return;
}

// operator() @ 1496fc3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FMeshRenderBufferSetConversionUtil::
InitializeBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  TVector2<float>_u_0 *pTVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  undefined8 uVar14;
  TVector<double> *pTVar15;
  undefined8 *puVar16;
  FLinearColor *pFVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  longlong lVar21;
  uint uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  TVector2<float>_u_0 TVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ushort local_res8 [4];
  ushort local_res10 [4];
  undefined4 local_res18 [2];
  uint local_res20;
  undefined8 local_238;
  undefined8 local_228;
  float local_220;
  uint local_218 [2];
  undefined4 local_210 [2];
  int local_208 [2];
  uint local_200 [2];
  undefined4 local_1f8 [2];
  uint local_1f0;
  longlong local_1e8;
  TVector4<float> local_1d8;
  undefined8 local_1c8;
  float local_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  double local_178;
  longlong local_170;
  ulonglong local_168;
  undefined8 local_160;
  uint local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  float local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_108;
  undefined8 local_f8;
  uint local_f0;
  FLinearColor local_e8;
  FLinearColor local_d8;
  TVector<double> local_c8 [5];
  
  plVar18 = *(longlong **)this;
  iVar26 = 0;
  uVar22 = 0;
  uVar30 = uVar22;
  if (param_1 < (int)plVar18[1]) {
    uVar30 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res20 = *(uint *)(*plVar18 + (longlong)param_1 * 4);
  uVar30 = local_res20 * 3;
  lVar28 = *(longlong *)
            (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x130) +
            (ulonglong)(local_res20 >> 9) * 8);
  local_1a0 = *(undefined4 *)(lVar28 + 8 + (ulonglong)(local_res20 & 0x1ff) * 0xc);
  local_1a8 = *(undefined8 *)(lVar28 + (ulonglong)(local_res20 & 0x1ff) * 0xc);
  if (**(longlong **)((longlong)this + 0x10) == 0) {
    local_238 = 0;
    local_158 = uVar22;
  }
  else {
    lVar28 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x78);
    local_238 = CONCAT44(*(undefined4 *)
                          (*(longlong *)(lVar28 + (ulonglong)(uVar30 + 1 >> 9) * 8) +
                          (ulonglong)(uVar30 + 1 & 0x1ff) * 4),
                         *(undefined4 *)
                          (*(longlong *)(lVar28 + (ulonglong)(uVar30 >> 9) * 8) +
                          (ulonglong)(uVar30 & 0x1ff) * 4));
    local_158 = *(uint *)(*(longlong *)(lVar28 + (ulonglong)(uVar30 + 2 >> 9) * 8) +
                         (ulonglong)(uVar30 + 2 & 0x1ff) * 4);
  }
  local_168 = (ulonglong)uVar30;
  local_160 = local_238;
  if (**(longlong **)((longlong)this + 0x18) == 0) {
    local_238 = 0;
  }
  else {
    lVar28 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x78);
    local_238 = CONCAT44(*(undefined4 *)
                          (*(longlong *)(lVar28 + (ulonglong)(uVar30 + 1 >> 9) * 8) +
                          (ulonglong)(uVar30 + 1 & 0x1ff) * 4),
                         *(undefined4 *)
                          (*(longlong *)(lVar28 + (ulonglong)(uVar30 >> 9) * 8) +
                          (ulonglong)(uVar30 & 0x1ff) * 4));
    uVar22 = *(uint *)(*(longlong *)(lVar28 + (ulonglong)(uVar30 + 2 >> 9) * 8) +
                      (ulonglong)(uVar30 + 2 & 0x1ff) * 4);
  }
  puVar4 = *(undefined4 **)((longlong)this + 0x20);
  local_f8 = local_238;
  local_f0 = uVar22;
  uVar20 = *puVar4;
  if ((*(char *)((longlong)puVar4 + 5) != '\0') && (*(void **)(puVar4 + 4) != (void *)0x0)) {
    local_218[0] = local_res20;
    local_170 = **(longlong **)((longlong)this + 8);
    UE::Core::Private::Function::CheckCallable(*(void **)(puVar4 + 4));
    pcVar6 = *(code **)(puVar4 + 4);
    plVar18 = (longlong *)(puVar4 + 8);
    if (*(longlong **)(puVar4 + 0xe) != (longlong *)0x0) {
      plVar18 = *(longlong **)(puVar4 + 0xe);
    }
    uVar14 = (**(code **)(*plVar18 + 8))();
    (*pcVar6)(local_210,uVar14,&local_170,local_218);
    **(undefined1 **)((longlong)this + 0x28) = 0;
    uVar20 = local_210[0];
  }
  fVar11 = __real_437f0000;
  fVar10 = __real_3b808081;
  fVar9 = __real_3f000000;
  fVar8 = __real_3f800000;
  local_1f0 = param_1 * 3;
  lVar28 = 0;
  uVar22 = local_1f0;
  do {
    uVar25 = (ulonglong)(*(uint *)((longlong)&local_1a8 + lVar28) >> 9);
    uVar24 = (ulonglong)(*(uint *)((longlong)&local_1a8 + lVar28) & 0x1ff);
    lVar29 = *(longlong *)(*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + uVar25 * 8);
    pdVar1 = (double *)(lVar29 + uVar24 * 0x18);
    dVar7 = pdVar1[1];
    local_178 = *(double *)(lVar29 + 0x10 + uVar24 * 0x18);
    lVar29 = *(longlong *)(**(longlong **)((longlong)this + 0x30) + 0x100);
    uVar19 = (ulonglong)(uVar22 * *(int *)(**(longlong **)((longlong)this + 0x30) + 0x108));
    *(float *)(uVar19 + lVar29) = (float)*pdVar1;
    *(float *)(uVar19 + 4 + lVar29) = (float)dVar7;
    *(float *)(uVar19 + 8 + lVar29) = (float)local_178;
    if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x81) == '\0') {
      if ((**(longlong **)((longlong)this + 0x10) == 0) ||
         (*(int *)((longlong)&local_160 + lVar28) == -1)) {
        local_1c8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        local_1c0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        if (*(char *)(**(longlong **)((longlong)this + 8) + 0x70) != '\0') {
          lVar29 = *(longlong *)
                    (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) + uVar25 * 8);
          local_1c8 = *(undefined8 *)(lVar29 + uVar24 * 0xc);
          local_1c0 = *(float *)(lVar29 + 8 + uVar24 * 0xc);
        }
        puVar16 = &local_1c8;
      }
      else {
        lVar29 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x48);
        uVar30 = *(int *)((longlong)&local_160 + lVar28) * 3;
        local_1b4 = *(undefined4 *)
                     (*(longlong *)(lVar29 + (ulonglong)(uVar30 >> 9) * 8) +
                     (ulonglong)(uVar30 & 0x1ff) * 4);
        uStack_1b0 = *(undefined4 *)
                      (*(longlong *)(lVar29 + (ulonglong)(uVar30 + 1 >> 9) * 8) +
                      (ulonglong)(uVar30 + 1 & 0x1ff) * 4);
        puVar16 = (undefined8 *)&local_1b4;
        local_1ac = *(undefined4 *)
                     (*(longlong *)(lVar29 + (ulonglong)(uVar30 + 2 >> 9) * 8) +
                     (ulonglong)(uVar30 + 2 & 0x1ff) * 4);
      }
      local_228 = *puVar16;
      local_220 = *(float *)(puVar16 + 1);
    }
    else {
      pTVar15 = UE::Geometry::FDynamicMesh3::GetTriNormal
                          ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),local_c8,
                           local_res20);
      local_220 = (float)(pTVar15->field0_0x0)._s_0.Z;
      local_228 = CONCAT44((float)(pTVar15->field0_0x0)._s_0.Y,(float)(pTVar15->field0_0x0)._s_0.X);
    }
    local_1f8[0] = *(undefined4 *)((longlong)&local_1a8 + lVar28);
    local_200[0] = local_res20;
    local_208[0] = iVar26;
    (*(code *)**(undefined8 **)((longlong)this + 0x38))
              ((*(undefined8 **)((longlong)this + 0x38))[1],local_1f8,local_200,local_208,&local_228
               ,&local_140,&local_150);
    local_128._s_0.Z = local_220;
    local_118._s_0.Z = local_148;
    local_108._s_0.Z = local_138;
    local_128._0_8_ = local_228;
    local_118._0_8_ = local_150;
    local_108._0_8_ = local_140;
    FStaticMeshVertexBuffer::SetVertexTangents
              ((FStaticMeshVertexBuffer *)(**(longlong **)((longlong)this + 0x30) + 0x10),uVar22,
               (TVector<float> *)&local_108._s_0,(TVector<float> *)&local_118._s_0,
               (TVector<float> *)&local_128._s_0);
    uVar23 = uVar20;
    if ((**(char **)((longlong)this + 0x28) != '\0') &&
       (uVar30 = *(uint *)((longlong)&local_f8 + lVar28), uVar30 != 0xffffffff)) {
      uVar13 = uVar30 * 4;
      lVar29 = *(longlong *)((longlong)this + 0x20);
      lVar21 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x48);
      local_1d8.field0_0x0._s_0.Y =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar21 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.X =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar21 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar13 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.W =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar21 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar13 + 3 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.Z =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar21 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
      if (*(char *)(lVar29 + 0x40) != '\0') {
        UE::Core::Private::Function::CheckCallable(*(void **)(lVar29 + 0x50));
        pcVar6 = *(code **)(lVar29 + 0x50);
        plVar18 = (longlong *)(lVar29 + 0x60);
        if (*(longlong **)(lVar29 + 0x78) != (longlong *)0x0) {
          plVar18 = *(longlong **)(lVar29 + 0x78);
        }
        uVar14 = (**(code **)(*plVar18 + 8))();
        (*pcVar6)(uVar14,&local_1d8);
      }
      if (*(char *)(lVar29 + 0x80) == '\x02') {
        pFVar17 = FLinearColor::FLinearColor(&local_e8,&local_1d8);
        fVar34 = (pFVar17->field0_0x0)._s_0.R;
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        if (fVar8 <= fVar34) {
          fVar34 = fVar8;
        }
        fVar31 = (pFVar17->field0_0x0)._s_0.G;
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        fVar34 = FLinearColor::sRGBToLinearTable[(int)(fVar34 * fVar11 + fVar9) & 0xff];
        if (fVar8 <= fVar31) {
          fVar31 = fVar8;
        }
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        if (fVar8 <= fVar34) {
          fVar34 = fVar8;
        }
        fVar33 = (pFVar17->field0_0x0)._s_0.A;
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        fVar31 = FLinearColor::sRGBToLinearTable[(int)(fVar31 * fVar11 + fVar9) & 0xff];
        if (fVar8 <= fVar33) {
          fVar33 = fVar8;
        }
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        if (fVar8 <= fVar31) {
          fVar31 = fVar8;
        }
        fVar32 = (pFVar17->field0_0x0)._s_0.B;
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        if (fVar8 <= fVar32) {
          fVar32 = fVar8;
        }
        fVar33 = (float)((int)(fVar33 * fVar11 + fVar9) & 0xff) * fVar10;
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        if (fVar8 <= fVar33) {
          fVar33 = fVar8;
        }
        fVar32 = FLinearColor::sRGBToLinearTable[(int)(fVar32 * fVar11 + fVar9) & 0xff];
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        if (fVar8 <= fVar32) {
          fVar32 = fVar8;
        }
        local_res18[0] =
             CONCAT13((char)(int)(fVar33 * fVar11 + fVar9),
                      CONCAT12((char)(int)(fVar34 * fVar11 + fVar9),
                               CONCAT11((char)(int)(fVar31 * fVar11 + fVar9),
                                        (char)(int)(fVar32 * fVar11 + fVar9))));
        uVar23 = local_res18[0];
      }
      else {
        pFVar17 = FLinearColor::FLinearColor(&local_d8,&local_1d8);
        FLinearColor::ToFColor(pFVar17,SUB81(local_res18,0));
        uVar23 = local_res18[0];
      }
    }
    iVar26 = iVar26 + 1;
    lVar28 = lVar28 + 4;
    *(undefined4 *)
     ((ulonglong)(uVar22 * *(int *)(**(longlong **)((longlong)this + 0x30) + 0x158)) +
     *(longlong *)(**(longlong **)((longlong)this + 0x30) + 0x150)) = uVar23;
    uVar22 = uVar22 + 1;
  } while (iVar26 < 3);
  uVar19 = 0;
  if (0 < **(int **)((longlong)this + 0x40)) {
    local_1e8 = 0;
    do {
      lVar28 = local_1e8;
      uVar22 = local_1f0;
      local_res20 = local_1f0;
      uVar30 = (uint)uVar19;
      if ((int)uVar30 < **(int **)((longlong)this + 0x48)) {
        lVar29 = *(longlong *)((longlong)this + 0x50);
        uVar13 = 0;
        if ((int)uVar30 < *(int *)(lVar29 + 0x48)) {
          uVar13 = ~uVar30 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(lVar29 + 0x40) != 0) {
          lVar29 = *(longlong *)(lVar29 + 0x40);
        }
        if (*(longlong *)(lVar29 + lVar28) == 0) goto LAB_1496fcc81;
        lVar29 = *(longlong *)((longlong)this + 0x50);
        uVar13 = 0;
        if ((int)uVar30 < *(int *)(lVar29 + 0x48)) {
          uVar13 = ~uVar30 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(lVar29 + 0x40) != 0) {
          lVar29 = *(longlong *)(lVar29 + 0x40);
        }
        uVar13 = (uint)local_168;
        lVar29 = *(longlong *)(*(longlong *)(lVar29 + lVar28) + 0x78);
        local_188 = CONCAT44(*(undefined4 *)
                              (*(longlong *)(lVar29 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                              (ulonglong)(uVar13 + 1 & 0x1ff) * 4),
                             *(undefined4 *)
                              (*(longlong *)(lVar29 + ((local_168 & 0xffffffff) >> 9) * 8) +
                              (ulonglong)(uVar13 & 0x1ff) * 4));
        local_190 = *(undefined4 *)
                     (*(longlong *)(lVar29 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                     (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
      }
      else {
LAB_1496fcc81:
        local_188 = 0xffffffffffffffff;
        local_190 = 0xffffffff;
      }
      lVar29 = 0;
      local_198 = local_188;
      do {
        TVar27 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        if (*(int *)((longlong)&local_198 + lVar29 * 4) != -1) {
          lVar21 = *(longlong *)((longlong)this + 0x50);
          uVar13 = 0;
          if ((int)uVar30 < *(int *)(lVar21 + 0x48)) {
            uVar13 = ~uVar30 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(lVar21 + 0x40) != 0) {
            lVar21 = *(longlong *)(lVar21 + 0x40);
          }
          uVar13 = *(uint *)((longlong)&local_198 + lVar29 * 4);
          lVar28 = *(longlong *)(*(longlong *)(lVar21 + lVar28) + 0x48);
          local_1bc = *(undefined4 *)
                       (*(longlong *)(lVar28 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
          uStack_1b8 = *(undefined4 *)
                        (*(longlong *)(lVar28 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4);
          TVar27._s_0.Y = (float)uStack_1b8;
          TVar27._s_0.X = (float)local_1bc;
        }
        lVar21 = **(longlong **)((longlong)this + 0x30);
        lVar5 = *(longlong *)(lVar21 + 0xa8);
        lVar28 = (ulonglong)*(uint *)(lVar21 + 0xb8) * (ulonglong)uVar22 + uVar19;
        if (*(char *)(lVar21 + 0xc0) == '\0') {
          puVar3 = (ushort *)(lVar5 + lVar28 * 4);
          lVar28 = (**(code **)(**(longlong **)(lVar21 + 0x90) + 0x50))();
          if (((ushort *)(lVar28 + lVar5) < puVar3 + 2) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x166,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((puVar3 < *(ushort **)(lVar21 + 0xa8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x167,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_238._0_4_ = TVar27._s_0.X;
          local_res10[0] = 0;
          FGenericPlatformMath::StoreHalf(local_res10,(float)local_238);
          local_238._4_4_ = TVar27._s_0.Y;
          *puVar3 = local_res10[0];
          local_res8[0] = 0;
          FGenericPlatformMath::StoreHalf(local_res8,local_238._4_4_);
          puVar3[1] = local_res8[0];
        }
        else {
          pTVar2 = (TVector2<float>_u_0 *)(lVar5 + lVar28 * 8);
          lVar28 = (**(code **)(**(longlong **)(lVar21 + 0x90) + 0x50))();
          if (((TVector2<float>_u_0 *)(lVar28 + lVar5) < pTVar2 + 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15d,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pTVar2 < *(TVector2<float>_u_0 **)(lVar21 + 0xa8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15e,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar2->_s_0 = (TVector2<float>_u_0_s_0)TVar27;
        }
        lVar29 = lVar29 + 1;
        uVar22 = local_res20 + 1;
        lVar28 = local_1e8;
        local_res20 = uVar22;
      } while (lVar29 < 3);
      local_1e8 = local_1e8 + 8;
      uVar19 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < **(int **)((longlong)this + 0x40));
  }
  return;
}

// GetOverlayColorAsFColor @ 149710d90

FColor __thiscall
FMeshRenderBufferSetConversionUtil::GetOverlayColorAsFColor
          (FMeshRenderBufferSetConversionUtil *this,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_1,int param_2)

{
  EDynamicMeshVertexColorTransformMode EVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  FLinearColor_u_0 *this_00;
  longlong *plVar6;
  undefined4 in_register_00000084;
  uint in_R9D;
  uint uVar7;
  float fVar8;
  float fVar9;
  TVector4<float>_u_0 local_38;
  FLinearColor_u_0 local_28;
  FLinearColor local_18;
  
  lVar2 = *(longlong *)(CONCAT44(in_register_00000084,param_2) + 0x48);
  uVar7 = in_R9D * 4;
  local_38._s_0.X =
       *(float *)(*(longlong *)(lVar2 + (ulonglong)((in_R9D & 0x3fffffff) >> 7) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4);
  local_38._s_0.Y =
       *(float *)(*(longlong *)(lVar2 + (ulonglong)((in_R9D & 0x3fffffff) >> 7) * 8) +
                 (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
  local_38._s_0.Z =
       *(float *)(*(longlong *)(lVar2 + (ulonglong)((in_R9D & 0x3fffffff) >> 7) * 8) +
                 (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
  local_38._s_0.W =
       *(float *)(*(longlong *)(lVar2 + (ulonglong)((in_R9D & 0x3fffffff) >> 7) * 8) +
                 (ulonglong)(uVar7 + 3 & 0x1ff) * 4);
  if (this->bApplyVertexColorRemapping != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->VertexColorRemappingFunc);
    plVar3 = *(longlong **)&(this->VertexColorRemappingFunc).field_0x28;
    pcVar4 = *(code **)&this->VertexColorRemappingFunc;
    plVar6 = (longlong *)&(this->VertexColorRemappingFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar4)(uVar5,&local_38);
  }
  EVar1 = this->ColorSpaceTransformMode;
  this_00 = &FLinearColor::FLinearColor(&local_18,(TVector4<float> *)&local_38._s_0)->field0_0x0;
  if (EVar1 == SRGBToLinear) {
    fVar9 = (((FLinearColor_u_0 *)&(this_00->_s_0).R)->_s_0).R;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar8 = (this_00->_s_0).G;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar8) {
      fVar8 = __real_3f800000;
    }
    local_28._s_0.R =
         FLinearColor::sRGBToLinearTable[(int)(fVar9 * __real_437f0000 + __real_3f000000) & 0xff];
    fVar9 = (this_00->_s_0).B;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    local_28._s_0.G =
         FLinearColor::sRGBToLinearTable[(int)(fVar8 * __real_437f0000 + __real_3f000000) & 0xff];
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    fVar8 = (this_00->_s_0).A;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    local_28._s_0.B =
         FLinearColor::sRGBToLinearTable[(int)(fVar9 * __real_437f0000 + __real_3f000000) & 0xff];
    if (__real_3f800000 <= fVar8) {
      fVar8 = __real_3f800000;
    }
    this_00 = &local_28;
    local_28._s_0.A =
         (float)((int)(fVar8 * __real_437f0000 + __real_3f000000) & 0xff) * __real_3b808081;
  }
  FLinearColor::ToFColor((FLinearColor *)&this_00->_s_0,SUB81(param_1,0));
  return (FColor)SUB84(param_1,0);
}

// RecomputeRenderBufferTriangleIndexSets @ 149715780

void __thiscall
FMeshRenderBufferSetConversionUtil::RecomputeRenderBufferTriangleIndexSets
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int iVar16;
  uint local_res20;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70 [2];
  longlong local_68;
  FDynamicMesh3 *local_60;
  longlong local_58;
  
  if (param_1->TriangleCount != 0) {
    if (((param_1->Triangles).field0_0x0.TypedValue.ArrayMax == -1) ||
       ((param_1->Triangles).field0_0x0.TypedValue.ArrayNum < 1)) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8110861346960047947>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\MeshRenderBufferSet.cpp"
                         ,0xb5,
                         "RenderBuffers->Triangles.IsSet() && RenderBuffers->Triangles->Num() > 0");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      pTVar3 = &(param_1->IndexBuffer).Indices;
      piVar1 = &(param_1->IndexBuffer).Indices.ArrayMax;
      iVar16 = *piVar1;
      (param_1->IndexBuffer).Indices.ArrayNum = 0;
      if (iVar16 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
      }
      pTVar4 = &(param_1->SecondaryIndexBuffer).Indices;
      iVar16 = (param_1->SecondaryIndexBuffer).Indices.ArrayMax;
      piVar2 = &(param_1->SecondaryIndexBuffer).Indices.ArrayMax;
      (param_1->SecondaryIndexBuffer).Indices.ArrayNum = 0;
      if (iVar16 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar4->AllocatorInstance,0,piVar2);
      }
      if (((param_1->Triangles).field0_0x0.TypedValue.ArrayMax == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_58 = (longlong)(param_1->Triangles).field0_0x0.TypedValue.ArrayNum;
      local_res20 = 0;
      if (0 < local_58) {
        local_68 = 0;
        iVar16 = 2;
        do {
          lVar7 = local_68;
          uVar10 = 0;
          if ((int)local_res20 < (param_1->Triangles).field0_0x0.TypedValue.ArrayNum) {
            uVar10 = ~local_res20 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_70[0] = *(undefined4 *)
                         ((param_1->Triangles).field0_0x0.TypedValue.AllocatorInstance.Data +
                         lVar7 * 4);
          local_60 = param_2;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->SecondaryTriFilterFunc);
          plVar5 = *(longlong **)&(this->SecondaryTriFilterFunc).field_0x28;
          pcVar6 = *(code **)&this->SecondaryTriFilterFunc;
          plVar13 = (longlong *)&(this->SecondaryTriFilterFunc).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar13 = plVar5;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          iVar15 = iVar16 + -2;
          cVar9 = (*pcVar6)(uVar12,&local_60,local_70);
          if (cVar9 == '\0') {
            pFVar14 = (pTVar3->AllocatorInstance).Data;
            local_7c = iVar15;
            if (((pFVar14 <= (FScriptContainerElement *)&local_7c) &&
                ((FScriptContainerElement *)&local_7c < pFVar14 + (longlong)*piVar1 * 4)) &&
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
            iVar15 = (param_1->IndexBuffer).Indices.ArrayNum;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar1);
            }
            (param_1->IndexBuffer).Indices.ArrayNum = iVar15 + 1;
            *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_7c;
            local_78 = iVar16 + -1;
            pFVar14 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 < pFVar14 + (longlong)*piVar1 * 4)) &&
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
            iVar15 = (param_1->IndexBuffer).Indices.ArrayNum;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar1);
            }
            (param_1->IndexBuffer).Indices.ArrayNum = iVar15 + 1;
            *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_78;
            pFVar14 = (pTVar3->AllocatorInstance).Data;
            local_74 = iVar16;
            if (((pFVar14 <= (FScriptContainerElement *)&local_74) &&
                ((FScriptContainerElement *)&local_74 < pFVar14 + (longlong)*piVar1 * 4)) &&
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
            iVar15 = (param_1->IndexBuffer).Indices.ArrayNum;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar1);
            }
            (param_1->IndexBuffer).Indices.ArrayNum = iVar15 + 1;
            pFVar14 = (pTVar3->AllocatorInstance).Data;
            iVar11 = local_74;
          }
          else {
            pFVar14 = (pTVar4->AllocatorInstance).Data;
            local_88 = iVar15;
            if (((pFVar14 <= (FScriptContainerElement *)&local_88) &&
                ((FScriptContainerElement *)&local_88 < pFVar14 + (longlong)*piVar2 * 4)) &&
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
            iVar15 = (param_1->SecondaryIndexBuffer).Indices.ArrayNum;
            if (iVar15 == *piVar2) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar4->AllocatorInstance,piVar2);
            }
            (param_1->SecondaryIndexBuffer).Indices.ArrayNum = iVar15 + 1;
            *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_88;
            local_84 = iVar16 + -1;
            pFVar14 = (pTVar4->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_84) &&
                ((FScriptContainerElement *)&local_84 < pFVar14 + (longlong)*piVar2 * 4)) &&
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
            iVar15 = (param_1->SecondaryIndexBuffer).Indices.ArrayNum;
            if (iVar15 == *piVar2) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar4->AllocatorInstance,piVar2);
            }
            (param_1->SecondaryIndexBuffer).Indices.ArrayNum = iVar15 + 1;
            *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_84;
            pFVar14 = (pTVar4->AllocatorInstance).Data;
            local_80 = iVar16;
            if (((pFVar14 <= (FScriptContainerElement *)&local_80) &&
                ((FScriptContainerElement *)&local_80 < pFVar14 + (longlong)*piVar2 * 4)) &&
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
            iVar15 = (param_1->SecondaryIndexBuffer).Indices.ArrayNum;
            if (iVar15 == *piVar2) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar4->AllocatorInstance,piVar2);
            }
            (param_1->SecondaryIndexBuffer).Indices.ArrayNum = iVar15 + 1;
            pFVar14 = (pTVar4->AllocatorInstance).Data;
            iVar11 = local_80;
          }
          iVar16 = iVar16 + 3;
          local_res20 = local_res20 + 1;
          local_68 = local_68 + 1;
          *(int *)(pFVar14 + (longlong)iVar15 * 4) = iVar11;
        } while (local_68 < local_58);
      }
    }
  }
  return;
}

// UpdateSecondaryTriangleBuffer @ 14971c200

void __thiscall
FMeshRenderBufferSetConversionUtil::UpdateSecondaryTriangleBuffer
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,bool param_3)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70 [2];
  longlong *local_68;
  FDynamicMesh3 *local_60;
  longlong local_58;
  
  if ((this->bUseSecondaryTriBuffers == true) &&
     ((param_1->Triangles).field0_0x0.TypedValue.ArrayMax != -1)) {
    pTVar13 = &(param_1->SecondaryIndexBuffer).Indices;
    iVar8 = (param_1->Triangles).field0_0x0.TypedValue.ArrayNum;
    pTVar2 = &(param_1->IndexBuffer).Indices;
    uVar15 = 0;
    piVar1 = &(param_1->SecondaryIndexBuffer).Indices.ArrayMax;
    iVar17 = *piVar1;
    (param_1->SecondaryIndexBuffer).Indices.ArrayNum = 0;
    if (iVar17 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar13->AllocatorInstance,0,piVar1);
    }
    if (!param_3) {
      iVar17 = (param_1->IndexBuffer).Indices.ArrayMax;
      (param_1->IndexBuffer).Indices.ArrayNum = 0;
      if (iVar17 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar2->AllocatorInstance,0,&(param_1->IndexBuffer).Indices.ArrayMax);
      }
    }
    if (0 < iVar8) {
      iVar17 = 2;
      local_68 = (longlong *)&(this->SecondaryTriFilterFunc).field_0x10;
      uVar16 = uVar15;
      local_58 = (longlong)iVar8;
      do {
        uVar14 = (uint)uVar15;
        uVar7 = 0;
        if ((int)uVar14 < (param_1->Triangles).field0_0x0.TypedValue.ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_70[0] = *(undefined4 *)
                       ((param_1->Triangles).field0_0x0.TypedValue.AllocatorInstance.Data +
                       uVar16 * 4);
        local_60 = param_2;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->SecondaryTriFilterFunc);
        pcVar4 = *(code **)&this->SecondaryTriFilterFunc;
        plVar3 = *(longlong **)&(this->SecondaryTriFilterFunc).field_0x28;
        plVar11 = local_68;
        if (plVar3 != (longlong *)0x0) {
          plVar11 = plVar3;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        cVar6 = (*pcVar4)(uVar10,&local_60,local_70);
        if (cVar6 == '\0') {
          if (!param_3) {
            pFVar12 = (pTVar2->AllocatorInstance).Data;
            local_7c = iVar17 + -2;
            if (((pFVar12 <= (FScriptContainerElement *)&local_7c) &&
                ((FScriptContainerElement *)&local_7c <
                 pFVar12 + (longlong)(param_1->IndexBuffer).Indices.ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = (param_1->IndexBuffer).Indices.ArrayNum;
            if (iVar8 == (param_1->IndexBuffer).Indices.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar2->AllocatorInstance,
                                 &(param_1->IndexBuffer).Indices.ArrayMax);
            }
            (param_1->IndexBuffer).Indices.ArrayNum = iVar8 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_7c;
            local_78 = iVar17 + -1;
            pFVar12 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar12 <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 <
                 pFVar12 + (longlong)(param_1->IndexBuffer).Indices.ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = (param_1->IndexBuffer).Indices.ArrayNum;
            if (iVar8 == (param_1->IndexBuffer).Indices.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar2->AllocatorInstance,
                                 &(param_1->IndexBuffer).Indices.ArrayMax);
            }
            (param_1->IndexBuffer).Indices.ArrayNum = iVar8 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_78;
            pFVar12 = (pTVar2->AllocatorInstance).Data;
            local_74 = iVar17;
            if (((pFVar12 <= (FScriptContainerElement *)&local_74) &&
                ((FScriptContainerElement *)&local_74 <
                 pFVar12 + (longlong)(param_1->IndexBuffer).Indices.ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = (param_1->IndexBuffer).Indices.ArrayNum;
            if (iVar8 == (param_1->IndexBuffer).Indices.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar2->AllocatorInstance,
                                 &(param_1->IndexBuffer).Indices.ArrayMax);
            }
            (param_1->IndexBuffer).Indices.ArrayNum = iVar8 + 1;
            pFVar12 = (pTVar2->AllocatorInstance).Data;
            iVar9 = local_74;
            goto LAB_14971c739;
          }
        }
        else {
          pFVar12 = (pTVar13->AllocatorInstance).Data;
          local_88 = iVar17 + -2;
          if (((pFVar12 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < pFVar12 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (param_1->SecondaryIndexBuffer).Indices.ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar13->AllocatorInstance,piVar1);
          }
          (param_1->SecondaryIndexBuffer).Indices.ArrayNum = iVar8 + 1;
          *(int *)((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_88;
          local_84 = iVar17 + -1;
          pFVar12 = (pTVar13->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_84) &&
              ((FScriptContainerElement *)&local_84 < pFVar12 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (param_1->SecondaryIndexBuffer).Indices.ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar13->AllocatorInstance,piVar1);
          }
          (param_1->SecondaryIndexBuffer).Indices.ArrayNum = iVar8 + 1;
          *(int *)((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_84;
          pFVar12 = (pTVar13->AllocatorInstance).Data;
          local_80 = iVar17;
          if (((pFVar12 <= (FScriptContainerElement *)&local_80) &&
              ((FScriptContainerElement *)&local_80 < pFVar12 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (param_1->SecondaryIndexBuffer).Indices.ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar13->AllocatorInstance,piVar1);
          }
          (param_1->SecondaryIndexBuffer).Indices.ArrayNum = iVar8 + 1;
          pFVar12 = (pTVar13->AllocatorInstance).Data;
          iVar9 = local_80;
LAB_14971c739:
          *(int *)(pFVar12 + (longlong)iVar8 * 4) = iVar9;
        }
        uVar15 = (ulonglong)(uVar14 + 1);
        iVar17 = iVar17 + 3;
        uVar16 = uVar16 + 1;
      } while ((longlong)uVar16 < local_58);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8110861346960047988>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\MeshRenderBufferSet.cpp"
                       ,0x8c,"bUseSecondaryTriBuffers == true && RenderBuffers->Triangles.IsSet()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

