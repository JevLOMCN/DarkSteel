// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 43

// StaticClass @ 146ab1ac0

UClass * __cdecl UCineCameraSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraSettings",
               &Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton,
               StaticRegisterNativesUCineCameraSettings,0xb0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCineCameraSettings>,
               InternalVTableHelperCtorCaller<UCineCameraSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton;
}

// UCineCameraSettings @ 146ab52c0

UCineCameraSettings * __thiscall
UCineCameraSettings::UCineCameraSettings(UCineCameraSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UCineCameraSettings__6B_;
  (this->DefaultLensPresetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLensPresetName).Data.ArrayNum = 0;
  (this->DefaultLensPresetName).Data.ArrayMax = 0;
  (this->LensPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LensPresets).ArrayNum = 0;
  (this->LensPresets).ArrayMax = 0;
  (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultFilmbackPreset).Data.ArrayNum = 0;
  (this->DefaultFilmbackPreset).Data.ArrayMax = 0;
  (this->FilmbackPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilmbackPresets).ArrayNum = 0;
  (this->FilmbackPresets).ArrayMax = 0;
  (this->DefaultCropPresetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultCropPresetName).Data.ArrayNum = 0;
  (this->DefaultCropPresetName).Data.ArrayMax = 0;
  (this->CropPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CropPresets).ArrayNum = 0;
  (this->CropPresets).ArrayMax = 0;
  (this->Notification).Object = (SNotificationItem *)0x0;
  (this->Notification).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// UCineCameraSettings @ 146ab5340

UCineCameraSettings * __thiscall
UCineCameraSettings::UCineCameraSettings(UCineCameraSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UCineCameraSettings__6B_;
  (this->DefaultLensPresetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLensPresetName).Data.ArrayNum = 0;
  (this->DefaultLensPresetName).Data.ArrayMax = 0;
  (this->LensPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LensPresets).ArrayNum = 0;
  (this->LensPresets).ArrayMax = 0;
  (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultFilmbackPreset).Data.ArrayNum = 0;
  (this->DefaultFilmbackPreset).Data.ArrayMax = 0;
  (this->FilmbackPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilmbackPresets).ArrayNum = 0;
  (this->FilmbackPresets).ArrayMax = 0;
  (this->DefaultCropPresetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultCropPresetName).Data.ArrayNum = 0;
  (this->DefaultCropPresetName).Data.ArrayMax = 0;
  (this->CropPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CropPresets).ArrayNum = 0;
  (this->CropPresets).ArrayMax = 0;
  (this->Notification).Object = (SNotificationItem *)0x0;
  (this->Notification).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// ~UCineCameraSettings @ 146ab5510

void __thiscall UCineCameraSettings::~UCineCameraSettings(UCineCameraSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCineCameraSettings__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Notification).SharedReferenceCount.ReferenceController);
  DestructItems<FNamedPlateCropPreset,int>
            ((FNamedPlateCropPreset *)(this->CropPresets).AllocatorInstance.Data,
             (this->CropPresets).ArrayNum);
  pFVar1 = (this->CropPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultCropPresetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNamedFilmbackPreset,int>
            ((FNamedFilmbackPreset *)(this->FilmbackPresets).AllocatorInstance.Data,
             (this->FilmbackPresets).ArrayNum);
  pFVar1 = (this->FilmbackPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNamedLensPreset,int>
            ((FNamedLensPreset *)(this->LensPresets).AllocatorInstance.Data,
             (this->LensPresets).ArrayNum);
  pFVar1 = (this->LensPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultLensPresetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// CloseNotification @ 146ab5a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCineCameraSettings::CloseNotification(UCineCameraSettings *this)

{
  SNotificationItem *pSVar1;
  FText *pFVar2;
  FSlateNotificationManager *this_00;
  TSharedPtr<SNotificationItem,1> local_188;
  FNotificationInfo local_178;
  
  pSVar1 = (this->Notification).Object;
  if (pSVar1 != (SNotificationItem *)0x0) {
    (**(code **)(*(longlong *)pSVar1 + 0x288))();
    local_188.Object = (SNotificationItem *)0x0;
    local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<SNotificationItem,1>::operator=(&this->Notification,&local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_188,L"CineCameraSettings",L"SettingsMergeCancelled",
                      L"Please manually fix up and remove the values from the CineCameraComponent section"
                     );
  FNotificationInfo::FNotificationInfo(&local_178,pFVar2);
  if (local_188.Object != (SNotificationItem *)0x0) {
    (**(code **)(*(longlong *)local_188.Object + 0x10))();
  }
  local_178.ExpireDuration = 8.0;
  local_178.bFireAndForget = true;
  this_00 = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this_00,&local_188,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  FNotificationInfo::~FNotificationInfo(&local_178);
  return;
}

// CopyOldConfigSettings @ 146ab5b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCineCameraSettings::CopyOldConfigSettings(UCineCameraSettings *this)

{
  void *pvVar1;
  SNotificationItem *pSVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  FText *pFVar9;
  FSlateNotificationManager *this_00;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  float local_res20 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_2d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2c8;
  FString local_2b8;
  ForAnyElementType local_2a8;
  int local_2a0;
  int local_29c;
  ForAnyElementType local_298;
  int local_290;
  int local_28c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_288;
  TArray<FString,TSizedDefaultAllocator<32>_> local_278;
  float local_268 [2];
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  TSharedPtr<SNotificationItem,1> local_1e0;
  FText local_1d0;
  TSharedPtr<SNotificationItem,1> local_1c0;
  FNotificationInfo local_1b0;
  
  ::FString::FString(&local_2b8,L"/Script/CinematicCamera.CineCameraSettings");
  pwVar10 = L"";
  local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (CineCameraConfigSection.Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)CineCameraConfigSection.Data.AllocatorInstance;
  }
  local_230.Data.ArrayNum = 0;
  local_230.Data.ArrayMax = 0;
  bVar5 = FConfigCacheIni::GetString
                    (GConfig,pwVar10,L"DefaultLensPresetName",&local_230,&GEngineIni);
  if (bVar5) {
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_230.Data.ArrayNum != 0) {
      FVar15.Data = local_230.Data.AllocatorInstance.Data;
    }
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar12.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::SetString
              (GConfig,(wchar_t *)FVar12.Data,L"DefaultLensPresetName",(wchar_t *)FVar15.Data,
               &GEngineIni);
  }
  pwVar10 = L"";
  if (CineCameraConfigSection.Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)CineCameraConfigSection.Data.AllocatorInstance.Data;
  }
  bVar5 = FConfigCacheIni::GetFloat
                    (GConfig,pwVar10,L"DefaultLensFocalLength",local_res20,&GEngineIni);
  if (bVar5) {
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar15.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::SetFloat
              (GConfig,(wchar_t *)FVar15.Data,L"DefaultLensFocalLength",local_res20[0],&GEngineIni);
  }
  pwVar10 = L"";
  if (CineCameraConfigSection.Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)CineCameraConfigSection.Data.AllocatorInstance.Data;
  }
  bVar5 = FConfigCacheIni::GetFloat(GConfig,pwVar10,L"DefaultLensFStop",local_268,&GEngineIni);
  if (bVar5) {
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar15.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::SetFloat
              (GConfig,(wchar_t *)FVar15.Data,L"DefaultLensFStop",local_268[0],&GEngineIni);
  }
  pwVar10 = L"";
  if (CineCameraConfigSection.Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)CineCameraConfigSection.Data.AllocatorInstance.Data;
  }
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  iVar6 = FConfigCacheIni::GetArray(GConfig,pwVar10,L"LensPresets",&local_278,&GEngineIni);
  if (iVar6 != 0) {
    local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar15.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    local_2d8.ArrayNum = 0;
    local_2d8.ArrayMax = 0;
    FConfigCacheIni::GetArray(GConfig,(wchar_t *)FVar15.Data,L"LensPresets",&local_2d8,&GEngineIni);
    iVar6 = local_278.ArrayNum;
    uVar8 = (ulonglong)local_278.ArrayNum;
    pFVar16 = local_278.AllocatorInstance.Data + uVar8 * 0x10;
    FVar15.Data = local_278.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar15.Data == pFVar16) break;
      local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.Data.ArrayNum = 0;
      local_260.Data.ArrayMax = 0;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      ::FString::FString(&local_200,",");
      ::FString::Split((FString *)FVar15.Data,&local_200,&local_260,&local_220);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      FVar12.Data = local_260.Data.AllocatorInstance.Data;
      lVar14 = (longlong)local_260.Data.ArrayNum;
      local_2a8.Data = (FScriptContainerElement *)0x0;
      local_2a0 = local_260.Data.ArrayNum;
      if (local_260.Data.ArrayNum == 0) {
        local_29c = 0;
        iVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_260.Data.ArrayNum,0,&local_2a8,local_260.Data.ArrayNum,&local_29c);
        memcpy(local_2a8.Data,FVar12.Data,lVar14 * 2);
        iVar7 = local_2a0;
      }
      pFVar13 = local_2d8.AllocatorInstance.Data + (longlong)local_2d8.ArrayNum * 0x10;
      for (FVar12.Data = local_2d8.AllocatorInstance.Data; FVar12.Data != pFVar13;
          FVar12.Data = FVar12.Data + 0x10) {
        pFVar11 = (FScriptContainerElement *)L"";
        if (iVar7 != 0) {
          pFVar11 = local_2a8.Data;
        }
        iVar4 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar4 = 0;
        }
        bVar5 = ::FString::StartsWith((FString *)FVar12.Data,(wchar_t *)pFVar11,iVar4,IgnoreCase);
        if (bVar5) {
          if (local_2a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data);
          }
          if (FVar12.Data == (FScriptContainerElement *)0x0) goto LAB_146ab5eeb;
          if (FVar12.Data != FVar15.Data) {
            iVar7 = *(int *)(FVar15.Data + 8);
            pFVar13 = FVar12.Data + 0xc;
            pvVar1 = *(void **)FVar15.Data;
            *(int *)(FVar12.Data + 8) = iVar7;
            if ((iVar7 == 0) && (*(int *)pFVar13 == 0)) {
              *(int *)pFVar13 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar7,*(int *)pFVar13,(ForAnyElementType *)FVar12.Data,iVar7,
                         (int *)pFVar13);
              if (iVar7 != 0) {
                memcpy(*(void **)FVar12.Data,pvVar1,(longlong)iVar7 * 2);
              }
            }
          }
          goto LAB_146ab5f92;
        }
        iVar7 = local_2a0;
      }
      if (local_2a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data);
      }
