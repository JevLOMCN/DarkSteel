// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 52

// StaticClass @ 147aa9620

UClass * __cdecl UDeviceProfileManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeviceProfileManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeviceProfileManager",
               &Z_Registration_Info_UClass_UDeviceProfileManager.InnerSingleton,
               StaticRegisterNativesUDeviceProfileManager,0x100,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"DeviceProfiles",InternalConstructor<UDeviceProfileManager>,
               InternalVTableHelperCtorCaller<UDeviceProfileManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeviceProfileManager.InnerSingleton;
}

// UDeviceProfileManager @ 147abdbd0

UDeviceProfileManager * __thiscall
UDeviceProfileManager::UDeviceProfileManager(UDeviceProfileManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDeviceProfileManager__6B_;
  (this->Profiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Profiles).ArrayNum = 0;
  (this->Profiles).ArrayMax = 0;
  (this->BackupProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackupProfiles).ArrayNum = 0;
  (this->BackupProfiles).ArrayMax = 0;
  *(undefined8 *)&this->ManagerUpdatedDelegate = 0;
  *(undefined8 *)&(this->ManagerUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ManagerUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ActiveDeviceProfileChangedDelegate = 0;
  *(undefined8 *)&(this->ActiveDeviceProfileChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveDeviceProfileChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PreviewDeviceProfileChangedDelegate = 0;
  *(undefined8 *)&(this->PreviewDeviceProfileChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreviewDeviceProfileChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PreReapplyDeviceProfilesDelegate = 0;
  *(undefined8 *)&(this->PreReapplyDeviceProfilesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreReapplyDeviceProfilesDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PostReapplyDeviceProfilesDelegate = 0;
  *(undefined8 *)&(this->PostReapplyDeviceProfilesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PostReapplyDeviceProfilesDelegate).field_0x10 = 0;
  this->BaseDeviceProfile = (UDeviceProfile *)0x0;
  this->PreviewDeviceProfile = (UDeviceProfile *)0x0;
  *(undefined8 *)&(this->ManagerUpdatedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ActiveDeviceProfileChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PreviewDeviceProfileChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PreReapplyDeviceProfilesDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PostReapplyDeviceProfilesDelegate).field_0x18 = 2;
  return this;
}

// UDeviceProfileManager @ 147abdcb0

UDeviceProfileManager * __thiscall
UDeviceProfileManager::UDeviceProfileManager
          (UDeviceProfileManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDeviceProfileManager__6B_;
  (this->Profiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Profiles).ArrayNum = 0;
  (this->Profiles).ArrayMax = 0;
  (this->BackupProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackupProfiles).ArrayNum = 0;
  (this->BackupProfiles).ArrayMax = 0;
  *(undefined8 *)&this->ManagerUpdatedDelegate = 0;
  *(undefined8 *)&(this->ManagerUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ManagerUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ActiveDeviceProfileChangedDelegate = 0;
  *(undefined8 *)&(this->ActiveDeviceProfileChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveDeviceProfileChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PreviewDeviceProfileChangedDelegate = 0;
  *(undefined8 *)&(this->PreviewDeviceProfileChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreviewDeviceProfileChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PreReapplyDeviceProfilesDelegate = 0;
  *(undefined8 *)&(this->PreReapplyDeviceProfilesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreReapplyDeviceProfilesDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PostReapplyDeviceProfilesDelegate = 0;
  *(undefined8 *)&(this->PostReapplyDeviceProfilesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PostReapplyDeviceProfilesDelegate).field_0x10 = 0;
  this->BaseDeviceProfile = (UDeviceProfile *)0x0;
  this->PreviewDeviceProfile = (UDeviceProfile *)0x0;
  *(undefined8 *)&(this->ManagerUpdatedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ActiveDeviceProfileChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PreviewDeviceProfileChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PreReapplyDeviceProfilesDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PostReapplyDeviceProfilesDelegate).field_0x18 = 2;
  return this;
}

// ~UDeviceProfileManager @ 147abfb60

void __thiscall UDeviceProfileManager::~UDeviceProfileManager(UDeviceProfileManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDeviceProfileManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostReapplyDeviceProfilesDelegate).field_0x8,
             *(int *)&(this->PostReapplyDeviceProfilesDelegate).field_0x10);
  pvVar1 = *(void **)&(this->PostReapplyDeviceProfilesDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostReapplyDeviceProfilesDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreReapplyDeviceProfilesDelegate).field_0x8,
             *(int *)&(this->PreReapplyDeviceProfilesDelegate).field_0x10);
  pvVar1 = *(void **)&(this->PreReapplyDeviceProfilesDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreReapplyDeviceProfilesDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreviewDeviceProfileChangedDelegate).field_0x8,
             *(int *)&(this->PreviewDeviceProfileChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->PreviewDeviceProfileChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreviewDeviceProfileChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ActiveDeviceProfileChangedDelegate).field_0x8,
             *(int *)&(this->ActiveDeviceProfileChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ActiveDeviceProfileChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ActiveDeviceProfileChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ManagerUpdatedDelegate).field_0x8,
             *(int *)&(this->ManagerUpdatedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ManagerUpdatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ManagerUpdatedDelegate);
  pFVar2 = (this->BackupProfiles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Profiles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 147ac18c0

bool __thiscall
`UDeviceProfileManager::DoActiveProfilesReference'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  uint uVar2;
  int iVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_68.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_68.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  if (1 < local_68.Data.ArrayNum) {
    do {
      if (Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton == (UClass *)0x0) {
        local_res10 = (FName)UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/Engine",L"DeviceProfile",
                   &Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton,
                   UDeviceProfile::StaticRegisterNativesUDeviceProfile,0x188,8,
                   CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"DeviceProfiles",
                   InternalConstructor<UDeviceProfile>,
                   InternalVTableHelperCtorCaller<UDeviceProfile>,
                   (FUObjectCppClassStaticFunctions *)&local_res10,UTextureLODSettings::StaticClass,
                   UObject::StaticClass);
      }
      local_res10 = (FName)(Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton)->_padding_;
      ::FName::ToString(&local_res10,&local_38);
      ::FString::PrintfImpl(&local_58,L"%s %s");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      puVar6 = (undefined8 *)**(longlong **)this;
      puVar7 = puVar6 + (longlong)(int)(*(longlong **)this)[1] * 2;
      iVar3 = local_58.Data.ArrayNum;
      for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
        iVar1 = *(int *)(puVar6 + 1);
        if (iVar1 == iVar3) {
          if (1 < iVar1) {
            iVar3 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)*puVar6,(wchar_t *)local_58.Data.AllocatorInstance.Data);
            bVar8 = iVar3 == 0;
            iVar3 = local_58.Data.ArrayNum;
            goto LAB_147ac1a8e;
          }
LAB_147ac1b03:
          iVar3 = local_68.Data.ArrayNum + -1;
          FVar4.Data = local_68.Data.AllocatorInstance.Data;
          if (local_68.Data.ArrayNum == 0) {
            iVar3 = 0;
            FVar4.Data = (FScriptContainerElement *)L"";
          }
          uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar4.Data);
          iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                  FindIndexByHash<FString>(param_2,uVar2,&local_68);
          if (iVar3 != -1) {
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            bVar8 = true;
            goto LAB_147ac1ab8;
          }
          FVar4.Data = (FScriptContainerElement *)L"";
          if (local_58.Data.ArrayNum != 0) {
            FVar4.Data = local_58.Data.AllocatorInstance.Data;
          }
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          bVar8 = FConfigCacheIni::GetString
                            (GConfig,(wchar_t *)FVar4.Data,L"BaseProfileName",&local_48,
                             (FString *)((longlong)this + 8));
          if (bVar8) {
            iVar3 = local_48.Data.ArrayNum + -1;
            if (local_48.Data.ArrayNum == 0) {
              iVar3 = 0;
            }
            ::FString::AssignRange(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
          }
          else {
            ::FString::Empty(&local_68);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (1 < local_68.Data.ArrayNum) {
            bVar8 = false;
            goto LAB_147ac1aa0;
          }
          break;
        }
        bVar8 = iVar1 + iVar3 == 1;
LAB_147ac1a8e:
        if (bVar8) goto LAB_147ac1b03;
      }
      bVar8 = true;
LAB_147ac1aa0:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    } while (!bVar8);
  }
  bVar8 = false;
LAB_147ac1ab8:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

// operator() @ 147ac2000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UDeviceProfileManager::Get'::__l5::<lambda_2>::operator()(void *this)

{
  UDeviceProfileManager *this_00;
  FName local_res10 [3];
  FString local_18;
  
  this_00 = UDeviceProfileManager::Get(false);
  if (this_00->BaseDeviceProfile != (UDeviceProfile *)0x0) {
    if (4 < (byte)LogDeviceProfileManager._0_1_) {
      local_res10[0] = (FName)this_00->BaseDeviceProfile->_padding_;
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    RestorePushedState(&UDeviceProfileManager::PushedSettings);
    DestructItems<FSelectedFragmentProperties,int>
              ((FSelectedFragmentProperties *)
               UDeviceProfileManager::PlatformFragmentsSelected.AllocatorInstance.Data,
               UDeviceProfileManager::PlatformFragmentsSelected.ArrayNum);
    UDeviceProfileManager::PlatformFragmentsSelected.ArrayNum = 0;
    if (UDeviceProfileManager::PlatformFragmentsSelected.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&UDeviceProfileManager::PlatformFragmentsSelected.AllocatorInstance,0,
                 &UDeviceProfileManager::PlatformFragmentsSelected.ArrayMax);
    }
    UDeviceProfileManager::SetActiveDeviceProfile(this_00,this_00->BaseDeviceProfile);
    this_00->BaseDeviceProfile = (UDeviceProfile *)0x0;
    UDeviceProfileManager::InitializeCVarsForActiveDeviceProfile(false,false,false);
    return;
  }
  return;
}

// AreProfilesTheSame @ 147ac6cd0

bool __thiscall
UDeviceProfileManager::AreProfilesTheSame
          (UDeviceProfileManager *this,UDeviceProfile *param_1,UDeviceProfile *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDeviceProfile *pUVar4;
  UDeviceProfile *pUVar5;
  
  if (param_1 == (UDeviceProfile *)0x0) {
    return false;
  }
  if (param_2 == (UDeviceProfile *)0x0) {
    return false;
  }
  iVar3 = (int)param_1->_padding_;
  if ((iVar3 != (int)param_2->_padding_) ||
     (bVar2 = CompareItems<FTextureLODGroup,int>
                        ((FTextureLODGroup *)param_1->_padding_,
                         (FTextureLODGroup *)param_2->_padding_,iVar3), !bVar2)) {
    pUVar4 = UDeviceProfile::GetParentProfile(param_1,true);
    pUVar5 = UDeviceProfile::GetParentProfile(param_2,true);
    if (pUVar4 == (UDeviceProfile *)0x0) {
      return false;
    }
    if (pUVar5 == (UDeviceProfile *)0x0) {
      return false;
    }
    iVar3 = (int)param_1->_padding_;
    if (iVar3 != (int)pUVar4->_padding_) {
      return false;
    }
    bVar2 = CompareItems<FTextureLODGroup,int>
                      ((FTextureLODGroup *)param_1->_padding_,(FTextureLODGroup *)pUVar4->_padding_,
                       iVar3);
    if (!bVar2) {
      return false;
    }
    iVar3 = (int)param_2->_padding_;
    if (iVar3 != (int)pUVar5->_padding_) {
      return false;
    }
    bVar2 = CompareItems<FTextureLODGroup,int>
                      ((FTextureLODGroup *)param_2->_padding_,(FTextureLODGroup *)pUVar5->_padding_,
                       iVar3);
    if (!bVar2) {
      return false;
    }
  }
  iVar3 = (param_1->DeviceType).Data.ArrayNum;
  iVar1 = (param_2->DeviceType).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (1 < iVar3) {
      iVar3 = wcscmp((wchar_t *)(param_1->DeviceType).Data.AllocatorInstance.Data,
                     (wchar_t *)(param_2->DeviceType).Data.AllocatorInstance.Data);
      bVar2 = iVar3 == 0;
      goto LAB_147ac6dae;
    }
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
LAB_147ac6dae:
    if (!bVar2) {
      return false;
    }
  }
  iVar3 = (param_1->BaseProfileName).Data.ArrayNum;
  iVar1 = (param_2->BaseProfileName).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_147ac6de1;
    iVar3 = wcscmp((wchar_t *)(param_1->BaseProfileName).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_2->BaseProfileName).Data.AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_147ac6de1:
  iVar3 = (param_1->CVars).ArrayNum;
  if (((iVar3 == (param_2->CVars).ArrayNum) &&
      (bVar2 = CompareItems<FString,int>
                         ((FString *)(param_1->CVars).AllocatorInstance.Data,
                          (FString *)(param_2->CVars).AllocatorInstance.Data,iVar3), bVar2)) &&
     (iVar3 = (param_1->MatchingRules).ArrayNum, iVar3 == (param_2->MatchingRules).ArrayNum)) {
    bVar2 = CompareItems<FDPMatchingRulestruct,int>
                      ((FDPMatchingRulestruct *)(param_1->MatchingRules).AllocatorInstance.Data,
                       (FDPMatchingRulestruct *)(param_2->MatchingRules).AllocatorInstance.Data,
                       iVar3);
    return bVar2;
  }
  return false;
}

// AreTextureGroupsTheSame @ 147ac6e50

bool __thiscall
UDeviceProfileManager::AreTextureGroupsTheSame
          (UDeviceProfileManager *this,UDeviceProfile *param_1,UDeviceProfile *param_2)

{
  int iVar1;
  bool bVar2;
  UDeviceProfile *pUVar3;
  UDeviceProfile *pUVar4;
  
  if ((param_1 == (UDeviceProfile *)0x0) || (param_2 == (UDeviceProfile *)0x0)) {
    return false;
  }
  iVar1 = (int)param_1->_padding_;
  if ((iVar1 != (int)param_2->_padding_) ||
     (bVar2 = CompareItems<FTextureLODGroup,int>
                        ((FTextureLODGroup *)param_1->_padding_,
                         (FTextureLODGroup *)param_2->_padding_,iVar1), !bVar2)) {
    pUVar3 = UDeviceProfile::GetParentProfile(param_1,true);
    pUVar4 = UDeviceProfile::GetParentProfile(param_2,true);
    if (pUVar3 == (UDeviceProfile *)0x0) {
      return false;
    }
    if (pUVar4 == (UDeviceProfile *)0x0) {
      return false;
    }
    iVar1 = (int)param_1->_padding_;
    if (iVar1 != (int)pUVar3->_padding_) {
      return false;
    }
    bVar2 = CompareItems<FTextureLODGroup,int>
                      ((FTextureLODGroup *)param_1->_padding_,(FTextureLODGroup *)pUVar3->_padding_,
                       iVar1);
    if (!bVar2) {
      return false;
    }
    iVar1 = (int)param_2->_padding_;
    if (iVar1 != (int)pUVar4->_padding_) {
      return false;
    }
    bVar2 = CompareItems<FTextureLODGroup,int>
                      ((FTextureLODGroup *)param_2->_padding_,(FTextureLODGroup *)pUVar4->_padding_,
                       iVar1);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// ChangeTaggedFragmentState @ 147aca0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDeviceProfileManager::ChangeTaggedFragmentState
          (UDeviceProfileManager *this,FName param_1,bool param_2)

{
  ForAnyElementType FVar1;
  FName *pFVar2;
  int iVar3;
  undefined8 uVar4;
  FName local_res10;
  FName local_res20;
  FString local_28;
  
  iVar3 = PlatformFragmentsSelected.ArrayNum;
  pFVar2 = (FName *)(PlatformFragmentsSelected.AllocatorInstance.Data + (longlong)iVar3 * 0x20);
  FVar1.Data = PlatformFragmentsSelected.AllocatorInstance.Data;
  uVar4 = PlatformFragmentsSelected._8_8_;
  local_res10 = param_1;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<FSelectedFragmentProperties,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res20);
      param_1 = local_res10;
      uVar4 = PlatformFragmentsSelected._8_8_;
    }
    if ((FName *)FVar1.Data == pFVar2) break;
    if (*(FName *)FVar1.Data == param_1) {
      if (param_2 != (bool)(char)(((FName *)((longlong)FVar1.Data + 0x18))->ComparisonIndex).Value)
      {
        if (4 < (byte)LogInit._0_1_) {
          ::FName::ToString(&local_res10,&local_28);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        RestorePushedState(&PushedSettings);
        *(bool *)&(((FName *)((longlong)FVar1.Data + 0x18))->ComparisonIndex).Value = param_2;
        if (this->ActiveDeviceProfile == (UDeviceProfile *)0x0) {
          GetPlatformDeviceProfileName(&local_28);
        }
        else {
          local_res20 = (FName)this->ActiveDeviceProfile->_padding_;
          ::FName::ToString(&local_res20,&local_28);
        }
        SetDeviceProfileCVars(&local_28);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    FVar1.Data = FVar1.Data + 0x20;
  }
  return;
}

// CreateProfile @ 147acdd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDeviceProfile * __thiscall
UDeviceProfileManager::CreateProfile
          (UDeviceProfileManager *this,FString *param_1,FString *param_2,FString *param_3,
          wchar_t *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  UPackage *pUVar12;
  UClass *pUVar13;
  UDeviceProfile *pUVar14;
  FName *pFVar15;
  FDataDrivenPlatformInfo *pFVar16;
  FConfigFile *this_00;
  UDeviceProfile *this_01;
  FUObjectItem *this_02;
  longlong *plVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  FString *pFVar20;
  longlong lVar21;
  FName FVar22;
  UDeviceProfileManager *pUVar23;
  bool bVar24;
  undefined1 auStackY_2e8 [32];
  FString local_298;
  FName local_288;
  UDeviceProfileManager *local_280;
  UDeviceProfile *local_278;
  FName local_270;
  FString local_268;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FString local_248;
  FString local_238;
  FScriptContainerElement *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FString local_218;
  FString local_208;
  FName local_1f8 [2];
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  undefined1 local_1c8 [128];
  FConfigFile local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  iStack_250 = 0;
  local_270 = (FName)((ulonglong)local_270 & 0xffffffff00000000);
  bVar5 = false;
  bVar24 = false;
  local_288 = (FName)param_2;
  local_280 = this;
  if ((param_1->Data).ArrayNum == 0) {
    local_258 = (FScriptContainerElement *)0x15060d16c;
LAB_147acdde6:
    sVar11 = wcslen((wchar_t *)local_258);
    iStack_250 = (int)sVar11;
  }
  else {
    local_258 = (param_1->Data).AllocatorInstance.Data;
    if (local_258 != (FScriptContainerElement *)0x0) goto LAB_147acdde6;
  }
  pUVar12 = GetTransientPackage();
  pUVar13 = UDeviceProfile::StaticClass();
  local_1e8._12_4_ = uStack_24c;
  local_1e8.Size = iStack_250;
  local_1e8.DataPtr = (wchar_t *)local_258;
  pUVar14 = (UDeviceProfile *)StaticFindObject(pUVar13,(UObject *)pUVar12,&local_1e8,None);
  if (pUVar14 != (UDeviceProfile *)0x0) {
    return pUVar14;
  }
  if (param_4 == (wchar_t *)0x0) {
LAB_147acde53:
    bVar6 = false;
  }
  else {
    pFVar15 = ::FName::FName(local_1f8,param_4);
    pFVar16 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(*pFVar15);
    if (pFVar16->bIsConfidential == false) goto LAB_147acde53;
    bVar6 = true;
  }
  FConfigFile::FConfigFile(&local_148);
  this_00 = FConfigCacheIni::Find(GConfig,&GDeviceProfilesIni);
  bVar7 = FConfigFile::Contains(this_00,param_1);
  if (bVar7) {
LAB_147acdeff:
    bVar7 = false;
  }
  else {
    ::FString::FString(&local_218," DeviceProfile");
    ::FString::ConcatFF(&local_268,param_1,&local_218);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar9 = local_268.Data.ArrayNum + -1;
    FVar18.Data = local_268.Data.AllocatorInstance.Data;
    if (local_268.Data.ArrayNum == 0) {
      iVar9 = 0;
      FVar18.Data = (FScriptContainerElement *)L"";
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar18.Data);
    iVar9 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_00,uVar8,&local_268);
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    bVar5 = true;
    bVar24 = true;
    if (iVar9 != -1) goto LAB_147acdeff;
    bVar7 = true;
  }
  if ((bVar24) && (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (3 < (byte)LogDeviceProfileManager._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
  }
  local_298.Data.ArrayNum = (param_3->Data).ArrayNum;
  lVar21 = (longlong)local_298.Data.ArrayNum;
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_298.Data.ArrayNum == 0) {
    local_298.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_298.Data.ArrayNum,0,(ForAnyElementType *)&local_298,local_298.Data.ArrayNum
               ,&local_298.Data.ArrayMax);
    memcpy(local_298.Data.AllocatorInstance.Data,pFVar2,lVar21 * 2);
  }
  iVar10 = 0;
  iVar9 = local_298.Data.ArrayNum + -1;
  if (local_298.Data.ArrayNum == 0) {
    iVar9 = iVar10;
  }
  if (iVar9 == 0) {
    pUVar13 = UDeviceProfile::StaticClass();
    local_270 = (FName)pUVar13->_padding_;
    ::FName::ToString(&local_270,&local_248);
    ::FString::PrintfImpl(&local_238,L"%s %s");
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_238.Data.ArrayNum != 0) {
      FVar18.Data = local_238.Data.AllocatorInstance.Data;
    }
    FConfigFile::GetString(this_00,(wchar_t *)FVar18.Data,L"BaseProfileName",&local_298);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = local_298.Data.ArrayNum + -1;
  if (local_298.Data.ArrayNum == 0) {
    iVar9 = iVar10;
  }
  pUVar14 = (UDeviceProfile *)0x0;
  FVar22 = local_288;
  pUVar23 = local_280;
  if (iVar9 < 1) goto LAB_147ace168;
  iVar9 = (param_1->Data).ArrayNum;
  if (local_298.Data.ArrayNum == iVar9) {
    pUVar14 = (UDeviceProfile *)0x0;
    if (local_298.Data.ArrayNum < 2) goto LAB_147ace168;
    iVar9 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_298.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar24 = iVar9 == 0;
  }
  else {
    bVar24 = iVar9 + local_298.Data.ArrayNum == 1;
  }
  pUVar14 = (UDeviceProfile *)0x0;
  FVar22 = local_288;
  pUVar23 = local_280;
  if (bVar24) goto LAB_147ace168;
  if (local_298.Data.ArrayNum == 0) {
    local_228 = (FScriptContainerElement *)0x15060d16c;
LAB_147ace0d0:
    sVar11 = wcslen((wchar_t *)local_228);
    iVar10 = (int)sVar11;
  }
  else {
    local_228 = local_298.Data.AllocatorInstance.Data;
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_147ace0d0;
  }
  iStack_220 = iVar10;
  pUVar12 = GetTransientPackage();
  pUVar13 = UDeviceProfile::StaticClass();
  local_1d8._12_4_ = uStack_21c;
  local_1d8.Size = iStack_220;
  local_1d8.DataPtr = (wchar_t *)local_228;
  pUVar14 = (UDeviceProfile *)StaticFindObject(pUVar13,(UObject *)pUVar12,&local_1d8,None);
  FVar22 = local_288;
  pUVar23 = local_280;
  if (pUVar14 == (UDeviceProfile *)0x0) {
    TestProfileForCircularReferences(param_1,&local_298,this_00);
    ::FString::FString(&local_208,L"");
    pUVar23 = local_280;
    FVar22 = local_288;
    pUVar14 = CreateProfile(local_280,&local_298,(FString *)local_288,&local_208,param_4);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
LAB_147ace168:
  if ((param_1->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar15 = ::FName::FName(&local_288,pwVar19);
  FVar3 = *pFVar15;
  pUVar12 = GetTransientPackage();
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar13 = UDeviceProfile::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1c8,pUVar13);
  local_1c8._24_4_ = RF_NoFlags;
  local_1c8._40_8_ = (UObject *)0x0;
  local_1c8[0x20] = false;
  local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1c8._56_8_ = (UPackage *)0x0;
  local_1c8._8_8_ = pUVar12;
  local_1c8._16_8_ = FVar3;
  this_01 = (UDeviceProfile *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
  if (local_1c8._64_8_ != 0) {
    plVar17 = (longlong *)(local_1c8 + 0x50);
    if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_1c8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (param_4 != (wchar_t *)0x0) {
    ::FString::operator=(&this_01->ConfigPlatform,param_4);
    UObject::LoadConfig((UObject *)this_01,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                        (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                         *)0x0);
    if (!bVar6) {
      ::FString::operator=(&this_01->ConfigPlatform,L"");
    }
  }
  UDeviceProfile::ValidateTextureLODGroups(this_01);
  if ((this_01->DeviceType).Data.ArrayNum < 2) {
    ::FString::operator=(&this_01->DeviceType,(FString *)FVar22);
  }
  iVar9 = (this_01->BaseProfileName).Data.ArrayNum;
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  pFVar20 = &local_298;
  if (0 < iVar10) {
    pFVar20 = &this_01->BaseProfileName;
  }
  iVar10 = (pFVar20->Data).ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange
            (&this_01->BaseProfileName,(wchar_t *)(pFVar20->Data).AllocatorInstance.Data,iVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UDeviceProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this_01->Parent).field0_0x0.DebugPtr = pUVar14;
  this_02 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(this_02,RootSet);
  local_278 = this_01;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  pFVar2 = (pUVar23->Profiles).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_278) &&
      ((FScriptContainerElement *)&local_278 < pFVar2 + (longlong)(pUVar23->Profiles).ArrayMax * 8))
     && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar24)) {
    pcVar4 = (code *)swi(3);
    pUVar14 = (UDeviceProfile *)(*pcVar4)();
    return pUVar14;
  }
  iVar9 = (pUVar23->Profiles).ArrayNum;
  piVar1 = &(pUVar23->Profiles).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar23->Profiles).AllocatorInstance,piVar1);
  }
  (pUVar23->Profiles).ArrayNum = iVar9 + 1;
  *(UDeviceProfile **)((pUVar23->Profiles).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_278
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_278 != (UDeviceProfile *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_278);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&pUVar23->ManagerUpdatedDelegate);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  FConfigFile::~FConfigFile(&local_148);
  return this_01;
}

// DeleteProfile @ 147acfb30

void __thiscall
UDeviceProfileManager::DeleteProfile(UDeviceProfileManager *this,UDeviceProfile *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDeviceProfile *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UDeviceProfile *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDeviceProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Profiles).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Profiles).ArrayMax * 8)) &&
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
  iVar1 = (this->Profiles).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->Profiles).AllocatorInstance.Data;
    bVar4 = *(UDeviceProfile **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UDeviceProfile **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->Profiles).ArrayNum = iVar9;
  }
  return;
}

// DoActiveProfilesReference @ 147ad0960

bool __thiscall
UDeviceProfileManager::DoActiveProfilesReference
          (UDeviceProfileManager *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  ForAnyElementType _Src;
  bool bVar1;
  longlong lVar2;
  FName local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_38;
  ForAnyElementType local_30;
  int local_28;
  int local_24 [3];
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FConfigCacheIni::GetSectionNames(GConfig,&GDeviceProfilesIni,&local_58);
  _Src = GDeviceProfilesIni.Data.AllocatorInstance;
  lVar2 = (longlong)GDeviceProfilesIni.Data.ArrayNum;
  local_38 = &local_58;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = GDeviceProfilesIni.Data.ArrayNum;
  if (GDeviceProfilesIni.Data.ArrayNum == 0) {
    local_24[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,GDeviceProfilesIni.Data.ArrayNum,0,&local_30,GDeviceProfilesIni.Data.ArrayNum,
               local_24);
    memcpy(local_30.Data,_Src.Data,lVar2 * 2);
  }
  local_res18[0] = (FName)DeviceProfileManagerSingleton->ActiveDeviceProfile->_padding_;
  ::FName::ToString(local_res18,&local_48);
  bVar1 = `UDeviceProfileManager::DoActiveProfilesReference'::__l2::<lambda_1>::operator()
                    (&local_38,&local_48,param_1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar1) && (DeviceProfileManagerSingleton->BaseDeviceProfile != (UDeviceProfile *)0x0)) {
    local_res18[0] = (FName)DeviceProfileManagerSingleton->BaseDeviceProfile->_padding_;
    ::FName::ToString(local_res18,&local_48);
    bVar1 = `UDeviceProfileManager::DoActiveProfilesReference'::__l2::<lambda_1>::operator()
                      (&local_38,&local_48,param_1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return bVar1;
}

// FindAllReferencedFragmentsFromMatchedRules @ 147adde60

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UDeviceProfileManager::FindAllReferencedFragmentsFromMatchedRules
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          FConfigCacheIni *param_2)

{
  longlong *plVar1;
  wchar_t _C;
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  FDPMatchingRulestructBase *pFVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FSelectedFragmentProperties *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res8;
  undefined1 local_res20 [8];
  FString local_118;
  FString local_108;
  TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  FDeviceProfileMatchingErrorContext local_d8;
  FDPMatchingRulestruct local_a8;
  
  local_res8 = __return_storage_ptr__;
  GetMatchedRulesArray(&local_e8,param_1,param_2);
  FOutputDevice::FOutputDevice((FOutputDevice *)&local_d8);
  iVar6 = local_e8.ArrayNum;
  local_d8._padding_ = (longlong)&___7FDeviceProfileMatchingErrorContext__6B_;
  local_d8.Stage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Stage.Data.ArrayNum = 0;
  local_d8.Stage.Data.ArrayMax = 0;
  local_d8.NumErrors = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar11 = local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x10;
  FVar8.Data = local_e8.AllocatorInstance.Data;
  while( true ) {
    if (local_e8.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    this = local_res8;
    if (FVar8.Data == pFVar11) break;
    ::FString::PrintfImpl(&local_108,L"%s rule #%d");
    if (local_d8.Stage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Stage.Data.AllocatorInstance.Data);
    }
    uVar2 = local_108.Data._8_8_;
    local_d8.Stage.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    uVar3 = local_108.Data._8_8_;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = (int)uVar2;
    local_108.Data.ArrayMax = SUB84(uVar2,4);
    local_d8.Stage.Data.ArrayNum = local_108.Data.ArrayNum;
    local_d8.Stage.Data.ArrayMax = local_108.Data.ArrayMax;
    local_108.Data._8_8_ = uVar3;
    ParseToRuleStruct(&local_a8,(FString *)FVar8.Data,&local_d8);
    if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FString::FString(&NoName,"<unnamed>");
      atexit(`UDeviceProfileManager::FindAllReferencedFragmentsFromMatchedRules'::__l6::
             _dynamic_atexit_destructor_for__NoName__);
      _Init_thread_footer(&::_TSS1);
    }
    pFVar5 = (FDPMatchingRulestructBase *)(**(code **)(local_a8._padding_ + 8))(&local_a8);
    FindAllReferencedMatchedFragments(&local_118,pFVar5,&local_d8);
    pFVar5 = (FDPMatchingRulestructBase *)(**(code **)(local_a8._padding_ + 0x10))(&local_a8);
    FindAllReferencedMatchedFragments(&local_118,pFVar5,&local_d8);
    iVar4 = (int)local_a8._padding_;
    if ((1 < local_118.Data.ArrayNum) && (1 < iVar4)) {
      ::FString::AppendChars(&local_118,L",",1);
      iVar4 = (int)local_a8._padding_;
    }
    iVar10 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_118,(wchar_t *)local_a8._padding_,iVar10);
    DestructItems<FDPMatchingRulestructE,int>
              ((FDPMatchingRulestructE *)local_a8.OnFalse.AllocatorInstance.Data,
               local_a8.OnFalse.ArrayNum);
    if ((FDPMatchingRulestructE *)local_a8.OnFalse.AllocatorInstance.Data !=
        (FDPMatchingRulestructE *)0x0) {
      FMemory::Free(local_a8.OnFalse.AllocatorInstance.Data);
    }
    DestructItems<FDPMatchingRulestructE,int>
              ((FDPMatchingRulestructE *)local_a8.OnTrue.AllocatorInstance.Data,
               local_a8.OnTrue.ArrayNum);
    if ((FDPMatchingRulestructE *)local_a8.OnTrue.AllocatorInstance.Data !=
        (FDPMatchingRulestructE *)0x0) {
      FMemory::Free(local_a8.OnTrue.AllocatorInstance.Data);
    }
    local_a8._padding_ = (longlong)&___7FDPMatchingRulestructBase__6B_;
    if ((void *)local_a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    if ((wchar_t *)local_a8._padding_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    DestructItems<FDPMatchingIfCondition,int>
              ((FDPMatchingIfCondition *)local_a8._padding_,(int)local_a8._padding_);
    if ((FDPMatchingIfCondition *)local_a8._padding_ != (FDPMatchingIfCondition *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    if ((void *)local_a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    FVar8.Data = FVar8.Data + 0x10;
  }
  if ((1 < (byte)LogInit._0_1_) && (0 < local_d8.NumErrors)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  iVar6 = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::Reserve(&local_108,iVar6);
  iVar6 = local_118.Data.ArrayNum;
  uVar7 = (ulonglong)local_118.Data.ArrayNum;
  FVar8.Data = local_118.Data.AllocatorInstance.Data;
  pFVar11 = local_118.Data.AllocatorInstance.Data + uVar7 * 2 + -2;
  if (local_118.Data.ArrayNum == 0) {
    pFVar11 = local_118.Data.AllocatorInstance.Data + uVar7 * 2;
  }
  while( true ) {
    if ((int)uVar7 != iVar6) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar8.Data == pFVar11) break;
    _C = *(wchar_t *)FVar8.Data;
    iVar4 = iswspace(_C);
    if (iVar4 == 0) {
      ::FString::AppendChar(&local_108,_C);
    }
    uVar7 = local_118.Data._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 2;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_118.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
  local_118.Data.ArrayNum = local_108.Data.ArrayNum;
  local_118.Data.ArrayMax = local_108.Data.ArrayMax;
  FragmentStringToFragmentProperties(&local_f8,&local_118);
  iVar6 = local_f8.ArrayNum;
  pFVar9 = (FSelectedFragmentProperties *)
           (local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 0x20);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  FVar8.Data = local_f8.AllocatorInstance.Data;
  while( true ) {
    if (local_f8.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FSelectedFragmentProperties,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if ((FSelectedFragmentProperties *)FVar8.Data == pFVar9) break;
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (this,&((FSelectedFragmentProperties *)FVar8.Data)->Fragment);
    FVar8.Data = FVar8.Data + 0x20;
  }
  DestructItems<FSelectedFragmentProperties,int>
            ((FSelectedFragmentProperties *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FSelectedFragmentProperties *)local_f8.AllocatorInstance.Data !=
      (FSelectedFragmentProperties *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_d8.Stage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Stage.Data.AllocatorInstance.Data);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)&local_d8);
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return this;
}

// FindMatchingFragments @ 147ade3e0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> * __cdecl
UDeviceProfileManager::FindMatchingFragments
          (TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1,FConfigCacheIni *param_2)

{
  wchar_t _C;
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  IDeviceProfileSelectorModule *pIVar6;
  FString *pFVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  FName *this;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FName *pFVar12;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar5,L"DPFragments=",&local_38,false,(wchar_t **)0x0);
  if (bVar3) {
    iVar11 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange(&local_58,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar11);
  }
  else {
    pIVar6 = GetDeviceProfileSelectorModule();
    pFVar7 = LoadAndProcessMatchingRulesFromConfig(&local_48,param_1,pIVar6,param_2);
    if (&local_58 != pFVar7) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  iVar11 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::Reserve(&local_48,iVar11);
  iVar11 = local_58.Data.ArrayNum;
  uVar8 = (ulonglong)local_58.Data.ArrayNum;
  FVar9.Data = local_58.Data.AllocatorInstance.Data;
  pFVar10 = local_58.Data.AllocatorInstance.Data + uVar8 * 2 + -2;
  if (local_58.Data.ArrayNum == 0) {
    pFVar10 = local_58.Data.AllocatorInstance.Data + uVar8 * 2;
  }
  while( true ) {
    if ((int)uVar8 != iVar11) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar9.Data == pFVar10) break;
    _C = *(wchar_t *)FVar9.Data;
    iVar4 = iswspace(_C);
    if (iVar4 == 0) {
      ::FString::AppendChar(&local_48,_C);
    }
    uVar8 = local_58.Data._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 2;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar11 = local_48.Data.ArrayNum;
  local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  uVar1._0_4_ = local_48.Data.ArrayNum;
  uVar1._4_4_ = local_48.Data.ArrayMax;
  local_58.Data.ArrayNum = local_48.Data.ArrayNum;
  local_58.Data.ArrayMax = local_48.Data.ArrayMax;
  uVar2 = uVar1;
  if ((4 < (byte)LogInit._0_1_) && (uVar2 = local_58.Data._8_8_, 1 < iVar11)) {
    local_58.Data._8_8_ = uVar1;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    uVar2 = local_58.Data._8_8_;
  }
  local_58.Data._8_8_ = uVar2;
  FragmentStringToFragmentProperties(__return_storage_ptr__,&local_58);
  if ((4 < (byte)LogInit._0_1_) && (0 < __return_storage_ptr__->ArrayNum)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  this = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  pFVar12 = this + (longlong)iVar11 * 4;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum != iVar11) {
      `TCheckedPointerIterator<FSelectedFragmentProperties,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == pFVar12) break;
    if (4 < (byte)LogInit._0_1_) {
      if (*this == (FName)0x0) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if ((4 < (byte)LogInit._0_1_) && (*this != (FName)0x0)) {
        ::FName::ToString(this,&local_48);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    this = this + 4;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindProfile @ 147adeaa0

UDeviceProfile * __thiscall
UDeviceProfileManager::FindProfile
          (UDeviceProfileManager *this,FString *param_1,bool param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UDeviceProfile *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  uint uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  FName local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar7 = 0;
  pwVar8 = L"";
  pUVar4 = (UDeviceProfile *)0x0;
  local_res20 = param_3;
  if (0 < (this->Profiles).ArrayNum) {
    lVar9 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (this->Profiles).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UDeviceProfile *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(UDeviceProfile **)((this->Profiles).AllocatorInstance.Data + lVar9);
      if (pUVar4 == (UDeviceProfile *)0x0) {
        pFVar5 = GetTypeName<UDeviceProfile>(&local_48);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar8);
      }
      if ((param_1->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar2 = ::FName::Equals((FName)pUVar4->_padding_,pwVar6);
      if (bVar2) break;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
      pUVar4 = (UDeviceProfile *)0x0;
    } while ((int)uVar7 < (this->Profiles).ArrayNum);
  }
  if ((param_2) && (pUVar4 == (UDeviceProfile *)0x0)) {
    bVar2 = local_res20 == (FName)0x0;
    if (bVar2) {
      pFVar5 = ::FString::FString(&local_68,"Windows");
    }
    else {
      pFVar5 = ::FName::ToString(&local_res20,&local_58);
    }
    local_88.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_88.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if ((bVar2) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((!bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_78,L"");
    pUVar4 = CreateProfile(this,param_1,&local_88,&local_78,(wchar_t *)0x0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return pUVar4;
}

// FragmentPropertyArrayToFragmentString @ 147adfb00

FString * __cdecl
UDeviceProfileManager::FragmentPropertyArrayToFragmentString
          (FString *__return_storage_ptr__,
          TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          bool param_3,bool param_4)

{
  int iVar1;
  FName _Src;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  FName *this;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FName *pFVar12;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  char local_res18;
  undefined1 local_res20;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  undefined1 local_a8;
  undefined1 local_a7 [7];
  ForAnyElementType local_a0;
  uint local_98;
  int local_94;
  uint local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_90 = 0;
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    return __return_storage_ptr__;
  }
  this = (FName *)(param_1->AllocatorInstance).Data;
  pFVar12 = this + 1;
  pFVar11 = this + (longlong)iVar1 * 4;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FSelectedFragmentProperties_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      param_2 = (bool)local_res18;
    }
    uVar8 = local_90;
    FVar5.Data = (FScriptContainerElement *)0x0;
    if (this == pFVar11) {
      if (param_4) {
        local_res8 = SUB81(__return_storage_ptr__,0);
        AlgoImpl::
        IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                  ((FString *)local_b8.Data,local_b0,local_res8,(TLess<void> *)&local_a8);
      }
      iVar1 = local_b0;
      pFVar12 = (FName *)(local_b8.Data + (longlong)local_b0 * 0x10);
      FVar5.Data = local_b8.Data;
      while( true ) {
        if (local_b0 != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_a7);
        }
        if ((FName *)FVar5.Data == pFVar12) break;
        if ((__return_storage_ptr__->Data).ArrayNum < 2) {
          local_98 = (((FName *)((longlong)FVar5.Data + 8))->ComparisonIndex).Value;
          lVar6 = (longlong)(int)local_98;
          _Src = *(FName *)FVar5.Data;
          uVar8 = uVar8 | 1;
          local_a0.Data = (FScriptContainerElement *)0x0;
          if (local_98 == 0) {
            local_94 = 0;
            FVar7.Data = (FScriptContainerElement *)0x0;
            uVar9 = local_98;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_98,0,&local_a0,local_98,&local_94);
            memcpy(local_a0.Data,(void *)_Src,lVar6 * 2);
            FVar7.Data = local_a0.Data;
            uVar9 = local_98;
          }
        }
        else {
          uVar8 = uVar8 | 2;
          ::FString::ConcatCF(&local_78,L",",(FString *)FVar5.Data);
          FVar7.Data = local_78.Data.AllocatorInstance.Data;
          uVar9 = local_78.Data.ArrayNum;
        }
        iVar10 = uVar9 - 1;
        if (uVar9 == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar7.Data,iVar10);
        if (((uVar8 & 2) != 0) &&
           (uVar8 = uVar8 & 0xfffffffd,
           local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (((uVar8 & 1) != 0) &&
           (uVar8 = uVar8 & 0xfffffffe, local_a0.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_a0.Data);
        }
        FVar5.Data = FVar5.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_b8.Data,local_b0);
      if ((FName *)local_b8.Data != (FName *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      return __return_storage_ptr__;
    }
    if ((param_2 == false) || ((char)pFVar12[2].ComparisonIndex.Value != '\0')) {
      if ((param_3) && (*this != (FName)0x0)) {
        pFVar4 = ::FName::ToString(this,&local_58);
        ::FString::ConcatCF(&local_68,L"[",pFVar4);
        ::FString::ConcatFC(&local_88,&local_68,L"]");
        FVar5.Data = local_88.Data.AllocatorInstance.Data;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (((local_b8.Data <= pFVar12) &&
          (pFVar12 < (FName *)(local_b8.Data + (longlong)iStack_ac * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      if (local_b0 == iStack_ac) {
        local_b0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_b8,&iStack_ac);
      }
      lVar6 = (longlong)local_b0;
      local_b0 = local_b0 + 1;
      ::FString::FString((FString *)(local_b8.Data + lVar6 * 0x10),(FString *)pFVar12);
      param_2 = (bool)local_res18;
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
        param_2 = (bool)local_res18;
      }
    }
    this = this + 4;
    pFVar12 = pFVar12 + 4;
  } while( true );
}

// GatherDeviceProfileCVars @ 147ae08a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147ae17d8) */
/* WARNING: Removing unreachable block (ram,0x000147ae1e21) */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __cdecl
UDeviceProfileManager::GatherDeviceProfileCVars
          (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *__return_storage_ptr__,FString *param_1,EDeviceProfileMode param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  EPlatformMemorySizeBucket EVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar9;
  FName FVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> *pTVar16;
  UDeviceProfileManager *this;
  UDeviceProfile *pUVar17;
  FConfigCacheIni *pFVar18;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar19;
  size_t sVar20;
  FName *pFVar21;
  FString *pFVar22;
  FName *pFVar23;
  wchar_t *pwVar24;
  void *pvVar25;
  ForAnyElementType FVar26;
  ForElementType<FSetElementId> FVar27;
  uint uVar28;
  ForAnyElementType FVar29;
  FName *pFVar30;
  uint uVar31;
  wchar_t *pwVar32;
  FScriptContainerElement *pFVar33;
  FConfigSection *pFVar34;
  ForElementType<FSetElementId> FVar35;
  uint *puVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  undefined1 auStackY_518 [32];
  ForAnyElementType local_4b8;
  undefined8 uStack_4b0;
  EDeviceProfileMode local_4a8;
  undefined1 local_4a7;
  undefined1 local_4a6 [6];
  ForAnyElementType local_4a0;
  undefined8 local_498;
  TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> local_490;
  uint local_480;
  EPlatformMemorySizeBucket local_47c;
  FConfigCacheIni *local_478;
  ForAnyElementType local_470;
  undefined8 local_468;
  FString local_460;
  wchar_t *local_450;
  FConfigSection *local_448;
  FString local_440;
  FString local_430;
  TArray<FString,TSizedDefaultAllocator<32>_> local_418;
  TArray<FString,TSizedDefaultAllocator<32>_> local_408;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3d8;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *local_3c8;
  FString local_3c0;
  FString local_3b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3a0;
  FString local_390;
  FString local_380;
  uint local_370;
  FString local_368;
  FString local_358;
  FString local_348;
  TBaseKeyIterator<1> local_338;
  FString local_320;
  FName local_310;
  FString local_308;
  FString local_2f8;
  int local_2e8;
  undefined1 local_2e4 [20];
  undefined1 local_2d0 [16];
  int local_2c0;
  TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  undefined1 local_268 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined1 *local_238;
  uint uStack_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined4 uStack_220;
  int iStack_21c;
  int local_218;
  undefined4 uStack_214;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString *local_188;
  FString *local_180;
  FString local_178;
  FName *local_168;
  FString *local_160;
  wchar_t *local_158 [4];
  wchar_t *local_138;
  wchar_t *local_130;
  FString local_128;
  FName local_118;
  FName local_110 [4];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  pFVar18 = GConfig;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_518;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  bVar11 = (byte)(param_2 - DPM_SetCVarsForSingleDP) < 2;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  local_370 = 0;
  local_478 = pFVar18;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_490.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_490.ArrayNum = 0;
  local_490.ArrayMax = 0;
  local_e8._0_8_ = (void *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_4a0.Data = (FScriptContainerElement *)0x0;
  local_498 = 0;
  local_4a8 = param_2;
  local_3c8 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__;
  local_2e4._12_8_ = param_1;
  local_47c = FGenericPlatformMemory::GetMemorySizeBucket();
  if ((byte)(param_2 - DPM_CacheValues) < 2) {
    this = Get(false);
    pUVar17 = FindProfile(this,param_1,true,(FName)0x0);
    if (pUVar17 == (UDeviceProfile *)0x0) {
      if (4 < (byte)LogDeviceProfileManager._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Profile",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DeviceProfiles\\DeviceProfileManager.cpp"
                          ,0x170,L"");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   *)(*pcVar5)();
        return pTVar19;
      }
      DestructItems<FString,int>((FString *)local_4a0.Data,(int)local_498);
      if (local_4a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data);
      }
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,0);
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if ((void *)local_e8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
      DestructItems<FSelectedFragmentProperties,int>
                ((FSelectedFragmentProperties *)local_490.AllocatorInstance.Data,local_490.ArrayNum)
      ;
      if ((FSelectedFragmentProperties *)local_490.AllocatorInstance.Data ==
          (FSelectedFragmentProperties *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_490.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if ((pUVar17->DeviceType).Data.ArrayNum == 0) {
      pwVar32 = L"";
    }
    else {
      pwVar32 = (wchar_t *)(pUVar17->DeviceType).Data.AllocatorInstance.Data;
    }
    pFVar21 = ::FName::FName(local_110,pwVar32);
    pFVar18 = FConfigCacheIni::ForPlatform(*pFVar21);
    local_47c = pUVar17->PreviewMemorySizeBucket;
    local_478 = pFVar18;
    if (param_2 == DPM_CacheValues) {
      pTVar16 = FindMatchingFragments(&local_2b8,param_1,pFVar18);
      if (&local_490 != pTVar16) {
        DestructItems<FSelectedFragmentProperties,int>
                  ((FSelectedFragmentProperties *)local_490.AllocatorInstance.Data,
                   local_490.ArrayNum);
        if ((FSelectedFragmentProperties *)local_490.AllocatorInstance.Data !=
            (FSelectedFragmentProperties *)0x0) {
          FMemory::Free(local_490.AllocatorInstance.Data);
        }
        local_490.AllocatorInstance.Data = (pTVar16->AllocatorInstance).Data;
        (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_490.ArrayNum = pTVar16->ArrayNum;
        local_490.ArrayMax = pTVar16->ArrayMax;
        pTVar16->ArrayNum = 0;
        pTVar16->ArrayMax = 0;
      }
      DestructItems<FSelectedFragmentProperties,int>
                ((FSelectedFragmentProperties *)local_2b8.AllocatorInstance.Data,local_2b8.ArrayNum)
      ;
      if ((FSelectedFragmentProperties *)local_2b8.AllocatorInstance.Data !=
          (FSelectedFragmentProperties *)0x0) {
        FMemory::Free(local_2b8.AllocatorInstance.Data);
      }
    }
  }
  else if (!bVar11) {
    if (PlatformFragmentsSelected.ArrayNum == 0) {
      pTVar16 = FindMatchingFragments
                          ((TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> *)
                           (local_2d0 + 8),param_1,GConfig);
      TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_>::operator=
                (&PlatformFragmentsSelected,pTVar16);
      DestructItems<FSelectedFragmentProperties,int>
                ((FSelectedFragmentProperties *)local_2d0._8_8_,local_2c0);
      if ((FSelectedFragmentProperties *)local_2d0._8_8_ != (FSelectedFragmentProperties *)0x0) {
        FMemory::Free((void *)local_2d0._8_8_);
      }
      if (PlatformFragmentsSelected.ArrayNum != 0) {
        FragmentPropertyArrayToFragmentString
                  (&local_1f8,&PlatformFragmentsSelected,false,false,true);
        ::FString::FString(&local_208,L"DeviceProfile.MatchedFragmentsSorted");
        FGenericCrashContext::SetEngineData(&local_208,&local_1f8);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
      }
    }
    DestructItems<FSelectedFragmentProperties,int>
              ((FSelectedFragmentProperties *)local_490.AllocatorInstance.Data,local_490.ArrayNum);
    iVar13 = PlatformFragmentsSelected.ArrayNum;
    FVar29 = PlatformFragmentsSelected.AllocatorInstance;
    local_490.ArrayNum = PlatformFragmentsSelected.ArrayNum;
    if ((PlatformFragmentsSelected.ArrayNum != 0) || (local_490.ArrayMax != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,PlatformFragmentsSelected.ArrayNum,local_490.ArrayMax,
                 &local_490.AllocatorInstance,PlatformFragmentsSelected.ArrayNum,&local_490.ArrayMax
                );
      ConstructItems<FSelectedFragmentProperties,FSelectedFragmentProperties,int>
                (local_490.AllocatorInstance.Data,(FSelectedFragmentProperties *)FVar29.Data,iVar13)
      ;
    }
  }
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ArrayNum = 0;
  local_408.ArrayMax = 0;
  FConfigCacheIni::GetSectionNames(pFVar18,&GDeviceProfilesIni,&local_408);
  ::FString::FString(&local_308,L"DeviceProfiles");
  if (((local_408.AllocatorInstance.Data <= (FScriptContainerElement *)&local_308) &&
      ((FScriptContainerElement *)&local_308 <
       local_408.AllocatorInstance.Data + (longlong)local_408.ArrayMax * 0x10)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               *)(*pcVar5)();
    return pTVar19;
  }
  local_2e4._4_8_ = &local_308;
  TArray<FString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&local_408,(<lambda_1> *)(local_2e4 + 4));
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  uVar38 = 0;
  if (!bVar11) {
    uVar37 = local_490.ArrayNum - 1;
    __return_storage_ptr__ =
         (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *)
         local_3c8;
    local_480 = uVar37;
    if (-1 < (int)uVar37) {
      pwVar32 = (wchar_t *)(longlong)(int)uVar37;
      pFVar34 = (FConfigSection *)((longlong)pwVar32 << 5);
      do {
        uVar38 = 0;
        if ((int)uVar37 < local_490.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        local_480 = uVar37;
        local_450 = pwVar32;
        local_448 = pFVar34;
        if ((uVar38 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                     *)(*pcVar5)();
          return pTVar19;
        }
        FVar29.Data = local_490.AllocatorInstance.Data;
        if ((local_490.AllocatorInstance.Data + 0x18)[(longlong)pFVar34] !=
            (FScriptContainerElement)0x0) {
          local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f8.ArrayNum = 0;
          local_3f8.ArrayMax = 0;
          ::FString::FString(&local_1d8,L"CVars");
          if (*(int *)(FVar29.Data + 0x10 + (longlong)pFVar34) == 0) {
            pwVar24 = L"";
          }
          else {
            pwVar24 = *(wchar_t **)(FVar29.Data + 8 + (longlong)pFVar34);
          }
          ::FString::FString(&local_1e8,pwVar24);
          GetFragmentCVars(&local_1e8,&local_1d8,&local_3f8,pFVar18);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          uVar38 = local_3f8.ArrayNum - 1;
          if (-1 < (int)uVar38) {
            lVar39 = (longlong)(int)uVar38 << 4;
            do {
              uVar37 = 0;
              if ((int)uVar38 < local_3f8.ArrayNum) {
                uVar37 = ~uVar38 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar5 = (code *)swi(3);
                pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)(*pcVar5)();
                return pTVar19;
              }
              local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              pFVar33 = local_3f8.AllocatorInstance.Data + lVar39;
              local_440.Data.ArrayNum = 0;
              local_440.Data.ArrayMax = 0;
              local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2f8.Data.ArrayNum = 0;
              local_2f8.Data.ArrayMax = 0;
              ::FString::FString(&local_1c8,L"=");
              bVar12 = ::FString::Split((FString *)pFVar33,&local_1c8,&local_440,&local_2f8);
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              if (bVar12) {
                iVar13 = local_440.Data.ArrayNum + -1;
                FVar29.Data = local_440.Data.AllocatorInstance.Data;
                if (local_440.Data.ArrayNum == 0) {
                  iVar13 = 0;
                  FVar29.Data = (FScriptContainerElement *)L"";
                }
                uVar37 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar29.Data);
                if (local_e8._8_4_ != local_b4) {
                  FVar35 = (ForElementType<FSetElementId>)local_b0;
                  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                    FVar35 = local_a8;
                  }
                  iVar13 = *(int *)((longlong)FVar35 + (ulonglong)(local_a0 - 1U & uVar37) * 4);
                  if (iVar13 != -1) {
                    pvVar25 = (void *)local_e8._0_8_;
                    iVar14 = local_440.Data.ArrayNum;
                    do {
                      lVar2 = (longlong)iVar13 * 0x18;
                      iVar3 = *(int *)((longlong)pvVar25 + lVar2 + 8);
                      if (iVar3 == iVar14) {
                        if (1 < iVar3) {
                          iVar14 = FGenericPlatformStricmp::Stricmp
                                             (*(wchar_t **)((longlong)pvVar25 + lVar2),
                                              (wchar_t *)local_440.Data.AllocatorInstance.Data);
                          bVar12 = iVar14 == 0;
                          pvVar25 = (void *)local_e8._0_8_;
                          iVar14 = local_440.Data.ArrayNum;
                          goto LAB_147ae0fe2;
                        }
LAB_147ae0ff4:
                        if ((iVar13 != -1) && ((void *)(lVar2 + (longlong)pvVar25) != (void *)0x0))
                        goto LAB_147ae10c1;
                        break;
                      }
                      bVar12 = iVar3 + iVar14 == 1;
LAB_147ae0fe2:
                      if (bVar12) goto LAB_147ae0ff4;
                      iVar13 = *(int *)(lVar2 + 0x10 + (longlong)pvVar25);
                    } while (iVar13 != -1);
                  }
                }
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                Emplace<FString_const_&>
                          ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8
                           ,(FString *)local_268,(bool *)&local_440);
                if (((local_4a0.Data <= pFVar33) &&
                    (pFVar33 < local_4a0.Data + (longlong)local_498._4_4_ * 0x10)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                             *)(*pcVar5)();
                  return pTVar19;
                }
                iVar13 = (int)local_498;
                if ((int)local_498 == local_498._4_4_) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_4a0,(int *)((longlong)&local_498 + 4));
                }
                local_498 = CONCAT44(local_498._4_4_,iVar13 + 1);
                ::FString::FString((FString *)(local_4a0.Data + (longlong)iVar13 * 0x10),
                                   (FString *)pFVar33);
              }
LAB_147ae10c1:
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
              }
              if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_440.Data.AllocatorInstance.Data);
              }
              lVar39 = lVar39 + -0x10;
              uVar38 = uVar38 - 1;
              pwVar32 = local_450;
              pFVar34 = local_448;
              uVar37 = local_480;
            } while (-1 < (int)uVar38);
          }
          DestructItems<FString,int>((FString *)local_3f8.AllocatorInstance.Data,local_3f8.ArrayNum)
          ;
          pFVar18 = local_478;
          if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f8.AllocatorInstance.Data);
            pFVar18 = local_478;
          }
        }
        uVar37 = uVar37 - 1;
        pwVar32 = (wchar_t *)((longlong)pwVar32 + -1);
        pFVar34 = (FConfigSection *)((longlong)pFVar34 + -0x20);
        param_1 = (FString *)local_2e4._12_8_;
        __return_storage_ptr__ =
             (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              *)local_3c8;
        local_480 = uVar37;
        local_448 = pFVar34;
        uVar38 = local_370;
      } while (-1 < (int)uVar37);
    }
  }
  local_460.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar39 = (longlong)local_460.Data.ArrayNum;
  local_450 = L" DeviceProfile";
  pFVar33 = (param_1->Data).AllocatorInstance.Data;
  if (local_4a8 == DPM_SetCVarsForSingleFragment) {
    local_450 = L" DeviceProfileFragment";
  }
  local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_460.Data.ArrayNum == 0) {
    local_460.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_460.Data.ArrayNum,0,(ForAnyElementType *)&local_460,local_460.Data.ArrayNum
               ,&local_460.Data.ArrayMax);
    memcpy(local_460.Data.AllocatorInstance.Data,pFVar33,lVar39 * 2);
  }
  pFVar18 = local_478;
  if (1 < local_460.Data.ArrayNum) {
    do {
      EVar4 = local_47c;
      ::FString::ConcatFC(&local_3c0,&local_460,local_450);
      FVar29.Data = (FScriptContainerElement *)L"";
      if (local_3c0.Data.ArrayNum != 0) {
        FVar29.Data = local_3c0.Data.AllocatorInstance.Data;
      }
      pFVar34 = FConfigCacheIni::GetSection
                          (pFVar18,(wchar_t *)FVar29.Data,false,&GDeviceProfilesIni);
      local_448 = pFVar34;
      if (pFVar34 != (FConfigSection *)0x0) {
        local_158[0] = L"_Largest";
        local_158[1] = L"_Larger";
        local_480 = 0;
        local_158[2] = L"_Default";
        local_158[3] = L"_Smaller";
        local_138 = L"_Smallest";
        local_130 = L"_Tiniest";
        do {
          uVar37 = local_480;
          ::FString::FString(&local_390,L"CVars");
          if (uVar37 == 0) {
            pwVar32 = local_158[(int)EVar4];
            sVar20 = wcslen(pwVar32);
            ::FString::AppendChars(&local_390,pwVar32,(int)sVar20);
          }
          local_4b8.Data = (FScriptContainerElement *)0x0;
          uStack_4b0 = 0;
          local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_418.ArrayNum = 0;
          local_418.ArrayMax = 0;
          local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3a0.ArrayNum = 0;
          local_3a0.ArrayMax = 0;
          if (!bVar11) {
            FVar29.Data = (FScriptContainerElement *)L"";
            if (local_390.Data.ArrayNum != 0) {
              FVar29.Data = local_390.Data.AllocatorInstance.Data;
            }
            ::FString::FString(&local_1b8,(wchar_t *)FVar29.Data);
            FVar29.Data = (FScriptContainerElement *)L"";
            if (local_3c0.Data.ArrayNum != 0) {
              FVar29.Data = local_3c0.Data.AllocatorInstance.Data;
            }
            ::FString::FString(&local_298,(wchar_t *)FVar29.Data);
            ::FString::FString(&local_2a8,L"FragmentIncludes");
            local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar29.Data = (FScriptContainerElement *)L"";
            if (local_2a8.Data.ArrayNum != 0) {
              FVar29.Data = local_2a8.Data.AllocatorInstance.Data;
            }
            local_3e8.ArrayNum = 0;
            local_3e8.ArrayMax = 0;
            FVar26.Data = (FScriptContainerElement *)L"";
            if (local_298.Data.ArrayNum != 0) {
              FVar26.Data = local_298.Data.AllocatorInstance.Data;
            }
            FConfigCacheIni::GetArray
                      (pFVar18,(wchar_t *)FVar26.Data,(wchar_t *)FVar29.Data,&local_3e8,
                       &GDeviceProfilesIni);
            pFVar18 = local_478;
            iVar13 = local_3e8.ArrayNum;
            pFVar33 = local_3e8.AllocatorInstance.Data + (longlong)local_3e8.ArrayNum * 0x10;
            FVar29.Data = local_3e8.AllocatorInstance.Data;
            while( true ) {
              if (local_3e8.ArrayNum != iVar13) {
                local_4a7 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_4a7);
              }
              if (FVar29.Data == pFVar33) break;
              GetFragmentCVars((FString *)FVar29.Data,&local_1b8,&local_418,pFVar18);
              FVar29.Data = FVar29.Data + 0x10;
            }
            DestructItems<FString,int>
                      ((FString *)local_3e8.AllocatorInstance.Data,local_3e8.ArrayNum);
            pFVar34 = local_448;
            if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.AllocatorInstance.Data);
            }
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            FVar29.Data = (FScriptContainerElement *)L"";
            if (local_390.Data.ArrayNum != 0) {
              FVar29.Data = local_390.Data.AllocatorInstance.Data;
            }
            ::FString::FString(&local_1a8,(wchar_t *)FVar29.Data);
            FVar29.Data = (FScriptContainerElement *)L"";
            if (local_3c0.Data.ArrayNum != 0) {
              FVar29.Data = local_3c0.Data.AllocatorInstance.Data;
            }
            ::FString::FString(&local_278,(wchar_t *)FVar29.Data);
            ::FString::FString(&local_288,L"OverrideFragmentIncludes");
            pFVar18 = local_478;
            local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar29.Data = (FScriptContainerElement *)L"";
            if (local_288.Data.ArrayNum != 0) {
              FVar29.Data = local_288.Data.AllocatorInstance.Data;
            }
            local_3d8.ArrayNum = 0;
            local_3d8.ArrayMax = 0;
            FVar26.Data = (FScriptContainerElement *)L"";
            if (local_278.Data.ArrayNum != 0) {
              FVar26.Data = local_278.Data.AllocatorInstance.Data;
            }
            FConfigCacheIni::GetArray
                      (local_478,(wchar_t *)FVar26.Data,(wchar_t *)FVar29.Data,&local_3d8,
                       &GDeviceProfilesIni);
            iVar13 = local_3d8.ArrayNum;
            pFVar33 = local_3d8.AllocatorInstance.Data + (longlong)local_3d8.ArrayNum * 0x10;
            FVar29.Data = local_3d8.AllocatorInstance.Data;
            while( true ) {
              if (local_3d8.ArrayNum != iVar13) {
                local_4a6[0] = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_4a6);
              }
              if (FVar29.Data == pFVar33) break;
              GetFragmentCVars((FString *)FVar29.Data,&local_1a8,&local_3a0,pFVar18);
              FVar29.Data = FVar29.Data + 0x10;
            }
            DestructItems<FString,int>
                      ((FString *)local_3d8.AllocatorInstance.Data,local_3d8.ArrayNum);
            __return_storage_ptr__ =
                 (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  *)local_3c8;
            if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3d8.AllocatorInstance.Data);
            }
            if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_288.Data.AllocatorInstance.Data);
            }
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
            }
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
          }
          FVar29.Data = (FScriptContainerElement *)L"";
          if (local_390.Data.ArrayNum != 0) {
            FVar29.Data = local_390.Data.AllocatorInstance.Data;
          }
          pFVar21 = ::FName::FName(&local_118,(wchar_t *)FVar29.Data);
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                    (&local_338,
                     (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                      *)pFVar34,*pFVar21);
          FVar10 = local_338.Key;
          pTVar9 = local_338.Set;
          iVar13 = local_338.NextIndex;
          while (local_338.NextIndex = iVar13, local_338.Index != -1) {
            lVar2 = *(longlong *)&pTVar9->Elements;
            lVar39 = (longlong)local_338.Index * 5 + 1;
            pFVar22 = (FString *)(lVar2 + lVar39 * 8);
            if (*(char *)(lVar2 + 0x15 + lVar39 * 8) == '\0') {
              iVar14 = (pFVar22->Data).ArrayNum;
              uVar38 = uVar38 | 4;
              pFVar33 = (pFVar22->Data).AllocatorInstance.Data;
              local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_380.Data.ArrayNum = iVar14;
              if (iVar14 == 0) {
                local_380.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar14,0,(ForAnyElementType *)&local_380,iVar14,
                           &local_380.Data.ArrayMax);
                memcpy(local_380.Data.AllocatorInstance.Data,pFVar33,(longlong)iVar14 * 2);
              }
              pFVar22 = &local_380;
            }
            else {
              uVar38 = uVar38 | 2;
              pFVar22 = FConfigValue::ExpandValue(&local_128,pFVar22);
            }
            local_470.Data = (FScriptContainerElement *)0x0;
            iVar14 = (pFVar22->Data).ArrayNum;
            pFVar33 = (pFVar22->Data).AllocatorInstance.Data;
            local_468 = CONCAT44(local_468._4_4_,iVar14);
            if (iVar14 == 0) {
              local_468 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar14,0,&local_470,iVar14,(int *)((longlong)&local_468 + 4));
              memcpy(local_470.Data,pFVar33,(longlong)iVar14 * 2);
            }
            if (((uVar38 & 4) != 0) &&
               (uVar38 = uVar38 & 0xfffffffb,
               local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_380.Data.AllocatorInstance.Data);
            }
            if (((uVar38 & 2) != 0) &&
               (uVar38 = uVar38 & 0xfffffffd,
               local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            if ((local_4b8.Data <= (FScriptContainerElement *)&local_470) &&
               ((FScriptContainerElement *)&local_470 <
                local_4b8.Data + (longlong)uStack_4b0._4_4_ * 0x10)) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar5 = (code *)swi(3);
                pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)(*pcVar5)();
                return pTVar19;
              }
            }
            iVar14 = (int)uStack_4b0;
            if ((int)uStack_4b0 == uStack_4b0._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_4b8,(int *)((longlong)&uStack_4b0 + 4));
            }
            uStack_4b0 = CONCAT44(uStack_4b0._4_4_,iVar14 + 1);
            pFVar33 = local_4b8.Data + (longlong)iVar14 * 0x10;
            *(undefined8 *)pFVar33 = 0;
            *(FScriptContainerElement **)pFVar33 = local_470.Data;
            local_470.Data = (FScriptContainerElement *)0x0;
            FVar29.Data = local_470.Data;
            *(undefined4 *)(pFVar33 + 8) = (undefined4)local_468;
            *(undefined4 *)(pFVar33 + 0xc) = local_468._4_4_;
            local_468 = 0;
            uVar8 = local_468;
            local_468 = 0;
            local_470.Data = (FScriptContainerElement *)0x0;
            __return_storage_ptr__ =
                 (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  *)local_3c8;
            pFVar34 = local_448;
            uVar37 = local_480;
            local_338.Index = iVar13;
            if (iVar13 == -1) break;
            lVar39 = *(longlong *)&pTVar9->Elements;
            do {
              local_338.NextIndex = *(int *)(lVar39 + 0x20 + (longlong)iVar13 * 0x28);
              local_338.Index = iVar13;
              if (*(FName *)(lVar39 + (longlong)iVar13 * 0x28) == FVar10) break;
              local_338.Index = local_338.NextIndex;
              iVar13 = local_338.NextIndex;
            } while (local_338.NextIndex != -1);
            local_470.Data = FVar29.Data;
            local_468 = uVar8;
            iVar13 = local_338.NextIndex;
          }
          iVar13 = (int)uStack_4b0;
          lVar39 = (longlong)((int)uStack_4b0 / 2);
          if (0 < (int)uStack_4b0 / 2) {
            pFVar33 = local_4b8.Data + (longlong)((int)uStack_4b0 + -1) * 0x10;
            FVar29.Data = local_4b8.Data;
            do {
                    /* WARNING: Load size is inaccurate */
              FVar26.Data = pFVar33[8];
              uVar6 = *(undefined4 *)FVar29.Data;
              uVar7 = *(undefined4 *)(FVar29.Data + 4);
              iVar14 = *(int *)(FVar29.Data + 8);
              iVar3 = *(int *)(FVar29.Data + 0xc);
              *(FScriptContainerElement **)FVar29.Data = *pFVar33;
              *(FScriptContainerElement **)(FVar29.Data + 8) = FVar26.Data;
              FVar29.Data = FVar29.Data + 0x10;
              *(undefined4 *)pFVar33 = uVar6;
              *(undefined4 *)(pFVar33 + 4) = uVar7;
              *(int *)(pFVar33 + 8) = iVar14;
              *(int *)(pFVar33 + 0xc) = iVar3;
              lVar39 = lVar39 + -1;
              pFVar33 = pFVar33 + -0x10;
            } while (lVar39 != 0);
          }
          bVar12 = local_418.ArrayNum != 0;
          if (bVar12) {
            pFVar33 = local_4b8.Data;
            uVar1 = uStack_4b0;
            local_4b8.Data = local_418.AllocatorInstance.Data;
            uStack_4b0._0_4_ = local_418.ArrayNum;
            uStack_4b0._4_4_ = local_418.ArrayMax;
            local_418.AllocatorInstance.Data = pFVar33;
            local_418._8_8_ = uVar1;
            if (iVar13 != 0) {
              iVar14 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,iVar13,&local_4b8,(int *)&uStack_4b0,
                                  (int *)((longlong)&uStack_4b0 + 4));
              ConstructItems<FString,FString,int>
                        (local_4b8.Data + (longlong)iVar14 * 0x10,
                         (FString *)local_418.AllocatorInstance.Data,iVar13);
            }
          }
          iVar13 = local_3a0.ArrayNum;
          if (local_3a0.ArrayNum != 0) {
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,local_3a0.ArrayNum,&local_4b8,(int *)&uStack_4b0,
                                (int *)((longlong)&uStack_4b0 + 4));
            ConstructItems<FString,FString,int>
                      (local_4b8.Data + (longlong)iVar14 * 0x10,
                       (FString *)local_3a0.AllocatorInstance.Data,iVar13);
          }
          iVar13 = (int)local_498;
          iVar14 = 0;
          if ((int)local_498 != 0) {
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,(int)local_498,&local_4b8,(int *)&uStack_4b0,
                                (int *)((longlong)&uStack_4b0 + 4));
            ConstructItems<FString,FString,int>
                      (local_4b8.Data + (longlong)iVar14 * 0x10,(FString *)local_4a0.Data,iVar13);
            iVar14 = (int)local_498;
          }
          DestructItems<FString,int>((FString *)local_4a0.Data,iVar14);
          pFVar21 = (FName *)0x0;
          uVar31 = 0;
          uVar1 = local_498 >> 0x20;
          local_498 = local_498 & 0xffffffff00000000;
          if ((int)uVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_4a0,0,(int *)((longlong)&local_498 + 4));
          }
          local_98._0_8_ = 0;
          local_98._8_8_ = 0;
          local_78 = (uint *)0x0;
          local_70 = 0;
          local_6c = 0x80;
          local_68 = 0xffffffff;
          local_64 = 0;
          local_58 = (ForElementType<FSetElementId>)0x0;
          local_50 = 0;
          pFVar23 = pFVar21;
          while( true ) {
            uVar28 = (uint)pFVar23;
            if (((int)uVar28 < 0) || ((int)uStack_4b0 <= (int)uVar28)) break;
            local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_358.Data.ArrayNum = 0;
            local_358.Data.ArrayMax = 0;
            local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_368.Data.ArrayNum = 0;
            local_368.Data.ArrayMax = 0;
            uVar15 = uVar31;
            if ((int)uVar28 < (int)uStack_4b0) {
              uVar15 = ~uVar28 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar5 = (code *)swi(3);
                pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)(*pcVar5)();
                return pTVar19;
              }
            }
            FVar29.Data = local_4b8.Data;
            ::FString::FString(&local_198,L"=");
            bVar12 = ::FString::Split((FString *)(FVar29.Data + (longlong)(int)uVar28 * 0x10),
                                      &local_198,&local_358,&local_368);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              if (6 < (byte)LogDeviceProfileManager._0_1_) {
                UE::Logging::Private::BasicLog<7>
                          (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
              }
              local_188 = &local_358;
              local_180 = &local_368;
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)local_98,(TPairInitializer<FString_const_&,FString_const_&> *)local_2d0,
                         (bool *)&local_188);
            }
            if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.Data.AllocatorInstance.Data);
            }
            if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_358.Data.AllocatorInstance.Data);
            }
            pFVar23 = (FName *)(ulonglong)(uVar28 + 1);
          }
          DestructItems<FString,int>((FString *)local_4b8.Data,(int)uStack_4b0);
          uVar1 = uStack_4b0 >> 0x20;
          uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
          if ((int)uVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_4b8,0,(int *)((longlong)&uStack_4b0 + 4));
          }
          uStack_22c = 1;
          pFVar30 = pFVar21;
          pFVar23 = pFVar21;
          uStack_230 = uVar31;
          if (local_70 != 0) {
            puVar36 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar36 = local_78;
            }
            uVar28 = *puVar36;
            while (uVar28 == 0) {
              iVar13 = (int)pFVar30;
              pFVar23 = (FName *)(ulonglong)((int)pFVar23 + 0x20);
              uStack_230 = iVar13 + 1;
              pFVar30 = (FName *)(ulonglong)uStack_230;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)uStack_230) {
                pFVar30 = (FName *)(ulonglong)local_70;
                goto LAB_147ae1c23;
              }
              uVar28 = puVar36[(longlong)iVar13 + 1];
            }
            uStack_22c = -uVar28 & uVar28;
            uVar1 = (ulonglong)uStack_22c * 2 + 1;
            lVar39 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            local_2e8 = (int)lVar39;
            uVar28 = (int)pFVar23 + -1 + local_2e8;
            pFVar30 = (FName *)(ulonglong)uVar28;
            if ((int)local_70 < (int)uVar28) {
              pFVar30 = (FName *)(ulonglong)local_70;
            }
          }
LAB_147ae1c23:
          local_268._8_8_ = local_98;
          local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          uStack_220 = 0xffffffff;
          TStack_258.CurrentBitIndex = (int)pFVar30;
          uStack_214 = local_ec;
          local_218 = (int)pFVar23;
          TStack_258._padding_ = CONCAT44(uStack_22c,uStack_230);
          TStack_258._28_4_ = local_ec;
          TStack_258.BaseBitIndex = local_218;
          TStack_258.UnvisitedBitMask = 0xffffffff;
          local_238 = (undefined1 *)local_268._8_8_;
          iStack_21c = TStack_258.CurrentBitIndex;
          TStack_258.Array = local_228;
          if (TStack_258.CurrentBitIndex < (int)local_70) {
            do {
              if (6 < (byte)LogDeviceProfileManager._0_1_) {
                UE::Logging::Private::BasicLog<7>
                          (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
              }
              ::FString::PrintfImpl(&local_430,L"%s=%s");
              if ((local_4b8.Data <= (FScriptContainerElement *)&local_430) &&
                 ((FScriptContainerElement *)&local_430 <
                  local_4b8.Data + (longlong)uStack_4b0._4_4_ * 0x10)) {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar12) {
                  pcVar5 = (code *)swi(3);
                  pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                             *)(*pcVar5)();
                  return pTVar19;
                }
              }
              iVar13 = (int)uStack_4b0;
              if ((int)uStack_4b0 == uStack_4b0._4_4_) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_4b8,(int *)((longlong)&uStack_4b0 + 4));
              }
              uStack_4b0 = CONCAT44(uStack_4b0._4_4_,iVar13 + 1);
              pFVar33 = local_4b8.Data + (longlong)iVar13 * 0x10;
              *(undefined8 *)pFVar33 = 0;
              *(FScriptContainerElement **)pFVar33 = local_430.Data.AllocatorInstance.Data;
              *(int *)(pFVar33 + 8) = local_430.Data.ArrayNum;
              *(int *)(pFVar33 + 0xc) = local_430.Data.ArrayMax;
              local_430.Data.ArrayNum = 0;
              local_430.Data.ArrayMax = 0;
              local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              TStack_258.UnvisitedBitMask =
                   TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
            } while (TStack_258.CurrentBitIndex < (TStack_258.Array)->NumBits);
          }
          local_50 = 0;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_58);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          pFVar23 = pFVar21;
          while ((uVar28 = (uint)pFVar23, -1 < (int)uVar28 && ((int)uVar28 < (int)uStack_4b0))) {
            local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3b0.Data.ArrayNum = 0;
            local_3b0.Data.ArrayMax = 0;
            local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_348.Data.ArrayNum = 0;
            local_348.Data.ArrayMax = 0;
            uVar15 = uVar31;
            if ((int)uVar28 < (int)uStack_4b0) {
              uVar15 = ~uVar28 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar5 = (code *)swi(3);
                pTVar19 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)(*pcVar5)();
                return pTVar19;
              }
            }
            FVar29.Data = local_4b8.Data;
            ::FString::FString(&local_178,L"=");
            bVar12 = ::FString::Split((FString *)(FVar29.Data + (longlong)(int)uVar28 * 0x10),
                                      &local_178,&local_3b0,&local_348);
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              FVar29.Data = (FScriptContainerElement *)L"";
              if (local_3b0.Data.ArrayNum != 0) {
                FVar29.Data = local_3b0.Data.AllocatorInstance.Data;
              }
              ::FName::FName(&local_310,(wchar_t *)FVar29.Data);
              FVar10 = local_310;
              uVar15 = ::GetTypeHash(local_310.ComparisonIndex.Value);
              if (*(int *)&(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                              *)__return_storage_ptr__)->Elements).field_0x8 !=
                  *(int *)&(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                              *)__return_storage_ptr__)->Elements).field_0x34) {
                FVar35 = (((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                            *)__return_storage_ptr__)->Hash).SecondaryData;
                FVar27 = (ForElementType<FSetElementId>)
                         &((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                            *)__return_storage_ptr__)->Hash;
                if (FVar35 != (ForElementType<FSetElementId>)0x0) {
                  FVar27 = FVar35;
                }
                uVar15 = *(uint *)((longlong)FVar27 +
                                  (ulonglong)
                                  (((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                                     *)__return_storage_ptr__)->HashSize - 1U &
                                  FVar10.Number + uVar15) * 4);
                if (uVar15 != 0xffffffff) {
                  do {
                    pFVar23 = (FName *)((longlong)(int)uVar15 * 0x20 +
                                       *(longlong *)
                                        &((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                                           *)__return_storage_ptr__)->Elements);
                    if (*pFVar23 == FVar10) {
                      pFVar30 = pFVar23 + 1;
                      if (pFVar23 == (FName *)0x0) {
                        pFVar30 = pFVar21;
                      }
                      if (pFVar30 != (FName *)0x0) goto LAB_147ae204d;
                      break;
                    }
                    uVar15 = pFVar23[3].ComparisonIndex.Value;
                  } while (uVar15 != 0xffffffff);
                }
              }
              if (6 < (byte)LogDeviceProfileManager._0_1_) {
                UE::Logging::Private::BasicLog<7>
                          ((FStaticBasicLogRecord *)&PTR_u_DeviceProfileCV_151858d30,
                           (FLogCategoryBase *)&LogDeviceProfileManager);
              }
              local_168 = &local_310;
              local_160 = &local_348;
              TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
                        ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                          *)__return_storage_ptr__,
                         (TPairInitializer<FName_const_&,FString_const_&> *)local_2e4,
                         (bool *)&local_168);
            }
LAB_147ae204d:
            if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Data.AllocatorInstance.Data);
            }
            if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
            }
            pFVar23 = (FName *)(ulonglong)(uVar28 + 1);
          }
          DestructItems<FString,int>((FString *)local_3a0.AllocatorInstance.Data,local_3a0.ArrayNum)
          ;
          if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a0.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_418.AllocatorInstance.Data,local_418.ArrayNum)
          ;
          if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_4b8.Data,(int)uStack_4b0);
          if (local_4b8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b8.Data);
          }
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
          pFVar18 = local_478;
          local_480 = uVar37 + 1;
          EVar4 = local_47c;
        } while ((int)local_480 < 2);
        local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.Data.ArrayNum = 0;
        local_320.Data.ArrayMax = 0;
        if (bVar11) {
LAB_147ae218c:
          ::FString::Empty(&local_460);
        }
        else {
          FVar29.Data = (FScriptContainerElement *)L"";
          if (local_3c0.Data.ArrayNum != 0) {
            FVar29.Data = local_3c0.Data.AllocatorInstance.Data;
          }
          bVar12 = FConfigCacheIni::GetString
                             (local_478,(wchar_t *)FVar29.Data,L"BaseProfileName",&local_320,
                              &GDeviceProfilesIni);
          if (!bVar12) goto LAB_147ae218c;
          iVar13 = local_320.Data.ArrayNum + -1;
          if (local_320.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AssignRange(&local_460,(wchar_t *)local_320.Data.AllocatorInstance.Data,iVar13)
          ;
          if (4 < (byte)LogDeviceProfileManager._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
          }
        }
        if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data.AllocatorInstance.Data);
        }
      }
      if (((bVar11) || (pFVar34 == (FConfigSection *)0x0)) || (local_460.Data.ArrayNum < 2)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
    } while (!bVar12);
  }
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_408.AllocatorInstance.Data,local_408.ArrayNum);
  if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_4a0.Data,(int)local_498);
  if (local_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data);
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  DestructItems<FSelectedFragmentProperties,int>
            ((FSelectedFragmentProperties *)local_490.AllocatorInstance.Data,local_490.ArrayNum);
  if ((FSelectedFragmentProperties *)local_490.AllocatorInstance.Data !=
      (FSelectedFragmentProperties *)0x0) {
    FMemory::Free(local_490.AllocatorInstance.Data);
  }
  if ((uVar38 & 1) != 0) {
    ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      *)__return_storage_ptr__)->HashSize = 0;
    FVar35 = (((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__)->Hash).SecondaryData;
    if (FVar35 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar35);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)__return_storage_ptr__);
  }
  return (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *)
         (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          *)__return_storage_ptr__;
}

// Get @ 147ae2550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDeviceProfileManager * __cdecl UDeviceProfileManager::Get(bool param_1)

{
  code *pcVar1;
  longlong lVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDeviceProfileManager *pUVar5;
  FUObjectItem *this;
  FString *pFVar6;
  UDeviceProfile *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  IConsoleManager *pIVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  FEngineTrackedActivityScope local_d8 [8];
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar5 = DeviceProfileManagerSingleton;
  if (DeviceProfileManagerSingleton == (UDeviceProfileManager *)0x0) {
    ::FString::FString((FString *)local_d0,"Loading Device Profiles");
    FEngineTrackedActivityScope::FEngineTrackedActivityScope(local_d8,(FString *)local_d0);
    if ((atomic<unsigned___int64>)local_d0 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_d0);
    }
    if ((bEntered == false) || (!param_1)) {
      bEntered = true;
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar4);
      local_98._8_8_ = pUVar3;
      pUVar5 = (UDeviceProfileManager *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar11 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      DeviceProfileManagerSingleton = pUVar5;
      this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4))
      ;
      FUObjectItem::SetRootFlags(this,RootSet);
      LoadProfiles(DeviceProfileManagerSingleton);
      pFVar6 = GetPlatformDeviceProfileName((FString *)local_d0);
      pUVar7 = FindProfile(DeviceProfileManagerSingleton,pFVar6,true,(FName)0x0);
      if ((atomic<unsigned___int64>)local_d0 != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_d0);
      }
      SetActiveDeviceProfile(DeviceProfileManagerSingleton,pUVar7);
      lVar2 = CVarDeviceProfileOverride._padding_;
      local_d0 = (undefined1  [8])0x0;
      local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c8.DelegateSize = 0;
      pcVar1 = *(code **)(*(longlong *)CVarDeviceProfileOverride._padding_ + 0xe0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
                 (FWriteAccessScope *)&local_b8);
      local_a0 = &local_c8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`UDeviceProfileManager::Get'::`5'::<lambda_1>_>
                   ::_vftable_;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      (*pcVar1)(lVar2,local_d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
                 (FWriteAccessScope *)&local_b8);
      if ((local_c8.DelegateSize != 0) &&
         (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_c8,0,0,0x10);
        local_c8.DelegateSize = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_d0);
      pIVar10 = IConsoleManager::Get();
      local_d0 = (undefined1  [8])0x0;
      local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c8.DelegateSize = 0;
      pcVar1 = *(code **)((longlong)*pIVar10 + 0xa8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
                 (FWriteAccessScope *)&local_b8);
      local_a0 = &local_c8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDeviceProfileManager::Get'::`5'::<lambda_2>_>
                   ::_vftable_;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      local_e8 = 0;
      (*pcVar1)(pIVar10,L"dp.Override.Restore",
                L"Restores any cvars set by dp.Override to their previous value",local_d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
                 (FWriteAccessScope *)&local_b8);
      if ((local_c8.DelegateSize != 0) &&
         (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_c8,0,0,0x10);
        local_c8.DelegateSize = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_d0);
      InitializeSharedSamplerStates();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::GatherDeviceProfileCVars,(FWriteAccessScope *)&local_b8);
      local_a0 = (FDelegateAllocation *)0x154f06910;
      puVar8 = UE::Core::Private::DelegateAllocate
                         (0x20,(FDelegateAllocation *)
                               &FCoreDelegates::GatherDeviceProfileCVars.field_0x8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6A_AV__TMap_VFName__VFString__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__VFString___0A_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &TBaseFunctorDelegateInstance<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`UDeviceProfileManager::Get'::`5'::<lambda_3>_>
                   ::_vftable_;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      FDelayedAutoRegisterHelper::RunAndClearDelayedAutoRegisterDelegates(DeviceProfileManagerReady)
      ;
      TMulticastDelegateRegistration<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
      ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
                     *)&UE::DynamicConfig::UpdateCVarsAndDeviceProfiles,
                    (_func___cdecl_void_FConfigModificationTracker_ptr *)local_d0);
      FEngineTrackedActivityScope::~FEngineTrackedActivityScope(local_d8);
      pUVar5 = DeviceProfileManagerSingleton;
    }
    else {
      FEngineTrackedActivityScope::~FEngineTrackedActivityScope(local_d8);
      pUVar5 = (UDeviceProfileManager *)&DAT_00000003;
    }
  }
  return pUVar5;
}

// GetActiveDeviceProfileFragmentByTag @ 147ae2970

FSelectedFragmentProperties * __thiscall
UDeviceProfileManager::GetActiveDeviceProfileFragmentByTag
          (UDeviceProfileManager *this,FName *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  FSelectedFragmentProperties *pFVar4;
  undefined1 local_res18 [8];
  
  iVar1 = PlatformFragmentsSelected.ArrayNum;
  pFVar4 = (FSelectedFragmentProperties *)
           (PlatformFragmentsSelected.AllocatorInstance.Data + (longlong)iVar1 * 0x20);
  uVar2 = PlatformFragmentsSelected._8_8_;
  FVar3.Data = PlatformFragmentsSelected.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar2 != iVar1) {
      `TCheckedPointerIterator<FSelectedFragmentProperties,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
      uVar2 = PlatformFragmentsSelected._8_8_;
    }
    if ((FSelectedFragmentProperties *)FVar3.Data == pFVar4) break;
    if (((FSelectedFragmentProperties *)FVar3.Data)->Tag == *param_1) {
      return (FSelectedFragmentProperties *)FVar3.Data;
    }
    FVar3.Data = FVar3.Data + 0x20;
  }
  return (FSelectedFragmentProperties *)0x0;
}

// GetActiveDeviceProfileMatchedFragmentsString @ 147ae29f0

FString * __thiscall
UDeviceProfileManager::GetActiveDeviceProfileMatchedFragmentsString
          (UDeviceProfileManager *this,FString *__return_storage_ptr__,bool param_1,bool param_2,
          bool param_3)

{
  FragmentPropertyArrayToFragmentString
            (__return_storage_ptr__,&PlatformFragmentsSelected,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetActiveDeviceProfileName @ 147ae2a20

FString * __thiscall
UDeviceProfileManager::GetActiveDeviceProfileName
          (UDeviceProfileManager *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  if (this->ActiveDeviceProfile != (UDeviceProfile *)0x0) {
    local_res8[0] = (FName)this->ActiveDeviceProfile->_padding_;
    ::FName::ToString(local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  GetPlatformDeviceProfileName(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetActiveProfile @ 147ae2a70

UDeviceProfile * __thiscall UDeviceProfileManager::GetActiveProfile(UDeviceProfileManager *this)

{
  return this->ActiveDeviceProfile;
}

// GetActiveProfileName @ 147ae2a80

FString * __cdecl UDeviceProfileManager::GetActiveProfileName(FString *__return_storage_ptr__)

{
  GetPlatformDeviceProfileName(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAllPossibleParentProfiles @ 147ae2bc0

void __thiscall
UDeviceProfileManager::GetAllPossibleParentProfiles
          (UDeviceProfileManager *this,UDeviceProfile *param_1,
          TArray<UDeviceProfile_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TObjectPtr<UDeviceProfile>_u_0 *pTVar1;
  int iVar2;
  int iVar3;
  TObjectPtr<UDeviceProfile>_u_0 *pTVar4;
  code *pcVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  TObjectPtr<UDeviceProfile>_u_0 TVar9;
  TObjectPtr<UDeviceProfile>_u_0 *pTVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  FName local_res20;
  TObjectPtr<UDeviceProfile>_u_0 local_68;
  FString local_60;
  FString local_50;
  
  pTVar10 = (TObjectPtr<UDeviceProfile>_u_0 *)(this->Profiles).AllocatorInstance.Data;
  iVar2 = (this->Profiles).ArrayNum;
  pTVar1 = pTVar10 + iVar2;
  do {
    if ((this->Profiles).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDeviceProfile>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pTVar10 == pTVar1) {
      return;
    }
    TVar9 = (TObjectPtr<UDeviceProfile>_u_0)pTVar10->DebugPtr;
    if (TVar9.DebugPtr == (UDeviceProfile *)0x0) {
      pFVar7 = GetTypeName<UDeviceProfile>(&local_50);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar8);
    }
    iVar6 = (param_1->DeviceType).Data.ArrayNum;
    iVar3 = ((TVar9.DebugPtr)->DeviceType).Data.ArrayNum;
    local_68 = TVar9;
    if (iVar3 == iVar6) {
      if (1 < iVar3) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)((TVar9.DebugPtr)->DeviceType).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->DeviceType).Data.AllocatorInstance.Data);
        bVar11 = iVar6 == 0;
        goto LAB_147ae2c4f;
      }
LAB_147ae2c5a:
      TVar9 = local_68;
      if (local_68.DebugPtr != param_1) {
        do {
          local_res20 = (FName)param_1->_padding_;
          ::FName::ToString(&local_res20,&local_60);
          iVar6 = ((TVar9.DebugPtr)->BaseProfileName).Data.ArrayNum;
          if (iVar6 == local_60.Data.ArrayNum) {
            if (iVar6 < 2) {
              bVar11 = true;
            }
            else {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)
                                 ((TVar9.DebugPtr)->BaseProfileName).Data.AllocatorInstance.Data,
                                 (wchar_t *)local_60.Data.AllocatorInstance.Data);
              bVar11 = iVar6 == 0;
            }
          }
          else {
            bVar11 = iVar6 + local_60.Data.ArrayNum == 1;
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (bVar11) goto LAB_147ae2d6f;
          TVar9 = (TObjectPtr<UDeviceProfile>_u_0)((TVar9.DebugPtr)->Parent).field0_0x0.DebugPtr;
        } while (TVar9.DebugPtr != (UDeviceProfile *)0x0);
        pTVar4 = (TObjectPtr<UDeviceProfile>_u_0 *)(param_2->AllocatorInstance).Data;
        if ((pTVar4 <= &local_68) && (&local_68 < pTVar4 + param_2->ArrayMax)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(TObjectPtr<UDeviceProfile>_u_0 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_68;
      }
    }
    else {
      bVar11 = iVar3 + iVar6 == 1;
LAB_147ae2c4f:
      if (bVar11) goto LAB_147ae2c5a;
    }
LAB_147ae2d6f:
    pTVar10 = pTVar10 + 1;
  } while( true );
}

// GetAllReferencedDeviceProfileCVars @ 147ae2e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
* __cdecl UDeviceProfileManager::GetAllReferencedDeviceProfileCVars
                    (TMap<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                     *__return_storage_ptr__,UDeviceProfile *param_1)

{
  undefined8 *puVar1;
  FName FVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  void *pvVar7;
  bool bVar8;
  FName *pFVar9;
  FConfigCacheIni *pFVar10;
  TMap<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
  *pTVar11;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  undefined1 auStackY_338 [32];
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  int local_2f4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2f0;
  FString local_2e0;
  uint local_2d0;
  uint local_2cc;
  FString local_2c8;
  FName local_2b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2b0;
  FString local_2a0;
  FScriptContainerElement *local_290;
  FConfigCacheIni *local_288;
  longlong *local_280;
  uint uStack_278;
  uint uStack_274;
  TBitArray<FDefaultBitArrayAllocator> *local_270;
  undefined4 uStack_268;
  uint uStack_264;
  uint local_260;
  undefined4 uStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  int local_250;
  int local_24c;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  FName local_228;
  FScriptContainerElement *local_220;
  TKeyInitializer<FName_&&> local_218;
  FName local_210;
  FName local_208;
  longlong *local_200;
  uint uStack_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint local_1e0;
  uint uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  longlong *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FSparseArrayAllocationInfo local_140;
  FString local_130;
  FName local_120;
  FName local_118 [4];
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  if ((param_1->DeviceType).Data.ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(param_1->DeviceType).Data.AllocatorInstance.Data;
  }
  pFVar9 = ::FName::FName(&local_120,pwVar16);
  pFVar10 = FConfigCacheIni::ForPlatform(*pFVar9);
  local_208 = (FName)param_1->_padding_;
  local_288 = pFVar10;
  ::FName::ToString(&local_208,&local_170);
  GatherDeviceProfileCVars
            ((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              *)local_98,&local_170,DPM_CacheValuesIgnoreMatchingRules);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  local_210 = (FName)param_1->_padding_;
  ::FName::ToString(&local_210,&local_130);
  FindAllReferencedFragmentsFromMatchedRules(&local_2b0,&local_130,pFVar10);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  uVar20 = local_70;
  uStack_278 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  uStack_274 = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  local_260 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uStack_264 = local_260;
  if (local_70 != 0) {
    puVar21 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar21 = local_78;
    }
    uVar23 = *puVar21;
    local_260 = 0;
    uStack_278 = 0;
    while (uVar23 == 0) {
      lVar15 = (longlong)(int)uStack_278;
      local_260 = local_260 + 0x20;
      uStack_278 = uStack_278 + 1;
      uStack_264 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_278)
      goto LAB_147ae2f90;
      uVar23 = puVar21[lVar15 + 1];
    }
    uStack_274 = -uVar23 & uVar23;
    uVar13 = (ulonglong)uStack_274 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_250 = (int)lVar15;
    uStack_264 = (local_260 - 1) + local_250;
    if ((int)local_70 < (int)uStack_264) {
      uStack_264 = local_70;
    }
  }
LAB_147ae2f90:
  local_280 = (longlong *)local_98;
  uStack_25c = local_f4;
  local_270 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_258 = local_98._8_4_ - local_64;
  uVar23 = local_70 & 0xffffffe0;
  TStack_1c8._padding_ = CONCAT44(uStack_274,uStack_278);
  uStack_268 = 0xffffffff;
  TStack_1c8.CurrentBitIndex = uStack_264;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_70 >> 5;
  TStack_1c8._28_4_ = local_f4;
  TStack_1c8.BaseBitIndex = local_260;
  uStack_1a8 = CONCAT44(uStack_254,iStack_258);
  bVar14 = (byte)local_70;
  local_1d0 = local_280;
  TStack_1c8.Array = local_270;
  if (((int)local_70 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TMap<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
               *)(*pcVar3)();
    return pTVar11;
  }
  if (uVar20 != local_70) {
    puVar21 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar21 = local_78;
    }
    uVar20 = -1 << (bVar14 & 0x1f) & puVar21[iVar18];
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar18;
      uVar23 = uVar23 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_147ae30c0;
      uVar20 = puVar21[lVar15 + 1];
    }
    uVar13 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_24c = (int)lVar15;
    uVar20 = (uVar23 - 1) + local_24c;
    if ((int)local_70 < (int)uVar20) {
      uVar20 = local_70;
    }
  }
LAB_147ae30c0:
  while( true ) {
    plVar6 = local_1d0;
    if ((int)local_1d0[1] - *(int *)((longlong)local_1d0 + 0x34) != (int)uStack_1a8) {
      local_2f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f8);
    }
    if (((TStack_1c8.CurrentBitIndex == uVar20) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar6 == (longlong *)local_98)) break;
    pFVar9 = (FName *)((longlong)TStack_1c8.CurrentBitIndex * 0x20 + *plVar6);
    FVar2 = *pFVar9;
    uVar23 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    pTVar12 = TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                          *)__return_storage_ptr__,uVar23 + FVar2.Number,pFVar9);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (pTVar12,(FString *)local_248,(bool *)(pFVar9 + 1));
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  }
  uVar13 = (ulonglong)local_2b0.ArrayNum;
  local_238._8_8_ = local_2b0.AllocatorInstance.Data + uVar13 * 0x10;
  local_2cc = local_2b0.ArrayNum;
  pFVar10 = local_288;
  FVar22.Data = local_2b0.AllocatorInstance.Data;
  do {
    uVar4 = local_238._8_8_;
    local_290 = FVar22.Data;
    if (local_2b0.ArrayNum != (uint)uVar13) {
      local_2f7 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2f7)
      ;
    }
    if (FVar22.Data == (FScriptContainerElement *)uVar4) {
      DestructItems<FString,int>((FString *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum);
      if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.AllocatorInstance.Data);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return __return_storage_ptr__;
    }
    local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f0.ArrayNum = 0;
    local_2f0.ArrayMax = 0;
    ::FString::FString(&local_160,L"CVars");
    GetFragmentCVars((FString *)FVar22.Data,&local_160,&local_2f0,pFVar10);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    uVar13 = (ulonglong)local_2f0.ArrayNum;
    local_220 = local_2f0.AllocatorInstance.Data + uVar13 * 0x10;
    local_2d0 = local_2f0.ArrayNum;
    FVar22.Data = local_2f0.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_220;
      if (local_2f0.ArrayNum != (int)uVar13) {
        local_2f6 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2f6);
      }
      if (FVar22.Data == pFVar5) break;
      local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0.Data.ArrayNum = 0;
      local_2e0.Data.ArrayMax = 0;
      local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.Data.ArrayNum = 0;
      local_2c8.Data.ArrayMax = 0;
      ::FString::FString(&local_150,L"=");
      bVar8 = ::FString::Split((FString *)FVar22.Data,&local_150,&local_2e0,&local_2c8);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        bVar8 = ::FString::StartsWith(&local_2e0,L"sg.",3,IgnoreCase);
        _Src.Data = local_2c8.Data.AllocatorInstance.Data;
        uVar20 = 0;
        if (bVar8) {
          lVar15 = (longlong)local_2c8.Data.ArrayNum;
          local_e8._0_8_ = 0;
          local_e8._8_8_ = 0;
          local_c8 = (uint *)0x0;
          local_c0 = 0;
          local_bc = 0x80;
          local_b8 = 0xffffffff;
          local_b4 = 0;
          local_a8 = (void *)0x0;
          local_a0 = 0;
          local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2a0.Data.ArrayNum = local_2c8.Data.ArrayNum;
          if (local_2c8.Data.ArrayNum == 0) {
            local_2a0.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_2c8.Data.ArrayNum,0,(ForAnyElementType *)&local_2a0,
                       local_2c8.Data.ArrayNum,&local_2a0.Data.ArrayMax);
            memcpy(local_2a0.Data.AllocatorInstance.Data,_Src.Data,lVar15 * 2);
          }
          ExpandScalabilityCVar
                    (pFVar10,&local_2e0,&local_2a0,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_e8,true);
          uVar23 = local_c0;
          uStack_1f4 = 1;
          uStack_1e4 = uVar20;
          local_1e0 = uVar20;
          if (local_c0 != 0) {
            puVar21 = (uint *)(local_e8 + 0x10);
            if (local_c8 != (uint *)0x0) {
              puVar21 = local_c8;
            }
            uVar19 = *puVar21;
            local_1e0 = 0;
            uVar20 = 0;
            while (uVar19 == 0) {
              lVar15 = (longlong)(int)uVar20;
              local_1e0 = local_1e0 + 0x20;
              uVar20 = uVar20 + 1;
              uStack_1e4 = local_c0;
              if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
              goto LAB_147ae33f0;
              uVar19 = puVar21[lVar15 + 1];
            }
            uStack_1f4 = -uVar19 & uVar19;
            uVar13 = (ulonglong)uStack_1f4 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_248._4_4_ = (undefined4)lVar15;
            uStack_1e4 = (local_1e0 - 1) + local_248._4_4_;
            if ((int)local_c0 < (int)uStack_1e4) {
              uStack_1e4 = local_c0;
            }
          }
LAB_147ae33f0:
          local_200 = (longlong *)local_e8;
          uStack_1dc = uStack_264;
          local_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
          uVar19 = local_c0 & 0xffffffe0;
          iStack_1d8 = local_e8._8_4_ - local_b4;
          TStack_198._padding_ = CONCAT44(uStack_1f4,uVar20);
          uStack_1e8 = 0xffffffff;
          TStack_198.CurrentBitIndex = uStack_1e4;
          TStack_198.UnvisitedBitMask = 0xffffffff;
          iVar18 = (int)local_c0 >> 5;
          TStack_198._28_4_ = uStack_264;
          TStack_198.BaseBitIndex = local_1e0;
          uStack_178 = CONCAT44(uStack_1d4,iStack_1d8);
          bVar14 = (byte)local_c0;
          uStack_1f8 = uVar20;
          local_1a0 = local_200;
          TStack_198.Array = local_1f0;
          if (((int)local_c0 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TMap<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                       *)(*pcVar3)();
            return pTVar11;
          }
          if (uVar23 != local_c0) {
            puVar21 = (uint *)(local_e8 + 0x10);
            if (local_c8 != (uint *)0x0) {
              puVar21 = local_c8;
            }
            uVar20 = -1 << (bVar14 & 0x1f) & puVar21[iVar18];
            while (uVar20 == 0) {
              lVar15 = (longlong)iVar18;
              uVar19 = uVar19 + 0x20;
              iVar18 = iVar18 + 1;
              uVar23 = local_c0;
              if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
              goto LAB_147ae3510;
              uVar20 = puVar21[lVar15 + 1];
            }
            uVar13 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_248._8_4_ = (undefined4)lVar15;
            uVar23 = (uVar19 - 1) + local_248._8_4_;
            if ((int)local_c0 < (int)uVar23) {
              uVar23 = local_c0;
            }
          }
LAB_147ae3510:
          while( true ) {
            plVar6 = local_1a0;
            if ((int)local_1a0[1] - *(int *)((longlong)local_1a0 + 0x34) != (int)uStack_178) {
              local_2f5 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f5);
            }
            if (((TStack_198.CurrentBitIndex == uVar23) &&
                (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
               (plVar6 == (longlong *)local_e8)) break;
            lVar15 = *plVar6;
            puVar1 = (undefined8 *)(lVar15 + (longlong)TStack_198.CurrentBitIndex * 0x28);
            if (*(int *)(lVar15 + 8 + (longlong)TStack_198.CurrentBitIndex * 0x28) == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)*puVar1;
            }
            ::FName::FName(&local_2b8,pwVar16);
            FVar2 = local_2b8;
            uVar20 = ::GetTypeHash(local_2b8.ComparisonIndex.Value);
            uVar20 = FVar2.Number + uVar20;
            if (*(int *)&__return_storage_ptr__->field_0x8 !=
                *(int *)&__return_storage_ptr__->field_0x34) {
              puVar17 = &__return_storage_ptr__->field_0x38;
              if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
                puVar17 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
              }
              uVar19 = *(uint *)(puVar17 +
                                (ulonglong)
                                (*(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar20) * 4);
              if (uVar19 != 0xffffffff) {
                do {
                  pFVar9 = (FName *)((longlong)(int)uVar19 * 0x60 +
                                    *(longlong *)__return_storage_ptr__);
                  if (*pFVar9 == local_2b8) {
                    if (pFVar9 != (FName *)0x0) goto LAB_147ae3683;
                    break;
                  }
                  uVar19 = pFVar9[0xb].ComparisonIndex.Value;
                } while (uVar19 != 0xffffffff);
              }
            }
            local_218.Key = &local_2b8;
            TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)__return_storage_ptr__,&local_140);
            pvVar7 = local_140.Pointer;
            if (local_140.Pointer !=
                (TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                 *)0x0) {
              TKeyInitializer<FName_&&>::
              operator<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                        (&local_218,local_140.Pointer);
              *(undefined4 *)((longlong)pvVar7 + 0x58) = 0xffffffff;
            }
            local_2f4 = local_140.Index;
            bVar8 = TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                    ::TryReplaceExisting
                              ((TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                                *)__return_storage_ptr__,uVar20,pvVar7,&local_2f4,(bool *)0x0);
            lVar15 = (longlong)local_2f4;
            if (!bVar8) {
              TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::RehashOrLink((TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                              *)__return_storage_ptr__,uVar20,pvVar7,local_2f4);
            }
            pFVar9 = (FName *)(lVar15 * 0x60 + *(longlong *)__return_storage_ptr__);
LAB_147ae3683:
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar9 + 1)
                       ,(FString *)(local_248 + 0xc),(bool *)(puVar1 + 2));
            TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
          }
          local_a0 = 0;
          if (local_a8 != (void *)0x0) {
            FMemory::Free(local_a8);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8);
          pFVar10 = local_288;
        }
        else {
          uVar23 = local_2e0.Data.ArrayNum - 1;
          if (local_2e0.Data.ArrayNum == 0) {
            uVar23 = uVar20;
          }
          pFVar9 = ::FName::FName(local_118,uVar23,(wchar_t *)local_2e0.Data.AllocatorInstance.Data,
                                  FNAME_Add);
          FVar2 = *pFVar9;
          local_228 = FVar2;
          uVar20 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          pTVar12 = TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                    ::FindOrAddImpl<FName>
                              ((TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                                *)__return_storage_ptr__,uVar20 + FVar2.Number,&local_228);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (pTVar12,(FString *)local_238,(bool *)&local_2c8);
        }
      }
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
      FVar22.Data = FVar22.Data + 0x10;
      uVar13 = (ulonglong)local_2d0;
    }
    DestructItems<FString,int>((FString *)local_2f0.AllocatorInstance.Data,local_2f0.ArrayNum);
    if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.AllocatorInstance.Data);
    }
    FVar22.Data = local_290 + 0x10;
    uVar13 = (ulonglong)local_2cc;
  } while( true );
}

// GetDPChain @ 147ae5290

/* WARNING: Removing unreachable block (ram,0x000147ae56fa) */
/* WARNING: Removing unreachable block (ram,0x000147ae5a51) */
/* WARNING: Removing unreachable block (ram,0x000147ae586b) */

TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> * __thiscall
UDeviceProfileManager::GetDPChain
          (UDeviceProfileManager *this,
          TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1,FConfigCacheIni *param_2)

{
  FName *pFVar1;
  FName *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *pTVar8;
  FConfigSection *pFVar9;
  ulonglong uVar10;
  UClass *pUVar11;
  int *piVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  undefined1 local_res10 [8];
  FString *local_res18;
  FConfigCacheIni *local_res20;
  undefined1 local_168 [8];
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  FString local_150;
  uint local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  TArray<FSelectedFragmentProperties,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  longlong local_b8;
  longlong local_b0;
  FString local_a8;
  FName local_98;
  FName local_90;
  FScriptContainerElement *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_res18 = param_1;
  local_res20 = param_2;
  if ((*piVar12 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pUVar11 = UDeviceProfile::StaticClass();
    local_98 = (FName)pUVar11->_padding_;
    ::FName::ToString(&local_98,&local_70);
    ::FString::PrintfImpl(&local_80,L" %s");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar16.Data = local_80.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&DPSectionSuffix,(wchar_t *)FVar16.Data);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    atexit(`UDeviceProfileManager::GetDPChain'::__l2::
           _dynamic_atexit_destructor_for__DPSectionSuffix__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar12 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pUVar11 = Z_Construct_UClass_UDeviceProfileFragment_NoRegister();
    local_90 = (FName)pUVar11->_padding_;
    ::FName::ToString(&local_90,&local_50);
    ::FString::PrintfImpl(&local_60,L" %s");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar16.Data = local_60.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&FragmentSectionSuffix,(wchar_t *)FVar16.Data);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    atexit(`UDeviceProfileManager::GetDPChain'::__l2::
           _dynamic_atexit_destructor_for__FragmentSectionSuffix__);
    _Init_thread_footer(&::_TSS1);
  }
  local_150.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar13 = (longlong)local_150.Data.ArrayNum;
  pFVar14 = (param_1->Data).AllocatorInstance.Data;
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_150.Data.ArrayNum == 0) {
    local_150.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_150.Data.ArrayNum,0,(ForAnyElementType *)&local_150,local_150.Data.ArrayNum
               ,&local_150.Data.ArrayMax);
    memcpy(local_150.Data.AllocatorInstance.Data,pFVar14,lVar13 * 2);
  }
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  local_154 = 0;
  if (1 < local_150.Data.ArrayNum) {
    do {
      ::FString::ConcatFF(&local_a8,&local_150,&DPSectionSuffix);
      if (((local_160.Data <= (FScriptContainerElement *)&local_150) &&
          ((FScriptContainerElement *)&local_150 < local_160.Data + (longlong)local_154 * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      if (local_158 == local_154) {
        local_158 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_160,&local_154);
      }
      FVar16.Data = local_150.Data.AllocatorInstance.Data;
      lVar13 = (longlong)local_158;
      local_158 = local_158 + 1;
      pFVar14 = local_160.Data + lVar13 * 0x10;
      *(FScriptContainerElement **)pFVar14 = (FScriptContainerElement *)0x0;
      lVar13 = (longlong)local_150.Data.ArrayNum;
      *(int *)(pFVar14 + 8) = local_150.Data.ArrayNum;
      if (local_150.Data.ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_150.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                   local_150.Data.ArrayNum,(int *)(pFVar14 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar14,FVar16.Data,lVar13 * 2);
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar16.Data = local_a8.Data.AllocatorInstance.Data;
      }
      pFVar9 = FConfigCacheIni::GetSection(param_2,(wchar_t *)FVar16.Data,false,&GDeviceProfilesIni)
      ;
      if (pFVar9 == (FConfigSection *)0x0) {
LAB_147ae5522:
        bVar4 = true;
      }
      else {
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar16.Data = local_a8.Data.AllocatorInstance.Data;
        }
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
        FConfigCacheIni::GetString
                  (param_2,(wchar_t *)FVar16.Data,L"BaseProfileName",&local_c8,&GDeviceProfilesIni);
        iVar6 = local_c8.Data.ArrayNum + -1;
        if (local_c8.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AssignRange(&local_150,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar6);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_150.Data.ArrayNum < 2) goto LAB_147ae5522;
        bVar4 = false;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    } while (!bVar4);
  }
  local_140 = local_158 - 1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (-1 < (int)local_140) {
    local_b8 = (longlong)(int)local_140;
    lVar13 = local_b8 << 4;
    do {
      uVar15 = 0;
      if ((int)local_140 < local_158) {
        uVar15 = ~local_140 >> 0x1f;
      }
      local_b0 = lVar13;
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      local_88 = local_160.Data + lVar13;
      ::FString::ConcatFF(&local_e8,(FString *)local_88,&DPSectionSuffix);
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar16.Data = local_e8.Data.AllocatorInstance.Data;
      }
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      FConfigCacheIni::GetArray
                (param_2,(wchar_t *)FVar16.Data,L"FragmentIncludes",&local_128,&GDeviceProfilesIni);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar16.Data = local_e8.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::GetArray
                (param_2,(wchar_t *)FVar16.Data,L"OverrideFragmentIncludes",&local_138,
                 &GDeviceProfilesIni);
      iVar6 = local_128.ArrayNum;
      uVar10 = (ulonglong)local_128.ArrayNum;
      pFVar14 = local_128.AllocatorInstance.Data + uVar10 * 0x10;
      FVar16.Data = local_128.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar10 != iVar6) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar16.Data == pFVar14) break;
        ::FString::ConcatFF(&local_108,(FString *)FVar16.Data,&FragmentSectionSuffix);
        if (*(int *)(FVar16.Data + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)FVar16.Data;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x18
                          );
        ::FName::FName(pFVar1,pwVar17);
        pFVar1[1].ComparisonIndex = 0;
        pFVar1[1].Number = 0;
        pFVar1[1] = (FName)local_108.Data.AllocatorInstance.Data;
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar1[2].ComparisonIndex.Value = local_108.Data.ArrayNum;
        pFVar1[2].Number = local_108.Data.ArrayMax;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        uVar10 = local_128._8_8_ & 0xffffffff;
        FVar16.Data = FVar16.Data + 0x10;
      }
      if (*(int *)(local_88 + 8) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)local_88;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      this_00 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x18)
      ;
      ::FName::FName(this_00,pwVar17);
      iVar6 = local_e8.Data.ArrayNum;
      FVar16.Data = local_e8.Data.AllocatorInstance.Data;
      pFVar1 = this_00 + 1;
      pFVar1->ComparisonIndex = 0;
      pFVar1->Number = 0;
      this_00[2].ComparisonIndex.Value = local_e8.Data.ArrayNum;
      if (local_e8.Data.ArrayNum == 0) {
        this_00[2].Number = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_e8.Data.ArrayNum,
                   (int *)&this_00[2].Number);
        memcpy((void *)*pFVar1,FVar16.Data,(longlong)iVar6 * 2);
      }
      iVar6 = local_138.ArrayNum;
      pFVar14 = local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 0x10;
      FVar16.Data = local_138.AllocatorInstance.Data;
      while( true ) {
        if (local_138.ArrayNum != iVar6) {
          local_168[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_168);
        }
        if (FVar16.Data == pFVar14) break;
        ::FString::ConcatFF(&local_f8,(FString *)FVar16.Data,&FragmentSectionSuffix);
        if (*(int *)(FVar16.Data + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)FVar16.Data;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x18
                          );
        ::FName::FName(pFVar1,pwVar17);
        pFVar1[1].ComparisonIndex = 0;
        pFVar1[1].Number = 0;
        pFVar1[1] = (FName)local_f8.Data.AllocatorInstance.Data;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar1[2].ComparisonIndex.Value = local_f8.Data.ArrayNum;
        pFVar1[2].Number = local_f8.Data.ArrayMax;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        FVar16.Data = FVar16.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      local_140 = local_140 - 1;
      local_b8 = local_b8 + -1;
      lVar13 = local_b0 + -0x10;
      param_2 = local_res20;
      local_b0 = lVar13;
    } while (-1 < (int)local_140);
  }
  FindMatchingFragments(&local_118,local_res18,param_2);
  iVar6 = local_118.ArrayNum;
  uVar15 = iVar6 - 1;
  if (-1 < (int)uVar15) {
    lVar13 = (longlong)(int)uVar15 << 5;
    FVar16.Data = local_d8.Data.AllocatorInstance.Data;
    uVar3 = local_d8.Data._8_8_;
    do {
      local_d8.Data._8_8_ = uVar3;
      local_d8.Data.AllocatorInstance.Data = FVar16.Data;
      uVar7 = 0;
      if ((int)uVar15 < local_118.ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      ::FString::ConcatFF(&local_d8,(FString *)(local_118.AllocatorInstance.Data + lVar13 + 8),
                          &FragmentSectionSuffix);
      uVar7 = 0;
      if ((int)uVar15 < local_118.ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      if (*(int *)(local_118.AllocatorInstance.Data + lVar13 + 0x10) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)(local_118.AllocatorInstance.Data + lVar13 + 8);
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
      ::FName::FName(pFVar1,pwVar17);
      pFVar1[1].ComparisonIndex = 0;
      pFVar1[1].Number = 0;
      pFVar1[1] = (FName)local_d8.Data.AllocatorInstance.Data;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar16.Data = local_d8.Data.AllocatorInstance.Data;
      pFVar1[2].ComparisonIndex.Value = local_d8.Data.ArrayNum;
      pFVar1[2].Number = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      uVar3 = local_d8.Data._8_8_;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = local_118.ArrayNum;
      lVar13 = lVar13 + -0x20;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  DestructItems<FSelectedFragmentProperties,int>
            ((FSelectedFragmentProperties *)local_118.AllocatorInstance.Data,iVar6);
  if ((FSelectedFragmentProperties *)local_118.AllocatorInstance.Data !=
      (FSelectedFragmentProperties *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_160.Data,local_158);
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDeviceProfileSelectorModule @ 147ae64f0

IDeviceProfileSelectorModule * __cdecl UDeviceProfileManager::GetDeviceProfileSelectorModule(void)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this;
  IDeviceProfileSelectorModule *pIVar4;
  ForAnyElementType FVar5;
  FName local_res8 [4];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"DeviceProfileManager",L"DeviceProfileSelectionModule",&local_18,
                     &GEngineIni);
  if (bVar2) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(local_res8,(wchar_t *)FVar5.Data);
    FVar1 = *pFVar3;
    this = FModuleManager::Get();
    pIVar4 = (IDeviceProfileSelectorModule *)FModuleManager::LoadModule(this,FVar1,None);
    if (pIVar4 != (IDeviceProfileSelectorModule *)0x0) goto LAB_147ae6573;
  }
  pIVar4 = (IDeviceProfileSelectorModule *)0x0;
LAB_147ae6573:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pIVar4;
}

// GetLoadableProfileNames @ 147ae8b20

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UDeviceProfileManager::GetLoadableProfileNames
          (UDeviceProfileManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FConfigFile *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  uint local_res10 [2];
  int local_res18;
  int local_res20;
  FString local_f8;
  FString local_e8;
  FConfigFile *local_d8;
  FConfigFile *local_d0;
  int iStack_c8;
  uint uStack_c4;
  longlong *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  int local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  FUObjectCppClassStaticFunctions local_a0;
  FName local_98;
  FString local_90;
  FConfigFile *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  int iStack_58;
  undefined4 uStack_54;
  FString local_50;
  
  iVar16 = 0;
  local_res10[0] = 0;
  if (param_1 != (FName)0x0) {
    FConfigCacheIni::ForPlatform(param_1);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = FConfigCacheIni::Find(GConfig,&GDeviceProfilesIni);
  local_d8 = pFVar6;
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  uVar14 = (uint)pFVar6->_padding_;
  local_c0 = &pFVar6->_padding_;
  local_b0 = 0;
  uStack_c4 = 1;
  uStack_b4 = 0;
  iStack_c8 = 0;
  if (uVar14 != 0) {
    plVar15 = (longlong *)pFVar6->_padding_;
    if ((longlong *)pFVar6->_padding_ == (longlong *)0x0) {
      plVar15 = local_c0;
    }
    uVar13 = (uint)*plVar15;
    iStack_c8 = iVar16;
    while (uVar13 == 0) {
      lVar8 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      uStack_b4 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_c8)
      goto LAB_147ae8c00;
      uVar13 = *(uint *)((longlong)plVar15 + lVar8 * 4 + 4);
    }
    uStack_c4 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_c4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uStack_b4 = local_b0 + -1 + local_res18;
    if ((int)uVar14 < (int)uStack_b4) {
      uStack_b4 = uVar14;
    }
  }
LAB_147ae8c00:
  iStack_a8 = (int)pFVar6->_padding_ - *(int *)((longlong)&pFVar6->_padding_ + 4);
  TStack_78._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uStack_b8 = 0xffffffff;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  uStack_54 = uStack_a4;
  local_d0 = pFVar6;
  uStack_ac = uStack_b4;
  local_80 = pFVar6;
  TStack_78.CurrentBitIndex = uStack_b4;
  TStack_78.BaseBitIndex = local_b0;
  TStack_78._28_4_ = uStack_b4;
  iStack_58 = iStack_a8;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  uVar14 = (uint)pFVar6->_padding_;
  iVar11 = (int)uVar14 >> 5;
  uVar13 = uVar14 & 0xffffffe0;
  if ((int)uVar14 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar2 = (uint)local_d8->_padding_;
  if (uVar14 != uVar2) {
    plVar15 = (longlong *)local_d8->_padding_;
    if ((longlong *)local_d8->_padding_ == (longlong *)0x0) {
      plVar15 = &local_d8->_padding_;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)plVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar8 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147ae8d20;
      uVar14 = *(uint *)((longlong)plVar15 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar14 = local_res20 + -1 + uVar13;
    if ((int)uVar2 < (int)uVar14) {
      uVar14 = uVar2;
    }
  }
LAB_147ae8d20:
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  do {
    pFVar6 = local_80;
    if ((int)local_80->_padding_ - *(int *)((longlong)&local_80->_padding_ + 4) != iStack_58) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar8 = (longlong)TStack_78.CurrentBitIndex;
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)&local_d8->_padding_)) &&
       (pFVar6 == local_d8)) {
      return __return_storage_ptr__;
    }
    lVar3 = pFVar6->_padding_;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    ::FString::FString(&local_50," ");
    bVar5 = ::FString::Split((FString *)(lVar8 * 0x110 + lVar3),&local_50,&local_f8,&local_e8);
    if (bVar5) {
      if (Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton == (UClass *)0x0) {
        local_a0.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/Engine",L"DeviceProfile",
                   &Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton,
                   UDeviceProfile::StaticRegisterNativesUDeviceProfile,0x188,8,
                   CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"DeviceProfiles",
                   InternalConstructor<UDeviceProfile>,
                   InternalVTableHelperCtorCaller<UDeviceProfile>,&local_a0,
                   UTextureLODSettings::StaticClass,UObject::StaticClass);
      }
      local_98 = (FName)(Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton)->_padding_;
      iVar16 = 2;
      ::FName::ToString(&local_98,&local_90);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_90.Data.ArrayNum != 0) {
        FVar10.Data = local_90.Data.AllocatorInstance.Data;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar9.Data = local_e8.Data.AllocatorInstance.Data;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data);
      if (iVar11 != 0) goto LAB_147ae8ea4;
      bVar5 = true;
    }
    else {
LAB_147ae8ea4:
      bVar5 = false;
    }
    if ((iVar16 != 0) &&
       (iVar16 = 0, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar12 <= (FScriptContainerElement *)&local_f8) &&
         ((FScriptContainerElement *)&local_f8 <
          pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == __return_storage_ptr__->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      FVar10.Data = local_f8.Data.AllocatorInstance.Data;
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      *(undefined8 *)&pFVar12->field_0x0 = 0;
      lVar8 = (longlong)local_f8.Data.ArrayNum;
      *(int *)&pFVar12[8].field_0x0 = local_f8.Data.ArrayNum;
      if (local_f8.Data.ArrayNum == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_f8.Data.ArrayNum,
                   (int *)(pFVar12 + 0xc));
        memcpy(*(void **)&pFVar12->field_0x0,FVar10.Data,lVar8 * 2);
      }
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// GetPlatformDeviceProfileName @ 147aeaaf0

FString * __cdecl
UDeviceProfileManager::GetPlatformDeviceProfileName(FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  TConsoleVariableData<FString> *pTVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  IDeviceProfileSelectorModule *pIVar7;
  undefined8 *puVar8;
  longlong lVar9;
  FString local_48;
  FString local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  void *local_18 [2];
  
  ::FString::FString(&local_38,"Windows");
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar5,L"DeviceProfile=",&local_48,true,(wchar_t **)0x0);
  if (!bVar3) {
    pwVar5 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar5,L"DP=",&local_48,true,(wchar_t **)0x0);
    pTVar2 = CVarDeviceProfileOverride.Ref;
    if (!bVar3) {
      bVar3 = IsInParallelGameThread();
      if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = pTVar2->ShadowedValue[0].Data.ArrayNum;
      lVar9 = (longlong)local_20;
      _Src = pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data;
      if (local_20 == 0) {
        local_1c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_20,0,&local_28,local_20,&local_1c);
        memcpy(local_28.Data,_Src,lVar9 * 2);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = local_28.Data;
      iVar4 = local_20 + -1;
      if (local_20 == 0) {
        iVar4 = 0;
      }
      local_48.Data.ArrayMax = local_1c;
      local_48.Data.ArrayNum = local_20;
      if (iVar4 < 1) {
        pIVar7 = GetDeviceProfileSelectorModule();
        if (pIVar7 != (IDeviceProfileSelectorModule *)0x0) {
          puVar8 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0x40))(pIVar7,local_18);
          iVar4 = *(int *)(puVar8 + 1) + -1;
          if (*(int *)(puVar8 + 1) == 0) {
            iVar4 = 0;
          }
          ::FString::AssignRange(&local_38,(wchar_t *)*puVar8,iVar4);
          if (local_18[0] != (void *)0x0) {
            FMemory::Free(local_18[0]);
          }
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      else {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = local_20;
        (__return_storage_ptr__->Data).ArrayMax = local_1c;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPreviewDeviceProfile @ 147aeae20

UDeviceProfile * __thiscall
UDeviceProfileManager::GetPreviewDeviceProfile(UDeviceProfileManager *this)

{
  return this->PreviewDeviceProfile;
}

// GetPrivateStaticClass @ 147aeba10

UClass * __cdecl UDeviceProfileManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeviceProfileManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeviceProfileManager",
               &Z_Registration_Info_UClass_UDeviceProfileManager.InnerSingleton,
               StaticRegisterNativesUDeviceProfileManager,0x100,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"DeviceProfiles",InternalConstructor<UDeviceProfileManager>,
               InternalVTableHelperCtorCaller<UDeviceProfileManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeviceProfileManager.InnerSingleton;
}

// GetProfileConfigFiles @ 147aebd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDeviceProfileManager::GetProfileConfigFiles
          (UDeviceProfileManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  UObject *this_00;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  FString *pFVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  ForAnyElementType *pFVar21;
  uint uVar22;
  ForElementType<unsigned_int> FVar23;
  ulonglong uVar24;
  wchar_t *pwVar25;
  bool bVar26;
  undefined1 auStackY_1b8 [32];
  uint local_170;
  uint uStack_16c;
  uint uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  undefined1 local_14c [20];
  FString local_138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100;
  FSparseArrayAllocationInfo local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  iVar14 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_14c._12_8_ = param_1;
  pUVar10 = UDeviceProfile::StaticClass();
  local_14c._4_8_ = pUVar10->_padding_;
  ::FName::ToString((FName *)(local_14c + 4),&local_138);
  pwVar25 = L"";
  FPaths::SourceConfigDir(&local_d0);
  ::FString::PrintfImpl(&local_118,L"%sDefault%ss.ini");
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_64 == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                       (int *)(local_98 + 0xc));
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
    FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_78;
    }
    uVar8 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar8;
    puVar2 = (uint *)((longlong)FVar23 + (longlong)(iVar7 >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar8 & 0x1f));
    iVar7 = local_68;
  }
  else {
    local_64 = local_64 + -1;
    iVar7 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x18 + 4);
    iVar9 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  local_68 = iVar7;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_e0,iVar9);
  FVar15.Data = local_118.Data.AllocatorInstance.Data;
  if (local_e0.Pointer == (ForAnyElementType *)0x0) {
    pFVar21 = (ForAnyElementType *)0x0;
  }
  else {
    *(FScriptContainerElement **)local_e0.Pointer = (FScriptContainerElement *)0x0;
    piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)local_e0.Pointer + 8))->Data + 4);
    *(int *)&((ForAnyElementType *)((longlong)local_e0.Pointer + 8))->Data = local_118.Data.ArrayNum
    ;
    pFVar21 = local_e0.Pointer;
    if (local_118.Data.ArrayNum == 0) {
      *piVar1 = 0;
      *(undefined4 *)&((ForAnyElementType *)((longlong)local_e0.Pointer + 0x10))->Data = 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_118.Data.ArrayNum,0,local_e0.Pointer,local_118.Data.ArrayNum,piVar1);
      memcpy(*(FScriptContainerElement **)local_e0.Pointer,FVar15.Data,
             (longlong)local_118.Data.ArrayNum * 2);
      *(undefined4 *)&((ForAnyElementType *)((longlong)local_e0.Pointer + 0x10))->Data = 0xffffffff;
    }
  }
  if (*(int *)&pFVar21[1].Data == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)pFVar21->Data;
    iVar14 = *(int *)&pFVar21[1].Data + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar20);
  if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
    FVar15.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar15.Data = local_58.Data;
    }
    iVar14 = *(int *)(FVar15.Data + (ulonglong)(local_50 - 1 & uVar8) * 4);
    pFVar18 = (FScriptContainerElement *)local_98._0_8_;
    while (iVar14 != -1) {
      lVar4 = (longlong)iVar14 * 0x18;
      iVar9 = *(int *)(pFVar18 + lVar4 + 8);
      if (iVar9 == *(int *)&pFVar21[1].Data) {
        if (1 < iVar9) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar18 + lVar4),(wchar_t *)pFVar21->Data);
          bVar26 = iVar9 == 0;
          pFVar18 = (FScriptContainerElement *)local_98._0_8_;
          goto LAB_147aec02b;
        }
LAB_147aec03d:
        if (iVar14 != -1) {
          if (*(void **)(pFVar18 + (longlong)iVar14 * 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar18 + (longlong)iVar14 * 0x18));
          }
          memmove(pFVar18 + (longlong)iVar14 * 0x18,pFVar21,0x10);
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98,local_e0.Index,1);
          local_e0.Index = iVar14;
        }
        if (iVar14 != -1) goto LAB_147aec2f9;
        break;
      }
      bVar26 = iVar9 + *(int *)&pFVar21[1].Data == 1;
LAB_147aec02b:
      if (bVar26) goto LAB_147aec03d;
      iVar14 = *(int *)(pFVar18 + lVar4 + 0x10);
    }
  }
  uVar16 = 0;
  uVar22 = 1;
  uVar17 = local_98._8_4_ - local_64;
  if (3 < uVar17) {
    uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar17 < 1) || ((int)uVar22 <= (int)local_50)) {
    uVar8 = local_50 - 1 & uVar8;
    *(uint *)((longlong)&pFVar21[2].Data + 4) = uVar8;
    FVar15.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar15.Data = local_58.Data;
    }
    uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar8;
    *(undefined4 *)&pFVar21[2].Data = *(undefined4 *)(FVar15.Data + uVar16 * 4);
    *(int *)(FVar15.Data + uVar16 * 4) = local_e0.Index;
    goto LAB_147aec2f9;
  }
  local_50 = uVar22;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar22 != 0) {
    uVar8 = uVar22;
    if (uVar22 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_147aec106;
      }
    }
    else {
LAB_147aec106:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,4);
    }
    if (0 < (int)uVar22) {
      uVar24 = (ulonglong)uVar22;
      uVar19 = uVar16;
      do {
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        uVar11 = uVar19 & (longlong)(int)uVar22 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar15.Data + uVar11 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_50 != 0) {
    local_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_170 = 0;
    uStack_16c = 1;
    uStack_15c = 0;
    uStack_158 = 0;
    if (local_70 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_78;
      }
      uVar8 = *(uint *)FVar23;
      uVar19 = uVar16;
      while (uVar8 == 0) {
        uStack_158 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_158;
        iVar14 = (int)uVar16;
        local_170 = iVar14 + 1;
        uVar16 = (ulonglong)local_170;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_170)
        goto LAB_147aec211;
        uVar8 = ((uint *)((longlong)FVar23 + 4))[iVar14];
      }
      uStack_16c = -uVar8 & uVar8;
      uVar16 = (ulonglong)uStack_16c * 2 + 1;
      lVar4 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_15c = (uStack_158 - 1) + (int)lVar4;
      uVar16 = (ulonglong)uStack_15c;
      if ((int)local_70 < (int)uStack_15c) {
LAB_147aec211:
        uVar16 = (ulonglong)local_70;
        uStack_15c = local_70;
      }
    }
    local_108 = (longlong *)local_98;
    local_100._padding_ = CONCAT44(uStack_16c,local_170);
    local_100.CurrentBitIndex = uStack_15c;
    local_100.UnvisitedBitMask = 0xffffffff;
    local_100._28_4_ = uStack_154;
    local_100.BaseBitIndex = uStack_158;
    if ((int)uVar16 < (int)local_70) {
      do {
        iVar9 = (int)uVar16;
        puVar3 = (undefined8 *)(*local_108 + (longlong)iVar9 * 0x18);
        iVar14 = *(int *)(*local_108 + 8 + (longlong)iVar9 * 0x18);
        if (iVar14 == 0) {
          pwVar20 = L"";
          iVar14 = 0;
        }
        else {
          pwVar20 = (wchar_t *)*puVar3;
          iVar14 = iVar14 + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar20);
        uVar8 = local_50 - 1 & uVar8;
        *(uint *)((longlong)puVar3 + 0x14) = uVar8;
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(FVar15.Data + uVar16 * 4);
        *(int *)(FVar15.Data + uVar16 * 4) = iVar9;
        local_100.UnvisitedBitMask = local_100.UnvisitedBitMask & ~local_100._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_100);
        uVar16 = (ulonglong)(uint)local_100.CurrentBitIndex;
      } while (local_100.CurrentBitIndex < (local_100.Array)->NumBits);
    }
  }
LAB_147aec2f9:
  uVar19 = 0;
  uVar16 = uVar19;
  if (0 < (this->Profiles).ArrayNum) {
    do {
      uVar17 = (uint)uVar19;
      uVar8 = 0;
      if ((int)uVar17 < (this->Profiles).ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(UObject **)((this->Profiles).AllocatorInstance.Data + uVar16);
      if (this_00 == (UObject *)0x0) {
        pFVar12 = GetTypeName<UDeviceProfile>(&local_b0);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar25 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar25);
      }
      pFVar12 = UObject::GetDefaultConfigFilename(this_00,&local_c0);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                 (FString *)local_14c,(bool *)pFVar12);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      uVar19 = (ulonglong)(uVar17 + 1);
      uVar16 = uVar16 + 8;
    } while ((int)(uVar17 + 1) < (this->Profiles).ArrayNum);
  }
  pTVar13 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                       &local_128);
  uVar6 = local_14c._12_8_;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_14c._12_8_ != pTVar13) {
    DestructItems<FString,int>
              ((FString *)((ForAnyElementType *)local_14c._12_8_)->Data,
               *(int *)(local_14c._12_8_ + 8));
    pFVar18 = ((ForAnyElementType *)uVar6)->Data;
    if (pFVar18 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar18);
    }
    ((ForAnyElementType *)uVar6)->Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(uVar6 + 8) = pTVar13->ArrayNum;
    *(int *)(uVar6 + 0xc) = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GetScalabilityCVar @ 147aecdb0

bool __cdecl UDeviceProfileManager::GetScalabilityCVar(FString *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  
  iVar3 = (param_1->Data).ArrayNum;
  _Str = L"";
  if (iVar3 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  iVar3 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&PreviewDeviceProfileScalabilityCVars,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = PreviewDeviceProfileScalabilityCVars._0_8_ + (longlong)iVar3 * 0x28;
    pFVar4 = (FString *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pFVar4 = (FString *)0x0;
    }
    if (pFVar4 != (FString *)0x0) goto LAB_147aece26;
  }
  pFVar4 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&DeviceProfileScalabilityCVars,param_1);
  if (pFVar4 == (FString *)0x0) {
    return false;
  }
LAB_147aece26:
  if ((pFVar4->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  *param_2 = iVar3;
  return true;
}

// GetScalabilityCVar @ 147aece70

bool __cdecl UDeviceProfileManager::GetScalabilityCVar(FString *param_1,float *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  double dVar7;
  
  iVar3 = (param_1->Data).ArrayNum;
  _Str = L"";
  if (iVar3 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  iVar3 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&PreviewDeviceProfileScalabilityCVars,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = PreviewDeviceProfileScalabilityCVars._0_8_ + (longlong)iVar3 * 0x28;
    pFVar4 = (FString *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pFVar4 = (FString *)0x0;
    }
    if (pFVar4 != (FString *)0x0) goto LAB_147aecee6;
  }
  pFVar4 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&DeviceProfileScalabilityCVars,param_1);
  if (pFVar4 == (FString *)0x0) {
    return false;
  }
LAB_147aecee6:
  if ((pFVar4->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  dVar7 = _wtof(_Str);
  *param_2 = (float)dVar7;
  return true;
}

// HandleDeviceProfileOverrideChange @ 147aefea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDeviceProfileManager::HandleDeviceProfileOverrideChange(UDeviceProfileManager *this)

{
  code *pcVar1;
  TConsoleVariableData<FString> *pTVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FConfigFile *this_00;
  ulonglong uVar6;
  UDeviceProfile *pUVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 auStackY_318 [32];
  undefined1 local_2d8 [8];
  FString local_2d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2c0;
  ulonglong local_2b0;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FName local_278;
  FString local_270;
  FString local_260;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_248;
  FConfigFile local_128;
  ulonglong local_38;
  
  pTVar2 = CVarDeviceProfileOverride.Ref;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  bVar11 = false;
  local_2b0 = local_2b0 & 0xffffffff00000000;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.Data.ArrayNum = pTVar2->ShadowedValue[0].Data.ArrayNum;
  lVar8 = (longlong)local_2d0.Data.ArrayNum;
  pFVar10 = pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_2d0.Data.ArrayNum == 0) {
    local_2d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d0.Data.ArrayNum,0,(ForAnyElementType *)&local_2d0,local_2d0.Data.ArrayNum
               ,&local_2d0.Data.ArrayMax);
    memcpy(local_2d0.Data.AllocatorInstance.Data,pFVar10,lVar8 * 2);
  }
  iVar4 = local_2d0.Data.ArrayNum + -1;
  if (local_2d0.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (iVar4 < 1) {
LAB_147aeffef:
    bVar3 = false;
  }
  else {
    local_278 = (FName)this->ActiveDeviceProfile->_padding_;
    ::FName::ToString(&local_278,&local_270);
    if (local_2d0.Data.ArrayNum == local_270.Data.ArrayNum) {
      if (local_2d0.Data.ArrayNum < 2) {
        bVar11 = true;
        goto LAB_147aeffef;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_2d0.Data.AllocatorInstance.Data,
                         (wchar_t *)local_270.Data.AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
    }
    else {
      bVar3 = local_2d0.Data.ArrayNum + local_270.Data.ArrayNum == 1;
    }
    bVar11 = true;
    if (bVar3) goto LAB_147aeffef;
    bVar3 = true;
  }
  if ((bVar11) && (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    local_248._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_248,"Windows",7,Yes);
    ::FString::FString(&local_288,local_248.Ptr);
    if ((void *)local_248._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_248._padding_);
    }
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    local_2c0.ArrayMax = 0;
    FConfigFile::FConfigFile(&local_128);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_288.Data.ArrayNum != 0) {
      FVar9.Data = local_288.Data.AllocatorInstance.Data;
    }
    this_00 = FConfigCacheIni::FindOrLoadPlatformConfig
                        (&local_128,L"DeviceProfiles",(wchar_t *)FVar9.Data);
    FConfigFile::GetArray(this_00,L"DeviceProfiles",L"DeviceProfileNameAndTypes",&local_2c0);
    iVar4 = local_2c0.ArrayNum;
    uVar6 = (ulonglong)local_2c0.ArrayNum;
    bVar3 = false;
    pFVar10 = local_2c0.AllocatorInstance.Data + uVar6 * 0x10;
    FVar9.Data = local_2c0.AllocatorInstance.Data;
    do {
      if ((int)uVar6 != iVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2d8);
      }
      if (FVar9.Data == pFVar10) goto LAB_147af01ca;
      local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_298.Data.ArrayNum = 0;
      local_298.Data.ArrayMax = 0;
      local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a8.Data.ArrayNum = 0;
      local_2a8.Data.ArrayMax = 0;
      ::FString::FString(&local_260,L",");
      ::FString::Split((FString *)FVar9.Data,&local_260,&local_298,&local_2a8);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      if (local_2a8.Data.ArrayNum == local_288.Data.ArrayNum) {
        if (1 < local_2a8.Data.ArrayNum) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_2a8.Data.AllocatorInstance.Data,
                             (wchar_t *)local_288.Data.AllocatorInstance.Data);
          bVar11 = iVar5 == 0;
          goto LAB_147af014b;
        }
LAB_147af0152:
        if (local_298.Data.ArrayNum == local_2d0.Data.ArrayNum) {
          if (local_298.Data.ArrayNum < 2) goto LAB_147af01aa;
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_298.Data.AllocatorInstance.Data,
                             (wchar_t *)local_2d0.Data.AllocatorInstance.Data);
          bVar11 = iVar5 == 0;
        }
        else {
          bVar11 = local_298.Data.ArrayNum + local_2d0.Data.ArrayNum == 1;
        }
        if (bVar11) goto LAB_147af01aa;
      }
      else {
        bVar11 = local_2a8.Data.ArrayNum + local_288.Data.ArrayNum == 1;
LAB_147af014b:
        if (bVar11) goto LAB_147af0152;
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      uVar6 = local_2c0._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 0x10;
    } while( true );
  }
LAB_147af0232:
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  return;
LAB_147af01aa:
  bVar3 = true;
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
LAB_147af01ca:
  local_2b0 = 0;
  pUVar7 = FindProfile(this,&local_2d0,bVar3,(FName)0x0);
  if (pUVar7 != (UDeviceProfile *)0x0) {
    SetOverrideDeviceProfile(this,pUVar7);
  }
  FConfigFile::~FConfigFile(&local_128);
  DestructItems<FString,int>((FString *)local_2c0.AllocatorInstance.Data,local_2c0.ArrayNum);
  if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  goto LAB_147af0232;
}

// HasLoadableProfileName @ 147af0380

bool __thiscall
UDeviceProfileManager::HasLoadableProfileName
          (UDeviceProfileManager *this,FString *param_1,FName param_2)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FConfigFile *this_00;
  bool bVar8;
  FName local_res10;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  if ((param_1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_147af03c7;
  }
  sVar4 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar4;
LAB_147af03c7:
  pUVar5 = GetTransientPackage();
  pUVar6 = UDeviceProfile::StaticClass();
  pUVar7 = StaticFindObject(pUVar6,(UObject *)pUVar5,&local_28,None);
  if (pUVar7 == (UObject *)0x0) {
    if (param_2 != (FName)0x0) {
      FConfigCacheIni::ForPlatform(param_2);
    }
    this_00 = FConfigCacheIni::Find(GConfig,&GDeviceProfilesIni);
    pUVar6 = UDeviceProfile::StaticClass();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,(FString *)&local_28);
    ::FString::PrintfImpl(&local_38,L"%s %s");
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar3 = local_38.Data.ArrayNum + -1;
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_00,uVar2,&local_38);
    bVar8 = iVar3 != -1;
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar8 = true;
  }
  return bVar8;
}

// InitializeCVarsForActiveDeviceProfile @ 147af28f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDeviceProfileManager::InitializeCVarsForActiveDeviceProfile(bool param_1,bool param_2,bool param_3)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  undefined1 auStackY_268 [32];
  FString local_238;
  FString local_228;
  FString local_218;
  FConfigContext local_208;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  if (DeviceProfileManagerSingleton == (UDeviceProfileManager *)0x0) {
    pFVar2 = GetPlatformDeviceProfileName(&local_218);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange(&local_238,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_228.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)DeviceProfileManagerSingleton->ActiveDeviceProfile->_padding_;
    ::FName::ToString((FName *)&local_228,&local_218);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    local_238.Data.AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
    local_238.Data.ArrayMax = local_218.Data.ArrayMax;
    local_238.Data.ArrayNum = local_218.Data.ArrayNum;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    FConfigContext::FConfigContext(&local_208,GConfig,true,&local_228,(FConfigFile *)0x0);
    if ((FName)local_228.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    local_208.bForceReload = param_3;
    FConfigContext::Load(&local_208,L"DeviceProfiles",&GDeviceProfilesIni);
    FConfigContext::~FConfigContext(&local_208);
  }
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  SetDeviceProfileCVars(&local_238);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadProfiles @ 147af8890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDeviceProfileManager::LoadProfiles(UDeviceProfileManager *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  FConfigFile *this_00;
  size_t sVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStackY_328 [32];
  undefined1 local_2f8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_2f0;
  TPairInitializer<FString_&&,FString_&&> local_2e0;
  int local_2d0;
  int local_2cc;
  FString local_2c8;
  FString local_2b8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_2a8;
  TPairInitializer<FString_const_&,FString_const_&> local_298;
  FScriptContainerElement *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  longlong *local_278;
  undefined1 auStack_270 [16];
  uint uStack_260;
  uint uStack_25c;
  longlong local_258;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTStack_250;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_248;
  undefined2 local_240;
  FString *local_238;
  FString *local_230;
  FString local_228;
  FString local_218;
  FScriptContainerElement *local_208;
  FString **local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  TStringView<wchar_t> local_1b8;
  undefined1 local_1a8 [32];
  longlong local_188;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTStack_180;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_178;
  FConfigFile local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  uVar19 = 0;
  local_2e0.Key._0_4_ = 0;
  if ((this->_padding_ & 0x10) == 0) {
    local_178.Elements._0_8_ = 0;
    local_178.Elements._8_8_ = 0;
    local_178.Elements._32_8_ = 0;
    local_178.Elements._40_4_ = 0;
    local_178.Elements._44_4_ = 0x80;
    local_178.Elements._48_4_ = 0xffffffff;
    local_178.Elements._52_4_ = 0;
    local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_178.HashSize = 0;
    ::FString::FString(&local_218,"Windows");
    ::FString::FString(&local_228,L"GlobalDefaults,None");
    local_230 = &local_218;
    local_238 = &local_228;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>(&local_178,&local_2e0,(bool *)&local_238);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    FDataDrivenPlatformInfoRegistry::GetSortedPlatformNames(&local_2a8,TruePlatformsOnly);
    uVar17 = uVar19;
    if (-1 < local_2a8.ArrayNum) {
      do {
        if (uVar19 == 0) {
          uVar17 = uVar17 | 1;
          pFVar9 = ::FString::FString(&local_1c8,"Windows");
        }
        else {
          uVar6 = 0;
          if ((int)(uVar19 - 1) < local_2a8.ArrayNum) {
            uVar6 = -uVar19 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar17 = uVar17 | 2;
          pFVar9 = ::FName::ToString((FName *)(local_2a8.AllocatorInstance.Data +
                                              (longlong)(int)(uVar19 - 1) * 8),&local_1d8);
        }
        local_2e0.Value = (FString *)(pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d0 = (pFVar9->Data).ArrayNum;
        local_2cc = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
        if (((uVar17 & 2) != 0) &&
           (uVar17 = uVar17 & 0xfffffffd,
           local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (((uVar17 & 1) != 0) &&
           (uVar17 = uVar17 & 0xfffffffe,
           local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        FConfigFile::FConfigFile(&local_128);
        pFVar16 = (FScriptContainerElement *)L"";
        if (local_2d0 != 0) {
          pFVar16 = (FScriptContainerElement *)local_2e0.Value;
        }
        this_00 = FConfigCacheIni::FindOrLoadPlatformConfig
                            (&local_128,L"DeviceProfiles",(wchar_t *)pFVar16);
        local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f0.ArrayNum = 0;
        local_2f0.ArrayMax = 0;
        FConfigFile::GetArray(this_00,L"DeviceProfiles",L"DeviceProfileNameAndTypes",&local_2f0);
        iVar8 = local_2f0.ArrayNum;
        pFVar16 = local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayNum * 0x10;
        FVar15.Data = local_2f0.AllocatorInstance.Data;
        while( true ) {
          if (local_2f0.ArrayNum != iVar8) {
            local_2f8[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_2f8);
          }
          if (FVar15.Data == pFVar16) break;
          if (*(int *)(FVar15.Data + 8) == 0) {
            pwVar14 = L"";
            uVar6 = 0;
          }
          else {
            pwVar14 = *(wchar_t **)FVar15.Data;
            uVar6 = *(int *)(FVar15.Data + 8) - 1;
          }
          uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar14);
          iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>(&local_178,uVar6,(FString *)FVar15.Data);
          if (iVar7 == -1) {
            local_200 = &local_2e0.Value;
            local_208 = FVar15.Data;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                      (&local_178,&local_298,(bool *)&local_208);
          }
          FVar15.Data = FVar15.Data + 0x10;
        }
        DestructItems<FString,int>((FString *)local_2f0.AllocatorInstance.Data,local_2f0.ArrayNum);
        if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.AllocatorInstance.Data);
        }
        FConfigFile::~FConfigFile(&local_128);
        if ((FScriptContainerElement *)local_2e0.Value != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.Value);
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 <= local_2a8.ArrayNum);
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_1a8,&local_178);
    local_248 = &local_178;
    stack0xfffffffffffffd98 = local_1a8._16_16_;
    local_278 = (longlong *)local_1a8._0_8_;
    auStack_270._0_8_ = local_1a8._8_8_;
    local_240 = 0;
    local_258 = local_188;
    pTStack_250 = pTStack_180;
    uVar18 = local_1a8._24_8_ >> 0x20;
    if (local_1a8._28_4_ < *(int *)(local_1a8._16_8_ + 0x18)) {
      do {
        plVar4 = local_278;
        local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.Data.ArrayNum = 0;
        local_2c8.Data.ArrayMax = 0;
        local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b8.Data.ArrayNum = 0;
        local_2b8.Data.ArrayMax = 0;
        lVar2 = *local_278;
        ::FString::FString(&local_1f8,L",");
        lVar1 = (longlong)(int)uVar18 * 0x28;
        ::FString::Split((FString *)(lVar1 + lVar2),&local_1f8,&local_2c8,&local_2b8);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_2c8.Data.ArrayNum == 0) {
          local_288 = (FScriptContainerElement *)0x15060d16c;
LAB_147af8cb4:
          sVar10 = wcslen((wchar_t *)local_288);
          iVar8 = (int)sVar10;
        }
        else {
          iVar8 = 0;
          local_288 = local_2c8.Data.AllocatorInstance.Data;
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_147af8cb4;
        }
        iStack_280 = iVar8;
        pUVar11 = GetTransientPackage();
        pUVar12 = UDeviceProfile::StaticClass();
        local_1b8._12_4_ = uStack_27c;
        local_1b8.Size = iStack_280;
        local_1b8.DataPtr = (wchar_t *)local_288;
        pUVar13 = StaticFindObject(pUVar12,(UObject *)pUVar11,&local_1b8,None);
        if (pUVar13 == (UObject *)0x0) {
          if (*(int *)(lVar1 + 0x18 + *plVar4) == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = *(wchar_t **)(lVar1 + 0x10 + *plVar4);
          }
          ::FString::FString(&local_1e8,L"");
          CreateProfile(this,&local_2c8,&local_2b8,&local_1e8,pwVar14);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
        }
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        uStack_260 = uStack_260 & ~auStack_270._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_270);
        uVar18 = (ulonglong)uStack_25c;
      } while ((int)uStack_25c < *(int *)(auStack_270._8_8_ + 0x18));
      if (((char)local_240 != '\0') && (local_240._1_1_ != '\0')) {
        uVar19 = *(int *)&(local_248->Elements).field_0x8 -
                 *(int *)&(local_248->Elements).field_0x34;
        if (uVar19 < 4) {
          iVar8 = 1;
        }
        else {
          uVar18 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar19) && (local_248->HashSize < iVar8)) || (iVar8 < local_248->HashSize)) {
          local_248->HashSize = iVar8;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Rehash(local_248);
        }
      }
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->ManagerUpdatedDelegate);
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    local_178.HashSize = 0;
    if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_178.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_178.Elements);
  }
  return;
}

// OnActiveDeviceProfileChanged @ 147afb870

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UDeviceProfileManager::OnActiveDeviceProfileChanged(UDeviceProfileManager *this)

{
  return &this->ActiveDeviceProfileChangedDelegate;
}

// OnManagerUpdated @ 147afbc60

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UDeviceProfileManager::OnManagerUpdated(UDeviceProfileManager *this)

{
  return &this->ManagerUpdatedDelegate;
}

// OnReapplyDeviceProfiles @ 147afc0f0

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UDeviceProfileManager::OnReapplyDeviceProfiles(UDeviceProfileManager *this)

{
  return &this->PostReapplyDeviceProfilesDelegate;
}

// PostCDOContruct @ 147afca00

void __thiscall UDeviceProfileManager::PostCDOContruct(UDeviceProfileManager *this)

{
  Get(true);
  return;
}

// ReapplyDeviceProfile @ 147b08420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UDeviceProfileManager::ReapplyDeviceProfile
          (UDeviceProfileManager *this,bool param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  FString *pFVar13;
  IConsoleManager *pIVar14;
  UDeviceProfile *pUVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  UDeviceProfile *pUVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  UDeviceProfile *pUVar24;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res18;
  int local_res20;
  undefined4 uStack_10c;
  undefined1 local_104 [12];
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString *local_80;
  FString *local_78;
  FString local_70;
  FString local_60;
  uint local_50;
  void *local_48 [2];
  
  pUVar15 = (UDeviceProfile *)0x0;
  local_res20 = 0;
  pUVar24 = DeviceProfileManagerSingleton->BaseDeviceProfile;
  if (pUVar24 == (UDeviceProfile *)0x0) {
    pUVar24 = DeviceProfileManagerSingleton->ActiveDeviceProfile;
    pUVar18 = pUVar15;
  }
  else {
    pUVar18 = DeviceProfileManagerSingleton->ActiveDeviceProfile;
  }
  uVar9 = 1;
  local_res18 = param_2;
  if (4 < (byte)LogDeviceProfileManager._0_1_) {
    if (pUVar18 != (UDeviceProfile *)0x0) {
      local_104._4_8_ = pUVar18->_padding_;
      ::FName::ToString((FName *)(local_104 + 4),&local_d0);
      pUVar15 = (UDeviceProfile *)&DAT_00000001;
    }
    local_f8 = (FName)pUVar24->_padding_;
    ::FName::ToString(&local_f8,&local_e0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if ((pUVar15 != (UDeviceProfile *)0x0) &&
       (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PreReapplyDeviceProfilesDelegate);
  pTVar6 = local_res18;
  if (local_res18 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
    if (pUVar18 == (UDeviceProfile *)0x0) {
      DestructItems<FSelectedFragmentProperties,int>
                ((FSelectedFragmentProperties *)PlatformFragmentsSelected.AllocatorInstance.Data,
                 PlatformFragmentsSelected.ArrayNum);
      PlatformFragmentsSelected.ArrayNum = 0;
      if (PlatformFragmentsSelected.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&PlatformFragmentsSelected.AllocatorInstance,0,
                   &PlatformFragmentsSelected.ArrayMax);
      }
      RestorePushedState(&PushedSettings);
      InitializeCVarsForActiveDeviceProfile(false,false,param_1);
      pIVar14 = IConsoleManager::Get();
      (**(code **)((longlong)*pIVar14 + 0x58))(pIVar14);
    }
    else {
      if (4 < (byte)LogDeviceProfileManager._0_1_) {
        local_e8 = (FName)pUVar18->_padding_;
        ::FName::ToString(&local_e8,&local_c0);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      SetOverrideDeviceProfile(this,pUVar18);
    }
  }
  else if (pUVar18 != (UDeviceProfile *)0x0) {
    iVar11 = *(int *)&(local_res18->Elements).field_0x28;
    puVar1 = &(local_res18->Elements).field_0x10;
    iVar20 = 0;
    iVar22 = 0;
    iVar10 = 0;
    if (iVar11 != 0) {
      puVar23 = *(uint **)&(local_res18->Elements).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar19 = *puVar23;
      iVar22 = 0;
      while (uVar19 == 0) {
        lVar16 = (longlong)iVar20;
        iVar22 = iVar22 + 0x20;
        iVar20 = iVar20 + 1;
        iVar10 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_147b085d1;
        uVar19 = puVar23[lVar16 + 1];
      }
      uVar9 = -uVar19 & uVar19;
      uVar3 = (ulonglong)uVar9 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_res20 = (int)lVar16;
      iVar10 = iVar22 + -1 + local_res20;
      if (iVar11 < iVar10) {
        iVar10 = iVar11;
      }
    }
LAB_147b085d1:
    TStack_a8._padding_ = CONCAT44(uVar9,iVar20);
    uVar9 = *(uint *)&(local_res18->Elements).field_0x28;
    uVar19 = uVar9 & 0xffffffe0;
    TStack_a8.CurrentBitIndex = iVar10;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    local_b0 = local_res18;
    iVar20 = (int)uVar9 >> 5;
    TStack_a8._28_4_ = iVar10;
    TStack_a8.BaseBitIndex = iVar22;
    uStack_88 = CONCAT44(uStack_10c,
                         *(int *)&(local_res18->Elements).field_0x8 -
                         *(int *)&(local_res18->Elements).field_0x34);
    TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar9 < 0) || (iVar11 < (int)uVar9)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(pTVar6->Elements).field_0x28;
    if (uVar9 != uVar4) {
      puVar21 = *(undefined1 **)&(pTVar6->Elements).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar9 == 0) {
        lVar16 = (longlong)iVar20;
        uVar19 = uVar19 + 0x20;
        iVar20 = iVar20 + 1;
        uVar9 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_147b086e0;
        uVar9 = *(uint *)(puVar21 + lVar16 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar9 = (int)lVar16 + -1 + uVar19;
      if ((int)uVar4 < (int)uVar9) {
        uVar9 = uVar4;
      }
    }
LAB_147b086e0:
    while( true ) {
      pTVar7 = local_b0;
      if (*(int *)&(local_b0->Elements).field_0x8 - *(int *)&(local_b0->Elements).field_0x34 !=
          (int)uStack_88) {
        local_res18 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                      ((ulonglong)local_res18 & 0xffffffffffffff00);
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res18);
      }
      if (((TStack_a8.CurrentBitIndex == uVar9) &&
          (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6)
         ) break;
      lVar16 = *(longlong *)&pTVar7->Elements;
      pFVar2 = (FString *)(lVar16 + (longlong)TStack_a8.CurrentBitIndex * 0x18);
      iVar20 = *(int *)(lVar16 + 8 + (longlong)TStack_a8.CurrentBitIndex * 0x18);
      iVar11 = iVar20 + -1;
      if (iVar20 == 0) {
        pwVar17 = L"";
        iVar11 = 0;
      }
      else {
        pwVar17 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar17);
      iVar11 = TSet<TTuple<FString,FPushedCVarSetting>,TDefaultMapHashableKeyFuncs<FString,FPushedCVarSetting,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FPushedCVarSetting>,TDefaultMapHashableKeyFuncs<FString,FPushedCVarSetting,0>,FDefaultSetAllocator>
                           *)&PushedSettings,uVar19,pFVar2);
      if (iVar11 == -1) {
        if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
            (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Singleton != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x4fb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pFVar2->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
        }
        plVar12 = (longlong *)
                  (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                            (IConsoleManager::Singleton,pwVar17,1);
        if (plVar12 != (longlong *)0x0) {
          uVar19 = (**(code **)(*plVar12 + 0x18))(plVar12);
          pFVar13 = (FString *)(**(code **)(*plVar12 + 0xd8))(plVar12,local_48);
          ::FString::FString(&local_60,pFVar13);
          local_50 = uVar19 & 0xff000000;
          if (local_48[0] != (void *)0x0) {
            FMemory::Free(local_48[0]);
          }
          local_78 = &local_60;
          local_80 = pFVar2;
          TSet<TTuple<FString,FPushedCVarSetting>,TDefaultMapHashableKeyFuncs<FString,FPushedCVarSetting,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FPushedCVarSetting_const_&>_>
                    ((TSet<TTuple<FString,FPushedCVarSetting>,TDefaultMapHashableKeyFuncs<FString,FPushedCVarSetting,0>,FDefaultSetAllocator>
                      *)&PushedSettings,
                     (TPairInitializer<FString_const_&,FPushedCVarSetting_const_&> *)local_104,
                     (bool *)&local_80);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
      }
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
    local_f0 = (FName)DeviceProfileManagerSingleton->ActiveDeviceProfile->_padding_;
    ::FName::ToString(&local_f0,&local_70);
    SetDeviceProfileCVars(&local_70);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PostReapplyDeviceProfilesDelegate);
  return;
}

// RestoreDefaultDeviceProfile @ 147b0f200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDeviceProfileManager::RestoreDefaultDeviceProfile(UDeviceProfileManager *this)

{
  FName local_res8 [4];
  FString local_18;
  
  if (this->BaseDeviceProfile != (UDeviceProfile *)0x0) {
    if (4 < (byte)LogDeviceProfileManager._0_1_) {
      local_res8[0] = (FName)this->BaseDeviceProfile->_padding_;
      ::FName::ToString(local_res8,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    RestorePushedState(&PushedSettings);
    DestructItems<FSelectedFragmentProperties,int>
              ((FSelectedFragmentProperties *)PlatformFragmentsSelected.AllocatorInstance.Data,
               PlatformFragmentsSelected.ArrayNum);
    PlatformFragmentsSelected.ArrayNum = 0;
    if (PlatformFragmentsSelected.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&PlatformFragmentsSelected.AllocatorInstance,0,
                 &PlatformFragmentsSelected.ArrayMax);
    }
    SetActiveDeviceProfile(this,this->BaseDeviceProfile);
    this->BaseDeviceProfile = (UDeviceProfile *)0x0;
    InitializeCVarsForActiveDeviceProfile(false,false,false);
    return;
  }
  return;
}

// RestorePreviewDeviceProfile @ 147b0f310

void __thiscall
UDeviceProfileManager::RestorePreviewDeviceProfile(UDeviceProfileManager *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  
  if (param_1 == (FName)0x0) {
    ::FName::FName(&local_res8,"UnknownPreviewMode");
    param_1 = local_res8;
  }
  this->PreviewDeviceProfile = (UDeviceProfile *)0x0;
  UTextureLODSettings::SetPreviewTextureGroupRedirect
            ((UTextureLODSettings *)this->ActiveDeviceProfile,(UTextureLODSettings *)0x0);
  bVar2 = 1 < (int)PreviewDeviceProfileScalabilityCVars._72_4_;
  if (!bVar2) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&PreviewDeviceProfileScalabilityCVars);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&PreviewDeviceProfileScalabilityCVars,0,
                    PreviewDeviceProfileScalabilityCVars._8_4_);
  PreviewDeviceProfileScalabilityCVars._8_4_ = 0;
  if (PreviewDeviceProfileScalabilityCVars._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&PreviewDeviceProfileScalabilityCVars,0,
               (int *)&PreviewDeviceProfileScalabilityCVars.field_0xc);
  }
  PreviewDeviceProfileScalabilityCVars._48_4_ = 0xffffffff;
  PreviewDeviceProfileScalabilityCVars._52_4_ = 0;
  PreviewDeviceProfileScalabilityCVars._40_4_ = 0;
  if (0x80 < (uint)PreviewDeviceProfileScalabilityCVars._44_4_) {
    PreviewDeviceProfileScalabilityCVars._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &PreviewDeviceProfileScalabilityCVars.field_0x10,0);
  }
  if (bVar2) {
    PreviewDeviceProfileScalabilityCVars._72_4_ = 1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&PreviewDeviceProfileScalabilityCVars);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x130))
            (IConsoleManager::Singleton,param_1,0xc000000);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PreviewDeviceProfileChangedDelegate);
  return;
}

// SaveProfiles @ 147b0f960

void __thiscall UDeviceProfileManager::SaveProfiles(UDeviceProfileManager *this,bool param_1)

{
  UDeviceProfile *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UDeviceProfile *pUVar8;
  FString *pFVar9;
  void *_Dst;
  int iVar10;
  uint uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint local_res18;
  longlong local_a8;
  FName local_a0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  if ((this->_padding_ & 0x10) == 0) {
    if ((param_1) && (local_res18 = 0, 0 < (this->Profiles).ArrayNum)) {
      local_a8 = 0;
      do {
        pwVar13 = L"";
        uVar12 = 0;
        if ((int)local_res18 < (this->Profiles).ArrayNum) {
          uVar12 = ~local_res18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(UDeviceProfile **)((this->Profiles).AllocatorInstance.Data + local_a8);
        if (this_00 == (UDeviceProfile *)0x0) {
          pFVar9 = GetTypeName<UDeviceProfile>(&local_48);
          if ((pFVar9->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar13);
        }
        local_a0 = (FName)this_00->_padding_;
        ::FName::ToString(&local_a0,&local_78);
        ::FString::ConcatFF(&local_88,&local_78,&BackupSuffix);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.ArrayNum == 0) {
          local_98 = (FScriptContainerElement *)0x15060d16c;
LAB_147b0fa7b:
          sVar5 = wcslen((wchar_t *)local_98);
          iVar10 = (int)sVar5;
        }
        else {
          iVar10 = 0;
          local_98 = local_88.Data.AllocatorInstance.Data;
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_147b0fa7b;
        }
        iStack_90 = iVar10;
        pUVar6 = GetTransientPackage();
        pUVar7 = UDeviceProfile::StaticClass();
        local_58._12_4_ = uStack_8c;
        local_58.Size = iStack_90;
        local_58.DataPtr = (wchar_t *)local_98;
        pUVar8 = (UDeviceProfile *)StaticFindObject(pUVar7,(UObject *)pUVar6,&local_58,None);
        bVar3 = AreProfilesTheSame(this,this_00,pUVar8);
        if (!bVar3) {
          pUVar8 = UDeviceProfile::GetParentProfile(this_00,true);
          if (((pUVar8 != (UDeviceProfile *)0x0) &&
              (iVar10 = (int)this_00->_padding_, iVar10 == (int)pUVar8->_padding_)) &&
             (uVar12 = iVar10 - 1, -1 < (int)uVar12)) {
            lVar14 = (longlong)(int)uVar12 * 0x60;
            do {
              uVar11 = ~uVar12 >> 0x1f;
              uVar4 = 0;
              if ((int)uVar12 < (int)this_00->_padding_) {
                uVar4 = uVar11;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar1 = this_00->_padding_;
              uVar4 = 0;
              if ((int)uVar12 < (int)pUVar8->_padding_) {
                uVar4 = uVar11;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              bVar3 = FTextureLODGroup::operator==
                                ((FTextureLODGroup *)(lVar1 + lVar14),
                                 (FTextureLODGroup *)(pUVar8->_padding_ + lVar14));
              if (bVar3) {
                uVar4 = 0;
                if ((int)uVar12 < (int)this_00->_padding_) {
                  uVar4 = uVar11;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                _Dst = (void *)(this_00->_padding_ + lVar14);
                iVar10 = (int)this_00->_padding_ + ~uVar12;
                if (iVar10 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + 0x60),(longlong)iVar10 * 0x60);
                }
                *(int *)&this_00->_padding_ = (int)this_00->_padding_ + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,4,(ForAnyElementType *)&this_00->_padding_,(int)this_00->_padding_,
                           (int *)((longlong)&this_00->_padding_ + 4));
              }
              lVar14 = lVar14 + -0x60;
              uVar12 = uVar12 - 1;
            } while (-1 < (int)uVar12);
          }
          ::FString::FString(&local_68,"");
          UObject::TryUpdateDefaultConfigFile((UObject *)this_00,&local_68,true);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          UDeviceProfile::ValidateTextureLODGroups(this_00);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        local_res18 = local_res18 + 1;
        local_a8 = local_a8 + 8;
      } while ((int)local_res18 < (this->Profiles).ArrayNum);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->ManagerUpdatedDelegate);
  }
  return;
}

// SetActiveDeviceProfile @ 147b115e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDeviceProfileManager::SetActiveDeviceProfile(UDeviceProfileManager *this,UDeviceProfile *param_1)

{
  UDeviceProfile *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  uVar6 = 0;
  this->ActiveDeviceProfile = param_1;
  if (5 < (byte)LogDeviceProfileManager._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
  }
  if (0 < (this->Profiles).ArrayNum) {
    local_res8 = 0;
    uVar9 = uVar6;
    uVar10 = uVar6;
    do {
      uVar8 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar8 < (this->Profiles).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = *(ulonglong *)((this->Profiles).AllocatorInstance.Data + local_res8);
      uVar5 = uVar6;
      if (uVar9 != 0) {
        uVar5 = uVar9;
      }
      if (5 < (byte)LogDeviceProfileManager._0_1_) {
        if (uVar5 != 0) {
          local_res10 = *(FName *)(uVar5 + 0x18);
          uVar10 = 1;
          ::FName::ToString(&local_res10,&local_90);
        }
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
        if ((uVar10 != 0) &&
           (uVar10 = 0, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      local_res8 = local_res8 + 8;
    } while ((int)(uVar8 + 1) < (this->Profiles).ArrayNum);
  }
  pUVar1 = this->ActiveDeviceProfile;
  if (4 < (byte)LogDeviceProfileManager._0_1_) {
    if (pUVar1 != (UDeviceProfile *)0x0) {
      local_res18 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res18,&local_80);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
    if ((pUVar1 != (UDeviceProfile *)0x0) &&
       (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  if (this->ActiveDeviceProfile == (UDeviceProfile *)0x0) {
    GetPlatformDeviceProfileName(&local_a0);
  }
  else {
    local_res20 = (FName)this->ActiveDeviceProfile->_padding_;
    ::FName::ToString(&local_res20,&local_a0);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar7.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FCsvProfiler::SetMetadata(L"DeviceProfile",(wchar_t *)FVar7.Data);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ActiveDeviceProfileChangedDelegate);
  if (this->ActiveDeviceProfile == (UDeviceProfile *)0x0) {
    GetPlatformDeviceProfileName(&local_70);
  }
  else {
    local_a8 = (FName)this->ActiveDeviceProfile->_padding_;
    ::FName::ToString(&local_a8,&local_70);
  }
  ::FString::FString(local_60,L"DeviceProfile.Name");
  FGenericCrashContext::SetEngineData(local_60,&local_70);
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDeviceProfileCVars @ 147b11d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UDeviceProfileManager::SetDeviceProfileCVars(FString *param_1)

{
  undefined8 *puVar1;
  EConsoleVariableFlags EVar2;
  void *pvVar3;
  code *pcVar4;
  FConfigCacheIni *pFVar5;
  TConsoleVariableData<int> *pTVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  EConsoleVariableFlags EVar11;
  wchar_t *pwVar12;
  UDeviceProfileManager *this;
  UClass *pUVar13;
  FString *pFVar14;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar15;
  FConfigSection *this_00;
  FConfigValue *this_01;
  longlong *plVar16;
  byte bVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  ForAnyElementType FVar21;
  int iVar22;
  FName *pFVar23;
  longlong lVar24;
  uint uVar25;
  TTuple<FName,FString> *pTVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  undefined1 *puVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  uint uVar33;
  ForAnyElementType FVar34;
  EConsoleVariableFlags *pEVar35;
  undefined1 auStackY_448 [32];
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404 [4];
  uint local_400;
  FString local_3f8;
  FString local_3e8;
  wchar_t *local_3d8;
  ForAnyElementType local_3d0;
  int local_3c8;
  int local_3c4;
  FString local_3c0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_3b0;
  undefined8 uStack_3a8;
  TBitArray<FDefaultBitArrayAllocator> *local_3a0;
  uint uStack_398;
  uint uStack_394;
  uint local_390;
  undefined4 uStack_38c;
  int iStack_388;
  undefined4 uStack_384;
  TArray<FString,TSizedDefaultAllocator<32>_> local_380;
  TTuple<FName,FString> *local_370;
  FString local_368;
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> local_358;
  undefined8 local_348;
  wchar_t *local_340;
  EConsoleVariableFlags *local_338;
  FName local_330;
  FString local_328;
  FString local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  FString local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8 [8];
  int local_2b0;
  int local_2ac;
  FName local_2a8;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  uint local_250;
  int local_248;
  longlong *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 uStack_218;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  FString local_1b0;
  FString *local_1a0;
  FString *local_198;
  FString *local_190;
  FString *local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  void *local_140 [2];
  void *local_130 [5];
  undefined4 local_104;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  int local_a4;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  undefined1 *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_448;
  if (Mode == -1) {
    Mode = 0;
    pwVar12 = FCommandLine::Get();
    FParse::Value(pwVar12,L"DPApplyMode=",&Mode);
  }
  pFVar5 = GConfig;
  if (Mode < 1) {
    GatherDeviceProfileCVars
              ((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                *)local_88,param_1,DPM_SetCVars);
    if ((int)DeviceProfileScalabilityCVars._72_4_ < 2) {
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&DeviceProfileScalabilityCVars);
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&DeviceProfileScalabilityCVars,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&DeviceProfileScalabilityCVars,0);
      DeviceProfileScalabilityCVars._72_4_ = 1;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&DeviceProfileScalabilityCVars);
    }
    if ((PushedSettings._8_4_ != PushedSettings._52_4_) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PushedSettings.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DeviceProfiles\\DeviceProfileManager.cpp"
                           ,0x289,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pwVar12 = L"";
    if (GEngineIni.Data.ArrayNum != 0) {
      pwVar12 = (wchar_t *)GEngineIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_1b0,pwVar12);
    this_00 = FConfigCacheIni::GetSection(GConfig,L"ConsoleVariables",false,&local_1b0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (this_00 != (FConfigSection *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        ::FName::FName(&AllowScalabilityAtRuntimeName,L"dp.AllowScalabilityGroupsToChangeAtRuntime")
        ;
        _Init_thread_footer(&::_TSS2);
      }
      this_01 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                        *)this_00,AllowScalabilityAtRuntimeName);
      if (this_01 != (FConfigValue *)0x0) {
        ::FName::ToString(&AllowScalabilityAtRuntimeName,&local_280);
        FConfigValue::GetValue(this_01,&local_290);
        local_308 = 0;
        FVar34.Data = (FScriptContainerElement *)L"";
        if (local_290.Data.ArrayNum != 0) {
          FVar34.Data = local_290.Data.AllocatorInstance.Data;
        }
        pwVar12 = L"";
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_280.Data.ArrayNum != 0) {
          FVar21.Data = local_280.Data.AllocatorInstance.Data;
        }
        if (GEngineIni.Data.ArrayNum != 0) {
          pwVar12 = (wchar_t *)GEngineIni.Data.AllocatorInstance;
        }
        UE::ConfigUtilities::OnSetCVarFromIniEntry
                  (pwVar12,(wchar_t *)FVar21.Data,(wchar_t *)FVar34.Data,0x5000000,false,false,
                   (FName)0x0);
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
      }
    }
    local_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_2e0.UnvisitedBitMask = 0xffffffff;
    local_2e0._padding_._0_4_ = 0;
    local_2e0._padding_._4_4_ = 1;
    local_2e0.CurrentBitIndex = 0;
    local_2e0.BaseBitIndex = 0;
    if (local_60 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
    }
    uVar33 = local_60;
    uStack_3a8 = CONCAT44(local_2e0._padding_._4_4_,(undefined4)local_2e0._padding_);
    local_3b0 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *)local_88;
    uStack_394 = local_2e0.CurrentBitIndex;
    uStack_398 = local_2e0.UnvisitedBitMask;
    uStack_38c = local_2e0._28_4_;
    local_390 = local_2e0.BaseBitIndex;
    iStack_388 = local_88._8_4_ - local_54;
    local_3a0 = local_2e0.Array;
    uVar27 = local_60 & 0xffffffe0;
    iVar22 = (int)local_60 >> 5;
    bVar17 = (byte)local_60;
    uStack_1e8 = CONCAT44(uStack_384,iStack_388);
    TStack_208.Array = local_2e0.Array;
    local_210 = (longlong *)local_3b0;
    TStack_208._padding_ = uStack_3a8;
    TStack_208._16_8_ = _uStack_398;
    TStack_208._24_8_ = _local_390;
    if (((int)local_60 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar33 != local_60) {
      puVar30 = local_88 + 0x10;
      if (local_68 != (undefined1 *)0x0) {
        puVar30 = local_68;
      }
      uVar33 = -1 << (bVar17 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar22 * 4);
      while (uVar33 == 0) {
        lVar18 = (longlong)iVar22;
        uVar27 = uVar27 + 0x20;
        iVar22 = iVar22 + 1;
        uVar33 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_147b126e3;
        uVar33 = *(uint *)(puVar30 + lVar18 * 4 + 4);
      }
      uVar32 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_2bc = (int)lVar18;
      uVar33 = local_2bc + -1 + uVar27;
      if ((int)local_60 < (int)uVar33) {
        uVar33 = local_60;
      }
    }
LAB_147b126e3:
    while( true ) {
      plVar16 = local_210;
      if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)uStack_1e8) {
        local_406 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_406);
      }
      if (((TStack_208.CurrentBitIndex == uVar33) &&
          (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar16 == (longlong *)local_88)) break;
      pFVar23 = (FName *)((longlong)TStack_208.CurrentBitIndex * 0x20 + *plVar16);
      ::FName::ToString(pFVar23,&local_3f8);
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar34.Data = (FScriptContainerElement *)L"";
      if (local_3f8.Data.ArrayNum != 0) {
        FVar34.Data = local_3f8.Data.AllocatorInstance.Data;
      }
      plVar16 = (longlong *)
                (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                          (IConsoleManager::Singleton,FVar34.Data,1);
      if (plVar16 == (longlong *)0x0) {
        if (4 < (byte)LogDeviceProfileManager._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
        }
      }
      else {
        uVar27 = (**(code **)(*plVar16 + 0x18))(plVar16);
        pFVar14 = (FString *)(**(code **)(*plVar16 + 0xd8))(plVar16,local_140);
        ::FString::FString(&local_260,pFVar14);
        local_250 = uVar27 & 0xff000000;
        if (local_140[0] != (void *)0x0) {
          FMemory::Free(local_140[0]);
        }
        local_1a0 = &local_3f8;
        local_198 = &local_260;
        TSet<TTuple<FString,FPushedCVarSetting>,TDefaultMapHashableKeyFuncs<FString,FPushedCVarSetting,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FPushedCVarSetting_const_&>_>
                  ((TSet<TTuple<FString,FPushedCVarSetting>,TDefaultMapHashableKeyFuncs<FString,FPushedCVarSetting,0>,FDefaultSetAllocator>
                    *)&PushedSettings,
                   (TPairInitializer<FString_const_&,FPushedCVarSetting_const_&> *)local_2b8,
                   (bool *)&local_1a0);
        if (4 < (byte)LogDeviceProfileManager._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
        }
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
      }
      bVar8 = ::FString::StartsWith(&local_3f8,L"sg.",3,IgnoreCase);
      pTVar6 = CVarAllowScalabilityGroupsToChangeAtRuntime.Ref;
      if (bVar8) {
        bVar9 = IsInParallelGameThread();
        if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (0 < pTVar6->ShadowedValue[0]) {
          if (pFVar23[2].ComparisonIndex.Value == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = *(wchar_t **)(pFVar23 + 1);
          }
          ::FString::FString(&local_170,pwVar12);
          FVar34.Data = (FScriptContainerElement *)L"";
          if (local_3f8.Data.ArrayNum != 0) {
            FVar34.Data = local_3f8.Data.AllocatorInstance.Data;
          }
          ::FString::FString(&local_180,(wchar_t *)FVar34.Data);
          local_190 = &local_180;
          local_188 = &local_170;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&DeviceProfileScalabilityCVars,
                     (TPairInitializer<FString_&&,FString_&&> *)(local_2b8 + 4),(bool *)&local_190);
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar27 = 0x7000000;
      if (bVar8) {
        uVar27 = 0x2000000;
      }
      local_300 = 0;
      if (pFVar23[2].ComparisonIndex.Value == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(pFVar23 + 1);
      }
      pwVar19 = L"";
      FVar34.Data = (FScriptContainerElement *)L"";
      if (local_3f8.Data.ArrayNum != 0) {
        FVar34.Data = local_3f8.Data.AllocatorInstance.Data;
      }
      if (GDeviceProfilesIni.Data.ArrayNum != 0) {
        pwVar19 = (wchar_t *)GDeviceProfilesIni.Data.AllocatorInstance.Data;
      }
      UE::ConfigUtilities::OnSetCVarFromIniEntry
                (pwVar19,(wchar_t *)FVar34.Data,pwVar12,uVar27,false,true,(FName)0x0);
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  else {
    this = Get(false);
    GetDPChain(this,&local_358,param_1,pFVar5);
    uVar32 = (ulonglong)local_358.ArrayNum;
    local_400 = local_358.ArrayNum;
    local_370 = (TTuple<FName,FString> *)(local_358.AllocatorInstance.Data + uVar32 * 0x18);
    FVar34.Data = local_358.AllocatorInstance.Data;
    while( true ) {
      pTVar26 = local_370;
      uVar27 = 0;
      if (local_358.ArrayNum != (uint)uVar32) {
        local_408 = 0;
        `TCheckedPointerIterator<TTuple<FName,FString>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_408);
      }
      if ((TTuple<FName,FString> *)FVar34.Data == pTVar26) break;
      local_330.ComparisonIndex.Value = *(uint *)&((TTuple<FName,FString> *)FVar34.Data)->field_0x0;
      local_330.Number = *(uint *)&((TTuple<FName,FString> *)FVar34.Data)->field_0x4;
      pUVar13 = Z_Construct_UClass_UDeviceProfileFragment_NoRegister();
      local_2a8 = (FName)pUVar13->_padding_;
      ::FName::ToString(&local_2a8,&local_2a0);
      uVar33 = local_2a0.Data.ArrayNum - 1;
      FVar21.Data = local_2a0.Data.AllocatorInstance.Data;
      if (local_2a0.Data.ArrayNum == 0) {
        uVar33 = uVar27;
        FVar21.Data = (FScriptContainerElement *)L"";
      }
      bVar8 = ::FString::EndsWith((FString *)&((TTuple<FName,FString> *)FVar34.Data)->field_0x8,
                                  (wchar_t *)FVar21.Data,uVar33,IgnoreCase);
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
      pFVar14 = ::FName::ToString(&local_330,&local_150);
      GatherDeviceProfileCVars
                ((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  *)local_d8,pFVar14,bVar8 + DPM_SetCVarsForSingleDP);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      uVar33 = local_b0;
      uVar10 = 1;
      uStack_394 = uVar27;
      local_390 = uVar27;
      if (local_b0 != 0) {
        puVar29 = (uint *)(local_d8 + 0x10);
        if (local_b8 != (uint *)0x0) {
          puVar29 = local_b8;
        }
        uVar25 = *puVar29;
        while (uVar25 == 0) {
          lVar18 = (longlong)(int)uVar27;
          local_390 = local_390 + 0x20;
          uVar27 = uVar27 + 1;
          uStack_394 = local_b0;
          if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
          goto LAB_147b11f15;
          uVar25 = puVar29[lVar18 + 1];
        }
        uVar10 = -uVar25 & uVar25;
        uVar32 = (ulonglong)uVar10 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_2c0 = (int)lVar18;
        uStack_394 = local_2c0 + -1 + local_390;
        if ((int)local_b0 < (int)uStack_394) {
          uStack_394 = local_b0;
        }
      }
LAB_147b11f15:
      local_3b0 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)local_d8;
      uVar25 = local_b0 & 0xffffffe0;
      local_3a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
      iStack_388 = local_d8._8_4_ - local_a4;
      uStack_398 = 0xffffffff;
      uStack_3a8 = CONCAT44(uVar10,uVar27);
      uStack_38c = local_104;
      TStack_238._padding_ = uStack_3a8;
      iVar22 = (int)local_b0 >> 5;
      uStack_218 = CONCAT44(uStack_384,iStack_388);
      bVar17 = (byte)local_b0;
      TStack_238.UnvisitedBitMask = 0xffffffff;
      TStack_238.CurrentBitIndex = uStack_394;
      TStack_238.BaseBitIndex = local_390;
      TStack_238._28_4_ = local_104;
      local_240 = (longlong *)local_3b0;
      TStack_238.Array = local_3a0;
      if (((int)local_b0 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar33 != local_b0) {
        puVar29 = (uint *)(local_d8 + 0x10);
        if (local_b8 != (uint *)0x0) {
          puVar29 = local_b8;
        }
        uVar27 = -1 << (bVar17 & 0x1f) & puVar29[iVar22];
        while (uVar27 == 0) {
          lVar18 = (longlong)iVar22;
          uVar25 = uVar25 + 0x20;
          iVar22 = iVar22 + 1;
          uVar33 = local_b0;
          if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_147b12040;
          uVar27 = puVar29[lVar18 + 1];
        }
        uVar32 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_248 = (int)lVar18;
        uVar33 = local_248 + -1 + uVar25;
        if ((int)local_b0 < (int)uVar33) {
          uVar33 = local_b0;
        }
      }
LAB_147b12040:
      while( true ) {
        plVar16 = local_240;
        if ((int)local_240[1] - *(int *)((longlong)local_240 + 0x34) != (int)uStack_218) {
          local_407 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_407);
        }
        if (((TStack_238.CurrentBitIndex == uVar33) &&
            (TStack_238.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
           (plVar16 == (longlong *)local_d8)) break;
        pFVar23 = (FName *)(*plVar16 + (longlong)TStack_238.CurrentBitIndex * 0x20);
        ::FName::ToString(pFVar23,&local_2f0);
        bVar8 = ::FString::StartsWith(&local_2f0,L"sg.",3,IgnoreCase);
        uVar27 = 0x7000000;
        if (bVar8) {
          uVar27 = 0x2000000;
        }
        if (pFVar23[2].ComparisonIndex.Value == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)(pFVar23 + 1);
        }
        pwVar19 = L"";
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_2f0.Data.ArrayNum != 0) {
          FVar21.Data = local_2f0.Data.AllocatorInstance.Data;
        }
        if (GDeviceProfilesIni.Data.ArrayNum != 0) {
          pwVar19 = (wchar_t *)GDeviceProfilesIni.Data.AllocatorInstance;
        }
        UE::ConfigUtilities::OnSetCVarFromIniEntry
                  (pwVar19,(wchar_t *)FVar21.Data,pwVar12,uVar27,false,true,local_330);
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
      }
      uVar32 = (ulonglong)local_400;
      local_90 = 0;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      FVar34.Data = FVar34.Data + 0x18;
    }
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_358.AllocatorInstance.Data,local_358.ArrayNum);
    if ((TTuple<FName,FString> *)local_358.AllocatorInstance.Data != (TTuple<FName,FString> *)0x0) {
      FMemory::Free(local_358.AllocatorInstance.Data);
    }
  }
  iVar28 = 0;
  pTVar15 = FGenericPlatformMisc::GetConfigRuleVars();
  iVar22 = *(int *)&pTVar15->field_0x28;
  local_390 = 0;
  uVar27 = 1;
  local_3a0 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar15->field_0x10;
  uStack_394 = 0;
  if (iVar22 != 0) {
    puVar29 = *(uint **)&pTVar15->field_0x20;
    if (*(uint **)&pTVar15->field_0x20 == (uint *)0x0) {
      puVar29 = (uint *)local_3a0;
    }
    uVar33 = *puVar29;
    while (uVar33 == 0) {
      lVar18 = (longlong)iVar28;
      local_390 = local_390 + 0x20;
      iVar28 = iVar28 + 1;
      uStack_394 = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_147b12241;
      uVar33 = puVar29[lVar18 + 1];
    }
    uVar27 = -uVar33 & uVar33;
    uVar32 = (ulonglong)uVar27 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_2b0 = (int)lVar18;
    uStack_394 = local_390 + -1 + local_2b0;
    if (iVar22 < (int)uStack_394) {
      uStack_394 = iVar22;
    }
  }
