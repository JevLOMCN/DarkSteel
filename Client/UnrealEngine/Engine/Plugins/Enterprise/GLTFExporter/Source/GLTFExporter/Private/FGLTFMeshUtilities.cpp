// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 28

// ResolveMaterials<UMaterialInterface_*> @ 14e5cb1f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGLTFMeshUtilities::ResolveMaterials<UMaterialInterface_*>
          (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar1 = param_2->ArrayNum;
  TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (param_1,iVar1,Default);
  uVar7 = 0;
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(longlong *)(pFVar2 + lVar6 * 8) == 0) {
        uVar5 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        *(undefined8 *)(pFVar2 + lVar6 * 8) =
             *(undefined8 *)((param_2->AllocatorInstance).Data + lVar6 * 8);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
  }
  return;
}

// ResolveMaterials<FSkeletalMaterial> @ 14e5cb310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGLTFMeshUtilities::ResolveMaterials<FSkeletalMaterial>
          (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar1 = param_2->ArrayNum;
  TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (param_1,iVar1,Default);
  uVar7 = 0;
  if (0 < iVar1) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(longlong *)(pFVar2 + lVar6 * 8) == 0) {
        uVar5 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        *(undefined8 *)(pFVar2 + lVar6 * 8) =
             *(undefined8 *)((param_2->AllocatorInstance).Data + lVar8);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar6 < iVar1);
  }
  return;
}

// ResolveMaterials<FStaticMaterial> @ 14e5cb430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGLTFMeshUtilities::ResolveMaterials<FStaticMaterial>
          (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar1 = param_2->ArrayNum;
  TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (param_1,iVar1,Default);
  uVar7 = 0;
  if (0 < iVar1) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(longlong *)(pFVar2 + lVar6 * 8) == 0) {
        uVar5 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        *(undefined8 *)(pFVar2 + lVar6 * 8) =
             *(undefined8 *)((param_2->AllocatorInstance).Data + lVar8);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar6 < iVar1);
  }
  return;
}

// FullyLoad @ 14e5f24a0

void __cdecl FGLTFMeshUtilities::FullyLoad(USkeletalMesh *param_1)

{
  UStreamableRenderAsset::SetForceMipLevelsToBeResident
            ((UStreamableRenderAsset *)param_1,__real_41f00000,0);
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)param_1,false,false);
  return;
}

// FullyLoad @ 14e5f24e0

void __cdecl FGLTFMeshUtilities::FullyLoad(UStaticMesh *param_1)

{
  UStreamableRenderAsset::SetForceMipLevelsToBeResident
            ((UStreamableRenderAsset *)param_1,__real_41f00000,0);
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)param_1,false,false);
  return;
}

// GetDefaultMaterial @ 14e5f5dc0

UMaterialInterface * __cdecl FGLTFMeshUtilities::GetDefaultMaterial(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultMaterial = UMaterial::GetDefaultMaterial(MD_Surface);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (UMaterialInterface *)DefaultMaterial;
}

// GetLOD @ 14e5f6940

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
FGLTFMeshUtilities::GetLOD(USkeletalMesh *param_1,USkeletalMeshComponent *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  if (param_2 == (USkeletalMeshComponent *)0x0) {
LAB_14e5f698d:
    if (param_1 == (USkeletalMesh *)0x0) {
      iVar4 = -1;
    }
    else {
      piVar2 = (int *)(**(code **)(param_1->_padding_ + 0x3a8))(param_1);
      iVar4 = *piVar2;
    }
  }
  else {
    iVar1 = USkinnedMeshComponent::GetForcedLOD((USkinnedMeshComponent *)param_2);
    iVar4 = iVar1 + -1;
    if (0 < iVar1 + -1) goto LAB_14e5f69ab;
    if ((param_2->_padding_ & 0x800000000000000) == 0) goto LAB_14e5f698d;
    iVar4 = (int)param_2->_padding_;
  }
  if (iVar4 < param_3) {
    iVar4 = param_3;
  }
LAB_14e5f69ab:
  if (param_1 != (USkeletalMesh *)0x0) {
    lVar3 = (**(code **)(param_1->_padding_ + 0x398))(param_1);
    if (lVar3 != 0) {
      iVar5 = *(int *)(lVar3 + 8) + -1;
    }
  }
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  return iVar5;
}

