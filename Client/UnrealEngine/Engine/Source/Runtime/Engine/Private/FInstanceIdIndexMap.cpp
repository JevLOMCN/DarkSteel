// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// IdToIndex @ 1478df5b0

int __thiscall
FInstanceIdIndexMap::IdToIndex(FInstanceIdIndexMap *this,FPrimitiveInstanceId param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((this->IndexToIdMap).ArrayNum == 0) {
    return param_1.Id;
  }
  uVar3 = 0;
  if (param_1.Id < (this->IdToIndexMap).ArrayNum) {
    uVar3 = (uint)~param_1.Id >> 0x1f;
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
  return *(int *)((this->IdToIndexMap).AllocatorInstance.Data + (longlong)param_1.Id * 4);
}

// CreateExplicitIdentityMapping @ 147ce8990

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FInstanceIdIndexMap::CreateExplicitIdentityMapping(FInstanceIdIndexMap *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (((this->IndexToIdMap).ArrayNum != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsIdentity()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceDataSceneProxy.cpp"
                         ,0x35,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->IndexToIdMap,this->NumInstances,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->IdToIndexMap,this->NumInstances,Default);
  uVar4 = 0;
  if (0 < this->NumInstances) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->IndexToIdMap).ArrayNum) {
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
      *(uint *)((this->IndexToIdMap).AllocatorInstance.Data + lVar5) = uVar4;
      uVar3 = 0;
      if ((int)uVar4 < (this->IdToIndexMap).ArrayNum) {
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
      *(uint *)((this->IdToIndexMap).AllocatorInstance.Data + lVar5) = uVar4;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < this->NumInstances);
  }
  return;
}

// IndexToId @ 147d15930

FPrimitiveInstanceId __thiscall
FInstanceIdIndexMap::IndexToId(FInstanceIdIndexMap *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  iVar3 = (this->IndexToIdMap).ArrayNum;
  if (iVar3 == 0) {
    iVar3 = this->NumInstances;
  }
  if (iVar3 <= (int)in_R8D) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceIndex < GetMaxInstanceIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x33,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FPrimitiveInstanceId)iVar3;
    }
  }
  iVar3 = (this->IndexToIdMap).ArrayNum;
  if (iVar3 == 0) {
    *(uint *)CONCAT44(in_register_00000014,param_1) = in_R8D;
    return (FPrimitiveInstanceId)param_1;
  }
  uVar4 = 0;
  if ((int)in_R8D < iVar3) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FPrimitiveInstanceId)iVar3;
    }
  }
  *(uint *)CONCAT44(in_register_00000014,param_1) =
       *(uint *)((this->IndexToIdMap).AllocatorInstance.Data + (longlong)(int)in_R8D * 4);
  return (FPrimitiveInstanceId)param_1;
}

// IsValidId @ 147d1a5c0

bool __thiscall
FInstanceIdIndexMap::IsValidId(FInstanceIdIndexMap *this,FPrimitiveInstanceId param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (-1 < param_1.Id) {
    iVar1 = (this->IndexToIdMap).ArrayNum;
    lVar6 = 0x20;
    if (iVar1 != 0) {
      lVar6 = 0x18;
    }
    if (param_1.Id < *(int *)((longlong)&(this->IndexToIdMap).AllocatorInstance.Data + lVar6)) {
      if (iVar1 != 0) {
        uVar5 = 0;
        if (param_1.Id < (this->IdToIndexMap).ArrayNum) {
          uVar5 = (uint)~param_1.Id >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)((this->IdToIndexMap).AllocatorInstance.Data + (longlong)param_1.Id * 4) == -1)
        {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// RebuildFromIndexToIdMap @ 147d1fa40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FInstanceIdIndexMap::RebuildFromIndexToIdMap(FInstanceIdIndexMap *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->IdToIndexMap,param_1,Default);
  uVar6 = 0;
  if (0 < param_1) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->IdToIndexMap).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar6 = uVar6 + 1;
      *(undefined4 *)((this->IdToIndexMap).AllocatorInstance.Data + lVar7) = 0xffffffff;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < param_1);
  }
  iVar5 = (this->IndexToIdMap).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar5) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar3 = *(uint *)((this->IndexToIdMap).AllocatorInstance.Data + lVar7);
      uVar4 = 0;
      if ((int)uVar3 < (this->IdToIndexMap).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      lVar7 = lVar7 + 4;
      *(uint *)((this->IdToIndexMap).AllocatorInstance.Data + (longlong)(int)uVar3 * 4) = uVar6;
      uVar6 = uVar6 + 1;
      iVar5 = (this->IndexToIdMap).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// RebuildFromIndexToIdMap @ 147d1fbd0

void __thiscall
FInstanceIdIndexMap::RebuildFromIndexToIdMap
          (FInstanceIdIndexMap *this,
          TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  if (this != (FInstanceIdIndexMap *)param_1) {
    pFVar1 = (this->IndexToIdMap).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->IndexToIdMap).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IndexToIdMap).ArrayNum = param_1->ArrayNum;
    (this->IndexToIdMap).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  RebuildFromIndexToIdMap(this,param_2);
  return;
}

