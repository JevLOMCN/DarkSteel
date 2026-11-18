// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 4

// StaticStruct @ 14eca9310

UScriptStruct * __cdecl FSpectatorReservation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpectatorReservation.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FSpectatorReservation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpectatorReservation,(UObject *)pUVar1,
                         L"SpectatorReservation");
  }
  return Z_Registration_Info_UScriptStruct_FSpectatorReservation.OuterSingleton;
}

// operator= @ 14ecadd10

FSpectatorReservation * __thiscall
FSpectatorReservation::operator=(FSpectatorReservation *this,FSpectatorReservation *param_1)

{
  FUniqueNetIdRepl::operator=(&this->SpectatorId,&param_1->SpectatorId);
  FUniqueNetIdRepl::operator=(&(this->Spectator).UniqueId,&(param_1->Spectator).UniqueId);
  ::FString::operator=(&(this->Spectator).ValidationStr,&(param_1->Spectator).ValidationStr);
  ::FString::operator=(&(this->Spectator).Platform,&(param_1->Spectator).Platform);
  (this->Spectator).bAllowCrossplay = (param_1->Spectator).bAllowCrossplay;
  (this->Spectator).ElapsedTime = (param_1->Spectator).ElapsedTime;
  return this;
}

// Dump @ 14ecb66f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSpectatorReservation::Dump(FSpectatorReservation *this)

{
  wchar_t *pwVar1;
  FString local_18;
  
  if (3 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
  if (3 < (byte)LogSpectatorBeacon._0_1_) {
    FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)this,&local_18);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogSpectatorBeacon._0_1_) {
      FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&this->Spectator,&local_18);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogSpectatorBeacon._0_1_) {
        pwVar1 = L"true";
        if ((this->Spectator).bAllowCrossplay == false) {
          pwVar1 = L"false";
        }
        ::FString::FString(&local_18,pwVar1);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if ((3 < (byte)LogSpectatorBeacon._0_1_) &&
           (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon)
           , 3 < (byte)LogSpectatorBeacon._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        }
      }
    }
  }
  return;
}

// IsValid @ 14ecbdc00

bool __thiscall FSpectatorReservation::IsValid(FSpectatorReservation *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this);
  if (bVar1) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this->Spectator);
    if ((bVar1) && (1 < (this->Spectator).Platform.Data.ArrayNum)) {
      if ((param_1) &&
         (bVar1 = ::operator==((FUniqueNetIdWrapper *)this,(FUniqueNetIdWrapper *)&this->Spectator),
         bVar1)) {
        bVar1 = 1 < (this->Spectator).ValidationStr.Data.ArrayNum;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}

