// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// InternalFindJob<FShaderCompileJob,FShaderCompileJobKey> @ 148509a60

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

FShaderCompileJob * __thiscall
FShaderCompilerJobTable::InternalFindJob<FShaderCompileJob,FShaderCompileJobKey>
          (FShaderCompilerJobTable *this,uint param_1,uint param_2,FShaderCompileJobKey *param_3)

{
  FLockStripeData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FShaderCompileJob *pFVar6;
  uint uVar7;
  uint uVar8;
  FShaderCompileJob *pFVar9;
  
  pFVar6 = (FShaderCompileJob *)0x0;
  uVar7 = 0xffffffff;
  pFVar1 = this->Stripes[0] + (param_1 >> 0x1a);
  uVar8 = (pFVar1->JobHash).Hash[(pFVar1->JobHash).HashMask & param_1];
  pFVar9 = pFVar6;
  if (uVar8 != 0xffffffff) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < (pFVar1->Jobs).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderCompileJob *)(*pcVar3)();
        return pFVar6;
      }
      lVar2 = *(longlong *)((pFVar1->Jobs).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      if ((*(char *)(lVar2 + 0x30) != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Job->Type == JobType::Type",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                             ,0x205,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderCompileJob *)(*pcVar3)();
        return pFVar6;
      }
      if ((((*(uint *)(lVar2 + 0x2c) == param_2) && ((uint)pFVar9 <= (uint)*(byte *)(lVar2 + 0x31)))
          && (*(FVertexFactoryType **)(lVar2 + 0xb8) == param_3->VFType)) &&
         ((*(FShaderType **)(lVar2 + 0xb0) == param_3->ShaderType &&
          (*(int *)(lVar2 + 0xc0) == param_3->PermutationId)))) {
        pFVar9 = (FShaderCompileJob *)(ulonglong)(uint)*(byte *)(lVar2 + 0x31);
        uVar7 = uVar8;
      }
      uVar8 = (pFVar1->JobHash).NextIndex[uVar8];
    } while (uVar8 != 0xffffffff);
    if (uVar7 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar7 < (pFVar1->Jobs).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderCompileJob *)(*pcVar3)();
        return pFVar6;
      }
      pFVar6 = *(FShaderCompileJob **)
                ((pFVar1->Jobs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    }
  }
  return pFVar6;
}

// InternalFindJob<FShaderPipelineCompileJob,FShaderPipelineCompileJobKey> @ 148509c10

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

FShaderPipelineCompileJob * __thiscall
FShaderCompilerJobTable::InternalFindJob<FShaderPipelineCompileJob,FShaderPipelineCompileJobKey>
          (FShaderCompilerJobTable *this,uint param_1,uint param_2,
          FShaderPipelineCompileJobKey *param_3)

{
  FLockStripeData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FShaderPipelineCompileJob *pFVar6;
  uint uVar7;
  uint uVar8;
  FShaderPipelineCompileJob *pFVar9;
  
  pFVar6 = (FShaderPipelineCompileJob *)0x0;
  uVar7 = 0xffffffff;
  pFVar1 = this->Stripes[1] + (param_1 >> 0x1a);
  uVar8 = (pFVar1->JobHash).Hash[(pFVar1->JobHash).HashMask & param_1];
  pFVar9 = pFVar6;
  if (uVar8 != 0xffffffff) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < (pFVar1->Jobs).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderPipelineCompileJob *)(*pcVar3)();
        return pFVar6;
      }
      lVar2 = *(longlong *)((pFVar1->Jobs).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      if ((*(char *)(lVar2 + 0x30) != '\x01') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Job->Type == JobType::Type",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                             ,0x205,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderPipelineCompileJob *)(*pcVar3)();
        return pFVar6;
      }
      if ((((*(uint *)(lVar2 + 0x2c) == param_2) && ((uint)pFVar9 <= (uint)*(byte *)(lVar2 + 0x31)))
          && (*(FShaderPipelineType **)(lVar2 + 0xb0) == param_3->ShaderPipeline)) &&
         ((*(FVertexFactoryType **)(lVar2 + 0xb8) == param_3->VFType &&
          (*(int *)(lVar2 + 0xc0) == param_3->PermutationId)))) {
        pFVar9 = (FShaderPipelineCompileJob *)(ulonglong)(uint)*(byte *)(lVar2 + 0x31);
        uVar7 = uVar8;
      }
      uVar8 = (pFVar1->JobHash).NextIndex[uVar8];
    } while (uVar8 != 0xffffffff);
    if (uVar7 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar7 < (pFVar1->Jobs).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderPipelineCompileJob *)(*pcVar3)();
        return pFVar6;
      }
      pFVar6 = *(FShaderPipelineCompileJob **)
                ((pFVar1->Jobs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    }
  }
  return pFVar6;
}

