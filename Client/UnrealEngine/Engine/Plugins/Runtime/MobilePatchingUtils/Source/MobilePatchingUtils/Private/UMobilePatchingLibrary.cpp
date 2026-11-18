// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MobilePatchingUtils
// Functions: 17

// StaticClass @ 14f03bf30

UClass * __cdecl UMobilePatchingLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobilePatchingLibrary",
               &Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton,
               StaticRegisterNativesUMobilePatchingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMobilePatchingLibrary>,
               InternalVTableHelperCtorCaller<UMobilePatchingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton;
}

// UMobilePatchingLibrary @ 14f03d000

UMobilePatchingLibrary * __thiscall
UMobilePatchingLibrary::UMobilePatchingLibrary(UMobilePatchingLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMobilePatchingLibrary__6B_;
  return this;
}

// UMobilePatchingLibrary @ 14f03d030

UMobilePatchingLibrary * __thiscall
UMobilePatchingLibrary::UMobilePatchingLibrary
          (UMobilePatchingLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMobilePatchingLibrary__6B_;
  return this;
}

// ~UMobilePatchingLibrary @ 14f03d160

void __thiscall UMobilePatchingLibrary::~UMobilePatchingLibrary(UMobilePatchingLibrary *this)

{
  *(undefined ***)this = &___7UMobilePatchingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14f03d370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UMobilePatchingLibrary::RequestContent'::__l2::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  TRefCountPtr<ITextData> TVar2;
  uint uVar3;
  TRefCountPtr<ITextData> TVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  FText local_48;
  FText local_38;
  undefined4 local_28;
  
  if (**(ERequestContentError **)this != NoError) {
    pFVar6 = GetRequestContentErrorText(**(ERequestContentError **)this);
    local_48.TextData.Reference = (pFVar6->TextData).Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res8);
    }
    local_48.Flags = pFVar6->Flags;
    if (1 < (byte)LogMobilePatchingUtils._0_1_) {
      FText::ToString(&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
    }
    TVar2.Reference = local_48.TextData.Reference;
    this_00 = *(TScriptDelegate<FNotThreadSafeDelegateMode> **)((longlong)this + 8);
    uVar1 = **(undefined4 **)this;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res8);
    }
    uVar3 = local_48.Flags;
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00);
    if (bVar5) {
      FText::FText(&local_38);
      TVar4.Reference = local_38.TextData.Reference;
      if (local_38.TextData.Reference != TVar2.Reference) {
        local_38.TextData.Reference = TVar2.Reference;
        if (TVar2.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
        }
        if (TVar4.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
        }
      }
      local_38.Flags = uVar3;
      local_28 = uVar1;
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this_00,&local_38);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return;
}

// GetActiveDeviceProfileName @ 14f03dd50

