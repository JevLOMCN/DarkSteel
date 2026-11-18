// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSQS
// Functions: 11

// StaticClass @ 1446f0990

UClass * __cdecl UMaterialShaderQualitySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MaterialShaderQualitySettings",L"MaterialShaderQualitySettings",
               &Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton,
               StaticRegisterNativesUMaterialShaderQualitySettings,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialShaderQualitySettings>,
               InternalVTableHelperCtorCaller<UMaterialShaderQualitySettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton;
}

// UMaterialShaderQualitySettings @ 1446f11e0

UMaterialShaderQualitySettings * __thiscall
UMaterialShaderQualitySettings::UMaterialShaderQualitySettings
          (UMaterialShaderQualitySettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialShaderQualitySettings__6B_;
  *(undefined8 *)&this->ForwardSettingMap = 0;
  *(undefined8 *)&(this->ForwardSettingMap).field_0x8 = 0;
  *(undefined8 *)&(this->ForwardSettingMap).field_0x20 = 0;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x28 = 0;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x34 = 0;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ForwardSettingMap).field_0x40 = 0;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x48 = 0;
  return this;
}

// UMaterialShaderQualitySettings @ 1446f1230

UMaterialShaderQualitySettings * __thiscall
UMaterialShaderQualitySettings::UMaterialShaderQualitySettings
          (UMaterialShaderQualitySettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialShaderQualitySettings__6B_;
  *(undefined8 *)&this->ForwardSettingMap = 0;
  *(undefined8 *)&(this->ForwardSettingMap).field_0x8 = 0;
  *(undefined8 *)&(this->ForwardSettingMap).field_0x20 = 0;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x28 = 0;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x34 = 0;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ForwardSettingMap).field_0x40 = 0;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x48 = 0;
  return this;
}

// ~UMaterialShaderQualitySettings @ 1446f1410

void __thiscall
UMaterialShaderQualitySettings::~UMaterialShaderQualitySettings
          (UMaterialShaderQualitySettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMaterialShaderQualitySettings__6B_;
  *(undefined4 *)&(this->ForwardSettingMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ForwardSettingMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ForwardSettingMap);
  UObject::~UObject((UObject *)this);
  return;
}

// Get @ 1446f1760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMaterialShaderQualitySettings * __cdecl UMaterialShaderQualitySettings::Get(void)

{
  FName FVar1;
  size_t sVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UMaterialShaderQualitySettings *pUVar7;
  FUObjectItem *this;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (RenderQualitySingleton == (UMaterialShaderQualitySettings *)0x0) {
    local_a8.DataPtr = SettingsContainerName;
    local_a8.Size = 0;
    if (SettingsContainerName != (wchar_t *)0x0) {
      sVar2 = wcslen(SettingsContainerName);
      local_a8.Size = (int)sVar2;
    }
    pUVar3 = GetTransientPackage();
    pUVar4 = StaticClass();
    RenderQualitySingleton =
         (UMaterialShaderQualitySettings *)StaticFindObject(pUVar4,(UObject *)pUVar3,&local_a8,None)
    ;
    if (RenderQualitySingleton == (UMaterialShaderQualitySettings *)0x0) {
      pFVar5 = ::FName::FName((FName *)&local_a8,SettingsContainerName);
      FVar1 = *pFVar5;
      pUVar4 = StaticClass();
      pUVar3 = GetTransientPackage();
      if (FVar1 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar3,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar6 = StaticClass();
      CheckIsClassChildOf_Internal(pUVar6,pUVar4);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar4);
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._24_4_ = RF_NoFlags;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_98._8_8_ = pUVar3;
      local_98._16_8_ = FVar1;
      pUVar7 = (UMaterialShaderQualitySettings *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar8 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      RenderQualitySingleton = pUVar7;
      this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar7->_padding_ + 4))
      ;
      FUObjectItem::SetRootFlags(this,RootSet);
    }
  }
  return RenderQualitySingleton;
}

// GetOrCreatePlatformSettings @ 1446f1930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UShaderPlatformQualitySettings * __thiscall
UMaterialShaderQualitySettings::GetOrCreatePlatformSettings
          (UMaterialShaderQualitySettings *this,FName param_1)

