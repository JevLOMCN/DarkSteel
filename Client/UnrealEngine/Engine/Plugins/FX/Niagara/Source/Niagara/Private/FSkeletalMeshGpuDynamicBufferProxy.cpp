// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// FSkeletalMeshGpuDynamicBufferProxy @ 149212cb0

FSkeletalMeshGpuDynamicBufferProxy * __thiscall
FSkeletalMeshGpuDynamicBufferProxy::FSkeletalMeshGpuDynamicBufferProxy
          (FSkeletalMeshGpuDynamicBufferProxy *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FSkeletalMeshGpuDynamicBufferProxy__6B_;
  this->SamplingBoneCount = 0;
  this->SamplingSocketCount = 0;
  this->SectionBoneCount = 0;
  this->RWBufferBones[0].SectionBuffer.Reference = (FRHIBuffer *)0x0;
  this->RWBufferBones[0].SectionSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->RWBufferBones[0].SamplingBuffer.Reference = (FRHIBuffer *)0x0;
  this->RWBufferBones[0].SamplingSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->RWBufferBones[1].SectionBuffer.Reference = (FRHIBuffer *)0x0;
  this->RWBufferBones[1].SectionSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->RWBufferBones[1].SamplingBuffer.Reference = (FRHIBuffer *)0x0;
  this->RWBufferBones[1].SamplingSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->CurrentBoneBufferId = '\0';
  this->bBoneGpuBufferValid = false;
  this->bPrevBoneGpuBufferValid = false;
  this->GPUMemoryUsage = 0;
  return this;
}

// ~FSkeletalMeshGpuDynamicBufferProxy @ 149215950

