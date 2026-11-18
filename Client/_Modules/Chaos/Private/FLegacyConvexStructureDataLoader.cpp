// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ExtractData<Chaos::Legacy::TConvexFlattenedArrayStructureData<unsigned_char,unsigned_short>_> @ 143712750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Chaos::Legacy::FLegacyConvexStructureDataLoader::
ExtractData<Chaos::Legacy::TConvexFlattenedArrayStructureData<unsigned_char,unsigned_short>_>
          (TConvexFlattenedArrayStructureData<unsigned_char,unsigned_short> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          int *param_3)

{
  FScriptContainerElement *pFVar1;
  void *_Dst;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  longlong local_res8;
  longlong local_res20;
  
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,(param_1->PlaneVerticesOffsetCount).ArrayNum,Default);
  uVar10 = 0;
  if ((param_1->PlaneVerticesOffsetCount).ArrayNum < 1) {
    *param_3 = (param_1->VertexPlanesOffsetCount).ArrayNum;
    return;
  }
  local_res20 = 0;
  local_res8 = 0;
  do {
    uVar11 = ~uVar10 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar10 < param_2->ArrayNum) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) {
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
    pFVar13 = (param_2->AllocatorInstance).Data + local_res20;
    uVar9 = 0;
    if ((int)uVar10 < (param_1->PlaneVerticesOffsetCount).ArrayNum) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) {
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
    pFVar1 = pFVar13 + 8;
    FVar2 = (param_1->PlaneVerticesOffsetCount).AllocatorInstance.Data[local_res8 * 4 + 2];
    iVar8 = *(int *)&pFVar1->field_0x0;
    uVar9 = (uint)(byte)FVar2;
    if (iVar8 < (int)(uint)(byte)FVar2) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar9 - iVar8,(ForAnyElementType *)pFVar13,(int *)pFVar1,
                         (int *)(pFVar13 + 0xc));
      memset((void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar5 * 4),0,
             (longlong)(int)(uVar9 - iVar8) << 2);
    }
    else if ((int)(uint)(byte)FVar2 < iVar8) {
      iVar8 = iVar8 - uVar9;
      if (iVar8 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (iVar8 == 0) goto LAB_143712925;
      _Dst = (void *)(*(longlong *)&pFVar13->field_0x0 + (ulonglong)(byte)FVar2 * 4);
      iVar5 = (*(int *)&pFVar1->field_0x0 - uVar9) - iVar8;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar8 * 4),(longlong)iVar5 << 2);
      }
      *(int *)&pFVar1->field_0x0 = *(int *)&pFVar1->field_0x0 - iVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)pFVar13,*(int *)&pFVar1->field_0x0,(int *)(pFVar13 + 0xc))
      ;
    }