// ~FShaderCompilerJobTable @ 1485110a0

void __thiscall FShaderCompilerJobTable::~FShaderCompilerJobTable(FShaderCompilerJobTable *this)

{
  FLockStripeData *pFVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  FLockStripeData *pFVar7;
  longlong lVar8;
  
  lVar8 = 0x80;
  pFVar7 = (FLockStripeData *)(this + 1);
  do {
    pFVar1 = pFVar7 + -1;
    lVar8 = lVar8 + -1;
    BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pFVar7[-1].StripeLock);
    if (BVar5 == '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar7[-1].StripeLock);
    }
    if (pFVar7[-1].JobHash.IndexSize != 0) {
      puVar2 = pFVar7[-1].JobHash.Hash;
      pFVar7[-1].JobHash.HashMask = 0;
      pFVar7[-1].JobHash.IndexSize = 0;
      operator_delete__(puVar2);
      puVar2 = pFVar7[-1].JobHash.NextIndex;
      pFVar7[-1].JobHash.Hash = FHashTable::EmptyHash;
      operator_delete__(puVar2);
      pFVar7[-1].JobHash.NextIndex = (uint *)0x0;
    }
    pFVar3 = pFVar7[-1].FreeIndices.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
              ((TRefCountPtr<FShaderCommonCompileJob> *)(pFVar1->Jobs).AllocatorInstance.Data,
               pFVar7[-1].Jobs.ArrayNum);
    pFVar3 = (pFVar1->Jobs).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar7 = pFVar1;
  } while (lVar8 != 0);
  return;
}

// InternalAddJob @ 148531310

void __thiscall
FShaderCompilerJobTable::InternalAddJob
          (FShaderCompilerJobTable *this,FShaderCommonCompileJob *param_1)

