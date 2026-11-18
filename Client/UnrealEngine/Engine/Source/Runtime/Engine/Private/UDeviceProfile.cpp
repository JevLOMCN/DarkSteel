// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticClass @ 147aa7be0

UClass * __cdecl UDeviceProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeviceProfile",
               &Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton,
               StaticRegisterNativesUDeviceProfile,0x188,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"DeviceProfiles",InternalConstructor<UDeviceProfile>,
               InternalVTableHelperCtorCaller<UDeviceProfile>,local_res8,
               UTextureLODSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton;
}

// UDeviceProfile @ 147abd8d0

UDeviceProfile * __thiscall
UDeviceProfile::UDeviceProfile(UDeviceProfile *this,FVTableHelper *param_1)

{
  UTextureLODSettings::UTextureLODSettings((UTextureLODSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UDeviceProfile__6B_;
  (this->DeviceType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceType).Data.ArrayNum = 0;
  (this->DeviceType).Data.ArrayMax = 0;
  (this->BaseProfileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseProfileName).Data.ArrayNum = 0;
  (this->BaseProfileName).Data.ArrayMax = 0;
  (this->Parent).field0_0x0.DebugPtr = (UDeviceProfile *)0x0;
  (this->ConfigPlatform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigPlatform).Data.ArrayNum = 0;
  (this->ConfigPlatform).Data.ArrayMax = 0;
  (this->FragmentIncludes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentIncludes).ArrayNum = 0;
  (this->FragmentIncludes).ArrayMax = 0;
  (this->CVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVars).ArrayNum = 0;
  (this->CVars).ArrayMax = 0;
  (this->MatchingRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatchingRules).ArrayNum = 0;
  (this->MatchingRules).ArrayMax = 0;
  *(undefined8 *)&this->CVarsUpdatedDelegate = 0;
  *(undefined8 *)&(this->CVarsUpdatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CVarsUpdatedDelegate).field_0x10 = 0;
  (this->SelectedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedFragments).ArrayNum = 0;
  (this->SelectedFragments).ArrayMax = 0;
  *(undefined8 *)&this->AllExpandedCVars = 0;
  *(undefined8 *)&(this->AllExpandedCVars).field_0x8 = 0;
  *(undefined8 *)&(this->AllExpandedCVars).field_0x20 = 0;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x28 = 0;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x34 = 0;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AllExpandedCVars).field_0x40 = 0;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x48 = 0;
  *(undefined8 *)&this->AllPreviewCVars = 0;
  *(undefined8 *)&(this->AllPreviewCVars).field_0x8 = 0;
  *(undefined8 *)&(this->AllPreviewCVars).field_0x20 = 0;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x28 = 0;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x34 = 0;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AllPreviewCVars).field_0x40 = 0;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x48 = 0;
  this->PreviewMemorySizeBucket = Default;
  return this;
}

// UDeviceProfile @ 147abda00

UDeviceProfile * __thiscall
UDeviceProfile::UDeviceProfile(UDeviceProfile *this,FObjectInitializer *param_1)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  UTextureLODSettings::UTextureLODSettings((UTextureLODSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UDeviceProfile__6B_;
  (this->DeviceType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceType).Data.ArrayNum = 0;
  (this->DeviceType).Data.ArrayMax = 0;
  (this->BaseProfileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseProfileName).Data.ArrayNum = 0;
  (this->BaseProfileName).Data.ArrayMax = 0;
  (this->Parent).field0_0x0.DebugPtr = (UDeviceProfile *)0x0;
  (this->ConfigPlatform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigPlatform).Data.ArrayNum = 0;
  (this->ConfigPlatform).Data.ArrayMax = 0;
  (this->FragmentIncludes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentIncludes).ArrayNum = 0;
  (this->FragmentIncludes).ArrayMax = 0;
  (this->CVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVars).ArrayNum = 0;
  (this->CVars).ArrayMax = 0;
  (this->MatchingRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatchingRules).ArrayNum = 0;
  (this->MatchingRules).ArrayMax = 0;
  *(undefined8 *)&this->CVarsUpdatedDelegate = 0;
  *(undefined8 *)&(this->CVarsUpdatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CVarsUpdatedDelegate).field_0x10 = 0;
  (this->SelectedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedFragments).ArrayNum = 0;
  (this->SelectedFragments).ArrayMax = 0;
  *(undefined8 *)&this->AllExpandedCVars = 0;
  *(undefined8 *)&(this->AllExpandedCVars).field_0x8 = 0;
  *(undefined8 *)&(this->AllExpandedCVars).field_0x20 = 0;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x28 = 0;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x34 = 0;
  *(undefined8 *)&(this->AllExpandedCVars).field_0x40 = 0;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x48 = 0;
  *(undefined8 *)&this->AllPreviewCVars = 0;
  *(undefined8 *)&(this->AllPreviewCVars).field_0x8 = 0;
  *(undefined8 *)&(this->AllPreviewCVars).field_0x20 = 0;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x28 = 0;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x34 = 0;
  *(undefined8 *)&(this->AllPreviewCVars).field_0x40 = 0;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x48 = 0;
  this->PreviewMemorySizeBucket = Default;
  ::FString::operator=(&this->BaseProfileName,L"");
  ::FString::operator=(&this->DeviceType,L"");
  this->bIsVisibleForAssets = 0;
  this->bVisible = true;
  pFVar1 = FPaths::EngineConfigDir(&local_28);
  ::FString::ConcatFC(&local_18,pFVar1,L"Deviceprofiles.ini");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UDeviceProfile @ 147abfa00

void __thiscall UDeviceProfile::~UDeviceProfile(UDeviceProfile *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDeviceProfile__6B_;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllPreviewCVars).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllPreviewCVars);
  *(undefined4 *)&(this->AllExpandedCVars).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllExpandedCVars).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllExpandedCVars);
  DestructItems<FSelectedFragmentProperties,int>
            ((FSelectedFragmentProperties *)(this->SelectedFragments).AllocatorInstance.Data,
             (this->SelectedFragments).ArrayNum);
  pFVar2 = (this->SelectedFragments).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CVarsUpdatedDelegate);
  pvVar1 = *(void **)&(this->CVarsUpdatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CVarsUpdatedDelegate);
  DestructItems<FDPMatchingRulestruct,int>
            ((FDPMatchingRulestruct *)(this->MatchingRules).AllocatorInstance.Data,
             (this->MatchingRules).ArrayNum);
  pFVar2 = (this->MatchingRules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>((FString *)(this->CVars).AllocatorInstance.Data,(this->CVars).ArrayNum)
  ;
  pFVar2 = (this->CVars).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->FragmentIncludes).AllocatorInstance.Data,
             (this->FragmentIncludes).ArrayNum);
  pFVar2 = (this->FragmentIncludes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConfigPlatform).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BaseProfileName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DeviceType).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UTextureLODSettings::~UTextureLODSettings((UTextureLODSettings *)this);
  return;
}