// Reset @ 147d248c0

void __thiscall FInstanceIdIndexMap::Reset(FInstanceIdIndexMap *this,int param_1)

{
  (this->IndexToIdMap).ArrayNum = 0;
  if ((this->IndexToIdMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->IndexToIdMap).ArrayMax);
  }
  (this->IdToIndexMap).ArrayNum = 0;
  if ((this->IdToIndexMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IdToIndexMap).AllocatorInstance,0,&(this->IdToIndexMap).ArrayMax);
  }
  this->NumInstances = param_1;
  return;
}

// ResizeExplicit @ 147d25590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FInstanceIdIndexMap::ResizeExplicit(FInstanceIdIndexMap *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((this->IndexToIdMap).ArrayNum == 0) {
    TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->IndexToIdMap,this->NumInstances,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->IdToIndexMap,this->NumInstances,Default);
    uVar4 = 0;
    if (0 < this->NumInstances) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar4 < (this->IndexToIdMap).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this->IndexToIdMap).AllocatorInstance.Data + lVar7) = uVar4;
        uVar5 = 0;
        if ((int)uVar4 < (this->IdToIndexMap).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this->IdToIndexMap).AllocatorInstance.Data + lVar7) = uVar4;
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 4;
      } while ((int)uVar4 < this->NumInstances);
    }
  }
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->IndexToIdMap,param_1,Default);
  iVar1 = (this->IdToIndexMap).ArrayNum;
  uVar6 = (ulonglong)iVar1;
  this->NumInstances = param_1;
  if ((param_2 != iVar1) &&
     (TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->IdToIndexMap,param_2,Default), iVar1 < param_2)) {
    lVar7 = uVar6 * 4;
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->IdToIndexMap).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      *(undefined4 *)((this->IdToIndexMap).AllocatorInstance.Data + lVar7) = 0xffffffff;
      lVar7 = lVar7 + 4;
    } while ((int)(uVar5 + 1) < param_2);
  }
  return;
}

// Serialize @ 147d27f40

void __thiscall FInstanceIdIndexMap::Serialize(FInstanceIdIndexMap *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  uint local_res8 [2];
  
  TArrayPrivateFriend::Serialize<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>
            (param_1,&this->IndexToIdMap);
  piVar1 = &this->NumInstances;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  lVar4 = 0x20;
  if ((this->IndexToIdMap).ArrayNum != 0) {
    lVar4 = 0x18;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = *(uint *)((longlong)&(this->IndexToIdMap).AllocatorInstance.Data + lVar4);
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if ((this->IndexToIdMap).ArrayNum != 0) {
      RebuildFromIndexToIdMap(this,local_res8[0]);
      return;
    }
    (this->IdToIndexMap).ArrayNum = 0;
    if ((this->IdToIndexMap).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->IdToIndexMap).AllocatorInstance,0,&(this->IdToIndexMap).ArrayMax);
    }
  }
  return;
}

// operator= @ 147d7cab0

FInstanceIdIndexMap * __thiscall
FInstanceIdIndexMap::operator=(FInstanceIdIndexMap *this,FInstanceIdIndexMap *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    pFVar3 = (this->IndexToIdMap).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->IndexToIdMap).AllocatorInstance.Data = (param_1->IndexToIdMap).AllocatorInstance.Data;
    (param_1->IndexToIdMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->IndexToIdMap).ArrayNum = (param_1->IndexToIdMap).ArrayNum;
    (this->IndexToIdMap).ArrayMax = (param_1->IndexToIdMap).ArrayMax;
    (param_1->IndexToIdMap).ArrayNum = 0;
    (param_1->IndexToIdMap).ArrayMax = 0;
  }
  pTVar1 = &param_1->IdToIndexMap;
  pTVar2 = &this->IdToIndexMap;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IdToIndexMap).ArrayNum = (param_1->IdToIndexMap).ArrayNum;
    (this->IdToIndexMap).ArrayMax = (param_1->IdToIndexMap).ArrayMax;
    (param_1->IdToIndexMap).ArrayNum = 0;
    (param_1->IdToIndexMap).ArrayMax = 0;
  }
  this->NumInstances = param_1->NumInstances;
  return this;
}

