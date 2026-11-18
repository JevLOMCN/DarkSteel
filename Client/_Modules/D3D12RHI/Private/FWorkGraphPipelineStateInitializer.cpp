// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// SetNameTable @ 145ab8980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FWorkGraphPipelineStateInitializer::SetNameTable
          (FWorkGraphPipelineStateInitializer *this,
          TArrayView<FWorkGraphPipelineStateInitializer::FNameMap,int> *param_1,ulong64 param_2)

{
  TArray<FWorkGraphPipelineStateInitializer::FNameMap,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  pTVar1 = &this->NameMaps;
  DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>
            ((FNameMap *)(pTVar1->AllocatorInstance).Data,(this->NameMaps).ArrayNum);
  iVar5 = param_1->ArrayNum;
  piVar2 = &(this->NameMaps).ArrayMax;
  (this->NameMaps).ArrayNum = iVar5;
  if ((iVar5 == 0) && (*piVar2 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FWorkGraphPipelineStateInitializer::FNameMap,FWorkGraphPipelineStateInitializer::FNameMap,int>
              ((pTVar1->AllocatorInstance).Data,param_1->DataPtr,iVar5);
  }
  if (param_2 == 0) {
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    uVar9 = 0;
    for (lVar8 = (longlong)(this->NameMaps).ArrayNum; lVar8 != 0; lVar8 = lVar8 + -1) {
      iVar5 = *(int *)(pFVar7 + 0x18) + -1;
      if (*(int *)(pFVar7 + 0x18) == 0) {
        pwVar6 = L"";
        iVar5 = 0;
      }
      else {
        pwVar6 = *(wchar_t **)(pFVar7 + 0x10);
      }
      uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
      iVar5 = *(int *)(pFVar7 + 8) + -1;
      if (*(int *)(pFVar7 + 8) == 0) {
        pwVar6 = L"";
        iVar5 = 0;
      }
      else {
        pwVar6 = *(wchar_t **)pFVar7;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
      pFVar7 = pFVar7 + 0x28;
      uVar9 = uVar9 ^ (uVar9 >> 2) +
                      (uVar4 * 0x40 + -0x61c88647 + uVar3 + (uVar4 >> 2) ^ uVar4) + uVar9 * 0x40 +
                      -0x61c88647;
    }
    this->_padding_ = (ulonglong)uVar9;
  }
  else {
    this->_padding_ = param_2;
  }
  return;
}

