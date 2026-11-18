// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// Emplace<unsigned___int64_const_&,FAudioVirtualLoop::FWaveInstanceData_const_&> @ 147679370

FWaveInstanceData * __thiscall
TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
::Emplace<unsigned___int64_const_&,FAudioVirtualLoop::FWaveInstanceData_const_&>
          (TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           *this,ulong64 *param_1,FWaveInstanceData *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FWaveInstanceData *pFVar7;
  int iVar8;
  TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(ulonglong *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x28) < *param_1)
      {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FWaveInstanceData *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar8) goto LAB_1476793fd;
  }
  else {
LAB_1476793fd:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FWaveInstanceData *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)
               (pFVar3 + (longlong)iVar8 * 0x28);
      if (*(ulonglong *)(pFVar3 + (longlong)iVar8 * 0x28) <= *param_1) {
        DestructItems<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,int>(pTVar9,1);
        goto LAB_147679487;
      }
    }
  }
  TArray<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x28);
LAB_147679487:
  *(ulong64 *)pTVar9 = *param_1;
  *(float *)&pTVar9->field_0x8 = param_2->EffectivePitch;
  Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)&pTVar9->field_0x10,&param_2->PitchModulationDestination);
  *(USoundClass **)&pTVar9->field_0x20 = param_2->SoundClass;
  return (FWaveInstanceData *)&pTVar9->field_0x8;
}

// Emplace<unsigned___int64_const_&,float> @ 1476794d0

float * __thiscall
TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::
Emplace<unsigned___int64_const_&,float>
          (TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           *this,ulong64 *param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  float *pfVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if (*(ulonglong *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x10) < *param_1)
      {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pfVar6 = (float *)(*pcVar3)();
      return pfVar6;
    }
    if (-1 < iVar8) goto LAB_14767956a;
  }
  else {
LAB_14767956a:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pfVar6 = (float *)(*pcVar3)();
        return pfVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      if (*(ulonglong *)pFVar7 <= *param_1) goto LAB_1476795e4;
    }
  }
  TArray<TTuple<unsigned___int64,float>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar8,1);
  pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
LAB_1476795e4:
  *(ulong64 *)pFVar7 = *param_1;
  *(float *)(pFVar7 + 8) = *param_2;
  return (float *)(pFVar7 + 8);
}

// FindChecked @ 1476a87e0

float * __thiscall
TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::
FindChecked(TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
            *this,ulong64 param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (this->Pairs).ArrayNum;
  pFVar5 = (this->Pairs).AllocatorInstance.Data;
  iVar6 = 0;
  uVar8 = uVar1;
  iVar7 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar9 = uVar8 >> 1;
      iVar6 = iVar7;
      if (*(ulonglong *)(pFVar5 + (longlong)(int)(uVar9 + iVar7) * 0x10) < param_1) {
        iVar6 = uVar9 + iVar7 + (uVar8 & 1);
      }
      uVar8 = uVar9;
      iVar7 = iVar6;
    } while (uVar9 != 0);
  }
  if (((iVar6 < (int)uVar1) && (*(ulonglong *)(pFVar5 + (longlong)iVar6 * 0x10) <= param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar2)();
      return pfVar4;
    }
    pFVar5 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      return (float *)pFVar5;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x141,L"");
  if (!bVar3) {
    return (float *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar2)();
  return pfVar4;
}

// FindChecked @ 1476a88f0

