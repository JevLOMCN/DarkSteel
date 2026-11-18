// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 12

// StaticClass @ 14ea71680

UClass * __cdecl UCompositeCorePluginSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"CompositeCorePluginSettings",
               &Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton,
               StaticRegisterNativesUCompositeCorePluginSettings,0xc0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCompositeCorePluginSettings>,
               InternalVTableHelperCtorCaller<UCompositeCorePluginSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton;
}

// UCompositeCorePluginSettings @ 14ea76be0

UCompositeCorePluginSettings * __thiscall
UCompositeCorePluginSettings::UCompositeCorePluginSettings
          (UCompositeCorePluginSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UCompositeCorePluginSettings__6B_;
  (this->DisabledPrimitiveClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisabledPrimitiveClasses).ArrayNum = 0;
  (this->DisabledPrimitiveClasses).ArrayMax = 0;
  (this->AllowedComponentClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedComponentClasses).ArrayNum = 0;
  (this->AllowedComponentClasses).ArrayMax = 0;
  (this->CachedDisabledPrimitiveClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDisabledPrimitiveClasses).ArrayNum = 0;
  (this->CachedDisabledPrimitiveClasses).ArrayMax = 0;
  (this->CachedAllowedComponentClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAllowedComponentClasses).ArrayNum = 0;
  (this->CachedAllowedComponentClasses).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// UCompositeCorePluginSettings @ 14ea76c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UCompositeCorePluginSettings * __thiscall
UCompositeCorePluginSettings::UCompositeCorePluginSettings(UCompositeCorePluginSettings *this)

{
  undefined1 *puVar1;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *pTVar2;
  FObjectInitializer *pFVar3;
  int iVar4;
  undefined1 auStackY_168 [32];
  TStringView<wchar_t> local_128;
  FString local_118;
  FSoftObjectPath local_108;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FSoftObjectPath local_b8;
  FSoftObjectPath local_98;
  FSoftObjectPath local_78;
  FSoftObjectPath local_58;
  FSoftObjectPath local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar3 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar3);
  this->bApplyPreExposure = 0;
  this->bApplyFXAA = 0;
  this->_padding_ = (longlong)&___7UCompositeCorePluginSettings__6B_;
  pTVar2 = &this->DisabledPrimitiveClasses;
  ::FString::FString(&local_118,"/Script/Engine.CapsuleComponent");
  local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.PackageName.Number = 0;
  local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.AssetName.Number = 0;
  local_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SubPathString.Data.ArrayNum = 0;
  local_b8.SubPathString.Data.ArrayMax = 0;
  iVar4 = 0;
  local_128.Size = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    local_128.Size = iVar4;
  }
  local_128.DataPtr = (wchar_t *)local_118.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_b8,&local_128);
  ::FString::FString((FString *)&local_108,"/Script/Engine.BillboardComponent");
  local_98.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_98.AssetPath.PackageName.Number = 0;
  local_98.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_98.AssetPath.AssetName.Number = 0;
  local_98.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.SubPathString.Data.ArrayNum = 0;
  local_98.SubPathString.Data.ArrayMax = 0;
  local_128.Size = local_108.AssetPath.AssetName.ComparisonIndex.Value - 1;
  if (local_108.AssetPath.AssetName.ComparisonIndex.Value == 0) {
    local_128.Size = iVar4;
  }
  local_128.DataPtr = (wchar_t *)local_108.AssetPath.PackageName;
  FSoftObjectPath::SetPath(&local_98,&local_128);
  ::FString::FString(&local_c8,"/Script/Engine.ArrowComponent");
  local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_78.AssetPath.PackageName.Number = 0;
  local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetPath.AssetName.Number = 0;
  local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.SubPathString.Data.ArrayNum = 0;
  local_78.SubPathString.Data.ArrayMax = 0;
  local_128.Size = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    local_128.Size = iVar4;
  }
  local_128.DataPtr = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_78,&local_128);
  ::FString::FString(&local_d8,"/Script/Engine.DrawFrustumComponent");
  local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_58.AssetPath.PackageName.Number = 0;
  local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_58.AssetPath.AssetName.Number = 0;
  local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.SubPathString.Data.ArrayNum = 0;
  local_58.SubPathString.Data.ArrayMax = 0;
  local_128.Size = local_d8.Data.ArrayNum + -1;
  if (local_d8.Data.ArrayNum == 0) {
    local_128.Size = iVar4;
  }
  local_128.DataPtr = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_58,&local_128);
  ::FString::FString(&local_e8,"/Script/Engine.LineBatchComponent");
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  local_128.Size = local_e8.Data.ArrayNum + -1;
  if (local_e8.Data.ArrayNum == 0) {
    local_128.Size = 0;
  }
  local_128.DataPtr = (wchar_t *)local_e8.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_38,&local_128);
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DisabledPrimitiveClasses).ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,5,0,&pTVar2->AllocatorInstance,5,&(this->DisabledPrimitiveClasses).ArrayMax);
  ConstructItems<FSoftClassPath,FSoftClassPath,int>
            ((pTVar2->AllocatorInstance).Data,(FSoftClassPath *)&local_b8,5);
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_98.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_108.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)local_108.AssetPath.PackageName);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pTVar2 = &this->AllowedComponentClasses;
  ::FString::FString(&local_118,"/Script/Text3D.Text3DComponent");
  local_108.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_108.AssetPath.PackageName.Number = 0;
  local_108.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_108.AssetPath.AssetName.Number = 0;
  local_108.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.SubPathString.Data.ArrayNum = 0;
  local_108.SubPathString.Data.ArrayMax = 0;
  iVar4 = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_128.Size = iVar4;
  local_128.DataPtr = (wchar_t *)local_118.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_108,&local_128);
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllowedComponentClasses).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&pTVar2->AllocatorInstance,1,&(this->AllowedComponentClasses).ArrayMax);
  ConstructItems<FSoftClassPath,FSoftClassPath,int>
            ((pTVar2->AllocatorInstance).Data,(FSoftClassPath *)&local_108,1);
  if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  this->SceneViewExtensionPriority = 0x65;
  (this->CachedDisabledPrimitiveClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDisabledPrimitiveClasses).ArrayNum = 0;
  (this->CachedDisabledPrimitiveClasses).ArrayMax = 0;
  this->bIsPrimitiveCacheDirty = true;
  (this->CachedAllowedComponentClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAllowedComponentClasses).ArrayNum = 0;
  (this->CachedAllowedComponentClasses).ArrayMax = 0;
  this->bIsComponentCacheDirty = true;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~UCompositeCorePluginSettings @ 14ea775f0

