// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FConstructData @ 142b7ab70

FConstructData * __thiscall
UE::AssetRegistry::DependsNode::FConstructData::FConstructData
          (FConstructData *this,FConstructData *param_1)

{
  TMap<FDependsNode_*,TPropertyCombinationSet<3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>_>
  *pTVar1;
  TMap<FDependsNode_*,TPropertyCombinationSet<3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  pTVar1 = &this->PackageDependencies;
  this->SourceNode = param_1->SourceNode;
  *(undefined8 *)pTVar1 = 0;
  pTVar2 = &param_1->PackageDependencies;
  *(undefined8 *)&(this->PackageDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->PackageDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->PackageDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->PackageDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->PackageDependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackageDependencies).field_0x34 = 0;
  *(undefined8 *)&(this->PackageDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->PackageDependencies).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->PackageDependencies).field_0x10;
    *(undefined4 *)&(this->PackageDependencies).field_0x8 =
         *(undefined4 *)&(param_1->PackageDependencies).field_0x8;
    _Src = &(param_1->PackageDependencies).field_0x10;
    *(undefined4 *)&(this->PackageDependencies).field_0xc =
         *(undefined4 *)&(param_1->PackageDependencies).field_0xc;
    *(undefined8 *)&(param_1->PackageDependencies).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->PackageDependencies).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->PackageDependencies).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->PackageDependencies).field_0x20 =
           *(undefined8 *)&(param_1->PackageDependencies).field_0x20;
      *(undefined8 *)&(param_1->PackageDependencies).field_0x20 = 0;
      *(undefined4 *)&(this->PackageDependencies).field_0x28 =
           *(undefined4 *)&(param_1->PackageDependencies).field_0x28;
      *(undefined4 *)&(this->PackageDependencies).field_0x2c =
           *(undefined4 *)&(param_1->PackageDependencies).field_0x2c;
      *(undefined8 *)&(param_1->PackageDependencies).field_0x28 = 0;
    }
    *(undefined4 *)&(this->PackageDependencies).field_0x30 =
         *(undefined4 *)&(param_1->PackageDependencies).field_0x30;
    *(undefined4 *)&(this->PackageDependencies).field_0x34 =
         *(undefined4 *)&(param_1->PackageDependencies).field_0x34;
    *(undefined4 *)&(param_1->PackageDependencies).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PackageDependencies).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->PackageDependencies).field_0x40 == 0) {
    *(undefined4 *)&(this->PackageDependencies).field_0x38 =
         *(undefined4 *)&(param_1->PackageDependencies).field_0x38;
  }
  pvVar3 = *(void **)&(this->PackageDependencies).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->PackageDependencies).field_0x40 =
       *(undefined8 *)&(param_1->PackageDependencies).field_0x40;
  *(undefined8 *)&(param_1->PackageDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->PackageDependencies).field_0x48 =
       *(undefined4 *)&(param_1->PackageDependencies).field_0x48;
  *(undefined4 *)&(param_1->PackageDependencies).field_0x48 = 0;
  (this->SearchableNamesNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchableNamesNodes).AllocatorInstance.Data =
       (param_1->SearchableNamesNodes).AllocatorInstance.Data;
  (param_1->SearchableNamesNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchableNamesNodes).ArrayNum = (param_1->SearchableNamesNodes).ArrayNum;
  (this->SearchableNamesNodes).ArrayMax = (param_1->SearchableNamesNodes).ArrayMax;
  (param_1->SearchableNamesNodes).ArrayNum = 0;
  (param_1->SearchableNamesNodes).ArrayMax = 0;
  return this;
}