FWaveInstanceData * __thiscall
TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
::FindChecked(TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
              *this,ulong64 param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FWaveInstanceData *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (this->Pairs).ArrayNum;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  iVar6 = 0;
  uVar8 = uVar1;
  iVar7 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar9 = uVar8 >> 1;
      iVar6 = iVar7;
      if (*(ulonglong *)(pFVar2 + (longlong)(int)(uVar9 + iVar7) * 0x28) < param_1) {
        iVar6 = uVar9 + iVar7 + (uVar8 & 1);
      }
      uVar8 = uVar9;
      iVar7 = iVar6;
    } while (uVar9 != 0);
  }
  if (((iVar6 < (int)uVar1) && (*(ulonglong *)(pFVar2 + (longlong)iVar6 * 0x28) <= param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FWaveInstanceData *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = (FWaveInstanceData *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x28 + 8);
    if (pFVar5 != (FWaveInstanceData *)0x0) {
      return pFVar5;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x141,L"");
  if (!bVar4) {
    return (FWaveInstanceData *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FWaveInstanceData *)(*pcVar3)();
  return pFVar5;
}

// AllocateMemoryForEmplace<FName_const_&> @ 147895c30

TTuple<FName,UMeshComponent::FMaterialParameterCache> * __thiscall
TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,UMeshComponent::FMaterialParameterCache> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x30) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x30 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,UMeshComponent::FMaterialParameterCache> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_147895d4b;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,UMeshComponent::FMaterialParameterCache> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,UMeshComponent::FMaterialParameterCache> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x30);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,UMeshComponent::FMaterialParameterCache>,int>(pTVar7,1);
      return pTVar7;
    }
  }
LAB_147895d4b:
  TArray<TTuple<FName,UMeshComponent::FMaterialParameterCache>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar9,1);
  return (TTuple<FName,UMeshComponent::FMaterialParameterCache> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x30);
}

// Find @ 1478cdc00

FMaterialParameterCache * __thiscall
TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>::
Find(TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
     *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  FMaterialParameterCache *pFVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,UMeshComponent::FMaterialParameterCache>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (FMaterialParameterCache *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FMaterialParameterCache *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FMaterialParameterCache *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30 + 8);
}

// AllocateMemoryForEmplace<FName_const_&> @ 14791d6b0

TTuple<FName,FName> * __thiscall
TSortedMap<FName,FName,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,FName,TSizedDefaultAllocator<32>,FNameFastLess> *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,FName> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,FName> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_14791d7b1;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,FName> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,FName> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      return pTVar7;
    }
  }
LAB_14791d7b1:
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar9,1);
  return (TTuple<FName,FName> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
}

// Find @ 147943140

FName * __thiscall
TSortedMap<FName,FName,TSizedDefaultAllocator<32>,FNameFastLess>::Find
          (TSortedMap<FName,FName,TSizedDefaultAllocator<32>,FNameFastLess> *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FName,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (FName *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FName *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FName *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10 + 8);
}

// AllocateMemoryForEmplace<int_const_&> @ 148235100

TTuple<int,UClusterUnionComponent::FMappedBoneData> * __thiscall
TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
::AllocateMemoryForEmplace<int_const_&>
          (TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TTuple<int,UClusterUnionComponent::FMappedBoneData> *pTVar7;
  ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> FVar8;
  int iVar9;
  uint uVar10;
  
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  uVar2 = (this->Pairs).ArrayNum;
  FVar8 = (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)this;
  if (FVar3 != (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
    FVar8 = FVar3;
  }
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)((longlong)FVar8 + (longlong)iVar1 * 0x90) < *param_1) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<int,UClusterUnionComponent::FMappedBoneData> *)(*pcVar4)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_148235216;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<int,UClusterUnionComponent::FMappedBoneData> *)(*pcVar4)();
      return pTVar7;
    }
    FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)this;
    if (FVar3 != (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
      FVar8 = FVar3;
    }
    if (*(int *)((longlong)FVar8 + (longlong)iVar9 * 0x90) <= *param_1) {
      if (FVar3 != (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
        this = (TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
                *)FVar3;
      }
      return (TTuple<int,UClusterUnionComponent::FMappedBoneData> *)
             ((longlong)this + (longlong)iVar9 * 0x90);
    }
  }
LAB_148235216:
  TArray<TTuple<int,UClusterUnionComponent::FMappedBoneData>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
    this = (TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
            *)FVar3;
  }
  return (TTuple<int,UClusterUnionComponent::FMappedBoneData> *)
         ((longlong)iVar9 * 0x90 + (longlong)this);
}

// Find @ 14827f8e0

FMappedBoneData * __thiscall
TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
::Find(TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
       *this,int param_1)

