// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 20

// StaticClass @ 14b2dc830

UClass * __cdecl UMetaSoundSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSettings",
               &Z_Registration_Info_UClass_UMetaSoundSettings.InnerSingleton,
               StaticRegisterNativesUMetaSoundSettings,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"MetaSound",
               InternalConstructor<UMetaSoundSettings>,
               InternalVTableHelperCtorCaller<UMetaSoundSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSettings.InnerSingleton;
}

// UMetaSoundSettings @ 14b34c8b0

UMetaSoundSettings * __thiscall
UMetaSoundSettings::UMetaSoundSettings(UMetaSoundSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bAutoUpdateLogWarningOnDroppedConnection = true;
  this->_padding_ = (longlong)&___7UMetaSoundSettings__6B_;
  (this->DirectoriesToRegister).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectoriesToRegister).ArrayNum = 0;
  (this->DirectoriesToRegister).ArrayMax = 0;
  ::FName::FName(&this->TargetPageName,L"Default");
  (this->DefaultPageSettings).UniqueId = Metasound::Frontend::DefaultPageID;
  ::FName::FName(&(this->DefaultPageSettings).Name,L"Default");
  (this->PageSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageSettings).ArrayNum = 0;
  (this->PageSettings).ArrayMax = 0;
  (this->QualitySettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualitySettings).ArrayNum = 0;
  (this->QualitySettings).ArrayMax = 0;
  (this->TargetPageNameOverride).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->TargetPageNameOverride).field0_0x0.TypedValue.Number = 0;
  this->bIsPageOrderCached = (atomic<bool>)0x0;
  (this->CachedPageOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPageOrder).ArrayNum = 0;
  (this->CachedPageOrder).ArrayMax = 0;
  this->bWarnAccessBeforeInit = true;
  return this;
}

// UMetaSoundSettings @ 14b34c960

UMetaSoundSettings * __thiscall
UMetaSoundSettings::UMetaSoundSettings(UMetaSoundSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bAutoUpdateLogWarningOnDroppedConnection = true;
  this->_padding_ = (longlong)&___7UMetaSoundSettings__6B_;
  (this->DirectoriesToRegister).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectoriesToRegister).ArrayNum = 0;
  (this->DirectoriesToRegister).ArrayMax = 0;
  ::FName::FName(&this->TargetPageName,L"Default");
  (this->DefaultPageSettings).UniqueId = Metasound::Frontend::DefaultPageID;
  ::FName::FName(&(this->DefaultPageSettings).Name,L"Default");
  (this->PageSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageSettings).ArrayNum = 0;
  (this->PageSettings).ArrayMax = 0;
  (this->QualitySettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualitySettings).ArrayNum = 0;
  (this->QualitySettings).ArrayMax = 0;
  (this->TargetPageNameOverride).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->TargetPageNameOverride).field0_0x0.TypedValue.Number = 0;
  this->bIsPageOrderCached = (atomic<bool>)0x0;
  (this->CachedPageOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPageOrder).ArrayNum = 0;
  (this->CachedPageOrder).ArrayMax = 0;
  this->bWarnAccessBeforeInit = true;
  return this;
}

// ~UMetaSoundSettings @ 14b352690

