// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetWeights @ 148fbeca0

float __thiscall
NDIStaticMeshLocal::FNDISectionAreaWeightedSampler::GetWeights
          (FNDISectionAreaWeightedSampler *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->TempWeights;
  if (param_1 != pTVar1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_1->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = (this->TempWeights).ArrayNum;
    param_1->ArrayMax = (this->TempWeights).ArrayMax;
    (this->TempWeights).ArrayNum = 0;
    (this->TempWeights).ArrayMax = 0;
    return this->TempTotalWeight;
  }
  return this->TempTotalWeight;
}

// Init @ 148fc1df0

void __thiscall
NDIStaticMeshLocal::FNDISectionAreaWeightedSampler::Init
          (FNDISectionAreaWeightedSampler *this,TArrayView<int_const_,int> *param_1,
          TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint *puVar10;
  float local_28 [4];
  
  this->TempTotalWeight = 0.0;
  piVar1 = &(this->TempWeights).ArrayMax;
  (this->TempWeights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TempWeights).AllocatorInstance,0,piVar1);
  }
  puVar10 = (uint *)param_1->DataPtr;
  puVar2 = puVar10 + param_1->ArrayNum;
  while( true ) {
    if (puVar10 == puVar2) {
      FWeightedRandomSampler::Initialize((FWeightedRandomSampler *)this);
      return;
    }
    uVar3 = *puVar10;
    uVar7 = 0;
    if ((int)uVar3 < param_2->ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    FVar9 = param_2->AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    local_28[0] = *(float *)((longlong)(int)uVar3 * 0x40 + 0x28 + (longlong)FVar9);
    this->TempTotalWeight = local_28[0] + this->TempTotalWeight;
    pFVar4 = (this->TempWeights).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->TempWeights).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->TempWeights).AllocatorInstance,piVar1);
    }
    (this->TempWeights).ArrayNum = iVar8 + 1;
    puVar10 = puVar10 + 1;
    *(float *)((this->TempWeights).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_28[0];
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Init @ 148fc1fc0

void __cdecl
NDIStaticMeshLocal::FNDISectionAreaWeightedSampler::Init
          (FStaticMeshLODResources *param_1,TArrayView<int_const_,int> *param_2,
          TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *param_3,
          TArray<NDIStaticMeshLocal::FNDISectionInfo,TSizedDefaultAllocator<32>_> *param_4)

{
  uint *puVar1;
  FStaticMeshSectionArray *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FStaticMeshSectionArray *pFVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  TArrayView<int_const_,int> local_98;
  FNDISectionAreaWeightedSampler local_88;
  
  if (param_3 ==
      (TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *)0x0) {
    iVar5 = param_2->ArrayNum;
    uVar10 = 0;
    if (0 < iVar5) {
      lVar15 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar10 < iVar5) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar9 = *(uint *)((longlong)param_2->DataPtr + lVar15);
        iVar5 = param_4->ArrayNum;
        if (iVar5 == param_4->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar5 + 1;
        pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        DefaultConstructItems<NDIStaticMeshLocal::FNDISectionInfo,int>(pFVar13,1);
        uVar12 = 0;
        if ((int)uVar9 < *(int *)&(param_1->Sections).field_0x28) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = *(FStaticMeshSectionArray **)&(param_1->Sections).field_0x20;
        pFVar8 = &param_1->Sections;
        if (pFVar2 != (FStaticMeshSectionArray *)0x0) {
          pFVar8 = pFVar2;
        }
        *(uint *)pFVar13 = *(uint *)(&pFVar8->field_0x4 + (longlong)(int)uVar9 * 0x1c) / 3;
        uVar12 = 0;
        if ((int)uVar9 < *(int *)&(param_1->Sections).field_0x28) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = *(FStaticMeshSectionArray **)&(param_1->Sections).field_0x20;
        pFVar8 = &param_1->Sections;
        if (pFVar2 != (FStaticMeshSectionArray *)0x0) {
          pFVar8 = pFVar2;
        }
        lVar15 = lVar15 + 4;
        uVar9 = *(uint *)(&pFVar8->field_0x8 + (longlong)(int)uVar9 * 0x1c);
        *(uint *)(pFVar13 + 0xc) = uVar10;
        uVar10 = uVar10 + 1;
        *(uint *)(pFVar13 + 4) = uVar9;
        *(uint *)(pFVar13 + 8) = 0x3f800000;
        iVar5 = param_2->ArrayNum;
      } while ((int)uVar10 < iVar5);
    }
  }
  else {
    FWeightedRandomSampler::FWeightedRandomSampler((FWeightedRandomSampler *)&local_88);
    local_98.DataPtr = param_2->DataPtr;
    local_98.ArrayNum = param_2->ArrayNum;
    local_98._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_88.TempTotalWeight = 0.0;
    uVar11 = 0;
    local_88._padding_ = (longlong)&___7FNDISectionAreaWeightedSampler_NDIStaticMeshLocal__6B_;
    local_88.TempWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.TempWeights.ArrayNum = 0;
    local_88.TempWeights.ArrayMax = 0;
    Init(&local_88,&local_98,param_3);
    iVar5 = param_2->ArrayNum;
    if (0 < iVar5) {
      uVar14 = uVar11;
      do {
        uVar9 = (uint)uVar11;
        uVar12 = ~uVar9 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar9 < iVar5) {
          uVar10 = uVar12;
        }
        if (uVar10 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar10 = *(uint *)((longlong)param_2->DataPtr + uVar14);
        iVar5 = param_4->ArrayNum;
        if (iVar5 == param_4->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar5 + 1;
        pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        DefaultConstructItems<NDIStaticMeshLocal::FNDISectionInfo,int>(pFVar13,1);
        uVar6 = 0;
        if ((int)uVar10 < *(int *)&(param_1->Sections).field_0x28) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = *(FStaticMeshSectionArray **)&(param_1->Sections).field_0x20;
        pFVar8 = &param_1->Sections;
        if (pFVar2 != (FStaticMeshSectionArray *)0x0) {
          pFVar8 = pFVar2;
        }
        *(uint *)pFVar13 = *(uint *)(&pFVar8->field_0x4 + (longlong)(int)uVar10 * 0x1c) / 3;
        uVar7 = 0;
        uVar6 = uVar7;
        if ((int)uVar10 < *(int *)&(param_1->Sections).field_0x28) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = (int)local_88._padding_;
        pFVar2 = *(FStaticMeshSectionArray **)&(param_1->Sections).field_0x20;
        pFVar8 = &param_1->Sections;
        if (pFVar2 != (FStaticMeshSectionArray *)0x0) {
          pFVar8 = pFVar2;
        }
        *(uint *)(pFVar13 + 4) = *(uint *)(&pFVar8->field_0x8 + (longlong)(int)uVar10 * 0x1c);
        if (((byte)local_88._padding_ & 1) == 0) {
          lVar15 = CONCAT71(local_88._padding_._1_7_,(byte)local_88._padding_);
        }
        else {
          lVar15 = (longlong)&local_88._padding_ + ((longlong)local_88._padding_._1_7_ >> 0x10);
        }
        if ((int)local_88._padding_ < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar10 = uVar7;
        if ((int)uVar9 < iVar5) {
          uVar10 = uVar12;
        }
        if (uVar10 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = (int)local_88._padding_;
        *(uint *)(pFVar13 + 8) = *(uint *)(lVar15 + uVar14);
        if (((byte)local_88._padding_ & 1) == 0) {
          lVar15 = CONCAT71(local_88._padding_._1_7_,(byte)local_88._padding_);
        }
        else {
          lVar15 = (longlong)&local_88._padding_ + ((longlong)local_88._padding_._1_7_ >> 0x10);
        }
        if ((int)local_88._padding_ < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if ((int)uVar9 < iVar5) {
          uVar7 = uVar12;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        puVar1 = (uint *)(lVar15 + uVar14);
        uVar11 = (ulonglong)(uVar9 + 1);
        uVar14 = uVar14 + 4;
        *(uint *)(pFVar13 + 0xc) = *puVar1;
        iVar5 = param_2->ArrayNum;
      } while ((int)(uVar9 + 1) < iVar5);
    }
    if (local_88.TempWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.TempWeights.AllocatorInstance.Data);
    }
    FWeightedRandomSampler::~FWeightedRandomSampler((FWeightedRandomSampler *)&local_88);
  }
  return;
}

