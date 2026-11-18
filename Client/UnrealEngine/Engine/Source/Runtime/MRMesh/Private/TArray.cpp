// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 3

// AddZeroed @ 146c68000

int __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// AddZeroed @ 146c68070

int __thiscall
TArray<FColor,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FColor,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 4,0,(longlong)param_1 << 2);
  return iVar1;
}

// AddZeroed @ 146c680e0

int __thiscall
TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 4,0,(longlong)param_1 << 2);
  return iVar1;
}

