// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FLumenPrimitiveGroupRemoveInfo @ 144d3f8a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenPrimitiveGroupRemoveInfo * __thiscall
FLumenPrimitiveGroupRemoveInfo::FLumenPrimitiveGroupRemoveInfo
          (FLumenPrimitiveGroupRemoveInfo *this,FLumenPrimitiveGroupRemoveInfo *param_1)

{
  ForElementType<int> FVar1;
  
  this->Primitive = param_1->Primitive;
  this->PrimitiveIndex = param_1->PrimitiveIndex;
  (this->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  if ((param_1->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData ==
      (ForElementType<int>)0x0) {
    *(undefined4 *)(this->LumenPrimitiveGroupIndices).AllocatorInstance.InlineData =
         *(undefined4 *)(param_1->LumenPrimitiveGroupIndices).AllocatorInstance.InlineData;
  }
  FVar1 = (this->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData =
       (param_1->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData;
  (param_1->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->LumenPrimitiveGroupIndices).ArrayNum = (param_1->LumenPrimitiveGroupIndices).ArrayNum;
  (this->LumenPrimitiveGroupIndices).ArrayMax = (param_1->LumenPrimitiveGroupIndices).ArrayMax;
  (param_1->LumenPrimitiveGroupIndices).ArrayNum = 0;
  (param_1->LumenPrimitiveGroupIndices).ArrayMax = 1;
  return this;
}

// FLumenPrimitiveGroupRemoveInfo @ 144d3f920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenPrimitiveGroupRemoveInfo * __thiscall
FLumenPrimitiveGroupRemoveInfo::FLumenPrimitiveGroupRemoveInfo
          (FLumenPrimitiveGroupRemoveInfo *this,FPrimitiveSceneInfo *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  
  this->Primitive = param_1;
  this->PrimitiveIndex = param_2;
  (this->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  _Src = (param_1->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->LumenPrimitiveGroupIndices).ArrayNum;
  (this->LumenPrimitiveGroupIndices).ArrayNum = iVar2;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = (ForElementType<int>)&param_1->LumenPrimitiveGroupIndices;
  }
  piVar1 = &(this->LumenPrimitiveGroupIndices).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(this->LumenPrimitiveGroupIndices).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)&this->LumenPrimitiveGroupIndices;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  return this;
}