LAB_146ab5eeb:
      if (((local_2d8.AllocatorInstance.Data <= FVar15.Data) &&
          (FVar15.Data < local_2d8.AllocatorInstance.Data + (longlong)local_2d8.ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_2d8.ArrayNum == local_2d8.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2d8.AllocatorInstance,&local_2d8.ArrayMax);
        local_2d8.ArrayNum = iVar7;
      }
      lVar14 = (longlong)local_2d8.ArrayNum;
      local_2d8.ArrayNum = local_2d8.ArrayNum + 1;
      ::FString::FString((FString *)(local_2d8.AllocatorInstance.Data + lVar14 * 0x10),
                         (FString *)FVar15.Data);
LAB_146ab5f92:
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      uVar8 = local_278._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 0x10;
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar15.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::SetArray(GConfig,(wchar_t *)FVar15.Data,L"LensPresets",&local_2d8,&GEngineIni);
    DestructItems<FString,int>((FString *)local_2d8.AllocatorInstance.Data,local_2d8.ArrayNum);
    if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.AllocatorInstance.Data);
    }
  }
  pwVar10 = L"";
  local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (CineCameraConfigSection.Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)CineCameraConfigSection.Data.AllocatorInstance.Data;
  }
  local_240.Data.ArrayNum = 0;
  local_240.Data.ArrayMax = 0;
  bVar5 = FConfigCacheIni::GetString
                    (GConfig,pwVar10,L"DefaultFilmbackPreset",&local_240,&GEngineIni);
  if (bVar5) {
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_240.Data.ArrayNum != 0) {
      FVar15.Data = local_240.Data.AllocatorInstance.Data;
    }
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar12.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::SetString
              (GConfig,(wchar_t *)FVar12.Data,L"DefaultFilmbackPreset",(wchar_t *)FVar15.Data,
               &GEngineIni);
  }
  pwVar10 = L"";
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (CineCameraConfigSection.Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)CineCameraConfigSection.Data.AllocatorInstance.Data;
  }
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  iVar6 = FConfigCacheIni::GetArray(GConfig,pwVar10,L"FilmbackPresets",&local_288,&GEngineIni);
  if (iVar6 != 0) {
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar15.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    local_2c8.ArrayNum = 0;
    local_2c8.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,(wchar_t *)FVar15.Data,L"FilmbackPresets",&local_2c8,&GEngineIni);
    iVar6 = local_288.ArrayNum;
    uVar8 = (ulonglong)local_288.ArrayNum;
    pFVar16 = local_288.AllocatorInstance.Data + uVar8 * 0x10;
    FVar15.Data = local_288.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar15.Data == pFVar16) break;
      local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_250.Data.ArrayNum = 0;
      local_250.Data.ArrayMax = 0;
      local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.Data.ArrayNum = 0;
      local_210.Data.ArrayMax = 0;
      ::FString::FString(&local_1f0,",");
      ::FString::Split((FString *)FVar15.Data,&local_1f0,&local_250,&local_210);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      FVar12.Data = local_250.Data.AllocatorInstance.Data;
      lVar14 = (longlong)local_250.Data.ArrayNum;
      local_298.Data = (FScriptContainerElement *)0x0;
      local_290 = local_250.Data.ArrayNum;
      if (local_250.Data.ArrayNum == 0) {
        local_28c = 0;
        iVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_250.Data.ArrayNum,0,&local_298,local_250.Data.ArrayNum,&local_28c);
        memcpy(local_298.Data,FVar12.Data,lVar14 * 2);
        iVar7 = local_290;
      }
      pFVar13 = local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayNum * 0x10;
      for (FVar12.Data = local_2c8.AllocatorInstance.Data; FVar12.Data != pFVar13;
          FVar12.Data = FVar12.Data + 0x10) {
        pFVar11 = (FScriptContainerElement *)L"";
        if (iVar7 != 0) {
          pFVar11 = local_298.Data;
        }
        iVar4 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar4 = 0;
        }
        bVar5 = ::FString::StartsWith((FString *)FVar12.Data,(wchar_t *)pFVar11,iVar4,IgnoreCase);
        if (bVar5) {
          if (local_298.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data);
          }
          if (FVar12.Data == (FScriptContainerElement *)0x0) goto LAB_146ab62af;
          if (FVar12.Data != FVar15.Data) {
            iVar7 = *(int *)(FVar15.Data + 8);
            pFVar13 = FVar12.Data + 0xc;
            pvVar1 = *(void **)FVar15.Data;
            *(int *)(FVar12.Data + 8) = iVar7;
            if ((iVar7 == 0) && (*(int *)pFVar13 == 0)) {
              *(int *)pFVar13 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar7,*(int *)pFVar13,(ForAnyElementType *)FVar12.Data,iVar7,
                         (int *)pFVar13);
              if (iVar7 != 0) {
                memcpy(*(void **)FVar12.Data,pvVar1,(longlong)iVar7 * 2);
              }
            }
          }
          goto LAB_146ab6356;
        }
        iVar7 = local_290;
      }
      if (local_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data);
      }
