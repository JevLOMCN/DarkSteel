// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// StaticStruct @ 14ec43c10

UScriptStruct * __cdecl FPlayerReservation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlayerReservation.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FPlayerReservation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlayerReservation,(UObject *)pUVar1,
                         L"PlayerReservation");
  }
  return Z_Registration_Info_UScriptStruct_FPlayerReservation.OuterSingleton;
}

// FPlayerReservation @ 14ecad160

FPlayerReservation * __thiscall
FPlayerReservation::FPlayerReservation(FPlayerReservation *this,FPlayerReservation *param_1)

{
  (this->UniqueId)._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(this->UniqueId)._padding_,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(param_1->UniqueId)._padding_);
  (this->UniqueId)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->UniqueId).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueId).ReplicationBytes.ArrayNum = 0;
  (this->UniqueId).ReplicationBytes.ArrayMax = 0;
  ::FString::FString(&this->ValidationStr,&param_1->ValidationStr);
  ::FString::FString(&this->Platform,&param_1->Platform);
  this->bAllowCrossplay = param_1->bAllowCrossplay;
  this->ElapsedTime = param_1->ElapsedTime;
  return this;
}

