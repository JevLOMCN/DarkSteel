// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationUtils
// Functions: 2

// CreateScreenshotInstance @ 14e7eef80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FAutomationUtilsGameplayAutomationScreenshotFactory::CreateScreenshotInstance
          (FString *param_1,float param_2,float param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FOutputDeviceRedirector *pFVar4;
  FAutomationUtilsGameplayAutomationScreenshotInstance *this;
  FString *pFVar5;
  FString *pFVar6;
  FAutomationUtilsGameplayAutomationScreenshotInstance *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  FString local_78;
  undefined1 local_68 [16];
  FString local_58;
  FString local_48 [3];
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar7 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)0x0;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  iVar3 = TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
                      *)&ManagedScreenshotInstances,uVar2,param_1);
  if (iVar3 == -1) {
    if ((GEngine != (UEngine *)0x0) &&
       ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) {
      this = ::operator_new(0x58);
      if (this != (FAutomationUtilsGameplayAutomationScreenshotInstance *)0x0) {
        pFVar5 = ::FString::FString(&local_58,param_4);
        pFVar6 = ::FString::FString(local_48,param_1);
        pFVar7 = FAutomationUtilsGameplayAutomationScreenshotInstance::
                 FAutomationUtilsGameplayAutomationScreenshotInstance
                           (this,pFVar6,param_2,param_3,pFVar5);
      }
      local_68._8_8_ = &local_78;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar7;
      local_68._0_8_ = param_1;
      TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,FAutomationUtilsGameplayAutomationScreenshotInstance_*_&&>_>
                ((TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
                  *)&ManagedScreenshotInstances,
                 (TPairInitializer<FString_const_&,FAutomationUtilsGameplayAutomationScreenshotInstance_*_&&>
                  *)&stack0x00000008,(bool *)local_68);
      pFVar4 = GetGlobalLogSingleton();
      ::FString::PrintfImpl((FString *)local_68,L"Created GameplayScreenshotInstance \"%s\"");
      FOutputDevice::Log((FOutputDevice *)pFVar4,(FString *)local_68);
      if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (param_4->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return true;
    }
    pFVar4 = GetGlobalLogSingleton();
    FOutputDevice::Log((FOutputDevice *)pFVar4,
                       L"Cannot create GameplayScreenshotInstance - either GEngine or GameViewport is null!"
                      );
  }
  else {
    pFVar4 = GetGlobalLogSingleton();
    ::FString::PrintfImpl
              (&local_78,
               L"Cannot create GameplayScreenshotInstance - One with the name \"%s\" already exists!"
              );
    FOutputDevice::Log((FOutputDevice *)pFVar4,&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// RequestDeleteScreenshotInstance @ 14e7efbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FAutomationUtilsGameplayAutomationScreenshotFactory::RequestDeleteScreenshotInstance
          (FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationUtilsGameplayAutomationScreenshotInstance *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FOutputDeviceRedirector *pFVar6;
  FAutomationUtilsGameplayAutomationScreenshotInstance **ppFVar7;
  int iVar8;
  wchar_t *pwVar9;
  FString local_18;
  
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  iVar5 = TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
                      *)&ManagedScreenshotInstances,uVar4,param_1);
  if (iVar5 == -1) {
    pFVar6 = GetGlobalLogSingleton();
    ::FString::PrintfImpl
              (&local_18,L"Tried to remove GameplayScreenshotInstance \"%s\", but it did not exist!"
              );
    FOutputDevice::Log((FOutputDevice *)pFVar6,Error,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    bVar3 = false;
  }
  else {
    ppFVar7 = TMapBase<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>_>
              ::FindChecked((TMapBase<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>_>
                             *)&ManagedScreenshotInstances,param_1);
    pFVar2 = *ppFVar7;
    if (pFVar2 != (FAutomationUtilsGameplayAutomationScreenshotInstance *)0x0) {
      if ((GEngine != (UEngine *)0x0) &&
         ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &UGameViewportClient::ScreenshotCapturedDelegate,pFVar2);
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FWorldDelegates::LevelRemovedFromWorld,pFVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar2->AutomationViewExtension).SharedReferenceCount.ReferenceController);
      pFVar1 = (pFVar2->MapName).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->DeterminedPath).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->MetadataJsonString).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->ScreenshotName).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(pFVar2,0x58);
    }
    if (ManagedScreenshotInstances._8_4_ != ManagedScreenshotInstances._52_4_) {
      iVar8 = (param_1->Data).ArrayNum;
      iVar5 = iVar8 + -1;
      if (iVar8 == 0) {
        pwVar9 = L"";
        iVar5 = 0;
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
      TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
                  *)&ManagedScreenshotInstances,uVar4,param_1);
    }
    pFVar6 = GetGlobalLogSingleton();
    ::FString::PrintfImpl(&local_18,L"Removed GameplayScreenshotInstance \"%s\"");
    FOutputDevice::Log((FOutputDevice *)pFVar6,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    bVar3 = true;
  }
  return bVar3;
}

