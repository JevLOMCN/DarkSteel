// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 20

// StaticClass @ 14a76e050

UClass * __cdecl UCommonInputSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputSettings",
               &Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton,
               StaticRegisterNativesUCommonInputSettings,0x170,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonInputSettings>,
               InternalVTableHelperCtorCaller<UCommonInputSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton;
}

// UCommonInputSettings @ 14a771c80

UCommonInputSettings * __thiscall
UCommonInputSettings::UCommonInputSettings(UCommonInputSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  puVar1 = &(this->InputData).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UCommonInputSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->InputData).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->InputData).SoftObjectPtr = 0;
  *(undefined8 *)&(this->InputData).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->InputData).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->PlatformInput).Settings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar1 = &(this->ActionDomainTable).SoftObjectPtr.field_0x18;
  (this->PlatformInput).Settings.ArrayNum = 0;
  (this->PlatformInput).Settings.ArrayMax = 0;
  *(undefined8 *)&this->CommonInputPlatformData_DEPRECATED = 0;
  *(undefined8 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x48 = 0;
  this->InputMethodThrashingWindowInSeconds = 3.0;
  this->InputMethodThrashingCooldownInSeconds = 1.0;
  this->bEnableInputMethodThrashingProtection = true;
  this->InputMethodThrashingLimit = 0x1e;
  this->bAllowOutOfFocusDeviceInput = false;
  this->bEnableDefaultInputConfig = true;
  this->bEnableEnhancedInputSupport = false;
  this->bEnableAutomaticGamepadTypeDetection = true;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ActionDomainTable).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ActionDomainTable).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ActionDomainTable).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ActionDomainTable).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  *(undefined8 *)&this->PlatformNameUpgrades = 0;
  *(undefined8 *)&(this->PlatformNameUpgrades).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformNameUpgrades).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x34 = 0;
  *(undefined8 *)&(this->PlatformNameUpgrades).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x48 = 0;
  (this->InputDataClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ActionDomainTablePtr).field0_0x0.DebugPtr = (UCommonInputActionDomainTable *)0x0;
  return this;
}

// UCommonInputSettings @ 14a771dd0

UCommonInputSettings * __thiscall
UCommonInputSettings::UCommonInputSettings(UCommonInputSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UClass *local_res8;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  puVar1 = &(this->InputData).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UCommonInputSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->InputData).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->InputData).SoftObjectPtr = 0;
  *(undefined8 *)&(this->InputData).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->InputData).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->PlatformInput).Settings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar1 = &(this->ActionDomainTable).SoftObjectPtr.field_0x18;
  (this->PlatformInput).Settings.ArrayNum = 0;
  (this->PlatformInput).Settings.ArrayMax = 0;
  *(undefined8 *)&this->CommonInputPlatformData_DEPRECATED = 0;
  *(undefined8 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x48 = 0;
  this->InputMethodThrashingWindowInSeconds = 3.0;
  this->InputMethodThrashingCooldownInSeconds = 1.0;
  this->bEnableInputMethodThrashingProtection = true;
  this->InputMethodThrashingLimit = 0x1e;
  this->bAllowOutOfFocusDeviceInput = false;
  this->bEnableDefaultInputConfig = true;
  this->bEnableEnhancedInputSupport = false;
  this->bEnableAutomaticGamepadTypeDetection = true;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ActionDomainTable).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ActionDomainTable).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ActionDomainTable).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ActionDomainTable).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  *(undefined8 *)&this->PlatformNameUpgrades = 0;
  *(undefined8 *)&(this->PlatformNameUpgrades).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformNameUpgrades).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x34 = 0;
  *(undefined8 *)&(this->PlatformNameUpgrades).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x48 = 0;
  this->bInputDataLoaded = false;
  (this->InputDataClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ActionDomainTablePtr).field0_0x0.DebugPtr = (UCommonInputActionDomainTable *)0x0;
  local_res8 = UCommonInputPlatformSettings::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FPerPlatformSettings::Initialize(&this->PlatformInput,(TSubclassOf<UPlatformSettings>)&local_res8)
  ;
  return this;
}

// ~UCommonInputSettings @ 14a772650

void __thiscall UCommonInputSettings::~UCommonInputSettings(UCommonInputSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UCommonInputSettings__6B_;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlatformNameUpgrades).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformNameUpgrades);
  pvVar1 = *(void **)&(this->ActionDomainTable).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CommonInputPlatformData_DEPRECATED).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputPlatformBaseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputPlatformBaseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputPlatformBaseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CommonInputPlatformData_DEPRECATED);
  pFVar2 = (this->PlatformInput).Settings.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->InputData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetDefaultBackAction @ 14a775240

FDataTableRowHandle * __thiscall
UCommonInputSettings::GetDefaultBackAction
          (UCommonInputSettings *this,FDataTableRowHandle *__return_storage_ptr__)

