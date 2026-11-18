// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Find @ 1485254e0

FShaderJobData * __thiscall FShaderJobDataMap::Find(FShaderJobDataMap *this,FBlake3Hash *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FShaderJobData *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = *(uint *)param_1->Hash & this->HashTableMask;
  while( true ) {
    uVar3 = 0;
    if ((int)uVar7 < (this->HashTable).ArrayNum) {
      uVar3 = ~uVar7 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FShaderJobData *)(*pcVar1)();
      return pFVar6;
    }
    if (*(int *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) == -1) {
      return (FShaderJobData *)0x0;
    }
    if (((uint)this->NumItems <= uVar7) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(uint32)Index < (uint32)NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                           ,0x145,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FShaderJobData *)(*pcVar1)();
      return pFVar6;
    }
    uVar4 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1ffU)) >> 9;
    uVar3 = 0;
    if ((int)uVar4 < (this->DataBlocks).Array.ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FShaderJobData *)(*pcVar1)();
      return pFVar6;
    }
    lVar8 = (ulonglong)(uVar7 & 0x1ff) * 0x58;
    iVar5 = memcmp((void *)(*(longlong *)
                             ((this->DataBlocks).Array.AllocatorInstance.Data +
                             (longlong)(int)uVar4 * 8) + lVar8),param_1,0x20);
    if (iVar5 == 0) break;
    uVar7 = uVar7 + 1 & this->HashTableMask;
  }
  if (((uint)this->NumItems <= uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)Index < (uint32)NumItems",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x145,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderJobData *)(*pcVar1)();
    return pFVar6;
  }
  uVar7 = 0;
  if ((int)uVar4 < (this->DataBlocks).Array.ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderJobData *)(*pcVar1)();
    return pFVar6;
  }
  return (FShaderJobData *)
         (*(longlong *)((this->DataBlocks).Array.AllocatorInstance.Data + (longlong)(int)uVar4 * 8)
         + lVar8);
}

// FindOrAdd @ 148525c50

FShaderJobCacheRef * __thiscall
FShaderJobDataMap::FindOrAdd
          (FShaderJobDataMap *this,FShaderJobCacheRef *__return_storage_ptr__,FBlake3Hash *param_1)

