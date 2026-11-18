// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 7

// StaticClass @ 14ec45020

UClass * __cdecl UOnlinePIESettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlinePIESettings",
               &Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton,
               StaticRegisterNativesUOnlinePIESettings,0x50,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UOnlinePIESettings>,
               InternalVTableHelperCtorCaller<UOnlinePIESettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton;
}

// UOnlinePIESettings @ 14ec54ca0

UOnlinePIESettings * __thiscall
UOnlinePIESettings::UOnlinePIESettings(UOnlinePIESettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UOnlinePIESettings__6B_;
  (this->Logins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Logins).ArrayNum = 0;
  (this->Logins).ArrayMax = 0;
  return this;
}

// UOnlinePIESettings @ 14ec54ce0

UOnlinePIESettings * __thiscall
UOnlinePIESettings::UOnlinePIESettings(UOnlinePIESettings *this,FObjectInitializer *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UOnlinePIESettings__6B_;
  (this->Logins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Logins).ArrayNum = 0;
  (this->Logins).ArrayMax = 0;
  this->bOnlinePIEEnabled = false;
  pFVar1 = ::FName::FName(local_res8,L"LevelEditor");
  this->_padding_ = (longlong)*pFVar1;
  return this;
}

// ~UOnlinePIESettings @ 14ec577c0

void __thiscall UOnlinePIESettings::~UOnlinePIESettings(UOnlinePIESettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOnlinePIESettings__6B_;
  DestructItems<FOnlineAccountStoredCredentials,int>
            ((FOnlineAccountStoredCredentials *)(this->Logins).AllocatorInstance.Data,
             (this->Logins).ArrayNum);
  pFVar1 = (this->Logins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14ec78870

UClass * __cdecl UOnlinePIESettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlinePIESettings",
               &Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton,
               StaticRegisterNativesUOnlinePIESettings,0x50,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UOnlinePIESettings>,
               InternalVTableHelperCtorCaller<UOnlinePIESettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton;
}

// PostInitProperties @ 14ec8db20

void __thiscall UOnlinePIESettings::PostInitProperties(UOnlinePIESettings *this)

{
  int iVar1;
  FOnlineAccountStoredCredentials *this_00;
  FOnlineAccountStoredCredentials *pFVar2;
  undefined1 local_res8 [8];
  
  UObject::PostInitProperties((UObject *)this);
  iVar1 = (this->Logins).ArrayNum;
  this_00 = (FOnlineAccountStoredCredentials *)(this->Logins).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->Logins).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOnlineAccountStoredCredentials,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FOnlineAccountStoredCredentials::Decrypt(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// StaticRegisterNativesUOnlinePIESettings @ 14ec99ad0

void __cdecl UOnlinePIESettings::StaticRegisterNativesUOnlinePIESettings(void)

{
  return;
}