{
  int iVar1;
  UClass *pUVar2;
  UDataTable *pUVar3;
  code *pcVar4;
  bool bVar5;
  FDataTableRowHandle *pFVar6;
  UClass *pUVar7;
  UCommonUIInputData *pUVar8;
  FName FVar9;
  
  if (this->bInputDataLoaded == false) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8643622134171566207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonInput\\Private\\CommonInputSettings.cpp"
                       ,0x7f,"bInputDataLoaded");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FDataTableRowHandle *)(*pcVar4)();
      return pFVar6;
    }
  }
  pUVar2 = (this->InputDataClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar7 = UCommonUIInputData::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && ((this->InputDataClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        pUVar8 = TSubclassOf<UCommonUIInputData>::GetDefaultObject(&this->InputDataClass);
        if (pUVar8 != (UCommonUIInputData *)0x0) {
          pUVar3 = (pUVar8->DefaultBackAction).DataTable.field0_0x0.DebugPtr;
          (__return_storage_ptr__->DataTable).field0_0x0.DebugPtr = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDataTable *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FVar9 = (pUVar8->DefaultBackAction).RowName;
          goto LAB_14a775308;
        }
      }
    }
  }
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  (__return_storage_ptr__->DataTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
LAB_14a775308:
  __return_storage_ptr__->RowName = FVar9;
  return __return_storage_ptr__;
}

// GetDefaultClickAction @ 14a775330

FDataTableRowHandle * __thiscall
UCommonInputSettings::GetDefaultClickAction
          (UCommonInputSettings *this,FDataTableRowHandle *__return_storage_ptr__)

{
  int iVar1;
  UClass *pUVar2;
  UDataTable *pUVar3;
  code *pcVar4;
  bool bVar5;
  FDataTableRowHandle *pFVar6;
  UClass *pUVar7;
  UCommonUIInputData *pUVar8;
  FName FVar9;
  
  if (this->bInputDataLoaded == false) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8643622134171566193>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonInput\\Private\\CommonInputSettings.cpp"
                       ,0x71,"bInputDataLoaded");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FDataTableRowHandle *)(*pcVar4)();
      return pFVar6;
    }
  }
  pUVar2 = (this->InputDataClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar7 = UCommonUIInputData::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && ((this->InputDataClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        pUVar8 = TSubclassOf<UCommonUIInputData>::GetDefaultObject(&this->InputDataClass);
        if (pUVar8 != (UCommonUIInputData *)0x0) {
          pUVar3 = (pUVar8->DefaultClickAction).DataTable.field0_0x0.DebugPtr;
          (__return_storage_ptr__->DataTable).field0_0x0.DebugPtr = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDataTable *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FVar9 = (pUVar8->DefaultClickAction).RowName;
          goto LAB_14a7753f8;
        }
      }
    }
  }
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  (__return_storage_ptr__->DataTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
LAB_14a7753f8:
  __return_storage_ptr__->RowName = FVar9;
  return __return_storage_ptr__;
}

// GetDefaultHoldData @ 14a775420

TSubclassOf<UCommonUIHoldData> __thiscall
UCommonInputSettings::GetDefaultHoldData(UCommonInputSettings *this)

{
  TSubclassOf<UCommonUIInputData> *this_00;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UCommonUIInputData *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  TObjectPtr<UClass> in_RDX;
  
  this_00 = &this->InputDataClass;
  pUVar6 = (this_00->Class).field0_0x0.DebugPtr;
  if ((pUVar6 == (UClass *)0x0) ||
     (pUVar3 = UCommonUIInputData::StaticClass(), pUVar3 == (UClass *)0x0)) {
LAB_14a775560:
    *(undefined8 *)in_RDX.field0_0x0 = 0;
    return (TSubclassOf<UCommonUIHoldData>)in_RDX.field0_0x0.DebugPtr;
  }
  iVar1 = (int)pUVar3->_padding_;
  if (((int)pUVar6->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((!bVar2) || ((this_00->Class).field0_0x0.DebugPtr == (UClass *)0x0)) ||
     (pUVar4 = TSubclassOf<UCommonUIInputData>::GetDefaultObject(this_00),
     pUVar4 == (UCommonUIInputData *)0x0)) goto LAB_14a775560;
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar4->DefaultHoldData);
  if (pUVar5 == (UObject *)0x0) {
    if (*(longlong *)&(pUVar4->DefaultHoldData).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(pUVar4->DefaultHoldData).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar4->DefaultHoldData);
      goto LAB_14a7754c6;
    }
  }
  else {
LAB_14a7754c6:
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar6->_padding_)) &&
         (pUVar6 = UCommonUIHoldData::StaticClass(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_14a77551e;
      }
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14a77551e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)in_RDX.field0_0x0 = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<UCommonUIHoldData>)in_RDX.field0_0x0.DebugPtr;
  }
  if (pUVar5 == (UObject *)0x0) {
    return (TSubclassOf<UCommonUIHoldData>)in_RDX.field0_0x0.DebugPtr;
  }
  UE::GC::MarkAsReachable(pUVar5);
  return (TSubclassOf<UCommonUIHoldData>)in_RDX.field0_0x0;
}

