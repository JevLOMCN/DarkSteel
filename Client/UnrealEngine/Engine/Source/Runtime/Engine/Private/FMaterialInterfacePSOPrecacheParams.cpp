// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FMaterialInterfacePSOPrecacheParams @ 1483e1a90

FMaterialInterfacePSOPrecacheParams * __thiscall
FMaterialInterfacePSOPrecacheParams::FMaterialInterfacePSOPrecacheParams
          (FMaterialInterfacePSOPrecacheParams *this,FMaterialInterfacePSOPrecacheParams *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FPSOPrecacheVertexFactoryData> _Dst;
  ForElementType<FPSOPrecacheVertexFactoryData> _Src;
  
  this->Priority = param_1->Priority;
  this->MaterialInterface = param_1->MaterialInterface;
  (this->PSOPrecacheParams).field0_0x0 = (param_1->PSOPrecacheParams).field0_0x0;
  (this->VertexFactoryDataList).AllocatorInstance.SecondaryData =
       (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
  _Src = (param_1->VertexFactoryDataList).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->VertexFactoryDataList).ArrayNum;
  (this->VertexFactoryDataList).ArrayNum = iVar2;
  if (_Src == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
    _Src = (ForElementType<FPSOPrecacheVertexFactoryData>)&param_1->VertexFactoryDataList;
  }
  piVar1 = &(this->VertexFactoryDataList).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
              (0x10,8,iVar2,0,&(this->VertexFactoryDataList).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->VertexFactoryDataList).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      _Dst = (ForElementType<FPSOPrecacheVertexFactoryData>)&this->VertexFactoryDataList;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 4);
  }
  return this;
}

