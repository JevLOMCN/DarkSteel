// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FBatchExports @ 1442f5c30

FBatchExports * __thiscall
UE::Net::Private::FNetExportContext::FBatchExports::FBatchExports
          (FBatchExports *this,FBatchExports *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Net::FNetRefHandle> FVar3;
  ForElementType<UE::Net::FNetRefHandle> _Dst;
  ForElementType<UE::Net::FNetObjectReference> _Dst_00;
  ForElementType<UE::Net::FNetToken> FVar4;
  ForElementType<UE::Net::FNetRefHandle> _Src;
  ForElementType<UE::Net::FNetToken> FVar5;
  ForElementType<UE::Net::FNetObjectReference> _Src_00;
  
  (this->HandlesExportedInCurrentBatch).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetRefHandle>)0x0;
  FVar3 = (param_1->HandlesExportedInCurrentBatch).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->HandlesExportedInCurrentBatch).ArrayNum;
  (this->HandlesExportedInCurrentBatch).ArrayNum = iVar2;
  _Src = (ForElementType<UE::Net::FNetRefHandle>)param_1;
  if (FVar3 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->HandlesExportedInCurrentBatch).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
              (8,8,iVar2,0,(ForElementType<UE::Net::FNetRefHandle> *)this,iVar2,piVar1);
    FVar3 = (this->HandlesExportedInCurrentBatch).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<UE::Net::FNetRefHandle>)this;
    if (FVar3 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
  }
  (this->NetTokensExportedInCurrentBatch).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  FVar5 = (param_1->NetTokensExportedInCurrentBatch).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->NetTokensExportedInCurrentBatch).ArrayNum;
  (this->NetTokensExportedInCurrentBatch).ArrayNum = iVar2;
  if (FVar5 == (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar5 = (ForElementType<UE::Net::FNetToken>)&param_1->NetTokensExportedInCurrentBatch;
  }
  piVar1 = &(this->NetTokensExportedInCurrentBatch).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
              (4,4,iVar2,0,&(this->NetTokensExportedInCurrentBatch).AllocatorInstance,iVar2,piVar1);
    FVar4 = (this->NetTokensExportedInCurrentBatch).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar4 = (ForElementType<UE::Net::FNetToken>)&this->NetTokensExportedInCurrentBatch;
    }
    memcpy((void *)FVar4,(void *)FVar5,(longlong)iVar2 << 2);
  }
  (this->ReferencesPendingExportInCurrentBatch).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetObjectReference>)0x0;
  _Src_00 = (param_1->ReferencesPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ReferencesPendingExportInCurrentBatch).ArrayNum;
  (this->ReferencesPendingExportInCurrentBatch).ArrayNum = iVar2;
  if (_Src_00 == (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    _Src_00 = (ForElementType<UE::Net::FNetObjectReference>)
              &param_1->ReferencesPendingExportInCurrentBatch;
  }
  piVar1 = &(this->ReferencesPendingExportInCurrentBatch).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
              (0x10,8,iVar2,0,&(this->ReferencesPendingExportInCurrentBatch).AllocatorInstance,iVar2
               ,piVar1);
    _Dst_00 = (this->ReferencesPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
    if (_Dst_00 == (ForElementType<UE::Net::FNetObjectReference>)0x0) {
      _Dst_00 = (ForElementType<UE::Net::FNetObjectReference>)
                &this->ReferencesPendingExportInCurrentBatch;
    }
    memcpy((void *)_Dst_00,(void *)_Src_00,(longlong)iVar2 << 4);
  }
  (this->NetTokensPendingExportInCurrentBatch).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  FVar5 = (param_1->NetTokensPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->NetTokensPendingExportInCurrentBatch).ArrayNum;
  (this->NetTokensPendingExportInCurrentBatch).ArrayNum = iVar2;
  if (FVar5 == (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar5 = (ForElementType<UE::Net::FNetToken>)&param_1->NetTokensPendingExportInCurrentBatch;
  }
  piVar1 = &(this->NetTokensPendingExportInCurrentBatch).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
              (4,4,iVar2,0,&(this->NetTokensPendingExportInCurrentBatch).AllocatorInstance,iVar2,
               piVar1);
    FVar4 = (this->NetTokensPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar4 = (ForElementType<UE::Net::FNetToken>)&this->NetTokensPendingExportInCurrentBatch;
    }
    memcpy((void *)FVar4,(void *)FVar5,(longlong)iVar2 << 2);
  }
  return this;
}

