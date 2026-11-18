// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 11

// ~FSerializedShaderArchive @ 145df17e0

void __thiscall FSerializedShaderArchive::~FSerializedShaderArchive(FSerializedShaderArchive *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->ShaderHashTable).IndexSize != 0) {
    (this->ShaderHashTable).HashMask = 0;
    (this->ShaderHashTable).IndexSize = 0;
    operator_delete__((this->ShaderHashTable).Hash);
    (this->ShaderHashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->ShaderHashTable).NextIndex);
    (this->ShaderHashTable).NextIndex = (uint *)0x0;
  }
  if ((this->ShaderMapHashTable).IndexSize != 0) {
    (this->ShaderMapHashTable).HashMask = 0;
    (this->ShaderMapHashTable).IndexSize = 0;
    operator_delete__((this->ShaderMapHashTable).Hash);
    (this->ShaderMapHashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->ShaderMapHashTable).NextIndex);
    (this->ShaderMapHashTable).NextIndex = (uint *)0x0;
  }
  pFVar1 = (this->ShaderIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreloadEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderMapEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderMapHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// DecompressShader @ 145e03ac0

void __thiscall
FSerializedShaderArchive::DecompressShader
          (FSerializedShaderArchive *this,int param_1,
          TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *_Dst;
  uint uVar9;
  uint uVar10;
  uchar *_Src;
  longlong lVar11;
  
  lVar11 = (longlong)param_1;
  _Src = (uchar *)0x0;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->ShaderEntries).ArrayNum) {
    uVar6 = uVar9;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->ShaderEntries).AllocatorInstance.Data;
  uVar6 = *(uint *)(pFVar2 + lVar11 * 0x18 + 0xc);
  piVar1 = &param_3->ArrayNum;
  iVar8 = *piVar1;
  if (iVar8 < (int)uVar6) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar6 - iVar8,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    memset((param_3->AllocatorInstance).Data + iVar7,0,(longlong)(int)(uVar6 - iVar8));
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar8) {
      uVar10 = iVar8 - uVar6;
      if ((int)(uVar10 | uVar6) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar10 != 0) {
        _Dst = (param_3->AllocatorInstance).Data + (int)uVar6;
        iVar8 = (*piVar1 - uVar6) - uVar10;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + (int)uVar10,(longlong)iVar8);
        }
        *piVar1 = *piVar1 - uVar10;
      }
    }
  }
  uVar6 = *(uint *)(pFVar2 + lVar11 * 0x18 + 0xc);
  uVar10 = *(uint *)(pFVar2 + lVar11 * 0x18 + 8);
  if (uVar10 == uVar6) {
    uVar10 = 0;
    if (param_1 < param_2->ArrayNum) {
      uVar10 = uVar9;
    }
    if (uVar10 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar3 = *(longlong **)((param_2->AllocatorInstance).Data + lVar11 * 8);
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      _Src = (uchar *)plVar3[1];
    }
    memcpy((param_3->AllocatorInstance).Data,_Src,(ulonglong)uVar6);
  }
  else {
    uVar6 = 0;
    if (param_1 < param_2->ArrayNum) {
      uVar6 = uVar9;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar3 = *(longlong **)((param_2->AllocatorInstance).Data + lVar11 * 8);
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      _Src = (uchar *)plVar3[1];
    }
    ShaderCodeArchive::DecompressShaderWithOodle
              ((uchar *)(param_3->AllocatorInstance).Data,
               (ulonglong)*(uint *)(pFVar2 + lVar11 * 0x18 + 0xc),_Src,(ulonglong)uVar10);
  }
  return;
}