void __thiscall
FSkeletalMeshGpuDynamicBufferProxy::~FSkeletalMeshGpuDynamicBufferProxy
          (FSkeletalMeshGpuDynamicBufferProxy *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  FSkeletalBuffer *pFVar3;
  longlong lVar4;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshGpuDynamicBufferProxy__6B_;
  lVar4 = 2;
  pFVar3 = (FSkeletalBuffer *)&this->CurrentBoneBufferId;
  do {
    pFVar1 = pFVar3[-1].SamplingSRV.Reference;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = pFVar3[-1].SamplingBuffer.Reference;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar1 = pFVar3[-1].SectionSRV.Reference;
    if (pFVar1 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = pFVar3[-1].SectionBuffer.Reference;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = pFVar3 + -1;
  } while (lVar4 != 0);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 149217ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_1>::operator()
          (void *this,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FReferenceSkeleton *param_2)

{
  int *piVar1;
  float *pfVar2;
  ushort uVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  undefined4 *puVar26;
  uint uVar27;
  longlong lVar28;
  undefined4 *puVar29;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8;
  undefined1 local_1f7 [3];
  uint local_1f4;
  undefined1 local_1f0 [8];
  ulonglong local_1e8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  FReferenceSkeleton *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  TMatrix<float> local_148;
  TMatrix<float> local_108;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e0 = param_1;
  local_1c8 = param_2;
  if ((param_1->ArrayNum != *(int *)(*(longlong *)this + 0x20)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoneTransforms.Num() == SamplingBoneCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x507,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar21 = (longlong *)(**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x398))();
  if (((**(int **)((longlong)this + 0x10) < 0) ||
      ((int)plVar21[1] <= **(int **)((longlong)this + 0x10))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 <= LODIndex && LODIndex < LODRenderDataArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x50b,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar27 = **(uint **)((longlong)this + 0x10);
  uVar24 = 0;
  if ((int)uVar27 < (int)plVar21[1]) {
    uVar24 = ~uVar27 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar22 = *(longlong *)(*plVar21 + (longlong)(int)uVar27 * 8);
  iVar19 = 0;
  iVar20 = *(int *)(lVar22 + 0x18);
  lVar25 = *(longlong *)(lVar22 + 0x10);
  lVar28 = (longlong)iVar20 * 0x118 + lVar25;
  local_1b8 = lVar22;
  while( true ) {
    if (*(int *)(lVar22 + 0x18) != iVar20) {
      local_1f8 = 0;
      `TCheckedPointerIterator<FSkelMeshRenderSection,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1f8);
    }
    if (lVar25 == lVar28) break;
    piVar1 = (int *)(lVar25 + 0x40);
    lVar25 = lVar25 + 0x118;
    iVar19 = iVar19 + *piVar1 * 3;
  }
  if ((iVar19 != *(int *)(*(longlong *)this + 0x28) * 3) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Float4Count == 3 * SectionBoneCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x515,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,iVar19,pFVar4,(int *)(pFVar4 + 1),(int *)((longlong)&pFVar4[1].Data + 4));
  uVar23 = (ulonglong)*(int *)(lVar22 + 0x18);
  uVar27 = 0;
  lVar25 = *(longlong *)(lVar22 + 0x10);
  local_1e8 = CONCAT44(local_1e8._4_4_,*(int *)(lVar22 + 0x18));
  local_1d0 = uVar23 * 0x118 + lVar25;
  do {
    lVar28 = local_1d0;
    local_1d8 = lVar25;
    if (*(int *)(lVar22 + 0x18) != (int)uVar23) {
      local_1f7[0] = 0;
      `TCheckedPointerIterator<FSkelMeshRenderSection,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1f7);
    }
    if (lVar25 == lVar28) {
      pFVar4 = *(ForAnyElementType **)((longlong)this + 0x28);
      lVar22 = **(longlong **)((longlong)this + 0x20);
      pTVar30 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                (((ulonglong)*(uint *)(lVar22 + 700) + 0x2c) * 0x10);
      uVar27 = (param_1->ArrayNum + *(int *)((longlong)pTVar30 + 8 + lVar22)) * 3;
      local_1e0 = pTVar30;
      local_1d0 = lVar22;
      if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
      }
      if (*(int *)((longlong)&pFVar4[1].Data + 4) < (int)uVar27) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,uVar27,pFVar4,*(int *)&pFVar4[1].Data,
                   (int *)((longlong)&pFVar4[1].Data + 4));
      }
      iVar19 = param_1->ArrayNum;
      uVar27 = 0;
      if (0 < iVar19) {
        lVar28 = 0;
        local_1e8 = 0;
        lVar25 = 0;
        do {
          uVar24 = 0;
          if ((int)uVar27 < iVar19) {
            uVar24 = ~uVar27 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (param_1->AllocatorInstance).Data;
          dVar8 = *(double *)(pFVar5 + lVar25);
          dVar9 = *(double *)(pFVar5 + lVar25 + 8);
          dVar10 = *(double *)(pFVar5 + lVar25 + 0x10);
          dVar11 = *(double *)(pFVar5 + lVar25 + 0x10 + 8);
          if (local_1c8 == (FReferenceSkeleton *)0x0) {
            local_1f4 = 0xffffffff;
          }
          else {
            uVar24 = 0;
            if ((int)uVar27 < (local_1c8->FinalRefBoneInfo).ArrayNum) {
              uVar24 = ~uVar27 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_1f4 = *(uint *)((local_1c8->FinalRefBoneInfo).AllocatorInstance.Data + lVar28 + 8)
            ;
          }
          local_178 = *(double *)(pFVar5 + lVar25 + 0x20);
          dStack_170 = *(double *)(pFVar5 + lVar25 + 0x20 + 8);
          pFVar4 = *(ForAnyElementType **)((longlong)this + 0x28);
          local_168 = *(double *)(pFVar5 + lVar25 + 0x30);
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          iVar19 = *(int *)&pFVar4[1].Data;
          fVar41 = (float)local_178;
          fVar42 = (float)dStack_170;
          fVar34 = (float)local_168;
          if (iVar19 == *piVar1) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1010,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar19 + 1;
          lVar22 = (longlong)iVar19;
          pFVar6 = pFVar4->Data;
          pFVar4 = *(ForAnyElementType **)((longlong)this + 0x28);
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          *(float *)(pFVar6 + lVar22 * 0x10) = fVar41;
          *(float *)(pFVar6 + lVar22 * 0x10 + 4) = fVar42;
          *(float *)(pFVar6 + lVar22 * 0x10 + 8) = fVar34;
          *(undefined4 *)(pFVar6 + lVar22 * 0x10 + 0xc) = 0x3f800000;
          iVar19 = *(int *)&pFVar4[1].Data;
          if (iVar19 == *piVar1) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1010,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar19 + 1;
          lVar22 = (longlong)iVar19;
          pFVar6 = pFVar4->Data;
          pFVar4 = *(ForAnyElementType **)((longlong)this + 0x28);
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          *(float *)(pFVar6 + lVar22 * 0x10) = (float)dVar8;
          *(float *)(pFVar6 + lVar22 * 0x10 + 4) = (float)dVar9;
          *(float *)(pFVar6 + lVar22 * 0x10 + 8) = (float)dVar10;
          *(float *)(pFVar6 + lVar22 * 0x10 + 0xc) = (float)dVar11;
          local_160 = *(double *)(pFVar5 + lVar25 + 0x40);
          dStack_158 = *(double *)(pFVar5 + lVar25 + 0x40 + 8);
          local_150 = *(double *)(pFVar5 + lVar25 + 0x50);
          iVar19 = *(int *)&pFVar4[1].Data;
          fVar41 = (float)local_160;
          fVar42 = (float)dStack_158;
          fVar34 = (float)local_150;
          if (iVar19 == *piVar1) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1010,pFVar4,piVar1);
          }
          local_1e8 = local_1e8 + 1;
          *(int *)&pFVar4[1].Data = iVar19 + 1;
          uVar27 = uVar27 + 1;
          lVar22 = (longlong)iVar19;
          lVar25 = lVar25 + 0x60;
          pFVar5 = pFVar4->Data;
          lVar28 = lVar28 + 0xc;
          *(float *)(pFVar5 + lVar22 * 0x10) = fVar41;
          *(float *)(pFVar5 + lVar22 * 0x10 + 4) = fVar42;
          *(float *)(pFVar5 + lVar22 * 0x10 + 8) = fVar34;
          *(uint *)(pFVar5 + lVar22 * 0x10 + 0xc) = local_1f4;
          iVar19 = param_1->ArrayNum;
          pTVar30 = local_1e0;
          lVar22 = local_1d0;
        } while ((int)uVar27 < iVar19);
      }
      iVar19 = *(int *)((longlong)pTVar30 + 8 + lVar22);
      puVar26 = *(undefined4 **)((longlong)pTVar30 + lVar22);
      puVar29 = puVar26 + (longlong)iVar19 * 0xc;
      while( true ) {
        if (*(int *)((longlong)pTVar30 + 8 + lVar22) != iVar19) {
          `TCheckedPointerIterator<UE::Math::TTransform<float>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1f0);
        }
        if (puVar26 == puVar29) break;
        pFVar4 = *(ForAnyElementType **)((longlong)this + 0x28);
        local_1b0 = puVar26[4];
        uStack_1ac = puVar26[5];
        uVar12 = puVar26[6];
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        uVar13 = *puVar26;
        uVar14 = puVar26[1];
        uVar15 = puVar26[2];
        uVar16 = puVar26[3];
        iVar20 = *(int *)&pFVar4[1].Data;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1010,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar20 + 1;
        lVar25 = (longlong)iVar20;
        pFVar5 = pFVar4->Data;
        pFVar4 = *(ForAnyElementType **)((longlong)this + 0x28);
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        *(undefined4 *)(pFVar5 + lVar25 * 0x10) = local_1b0;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 4) = uStack_1ac;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 8) = uVar12;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 0xc) = 0x3f800000;
        iVar20 = *(int *)&pFVar4[1].Data;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1010,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar20 + 1;
        lVar25 = (longlong)iVar20;
        pFVar5 = pFVar4->Data;
        pFVar4 = *(ForAnyElementType **)((longlong)this + 0x28);
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        *(undefined4 *)(pFVar5 + lVar25 * 0x10) = uVar13;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 0xc) = uVar16;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 4) = uVar14;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 8) = uVar15;
        local_1a4 = puVar26[8];
        uStack_1a0 = puVar26[9];
        uVar12 = puVar26[10];
        iVar20 = *(int *)&pFVar4[1].Data;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1010,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar20 + 1;
        lVar25 = (longlong)iVar20;
        pFVar5 = pFVar4->Data;
        puVar26 = puVar26 + 0xc;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10) = local_1a4;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 4) = uStack_1a0;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 8) = uVar12;
        *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 0xc) = 0xffffffff;
        pTVar30 = local_1e0;
      }
      return;
    }
    local_1f4 = *(uint *)(lVar25 + 0x40);
    uVar24 = 0;
    if (local_1f4 != 0) {
      do {
        uVar18 = 0;
        if ((int)uVar24 < *(int *)(lVar25 + 0x40)) {
          uVar18 = ~uVar24 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar3 = *(ushort *)(*(longlong *)(lVar25 + 0x38) + (longlong)(int)uVar24 * 2);
        if ((param_1->ArrayNum <= (int)(uint)uVar3) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        lVar25 = (ulonglong)uVar3 * 0x60;
        lVar22 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x380))();
        if ((int)(uint)uVar3 < *(int *)(lVar22 + 8)) {
          local_1c0 = (longlong *)
                      (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x380))();
          if (((int)local_1c0[1] <= (int)(uint)uVar3) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_188 = *(double *)(pFVar5 + lVar25 + 0x10);
          dStack_180 = *(double *)(pFVar5 + lVar25 + 0x10 + 8);
          dVar36 = *(double *)(pFVar5 + lVar25);
          dVar38 = *(double *)(pFVar5 + lVar25 + 8);
          dVar11 = *(double *)(pFVar5 + lVar25);
          dVar35 = dVar38 + dVar38;
          dVar37 = local_188 + local_188;
          dVar10 = dVar36 * (dVar36 + dVar36);
          auVar39 = blendpd(*(undefined1 (*) [16])(pFVar5 + lVar25 + 0x40),
                            *(undefined1 (*) [16])(pFVar5 + lVar25 + 0x50),2);
          local_198 = *(undefined8 *)(pFVar5 + lVar25);
          uStack_190 = *(undefined8 *)(pFVar5 + lVar25 + 8);
          dVar8 = dVar35 * dVar11;
          dVar9 = dVar37 * *(double *)(pFVar5 + lVar25 + 8);
          dVar11 = dVar11 * dVar37;
          dVar36 = (dVar36 + dVar36) * dStack_180;
          local_148.M[0][1] =
               (float)((dVar8 + dVar37 * dStack_180) * *(double *)(pFVar5 + lVar25 + 0x40));
          local_148.M[0][0] =
               (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                       (local_188 * dVar37 + dVar38 * dVar35)) * *(double *)(pFVar5 + lVar25 + 0x40)
                      );
          local_148.M[0][2] = (float)(auVar39._0_8_ * (dVar11 - dVar35 * dStack_180));
          local_148.M[0][3] = 0.0;
          local_148.M[1][1] =
               (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                       (local_188 * dVar37 + dVar10)) * *(double *)(pFVar5 + lVar25 + 0x40 + 8));
          local_148.M[1][0] =
               (float)(SUB168(*(undefined1 (*) [16])(pFVar5 + lVar25 + 0x40),8) *
                      (dVar8 - dVar37 * dStack_180));
          local_148.M[1][2] = (float)((dVar9 + dVar36) * *(double *)(pFVar5 + lVar25 + 0x40 + 8));
          local_148.M[1][3] = 0.0;
          local_148.M[3][0] = (float)*(double *)(pFVar5 + lVar25 + 0x20);
          local_148.M[3][1] = (float)*(double *)(pFVar5 + lVar25 + 0x20 + 8);
          local_148.M[2][1] = (float)(*(double *)(pFVar5 + lVar25 + 0x50) * (dVar9 - dVar36));
          local_148.M[2][0] =
               (float)((dVar35 * dStack_180 + dVar11) * *(double *)(pFVar5 + lVar25 + 0x50));
          local_148.M[2][2] =
               (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                       (dVar10 + dVar38 * dVar35)) * *(double *)(pFVar5 + lVar25 + 0x50));
          local_148.M[2][3] = 0.0;
          local_148.M[3][2] = (float)*(double *)(pFVar5 + lVar25 + 0x30);
          local_148.M[3][3] = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
          VectorMatrixMultiply
                    (&local_108,(TMatrix<float> *)(*local_1c0 + (ulonglong)uVar3 * 0x40),&local_148)
          ;
          fVar41 = local_108.M[3][0];
          fVar42 = local_108.M[3][1];
          fVar34 = local_108.M[3][2];
          fVar43 = local_108.M[1][0];
          fVar44 = local_108.M[1][1];
          fVar32 = local_108.M[1][2];
          fVar45 = local_108.M[2][0];
          fVar46 = local_108.M[2][1];
          fVar33 = local_108.M[2][2];
          fVar47 = local_108.M[0][0];
          fVar48 = local_108.M[0][1];
          fVar31 = local_108.M[0][2];
        }
        else {
          local_188 = *(double *)(pFVar5 + lVar25 + 0x10);
          dStack_180 = *(double *)(pFVar5 + lVar25 + 0x10 + 8);
          dVar8 = *(double *)(pFVar5 + lVar25);
          dVar35 = *(double *)(pFVar5 + lVar25 + 8);
          dVar10 = *(double *)(pFVar5 + lVar25);
          dVar11 = dVar35 + dVar35;
          dVar9 = dVar8 * (dVar8 + dVar8);
          dVar38 = local_188 + local_188;
          auVar40._8_4_ = SUB84(dVar35 * dVar11,0);
          auVar40._0_8_ = dVar9;
          auVar40._12_4_ = (int)((ulonglong)(dVar35 * dVar11) >> 0x20);
          auVar39 = blendpd(*(undefined1 (*) [16])(pFVar5 + lVar25 + 0x40),
                            *(undefined1 (*) [16])(pFVar5 + lVar25 + 0x50),2);
          dVar35 = dVar11 * dVar10;
          dVar36 = dVar38 * *(double *)(pFVar5 + lVar25 + 8);
          local_198 = *(undefined8 *)(pFVar5 + lVar25);
          uStack_190 = *(undefined8 *)(pFVar5 + lVar25 + 8);
          dVar8 = dStack_180 * (dVar8 + dVar8);
          dVar10 = dVar10 * dVar38;
          fVar47 = (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                           (local_188 * dVar38 + auVar40._8_8_)) *
                          *(double *)(pFVar5 + lVar25 + 0x40));
          fVar48 = (float)((dStack_180 * dVar38 + dVar35) * *(double *)(pFVar5 + lVar25 + 0x40));
          fVar31 = (float)(auVar39._0_8_ * (dVar10 - dVar11 * dStack_180));
          fVar32 = (float)((dVar8 + dVar36) * *(double *)(pFVar5 + lVar25 + 0x40 + 8));
          fVar43 = (float)(SUB168(*(undefined1 (*) [16])(pFVar5 + lVar25 + 0x40),8) *
                          (dVar35 - dStack_180 * dVar38));
          fVar44 = (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                           (local_188 * dVar38 + dVar9)) * *(double *)(pFVar5 + lVar25 + 0x40 + 8));
          fVar45 = (float)((dVar11 * dStack_180 + dVar10) * *(double *)(pFVar5 + lVar25 + 0x50));
          fVar46 = (float)(*(double *)(pFVar5 + lVar25 + 0x50) * (dVar36 - dVar8));
          fVar41 = (float)*(double *)(pFVar5 + lVar25 + 0x20);
          fVar42 = (float)*(double *)(pFVar5 + lVar25 + 0x20 + 8);
          fVar33 = (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                           (dVar9 + auVar40._8_8_)) * *(double *)(pFVar5 + lVar25 + 0x50));
          fVar34 = (float)*(double *)(pFVar5 + lVar25 + 0x30);
        }
        plVar21 = *(longlong **)((longlong)this + 0x18);
        uVar18 = 0;
        if ((int)uVar27 < (int)plVar21[1]) {
          uVar18 = ~uVar27 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar22 = *plVar21;
        uVar24 = uVar24 + 1;
        lVar25 = (longlong)(int)uVar27;
        uVar27 = uVar27 + 3;
        pfVar2 = (float *)(lVar22 + lVar25 * 0x10);
        *pfVar2 = fVar47;
        pfVar2[1] = fVar43;
        pfVar2[2] = fVar45;
        pfVar2[3] = fVar41;
        pfVar2 = (float *)(lVar22 + 0x10 + lVar25 * 0x10);
        *pfVar2 = fVar48;
        pfVar2[1] = fVar44;
        pfVar2[2] = fVar46;
        pfVar2[3] = fVar42;
        pfVar2 = (float *)(lVar22 + 0x20 + lVar25 * 0x10);
        *pfVar2 = fVar31;
        pfVar2[1] = fVar32;
        pfVar2[2] = fVar33;
        pfVar2[3] = fVar34;
        lVar25 = local_1d8;
        lVar22 = local_1b8;
        param_1 = local_1e0;
      } while (uVar24 < local_1f4);
    }
    lVar25 = lVar25 + 0x118;
    uVar23 = local_1e8 & 0xffffffff;
  } while( true );
}

// operator() @ 14921a320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  *(byte *)(*(longlong *)this + 0x70) = *(char *)(*(longlong *)this + 0x70) - 1U & 1;
  *(undefined1 *)(*(longlong *)this + 0x72) = *(undefined1 *)(*(longlong *)this + 0x71);
  *(undefined1 *)(*(longlong *)this + 0x71) = 1;
  uVar2 = *(int *)((longlong)this + 0x10) << 4;
  pvVar1 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,
                      *(FRHIBuffer **)
                       ((ulonglong)(*(byte *)(*(longlong *)this + 0x70) & 1) * 0x20 + 0x30 +
                       *(longlong *)this),0,uVar2,RLM_WriteOnly);
  memcpy(pvVar1,*(void **)((longlong)this + 8),(ulonglong)uVar2);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,
             *(FRHIBuffer **)
              ((ulonglong)(*(byte *)(*(longlong *)this + 0x70) & 1) * 0x20 + 0x30 +
              *(longlong *)this));
  uVar2 = *(int *)((longlong)this + 0x20) << 4;
  pvVar1 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,
                      *(FRHIBuffer **)
                       (((ulonglong)(*(byte *)(*(longlong *)this + 0x70) & 1) + 2) * 0x20 +
                       *(longlong *)this),0,uVar2,RLM_WriteOnly);
  memcpy(pvVar1,*(void **)((longlong)this + 0x18),(ulonglong)uVar2);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,
             *(FRHIBuffer **)
              (((ulonglong)(*(byte *)(*(longlong *)this + 0x70) & 1) + 2) * 0x20 + *(longlong *)this
              ));
  return;
}

// InitRHI @ 149240110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshGpuDynamicBufferProxy::InitRHI
          (FSkeletalMeshGpuDynamicBufferProxy *this,FRHICommandListBase *param_1)

{
  FSkeletalBuffer *pFVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  undefined1 *puVar3;
  ERHIPipeline EVar4;
  uint uVar5;
  FRHIBuffer *pFVar6;
  FRHIShaderResourceView *pFVar7;
  uchar auVar8 [8];
  FName FVar9;
  code *pcVar10;
  void *pvVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar16;
  TRefCountPtr<FRHIBuffer> *pTVar17;
  undefined1 auStackY_2a8 [32];
  FLLMScope local_248;
  FLLMScope local_244;
  FSkeletalBuffer local_240;
  FMemScope local_220;
  int local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  int iStack_20c;
  wchar_t *local_208;
  FResourceArrayUploadInterface *pFStack_200;
  ERHIAccess local_1f8;
  ERHIBufferInitAction EStack_1f4;
  FNameEntryId FStack_1f0;
  uint uStack_1ec;
  FNameEntryId FStack_1e8;
  uint uStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  wchar_t *local_1d0;
  FResourceArrayUploadInterface *pFStack_1c8;
  ERHIAccess local_1c0;
  ERHIBufferInitAction EStack_1bc;
  FNameEntryId FStack_1b8;
  uint uStack_1b4;
  FNameEntryId FStack_1b0;
  uint uStack_1ac;
  FMemScope local_1a8;
  FName local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  FStatMessage local_178;
  FName local_168;
  FRHIBufferCreateDesc local_160;
  FRHIBufferCreateDesc local_128;
  undefined1 local_e8 [48];
  FRHICommandListBase *local_b8;
  FRHIBuffer *local_b0;
  undefined1 local_98 [48];
  FRHICommandListBase *local_68;
  FRHIBuffer *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if ((this->GPUMemoryUsage != 0) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4024959817545153360>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x4b0,"GPUMemoryUsage == 0"), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pvVar11 = ThreadLocalStoragePointer;
  if (this->RWBufferBones != (FSkeletalBuffer *)&this->CurrentBoneBufferId) {
    pTVar17 = &this->RWBufferBones[0].SamplingBuffer;
    do {
      uVar5 = this->SectionBoneCount;
      local_208 = L"SkeletalMeshGpuDynamicBuffer";
      uStack_214 = 0;
      pFStack_200 = (FResourceArrayUploadInterface *)0x0;
      local_218 = uVar5 * 0x30;
      iStack_20c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      EStack_1f4 = Default;
      FStack_1f0.Value = 0;
      uStack_1ec = 0;
      FStack_1e8.Value = 0;
      uStack_1e4 = 0;
      uStack_210 = 0x4102;
      local_1f8 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
      local_160._padding_ = CONCAT44(uStack_214,local_218);
      local_160._padding_ = CONCAT44(iStack_20c,uStack_210);
      local_160.InitAction = EStack_1f4;
      local_160.InitialState = local_1f8;
      local_160.ClassName.Number = uStack_1ec;
      local_160.ClassName.ComparisonIndex.Value = FStack_1f0.Value;
      local_160.DebugName = local_208;
      local_160.InitialData = pFStack_200;
      local_160.OwnerName.Number = uStack_1e4;
      local_160.OwnerName.ComparisonIndex.Value = FStack_1e8.Value;
      if ((uVar5 * 3 & 0xfffffff) == 0) {
        FRHICommandListBase::InvalidBufferFatalError(param_1,&local_160);
      }
      if ((local_160.InitAction == Initializer) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x327,
                              L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      EVar4 = param_1->ActivePipelines;
      if (((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x2a5,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = param_1->ActivePipelines == None;
      if (bVar12) {
        FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_e8);
      FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_e8);
      if ((local_b8 != (FRHICommandListBase *)0x0) && (local_b0 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_e8);
      }
      if (local_e8._0_8_ != 0) {
        plVar16 = (longlong *)(local_e8 + 0x10);
        if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_e8._40_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (bVar12) {
        FRHICommandListBase::SwitchPipeline(param_1,None);
      }
      pFVar1 = (FSkeletalBuffer *)(pTVar17 + -2);
      if (pFVar1 == &local_240) {
LAB_14924035b:
        if (local_240.SectionBuffer.Reference != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_240.SectionBuffer.Reference);
        }
      }
      else {
        pFVar6 = (pFVar1->SectionBuffer).Reference;
        (pFVar1->SectionBuffer).Reference = local_240.SectionBuffer.Reference;
        local_240.SectionBuffer.Reference = (FRHIBuffer *)0x0;
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
          goto LAB_14924035b;
        }
      }
      pFVar6 = (pFVar1->SectionBuffer).Reference;
      uStack_190 = 0;
      local_198 = 0x10100;
      if ((*(int *)(*(longlong *)((longlong)pvVar11 + (ulonglong)_tls_index * 8) + 0x9d4c) <
           `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (&local_248,
                 `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::LLMScope_Name977,false,None,Default,true);
      FMemScope::FMemScope
                (&local_220,
                 &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                  ::__l2::LLMScope_Name977,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x1b0))
                (GDynamicRHI,&local_240.SectionSRV,param_1,pFVar6);
      FMemScope::~FMemScope(&local_220);
      FLLMScope::~FLLMScope(&local_248);
      pTVar2 = (TRefCountPtr<FRHIShaderResourceView> *)(pTVar17 + -1);
      if (pTVar2 == &local_240.SectionSRV) {
LAB_14924045b:
        if (local_240.SectionSRV.Reference != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_240.SectionSRV.Reference);
        }
      }
      else {
        pFVar7 = pTVar2->Reference;
        pTVar2->Reference = local_240.SectionSRV.Reference;
        local_240.SectionSRV.Reference = (FRHIShaderResourceView *)0x0;
        if (pFVar7 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar7);
          goto LAB_14924045b;
        }
      }
      iVar13 = this->SamplingBoneCount + this->SamplingSocketCount;
      uStack_1dc = 0;
      pFStack_1c8 = (FResourceArrayUploadInterface *)0x0;
      EStack_1bc = Default;
      FStack_1b8.Value = 0;
      local_1e0 = iVar13 * 0x30;
      iStack_1d4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_1d0 = L"SkeletalMeshGpuDynamicBuffer";
      uStack_1b4 = 0;
      FStack_1b0.Value = 0;
      uStack_1ac = 0;
      uStack_1d8 = 0x4102;
      local_1c0 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
      local_128._padding_ = CONCAT44(uStack_1dc,local_1e0);
      local_128._padding_ = CONCAT44(iStack_1d4,uStack_1d8);
      local_128.InitAction = EStack_1bc;
      local_128.InitialState = local_1c0;
      local_128.ClassName.Number = uStack_1b4;
      local_128.ClassName.ComparisonIndex.Value = FStack_1b8.Value;
      local_128.DebugName = local_1d0;
      local_128.InitialData = pFStack_1c8;
      local_128.OwnerName.Number = uStack_1ac;
      local_128.OwnerName.ComparisonIndex.Value = FStack_1b0.Value;
      if ((iVar13 * 3 & 0xfffffffU) == 0) {
        FRHICommandListBase::InvalidBufferFatalError(param_1,&local_128);
      }
      if ((local_128.InitAction == Initializer) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x327,
                              L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      EVar4 = param_1->ActivePipelines;
      if (((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x2a5,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = param_1->ActivePipelines == None;
      if (bVar12) {
        FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_98);
      FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_98);
      if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_98);
      }
      if (local_98._0_8_ != 0) {
        plVar16 = (longlong *)(local_98 + 0x10);
        if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_98._40_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (bVar12) {
        FRHICommandListBase::SwitchPipeline(param_1,None);
      }
      if (pTVar17 == &local_240.SamplingBuffer) {
LAB_149240621:
        if (local_240.SamplingBuffer.Reference != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_240.SamplingBuffer.Reference);
        }
      }
      else {
        pFVar6 = pTVar17->Reference;
        pTVar17->Reference = local_240.SamplingBuffer.Reference;
        local_240.SamplingBuffer.Reference = (FRHIBuffer *)0x0;
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
          goto LAB_149240621;
        }
      }
      pFVar6 = pTVar17->Reference;
      uStack_180 = 0;
      local_188 = 0x10100;
      if ((*(int *)(*(longlong *)((longlong)pvVar11 + (ulonglong)_tls_index * 8) + 0x9d4c) <
           `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (&local_244,
                 `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::LLMScope_Name977,false,None,Default,true);
      FMemScope::FMemScope
                (&local_1a8,
                 &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                  ::__l2::LLMScope_Name977,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x1b0))
                (GDynamicRHI,&local_240.SamplingSRV,param_1,pFVar6);
      FMemScope::~FMemScope(&local_1a8);
      FLLMScope::~FLLMScope(&local_244);
      pTVar2 = (TRefCountPtr<FRHIShaderResourceView> *)(pTVar17 + 1);
      if (pTVar2 == &local_240.SamplingSRV) {
LAB_14924071d:
        if (local_240.SamplingSRV.Reference != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_240.SamplingSRV.Reference);
        }
      }
      else {
        pFVar7 = pTVar2->Reference;
        pTVar2->Reference = local_240.SamplingSRV.Reference;
        local_240.SamplingSRV.Reference = (FRHIShaderResourceView *)0x0;
        if (pFVar7 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar7);
          goto LAB_14924071d;
        }
      }
      puVar3 = (undefined1 *)(pTVar17 + 2);
      this->GPUMemoryUsage =
           this->GPUMemoryUsage +
           (ulonglong)(this->SamplingBoneCount + this->SamplingSocketCount) * 0x20 +
           (ulonglong)this->SectionBoneCount * 0x30;
      pTVar17 = pTVar17 + 4;
    } while (puVar3 != &this->CurrentBoneBufferId);
  }
  auVar8 = (uchar  [8])this->GPUMemoryUsage;
  if (auVar8 != (uchar  [8])0x0) {
    FVar15 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_168,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar14,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar9 = *(FName *)FVar15;
    if (((FVar9 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_220._0_4_ = FVar9.ComparisonIndex.Value.Value;
      local_220.PrevTag = FVar9.Number;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_178.NameAndInfo.Number = FVar9.Number & 0xffffafff | 0xa000;
      local_1a0 = FVar9;
      local_178.StatData.Pad = auVar8;
      local_178.NameAndInfo.Index.Value = FVar9.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_178);
      FStatsTrace::Add(&local_1a0,(long64)auVar8);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Initialise @ 149241b70

void __thiscall
FSkeletalMeshGpuDynamicBufferProxy::Initialise
          (FSkeletalMeshGpuDynamicBufferProxy *this,FReferenceSkeleton *param_1,
          FSkeletalMeshLODRenderData *param_2,uint param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res20 [8];
  
  this->SectionBoneCount = 0;
  iVar1 = (param_2->RenderSections).ArrayNum;
  pFVar2 = (param_2->RenderSections).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x118;
  while( true ) {
    if ((param_2->RenderSections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar2 == pFVar3) break;
    this->SectionBoneCount = this->SectionBoneCount + *(int *)(pFVar2 + 0x40);
    pFVar2 = pFVar2 + 0x118;
  }
  this->SamplingBoneCount = (param_1->FinalRefBoneInfo).ArrayNum;
  this->SamplingSocketCount = param_3;
  return;
}

// NewFrame @ 149243520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshGpuDynamicBufferProxy::NewFrame
          (FSkeletalMeshGpuDynamicBufferProxy *this,FNDISkeletalMesh_InstanceData *param_1,
          int param_2)

{
  double *pdVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  USkeletalMeshComponent *pUVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  FReferenceSkeleton *pFVar16;
  FReferenceSkeleton *pFVar17;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  code **ppcVar21;
  TTransform<double> *pTVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar28;
  FReferenceSkeleton *pFVar29;
  int local_res18 [2];
  undefined1 auStackY_348 [32];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2f8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2e8;
  USkeletalMesh *local_2d8;
  USkeletalMeshComponent *local_2d0;
  code *local_2c8;
  undefined8 local_2c0;
  code *local_2b8;
  undefined8 local_2b0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2a8;
  FNDISkeletalMesh_InstanceData *local_298;
  longlong local_290;
  FSkeletalMeshGpuDynamicBufferProxy *local_288;
  FSkeletalMeshGpuDynamicBufferProxy *local_280;
  USkeletalMesh **local_278;
  int *local_270;
  code **local_268;
  FNDISkeletalMesh_InstanceData **local_260;
  code **local_258;
  USkeletalMeshComponent **local_250;
  USkeletalMesh **local_248;
  code *local_238 [2];
  code *local_228 [3];
  code **local_210;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  undefined1 local_148 [40];
  code **local_120;
  byte local_118;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  FReferenceSkeleton *pFVar27;
  
  if (param_1 == (FNDISkeletalMesh_InstanceData *)0x0) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  pFVar16 = (FReferenceSkeleton *)0x0;
  local_2d8 = (USkeletalMesh *)0x0;
  local_res18[0] = param_2;
  local_298 = param_1;
  local_288 = this;
  local_2d0 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (local_2d0 == (USkeletalMeshComponent *)0x0) {
LAB_1492435bc:
    local_2d0 = (USkeletalMeshComponent *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar13 = (int)pUVar14->_padding_;
    if ((*(int *)(local_2d0->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_2d0->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar14->_padding_)) goto LAB_1492435bc;
    local_2d8 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_2d0);
  }
  if ((local_2d8 == (USkeletalMesh *)0x0) &&
     (local_2d8 = (USkeletalMesh *)FWeakObjectPtr::Get(&(local_298->SkeletalMesh).WeakPtr),
     local_2d8 == (USkeletalMesh *)0x0)) {
    return;
  }
  local_278 = &local_2d8;
  local_270 = local_res18;
  local_268 = &local_2b8;
  local_260 = &local_298;
  local_258 = &local_2c8;
  local_2b8 = (code *)0x0;
  local_2b0 = 0;
  local_2c8 = (code *)0x0;
  local_2c0 = 0;
  local_280 = this;
  if (local_2d0 == (USkeletalMeshComponent *)0x0) {
    pFVar17 = (FReferenceSkeleton *)(**(code **)(local_2d8->_padding_ + 800))();
    uVar25 = this->SamplingBoneCount;
    local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.ArrayNum = 0;
    local_2e8.ArrayMax = 0;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    if (0 < (int)uVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar25,&local_2e8.AllocatorInstance,0,&local_2e8.ArrayMax);
    }
    lVar24 = (**(code **)(local_2d8->_padding_ + 800))();
    iVar13 = *(int *)(lVar24 + 0x38);
    pFVar27 = pFVar16;
    pFVar29 = pFVar16;
    if (0 < iVar13) {
      do {
        uVar26 = (uint)pFVar27;
        uVar25 = 0;
        if ((int)uVar26 < iVar13) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar28 = *(longlong *)(lVar24 + 0x30);
        pdVar1 = (double *)((longlong)&(pFVar29->RawRefBoneInfo).AllocatorInstance.Data + lVar28);
        local_1a8.Rotation.XY.m128d_f64[0] = *pdVar1;
        local_1a8.Rotation.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)((longlong)&(pFVar29->RawRefBonePose).AllocatorInstance.Data + lVar28);
        local_1a8.Rotation.ZW.m128d_f64[0] = *pdVar1;
        local_1a8.Rotation.ZW.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)((longlong)&(pFVar29->FinalRefBoneInfo).AllocatorInstance.Data + lVar28);
        local_1a8.Translation.XY.m128d_f64[0] = *pdVar1;
        local_1a8.Translation.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)((longlong)&(pFVar29->FinalRefBonePose).AllocatorInstance.Data + lVar28);
        local_1a8.Translation.ZW.m128d_f64[0] = *pdVar1;
        local_1a8.Translation.ZW.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(&(pFVar29->RawNameToIndexMap).field_0x0 + lVar28);
        local_1a8.Scale3D.XY.m128d_f64[0] = *pdVar1;
        local_1a8.Scale3D.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(&(pFVar29->RawNameToIndexMap).field_0x10 + lVar28);
        local_1a8.Scale3D.ZW.m128d_f64[0] = *pdVar1;
        local_1a8.Scale3D.ZW.m128d_f64[1] = pdVar1[1];
        uVar25 = 0;
        if ((int)uVar26 < (pFVar17->FinalRefBoneInfo).ArrayNum) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar13 = *(int *)((pFVar17->FinalRefBoneInfo).AllocatorInstance.Data + 8 +
                         (longlong)&(pFVar16->RawRefBoneInfo).AllocatorInstance);
        if (iVar13 < 0) {
LAB_149243e20:
        }
        else if (iVar13 < local_2e8.ArrayNum) {
          local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_a8,&local_1a8,
                     (TTransform<double> *)
                     (local_2e8.AllocatorInstance.Data + (longlong)iVar13 * 0x60));
          local_1a8.Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
          local_1a8.Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
          local_1a8.Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
          local_1a8.Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
          local_1a8.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
          local_1a8.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
          local_1a8.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
          local_1a8.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
          local_1a8.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
          local_1a8.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
          local_1a8.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
          local_1a8.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
          goto LAB_149243e20;
        }
        iVar13 = local_2e8.ArrayNum;
        if ((local_2e8.AllocatorInstance.Data <= &local_1a8) &&
           (&local_1a8 <
            (TTransform<double> *)
            (local_2e8.AllocatorInstance.Data + (longlong)local_2e8.ArrayMax * 0x60))) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = local_2e8.ArrayNum;
        }
        if (iVar13 == local_2e8.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&local_2e8.AllocatorInstance,&local_2e8.ArrayMax);
        }
        local_2e8.ArrayNum = iVar13 + 1;
        pFVar16 = (FReferenceSkeleton *)&(pFVar16->RawRefBoneInfo).ArrayMax;
        lVar28 = (longlong)iVar13 * 0x60;
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28) = local_1a8.Rotation.XY.m128d_f64[0];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 8) =
             local_1a8.Rotation.XY.m128d_f64[1];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x10) =
             local_1a8.Rotation.ZW.m128d_f64[0];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x10 + 8) =
             local_1a8.Rotation.ZW.m128d_f64[1];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x20) =
             local_1a8.Translation.XY.m128d_f64[0];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x20 + 8) =
             local_1a8.Translation.XY.m128d_f64[1];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x30) =
             local_1a8.Translation.ZW.m128d_f64[0];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x30 + 8) =
             local_1a8.Translation.ZW.m128d_f64[1];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x40) =
             local_1a8.Scale3D.XY.m128d_f64[0];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x40 + 8) =
             local_1a8.Scale3D.XY.m128d_f64[1];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x50) =
             local_1a8.Scale3D.ZW.m128d_f64[0];
        *(double *)(local_2e8.AllocatorInstance.Data + lVar28 + 0x50 + 8) =
             local_1a8.Scale3D.ZW.m128d_f64[1];
        iVar13 = *(int *)(lVar24 + 0x38);
        pFVar27 = (FReferenceSkeleton *)(ulonglong)(uVar26 + 1);
        pFVar29 = (FReferenceSkeleton *)&(pFVar29->RawNameToIndexMap).field_0x20;
      } while ((int)(uVar26 + 1) < iVar13);
    }
    `FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_1>::operator()
              (&local_280,&local_2e8,pFVar17);
    FVar20.Data = local_2e8.AllocatorInstance.Data;
  }
  else {
    pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_2d0->_padding_);
    pUVar6 = local_2d0;
    if (pUVar15 == (UObject *)0x0) {
      iVar13 = (int)local_2d0->_padding_;
      if (0 < (int)(&local_2d0->_padding_)[(longlong)iVar13 * 2]) {
        pFVar16 = (FReferenceSkeleton *)(**(code **)(local_2d8->_padding_ + 800))();
        `FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_1>::operator()
                  (&local_280,
                   (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                   (&pUVar6->_padding_ + (longlong)iVar13 * 2),pFVar16);
        goto LAB_149243f5d;
      }
      local_250 = &local_2d0;
      local_248 = &local_2d8;
      `FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l43::<lambda_2>::operator()(&local_250);
      uVar25 = this->SamplingBoneCount;
      local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a8.ArrayNum = 0;
      local_2a8.ArrayMax = 0;
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x60,0x10,uVar25,&local_2a8.AllocatorInstance,&local_2a8.ArrayNum,
                          &local_2a8.ArrayMax);
      DefaultConstructItems<UE::Math::TTransform<double>,int>
                (local_2a8.AllocatorInstance.Data + (longlong)iVar13 * 0x60,uVar25);
      `FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_1>::operator()
                (&local_280,&local_2a8,(FReferenceSkeleton *)0x0);
      FVar20.Data = local_2a8.AllocatorInstance.Data;
    }
    else {
      uVar25 = this->SamplingBoneCount;
      iVar13 = (int)local_2d0->_padding_;
      local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f8.ArrayNum = 0;
      local_2f8.ArrayMax = 0;
      if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
      }
      if (0 < (int)uVar25) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar25,&local_2f8.AllocatorInstance,0,&local_2f8.ArrayMax);
      }
      if (iVar13 == 0) {
        uVar25 = this->SamplingBoneCount;
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x60,0x10,uVar25,&local_2f8.AllocatorInstance,&local_2f8.ArrayNum,
                            &local_2f8.ArrayMax);
        DefaultConstructItems<UE::Math::TTransform<double>,int>
                  (local_2f8.AllocatorInstance.Data + (longlong)iVar13 * 0x60,uVar25);
      }
      else {
        pFVar16 = (FReferenceSkeleton *)(**(code **)(local_2d8->_padding_ + 800))();
        iVar2 = *(int *)&pUVar15[0x28].field_0x20;
        uVar25 = 0;
        lVar24 = 0;
        local_290 = (longlong)iVar13;
        if (0 < iVar13) {
          lVar28 = 0;
          do {
            if (((int)uVar25 < 0) || ((int)pUVar6->_padding_ <= (int)uVar25)) {
LAB_149243896:
              iVar13 = FReferenceSkeleton::GetParentIndex(pFVar16,uVar25);
              uVar26 = 0;
              if ((int)uVar25 < (pFVar16->FinalRefBonePose).ArrayNum) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = (pFVar16->FinalRefBonePose).AllocatorInstance.Data;
              local_208.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar28);
              local_208.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar28 + 8);
              local_208.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar28 + 0x10);
              local_208.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar28 + 0x10 + 8);
              local_208.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar28 + 0x20);
              local_208.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar28 + 0x20 + 8);
              local_208.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar28 + 0x30);
              local_208.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar28 + 0x30 + 8);
              local_208.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar28 + 0x40);
              local_208.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar28 + 0x40 + 8);
              local_208.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar28 + 0x50);
              local_208.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar28 + 0x50 + 8);
              if (iVar13 < 0) {
LAB_149243a05:
              }
              else if (iVar13 < local_2f8.ArrayNum) {
                local_108.Rotation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                local_108.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_108.Rotation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
                local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                local_108.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
                local_108.Translation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                local_108.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_108.Translation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
                local_108.Translation.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                local_108.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_108.Translation.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
                local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                local_108.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
                local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                local_108.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
                UE::Math::TTransform<double>::Multiply
                          (&local_108,&local_208,
                           (TTransform<double> *)
                           (local_2f8.AllocatorInstance.Data + (longlong)iVar13 * 0x60));
                local_208.Rotation.XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
                local_208.Rotation.XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
                local_208.Rotation.ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
                local_208.Rotation.ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
                local_208.Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
                local_208.Translation.XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
                local_208.Translation.ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
                local_208.Translation.ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
                local_208.Scale3D.XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
                local_208.Scale3D.XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
                local_208.Scale3D.ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0];
                local_208.Scale3D.ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1];
                goto LAB_149243a05;
              }
              iVar13 = local_2f8.ArrayNum;
              if ((local_2f8.AllocatorInstance.Data <= &local_208) &&
                 (&local_208 <
                  (TTransform<double> *)
                  (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x60))) {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar12) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar13 = local_2f8.ArrayNum;
              }
              if (iVar13 == local_2f8.ArrayMax) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1060,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
              }
              local_2f8.ArrayNum = iVar13 + 1;
              lVar19 = (longlong)iVar13 * 0x60;
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19) =
                   local_208.Rotation.XY.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 8) =
                   local_208.Rotation.XY.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x10) =
                   local_208.Rotation.ZW.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x10 + 8) =
                   local_208.Rotation.ZW.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x20) =
                   local_208.Translation.XY.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x20 + 8) =
                   local_208.Translation.XY.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x30) =
                   local_208.Translation.ZW.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x30 + 8) =
                   local_208.Translation.ZW.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x40) =
                   local_208.Scale3D.XY.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x40 + 8) =
                   local_208.Scale3D.XY.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x50) =
                   local_208.Scale3D.ZW.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x50 + 8) =
                   local_208.Scale3D.ZW.m128d_f64[1];
            }
            else {
              iVar13 = *(int *)(pUVar6->_padding_ + lVar24 * 4);
              if ((iVar13 == -1) ||
                 (*(int *)(&pUVar15[0x27].field_0x8 + (longlong)iVar2 * 0x10) <= iVar13))
              goto LAB_149243896;
              if ((iVar13 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar22 = (TTransform<double> *)
                        ((longlong)iVar13 * 0x60 +
                        *(longlong *)(&pUVar15[0x27].field_0x0 + (longlong)iVar2 * 0x10));
              if (((local_2f8.AllocatorInstance.Data <= pTVar22) &&
                  (pTVar22 < (TTransform<double> *)
                             (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x60
                             ))) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar13 = local_2f8.ArrayNum;
              if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1060,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
              }
              local_2f8.ArrayNum = iVar13 + 1;
              dVar5 = (pTVar22->Rotation).XY.m128d_f64[1];
              lVar19 = (longlong)iVar13 * 0x60;
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19) =
                   (pTVar22->Rotation).XY.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 8) = dVar5;
              dVar5 = (pTVar22->Rotation).ZW.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x10) =
                   (pTVar22->Rotation).ZW.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x10 + 8) = dVar5;
              dVar5 = (pTVar22->Translation).XY.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x20) =
                   (pTVar22->Translation).XY.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x20 + 8) = dVar5;
              dVar5 = (pTVar22->Translation).ZW.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x30) =
                   (pTVar22->Translation).ZW.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x30 + 8) = dVar5;
              dVar5 = (pTVar22->Scale3D).XY.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x40) =
                   (pTVar22->Scale3D).XY.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x40 + 8) = dVar5;
              dVar5 = (pTVar22->Scale3D).ZW.m128d_f64[1];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x50) =
                   (pTVar22->Scale3D).ZW.m128d_f64[0];
              *(double *)(local_2f8.AllocatorInstance.Data + lVar19 + 0x50 + 8) = dVar5;
            }
            uVar25 = uVar25 + 1;
            lVar24 = lVar24 + 1;
            lVar28 = lVar28 + 0x60;
          } while (lVar24 < local_290);
        }
      }
      `FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_1>::operator()
                (&local_280,&local_2f8,pFVar16);
      FVar20.Data = local_2f8.AllocatorInstance.Data;
    }
  }
  if ((TTransform<double> *)FVar20.Data != (TTransform<double> *)0x0) {
    FMemory::Free(FVar20.Data);
  }
LAB_149243f5d:
  pcVar9 = local_2b8;
  pcVar4 = local_2c8;
  uVar10 = (undefined4)local_2b0;
  uVar11 = local_2b0._4_4_;
  uVar7 = (undefined4)local_2c0;
  uVar8 = local_2c0._4_4_;
  local_2b8 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2b0 = 0;
  local_2c0 = 0;
  local_238[0] = (code *)0x0;
  local_210 = FMemory::Malloc(0x30,8);
  *local_210 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::`2'::<lambda_3>,1,1>
                        ::_vftable_;
  local_210[1] = (code *)local_288;
  local_210[2] = pcVar9;
  *(undefined4 *)(local_210 + 3) = uVar10;
  *(undefined4 *)((longlong)local_210 + 0x1c) = uVar11;
  local_210[4] = pcVar4;
  *(undefined4 *)(local_210 + 5) = uVar7;
  *(undefined4 *)((longlong)local_210 + 0x2c) = uVar8;
  if (local_210 + 1 != (code **)0x0) {
    local_238[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkeletalMeshGpuDynamicBufferProxy::NewFrame_::__l2::TSTR_UpdateSpawnInfoForSkinnedMesh1431>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_238);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_148._0_8_ = local_238[0];
    local_238[0] = (code *)0x0;
    local_120 = local_210;
    local_210 = (code **)0x0;
    local_148._16_8_ = local_228[0];
    local_148._24_8_ = local_228[1];
    local_148._32_8_ = local_228[2];
    local_118 = 2;
    pFVar18 = (FRenderCommandTag *)
              TRenderCommandTag<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::TSTR_UpdateSpawnInfoForSkinnedMesh1431>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_148,pFVar18);
    uVar23 = (ulonglong)local_118;
    if ((2 < uVar23) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_148._0_8_ != (code *)0x0) {
        ppcVar21 = (code **)(local_148 + 0x10);
        if (local_120 != (code **)0x0) {
          ppcVar21 = local_120;
        }
        (**(code **)(*ppcVar21 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23])(local_148);
    }
  }
  if (local_238[0] != (code *)0x0) {
    ppcVar21 = local_238 + 2;
    if (local_210 != (code **)0x0) {
      ppcVar21 = local_210;
    }
    (**(code **)(*ppcVar21 + 0x10))();
  }
  if (local_2c8 != (code *)0x0) {
    FMemory::Free(local_2c8);
  }
  if (local_2b8 != (code *)0x0) {
    FMemory::Free(local_2b8);
  }
  return;
}

// ReleaseRHI @ 14924abb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshGpuDynamicBufferProxy::ReleaseRHI(FSkeletalMeshGpuDynamicBufferProxy *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FRHIBuffer *pFVar3;
  FRHIShaderResourceView *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FSkeletalBuffer *pFVar7;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->GPUMemoryUsage;
  if (auVar1 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar6;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->GPUMemoryUsage = 0;
  for (pFVar7 = this->RWBufferBones; pFVar7 != (FSkeletalBuffer *)&this->CurrentBoneBufferId;
      pFVar7 = pFVar7 + 1) {
    pFVar3 = (pFVar7->SectionBuffer).Reference;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      (pFVar7->SectionBuffer).Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = (pFVar7->SectionSRV).Reference;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      (pFVar7->SectionSRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar3 = (pFVar7->SamplingBuffer).Reference;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      (pFVar7->SamplingBuffer).Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = (pFVar7->SamplingSRV).Reference;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      (pFVar7->SamplingSRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  return;
}

// operator() @ 15053ec10

bool __thiscall
`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l43::<lambda_2>::operator()(void *this)

{
  UObjectBaseUtility *pUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4024959817545153160>);
  if (bVar5) {
    pUVar1 = (UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8);
    if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(pUVar1,&local_28,(UObject *)0x0,None);
    }
    pUVar1 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(pUVar1,&local_38,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar3 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4024959817545153160>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15053ed65;
    }
  }
  bVar5 = false;
LAB_15053ed65:
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

