// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// GetPosition @ 148fb5ce0

TVector<float> * __thiscall
FSkeletalMeshSkinningData::GetPosition
          (FSkeletalMeshSkinningData *this,TVector<float> *__return_storage_ptr__,int param_1,
          int param_2)

{
  longlong lVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TVector<float> *pTVar6;
  uint uVar7;
  
  if ((param_1 < 0) || ((this->LODData).ArrayNum <= param_1)) {
    pTVar6 = &UE::Math::TVector<float>::ZeroVector;
  }
  else {
    uVar7 = 0;
    if (param_1 < (this->LODData).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TVector<float> *)(*pcVar4)();
        return pTVar6;
      }
    }
    lVar1 = (longlong)this->CurrIndex * 0x10 + (longlong)param_1 * 0x48;
    pFVar3 = (this->LODData).AllocatorInstance.Data;
    uVar7 = 0;
    if (param_2 < *(int *)(pFVar3 + lVar1 + 0x10)) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TVector<float> *)(*pcVar4)();
        return pTVar6;
      }
    }
    pTVar6 = (TVector<float> *)(*(longlong *)(pFVar3 + lVar1 + 8) + (longlong)param_2 * 0xc);
  }
  fVar2 = (pTVar6->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar6->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// GetPreviousPosition @ 148fb5e10

TVector<float> * __thiscall
FSkeletalMeshSkinningData::GetPreviousPosition
          (FSkeletalMeshSkinningData *this,TVector<float> *__return_storage_ptr__,int param_1,
          int param_2)

{
  longlong lVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TVector<float> *pTVar6;
  uint uVar7;
  
  if ((param_1 < 0) || ((this->LODData).ArrayNum <= param_1)) {
    pTVar6 = &UE::Math::TVector<float>::ZeroVector;
  }
  else {
    uVar7 = 0;
    if (param_1 < (this->LODData).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TVector<float> *)(*pcVar4)();
        return pTVar6;
      }
    }
    lVar1 = ((longlong)this->CurrIndex ^ 1U) * 0x10 + (longlong)param_1 * 0x48;
    pFVar3 = (this->LODData).AllocatorInstance.Data;
    uVar7 = 0;
    if (param_2 < *(int *)(pFVar3 + lVar1 + 0x10)) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TVector<float> *)(*pcVar4)();
        return pTVar6;
      }
    }
    pTVar6 = (TVector<float> *)(*(longlong *)(pFVar3 + lVar1 + 8) + (longlong)param_2 * 0xc);
  }
  fVar2 = (pTVar6->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar6->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// GetPreviousTangentBasis @ 148fb5f40

void __thiscall
FSkeletalMeshSkinningData::GetPreviousTangentBasis
          (FSkeletalMeshSkinningData *this,int param_1,int param_2,TVector<float> *param_3,
          TVector<float> *param_4,TVector<float> *param_5)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  lVar9 = (longlong)param_1;
  uVar7 = 0;
  if ((param_1 < 0) || ((this->LODData).ArrayNum <= param_1)) {
    bVar5 = false;
    local_88 = 0x3f800000;
    local_80 = 0;
    puVar8 = &local_88;
  }
  else {
    bVar5 = true;
    uVar11 = 0;
    if (param_1 < (this->LODData).ArrayNum) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = param_2 * 3;
    lVar12 = ((longlong)this->CurrIndex ^ 1U) * 0x10 + lVar9 * 0x48;
    pFVar2 = (this->LODData).AllocatorInstance.Data;
    uVar6 = uVar7;
    if ((int)uVar11 < *(int *)(pFVar2 + lVar12 + 0x30)) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar12 = *(longlong *)(pFVar2 + lVar12 + 0x28);
    local_5c = *(undefined4 *)(lVar12 + 8 + (longlong)(int)uVar11 * 0xc);
    puVar8 = &local_64;
    local_64 = *(undefined8 *)(lVar12 + (longlong)(int)uVar11 * 0xc);
  }
  iVar13 = param_2 * 3;
  fVar1 = *(float *)(puVar8 + 1);
  *(undefined8 *)&param_3->field0_0x0 = *puVar8;
  (param_3->field0_0x0)._s_0.Z = fVar1;
  if (bVar5) {
    uVar11 = uVar7;
    if (param_1 < (this->LODData).ArrayNum) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->LODData).AllocatorInstance.Data;
    lVar12 = ((longlong)this->CurrIndex ^ 1U) * 0x10 + lVar9 * 0x48;
    uVar11 = uVar7;
    if ((int)(iVar13 + 1U) < *(int *)(pFVar2 + lVar12 + 0x30)) {
      uVar11 = ~(iVar13 + 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar12 = *(longlong *)(pFVar2 + lVar12 + 0x28);
    local_50 = *(undefined4 *)(lVar12 + 8 + (longlong)(iVar13 + 1) * 0xc);
    puVar8 = &local_58;
    local_58 = *(undefined8 *)(lVar12 + (longlong)(iVar13 + 1) * 0xc);
  }
  else {
    local_7c = 0;
    puVar8 = (undefined8 *)&local_7c;
    local_78 = 0x3f800000;
  }
  fVar1 = *(float *)(puVar8 + 1);
  *(undefined8 *)&param_4->field0_0x0 = *puVar8;
  (param_4->field0_0x0)._s_0.Z = fVar1;
  if (bVar5) {
    if (param_1 < (this->LODData).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = iVar13 + 2;
    uVar10 = (longlong)this->CurrIndex ^ 1;
    pFVar2 = (this->LODData).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar11 < *(int *)(pFVar2 + lVar9 * 0x48 + uVar10 * 0x10 + 0x30)) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar9 = *(longlong *)(pFVar2 + lVar9 * 0x48 + uVar10 * 0x10 + 0x28);
    local_44 = *(undefined4 *)(lVar9 + 8 + (longlong)(int)uVar11 * 0xc);
    puVar8 = &local_4c;
    local_4c = *(undefined8 *)(lVar9 + (longlong)(int)uVar11 * 0xc);
  }
  else {
    local_70 = 0;
    puVar8 = &local_70;
    local_68 = 0x3f800000;
  }
  fVar1 = *(float *)(puVar8 + 1);
  *(undefined8 *)&param_5->field0_0x0 = *puVar8;
  (param_5->field0_0x0)._s_0.Z = fVar1;
  return;
}

// GetTangentBasis @ 148fb8350

void __thiscall
FSkeletalMeshSkinningData::GetTangentBasis
          (FSkeletalMeshSkinningData *this,int param_1,int param_2,TVector<float> *param_3,
          TVector<float> *param_4,TVector<float> *param_5)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  lVar9 = (longlong)param_1;
  uVar6 = 0;
  if ((param_1 < 0) || ((this->LODData).ArrayNum <= param_1)) {
    bVar5 = false;
    local_88 = 0x3f800000;
    local_80 = 0;
    puVar8 = &local_88;
  }
  else {
    bVar5 = true;
    uVar10 = 0;
    if (param_1 < (this->LODData).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if (uVar10 == 0) {
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
    uVar10 = param_2 * 3;
    lVar7 = (longlong)this->CurrIndex * 0x10 + lVar9 * 0x48;
    pFVar2 = (this->LODData).AllocatorInstance.Data;
    uVar11 = uVar6;
    if ((int)uVar10 < *(int *)(pFVar2 + lVar7 + 0x30)) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if (uVar11 == 0) {
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
    lVar7 = *(longlong *)(pFVar2 + lVar7 + 0x28);
    local_5c = *(undefined4 *)(lVar7 + 8 + (longlong)(int)uVar10 * 0xc);
    puVar8 = &local_64;
    local_64 = *(undefined8 *)(lVar7 + (longlong)(int)uVar10 * 0xc);
  }
  fVar1 = *(float *)(puVar8 + 1);
  *(undefined8 *)&param_3->field0_0x0 = *puVar8;
  (param_3->field0_0x0)._s_0.Z = fVar1;
  if (bVar5) {
    uVar10 = uVar6;
    if (param_1 < (this->LODData).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if (uVar10 == 0) {
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
    pFVar2 = (this->LODData).AllocatorInstance.Data;
    uVar11 = param_2 * 3 + 1;
    lVar7 = (longlong)this->CurrIndex * 0x10 + lVar9 * 0x48;
    uVar10 = uVar6;
    if ((int)uVar11 < *(int *)(pFVar2 + lVar7 + 0x30)) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
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
    lVar7 = *(longlong *)(pFVar2 + lVar7 + 0x28);
    local_50 = *(undefined4 *)(lVar7 + 8 + (longlong)(int)uVar11 * 0xc);
    puVar8 = &local_58;
    local_58 = *(undefined8 *)(lVar7 + (longlong)(int)uVar11 * 0xc);
  }
  else {
    local_7c = 0;
    puVar8 = (undefined8 *)&local_7c;
    local_78 = 0x3f800000;
  }
  fVar1 = *(float *)(puVar8 + 1);
  *(undefined8 *)&param_4->field0_0x0 = *puVar8;
  (param_4->field0_0x0)._s_0.Z = fVar1;
  if (bVar5) {
    if (param_1 < (this->LODData).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar10 = param_2 * 3 + 2;
    pFVar2 = (this->LODData).AllocatorInstance.Data;
    lVar9 = (longlong)this->CurrIndex * 0x10 + lVar9 * 0x48;
    uVar6 = 0;
    if ((int)uVar10 < *(int *)(pFVar2 + lVar9 + 0x30)) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar9 = *(longlong *)(pFVar2 + lVar9 + 0x28);
    local_44 = *(undefined4 *)(lVar9 + 8 + (longlong)(int)uVar10 * 0xc);
    puVar8 = &local_4c;
    local_4c = *(undefined8 *)(lVar9 + (longlong)(int)uVar10 * 0xc);
  }
  else {
    local_70 = 0;
    puVar8 = &local_70;
    local_68 = 0x3f800000;
  }
  fVar1 = *(float *)(puVar8 + 1);
  *(undefined8 *)&param_5->field0_0x0 = *puVar8;
  (param_5->field0_0x0)._s_0.Z = fVar1;
  return;
}

// ~FSkeletalMeshSkinningData @ 149215b70

void __thiscall
FSkeletalMeshSkinningData::~FSkeletalMeshSkinningData(FSkeletalMeshSkinningData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  longlong lVar5;
  TArray<FSkeletalMeshSkinningData::FLODData,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  pTVar6 = &this->LODData;
  DestructItems<FSkeletalMeshSkinningData::FLODData,int>
            ((FLODData *)(pTVar6->AllocatorInstance).Data,(this->LODData).ArrayNum);
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar5 = 2;
  lVar7 = 2;
  do {
    pFVar1 = (((TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(pTVar6 + -1))->
             AllocatorInstance).Data;
    pTVar6 = pTVar6 + -1;
    lVar7 = lVar7 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar7 != 0);
  pTVar8 = this->ComponentTransforms;
  do {
    pFVar1 = (((TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)(pTVar8 + -1))->
             AllocatorInstance).Data;
    pTVar8 = pTVar8 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar5 != 0);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  }
  return;
}

// CurrSkinnedPositions @ 14922a790

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshSkinningData::CurrSkinnedPositions(FSkeletalMeshSkinningData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
         ((this->LODData).AllocatorInstance.Data +
         (longlong)this->CurrIndex * 0x10 + (longlong)param_1 * 0x48 + 8);
}

// CurrSkinnedTangentBasis @ 14922a820

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshSkinningData::CurrSkinnedTangentBasis(FSkeletalMeshSkinningData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
         ((this->LODData).AllocatorInstance.Data +
         (longlong)this->CurrIndex * 0x10 + (longlong)param_1 * 0x48 + 0x28);
}

// ForceDataRefresh @ 149231140

void __thiscall FSkeletalMeshSkinningData::ForceDataRefresh(FSkeletalMeshSkinningData *this)

{
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  this->bForceDataRefresh = true;
                    /* WARNING: Could not recover jumptable at 0x000149231169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  return;
}

// IsUsed @ 149242df0

bool __thiscall FSkeletalMeshSkinningData::IsUsed(FSkeletalMeshSkinningData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (this->BoneMatrixUsers < 1) {
    iVar2 = (this->LODData).ArrayNum;
    pFVar3 = (this->LODData).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((this->LODData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSkeletalMeshSkinningData::FLODData_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return false;
      }
      if (0 < *(int *)pFVar3) break;
      pFVar3 = pFVar3 + 0x48;
    }
  }
  return true;
}

// PrevSkinnedPositions @ 149247370

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshSkinningData::PrevSkinnedPositions(FSkeletalMeshSkinningData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
         ((this->LODData).AllocatorInstance.Data +
         ((longlong)this->CurrIndex ^ 1U) * 0x10 + (longlong)param_1 * 0x48 + 8);
}

// PrevSkinnedTangentBasis @ 149247400

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshSkinningData::PrevSkinnedTangentBasis(FSkeletalMeshSkinningData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
         ((this->LODData).AllocatorInstance.Data +
         ((longlong)this->CurrIndex ^ 1U) * 0x10 + (longlong)param_1 * 0x48 + 0x28);
}

// RegisterUser @ 1492489c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshSkinningData::RegisterUser
          (FSkeletalMeshSkinningData *this,FSkeletalMeshSkinningDataUsage param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar8;
  longlong lVar9;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  FSkinWeightVertexBuffer *pFVar12;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uStackX_14;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->MeshComp).WeakPtr);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                       ,0x135,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  uVar16 = 0;
  uVar6 = 1;
  if (pUVar8 != (USkeletalMesh *)0x0) {
    uVar6 = (**(code **)(pUVar8->_padding_ + 0x3d0))(pUVar8);
    uVar16 = param_1.LODIndex;
    if (uVar16 == 0xffffffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                         ,0x13f,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((int)uVar6 <= (int)uVar16) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODIndex < NumLODInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                         ,0x140,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar14 = (this->LODData).ArrayNum;
  piVar1 = &(this->LODData).ArrayNum;
  if (iVar14 < (int)uVar6) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,uVar6 - iVar14,&(this->LODData).AllocatorInstance,piVar1,
                       &(this->LODData).ArrayMax);
    DefaultConstructItems<FSkeletalMeshSkinningData::FLODData,int>
              ((this->LODData).AllocatorInstance.Data + (longlong)iVar7 * 0x48,uVar6 - iVar14);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar14) {
      uVar17 = iVar14 - uVar6;
      if ((int)(uVar17 | uVar6) < 0) {
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
      if (uVar17 != 0) {
        TArray<FSkeletalMeshSkinningData::FLODData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->LODData,uVar6,uVar17);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&(this->LODData).AllocatorInstance,*piVar1,&(this->LODData).ArrayMax);
      }
    }
  }
  if ((param_1.bUsesBoneMatrices != 0) || (param_1.bUsesPreSkinnedVerts != 0)) {
    this->BoneMatrixUsers = this->BoneMatrixUsers + 1;
  }
  uVar6 = 0;
  if ((int)uVar16 < *piVar1) {
    uVar6 = ~uVar16 >> 0x1f;
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
  if (param_1.bUsesPreSkinnedVerts != 0) {
    pFVar2 = (this->LODData).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x48;
    *(int *)pFVar2 = *(int *)pFVar2 + 1;
    this->TotalPreSkinnedVertsUsers = this->TotalPreSkinnedVertsUsers + 1;
  }
  if (param_2) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                         ,0x153,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pUVar8 == (USkeletalMesh *)0x0) {
      iVar14 = 0;
    }
    else {
      lVar9 = (**(code **)(pUVar8->_padding_ + 0x380))(pUVar8);
      iVar14 = *(int *)(lVar9 + 8);
    }
    if ((this->BoneRefToLocals[this->CurrIndex].ArrayNum != iVar14) ||
       (this->ComponentTransforms[this->CurrIndex].ArrayNum != iVar14)) {
      UpdateBoneTransforms(this);
    }
    uVar15 = (ulonglong)this->CurrIndex;
    if (this->BoneRefToLocals[uVar15 ^ 1].ArrayNum != this->BoneRefToLocals[uVar15].ArrayNum) {
      TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::operator=
                (this->BoneRefToLocals + (uVar15 ^ 1),this->BoneRefToLocals + uVar15);
    }
    uVar15 = (ulonglong)this->CurrIndex;
    if (this->ComponentTransforms[uVar15 ^ 1].ArrayNum != this->ComponentTransforms[uVar15].ArrayNum
       ) {
      TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::operator=
                (this->ComponentTransforms + (uVar15 ^ 1),this->ComponentTransforms + uVar15);
    }
    if (param_1.bUsesPreSkinnedVerts != 0) {
      pTVar10 = CurrSkinnedPositions(this,uVar16);
      if ((pTVar10->ArrayNum == 0) && (pUVar8 != (USkeletalMesh *)0x0)) {
        lVar9 = (**(code **)(pUVar8->_padding_ + 0x330))(pUVar8,uVar16);
        if ((*(byte *)(lVar9 + 0xd0) & 4) != 0) {
          plVar11 = (longlong *)(**(code **)(pUVar8->_padding_ + 0x398))(pUVar8);
          uVar6 = 0;
          if ((int)uVar16 < (int)plVar11[1]) {
            uVar6 = ~uVar16 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar3 = *(FSkeletalMeshLODRenderData **)(*plVar11 + (longlong)(int)uVar16 * 8);
          pFVar12 = USkinnedMeshComponent::GetSkinWeightBuffer
                              ((USkinnedMeshComponent *)this_00,uVar16);
          iVar14 = this->CurrIndex;
          pTVar10 = CurrSkinnedPositions(this,uVar16);
          USkeletalMeshComponent::ComputeSkinnedPositions
                    (this_00,pTVar10,this->BoneRefToLocals + iVar14,pFVar3,pFVar12);
          iVar14 = this->CurrIndex;
          pTVar10 = CurrSkinnedTangentBasis(this,uVar16);
          USkeletalMeshComponent::ComputeSkinnedTangentBasis
                    (this_00,pTVar10,this->BoneRefToLocals + iVar14,pFVar3,pFVar12);
          pTVar10 = PrevSkinnedPositions(this,uVar16);
          iVar14 = pTVar10->ArrayNum;
          pTVar10 = CurrSkinnedPositions(this,uVar16);
          if (iVar14 != pTVar10->ArrayNum) {
            pTVar10 = CurrSkinnedPositions(this,uVar16);
            pTVar13 = PrevSkinnedPositions(this,uVar16);
            TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=(pTVar13,pTVar10)
            ;
          }
          pTVar10 = CurrSkinnedTangentBasis(this,uVar16);
          iVar14 = pTVar10->ArrayNum;
          pTVar10 = PrevSkinnedTangentBasis(this,uVar16);
          if (pTVar10->ArrayNum != iVar14) {
            pTVar10 = CurrSkinnedTangentBasis(this,uVar16);
            pTVar13 = PrevSkinnedTangentBasis(this,uVar16);
            TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=(pTVar13,pTVar10)
            ;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149248ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  return;
}

// Tick @ 149250f10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshSkinningData::Tick(FSkeletalMeshSkinningData *this,float param_1,bool param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  FSkinWeightVertexBuffer *pFVar12;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->MeshComp).WeakPtr);
  if ((this_00 == (USkeletalMeshComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkelComp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                         ,0x1fa,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  this->CurrIndex = this->CurrIndex ^ 1;
  this->DeltaSeconds = param_1;
  if (0 < this->BoneMatrixUsers) {
    UpdateBoneTransforms(this);
  }
  uVar15 = (ulonglong)this->CurrIndex;
  if ((this->BoneRefToLocals[uVar15 ^ 1].ArrayNum != this->BoneRefToLocals[uVar15].ArrayNum) ||
     (this->bForceDataRefresh != false)) {
    TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::operator=
              (this->BoneRefToLocals + (uVar15 ^ 1),this->BoneRefToLocals + uVar15);
  }
  uVar15 = (ulonglong)this->CurrIndex;
  if ((this->ComponentTransforms[uVar15 ^ 1].ArrayNum != this->ComponentTransforms[uVar15].ArrayNum)
     || (this->bForceDataRefresh != false)) {
    TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::operator=
              (this->ComponentTransforms + (uVar15 ^ 1),this->ComponentTransforms + uVar15);
  }
  if ((param_2) &&
     (pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00), pUVar9 != (USkeletalMesh *)0x0
     )) {
    pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    plVar10 = (longlong *)(**(code **)(pUVar9->_padding_ + 0x398))(pUVar9);
    if ((plVar10 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RenderData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                           ,0x212,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar2 = *(byte *)((longlong)plVar10 + 0x1c);
    uVar15 = (ulonglong)bVar2;
    if ((int)(uint)bVar2 < (this->LODData).ArrayNum) {
      uVar18 = (ulonglong)bVar2;
      lVar16 = uVar15 * 0x48;
      do {
        uVar17 = (uint)uVar15;
        uVar8 = 0;
        if ((int)uVar17 < (this->LODData).ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((0 < *(int *)((this->LODData).AllocatorInstance.Data + lVar16)) &&
           (lVar11 = (**(code **)(pUVar9->_padding_ + 0x328))(pUVar9,uVar15),
           (*(byte *)(lVar11 + 0xd0) & 4) != 0)) {
          uVar8 = 0;
          if ((int)uVar17 < (int)plVar10[1]) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar4 = *(FSkeletalMeshLODRenderData **)(*plVar10 + uVar18 * 8);
          if (pFVar4 != (FSkeletalMeshLODRenderData *)0x0) {
            LOCK();
            *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
            UNLOCK();
          }
          pFVar12 = USkinnedMeshComponent::GetSkinWeightBuffer
                              ((USkinnedMeshComponent *)this_00,uVar17);
          iVar3 = this->CurrIndex;
          pTVar13 = CurrSkinnedPositions(this,uVar17);
          USkeletalMeshComponent::ComputeSkinnedPositions
                    (this_00,pTVar13,this->BoneRefToLocals + iVar3,pFVar4,pFVar12);
          iVar3 = this->CurrIndex;
          pTVar13 = CurrSkinnedTangentBasis(this,uVar17);
          USkeletalMeshComponent::ComputeSkinnedTangentBasis
                    (this_00,pTVar13,this->BoneRefToLocals + iVar3,pFVar4,pFVar12);
          pTVar13 = PrevSkinnedPositions(this,uVar17);
          iVar3 = pTVar13->ArrayNum;
          pTVar13 = CurrSkinnedPositions(this,uVar17);
          if (iVar3 != pTVar13->ArrayNum) {
            pTVar13 = CurrSkinnedPositions(this,uVar17);
            pTVar14 = PrevSkinnedPositions(this,uVar17);
            TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=(pTVar14,pTVar13)
            ;
          }
          pTVar13 = PrevSkinnedTangentBasis(this,uVar17);
          iVar3 = pTVar13->ArrayNum;
          pTVar13 = CurrSkinnedTangentBasis(this,uVar17);
          if (iVar3 != pTVar13->ArrayNum) {
            pTVar13 = CurrSkinnedTangentBasis(this,uVar17);
            pTVar14 = PrevSkinnedTangentBasis(this,uVar17);
            TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=(pTVar14,pTVar13)
            ;
          }
          if (pFVar4 != (FSkeletalMeshLODRenderData *)0x0) {
            plVar1 = &pFVar4->_padding_;
            LOCK();
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar11 == 1) && (plVar1 != (longlong *)0x0)) {
              (**(code **)pFVar4->_padding_)(pFVar4,1);
            }
          }
        }
        uVar15 = (ulonglong)(uVar17 + 1);
        uVar18 = uVar18 + 1;
        lVar16 = lVar16 + 0x48;
      } while ((int)(uVar17 + 1) < (this->LODData).ArrayNum);
    }
  }
  this->bForceDataRefresh = false;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  return true;
}

// UnregisterUser @ 149252780

void __thiscall
FSkeletalMeshSkinningData::UnregisterUser
          (FSkeletalMeshSkinningData *this,FSkeletalMeshSkinningDataUsage param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uStackX_14;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  if ((param_1.bUsesBoneMatrices != 0) || (param_1.bUsesPreSkinnedVerts != 0)) {
    this->BoneMatrixUsers = this->BoneMatrixUsers + -1;
  }
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->MeshComp).WeakPtr);
  uVar5 = 0;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    uVar5 = 0;
    if (pUVar4 != (USkeletalMesh *)0x0) {
      uVar5 = param_1.LODIndex;
    }
  }
  if (((param_1.bUsesPreSkinnedVerts != 0) &&
      (this->TotalPreSkinnedVertsUsers = this->TotalPreSkinnedVertsUsers + -1, -1 < (int)uVar5)) &&
     ((int)uVar5 < (this->LODData).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar5 < (this->LODData).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->LODData).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x48;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014925286c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RWGuard);
  return;
}

// UpdateBoneTransforms @ 149252880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkeletalMeshSkinningData::UpdateBoneTransforms(FSkeletalMeshSkinningData *this)

{
  int *piVar1;
  int *piVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  bool bVar29;
  int iVar30;
  uint uVar31;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar32;
  UObject *pUVar33;
  longlong lVar34;
  FReferenceSkeleton *this_01;
  longlong *plVar35;
  FScriptContainerElement *pFVar36;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar37;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  longlong lVar40;
  uint uVar41;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar42;
  ulonglong uVar43;
  uint uVar44;
  uint uVar45;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *this_02;
  ulonglong uVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float afVar64 [4];
  undefined1 auStackY_208 [32];
  longlong local_1c8;
  longlong local_1a0;
  longlong local_198;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> local_170;
  __m128 local_158;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  __m128 local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  TMatrix<float> local_f8;
  TMatrix<float> local_b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->MeshComp).WeakPtr);
  if ((this_00 == (USkeletalMeshComponent *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("SkelComp",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x1ad,L""), bVar29)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pUVar32 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  if (pUVar32 != (USkeletalMesh *)0x0) {
    pTVar42 = this->BoneRefToLocals + this->CurrIndex;
    this_02 = this->ComponentTransforms + this->CurrIndex;
    pUVar33 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->_padding_);
    if (pUVar33 == (UObject *)0x0) {
      USkinnedMeshComponent::CacheRefToLocalMatrices((USkinnedMeshComponent *)this_00,pTVar42);
      pTVar37 = UE::LWC::
                ConvertArrayType<UE::Math::TTransform<float>,UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                          (&local_170,
                           (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                           (&this_00->_padding_ + (longlong)(int)this_00->_padding_ * 2));
      if (this_02 != pTVar37) {
        pFVar39 = (this_02->AllocatorInstance).Data;
        if (pFVar39 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar39);
        }
        (this_02->AllocatorInstance).Data = (pTVar37->AllocatorInstance).Data;
        (pTVar37->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        this_02->ArrayNum = pTVar37->ArrayNum;
        this_02->ArrayMax = pTVar37->ArrayMax;
        pTVar37->ArrayNum = 0;
        pTVar37->ArrayMax = 0;
      }
      if (local_170.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_170.AllocatorInstance.Data);
      return;
    }
    uVar8 = (uint)this_00->_padding_;
    if (uVar8 == 0) {
      lVar34 = (**(code **)(pUVar32->_padding_ + 0x318))(pUVar32);
      uVar8 = *(uint *)(lVar34 + 0x28);
      if (-1 < (int)uVar8) {
        piVar1 = &pTVar42->ArrayMax;
        pTVar42->ArrayNum = 0;
        if (*piVar1 != uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,uVar8,&pTVar42->AllocatorInstance,0,piVar1);
        }
        lVar34 = (**(code **)(pUVar32->_padding_ + 0x318))(pUVar32);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,*(int *)(lVar34 + 0x28),&pTVar42->AllocatorInstance,&pTVar42->ArrayNum,
                   piVar1);
        lVar34 = (**(code **)(pUVar32->_padding_ + 0x318))(pUVar32);
        TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::Empty
                  (this_02,*(int *)(lVar34 + 0x28));
        lVar34 = (**(code **)(pUVar32->_padding_ + 0x318))(pUVar32);
        TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::AddDefaulted
                  (this_02,*(int *)(lVar34 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    iVar30 = pTVar42->ArrayNum;
    piVar1 = &pTVar42->ArrayNum;
    if (iVar30 < (int)uVar8) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,uVar8 - iVar30,&pTVar42->AllocatorInstance,piVar1,&pTVar42->ArrayMax);
    }
    else {
      if ((int)uVar8 < 0) goto LAB_149253414;
      if ((int)uVar8 < iVar30) {
        uVar44 = iVar30 - uVar8;
        if (((int)(uVar8 | uVar44) < 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar44 != 0) {
          pFVar39 = (pTVar42->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x40;
          iVar30 = (*piVar1 - uVar44) - uVar8;
          if (iVar30 != 0) {
            memmove(pFVar39,pFVar39 + (longlong)(int)uVar44 * 0x40,(longlong)iVar30 << 6);
          }
          *piVar1 = *piVar1 - uVar44;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,&pTVar42->AllocatorInstance,*piVar1,&pTVar42->ArrayMax);
        }
      }
    }
    iVar30 = this_02->ArrayNum;
    piVar2 = &this_02->ArrayNum;
    if (iVar30 < (int)uVar8) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,uVar8 - iVar30,&this_02->AllocatorInstance,piVar2,&this_02->ArrayMax);
    }
    else {
      if ((int)uVar8 < 0) {
LAB_149253414:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar30) {
        uVar44 = iVar30 - uVar8;
        if (((int)(uVar8 | uVar44) < 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar44 != 0) {
          pFVar39 = (this_02->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x30;
          iVar30 = (*piVar2 - uVar44) - uVar8;
          if (iVar30 != 0) {
            memmove(pFVar39,pFVar39 + (longlong)(int)uVar44 * 0x30,(longlong)iVar30 * 0x30);
          }
          *piVar2 = *piVar2 - uVar44;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,&this_02->AllocatorInstance,*piVar2,&this_02->ArrayMax);
        }
      }
    }
    iVar30 = *(int *)&pUVar33[0x28].field_0x20;
    uVar43 = 0;
    if (0 < (int)uVar8) {
      local_198 = 0;
      local_1c8 = 0;
      local_1a0 = 0;
      uVar46 = uVar43;
      do {
        uVar41 = (uint)uVar43;
        uVar44 = 0;
        if (((int)uVar41 < 0) || ((int)this_00->_padding_ <= (int)uVar41)) {
LAB_149252dbe:
          this_01 = (FReferenceSkeleton *)(**(code **)(pUVar32->_padding_ + 0x318))(pUVar32);
          uVar31 = FReferenceSkeleton::GetParentIndex(this_01,uVar41);
          lVar34 = (**(code **)(pUVar32->_padding_ + 0x318))(pUVar32);
          uVar45 = ~uVar41 >> 0x1f;
          uVar38 = uVar44;
          if ((int)uVar41 < *(int *)(lVar34 + 0x38)) {
            uVar38 = uVar45;
          }
          if ((uVar38 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar34 = *(longlong *)(lVar34 + 0x30);
          pdVar3 = (double *)(lVar34 + 0x30 + local_1a0);
          pdVar4 = (double *)(lVar34 + 0x20 + local_1a0);
          pdVar5 = (double *)(lVar34 + 0x50 + local_1a0);
          pdVar6 = (double *)(lVar34 + 0x40 + local_1a0);
          pdVar7 = (double *)(lVar34 + 0x10 + local_1a0);
          uVar47 = (undefined4)*pdVar7;
          uVar50 = (undefined4)pdVar7[1];
          uVar58 = (undefined4)*(double *)(lVar34 + local_1a0);
          uVar59 = (undefined4)((double *)(lVar34 + local_1a0))[1];
          fVar48 = (float)*pdVar3;
          fVar51 = (float)pdVar3[1];
          fVar60 = (float)*pdVar4;
          fVar61 = (float)pdVar4[1];
          fVar62 = (float)*pdVar6;
          fVar63 = (float)pdVar6[1];
          fVar49 = (float)*pdVar5;
          fVar52 = (float)pdVar5[1];
          if ((-1 < (int)uVar31) && ((int)uVar31 < (int)uVar41)) {
            uVar38 = uVar44;
            if ((int)uVar31 < *piVar2) {
              uVar38 = ~uVar31 >> 0x1f;
            }
            local_128.m128_f32[0] = (float)uVar58;
            local_128.m128_f32[1] = (float)uVar59;
            local_128.m128_f32[2] = (float)uVar47;
            local_128.m128_f32[3] = (float)uVar50;
            local_118 = fVar60;
            fStack_114 = fVar61;
            fStack_110 = fVar48;
            fStack_10c = fVar51;
            local_108 = fVar62;
            fStack_104 = fVar63;
            fStack_100 = fVar49;
            fStack_fc = fVar52;
            if ((uVar38 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_158 = GlobalVectorConstants::Float0001;
            _local_148 = GlobalVectorConstants::FloatZero;
            _local_138 = GlobalVectorConstants::Float1110;
            UE::Math::TTransform<float>::Multiply
                      ((TTransform<float> *)&local_158,(TTransform<float> *)&local_128,
                       (TTransform<float> *)
                       ((this_02->AllocatorInstance).Data + (longlong)(int)uVar31 * 0x30));
            uVar58 = local_158.m128_i32[0];
            uVar59 = local_158.m128_i32[1];
            uVar47 = local_158.m128_i32[2];
            uVar50 = local_158.m128_i32[3];
            fVar60 = (float)local_148._0_4_;
            fVar61 = (float)local_148._4_4_;
            fVar48 = fStack_140;
            fVar51 = fStack_13c;
            fVar62 = (float)local_138._0_4_;
            fVar63 = (float)local_138._4_4_;
            fVar49 = fStack_130;
            fVar52 = fStack_12c;
          }
          if ((int)uVar41 < *piVar2) {
            uVar44 = uVar45;
          }
          local_128.m128_i32[0] = uVar58;
          local_128.m128_i32[1] = uVar59;
          local_128.m128_i32[2] = uVar47;
          local_128.m128_i32[3] = uVar50;
          local_118 = fVar60;
          fStack_114 = fVar61;
          fStack_110 = fVar48;
          fStack_10c = fVar51;
          local_108 = fVar62;
          fStack_104 = fVar63;
          fStack_100 = fVar49;
          fStack_fc = fVar52;
          if ((uVar44 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar36 = (this_02->AllocatorInstance).Data;
          pFVar39 = pFVar36 + local_1c8;
          *(undefined4 *)pFVar39 = uVar58;
          *(undefined4 *)(pFVar39 + 4) = uVar59;
          *(undefined4 *)(pFVar39 + 8) = uVar47;
          *(undefined4 *)(pFVar39 + 0xc) = uVar50;
          pFVar39 = pFVar36 + local_1c8 + 0x10;
          *(float *)pFVar39 = fVar60;
          *(float *)(pFVar39 + 4) = fVar61;
          *(float *)(pFVar39 + 8) = fVar48;
          *(float *)(pFVar39 + 0xc) = fVar51;
          pFVar36 = pFVar36 + local_1c8 + 0x20;
          *(float *)pFVar36 = fVar62;
          *(float *)(pFVar36 + 4) = fVar63;
          *(float *)(pFVar36 + 8) = fVar49;
          *(float *)(pFVar36 + 0xc) = fVar52;
          lVar34 = (**(code **)(pUVar32->_padding_ + 0x378))(pUVar32);
          if (-1 < (int)uVar41) goto LAB_149252fb4;
LAB_149252fbd:
          bVar29 = false;
        }
        else {
          uVar45 = ~uVar41 >> 0x1f;
          if (((int)uVar41 < 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar9 = *(int *)(this_00->_padding_ + uVar46 * 4);
          if ((iVar9 == -1) ||
             (*(int *)(&pUVar33[0x27].field_0x8 + (longlong)iVar30 * 0x10) <= iVar9))
          goto LAB_149252dbe;
          if ((iVar9 < 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar40 = (longlong)iVar9 * 0x60;
          lVar34 = *(longlong *)(&pUVar33[0x27].field_0x0 + (longlong)iVar30 * 0x10);
          pdVar3 = (double *)(lVar40 + 0x10 + lVar34);
          dVar11 = *pdVar3;
          dVar12 = pdVar3[1];
          dVar13 = *(double *)(lVar40 + lVar34);
          dVar14 = ((double *)(lVar40 + lVar34))[1];
          pdVar3 = (double *)(lVar40 + 0x20 + lVar34);
          dVar15 = *pdVar3;
          dVar16 = pdVar3[1];
          pdVar3 = (double *)(lVar40 + 0x40 + lVar34);
          dVar17 = *pdVar3;
          dVar18 = pdVar3[1];
          pdVar3 = (double *)(lVar40 + 0x30 + lVar34);
          dVar19 = *pdVar3;
          dVar20 = pdVar3[1];
          pdVar3 = (double *)(lVar40 + 0x50 + lVar34);
          dVar21 = *pdVar3;
          dVar22 = pdVar3[1];
          if ((int)uVar41 < *piVar2) {
            uVar44 = uVar45;
          }
          if ((uVar44 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar36 = (this_02->AllocatorInstance).Data;
          pFVar39 = pFVar36 + local_1c8;
          *(float *)pFVar39 = (float)dVar13;
          *(float *)(pFVar39 + 4) = (float)dVar14;
          *(float *)(pFVar39 + 8) = (float)dVar11;
          *(float *)(pFVar39 + 0xc) = (float)dVar12;
          pFVar39 = pFVar36 + local_1c8 + 0x10;
          *(float *)pFVar39 = (float)dVar15;
          *(float *)(pFVar39 + 4) = (float)dVar16;
          *(float *)(pFVar39 + 8) = (float)dVar19;
          *(float *)(pFVar39 + 0xc) = (float)dVar20;
          pFVar36 = pFVar36 + local_1c8 + 0x20;
          *(float *)pFVar36 = (float)dVar17;
          *(float *)(pFVar36 + 4) = (float)dVar18;
          *(float *)(pFVar36 + 8) = (float)dVar21;
          *(float *)(pFVar36 + 0xc) = (float)dVar22;
          lVar34 = (**(code **)(pUVar32->_padding_ + 0x378))(pUVar32);
LAB_149252fb4:
          if (*(int *)(lVar34 + 8) <= (int)uVar41) goto LAB_149252fbd;
          bVar29 = true;
        }
        uVar44 = 0;
        if (bVar29) {
          plVar35 = (longlong *)(**(code **)(pUVar32->_padding_ + 0x378))(pUVar32);
          uVar38 = uVar44;
          if ((int)uVar41 < (int)plVar35[1]) {
            uVar38 = uVar45;
          }
          if ((uVar38 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar34 = *plVar35;
          if ((int)uVar41 < *piVar2) {
            uVar44 = uVar45;
          }
          if ((uVar44 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar36 = (this_02->AllocatorInstance).Data;
          pFVar39 = pFVar36 + local_1c8;
          fVar60 = *(float *)pFVar39;
          fVar61 = *(float *)(pFVar39 + 4);
          fVar48 = *(float *)(pFVar39 + 8);
          fVar51 = *(float *)(pFVar39 + 0xc);
          fVar52 = fVar61 + fVar61;
          fVar53 = fVar48 + fVar48;
          fVar57 = fVar60 * (fVar60 + fVar60);
          fVar56 = fVar51 * (fVar60 + fVar60);
          pFVar39 = pFVar36 + local_1c8 + 0x20;
          fVar62 = *(float *)pFVar39;
          fVar63 = *(float *)(pFVar39 + 4);
          fVar49 = *(float *)(pFVar39 + 8);
          local_f8.M[0][1] = (fVar51 * fVar53 + fVar60 * fVar52) * fVar62;
          local_f8.M[1][2] = (fVar56 + fVar61 * fVar53) * fVar63;
          local_f8.M[2][0] = (fVar51 * fVar52 + fVar60 * fVar53) * fVar49;
          local_f8.M[1][0] = fVar63 * (fVar60 * fVar52 - fVar51 * fVar53);
          local_f8.M[2][1] = fVar49 * (fVar61 * fVar53 - fVar56);
          local_f8.M[0][2] = fVar62 * (fVar60 * fVar53 - fVar51 * fVar52);
          auVar54._0_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar48 * fVar53 + fVar61 * fVar52)) *
               fVar62;
          auVar54._4_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar48 * fVar53 + fVar57)) * fVar63;
          auVar54._8_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar61 * fVar52 + fVar57)) * fVar49;
          auVar54._12_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar57 + fVar57)) *
               *(float *)(pFVar39 + 0xc);
          auVar55 = insertps(auVar54,auVar54,8);
          local_f8.M[0][0] = auVar55._0_4_;
          local_f8.M[1][1] = auVar55._4_4_;
          local_f8.M[2][2] = auVar55._8_4_;
          local_f8.M[0][3] = auVar55._12_4_;
          local_f8.M[3] =
               (float  [4])
               blendps(*(undefined1 (*) [16])(pFVar36 + local_1c8 + 0x10),
                       GlobalVectorConstants::FloatOne.m128_f32,8);
          local_f8.M[1][3] = local_f8.M[0][3];
          local_f8.M[2][3] = local_f8.M[0][3];
          VectorMatrixMultiply(&local_b8,(TMatrix<float> *)(lVar34 + local_198),&local_f8);
          afVar64 = local_b8.M[3];
          uVar28 = local_b8.M[2]._8_8_;
          uVar27 = local_b8.M[2]._0_8_;
          uVar26 = local_b8.M[1]._8_8_;
          uVar25 = local_b8.M[1]._0_8_;
          uVar24 = local_b8.M[0]._8_8_;
          uVar23 = local_b8.M[0]._0_8_;
          uVar44 = 0;
          if ((int)uVar41 < *piVar1) {
            uVar44 = uVar45;
          }
          if ((uVar44 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar36 = (pTVar42->AllocatorInstance).Data;
          *(undefined8 *)(pFVar36 + local_198) = uVar23;
          *(undefined8 *)(pFVar36 + local_198 + 8) = uVar24;
          *(undefined8 *)(pFVar36 + local_198 + 0x10) = uVar25;
          *(undefined8 *)(pFVar36 + local_198 + 0x10 + 8) = uVar26;
          *(undefined8 *)(pFVar36 + local_198 + 0x20) = uVar27;
          *(undefined8 *)(pFVar36 + local_198 + 0x20 + 8) = uVar28;
        }
        else {
          uVar38 = 0;
          if ((int)uVar41 < *piVar2) {
            uVar38 = uVar45;
          }
          if ((uVar38 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar36 = (this_02->AllocatorInstance).Data;
          pFVar39 = pFVar36 + local_1c8;
          fVar60 = *(float *)pFVar39;
          fVar61 = *(float *)(pFVar39 + 4);
          fVar48 = *(float *)(pFVar39 + 8);
          fVar51 = *(float *)(pFVar39 + 0xc);
          afVar64 = (float  [4])
                    blendps(*(undefined1 (*) [16])(pFVar36 + local_1c8 + 0x10),
                            GlobalVectorConstants::FloatOne.m128_f32,8);
          fVar52 = fVar61 + fVar61;
          fVar53 = fVar48 + fVar48;
          fVar57 = fVar60 * (fVar60 + fVar60);
          fVar56 = fVar51 * (fVar60 + fVar60);
          pFVar36 = pFVar36 + local_1c8 + 0x20;
          fVar62 = *(float *)pFVar36;
          fVar63 = *(float *)(pFVar36 + 4);
          fVar49 = *(float *)(pFVar36 + 8);
          if ((int)uVar41 < *piVar1) {
            uVar44 = uVar45;
          }
          auVar55._0_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar48 * fVar53 + fVar61 * fVar52)) *
               fVar62;
          auVar55._4_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar48 * fVar53 + fVar57)) * fVar63;
          auVar55._8_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar61 * fVar52 + fVar57)) * fVar49;
          auVar55._12_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar57 + fVar57)) *
               *(float *)(pFVar36 + 0xc);
          auVar55 = insertps(auVar55,auVar55,8);
          uVar58 = auVar55._12_4_;
          if ((uVar44 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar36 = (pTVar42->AllocatorInstance).Data;
          pFVar39 = pFVar36 + local_198;
          *(int *)pFVar39 = auVar55._0_4_;
          *(float *)(pFVar39 + 4) = (fVar51 * fVar53 + fVar60 * fVar52) * fVar62;
          *(float *)(pFVar39 + 8) = fVar62 * (fVar60 * fVar53 - fVar51 * fVar52);
          *(undefined4 *)(pFVar39 + 0xc) = uVar58;
          pFVar39 = pFVar36 + local_198 + 0x10;
          *(float *)pFVar39 = fVar63 * (fVar60 * fVar52 - fVar51 * fVar53);
          *(int *)(pFVar39 + 4) = auVar55._4_4_;
          *(float *)(pFVar39 + 8) = (fVar56 + fVar61 * fVar53) * fVar63;
          *(undefined4 *)(pFVar39 + 0xc) = uVar58;
          pFVar39 = pFVar36 + local_198 + 0x20;
          *(float *)pFVar39 = (fVar51 * fVar52 + fVar60 * fVar53) * fVar49;
          *(float *)(pFVar39 + 4) = fVar49 * (fVar61 * fVar53 - fVar56);
          *(int *)(pFVar39 + 8) = auVar55._8_4_;
          *(undefined4 *)(pFVar39 + 0xc) = uVar58;
        }
        local_1a0 = local_1a0 + 0x60;
        local_1c8 = local_1c8 + 0x30;
        uVar43 = (ulonglong)(uVar41 + 1);
        *(float (*) [4])(pFVar36 + local_198 + 0x30) = afVar64;
        uVar46 = uVar46 + 1;
        local_198 = local_198 + 0x40;
      } while ((longlong)uVar46 < (longlong)(int)uVar8);
    }
  }
  return;
}