void __thiscall
UCompositeCorePluginSettings::~UCompositeCorePluginSettings(UCompositeCorePluginSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCompositeCorePluginSettings__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedAllowedComponentClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedDisabledPrimitiveClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)(this->AllowedComponentClasses).AllocatorInstance.Data,
             (this->AllowedComponentClasses).ArrayNum);
  pFVar1 = (this->AllowedComponentClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)(this->DisabledPrimitiveClasses).AllocatorInstance.Data,
             (this->DisabledPrimitiveClasses).ArrayNum);
  pFVar1 = (this->DisabledPrimitiveClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// CacheAllowedComponentClasses @ 14ea7c560

void __thiscall
UCompositeCorePluginSettings::CacheAllowedComponentClasses(UCompositeCorePluginSettings *this)

{
  int *piVar1;
  TArray<UClass_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  size_t sVar9;
  UClass *pUVar10;
  FSoftObjectPath *this_00;
  FSoftObjectPath *pFVar11;
  undefined1 local_res8 [8];
  UClass *local_88 [2];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  pTVar2 = &this->CachedAllowedComponentClasses;
  piVar1 = &(this->CachedAllowedComponentClasses).ArrayMax;
  (this->CachedAllowedComponentClasses).ArrayNum = 0;
  if ((this->CachedAllowedComponentClasses).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->AllowedComponentClasses).ArrayNum;
  this_00 = (FSoftObjectPath *)(this->AllowedComponentClasses).AllocatorInstance.Data;
  pFVar11 = this_00 + iVar3;
  do {
    while( true ) {
      if ((this->AllowedComponentClasses).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSoftClassPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar11) {
        this->bIsComponentCacheDirty = false;
        return;
      }
      if ((this_00->AssetPath).PackageName != (FName)0x0) break;
      local_88[0] = (UClass *)0x0;
LAB_14ea7c751:
      this_00 = this_00 + 1;
    }
    local_68 = (wchar_t *)0x0;
    iStack_60 = 0;
    pFVar8 = FSoftObjectPath::ToString(this_00,&local_38);
    if ((pFVar8->Data).ArrayNum == 0) {
      local_78 = (FScriptContainerElement *)0x15060d16c;
LAB_14ea7c63b:
      sVar9 = wcslen((wchar_t *)local_78);
      iVar7 = (int)sVar9;
    }
    else {
      local_78 = (pFVar8->Data).AllocatorInstance.Data;
      iVar7 = 0;
      if (local_78 != (FScriptContainerElement *)0x0) goto LAB_14ea7c63b;
    }
    iStack_70 = iVar7;
    pUVar10 = Z_Construct_UClass_UObject_NoRegister();
    local_58._12_4_ = uStack_5c;
    local_58.Size = iStack_60;
    local_48._12_4_ = uStack_6c;
    local_48.Size = iStack_70;
    local_58.DataPtr = local_68;
    local_48.DataPtr = (wchar_t *)local_78;
    pUVar10 = StaticLoadClass(pUVar10,(UObject *)0x0,&local_48,&local_58,0,(UPackageMap *)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_88[0] = pUVar10;
    if (pUVar10 == (UClass *)0x0) goto LAB_14ea7c751;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_88) &&
        ((FScriptContainerElement *)local_88 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->CachedAllowedComponentClasses).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    this_00 = this_00 + 1;
    (this->CachedAllowedComponentClasses).ArrayNum = iVar7 + 1;
    *(UClass **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_88[0];
  } while( true );
}

// CacheDisabledPrimitiveClasses @ 14ea7c790

void __thiscall
UCompositeCorePluginSettings::CacheDisabledPrimitiveClasses(UCompositeCorePluginSettings *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  size_t sVar8;
  UClass *pUVar9;
  FSoftObjectPath *this_00;
  FSoftObjectPath *pFVar10;
  undefined1 local_res8 [8];
  UClass *local_88 [2];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  piVar1 = &(this->CachedDisabledPrimitiveClasses).ArrayMax;
  (this->CachedDisabledPrimitiveClasses).ArrayNum = 0;
  if ((this->CachedDisabledPrimitiveClasses).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CachedDisabledPrimitiveClasses).AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->DisabledPrimitiveClasses).ArrayNum;
  this_00 = (FSoftObjectPath *)(this->DisabledPrimitiveClasses).AllocatorInstance.Data;
  pFVar10 = this_00 + iVar2;
  do {
    while( true ) {
      if ((this->DisabledPrimitiveClasses).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSoftClassPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar10) {
        this->bIsPrimitiveCacheDirty = false;
        return;
      }
      if ((this_00->AssetPath).PackageName != (FName)0x0) break;
      local_88[0] = (UClass *)0x0;
LAB_14ea7c97a:
      this_00 = this_00 + 1;
    }
    local_68 = (wchar_t *)0x0;
    iStack_60 = 0;
    pFVar7 = FSoftObjectPath::ToString(this_00,&local_38);
    if ((pFVar7->Data).ArrayNum == 0) {
      local_78 = (FScriptContainerElement *)0x15060d16c;
LAB_14ea7c861:
      sVar8 = wcslen((wchar_t *)local_78);
      iVar6 = (int)sVar8;
    }
    else {
      local_78 = (pFVar7->Data).AllocatorInstance.Data;
      iVar6 = 0;
      if (local_78 != (FScriptContainerElement *)0x0) goto LAB_14ea7c861;
    }
    iStack_70 = iVar6;
    pUVar9 = Z_Construct_UClass_UObject_NoRegister();
    local_58._12_4_ = uStack_5c;
    local_58.Size = iStack_60;
    local_48._12_4_ = uStack_6c;
    local_48.Size = iStack_70;
    local_58.DataPtr = local_68;
    local_48.DataPtr = (wchar_t *)local_78;
    pUVar9 = StaticLoadClass(pUVar9,(UObject *)0x0,&local_48,&local_58,0,(UPackageMap *)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_88[0] = pUVar9;
    if (pUVar9 == (UClass *)0x0) goto LAB_14ea7c97a;
    pFVar3 = (this->CachedDisabledPrimitiveClasses).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_88) &&
        ((FScriptContainerElement *)local_88 < pFVar3 + (longlong)*piVar1 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->CachedDisabledPrimitiveClasses).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->CachedDisabledPrimitiveClasses).AllocatorInstance,piVar1);
    }
    this_00 = this_00 + 1;
    (this->CachedDisabledPrimitiveClasses).ArrayNum = iVar6 + 1;
    *(UClass **)
     ((this->CachedDisabledPrimitiveClasses).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_88[0];
  } while( true );
}