LAB_147b12241:
  uVar33 = *(uint *)&pTVar15->field_0x28;
  iStack_388 = *(int *)&pTVar15->field_0x8 - *(int *)&pTVar15->field_0x34;
  uStack_398 = 0xffffffff;
  uVar10 = uVar33 & 0xffffffe0;
  uStack_3a8 = CONCAT44(uVar27,iVar28);
  uStack_38c = local_e4;
  TStack_1d8._padding_ = uStack_3a8;
  iVar28 = (int)uVar33 >> 5;
  uStack_1b8 = CONCAT44(uStack_384,iStack_388);
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  TStack_1d8.CurrentBitIndex = uStack_394;
  TStack_1d8.BaseBitIndex = local_390;
  TStack_1d8._28_4_ = local_e4;
  local_3b0 = pTVar15;
  local_1e0 = pTVar15;
  TStack_1d8.Array = local_3a0;
  if ((((int)uVar33 < 0) || (iVar22 < (int)uVar33)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar27 = *(uint *)&pTVar15->field_0x28;
  if (uVar33 != uVar27) {
    puVar30 = &pTVar15->field_0x10;
    if (*(undefined1 **)&pTVar15->field_0x20 != (undefined1 *)0x0) {
      puVar30 = *(undefined1 **)&pTVar15->field_0x20;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar28 * 4);
    while (uVar33 == 0) {
      lVar18 = (longlong)iVar28;
      uVar10 = uVar10 + 0x20;
      iVar28 = iVar28 + 1;
      uVar33 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_147b12360;
      uVar33 = *(uint *)(puVar30 + lVar18 * 4 + 4);
    }
    uVar32 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_2ac = (int)lVar18;
    uVar33 = local_2ac + -1 + uVar10;
    if ((int)uVar27 < (int)uVar33) {
      uVar33 = uVar27;
    }
  }
LAB_147b12360:
  while( true ) {
    pTVar7 = local_1e0;
    if (*(int *)&local_1e0->field_0x8 - *(int *)&local_1e0->field_0x34 != (int)uStack_1b8) {
      local_405 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_405);
    }
    if (((TStack_1d8.CurrentBitIndex == uVar33) &&
        (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pTVar15->field_0x10)) &&
       (pTVar7 == pTVar15)) break;
    local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar18 = *(longlong *)pTVar7;
    local_368.Data.ArrayNum = *(int *)(lVar18 + 8 + (longlong)TStack_1d8.CurrentBitIndex * 0x28);
    lVar24 = (longlong)local_368.Data.ArrayNum;
    puVar1 = (undefined8 *)(lVar18 + (longlong)TStack_1d8.CurrentBitIndex * 0x28);
    pvVar3 = (void *)*puVar1;
    if (local_368.Data.ArrayNum == 0) {
      local_368.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_368.Data.ArrayNum,0,(ForAnyElementType *)&local_368,
                 local_368.Data.ArrayNum,&local_368.Data.ArrayMax);
      memcpy(local_368.Data.AllocatorInstance.Data,pvVar3,lVar24 * 2);
    }
    ::FString::FString(&local_270,"cvar_");
    iVar22 = local_270.Data.ArrayNum + -1;
    FVar34.Data = local_270.Data.AllocatorInstance.Data;
    if (local_270.Data.ArrayNum == 0) {
      iVar22 = 0;
      FVar34.Data = (FScriptContainerElement *)L"";
    }
    bVar8 = ::FString::StartsWith(&local_368,(wchar_t *)FVar34.Data,iVar22,IgnoreCase);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      ::FString::RightChop(&local_368,&local_328,5);
      local_3c8 = *(int *)(puVar1 + 3);
      lVar18 = (longlong)local_3c8;
      pvVar3 = (void *)puVar1[2];
      local_3d0.Data = (FScriptContainerElement *)0x0;
      if (local_3c8 == 0) {
        local_3c4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_3c8,0,&local_3d0,local_3c8,&local_3c4);
        memcpy(local_3d0.Data,pvVar3,lVar18 * 2);
      }
      if (4 < (byte)LogDeviceProfileManager._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
      }
      local_2f8 = 0;
      FVar34.Data = (FScriptContainerElement *)L"";
      if (local_3c8 != 0) {
        FVar34.Data = local_3d0.Data;
      }
      pwVar12 = L"";
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_328.Data.ArrayNum != 0) {
        FVar21.Data = local_328.Data.AllocatorInstance.Data;
      }
      if (GDeviceProfilesIni.Data.ArrayNum != 0) {
        pwVar12 = (wchar_t *)GDeviceProfilesIni.Data.AllocatorInstance.Data;
      }
      UE::ConfigUtilities::OnSetCVarFromIniEntry
                (pwVar12,(wchar_t *)FVar21.Data,(wchar_t *)FVar34.Data,0x7000000,false,false,
                 (FName)0x0);
      if (local_3d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d0.Data);
      }
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  }
  local_400 = 0;
  local_370 = (TTuple<FName,FString> *)DPCVarTags;
  local_338 = DPCVarPri;
  do {
    pEVar35 = local_338;
    pTVar26 = local_370;
    uVar27 = local_400;
    EVar2 = *local_338;
    pwVar12 = *(wchar_t **)local_370;
    local_3d8 = pwVar12;
    GetConsoleVariableSetByName(EVar2);
    local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.Data.ArrayNum = 0;
    local_318.Data.ArrayMax = 0;
    local_340 = FCommandLine::Get();
    while ((local_340 != (wchar_t *)0x0 &&
           (bVar8 = FParse::Value(local_340,pwVar12,&local_318,false,&local_340),
           pTVar26 = local_370, pEVar35 = local_338, uVar27 = local_400, bVar8))) {
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.ArrayNum = 0;
      local_380.ArrayMax = 0;
      ::FString::ParseIntoArray(&local_318,&local_380,L",",true);
      iVar22 = local_380.ArrayNum;
      pFVar31 = local_380.AllocatorInstance.Data + (longlong)local_380.ArrayNum * 0x10;
      FVar34.Data = local_380.AllocatorInstance.Data;
      while( true ) {
        if (local_380.ArrayNum != iVar22) {
          local_404[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_404);
        }
        if (FVar34.Data == pFVar31) break;
        local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e8.Data.ArrayNum = 0;
        local_3e8.Data.ArrayMax = 0;
        local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3c0.Data.ArrayNum = 0;
        local_3c0.Data.ArrayMax = 0;
        ::FString::FString(&local_160,L"=");
        bVar8 = ::FString::Split((FString *)FVar34.Data,&local_160,&local_3e8,&local_3c0);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        pwVar12 = local_3d8;
        if (bVar8) {
          if (4 < (byte)LogDeviceProfileManager._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
          }
          local_348 = 0;
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_3c0.Data.ArrayNum != 0) {
            FVar21.Data = local_3c0.Data.AllocatorInstance.Data;
          }
          pwVar12 = L"";
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_3e8.Data.ArrayNum != 0) {
            FVar20.Data = local_3e8.Data.AllocatorInstance.Data;
          }
          if (GDeviceProfilesIni.Data.ArrayNum != 0) {
            pwVar12 = (wchar_t *)GDeviceProfilesIni.Data.AllocatorInstance.Data;
          }
          UE::ConfigUtilities::OnSetCVarFromIniEntry
                    (pwVar12,(wchar_t *)FVar20.Data,(wchar_t *)FVar21.Data,EVar2,false,false,
                     (FName)0x0);
          if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
              (IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Singleton != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x4fb,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_3e8.Data.ArrayNum != 0) {
            FVar21.Data = local_3e8.Data.AllocatorInstance.Data;
          }
          plVar16 = (longlong *)
                    (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                              (IConsoleManager::Singleton,FVar21.Data,1);
          pwVar12 = local_3d8;
          if (plVar16 != (longlong *)0x0) {
            EVar11 = (**(code **)(*plVar16 + 0x18))(plVar16);
            pwVar12 = local_3d8;
            if ((2 < (byte)LogDeviceProfileManager._0_1_) &&
               ((int)EVar2 < (int)(EVar11 & ECVF_SetByMask))) {
              (**(code **)(*plVar16 + 0xd8))(plVar16,local_130);
              GetConsoleVariableSetByName(EVar11 & ECVF_SetByMask);
              GetConsoleVariableSetByName(EVar2);
              pwVar12 = local_3d8;
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u___s_s__s_reques_1518591c8,
                         (FLogCategoryBase *)&LogDeviceProfileManager);
              if (local_130[0] != (void *)0x0) {
                FMemory::Free(local_130[0]);
              }
            }
          }
        }
        if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
        }
        if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
        }
        FVar34.Data = FVar34.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
      uVar27 = local_400;
      pTVar26 = local_370;
      pEVar35 = local_338;
      if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.AllocatorInstance.Data);
        uVar27 = local_400;
        pTVar26 = local_370;
        pEVar35 = local_338;
      }
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    local_400 = uVar27 + 1;
    local_338 = pEVar35 + 1;
    local_370 = (TTuple<FName,FString> *)((longlong)pTVar26 + 8);
    if (2 < local_400) {
      return;
    }
  } while( true );
}

