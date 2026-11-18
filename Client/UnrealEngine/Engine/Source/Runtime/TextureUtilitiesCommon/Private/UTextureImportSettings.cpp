// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TextureUtilitiesCommon
// Functions: 10

// StaticClass @ 14c93c500

UClass * __cdecl UTextureImportSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TextureUtilitiesCommon",L"TextureImportSettings",
               &Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton,
               StaticRegisterNativesUTextureImportSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UTextureImportSettings>,
               InternalVTableHelperCtorCaller<UTextureImportSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton;
}

// UTextureImportSettings @ 14c93cbe0

/* WARNING: Enum "ETextureImportFloatingPointFormat": Some values do not have unique names */

UTextureImportSettings * __thiscall
UTextureImportSettings::UTextureImportSettings(UTextureImportSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->AutoVTSize = 0x1000;
  this->AutoLimitDimension = 0;
  this->_padding_ = (longlong)&___7UTextureImportSettings__6B_;
  this->bEnableNormalizeNormals = true;
  this->bEnableFastMipFilter = true;
  this->CompressedFormatForFloatTextures = HDR_F16;
  this->PNGInfill = Default;
  this->bDoAutomaticTextureSettingsForNonPow2Textures = true;
  return this;
}

// UTextureImportSettings @ 14c93cc20

/* WARNING: Enum "ETextureImportFloatingPointFormat": Some values do not have unique names */

UTextureImportSettings * __thiscall
UTextureImportSettings::UTextureImportSettings
          (UTextureImportSettings *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->AutoVTSize = 0x1000;
  this->AutoLimitDimension = 0;
  this->_padding_ = (longlong)&___7UTextureImportSettings__6B_;
  this->bEnableNormalizeNormals = true;
  this->bEnableFastMipFilter = true;
  this->CompressedFormatForFloatTextures = HDR_F16;
  this->PNGInfill = Default;
  this->bDoAutomaticTextureSettingsForNonPow2Textures = true;
  ::FName::FName(local_res8,L"Importing");
  this->_padding_ = (longlong)local_res8[0];
  return this;
}

// ~UTextureImportSettings @ 14c93cd00

/* WARNING: Enum "ETextureImportFloatingPointFormat": Some values do not have unique names */

void __thiscall UTextureImportSettings::~UTextureImportSettings(UTextureImportSettings *this)

{
  this->_padding_ = (longlong)&___7UTextureImportSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetAutoLimitPixelCount @ 14c93d4c0

/* WARNING: Enum "ETextureImportFloatingPointFormat": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UTextureImportSettings::GetAutoLimitPixelCount(UTextureImportSettings *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long64 lVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  longlong lVar8;
  TConsoleVariableData<int> *pTVar9;
  
  iVar1 = this->AutoLimitDimension;
  if (iVar1 < 1) {
    return 0;
  }
  iVar4 = UTexture::GetMaximumDimensionOfNonVT();
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  lVar8 = (longlong)iVar4;
  if ((0 < this->AutoVTSize) &&
     (bVar3 = UTexture::IsVirtualTexturingEnabled((ITargetPlatformSettings *)0x0), bVar3)) {
    pTVar9 = (TConsoleVariableData<int> *)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        lVar5 = (*pcVar2)();
        return lVar5;
      }
      plVar6 = (longlong *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,L"r.VT.EnableAutoImport",1);
      pTVar7 = pTVar9;
      if (plVar6 != (longlong *)0x0) {
        pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      CVarVirtualTexturesAutoImportEnabled = pTVar7;
      _Init_thread_footer(&::_TSS0);
    }
    if ((CVarVirtualTexturesAutoImportEnabled == (TConsoleVariableData<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CVarVirtualTexturesAutoImportEnabled",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportSettings.cpp"
                           ,0x41,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      lVar5 = (*pcVar2)();
      return lVar5;
    }
    pTVar7 = CVarVirtualTexturesAutoImportEnabled;
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if ((*(int *)((longlong)pTVar7->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) &&
       (this->AutoVTSize != this->AutoLimitDimension)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (2 < (byte)LogCore._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_VT_is_enabled_w_1528d1a88,
                     (FLogCategoryBase *)&LogCore);
        }
        ThreadSafeOnce246 = 1;
        _Init_thread_footer(&::_TSS0);
      }
      lVar8 = (longlong)this->AutoVTSize;
    }
  }
  return lVar8 * lVar8;
}

// GetPNGInfillMapDefault @ 14c93e0d0

/* WARNING: Enum "ETextureImportFloatingPointFormat": Some values do not have unique names */

ETextureImportPNGInfill __thiscall
UTextureImportSettings::GetPNGInfillMapDefault(UTextureImportSettings *this)

{
  char cVar1;
  ETextureImportPNGInfill EVar2;
  bool local_res8 [32];
  
  EVar2 = this->PNGInfill;
  if (EVar2 == Default) {
    local_res8[0] = true;
    cVar1 = '\x01';
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::GetBool
                (GConfig,L"TextureImporter",L"FillPNGZeroAlpha",local_res8,&GEditorIni);
      cVar1 = local_res8[0];
    }
    EVar2 = (cVar1 != '\0') + Never;
  }
  return EVar2;
}

// GetPrivateStaticClass @ 14c93e1e0

UClass * __cdecl UTextureImportSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TextureUtilitiesCommon",L"TextureImportSettings",
               &Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton,
               StaticRegisterNativesUTextureImportSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UTextureImportSettings>,
               InternalVTableHelperCtorCaller<UTextureImportSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureImportSettings.InnerSingleton;
}

// IsImportAutoVTEnabled @ 14c93e880

/* WARNING: Enum "ETextureImportFloatingPointFormat": Some values do not have unique names */

bool __thiscall UTextureImportSettings::IsImportAutoVTEnabled(UTextureImportSettings *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  
  if ((this->AutoVTSize < 1) ||
     (bVar2 = UTexture::IsVirtualTexturingEnabled((ITargetPlatformSettings *)0x0), !bVar2)) {
    return false;
  }
  pTVar6 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    plVar4 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,L"r.VT.EnableAutoImport",1);
    pTVar5 = pTVar6;
    if (plVar4 != (longlong *)0x0) {
      pTVar5 = (TConsoleVariableData<int> *)(**(code **)(*plVar4 + 0x68))(plVar4);
    }
    CVarVirtualTexturesAutoImportEnabled = pTVar5;
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarVirtualTexturesAutoImportEnabled == (TConsoleVariableData<int> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CVarVirtualTexturesAutoImportEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportSettings.cpp"
                         ,0x41,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar5 = CVarVirtualTexturesAutoImportEnabled;
  bVar2 = IsInParallelGameThread();
  if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
    pTVar6 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  return *(int *)((longlong)pTVar5->ShadowedValue + (longlong)pTVar6->ShadowedValue) != 0;
}

// PostInitProperties @ 14c93eec0

/* WARNING: Enum "ETextureImportFloatingPointFormat": Some values do not have unique names */

void __thiscall UTextureImportSettings::PostInitProperties(UTextureImportSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UTextureImportSettings *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UTextureImportSettings **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8)))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UTextureImportSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUTextureImportSettings @ 14c93f950

void __cdecl UTextureImportSettings::StaticRegisterNativesUTextureImportSettings(void)

{
  return;
}