LAB_146ab62af:
      if (((local_2c8.AllocatorInstance.Data <= FVar15.Data) &&
          (FVar15.Data < local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
        local_2c8.ArrayNum = iVar7;
      }
      lVar14 = (longlong)local_2c8.ArrayNum;
      local_2c8.ArrayNum = local_2c8.ArrayNum + 1;
      ::FString::FString((FString *)(local_2c8.AllocatorInstance.Data + lVar14 * 0x10),
                         (FString *)FVar15.Data);
LAB_146ab6356:
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      uVar8 = local_288._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 0x10;
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar15.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::SetArray
              (GConfig,(wchar_t *)FVar15.Data,L"FilmbackPresets",&local_2c8,&GEngineIni);
    DestructItems<FString,int>((FString *)local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum);
    if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.AllocatorInstance.Data);
    }
  }
  UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                      (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                       *)0x0);
  pSVar2 = (this->Notification).Object;
  if (pSVar2 != (SNotificationItem *)0x0) {
    (**(code **)(*(longlong *)pSVar2 + 0x288))();
    local_1e0.Object = (SNotificationItem *)0x0;
    local_1e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<SNotificationItem,1>::operator=(&this->Notification,&local_1e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e0.SharedReferenceCount.ReferenceController);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_1d0,L"CineCameraSettings",L"NotifySettingsUpdated",
                      L"CineCamera Settings have been successfully merged.\n\nPlease remove the old config values from the CineCameraComponent section"
                     );
  FNotificationInfo::FNotificationInfo(&local_1b0,pFVar9);
  if (local_1d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
  }
  local_1b0.ExpireDuration = 8.0;
  local_1b0.bFireAndForget = true;
  this_00 = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this_00,&local_1c0,&local_1b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.SharedReferenceCount.ReferenceController);
  FNotificationInfo::~FNotificationInfo(&local_1b0);
  DestructItems<FString,int>((FString *)local_288.AllocatorInstance.Data,local_288.ArrayNum);
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCineCameraSettings @ 146ab6760