// Finalize @ 145e08b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSerializedShaderArchive::Finalize(FSerializedShaderArchive *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  long64 lVar4;
  long64 lVar5;
  FIdentityFunctor FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_a0;
  int local_98;
  int iStack_94;
  longlong local_90;
  longlong lStack_88;
  FFileCachePreloadEntry local_80;
  FFileCachePreloadEntry local_70 [3];
  
  pFVar12 = (this->ShaderEntries).AllocatorInstance.Data;
  iVar9 = (this->ShaderEntries).ArrayNum;
  lVar16 = 0;
  pFVar17 = pFVar12 + (longlong)iVar9 * 0x18;
  while( true ) {
    if ((this->ShaderEntries).ArrayNum != iVar9) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FShaderCodeEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar17) break;
    *(longlong *)pFVar12 = lVar16;
    lVar16 = lVar16 + (ulonglong)*(uint *)(pFVar12 + 8);
    pFVar12 = pFVar12 + 0x18;
  }
  piVar1 = &(this->PreloadEntries).ArrayMax;
  (this->PreloadEntries).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->PreloadEntries).AllocatorInstance,0,piVar1);
  }
  FVar6 = local_res8[0];
  lVar5 = _UNK_151158348;
  lVar4 = ___xmm_00000000000000007fffffffffffffff;
  local_res20 = (this->ShaderMapEntries).ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  pFVar17 = (this->ShaderMapEntries).AllocatorInstance.Data;
  pFVar12 = pFVar17 + uVar10 * 0x10;
  do {
    uVar13 = 0;
    if ((this->ShaderMapEntries).ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FShaderMapEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar17 == pFVar12) {
      return;
    }
    if ((*(int *)(pFVar17 + 4) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderMapEntry.NumShaders > 0u",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                           ,0x227,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = *(int *)(pFVar17 + 4) + 1;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    iStack_94 = 0;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (uVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar8,&local_a0,0,&iStack_94);
    }
    if (*(int *)(pFVar17 + 4) != 0) {
      do {
        uVar15 = *(int *)pFVar17 + uVar13;
        uVar8 = 0;
        if ((int)uVar15 < (this->ShaderIndices).ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = *(uint *)((this->ShaderIndices).AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
        uVar15 = 0;
        if ((int)uVar8 < (this->ShaderEntries).ArrayNum) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (this->ShaderEntries).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18;
        local_80.Offset = *(long64 *)pFVar14;
        local_80.Size = (long64)*(uint *)(pFVar14 + 8);
        if (((local_a0.Data <= &local_80) &&
            (&local_80 < (FFileCachePreloadEntry *)(local_a0.Data + (longlong)iStack_94 * 0x10))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_98 == iStack_94) {
          local_98 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_a0,&iStack_94);
        }
        lVar16 = (longlong)local_98;
        uVar13 = uVar13 + 1;
        local_98 = local_98 + 1;
        *(long64 *)&local_a0.Data[lVar16 * 0x10].field_0x0 = local_80.Offset;
        *(long64 *)(local_a0.Data + lVar16 * 0x10 + 8) = local_80.Size;
      } while (uVar13 < *(uint *)(pFVar17 + 4));
    }
    AlgoImpl::
    IntroSortInternal<FFileCachePreloadEntry,int,FIdentityFunctor,TDereferenceWrapper<FFileCachePreloadEntry,_FSerializedShaderArchive::Finalize_::__l11::<lambda_1>_>_>
              ((FFileCachePreloadEntry *)local_a0.Data,local_98,FVar6,(<lambda_1> *)local_res18);
    local_70[0].Offset = lVar4;
    local_70[0].Size = lVar5;
    if (((local_a0.Data <= local_70) &&
        (local_70 < (FFileCachePreloadEntry *)(local_a0.Data + (longlong)iStack_94 * 0x10))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_98 == iStack_94) {
      local_98 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_a0,&iStack_94);
    }
    iVar9 = local_98 + 1;
    lVar16 = (longlong)local_98;
    _local_98 = CONCAT44(iStack_94,iVar9);
    *(long64 *)&local_a0.Data[lVar16 * 0x10].field_0x0 = local_70[0].Offset;
    *(long64 *)(local_a0.Data + lVar16 * 0x10 + 8) = local_70[0].Size;
    *(int *)(pFVar17 + 8) = (this->PreloadEntries).ArrayNum;
    if ((iVar9 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar13 = 1;
    lVar16 = *(longlong *)local_a0.Data;
    lStack_88 = *(longlong *)(local_a0.Data + 8);
    local_90 = lVar16;
    if (*(int *)(pFVar17 + 4) != 0) {
      do {
        uVar8 = 0;
        if ((int)uVar13 < local_98) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , lVar16 = local_90, bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = local_a0.Data + (longlong)(int)uVar13 * 0x10;
        lVar11 = (*(longlong *)&pFVar14->field_0x0 - lStack_88) - lVar16;
        if (lVar11 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Gap >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                             ,0x23a,L"Overlapping preload entries, [%lld-%lld), [%lld-%lld)");
          lVar16 = local_90;
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
LAB_145e08fd4:
          lStack_88 = (*(longlong *)(pFVar14 + 8) - lVar16) + *(longlong *)&pFVar14->field_0x0;
        }
        else {
          if (lVar11 < 0x401) goto LAB_145e08fd4;
          *(int *)(pFVar17 + 0xc) = *(int *)(pFVar17 + 0xc) + 1;
          pFVar2 = (this->PreloadEntries).AllocatorInstance.Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_90) &&
              ((FScriptContainerElement *)&local_90 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (this->PreloadEntries).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->PreloadEntries).AllocatorInstance,piVar1);
          }
          (this->PreloadEntries).ArrayNum = iVar9 + 1;
          pFVar2 = (this->PreloadEntries).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
          *(longlong *)pFVar2 = local_90;
          *(longlong *)(pFVar2 + 8) = lStack_88;
          lVar16 = *(longlong *)&pFVar14->field_0x0;
          lStack_88 = *(longlong *)(pFVar14 + 8);
          local_90 = lVar16;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 <= *(uint *)(pFVar17 + 4));
    }
    if ((*(int *)(pFVar17 + 0xc) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderMapEntry.NumPreloadEntries > 0u",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                           ,0x246,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((lStack_88 != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPreloadEntry.Size == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                           ,0x247,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((FFileCachePreloadEntry *)local_a0.Data != (FFileCachePreloadEntry *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    pFVar17 = pFVar17 + 0x10;
    uVar10 = (ulonglong)local_res20;
  } while( true );
}

// FindOrAddShader @ 145e09ee0

bool __thiscall
FSerializedShaderArchive::FindOrAddShader
          (FSerializedShaderArchive *this,FSHAHash *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  
  uVar2 = *(uint *)param_1->Hash;
  iVar9 = FindShaderWithKey(this,param_1,uVar2);
  *param_2 = iVar9;
  if (iVar9 == -1) {
    pFVar3 = (this->ShaderHashes).AllocatorInstance.Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->ShaderHashes).ArrayMax * 0x14))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    iVar9 = (this->ShaderHashes).ArrayNum;
    piVar1 = &(this->ShaderHashes).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,&(this->ShaderHashes).AllocatorInstance,piVar1);
    }
    (this->ShaderHashes).ArrayNum = iVar9 + 1;
    uVar6 = *(undefined8 *)(param_1->Hash + 8);
    pFVar4 = (this->ShaderHashes).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)iVar9 * 0x14;
    *(undefined8 *)pFVar3 = *(undefined8 *)param_1->Hash;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    *(undefined4 *)(pFVar4 + (longlong)iVar9 * 0x14 + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
    piVar1 = &(this->ShaderEntries).ArrayMax;
    *param_2 = iVar9;
    iVar9 = (this->ShaderEntries).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->ShaderEntries).AllocatorInstance,piVar1);
    }
    (this->ShaderEntries).ArrayNum = iVar9 + 1;
    DefaultConstructItems<FShaderCodeEntry,int>
              ((this->ShaderEntries).AllocatorInstance.Data + (longlong)iVar9 * 0x18,1);
    if ((this->ShaderEntries).ArrayNum != (this->ShaderHashes).ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderEntries.Num() == ShaderHashes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0xc0,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    FHashTable::Add(&this->ShaderHashTable,uVar2,*param_2);
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// FindOrAddShaderMap @ 145e0a140

bool __thiscall
FSerializedShaderArchive::FindOrAddShaderMap
          (FSerializedShaderArchive *this,FSHAHash *param_1,int *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  uVar2 = *(uint *)param_1->Hash;
  iVar9 = FindShaderMapWithKey(this,param_1,uVar2);
  if (iVar9 == -1) {
    pFVar3 = (this->ShaderMapHashes).AllocatorInstance.Data;
    if ((pFVar3 <= param_1) &&
       (param_1 < pFVar3 + (longlong)(this->ShaderMapHashes).ArrayMax * 0x14)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    uVar10 = (this->ShaderMapHashes).ArrayNum;
    piVar1 = &(this->ShaderMapHashes).ArrayMax;
    if (uVar10 == *piVar1) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x414,(ForAnyElementType *)this,piVar1);
    }
    (this->ShaderMapHashes).ArrayNum = uVar10 + 1;
    uVar6 = *(undefined8 *)(param_1->Hash + 8);
    pFVar4 = (this->ShaderMapHashes).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)(int)uVar10 * 0x14;
    *(undefined8 *)pFVar3 = *(undefined8 *)param_1->Hash;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    *(undefined4 *)(pFVar4 + (longlong)(int)uVar10 * 0x14 + 0x10) =
         *(undefined4 *)(param_1->Hash + 0x10);
    piVar1 = &(this->ShaderMapEntries).ArrayMax;
    iVar11 = (this->ShaderMapEntries).ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&(this->ShaderMapEntries).AllocatorInstance,piVar1);
    }
    (this->ShaderMapEntries).ArrayNum = iVar11 + 1;
    DefaultConstructItems<FShaderMapEntry,int>
              ((this->ShaderMapEntries).AllocatorInstance.Data + (longlong)iVar11 * 0x10,1);
    if ((this->ShaderMapEntries).ArrayNum != (this->ShaderMapHashes).ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderMapEntries.Num() == ShaderMapHashes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0x95,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    FHashTable::Add(&this->ShaderMapHashTable,uVar2,uVar10);
    *param_2 = uVar10;
  }
  else {
    *param_2 = iVar9;
  }
  return iVar9 == -1;
}

