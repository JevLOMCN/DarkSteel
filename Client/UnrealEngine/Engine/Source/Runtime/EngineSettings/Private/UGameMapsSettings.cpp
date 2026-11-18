// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 21

// StaticClass @ 143129900

UClass * __cdecl UGameMapsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameMapsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GameMapsSettings",
               &Z_Registration_Info_UClass_UGameMapsSettings.InnerSingleton,
               StaticRegisterNativesUGameMapsSettings,0x120,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameMapsSettings>,
               InternalVTableHelperCtorCaller<UGameMapsSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameMapsSettings.InnerSingleton;
}

// UGameMapsSettings @ 14312ac40

UGameMapsSettings * __thiscall
UGameMapsSettings::UGameMapsSettings(UGameMapsSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameMapsSettings__6B_;
  (this->LocalMapOptions).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalMapOptions).Data.ArrayNum = 0;
  (this->LocalMapOptions).Data.ArrayMax = 0;
  (this->TransitionMap).AssetPath.PackageName.ComparisonIndex = 0;
  (this->TransitionMap).AssetPath.PackageName.Number = 0;
  (this->TransitionMap).AssetPath.AssetName.ComparisonIndex = 0;
  (this->TransitionMap).AssetPath.AssetName.Number = 0;
  (this->TransitionMap).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransitionMap).SubPathString.Data.ArrayNum = 0;
  (this->TransitionMap).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->GameInstanceClass = 0;
  *(undefined8 *)&(this->GameInstanceClass).field_0x8 = 0;
  *(undefined8 *)&(this->GameInstanceClass).field_0x10 = 0;
  *(undefined8 *)&(this->GameInstanceClass).field_0x18 = 0;
  (this->GameDefaultMap).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GameDefaultMap).AssetPath.PackageName.Number = 0;
  (this->GameDefaultMap).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GameDefaultMap).AssetPath.AssetName.Number = 0;
  (this->GameDefaultMap).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameDefaultMap).SubPathString.Data.ArrayNum = 0;
  (this->GameDefaultMap).SubPathString.Data.ArrayMax = 0;
  (this->ServerDefaultMap).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ServerDefaultMap).AssetPath.PackageName.Number = 0;
  (this->ServerDefaultMap).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ServerDefaultMap).AssetPath.AssetName.Number = 0;
  (this->ServerDefaultMap).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ServerDefaultMap).SubPathString.Data.ArrayNum = 0;
  (this->ServerDefaultMap).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->GlobalDefaultGameMode = 0;
  *(undefined8 *)&(this->GlobalDefaultGameMode).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalDefaultGameMode).field_0x10 = 0;
  *(undefined8 *)&(this->GlobalDefaultGameMode).field_0x18 = 0;
  *(undefined8 *)&this->GlobalDefaultServerGameMode = 0;
  *(undefined8 *)&(this->GlobalDefaultServerGameMode).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalDefaultServerGameMode).field_0x10 = 0;
  *(undefined8 *)&(this->GlobalDefaultServerGameMode).field_0x18 = 0;
  (this->GameModeMapPrefixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameModeMapPrefixes).ArrayNum = 0;
  (this->GameModeMapPrefixes).ArrayMax = 0;
  (this->GameModeClassAliases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameModeClassAliases).ArrayNum = 0;
  (this->GameModeClassAliases).ArrayMax = 0;
  return this;
}

// UGameMapsSettings @ 14312ad20