UCineCameraSettings * __cdecl UCineCameraSettings::GetCineCameraSettings(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UCineCameraSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UCineCameraSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetCropPresetByName @ 146ab6850

bool __thiscall
UCineCameraSettings::GetCropPresetByName
          (UCineCameraSettings *this,FString *param_1,FPlateCropSettings *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  float fVar6;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  pFVar4 = (this->CropPresets).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->CropPresets).ArrayNum * 0x18;
  uVar3 = local_18.Data._8_8_;
  do {
    if (pFVar4 == pFVar1) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      pFVar4 = (FScriptContainerElement *)0x0;
      fVar6 = 0.0;
LAB_146ab68e2:
      param_2->AspectRatio = fVar6;
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return pFVar4 != (FScriptContainerElement *)0x0;
    }
    iVar2 = *(int *)(pFVar4 + 8);
    if (iVar2 == (int)uVar3) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar4,(wchar_t *)local_18.Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
        uVar3 = local_18.Data._8_8_;
        goto LAB_146ab68be;
      }
LAB_146ab6912:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      fVar6 = *(float *)(pFVar4 + 0x10);
      goto LAB_146ab68e2;
    }
    bVar5 = iVar2 + (int)uVar3 == 1;
LAB_146ab68be:
    if (bVar5) goto LAB_146ab6912;
    pFVar4 = pFVar4 + 0x18;
  } while( true );
}

// GetCropPresetNames @ 146ab6a50

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCineCameraSettings::GetCropPresetNames
          (UCineCameraSettings *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = (this->CropPresets).AllocatorInstance.Data;
  iVar2 = (this->CropPresets).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->CropPresets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNamedPlateCropPreset_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10),
                       (FString *)pFVar4);
    pFVar4 = pFVar4 + 0x18;
  }
  return __return_storage_ptr__;
}

// GetCropPresets @ 146ab6b10

TArray<FNamedPlateCropPreset,TSizedDefaultAllocator<32>_> * __cdecl
UCineCameraSettings::GetCropPresets(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  return (TArray<FNamedPlateCropPreset,TSizedDefaultAllocator<32>_> *)
         &(this->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x18;
}

// GetFilmbackPresetByName @ 146ab6ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UCineCameraSettings::GetFilmbackPresetByName
          (UCineCameraSettings *this,FString *param_1,FCameraFilmbackSettings *param_2)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FString local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  
  ::FString::FString(&local_38,param_1);
  pFVar4 = (this->FilmbackPresets).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)(this->FilmbackPresets).ArrayNum * 0x38;
  uVar2 = local_38.Data._8_8_;
  do {
    if (pFVar4 == pFVar3) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar4 = (FScriptContainerElement *)0x0;
      local_18 = 1.33;
      local_28 = ___xmm_000000000000000041955c2941c71eb8;
      uStack_20 = _UNK_1513d9ee8;
LAB_146ab6f8d:
      param_2->SensorWidth = (float)(int)local_28;
      param_2->SensorHeight = (float)(int)((ulonglong)local_28 >> 0x20);
      param_2->SensorHorizontalOffset = (float)(int)uStack_20;
      param_2->SensorVerticalOffset = (float)(int)((ulonglong)uStack_20 >> 0x20);
      param_2->SensorAspectRatio = local_18;
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return pFVar4 != (FScriptContainerElement *)0x0;
    }
    iVar1 = *(int *)(pFVar4 + 8);
    if (iVar1 == (int)uVar2) {
      if (1 < iVar1) {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar4,(wchar_t *)local_38.Data.AllocatorInstance.Data);
        bVar5 = iVar1 == 0;
        uVar2 = local_38.Data._8_8_;
        goto LAB_146ab6f5c;
      }
LAB_146ab6fcf:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_18 = *(float *)(pFVar4 + 0x30);
      local_28 = *(undefined8 *)(pFVar4 + 0x20);
      uStack_20 = *(undefined8 *)(pFVar4 + 0x28);
      goto LAB_146ab6f8d;
    }
    bVar5 = iVar1 + (int)uVar2 == 1;
LAB_146ab6f5c:
    if (bVar5) goto LAB_146ab6fcf;
    pFVar4 = pFVar4 + 0x38;
  } while( true );
}

// GetFilmbackPresetNames @ 146ab7140

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCineCameraSettings::GetFilmbackPresetNames
          (UCineCameraSettings *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->FilmbackPresets).ArrayNum;
  pFVar3 = (this->FilmbackPresets).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->FilmbackPresets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNamedFilmbackPreset_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       (FString *)pFVar3);
    pFVar3 = pFVar3 + 0x38;
  }
  return __return_storage_ptr__;
}

// GetFilmbackPresets @ 146ab7230

TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> * __cdecl
UCineCameraSettings::GetFilmbackPresets(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  return (TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> *)
         &(this->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x20;
}

// GetLensPresetByName @ 146ab74a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UCineCameraSettings::GetLensPresetByName
          (UCineCameraSettings *this,FString *param_1,FCameraLensSettings *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  FString local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  FString local_28;
  undefined8 local_18;
  undefined4 local_10;
  
  ::FString::FString(&local_48,param_1);
  pFVar7 = (this->LensPresets).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)(this->LensPresets).ArrayNum * 0x30;
  uVar5 = local_48.Data._8_8_;
  do {
    if (pFVar7 == pFVar6) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pFVar4 = &local_48;
      local_48.Data.AllocatorInstance.Data = ___xmm_40000000400000004248000042480000;
      local_48.Data.ArrayNum = _UNK_1513d9ef8;
      local_48.Data.ArrayMax = _UNK_1513d9efc;
      pFVar7 = (FScriptContainerElement *)0x0;
      local_38 = 0x41700000;
      uStack_34 = 0x3f800000;
      local_30 = 5;
LAB_146ab755f:
      iVar1 = (pFVar4->Data).ArrayNum;
      iVar2 = (pFVar4->Data).ArrayMax;
      pFVar6 = pFVar4[1].Data.AllocatorInstance.Data;
      iVar3 = pFVar4[1].Data.ArrayNum;
      *(FScriptContainerElement **)param_2 = (pFVar4->Data).AllocatorInstance.Data;
      param_2->MinFStop = (float)iVar1;
      param_2->MaxFStop = (float)iVar2;
      *(FScriptContainerElement **)&param_2->MinimumFocusDistance = pFVar6;
      param_2->DiaphragmBladeCount = iVar3;
      pFVar6 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      return pFVar7 != (FScriptContainerElement *)0x0;
    }
    iVar3 = *(int *)(pFVar7 + 8);
    if (iVar3 == (int)uVar5) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar7,(wchar_t *)local_48.Data.AllocatorInstance.Data);
        bVar8 = iVar3 == 0;
        uVar5 = local_48.Data._8_8_;
        goto LAB_146ab7510;
      }