// GetLOD @ 14e5f69f0

int __cdecl
FGLTFMeshUtilities::GetLOD(UStaticMesh *param_1,USplineMeshComponent *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  if (param_2 == (USplineMeshComponent *)0x0) {
LAB_14e5f6a1d:
    if (param_1 == (UStaticMesh *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (param_1->MinLOD).Default;
    }
  }
  else {
    iVar2 = (int)param_2->_padding_ + -1;
    if (0 < iVar2) goto LAB_14e5f6a33;
    if ((param_2->_padding_ & 0x80000000000) == 0) goto LAB_14e5f6a1d;
    iVar2 = *(int *)((longlong)&param_2->_padding_ + 4);
  }
  if (iVar2 < param_3) {
    iVar2 = param_3;
  }
LAB_14e5f6a33:
  if (param_1 != (UStaticMesh *)0x0) {
    iVar1 = UStaticMesh::GetNumLODs(param_1);
    iVar1 = iVar1 + -1;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetLOD @ 14e5f6a50

int __cdecl
FGLTFMeshUtilities::GetLOD(UStaticMesh *param_1,UStaticMeshComponent *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  if (param_2 == (UStaticMeshComponent *)0x0) {
LAB_14e5f6a7d:
    if (param_1 == (UStaticMesh *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (param_1->MinLOD).Default;
    }
  }
  else {
    iVar2 = param_2->ForcedLodModel + -1;
    if (0 < iVar2) goto LAB_14e5f6a93;
    if (param_2->bOverrideMinLOD == '\0') goto LAB_14e5f6a7d;
    iVar2 = param_2->MinLOD;
  }
  if (iVar2 < param_3) {
    iVar2 = param_3;
  }
LAB_14e5f6a93:
  if (param_1 != (UStaticMesh *)0x0) {
    iVar1 = UStaticMesh::GetNumLODs(param_1);
    iVar1 = iVar1 + -1;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetMaterial @ 14e5f7450

UMaterialInterface * __cdecl FGLTFMeshUtilities::GetMaterial(FSkeletalMaterial *param_1)

{
  return (param_1->MaterialInterface).field0_0x0.DebugPtr;
}

// GetMaterial @ 14e5f7460

UMaterialInterface * __cdecl FGLTFMeshUtilities::GetMaterial(FStaticMaterial *param_1)

{
  return (param_1->MaterialInterface).field0_0x0.DebugPtr;
}

// GetMaterial @ 14e5f7470

UMaterialInterface * __cdecl FGLTFMeshUtilities::GetMaterial(UMaterialInterface *param_1)

{
  return param_1;
}

// GetMaterials @ 14e5f78b0

TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> * __cdecl
FGLTFMeshUtilities::GetMaterials(USkeletalMesh *param_1)

{
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e5f78b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)
           (**(code **)(param_1->_padding_ + 0x3c0))();
  return pTVar1;
}

// GetMaterials @ 14e5f78c0

TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> * __cdecl
FGLTFMeshUtilities::GetMaterials(UStaticMesh *param_1)

{
  return &param_1->StaticMaterials;
}

// GetMaximumLOD @ 14e5f78d0

int __cdecl FGLTFMeshUtilities::GetMaximumLOD(USkeletalMesh *param_1)

{
  longlong lVar1;
  
  if (param_1 != (USkeletalMesh *)0x0) {
    lVar1 = (**(code **)(param_1->_padding_ + 0x398))();
    if (lVar1 != 0) {
      return *(int *)(lVar1 + 8) + -1;
    }
  }
  return -1;
}

// GetMaximumLOD @ 14e5f7910

int __cdecl FGLTFMeshUtilities::GetMaximumLOD(UStaticMesh *param_1)

{
  int iVar1;
  
  if (param_1 != (UStaticMesh *)0x0) {
    iVar1 = UStaticMesh::GetNumLODs(param_1);
    return iVar1 + -1;
  }
  return -1;
}

// GetMinimumLOD @ 14e5f79f0

int __cdecl
FGLTFMeshUtilities::GetMinimumLOD(USkeletalMesh *param_1,USkeletalMeshComponent *param_2)

{
  int *piVar1;
  
  if ((param_2 != (USkeletalMeshComponent *)0x0) && ((param_2->_padding_ & 0x800000000000000) != 0))
  {
    return (int)param_2->_padding_;
  }
  if (param_1 != (USkeletalMesh *)0x0) {
    piVar1 = (int *)(**(code **)(param_1->_padding_ + 0x3a8))();
    return *piVar1;
  }
  return -1;
}

// GetMinimumLOD @ 14e5f7a40

int __cdecl FGLTFMeshUtilities::GetMinimumLOD(UStaticMesh *param_1,UStaticMeshComponent *param_2)

{
  if ((param_2 != (UStaticMeshComponent *)0x0) && (param_2->bOverrideMinLOD != '\0')) {
    return param_2->MinLOD;
  }
  if (param_1 != (UStaticMesh *)0x0) {
    return (param_1->MinLOD).Default;
  }
  return -1;
}

// GetRenderData @ 14e5fdc80

FStaticMeshLODResources * __cdecl
FGLTFMeshUtilities::GetRenderData(UStaticMesh *param_1,int param_2)

{
  int iVar1;
  FStaticMeshRenderData *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FStaticMeshLODResources *pFVar7;
  
  if ((param_1->RenderData).Ptr == (FStaticMeshRenderData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRenderData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x27b4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FStaticMeshLODResources *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (param_1->RenderData).Ptr;
  iVar1 = (pFVar2->LODResources).Array.ArrayNum;
  uVar6 = iVar1 - 1;
  if (param_2 < (int)uVar6) {
    uVar6 = param_2;
  }
  uVar4 = 0;
  if (0 < (int)uVar6) {
    uVar4 = uVar6;
  }
  uVar6 = 0;
  if ((int)uVar4 < iVar1) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FStaticMeshLODResources *)(*pcVar3)();
      return pFVar7;
    }
  }
  return *(FStaticMeshLODResources **)
          ((pFVar2->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
}

// GetRenderData @ 14e5fdc90

FSkeletalMeshLODRenderData * __cdecl
FGLTFMeshUtilities::GetRenderData(USkeletalMesh *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  uint uVar5;
  
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))();
  uVar5 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshLODRenderData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSkeletalMeshLODRenderData **)(*plVar3 + (longlong)param_2 * 8);
}

// GetSectionIndices @ 14e5fdd50

FMeshAttributesArray<int> * __cdecl
FGLTFMeshUtilities::GetSectionIndices
          (FMeshAttributesArray<int> *__return_storage_ptr__,FStaticMeshLODResources *param_1,
          int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FStaticMeshSectionArray *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMeshAttributesArray<int> *pFVar8;
  FStaticMeshSectionArray *pFVar9;
  uint local_28 [4];
  
  puVar1 = &__return_storage_ptr__->field_0xc;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined4 *)puVar1 = 0;
  uVar2 = *(uint *)&(param_1->Sections).field_0x28;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,(ForAnyElementType *)__return_storage_ptr__,0,(int *)puVar1);
  }
  iVar7 = *(int *)&(param_1->Sections).field_0x28;
  local_28[0] = 0;
  if (0 < iVar7) {
    do {
      uVar2 = local_28[0];
      uVar6 = 0;
      if ((int)local_28[0] < iVar7) {
        uVar6 = ~local_28[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMeshAttributesArray<int> *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = *(FStaticMeshSectionArray **)&(param_1->Sections).field_0x20;
      pFVar9 = &param_1->Sections;
      if (pFVar3 != (FStaticMeshSectionArray *)0x0) {
        pFVar9 = pFVar3;
      }
      if (*(int *)(&pFVar9->field_0x0 + (longlong)(int)uVar2 * 0x1c) == param_2) {
        if (((*(uint **)__return_storage_ptr__ <= local_28) &&
            (local_28 < *(uint **)__return_storage_ptr__ + *(int *)puVar1)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FMeshAttributesArray<int> *)(*pcVar4)();
          return pFVar8;
        }
        iVar7 = *(int *)&__return_storage_ptr__->field_0x8;
        if (iVar7 == *(int *)puVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar1);
        }
        *(int *)&__return_storage_ptr__->field_0x8 = iVar7 + 1;
        *(uint *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar7 * 4) = local_28[0];
      }
      iVar7 = *(int *)&(param_1->Sections).field_0x28;
      local_28[0] = local_28[0] + 1;
    } while ((int)local_28[0] < iVar7);
  }
  return __return_storage_ptr__;
}

// GetSectionIndices @ 14e5fdf10

FMeshAttributesArray<int> * __cdecl
FGLTFMeshUtilities::GetSectionIndices
          (FMeshAttributesArray<int> *__return_storage_ptr__,FSkeletalMeshLODRenderData *param_1,
          int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FMeshAttributesArray<int> *pFVar7;
  uint local_28 [4];
  
  puVar1 = &__return_storage_ptr__->field_0xc;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined4 *)puVar1 = 0;
  uVar2 = (param_1->RenderSections).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,(ForAnyElementType *)__return_storage_ptr__,0,(int *)puVar1);
  }
  iVar6 = (param_1->RenderSections).ArrayNum;
  local_28[0] = 0;
  if (0 < iVar6) {
    do {
      uVar2 = local_28[0];
      uVar5 = 0;
      if ((int)local_28[0] < iVar6) {
        uVar5 = ~local_28[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMeshAttributesArray<int> *)(*pcVar3)();
        return pFVar7;
      }
      if ((uint)*(ushort *)
                 ((param_1->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x118)
          == param_2) {
        if (((*(uint **)__return_storage_ptr__ <= local_28) &&
            (local_28 < *(uint **)__return_storage_ptr__ + *(int *)puVar1)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FMeshAttributesArray<int> *)(*pcVar3)();
          return pFVar7;
        }
        iVar6 = *(int *)&__return_storage_ptr__->field_0x8;
        if (iVar6 == *(int *)puVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar1);
        }
        *(int *)&__return_storage_ptr__->field_0x8 = iVar6 + 1;
        *(uint *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar6 * 4) = local_28[0];
      }
      iVar6 = (param_1->RenderSections).ArrayNum;
      local_28[0] = local_28[0] + 1;
    } while ((int)local_28[0] < iVar6);
  }
  return __return_storage_ptr__;
}

