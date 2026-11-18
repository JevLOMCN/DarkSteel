// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FChaosPhysicsMaterialMask @ 1436f58a0

FChaosPhysicsMaterialMask * __thiscall
Chaos::FChaosPhysicsMaterialMask::FChaosPhysicsMaterialMask
          (FChaosPhysicsMaterialMask *this,FChaosPhysicsMaterialMask *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->MaskData;
  this->SizeX = param_1->SizeX;
  this->SizeY = param_1->SizeY;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MaskData).ArrayMax;
  iVar3 = (param_1->MaskData).ArrayNum;
  _Src = (param_1->MaskData).AllocatorInstance.Data;
  (this->MaskData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  this->UVChannelIndex = param_1->UVChannelIndex;
  this->AddressX = param_1->AddressX;
  this->AddressY = param_1->AddressY;
  return this;
}

