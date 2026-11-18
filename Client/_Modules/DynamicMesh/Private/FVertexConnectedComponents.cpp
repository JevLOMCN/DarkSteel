// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// EnumerateContiguousComponentsFromArray @ 14c8d8590

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FVertexConnectedComponents::EnumerateContiguousComponentsFromArray
          (FVertexConnectedComponents *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(int,TArrayView<int_const_,int>)> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint local_res10 [2];
  TFunctionRef<bool___cdecl(int,TArrayView<int_const_,int>)> *local_res18;
  undefined8 local_48;
  int iStack_40;
  
  iVar12 = param_1->ArrayNum;
  uVar13 = 0;
  local_res18 = param_2;
  if (0 < iVar12) {
    do {
      uVar6 = 0;
      if ((int)uVar13 < iVar12) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      lVar8 = (longlong)(int)uVar13;
      uVar7 = FSizedDisjointSet::Find
                        (&this->DisjointSet,*(int *)((param_1->AllocatorInstance).Data + lVar8 * 4))
      ;
      uVar6 = uVar7;
      while( true ) {
        uVar11 = ~uVar6 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar6 < (this->DisjointSet).Parents.ArrayNum) {
          uVar9 = uVar11;
        }
        if (uVar9 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        lVar10 = (longlong)(int)uVar6;
        if (*(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar10 * 4) == uVar6)
        break;
        uVar9 = 0;
        if ((int)uVar6 < (this->DisjointSet).Parents.ArrayNum) {
          uVar9 = uVar11;
        }
        if (uVar9 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        uVar6 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar10 * 4);
      }
      uVar9 = 0;
      if ((int)uVar6 < (this->DisjointSet).Sizes.ArrayNum) {
        uVar9 = uVar11;
      }
      if (uVar9 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      iVar12 = *(int *)((this->DisjointSet).Sizes.AllocatorInstance.Data + lVar10 * 4);
      uVar13 = iVar12 + uVar13;
      if (param_1->ArrayNum < (int)uVar13) {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3230942156902366956>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\VertexConnectedComponents.h"
                           ,0x114,"NextStart <= ContiguousComponentsArray.Num()");
        if (!bVar3) {
          return false;
        }
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (iVar12 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      local_res10[0] = uVar7;
      iStack_40 = iVar12;
      local_48 = pFVar1 + lVar8 * 4;
      cVar5 = (**(code **)local_res18)(*(undefined8 *)&local_res18->field_0x8,local_res10,&local_48)
      ;
      if (cVar5 == '\0') {
        return false;
      }
      iVar12 = param_1->ArrayNum;
    } while ((int)uVar13 < iVar12);
  }
  return true;
}

// MakeContiguousComponentsArray @ 14c9051a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FVertexConnectedComponents::MakeContiguousComponentsArray
          (FVertexConnectedComponents *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<FSetElementId> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStackY_108 [32];
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  longlong local_c0;
  TPairInitializer<int_const_&,int_&&> local_b8;
  int *local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar13 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_c8 = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(__return_storage_ptr__,param_1,Default);
  local_d0 = 0;
  local_d4 = param_1;
  if (0 < param_1) {
    local_c0 = (longlong)param_1 * 4;
    do {
      iVar15 = (int)uVar13;
      while( true ) {
        uVar12 = (uint)uVar13;
        uVar14 = ~uVar12 >> 0x1f;
        uVar6 = 0;
        uVar7 = uVar6;
        if ((int)uVar12 < (this->DisjointSet).Parents.ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        lVar16 = (longlong)(int)uVar12;
        if (*(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar16 * 4) == uVar12)
        break;
        if ((int)uVar12 < (this->DisjointSet).Parents.ArrayNum) {
          uVar6 = uVar14;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        uVar7 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar16 * 4);
        uVar6 = 0;
        if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        uVar1 = *(undefined4 *)
                 ((this->DisjointSet).Parents.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
        uVar7 = 0;
        if ((int)uVar12 < (this->DisjointSet).Parents.ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        *(undefined4 *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar16 * 4) = uVar1;
        uVar7 = 0;
        if ((int)uVar12 < (this->DisjointSet).Parents.ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        uVar13 = (ulonglong)
                 *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar16 * 4);
      }
      uVar7 = uVar6;
      if ((int)uVar12 < (this->DisjointSet).Sizes.ArrayNum) {
        uVar7 = uVar14;
      }
      local_d8 = uVar12;
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        uVar13 = (ulonglong)local_d8;
      }
      uVar7 = local_d0;
      iVar2 = *(int *)((this->DisjointSet).Sizes.AllocatorInstance.Data + lVar16 * 4);
      if (iVar2 == 1) {
        local_d4 = local_d4 - 1;
        lVar16 = local_c0 + -4;
        uVar7 = 0;
        if ((int)local_d4 < __return_storage_ptr__->ArrayNum) {
          uVar7 = ~local_d4 >> 0x1f;
        }
        local_c0 = lVar16;
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + lVar16) = iVar15;
      }
      else {
        if (local_98._8_4_ != local_64) {
          FVar10 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar10 = local_58;
          }
          iVar3 = *(int *)((longlong)FVar10 + (local_50 - 1 & uVar13) * 4);
          while (iVar3 != -1) {
            pFVar9 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar3 * 0x10);
            if (*(int *)pFVar9 == (int)uVar13) {
              pFVar11 = pFVar9 + 4;
              if (pFVar9 == (FScriptContainerElement *)0x0) {
                pFVar11 = (FScriptContainerElement *)0x0;
              }
              if (pFVar11 != (FScriptContainerElement *)0x0) {
                uVar7 = *(uint *)pFVar11;
                *(uint *)pFVar11 = uVar7 + 1;
                if ((int)uVar7 < __return_storage_ptr__->ArrayNum) {
                  uVar6 = ~uVar7 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                  return pTVar8;
                }
                *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar7 * 4
                        ) = iVar15;
                goto LAB_14c90557a;
              }
              break;
            }
            iVar3 = *(int *)(pFVar9 + 8);
          }
        }
        lVar16 = (longlong)(int)local_d0;
        uVar6 = 0;
        if ((int)local_d0 < __return_storage_ptr__->ArrayNum) {
          uVar6 = ~local_d0 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + lVar16 * 4) = iVar15;
        local_cc = uVar7 + 1;
        local_b8.Value = (int *)&local_d8;
        local_a8 = &local_cc;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_98,&local_b8,(bool *)&local_b8.Value);
        local_d0 = uVar7 + iVar2;
      }
LAB_14c90557a:
      uVar13 = (ulonglong)(iVar15 + 1U);
    } while ((int)(iVar15 + 1U) < local_c8);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  bVar5 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

