// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FStaticMeshSectionAreaWeightedTriangleSampler @ 148712020

FStaticMeshSectionAreaWeightedTriangleSampler * __thiscall
FStaticMeshSectionAreaWeightedTriangleSampler::FStaticMeshSectionAreaWeightedTriangleSampler
          (FStaticMeshSectionAreaWeightedTriangleSampler *this)

{
  FWeightedRandomSampler::FWeightedRandomSampler((FWeightedRandomSampler *)this);
  this->Owner = (FStaticMeshLODResources *)0x0;
  this->_padding_ = (longlong)&___7FStaticMeshSectionAreaWeightedTriangleSampler__6B_;
  this->SectionIdx = -1;
  return this;
}

// GetWeights @ 148742080

float __thiscall
FStaticMeshSectionAreaWeightedTriangleSampler::GetWeights
          (FStaticMeshSectionAreaWeightedTriangleSampler *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  FStaticMeshLODResources *pFVar5;
  FStaticMeshSectionArray *pFVar6;
  uchar *puVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FStaticMeshSectionArray *pFVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  FIndexArrayView local_80 [6];
  
  if ((this->Owner == (FStaticMeshLODResources *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                          ,0x4ad,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    fVar22 = (float)(*pcVar9)();
    return fVar22;
  }
  if ((this->SectionIdx == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SectionIdx != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                          ,0x4ae,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    fVar22 = (float)(*pcVar9)();
    return fVar22;
  }
  iVar14 = this->SectionIdx;
  if (((iVar14 < 0) || (*(int *)&(this->Owner->Sections).field_0x28 <= iVar14)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner->Sections.IsValidIndex(SectionIdx)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                          ,0x4af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    fVar22 = (float)(*pcVar9)();
    return fVar22;
  }
  FRawStaticIndexBuffer::GetArrayView(&this->Owner->IndexBuffer,local_80);
  uVar17 = this->SectionIdx;
  pFVar5 = this->Owner;
  uVar12 = 0;
  if ((int)uVar17 < *(int *)&(pFVar5->Sections).field_0x28) {
    uVar12 = ~uVar17 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    fVar22 = (float)(*pcVar9)();
    return fVar22;
  }
  pFVar6 = *(FStaticMeshSectionArray **)&(pFVar5->Sections).field_0x20;
  fVar22 = 0.0;
  pFVar18 = &pFVar5->Sections;
  if (pFVar6 != (FStaticMeshSectionArray *)0x0) {
    pFVar18 = pFVar6;
  }
  iVar14 = *(int *)(&pFVar18->field_0x8 + (longlong)(int)uVar17 * 0x1c);
  iVar4 = *(int *)(&pFVar18->field_0x4 + (longlong)(int)uVar17 * 0x1c);
  lVar21 = (longlong)iVar4;
  uVar17 = local_80[0].NumIndices / 3 + (local_80[0].NumIndices >> 0x1f) +
           (int)(((longlong)local_80[0].NumIndices / 3 + ((longlong)local_80[0].NumIndices >> 0x3f)
                 & 0xffffffffU) >> 0x1f);
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
  fVar10 = __real_3f000000;
  lVar16 = (longlong)(iVar14 + iVar4 + iVar14 * 2);
  if (lVar21 < lVar16) {
    lVar20 = lVar21 * 2 + 4;
    lVar19 = lVar21 * 4 + 8;
    lVar21 = ((lVar16 - lVar21) - 1U) / 3 + 1;
    do {
      if (local_80[0].b32Bit == false) {
        uVar17 = (uint)*(ushort *)((longlong)local_80[0].UntypedIndexData + lVar20 + -4);
      }
      else {
        uVar17 = *(uint *)((longlong)local_80[0].UntypedIndexData + lVar19 + -8);
      }
      puVar7 = (this->Owner->VertexBuffers).PositionVertexBuffer.Data;
      uVar12 = (this->Owner->VertexBuffers).PositionVertexBuffer.Stride;
      uVar2 = *(undefined8 *)(puVar7 + uVar12 * uVar17);
      if (local_80[0].b32Bit == false) {
        uVar15 = (uint)*(ushort *)((longlong)local_80[0].UntypedIndexData + lVar20 + -2);
      }
      else {
        uVar15 = *(uint *)((longlong)local_80[0].UntypedIndexData + lVar19 + -4);
      }
      uVar3 = *(undefined8 *)(puVar7 + uVar12 * uVar15);
      if (local_80[0].b32Bit == false) {
        uVar13 = (uint)*(ushort *)((longlong)local_80[0].UntypedIndexData + lVar20);
      }
      else {
        uVar13 = *(uint *)((longlong)local_80[0].UntypedIndexData + lVar19);
      }
      local_b0._0_4_ = (float)uVar3;
      local_a0._0_4_ = (float)uVar2;
      local_b0._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
      local_a0._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      pFVar8 = (param_1->AllocatorInstance).Data;
      fVar25 = *(float *)(puVar7 + (ulonglong)(uVar12 * uVar15) + 8) -
               *(float *)(puVar7 + (ulonglong)(uVar12 * uVar17) + 8);
      local_90 = *(undefined8 *)(puVar7 + uVar12 * uVar13);
      fVar24 = *(float *)(puVar7 + (ulonglong)(uVar12 * uVar13) + 8) -
               *(float *)(puVar7 + (ulonglong)(uVar12 * uVar17) + 8);
      fVar27 = (float)((ulonglong)local_90 >> 0x20) - local_a0._4_4_;
      fVar26 = (float)local_90 - (float)local_a0;
      fVar23 = fVar26 * fVar25 - fVar24 * ((float)local_b0 - (float)local_a0);
      fVar24 = fVar24 * (local_b0._4_4_ - local_a0._4_4_) - fVar27 * fVar25;
      fVar25 = fVar27 * ((float)local_b0 - (float)local_a0) -
               fVar26 * (local_b0._4_4_ - local_a0._4_4_);
      local_b8[0] = SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25) * fVar10;
      local_b0 = uVar3;
      local_a0 = uVar2;
      if (((pFVar8 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < pFVar8 + (longlong)*piVar1 * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        fVar22 = (float)(*pcVar9)();
        return fVar22;
      }
      iVar14 = param_1->ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar14 + 1;
      lVar19 = lVar19 + 0xc;
      lVar20 = lVar20 + 6;
      *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_b8[0];
      fVar22 = fVar22 + local_b8[0];
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return fVar22;
}

// Init @ 1487432d0

void __thiscall
FStaticMeshSectionAreaWeightedTriangleSampler::Init
          (FStaticMeshSectionAreaWeightedTriangleSampler *this,FStaticMeshLODResources *param_1,
          int param_2)

{
  this->Owner = param_1;
  this->SectionIdx = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001487432db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

