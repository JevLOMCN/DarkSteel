// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 15

// StaticClass @ 14d535710

UClass * __cdecl UCameraDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraDirector",
               &Z_Registration_Info_UClass_UCameraDirector.InnerSingleton,
               StaticRegisterNativesUCameraDirector,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraDirector>,
               InternalVTableHelperCtorCaller<UCameraDirector>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraDirector.InnerSingleton;
}

// UCameraDirector @ 14d543b00

UCameraDirector * __thiscall
UCameraDirector::UCameraDirector(UCameraDirector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraDirector__6B_;
  (this->CameraRigProxyRedirectTable).Entries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraRigProxyRedirectTable).Entries.ArrayNum = 0;
  (this->CameraRigProxyRedirectTable).Entries.ArrayMax = 0;
  (this->CameraRigProxyTable_DEPRECATED).field0_0x0.DebugPtr = (UCameraRigProxyTable *)0x0;
  return this;
}

// UCameraDirector @ 14d543b40

UCameraDirector * __thiscall
UCameraDirector::UCameraDirector(UCameraDirector *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraDirector__6B_;
  (this->CameraRigProxyRedirectTable).Entries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraRigProxyRedirectTable).Entries.ArrayNum = 0;
  (this->CameraRigProxyRedirectTable).Entries.ArrayMax = 0;
  (this->CameraRigProxyTable_DEPRECATED).field0_0x0.DebugPtr = (UCameraRigProxyTable *)0x0;
  return this;
}

// ~UCameraDirector @ 14d544bd0

void __thiscall UCameraDirector::~UCameraDirector(UCameraDirector *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCameraDirector__6B_;
  pFVar1 = (this->CameraRigProxyRedirectTable).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BuildCameraDirector @ 14d549d50

void __thiscall UCameraDirector::BuildCameraDirector(UCameraDirector *this,FCameraBuildLog *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d549d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))();
  return;
}

// BuildEvaluator @ 14d54ca80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluator * __thiscall
UCameraDirector::BuildEvaluator(UCameraDirector *this,FCameraDirectorEvaluatorBuilder *param_1)

{
  FCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = (FCameraDirectorEvaluator *)(**(code **)(this->_padding_ + 0x2b0))();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
    (pFVar1->PrivateCameraDirector).field0_0x0.DebugPtr = this;
    return pFVar1;
  }
  (pFVar1->PrivateCameraDirector).field0_0x0.DebugPtr = this;
  return pFVar1;
}

