// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 12

// StartupModule @ 14ac02880

void __thiscall FCustomizableObjectModule::StartupModule(FCustomizableObjectModule *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  IConsoleCommand *pIVar6;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = ToggleDGGUI;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pIVar6 = (IConsoleCommand *)
           (*pcVar1)(pIVar2,L"mutable.ToggleDGGUI",
                     L"Looks for a Customizable Object Instance within the player pawn and opens a UI to modify its parameters, or closes it if it\'s open. Specify slot ID to control which component is modified."
                     ,&local_68,0);
  this->LaunchDGGUICommand = pIVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(_func___cdecl_void *)local_res8);
  return;
}

// ShutdownModule @ 14ac02a30

void __thiscall FCustomizableObjectModule::ShutdownModule(FCustomizableObjectModule *this)

{
  return;
}

// GetPluginVersion @ 14ac02a40

FString * __thiscall
FCustomizableObjectModule::GetPluginVersion
          (FCustomizableObjectModule *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IPluginManager *pIVar4;
  FString *pFVar5;
  longlong lVar6;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  ::FString::FString(__return_storage_ptr__,"x.x");
  pIVar4 = IPluginManager::Get();
  (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,&local_18,"Mutable");
  if (local_18 != (longlong *)0x0) {
    if ((local_18 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    cVar3 = (**(code **)(*local_18 + 0x48))();
    if (cVar3 != '\0') {
      if ((local_18 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
      lVar6 = (**(code **)(*local_18 + 0xa0))();
      ::FString::operator=(__return_storage_ptr__,(FString *)(lVar6 + 8));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetNumBoneInfluences @ 14ac02b30

/* WARNING: Enum "Type": Some values do not have unique names */

ECustomizableObjectNumBoneInfluences __thiscall
FCustomizableObjectModule::GetNumBoneInfluences(FCustomizableObjectModule *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  FConfigFile *this_00;
  FConfigSection *pFVar6;
  FString *pFVar7;
  ForAnyElementType _Str;
  ECustomizableObjectNumBoneInfluences EVar8;
  uint local_res10 [2];
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  
  bVar2 = false;
  local_res10[0] = 0;
  pFVar5 = ::FName::FName(local_res18,"Mutable");
  this_00 = FConfigCacheIni::FindConfigFileWithBaseName(GConfig,*pFVar5);
  if (this_00 == (FConfigFile *)0x0) {
    return Four;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::FString(&local_38,L"Features");
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar6 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                   *)this_00,&local_38);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((pFVar6 == (FConfigSection *)0x0) ||
     (bVar1 = FConfigSection::GetString(pFVar6,L"CustomizableObjectNumBoneInfluences",&local_48),
     !bVar1)) {
LAB_14ac02da8:
    local_res10[0] = local_res10[0] & 0xffffff00;
    ::FString::FString(&local_38,L"Features");
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    pFVar6 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
             ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                     *)this_00,&local_38);
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((pFVar6 == (FConfigSection *)0x0) ||
        (bVar2 = FConfigSection::GetBool(pFVar6,L"bExtraBoneInfluencesEnabled",(bool *)local_res10),
        !bVar2)) || (local_res10[0]._0_1_ == false)) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      return Four;
    }
LAB_14ac02e15:
    EVar8 = Eight;
  }
  else {
    bVar1 = ::FString::IsNumeric(&local_48);
    if (bVar1) {
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        _Str.Data = local_48.Data.AllocatorInstance.Data;
      }
      iVar3 = _wtoi((wchar_t *)_Str.Data);
      if (iVar3 != 4) goto LAB_14ac02c1c;
LAB_14ac02c6c:
      bVar1 = true;
      if (bVar2) goto LAB_14ac02c7a;
    }
    else {
      iVar3 = -1;
LAB_14ac02c1c:
      pFVar7 = ::FString::FString(&local_38,"Four");
      iVar4 = (pFVar7->Data).ArrayNum;
      if (local_48.Data.ArrayNum == iVar4) {
        if (local_48.Data.ArrayNum < 2) {
          bVar2 = true;
          goto LAB_14ac02c6c;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                           (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
        bVar1 = iVar4 == 0;
      }
      else {
        bVar1 = local_48.Data.ArrayNum + iVar4 == 1;
      }
      bVar2 = true;
      if (bVar1) goto LAB_14ac02c6c;
      bVar1 = false;
LAB_14ac02c7a:
      bVar2 = false;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (!bVar1) {
        if (iVar3 == 8) {
LAB_14ac02ce6:
          bVar1 = true;
        }
        else {
          bVar2 = true;
          pFVar7 = ::FString::FString(&local_38,"Eight");
          iVar4 = (pFVar7->Data).ArrayNum;
          if (local_48.Data.ArrayNum == iVar4) {
            if (local_48.Data.ArrayNum < 2) goto LAB_14ac02ce6;
            iVar4 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                               (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
            bVar1 = iVar4 == 0;
          }
          else {
            bVar1 = local_48.Data.ArrayNum + iVar4 == 1;
          }
          if (bVar1) goto LAB_14ac02ce6;
          bVar1 = false;
        }
        if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        bVar2 = false;
        if (!bVar1) {
          if (iVar3 == 0xc) {
LAB_14ac02d5a:
            bVar1 = true;
          }
          else {
            bVar2 = true;
            pFVar7 = ::FString::FString(&local_38,"Twelve");
            iVar3 = (pFVar7->Data).ArrayNum;
            if (local_48.Data.ArrayNum == iVar3) {
              if (local_48.Data.ArrayNum < 2) goto LAB_14ac02d5a;
              iVar3 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                                 (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
              bVar1 = iVar3 == 0;
            }
            else {
              bVar1 = local_48.Data.ArrayNum + iVar3 == 1;
            }
            if (bVar1) goto LAB_14ac02d5a;
            bVar1 = false;
          }
          if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (bVar1) {
            EVar8 = Twelve;
            goto LAB_14ac02e17;
          }
          if (2 < (byte)LogMutable._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          }
          goto LAB_14ac02da8;
        }
        goto LAB_14ac02e15;
      }
    }
    EVar8 = Four;
  }
LAB_14ac02e17:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return EVar8;
}

// RegisterExtension @ 14ac02e70

void __thiscall
FCustomizableObjectModule::RegisterExtension
          (FCustomizableObjectModule *this,UCustomizableObjectExtension *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UObjectBase *pUVar4;
  bool bVar5;
  int iVar6;
  UObjectBase *local_res10;
  UObjectBase *local_18 [2];
  
  local_res10 = (UObjectBase *)param_1;
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectModule.cpp"
                       ,0x8f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar4 = local_res10;
  local_18[0] = (UObjectBase *)0x0;
  if (local_res10 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_res10);
    local_18[0] = pUVar4;
  }
  pFVar2 = (this->StrongExtensions).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->StrongExtensions).ArrayMax * 8
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->StrongExtensions).ArrayNum;
  piVar1 = &(this->StrongExtensions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->StrongExtensions).AllocatorInstance,piVar1);
  }
  (this->StrongExtensions).ArrayNum = iVar6 + 1;
  *(UObjectBase **)((this->StrongExtensions).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_18[0];
  pFVar2 = (this->Extensions).AllocatorInstance.Data;
  local_18[0] = (UObjectBase *)0x0;
  if ((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Extensions).ArrayMax * 8))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Extensions).ArrayNum;
  piVar1 = &(this->Extensions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Extensions).AllocatorInstance,piVar1);
  }
  (this->Extensions).ArrayNum = iVar6 + 1;
  *(UObjectBase **)((this->Extensions).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10;
  RefreshExtensionData(this);
  return;
}