{
  ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> FVar1;
  code *pcVar2;
  FKeyForward FVar3;
  bool bVar4;
  uint uVar5;
  FMappedBoneData *pFVar6;
  uint uVar7;
  int local_res10 [6];
  
  local_res10[0]._0_1_ = SUB41(param_1,0);
  FVar3 = local_res10[0]._0_1_;
  local_res10[0] = param_1;
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<int,UClusterUnionComponent::FMappedBoneData>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,int,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
                    (&this->Pairs,local_res10,FVar3,(TLess<int_const_>)FVar3);
  if (uVar5 == 0xffffffff) {
    return (FMappedBoneData *)0x0;
  }
  uVar7 = 0;
  if ((int)uVar5 < (this->Pairs).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMappedBoneData *)(*pcVar2)();
      return pFVar6;
    }
  }
  FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
    this = (TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
            *)FVar1;
  }
  return (FMappedBoneData *)((uchar *)((longlong)this + 0x10) + (longlong)(int)uVar5 * 0x90);
}

// Emplace<int_const_&,FDynamicForceFeedbackDetails_*> @ 14833d310

FDynamicForceFeedbackDetails ** __thiscall
TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
Emplace<int_const_&,FDynamicForceFeedbackDetails_*>
          (TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1,FDynamicForceFeedbackDetails **param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FDynamicForceFeedbackDetails **ppFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x10) < *param_1) {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      ppFVar6 = (FDynamicForceFeedbackDetails **)(*pcVar3)();
      return ppFVar6;
    }
    if (-1 < iVar8) goto LAB_14833d3a9;
  }
  else {
LAB_14833d3a9:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        ppFVar6 = (FDynamicForceFeedbackDetails **)(*pcVar3)();
        return ppFVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      if (*(int *)pFVar7 <= *param_1) goto LAB_14833d422;
    }
  }
  TArray<TTuple<int,FDynamicForceFeedbackDetails_*>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
LAB_14833d422:
  *(int *)pFVar7 = *param_1;
  *(FDynamicForceFeedbackDetails **)(pFVar7 + 8) = *param_2;
  return (FDynamicForceFeedbackDetails **)(pFVar7 + 8);
}

// Emplace<unsigned___int64_const_&> @ 14833d680

FDynamicForceFeedbackAction * __thiscall
TSortedMap<unsigned___int64,APlayerController::FDynamicForceFeedbackAction,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
::Emplace<unsigned___int64_const_&>
          (TSortedMap<unsigned___int64,APlayerController::FDynamicForceFeedbackAction,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           *this,ulong64 *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FDynamicForceFeedbackAction *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if (*(ulonglong *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x20) < *param_1)
      {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDynamicForceFeedbackAction *)(*pcVar3)();
      return pFVar6;
    }
    if (-1 < iVar8) goto LAB_14833d70b;
  }
  else {
LAB_14833d70b:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FDynamicForceFeedbackAction *)(*pcVar3)();
        return pFVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
      if (*(ulonglong *)pFVar7 <= *param_1) goto LAB_14833d785;
    }
  }
  TArray<TTuple<unsigned___int64,APlayerController::FDynamicForceFeedbackAction>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
LAB_14833d785:
  *(ulong64 *)pFVar7 = *param_1;
  pFVar6 = (FDynamicForceFeedbackAction *)(pFVar7 + 8);
  pFVar6->TotalTime = 0.0;
  pFVar6->TimeElapsed = 0.0;
  *(ulonglong *)(pFVar7 + 0x10) = 0xf;
  *(ulonglong *)(pFVar7 + 0x18) = 0;
  return pFVar6;
}

// Remove @ 14839e340