LAB_143712925:
    uVar9 = 0;
    lVar12 = 0;
    while( true ) {
      uVar6 = 0;
      if ((int)uVar10 < (param_1->PlaneVerticesOffsetCount).ArrayNum) {
        uVar6 = uVar11;
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
      iVar8 = (param_1->PlaneVerticesOffsetCount).ArrayNum;
      if ((int)(uint)(byte)(param_1->PlaneVerticesOffsetCount).AllocatorInstance.Data
                           [local_res8 * 4 + 2] <= (int)uVar9) break;
      uVar6 = 0;
      if ((int)uVar10 < iVar8) {
        uVar6 = uVar11;
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
      if ((int)(uint)(byte)(param_1->PlaneVerticesOffsetCount).AllocatorInstance.Data
                           [local_res8 * 4 + 2] <= (int)uVar9) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PlaneVertexIndex < PlaneVerticesOffsetCount[PlaneIndex].Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexFlattenedArrayStructureData.h"
                           ,0x5d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar6 = 0;
      if ((int)uVar10 < (param_1->PlaneVerticesOffsetCount).ArrayNum) {
        uVar6 = uVar11;
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
      uVar7 = *(ushort *)
               ((param_1->PlaneVerticesOffsetCount).AllocatorInstance.Data + local_res8 * 4) + uVar9
      ;
      uVar6 = 0;
      if ((int)uVar7 < (param_1->PlaneVertices).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
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
      FVar2 = (param_1->PlaneVertices).AllocatorInstance.Data[(int)uVar7];
      uVar6 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar6 = uVar11;
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
      pFVar13 = (param_2->AllocatorInstance).Data + local_res20;
      uVar6 = 0;
      if ((int)uVar9 < *(int *)(pFVar13 + 8)) {
        uVar6 = ~uVar9 >> 0x1f;
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
      uVar9 = uVar9 + 1;
      *(uint *)(lVar12 + *(longlong *)pFVar13) = (uint)(byte)FVar2;
      lVar12 = lVar12 + 4;
    }
    local_res8 = local_res8 + 1;
    local_res20 = local_res20 + 0x10;
    uVar10 = uVar10 + 1;
    if (iVar8 <= (int)uVar10) {
      *param_3 = (param_1->VertexPlanesOffsetCount).ArrayNum;
      return;
    }
  } while( true );
}

// ExtractData<Chaos::Legacy::TConvexFlattenedArrayStructureData<int,int>_> @ 143712bd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Chaos::Legacy::FLegacyConvexStructureDataLoader::
ExtractData<Chaos::Legacy::TConvexFlattenedArrayStructureData<int,int>_>
          (TConvexFlattenedArrayStructureData<int,int> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          int *param_3)

{
  FScriptContainerElement *pFVar1;
  void *_Dst;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  longlong local_res8;
  longlong local_res20;
  
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,(param_1->PlaneVerticesOffsetCount).ArrayNum,Default);
  uVar10 = 0;
  if (0 < (param_1->PlaneVerticesOffsetCount).ArrayNum) {
    local_res8 = 0;
    local_res20 = 0;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (param_2->AllocatorInstance).Data + local_res20;
      uVar9 = 0;
      if ((int)uVar10 < (param_1->PlaneVerticesOffsetCount).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = pFVar13 + 8;
      iVar6 = *(int *)&pFVar1->field_0x0;
      uVar9 = *(uint *)((param_1->PlaneVerticesOffsetCount).AllocatorInstance.Data +
                       local_res8 * 8 + 4);
      if (iVar6 < (int)uVar9) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar9 - iVar6,(ForAnyElementType *)pFVar13,(int *)pFVar1,
                           (int *)(pFVar13 + 0xc));
        memset((void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar5 * 4),0,
               (longlong)(int)(uVar9 - iVar6) << 2);
      }
      else {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        if ((int)uVar9 < iVar6) {
          uVar7 = iVar6 - uVar9;
          if (((int)(uVar7 | uVar9) < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar7 != 0) {
            _Dst = (void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)(int)uVar9 * 4);
            iVar6 = (*(int *)&pFVar1->field_0x0 - uVar9) - uVar7;
            if (iVar6 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar6 << 2)
              ;
            }
            *(uint *)&pFVar1->field_0x0 = *(int *)&pFVar1->field_0x0 - uVar7;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar13,*(int *)&pFVar1->field_0x0,
                       (int *)(pFVar13 + 0xc));
          }
        }
      }
      uVar9 = 0;
      lVar12 = 0;
      while( true ) {
        uVar7 = 0;
        if ((int)uVar10 < (param_1->PlaneVerticesOffsetCount).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_1->PlaneVerticesOffsetCount).ArrayNum;
        if (*(int *)((param_1->PlaneVerticesOffsetCount).AllocatorInstance.Data + local_res8 * 8 + 4
                    ) <= (int)uVar9) break;
        uVar7 = 0;
        if ((int)uVar10 < iVar6) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(int *)((param_1->PlaneVerticesOffsetCount).AllocatorInstance.Data +
                     local_res8 * 8 + 4) <= (int)uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PlaneVertexIndex < PlaneVerticesOffsetCount[PlaneIndex].Value",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexFlattenedArrayStructureData.h"
                               ,0x5d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar10 < (param_1->PlaneVerticesOffsetCount).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = *(int *)((param_1->PlaneVerticesOffsetCount).AllocatorInstance.Data + local_res8 * 8
                        ) + uVar9;
        uVar7 = 0;
        if ((int)uVar8 < (param_1->PlaneVertices).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar2 = *(undefined4 *)
                 ((param_1->PlaneVertices).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
        uVar7 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (param_2->AllocatorInstance).Data + local_res20;
        uVar7 = 0;
        if ((int)uVar9 < *(int *)(pFVar13 + 8)) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = uVar9 + 1;
        *(undefined4 *)(lVar12 + *(longlong *)pFVar13) = uVar2;
        lVar12 = lVar12 + 4;
      }
      local_res8 = local_res8 + 1;
      local_res20 = local_res20 + 0x10;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar6);
  }
  *param_3 = (param_1->VertexPlanesOffsetCount).ArrayNum;
  return;
}

