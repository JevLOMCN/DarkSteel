// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 25

// Allocate<FRDGPooledBuffer_*_const_&,FRDGBuffer_*> @ 145d7af90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FData::Allocate<FRDGPooledBuffer_*_const_&,FRDGBuffer_*>
          (FData *this,FRDGPooledBuffer **param_1,FRDGBuffer **param_2,FHashType param_3)

{
  int *piVar1;
  FHashType *pFVar2;
  code *pcVar3;
  FHashType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> *pTVar9;
  FHashType local_res20 [2];
  FRDGPooledBuffer *local_38;
  FRDGBuffer *pFStack_30;
  
  local_res20[0].Hash = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_38 = *param_1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data;
    uVar7 = (this->KeyVals).ArrayNum;
    pFStack_30 = *param_2;
    if ((pTVar9 <= (TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> *)&local_38) &&
       ((TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> *)&local_38 < pTVar9 + (this->KeyVals).ArrayMax)
       ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>_>
                        (0x810,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>
                                *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data + iVar8;
    *(FRDGPooledBuffer **)&pTVar9->Pair = local_38;
    *(FRDGBuffer **)&(pTVar9->Pair).field_0x8 = pFStack_30;
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= local_res20) && (local_res20 < pFVar2 + (this->Hashes).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>_>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar8 + 1;
    pFVar2[iVar8].Hash = local_res20[0].Hash;
    return uVar7;
  }
  uVar6 = TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
          ::Pop(&this->FreeList);
  uVar7 = 0;
  if ((int)uVar6 < (this->KeyVals).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  FVar4.Hash = local_res20[0].Hash;
  pTVar9 = (this->KeyVals).AllocatorInstance.Data + (int)uVar6;
  *(FRDGPooledBuffer **)&pTVar9->Pair = *param_1;
  *(FRDGBuffer **)&(pTVar9->Pair).field_0x8 = *param_2;
  uVar7 = 0;
  if ((int)uVar6 < (this->Hashes).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  (this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash = FVar4.Hash;
  return uVar6;
}

// Allocate<FRDGPooledTexture_*_const_&,FRDGTexture_*> @ 145d7b220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FData::Allocate<FRDGPooledTexture_*_const_&,FRDGTexture_*>
          (FData *this,FRDGPooledTexture **param_1,FRDGTexture **param_2,FHashType param_3)

{
  int *piVar1;
  FHashType *pFVar2;
  code *pcVar3;
  FHashType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> *pTVar9;
  FHashType local_res20 [2];
  FRDGPooledTexture *local_38;
  FRDGTexture *pFStack_30;
  
  local_res20[0].Hash = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_38 = *param_1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data;
    uVar7 = (this->KeyVals).ArrayNum;
    pFStack_30 = *param_2;
    if ((pTVar9 <= (TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> *)&local_38) &&
       ((TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> *)&local_38 <
        pTVar9 + (this->KeyVals).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>_>
                        (0x810,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>
                                *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data + iVar8;
    *(FRDGPooledTexture **)&pTVar9->Pair = local_38;
    *(FRDGTexture **)&(pTVar9->Pair).field_0x8 = pFStack_30;
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= local_res20) && (local_res20 < pFVar2 + (this->Hashes).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>_>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar8 + 1;
    pFVar2[iVar8].Hash = local_res20[0].Hash;
    return uVar7;
  }
  uVar6 = TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
          ::Pop(&this->FreeList);
  uVar7 = 0;
  if ((int)uVar6 < (this->KeyVals).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  FVar4.Hash = local_res20[0].Hash;
  pTVar9 = (this->KeyVals).AllocatorInstance.Data + (int)uVar6;
  *(FRDGPooledTexture **)&pTVar9->Pair = *param_1;
  *(FRDGTexture **)&(pTVar9->Pair).field_0x8 = *param_2;
  uVar7 = 0;
  if ((int)uVar6 < (this->Hashes).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  (this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash = FVar4.Hash;
  return uVar6;
}

// Allocate<FRHIBuffer_*_const_&,FRHIGPUMask_const_&> @ 145d7b4b0

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::Allocate<FRHIBuffer_*_const_&,FRHIGPUMask_const_&>
          (FData *this,FRHIBuffer **param_1,FRHIGPUMask *param_2,FHashType param_3)

{
  int *piVar1;
  FHashType *pFVar2;
  code *pcVar3;
  FHashType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TKeyValue<FRHIBuffer_*,FRHIGPUMask> *pTVar9;
  FHashType local_res20 [2];
  FRHIBuffer *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_res20[0].Hash = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_38 = *param_1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data;
    uVar7 = (this->KeyVals).ArrayNum;
    uStack_30 = param_2->GPUMask;
    if ((pTVar9 <= (TKeyValue<FRHIBuffer_*,FRHIGPUMask> *)&local_38) &&
       ((TKeyValue<FRHIBuffer_*,FRHIGPUMask> *)&local_38 < pTVar9 + (this->KeyVals).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>_>
                        (0x810,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>
                                *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data + iVar8;
    *(FRHIBuffer **)&pTVar9->Pair = local_38;
    *(ulonglong *)&(pTVar9->Pair).field_0x8 = CONCAT44(uStack_2c,uStack_30);
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= local_res20) && (local_res20 < pFVar2 + (this->Hashes).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar8 + 1;
    pFVar2[iVar8].Hash = local_res20[0].Hash;
    return uVar7;
  }
  uVar6 = TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Pop(&this->FreeList);
  uVar7 = 0;
  if ((int)uVar6 < (this->KeyVals).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  FVar4.Hash = local_res20[0].Hash;
  pTVar9 = (this->KeyVals).AllocatorInstance.Data + (int)uVar6;
  *(FRHIBuffer **)&pTVar9->Pair = *param_1;
  *(uint *)&(pTVar9->Pair).field_0x8 = param_2->GPUMask;
  uVar7 = 0;
  if ((int)uVar6 < (this->Hashes).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  (this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash = FVar4.Hash;
  return uVar6;
}

// Allocate<FRHITexture_*_const_&,FRHIGPUMask_const_&> @ 145d7b740

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::Allocate<FRHITexture_*_const_&,FRHIGPUMask_const_&>
          (FData *this,FRHITexture **param_1,FRHIGPUMask *param_2,FHashType param_3)

{
  int *piVar1;
  FHashType *pFVar2;
  code *pcVar3;
  FHashType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TKeyValue<FRHITexture_*,FRHIGPUMask> *pTVar9;
  FHashType local_res20 [2];
  FRHITexture *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_res20[0].Hash = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_38 = *param_1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data;
    uVar7 = (this->KeyVals).ArrayNum;
    uStack_30 = param_2->GPUMask;
    if ((pTVar9 <= (TKeyValue<FRHITexture_*,FRHIGPUMask> *)&local_38) &&
       ((TKeyValue<FRHITexture_*,FRHIGPUMask> *)&local_38 < pTVar9 + (this->KeyVals).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>_>
                        (0x810,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>
                                *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data + iVar8;
    *(FRHITexture **)&pTVar9->Pair = local_38;
    *(ulonglong *)&(pTVar9->Pair).field_0x8 = CONCAT44(uStack_2c,uStack_30);
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= local_res20) && (local_res20 < pFVar2 + (this->Hashes).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar8 + 1;
    pFVar2[iVar8].Hash = local_res20[0].Hash;
    return uVar7;
  }
  uVar6 = TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Pop(&this->FreeList);
  uVar7 = 0;
  if ((int)uVar6 < (this->KeyVals).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  FVar4.Hash = local_res20[0].Hash;
  pTVar9 = (this->KeyVals).AllocatorInstance.Data + (int)uVar6;
  *(FRHITexture **)&pTVar9->Pair = *param_1;
  *(uint *)&(pTVar9->Pair).field_0x8 = param_2->GPUMask;
  uVar7 = 0;
  if ((int)uVar6 < (this->Hashes).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  (this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash = FVar4.Hash;
  return uVar6;
}

// Allocate<FRHIBuffer_*,FRDGBuffer_*_const_&> @ 145d7b9d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::Allocate<FRHIBuffer_*,FRDGBuffer_*_const_&>
          (FData *this,FRHIBuffer **param_1,FRDGBuffer **param_2,FHashType param_3)

{
  int *piVar1;
  FHashType *pFVar2;
  code *pcVar3;
  FHashType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *pTVar9;
  FHashType local_res20 [2];
  FRHIBuffer *local_38;
  FRDGBuffer *pFStack_30;
  
  local_res20[0].Hash = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_38 = *param_1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data;
    uVar7 = (this->KeyVals).ArrayNum;
    pFStack_30 = *param_2;
    if ((pTVar9 <= (TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *)&local_38) &&
       ((TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *)&local_38 < pTVar9 + (this->KeyVals).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>_>
                        (0x810,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>
                                *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data + iVar8;
    *(FRHIBuffer **)&pTVar9->Pair = local_38;
    *(FRDGBuffer **)&(pTVar9->Pair).field_0x8 = pFStack_30;
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= local_res20) && (local_res20 < pFVar2 + (this->Hashes).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar8 + 1;
    pFVar2[iVar8].Hash = local_res20[0].Hash;
    return uVar7;
  }
  uVar6 = TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Pop(&this->FreeList);
  uVar7 = 0;
  if ((int)uVar6 < (this->KeyVals).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  FVar4.Hash = local_res20[0].Hash;
  pTVar9 = (this->KeyVals).AllocatorInstance.Data + (int)uVar6;
  *(FRHIBuffer **)&pTVar9->Pair = *param_1;
  *(FRDGBuffer **)&(pTVar9->Pair).field_0x8 = *param_2;
  uVar7 = 0;
  if ((int)uVar6 < (this->Hashes).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  (this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash = FVar4.Hash;
  return uVar6;
}

// Allocate<FRHITexture_*,FRDGTexture_*_const_&> @ 145d7bc60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::Allocate<FRHITexture_*,FRDGTexture_*_const_&>
          (FData *this,FRHITexture **param_1,FRDGTexture **param_2,FHashType param_3)

{
  int *piVar1;
  FHashType *pFVar2;
  code *pcVar3;
  FHashType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TKeyValue<FRHITexture_*,FRDGTexture_*> *pTVar9;
  FHashType local_res20 [2];
  FRHITexture *local_38;
  FRDGTexture *pFStack_30;
  
  local_res20[0].Hash = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_38 = *param_1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data;
    uVar7 = (this->KeyVals).ArrayNum;
    pFStack_30 = *param_2;
    if ((pTVar9 <= (TKeyValue<FRHITexture_*,FRDGTexture_*> *)&local_38) &&
       ((TKeyValue<FRHITexture_*,FRDGTexture_*> *)&local_38 < pTVar9 + (this->KeyVals).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>_>
                        (0x810,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>
                                *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    pTVar9 = (this->KeyVals).AllocatorInstance.Data + iVar8;
    *(FRHITexture **)&pTVar9->Pair = local_38;
    *(FRDGTexture **)&(pTVar9->Pair).field_0x8 = pFStack_30;
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= local_res20) && (local_res20 < pFVar2 + (this->Hashes).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    iVar8 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar8 + 1;
    pFVar2[iVar8].Hash = local_res20[0].Hash;
    return uVar7;
  }
  uVar6 = TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Pop(&this->FreeList);
  uVar7 = 0;
  if ((int)uVar6 < (this->KeyVals).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  FVar4.Hash = local_res20[0].Hash;
  pTVar9 = (this->KeyVals).AllocatorInstance.Data + (int)uVar6;
  *(FRHITexture **)&pTVar9->Pair = *param_1;
  *(FRDGTexture **)&(pTVar9->Pair).field_0x8 = *param_2;
  uVar7 = 0;
  if ((int)uVar6 < (this->Hashes).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  (this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash = FVar4.Hash;
  return uVar6;
}

// ~FData @ 145d8ff00

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  FSpan *pFVar3;
  FHashType *pFVar4;
  TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar9 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar9;
    if (uVar9 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>_>
                  (0x10,8,0,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>
                             *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
      ::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>_>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      pFVar3 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData.Data;
      if (pFVar3 != (FSpan *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar3);
      }
      pFVar4 = (this->Hashes).AllocatorInstance.Data;
      if (pFVar4 != (FHashType *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar4);
      }
      pTVar5 = (this->KeyVals).AllocatorInstance.Data;
      if (pTVar5 != (TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pTVar5);
      }
      return;
    }
    uVar8 = 0;
    if ((int)uVar9 < (this->KeyVals).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    uVar9 = uVar9 + 1;
    if (uVar9 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar8 = 0;
        if ((int)uVar9 < (this->Hashes).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      } while (((this->Hashes).AllocatorInstance.Data[(int)uVar9].Hash == 0x80000000) &&
              (uVar9 = uVar9 + 1, uVar9 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// ~FData @ 145d900b0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  FSpan *pFVar3;
  FHashType *pFVar4;
  TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar9 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar9;
    if (uVar9 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>_>
                  (0x10,8,0,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>
                             *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
      ::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>_>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      pFVar3 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData.Data;
      if (pFVar3 != (FSpan *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar3);
      }
      pFVar4 = (this->Hashes).AllocatorInstance.Data;
      if (pFVar4 != (FHashType *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar4);
      }
      pTVar5 = (this->KeyVals).AllocatorInstance.Data;
      if (pTVar5 != (TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pTVar5);
      }
      return;
    }
    uVar8 = 0;
    if ((int)uVar9 < (this->KeyVals).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    uVar9 = uVar9 + 1;
    if (uVar9 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar8 = 0;
        if ((int)uVar9 < (this->Hashes).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      } while (((this->Hashes).AllocatorInstance.Data[(int)uVar9].Hash == 0x80000000) &&
              (uVar9 = uVar9 + 1, uVar9 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// ~FData @ 145d90260

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>_>
                  (0x10,8,0,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>
                             *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while (((this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash == 0x80000000) &&
              (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ~FData @ 145d903f0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>_>
                  (0x10,8,0,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>
                             *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while (((this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash == 0x80000000) &&
              (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ~FData @ 145d90580

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>_>
                  (0x10,8,0,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>
                             *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while (((this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash == 0x80000000) &&
              (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ~FData @ 145d90710

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>_>
                  (0x10,8,0,(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>
                             *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while (((this->Hashes).AllocatorInstance.Data[(int)uVar6].Hash == 0x80000000) &&
              (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Get @ 145db82d0

TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->KeyVals).AllocatorInstance.Data + (int)param_1;
}

// Get @ 145db8350

TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FRDGPooledTexture_*,FRDGTexture_*> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->KeyVals).AllocatorInstance.Data + (int)param_1;
}

// Get @ 145db83d0

TKeyValue<FRHIBuffer_*,FRDGBuffer_*> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->KeyVals).AllocatorInstance.Data + (int)param_1;
}

// Get @ 145db8450

TKeyValue<FRHIBuffer_*,FRDGBuffer_*> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->KeyVals).AllocatorInstance.Data + (int)param_1;
}

// Get @ 145db84d0

TKeyValue<FRHIBuffer_*,FRHIGPUMask> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FRHIBuffer_*,FRHIGPUMask> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FRHIBuffer_*,FRHIGPUMask> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->KeyVals).AllocatorInstance.Data + (int)param_1;
}

// Get @ 145db8550

TKeyValue<FRHITexture_*,FRDGTexture_*> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FRHITexture_*,FRDGTexture_*> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FRHITexture_*,FRDGTexture_*> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->KeyVals).AllocatorInstance.Data + (int)param_1;
}

// Get @ 145db85d0

TKeyValue<FRHITexture_*,FRHIGPUMask> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FRHITexture_*,FRHIGPUMask> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FRHITexture_*,FRHIGPUMask> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->KeyVals).AllocatorInstance.Data + (int)param_1;
}

// Next @ 145dc2600

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while (((this->Hashes).AllocatorInstance.Data[(int)uVar4].Hash == 0x80000000) &&
          (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145dc26b0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRDGPooledTexture_*,FRDGTexture_*,DefaultKeyFuncs<FRDGPooledTexture_*,0>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while (((this->Hashes).AllocatorInstance.Data[(int)uVar4].Hash == 0x80000000) &&
          (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145dc2760

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while (((this->Hashes).AllocatorInstance.Data[(int)uVar4].Hash == 0x80000000) &&
          (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145dc2810

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHIBuffer_*,FRHIGPUMask,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while (((this->Hashes).AllocatorInstance.Data[(int)uVar4].Hash == 0x80000000) &&
          (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145dc28c0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while (((this->Hashes).AllocatorInstance.Data[(int)uVar4].Hash == 0x80000000) &&
          (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145dc2970

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRHIGPUMask,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while (((this->Hashes).AllocatorInstance.Data[(int)uVar4].Hash == 0x80000000) &&
          (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

