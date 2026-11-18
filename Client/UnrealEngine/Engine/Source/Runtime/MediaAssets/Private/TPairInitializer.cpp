// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// operator<FString,FMediaMetadataItemsBPT>_TTuple<FString,FMediaMetadataItemsBPT> @ 146c17cc0

TTuple<FString,FMediaMetadataItemsBPT> * __thiscall
TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&>::
operator<FString,FMediaMetadataItemsBPT>_TTuple<FString,FMediaMetadataItemsBPT>
          (TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&> *this,
          TTuple<FString,FMediaMetadataItemsBPT> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FMediaMetadataItemsBPT *pFVar3;
  FMediaMetadataItemBPT *pFVar4;
  
  pFVar3 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->Items).ArrayNum;
  pFVar4 = (FMediaMetadataItemBPT *)(pFVar3->Items).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    ConstructItems<FMediaMetadataItemBPT,FMediaMetadataItemBPT,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