// ExtendAssetRegistryTags @ 14d553970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCameraDirector::ExtendAssetRegistryTags(UCameraDirector *this,FAssetRegistryTagsContext param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  FName FVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FAssetRegistryTagsContextData *pFVar6;
  FAssetRegistryTagsContext FVar7;
  UPackage *pUVar8;
  void *pvVar9;
  FAssetRegistryTagsContext *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong64 uVar15;
  undefined1 auStackY_348 [32];
  undefined1 local_308 [4];
  FName local_304;
  FAssetRegistryTag local_2f8;
  FAssetRegistryTag local_2d8;
  FName local_2b8;
  FString local_2b0;
  undefined8 local_2a0;
  undefined8 *local_298;
  ulonglong local_290;
  undefined8 *local_288;
  ulonglong local_280;
  FAssetRegistryTagsContextData *local_278;
  FAssetRegistryTagsContext local_270;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_298 = (undefined8 *)0x0;
  local_290 = 0;
  local_288 = (undefined8 *)0x0;
  local_280 = 0;
  local_278 = param_1.Data;
  local_270.Data = (FAssetRegistryTagsContextData *)this;
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_298);
  ::FName::FName(&local_304,L"NumUsedCameraRigs");
  ::FString::PrintfImpl((FString *)&local_2d8,L"%d");
  FVar3 = local_2d8.Name;
  local_2f8.Name = local_304;
  local_2f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Value.Data.ArrayNum = (int)local_2d8.Value.Data.AllocatorInstance.Data;
  if ((int)local_2d8.Value.Data.AllocatorInstance.Data == 0) {
    local_2f8.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_2d8.Value.Data.AllocatorInstance.Data,0,
               (ForAnyElementType *)&local_2f8.Value,
               (int)local_2d8.Value.Data.AllocatorInstance.Data,&local_2f8.Value.Data.ArrayMax);
    memcpy(local_2f8.Value.Data.AllocatorInstance.Data,(void *)FVar3,
           (longlong)(int)local_2d8.Value.Data.AllocatorInstance.Data * 2);
  }
  local_2f8.Type = TT_Alphabetical;
  local_2f8.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_2f8);
  iVar5 = (int)local_290;
  uVar11 = (ulonglong)(int)local_290;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.End = (wchar_t *)local_48;
  puVar1 = local_298 + uVar11;
  puVar13 = local_298;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  while( true ) {
    if ((int)uVar11 != iVar5) {
      `TCheckedPointerIterator<UCameraRigAsset_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_308);
    }
    if (puVar13 == puVar1) break;
    pUVar8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)*puVar13);
    local_304 = (FName)pUVar8->_padding_;
    ::FName::ToString(&local_304,(FString *)&local_2f8);
    FVar3 = local_2f8.Name;
    iVar14 = (int)local_2f8.Value.Data.AllocatorInstance.Data + -1;
    if ((int)local_2f8.Value.Data.AllocatorInstance.Data == 0) {
      iVar14 = 0;
    }
    uVar15 = (ulong64)iVar14;
    if (local_268.End < local_268.CurPos + uVar15) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,uVar15);
    }
    if (iVar14 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_268.CurPos,(void *)FVar3,uVar15 * 2);
      local_268.CurPos = (wchar_t *)((longlong)pvVar9 + uVar15 * 2);
    }
    if (local_2f8.Name != (FName)0x0) {
      FMemory::Free((void *)local_2f8.Name);
    }
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_268.CurPos,L"\n",2);
    uVar11 = local_290 & 0xffffffff;
    local_268.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
    puVar13 = puVar13 + 1;
  }
  local_2a0 = 1;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  ::FName::FName(&local_304,L"UsedCameraRigs");
  FVar3 = local_2d8.Name;
  local_2b8 = local_304;
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FString::operator=(&local_2b0,local_268.Base);
  FVar4.Data = local_2b0.Data.AllocatorInstance.Data;
  lVar12 = (longlong)local_2b0.Data.ArrayNum;
  local_2d8.Name = local_2b8;
  local_2d8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Value.Data.ArrayNum = local_2b0.Data.ArrayNum;
  if (local_2b0.Data.ArrayNum == 0) {
    local_2d8.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2b0.Data.ArrayNum,0,(ForAnyElementType *)&local_2d8.Value,
               local_2b0.Data.ArrayNum,&local_2d8.Value.Data.ArrayMax);
    memcpy(local_2d8.Value.Data.AllocatorInstance.Data,FVar4.Data,lVar12 * 2);
  }
  pFVar6 = local_278;
  local_2d8.Type = (ETagType)local_2a0;
  local_2d8.DisplayFlags = local_2a0._4_4_;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)local_278,&local_2d8);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  if (FVar3 != (FName)0x0) {
    FMemory::Free((void *)FVar3);
  }
  ::FName::FName(&local_304,L"NumUsedCameraRigProxies");
  ::FString::PrintfImpl((FString *)&local_2d8,L"%d");
  FVar3 = local_2d8.Name;
  lVar12 = (longlong)(int)local_2d8.Value.Data.AllocatorInstance.Data;
  local_2f8.Name = local_304;
  local_2f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Value.Data.ArrayNum = (int)local_2d8.Value.Data.AllocatorInstance.Data;
  if ((int)local_2d8.Value.Data.AllocatorInstance.Data == 0) {
    local_2f8.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_2d8.Value.Data.AllocatorInstance.Data,0,
               (ForAnyElementType *)&local_2f8.Value,
               (int)local_2d8.Value.Data.AllocatorInstance.Data,&local_2f8.Value.Data.ArrayMax);
    memcpy(local_2f8.Value.Data.AllocatorInstance.Data,(void *)FVar3,lVar12 * 2);
  }
  local_2f8.Type = TT_Alphabetical;
  local_2f8.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)pFVar6,&local_2f8);
  iVar5 = (int)local_280;
  uVar11 = (ulonglong)(int)local_280;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.End = (wchar_t *)local_48;
  puVar1 = local_288 + uVar11;
  puVar13 = local_288;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  while( true ) {
    if ((int)uVar11 != iVar5) {
      `TCheckedPointerIterator<UCameraRigProxyAsset_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_308);
    }
    if (puVar13 == puVar1) break;
    pUVar8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)*puVar13);
    local_304 = (FName)pUVar8->_padding_;
    ::FName::ToString(&local_304,(FString *)&local_2f8);
    FVar3 = local_2f8.Name;
    iVar14 = (int)local_2f8.Value.Data.AllocatorInstance.Data + -1;
    if ((int)local_2f8.Value.Data.AllocatorInstance.Data == 0) {
      iVar14 = 0;
    }
    uVar15 = (ulong64)iVar14;
    if (local_268.End < local_268.CurPos + uVar15) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,uVar15);
    }
    if (iVar14 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_268.CurPos,(void *)FVar3,uVar15 * 2);
      local_268.CurPos = (wchar_t *)((longlong)pvVar9 + uVar15 * 2);
    }
    if (local_2f8.Name != (FName)0x0) {
      FMemory::Free((void *)local_2f8.Name);
    }
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_268.CurPos,L"\n",2);
    uVar11 = local_280 & 0xffffffff;
    local_268.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
    puVar13 = puVar13 + 1;
  }
  local_2a0 = 1;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  ::FName::FName(&local_304,L"UsedCameraRigProxies");
  FVar3 = local_2d8.Name;
  local_2b8 = local_304;
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FString::operator=(&local_2b0,local_268.Base);
  FVar4.Data = local_2b0.Data.AllocatorInstance.Data;
  lVar12 = (longlong)local_2b0.Data.ArrayNum;
  local_2d8.Name = local_2b8;
  local_2d8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Value.Data.ArrayNum = local_2b0.Data.ArrayNum;
  if (local_2b0.Data.ArrayNum == 0) {
    local_2d8.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2b0.Data.ArrayNum,0,(ForAnyElementType *)&local_2d8.Value,
               local_2b0.Data.ArrayNum,&local_2d8.Value.Data.ArrayMax);
    memcpy(local_2d8.Value.Data.AllocatorInstance.Data,FVar4.Data,lVar12 * 2);
  }
  pFVar6 = local_278;
  local_2d8.Type = (ETagType)local_2a0;
  local_2d8.DisplayFlags = local_2a0._4_4_;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)local_278,&local_2d8);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  if (FVar3 != (FName)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar7.Data = local_270.Data;
  pcVar2 = *(code **)(*(longlong *)&(local_270.Data)->Tags + 0x2c8);
  pFVar10 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                      (&local_270,(FAssetRegistryTagsContext *)pFVar6);
  (*pcVar2)(FVar7.Data,pFVar10);
  if (local_288 != (undefined8 *)0x0) {
    FMemory::Free(local_288);
  }
  if (local_298 != (undefined8 *)0x0) {
    FMemory::Free(local_298);
  }
  return;
}