int __thiscall
TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>::Remove
          (TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (this->Pairs).ArrayNum;
  uVar7 = 0;
  pFVar6 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar8) {
    do {
      iVar5 = (uVar8 >> 1) + uVar7;
      if (*(int *)(pFVar6 + (longlong)iVar5 * 0x10) < param_1) {
        uVar7 = iVar5 + (uVar8 & 1);
      }
      uVar3 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar7 < (this->Pairs).ArrayNum) {
    if ((*(int *)(pFVar6 + (longlong)(int)uVar7 * 0x10) <= param_1) && (uVar7 != 0xffffffff)) {
      if ((int)uVar7 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      pFVar6 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
      iVar5 = (this->Pairs).ArrayNum + ~uVar7;
      if (iVar5 != 0) {
        memmove(pFVar6,pFVar6 + 0x10,(longlong)iVar5 << 4);
      }
      piVar1 = &(this->Pairs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
      return 1;
    }
  }
  return 0;
}

// Find @ 1486b6400

float * __thiscall
TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::Find
          (TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           *this,ulong64 param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar6 = 0;
  pFVar8 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar6;
      if (*(ulonglong *)(pFVar8 + (longlong)iVar1 * 0x10) < param_1) {
        iVar6 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) && (*(ulonglong *)(pFVar8 + (longlong)iVar6 * 0x10) <= param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pfVar7 = (float *)(*pcVar3)();
      return pfVar7;
    }
    pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8;
  }
  else {
    pFVar8 = (FScriptContainerElement *)0x0;
  }
  return (float *)pFVar8;
}

// AllocateMemoryForEmplace<FName_const_&> @ 1488a5700

TTuple<FName,int> * __thiscall
TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess> *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,int> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0xc) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0xc + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,int> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_1488a5806;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,int> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,int> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0xc);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      return pTVar7;
    }
  }
LAB_1488a5806:
  TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar9,1);
  return (TTuple<FName,int> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0xc);
}

// AllocateMemoryForEmplace<FName_const_&> @ 1488a5840

TTuple<FName,UE::Transaction::FSerializedTaggedData> * __thiscall
TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,UE::Transaction::FSerializedTaggedData> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,UE::Transaction::FSerializedTaggedData> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_1488a5946;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,UE::Transaction::FSerializedTaggedData> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,UE::Transaction::FSerializedTaggedData> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      return pTVar7;
    }
  }
LAB_1488a5946:
  TArray<TTuple<FName,UE::Transaction::FSerializedTaggedData>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar9,1);
  return (TTuple<FName,UE::Transaction::FSerializedTaggedData> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
}

// FindOrAddImpl<FName_const_&> @ 1488a9ad0

int * __thiscall
TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess>::FindOrAddImpl<FName_const_&>
          (TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess> *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  TTuple<FName,int> *pTVar6;
  uint uVar7;
  FName local_res8;
  
  local_res8 = *param_1;
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,local_res8.ComparisonIndex.Value._0_1_,
                     (FNameFastLess)local_res8.ComparisonIndex.Value._0_1_);
  if (uVar3 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar3 < (this->Pairs).ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    pFVar5 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xc + 8;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      return (int *)pFVar5;
    }
  }
  pTVar6 = AllocateMemoryForEmplace<FName_const_&>(this,param_1);
  uVar3 = param_1->Number;
  *(uint *)&pTVar6->field_0x0 = (param_1->ComparisonIndex).Value;
  *(uint *)&pTVar6->field_0x4 = uVar3;
  *(undefined4 *)&pTVar6->field_0x8 = 0;
  return (int *)&pTVar6->field_0x8;
}

// Find @ 1488bfc80

FSerializedTaggedData * __thiscall
TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>::
Find(TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>
     *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  FSerializedTaggedData *pFVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,UE::Transaction::FSerializedTaggedData>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (FSerializedTaggedData *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FSerializedTaggedData *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FSerializedTaggedData *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18 + 8);
}

// AllocateMemoryForEmplace<TObjectPtr<ULevelStreaming>_const_&> @ 1489a1570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<TObjectPtr<ULevelStreaming>,FStreamingLevelsToConsider::EProcessReason> * __thiscall
TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
::AllocateMemoryForEmplace<TObjectPtr<ULevelStreaming>_const_&>
          (void *this,TObjectPtr<ULevelStreaming> *param_1)