// GetEnhancedInputBackAction @ 14a775650

UInputAction * __thiscall
UCommonInputSettings::GetEnhancedInputBackAction(UCommonInputSettings *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UCommonUIInputData *pUVar5;
  undefined1 local_res8 [8];
  
  if (this->bInputDataLoaded == false) {
    `UCommonInputSettings::GetEnhancedInputBackAction'::__l2::<lambda_1>::operator()(local_res8);
  }
  pUVar2 = (this->InputDataClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UCommonUIInputData::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((this->InputDataClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        bVar3 = IsEnhancedInputSupportEnabled();
        if (bVar3) {
          pUVar5 = TSubclassOf<UCommonUIInputData>::GetDefaultObject(&this->InputDataClass);
          return (pUVar5->EnhancedInputBackAction).field0_0x0.DebugPtr;
        }
      }
    }
  }
  return (UInputAction *)0x0;
}

// GetEnhancedInputClickAction @ 14a7756f0

UInputAction * __thiscall
UCommonInputSettings::GetEnhancedInputClickAction(UCommonInputSettings *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UCommonUIInputData *pUVar5;
  undefined1 local_res8 [8];
  
  if (this->bInputDataLoaded == false) {
    `UCommonInputSettings::GetEnhancedInputClickAction'::__l2::<lambda_1>::operator()(local_res8);
  }
  pUVar2 = (this->InputDataClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UCommonUIInputData::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((this->InputDataClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        bVar3 = IsEnhancedInputSupportEnabled();
        if (bVar3) {
          pUVar5 = TSubclassOf<UCommonUIInputData>::GetDefaultObject(&this->InputDataClass);
          return (pUVar5->EnhancedInputClickAction).field0_0x0.DebugPtr;
        }
      }
    }
  }
  return (UInputAction *)0x0;
}

// GetPrivateStaticClass @ 14a775e50

UClass * __cdecl UCommonInputSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputSettings",
               &Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton,
               StaticRegisterNativesUCommonInputSettings,0x170,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonInputSettings>,
               InternalVTableHelperCtorCaller<UCommonInputSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton;
}

// IsEnhancedInputSupportEnabled @ 14a777090

bool __cdecl UCommonInputSettings::IsEnhancedInputSupportEnabled(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  UCommonInputSettings *pUVar3;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(local_res8,"CommonInput");
      FVar1 = *pFVar2;
      this = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this,FVar1);
      pUVar3 = ICommonInputModule::GetSettings();
      bEnabled = pUVar3->bEnableEnhancedInputSupport;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bEnabled;
}

// LoadActionDomainTable @ 14a777470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonInputSettings::LoadActionDomainTable(UCommonInputSettings *this)

{
  undefined1 *this_00;
  int iVar1;
  bool bVar2;
  UCommonInputActionDomainTable *pUVar3;
  UClass *pUVar4;
  FUObjectItem *this_01;
  
  if (this->bActionDomainTableLoaded != false) {
    return;
  }
  bVar2 = *(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex;
  pUVar3 = (UCommonInputActionDomainTable *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ActionDomainTable);
  if (pUVar3 == (UCommonInputActionDomainTable *)0x0) {
    this_00 = &(this->ActionDomainTable).SoftObjectPtr.field_0x8;
    if (*(longlong *)this_00 != 0) {
      FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
      pUVar3 = (UCommonInputActionDomainTable *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ActionDomainTable);
      goto LAB_14a7774d8;
    }
LAB_14a777500:
    pUVar3 = (UCommonInputActionDomainTable *)0x0;
  }
  else {
LAB_14a7774d8:
    if (pUVar3 == (UCommonInputActionDomainTable *)0x0) goto LAB_14a777500;
    pUVar4 = UCommonInputActionDomainTable::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14a777500;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar3 == (UCommonInputActionDomainTable *)0x0)) {
    (this->ActionDomainTablePtr).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 == (UCommonInputActionDomainTable *)0x0) goto LAB_14a777553;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->ActionDomainTablePtr).field0_0x0.DebugPtr = pUVar3;
  }
  if (bVar2) {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_01,RootSet);
  }
LAB_14a777553:
  this->bActionDomainTableLoaded = true;
  return;
}

// LoadData @ 14a777570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonInputSettings::LoadData(UCommonInputSettings *this)

