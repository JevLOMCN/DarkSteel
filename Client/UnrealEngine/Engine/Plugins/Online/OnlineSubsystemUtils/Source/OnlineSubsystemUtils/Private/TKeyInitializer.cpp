// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// operator<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>_TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl> @ 14ecd46a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl> * __thiscall
TKeyInitializer<FUniqueNetIdWrapper_const_&>::
operator<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>_TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>
          (TKeyInitializer<FUniqueNetIdWrapper_const_&> *this,
          TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl> *__return_storage_ptr__)

{
  FUniqueNetIdWrapper *pFVar1;
  FRemoteTalkerDataImpl *pFVar2;
  undefined1 auStack_138 [32];
  FRemoteTalkerDataImpl local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar2 = FRemoteTalkerDataImpl::FRemoteTalkerDataImpl(&local_118);
  pFVar1 = this->Key;
  *(undefined ***)__return_storage_ptr__ = &___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&__return_storage_ptr__->field_0x8,&pFVar1->Variant);
  FRemoteTalkerDataImpl::FRemoteTalkerDataImpl
            ((FRemoteTalkerDataImpl *)&__return_storage_ptr__->field_0x20,pFVar2);
  FRemoteTalkerDataImpl::~FRemoteTalkerDataImpl(&local_118);
  return __return_storage_ptr__;
}

