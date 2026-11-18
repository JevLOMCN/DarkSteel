// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 14ca56ea0

void __thiscall
FMeshRenderBufferSetConversionUtil::
InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FMeshRenderBufferSetConversionUtil *this,FMeshRenderBufferSet *param_1,
          FDynamicMesh3 *param_2,int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedDefaultAllocator<32>_>
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
               TFunctionRefCaller<`FMeshRenderBufferSetConversionUtil::InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>,void,int>
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

// operator() @ 14ca6c670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FMeshRenderBufferSetConversionUtil::
InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  TVector2<float>_u_0 *pTVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  undefined8 uVar16;
  TVector<double> *pTVar17;
  undefined8 *puVar18;
  FLinearColor *pFVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  TVector<float>_u_0 *pTVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  TVector2<float>_u_0 TVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
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
  
  plVar20 = *(longlong **)this;
  iVar30 = 0;
  uVar26 = 0;
  uVar34 = uVar26;
  if (param_1 < (int)plVar20[1]) {
    uVar34 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar34 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_res20 = *(uint *)(*plVar20 + (longlong)param_1 * 4);
  uVar34 = local_res20 * 3;
  lVar32 = *(longlong *)
            (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x130) +
            (ulonglong)(local_res20 >> 9) * 8);
  local_1a0 = *(undefined4 *)(lVar32 + 8 + (ulonglong)(local_res20 & 0x1ff) * 0xc);
  local_1a8 = *(undefined8 *)(lVar32 + (ulonglong)(local_res20 & 0x1ff) * 0xc);
  if (**(longlong **)((longlong)this + 0x10) == 0) {
    local_238 = 0;
    local_158 = uVar26;
  }
  else {
    lVar32 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x78);
    local_238 = CONCAT44(*(undefined4 *)
                          (*(longlong *)(lVar32 + (ulonglong)(uVar34 + 1 >> 9) * 8) +
                          (ulonglong)(uVar34 + 1 & 0x1ff) * 4),
                         *(undefined4 *)
                          (*(longlong *)(lVar32 + (ulonglong)(uVar34 >> 9) * 8) +
                          (ulonglong)(uVar34 & 0x1ff) * 4));
    local_158 = *(uint *)(*(longlong *)(lVar32 + (ulonglong)(uVar34 + 2 >> 9) * 8) +
                         (ulonglong)(uVar34 + 2 & 0x1ff) * 4);
  }
  local_168 = (ulonglong)uVar34;
  local_160 = local_238;
  if (**(longlong **)((longlong)this + 0x18) == 0) {
    local_238 = 0;
  }
  else {
    lVar32 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x78);
    local_238 = CONCAT44(*(undefined4 *)
                          (*(longlong *)(lVar32 + (ulonglong)(uVar34 + 1 >> 9) * 8) +
                          (ulonglong)(uVar34 + 1 & 0x1ff) * 4),
                         *(undefined4 *)
                          (*(longlong *)(lVar32 + (ulonglong)(uVar34 >> 9) * 8) +
                          (ulonglong)(uVar34 & 0x1ff) * 4));
    uVar26 = *(uint *)(*(longlong *)(lVar32 + (ulonglong)(uVar34 + 2 >> 9) * 8) +
                      (ulonglong)(uVar34 + 2 & 0x1ff) * 4);
  }
  puVar4 = *(undefined4 **)((longlong)this + 0x20);
  local_f8 = local_238;
  local_f0 = uVar26;
  uVar25 = *puVar4;
  if ((*(char *)((longlong)puVar4 + 5) != '\0') && (*(void **)(puVar4 + 4) != (void *)0x0)) {
    local_218[0] = local_res20;
    local_170 = **(longlong **)((longlong)this + 8);
    UE::Core::Private::Function::CheckCallable(*(void **)(puVar4 + 4));
    pcVar8 = *(code **)(puVar4 + 4);
    plVar20 = (longlong *)(puVar4 + 8);
    if (*(longlong **)(puVar4 + 0xe) != (longlong *)0x0) {
      plVar20 = *(longlong **)(puVar4 + 0xe);
    }
    uVar16 = (**(code **)(*plVar20 + 8))();
    (*pcVar8)(local_210,uVar16,&local_170,local_218);
    **(undefined1 **)((longlong)this + 0x28) = 0;
    uVar25 = local_210[0];
  }
  fVar13 = __real_437f0000;
  fVar12 = __real_3b808081;
  fVar11 = __real_3f000000;
  fVar10 = __real_3f800000;
  local_1f0 = param_1 * 3;
  lVar32 = 0;
  uVar26 = local_1f0;
  do {
    uVar29 = (ulonglong)(*(uint *)((longlong)&local_1a8 + lVar32) >> 9);
    uVar28 = (ulonglong)(*(uint *)((longlong)&local_1a8 + lVar32) & 0x1ff);
    lVar33 = *(longlong *)(*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + uVar29 * 8);
    pdVar1 = (double *)(lVar33 + uVar28 * 0x18);
    dVar9 = pdVar1[1];
    local_178 = *(double *)(lVar33 + 0x10 + uVar28 * 0x18);
    lVar33 = *(longlong *)(**(longlong **)((longlong)this + 0x30) + 0x100);
    uVar23 = (ulonglong)(uVar26 * *(int *)(**(longlong **)((longlong)this + 0x30) + 0x108));
    *(float *)(uVar23 + lVar33) = (float)*pdVar1;
    *(float *)(uVar23 + 4 + lVar33) = (float)dVar9;
    *(float *)(uVar23 + 8 + lVar33) = (float)local_178;
    if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x81) == '\0') {
      if ((**(longlong **)((longlong)this + 0x10) == 0) ||
         (*(int *)((longlong)&local_160 + lVar32) == -1)) {
        local_1c8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        local_1c0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        if (*(char *)(**(longlong **)((longlong)this + 8) + 0x70) != '\0') {
          lVar33 = *(longlong *)
                    (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) + uVar29 * 8);
          local_1c8 = *(undefined8 *)(lVar33 + uVar28 * 0xc);
          local_1c0 = *(float *)(lVar33 + 8 + uVar28 * 0xc);
        }
        puVar18 = &local_1c8;
      }
      else {
        lVar33 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x48);
        uVar34 = *(int *)((longlong)&local_160 + lVar32) * 3;
        local_1b4 = *(undefined4 *)
                     (*(longlong *)(lVar33 + (ulonglong)(uVar34 >> 9) * 8) +
                     (ulonglong)(uVar34 & 0x1ff) * 4);
        uStack_1b0 = *(undefined4 *)
                      (*(longlong *)(lVar33 + (ulonglong)(uVar34 + 1 >> 9) * 8) +
                      (ulonglong)(uVar34 + 1 & 0x1ff) * 4);
        puVar18 = (undefined8 *)&local_1b4;
        local_1ac = *(undefined4 *)
                     (*(longlong *)(lVar33 + (ulonglong)(uVar34 + 2 >> 9) * 8) +
                     (ulonglong)(uVar34 + 2 & 0x1ff) * 4);
      }
      local_228 = *puVar18;
      local_220 = *(float *)(puVar18 + 1);
    }
    else {
      pTVar17 = UE::Geometry::FDynamicMesh3::GetTriNormal
                          ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),local_c8,
                           local_res20);
      local_220 = (float)(pTVar17->field0_0x0)._s_0.Z;
      local_228 = CONCAT44((float)(pTVar17->field0_0x0)._s_0.Y,(float)(pTVar17->field0_0x0)._s_0.X);
    }
    local_1f8[0] = *(undefined4 *)((longlong)&local_1a8 + lVar32);
    puVar18 = &local_140;
    local_200[0] = local_res20;
    local_208[0] = iVar30;
    (*(code *)**(undefined8 **)((longlong)this + 0x38))
              ((*(undefined8 **)((longlong)this + 0x38))[1],local_1f8,local_200,local_208,&local_228
               ,puVar18,&local_150);
    local_128._s_0.Z = local_220;
    local_118._s_0.Z = local_148;
    local_108._s_0.Z = local_138;
    local_128._0_8_ = local_228;
    local_118._0_8_ = local_150;
    pTVar22 = &local_128;
    local_108._0_8_ = local_140;
    FStaticMeshVertexBuffer::SetVertexTangents
              ((FStaticMeshVertexBuffer *)(**(longlong **)((longlong)this + 0x30) + 0x10),uVar26,
               (TVector<float> *)&local_108._s_0,(TVector<float> *)&local_118._s_0,
               (TVector<float> *)&pTVar22->_s_0);
    uVar27 = uVar25;
    if ((**(char **)((longlong)this + 0x28) != '\0') &&
       (uVar34 = *(uint *)((longlong)&local_f8 + lVar32), uVar34 != 0xffffffff)) {
      uVar15 = uVar34 * 4;
      lVar33 = *(longlong *)((longlong)this + 0x20);
      lVar5 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x48);
      local_1d8.field0_0x0._s_0.Y =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar5 + (ulonglong)((uVar34 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.X =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar5 + (ulonglong)((uVar34 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar15 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.W =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar5 + (ulonglong)((uVar34 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar15 + 3 & 0x1ff) * 4);
      local_1d8.field0_0x0._s_0.Z =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar5 + (ulonglong)((uVar34 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar15 + 2 & 0x1ff) * 4);
      if (*(char *)(lVar33 + 0x40) != '\0') {
        UE::Core::Private::Function::CheckCallable(*(void **)(lVar33 + 0x50));
        pcVar8 = *(code **)(lVar33 + 0x50);
        plVar20 = (longlong *)(lVar33 + 0x60);
        if (*(longlong **)(lVar33 + 0x78) != (longlong *)0x0) {
          plVar20 = *(longlong **)(lVar33 + 0x78);
        }
        uVar16 = (**(code **)(*plVar20 + 8))();
        (*pcVar8)(uVar16,&local_1d8);
      }
      if (*(char *)(lVar33 + 0x80) == '\x02') {
        pFVar19 = FLinearColor::FLinearColor(&local_e8,&local_1d8);
        fVar38 = (pFVar19->field0_0x0)._s_0.R;
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        if (fVar10 <= fVar38) {
          fVar38 = fVar10;
        }
        fVar35 = (pFVar19->field0_0x0)._s_0.G;
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        fVar38 = FLinearColor::sRGBToLinearTable[(int)(fVar38 * fVar13 + fVar11) & 0xff];
        if (fVar10 <= fVar35) {
          fVar35 = fVar10;
        }
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        if (fVar10 <= fVar38) {
          fVar38 = fVar10;
        }
        fVar37 = (pFVar19->field0_0x0)._s_0.A;
        if (fVar37 <= 0.0) {
          fVar37 = 0.0;
        }
        fVar35 = FLinearColor::sRGBToLinearTable[(int)(fVar35 * fVar13 + fVar11) & 0xff];
        if (fVar10 <= fVar37) {
          fVar37 = fVar10;
        }
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        if (fVar10 <= fVar35) {
          fVar35 = fVar10;
        }
        fVar36 = (pFVar19->field0_0x0)._s_0.B;
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        if (fVar10 <= fVar36) {
          fVar36 = fVar10;
        }
        fVar37 = (float)((int)(fVar37 * fVar13 + fVar11) & 0xff) * fVar12;
        if (fVar37 <= 0.0) {
          fVar37 = 0.0;
        }
        if (fVar10 <= fVar37) {
          fVar37 = fVar10;
        }
        fVar36 = FLinearColor::sRGBToLinearTable[(int)(fVar36 * fVar13 + fVar11) & 0xff];
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        if (fVar10 <= fVar36) {
          fVar36 = fVar10;
        }
        local_res18[0] =
             CONCAT13((char)(int)(fVar37 * fVar13 + fVar11),
                      CONCAT12((char)(int)(fVar38 * fVar13 + fVar11),
                               CONCAT11((char)(int)(fVar35 * fVar13 + fVar11),
                                        (char)(int)(fVar36 * fVar13 + fVar11))));
        uVar27 = local_res18[0];
      }
      else {
        pFVar19 = FLinearColor::FLinearColor(&local_d8,&local_1d8);
        FLinearColor::ToFColor(pFVar19,SUB81(local_res18,0));
        uVar27 = local_res18[0];
      }
    }
    iVar30 = iVar30 + 1;
    lVar32 = lVar32 + 4;
    *(undefined4 *)
     ((ulonglong)(uVar26 * *(int *)(**(longlong **)((longlong)this + 0x30) + 0x158)) +
     *(longlong *)(**(longlong **)((longlong)this + 0x30) + 0x150)) = uVar27;
    uVar26 = uVar26 + 1;
  } while (iVar30 < 3);
  uVar23 = 0;
  if (0 < **(int **)((longlong)this + 0x40)) {
    local_1e8 = 0;
    do {
      lVar32 = local_1e8;
      uVar26 = local_1f0;
      local_res20 = local_1f0;
      uVar34 = (uint)uVar23;
      if ((int)uVar34 < **(int **)((longlong)this + 0x48)) {
        plVar20 = *(longlong **)((longlong)this + 0x50);
        iVar30 = (int)plVar20[1];
        puVar21 = (undefined8 *)(longlong)iVar30;
        uVar15 = 0;
        if ((int)uVar34 < iVar30) {
          uVar15 = ~uVar34 >> 0x1f;
        }
        if (uVar15 == 0) {
          pTVar22 = (TVector<float>_u_0 *)(longlong)(int)uVar34;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          puVar18 = puVar21;
          if (bVar14) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (*(longlong *)(*plVar20 + lVar32) == 0) goto LAB_14ca6cf06;
        plVar20 = *(longlong **)((longlong)this + 0x50);
        iVar30 = (int)plVar20[1];
        puVar21 = (undefined8 *)(longlong)iVar30;
        uVar15 = 0;
        if ((int)uVar34 < iVar30) {
          uVar15 = ~uVar34 >> 0x1f;
        }
        if (uVar15 == 0) {
          pTVar22 = (TVector<float>_u_0 *)(longlong)(int)uVar34;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          puVar18 = puVar21;
          if (bVar14) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        uVar15 = (uint)local_168;
        lVar33 = *(longlong *)(*(longlong *)(*plVar20 + lVar32) + 0x78);
        local_188 = CONCAT44(*(undefined4 *)
                              (*(longlong *)(lVar33 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                              (ulonglong)(uVar15 + 1 & 0x1ff) * 4),
                             *(undefined4 *)
                              (*(longlong *)(lVar33 + ((local_168 & 0xffffffff) >> 9) * 8) +
                              (ulonglong)(uVar15 & 0x1ff) * 4));
        local_190 = *(undefined4 *)
                     (*(longlong *)(lVar33 + (ulonglong)(uVar15 + 2 >> 9) * 8) +
                     (ulonglong)(uVar15 + 2 & 0x1ff) * 4);
      }
      else {
LAB_14ca6cf06:
        local_188 = 0xffffffffffffffff;
        local_190 = 0xffffffff;
      }
      lVar33 = 0;
      local_198 = local_188;
      do {
        TVar31 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        if (*(int *)((longlong)&local_198 + lVar33 * 4) != -1) {
          plVar20 = *(longlong **)((longlong)this + 0x50);
          iVar30 = (int)plVar20[1];
          puVar21 = (undefined8 *)(longlong)iVar30;
          uVar15 = 0;
          if ((int)uVar34 < iVar30) {
            uVar15 = ~uVar34 >> 0x1f;
          }
          if (uVar15 == 0) {
            pTVar22 = (TVector<float>_u_0 *)(longlong)(int)uVar34;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            puVar18 = puVar21;
            if (bVar14) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          uVar15 = *(uint *)((longlong)&local_198 + lVar33 * 4);
          lVar32 = *(longlong *)(*(longlong *)(*plVar20 + lVar32) + 0x48);
          local_1bc = *(undefined4 *)
                       (*(longlong *)(lVar32 + (ulonglong)((uVar15 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar15 * 2 & 0x1ff) * 4);
          uStack_1b8 = *(undefined4 *)
                        (*(longlong *)(lVar32 + (ulonglong)((uVar15 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar15 * 2 + 1 & 0x1ff) * 4);
          TVar31._s_0.Y = (float)uStack_1b8;
          TVar31._s_0.X = (float)local_1bc;
        }
        lVar5 = **(longlong **)((longlong)this + 0x30);
        lVar6 = *(longlong *)(lVar5 + 0xa8);
        lVar24 = (ulonglong)*(uint *)(lVar5 + 0xb8) * (ulonglong)uVar26;
        lVar7 = **(longlong **)(lVar5 + 0x90);
        lVar32 = lVar24 + uVar23;
        if (*(char *)(lVar5 + 0xc0) == '\0') {
          puVar3 = (ushort *)(lVar6 + lVar32 * 4);
          lVar32 = (**(code **)(lVar7 + 0x50))
                             (*(longlong **)(lVar5 + 0x90),lVar24,lVar7,uVar23,pTVar22,puVar18);
          if (((ushort *)(lVar32 + lVar6) < puVar3 + 2) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x166,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((puVar3 < *(ushort **)(lVar5 + 0xa8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x167,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_238._0_4_ = TVar31._s_0.X;
          local_res10[0] = 0;
          FGenericPlatformMath::StoreHalf(local_res10,(float)local_238);
          local_238._4_4_ = TVar31._s_0.Y;
          *puVar3 = local_res10[0];
          local_res8[0] = 0;
          FGenericPlatformMath::StoreHalf(local_res8,local_238._4_4_);
          puVar3[1] = local_res8[0];
        }
        else {
          pTVar2 = (TVector2<float>_u_0 *)(lVar6 + lVar32 * 8);
          lVar32 = (**(code **)(lVar7 + 0x50))();
          if (((TVector2<float>_u_0 *)(lVar32 + lVar6) < pTVar2 + 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15d,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((pTVar2 < *(TVector2<float>_u_0 **)(lVar5 + 0xa8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15e,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar2->_s_0 = (TVector2<float>_u_0_s_0)TVar31;
        }
        lVar33 = lVar33 + 1;
        uVar26 = local_res20 + 1;
        lVar32 = local_1e8;
        local_res20 = uVar26;
      } while (lVar33 < 3);
      local_1e8 = local_1e8 + 8;
      uVar23 = (ulonglong)(uVar34 + 1);
    } while ((int)(uVar34 + 1) < **(int **)((longlong)this + 0x40));
  }
  return;
}