{
  FLockStripeData *pFVar1;
  ulonglong uVar2;
  EShaderCompileJobType EVar3;
  FScriptContainerElement *pFVar4;
  FShaderCommonCompileJob *this_00;
  longlong lVar5;
  code *pcVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  FShaderCommonCompileJob *local_28 [2];
  
  EVar3 = param_1->Type;
  uVar9 = param_1->Hash;
  if ((Pipeline < EVar3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint8)JobType < (uint8)NumShaderCompileJobTypes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x239,L"Out of range JobType index %u"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = uVar9 >> 0x1a;
  pFVar1 = this->Stripes[EVar3] + uVar9;
  if (this->Stripes[EVar3][uVar9].FreeIndices.ArrayNum < 1) {
    LOCK();
    (param_1->NumRefs).Counter = (param_1->NumRefs).Counter + 1;
    UNLOCK();
    pFVar4 = (pFVar1->Jobs).AllocatorInstance.Data;
    local_28[0] = param_1;
    if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(pFVar1->Jobs).ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = (pFVar1->Jobs).ArrayNum;
    piVar7 = &(pFVar1->Jobs).ArrayMax;
    if (uVar9 == *piVar7) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar1,piVar7);
    }
    uVar13 = (ulonglong)uVar9;
    (pFVar1->Jobs).ArrayNum = uVar9 + 1;
    pFVar4 = (pFVar1->Jobs).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 * 8) = 0;
    *(FShaderCommonCompileJob **)(pFVar4 + (longlong)(int)uVar9 * 8) = local_28[0];
    local_28[0] = (FShaderCommonCompileJob *)0x0;
  }
  else {
    iVar10 = (pFVar1->FreeIndices).ArrayNum;
    uVar9 = *(uint *)((pFVar1->FreeIndices).AllocatorInstance.Data + (longlong)iVar10 * 4 + -4);
    uVar13 = (ulonglong)(int)uVar9;
    (pFVar1->FreeIndices).ArrayNum = iVar10 + -1;
    uVar12 = 0;
    if ((int)uVar9 < (pFVar1->Jobs).ArrayNum) {
      uVar12 = ~uVar9 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(longlong *)((pFVar1->Jobs).AllocatorInstance.Data + uVar13 * 8) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Stripe.Jobs[JobIndex].IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                           ,0x21c,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = 0;
    if ((int)uVar9 < (pFVar1->Jobs).ArrayNum) {
      uVar12 = ~uVar9 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (pFVar1->Jobs).AllocatorInstance.Data;
    this_00 = *(FShaderCommonCompileJob **)(pFVar4 + uVar13 * 8);
    if (this_00 != param_1) {
      *(FShaderCommonCompileJob **)(pFVar4 + uVar13 * 8) = param_1;
      LOCK();
      (param_1->NumRefs).Counter = (param_1->NumRefs).Counter + 1;
      UNLOCK();
      if (this_00 != (FShaderCommonCompileJob *)0x0) {
        FShaderCommonCompileJob::Release(this_00);
      }
    }
  }
  uVar12 = (uint)uVar13;
  uVar9 = 0;
  if ((int)uVar12 < (pFVar1->Jobs).ArrayNum) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(longlong *)((pFVar1->Jobs).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stripe.Jobs[JobIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x224,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = param_1->Hash;
  if ((pFVar1->JobHash).IndexSize <= uVar12) {
    iVar10 = 1;
    if (uVar12 + 1 != 0) {
      iVar10 = uVar12 + 1;
    }
    uVar2 = (ulonglong)(iVar10 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar5 & 0x1f);
    if (uVar11 < 0x20) {
      uVar11 = 0x20;
    }
    FHashTable::Resize(&pFVar1->JobHash,uVar11);
  }
  uVar9 = (pFVar1->JobHash).HashMask & uVar9;
  (pFVar1->JobHash).NextIndex[uVar13 & 0xffffffff] = (pFVar1->JobHash).Hash[uVar9];
  (pFVar1->JobHash).Hash[uVar9] = uVar12;
  if ((param_1->Priority == None) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InJob->Priority != EShaderCompileJobPriority::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x227,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->PendingPriority != None) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InJob->PendingPriority == EShaderCompileJobPriority::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x228,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->JobIndex != -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InJob->JobIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x229,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  param_1->JobIndex = uVar12;
  return;
}

// RemoveJob @ 148540fd0

void __thiscall
FShaderCompilerJobTable::RemoveJob(FShaderCompilerJobTable *this,FShaderCommonCompileJob *param_1)

{
  int *piVar1;
  FLockStripeData *pFVar2;
  EShaderCompileJobType EVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  FShaderCommonCompileJob *this_00;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint local_18 [4];
  
  EVar3 = param_1->Type;
  uVar11 = param_1->Hash;
  if ((Pipeline < EVar3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint8)JobType < (uint8)NumShaderCompileJobTypes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x239,L"Out of range JobType index %u"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = this->Stripes[EVar3] + (uVar11 >> 0x1a);
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar2->StripeLock);
  local_18[0] = param_1->JobIndex;
  if ((local_18[0] == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("JobIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x1f0,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar12 = (longlong)(int)local_18[0];
  uVar11 = 0;
  if ((int)local_18[0] < (pFVar2->Jobs).ArrayNum) {
    uVar11 = ~local_18[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(FShaderCommonCompileJob **)((pFVar2->Jobs).AllocatorInstance.Data + lVar12 * 8) != param_1)
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stripe.Jobs[JobIndex] == InJob",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                            ,0x1f1,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->PendingPriority != None) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InJob->PendingPriority == EShaderCompileJobPriority::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x1f2,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  param_1->JobIndex = -1;
  if (local_18[0] < (pFVar2->JobHash).IndexSize) {
    uVar7 = (pFVar2->JobHash).HashMask & param_1->Hash;
    puVar4 = (pFVar2->JobHash).Hash;
    uVar11 = puVar4[uVar7];
    if (uVar11 == local_18[0]) {
      puVar4[uVar7] = (pFVar2->JobHash).NextIndex[local_18[0]];
    }
    else if (uVar11 != 0xffffffff) {
      puVar4 = (pFVar2->JobHash).NextIndex;
      do {
        uVar10 = (ulonglong)uVar11;
        uVar11 = puVar4[uVar11];
        if (uVar11 == local_18[0]) {
          puVar4[uVar10] = puVar4[local_18[0]];
          break;
        }
      } while (uVar11 != 0xffffffff);
    }
  }
  pFVar5 = (pFVar2->FreeIndices).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar5 + (longlong)(pFVar2->FreeIndices).ArrayMax * 4))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (pFVar2->FreeIndices).ArrayNum;
  piVar1 = &(pFVar2->FreeIndices).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->FreeIndices).AllocatorInstance,piVar1);
  }
  (pFVar2->FreeIndices).ArrayNum = iVar9 + 1;
  *(uint *)((pFVar2->FreeIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_18[0];
  lVar12 = (longlong)(int)local_18[0];
  uVar11 = 0;
  if ((int)local_18[0] < (pFVar2->Jobs).ArrayNum) {
    uVar11 = ~local_18[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (pFVar2->Jobs).AllocatorInstance.Data;
  this_00 = *(FShaderCommonCompileJob **)(pFVar5 + lVar12 * 8);
  if (this_00 != (FShaderCommonCompileJob *)0x0) {
    *(undefined8 *)(pFVar5 + lVar12 * 8) = 0;
    FShaderCommonCompileJob::Release(this_00);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->StripeLock);
  return;
}