// UnregisterExtension @ 14ac03040

void __thiscall
FCustomizableObjectModule::UnregisterExtension
          (FCustomizableObjectModule *this,UCustomizableObjectExtension *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObjectBase *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UObjectBase *local_res10;
  UObjectBase *local_38 [2];
  
  local_res10 = (UObjectBase *)param_1;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectModule.cpp"
                         ,0x99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar5 = local_res10;
  local_38[0] = (UObjectBase *)0x0;
  if (local_res10 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_res10);
    local_38[0] = pUVar5;
  }
  pFVar2 = (this->StrongExtensions).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar2 + (longlong)(this->StrongExtensions).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->StrongExtensions).ArrayNum;
  pUVar5 = local_38[0];
  if (iVar1 != 0) {
    pFVar2 = (this->StrongExtensions).AllocatorInstance.Data;
    iVar10 = 0;
    bVar4 = *(UObjectBase **)pFVar2 != local_38[0];
    lVar6 = 0;
    iVar9 = 0;
    do {
      iVar8 = iVar9;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UObjectBase **)(pFVar2 + lVar6 * 8) != pUVar5));
      iVar7 = iVar8 - iVar9;
      if (bVar4 == false) {
        DestructItems<TStrongObjectPtr<UCustomizableObjectExtension_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                  ((TStrongObjectPtr<UCustomizableObjectExtension_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                    *)(pFVar2 + (longlong)iVar9 * 8),iVar7);
        pUVar5 = local_38[0];
      }
      else {
        if (iVar10 != iVar9) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar9 * 8,(longlong)iVar7 << 3);
          pUVar5 = local_38[0];
        }
        iVar10 = iVar10 + iVar7;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar9 = iVar8;
    } while (lVar6 < iVar1);
    (this->StrongExtensions).ArrayNum = iVar10;
  }
  if (pUVar5 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar5);
    local_38[0] = (UObjectBase *)0x0;
  }
  pFVar2 = (this->Extensions).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Extensions).ArrayMax * 8)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Extensions).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->Extensions).AllocatorInstance.Data;
    iVar10 = 0;
    bVar4 = *(UObjectBase **)pFVar2 != local_res10;
    lVar6 = 0;
    iVar9 = 0;
    do {
      iVar8 = iVar9;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UObjectBase **)(pFVar2 + lVar6 * 8) != local_res10));
      if (bVar4 != false) {
        if (iVar10 != iVar9) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar9 * 8,
                  (longlong)(iVar8 - iVar9) << 3);
        }
        iVar10 = iVar10 + (iVar8 - iVar9);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar9 = iVar8;
    } while (lVar6 < iVar1);
    (this->Extensions).ArrayNum = iVar10;
  }
  RefreshExtensionData(this);
  return;
}

