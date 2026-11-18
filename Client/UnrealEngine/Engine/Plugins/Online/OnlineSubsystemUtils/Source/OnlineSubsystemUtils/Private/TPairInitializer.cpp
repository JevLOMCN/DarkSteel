// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// operator<FUniqueNetIdRepl,FUniqueNetIdRepl>_TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl> @ 14eca9920

TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl> * __thiscall
TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&>::
operator<FUniqueNetIdRepl,FUniqueNetIdRepl>_TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>
          (TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&> *this,
          TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl> *__return_storage_ptr__)

{
  FUniqueNetIdRepl *pFVar1;
  FUniqueNetIdRepl *pFVar2;
  
  pFVar1 = this->Value;
  pFVar2 = this->Key;
  *(undefined ***)__return_storage_ptr__ = &___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&__return_storage_ptr__->field_0x8,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&pFVar2->_padding_);
  *(undefined ***)__return_storage_ptr__ = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x30 = &___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&__return_storage_ptr__->field_0x38,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&pFVar1->_padding_);
  *(undefined ***)&__return_storage_ptr__->field_0x30 = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  return __return_storage_ptr__;
}

