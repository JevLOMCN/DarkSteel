// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FLumenSceneDataIterator @ 144d40a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenSceneDataIterator * __thiscall
FLumenSceneDataIterator::FLumenSceneDataIterator(FLumenSceneDataIterator *this,FScene *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar8 = 0;
  iVar3 = *(int *)&(param_1->PerViewOrGPULumenSceneData).field_0x28;
  puVar1 = &(param_1->PerViewOrGPULumenSceneData).field_0x10;
  iVar9 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->PerViewOrGPULumenSceneData).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_144d40af9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_144d40af9:
  *(TMap<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
    **)&this->NextSceneData = &param_1->PerViewOrGPULumenSceneData;
  *(ulonglong *)&(this->NextSceneData).field_0x8 = CONCAT44(uVar5,iVar8);
  *(undefined1 **)&(this->NextSceneData).field_0x10 = puVar1;
  *(ulonglong *)&(this->NextSceneData).field_0x18 = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)&(this->NextSceneData).field_0x20 = CONCAT44(iVar6,iVar9);
  this->Scene = param_1;
  this->LumenSceneData = (FLumenSceneData *)0x0;
  if (param_1->DefaultLumenSceneData == (FLumenSceneData *)0x0) {
    operator++(this);
  }
  else {
    this->LumenSceneData = param_1->DefaultLumenSceneData;
  }
  return this;
}

// operator++ @ 144d44340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenSceneDataIterator * __thiscall
FLumenSceneDataIterator::operator++(FLumenSceneDataIterator *this)

{
  undefined1 *puVar1;
  
  if (*(int *)&(this->NextSceneData).field_0x1c <
      *(int *)(*(longlong *)&(this->NextSceneData).field_0x10 + 0x18)) {
    this->LumenSceneData =
         *(FLumenSceneData **)
          (**(longlong **)&this->NextSceneData + 8 +
          (longlong)*(int *)&(this->NextSceneData).field_0x1c * 0x18);
    puVar1 = &(this->NextSceneData).field_0x18;
    *(uint *)puVar1 = *(uint *)puVar1 & ~*(uint *)&(this->NextSceneData).field_0xc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)&(this->NextSceneData).field_0x8);
    return this;
  }
  this->LumenSceneData = (FLumenSceneData *)0x0;
  return this;
}