// LoadVariableSizePackedArrays @ 143798600

void __cdecl
Chaos::Legacy::FLegacyConvexStructureDataLoader::LoadVariableSizePackedArrays
          (FArchive *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          int *param_3)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  char local_res8 [8];
  int local_res10 [2];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_68;
  TConvexFlattenedArrayStructureData<int,int> local_58;
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_res10[0] = 0;
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_res8[0] == '\x01') {
    local_58.PlaneVerticesOffsetCount.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.PlaneVerticesOffsetCount.ArrayNum = 0;
    local_58.PlaneVerticesOffsetCount.ArrayMax = 0;
    local_58.VertexPlanesOffsetCount.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.VertexPlanesOffsetCount.ArrayNum = 0;
    local_58.VertexPlanesOffsetCount.ArrayMax = 0;
    local_58.PlaneVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.PlaneVertices.ArrayNum = 0;
    local_58.PlaneVertices.ArrayMax = 0;
    local_58.VertexPlanes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.VertexPlanes.ArrayNum = 0;
    local_58.VertexPlanes.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<TTuple<int,int>,TSizedDefaultAllocator<32>_>
              (param_1,&local_58.PlaneVerticesOffsetCount);
    TArrayPrivateFriend::Serialize<TTuple<int,int>,TSizedDefaultAllocator<32>_>
              (param_1,&local_58.VertexPlanesOffsetCount);
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&local_58.PlaneVertices)
    ;
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&local_58.VertexPlanes);
    ExtractData<Chaos::Legacy::TConvexFlattenedArrayStructureData<int,int>_>
              (&local_58,&local_68,local_res10);
  }
  else {
    if (local_res8[0] != '\x02') goto LAB_143798769;
    local_58.PlaneVerticesOffsetCount.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.PlaneVerticesOffsetCount.ArrayNum = 0;
    local_58.PlaneVerticesOffsetCount.ArrayMax = 0;
    local_58.VertexPlanesOffsetCount.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.VertexPlanesOffsetCount.ArrayNum = 0;
    local_58.VertexPlanesOffsetCount.ArrayMax = 0;
    local_58.PlaneVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.PlaneVertices.ArrayNum = 0;
    local_58.PlaneVertices.ArrayMax = 0;
    local_58.VertexPlanes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.VertexPlanes.ArrayNum = 0;
    local_58.VertexPlanes.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<TTuple<unsigned_short,unsigned_char>,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TTuple<unsigned_short,unsigned_char>,TSizedDefaultAllocator<32>_> *)
                       &local_58);
    TArrayPrivateFriend::Serialize<TTuple<unsigned_short,unsigned_char>,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TTuple<unsigned_short,unsigned_char>,TSizedDefaultAllocator<32>_> *)
                       &local_58.VertexPlanesOffsetCount);
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_58.PlaneVertices)
    ;
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_58.VertexPlanes);
    ExtractData<Chaos::Legacy::TConvexFlattenedArrayStructureData<unsigned_char,unsigned_short>_>
              ((TConvexFlattenedArrayStructureData<unsigned_char,unsigned_short> *)&local_58,
               &local_68,local_res10);
  }
  if (local_58.VertexPlanes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.VertexPlanes.AllocatorInstance.Data);
  }
  if (local_58.PlaneVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PlaneVertices.AllocatorInstance.Data);
  }
  if (local_58.VertexPlanesOffsetCount.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.VertexPlanesOffsetCount.AllocatorInstance.Data);
  }
  if (local_58.PlaneVerticesOffsetCount.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PlaneVerticesOffsetCount.AllocatorInstance.Data);
  }
LAB_143798769:
  if (param_2 == &local_68) {
    iVar3 = local_68.ArrayNum;
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum);
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_2->AllocatorInstance).Data = local_68.AllocatorInstance.Data;
    param_2->ArrayNum = local_68.ArrayNum;
    param_2->ArrayMax = local_68.ArrayMax;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = 0;
  }
  *param_3 = local_res10[0];
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68.AllocatorInstance.Data,iVar3);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

