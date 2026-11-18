// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// FSkeletalMeshData @ 14dfae610

/* WARNING: Removing unreachable block (ram,0x00014dfaeb50) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSkeletalMeshData * __thiscall
GroomBinding_Mesh::FSkeletalMeshData::FSkeletalMeshData
          (FSkeletalMeshData *this,USkeletalMesh *param_1,FSkeletalMeshRenderData *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FSkeletalMeshRenderData *pFVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FSkeletalMeshData *pFVar8;
  uint uVar9;
  FSkeletalMeshRenderData *pFVar10;
  longlong lVar11;
  int *piVar12;
  longlong local_res8;
  FName local_res10;
  FString local_a8;
  undefined **local_98;
  uint local_90;
  uint local_8c;
  FSkeletalMeshRenderData *local_88;
  undefined **local_80;
  uint local_78;
  FSkeletalMeshRenderData *local_70;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshData_GroomBinding_Mesh__6B_;
  piVar12 = &(this->MeshesLODData).ArrayMax;
  this->LODCount = 0;
  (this->MeshesLODData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshesLODData).ArrayNum = 0;
  *piVar12 = 0;
  this->SkeletalMesh = param_1;
  this->MeshData = param_2;
  if (param_1 != (USkeletalMesh *)0x0) {
    if (param_2 == (FSkeletalMeshRenderData *)0x0) {
      if (2 < (byte)LogHairStrands._0_1_) {
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_a8);
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_GroomBinding_Mesh::FSkeletalMeshData::FSkeletalMeshData(USkeletalMesh_const*___ptr64,FSkeletalMeshRenderData_const*___ptr64,int)___ptr64'
                    ::__l13::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      uVar5 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
      this->LODCount = uVar5;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (*piVar12 < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,uVar5,&(this->MeshesLODData).AllocatorInstance,
                   (this->MeshesLODData).ArrayNum,piVar12);
      }
      uVar5 = 0;
      if (0 < this->LODCount) {
        local_res8 = 0;
        do {
          pFVar10 = (FSkeletalMeshRenderData *)0x0;
          if (param_3 <= (int)uVar5) {
            pFVar10 = this->MeshData;
          }
          local_80 = &___7FSkeletalMeshLODData_GroomBinding_Mesh__6B_;
          local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.ArrayNum = 0;
          local_68.ArrayMax = 0;
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50._0_4_ = 0;
          local_50._4_4_ = 0;
          local_48 = 0;
          local_40 = 0;
          local_78 = uVar5;
          local_70 = pFVar10;
          if (((pFVar10 != (FSkeletalMeshRenderData *)0x0) && (-1 < (int)uVar5)) &&
             ((int)uVar5 < (pFVar10->LODRenderData).Array.ArrayNum)) {
            if (((int)uVar5 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FSkeletalMeshData *)(*pcVar2)();
              return pFVar8;
            }
            pFVar3 = local_70;
            if (*(longlong *)
                 (*(longlong *)((pFVar10->LODRenderData).Array.AllocatorInstance.Data + local_res8)
                 + 0x120) != 0) {
              lVar11 = (longlong)(int)local_78;
              uVar6 = 0;
              if ((int)local_78 < (local_70->LODRenderData).Array.ArrayNum) {
                uVar6 = ~local_78 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pFVar8 = (FSkeletalMeshData *)(*pcVar2)();
                return pFVar8;
              }
              uVar6 = *(uint *)(*(longlong *)
                                 ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + lVar11 * 8)
                               + 0x18);
              if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
              }
              if (local_50._4_4_ < (int)uVar6) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,uVar6,&local_58,(int)local_50,(int *)((longlong)&local_50 + 4));
              }
              uVar9 = 0;
              if (uVar6 != 0) {
                do {
                  local_90 = local_78;
                  local_88 = local_70;
                  local_98 = &___7FSkeletalMeshSection_GroomBinding_Mesh__6B_;
                  local_8c = uVar9;
                  if (((local_58.Data <= (FScriptContainerElement *)&local_98) &&
                      ((FScriptContainerElement *)&local_98 <
                       local_58.Data + (longlong)local_50._4_4_ * 0x18)) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    pFVar8 = (FSkeletalMeshData *)(*pcVar2)();
                    return pFVar8;
                  }
                  if ((int)local_50 == local_50._4_4_) {
                    local_50._0_4_ =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_58,(int *)((longlong)&local_50 + 4));
                  }
                  iVar7 = (int)local_50 + 1;
                  uVar9 = uVar9 + 1;
                  lVar11 = (longlong)(int)local_50;
                  *(undefined ***)(local_58.Data + lVar11 * 0x18) =
                       &___7FSkeletalMeshSection_GroomBinding_Mesh__6B_;
                  *(uint *)(local_58.Data + lVar11 * 0x18 + 8) = local_90;
                  *(uint *)(local_58.Data + lVar11 * 0x18 + 0xc) = local_8c;
                  *(FSkeletalMeshRenderData **)(local_58.Data + lVar11 * 0x18 + 0x10) = local_88;
                  local_50._0_4_ = iVar7;
                } while (uVar9 < uVar6);
              }
              if (local_68.ArrayNum == 0) {
                if ((((int)local_78 < 0) ||
                    ((local_70->LODRenderData).Array.ArrayNum <= (int)local_78)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                                       ,0x168,L""), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  pFVar8 = (FSkeletalMeshData *)(*pcVar2)();
                  return pFVar8;
                }
                pFVar10 = local_70;
                lVar11 = (longlong)(int)local_78;
                uVar6 = 0;
                if ((int)local_78 < (local_70->LODRenderData).Array.ArrayNum) {
                  uVar6 = ~local_78 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  pFVar8 = (FSkeletalMeshData *)(*pcVar2)();
                  return pFVar8;
                }
                lVar11 = *(longlong *)
                          ((pFVar10->LODRenderData).Array.AllocatorInstance.Data + lVar11 * 8);
                if ((*(longlong *)(lVar11 + 0x28) == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IndexBuffer != 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                       ,0x56,L""), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  pFVar8 = (FSkeletalMeshData *)(*pcVar2)();
                  return pFVar8;
                }
                iVar7 = (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x50))();
                TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&local_68,iVar7,Default);
                pFVar10 = local_70;
                lVar11 = (longlong)(int)local_78;
                uVar6 = 0;
                if ((int)local_78 < (local_70->LODRenderData).Array.ArrayNum) {
                  uVar6 = ~local_78 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  pFVar8 = (FSkeletalMeshData *)(*pcVar2)();
                  return pFVar8;
                }
                FMultiSizeIndexContainer::GetIndexBuffer
                          ((FMultiSizeIndexContainer *)
                           (*(longlong *)
                             ((pFVar10->LODRenderData).Array.AllocatorInstance.Data + lVar11 * 8) +
                           0x20),&local_68);
              }
            }
          }
          piVar12 = &(this->MeshesLODData).ArrayMax;
          pFVar1 = (this->MeshesLODData).AllocatorInstance.Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_80) &&
              ((FScriptContainerElement *)&local_80 < pFVar1 + (longlong)*piVar12 * 0x48)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FSkeletalMeshData *)(*pcVar2)();
            return pFVar8;
          }
          iVar7 = (this->MeshesLODData).ArrayNum;
          if (iVar7 == *piVar12) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,&(this->MeshesLODData).AllocatorInstance,piVar12);
          }
          (this->MeshesLODData).ArrayNum = iVar7 + 1;
          pFVar1 = (this->MeshesLODData).AllocatorInstance.Data + (longlong)iVar7 * 0x48;
          *(undefined ***)pFVar1 = &___7FSkeletalMeshLODData_GroomBinding_Mesh__6B_;
          *(uint *)(pFVar1 + 8) = local_78;
          *(FSkeletalMeshRenderData **)(pFVar1 + 0x10) = local_70;
          *(undefined8 *)(pFVar1 + 0x18) = 0;
          *(FScriptContainerElement **)(pFVar1 + 0x18) = local_68.AllocatorInstance.Data;
          *(int *)(pFVar1 + 0x20) = local_68.ArrayNum;
          *(int *)(pFVar1 + 0x24) = local_68.ArrayMax;
          *(undefined8 *)(pFVar1 + 0x28) = 0;
          *(FScriptContainerElement **)(pFVar1 + 0x28) = local_58.Data;
          *(int *)(pFVar1 + 0x30) = (int)local_50;
          *(int *)(pFVar1 + 0x34) = local_50._4_4_;
          *(undefined8 *)(pFVar1 + 0x38) = 0;
          *(undefined8 *)(pFVar1 + 0x38) = local_48;
          *(undefined4 *)(pFVar1 + 0x40) = (undefined4)local_40;
          *(undefined4 *)(pFVar1 + 0x44) = local_40._4_4_;
          local_40 = 0;
          local_48 = 0;
          local_50 = 0;
          local_58.Data = (FScriptContainerElement *)0x0;
          local_68.ArrayNum = 0;
          local_68.ArrayMax = 0;
          local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          DestructItems<GroomBinding_Mesh::FSkeletalMeshSection,int>((FSkeletalMeshSection *)0x0,0);
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
          if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.AllocatorInstance.Data);
          }
          local_res8 = local_res8 + 8;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < this->LODCount);
      }
    }
  }
  return this;
}

// GetMeshLODData @ 14dfc7a70

IMeshLODData * __thiscall
GroomBinding_Mesh::FSkeletalMeshData::GetMeshLODData(FSkeletalMeshData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IMeshLODData *pIVar4;
  
  if ((param_1 < 0) || ((this->MeshesLODData).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshesLODData.IsValidIndex(InLODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x23f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IMeshLODData *)(*pcVar1)();
      return pIVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->MeshesLODData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IMeshLODData *)(*pcVar1)();
      return pIVar4;
    }
  }
  return (IMeshLODData *)((this->MeshesLODData).AllocatorInstance.Data + (longlong)param_1 * 0x48);
}

// GetMeshLODData @ 14dfc7b20

IMeshLODData * __thiscall
GroomBinding_Mesh::FSkeletalMeshData::GetMeshLODData(FSkeletalMeshData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IMeshLODData *pIVar4;
  
  if ((param_1 < 0) || ((this->MeshesLODData).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshesLODData.IsValidIndex(InLODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x239,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IMeshLODData *)(*pcVar1)();
      return pIVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->MeshesLODData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IMeshLODData *)(*pcVar1)();
      return pIVar4;
    }
  }
  return (IMeshLODData *)((this->MeshesLODData).AllocatorInstance.Data + (longlong)param_1 * 0x48);
}

// GetNumLODs @ 14dfc7c80

int __thiscall GroomBinding_Mesh::FSkeletalMeshData::GetNumLODs(FSkeletalMeshData *this)

{
  return this->LODCount;
}

// IsLODValid @ 14dfcfd10

bool __thiscall
GroomBinding_Mesh::FSkeletalMeshData::IsLODValid(FSkeletalMeshData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->MeshesLODData).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->MeshesLODData).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FSkeletalMeshLODData::IsSourceGeometryAvailable
                      ((FSkeletalMeshLODData *)
                       ((this->MeshesLODData).AllocatorInstance.Data + (longlong)param_1 * 0x48));
    return bVar2;
  }
  return false;
}

// IsValid @ 14dfd07a0

bool __thiscall GroomBinding_Mesh::FSkeletalMeshData::IsValid(FSkeletalMeshData *this)

{
  if (((this->SkeletalMesh != (USkeletalMesh *)0x0) &&
      (this->MeshData != (FSkeletalMeshRenderData *)0x0)) && (0 < (this->MeshesLODData).ArrayNum)) {
    return true;
  }
  return false;
}