UGameMapsSettings * __thiscall
UGameMapsSettings::UGameMapsSettings(UGameMapsSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bUseSplitscreen = true;
  this->TwoPlayerSplitscreenLayout = '\0';
  this->_padding_ = (longlong)&___7UGameMapsSettings__6B_;
  (this->LocalMapOptions).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalMapOptions).Data.ArrayNum = 0;
  (this->LocalMapOptions).Data.ArrayMax = 0;
  (this->TransitionMap).AssetPath.PackageName.ComparisonIndex = 0;
  (this->TransitionMap).AssetPath.PackageName.Number = 0;
  (this->TransitionMap).AssetPath.AssetName.ComparisonIndex = 0;
  (this->TransitionMap).AssetPath.AssetName.Number = 0;
  (this->TransitionMap).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransitionMap).SubPathString.Data.ArrayNum = 0;
  (this->TransitionMap).SubPathString.Data.ArrayMax = 0;
  (this->ThreePlayerSplitscreenLayout).Value = '\0';
  this->bShowAllPlayerWidgetsWhenSplitscreenDisabled = false;
  this->bOffsetPlayerGamepadIds = false;
  *(undefined8 *)&this->GameInstanceClass = 0;
  *(undefined8 *)&(this->GameInstanceClass).field_0x8 = 0;
  *(undefined8 *)&(this->GameInstanceClass).field_0x10 = 0;
  *(undefined8 *)&(this->GameInstanceClass).field_0x18 = 0;
  (this->GameDefaultMap).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GameDefaultMap).AssetPath.PackageName.Number = 0;
  (this->GameDefaultMap).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GameDefaultMap).AssetPath.AssetName.Number = 0;
  (this->GameDefaultMap).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameDefaultMap).SubPathString.Data.ArrayNum = 0;
  (this->GameDefaultMap).SubPathString.Data.ArrayMax = 0;
  (this->ServerDefaultMap).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ServerDefaultMap).AssetPath.PackageName.Number = 0;
  (this->ServerDefaultMap).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ServerDefaultMap).AssetPath.AssetName.Number = 0;
  (this->ServerDefaultMap).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ServerDefaultMap).SubPathString.Data.ArrayNum = 0;
  (this->ServerDefaultMap).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->GlobalDefaultGameMode = 0;
  *(undefined8 *)&(this->GlobalDefaultGameMode).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalDefaultGameMode).field_0x10 = 0;
  *(undefined8 *)&(this->GlobalDefaultGameMode).field_0x18 = 0;
  *(undefined8 *)&this->GlobalDefaultServerGameMode = 0;
  *(undefined8 *)&(this->GlobalDefaultServerGameMode).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalDefaultServerGameMode).field_0x10 = 0;
  *(undefined8 *)&(this->GlobalDefaultServerGameMode).field_0x18 = 0;
  (this->GameModeMapPrefixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameModeMapPrefixes).ArrayNum = 0;
  (this->GameModeMapPrefixes).ArrayMax = 0;
  (this->GameModeClassAliases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameModeClassAliases).ArrayNum = 0;
  (this->GameModeClassAliases).ArrayMax = 0;
  return this;
}

// ~UGameMapsSettings @ 14312b1d0

void __thiscall UGameMapsSettings::~UGameMapsSettings(UGameMapsSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UGameMapsSettings__6B_;
  DestructItems<FGameModeName,int>
            ((FGameModeName *)(this->GameModeClassAliases).AllocatorInstance.Data,
             (this->GameModeClassAliases).ArrayNum);
  pFVar1 = (this->GameModeClassAliases).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGameModeName,int>
            ((FGameModeName *)(this->GameModeMapPrefixes).AllocatorInstance.Data,
             (this->GameModeMapPrefixes).ArrayNum);
  pFVar1 = (this->GameModeMapPrefixes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GlobalDefaultServerGameMode).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->GlobalDefaultGameMode).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ServerDefaultMap).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameDefaultMap).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GameInstanceClass).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->TransitionMap).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocalMapOptions).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetGameDefaultMap @ 14312bd60

FString * __cdecl
UGameMapsSettings::GetGameDefaultMap(FString *__return_storage_ptr__,EDefaultMapRequestType param_1)

