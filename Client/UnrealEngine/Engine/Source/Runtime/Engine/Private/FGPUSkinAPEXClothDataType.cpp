// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 147cc9c60

FGPUSkinAPEXClothDataType * __thiscall
FGPUSkinAPEXClothDataType::operator=
          (FGPUSkinAPEXClothDataType *this,FGPUSkinAPEXClothDataType *param_1)

{
  int *piVar1;
  TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *this_01;
  FScriptContainerElement *_Src;
  
  FGPUSkinDataType::operator=((FGPUSkinDataType *)this,(FGPUSkinDataType *)param_1);
  this_00 = (param_1->ClothBuffer).Reference;
  this_01 = (this->ClothBuffer).Reference;
  if (this_01 != this_00) {
    (this->ClothBuffer).Reference = this_00;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  pTVar2 = &this->ClothIndexMapping;
  if (pTVar2 != &param_1->ClothIndexMapping) {
    iVar3 = (param_1->ClothIndexMapping).ArrayNum;
    piVar1 = &(this->ClothIndexMapping).ArrayMax;
    _Src = (param_1->ClothIndexMapping).AllocatorInstance.Data;
    (this->ClothIndexMapping).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  return this;
}

