// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// AddLevelVolume @ 14541a520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVolumetricLightmapSceneData::AddLevelVolume
          (FVolumetricLightmapSceneData *this,FPrecomputedVolumetricLightmap *param_1,
          EShadingPath param_2,bool param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FPrecomputedVolumetricLightmap_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPrecomputedVolumetricLightmap *local_res10;
  
  pTVar3 = &this->LevelVolumetricLightmaps;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  local_res10 = param_1;
  if (((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar4 + (longlong)(this->LevelVolumetricLightmaps).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->LevelVolumetricLightmaps).ArrayNum;
  piVar1 = &(this->LevelVolumetricLightmaps).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->LevelVolumetricLightmaps).ArrayNum = iVar7 + 1;
  *(FPrecomputedVolumetricLightmap **)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8) =
       local_res10;
  if (param_3) {
    this->PersistentLevelVolumetricLightmap = local_res10;
  }
  FPrecomputedVolumetricLightmapData::AddToSceneData
            (local_res10->Data,&this->GlobalVolumetricLightmapData);
  bVar6 = 1 < *(int *)&(this->CPUInterpolationCache).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar2 = &(this->CPUInterpolationCache).field_0xc;
  *(undefined4 *)&(this->CPUInterpolationCache).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,0,(ForAnyElementType *)this,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->CPUInterpolationCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CPUInterpolationCache).field_0x34 = 0;
  iVar7 = *(int *)&(this->CPUInterpolationCache).field_0x2c;
  *(undefined4 *)&(this->CPUInterpolationCache).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->CPUInterpolationCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CPUInterpolationCache).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CPUInterpolationCache).field_0x48 = 1;
    TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

// GetLevelVolumetricLightmap @ 14543de40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrecomputedVolumetricLightmap * __thiscall
FVolumetricLightmapSceneData::GetLevelVolumetricLightmap(FVolumetricLightmapSceneData *this)

{
  return &this->GlobalVolumetricLightmap;
}

// HasData @ 145442e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FVolumetricLightmapSceneData::HasData(FVolumetricLightmapSceneData *this)

{
  if ((this->LevelVolumetricLightmaps).ArrayNum < 1) {
    return false;
  }
  if (2 < *(int *)&this->Scene->field_0x8) {
    return (this->GlobalVolumetricLightmapData).IndirectionTexture.Texture.Reference !=
           (FRHITexture *)0x0;
  }
  return 0 < (this->GlobalVolumetricLightmapData).IndirectionTexture.Data.ArrayNum;
}

// RemoveLevelVolume @ 14544a980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVolumetricLightmapSceneData::RemoveLevelVolume
          (FVolumetricLightmapSceneData *this,FPrecomputedVolumetricLightmap *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPrecomputedVolumetricLightmap *pFVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FPrecomputedVolumetricLightmap *local_res10;
  
  pFVar1 = (this->LevelVolumetricLightmaps).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(this->LevelVolumetricLightmaps).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar8 = (this->LevelVolumetricLightmaps).ArrayNum;
  pFVar4 = local_res10;
  if (iVar8 != 0) {
    iVar9 = 0;
    pFVar1 = (this->LevelVolumetricLightmaps).AllocatorInstance.Data;
    bVar3 = *(FPrecomputedVolumetricLightmap **)pFVar1 != local_res10;
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar7 + 1;
        if (iVar8 <= lVar5) break;
      } while (bVar3 == (*(FPrecomputedVolumetricLightmap **)(pFVar1 + lVar5 * 8) != pFVar4));
      if (bVar3 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pFVar4 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < iVar8);
    (this->LevelVolumetricLightmaps).ArrayNum = iVar9;
  }
  if (this->PersistentLevelVolumetricLightmap == (FPrecomputedVolumetricLightmap *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = this->PersistentLevelVolumetricLightmap->Data->BrickDataBaseOffsetInAtlas;
  }
  FPrecomputedVolumetricLightmapData::RemoveFromSceneData
            (pFVar4->Data,&this->GlobalVolumetricLightmapData,iVar8);
  if (this->PersistentLevelVolumetricLightmap == local_res10) {
    this->PersistentLevelVolumetricLightmap = (FPrecomputedVolumetricLightmap *)0x0;
  }
  bVar3 = 1 < *(int *)&(this->CPUInterpolationCache).field_0x48;
  if (!bVar3) {
    TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
                      *)this);
  }
  *(undefined4 *)&(this->CPUInterpolationCache).field_0x8 = 0;
  if (*(int *)&(this->CPUInterpolationCache).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,0,(ForAnyElementType *)this,0,
               (int *)&(this->CPUInterpolationCache).field_0xc);
  }
  *(undefined4 *)&(this->CPUInterpolationCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CPUInterpolationCache).field_0x34 = 0;
  iVar8 = *(int *)&(this->CPUInterpolationCache).field_0x2c;
  *(undefined4 *)&(this->CPUInterpolationCache).field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->CPUInterpolationCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CPUInterpolationCache).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CPUInterpolationCache).field_0x48 = 1;
    TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

