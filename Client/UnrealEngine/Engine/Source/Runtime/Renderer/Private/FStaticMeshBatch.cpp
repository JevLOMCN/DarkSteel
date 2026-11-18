// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FStaticMeshBatch @ 1456dccd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticMeshBatch * __thiscall
FStaticMeshBatch::FStaticMeshBatch(FStaticMeshBatch *this,FStaticMeshBatch *param_1)

{
  FMeshBatch::FMeshBatch((FMeshBatch *)this,(FMeshBatch *)param_1);
  this->PrimitiveSceneInfo = param_1->PrimitiveSceneInfo;
  this->Id = param_1->Id;
  return this;
}

// FStaticMeshBatch @ 1456dcd20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticMeshBatch * __thiscall
FStaticMeshBatch::FStaticMeshBatch
          (FStaticMeshBatch *this,FPrimitiveSceneInfo *param_1,FMeshBatch *param_2,
          FHitProxyId param_3)

{
  FMeshBatch::FMeshBatch((FMeshBatch *)this,param_2);
  *(int *)&this->_padding_ = param_3.Index;
  this->PrimitiveSceneInfo = param_1;
  this->Id = -1;
  return this;
}

// ~FStaticMeshBatch @ 1456de7c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall FStaticMeshBatch::~FStaticMeshBatch(FStaticMeshBatch *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  FScene *pFVar4;
  longlong lVar5;
  FStaticMeshBatch *pFVar6;
  void *pvVar7;
  code *pcVar8;
  byte bVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  FStaticMeshBatch *pFVar13;
  uint uVar14;
  
  iVar3 = this->Id;
  bVar9 = (byte)iVar3 & 0x1f;
  uVar14 = 1 << bVar9 | 1U >> 0x20 - bVar9;
  pFVar4 = this->PrimitiveSceneInfo->Scene;
  lVar5 = *(longlong *)&pFVar4->StaticMeshes;
  puVar1 = &(pFVar4->StaticMeshes).field_0x10;
  if ((iVar3 < 0) || (*(int *)&(pFVar4->StaticMeshes).field_0x28 <= iVar3)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index>=0 && Index<NumBits",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x5be,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  puVar12 = *(undefined1 **)&(pFVar4->StaticMeshes).field_0x20;
  lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = puVar1;
  }
  if ((*(uint *)(puVar12 + lVar2) & uVar14) == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("AllocationFlags[Index]",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                        ,0xc5,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(int *)&(pFVar4->StaticMeshes).field_0x34 != 0) {
    *(int *)(lVar5 + (longlong)*(int *)&(pFVar4->StaticMeshes).field_0x30 * 8) = iVar3;
  }
  uVar11 = 0xffffffff;
  *(undefined4 *)(lVar5 + (longlong)iVar3 * 8) = 0xffffffff;
  if (0 < *(int *)&(pFVar4->StaticMeshes).field_0x34) {
    uVar11 = *(undefined4 *)&(pFVar4->StaticMeshes).field_0x30;
  }
  *(undefined4 *)(lVar5 + 4 + (longlong)iVar3 * 8) = uVar11;
  puVar12 = &(pFVar4->StaticMeshes).field_0x34;
  *(int *)puVar12 = *(int *)puVar12 + 1;
  *(int *)&(pFVar4->StaticMeshes).field_0x30 = iVar3;
  if ((iVar3 < 0) || (*(int *)&(pFVar4->StaticMeshes).field_0x28 <= iVar3)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index>=0 && Index<NumBits",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x5be,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  puVar12 = *(undefined1 **)&(pFVar4->StaticMeshes).field_0x20;
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = puVar1;
  }
  *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar14;
  pFVar6 = (FStaticMeshBatch *)this->_padding_;
  pFVar13 = this;
  if (pFVar6 != (FStaticMeshBatch *)0x0) {
    pFVar13 = pFVar6;
  }
  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)pFVar13,(int)this->_padding_);
  pvVar7 = (void *)this->_padding_;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