FString * __cdecl
UMobilePatchingLibrary::GetActiveDeviceProfileName(FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDeviceProfileManager *this;
  UDeviceProfile *pUVar3;
  FString *pFVar4;
  FName local_res8;
  
  this = UDeviceProfileManager::Get(false);
  pUVar3 = UDeviceProfileManager::GetActiveProfile(this);
  if (pUVar3 == (UDeviceProfile *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeviceProfile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MobilePatchingUtils\\Source\\MobilePatchingUtils\\Private\\MobilePatchingLibrary.cpp"
                       ,0x1ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res8 = (FName)pUVar3->_padding_;
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInstalledContent @ 14f03e180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMobileInstalledContent * __cdecl UMobilePatchingLibrary::GetInstalledContent(FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IBuildManifest *pIVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UMobileInstalledContent *pUVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_e8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_c8;
  TSharedPtr<IBuildManifest,1> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar8 = (UMobileInstalledContent *)0x0;
  GetInstalledManifest(&local_b8,param_1);
  pIVar4 = local_b8.Object;
  if (local_b8.Object != (IBuildManifest *)0x0) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = UMobileInstalledContent::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar7);
    local_a8._8_8_ = pUVar6;
    pUVar8 = (UMobileInstalledContent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar10 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    pTVar9 = &FPaths::ProjectPersistentDownloadDir((FString *)&local_b8)->Data;
    iVar5 = (param_1->Data).ArrayNum;
    iVar11 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar11 = 0;
    }
    if ((pTVar9->ArrayNum != 0) || (iVar5 = 2, iVar11 == -1)) {
      iVar5 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_c8,pTVar9,iVar11 + iVar5);
    ::FString::PathAppend
              ((FString *)&local_c8,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar11);
    pFVar1 = &pUVar8->InstallDir;
    if (&pFVar1->Data != &local_c8) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_c8.AllocatorInstance.Data;
      (pUVar8->InstallDir).Data.ArrayNum = local_c8.ArrayNum;
      (pUVar8->InstallDir).Data.ArrayMax = local_c8.ArrayMax;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_b8.Object != (IBuildManifest *)0x0) {
      FMemory::Free(local_b8.Object);
    }
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (pUVar8->InstalledManifest).SharedReferenceCount.ReferenceController;
    (pUVar8->InstalledManifest).Object = pIVar4;
    (pUVar8->InstalledManifest).SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return pUVar8;
}

// GetPrivateStaticClass @ 14f03e7b0

UClass * __cdecl UMobilePatchingLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobilePatchingLibrary",
               &Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton,
               StaticRegisterNativesUMobilePatchingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMobilePatchingLibrary>,
               InternalVTableHelperCtorCaller<UMobilePatchingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton;
}

// GetSupportedPlatformNames @ 14f03eda0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UMobilePatchingLibrary::GetSupportedPlatformNames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FGenericPlatformMisc::GetValidTargetPlatforms(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HasActiveWiFiConnection @ 14f03ee30

bool __cdecl UMobilePatchingLibrary::HasActiveWiFiConnection(void)

{
  return true;
}

