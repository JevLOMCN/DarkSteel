// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// CompactedGroupIndexToGroupID @ 14338efb0

int __thiscall
UE::Geometry::FSizedDisjointSet::CompactedGroupIndexToGroupID
          (FSizedDisjointSet *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int local_res8 [2];
  longlong local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  uint local_68 [2];
  longlong local_60;
  longlong local_58;
  
  iVar6 = (this->Sizes).ArrayNum;
  if (param_3 < 1) {
    param_3 = 1;
  }
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  if (param_2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res8[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(param_2,local_res8,iVar6);
  }
  iVar10 = 0;
  uVar11 = 0;
  if (0 < iVar6) {
    local_res10 = 0;
    local_58 = (longlong)iVar6;
    do {
      lVar8 = local_res10;
      uVar5 = 0;
      if ((int)uVar11 < (this->Parents).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      local_60 = lVar8 * 4;
      uVar5 = uVar11;
      if (*(int *)((this->Parents).AllocatorInstance.Data + local_60) != -1) {
        while( true ) {
          uVar9 = ~uVar5 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar5 < (this->Parents).ArrayNum) {
            uVar7 = uVar9;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          lVar8 = (longlong)(int)uVar5;
          if (*(uint *)((this->Parents).AllocatorInstance.Data + lVar8 * 4) == uVar5) break;
          uVar7 = 0;
          if ((int)uVar5 < (this->Parents).ArrayNum) {
            uVar7 = uVar9;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          uVar5 = *(uint *)((this->Parents).AllocatorInstance.Data + lVar8 * 4);
        }
        local_68[0] = uVar5;
        if (uVar5 == uVar11) {
          uVar7 = 0;
          if ((int)uVar5 < (this->Sizes).ArrayNum) {
            uVar7 = uVar9;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          if (local_res20 <= *(int *)((this->Sizes).AllocatorInstance.Data + lVar8 * 4)) {
            if (param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              pFVar1 = (param_1->AllocatorInstance).Data;
              if (((pFVar1 <= (FScriptContainerElement *)local_68) &&
                  ((FScriptContainerElement *)local_68 < pFVar1 + (longlong)param_1->ArrayMax * 4))
                 && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              iVar6 = param_1->ArrayNum;
              if (iVar6 == param_1->ArrayMax) {
                iVar6 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar6 + 1;
              *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_68[0];
            }
            pTVar3 = local_res18;
            if (local_res18 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              uVar5 = 0;
              if ((int)uVar11 < local_res18->ArrayNum) {
                uVar5 = ~uVar11 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              *(int *)((pTVar3->AllocatorInstance).Data + local_60) = iVar10;
            }
            iVar10 = iVar10 + 1;
          }
        }
      }
      uVar11 = uVar11 + 1;
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_58);
  }
  return iVar10;
}

// Find @ 14339e970

int __thiscall UE::Geometry::FSizedDisjointSet::Find(FSizedDisjointSet *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  while( true ) {
    uVar8 = (uint)~param_1 >> 0x1f;
    uVar4 = 0;
    if (param_1 < (this->Parents).ArrayNum) {
      uVar4 = uVar8;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    lVar7 = (longlong)param_1;
    if (*(uint *)((this->Parents).AllocatorInstance.Data + lVar7 * 4) == param_1) break;
    uVar4 = 0;
    if (param_1 < (this->Parents).ArrayNum) {
      uVar4 = uVar8;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    uVar4 = *(uint *)((this->Parents).AllocatorInstance.Data + lVar7 * 4);
    uVar6 = 0;
    if ((int)uVar4 < (this->Parents).ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    uVar1 = *(undefined4 *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
    uVar4 = 0;
    if (param_1 < (this->Parents).ArrayNum) {
      uVar4 = uVar8;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    *(undefined4 *)((this->Parents).AllocatorInstance.Data + lVar7 * 4) = uVar1;
    uVar4 = 0;
    if (param_1 < (this->Parents).ArrayNum) {
      uVar4 = uVar8;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    param_1 = *(int *)((this->Parents).AllocatorInstance.Data + lVar7 * 4);
  }
  return param_1;
}

// FindWithoutCollapse @ 1433a1320

int __thiscall
UE::Geometry::FSizedDisjointSet::FindWithoutCollapse(FSizedDisjointSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  while( true ) {
    uVar3 = 0;
    if (param_1 < (this->Parents).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    if (*(uint *)((this->Parents).AllocatorInstance.Data + (longlong)param_1 * 4) == param_1) break;
    uVar3 = 0;
    if (param_1 < (this->Parents).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    param_1 = *(int *)((this->Parents).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return param_1;
}

// Init @ 1433b5df0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FSizedDisjointSet::Init(FSizedDisjointSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->Parents,param_1,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->Sizes,param_1,Default);
  uVar4 = 0;
  if (0 < param_1) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Parents).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)((this->Parents).AllocatorInstance.Data + lVar5) = uVar4;
      uVar3 = 0;
      if ((int)uVar4 < (this->Sizes).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((this->Sizes).AllocatorInstance.Data + lVar5) = 1;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < param_1);
  }
  return;
}

// Union @ 1433dccf0

int __thiscall
UE::Geometry::FSizedDisjointSet::Union(FSizedDisjointSet *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = Find(this,param_1);
  uVar5 = Find(this,param_2);
  if (uVar4 != uVar5) {
    uVar7 = 0;
    if ((int)uVar5 < (this->Sizes).ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    pFVar1 = (this->Sizes).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar4 < (this->Sizes).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    uVar7 = uVar4;
    if (*(int *)(pFVar1 + (longlong)(int)uVar5 * 4) <
        *(int *)((this->Sizes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4)) {
      uVar7 = uVar5;
      uVar5 = uVar4;
    }
    uVar4 = 0;
    if ((int)uVar7 < (this->Parents).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = uVar5;
    uVar4 = 0;
    if ((int)uVar7 < (this->Sizes).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = *(int *)((this->Sizes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
    uVar4 = 0;
    if ((int)uVar5 < (this->Sizes).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    pFVar1 = (this->Sizes).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
    *(int *)pFVar1 = *(int *)pFVar1 + iVar6;
  }
  return uVar5;
}