// SetOverrideDeviceProfile @ 147b137e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDeviceProfileManager::SetOverrideDeviceProfile(UDeviceProfileManager *this,UDeviceProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDeviceProfile *pUVar3;
  FName local_res8;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  pUVar3 = this->BaseDeviceProfile;
  if (pUVar3 == (UDeviceProfile *)0x0) {
    pUVar3 = DeviceProfileManagerSingleton->ActiveDeviceProfile;
    this->BaseDeviceProfile = pUVar3;
  }
  if (4 < (byte)LogDeviceProfileManager._0_1_) {
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    local_res18[0] = (FName)param_1->_padding_;
    ::FName::ToString(local_res18,&local_28);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfileManager);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FSelectedFragmentProperties,int>
            ((FSelectedFragmentProperties *)PlatformFragmentsSelected.AllocatorInstance.Data,
             PlatformFragmentsSelected.ArrayNum);
  PlatformFragmentsSelected.ArrayNum = 0;
  if (PlatformFragmentsSelected.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&PlatformFragmentsSelected.AllocatorInstance,0,
               &PlatformFragmentsSelected.ArrayMax);
  }
  RestorePushedState(&PushedSettings);
  SetActiveDeviceProfile(DeviceProfileManagerSingleton,param_1);
  InitializeCVarsForActiveDeviceProfile(false,false,false);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147b13970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  return;
}

