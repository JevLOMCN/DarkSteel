// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FSkeletalMeshSkinningDataHandle @ 149212d40

FSkeletalMeshSkinningDataHandle * __thiscall
FSkeletalMeshSkinningDataHandle::FSkeletalMeshSkinningDataHandle
          (FSkeletalMeshSkinningDataHandle *this,FSkeletalMeshSkinningDataHandle *param_1)

{
  undefined1 *puVar1;
  TSharedPtr<FSkeletalMeshSkinningData,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSkeletalMeshSkinningData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->Usage).bUsesBoneMatrices = 0;
  (this->Usage).bUsesPreSkinnedVerts = 0;
  pTVar2 = &param_1->SkinningData;
  (this->Usage).LODIndex = -1;
  (this->SkinningData).Object = (FSkeletalMeshSkinningData *)0x0;
  (this->SkinningData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->Usage = param_1->Usage;
  pTVar3 = (param_1->SkinningData).SharedReferenceCount.ReferenceController;
  pFVar4 = pTVar2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->SkinningData).SharedReferenceCount.ReferenceController;
  (this->SkinningData).Object = pFVar4;
  (this->SkinningData).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<FSkeletalMeshSkinningData,1> *)&local_18) {
    pTVar2->Object = (FSkeletalMeshSkinningData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->SkinningData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return this;
}

// FSkeletalMeshSkinningDataHandle @ 149212df0

FSkeletalMeshSkinningDataHandle * __thiscall
FSkeletalMeshSkinningDataHandle::FSkeletalMeshSkinningDataHandle
          (FSkeletalMeshSkinningDataHandle *this,FSkeletalMeshSkinningDataUsage param_1,
          TSharedPtr<FSkeletalMeshSkinningData,1> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FSkeletalMeshSkinningData *this_00;
  
  this->Usage = param_1;
  (this->SkinningData).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->SkinningData).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (this->SkinningData).Object;
  if (this_00 != (FSkeletalMeshSkinningData *)0x0) {
    FSkeletalMeshSkinningData::RegisterUser(this_00,this->Usage,param_3);
  }
  return this;
}

// FSkeletalMeshSkinningDataHandle @ 149212e40

FSkeletalMeshSkinningDataHandle * __thiscall
FSkeletalMeshSkinningDataHandle::FSkeletalMeshSkinningDataHandle
          (FSkeletalMeshSkinningDataHandle *this)

{
  undefined1 *puVar1;
  
  (this->Usage).bUsesBoneMatrices = 0;
  (this->Usage).bUsesPreSkinnedVerts = 0;
  (this->SkinningData).Object = (FSkeletalMeshSkinningData *)0x0;
  (this->SkinningData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->Usage).LODIndex = -1;
  return this;
}

// ~FSkeletalMeshSkinningDataHandle @ 149215c50

void __thiscall
FSkeletalMeshSkinningDataHandle::~FSkeletalMeshSkinningDataHandle
          (FSkeletalMeshSkinningDataHandle *this)

{
  FScriptContainerElement *pFVar1;
  FSkeletalMeshSkinningData *pFVar2;
  FSkeletalMeshSkinningDataUsage FVar3;
  code *pcVar4;
  FSkeletalMeshSkinningDataUsage *pFVar5;
  FSkeletalMeshSkinningDataUsage FVar6;
  FSkeletalMeshSkinningDataUsage FVar7;
  bool bVar8;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar9;
  uint uVar10;
  uint uVar11;
  uint uStackX_c;
  
  pFVar2 = (this->SkinningData).Object;
  if (pFVar2 != (FSkeletalMeshSkinningData *)0x0) {
    pFVar5 = &this->Usage;
    FVar3 = *pFVar5;
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar2->RWGuard);
    if ((pFVar5->bUsesBoneMatrices != 0) || (pFVar5->bUsesPreSkinnedVerts != 0)) {
      pFVar2->BoneMatrixUsers = pFVar2->BoneMatrixUsers + -1;
    }
    this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(pFVar2->MeshComp).WeakPtr);
    uVar11 = 0;
    if (this_00 != (USkeletalMeshComponent *)0x0) {
      pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
      uVar11 = 0;
      if (pUVar9 != (USkeletalMesh *)0x0) {
        uVar11 = FVar3.LODIndex;
      }
    }
    if (((pFVar5->bUsesPreSkinnedVerts != 0) &&
        (pFVar2->TotalPreSkinnedVertsUsers = pFVar2->TotalPreSkinnedVertsUsers + -1,
        -1 < (int)uVar11)) && ((int)uVar11 < (pFVar2->LODData).ArrayNum)) {
      uVar10 = 0;
      if ((int)uVar11 < (pFVar2->LODData).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar1 = (pFVar2->LODData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x48;
      *(int *)pFVar1 = *(int *)pFVar1 + -1;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->RWGuard);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SkinningData).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 149216610

FSkeletalMeshSkinningDataHandle * __thiscall
FSkeletalMeshSkinningDataHandle::operator=
          (FSkeletalMeshSkinningDataHandle *this,FSkeletalMeshSkinningDataHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSkeletalMeshSkinningData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this != param_1) {
    this->Usage = param_1->Usage;
    pTVar1 = (param_1->SkinningData).SharedReferenceCount.ReferenceController;
    pFVar2 = (param_1->SkinningData).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->SkinningData).SharedReferenceCount.ReferenceController;
    (this->SkinningData).Object = pFVar2;
    (this->SkinningData).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&param_1->SkinningData != (TSharedPtr<FSkeletalMeshSkinningData,1> *)&local_18) {
      (param_1->SkinningData).Object = (FSkeletalMeshSkinningData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->SkinningData).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return this;
}

