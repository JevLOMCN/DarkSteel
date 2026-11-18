// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 148072e60

UClass * __cdecl UOnlineSession::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineSession.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineSession",
               &Z_Registration_Info_UClass_UOnlineSession.InnerSingleton,
               StaticRegisterNativesUOnlineSession,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UOnlineSession>,InternalVTableHelperCtorCaller<UOnlineSession>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineSession.InnerSingleton;
}

// UOnlineSession @ 14808c310

UOnlineSession * __thiscall
UOnlineSession::UOnlineSession(UOnlineSession *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOnlineSession__6B_;
  return this;
}

// UOnlineSession @ 14808c340

UOnlineSession * __thiscall
UOnlineSession::UOnlineSession(UOnlineSession *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOnlineSession__6B_;
  return this;
}

// ~UOnlineSession @ 14808f640

void __thiscall UOnlineSession::~UOnlineSession(UOnlineSession *this)

{
  *(undefined ***)this = &___7UOnlineSession__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClearOnlineDelegates @ 148099bf0

void __thiscall UOnlineSession::ClearOnlineDelegates(UOnlineSession *this)

{
  return;
}

// EndOnlineSession @ 14809f6c0

void __thiscall UOnlineSession::EndOnlineSession(UOnlineSession *this,FName param_1)

{
  return;
}

// GetPrivateStaticClass @ 1480aa040

UClass * __cdecl UOnlineSession::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineSession.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineSession",
               &Z_Registration_Info_UClass_UOnlineSession.InnerSingleton,
               StaticRegisterNativesUOnlineSession,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UOnlineSession>,InternalVTableHelperCtorCaller<UOnlineSession>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineSession.InnerSingleton;
}

// HandleDisconnect @ 1480abde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UOnlineSession::HandleDisconnect(UOnlineSession *this,UWorld *param_1,UNetDriver *param_2)

{
  UEngine::HandleDisconnect(GEngine,param_1,param_2);
  return;
}

// OnSessionUserInviteAccepted @ 1480ba280

void __thiscall
UOnlineSession::OnSessionUserInviteAccepted
          (UOnlineSession *this,bool param_1,int param_2,TSharedPtr<FUniqueNetId_const_,1> *param_3,
          FOnlineSessionSearchResult *param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterOnlineDelegates @ 1480c4a10

void __thiscall UOnlineSession::RegisterOnlineDelegates(UOnlineSession *this)

{
  return;
}

// StartOnlineSession @ 1480d55b0

void __thiscall UOnlineSession::StartOnlineSession(UOnlineSession *this,FName param_1)

{
  return;
}

// StaticRegisterNativesUOnlineSession @ 1480d57b0

void __cdecl UOnlineSession::StaticRegisterNativesUOnlineSession(void)

{
  return;
}