// SetPreviewDeviceProfile @ 147b139a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDeviceProfileManager::SetPreviewDeviceProfile
          (UDeviceProfileManager *this,UDeviceProfile *param_1,FName param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  TConsoleVariableData<int> *pTVar4;
  longlong *plVar5;
  bool bVar6;
  FName *pFVar7;
  byte bVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FString local_1b0;
  int local_1a0;
  int local_19c;
  undefined1 local_198 [12];
  FName local_18c;
  FName local_184;
  longlong *local_178;
  int iStack_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FString local_118;
  FString local_108;
  FString *local_f8;
  FString *local_f0;
  FString local_e8;
  FString local_d8;
  FName local_c8 [4];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (param_2 == (FName)0x0) {
    ::FName::FName((FName *)(local_198 + 4),"UnknownPreviewMode");
    param_2 = (FName)local_198._4_8_;
  }
  RestorePreviewDeviceProfile(this,param_2);
  this->PreviewDeviceProfile = param_1;
  UTextureLODSettings::SetPreviewTextureGroupRedirect
            ((UTextureLODSettings *)this->ActiveDeviceProfile,(UTextureLODSettings *)param_1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = IConsoleManager::Singleton;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x118);
  local_18c = (FName)param_1->_padding_;
  ::FName::ToString(&local_18c,&local_118);
  if ((param_1->DeviceType).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->DeviceType).Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(local_c8,pwVar10);
  (*pcVar2)(pIVar3,*pFVar7,&local_118,param_2);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_184 = (FName)param_1->_padding_;
  ::FName::ToString(&local_184,&local_108);
  GatherDeviceProfileCVars
            ((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              *)local_98,&local_108,DPM_CacheValues);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  uVar14 = local_70;
  iStack_170 = 0;
  local_158 = 0;
  uStack_16c = 1;
  uStack_15c = 0;
  if (local_70 != 0) {
    puVar15 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar15 = local_78;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_170;
      local_158 = local_158 + 0x20;
      iStack_170 = iStack_170 + 1;
      uStack_15c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_170)
      goto LAB_147b13b71;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_16c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_16c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_1a0 = (int)lVar9;
    uStack_15c = local_158 + -1 + local_1a0;
    if ((int)local_70 < (int)uStack_15c) {
      uStack_15c = local_70;
    }
  }