{
  ULevelStreaming *pUVar1;
  ULevelStreaming *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<TObjectPtr<ULevelStreaming>,FStreamingLevelsToConsider::EProcessReason> *pTVar6;
  longlong lVar7;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason>_const_,int,TObjectPtr<ULevelStreaming>,TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>::FKeyForward,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
                    (*(TTuple<TObjectPtr<ULevelStreaming>,FStreamingLevelsToConsider::EProcessReason>
                       **)this,*(int *)((longlong)this + 8),param_1,local_res8,
                     (TLess<TObjectPtr<ULevelStreaming_const_>_const_>)local_res8);
  if ((iVar5 < 0) || (*(int *)((longlong)this + 8) < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTuple<TObjectPtr<ULevelStreaming>,FStreamingLevelsToConsider::EProcessReason> *)
               (*pcVar3)();
      return pTVar6;
    }
    if (iVar5 < 0) goto LAB_1489a1685;
  }
  if (iVar5 < *(int *)((longlong)this + 8)) {
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TTuple<TObjectPtr<ULevelStreaming>,FStreamingLevelsToConsider::EProcessReason> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
    lVar7 = (longlong)iVar5 * 0x10;
    pUVar1 = *(ULevelStreaming **)(lVar7 + *(longlong *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (ULevelStreaming *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar2 = (param_1->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (ULevelStreaming *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if (pUVar1 <= pUVar2) {
      return (TTuple<TObjectPtr<ULevelStreaming>,FStreamingLevelsToConsider::EProcessReason> *)
             (*(longlong *)this + lVar7);
    }
  }
LAB_1489a1685:
  TArray<TTuple<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(this,iVar5,1);
  return (TTuple<TObjectPtr<ULevelStreaming>,FStreamingLevelsToConsider::EProcessReason> *)
         ((longlong)iVar5 * 0x10 + *(longlong *)this);
}

// Contains @ 1489d2c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
::Contains(void *this,TObjectPtr<ULevelStreaming_const_> param_1)

{
  UObject *pUVar1;
  EProcessReason *pEVar2;
  UObject *local_res10 [3];
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res10[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pEVar2 = Find(this,(TObjectPtr<ULevelStreaming_const_>)local_res10);
  return pEVar2 != (EProcessReason *)0x0;
}

// Find @ 1489e1c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EProcessReason * __thiscall
TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
::Find(void *this,TObjectPtr<ULevelStreaming_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EProcessReason *pEVar4;
  uint uVar5;
  TObjectPtr<ULevelStreaming_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  local_res8.DebugPtr = *param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (ULevelStreaming *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason>,TSizedDefaultAllocator<32>_>,TObjectPtr<ULevelStreaming_const_>,TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>::FKeyForward,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
                    (this,(TObjectPtr<ULevelStreaming_const_> *)&local_res8.ObjectPtr,
                     (FKeyForward)local_res8._0_1_,
                     (TLess<TObjectPtr<ULevelStreaming_const_>_const_>)local_res8._0_1_);
  if (uVar3 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar3 < *(int *)((longlong)this + 8)) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pEVar4 = (EProcessReason *)(*pcVar1)();
        return pEVar4;
      }
    }
    return (EProcessReason *)(*(longlong *)this + 8 + (longlong)(int)uVar3 * 0x10);
  }
  return (EProcessReason *)0x0;
}

// Remove @ 148a08360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
::Remove(void *this,TObjectPtr<ULevelStreaming_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  TObjectPtr<ULevelStreaming_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  local_res8.DebugPtr = *param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (ULevelStreaming *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason>,TSizedDefaultAllocator<32>_>,TObjectPtr<ULevelStreaming_const_>,TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>::FKeyForward,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
                    (this,(TObjectPtr<ULevelStreaming_const_> *)&local_res8.ObjectPtr,
                     (FKeyForward)local_res8._0_1_,
                     (TLess<TObjectPtr<ULevelStreaming_const_>_const_>)local_res8._0_1_);
  uVar4 = 0;
  if (uVar3 != 0xffffffff) {
    if ((int)uVar3 < *(int *)((longlong)this + 8)) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
    }
    _Dst = (void *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
    iVar5 = *(int *)((longlong)this + 8) + ~uVar3;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar5 << 4);
    }
    *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,this,*(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    uVar4 = 1;
  }
  return uVar4;
}

