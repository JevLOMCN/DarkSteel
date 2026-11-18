// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// operator[] @ 14e6e1790

FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_> * __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialArrayViewer<TObjectPtr<UMaterialInterface>_>::
operator[](FMeshMaterialArrayViewer<TObjectPtr<UMaterialInterface>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_> *pFVar4;
  
  if ((param_1 < 0) || ((this->MeshMaterialArrayViewer).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshMaterialArrayViewer.IsValidIndex(MaterialIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeMeshHelper.cpp"
                       ,0x45c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_> *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->MeshMaterialArrayViewer).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_> *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_> *)
         ((this->MeshMaterialArrayViewer).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// operator[] @ 14e6e1840

FMeshMaterialViewer<FSkeletalMaterial> * __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialArrayViewer<FSkeletalMaterial>::operator[]
          (FMeshMaterialArrayViewer<FSkeletalMaterial> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMeshMaterialViewer<FSkeletalMaterial> *pFVar4;
  
  if ((param_1 < 0) || ((this->MeshMaterialArrayViewer).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshMaterialArrayViewer.IsValidIndex(MaterialIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeMeshHelper.cpp"
                       ,0x41c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshMaterialViewer<FSkeletalMaterial> *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->MeshMaterialArrayViewer).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshMaterialViewer<FSkeletalMaterial> *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMeshMaterialViewer<FSkeletalMaterial> *)
         ((this->MeshMaterialArrayViewer).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// operator[] @ 14e6e18f0

FMeshMaterialViewer<FStaticMaterial> * __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialArrayViewer<FStaticMaterial>::operator[]
          (FMeshMaterialArrayViewer<FStaticMaterial> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMeshMaterialViewer<FStaticMaterial> *pFVar4;
  
  if ((param_1 < 0) || ((this->MeshMaterialArrayViewer).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshMaterialArrayViewer.IsValidIndex(MaterialIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeMeshHelper.cpp"
                       ,0x41c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshMaterialViewer<FStaticMaterial> *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->MeshMaterialArrayViewer).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshMaterialViewer<FStaticMaterial> *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMeshMaterialViewer<FStaticMaterial> *)
         ((this->MeshMaterialArrayViewer).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// RebuildViewer @ 14e6f9a90

void __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialArrayViewer<TObjectPtr<UMaterialInterface>_>::
RebuildViewer(FMeshMaterialArrayViewer<TObjectPtr<UMaterialInterface>_> *this)

{
  int *piVar1;
  uint uVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  uVar2 = this->Materials->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  iVar7 = 0;
  piVar1 = &(this->MeshMaterialArrayViewer).ArrayMax;
  (this->MeshMaterialArrayViewer).ArrayNum = 0;
  if ((this->MeshMaterialArrayViewer).ArrayMax < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar2,&(this->MeshMaterialArrayViewer).AllocatorInstance,0,piVar1);
  }
  pTVar8 = this->Materials;
  if (0 < pTVar8->ArrayNum) {
    do {
      iVar5 = (this->MeshMaterialArrayViewer).ArrayNum;
      pTVar3 = this->MaterialSlotNames;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(this->MeshMaterialArrayViewer).AllocatorInstance,piVar1);
      }
      lVar6 = (longlong)iVar5;
      (this->MeshMaterialArrayViewer).ArrayNum = iVar5 + 1;
      pFVar4 = (this->MeshMaterialArrayViewer).AllocatorInstance.Data;
      *(int *)(pFVar4 + lVar6 * 0x18 + 0x10) = iVar7;
      iVar7 = iVar7 + 1;
      *(TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> **)
       (pFVar4 + lVar6 * 0x18) = pTVar8;
      *(TArray<FName,TSizedDefaultAllocator<32>_> **)(pFVar4 + lVar6 * 0x18 + 8) = pTVar3;
      pTVar8 = this->Materials;
    } while (iVar7 < pTVar8->ArrayNum);
  }
  return;
}

// RebuildViewer @ 14e6f9b70

void __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialArrayViewer<FSkeletalMaterial>::RebuildViewer
          (FMeshMaterialArrayViewer<FSkeletalMaterial> *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  
  uVar2 = this->Materials->ArrayNum;
  if (-1 < (int)uVar2) {
    iVar6 = 0;
    piVar1 = &(this->MeshMaterialArrayViewer).ArrayMax;
    (this->MeshMaterialArrayViewer).ArrayNum = 0;
    if ((this->MeshMaterialArrayViewer).ArrayMax < (int)uVar2) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&(this->MeshMaterialArrayViewer).AllocatorInstance,0,piVar1);
    }
    pTVar5 = this->Materials;
    if (0 < pTVar5->ArrayNum) {
      do {
        iVar4 = (this->MeshMaterialArrayViewer).ArrayNum;
        if (iVar4 == *piVar1) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->MeshMaterialArrayViewer).AllocatorInstance,piVar1);
        }
        (this->MeshMaterialArrayViewer).ArrayNum = iVar4 + 1;
        pFVar3 = (this->MeshMaterialArrayViewer).AllocatorInstance.Data;
        *(int *)(pFVar3 + (longlong)iVar4 * 0x10 + 8) = iVar6;
        iVar6 = iVar6 + 1;
        *(TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> **)(pFVar3 + (longlong)iVar4 * 0x10)
             = pTVar5;
        pTVar5 = this->Materials;
      } while (iVar6 < pTVar5->ArrayNum);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// RebuildViewer @ 14e6f9c40

void __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialArrayViewer<FStaticMaterial>::RebuildViewer
          (FMeshMaterialArrayViewer<FStaticMaterial> *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  
  uVar2 = this->Materials->ArrayNum;
  if (-1 < (int)uVar2) {
    iVar6 = 0;
    piVar1 = &(this->MeshMaterialArrayViewer).ArrayMax;
    (this->MeshMaterialArrayViewer).ArrayNum = 0;
    if ((this->MeshMaterialArrayViewer).ArrayMax < (int)uVar2) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&(this->MeshMaterialArrayViewer).AllocatorInstance,0,piVar1);
    }
    pTVar5 = this->Materials;
    if (0 < pTVar5->ArrayNum) {
      do {
        iVar4 = (this->MeshMaterialArrayViewer).ArrayNum;
        if (iVar4 == *piVar1) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->MeshMaterialArrayViewer).AllocatorInstance,piVar1);
        }
        (this->MeshMaterialArrayViewer).ArrayNum = iVar4 + 1;
        pFVar3 = (this->MeshMaterialArrayViewer).AllocatorInstance.Data;
        *(int *)(pFVar3 + (longlong)iVar4 * 0x10 + 8) = iVar6;
        iVar6 = iVar6 + 1;
        *(TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> **)(pFVar3 + (longlong)iVar4 * 0x10) =
             pTVar5;
        pTVar5 = this->Materials;
      } while (iVar6 < pTVar5->ArrayNum);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

