// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FData @ 147433ae0

FData * __thiscall
FAnimExecutionContext::FData::FData(FData *this,FComponentSpacePoseContext *param_1)

{
  this->Context = (FAnimationBaseContext *)param_1;
  this->ContextType = ComponentSpacePose;
  return this;
}

// FData @ 147433b00

FData * __thiscall FAnimExecutionContext::FData::FData(FData *this,FPoseContext *param_1)

{
  this->Context = (FAnimationBaseContext *)param_1;
  this->ContextType = Pose;
  return this;
}

// FData @ 147433b20

FData * __thiscall FAnimExecutionContext::FData::FData(FData *this,FAnimationBaseContext *param_1)

{
  this->Context = param_1;
  this->ContextType = Base;
  return this;
}

// FData @ 147433b40

FData * __thiscall
FAnimExecutionContext::FData::FData(FData *this,FAnimationInitializeContext *param_1)

{
  this->Context = (FAnimationBaseContext *)param_1;
  this->ContextType = Initialize;
  return this;
}

// FData @ 147433b60

FData * __thiscall FAnimExecutionContext::FData::FData(FData *this,FAnimationUpdateContext *param_1)

{
  this->Context = (FAnimationBaseContext *)param_1;
  this->ContextType = Update;
  return this;
}

// Allocate<FVertexFactoryType_const_*_const_&,unsigned_int> @ 1483d16a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<FVertexFactoryType_const_*_const_&,unsigned_int>
          (FData *this,FVertexFactoryType **param_1,uint *param_2,FHashType param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint local_res20 [2];
  FVertexFactoryType *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_38 = *param_1;
    pFVar7 = (this->KeyVals).AllocatorInstance.Data;
    uVar5 = (this->KeyVals).ArrayNum;
    uStack_30 = *param_2;
    if ((pFVar7 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar7 + (longlong)(this->KeyVals).ArrayMax * 0x10))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
    }
    iVar6 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar6 + 1;
    pFVar7 = (this->KeyVals).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    *(FVertexFactoryType **)pFVar7 = local_38;
    *(ulonglong *)(pFVar7 + 8) = CONCAT44(uStack_2c,uStack_30);
    pFVar7 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar7 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
    }
    iVar6 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar7 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar6 + 1;
    *(uint *)(pFVar7 + (longlong)iVar6 * 4) = local_res20[0];
    return uVar5;
  }
  uVar4 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar5 = 0;
  if ((int)uVar4 < (this->KeyVals).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  uVar5 = local_res20[0];
  pFVar7 = (this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
  *(FVertexFactoryType **)pFVar7 = *param_1;
  *(uint *)(pFVar7 + 8) = *param_2;
  uVar8 = 0;
  if ((int)uVar4 < (this->Hashes).ArrayNum) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) = uVar5;
  return uVar4;
}

// Empty @ 1483fdfa0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

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
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) ==
                -0x80000000) && (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Empty @ 1483fe130

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar7 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar7;
    if (uVar7 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage>,int>
                ((TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> *)
                 (this->KeyVals).AllocatorInstance.Data,0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->KeyVals).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pvVar3 = *(void **)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30 + 0x10)
    ;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    uVar7 = uVar7 + 1;
    if (uVar7 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Hashes).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) ==
                -0x80000000) && (uVar7 = uVar7 + 1, uVar7 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Get @ 148404dd0

TKeyValue<FVertexFactoryType_const_*,unsigned_int> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FVertexFactoryType_const_*,unsigned_int> *pTVar4;
  
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
      pTVar4 = (TKeyValue<FVertexFactoryType_const_*,unsigned_int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FVertexFactoryType_const_*,unsigned_int> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
}

// Next @ 148412ed0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
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
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 148412f80

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
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
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