LAB_146ab75a4:
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_10 = *(undefined4 *)(pFVar7 + 0x28);
      pFVar4 = &local_28;
      local_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(pFVar7 + 0x10);
      local_28.Data._8_8_ = *(undefined8 *)(pFVar7 + 0x18);
      local_18 = *(undefined8 *)(pFVar7 + 0x20);
      goto LAB_146ab755f;
    }
    bVar8 = iVar3 + (int)uVar5 == 1;
LAB_146ab7510:
    if (bVar8) goto LAB_146ab75a4;
    pFVar7 = pFVar7 + 0x30;
  } while( true );
}

// GetLensPresetNames @ 146ab7750

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCineCameraSettings::GetLensPresetNames
          (UCineCameraSettings *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->LensPresets).ArrayNum;
  pFVar4 = (this->LensPresets).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->LensPresets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNamedLensPreset_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10),
                       (FString *)pFVar4);
    pFVar4 = pFVar4 + 0x30;
  }
  return __return_storage_ptr__;
}

// GetLensPresets @ 146ab7840

TArray<FNamedLensPreset,TSizedDefaultAllocator<32>_> * __cdecl
UCineCameraSettings::GetLensPresets(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  return (TArray<FNamedLensPreset,TSizedDefaultAllocator<32>_> *)
         ((this->ClassDefaultObject).field0_0x0.DebugPtr + 2);
}

// GetPrivateStaticClass @ 146ab7de0

UClass * __cdecl UCineCameraSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraSettings",
               &Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton,
               StaticRegisterNativesUCineCameraSettings,0xb0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCineCameraSettings>,
               InternalVTableHelperCtorCaller<UCineCameraSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton;
}

// PostInitProperties @ 146ab81c0

void __thiscall UCineCameraSettings::PostInitProperties(UCineCameraSettings *this)

{
  UObject::PostInitProperties((UObject *)this);
  RecalcSensorAspectRatios(this);
  return;
}

// RecalcSensorAspectRatios @ 146ab8450

void __thiscall UCineCameraSettings::RecalcSensorAspectRatios(UCineCameraSettings *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->FilmbackPresets).AllocatorInstance.Data;
  iVar1 = (this->FilmbackPresets).ArrayNum;
  pFVar2 = pFVar4 + 0x30;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->FilmbackPresets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNamedFilmbackPreset,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    if (*(float *)(pFVar2 + -0xc) <= 0.0) {
      pFVar4 = pFVar4 + 0x38;
      *(undefined4 *)pFVar2 = 0;
      pFVar2 = pFVar2 + 0x38;
    }
    else {
      pFVar4 = pFVar4 + 0x38;
      *(float *)pFVar2 = *(float *)(pFVar2 + -0x10) / *(float *)(pFVar2 + -0xc);
      pFVar2 = pFVar2 + 0x38;
    }
  }
  return;
}

// SetCropPresets @ 146ab88a0