// GetCategoryName @ 14ea7e940

FName __thiscall UCompositeCorePluginSettings::GetCategoryName(UCompositeCorePluginSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetPrivateStaticClass @ 14ea7edd0

UClass * __cdecl UCompositeCorePluginSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"CompositeCorePluginSettings",
               &Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton,
               StaticRegisterNativesUCompositeCorePluginSettings,0xc0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCompositeCorePluginSettings>,
               InternalVTableHelperCtorCaller<UCompositeCorePluginSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton;
}

// IsAllowedComponentClass @ 14ea80840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UCompositeCorePluginSettings::IsAllowedComponentClass
          (UCompositeCorePluginSettings *this,USceneComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  size_t sVar4;
  UClass *pUVar5;
  int iVar6;
  FSoftObjectPath *this_00;
  FSoftObjectPath *pFVar7;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_68;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  if (param_1 != (USceneComponent *)0x0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bIsComponentCacheDirty != false) {
      CacheAllowedComponentClasses(this);
    }
    iVar1 = (this->AllowedComponentClasses).ArrayNum;
    this_00 = (FSoftObjectPath *)(this->AllowedComponentClasses).AllocatorInstance.Data;
    pFVar7 = this_00 + iVar1;
    while( true ) {
      if ((this->AllowedComponentClasses).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSoftClassPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar7) break;
      if ((this_00->AssetPath).PackageName != (FName)0x0) {
        iVar6 = 0;
        pFVar3 = FSoftObjectPath::ToString(this_00,&local_38);
        if ((pFVar3->Data).ArrayNum == 0) {
          local_68 = (FScriptContainerElement *)0x15060d16c;
LAB_14ea80914:
          sVar4 = wcslen((wchar_t *)local_68);
          iVar6 = (int)sVar4;
        }
        else {
          local_68 = (pFVar3->Data).AllocatorInstance.Data;
          if (local_68 != (FScriptContainerElement *)0x0) goto LAB_14ea80914;
        }
        pUVar5 = Z_Construct_UClass_UObject_NoRegister();
        local_58._8_8_ = (ulonglong)(uint)local_38.Data.ArrayMax << 0x20;
        local_48._12_4_ = uStack_5c;
        local_48.Size = iVar6;
        local_58.DataPtr = (wchar_t *)0x0;
        local_48.DataPtr = (wchar_t *)local_68;
        pUVar5 = StaticLoadClass(pUVar5,(UObject *)0x0,&local_48,&local_58,0,(UPackageMap *)0x0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pUVar5 != (UClass *)0x0) {
          iVar6 = (int)pUVar5->_padding_;
          if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar5->_padding_)) {
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            return true;
          }
        }
      }
      this_00 = this_00 + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      bVar2 = IsAllowedPrimitiveClass(this,(UPrimitiveComponent *)param_1);
      return bVar2;
    }
  }
  return false;
}