// RequestContent @ 14f03f6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMobilePatchingLibrary::RequestContent
          (FString *param_1,FString *param_2,FString *param_3,FOnRequestContentSucceeded *param_4,
          FOnRequestContentFailed *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  TSharedPtr<IBuildManifest,1> *pTVar7;
  FUObjectItem *this;
  FHttpModule *pFVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar9;
  ulong64 uVar10;
  int iVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  undefined1 auStack_1a8 [32];
  undefined4 local_188 [2];
  longlong *local_180;
  TReferenceControllerBase<1> *local_178;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_170;
  FString local_160;
  FString local_150;
  undefined4 *local_140;
  FOnRequestContentFailed *local_138;
  FString local_130;
  TSharedPtr<IBuildManifest,1> local_120;
  FReadAccessScope local_110;
  FReadAccessScope local_f8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_188[0] = 0;
  local_140 = local_188;
  local_138 = param_5;
  if ((param_3->Data).ArrayNum < 2) {
    local_188[0] = 1;
  }
  else if ((param_1->Data).ArrayNum < 2) {
    local_188[0] = 3;
  }
  else if ((param_2->Data).ArrayNum < 2) {
    local_188[0] = 2;
  }
  else {
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = UMobilePendingContent::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar5);
    local_d8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar13 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    pTVar6 = &FPaths::ProjectPersistentDownloadDir(&local_130)->Data;
    iVar3 = (param_3->Data).ArrayNum;
    iVar11 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar11 = 0;
    }
    if ((pTVar6->ArrayNum != 0) || (iVar3 = 2, iVar11 == -1)) {
      iVar3 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_170,pTVar6,iVar11 + iVar3);
    ::FString::PathAppend
              ((FString *)&local_170,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar11);
    ::FString::operator=((FString *)(pUVar4 + 1),(FString *)&local_170);
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    ::FString::operator=((FString *)&pUVar4[1].field_0x20,param_1);
    ::FString::operator=((FString *)&pUVar4[2].field_0x8,param_2);
    pTVar7 = GetInstalledManifest(&local_120,param_3);
    if ((TSharedPtr<IBuildManifest,1> *)&pUVar4[1].field_0x10 != pTVar7) {
      *(IBuildManifest **)&pUVar4[1].field_0x10 = pTVar7->Object;
      pTVar7->Object = (IBuildManifest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pUVar4[1].field_0x18,&pTVar7->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SharedReferenceCount.ReferenceController);
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
    FUObjectItem::SetRootFlags(this,RootSet);
    pFVar8 = FHttpModule::Get();
    (**(code **)(pFVar8->_padding_ + 0x40))(pFVar8,&local_180);
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_180 + 0xf0))();
    pwVar12 = L"";
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection(lpCriticalSection);
    puVar9 = UE::Core::Private::DelegateAllocate
                       (0x50,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__PEAVUMobilePendingContent__VFOnRequestContentSucceeded__VFOnRequestContentFailed____6B_
      ;
      puVar9[1] = pUVar4;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_110);
      puVar9[3] = *(undefined8 *)&param_4->field_0x8;
      puVar9[4] = *(undefined8 *)&param_4->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_110);
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,&local_f8);
      puVar9[6] = *(undefined8 *)&param_5->field_0x8;
      puVar9[7] = *(undefined8 *)&param_5->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_f8);
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[8] = uVar10;
      *puVar9 = &
                ___7__TBaseStaticDelegateInstance___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__PEAVUMobilePendingContent__VFOnRequestContentSucceeded__VFOnRequestContentFailed____6B_
      ;
      puVar9[9] = OnRemoteManifestReady;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    plVar13 = local_180;
    pcVar1 = *(code **)(*local_180 + 0x68);
    if ((param_1->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_160,pwVar12);
    (*pcVar1)(plVar13,&local_160);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    plVar13 = local_180;
    pcVar1 = *(code **)(*local_180 + 0x60);
    ::FString::FString(&local_150,L"GET");
    (*pcVar1)(plVar13,&local_150);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    (**(code **)(*local_180 + 0xe8))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178);
  }
  `UMobilePatchingLibrary::RequestContent'::__l2::<lambda_1>::operator()(&local_140);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  return;
}

// StaticRegisterNativesUMobilePatchingLibrary @ 14f0402a0

void __cdecl UMobilePatchingLibrary::StaticRegisterNativesUMobilePatchingLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UMobilePatchingLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetActiveDeviceProfileName @ 14f040400

void __cdecl
UMobilePatchingLibrary::execGetActiveDeviceProfileName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  UDeviceProfileManager *this;
  UDeviceProfile *pUVar3;
  FName local_res10;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UDeviceProfileManager::Get(false);
  pUVar3 = UDeviceProfileManager::GetActiveProfile(this);
  if ((pUVar3 == (UDeviceProfile *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeviceProfile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MobilePatchingUtils\\Source\\MobilePatchingUtils\\Private\\MobilePatchingLibrary.cpp"
                         ,0x1ce,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = (FName)pUVar3->_padding_;
  ::FName::ToString(&local_res10,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetInstalledContent @ 14f040690

void __cdecl
UMobilePatchingLibrary::execGetInstalledContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMobileInstalledContent *pUVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetInstalledContent(&local_18);
  *(UMobileInstalledContent **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSupportedPlatformNames @ 14f040800

void __cdecl
UMobilePatchingLibrary::execGetSupportedPlatformNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGenericPlatformMisc::GetValidTargetPlatforms(&local_18);
  if (param_3 == &local_18) {
    iVar1 = local_18.ArrayNum;
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,iVar1);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execHasActiveWiFiConnection @ 14f040920

void __cdecl
UMobilePatchingLibrary::execHasActiveWiFiConnection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 1;
  return;
}

// execRequestContent @ 14f040a30

void __cdecl
UMobilePatchingLibrary::execRequestContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  undefined8 local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FOnRequestContentFailed local_58;
  FOnRequestContentSucceeded local_40;
  FReadAccessScope local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_98 = 0;
  local_90 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0 = 0;
  local_a8 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_58._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_28);
  local_58._8_8_ = local_b0;
  local_58._16_8_ = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  local_40._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a0,&local_28);
  local_40._8_8_ = local_98;
  local_40._16_8_ = local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  RequestContent(&local_68,&local_78,&local_88,&local_40,&local_58);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