// FindShader @ 145e0a2c0

int __thiscall
FSerializedShaderArchive::FindShader(FSerializedShaderArchive *this,FSHAHash *param_1)

{
  int iVar1;
  
  iVar1 = FindShaderWithKey(this,param_1,*(uint *)param_1->Hash);
  return iVar1;
}

// FindShaderMap @ 145e0a3f0

int __thiscall
FSerializedShaderArchive::FindShaderMap(FSerializedShaderArchive *this,FSHAHash *param_1)

{
  int iVar1;
  
  iVar1 = FindShaderMapWithKey(this,param_1,*(uint *)param_1->Hash);
  return iVar1;
}

// FindShaderMapWithKey @ 145e0a520

int __thiscall
FSerializedShaderArchive::FindShaderMapWithKey
          (FSerializedShaderArchive *this,FSHAHash *param_1,uint param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar1 = (this->ShaderMapHashTable).Hash[(this->ShaderMapHashTable).HashMask & param_2];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->ShaderMapHashes).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    lVar7 = (longlong)(int)uVar1;
    pFVar2 = (this->ShaderMapHashes).AllocatorInstance.Data;
    if (((*(longlong *)(pFVar2 + lVar7 * 0x14) == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar2 + lVar7 * 0x14 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar2 + lVar7 * 0x14 + 0x10) == *(int *)(param_1->Hash + 0x10))) {
      return uVar1;
    }
    uVar1 = (this->ShaderMapHashTable).NextIndex[uVar1];
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// FindShaderWithKey @ 145e0a640

