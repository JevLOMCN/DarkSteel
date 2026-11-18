// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FStaticMeshAreaWeightedSectionSampler @ 148711db0

FStaticMeshAreaWeightedSectionSampler * __thiscall
FStaticMeshAreaWeightedSectionSampler::FStaticMeshAreaWeightedSectionSampler
          (FStaticMeshAreaWeightedSectionSampler *this)

{
  FWeightedRandomSampler::FWeightedRandomSampler((FWeightedRandomSampler *)this);
  this->_padding_ = (longlong)&___7FStaticMeshAreaWeightedSectionSampler__6B_;
  (this->Owner).Reference = (FStaticMeshLODResources *)0x0;
  return this;
}

// GetWeights @ 148741e60

float __thiscall
FStaticMeshAreaWeightedSectionSampler::GetWeights
          (FStaticMeshAreaWeightedSectionSampler *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FStaticMeshLODResources *pFVar10;
  uint uVar11;
  FStaticMeshLODResources *pFVar12;
  FStaticMeshLODResources *pFVar13;
  FStaticMeshLODResources *pFVar14;
  float fVar15;
  float local_38 [8];
  
  pFVar13 = (this->Owner).Reference;
  fVar15 = 0.0;
  if (pFVar13 != (FStaticMeshLODResources *)0x0) {
    uVar7 = *(uint *)&(pFVar13->Sections).field_0x28;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar1 = &param_1->ArrayMax;
    pFVar13 = (FStaticMeshLODResources *)0x0;
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar7,&param_1->AllocatorInstance,0,piVar1);
    }
    pFVar10 = (this->Owner).Reference;
    pFVar12 = pFVar13;
    pFVar14 = pFVar13;
    if (0 < *(int *)&(pFVar10->Sections).field_0x28) {
      do {
        uVar11 = (uint)pFVar12;
        uVar7 = 0;
        if ((int)uVar11 < (pFVar10->AreaWeightedSectionSamplers).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar15 = (float)(*pcVar4)();
          return fVar15;
        }
        FVar9 = (pFVar10->AreaWeightedSectionSamplers).AllocatorInstance;
        if (((ulonglong)FVar9 & 1) != 0) {
          FVar9 = (ForAnyElementType)
                  ((longlong)&(pFVar10->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                  ((longlong)FVar9 >> 0x18));
        }
        local_38[0] = *(float *)(&(pFVar14->Sections).field_0x18 + (longlong)FVar9);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar15 = (float)(*pcVar4)();
          return fVar15;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar8 + 1;
        *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_38[0];
        pFVar10 = (this->Owner).Reference;
        fVar15 = fVar15 + local_38[0];
        pFVar12 = (FStaticMeshLODResources *)(ulonglong)(uVar11 + 1);
        pFVar14 = (FStaticMeshLODResources *)&pFVar14->DistanceFieldData;
      } while ((int)(uVar11 + 1) < *(int *)&(pFVar10->Sections).field_0x28);
    }
    if (pFVar10 != (FStaticMeshLODResources *)0x0) {
      (this->Owner).Reference = (FStaticMeshLODResources *)0x0;
      plVar2 = &pFVar10->_padding_;
      LOCK();
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        if (plVar2 == (longlong *)0x0) {
          pFVar10 = pFVar13;
        }
        if (pFVar10 != (FStaticMeshLODResources *)0x0) {
          (**(code **)pFVar10->_padding_)(pFVar10,1);
        }
      }
    }
  }
  return fVar15;
}

// Init @ 148743270

void __thiscall
FStaticMeshAreaWeightedSectionSampler::Init
          (FStaticMeshAreaWeightedSectionSampler *this,FStaticMeshLODResources *param_1)

{
  longlong *plVar1;
  FStaticMeshLODResources *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Owner).Reference;
  if (pFVar2 != param_1) {
    (this->Owner).Reference = param_1;
    if (param_1 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487432c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this);
  return;
}

