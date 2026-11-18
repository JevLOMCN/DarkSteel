// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 10

// StaticClass @ 14abac880

UClass * __cdecl UDGGUI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDGGUI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"DGGUI",
               &Z_Registration_Info_UClass_UDGGUI.InnerSingleton,StaticRegisterNativesUDGGUI,0x3a8,8
               ,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",InternalConstructor<UDGGUI>,
               InternalVTableHelperCtorCaller<UDGGUI>,local_res8,UUserWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDGGUI.InnerSingleton;
}

// UDGGUI @ 14abbdbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDGGUI * __thiscall UDGGUI::UDGGUI(UDGGUI *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDGGUI__6B_;
  return this;
}

// UDGGUI @ 14abbdbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDGGUI * __thiscall UDGGUI::UDGGUI(UDGGUI *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDGGUI__6B_;
  return this;
}

// ~UDGGUI @ 14abbfa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDGGUI::~UDGGUI(UDGGUI *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDGGUI__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// CloseExistingDGGUI @ 14abd3640

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl UDGGUI::CloseExistingDGGUI(UWorld *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  UClass *pUVar8;
  UFunction *pUVar9;
  APlayerController *this;
  ulonglong uVar10;
  longlong local_res10 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  ulonglong uVar11;
  TObjectIterator<UDGGUI> local_38;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_38.Index = 0xffffffff;
  local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ObjectArray.ArrayNum = 0;
  local_38.ObjectArray.ArrayMax = 0;
  bVar5 = false;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = StaticClass();
  uVar11 = CONCAT44(uVar12,EVar6) | 0x90020000;
  GetObjectsOfClass(pUVar8,&local_38.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UDGGUI>::Advance(&local_38);
    uVar10 = (ulonglong)local_38.Index;
    if (local_38.Index < 0) break;
    if (local_38.ObjectArray.ArrayNum <= local_38.Index) break;
    uVar7 = 0;
    if (local_38.Index < local_38.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_38.Index >> 0x1f;
    }
    if (uVar7 == 0) {
      uVar11 = uVar10;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = UObjectBase::IsValidLowLevel
                      (*(UObjectBase **)(local_38.ObjectArray.AllocatorInstance.Data + uVar10 * 8));
    if (bVar3) {
      uVar10 = (ulonglong)local_38.Index;
      uVar7 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar7 = (uint)~local_38.Index >> 0x1f;
      }
      if (uVar7 == 0) {
        uVar11 = uVar10;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      local_res10[0] = 0;
      pUVar1 = *(UObject **)(local_38.ObjectArray.AllocatorInstance.Data + uVar10 * 8);
      pUVar9 = UObject::FindFunctionChecked(pUVar1,NAME_UDGGUI_GetCustomizableObjectInstanceUsage);
      (**(code **)(*(longlong *)pUVar1 + 0x260))
                (pUVar1,pUVar9,local_res10,*(code **)(*(longlong *)pUVar1 + 0x260),uVar11);
      if (local_res10[0] != 0) {
        uVar10 = (ulonglong)local_38.Index;
        uVar7 = 0;
        if (local_38.Index < local_38.ObjectArray.ArrayNum) {
          uVar7 = (uint)~local_38.Index >> 0x1f;
        }
        if (uVar7 == 0) {
          uVar11 = uVar10;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        local_res10[1] = 0;
        pUVar1 = *(UObject **)(local_38.ObjectArray.AllocatorInstance.Data + uVar10 * 8);
        pUVar9 = UObject::FindFunctionChecked(pUVar1,NAME_UDGGUI_SetCustomizableObjectInstanceUsage)
        ;
        (**(code **)(*(longlong *)pUVar1 + 0x260))(pUVar1,pUVar9,local_res10 + 1);
        bVar5 = true;
      }
      uVar10 = (ulonglong)local_38.Index;
      uVar7 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar7 = (uint)~local_38.Index >> 0x1f;
      }
      if (uVar7 == 0) {
        uVar11 = uVar10;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      (**(code **)(**(longlong **)(local_38.ObjectArray.AllocatorInstance.Data + uVar10 * 8) + 0x2d0
                  ))();
    }
  }
  if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
  }
  if (bVar5) {
    this = UGameplayStatics::GetPlayerController((UObject *)param_1,0);
    if (this != (APlayerController *)0x0) {
      APlayerController::SetShowMouseCursor(this,false);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// GetCustomizableObjectInstanceUsage @ 14abda610

UCustomizableObjectInstanceUsage * __thiscall
UDGGUI::GetCustomizableObjectInstanceUsage(UDGGUI *this)

{
  UFunction *pUVar1;
  UCustomizableObjectInstanceUsage *local_res8 [4];
  
  local_res8[0] = (UCustomizableObjectInstanceUsage *)0x0;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDGGUI_GetCustomizableObjectInstanceUsage);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return local_res8[0];
}

// GetPrivateStaticClass @ 14abe00d0

UClass * __cdecl UDGGUI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDGGUI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"DGGUI",
               &Z_Registration_Info_UClass_UDGGUI.InnerSingleton,StaticRegisterNativesUDGGUI,0x3a8,8
               ,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",InternalConstructor<UDGGUI>,
               InternalVTableHelperCtorCaller<UDGGUI>,local_res8,UUserWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDGGUI.InnerSingleton;
}

// OpenDGGUI @ 14abeb0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDGGUI::OpenDGGUI(int param_1,UCustomizableObjectInstanceUsage *param_2,UWorld *param_3,int param_4)

{
  APlayerController *this;
  FName *pFVar1;
  FConfigFile *this_00;
  FConfigSection *this_01;
  FString *pFVar2;
  size_t sVar3;
  UClass *pUVar4;
  UUserWidget *this_02;
  UFunction *pUVar5;
  int iVar6;
  int iVar7;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  this = UGameplayStatics::GetPlayerController((UObject *)param_3,param_4);
  if (this == (APlayerController *)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UDGGUI::OpenDGGUI'::__l5::_dynamic_atexit_destructor_for__DGGUIAssetPath__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar6 = DGGUIAssetPath.Data.ArrayNum;
  if (iVar6 < 2) {
    pFVar1 = ::FName::FName((FName *)&local_48,"Mutable");
    this_00 = FConfigCacheIni::FindConfigFileWithBaseName(GConfig,*pFVar1);
    if (this_00 != (FConfigFile *)0x0) {
      ::FString::FString((FString *)&local_58,L"EditorDefaults");
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      this_01 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                        *)this_00,(FString *)&local_58);
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if ((FName)local_58.DataPtr != (FName)0x0) {
        FMemory::Free(local_58.DataPtr);
      }
      if (this_01 != (FConfigSection *)0x0) {
        FConfigSection::GetString(this_01,L"DynamicallyGenerated_DGGUI_Path",&DGGUIAssetPath);
      }
    }
    iVar6 = DGGUIAssetPath.Data.ArrayNum;
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  iVar7 = 0;
  local_48.Size = iVar6 + -1;
  if (iVar6 == 0) {
    local_48.Size = iVar7;
  }
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.DataPtr = (wchar_t *)DGGUIAssetPath.Data.AllocatorInstance.Data;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,&local_48);
  if (local_28.AssetPath.PackageName != (FName)0x0) {
    local_58.DataPtr = (wchar_t *)0x0;
    local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
    pFVar2 = FSoftObjectPath::ToString(&local_28,&local_38);
    if ((pFVar2->Data).ArrayNum == 0) {
      local_48.DataPtr = L"";
LAB_14abeb258:
      sVar3 = wcslen(local_48.DataPtr);
      iVar7 = (int)sVar3;
    }
    else {
      local_48.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      if ((UClass *)local_48.DataPtr != (UClass *)0x0) goto LAB_14abeb258;
    }
    local_48.Size = iVar7;
    pUVar4 = StaticClass();
    pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&local_48,&local_58,0,(UPackageMap *)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (pUVar4 != (UClass *)0x0) {
      local_58.DataPtr = (wchar_t *)0x0;
      local_48.DataPtr = (wchar_t *)pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      this_02 = (UUserWidget *)
                CreateWidget<UDGGUI,APlayerController_*>
                          (this,(TSubclassOf<UUserWidget>)&local_48,(FName)local_58.DataPtr);
      if (this_02 != (UUserWidget *)0x0) {
        local_48.DataPtr = (wchar_t *)param_2;
        pUVar5 = UObject::FindFunctionChecked
                           ((UObject *)this_02,NAME_UDGGUI_SetCustomizableObjectInstanceUsage);
        (**(code **)(this_02->_padding_ + 0x260))(this_02,pUVar5,&local_48);
        UUserWidget::AddToViewport(this_02,0);
        APlayerController::SetShowMouseCursor(this,true);
      }
      goto LAB_14abeb336;
    }
  }
  if (2 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
LAB_14abeb336:
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetCustomizableObjectInstanceUsage @ 14abf0970

void __thiscall
UDGGUI::SetCustomizableObjectInstanceUsage(UDGGUI *this,UCustomizableObjectInstanceUsage *param_1)

{
  UFunction *pUVar1;
  UCustomizableObjectInstanceUsage *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDGGUI_SetCustomizableObjectInstanceUsage);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// StaticRegisterNativesUDGGUI @ 14abf20b0

void __cdecl UDGGUI::StaticRegisterNativesUDGGUI(void)

{
  return;
}