{
  FShaderJobData *pFVar1;
  FShaderJobDataBlock *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FBlake3Hash *pFVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FShaderJobCacheRef *pFVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  
  uVar19 = *(uint *)param_1->Hash & this->HashTableMask;
  while( true ) {
    uVar18 = ~uVar19 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar19 < (this->HashTable).ArrayNum) {
      uVar12 = uVar18;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar16 = (FShaderJobCacheRef *)(*pcVar3)();
      return pFVar16;
    }
    lVar17 = (longlong)(int)uVar19;
    if (*(int *)((this->HashTable).AllocatorInstance.Data + lVar17 * 4) == -1) break;
    uVar12 = 0;
    if ((int)uVar19 < (this->HashTable).ArrayNum) {
      uVar12 = uVar18;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar16 = (FShaderJobCacheRef *)(*pcVar3)();
      return pFVar16;
    }
    uVar12 = *(uint *)((this->HashTable).AllocatorInstance.Data + lVar17 * 4);
    if (((uint)this->NumItems <= uVar12) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)Index < (uint32)NumItems",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                            ,0x145,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar16 = (FShaderJobCacheRef *)(*pcVar3)();
      return pFVar16;
    }
    uVar13 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1ffU)) >> 9;
    uVar18 = 0;
    if ((int)uVar13 < (this->DataBlocks).Array.ArrayNum) {
      uVar18 = ~uVar13 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar16 = (FShaderJobCacheRef *)(*pcVar3)();
      return pFVar16;
    }
    iVar14 = memcmp((void *)((ulonglong)(uVar12 & 0x1ff) * 0x58 +
                            *(longlong *)
                             ((this->DataBlocks).Array.AllocatorInstance.Data +
                             (longlong)(int)uVar13 * 8)),param_1,0x20);
    if (iVar14 == 0) {
      uVar19 = 0;
      if ((int)uVar13 < (this->DataBlocks).Array.ArrayNum) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FShaderJobCacheRef *)(*pcVar3)();
        return pFVar16;
      }
      __return_storage_ptr__->Block =
           *(FShaderJobDataBlock **)
            ((this->DataBlocks).Array.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
      __return_storage_ptr__->IndexInBlock = uVar12 & 0x1ff;
      __return_storage_ptr__->DuplicateIndex = -1;
      return __return_storage_ptr__;
    }
    uVar19 = uVar19 + 1 & this->HashTableMask;
  }
  Reserve(this,this->NumItems + 1);
  uVar12 = this->NumItems;
  this->NumItems = uVar12 + 1;
  uVar15 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1ffU)) >> 9;
  uVar13 = 0;
  if ((int)uVar15 < (this->DataBlocks).Array.ArrayNum) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    pFVar16 = (FShaderJobCacheRef *)(*pcVar3)();
    return pFVar16;
  }
  pFVar2 = *(FShaderJobDataBlock **)
            ((this->DataBlocks).Array.AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
  uVar13 = uVar12 & 0x1ff;
  uVar4 = *(undefined4 *)param_1->Hash;
  uVar5 = *(undefined4 *)(param_1->Hash + 4);
  uVar6 = *(undefined4 *)(param_1->Hash + 8);
  uVar7 = *(undefined4 *)(param_1->Hash + 0xc);
  uVar8 = *(undefined8 *)(param_1->Hash + 0x10);
  uVar9 = *(undefined8 *)(param_1->Hash + 0x18);
  if ((pFVar2 == (FShaderJobDataBlock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CacheRef.Block",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x36e,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pFVar16 = (FShaderJobCacheRef *)(*pcVar3)();
    return pFVar16;
  }
  pFVar1 = pFVar2->Data + uVar13;
  *(undefined4 *)(pFVar1->InputHash).Hash = uVar4;
  *(undefined4 *)((pFVar1->InputHash).Hash + 4) = uVar5;
  *(undefined4 *)((pFVar1->InputHash).Hash + 8) = uVar6;
  *(undefined4 *)((pFVar1->InputHash).Hash + 0xc) = uVar7;
  pFVar10 = &pFVar2->Data[uVar13].InputHash;
  *(undefined8 *)(pFVar10->Hash + 0x10) = uVar8;
  *(undefined8 *)(pFVar10->Hash + 0x18) = uVar9;
  uVar15 = 0;
  if ((int)uVar19 < (this->HashTable).ArrayNum) {
    uVar15 = uVar18;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    pFVar16 = (FShaderJobCacheRef *)(*pcVar3)();
    return pFVar16;
  }
  *(uint *)((this->HashTable).AllocatorInstance.Data + lVar17 * 4) = uVar12;
  __return_storage_ptr__->Block = pFVar2;
  __return_storage_ptr__->IndexInBlock = uVar13;
  __return_storage_ptr__->DuplicateIndex = -1;
  return __return_storage_ptr__;
}

// ReHash @ 14853c4a0

void __thiscall FShaderJobDataMap::ReHash(FShaderJobDataMap *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong local_res8;
  uint local_res10;
  
  piVar1 = &(this->HashTable).ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar6,&(this->HashTable).AllocatorInstance,piVar1,
               &(this->HashTable).ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar5 = iVar6 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->HashTable).AllocatorInstance.Data + (longlong)param_1 * 4;
        iVar6 = (*piVar1 - uVar5) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar5;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->HashTable).AllocatorInstance,*piVar1,&(this->HashTable).ArrayMax);
      }
    }
  }
  memset((this->HashTable).AllocatorInstance.Data,0xff,
         (ulonglong)(uint)((this->HashTable).ArrayNum << 2));
  iVar6 = (this->DataBlocks).Array.ArrayNum;
  this->HashTableMask = param_1 - 1;
  local_res10 = 0;
  if (0 < iVar6) {
    do {
      uVar5 = 0;
      if ((int)local_res10 < iVar6) {
        uVar5 = ~local_res10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res8 = 0;
      iVar6 = local_res10 << 9;
      puVar7 = *(uint **)((this->DataBlocks).Array.AllocatorInstance.Data +
                         (longlong)(int)local_res10 * 8);
      do {
        if (this->NumItems <= iVar6) {
          local_res10 = (this->DataBlocks).Array.ArrayNum;
          break;
        }
        uVar5 = *puVar7;
        while( true ) {
          uVar5 = uVar5 & this->HashTableMask;
          uVar4 = 0;
          if ((int)uVar5 < *piVar1) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) == -1)
          break;
          uVar5 = uVar5 + 1;
        }
        uVar4 = 0;
        if ((int)uVar5 < *piVar1) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar7 = puVar7 + 0x16;
        local_res8 = local_res8 + 1;
        *(int *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = iVar6;
        iVar6 = iVar6 + 1;
      } while (local_res8 < 0x200);
      iVar6 = (this->DataBlocks).Array.ArrayNum;
      local_res10 = local_res10 + 1;
    } while ((int)local_res10 < iVar6);
  }
  return;
}

// Reserve @ 1485417f0

void __thiscall FShaderJobDataMap::Reserve(FShaderJobDataMap *this,int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *local_18 [2];
  
  if ((this->DataBlocks).Array.ArrayNum * 0x200 < param_1) {
    do {
      pvVar7 = ::operator_new(0xb000);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x200;
        puVar8 = (undefined8 *)((longlong)pvVar7 + 0x48);
        do {
          puVar8[-9] = 0;
          puVar8[-8] = 0;
          puVar8[-7] = 0;
          puVar8[-6] = 0;
          puVar8[-5] = 0;
          puVar8[-4] = 0;
          puVar8[-3] = 0;
          puVar8[-2] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
          puVar8 = puVar8 + 0xb;
        } while (lVar9 != 0);
      }
      pFVar3 = (this->DataBlocks).Array.AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar3 + (longlong)(this->DataBlocks).Array.ArrayMax * 8)) &&
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
      iVar6 = (this->DataBlocks).Array.ArrayNum;
      if (iVar6 == (this->DataBlocks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->DataBlocks).Array.ArrayMax);
      }
      (this->DataBlocks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->DataBlocks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_18[0];
      uVar2 = (this->DataBlocks).Array.ArrayNum;
    } while ((int)(uVar2 << 9) < param_1);
    iVar6 = 1;
    if ((uVar2 & 0x3fffff) != 0) {
      iVar6 = uVar2 << 10;
    }
    uVar1 = (ulonglong)(iVar6 - 1) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar9 & 0x1f);
    if (iVar6 != (this->HashTable).ArrayNum) {
      ReHash(this,iVar6);
    }
  }
  return;
}

