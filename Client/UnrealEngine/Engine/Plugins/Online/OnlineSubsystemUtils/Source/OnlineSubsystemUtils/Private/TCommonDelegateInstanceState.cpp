// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 33

// GetHandle @ 14ec459c0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75580

FDelegateHandle __thiscall
TCommonDelegateInstanceState<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec755a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec755c0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec755e0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75600

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75620

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75640

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75660

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75680

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec756a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec756c0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec756e0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *this
          )

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75700

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75720

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ec75740

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ecb9640

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,FString_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,FString_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ecb9660

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ecb9680

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ecb96a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ecb96c0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ecb96e0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece7930

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece7950

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&,TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&,TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece7970

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,TSharedRef<FOnlineUserPresence,1>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,TSharedRef<FOnlineUserPresence,1>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece7990

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(int,bool,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece79b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece79d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece79f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(USoundWaveProcedural_*,int),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(USoundWaveProcedural_*,int),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece7a10

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece7a30

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece7a50

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14ece7a70

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

