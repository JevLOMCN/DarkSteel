// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 12

// StaticClass @ 146300330

UClass * __cdecl UChaosSolverSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosSolverSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosSolverSettings",
               &Z_Registration_Info_UClass_UChaosSolverSettings.InnerSingleton,
               StaticRegisterNativesUChaosSolverSettings,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosSolverSettings>,
               InternalVTableHelperCtorCaller<UChaosSolverSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosSolverSettings.InnerSingleton;
}

// UChaosSolverSettings @ 14630a5c0

UChaosSolverSettings * __thiscall
UChaosSolverSettings::UChaosSolverSettings(UChaosSolverSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDeveloperSettings__;
  this->_padding_ = (longlong)&_vftable__for__IChaosSolverActorClassProvider__;
  *(undefined8 *)&this->DefaultChaosSolverActorClass = 0;
  *(undefined8 *)&(this->DefaultChaosSolverActorClass).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultChaosSolverActorClass).field_0x10 = 0;
  *(undefined8 *)&(this->DefaultChaosSolverActorClass).field_0x18 = 0;
  return this;
}

// UChaosSolverSettings @ 14630a610

UChaosSolverSettings * __thiscall
UChaosSolverSettings::UChaosSolverSettings(UChaosSolverSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UDeveloperSettings__;
  this->_padding_ = (longlong)&_vftable__for__IChaosSolverActorClassProvider__;
  *(undefined8 *)&this->DefaultChaosSolverActorClass = 0;
  *(undefined8 *)&(this->DefaultChaosSolverActorClass).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultChaosSolverActorClass).field_0x10 = 0;
  *(undefined8 *)&(this->DefaultChaosSolverActorClass).field_0x18 = 0;
  return this;
}

// ~UChaosSolverSettings @ 14630b4b0

void __thiscall UChaosSolverSettings::~UChaosSolverSettings(UChaosSolverSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDeveloperSettings__;
  this->_padding_ = (longlong)&_vftable__for__IChaosSolverActorClassProvider__;
  pvVar1 = *(void **)&(this->DefaultChaosSolverActorClass).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 146313aa0

UClass * __cdecl UChaosSolverSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosSolverSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosSolverSettings",
               &Z_Registration_Info_UClass_UChaosSolverSettings.InnerSingleton,
               StaticRegisterNativesUChaosSolverSettings,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosSolverSettings>,
               InternalVTableHelperCtorCaller<UChaosSolverSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosSolverSettings.InnerSingleton;
}

// GetSolverActorClass @ 146313d40

UClass * __thiscall UChaosSolverSettings::GetSolverActorClass(UChaosSolverSettings *this)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  int iVar4;
  UClass *pUVar5;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pUVar5 = (UClass *)0x0;
  iVar4 = 0;
  pUVar3 = pUVar5;
  if (this->_padding_ == 0) goto LAB_146313dee;
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  pFVar1 = FSoftObjectPath::ToString((FSoftObjectPath *)&this->_padding_,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
LAB_146313d96:
    sVar2 = wcslen(local_28.DataPtr);
    iVar4 = (int)sVar2;
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_146313d96;
  }
  local_28.Size = iVar4;
  pUVar3 = Z_Construct_UClass_UClass_NoRegister();
  pUVar3 = (UClass *)
           StaticLoadObject(pUVar3,(UObject *)0x0,&local_28,&local_38,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  pUVar5 = (UClass *)&DAT_00000001;
LAB_146313dee:
  if ((pUVar5 != (UClass *)0x0) &&
     (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pUVar3 == (UClass *)0x0) {
    pUVar3 = AChaosSolverActor::StaticClass();
    return pUVar3;
  }
  return pUVar3;
}

// PostInitProperties @ 1463192d0

void __thiscall UChaosSolverSettings::PostInitProperties(UChaosSolverSettings *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosSolversModule *pFVar3;
  IChaosSolverActorClassProvider *pIVar4;
  
  UObject::PostInitProperties((UObject *)this);
  pFVar3 = FChaosSolversModule::GetModule();
  if (pFVar3 == (FChaosSolversModule *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChaosModule",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosSolverSettings.cpp"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar4 = (IChaosSolverActorClassProvider *)&this->_padding_;
  if (this == (UChaosSolverSettings *)0x0) {
    pIVar4 = (IChaosSolverActorClassProvider *)0x0;
  }
  pFVar3->SolverActorClassProvider = pIVar4;
  return;
}

// PostReloadConfig @ 1463198f0

void __thiscall
UChaosSolverSettings::PostReloadConfig(UChaosSolverSettings *this,FProperty *param_1)

{
  return;
}

// RegisterSolverActorProvider @ 14631aff0

void __thiscall UChaosSolverSettings::RegisterSolverActorProvider(UChaosSolverSettings *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosSolversModule *pFVar3;
  IChaosSolverActorClassProvider *pIVar4;
  
  pFVar3 = FChaosSolversModule::GetModule();
  if (pFVar3 == (FChaosSolversModule *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChaosModule",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosSolverSettings.cpp"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar4 = (IChaosSolverActorClassProvider *)&this->_padding_;
  if (this == (UChaosSolverSettings *)0x0) {
    pIVar4 = (IChaosSolverActorClassProvider *)0x0;
  }
  pFVar3->SolverActorClassProvider = pIVar4;
  return;
}

// StaticRegisterNativesUChaosSolverSettings @ 146320370

void __cdecl UChaosSolverSettings::StaticRegisterNativesUChaosSolverSettings(void)

{
  return;
}

// UpdateAllProperties @ 146321ac0

void __thiscall UChaosSolverSettings::UpdateAllProperties(UChaosSolverSettings *this)

{
  return;
}

// UpdateProperty @ 1463222a0

void __thiscall UChaosSolverSettings::UpdateProperty(UChaosSolverSettings *this,FProperty *param_1)

{
  return;
}

