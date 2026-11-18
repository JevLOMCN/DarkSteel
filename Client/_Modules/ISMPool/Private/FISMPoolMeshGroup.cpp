// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 4

// AddMesh @ 14633c260

int __thiscall
FISMPoolMeshGroup::AddMesh
          (FISMPoolMeshGroup *this,FISMPoolStaticMeshInstance *param_1,int param_2,
          FISMPoolMeshInfo *param_3,TArrayView<float_const_,int> *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  TArrayView<float_const_,int> local_28;
  
  uVar4 = (this->MeshInfos).ArrayNum;
  piVar1 = &(this->MeshInfos).ArrayMax;
  if (uVar4 == *piVar1) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->MeshInfos).ArrayNum = uVar4 + 1;
  FISMPoolMeshInfo::FISMPoolMeshInfo
            ((FISMPoolMeshInfo *)
             ((this->MeshInfos).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18),param_3);
  if ((this->bAllowPerInstanceRemoval != false) && (GShadowCopyCustomData != false)) {
    uVar5 = 0;
    if ((int)uVar4 < (this->MeshInfos).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    local_28.DataPtr = param_4->DataPtr;
    local_28.ArrayNum = param_4->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FISMPoolMeshInfo::ShadowCopyCustomData
              ((FISMPoolMeshInfo *)
               ((this->MeshInfos).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18),param_2,
               (param_1->Desc).NumCustomDataFloats,&local_28);
  }
  return uVar4;
}

// BatchUpdateInstanceCustomData @ 14633c870

void __thiscall
FISMPoolMeshGroup::BatchUpdateInstanceCustomData
          (FISMPoolMeshGroup *this,FISMPool *param_1,int param_2,float param_3)

{
  FISMPoolMeshInfo *pFVar1;
  int iVar2;
  FISMPoolMeshInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->MeshInfos).ArrayNum;
  pFVar3 = (FISMPoolMeshInfo *)(this->MeshInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->MeshInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FISMPoolMeshInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FISMPool::BatchUpdateInstanceCustomData(param_1,pFVar3,param_2,param_3);
    pFVar3 = pFVar3 + 1;
  }
  return;
}

// BatchUpdateInstancesTransforms @ 14633d120

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FISMPoolMeshGroup::BatchUpdateInstancesTransforms
          (FISMPoolMeshGroup *this,FISMPool *param_1,int param_2,int param_3,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_4,bool param_5,bool param_6,
          bool param_7)

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
    bVar8 = FISMPool::BatchUpdateInstancesTransforms
                      (param_1,(FISMPoolMeshInfo *)
                               ((this->MeshInfos).AllocatorInstance.Data + (longlong)param_2 * 0x18)
                       ,param_3,&local_18,param_5,param_6,param_7,bVar8);
  }
  return bVar8;
}

// RemoveAllMeshes @ 146341b50

void __thiscall FISMPoolMeshGroup::RemoveAllMeshes(FISMPoolMeshGroup *this,FISMPool *param_1)

{
  int *piVar1;
  FISMPoolMeshInfo *pFVar2;
  int iVar3;
  FISMPoolMeshInfo *pFVar4;
  undefined1 local_res8 [8];
  
  iVar3 = (this->MeshInfos).ArrayNum;
  pFVar4 = (FISMPoolMeshInfo *)(this->MeshInfos).AllocatorInstance.Data;
  pFVar2 = pFVar4 + iVar3;
  while( true ) {
    if ((this->MeshInfos).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FISMPoolMeshInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar2) break;
    FISMPool::RemoveInstancesFromISM(param_1,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  DestructItems<FISMPoolMeshInfo,int>
            ((FISMPoolMeshInfo *)(this->MeshInfos).AllocatorInstance.Data,(this->MeshInfos).ArrayNum
            );
  piVar1 = &(this->MeshInfos).ArrayMax;
  (this->MeshInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

