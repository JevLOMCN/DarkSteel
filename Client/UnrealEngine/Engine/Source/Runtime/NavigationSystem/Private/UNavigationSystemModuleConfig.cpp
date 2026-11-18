// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 9

// StaticClass @ 146d62390

UClass * __cdecl UNavigationSystemModuleConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationSystemModuleConfig",
               &Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton,
               StaticRegisterNativesUNavigationSystemModuleConfig,0x60,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationSystemModuleConfig>,
               InternalVTableHelperCtorCaller<UNavigationSystemModuleConfig>,local_res8,
               UNavigationSystemConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton;
}

// UNavigationSystemModuleConfig @ 146d76a20

UNavigationSystemModuleConfig * __thiscall
UNavigationSystemModuleConfig::UNavigationSystemModuleConfig
          (UNavigationSystemModuleConfig *this,FVTableHelper *param_1)

{
  UNavigationSystemConfig::UNavigationSystemConfig((UNavigationSystemConfig *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationSystemModuleConfig__6B_;
  return this;
}

// UNavigationSystemModuleConfig @ 146d76a50

UNavigationSystemModuleConfig * __thiscall
UNavigationSystemModuleConfig::UNavigationSystemModuleConfig
          (UNavigationSystemModuleConfig *this,FObjectInitializer *param_1)

{
  UNavigationSystemConfig::UNavigationSystemConfig((UNavigationSystemConfig *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationSystemModuleConfig__6B_;
  return this;
}

// ~UNavigationSystemModuleConfig @ 146d78f90

void __thiscall
UNavigationSystemModuleConfig::~UNavigationSystemModuleConfig(UNavigationSystemModuleConfig *this)

{
  this->_padding_ = (longlong)&___7UNavigationSystemModuleConfig__6B_;
  UNavigationSystemConfig::~UNavigationSystemConfig((UNavigationSystemConfig *)this);
  return;
}

// CreateAndConfigureNavigationSystem @ 146d89150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNavigationSystemBase * __thiscall
UNavigationSystemModuleConfig::CreateAndConfigureNavigationSystem
          (UNavigationSystemModuleConfig *this,UWorld *param_1)

{
  int iVar1;
  ENetMode EVar2;
  UNavigationSystemBase *pUVar3;
  UNavigationSystemBase *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  uint uVar7;
  UNavigationSystemBase *pUVar8;
  FName local_res8;
  FString local_28;
  
  pUVar8 = (UNavigationSystemBase *)0x0;
  if ((this->bCreateOnClient == 0) &&
     (EVar2 = UWorld::InternalGetNetMode(param_1), EVar2 == NM_Client)) {
    pUVar3 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar4 = UNavigationSystemConfig::CreateAndConfigureNavigationSystem
                       ((UNavigationSystemConfig *)this,param_1);
    pUVar3 = pUVar8;
    if (pUVar4 != (UNavigationSystemBase *)0x0) {
      pUVar5 = UNavigationSystemV1::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pUVar3 = pUVar4;
      }
    }
    if ((byte)LogNavigation._0_1_ < 2) {
      if (pUVar3 == (UNavigationSystemBase *)0x0) {
        return (UNavigationSystemBase *)0x0;
      }
    }
    else if (pUVar3 == (UNavigationSystemBase *)0x0) {
      if (pUVar4 == (UNavigationSystemBase *)0x0) {
        return (UNavigationSystemBase *)0x0;
      }
      local_res8 = (FName)this->_padding_;
      if (local_res8 != (FName)0x0) {
        pFVar6 = ::FName::ToString(&local_res8,&local_28);
        pUVar8 = (UNavigationSystemBase *)(pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (pUVar8 == (UNavigationSystemBase *)0x0) {
        return (UNavigationSystemBase *)0x0;
      }
      FMemory::Free(pUVar8);
      return (UNavigationSystemBase *)0x0;
    }
    uVar7 = (this->bAutoSpawnMissingNavData ^ *(uint *)&pUVar3[2].field_0x18) & 1 ^
            *(uint *)&pUVar3[2].field_0x18;
    *(uint *)&pUVar3[2].field_0x18 = uVar7;
    *(uint *)&pUVar3[2].field_0x18 = (*(uint *)&this->field_0x58 >> 2 ^ uVar7) & 2 ^ uVar7;
    UNavigationSystemV1::bStaticRuntimeNavigation = this->bStrictlyStatic;
    UNavigationSystemBase::SetWantsComponentChangeNotifies
              ((bool)(UNavigationSystemV1::bStaticRuntimeNavigation ^ 1));
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 146da0dd0

UClass * __cdecl UNavigationSystemModuleConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationSystemModuleConfig",
               &Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton,
               StaticRegisterNativesUNavigationSystemModuleConfig,0x60,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationSystemModuleConfig>,
               InternalVTableHelperCtorCaller<UNavigationSystemModuleConfig>,local_res8,
               UNavigationSystemConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton;
}

// PostInitProperties @ 146dabe00

void __thiscall
UNavigationSystemModuleConfig::PostInitProperties(UNavigationSystemModuleConfig *this)

{
  UObject *pUVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  uint uVar5;
  
  UObject::PostInitProperties((UObject *)this);
  pUVar4 = UNavigationSystemV1::GetPrivateStaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar1 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UObject *)0x0) {
    pUVar4 = FSoftClassPath::ResolveClass((FSoftClassPath *)&this->_padding_);
    if ((pUVar4 != (UClass *)0x0) && (lVar2 = *(longlong *)&pUVar1->field_0x10, lVar2 != 0)) {
      if (((int)pUVar4->_padding_ < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)(pUVar4->_padding_ + (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30))
      {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar5 = (*(uint *)&pUVar1[2].field_0x18 >> 1 ^ *(uint *)&this->field_0x58) & 2 ^
                *(uint *)&this->field_0x58;
        *(uint *)&this->field_0x58 = uVar5;
        uVar5 = (*(int *)&pUVar1[2].field_0x18 << 2 ^ uVar5) & 4 ^ uVar5;
        *(uint *)&this->field_0x58 = uVar5;
        *(uint *)&this->field_0x58 = (*(int *)&pUVar1[2].field_0x18 << 2 ^ uVar5) & 8 ^ uVar5;
      }
    }
  }
  return;
}

// StaticRegisterNativesUNavigationSystemModuleConfig @ 146dbaa60

void __cdecl UNavigationSystemModuleConfig::StaticRegisterNativesUNavigationSystemModuleConfig(void)

{
  return;
}

// UpdateWithNavSysCDO @ 146dc4660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNavigationSystemModuleConfig::UpdateWithNavSysCDO
          (UNavigationSystemModuleConfig *this,UNavigationSystemV1 *param_1)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  uint uVar4;
  
  pUVar3 = FSoftClassPath::ResolveClass((FSoftClassPath *)&this->_padding_);
  if ((pUVar3 != (UClass *)0x0) && (lVar1 = *(longlong *)&param_1->field_0x10, lVar1 != 0)) {
    if (((int)pUVar3->_padding_ < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(pUVar3->_padding_ + (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = (*(uint *)&param_1->field_0x68 >> 1 ^ *(uint *)&this->field_0x58) & 2 ^
              *(uint *)&this->field_0x58;
      *(uint *)&this->field_0x58 = uVar4;
      uVar4 = (*(int *)&param_1->field_0x68 << 2 ^ uVar4) & 4 ^ uVar4;
      *(uint *)&this->field_0x58 = uVar4;
      *(uint *)&this->field_0x58 = (*(int *)&param_1->field_0x68 << 2 ^ uVar4) & 8 ^ uVar4;
    }
  }
  return;
}

