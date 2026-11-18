// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FMeshIndexWeightedSampler @ 1494258d0

FMeshIndexWeightedSampler * __thiscall
NSMMeshIndexPrivate::FMeshIndexWeightedSampler::FMeshIndexWeightedSampler
          (FMeshIndexWeightedSampler *this,int param_1,TArrayView<float_const_,int> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FMeshIndexWeightedSampler *pFVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float local_48;
  float local_44 [7];
  
  FWeightedRandomSampler::FWeightedRandomSampler((FWeightedRandomSampler *)this);
  uVar10 = 0;
  this->_padding_ = (longlong)&___7FMeshIndexWeightedSampler_NSMMeshIndexPrivate__6B_;
  piVar1 = &(this->PerIndexWeight).ArrayMax;
  (this->PerIndexWeight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerIndexWeight).ArrayNum = 0;
  *piVar1 = 0;
  this->TotalWeight = 0.0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (*piVar1 < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&(this->PerIndexWeight).AllocatorInstance,0,piVar1);
  }
  uVar11 = uVar10;
  if (0 < param_1) {
    do {
      iVar9 = (int)uVar10;
      if (param_2->ArrayNum < 1) {
        pFVar2 = (this->PerIndexWeight).AllocatorInstance.Data;
        local_44[0] = 1.0;
        if (((pFVar2 <= (FScriptContainerElement *)local_44) &&
            ((FScriptContainerElement *)local_44 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FMeshIndexWeightedSampler *)(*pcVar3)();
          return pFVar7;
        }
        iVar5 = (this->PerIndexWeight).ArrayNum;
        fVar12 = local_44[0];
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->PerIndexWeight).AllocatorInstance,piVar1);
          fVar12 = local_44[0];
        }
      }
      else {
        if (iVar9 < param_2->ArrayNum) {
          if ((iVar9 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FMeshIndexWeightedSampler *)(*pcVar3)();
            return pFVar7;
          }
          local_48 = *(float *)(uVar11 + (longlong)param_2->DataPtr);
          if (local_48 <= 0.0) {
            local_48 = 0.0;
          }
        }
        else {
          local_48 = 0.0;
        }
        pFVar2 = (this->PerIndexWeight).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FMeshIndexWeightedSampler *)(*pcVar3)();
          return pFVar7;
        }
        iVar5 = (this->PerIndexWeight).ArrayNum;
        fVar12 = local_48;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->PerIndexWeight).AllocatorInstance,piVar1);
          fVar12 = local_48;
        }
      }
      (this->PerIndexWeight).ArrayNum = iVar5 + 1;
      *(float *)((this->PerIndexWeight).AllocatorInstance.Data + (longlong)iVar5 * 4) = fVar12;
      iVar5 = (this->PerIndexWeight).ArrayNum;
      uVar8 = iVar5 - 1;
      uVar6 = 0;
      if ((int)uVar8 < iVar5) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMeshIndexWeightedSampler *)(*pcVar3)();
        return pFVar7;
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
      this->TotalWeight =
           *(float *)((this->PerIndexWeight).AllocatorInstance.Data +
                     (longlong)(this->PerIndexWeight).ArrayNum * 4 + -4) + this->TotalWeight;
      uVar11 = uVar11 + 4;
    } while ((int)(iVar9 + 1U) < param_1);
  }
  return this;
}

// GetWeights @ 14944ff20

float __thiscall
NSMMeshIndexPrivate::FMeshIndexWeightedSampler::GetWeights
          (FMeshIndexWeightedSampler *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->PerIndexWeight);
  return this->TotalWeight;
}

