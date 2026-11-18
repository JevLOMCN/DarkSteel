// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SSL
// Functions: 1

// FCertInfo @ 143146100

FCertInfo * __thiscall
FSslCertificateDelegates::FCertInfo::FCertInfo(FCertInfo *this,FCertInfo *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_char> _Dst;
  ForElementType<unsigned_char> FVar3;
  ForElementType<unsigned_char> FVar4;
  
  (this->KeyDigest).AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  FVar4 = (param_1->KeyDigest).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->KeyDigest).ArrayNum;
  (this->KeyDigest).ArrayNum = iVar2;
  FVar3 = (ForElementType<unsigned_char>)param_1;
  if (FVar4 != (ForElementType<unsigned_char>)0x0) {
    FVar3 = FVar4;
  }
  piVar1 = &(this->KeyDigest).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x20;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,iVar2,0,(ForElementType<unsigned_char> *)this,iVar2,piVar1);
    FVar4 = (this->KeyDigest).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<unsigned_char>)this;
    if (FVar4 != (ForElementType<unsigned_char>)0x0) {
      _Dst = FVar4;
    }
    memcpy((void *)_Dst,(void *)FVar3,(longlong)iVar2);
  }
  (this->Thumbprint).AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  FVar4 = (param_1->Thumbprint).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Thumbprint).ArrayNum;
  (this->Thumbprint).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<unsigned_char>)0x0) {
    FVar4 = (ForElementType<unsigned_char>)&param_1->Thumbprint;
  }
  piVar1 = &(this->Thumbprint).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x14;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,iVar2,0,&(this->Thumbprint).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->Thumbprint).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<unsigned_char>)0x0) {
      FVar3 = (ForElementType<unsigned_char>)&this->Thumbprint;
    }
    memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2);
  }
  ::FString::FString(&this->Issuer,&param_1->Issuer);
  ::FString::FString(&this->Subject,&param_1->Subject);
  return this;
}