{
  longlong lVar1;
  UShaderPlatformQualitySettings *pUVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  UClass *pUVar6;
  UObject *this_00;
  FName *pFVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  FName FVar12;
  FName local_res10;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [16];
  FString local_d8;
  TPairInitializer<FName_const_&,TObjectPtr<UShaderPlatformQualitySettings>_&&> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_res10 = param_1;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ForwardSettingMap).field_0x8 != *(int *)&(this->ForwardSettingMap).field_0x34)
  {
    puVar11 = *(undefined1 **)&(this->ForwardSettingMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ForwardSettingMap).field_0x38;
    }
    iVar4 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->ForwardSettingMap).field_0x48 - 1U & param_1.Number + uVar3) *
                    4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->ForwardSettingMap + (longlong)iVar4 * 0x18;
        if (*(FName *)(*(longlong *)&this->ForwardSettingMap + (longlong)iVar4 * 0x18) == param_1) {
          puVar9 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar9 = (undefined8 *)0x0;
          }
          if (puVar9 != (undefined8 *)0x0) {
            return (UShaderPlatformQualitySettings *)*puVar9;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  ::FString::FString(&local_d8,"ForwardShadingQuality_");
  ::FName::AppendString(&local_res10,&local_d8);
  local_e8._8_4_ = 0;
  if (local_d8.Data.ArrayNum == 0) {
    local_e8._0_8_ = L"";
  }
  else {
    local_e8._0_8_ = local_d8.Data.AllocatorInstance.Data;
    if ((FName)local_d8.Data.AllocatorInstance.Data == (FName)0x0) goto LAB_1446f1a32;
  }
  sVar5 = wcslen((wchar_t *)local_e8._0_8_);
  local_e8._8_4_ = (undefined4)sVar5;
LAB_1446f1a32:
  pUVar6 = UShaderPlatformQualitySettings::StaticClass();
  this_00 = StaticFindObject(pUVar6,(UObject *)this,(TStringView<wchar_t> *)local_e8,None);
  if (this_00 == (UObject *)0x0) {
    FVar12 = (FName)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar12 = (FName)local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)&local_c8,(wchar_t *)FVar12);
    FVar12 = (FName)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar12 = (FName)local_d8.Data.AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName((FName *)local_e8,(wchar_t *)FVar12);
    FVar12 = *pFVar7;
    pUVar6 = UShaderPlatformQualitySettings::StaticClass();
    if (FVar12 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar8 = UShaderPlatformQualitySettings::StaticClass();
    CheckIsClassChildOf_Internal(pUVar8,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    local_b8._16_8_ = FVar12;
    this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    UObject::LoadConfig(this_00,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                        (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                         *)0x0);
  }
  local_c8.Value = (TObjectPtr<UShaderPlatformQualitySettings> *)this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(this_00);
  }
  local_e8._0_8_ = &local_res10;
  local_e8._8_8_ = &local_c8.Value;
  TSet<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UShaderPlatformQualitySettings>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UShaderPlatformQualitySettings>_&&>_>
            ((TSet<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UShaderPlatformQualitySettings>,0>,FDefaultSetAllocator>
              *)&this->ForwardSettingMap,&local_c8,(bool *)local_e8);
  pUVar2 = *(UShaderPlatformQualitySettings **)
            (*(longlong *)&this->ForwardSettingMap + 8 + (longlong)(int)local_c8.Key * 0x18);
  if ((FName)local_d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 1446f1bc0

UClass * __cdecl UMaterialShaderQualitySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MaterialShaderQualitySettings",L"MaterialShaderQualitySettings",
               &Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton,
               StaticRegisterNativesUMaterialShaderQualitySettings,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialShaderQualitySettings>,
               InternalVTableHelperCtorCaller<UMaterialShaderQualitySettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialShaderQualitySettings.InnerSingleton;
}

// GetShaderPlatformQualitySettings @ 1446f1d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UShaderPlatformQualitySettings * __thiscall
UMaterialShaderQualitySettings::GetShaderPlatformQualitySettings
          (UMaterialShaderQualitySettings *this,FName param_1)

