// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 1

// operator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> @ 144610fe0

TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
* __thiscall
TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>
::
operator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          (TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>
           *this,TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar2 = this->Key;
  pTVar3 = this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  iVar1 = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               (int *)&__return_storage_ptr__->field_0xc);
    memcpy(*(void **)__return_storage_ptr__,_Src,(longlong)iVar1);
  }
  *(uint *)&__return_storage_ptr__->field_0x10 = pTVar3->Value;
  return __return_storage_ptr__;
}