// GetRegisteredExtensions @ 14ac03340

TArrayView<UCustomizableObjectExtension_const_*_const,int> * __thiscall
FCustomizableObjectModule::GetRegisteredExtensions
          (FCustomizableObjectModule *this,
          TArrayView<UCustomizableObjectExtension_const_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UCustomizableObjectExtension_const_*_const,int> *pTVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectModule.cpp"
                       ,0xa3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UCustomizableObjectExtension_const_*_const,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  iVar1 = (this->Extensions).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (UCustomizableObjectExtension **)(this->Extensions).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UCustomizableObjectExtension_const_*_const,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetExtendedPinTypes @ 14ac033d0

TArrayView<FRegisteredCustomizableObjectPinType_const_,int> * __thiscall
FCustomizableObjectModule::GetExtendedPinTypes
          (FCustomizableObjectModule *this,
          TArrayView<FRegisteredCustomizableObjectPinType_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRegisteredCustomizableObjectPinType_const_,int> *pTVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectModule.cpp"
                       ,0xa9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FRegisteredCustomizableObjectPinType_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  iVar1 = (this->ExtendedPinTypes).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FRegisteredCustomizableObjectPinType *)(this->ExtendedPinTypes).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FRegisteredCustomizableObjectPinType_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetAdditionalObjectNodePins @ 14ac03460

TArrayView<FRegisteredObjectNodeInputPin_const_,int> * __thiscall
FCustomizableObjectModule::GetAdditionalObjectNodePins
          (FCustomizableObjectModule *this,
          TArrayView<FRegisteredObjectNodeInputPin_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRegisteredObjectNodeInputPin_const_,int> *pTVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectModule.cpp"
                       ,0xaf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FRegisteredObjectNodeInputPin_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  iVar1 = (this->AdditionalObjectNodePins).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FRegisteredObjectNodeInputPin *)(this->AdditionalObjectNodePins).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FRegisteredObjectNodeInputPin_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// InitializeSystem @ 14ac278a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FCustomizableObjectModule::InitializeSystem(void)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UCustomizableObjectSystem *pUVar5;
  FUObjectItem *this;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (UCustomizableObjectSystemPrivate::SSystem == (UCustomizableObjectSystem *)0x0) {
    if (4 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x2fa,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar3 = UCustomizableObjectSystem::StaticClass();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = UCustomizableObjectSystem::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
    auStack_98._8_8_ = pUVar3;
    pUVar5 = (UCustomizableObjectSystem *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar6 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    UCustomizableObjectSystemPrivate::SSystem = pUVar5;
    if (pUVar5 == (UCustomizableObjectSystem *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UCustomizableObjectSystemPrivate::SSystem != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x2fd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)((longlong)&UCustomizableObjectSystemPrivate::SSystem->_padding_ + 4) <=
        GUObjectArray.ObjLastNonGCIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GUObjectArray.IsDisregardForGC(UCustomizableObjectSystemPrivate::SSystem)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x2fe,
                         L"Mutable was initialized too early in the UE4 init process, for instance, in the constructor of a default UObject."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this = FUObjectArray::IndexToObject
                     (&GUObjectArray,
                      *(int *)((longlong)&UCustomizableObjectSystemPrivate::SSystem->_padding_ + 4))
    ;
    FUObjectItem::SetRootFlags(this,RootSet);
    if (*(int *)((longlong)&UCustomizableObjectSystemPrivate::SSystem->_padding_ + 4) <=
        GUObjectArray.ObjLastNonGCIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GUObjectArray.IsDisregardForGC(UCustomizableObjectSystemPrivate::SSystem)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x300,
                         L"Mutable was initialized too early in the UE4 init process, for instance, in the constructor of a default UObject."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UCustomizableObjectSystem::InitSystem(UCustomizableObjectSystemPrivate::SSystem);
  }
  return;
}

// RefreshExtensionData @ 14ac2c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCustomizableObjectModule::RefreshExtensionData(FCustomizableObjectModule *this)

{
  int *piVar1;
  TArray<FRegisteredObjectNodeInputPin,TSizedDefaultAllocator<32>_> *pTVar2;
  FCustomizableObjectPinType *pFVar3;
  FRegisteredCustomizableObjectPinType *pFVar4;
  FRegisteredObjectNodeInputPin *pFVar5;
  UObject *pUVar6;
  FWeakObjectPtr FVar7;
  FWeakObjectPtr FVar8;
  FName FVar9;
  code *pcVar10;
  TRefCountPtr<ITextData> TVar11;
  FObjectNodeInputPin *pFVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  FString *pFVar17;
  FString *pFVar18;
  FName *pFVar19;
  UObject *pUVar20;
  ulonglong uVar21;
  TArray<FRegisteredCustomizableObjectPinType,TSizedDefaultAllocator<32>_> *pTVar22;
  FWeakObjectPtr *pFVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  FWeakObjectPtr *pFVar26;
  FName *this_00;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_198 [8];
  FWeakObjectPtr local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FText local_170;
  undefined1 local_160;
  UObject *local_158;
  uint local_150;
  FWeakObjectPtr local_14c;
  FWeakObjectPtr local_144;
  FCustomizableObjectPinType *local_138;
  int local_130;
  FObjectNodeInputPin *local_128;
  int local_120;
  FScriptContainerElement *local_118;
  TArray<FRegisteredCustomizableObjectPinType,TSizedDefaultAllocator<32>_> *local_110;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [8];
  UObject *local_f8;
  TArray<FRegisteredObjectNodeInputPin,TSizedDefaultAllocator<32>_> *local_f0;
  UObject *local_e8;
  FObjectNodeInputPin *local_e0;
  FScriptContainerElement *local_d8;
  FString local_d0;
  FString local_c0;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  iVar16 = (this->ExtendedPinTypes).ArrayNum;
  pTVar22 = &this->ExtendedPinTypes;
  piVar1 = &(this->ExtendedPinTypes).ArrayMax;
  pFVar4 = (FRegisteredCustomizableObjectPinType *)(pTVar22->AllocatorInstance).Data;
  local_110 = pTVar22;
  if ((this->ExtendedPinTypes).ArrayMax < 0) {
    DestructItems<FRegisteredCustomizableObjectPinType,int>(pFVar4,iVar16);
    (this->ExtendedPinTypes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar22->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRegisteredCustomizableObjectPinType,int>(pFVar4,iVar16);
    (this->ExtendedPinTypes).ArrayNum = 0;
  }
  pFVar5 = (FRegisteredObjectNodeInputPin *)(this->AdditionalObjectNodePins).AllocatorInstance.Data;
  pTVar2 = &this->AdditionalObjectNodePins;
  piVar1 = &(this->AdditionalObjectNodePins).ArrayMax;
  iVar16 = (this->AdditionalObjectNodePins).ArrayNum;
  local_f0 = pTVar2;
  if ((this->AdditionalObjectNodePins).ArrayMax < 0) {
    DestructItems<FRegisteredObjectNodeInputPin,int>(pFVar5,iVar16);
    (this->AdditionalObjectNodePins).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRegisteredObjectNodeInputPin,int>(pFVar5,iVar16);
    (this->AdditionalObjectNodePins).ArrayNum = 0;
  }
  local_150 = (this->Extensions).ArrayNum;
  uVar21 = (ulonglong)(int)local_150;
  pFVar25 = (this->Extensions).AllocatorInstance.Data;
  local_d8 = pFVar25 + uVar21 * 8;
  do {
    pFVar13 = local_d8;
    local_118 = pFVar25;
    if ((this->Extensions).ArrayNum != (int)uVar21) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UCustomizableObjectExtension_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar25 == pFVar13) {
      return;
    }
    pUVar6 = *(UObject **)pFVar25;
    local_158 = pUVar6;
    (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,&local_138);
    iVar16 = local_130;
    puVar24 = &(local_138->DisplayName).Flags;
    pFVar3 = local_138 + local_130;
    while( true ) {
      if (local_130 != iVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FCustomizableObjectPinType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((FCustomizableObjectPinType *)(puVar24 + -4) == pFVar3) break;
      iVar15 = pTVar22->ArrayNum;
      if (iVar15 == pTVar22->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
      }
      pTVar22->ArrayNum = iVar15 + 1;
      pFVar23 = (FWeakObjectPtr *)((pTVar22->AllocatorInstance).Data + (longlong)iVar15 * 0x30);
      DefaultConstructItems<FRegisteredCustomizableObjectPinType,int>(pFVar23,1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_14c.ObjectIndex = 0;
      local_14c.ObjectSerialNumber = 0;
      local_f8 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_14c,(FObjectPtr)&local_f8);
      *pFVar23 = local_14c;
      *(FName *)(pFVar23 + 1) = ((FCustomizableObjectPinType *)(puVar24 + -4))->Name;
      FVar7 = (FWeakObjectPtr)(((FText *)(puVar24 + -2))->TextData).Reference;
      FVar8 = pFVar23[2];
      if (FVar8 != FVar7) {
        pFVar23[2] = FVar7;
        if (FVar7 != (FWeakObjectPtr)0x0) {
          (**(code **)((longlong)*(ITextData *)FVar7 + 8))(FVar7,local_108);
        }
        if (FVar8 != (FWeakObjectPtr)0x0) {
          (**(code **)((longlong)*(ITextData *)FVar8 + 0x10))(FVar8);
        }
      }
      pFVar23[3].ObjectIndex = *puVar24;
      pFVar26 = (FWeakObjectPtr *)(puVar24 + 2);
      FVar7 = *(FWeakObjectPtr *)(puVar24 + 4);
      puVar24 = puVar24 + 10;
      pFVar23[4] = *pFVar26;
      pFVar23[5] = FVar7;
      pTVar22 = local_110;
    }
    DestructItems<FCustomizableObjectPinType,int>(local_138,local_130);
    pTVar2 = local_f0;
    if (local_138 != (FCustomizableObjectPinType *)0x0) {
      FMemory::Free(local_138);
    }
    pUVar6 = local_158;
    (**(code **)(*(longlong *)local_158 + 0x2b8))(local_158,&local_128);
    uVar21 = (ulonglong)local_120;
    local_158 = (UObject *)CONCAT44(local_158._4_4_,local_120);
    local_e0 = local_128 + uVar21;
    this_00 = &local_128->PinName;
    while( true ) {
      pFVar12 = local_e0;
      if (local_120 != (int)uVar21) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FObjectNodeInputPin,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if ((FObjectNodeInputPin *)(this_00 + -1) == pFVar12) break;
      local_190.ObjectIndex = 0;
      local_190.ObjectSerialNumber = 0;
      local_188.ComparisonIndex.Value = 0;
      local_188.Number = 0;
      local_180.ComparisonIndex.Value = 0;
      local_180.Number = 0;
      local_178.ComparisonIndex.Value = 0;
      local_178.Number = 0;
      FText::FText(&local_170);
      local_160 = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_144.ObjectIndex = 0;
      local_144.ObjectSerialNumber = 0;
      local_e8 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_144,(FObjectPtr)&local_e8);
      local_190 = local_144;
      pFVar17 = ::FName::ToString(this_00,&local_98);
      pFVar18 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)pUVar6,&local_a8,(UObject *)0x0);
      ::FString::ConcatFC(&local_c0,pFVar18,L"__");
      ::FString::ConcatFF(&local_d0,&local_c0,pFVar17);
      iVar16 = local_d0.Data.ArrayNum + -1;
      if (local_d0.Data.ArrayNum == 0) {
        iVar16 = 0;
      }
      pFVar19 = ::FName::FName(&local_b0,iVar16,(wchar_t *)local_d0.Data.AllocatorInstance.Data,
                               FNAME_Add);
      local_188 = *pFVar19;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      TVar11.Reference = local_170.TextData.Reference;
      local_180 = ((FObjectNodeInputPin *)(this_00 + -1))->PinType;
      FVar9 = this_00[1];
      local_178 = *this_00;
      if ((FName)local_170.TextData.Reference != FVar9) {
        local_170.TextData.Reference = (ITextData *)FVar9;
        if (FVar9 != (FName)0x0) {
          (**(code **)(*(longlong *)FVar9 + 8))(FVar9,local_104);
        }
        if ((FName)TVar11.Reference != (FName)0x0) {
          (**(code **)(*(longlong *)TVar11.Reference + 0x10))(TVar11.Reference);
        }
      }
      local_170.Flags = this_00[2].ComparisonIndex.Value;
      iVar16 = pTVar2->ArrayNum;
      pFVar23 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
      local_160 = (undefined1)this_00[3].ComparisonIndex.Value;
      pFVar26 = pFVar23 + (longlong)iVar16 * 7;
      while( true ) {
        if (pTVar2->ArrayNum != iVar16) {
          local_198[0] = 0;
          `TCheckedPointerIterator<FRegisteredObjectNodeInputPin,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_198);
        }
        if (pFVar23 == pFVar26) goto LAB_14ac2cc6d;
        if (*(FName *)(pFVar23 + 1) == local_188) break;
        pFVar23 = pFVar23 + 7;
      }
      if (pFVar23 == (FWeakObjectPtr *)0x0) {
LAB_14ac2cc6d:
        pFVar23 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
        if (((pFVar23 <= &local_190) && (&local_190 < pFVar23 + (longlong)pTVar2->ArrayMax * 7)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar16 = pTVar2->ArrayNum;
        if (iVar16 == pTVar2->ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
        }
        pTVar2->ArrayNum = iVar16 + 1;
        pFVar23 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 0x38);
        *pFVar23 = local_190;
        *(FName *)(pFVar23 + 1) = local_188;
        *(FName *)(pFVar23 + 2) = local_180;
        *(FName *)(pFVar23 + 3) = local_178;
        pFVar23[4].ObjectIndex = 0;
        pFVar23[4].ObjectSerialNumber = 0;
        *(ITextData **)(pFVar23 + 4) = local_170.TextData.Reference;
        if ((FName)local_170.TextData.Reference != (FName)0x0) {
          (**(code **)(*(longlong *)local_170.TextData.Reference + 8))
                    (local_170.TextData.Reference,local_100);
        }
        pFVar23[5].ObjectIndex = local_170.Flags;
        *(undefined1 *)&pFVar23[6].ObjectIndex = local_160;
      }
      else {
        pUVar20 = FWeakObjectPtr::Get(pFVar23);
        if ((pUVar20 == (UObject *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("MatchingPin->Extension.Get()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectModule.cpp"
                                ,0xd1,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (1 < (byte)LogMutable._0_1_) {
          pUVar20 = FWeakObjectPtr::Get(pFVar23);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar20,&local_58,(UObject *)0x0);
          ::FName::ToString((FName *)(pFVar23 + 3),&local_68);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_78,(UObject *)0x0);
          ::FName::ToString(this_00,&local_88);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      if ((FName)local_170.TextData.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)local_170.TextData.Reference + 0x10))();
      }
      uVar21 = (ulonglong)local_158 & 0xffffffff;
      this_00 = this_00 + 5;
    }
    DestructItems<FObjectNodeInputPin,int>(local_128,local_120);
    if (local_128 != (FObjectNodeInputPin *)0x0) {
      FMemory::Free(local_128);
    }
    pFVar25 = local_118 + 8;
    uVar21 = (ulonglong)local_150;
    pTVar22 = local_110;
  } while( true );
}

// ToggleDGGUI @ 14ac48d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FCustomizableObjectModule::ToggleDGGUI(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UWorld *pUVar4;
  bool bVar5;
  int iVar6;
  UCustomizableObjectInstanceUsage *pUVar7;
  wchar_t *_Str;
  UWorldProxy UVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar6 = -1;
  if (0 < param_1->ArrayNum) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar3 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar3;
    }
    iVar6 = _wtoi(_Str);
  }
  UVar8.World = (UWorld *)0x0;
  if (GEngine != (UEngine *)0x0) {
    piVar1 = &(GEngine->WorldList).Array.ArrayNum;
    pFVar9 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    iVar2 = *piVar1;
    pFVar3 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar3) break;
      if ((**(char **)pFVar9 == '\x01') &&
         (pUVar4 = *(UWorld **)(*(char **)pFVar9 + 0x2c0), pUVar4 != (UWorld *)0x0)) {
        UVar8.World = pUVar4;
      }
      pFVar9 = pFVar9 + 8;
    }
    if (UVar8.World == (UWorld *)0x0) {
      UVar8.World = GWorld.World;
    }
  }
  bVar5 = UDGGUI::CloseExistingDGGUI(UVar8.World);
  if ((!bVar5) &&
     (pUVar7 = GetPlayerCustomizableObjectInstanceUsage(iVar6,UVar8.World,0),
     pUVar7 != (UCustomizableObjectInstanceUsage *)0x0)) {
    UDGGUI::OpenDGGUI(iVar6,pUVar7,UVar8.World,0);
  }
  return;
}