LAB_147b13b71:
  local_178 = (longlong *)local_98;
  uStack_154 = local_a4;
  local_168 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_150 = local_98._8_4_ - local_64;
  uVar13 = local_70 & 0xffffffe0;
  uStack_160 = 0xffffffff;
  TStack_140.CurrentBitIndex = uStack_15c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_16c,iStack_170);
  iVar12 = (int)local_70 >> 5;
  TStack_140._28_4_ = local_a4;
  TStack_140.BaseBitIndex = local_158;
  uStack_120 = CONCAT44(uStack_14c,iStack_150);
  bVar8 = (byte)local_70;
  local_148 = local_178;
  TStack_140.Array = local_168;
  if (((int)local_70 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar14 != local_70) {
    puVar15 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar15 = local_78;
    }
    uVar14 = -1 << (bVar8 & 0x1f) & puVar15[iVar12];
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_147b13c90;
      uVar14 = puVar15[lVar9 + 1];
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_19c = (int)lVar9;
    uVar14 = local_19c + -1 + uVar13;
    if ((int)local_70 < (int)uVar14) {
      uVar14 = local_70;
    }
  }
LAB_147b13c90:
  while( true ) {
    plVar5 = local_148;
    if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
      local_1b8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b8);
    }
    if (((TStack_140.CurrentBitIndex == uVar14) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar5 == (longlong *)local_98)) break;
    pFVar7 = (FName *)(*plVar5 + (longlong)TStack_140.CurrentBitIndex * 0x20);
    ::FName::ToString(pFVar7,&local_1b0);
    bVar6 = ::FString::StartsWith(&local_1b0,L"sg.",3,IgnoreCase);
    pTVar4 = CVarAllowScalabilityGroupsToChangeAtRuntime.Ref;
    if (bVar6) {
      bVar6 = IsInParallelGameThread();
      if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (0 < pTVar4->ShadowedValue[0]) {
        if (pFVar7[2].ComparisonIndex.Value == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(pFVar7 + 1);
        }
        ::FString::FString(&local_d8,pwVar10);
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_1b0.Data.ArrayNum != 0) {
          FVar11.Data = local_1b0.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_e8,(wchar_t *)FVar11.Data);
        local_f0 = &local_d8;
        local_f8 = &local_e8;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)&PreviewDeviceProfileScalabilityCVars,
                   (TPairInitializer<FString_&&,FString_&&> *)local_198,(bool *)&local_f8);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PreviewDeviceProfileChangedDelegate);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// StaticRegisterNativesUDeviceProfileManager @ 147b17310

void __cdecl UDeviceProfileManager::StaticRegisterNativesUDeviceProfileManager(void)

{
  return;
}

// WillReapplyDeviceProfiles @ 147b23810

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UDeviceProfileManager::WillReapplyDeviceProfiles(UDeviceProfileManager *this)

{
  return &this->PreReapplyDeviceProfilesDelegate;
}