{
  undefined1 *this_00;
  int iVar1;
  bool bVar2;
  UCommonInputActionDomainTable *pUVar3;
  UClass *pUVar4;
  FUObjectItem *this_01;
  
  LoadInputData(this);
  if (this->bActionDomainTableLoaded != false) {
    return;
  }
  bVar2 = *(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex;
  pUVar3 = (UCommonInputActionDomainTable *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ActionDomainTable);
  if (pUVar3 == (UCommonInputActionDomainTable *)0x0) {
    this_00 = &(this->ActionDomainTable).SoftObjectPtr.field_0x8;
    if (*(longlong *)this_00 != 0) {
      FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
      pUVar3 = (UCommonInputActionDomainTable *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ActionDomainTable);
      goto LAB_14a7775dd;
    }
LAB_14a777605:
    pUVar3 = (UCommonInputActionDomainTable *)0x0;
  }
  else {
LAB_14a7775dd:
    if (pUVar3 == (UCommonInputActionDomainTable *)0x0) goto LAB_14a777605;
    pUVar4 = UCommonInputActionDomainTable::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14a777605;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar3 == (UCommonInputActionDomainTable *)0x0)) {
    (this->ActionDomainTablePtr).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 == (UCommonInputActionDomainTable *)0x0) goto LAB_14a777658;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->ActionDomainTablePtr).field0_0x0.DebugPtr = pUVar3;
  }
  if (bVar2) {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_01,RootSet);
  }
LAB_14a777658:
  this->bActionDomainTableLoaded = true;
  return;
}

// LoadInputData @ 14a777680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonInputSettings::LoadInputData(UCommonInputSettings *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FUObjectItem *this_00;
  UClass *pUVar6;
  
  if (this->bInputDataLoaded != false) {
    return;
  }
  bVar2 = *(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex;
  pUVar4 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->InputData);
  pUVar6 = (UClass *)0x0;
  if (pUVar4 == (UClass *)0x0) {
    if (*(longlong *)&(this->InputData).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->InputData).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar4 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->InputData);
      goto LAB_14a7776e7;
    }
LAB_14a77773d:
    pUVar4 = pUVar6;
  }
  else {
LAB_14a7776e7:
    if (pUVar4 == (UClass *)0x0) goto LAB_14a77773d;
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar5->_padding_)) ||
       (pUVar5 = UCommonUIInputData::StaticClass(), pUVar5 == (UClass *)0x0)) goto LAB_14a77773d;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14a77773d;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UClass *)0x0)) {
    (this->InputDataClass).Class.field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UClass *)0x0) goto LAB_14a777812;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->InputDataClass).Class.field0_0x0.DebugPtr = pUVar4;
  }
  pUVar5 = UCommonUIInputData::StaticClass();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) &&
        (pUVar4 = (this->InputDataClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) &&
       (bVar2)) {
      pUVar5 = UCommonUIInputData::StaticClass();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar6 = (this->InputDataClass).Class.field0_0x0.DebugPtr;
        }
      }
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4));
      FUObjectItem::SetRootFlags(this_00,RootSet);
    }
  }
LAB_14a777812:
  this->bInputDataLoaded = true;
  return;
}

// PostInitProperties @ 14a777d80

void __thiscall UCommonInputSettings::PostInitProperties(UCommonInputSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UCommonInputSettings *pUStack_28;
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
      (UCommonInputSettings **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
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
  *(UCommonInputSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUCommonInputSettings @ 14a779220

void __cdecl UCommonInputSettings::StaticRegisterNativesUCommonInputSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCommonInputSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateData @ 14a779d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonInputSettings::ValidateData(UCommonInputSettings *this)

{
  byte bVar1;
  UObject *pUVar2;
  bool bVar3;
  
  bVar3 = this->bInputDataLoaded;
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->InputData);
  if ((pUVar2 != (UObject *)0x0) ||
     (bVar1 = 0, *(longlong *)&(this->InputData).SoftObjectPtr.field_0x8 == 0)) {
    bVar1 = 1;
  }
  bVar3 = (bool)(bVar3 & bVar1);
  this->bInputDataLoaded = bVar3;
  if ((2 < (byte)LogCommonInput._0_1_) && (bVar3 == false)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
  }
  LoadData(this);
  return;
}

// execIsEnhancedInputSupportEnabled @ 14a77a1e0

void __cdecl
UCommonInputSettings::execIsEnhancedInputSupportEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEnhancedInputSupportEnabled();
  *(bool *)param_3 = bVar1;
  return;
}

// operator() @ 1505545a0

bool __thiscall
`UCommonInputSettings::GetEnhancedInputBackAction'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8643622134171566245>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8643622134171566245>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505545e0

bool __thiscall
`UCommonInputSettings::GetEnhancedInputClickAction'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8643622134171566234>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8643622134171566234>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