{
  UClass *pUVar1;
  FString *pFVar2;
  FString local_18;
  
  if (param_1 != Default) {
    if (param_1 == Client) {
      pUVar1 = StaticClass();
      if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar1);
      }
      FSoftObjectPath::GetLongPackageName
                ((FSoftObjectPath *)&(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x8,
                 __return_storage_ptr__);
      return __return_storage_ptr__;
    }
    if (param_1 == Server) {
      pUVar1 = StaticClass();
      if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar1);
      }
      FSoftObjectPath::GetLongPackageName
                ((FSoftObjectPath *)((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr + 4),
                 __return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  pUVar1 = StaticClass();
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pFVar2 = FSoftObjectPath::GetLongPackageName
                     ((FSoftObjectPath *)
                      &(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x8,&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetGameMapsSettings @ 14312be90

UGameMapsSettings * __cdecl UGameMapsSettings::GetGameMapsSettings(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UGameMapsSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UGameMapsSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetGameModeForMapName @ 14312bed0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
UGameMapsSettings::GetGameModeForMapName(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FConfigSection *this;
  FName *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  undefined8 *puVar7;
  ForAnyElementType FVar8;
  undefined8 *puVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FName local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar10 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar10 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14312bf44;
  }
  pUVar10 = (UObject *)0x0;
LAB_14312bf44:
  iVar1 = *(int *)&pUVar10[6].field_0x18;
  puVar7 = *(undefined8 **)&pUVar10[6].field_0x10;
  puVar9 = puVar7 + (longlong)iVar1 * 6;
  while( true ) {
    if (*(int *)&pUVar10[6].field_0x18 != iVar1) {
      `TCheckedPointerIterator<FGameModeName,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (puVar7 == puVar9) break;
    if (((*(int *)(puVar7 + 1) != 0) && (iVar12 = *(int *)(puVar7 + 1) + -1, 0 < iVar12)) &&
       (bVar2 = ::FString::StartsWith(param_1,(wchar_t *)*puVar7,iVar12,IgnoreCase), bVar2)) {
      FSoftObjectPath::ToString((FSoftObjectPath *)(puVar7 + 2),__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    puVar7 = puVar7 + 6;
  }
  this = FConfigCacheIni::GetSection(GConfig,L"/Script/Engine.WorldSettings",false,&GGameIni);
  if (this != (FConfigSection *)0x0) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    pFVar4 = ::FName::FName(&local_res18,L"DefaultMapPrefixes");
    FConfigSection::MultiFind<TSizedDefaultAllocator<32>_>(this,*pFVar4,&local_58,false);
    if (local_58.ArrayNum != 0) {
      if (2 < (byte)LogLoad._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
      }
      iVar1 = local_58.ArrayNum;
      pFVar11 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
      FVar8.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if (local_58.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res18);
        }
        if (FVar8.Data == pFVar11) break;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        if (*(int *)(FVar8.Data + 8) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)FVar8.Data;
        }
        bVar2 = FParse::Value(pwVar5,L"Prefix=",&local_38,true,(wchar_t **)0x0);
        if (bVar2) {
          if (*(int *)(FVar8.Data + 8) == 0) {
            pwVar5 = L"";
          }
          else {
            pwVar5 = *(wchar_t **)FVar8.Data;
          }
          bVar2 = FParse::Value(pwVar5,L"GameMode=",&local_48,true,(wchar_t **)0x0);
          if (bVar2) {
            iVar12 = local_38.Data.ArrayNum + -1;
            if (local_38.Data.ArrayNum == 0) {
              iVar12 = 0;
            }
            FVar6.Data = (FScriptContainerElement *)L"";
            if (local_38.Data.ArrayNum != 0) {
              FVar6.Data = local_38.Data.AllocatorInstance.Data;
            }
            bVar2 = ::FString::StartsWith(param_1,(wchar_t *)FVar6.Data,iVar12,IgnoreCase);
            if (bVar2) {
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   local_48.Data.AllocatorInstance.Data;
              (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
              if (local_58.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free(local_58.AllocatorInstance.Data);
              return __return_storage_ptr__;
            }
          }
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        FVar8.Data = FVar8.Data + 0x10;
      }
    }
    DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGameModeForName @ 14312c1b0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
UGameMapsSettings::GetGameModeForName(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  FConfigSection *this;
  FName *pFVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  ForAnyElementType FVar7;
  undefined8 *puVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  FName local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar9 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar9 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14312c224;
  }
  pUVar9 = (UObject *)0x0;
LAB_14312c224:
  iVar1 = *(int *)(pUVar9 + 7);
  puVar6 = *(undefined8 **)&pUVar9[6].field_0x20;
  puVar8 = puVar6 + (longlong)iVar1 * 6;
  do {
    if (*(int *)(pUVar9 + 7) != iVar1) {
      `TCheckedPointerIterator<FGameModeName,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (puVar6 == puVar8) {
      this = FConfigCacheIni::GetSection(GConfig,L"/Script/Engine.GameMode",false,&GGameIni);
      if (this == (FConfigSection *)0x0) goto LAB_14312c45c;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      pFVar4 = ::FName::FName(&local_res18,L"GameModeClassAliases");
      FConfigSection::MultiFind<TSizedDefaultAllocator<32>_>(this,*pFVar4,&local_58,false);
      if (local_58.ArrayNum == 0) goto LAB_14312c442;
      if (2 < (byte)LogLoad._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
      }
      iVar1 = local_58.ArrayNum;
      pFVar10 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
      FVar7.Data = local_58.AllocatorInstance.Data;
      break;
    }
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == *(int *)(puVar6 + 1)) {
      if (iVar2 < 2) {
LAB_14312c288:
        FSoftObjectPath::ToString((FSoftObjectPath *)(puVar6 + 2),__return_storage_ptr__);
        return __return_storage_ptr__;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,(wchar_t *)*puVar6);
      bVar11 = iVar2 == 0;
    }
    else {
      bVar11 = iVar2 + *(int *)(puVar6 + 1) == 1;
    }
    if (bVar11) goto LAB_14312c288;
    puVar6 = puVar6 + 6;
  } while( true );
LAB_14312c324:
  if (local_58.ArrayNum != iVar1) {
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res18)
    ;
  }
  if (FVar7.Data == pFVar10) {
LAB_14312c442:
    DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
LAB_14312c45c:
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (*(int *)(FVar7.Data + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)FVar7.Data;
  }
  bVar11 = FParse::Value(pwVar5,L"ShortName=",&local_38,true,(wchar_t **)0x0);
  if (bVar11) {
    if (*(int *)(FVar7.Data + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)FVar7.Data;
    }
    bVar11 = FParse::Value(pwVar5,L"GameClassName=",&local_48,true,(wchar_t **)0x0);
    if (bVar11) {
      iVar2 = (param_1->Data).ArrayNum;
      if (local_38.Data.ArrayNum == iVar2) {
        if (local_38.Data.ArrayNum < 2) {
LAB_14312c3f8:
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_48.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
          if (local_58.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_58.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar11 = iVar2 == 0;
      }
      else {
        bVar11 = local_38.Data.ArrayNum + iVar2 == 1;
      }
      if (bVar11) goto LAB_14312c3f8;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar7.Data = FVar7.Data + 0x10;
  goto LAB_14312c324;
}

// GetGlobalDefaultGameMode @ 14312c490

FString * __cdecl UGameMapsSettings::GetGlobalDefaultGameMode(FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FSoftObjectPath *this;
  FString local_28;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       (this = (FSoftObjectPath *)&pUVar2[4].field_0x20,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_14312c4fb;
  }
  this = (FSoftObjectPath *)&DAT_000000c0;
LAB_14312c4fb:
  pFVar4 = FSoftObjectPath::ToString(this,&local_28);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14312c610

UClass * __cdecl UGameMapsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameMapsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GameMapsSettings",
               &Z_Registration_Info_UClass_UGameMapsSettings.InnerSingleton,
               StaticRegisterNativesUGameMapsSettings,0x120,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameMapsSettings>,
               InternalVTableHelperCtorCaller<UGameMapsSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameMapsSettings.InnerSingleton;
}

// GetSkipAssigningGamepadToPlayer1 @ 14312ca30

bool __thiscall UGameMapsSettings::GetSkipAssigningGamepadToPlayer1(UGameMapsSettings *this)

{
  return this->bOffsetPlayerGamepadIds;
}

// PostInitProperties @ 14312ca70

void __thiscall UGameMapsSettings::PostInitProperties(UGameMapsSettings *this)

{
  UObject::PostInitProperties((UObject *)this);
  FixMapAssetRef(&this->GameDefaultMap);
  FixMapAssetRef(&this->ServerDefaultMap);
  FixMapAssetRef(&this->TransitionMap);
  return;
}

// PostReloadConfig @ 14312cab0

void __thiscall UGameMapsSettings::PostReloadConfig(UGameMapsSettings *this,FProperty *param_1)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FName FVar4;
  FSoftObjectPath *pFVar5;
  FName FVar6;
  FName local_res10;
  
  if (param_1 == (FProperty *)0x0) {
    FixMapAssetRef(&this->GameDefaultMap);
    FixMapAssetRef(&this->ServerDefaultMap);
    FixMapAssetRef(&this->TransitionMap);
    return;
  }
  pFVar3 = ::FName::FName(&local_res10,0xe,L"GameDefaultMap",FNAME_Add);
  FVar1 = *pFVar3;
  bVar2 = IsThisNotNull(param_1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar2) {
    FVar4 = (FName)param_1->_padding_;
  }
  if (FVar4 == FVar1) {
    pFVar5 = &this->GameDefaultMap;
  }
  else {
    pFVar3 = ::FName::FName(&local_res10,0x10,L"ServerDefaultMap",FNAME_Add);
    FVar1 = *pFVar3;
    bVar2 = IsThisNotNull(param_1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar2) {
      FVar4 = (FName)param_1->_padding_;
    }
    if (FVar4 == FVar1) {
      pFVar5 = &this->ServerDefaultMap;
    }
    else {
      pFVar3 = ::FName::FName(&local_res10,0xd,L"TransitionMap",FNAME_Add);
      FVar1 = *pFVar3;
      bVar2 = IsThisNotNull(param_1,"FField::GetFName");
      if (bVar2) {
        FVar6 = (FName)param_1->_padding_;
      }
      if (FVar6 != FVar1) {
        return;
      }
      pFVar5 = &this->TransitionMap;
    }
  }
  FixMapAssetRef(pFVar5);
  return;
}

// SetGameDefaultMap @ 14312cc00

void __cdecl UGameMapsSettings::SetGameDefaultMap(FString *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  TStringView<wchar_t> local_18;
  
  pUVar2 = StaticClass();
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  pUVar3 = (pUVar2->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UObject *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14312cc60;
  }
  pUVar3 = (UObject *)0x0;
LAB_14312cc60:
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  FSoftObjectPath::SetPath((FSoftObjectPath *)&pUVar3[3].field_0x8,&local_18);
  return;
}

// SetGlobalDefaultGameMode @ 14312ccb0

void __cdecl UGameMapsSettings::SetGlobalDefaultGameMode(FString *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  undefined1 *puVar4;
  TStringView<wchar_t> local_38;
  FSoftObjectPath local_28;
  
  pUVar2 = StaticClass();
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  pUVar3 = (pUVar2->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UObject *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14312cd10;
  }
  pUVar3 = (UObject *)0x0;
LAB_14312cd10:
  local_38.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Size = iVar1 + -1;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_28,&local_38);
  *(uint *)&pUVar3[4].field_0x20 = local_28.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&pUVar3[4].field_0x24 = local_28.AssetPath.PackageName.Number;
  *(uint *)&pUVar3[5].field_0x0 = local_28.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&pUVar3[5].field_0x4 = local_28.AssetPath.AssetName.Number;
  puVar4 = &pUVar3[5].field_0x8;
  if ((FUtf8String *)puVar4 != &local_28.SubPathString) {
    if (*(void **)puVar4 != (void *)0x0) {
      FMemory::Free(*(void **)puVar4);
    }
    *(FScriptContainerElement **)puVar4 = local_28.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&pUVar3[5].field_0x10 = local_28.SubPathString.Data.ArrayNum;
    *(int *)&pUVar3[5].field_0x14 = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetSkipAssigningGamepadToPlayer1 @ 14312cdd0

void __thiscall
UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(UGameMapsSettings *this,bool param_1)

{
  this->bOffsetPlayerGamepadIds = param_1;
  return;
}

// StaticRegisterNativesUGameMapsSettings @ 14312cdf0

void __cdecl UGameMapsSettings::StaticRegisterNativesUGameMapsSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UGameMapsSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14312d360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UGameMapsSettings::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGameMapsSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execGetGameMapsSettings @ 14312d4d0

void __cdecl
UGameMapsSettings::execGetGameMapsSettings(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetSkipAssigningGamepadToPlayer1 @ 14312d540

void __cdecl
UGameMapsSettings::execGetSkipAssigningGamepadToPlayer1
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[2].field_0xd;
  return;
}

// execSetSkipAssigningGamepadToPlayer1 @ 14312d570

void __cdecl
UGameMapsSettings::execSetSkipAssigningGamepadToPlayer1
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[2].field_0xd = local_res8[0] != 0;
  return;
}

