// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 13

// StaticClass @ 148bed640

UClass * __cdecl UAutomationTestPlatformSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestPlatformSettings",
               &Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton,
               StaticRegisterNativesUAutomationTestPlatformSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestPlatformSettings>,
               InternalVTableHelperCtorCaller<UAutomationTestPlatformSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton;
}

// UAutomationTestPlatformSettings @ 148bf1ad0

UAutomationTestPlatformSettings * __thiscall
UAutomationTestPlatformSettings::UAutomationTestPlatformSettings
          (UAutomationTestPlatformSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationTestPlatformSettings__6B_;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  return this;
}

// ~UAutomationTestPlatformSettings @ 148bf1ec0

void __thiscall
UAutomationTestPlatformSettings::~UAutomationTestPlatformSettings
          (UAutomationTestPlatformSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationTestPlatformSettings__6B_;
  pFVar1 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Create @ 148bf2700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAutomationTestPlatformSettings * __cdecl
UAutomationTestPlatformSettings::Create
          (TSubclassOf<UAutomationTestPlatformSettings> param_1,FString *param_2)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  FName *pFVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  UAutomationTestPlatformSettings *pUVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  undefined1 auStack_108 [32];
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
LAB_148bf2769:
    lVar6 = 0;
  }
  else {
    pUVar5 = StaticClass();
    if (pUVar5 == (UClass *)0x0) goto LAB_148bf2769;
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_148bf2769;
    lVar6 = *(longlong *)param_1.Class.field0_0x0;
  }
  local_e8 = *(FName *)(lVar6 + 0x18);
  ::FName::ToString(&local_e8,&local_c0);
  ::FString::ConcatFC(&local_d0,&local_c0,L"_");
  ::FString::ConcatFF(&local_e0,&local_d0,param_2);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar12.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_e8,(wchar_t *)FVar12.Data);
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  FVar2 = *pFVar7;
  if (lVar6 != 0) {
    pUVar5 = StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar5 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_148bf281e;
      }
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_148bf281e:
  pUVar8 = GetTransientPackage();
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar9,pUVar5);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar8;
  local_a8._16_8_ = FVar2;
  pUVar10 = (UAutomationTestPlatformSettings *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  ::FString::operator=(&pUVar10->PlatformName,param_2);
  (**(code **)(pUVar10->_padding_ + 0x2b0))(pUVar10);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return pUVar10;
}

// GetConfigFilename @ 148bf3eb0

FString * __thiscall
UAutomationTestPlatformSettings::GetConfigFilename
          (UAutomationTestPlatformSettings *this,FString *__return_storage_ptr__)

{
  UObject::GetDefaultConfigFilename((UObject *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConfigOverridePlatform @ 148bf4130

wchar_t * __thiscall
UAutomationTestPlatformSettings::GetConfigOverridePlatform(UAutomationTestPlatformSettings *this)

{
  if ((this->PlatformName).Data.ArrayNum < 2) {
    return (wchar_t *)0x0;
  }
  return (wchar_t *)(this->PlatformName).Data.AllocatorInstance.Data;
}

// GetPlatformName @ 148bf46d0

FString * __thiscall
UAutomationTestPlatformSettings::GetPlatformName(UAutomationTestPlatformSettings *this)

{
  return &this->PlatformName;
}

// GetPrivateStaticClass @ 148bf4dd0

UClass * __cdecl UAutomationTestPlatformSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestPlatformSettings",
               &Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton,
               StaticRegisterNativesUAutomationTestPlatformSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestPlatformSettings>,
               InternalVTableHelperCtorCaller<UAutomationTestPlatformSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton;
}

// GetSectionName @ 148bf4ee0

FString * __thiscall
UAutomationTestPlatformSettings::GetSectionName
          (UAutomationTestPlatformSettings *this,FString *__return_storage_ptr__)

{
  UClass *this_00;
  
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)this_00,__return_storage_ptr__,(UObject *)0x0);
  return __return_storage_ptr__;
}

// InitializeSettingsDefault @ 148bf5390

void __thiscall
UAutomationTestPlatformSettings::InitializeSettingsDefault(UAutomationTestPlatformSettings *this)

{
  return;
}

// LoadConfig @ 148bf5cc0

void __thiscall UAutomationTestPlatformSettings::LoadConfig(UAutomationTestPlatformSettings *this)

{
  UObject::LoadConfig((UObject *)this,(UClass *)this->_padding_,(wchar_t *)0x0,0,(FProperty *)0x0,
                      (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                       *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148bf5cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x50))(this);
  return;
}

// OverrideConfigSection @ 148bf6240

void __thiscall
UAutomationTestPlatformSettings::OverrideConfigSection
          (UAutomationTestPlatformSettings *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  void *local_18 [2];
  
  pFVar3 = (FString *)(**(code **)(this->_padding_ + 0x2b8))(this,local_18);
  if (param_1 != pFVar3) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (1 < (this->PlatformName).Data.ArrayNum) {
    ::FString::AppendChars(param_1,L":",1);
    iVar1 = (this->PlatformName).Data.ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (param_1,(wchar_t *)(this->PlatformName).Data.AllocatorInstance.Data,iVar4);
  }
  return;
}

// StaticRegisterNativesUAutomationTestPlatformSettings @ 148bf8690

void __cdecl
UAutomationTestPlatformSettings::StaticRegisterNativesUAutomationTestPlatformSettings(void)

{
  return;
}