// GetSectionIndices @ 14e5fe0c0

FMeshAttributesArray<int> * __cdecl
FGLTFMeshUtilities::GetSectionIndices
          (FMeshAttributesArray<int> *__return_storage_ptr__,USkeletalMesh *param_1,int param_2,
          int param_3)

{
  FSkeletalMeshLODRenderData *pFVar1;
  
  if (param_1 == (USkeletalMesh *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  pFVar1 = GetRenderData(param_1,param_2);
  GetSectionIndices(__return_storage_ptr__,pFVar1,param_3);
  return __return_storage_ptr__;
}

// GetSectionIndices @ 14e5fe120

FMeshAttributesArray<int> * __cdecl
FGLTFMeshUtilities::GetSectionIndices
          (FMeshAttributesArray<int> *__return_storage_ptr__,UStaticMesh *param_1,int param_2,
          int param_3)

{
  FStaticMeshLODResources *pFVar1;
  
  if (param_1 == (UStaticMesh *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  pFVar1 = UStaticMesh::GetLODForExport(param_1,param_2);
  GetSectionIndices(__return_storage_ptr__,pFVar1,param_3);
  return __return_storage_ptr__;
}

// ResolveMaterials @ 14e6117d0

void __cdecl
FGLTFMeshUtilities::ResolveMaterials(UMaterialInterface **param_1,ULandscapeComponent *param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = ULandscapeComponent::GetLandscapeMaterial(param_2,-1);
  *param_1 = pUVar1;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    pUVar1 = GetDefaultMaterial();
    *param_1 = pUVar1;
  }
  return;
}

// ResolveMaterials @ 14e611810

void __cdecl
FGLTFMeshUtilities::ResolveMaterials
          (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *param_1,
          UMaterialInterface *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMaterialInterface_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 == 0) {
      *(UMaterialInterface **)pFVar3 = param_2;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ResolveMaterials @ 14e611870

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGLTFMeshUtilities::ResolveMaterials
          (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *param_1,
          USkeletalMeshComponent *param_2,USkeletalMesh *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  UMaterialInterface *pUVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  void *local_38 [2];
  
  if (param_2 != (USkeletalMeshComponent *)0x0) {
    pTVar6 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
             (**(code **)(param_2->_padding_ + 0xa90))(param_2,local_38);
    ResolveMaterials<UMaterialInterface_*>(param_1,pTVar6);
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  if (param_3 != (USkeletalMesh *)0x0) {
    plVar7 = (longlong *)(**(code **)(param_3->_padding_ + 0x3c0))(param_3);
    iVar1 = (int)plVar7[1];
    TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,iVar1,Default);
    uVar11 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      lVar12 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar5 = ~uVar11 >> 0x1f;
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
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (*(longlong *)(pFVar2 + lVar9 * 8) == 0) {
          uVar5 = 0;
          if ((int)uVar11 < (int)plVar7[1]) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)(pFVar2 + lVar9 * 8) = *(undefined8 *)(lVar12 + *plVar7);
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 1;
        lVar12 = lVar12 + 0x30;
      } while (lVar9 < iVar1);
    }
  }
  pUVar8 = GetDefaultMaterial();
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar1 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UMaterialInterface_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    if (*(longlong *)pFVar10 == 0) {
      *(UMaterialInterface **)pFVar10 = pUVar8;
    }
    pFVar10 = pFVar10 + 8;
  }
  return;
}

// ResolveMaterials @ 14e611a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGLTFMeshUtilities::ResolveMaterials
          (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *param_1,
          UStaticMeshComponent *param_2,UStaticMesh *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UMaterialInterface *pUVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  void *local_38 [2];
  
  if (param_2 != (UStaticMeshComponent *)0x0) {
    pTVar6 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
             (**(code **)(param_2->_padding_ + 0xa90))(param_2,local_38);
    ResolveMaterials<UMaterialInterface_*>(param_1,pTVar6);
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  if (param_3 != (UStaticMesh *)0x0) {
    iVar1 = (param_3->StaticMaterials).ArrayNum;
    TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,iVar1,Default);
    uVar10 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      lVar11 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
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
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (*(longlong *)(pFVar2 + lVar8 * 8) == 0) {
          uVar5 = 0;
          if ((int)uVar10 < (param_3->StaticMaterials).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)(pFVar2 + lVar8 * 8) =
               *(undefined8 *)((param_3->StaticMaterials).AllocatorInstance.Data + lVar11);
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 1;
        lVar11 = lVar11 + 0x38;
      } while (lVar8 < iVar1);
    }
  }
  pUVar7 = GetDefaultMaterial();
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar1 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UMaterialInterface_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar2) break;
    if (*(longlong *)pFVar9 == 0) {
      *(UMaterialInterface **)pFVar9 = pUVar7;
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

