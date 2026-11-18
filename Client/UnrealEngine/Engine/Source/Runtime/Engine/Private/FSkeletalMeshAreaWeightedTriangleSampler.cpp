// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetWeights @ 1485e2840

float __thiscall
FSkeletalMeshAreaWeightedTriangleSampler::GetWeights
          (FSkeletalMeshAreaWeightedTriangleSampler *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  FRawStaticIndexBuffer16or32Interface *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  uint uVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  uint uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  longlong local_res20;
  float local_178;
  float local_174;
  FSkinWeightVertexBuffer *local_170;
  FSkeletalMeshLODRenderData *local_168;
  longlong local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  double local_140;
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108;
  TVector<double> local_f0;
  TVector<double> local_d8;
  TVector<double> local_c0 [5];
  
  if ((this->Owner == (USkeletalMesh *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSampling.cpp"
                         ,0x24,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  plVar14 = (longlong *)(**(code **)(this->Owner->_padding_ + 0x398))();
  uVar17 = this->LODIndex;
  uVar19 = 0;
  uVar16 = 0;
  if ((int)uVar17 < (int)plVar14[1]) {
    uVar16 = ~uVar17 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  pFVar2 = *(FSkeletalMeshLODRenderData **)(*plVar14 + (longlong)(int)uVar17 * 8);
  local_170 = &pFVar2->SkinWeightVertexBuffer;
  local_168 = pFVar2;
  if (((pFVar2->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IndexBuffer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                            ,0x51,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  pFVar3 = (pFVar2->MultiSizeIndexContainer).IndexBuffer;
  USkeletalMesh::WaitUntilAsyncPropertyReleased(this->Owner,SamplingInfo,ReadOnly);
  pTVar18 = this->TriangleIndices;
  fVar20 = 0.0;
  local_158 = pTVar18;
  if (pTVar18 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    if (((pFVar2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x51,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      fVar20 = (float)(*pcVar5)();
      return fVar20;
    }
    iVar12 = (**(code **)(((pFVar2->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))();
    uVar17 = iVar12 / 3 + (iVar12 >> 0x1f) +
             (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >> 0x1f);
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar17,&param_1->AllocatorInstance,0,piVar1);
    }
    dVar8 = __real_3fe0000000000000;
    if (0 < iVar12) {
      do {
        iVar10 = (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,uVar19);
        iVar11 = (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,uVar19 + 1);
        iVar13 = (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,uVar19 + 2);
        pFVar2 = local_168;
        pTVar15 = GetSkeletalMeshRefVertLocation(&local_f0,this->Owner,local_168,local_170,iVar10);
        dVar23 = (pTVar15->field0_0x0)._s_0.X;
        dVar7 = (pTVar15->field0_0x0)._s_0.Y;
        dVar25 = (pTVar15->field0_0x0)._s_0.Z;
        pTVar15 = GetSkeletalMeshRefVertLocation
                            (&local_d8,this->Owner,pFVar2,&pFVar2->SkinWeightVertexBuffer,iVar11);
        dVar24 = (pTVar15->field0_0x0)._s_0.X;
        dVar6 = (pTVar15->field0_0x0)._s_0.Y;
        dVar21 = (pTVar15->field0_0x0)._s_0.Z;
        pTVar15 = GetSkeletalMeshRefVertLocation
                            (local_c0,this->Owner,pFVar2,&pFVar2->SkinWeightVertexBuffer,iVar13);
        dVar24 = dVar24 - dVar23;
        dVar21 = dVar21 - dVar25;
        local_140 = (pTVar15->field0_0x0)._s_0.Z;
        dVar6 = dVar6 - dVar7;
        dVar7 = (pTVar15->field0_0x0)._s_0.Y - dVar7;
        dVar23 = (pTVar15->field0_0x0)._s_0.X - dVar23;
        dVar25 = local_140 - dVar25;
        dVar22 = dVar25 * dVar6 - dVar7 * dVar21;
        dVar21 = dVar23 * dVar21 - dVar25 * dVar24;
        dVar25 = dVar7 * dVar24 - dVar23 * dVar6;
        pFVar4 = (param_1->AllocatorInstance).Data;
        local_174 = (float)(SQRT(dVar21 * dVar21 + dVar22 * dVar22 + dVar25 * dVar25) * dVar8);
        if (((pFVar4 <= (FScriptContainerElement *)&local_174) &&
            ((FScriptContainerElement *)&local_174 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          fVar20 = (float)(*pcVar5)();
          return fVar20;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar10 + 1;
        uVar19 = uVar19 + 3;
        *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_174;
        fVar20 = fVar20 + local_174;
      } while ((int)uVar19 < iVar12);
    }
  }
  else {
    uVar17 = pTVar18->ArrayNum;
    if (uVar17 == 0) {
      fVar20 = 0.0;
    }
    else {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = 0;
      if (*piVar1 != uVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar17,&param_1->AllocatorInstance,0,piVar1);
      }
      dVar8 = __real_3fe0000000000000;
      if (0 < (int)uVar17) {
        local_res20 = 0;
        local_160 = (longlong)(int)uVar17;
        do {
          uVar17 = 0;
          if ((int)uVar19 < pTVar18->ArrayNum) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            fVar20 = (float)(*pcVar5)();
            return fVar20;
          }
          iVar12 = *(int *)((pTVar18->AllocatorInstance).Data + local_res20 * 4);
          iVar10 = (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,iVar12);
          iVar11 = (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,iVar12 + 1);
          iVar12 = (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,iVar12 + 2);
          pFVar2 = local_168;
          pTVar15 = GetSkeletalMeshRefVertLocation
                              (&local_138,this->Owner,local_168,local_170,iVar10);
          dVar23 = (pTVar15->field0_0x0)._s_0.X;
          dVar7 = (pTVar15->field0_0x0)._s_0.Y;
          dVar25 = (pTVar15->field0_0x0)._s_0.Z;
          pTVar15 = GetSkeletalMeshRefVertLocation
                              (&local_120,this->Owner,pFVar2,&pFVar2->SkinWeightVertexBuffer,iVar11)
          ;
          dVar24 = (pTVar15->field0_0x0)._s_0.X;
          dVar6 = (pTVar15->field0_0x0)._s_0.Y;
          dVar21 = (pTVar15->field0_0x0)._s_0.Z;
          pTVar15 = GetSkeletalMeshRefVertLocation
                              (&local_108,this->Owner,pFVar2,&pFVar2->SkinWeightVertexBuffer,iVar12)
          ;
          dVar24 = dVar24 - dVar23;
          dVar21 = dVar21 - dVar25;
          local_140 = (pTVar15->field0_0x0)._s_0.Z;
          dVar6 = dVar6 - dVar7;
          dVar7 = (pTVar15->field0_0x0)._s_0.Y - dVar7;
          dVar23 = (pTVar15->field0_0x0)._s_0.X - dVar23;
          dVar25 = local_140 - dVar25;
          dVar22 = dVar25 * dVar6 - dVar7 * dVar21;
          dVar21 = dVar23 * dVar21 - dVar25 * dVar24;
          dVar25 = dVar7 * dVar24 - dVar23 * dVar6;
          pFVar4 = (param_1->AllocatorInstance).Data;
          local_178 = (float)(SQRT(dVar21 * dVar21 + dVar22 * dVar22 + dVar25 * dVar25) * dVar8);
          if (((pFVar4 <= (FScriptContainerElement *)&local_178) &&
              ((FScriptContainerElement *)&local_178 < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            fVar20 = (float)(*pcVar5)();
            return fVar20;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_1->AllocatorInstance,piVar1);
          }
          local_res20 = local_res20 + 1;
          uVar19 = uVar19 + 1;
          param_1->ArrayNum = iVar12 + 1;
          *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_178;
          fVar20 = fVar20 + local_178;
          pTVar18 = local_158;
        } while (local_res20 < local_160);
      }
    }
  }
  return fVar20;
}

// FSkeletalMeshAreaWeightedTriangleSampler @ 148620b60

FSkeletalMeshAreaWeightedTriangleSampler * __thiscall
FSkeletalMeshAreaWeightedTriangleSampler::FSkeletalMeshAreaWeightedTriangleSampler
          (FSkeletalMeshAreaWeightedTriangleSampler *this)

{
  FWeightedRandomSampler::FWeightedRandomSampler((FWeightedRandomSampler *)this);
  this->LODIndex = -1;
  this->_padding_ = (longlong)&___7FSkeletalMeshAreaWeightedTriangleSampler__6B_;
  this->Owner = (USkeletalMesh *)0x0;
  this->TriangleIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  return this;
}

// Init @ 148652390

void __thiscall
FSkeletalMeshAreaWeightedTriangleSampler::Init
          (FSkeletalMeshAreaWeightedTriangleSampler *this,USkeletalMesh *param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  
  this->Owner = param_1;
  if (param_1 == (USkeletalMesh *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOwner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSampling.cpp"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar3 = (**(code **)(param_1->_padding_ + 0x440))(param_1,param_2);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOwner->IsValidLODIndex(InLODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSampling.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->LODIndex = param_2;
  this->TriangleIndices = param_3;
                    /* WARNING: Could not recover jumptable at 0x000148652438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this);
  return;
}

