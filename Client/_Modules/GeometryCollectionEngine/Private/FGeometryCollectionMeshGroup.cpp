// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 4

// AddMesh @ 1463a9b80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FGeometryCollectionMeshGroup::AddMesh
          (FGeometryCollectionMeshGroup *this,FGeometryCollectionStaticMeshInstance *param_1,
          int param_2,FGeometryCollectionMeshInfo *param_3,TArrayView<float_const_,int> *param_4)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float *pfVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar7 = (this->MeshInfos).ArrayNum;
  uVar10 = (ulonglong)(uint)param_2;
  piVar1 = &(this->MeshInfos).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->MeshInfos).ArrayNum = uVar7 + 1;
  lVar2 = (longlong)(int)uVar7 * 0x18;
  FGeometryCollectionMeshInfo::FGeometryCollectionMeshInfo
            ((FGeometryCollectionMeshInfo *)((this->MeshInfos).AllocatorInstance.Data + lVar2),
             param_3);
  if ((this->bAllowPerInstanceRemoval != false) && (GShadowCopyCustomData != false)) {
    uVar11 = 0;
    if ((int)uVar7 < (this->MeshInfos).ArrayNum) {
      uVar11 = ~uVar7 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pFVar3 = (this->MeshInfos).AllocatorInstance.Data;
    iVar8 = (param_1->Desc).NumCustomDataFloats;
    pfVar5 = param_4->DataPtr;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar3 + lVar2 + 8),
               (param_2 + 1) * iVar8,Default);
    if (0 < param_2) {
      uVar11 = 0;
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)(pFVar3 + lVar2 + 0x10)) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        memcpy((void *)(*(longlong *)(pFVar3 + lVar2 + 8) + lVar12 * 4),pfVar5 + lVar12,
               (longlong)iVar8 * 4);
        uVar11 = uVar11 + iVar8;
        lVar12 = lVar12 + iVar8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return uVar7;
}

// BatchUpdateInstanceCustomData @ 1463aaaf0

void __thiscall
FGeometryCollectionMeshGroup::BatchUpdateInstanceCustomData
          (FGeometryCollectionMeshGroup *this,FGeometryCollectionISMPool *param_1,int param_2,
          float param_3)

{
  FGeometryCollectionMeshInfo *pFVar1;
  int iVar2;
  FGeometryCollectionMeshInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->MeshInfos).ArrayNum;
  pFVar3 = (FGeometryCollectionMeshInfo *)(this->MeshInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->MeshInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGeometryCollectionMeshInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FGeometryCollectionISMPool::BatchUpdateInstanceCustomData(param_1,pFVar3,param_2,param_3);
    pFVar3 = pFVar3 + 1;
  }
  return;
}

// BatchUpdateInstancesTransforms @ 1463ab350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGeometryCollectionMeshGroup::BatchUpdateInstancesTransforms
          (FGeometryCollectionMeshGroup *this,FGeometryCollectionISMPool *param_1,int param_2,
          int param_3,TArrayView<UE::Math::TTransform<double>_const_,int> *param_4,bool param_5,
          bool param_6,bool param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  if ((param_2 < 0) || ((this->MeshInfos).ArrayNum <= param_2)) {
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    bVar8 = false;
  }
  else {
    bVar8 = this->bAllowPerInstanceRemoval;
    uVar2 = *(undefined4 *)&param_4->DataPtr;
    uVar3 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
    iVar4 = param_4->ArrayNum;
    uVar5 = *(undefined4 *)&param_4->field_0xc;
    if ((param_2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    local_18.DataPtr._0_4_ = uVar2;
    local_18.DataPtr._4_4_ = uVar3;
    local_18.ArrayNum = iVar4;
    local_18._12_4_ = uVar5;
    bVar8 = FGeometryCollectionISMPool::BatchUpdateInstancesTransforms
                      (param_1,(FGeometryCollectionMeshInfo *)
                               ((this->MeshInfos).AllocatorInstance.Data + (longlong)param_2 * 0x18)
                       ,param_3,&local_18,param_5,param_6,param_7,bVar8);
  }
  return bVar8;
}

// RemoveAllMeshes @ 1463c2320

void __thiscall
FGeometryCollectionMeshGroup::RemoveAllMeshes
          (FGeometryCollectionMeshGroup *this,FGeometryCollectionISMPool *param_1)

{
  int *piVar1;
  FGeometryCollectionMeshInfo *pFVar2;
  int iVar3;
  FGeometryCollectionMeshInfo *pFVar4;
  undefined1 local_res8 [8];
  
  iVar3 = (this->MeshInfos).ArrayNum;
  pFVar4 = (FGeometryCollectionMeshInfo *)(this->MeshInfos).AllocatorInstance.Data;
  pFVar2 = pFVar4 + iVar3;
  while( true ) {
    if ((this->MeshInfos).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGeometryCollectionMeshInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    FGeometryCollectionISMPool::RemoveInstancesFromISM(param_1,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  DestructItems<FGeometryCollectionMeshInfo,int>
            ((FGeometryCollectionMeshInfo *)(this->MeshInfos).AllocatorInstance.Data,
             (this->MeshInfos).ArrayNum);
  piVar1 = &(this->MeshInfos).ArrayMax;
  (this->MeshInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