// GatherRigUsageInfo @ 14d555e60

void __thiscall
UCameraDirector::GatherRigUsageInfo(UCameraDirector *this,FCameraDirectorRigUsageInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d555e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))();
  return;
}

// GetPrivateStaticClass @ 14d5585f0

UClass * __cdecl UCameraDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraDirector",
               &Z_Registration_Info_UClass_UCameraDirector.InnerSingleton,
               StaticRegisterNativesUCameraDirector,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraDirector>,
               InternalVTableHelperCtorCaller<UCameraDirector>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraDirector.InnerSingleton;
}

// OnBuildCameraDirector @ 14d55ae90

void __thiscall
UCameraDirector::OnBuildCameraDirector(UCameraDirector *this,FCameraBuildLog *param_1)

{
  return;
}

// OnBuildEvaluator @ 14d55b560

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluator * __thiscall
UCameraDirector::OnBuildEvaluator(UCameraDirector *this,FCameraDirectorEvaluatorBuilder *param_1)

{
  return (FCameraDirectorEvaluator *)0x0;
}

// OnExtendAssetRegistryTags @ 14d55c5c0

void __thiscall
UCameraDirector::OnExtendAssetRegistryTags(UCameraDirector *this,FAssetRegistryTagsContext param_1)

{
  return;
}

// OnGatherRigUsageInfo @ 14d55c5d0

void __thiscall
UCameraDirector::OnGatherRigUsageInfo(UCameraDirector *this,FCameraDirectorRigUsageInfo *param_1)

{
  return;
}

// PostLoad @ 14d55dc90

void __thiscall UCameraDirector::PostLoad(UCameraDirector *this)

{
  FCameraRigProxyRedirectTable *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UCameraRigProxyTable *pUVar5;
  FCameraRigProxyRedirectTableEntry *pFVar6;
  
  UObject::PostLoad((UObject *)this);
  pUVar5 = (this->CameraRigProxyTable_DEPRECATED).field0_0x0.DebugPtr;
  if (pUVar5 != (UCameraRigProxyTable *)0x0) {
    pFVar1 = &this->CameraRigProxyRedirectTable;
    if (&pFVar1->Entries != &pUVar5->Entries) {
      iVar3 = (this->CameraRigProxyRedirectTable).Entries.ArrayMax;
      piVar2 = &(this->CameraRigProxyRedirectTable).Entries.ArrayMax;
      pFVar6 = (FCameraRigProxyRedirectTableEntry *)(pUVar5->Entries).AllocatorInstance.Data;
      iVar4 = (pUVar5->Entries).ArrayNum;
      (this->CameraRigProxyRedirectTable).Entries.ArrayNum = iVar4;
      if ((iVar4 == 0) && (iVar3 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
        ConstructItems<FCameraRigProxyRedirectTableEntry,FCameraRigProxyRedirectTableEntry,int>
                  ((pFVar1->Entries).AllocatorInstance.Data,pFVar6,iVar4);
      }
    }
    (this->CameraRigProxyTable_DEPRECATED).field0_0x0.DebugPtr = (UCameraRigProxyTable *)0x0;
  }
  return;
}

// StaticRegisterNativesUCameraDirector @ 14d5685a0

void __cdecl UCameraDirector::StaticRegisterNativesUCameraDirector(void)

{
  return;
}