// IsAllowedPrimitiveClass @ 14ea80a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UCompositeCorePluginSettings::IsAllowedPrimitiveClass
          (UCompositeCorePluginSettings *this,UPrimitiveComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return false;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bIsPrimitiveCacheDirty != false) {
    CacheDisabledPrimitiveClasses(this);
  }
  pFVar5 = (this->CachedDisabledPrimitiveClasses).AllocatorInstance.Data;
  iVar2 = (this->CachedDisabledPrimitiveClasses).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CachedDisabledPrimitiveClasses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UClass_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar5 == pFVar1) break;
    iVar3 = *(int *)(*(longlong *)pFVar5 + 0x38);
    if ((iVar3 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8)
        == *(longlong *)pFVar5 + 0x30)) {
      bVar4 = false;
LAB_14ea80ab7:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar4;
    }
    pFVar5 = pFVar5 + 8;
  }
  bVar4 = true;
  goto LAB_14ea80ab7;
}

// PostInitProperties @ 14ea81210

void __thiscall UCompositeCorePluginSettings::PostInitProperties(UCompositeCorePluginSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UCompositeCorePluginSettings *pUStack_28;
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
      (UCompositeCorePluginSettings **)
      ((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
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
  *(UCompositeCorePluginSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUCompositeCorePluginSettings @ 14ea83120

void __cdecl UCompositeCorePluginSettings::StaticRegisterNativesUCompositeCorePluginSettings(void)

{
  return;
}

