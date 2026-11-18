// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 8

// StaticClass @ 1471b5890

UClass * __cdecl UMassSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassSettings",
               &Z_Registration_Info_UClass_UMassSettings.InnerSingleton,
               StaticRegisterNativesUMassSettings,0x88,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Mass",InternalConstructor<UMassSettings>,
               InternalVTableHelperCtorCaller<UMassSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassSettings.InnerSingleton;
}

// UMassSettings @ 1471de1f0

UMassSettings * __thiscall UMassSettings::UMassSettings(UMassSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMassSettings__6B_;
  *(undefined8 *)&this->ModuleSettings = 0;
  *(undefined8 *)&(this->ModuleSettings).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleSettings).field_0x20 = 0;
  *(undefined4 *)&(this->ModuleSettings).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleSettings).field_0x34 = 0;
  *(undefined4 *)&(this->ModuleSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModuleSettings).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleSettings).field_0x48 = 0;
  return this;
}

// UMassSettings @ 1471de250

UMassSettings * __thiscall
UMassSettings::UMassSettings(UMassSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMassSettings__6B_;
  *(undefined8 *)&this->ModuleSettings = 0;
  *(undefined8 *)&(this->ModuleSettings).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleSettings).field_0x20 = 0;
  *(undefined4 *)&(this->ModuleSettings).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleSettings).field_0x34 = 0;
  *(undefined4 *)&(this->ModuleSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModuleSettings).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleSettings).field_0x48 = 0;
  return this;
}

// ~UMassSettings @ 1471e1330

void __thiscall UMassSettings::~UMassSettings(UMassSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMassSettings__6B_;
  *(undefined4 *)&(this->ModuleSettings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModuleSettings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMassModuleSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMassModuleSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMassModuleSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModuleSettings);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 147224fa0

UClass * __cdecl UMassSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassSettings",
               &Z_Registration_Info_UClass_UMassSettings.InnerSingleton,
               StaticRegisterNativesUMassSettings,0x88,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Mass",InternalConstructor<UMassSettings>,
               InternalVTableHelperCtorCaller<UMassSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassSettings.InnerSingleton;
}

// RegisterModuleSettings @ 14723eed0

void __thiscall
UMassSettings::RegisterModuleSettings(UMassSettings *this,UMassModuleSettings *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  int local_res8 [2];
  longlong local_res10;
  UMassModuleSettings *local_res18 [2];
  longlong *local_28;
  UMassModuleSettings **local_20;
  
  if ((*(uint *)&param_1->field_0x8 & 0x10) == 0) {
    `UMassSettings::RegisterModuleSettings'::__l2::<lambda_1>::operator()(local_res8);
  }
  local_res10 = *(longlong *)(*(longlong *)&param_1->field_0x10 + 0x18);
  local_res18[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  lVar3 = local_res10;
  uVar1 = ::GetTypeHash((FNameEntryId)(uint)local_res10);
  uVar1 = uVar1 + (int)((ulonglong)lVar3 >> 0x20);
  if (*(int *)&(this->ModuleSettings).field_0x8 != *(int *)&(this->ModuleSettings).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ModuleSettings).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ModuleSettings).field_0x38;
    }
    iVar4 = *(int *)(puVar2 + (ulonglong)(*(int *)&(this->ModuleSettings).field_0x48 - 1U & uVar1) *
                              4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)&this->ModuleSettings + (longlong)iVar4 * 0x18;
        if (*(longlong *)(*(longlong *)&this->ModuleSettings + (longlong)iVar4 * 0x18) ==
            local_res10) {
          if (lVar3 != 0) goto LAB_14723efc6;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_28 = &local_res10;
  local_20 = local_res18;
  TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&>_>
            ((TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
              *)&this->ModuleSettings,(uint)local_res8,
             (TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&> *)(ulonglong)uVar1,
             (bool *)&local_28);
  lVar3 = *(longlong *)&this->ModuleSettings + (longlong)local_res8[0] * 0x18;
LAB_14723efc6:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UMassModuleSettings **)(lVar3 + 8) = param_1;
  return;
}

// StaticRegisterNativesUMassSettings @ 1472507b0

void __cdecl UMassSettings::StaticRegisterNativesUMassSettings(void)

{
  return;
}

// operator() @ 150503370

bool __thiscall `UMassSettings::RegisterModuleSettings'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_406693154792669157>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_406693154792669157>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