void __thiscall
UCineCameraSettings::SetCropPresets
          (UCineCameraSettings *this,
          TArray<FNamedPlateCropPreset,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FNamedPlateCropPreset,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FNamedPlateCropPreset *pFVar4;
  
  pTVar2 = &this->CropPresets;
  if (pTVar2 != param_1) {
    DestructItems<FNamedPlateCropPreset,int>
              ((FNamedPlateCropPreset *)(pTVar2->AllocatorInstance).Data,
               (this->CropPresets).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->CropPresets).ArrayMax;
    pFVar4 = (FNamedPlateCropPreset *)(param_1->AllocatorInstance).Data;
    (this->CropPresets).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FNamedPlateCropPreset,FNamedPlateCropPreset,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// SetDefaultCropPresetName @ 146ab8a30

void __thiscall
UCineCameraSettings::SetDefaultCropPresetName(UCineCameraSettings *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  ::FString::operator=(&this->DefaultCropPresetName,param_1);
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetDefaultFilmbackPreset @ 146ab8a90

void __thiscall
UCineCameraSettings::SetDefaultFilmbackPreset(UCineCameraSettings *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  ::FString::operator=(&this->DefaultFilmbackPreset,param_1);
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetDefaultLensFStop @ 146ab8af0

void __thiscall UCineCameraSettings::SetDefaultLensFStop(UCineCameraSettings *this,float param_1)

{
  this->DefaultLensFStop = param_1;
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// SetDefaultLensFocalLength @ 146ab8b20

void __thiscall
UCineCameraSettings::SetDefaultLensFocalLength(UCineCameraSettings *this,float param_1)

{
  this->DefaultLensFocalLength = param_1;
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// SetDefaultLensPresetName @ 146ab8b50

void __thiscall
UCineCameraSettings::SetDefaultLensPresetName(UCineCameraSettings *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  ::FString::operator=(&this->DefaultLensPresetName,param_1);
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetFilmbackPresets @ 146ab8dd0

void __thiscall
UCineCameraSettings::SetFilmbackPresets
          (UCineCameraSettings *this,
          TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FNamedFilmbackPreset *pFVar4;
  
  pTVar1 = &this->FilmbackPresets;
  if (pTVar1 != param_1) {
    DestructItems<FNamedFilmbackPreset,int>
              ((FNamedFilmbackPreset *)(pTVar1->AllocatorInstance).Data,
               (this->FilmbackPresets).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar2 = &(this->FilmbackPresets).ArrayMax;
    pFVar4 = (FNamedFilmbackPreset *)(param_1->AllocatorInstance).Data;
    (this->FilmbackPresets).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FNamedFilmbackPreset,FNamedFilmbackPreset,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  RecalcSensorAspectRatios(this);
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// SetLensPresets @ 146ab9050

void __thiscall
UCineCameraSettings::SetLensPresets
          (UCineCameraSettings *this,TArray<FNamedLensPreset,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FNamedLensPreset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FNamedLensPreset *pFVar4;
  
  pTVar1 = &this->LensPresets;
  if (pTVar1 != param_1) {
    DestructItems<FNamedLensPreset,int>
              ((FNamedLensPreset *)(pTVar1->AllocatorInstance).Data,(this->LensPresets).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar2 = &(this->LensPresets).ArrayMax;
    pFVar4 = (FNamedLensPreset *)(param_1->AllocatorInstance).Data;
    (this->LensPresets).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FNamedLensPreset,FNamedLensPreset,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// StaticRegisterNativesUCineCameraSettings @ 146ab9470

void __cdecl UCineCameraSettings::StaticRegisterNativesUCineCameraSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UCineCameraSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCineCameraSettings @ 146aba530

void __cdecl
UCineCameraSettings::execGetCineCameraSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  UClass *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    *(TObjectPtr<UObject>_u_0 *)param_3 = (this->ClassDefaultObject).field0_0x0;
    return;
  }
  *(TObjectPtr<UObject>_u_0 *)param_3 = (this->ClassDefaultObject).field0_0x0;
  return;
}

// execGetCropPresetByName @ 146aba5a0

void __cdecl
UCineCameraSettings::execGetCropPresetByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  void *_Src;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uchar *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 local_res8 [2];
  FString local_58;
  void *local_48;
  undefined8 local_40;
  FString local_38;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  _Src = local_48;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar7 = (uchar *)local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_40;
  local_58.Data.ArrayNum = (int)local_40;
  if ((int)local_40 == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,(ForAnyElementType *)&local_58,(int)local_40,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  ::FString::FString(&local_38,&local_58);
  puVar6 = *(undefined8 **)&param_1[3].field_0x18;
  puVar1 = puVar6 + (longlong)*(int *)&param_1[3].field_0x20 * 3;
  uVar4 = local_38.Data._8_8_;
  do {
    if (puVar6 == puVar1) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      uVar9 = 0;
      puVar6 = (undefined8 *)0x0;
LAB_146aba72f:
      *(undefined4 *)puVar7 = uVar9;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      *(bool *)param_3 = puVar6 != (undefined8 *)0x0;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    iVar3 = *(int *)(puVar6 + 1);
    if (iVar3 == (int)uVar4) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar6,(wchar_t *)local_38.Data.AllocatorInstance.Data);
        bVar8 = iVar3 == 0;
        uVar4 = local_38.Data._8_8_;
        goto LAB_146aba70b;
      }
LAB_146aba771:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      uVar9 = *(undefined4 *)(puVar6 + 2);
      goto LAB_146aba72f;
    }
    bVar8 = iVar3 + (int)uVar4 == 1;
LAB_146aba70b:
    if (bVar8) goto LAB_146aba771;
    puVar6 = puVar6 + 3;
  } while( true );
}

// execGetCropPresetNames @ 146aba990

void __cdecl
UCineCameraSettings::execGetCropPresetNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_1c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[3].field_0x20;
  piVar4 = *(int **)&param_1[3].field_0x18;
  local_20 = 0;
  piVar1 = piVar4 + (longlong)iVar2 * 6;
  while( true ) {
    if (*(int *)&param_1[3].field_0x20 != iVar2) {
      `TCheckedPointerIterator<FNamedPlateCropPreset_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (piVar4 == piVar1) break;
    if (local_20 == local_1c) {
      local_20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_28,&local_1c);
    }
    lVar3 = (longlong)local_20;
    local_20 = local_20 + 1;
    ::FString::FString((FString *)(local_28.Data + lVar3 * 0x10),(FString *)piVar4);
    piVar4 = piVar4 + 6;
  }
  if (param_3 != &local_28) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(int *)((longlong)param_3 + 8) = local_20;
    *(int *)((longlong)param_3 + 0xc) = local_1c;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_1c = 0;
  }
  DestructItems<FString,int>((FString *)local_28.Data,local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// execGetFilmbackPresetByName @ 146abac00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UCineCameraSettings::execGetFilmbackPresetByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uchar *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  FString local_78;
  void *local_68;
  undefined8 local_60;
  FString local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_38 = 0x3faa3d71;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_68;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar7 = (uchar *)&local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_60;
  local_78.Data.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,(ForAnyElementType *)&local_78,(int)local_60,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  ::FString::FString(&local_58,&local_78);
  puVar6 = *(undefined8 **)&param_1[2].field_0x20;
  puVar8 = puVar6 + (longlong)*(int *)(param_1 + 3) * 7;
  uVar4 = local_58.Data._8_8_;
  do {
    if (puVar6 == puVar8) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_20 = 0x3faa3d71;
      puVar6 = (undefined8 *)0x0;
      local_30 = ___xmm_000000000000000041955c2941c71eb8;
      uVar4 = _UNK_1513d9ee8;
LAB_146abadbd:
      uVar2 = local_20;
      uStack_28 = uVar4;
      *(undefined8 *)puVar7 = local_30;
      *(undefined8 *)(puVar7 + 8) = uVar4;
      *(undefined4 *)(puVar7 + 0x10) = uVar2;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      *(bool *)param_3 = puVar6 != (undefined8 *)0x0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      return;
    }
    iVar3 = *(int *)(puVar6 + 1);
    if (iVar3 == (int)uVar4) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar6,(wchar_t *)local_58.Data.AllocatorInstance.Data);
        bVar9 = iVar3 == 0;
        uVar4 = local_58.Data._8_8_;
        goto LAB_146abad89;
      }
LAB_146abae17:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_20 = *(undefined4 *)(puVar6 + 6);
      local_30 = puVar6[4];
      uVar4 = puVar6[5];
      goto LAB_146abadbd;
    }
    bVar9 = iVar3 + (int)uVar4 == 1;
LAB_146abad89:
    if (bVar9) goto LAB_146abae17;
    puVar6 = puVar6 + 7;
  } while( true );
}

// execGetFilmbackPresetNames @ 146abb060

void __cdecl
UCineCameraSettings::execGetFilmbackPresetNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_1c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(param_1 + 3);
  piVar3 = *(int **)&param_1[2].field_0x20;
  local_20 = 0;
  piVar4 = piVar3 + (longlong)iVar1 * 0xe;
  while( true ) {
    if (*(int *)(param_1 + 3) != iVar1) {
      `TCheckedPointerIterator<FNamedFilmbackPreset_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (piVar3 == piVar4) break;
    if (local_20 == local_1c) {
      local_20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_28,&local_1c);
    }
    lVar2 = (longlong)local_20;
    local_20 = local_20 + 1;
    ::FString::FString((FString *)(local_28.Data + lVar2 * 0x10),(FString *)piVar3);
    piVar3 = piVar3 + 0xe;
  }
  if (param_3 != &local_28) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(int *)((longlong)param_3 + 8) = local_20;
    *(int *)((longlong)param_3 + 0xc) = local_1c;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_1c = 0;
  }
  DestructItems<FString,int>((FString *)local_28.Data,local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// execGetLensPresetByName @ 146abb330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UCineCameraSettings::execGetLensPresetByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  int iVar4;
  FString *pFVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  FScriptContainerElement **ppFVar9;
  undefined8 *puVar10;
  bool bVar11;
  FString local_98;
  void *local_88;
  undefined8 local_80;
  FString local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  FScriptContainerElement *local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  FString local_38;
  undefined8 local_28;
  undefined4 local_20;
  
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_58[0] = ___xmm_40000000400000004248000042480000;
  local_58[1] = (FScriptContainerElement *)_UNK_1513d9ef8;
  local_48 = 0x41700000;
  local_44 = 0x3f800000;
  local_40 = 5;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  _Src = local_88;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ppFVar9 = local_58;
  if ((FScriptContainerElement **)param_2->MostRecentPropertyAddress !=
      (FScriptContainerElement **)0x0) {
    ppFVar9 = (FScriptContainerElement **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_80;
  local_98.Data.ArrayNum = (int)local_80;
  if ((int)local_80 == 0) {
    local_98.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_80,0,(ForAnyElementType *)&local_98,(int)local_80,
               &local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  ::FString::FString(&local_78,&local_98);
  puVar8 = *(undefined8 **)(param_1 + 2);
  puVar10 = puVar8 + (longlong)*(int *)&param_1[2].field_0x8 * 6;
  uVar6 = local_78.Data._8_8_;
  do {
    if (puVar8 == puVar10) {
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pFVar5 = &local_78;
      local_78.Data.AllocatorInstance.Data = ___xmm_40000000400000004248000042480000;
      local_78.Data.ArrayNum = _UNK_1513d9ef8;
      local_78.Data.ArrayMax = _UNK_1513d9efc;
      local_68 = 0x41700000;
      uStack_64 = 0x3f800000;
      local_60 = 5;
      puVar8 = (undefined8 *)0x0;
LAB_146abb513:
      pFVar3 = *(FScriptContainerElement **)&(pFVar5->Data).ArrayNum;
      pFVar1 = pFVar5[1].Data.AllocatorInstance.Data;
      iVar4 = pFVar5[1].Data.ArrayNum;
      *ppFVar9 = (pFVar5->Data).AllocatorInstance.Data;
      ppFVar9[1] = pFVar3;
      ppFVar9[2] = pFVar1;
      *(int *)(ppFVar9 + 3) = iVar4;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      *(bool *)param_3 = puVar8 != (undefined8 *)0x0;
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      return;
    }
    iVar4 = *(int *)(puVar8 + 1);
    if (iVar4 == (int)uVar6) {
      if (1 < iVar4) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar8,(wchar_t *)local_78.Data.AllocatorInstance.Data);
        bVar11 = iVar4 == 0;
        uVar6 = local_78.Data._8_8_;
        goto LAB_146abb4c9;
      }
LAB_146abb56f:
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_20 = *(undefined4 *)(puVar8 + 5);
      pFVar5 = &local_38;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)puVar8[2];
      local_38.Data._8_8_ = puVar8[3];
      local_28 = puVar8[4];
      goto LAB_146abb513;
    }
    bVar11 = iVar4 + (int)uVar6 == 1;
LAB_146abb4c9:
    if (bVar11) goto LAB_146abb56f;
    puVar8 = puVar8 + 6;
  } while( true );
}

// execGetLensPresetNames @ 146abb800

void __cdecl
UCineCameraSettings::execGetLensPresetNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  FString *pFVar3;
  FString *pFVar4;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_1c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[2].field_0x8;
  pFVar3 = *(FString **)(param_1 + 2);
  local_20 = 0;
  pFVar4 = pFVar3 + (longlong)iVar1 * 3;
  while( true ) {
    if (*(int *)&param_1[2].field_0x8 != iVar1) {
      `TCheckedPointerIterator<FNamedLensPreset_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (local_20 == local_1c) {
      local_20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_28,&local_1c);
    }
    lVar2 = (longlong)local_20;
    local_20 = local_20 + 1;
    ::FString::FString((FString *)(local_28.Data + lVar2 * 0x10),pFVar3);
    pFVar3 = pFVar3 + 3;
  }
  if (param_3 != &local_28) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(int *)((longlong)param_3 + 8) = local_20;
    *(int *)((longlong)param_3 + 0xc) = local_1c;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_1c = 0;
  }
  DestructItems<FString,int>((FString *)local_28.Data,local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// execSetCropPresets @ 146abbc60

void __cdecl UCineCameraSettings::execSetCropPresets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  FProperty *pFVar4;
  FNamedPlateCropPreset *pFVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar6 = &local_18;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = &param_1[3].field_0x18;
  if ((ForAnyElementType *)puVar2 != pFVar6) {
    DestructItems<FNamedPlateCropPreset,int>
              (*(FNamedPlateCropPreset **)puVar2,*(int *)&param_1[3].field_0x20);
    iVar3 = *(int *)&pFVar6[1].Data;
    puVar1 = &param_1[3].field_0x24;
    pFVar5 = (FNamedPlateCropPreset *)pFVar6->Data;
    *(int *)&param_1[3].field_0x20 = iVar3;
    if ((iVar3 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*(int *)puVar1,(ForAnyElementType *)puVar2,iVar3,(int *)puVar1);
      ConstructItems<FNamedPlateCropPreset,FNamedPlateCropPreset,int>(*(void **)puVar2,pFVar5,iVar3)
      ;
    }
  }
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  DestructItems<FNamedPlateCropPreset,int>((FNamedPlateCropPreset *)local_18.Data,(int)local_10);
  if ((FNamedPlateCropPreset *)local_18.Data != (FNamedPlateCropPreset *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execSetDefaultCropPresetName @ 146abc010

void __cdecl
UCineCameraSettings::execSetDefaultCropPresetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  FString local_28;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_10;
  local_28.Data.ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,(ForAnyElementType *)&local_28,(int)local_10,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  ::FString::operator=((FString *)&param_1[3].field_0x8,&local_28);
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetDefaultFilmbackPreset @ 146abc150

void __cdecl
UCineCameraSettings::execSetDefaultFilmbackPreset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  FString local_28;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_10;
  local_28.Data.ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,(ForAnyElementType *)&local_28,(int)local_10,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  ::FString::operator=((FString *)&param_1[2].field_0x10,&local_28);
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetDefaultLensFStop @ 146abc290

void __cdecl
UCineCameraSettings::execSetDefaultLensFStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[1].field_0x24 = local_res8[0];
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// execSetDefaultLensFocalLength @ 146abc330

void __cdecl
UCineCameraSettings::execSetDefaultLensFocalLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[1].field_0x20 = local_res8[0];
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// execSetDefaultLensPresetName @ 146abc3d0

void __cdecl
UCineCameraSettings::execSetDefaultLensPresetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  FString local_28;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_10;
  local_28.Data.ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,(ForAnyElementType *)&local_28,(int)local_10,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  ::FString::operator=((FString *)&param_1[1].field_0x10,&local_28);
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetFilmbackPresets @ 146abc680

void __cdecl
UCineCameraSettings::execSetFilmbackPresets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  FProperty *pFVar5;
  FNamedFilmbackPreset *pFVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar7 = &local_18;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar7 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = &param_1[2].field_0x20;
  if ((ForAnyElementType *)puVar1 != pFVar7) {
    DestructItems<FNamedFilmbackPreset,int>(*(FNamedFilmbackPreset **)puVar1,*(int *)(param_1 + 3));
    iVar3 = *(int *)&pFVar7[1].Data;
    puVar2 = &param_1[3].field_0x4;
    pFVar6 = (FNamedFilmbackPreset *)pFVar7->Data;
    iVar4 = *(int *)puVar2;
    *(int *)(param_1 + 3) = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar3,iVar4,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
      ConstructItems<FNamedFilmbackPreset,FNamedFilmbackPreset,int>(*(void **)puVar1,pFVar6,iVar3);
    }
  }
  RecalcSensorAspectRatios((UCineCameraSettings *)param_1);
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  DestructItems<FNamedFilmbackPreset,int>((FNamedFilmbackPreset *)local_18.Data,(int)local_10);
  if ((FNamedFilmbackPreset *)local_18.Data != (FNamedFilmbackPreset *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execSetLensPresets @ 146abc9a0

void __cdecl UCineCameraSettings::execSetLensPresets(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  FProperty *pFVar4;
  ForAnyElementType FVar5;
  UObject *pUVar6;
  FNamedLensPreset *local_18;
  int local_10;
  
  local_18 = (FNamedLensPreset *)0x0;
  _local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&stack0xffffffffffffffe8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&stack0xffffffffffffffe8);
  }
  pUVar6 = (UObject *)&stack0xffffffffffffffe8;
  if ((UObject *)param_2->MostRecentPropertyAddress != (UObject *)0x0) {
    pUVar6 = (UObject *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = param_1 + 2;
  if (pUVar1 != pUVar6) {
    DestructItems<FNamedLensPreset,int>
              ((FNamedLensPreset *)*(FScriptContainerElement **)pUVar1,*(int *)&param_1[2].field_0x8
              );
    iVar3 = *(int *)&pUVar6->field_0x8;
    puVar2 = &param_1[2].field_0xc;
    FVar5.Data = *(FScriptContainerElement **)pUVar6;
    *(int *)&param_1[2].field_0x8 = iVar3;
    if ((iVar3 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar3,*(int *)puVar2,(ForAnyElementType *)pUVar1,iVar3,(int *)puVar2);
      ConstructItems<FNamedLensPreset,FNamedLensPreset,int>
                (*(FScriptContainerElement **)pUVar1,(FNamedLensPreset *)FVar5.Data,iVar3);
    }
  }
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  DestructItems<FNamedLensPreset,int>(local_18,local_10);
  if (local_18 != (FNamedLensPreset *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