int __thiscall
FSerializedShaderArchive::FindShaderWithKey
          (FSerializedShaderArchive *this,FSHAHash *param_1,uint param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar1 = (this->ShaderHashTable).Hash[(this->ShaderHashTable).HashMask & param_2];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->ShaderHashes).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    lVar7 = (longlong)(int)uVar1;
    pFVar2 = (this->ShaderHashes).AllocatorInstance.Data;
    if (((*(longlong *)(pFVar2 + lVar7 * 0x14) == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar2 + lVar7 * 0x14 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar2 + lVar7 * 0x14 + 0x10) == *(int *)(param_1->Hash + 0x10))) {
      return uVar1;
    }
    uVar1 = (this->ShaderHashTable).NextIndex[uVar1];
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// RemoveLastAddedShader @ 145e21950

void __thiscall FSerializedShaderArchive::RemoveLastAddedShader(FSerializedShaderArchive *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar9 = (this->ShaderEntries).ArrayNum;
  if (((iVar9 == 0) || (iVar9 != (this->ShaderHashes).ArrayNum)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShaderEntries.IsEmpty() && ShaderEntries.Num() == ShaderHashes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0xce,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = (this->ShaderEntries).ArrayNum - 1;
  uVar12 = ~uVar11;
  uVar10 = uVar12 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar11 < (this->ShaderHashes).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar11 < (this->ShaderHashTable).IndexSize) {
    uVar5 = *(uint *)((this->ShaderHashes).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x14) &
            (this->ShaderHashTable).HashMask;
    puVar3 = (this->ShaderHashTable).Hash;
    uVar7 = puVar3[uVar5];
    if (uVar7 == uVar11) {
      puVar3[uVar5] = (this->ShaderHashTable).NextIndex[uVar11];
    }
    else if (uVar7 != 0xffffffff) {
      puVar3 = (this->ShaderHashTable).NextIndex;
      do {
        uVar8 = (ulonglong)uVar7;
        uVar7 = puVar3[uVar7];
        if (uVar7 == uVar11) {
          puVar3[uVar8] = puVar3[uVar11];
          break;
        }
      } while (uVar7 != 0xffffffff);
    }
  }
  uVar7 = 0;
  if ((int)uVar11 < (this->ShaderHashes).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->ShaderHashes).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x14;
  iVar9 = (this->ShaderHashes).ArrayNum + uVar12;
  if (iVar9 != 0) {
    memmove(pFVar2,pFVar2 + 0x14,(longlong)iVar9 * 0x14);
  }
  piVar1 = &(this->ShaderHashes).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,&(this->ShaderHashes).AllocatorInstance,(this->ShaderHashes).ArrayNum,
             &(this->ShaderHashes).ArrayMax);
  uVar7 = 0;
  if ((int)uVar11 < (this->ShaderEntries).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->ShaderEntries).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18;
  iVar9 = (this->ShaderEntries).ArrayNum + uVar12;
  if (iVar9 != 0) {
    memmove(pFVar2,pFVar2 + 0x18,(longlong)iVar9 * 0x18);
  }
  piVar1 = &(this->ShaderEntries).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->ShaderEntries).AllocatorInstance,(this->ShaderEntries).ArrayNum,
             &(this->ShaderEntries).ArrayMax);
  return;
}