void __thiscall UMetaSoundSettings::~UMetaSoundSettings(UMetaSoundSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMetaSoundSettings__6B_;
  pFVar1 = (this->CachedPageOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QualitySettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PageSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDirectoryPath,int>
            ((FDirectoryPath *)(this->DirectoriesToRegister).AllocatorInstance.Data,
             (this->DirectoriesToRegister).ArrayNum);
  pFVar1 = (this->DirectoriesToRegister).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// operator() @ 14b3552a0

void __thiscall
`UMetaSoundSettings::GeneratePageOrderInternal'::__l2::<lambda_1>::operator()
          (void *this,FMetaSoundPageSettings *param_1)

{
  int *piVar1;
  uint *puVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  
  puVar2 = *(uint **)((longlong)this + 8);
  **(byte **)this =
       **(byte **)this |
       (((puVar2[3] == (param_1->UniqueId).D && puVar2[2] == (param_1->UniqueId).C) &&
        puVar2[1] == (param_1->UniqueId).B) && *puVar2 == (param_1->UniqueId).A);
  if (**(char **)this != '\0') {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    if (((FMetaSoundPageSettings *)pFVar3->Data <= param_1) &&
       (param_1 < (FMetaSoundPageSettings *)
                  (&((FMetaSoundPageSettings *)pFVar3->Data)->UniqueId +
                  *(int *)((longlong)&pFVar3[1].Data + 4)))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    uVar6 = *(undefined8 *)&(param_1->UniqueId).C;
    pFVar4 = pFVar3->Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x10) = *(undefined8 *)&param_1->UniqueId;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = uVar6;
  }
  return;
}

// FindPageSettings @ 14b3a8e10

FMetaSoundPageSettings * __thiscall
UMetaSoundSettings::FindPageSettings(UMetaSoundSettings *this,FGuid *param_1)

{
  FMetaSoundPageSettings *pFVar1;
  FMetaSoundPageSettings *pFVar2;
  
  if (((param_1->A == 0 && param_1->B == 0) && param_1->C == 0) && param_1->D == 0) {
    return &this->DefaultPageSettings;
  }
  pFVar2 = (FMetaSoundPageSettings *)(this->PageSettings).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->PageSettings).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FMetaSoundPageSettings *)0x0;
    }
    if (((param_1->B == (pFVar2->UniqueId).B && param_1->C == (pFVar2->UniqueId).C) &&
        param_1->D == (pFVar2->UniqueId).D) && param_1->A == (pFVar2->UniqueId).A) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// FindPageSettings @ 14b3a8e90

FMetaSoundPageSettings * __thiscall
UMetaSoundSettings::FindPageSettings(UMetaSoundSettings *this,FName param_1)

{
  FMetaSoundPageSettings *pFVar1;
  bool bVar2;
  FMetaSoundPageSettings *pFVar3;
  
  bVar2 = ::FName::Equals(param_1,L"Default");
  if (bVar2) {
    return &this->DefaultPageSettings;
  }
  pFVar3 = (FMetaSoundPageSettings *)(this->PageSettings).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (this->PageSettings).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return (FMetaSoundPageSettings *)0x0;
    }
    if (pFVar3->Name == param_1) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// FindQualitySettings @ 14b3a9500

FMetaSoundQualitySettings * __thiscall
UMetaSoundSettings::FindQualitySettings(UMetaSoundSettings *this,FGuid *param_1)

{
  FMetaSoundQualitySettings *pFVar1;
  FMetaSoundQualitySettings *pFVar2;
  
  pFVar1 = (FMetaSoundQualitySettings *)(this->QualitySettings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->QualitySettings).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == (pFVar1->UniqueId).D && param_1->C == (pFVar1->UniqueId).C) &&
          param_1->B == (pFVar1->UniqueId).B) && param_1->A == (pFVar1->UniqueId).A) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FMetaSoundQualitySettings *)0x0;
}

// FindQualitySettings @ 14b3a9570

FMetaSoundQualitySettings * __thiscall
UMetaSoundSettings::FindQualitySettings(UMetaSoundSettings *this,FName param_1)

{
  FMetaSoundQualitySettings *pFVar1;
  FMetaSoundQualitySettings *pFVar2;
  
  pFVar1 = (FMetaSoundQualitySettings *)(this->QualitySettings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->QualitySettings).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FMetaSoundQualitySettings *)0x0;
    }
    if (pFVar1->Name == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// GeneratePageOrder @ 14b3aa250

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundSettings::GeneratePageOrder
          (UMetaSoundSettings *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  code *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  FMetaSoundPageSettings *local_20;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_18;
  
  ::FName::FName(&local_res18,"Windows");
  local_20 = GetTargetPageSettings(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_30 = &local_28;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10[0] = 0;
  local_28 = local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSettings::GeneratePageOrderInternal'::__l2::<lambda_1>,void,FMetaSoundPageSettings_const_&>
             ::Call;
  local_18 = __return_storage_ptr__;
  IteratePageSettings(this,(TFunctionRef<void___cdecl(FMetaSoundPageSettings_const_&)> *)&local_38,
                      true);
  if (__return_storage_ptr__->ArrayNum < 1) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 < (FScriptContainerElement *)0x1523b0381) &&
       (&Metasound::Frontend::DefaultPageID <
        (FGuid *)(pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(FGuid *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10) =
         Metasound::Frontend::DefaultPageID;
  }
  return __return_storage_ptr__;
}

// GeneratePageOrderInternal @ 14b3aa3a0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundSettings::GeneratePageOrderInternal
          (UMetaSoundSettings *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1,
          FGuid *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  FGuid *local_20;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10[0] = 0;
  local_28 = local_res10;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMetaSoundSettings::GeneratePageOrderInternal'::__l2::<lambda_1>,void,FMetaSoundPageSettings_const_&>
             ::Call;
  local_20 = param_2;
  local_18 = __return_storage_ptr__;
  IteratePageSettings(this,(TFunctionRef<void___cdecl(FMetaSoundPageSettings_const_&)> *)&local_38,
                      true);
  if (__return_storage_ptr__->ArrayNum < 1) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 < (FScriptContainerElement *)0x1523b0381) &&
       (&Metasound::Frontend::DefaultPageID <
        (FGuid *)(pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(FGuid *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10) =
         Metasound::Frontend::DefaultPageID;
  }
  return __return_storage_ptr__;
}

// GetCategoryName @ 14b3ae550

FName __thiscall UMetaSoundSettings::GetCategoryName(UMetaSoundSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Plugins");
  return in_RDX;
}

// GetDefaultPageSettings @ 14b3b3900

FMetaSoundPageSettings * __thiscall
UMetaSoundSettings::GetDefaultPageSettings(UMetaSoundSettings *this)

{
  return &this->DefaultPageSettings;
}

// GetPageOrder @ 14b3beef0

TArrayView<FGuid_const_,int> * __cdecl
UMetaSoundSettings::GetPageOrder(TArrayView<FGuid_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *this;
  TArrayView<FGuid_const_,int> *pTVar5;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    if (pUVar2[3].field_0x20 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings->bIsPageOrderCached",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSettings.cpp"
                         ,0x1c5,
                         L"Attempt to get PageOrder before UMetaSoundSettings have finished initializing"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FGuid_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    iVar1 = *(int *)&pUVar2[4].field_0x8;
    __return_storage_ptr__->DataPtr = *(FGuid **)(pUVar2 + 4);
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FGuid_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FGuid *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b3bf640

UClass * __cdecl UMetaSoundSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSettings",
               &Z_Registration_Info_UClass_UMetaSoundSettings.InnerSingleton,
               StaticRegisterNativesUMetaSoundSettings,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"MetaSound",
               InternalConstructor<UMetaSoundSettings>,
               InternalVTableHelperCtorCaller<UMetaSoundSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSettings.InnerSingleton;
}

// GetTargetPageSettings @ 14b3c0c70

/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundPageSettings * __thiscall
UMetaSoundSettings::GetTargetPageSettings(UMetaSoundSettings *this)

{
  FMetaSoundPageSettings *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FMetaSoundPageSettings *pFVar5;
  longlong lVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  lVar6 = 0x90;
  if ((this->TargetPageNameOverride).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
    lVar6 = 0x50;
  }
  FVar2 = *(FName *)((longlong)&this->_padding_ + lVar6);
  bVar4 = ::FName::Equals(FVar2,L"Default");
  if (bVar4) {
    pFVar5 = &this->DefaultPageSettings;
  }
  else {
    pFVar5 = (FMetaSoundPageSettings *)(this->PageSettings).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (this->PageSettings).ArrayNum;
    for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 1) {
      if (pFVar5->Name == FVar2) goto LAB_14b3c0ce6;
    }
    pFVar5 = (FMetaSoundPageSettings *)0x0;
  }
LAB_14b3c0ce6:
  bVar4 = this->bWarnAccessBeforeInit;
  if (pFVar5 == (FMetaSoundPageSettings *)0x0) {
    if ((this->PageSettings).ArrayNum < 1) {
      pFVar5 = &this->DefaultPageSettings;
      if (bVar4 != false) {
        if (3 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString(&(this->DefaultPageSettings).Name,&local_18);
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_Target_Page_Set_1523d2690,
                     (FLogCategoryBase *)&LogMetaSound);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        this->bWarnAccessBeforeInit = false;
      }
    }
    else {
      if (bVar4 != false) {
        if (3 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)((this->PageSettings).AllocatorInstance.Data + 0x10),&local_28)
          ;
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_Target_Page_Set_1523d2690,
                     (FLogCategoryBase *)&LogMetaSound);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        this->bWarnAccessBeforeInit = false;
      }
      if (((this->PageSettings).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMetaSoundPageSettings *)(*pcVar3)();
        return pFVar5;
      }
      pFVar5 = (FMetaSoundPageSettings *)(this->PageSettings).AllocatorInstance.Data;
    }
  }
  else if (bVar4 != false) {
    if (3 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&pFVar5->Name,&local_38);
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Target_Page_Set_1523d2690,
                 (FLogCategoryBase *)&LogMetaSound);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    this->bWarnAccessBeforeInit = false;
  }
  return pFVar5;
}

// IteratePageSettings @ 14b3c8fb0

void __thiscall
UMetaSoundSettings::IteratePageSettings
          (UMetaSoundSettings *this,
          TFunctionRef<void___cdecl(FMetaSoundPageSettings_const_&)> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined1 local_res18 [16];
  
  if (!param_2) {
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&this->DefaultPageSettings);
    iVar2 = (this->PageSettings).ArrayNum;
    pFVar7 = (this->PageSettings).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->PageSettings).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FMetaSoundPageSettings_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar7 == pFVar1) break;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar7);
      pFVar7 = pFVar7 + 0x18;
    }
    return;
  }
  uVar6 = (this->PageSettings).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar8 = (longlong)(int)uVar6 * 0x18;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->PageSettings).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)param_1)
                (*(undefined8 *)&param_1->field_0x8,
                 (this->PageSettings).AllocatorInstance.Data + lVar8);
      lVar8 = lVar8 + -0x18;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00014b3c9060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&this->DefaultPageSettings);
  return;
}

// PostInitProperties @ 14b3cd600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMetaSoundSettings::PostInitProperties(UMetaSoundSettings *this)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FMetaSoundPageSettings *pFVar8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_18;
  
  UObject::PostInitProperties((UObject *)this);
  FVar4 = this->TargetPageName;
  this->bWarnAccessBeforeInit = false;
  bVar6 = ::FName::Equals(FVar4,L"Default");
  if (bVar6) {
    pFVar10 = (FScriptContainerElement *)&this->DefaultPageSettings;
  }
  else {
    pFVar10 = (this->PageSettings).AllocatorInstance.Data;
    pFVar2 = pFVar10 + (longlong)(this->PageSettings).ArrayNum * 0x18;
    for (; pFVar10 != pFVar2; pFVar10 = pFVar10 + 0x18) {
      if (*(FName *)(pFVar10 + 0x10) == FVar4) goto LAB_14b3cd671;
    }
    pFVar10 = (FScriptContainerElement *)0x0;
  }
LAB_14b3cd671:
  if (pFVar10 == (FScriptContainerElement *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->TargetPageName,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    iVar3 = (this->PageSettings).ArrayNum;
    if (iVar3 == 0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&(this->DefaultPageSettings).Name,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      this->TargetPageName = (this->DefaultPageSettings).Name;
    }
    else {
      if (2 < (byte)LogMetaSound._0_1_) {
        uVar7 = 0;
        if ((int)(iVar3 - 1U) < iVar3) {
          uVar7 = ~(iVar3 - 1U) >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::FName::ToString((FName *)((this->PageSettings).AllocatorInstance.Data +
                                   ((longlong)(this->PageSettings).ArrayNum * 3 + -1) * 8),&local_28
                         );
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar3 = (this->PageSettings).ArrayNum;
      uVar11 = iVar3 - 1;
      uVar7 = 0;
      if ((int)uVar11 < iVar3) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this->TargetPageName =
           *(FName *)((this->PageSettings).AllocatorInstance.Data +
                     (longlong)(this->PageSettings).ArrayNum * 0x18 + -8);
    }
  }
  else if (3 < (byte)LogMetaSound._0_1_) {
    pFVar8 = GetTargetPageSettings(this);
    ::FName::ToString(&pFVar8->Name,&local_58);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = GeneratePageOrder(this,&local_18);
  pTVar1 = &this->CachedPageOrder;
  if (pTVar1 != pTVar9) {
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CachedPageOrder).ArrayNum = pTVar9->ArrayNum;
    (this->CachedPageOrder).ArrayMax = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  LOCK();
  this->bIsPageOrderCached = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// SetTargetPage @ 14b3e0220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMetaSoundSettings::SetTargetPage(UMetaSoundSettings *this,FName param_1)

{
  TOptional<FName> *pTVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FString local_18;
  
  bVar5 = ::FName::Equals(param_1,L"Default");
  if (bVar5) {
    pFVar8 = (FScriptContainerElement *)&this->DefaultPageSettings;
  }
  else {
    pFVar8 = (this->PageSettings).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (longlong)(this->PageSettings).ArrayNum * 0x18;
    for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 0x18) {
      if (*(FName *)(pFVar8 + 0x10) == param_1) goto LAB_14b3e0271;
    }
    pFVar8 = (FScriptContainerElement *)0x0;
  }
LAB_14b3e0271:
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    pTVar1 = &this->TargetPageNameOverride;
    pFVar8 = pFVar8 + 0x10;
    lVar7 = 0x90;
    if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      lVar7 = 0x50;
    }
    local_res10 = *(FName *)((longlong)&this->_padding_ + lVar7);
    if (local_res10 != *(FName *)pFVar8) {
      if (3 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_res10,&local_18);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      if (((pFVar8 != (FScriptContainerElement *)pTVar1) &&
          (FVar3 = *(FName *)pFVar8, (pTVar1->field0_0x0).TypedValue = FVar3,
          FVar3.ComparisonIndex.Value.Value == 0xffffffff)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUMetaSoundSettings @ 14b3e1550

void __cdecl UMetaSoundSettings::StaticRegisterNativesUMetaSoundSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