// operator() @ 147ac1bd0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
`UDeviceProfile::ExpandDeviceProfileCVars'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2,EConsoleVariableFlags param_3)

{
  bool bVar1;
  FString *local_18;
  FString *local_10;
  
  bVar1 = ::FString::StartsWith(param_1,L"sg.",3,IgnoreCase);
  if (!bVar1) {
    local_18 = param_1;
    local_10 = param_2;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0xe0),
               (TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000020,
               (bool *)&local_18);
  }
  if ((param_3 >> 8 & 1) != 0) {
    local_18 = param_1;
    local_10 = param_2;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0x130),
               (TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000020,
               (bool *)&local_18);
  }
  return;
}

// BeginDestroy @ 147ac78f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDeviceProfile::BeginDestroy(UDeviceProfile *this)

{
  FName local_res10 [3];
  FString local_18;
  
  if (5 < (byte)LogDeviceProfile._0_1_) {
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDeviceProfile);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ClearAllExpandedCVars @ 147acab00

void __thiscall UDeviceProfile::ClearAllExpandedCVars(UDeviceProfile *this)

{
  undefined1 *puVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar2
  ;
  int iVar3;
  bool bVar4;
  
  pTVar2 = &this->AllExpandedCVars;
  bVar4 = 1 < *(int *)&(this->AllExpandedCVars).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar2,0,*(int *)&(this->AllExpandedCVars).field_0x8);
  puVar1 = &(this->AllExpandedCVars).field_0xc;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AllExpandedCVars).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x34 = 0;
  iVar3 = *(int *)&(this->AllExpandedCVars).field_0x2c;
  *(undefined4 *)&(this->AllExpandedCVars).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AllExpandedCVars).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllExpandedCVars).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->AllExpandedCVars).field_0x48 = 1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2);
  }
  pTVar2 = &this->AllPreviewCVars;
  bVar4 = 1 < *(int *)&(this->AllPreviewCVars).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar2,0,*(int *)&(this->AllPreviewCVars).field_0x8);
  puVar1 = &(this->AllPreviewCVars).field_0xc;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AllPreviewCVars).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x34 = 0;
  iVar3 = *(int *)&(this->AllPreviewCVars).field_0x2c;
  *(undefined4 *)&(this->AllPreviewCVars).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AllPreviewCVars).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllPreviewCVars).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->AllPreviewCVars).field_0x48 = 1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2);
  }
  return;
}

// ExpandDeviceProfileCVars @ 147ada250

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall UDeviceProfile::ExpandDeviceProfileCVars(UDeviceProfile *this)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  UDeviceProfile *local_res8;
  FName local_res10;
  FName local_res18 [2];
  code *local_28;
  UDeviceProfile **local_20;
  FString local_18;
  
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDeviceProfile::ExpandDeviceProfileCVars'::__l2::<lambda_1>,void,FString_const_&,FString_const_&,enum_EConsoleVariableFlags>
             ::Call;
  local_res10 = (FName)this->_padding_;
  local_res8 = this;
  ::FName::ToString(&local_res10,&local_18);
  if ((this->DeviceType).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->DeviceType).Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res18,pwVar2);
  IConsoleManager::VisitPlatformCVarsForEmulation
            (*pFVar1,&local_18,
             (TFunctionRef<void___cdecl(FString_const_&,FString_const_&,EConsoleVariableFlags)> *)
             &local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GatherParentCVarInformationRecursively @ 147ae22c0

void __thiscall
UDeviceProfile::GatherParentCVarInformationRecursively
          (UDeviceProfile *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TPairInitializer<FString_const_&,FString_&&> local_res18;
  FString local_88;
  FString local_78;
  FString local_68;
  FString *local_58;
  FString *local_50;
  FString local_48;
  
  if (1 < (this->BaseProfileName).Data.ArrayNum) {
    do {
      this = GetParentProfile(this,false);
      if ((this == (UDeviceProfile *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentProfile != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DeviceProfiles\\DeviceProfile.cpp"
                             ,0x36,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->CVars).ArrayNum;
      this_00 = (this->CVars).AllocatorInstance.Data;
      pFVar10 = this_00 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((this->CVars).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (this_00 == pFVar10) break;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        ::FString::FString(&local_68,L"=");
        bVar4 = ::FString::Split((FString *)this_00,&local_68,&local_88,&local_78);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_88.Data.ArrayNum != 0) {
            FVar8.Data = local_88.Data.AllocatorInstance.Data;
          }
          iVar6 = local_88.Data.ArrayNum + -1;
          if (local_88.Data.ArrayNum == 0) {
            iVar6 = 0;
          }
          uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar8.Data);
          iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                              *)param_1,uVar5,&local_88);
          if (iVar6 != -1) {
            lVar1 = *(longlong *)param_1 + (longlong)iVar6 * 0x28;
            lVar7 = lVar1 + 0x10;
            if (lVar1 == 0) {
              lVar7 = 0;
            }
            if (lVar7 != 0) goto LAB_147ae2456;
          }
          if (*(int *)(this_00 + 8) == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)&this_00->field_0x0;
          }
          ::FString::FString(&local_48,pwVar9);
          local_58 = &local_88;
          local_50 = &local_48;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)param_1,&local_res18,(bool *)&local_58);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
LAB_147ae2456:
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        this_00 = this_00 + 0x10;
      }
    } while (1 < (this->BaseProfileName).Data.ArrayNum);
  }
  return;
}

// GetAllExpandedCVars @ 147ae2b90

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall UDeviceProfile::GetAllExpandedCVars(UDeviceProfile *this)

{
  if (*(int *)&(this->AllExpandedCVars).field_0x8 == *(int *)&(this->AllExpandedCVars).field_0x34) {
    ExpandDeviceProfileCVars(this);
  }
  return &this->AllExpandedCVars;
}

// GetAllPreviewCVars @ 147ae2dd0

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall UDeviceProfile::GetAllPreviewCVars(UDeviceProfile *this)

{
  if (*(int *)&(this->AllPreviewCVars).field_0x8 == *(int *)&(this->AllPreviewCVars).field_0x34) {
    ExpandDeviceProfileCVars(this);
  }
  return &this->AllPreviewCVars;
}

// GetConfigOverridePlatform @ 147ae4ac0

wchar_t * __thiscall UDeviceProfile::GetConfigOverridePlatform(UDeviceProfile *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->ConfigPlatform).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      return (wchar_t *)(this->ConfigPlatform).Data.AllocatorInstance.Data;
    }
    return L"";
  }
  return (wchar_t *)0x0;
}

// GetFragmentByTag @ 147ae8450

FSelectedFragmentProperties * __thiscall
UDeviceProfile::GetFragmentByTag(UDeviceProfile *this,FName *param_1)

{
  int iVar1;
  FSelectedFragmentProperties *pFVar2;
  FSelectedFragmentProperties *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SelectedFragments).ArrayNum;
  pFVar2 = (FSelectedFragmentProperties *)(this->SelectedFragments).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->SelectedFragments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSelectedFragmentProperties_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->Tag == *param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FSelectedFragmentProperties *)0x0;
}

// GetParentProfile @ 147aea4d0

UDeviceProfile * __thiscall UDeviceProfile::GetParentProfile(UDeviceProfile *this,bool param_1)

{
  UDeviceProfile *pUVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UDeviceProfile *pUVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FName local_res8;
  TStringView<wchar_t> local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar7 = (UDeviceProfile *)0x0;
  if ((this->_padding_ & 0x10) != 0) {
    return (UDeviceProfile *)0x0;
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDeviceProfile *)0x0) {
    return pUVar1;
  }
  if ((this->BaseProfileName).Data.ArrayNum < 2) {
LAB_147aea567:
    bVar9 = false;
    if (param_1) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_28);
      bVar9 = true;
      pFVar8 = (FScriptContainerElement *)L"";
      if (local_28.Size != 0) {
        pFVar8 = (FScriptContainerElement *)local_28.DataPtr;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar8,L"GlobalDefaults");
      if (iVar3 != 0) {
        bVar2 = true;
        goto LAB_147aea5ae;
      }
    }
  }
  else {
    local_28.DataPtr = (wchar_t *)(this->BaseProfileName).Data.AllocatorInstance.Data;
    iVar3 = 0;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen(local_28.DataPtr);
      iVar3 = (int)sVar4;
    }
    local_28.Size = iVar3;
    pUVar5 = GetTransientPackage();
    pUVar6 = StaticClass();
    pUVar7 = (UDeviceProfile *)StaticFindObject(pUVar6,(UObject *)pUVar5,&local_28,None);
    bVar9 = false;
    if (pUVar7 == (UDeviceProfile *)0x0) goto LAB_147aea567;
  }
  bVar2 = false;
LAB_147aea5ae:
  if ((bVar9) && ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.DataPtr);
  }
  if (bVar2) {
    local_28.DataPtr = L"GlobalDefaults";
    local_28.Size = 0xe;
    pUVar5 = GetTransientPackage();
    pUVar6 = StaticClass();
    pUVar7 = (UDeviceProfile *)StaticFindObject(pUVar6,(UObject *)pUVar5,&local_28,None);
  }
  return pUVar7;
}

// GetPreviewMemorySizeBucket @ 147aeae30

EPlatformMemorySizeBucket __thiscall
UDeviceProfile::GetPreviewMemorySizeBucket(UDeviceProfile *this)

{
  return this->PreviewMemorySizeBucket;
}

// GetPrivateStaticClass @ 147aeb950

UClass * __cdecl UDeviceProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeviceProfile",
               &Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton,
               StaticRegisterNativesUDeviceProfile,0x188,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"DeviceProfiles",InternalConstructor<UDeviceProfile>,
               InternalVTableHelperCtorCaller<UDeviceProfile>,local_res8,
               UTextureLODSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeviceProfile.InnerSingleton;
}

// GetTextureLODSettings @ 147aeee90

UTextureLODSettings * __thiscall UDeviceProfile::GetTextureLODSettings(UDeviceProfile *this)

{
  if ((UDeviceProfile *)this->_padding_ != (UDeviceProfile *)0x0) {
    this = (UDeviceProfile *)this->_padding_;
  }
  return (UTextureLODSettings *)this;
}

// PostReloadConfig @ 147afccb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDeviceProfile::PostReloadConfig(UDeviceProfile *this,FProperty *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FNameEntryId FVar13;
  UDeviceProfile *pUVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  FIdentityFunctor aFStackX_8 [8];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  FTextureLODGroup FStack_c8;
  
  AlgoImpl::
  IntroSortInternal<FTextureLODGroup,int,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,_UDeviceProfile::ValidateTextureLODGroups_::__l2::<lambda_1>_>_>
            ((FTextureLODGroup *)this->_padding_,(int)this->_padding_,aFStackX_8[0],
             (<lambda_1> *)aFStackX_8);
  pUVar14 = GetParentProfile(this,true);
  uVar10 = _UNK_15185d588;
  uVar9 = ___xmm_ffffffffffffffff0000000000000020;
  uVar8 = _UNK_15185d528;
  uVar7 = ___xmm_0000100000000001ffffffff00000000;
  uVar6 = _UNK_15076adc8;
  uVar5 = ___xmm_0000000000000000ffffffffffffffff;
  uVar18 = 0;
  lVar17 = 0;
  do {
    iVar12 = (int)this->_padding_;
    if (iVar12 < (int)(uVar18 + 1)) {
LAB_147b22ef3:
      if ((pUVar14 == (UDeviceProfile *)0x0) || ((int)pUVar14->_padding_ <= (int)uVar18)) {
        FStack_c8.Group.Value = '\0';
        FStack_c8.MipGenSettings.Value = '\x01';
        FStack_c8.MipLoadOptions = AllMips;
        FStack_c8.MaxLODMipCount = (int)uVar9;
        FStack_c8.LODBias = (int)((ulonglong)uVar9 >> 0x20);
        FStack_c8.LODBias_Smaller = (int)uVar10;
        FStack_c8.LODBias_Smallest = (int)((ulonglong)uVar10 >> 0x20);
        FStack_c8.OptionalMaxLODSize = 0x1000;
        FStack_c8.LODBias_VT = (int)uVar7;
        FStack_c8.NumStreamedMips = (int)((ulonglong)uVar7 >> 0x20);
        FStack_c8.MinLODSize = (int)uVar8;
        FStack_c8.MaxLODSize = (int)((ulonglong)uVar8 >> 0x20);
        FStack_c8.MaxLODSize_Smaller = (int)uVar5;
        FStack_c8.MaxLODSize_Smallest = (int)((ulonglong)uVar5 >> 0x20);
        FStack_c8.MaxLODSize_VT = (int)uVar6;
        FStack_c8.OptionalLODBias = (int)((ulonglong)uVar6 >> 0x20);
        FVar13 = FNameEntryId::FromValidEName((EName)auStackX_10);
        FStack_c8.MinMagFilter.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
        FStack_c8.MinMagFilter.Number = 0;
        FVar13 = FNameEntryId::FromValidEName((EName)auStackX_18);
        FStack_c8.MipFilter.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
        FStack_c8._72_1_ = FStack_c8._72_1_ & 0xf8;
        FStack_c8.MipFilter.Number = 0;
        FStack_c8.DownscaleOptions = Default;
        FStack_c8.LossyCompressionAmount.Value = '\0';
        FStack_c8.Downscale = 1.0;
        FStack_c8.VirtualTextureTileCountBias = 0;
        FStack_c8.VirtualTextureTileSizeBias = 0;
        FStack_c8.MaxAniso = 0;
        FTextureLODGroup::SetupGroup(&FStack_c8);
        if (((FTextureLODGroup *)this->_padding_ <= &FStack_c8) &&
           (&FStack_c8 <
            (FTextureLODGroup *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar12 = (int)this->_padding_;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x460,(ForAnyElementType *)&this->_padding_,piVar2);
        }
        *(int *)&this->_padding_ = iVar12 + 1;
        pvVar16 = (void *)(this->_padding_ + lVar17);
        memmove((void *)((longlong)pvVar16 + 0x60),pvVar16,(longlong)(int)(iVar12 - uVar18) * 0x60);
        lVar15 = this->_padding_;
        *(undefined8 *)(lVar17 + lVar15) =
             CONCAT44(FStack_c8.MaxLODMipCount,
                      CONCAT22(FStack_c8._2_2_,CONCAT11(FStack_c8.Filter,FStack_c8.Group.Value)));
        ((undefined8 *)(lVar17 + lVar15))[1] = CONCAT44(FStack_c8.LODBias_Smaller,FStack_c8.LODBias)
        ;
        puVar19 = (undefined8 *)(lVar17 + 0x10 + lVar15);
        *puVar19 = CONCAT44(FStack_c8.LODBias_VT,FStack_c8.LODBias_Smallest);
        puVar19[1] = CONCAT44(FStack_c8.MinLODSize,FStack_c8.NumStreamedMips);
        puVar19 = (undefined8 *)(lVar17 + 0x20 + lVar15);
        *puVar19 = CONCAT44(FStack_c8.MaxLODSize_Smaller,FStack_c8.MaxLODSize);
        puVar19[1] = CONCAT44(FStack_c8.MaxLODSize_VT,FStack_c8.MaxLODSize_Smallest);
        puVar19 = (undefined8 *)(lVar17 + 0x30 + lVar15);
        *puVar19 = CONCAT44(FStack_c8.OptionalMaxLODSize,FStack_c8.OptionalLODBias);
        puVar19[1] = CONCAT44(FStack_c8.MinMagFilter.Number,
                              FStack_c8.MinMagFilter.ComparisonIndex.Value);
        puVar19 = (undefined8 *)(lVar17 + 0x40 + lVar15);
        *puVar19 = CONCAT44(FStack_c8.MipFilter.Number,FStack_c8.MipFilter.ComparisonIndex.Value);
        puVar19[1] = CONCAT44(FStack_c8.Downscale,
                              CONCAT13(FStack_c8._75_1_,CONCAT21(FStack_c8._73_2_,FStack_c8._72_1_))
                             );
        iVar12 = FStack_c8.VirtualTextureTileCountBias;
        iVar20 = FStack_c8.VirtualTextureTileSizeBias;
        iVar21 = FStack_c8._88_4_;
        iVar22 = FStack_c8.MaxAniso;
      }
      else {
        puVar19 = (undefined8 *)(pUVar14->_padding_ + lVar17);
        if (((undefined8 *)this->_padding_ <= puVar19) &&
           (puVar19 < (undefined8 *)this->_padding_ +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar12 = (int)this->_padding_;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x460,(ForAnyElementType *)&this->_padding_,piVar2);
        }
        *(int *)&this->_padding_ = iVar12 + 1;
        pvVar16 = (void *)(this->_padding_ + lVar17);
        memmove((void *)((longlong)pvVar16 + 0x60),pvVar16,(longlong)(int)(iVar12 - uVar18) * 0x60);
        uVar4 = puVar19[1];
        lVar15 = this->_padding_;
        *(undefined8 *)(lVar17 + lVar15) = *puVar19;
        ((undefined8 *)(lVar17 + lVar15))[1] = uVar4;
        uVar4 = puVar19[3];
        puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar15);
        *puVar1 = puVar19[2];
        puVar1[1] = uVar4;
        uVar4 = puVar19[5];
        puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar15);
        *puVar1 = puVar19[4];
        puVar1[1] = uVar4;
        uVar4 = puVar19[7];
        puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar15);
        *puVar1 = puVar19[6];
        puVar1[1] = uVar4;
        uVar4 = puVar19[9];
        puVar1 = (undefined8 *)(lVar17 + 0x40 + lVar15);
        *puVar1 = puVar19[8];
        puVar1[1] = uVar4;
        iVar12 = *(int *)(puVar19 + 10);
        iVar20 = *(int *)((longlong)puVar19 + 0x54);
        iVar21 = *(int *)(puVar19 + 0xb);
        iVar22 = *(int *)((longlong)puVar19 + 0x5c);
      }
      piVar2 = (int *)(lVar17 + 0x50 + lVar15);
      *piVar2 = iVar12;
      piVar2[1] = iVar20;
      piVar2[2] = iVar21;
      piVar2[3] = iVar22;
      if ((int)this->_padding_ <= (int)uVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(char *)(lVar17 + this->_padding_) = (char)uVar18;
    }
    else {
      if (iVar12 <= (int)uVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar18 < *(byte *)(lVar17 + this->_padding_)) goto LAB_147b22ef3;
    }
    uVar18 = uVar18 + 1;
    lVar17 = lVar17 + 0x60;
    if (0x51 < (int)uVar18) {
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,1);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,2);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,3);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,4);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,5);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,6);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,7);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,8);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,9);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,10);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xb);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xc);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xd);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xe);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xf);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x10);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x11);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x12);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x13);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x14);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x15);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x16);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x17);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x18);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x19);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x20);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x21);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x22);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x23);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x24);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x25);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x26);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x27);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x28);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x29);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x30);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x31);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x32);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x33);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x34);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x35);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x36);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x37);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x38);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x39);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x40);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x41);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x42);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x43);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x44);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x45);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x46);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x47);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x48);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x49);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x50);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x51);
      return;
    }
  } while( true );
}

// SetPreviewMemorySizeBucket @ 147b13eb0

void __thiscall
UDeviceProfile::SetPreviewMemorySizeBucket(UDeviceProfile *this,EPlatformMemorySizeBucket param_1)

{
  if (this->PreviewMemorySizeBucket != param_1) {
    this->PreviewMemorySizeBucket = param_1;
    ClearAllExpandedCVars(this);
    return;
  }
  return;
}

// StaticRegisterNativesUDeviceProfile @ 147b17300

void __cdecl UDeviceProfile::StaticRegisterNativesUDeviceProfile(void)

{
  return;
}

// ValidateProfile @ 147b22e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDeviceProfile::ValidateProfile(UDeviceProfile *this)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FNameEntryId FVar13;
  UDeviceProfile *pUVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  FIdentityFunctor aFStackX_8 [8];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  FTextureLODGroup FStack_c8;
  
  AlgoImpl::
  IntroSortInternal<FTextureLODGroup,int,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,_UDeviceProfile::ValidateTextureLODGroups_::__l2::<lambda_1>_>_>
            ((FTextureLODGroup *)this->_padding_,(int)this->_padding_,aFStackX_8[0],
             (<lambda_1> *)aFStackX_8);
  pUVar14 = GetParentProfile(this,true);
  uVar10 = _UNK_15185d588;
  uVar9 = ___xmm_ffffffffffffffff0000000000000020;
  uVar8 = _UNK_15185d528;
  uVar7 = ___xmm_0000100000000001ffffffff00000000;
  uVar6 = _UNK_15076adc8;
  uVar5 = ___xmm_0000000000000000ffffffffffffffff;
  uVar18 = 0;
  lVar17 = 0;
  do {
    iVar12 = (int)this->_padding_;
    if (iVar12 < (int)(uVar18 + 1)) {
LAB_147b22ef3:
      if ((pUVar14 == (UDeviceProfile *)0x0) || ((int)pUVar14->_padding_ <= (int)uVar18)) {
        FStack_c8.Group.Value = '\0';
        FStack_c8.MipGenSettings.Value = '\x01';
        FStack_c8.MipLoadOptions = AllMips;
        FStack_c8.MaxLODMipCount = (int)uVar9;
        FStack_c8.LODBias = (int)((ulonglong)uVar9 >> 0x20);
        FStack_c8.LODBias_Smaller = (int)uVar10;
        FStack_c8.LODBias_Smallest = (int)((ulonglong)uVar10 >> 0x20);
        FStack_c8.OptionalMaxLODSize = 0x1000;
        FStack_c8.LODBias_VT = (int)uVar7;
        FStack_c8.NumStreamedMips = (int)((ulonglong)uVar7 >> 0x20);
        FStack_c8.MinLODSize = (int)uVar8;
        FStack_c8.MaxLODSize = (int)((ulonglong)uVar8 >> 0x20);
        FStack_c8.MaxLODSize_Smaller = (int)uVar5;
        FStack_c8.MaxLODSize_Smallest = (int)((ulonglong)uVar5 >> 0x20);
        FStack_c8.MaxLODSize_VT = (int)uVar6;
        FStack_c8.OptionalLODBias = (int)((ulonglong)uVar6 >> 0x20);
        FVar13 = FNameEntryId::FromValidEName((EName)auStackX_10);
        FStack_c8.MinMagFilter.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
        FStack_c8.MinMagFilter.Number = 0;
        FVar13 = FNameEntryId::FromValidEName((EName)auStackX_18);
        FStack_c8.MipFilter.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
        FStack_c8._72_1_ = FStack_c8._72_1_ & 0xf8;
        FStack_c8.MipFilter.Number = 0;
        FStack_c8.DownscaleOptions = Default;
        FStack_c8.LossyCompressionAmount.Value = '\0';
        FStack_c8.Downscale = 1.0;
        FStack_c8.VirtualTextureTileCountBias = 0;
        FStack_c8.VirtualTextureTileSizeBias = 0;
        FStack_c8.MaxAniso = 0;
        FTextureLODGroup::SetupGroup(&FStack_c8);
        if (((FTextureLODGroup *)this->_padding_ <= &FStack_c8) &&
           (&FStack_c8 <
            (FTextureLODGroup *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar12 = (int)this->_padding_;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x460,(ForAnyElementType *)&this->_padding_,piVar2);
        }
        *(int *)&this->_padding_ = iVar12 + 1;
        pvVar16 = (void *)(this->_padding_ + lVar17);
        memmove((void *)((longlong)pvVar16 + 0x60),pvVar16,(longlong)(int)(iVar12 - uVar18) * 0x60);
        lVar15 = this->_padding_;
        *(undefined8 *)(lVar17 + lVar15) =
             CONCAT44(FStack_c8.MaxLODMipCount,
                      CONCAT22(FStack_c8._2_2_,CONCAT11(FStack_c8.Filter,FStack_c8.Group.Value)));
        ((undefined8 *)(lVar17 + lVar15))[1] = CONCAT44(FStack_c8.LODBias_Smaller,FStack_c8.LODBias)
        ;
        puVar19 = (undefined8 *)(lVar17 + 0x10 + lVar15);
        *puVar19 = CONCAT44(FStack_c8.LODBias_VT,FStack_c8.LODBias_Smallest);
        puVar19[1] = CONCAT44(FStack_c8.MinLODSize,FStack_c8.NumStreamedMips);
        puVar19 = (undefined8 *)(lVar17 + 0x20 + lVar15);
        *puVar19 = CONCAT44(FStack_c8.MaxLODSize_Smaller,FStack_c8.MaxLODSize);
        puVar19[1] = CONCAT44(FStack_c8.MaxLODSize_VT,FStack_c8.MaxLODSize_Smallest);
        puVar19 = (undefined8 *)(lVar17 + 0x30 + lVar15);
        *puVar19 = CONCAT44(FStack_c8.OptionalMaxLODSize,FStack_c8.OptionalLODBias);
        puVar19[1] = CONCAT44(FStack_c8.MinMagFilter.Number,
                              FStack_c8.MinMagFilter.ComparisonIndex.Value);
        puVar19 = (undefined8 *)(lVar17 + 0x40 + lVar15);
        *puVar19 = CONCAT44(FStack_c8.MipFilter.Number,FStack_c8.MipFilter.ComparisonIndex.Value);
        puVar19[1] = CONCAT44(FStack_c8.Downscale,
                              CONCAT13(FStack_c8._75_1_,CONCAT21(FStack_c8._73_2_,FStack_c8._72_1_))
                             );
        iVar12 = FStack_c8.VirtualTextureTileCountBias;
        iVar20 = FStack_c8.VirtualTextureTileSizeBias;
        iVar21 = FStack_c8._88_4_;
        iVar22 = FStack_c8.MaxAniso;
      }
      else {
        puVar19 = (undefined8 *)(pUVar14->_padding_ + lVar17);
        if (((undefined8 *)this->_padding_ <= puVar19) &&
           (puVar19 < (undefined8 *)this->_padding_ +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar12 = (int)this->_padding_;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x460,(ForAnyElementType *)&this->_padding_,piVar2);
        }
        *(int *)&this->_padding_ = iVar12 + 1;
        pvVar16 = (void *)(this->_padding_ + lVar17);
        memmove((void *)((longlong)pvVar16 + 0x60),pvVar16,(longlong)(int)(iVar12 - uVar18) * 0x60);
        uVar4 = puVar19[1];
        lVar15 = this->_padding_;
        *(undefined8 *)(lVar17 + lVar15) = *puVar19;
        ((undefined8 *)(lVar17 + lVar15))[1] = uVar4;
        uVar4 = puVar19[3];
        puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar15);
        *puVar1 = puVar19[2];
        puVar1[1] = uVar4;
        uVar4 = puVar19[5];
        puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar15);
        *puVar1 = puVar19[4];
        puVar1[1] = uVar4;
        uVar4 = puVar19[7];
        puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar15);
        *puVar1 = puVar19[6];
        puVar1[1] = uVar4;
        uVar4 = puVar19[9];
        puVar1 = (undefined8 *)(lVar17 + 0x40 + lVar15);
        *puVar1 = puVar19[8];
        puVar1[1] = uVar4;
        iVar12 = *(int *)(puVar19 + 10);
        iVar20 = *(int *)((longlong)puVar19 + 0x54);
        iVar21 = *(int *)(puVar19 + 0xb);
        iVar22 = *(int *)((longlong)puVar19 + 0x5c);
      }
      piVar2 = (int *)(lVar17 + 0x50 + lVar15);
      *piVar2 = iVar12;
      piVar2[1] = iVar20;
      piVar2[2] = iVar21;
      piVar2[3] = iVar22;
      if ((int)this->_padding_ <= (int)uVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(char *)(lVar17 + this->_padding_) = (char)uVar18;
    }
    else {
      if (iVar12 <= (int)uVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar18 < *(byte *)(lVar17 + this->_padding_)) goto LAB_147b22ef3;
    }
    uVar18 = uVar18 + 1;
    lVar17 = lVar17 + 0x60;
    if (0x51 < (int)uVar18) {
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,1);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,2);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,3);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,4);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,5);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,6);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,7);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,8);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,9);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,10);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xb);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xc);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xd);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xe);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xf);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x10);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x11);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x12);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x13);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x14);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x15);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x16);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x17);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x18);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x19);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x20);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x21);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x22);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x23);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x24);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x25);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x26);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x27);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x28);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x29);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x30);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x31);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x32);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x33);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x34);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x35);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x36);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x37);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x38);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x39);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x40);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x41);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x42);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x43);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x44);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x45);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x46);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x47);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x48);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x49);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x50);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x51);
      return;
    }
  } while( true );
}

// ValidateTextureLODGroups @ 147b22e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDeviceProfile::ValidateTextureLODGroups(UDeviceProfile *this)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FNameEntryId FVar13;
  UDeviceProfile *pUVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FTextureLODGroup local_c8;
  
  AlgoImpl::
  IntroSortInternal<FTextureLODGroup,int,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,_UDeviceProfile::ValidateTextureLODGroups_::__l2::<lambda_1>_>_>
            ((FTextureLODGroup *)this->_padding_,(int)this->_padding_,local_res8[0],
             (<lambda_1> *)local_res8);
  pUVar14 = GetParentProfile(this,true);
  uVar10 = _UNK_15185d588;
  uVar9 = ___xmm_ffffffffffffffff0000000000000020;
  uVar8 = _UNK_15185d528;
  uVar7 = ___xmm_0000100000000001ffffffff00000000;
  uVar6 = _UNK_15076adc8;
  uVar5 = ___xmm_0000000000000000ffffffffffffffff;
  uVar18 = 0;
  lVar17 = 0;
  do {
    iVar12 = (int)this->_padding_;
    if (iVar12 < (int)(uVar18 + 1)) {
LAB_147b22ef3:
      if ((pUVar14 == (UDeviceProfile *)0x0) || ((int)pUVar14->_padding_ <= (int)uVar18)) {
        local_c8.Group.Value = '\0';
        local_c8.MipGenSettings.Value = '\x01';
        local_c8.MipLoadOptions = AllMips;
        local_c8.MaxLODMipCount = (int)uVar9;
        local_c8.LODBias = (int)((ulonglong)uVar9 >> 0x20);
        local_c8.LODBias_Smaller = (int)uVar10;
        local_c8.LODBias_Smallest = (int)((ulonglong)uVar10 >> 0x20);
        local_c8.OptionalMaxLODSize = 0x1000;
        local_c8.LODBias_VT = (int)uVar7;
        local_c8.NumStreamedMips = (int)((ulonglong)uVar7 >> 0x20);
        local_c8.MinLODSize = (int)uVar8;
        local_c8.MaxLODSize = (int)((ulonglong)uVar8 >> 0x20);
        local_c8.MaxLODSize_Smaller = (int)uVar5;
        local_c8.MaxLODSize_Smallest = (int)((ulonglong)uVar5 >> 0x20);
        local_c8.MaxLODSize_VT = (int)uVar6;
        local_c8.OptionalLODBias = (int)((ulonglong)uVar6 >> 0x20);
        FVar13 = FNameEntryId::FromValidEName((EName)local_res10);
        local_c8.MinMagFilter.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
        local_c8.MinMagFilter.Number = 0;
        FVar13 = FNameEntryId::FromValidEName((EName)local_res18);
        local_c8.MipFilter.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
        local_c8._72_1_ = local_c8._72_1_ & 0xf8;
        local_c8.MipFilter.Number = 0;
        local_c8.DownscaleOptions = Default;
        local_c8.LossyCompressionAmount.Value = '\0';
        local_c8.Downscale = 1.0;
        local_c8.VirtualTextureTileCountBias = 0;
        local_c8.VirtualTextureTileSizeBias = 0;
        local_c8.MaxAniso = 0;
        FTextureLODGroup::SetupGroup(&local_c8);
        if (((FTextureLODGroup *)this->_padding_ <= &local_c8) &&
           (&local_c8 <
            (FTextureLODGroup *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar12 = (int)this->_padding_;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x460,(ForAnyElementType *)&this->_padding_,piVar2);
        }
        *(int *)&this->_padding_ = iVar12 + 1;
        pvVar16 = (void *)(this->_padding_ + lVar17);
        memmove((void *)((longlong)pvVar16 + 0x60),pvVar16,(longlong)(int)(iVar12 - uVar18) * 0x60);
        lVar15 = this->_padding_;
        *(undefined8 *)(lVar17 + lVar15) =
             CONCAT44(local_c8.MaxLODMipCount,
                      CONCAT22(local_c8._2_2_,CONCAT11(local_c8.Filter,local_c8.Group.Value)));
        ((undefined8 *)(lVar17 + lVar15))[1] = CONCAT44(local_c8.LODBias_Smaller,local_c8.LODBias);
        puVar19 = (undefined8 *)(lVar17 + 0x10 + lVar15);
        *puVar19 = CONCAT44(local_c8.LODBias_VT,local_c8.LODBias_Smallest);
        puVar19[1] = CONCAT44(local_c8.MinLODSize,local_c8.NumStreamedMips);
        puVar19 = (undefined8 *)(lVar17 + 0x20 + lVar15);
        *puVar19 = CONCAT44(local_c8.MaxLODSize_Smaller,local_c8.MaxLODSize);
        puVar19[1] = CONCAT44(local_c8.MaxLODSize_VT,local_c8.MaxLODSize_Smallest);
        puVar19 = (undefined8 *)(lVar17 + 0x30 + lVar15);
        *puVar19 = CONCAT44(local_c8.OptionalMaxLODSize,local_c8.OptionalLODBias);
        puVar19[1] = CONCAT44(local_c8.MinMagFilter.Number,
                              local_c8.MinMagFilter.ComparisonIndex.Value);
        puVar19 = (undefined8 *)(lVar17 + 0x40 + lVar15);
        *puVar19 = CONCAT44(local_c8.MipFilter.Number,local_c8.MipFilter.ComparisonIndex.Value);
        puVar19[1] = CONCAT44(local_c8.Downscale,
                              CONCAT13(local_c8._75_1_,CONCAT21(local_c8._73_2_,local_c8._72_1_)));
        iVar12 = local_c8.VirtualTextureTileCountBias;
        iVar20 = local_c8.VirtualTextureTileSizeBias;
        iVar21 = local_c8._88_4_;
        iVar22 = local_c8.MaxAniso;
      }
      else {
        puVar19 = (undefined8 *)(pUVar14->_padding_ + lVar17);
        if (((undefined8 *)this->_padding_ <= puVar19) &&
           (puVar19 < (undefined8 *)this->_padding_ +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar12 = (int)this->_padding_;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x460,(ForAnyElementType *)&this->_padding_,piVar2);
        }
        *(int *)&this->_padding_ = iVar12 + 1;
        pvVar16 = (void *)(this->_padding_ + lVar17);
        memmove((void *)((longlong)pvVar16 + 0x60),pvVar16,(longlong)(int)(iVar12 - uVar18) * 0x60);
        uVar4 = puVar19[1];
        lVar15 = this->_padding_;
        *(undefined8 *)(lVar17 + lVar15) = *puVar19;
        ((undefined8 *)(lVar17 + lVar15))[1] = uVar4;
        uVar4 = puVar19[3];
        puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar15);
        *puVar1 = puVar19[2];
        puVar1[1] = uVar4;
        uVar4 = puVar19[5];
        puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar15);
        *puVar1 = puVar19[4];
        puVar1[1] = uVar4;
        uVar4 = puVar19[7];
        puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar15);
        *puVar1 = puVar19[6];
        puVar1[1] = uVar4;
        uVar4 = puVar19[9];
        puVar1 = (undefined8 *)(lVar17 + 0x40 + lVar15);
        *puVar1 = puVar19[8];
        puVar1[1] = uVar4;
        iVar12 = *(int *)(puVar19 + 10);
        iVar20 = *(int *)((longlong)puVar19 + 0x54);
        iVar21 = *(int *)(puVar19 + 0xb);
        iVar22 = *(int *)((longlong)puVar19 + 0x5c);
      }
      piVar2 = (int *)(lVar17 + 0x50 + lVar15);
      *piVar2 = iVar12;
      piVar2[1] = iVar20;
      piVar2[2] = iVar21;
      piVar2[3] = iVar22;
      if ((int)this->_padding_ <= (int)uVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(char *)(lVar17 + this->_padding_) = (char)uVar18;
    }
    else {
      if (iVar12 <= (int)uVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar18 < *(byte *)(lVar17 + this->_padding_)) goto LAB_147b22ef3;
    }
    uVar18 = uVar18 + 1;
    lVar17 = lVar17 + 0x60;
    if (0x51 < (int)uVar18) {
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,1);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,2);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,3);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,4);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,5);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,6);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,7);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,8);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,9);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,10);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xb);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xc);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xd);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xe);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0xf);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x10);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x11);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x12);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x13);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x14);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x15);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x16);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x17);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x18);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x19);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x1f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x20);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x21);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x22);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x23);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x24);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x25);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x26);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x27);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x28);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x29);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x2f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x30);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x31);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x32);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x33);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x34);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x35);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x36);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x37);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x38);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x39);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x3f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x40);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x41);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x42);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x43);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x44);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x45);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x46);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x47);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x48);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x49);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4a);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4b);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4c);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4d);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4e);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x4f);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x50);
      UTextureLODSettings::SetupLODGroup((UTextureLODSettings *)this,0x51);
      return;
    }
  } while( true );
}