// Serialize @ 145e249f0

void __thiscall
FSerializedShaderArchive::Serialize(FSerializedShaderArchive *this,FArchive *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  
  TArrayPrivateFriend::Serialize<FSHAHash,TSizedDefaultAllocator<32>_>
            (param_1,&this->ShaderMapHashes);
  TArrayPrivateFriend::Serialize<FSHAHash,TSizedDefaultAllocator<32>_>(param_1,&this->ShaderHashes);
  TArrayPrivateFriend::Serialize<FShaderMapEntry,TSizedDefaultAllocator<32>_>
            (param_1,&this->ShaderMapEntries);
  TArrayPrivateFriend::Serialize<FShaderCodeEntry,TSizedDefaultAllocator<32>_>
            (param_1,&this->ShaderEntries);
  TArrayPrivateFriend::Serialize<FFileCachePreloadEntry,TSizedDefaultAllocator<32>_>
            (param_1,&this->PreloadEntries);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&this->ShaderIndices);
  if (((this->ShaderHashes).ArrayNum != (this->ShaderEntries).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderHashes.Num() == ShaderEntries.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0x274,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->ShaderMapHashes).ArrayNum != (this->ShaderMapEntries).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderMapHashes.Num() == ShaderMapEntries.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0x275,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    uVar5 = (this->ShaderMapHashes).ArrayNum;
    uVar6 = 1;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    uVar9 = (ulonglong)(uVar6 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar10 & 0x1f);
    if (0x10000 < uVar6) {
      uVar6 = 0x10000;
    }
    FHashTable::Clear(&this->ShaderMapHashTable,uVar6,uVar5);
    iVar7 = (this->ShaderMapHashes).ArrayNum;
    uVar9 = 0;
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar6 = (uint)uVar9;
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
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
        uVar5 = *(uint *)((this->ShaderMapHashes).AllocatorInstance.Data + lVar10);
        if ((this->ShaderMapHashTable).IndexSize <= uVar6) {
          iVar7 = 1;
          if (uVar6 + 1 != 0) {
            iVar7 = uVar6 + 1;
          }
          uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uVar8 = 1 << ((byte)lVar2 & 0x1f);
          if (uVar8 < 0x20) {
            uVar8 = 0x20;
          }
          FHashTable::Resize(&this->ShaderMapHashTable,uVar8);
        }
        lVar10 = lVar10 + 0x14;
        uVar5 = (this->ShaderMapHashTable).HashMask & uVar5;
        (this->ShaderMapHashTable).NextIndex[uVar9] = (this->ShaderMapHashTable).Hash[uVar5];
        (this->ShaderMapHashTable).Hash[uVar5] = uVar6;
        uVar9 = (ulonglong)(uVar6 + 1);
        iVar7 = (this->ShaderMapHashes).ArrayNum;
      } while ((int)(uVar6 + 1) < iVar7);
    }
    piVar11 = &(this->ShaderHashes).ArrayNum;
    uVar5 = *piVar11;
    uVar6 = 1;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    uVar9 = (ulonglong)(uVar6 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar10 & 0x1f);
    if (0x10000 < uVar6) {
      uVar6 = 0x10000;
    }
    FHashTable::Clear(&this->ShaderHashTable,uVar6,uVar5);
    uVar9 = 0;
    if (0 < *piVar11) {
      lVar10 = 0;
      do {
        uVar6 = (uint)uVar9;
        uVar5 = 0;
        if ((int)uVar6 < (this->ShaderHashes).ArrayNum) {
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
        uVar5 = *(uint *)((this->ShaderHashes).AllocatorInstance.Data + lVar10);
        if ((this->ShaderHashTable).IndexSize <= uVar6) {
          iVar7 = 1;
          if (uVar6 + 1 != 0) {
            iVar7 = uVar6 + 1;
          }
          uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uVar8 = 1 << ((byte)lVar2 & 0x1f);
          if (uVar8 < 0x20) {
            uVar8 = 0x20;
          }
          FHashTable::Resize(&this->ShaderHashTable,uVar8);
        }
        uVar5 = uVar5 & (this->ShaderHashTable).HashMask;
        lVar10 = lVar10 + 0x14;
        (this->ShaderHashTable).NextIndex[uVar9] = (this->ShaderHashTable).Hash[uVar5];
        (this->ShaderHashTable).Hash[uVar5] = uVar6;
        uVar9 = (ulonglong)(uVar6 + 1);
      } while ((int)(uVar6 + 1) < *piVar11);
    }
  }
  return;
}