{
  longlong lVar1;
  UShaderPlatformQualitySettings *pUVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  UClass *pUVar6;
  UObject *this_00;
  FName *pFVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  FName FVar12;
  FName FStackX_10;
  undefined1 auStackY_118 [32];
  undefined1 auStack_e8 [16];
  FString FStack_d8;
  TPairInitializer<FName_const_&,TObjectPtr<UShaderPlatformQualitySettings>_&&> TStack_c8;
  undefined1 auStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FStackX_10 = param_1;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ForwardSettingMap).field_0x8 != *(int *)&(this->ForwardSettingMap).field_0x34)
  {
    puVar11 = *(undefined1 **)&(this->ForwardSettingMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ForwardSettingMap).field_0x38;
    }
    iVar4 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->ForwardSettingMap).field_0x48 - 1U & param_1.Number + uVar3) *
                    4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->ForwardSettingMap + (longlong)iVar4 * 0x18;
        if (*(FName *)(*(longlong *)&this->ForwardSettingMap + (longlong)iVar4 * 0x18) == param_1) {
          puVar9 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar9 = (undefined8 *)0x0;
          }
          if (puVar9 != (undefined8 *)0x0) {
            return (UShaderPlatformQualitySettings *)*puVar9;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  ::FString::FString(&FStack_d8,"ForwardShadingQuality_");
  ::FName::AppendString(&FStackX_10,&FStack_d8);
  auStack_e8._8_4_ = 0;
  if (FStack_d8.Data.ArrayNum == 0) {
    auStack_e8._0_8_ = L"";
  }
  else {
    auStack_e8._0_8_ = FStack_d8.Data.AllocatorInstance.Data;
    if ((FName)FStack_d8.Data.AllocatorInstance.Data == (FName)0x0) goto LAB_1446f1a32;
  }
  sVar5 = wcslen((wchar_t *)auStack_e8._0_8_);
  auStack_e8._8_4_ = (undefined4)sVar5;
LAB_1446f1a32:
  pUVar6 = UShaderPlatformQualitySettings::StaticClass();
  this_00 = StaticFindObject(pUVar6,(UObject *)this,(TStringView<wchar_t> *)auStack_e8,None);
  if (this_00 == (UObject *)0x0) {
    FVar12 = (FName)L"";
    if (FStack_d8.Data.ArrayNum != 0) {
      FVar12 = (FName)FStack_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)&TStack_c8,(wchar_t *)FVar12);
    FVar12 = (FName)L"";
    if (FStack_d8.Data.ArrayNum != 0) {
      FVar12 = (FName)FStack_d8.Data.AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName((FName *)auStack_e8,(wchar_t *)FVar12);
    FVar12 = *pFVar7;
    pUVar6 = UShaderPlatformQualitySettings::StaticClass();
    if (FVar12 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar8 = UShaderPlatformQualitySettings::StaticClass();
    CheckIsClassChildOf_Internal(pUVar8,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_b8,pUVar6);
    auStack_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    auStack_b8._56_8_ = (UPackage *)0x0;
    auStack_b8._24_4_ = RF_NoFlags;
    auStack_b8._40_8_ = (UObject *)0x0;
    auStack_b8[0x20] = false;
    auStack_b8._8_8_ = this;
    auStack_b8._16_8_ = FVar12;
    this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_b8);
    if (auStack_b8._64_8_ != 0) {
      plVar10 = (longlong *)(auStack_b8 + 0x50);
      if ((longlong *)auStack_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)auStack_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    UObject::LoadConfig(this_00,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                        (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                         *)0x0);
  }
  TStack_c8.Value = (TObjectPtr<UShaderPlatformQualitySettings> *)this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(this_00);
  }
  auStack_e8._0_8_ = &FStackX_10;
  auStack_e8._8_8_ = &TStack_c8.Value;
  TSet<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UShaderPlatformQualitySettings>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UShaderPlatformQualitySettings>_&&>_>
            ((TSet<TTuple<FName,TObjectPtr<UShaderPlatformQualitySettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UShaderPlatformQualitySettings>,0>,FDefaultSetAllocator>
              *)&this->ForwardSettingMap,&TStack_c8,(bool *)auStack_e8);
  pUVar2 = *(UShaderPlatformQualitySettings **)
            (*(longlong *)&this->ForwardSettingMap + 8 + (longlong)(int)TStack_c8.Key * 0x18);
  if ((FName)FStack_d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
  }
  return pUVar2;
}

// GetShaderPlatformQualitySettings @ 1446f1da0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UShaderPlatformQualitySettings * __thiscall
UMaterialShaderQualitySettings::GetShaderPlatformQualitySettings
          (UMaterialShaderQualitySettings *this,EShaderPlatform param_1)

{
  UShaderPlatformQualitySettings *pUVar1;
  FName local_res18 [2];
  
  LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
  pUVar1 = GetOrCreatePlatformSettings(this,local_res18[0]);
  return pUVar1;
}

// HasPlatformQualitySettings @ 1446f1e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UMaterialShaderQualitySettings::HasPlatformQualitySettings
          (UMaterialShaderQualitySettings *this,EShaderPlatform param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UShaderPlatformQualitySettings *pUVar4;
  FMaterialQualityOverrides *pFVar5;
  FName local_res20;
  
  LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_res20);
  pUVar4 = GetOrCreatePlatformSettings(this,local_res20);
  if (param_2 < (Num|High)) {
    if (param_2 < Num) {
      pFVar5 = pUVar4->QualityOverrides + param_2;
      goto LAB_1446f1e8f;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("QualityLevel <= EMaterialQualityLevel::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MaterialShaderQualitySettings\\Private\\MaterialShaderQualitySettings.cpp"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar5 = &DefaultQualityOverrides;
LAB_1446f1e8f:
  if ((pFVar5->bEnableOverride != false) &&
     ((((pFVar5->MobileShadowQuality != DefaultOverrides.MobileShadowQuality ||
        (pFVar5->bForceDisableLMDirectionality != DefaultOverrides.bForceDisableLMDirectionality))
       || (pFVar5->bForceFullyRough != DefaultOverrides.bForceFullyRough)) ||
      (((pFVar5->bForceNonMetal != DefaultOverrides.bForceNonMetal ||
        (pFVar5->bForceDisablePreintegratedGF != DefaultOverrides.bForceDisablePreintegratedGF)) ||
       ((pFVar5->bDisableMaterialNormalCalculation !=
         DefaultOverrides.bDisableMaterialNormalCalculation ||
        (pFVar5->bDiscardQualityDuringCook != DefaultOverrides.bDiscardQualityDuringCook)))))))) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUMaterialShaderQualitySettings @ 1446f20d0

void __cdecl
UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings(void)

{
  return;
}

