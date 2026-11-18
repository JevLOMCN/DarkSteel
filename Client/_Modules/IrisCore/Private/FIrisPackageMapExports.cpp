// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// Reset @ 144339d80

void __thiscall UE::Net::FIrisPackageMapExports::Reset(FIrisPackageMapExports *this)

{
  (this->References).ArrayNum = 0;
  if ((this->References).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
              (8,8,0,(ForElementType<TObjectPtr<UObject>_> *)this,0,&(this->References).ArrayMax);
  }
  (this->Names).ArrayNum = 0;
  if ((this->Names).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,0,&(this->Names).AllocatorInstance,0,&(this->Names).ArrayMax);
  }
  return;
}

