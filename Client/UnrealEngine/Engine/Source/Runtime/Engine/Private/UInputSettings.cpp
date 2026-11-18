// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 54

// StaticClass @ 1488ef3a0

UClass * __cdecl UInputSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputSettings",
               &Z_Registration_Info_UClass_UInputSettings.InnerSingleton,
               StaticRegisterNativesUInputSettings,400,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputSettings>,InternalVTableHelperCtorCaller<UInputSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputSettings.InnerSingleton;
}

// UInputSettings @ 14890b030

UInputSettings * __thiscall
UInputSettings::UInputSettings(UInputSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UInputSettings__6B_;
  (this->AxisConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisConfig).ArrayNum = 0;
  (this->AxisConfig).ArrayMax = 0;
  (this->PlatformSettings).Settings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformSettings).Settings.ArrayNum = 0;
  (this->PlatformSettings).Settings.ArrayMax = 0;
  (this->ExcludedAutocorrectOS).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedAutocorrectOS).ArrayNum = 0;
  (this->ExcludedAutocorrectOS).ArrayMax = 0;
  (this->ExcludedAutocorrectCultures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedAutocorrectCultures).ArrayNum = 0;
  (this->ExcludedAutocorrectCultures).ArrayMax = 0;
  (this->ExcludedAutocorrectDeviceModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedAutocorrectDeviceModels).ArrayNum = 0;
  (this->ExcludedAutocorrectDeviceModels).ArrayMax = 0;
  (this->ActionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionMappings).ArrayNum = 0;
  (this->ActionMappings).ArrayMax = 0;
  (this->AxisMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisMappings).ArrayNum = 0;
  (this->AxisMappings).ArrayMax = 0;
  *(undefined8 *)&(this->DeprecatedActionAndAxisNames).Elements = 0;
  *(undefined8 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x34 = 0;
  (this->DeprecatedActionAndAxisNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DeprecatedActionAndAxisNames).HashSize = 0;
  (this->SpeechMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpeechMappings).ArrayNum = 0;
  (this->SpeechMappings).ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultPlayerInputClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultInputComponentClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultInputComponentClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultInputComponentClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultInputComponentClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultInputComponentClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->DefaultTouchInterface).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultTouchInterface).AssetPath.PackageName.Number = 0;
  (this->DefaultTouchInterface).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultTouchInterface).AssetPath.AssetName.Number = 0;
  (this->DefaultTouchInterface).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultTouchInterface).SubPathString.Data.ArrayNum = 0;
  (this->DefaultTouchInterface).SubPathString.Data.ArrayMax = 0;
  (this->ConsoleKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleKeys).ArrayNum = 0;
  (this->ConsoleKeys).ArrayMax = 0;
  return this;
}

// UInputSettings @ 14890b180

UInputSettings * __thiscall
UInputSettings::UInputSettings(UInputSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  UClass *local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->bFilterInputByPlatformUser = '\0';
  this->bCaptureMouseOnLaunch = '\x01';
  this->bEnableMotionControls = '\x01';
  this->bEnableLegacyInputScales = '\x01';
  this->bShouldFlushPressedKeysOnViewportFocusLost = '\x01';
  this->bEnabledLegacyMappingDeprecationWarnings = '\x01';
  this->bEnableDynamicComponentInputBinding = '\x01';
  this->_padding_ = (longlong)&___7UInputSettings__6B_;
  (this->AxisConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisConfig).ArrayNum = 0;
  (this->AxisConfig).ArrayMax = 0;
  (this->PlatformSettings).Settings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformSettings).Settings.ArrayNum = 0;
  (this->PlatformSettings).Settings.ArrayMax = 0;
  (this->ExcludedAutocorrectOS).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedAutocorrectOS).ArrayNum = 0;
  (this->ExcludedAutocorrectOS).ArrayMax = 0;
  (this->ExcludedAutocorrectCultures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedAutocorrectCultures).ArrayNum = 0;
  (this->ExcludedAutocorrectCultures).ArrayMax = 0;
  (this->ExcludedAutocorrectDeviceModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedAutocorrectDeviceModels).ArrayNum = 0;
  (this->ExcludedAutocorrectDeviceModels).ArrayMax = 0;
  (this->ActionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionMappings).ArrayNum = 0;
  (this->ActionMappings).ArrayMax = 0;
  (this->AxisMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisMappings).ArrayNum = 0;
  (this->AxisMappings).ArrayMax = 0;
  *(undefined8 *)&(this->DeprecatedActionAndAxisNames).Elements = 0;
  *(undefined8 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x20 = 0;
  this->DefaultViewportMouseCaptureMode = CapturePermanently_IncludingInitialMouseDown;
  this->DefaultViewportMouseLockMode = LockOnCapture;
  *(undefined4 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x34 = 0;
  (this->DeprecatedActionAndAxisNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DeprecatedActionAndAxisNames).HashSize = 0;
  (this->SpeechMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpeechMappings).ArrayNum = 0;
  (this->SpeechMappings).ArrayMax = 0;
  pUVar2 = UPlayerInput::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  puVar1 = &(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultPlayerInputClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FSoftObjectPtr::operator=(&(this->DefaultPlayerInputClass).SoftObjectPtr,(FObjectPtr)&local_res8);
  pUVar2 = Z_Construct_UClass_UInputComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  puVar1 = &(this->DefaultInputComponentClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultInputComponentClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultInputComponentClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultInputComponentClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultInputComponentClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FSoftObjectPtr::operator=
            (&(this->DefaultInputComponentClass).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->DefaultTouchInterface).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultTouchInterface).AssetPath.PackageName.Number = 0;
  (this->DefaultTouchInterface).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultTouchInterface).AssetPath.AssetName.Number = 0;
  (this->DefaultTouchInterface).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultTouchInterface).SubPathString.Data.ArrayNum = 0;
  (this->DefaultTouchInterface).SubPathString.Data.ArrayMax = 0;
  (this->ConsoleKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleKeys).ArrayNum = 0;
  (this->ConsoleKeys).ArrayMax = 0;
  local_res8 = UInputPlatformSettings::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FPerPlatformSettings::Initialize
            (&this->PlatformSettings,(TSubclassOf<UPlatformSettings>)&local_res8);
  return this;
}

// ~UInputSettings @ 14890e830

void __thiscall UInputSettings::~UInputSettings(UInputSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7UInputSettings__6B_;
  DestructItems<FKey,int>
            ((FKey *)(this->ConsoleKeys).AllocatorInstance.Data,(this->ConsoleKeys).ArrayNum);
  pFVar1 = (this->ConsoleKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultTouchInterface).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DefaultInputComponentClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DefaultPlayerInputClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->SpeechMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DeprecatedActionAndAxisNames).HashSize = 0;
  FVar3 = (this->DeprecatedActionAndAxisNames).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DeprecatedActionAndAxisNames).Elements);
  DestructItems<FInputAxisKeyMapping,int>
            ((FInputAxisKeyMapping *)(this->AxisMappings).AllocatorInstance.Data,
             (this->AxisMappings).ArrayNum);
  pFVar1 = (this->AxisMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputActionKeyMapping,int>
            ((FInputActionKeyMapping *)(this->ActionMappings).AllocatorInstance.Data,
             (this->ActionMappings).ArrayNum);
  pFVar1 = (this->ActionMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ExcludedAutocorrectDeviceModels).AllocatorInstance.Data,
             (this->ExcludedAutocorrectDeviceModels).ArrayNum);
  pFVar1 = (this->ExcludedAutocorrectDeviceModels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ExcludedAutocorrectCultures).AllocatorInstance.Data,
             (this->ExcludedAutocorrectCultures).ArrayNum);
  pFVar1 = (this->ExcludedAutocorrectCultures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ExcludedAutocorrectOS).AllocatorInstance.Data,
             (this->ExcludedAutocorrectOS).ArrayNum);
  pFVar1 = (this->ExcludedAutocorrectOS).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformSettings).Settings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AxisConfig).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddActionMapping @ 148916490

void __thiscall
UInputSettings::AddActionMapping(UInputSettings *this,FInputActionKeyMapping *param_1)

{
  int *piVar1;
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  FInputActionKeyMapping *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->ActionMappings;
  pFVar3 = (FInputActionKeyMapping *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ActionMappings).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ActionMappings).ArrayNum;
  piVar1 = &(this->ActionMappings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ActionMappings).ArrayNum = iVar6 + 1;
  FInputActionKeyMapping::FInputActionKeyMapping
            ((FInputActionKeyMapping *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28),
             param_1);
  return;
}

// AddActionMapping @ 148916550

void __thiscall
UInputSettings::AddActionMapping(UInputSettings *this,FInputActionKeyMapping *param_1,bool param_2)

{
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputActionKeyMapping_const_&>(&this->ActionMappings,param_1);
  if (param_2) {
    ForceRebuildKeymaps(this);
  }
  return;
}

// AddAxisMapping @ 1489165d0

void __thiscall UInputSettings::AddAxisMapping(UInputSettings *this,FInputAxisKeyMapping *param_1)

{
  int *piVar1;
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  FInputAxisKeyMapping *pFVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  pTVar2 = &this->AxisMappings;
  pFVar3 = (FInputAxisKeyMapping *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->AxisMappings).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->AxisMappings).ArrayNum;
  piVar1 = &(this->AxisMappings).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar8;
  (this->AxisMappings).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar4 + lVar9 * 0x28) = param_1->AxisName;
  *(float *)(pFVar4 + lVar9 * 0x28 + 8) = param_1->Scale;
  *(FName *)(pFVar4 + lVar9 * 0x28 + 0x10) = (param_1->Key).KeyName;
  *(FKeyDetails **)(pFVar4 + lVar9 * 0x28 + 0x18) = (param_1->Key).KeyDetails.Object;
  pTVar5 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar4 + lVar9 * 0x28 + 0x20) = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// AddAxisMapping @ 1489166b0

void __thiscall
UInputSettings::AddAxisMapping(UInputSettings *this,FInputAxisKeyMapping *param_1,bool param_2)

{
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputAxisKeyMapping_const_&>(&this->AxisMappings,param_1);
  if (param_2) {
    ForceRebuildKeymaps(this);
  }
  return;
}

// AddInternationalConsoleKey @ 148916c70

void __thiscall UInputSettings::AddInternationalConsoleKey(UInputSettings *this)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  int *piVar2;
  TArray<FKey,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  code *pcVar5;
  FKeyDetails *pFVar6;
  FSharedReferencer<1> FVar7;
  FKeyDetails *pFVar8;
  FSharedReferencer<1> FVar9;
  FKeyDetails *pFVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  int iVar13;
  HKL pHVar14;
  FInputKeyManager *pFVar15;
  FKey *pFVar16;
  FKey local_98;
  FKey local_80;
  FKey local_68;
  FKey local_50;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  FName FStack_10;
  
  if ((this->ConsoleKeys).ArrayNum != 1) {
    return;
  }
  pTVar3 = &this->ConsoleKeys;
  if (*(FName *)(pTVar3->AllocatorInstance).Data != EKeys::Tilde.KeyName) {
    return;
  }
  local_98.KeyName = EKeys::Tilde.KeyName;
  local_98.KeyDetails.Object = EKeys::Tilde.KeyDetails.Object;
  local_98.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Tilde.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Tilde.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Tilde.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Tilde.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pHVar14 = GetKeyboardLayout(0);
  FVar11 = EKeys::Section.KeyDetails.SharedReferenceCount;
  pFVar10 = EKeys::Section.KeyDetails.Object;
  FVar9 = EKeys::Caret.KeyDetails.SharedReferenceCount;
  pFVar8 = EKeys::Caret.KeyDetails.Object;
  FVar7 = EKeys::Backslash.KeyDetails.SharedReferenceCount;
  pFVar6 = EKeys::Backslash.KeyDetails.Object;
  switch((uint)pHVar14 & 0x3ff) {
  case 7:
    local_98.KeyName = EKeys::Caret.KeyName;
    if (EKeys::Caret.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Caret.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Caret.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = (FName)local_98.KeyDetails.Object;
    FStack_30 = (FName)local_98.KeyDetails.SharedReferenceCount.ReferenceController;
    local_50.KeyDetails.SharedReferenceCount.ReferenceController =
         local_98.KeyDetails.SharedReferenceCount.ReferenceController;
    local_98.KeyDetails.Object = pFVar8;
    local_98.KeyDetails.SharedReferenceCount = FVar9;
    break;
  default:
    goto switchD_148916d04_caseD_8;
  case 10:
    pFVar15 = FInputKeyManager::Get();
    pFVar16 = FInputKeyManager::GetKeyFromCodes(pFVar15,&local_68,0xdc,0);
    local_98.KeyName = pFVar16->KeyName;
    pTVar1 = &pFVar16->KeyDetails;
    local_50.KeyDetails.SharedReferenceCount.ReferenceController =
         local_68.KeyDetails.SharedReferenceCount.ReferenceController;
    if (&local_98.KeyDetails != pTVar1) {
      local_98.KeyDetails.Object = pTVar1->Object;
      pTVar1->Object = (FKeyDetails *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_98.KeyDetails.SharedReferenceCount,
                 &(pFVar16->KeyDetails).SharedReferenceCount);
      local_50.KeyDetails.SharedReferenceCount.ReferenceController =
           local_68.KeyDetails.SharedReferenceCount.ReferenceController;
    }
    break;
  case 0xc:
  case 0xe:
    pFVar15 = FInputKeyManager::Get();
    pFVar16 = FInputKeyManager::GetKeyFromCodes(pFVar15,&local_80,0xde,0);
    local_98.KeyName = pFVar16->KeyName;
    pTVar1 = &pFVar16->KeyDetails;
    local_50.KeyDetails.SharedReferenceCount.ReferenceController =
         local_80.KeyDetails.SharedReferenceCount.ReferenceController;
    if (&local_98.KeyDetails != pTVar1) {
      local_98.KeyDetails.Object = pTVar1->Object;
      pTVar1->Object = (FKeyDetails *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_98.KeyDetails.SharedReferenceCount,
                 &(pFVar16->KeyDetails).SharedReferenceCount);
      local_50.KeyDetails.SharedReferenceCount.ReferenceController =
           local_80.KeyDetails.SharedReferenceCount.ReferenceController;
    }
    break;
  case 0x10:
    local_98.KeyName = EKeys::Backslash.KeyName;
    if (EKeys::Backslash.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Backslash.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Backslash.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = (FName)local_98.KeyDetails.Object;
    FStack_20 = (FName)local_98.KeyDetails.SharedReferenceCount.ReferenceController;
    local_50.KeyDetails.SharedReferenceCount.ReferenceController =
         local_98.KeyDetails.SharedReferenceCount.ReferenceController;
    local_98.KeyDetails.Object = pFVar6;
    local_98.KeyDetails.SharedReferenceCount = FVar7;
    break;
  case 0x11:
  case 0x19:
    pFVar15 = FInputKeyManager::Get();
    pFVar16 = FInputKeyManager::GetKeyFromCodes(pFVar15,&local_50,0xc0,0);
    local_98.KeyName = pFVar16->KeyName;
    pTVar1 = &pFVar16->KeyDetails;
    if (&local_98.KeyDetails != pTVar1) {
      local_98.KeyDetails.Object = pTVar1->Object;
      pTVar1->Object = (FKeyDetails *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_98.KeyDetails.SharedReferenceCount,
                 &(pFVar16->KeyDetails).SharedReferenceCount);
    }
    break;
  case 0x1b:
  case 0x1d:
    local_98.KeyName = EKeys::Section.KeyName;
    if (EKeys::Section.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Section.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Section.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = (FName)local_98.KeyDetails.Object;
    FStack_10 = (FName)local_98.KeyDetails.SharedReferenceCount.ReferenceController;
    local_50.KeyDetails.SharedReferenceCount.ReferenceController =
         local_98.KeyDetails.SharedReferenceCount.ReferenceController;
    local_98.KeyDetails.Object = pFVar10;
    local_98.KeyDetails.SharedReferenceCount = FVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.KeyDetails.SharedReferenceCount.ReferenceController);
switchD_148916d04_caseD_8:
  if ((local_98.KeyName != EKeys::Tilde.KeyName) && (bVar12 = FKey::IsValid(&local_98), bVar12)) {
    pFVar16 = (FKey *)(pTVar3->AllocatorInstance).Data;
    if ((pFVar16 <= &local_98) &&
       ((&local_98 < pFVar16 + (this->ConsoleKeys).ArrayMax &&
        (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar13 = (this->ConsoleKeys).ArrayNum;
    piVar2 = &(this->ConsoleKeys).ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->ConsoleKeys).ArrayNum = iVar13 + 1;
    pFVar4 = (FName *)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x18);
    *pFVar4 = local_98.KeyName;
    pFVar4[1] = (FName)local_98.KeyDetails.Object;
    pFVar4[2] = (FName)local_98.KeyDetails.SharedReferenceCount.ReferenceController;
    if ((FName)local_98.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(int *)((longlong)local_98.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
           *(int *)((longlong)local_98.KeyDetails.SharedReferenceCount.ReferenceController + 8) + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// DoesActionExist @ 1489279f0

bool __thiscall UInputSettings::DoesActionExist(UInputSettings *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->ActionMappings).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->ActionMappings).ArrayNum * 5;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 5) {
    if (*pFVar2 == param_1) goto LAB_148927a20;
  }
  pFVar2 = (FName *)0x0;
LAB_148927a20:
  return pFVar2 != (FName *)0x0;
}

// DoesAxisExist @ 148927a30

bool __thiscall UInputSettings::DoesAxisExist(UInputSettings *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->AxisMappings).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->AxisMappings).ArrayNum * 5;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 5) {
    if (*pFVar2 == param_1) goto LAB_148927a60;
  }
  pFVar2 = (FName *)0x0;
LAB_148927a60:
  return pFVar2 != (FName *)0x0;
}

// DoesSpeechExist @ 148927b20

bool __thiscall UInputSettings::DoesSpeechExist(UInputSettings *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->SpeechMappings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->SpeechMappings).ArrayNum * 2;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 2) {
    if (*pFVar1 == param_1) goto LAB_148927b50;
  }
  pFVar1 = (FName *)0x0;
LAB_148927b50:
  return pFVar1 != (FName *)0x0;
}

// ForceRebuildKeymaps @ 14894fe50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UInputSettings::ForceRebuildKeymaps(UInputSettings *this)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UPlayerInput> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = UPlayerInput::StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UPlayerInput>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UPlayerInput::ForceRebuildingKeyMaps
              (*(UPlayerInput **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8),true);
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// GetActionMappingByName @ 148954720

void __thiscall
UInputSettings::GetActionMappingByName
          (UInputSettings *this,FName param_1,
          TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *param_2)

{
  FInputActionKeyMapping *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FInputActionKeyMapping *pFVar7;
  uint uVar8;
  
  bVar3 = ::FName::IsWithinBounds(param_1.ComparisonIndex.Value);
  if ((bVar3) && (uVar8 = (this->ActionMappings).ArrayNum - 1, -1 < (int)uVar8)) {
    lVar6 = (longlong)(int)uVar8 * 0x28;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->ActionMappings).ArrayNum) {
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
      if (*(FName *)((this->ActionMappings).AllocatorInstance.Data + lVar6) == param_1) {
        uVar4 = 0;
        if ((int)uVar8 < (this->ActionMappings).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (FInputActionKeyMapping *)(param_2->AllocatorInstance).Data;
        pFVar7 = (FInputActionKeyMapping *)((this->ActionMappings).AllocatorInstance.Data + lVar6);
        if (((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + param_2->ArrayMax)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        FInputActionKeyMapping::FInputActionKeyMapping
                  ((FInputActionKeyMapping *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x28),pFVar7);
      }
      lVar6 = lVar6 + -0x28;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// GetActionMappings @ 148954900

TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
UInputSettings::GetActionMappings(UInputSettings *this)

{
  return &this->ActionMappings;
}

// GetActionMappingsPropertyName @ 148954910

FName __cdecl UInputSettings::GetActionMappingsPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,0xe,L"ActionMappings",FNAME_Add);
      ActionMappingsName = *pFVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ActionMappingsName;
  return in_RCX;
}

// GetActionNames @ 1489549a0

void __thiscall
UInputSettings::GetActionNames
          (UInputSettings *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  FName local_res8;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  iVar1 = (this->ActionMappings).ArrayNum;
  pFVar2 = (FName *)(this->ActionMappings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 5;
  while( true ) {
    if ((this->ActionMappings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInputActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(param_1,pFVar2);
    pFVar2 = pFVar2 + 5;
  }
  iVar1 = (this->SpeechMappings).ArrayNum;
  pFVar3 = (FName *)(this->SpeechMappings).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->SpeechMappings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInputActionSpeechMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar3 == pFVar2) break;
    local_res8 = *pFVar3;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(param_1,&local_res8);
    pFVar3 = pFVar3 + 2;
  }
  return;
}

// GetAxisMappingByName @ 148954f80

void __thiscall
UInputSettings::GetAxisMappingByName
          (UInputSettings *this,FName param_1,
          TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  
  bVar4 = ::FName::IsWithinBounds(param_1.ComparisonIndex.Value);
  if ((bVar4) && (uVar10 = (this->AxisMappings).ArrayNum - 1, -1 < (int)uVar10)) {
    lVar8 = (longlong)(int)uVar10 * 0x28;
    do {
      uVar5 = 0;
      if ((int)uVar10 < (this->AxisMappings).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
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
      if (*(FName *)((this->AxisMappings).AllocatorInstance.Data + lVar8) == param_1) {
        uVar5 = 0;
        if ((int)uVar10 < (this->AxisMappings).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        pFVar9 = (this->AxisMappings).AllocatorInstance.Data + lVar8;
        if (((pFVar1 <= pFVar9) && (pFVar9 < pFVar1 + (longlong)param_2->ArrayMax * 0x28)) &&
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
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        lVar7 = (longlong)iVar6;
        param_2->ArrayNum = iVar6 + 1;
        pFVar1 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar1 + lVar7 * 0x28) = *(undefined8 *)pFVar9;
        *(undefined4 *)(pFVar1 + lVar7 * 0x28 + 8) = *(undefined4 *)(pFVar9 + 8);
        *(undefined8 *)(pFVar1 + lVar7 * 0x28 + 0x10) = *(undefined8 *)(pFVar9 + 0x10);
        *(undefined8 *)(pFVar1 + lVar7 * 0x28 + 0x18) = *(undefined8 *)(pFVar9 + 0x18);
        lVar2 = *(longlong *)(pFVar9 + 0x20);
        *(longlong *)(pFVar1 + lVar7 * 0x28 + 0x20) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
      }
      lVar8 = lVar8 + -0x28;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// GetAxisMappings @ 148955180

TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
UInputSettings::GetAxisMappings(UInputSettings *this)

{
  return &this->AxisMappings;
}

// GetAxisMappingsPropertyName @ 148955190

FName __cdecl UInputSettings::GetAxisMappingsPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,0xc,L"AxisMappings",FNAME_Add);
      AxisMappingsName = *pFVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = AxisMappingsName;
  return in_RCX;
}

// GetAxisNames @ 148955220

void __thiscall
UInputSettings::GetAxisNames
          (UInputSettings *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  iVar2 = (this->AxisMappings).ArrayNum;
  pFVar3 = (FName *)(this->AxisMappings).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->AxisMappings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FInputAxisKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(param_1,pFVar3);
    pFVar3 = pFVar3 + 5;
  }
  return;
}

// GetDefaultInputComponentClass @ 148957c50

UClass * __cdecl UInputSettings::GetDefaultInputComponentClass(void)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined1 local_res8 [32];
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar4 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  local_38.WeakPtr.ObjectIndex = *(int *)&pUVar4[7].field_0x20;
  local_38.WeakPtr.ObjectSerialNumber = *(int *)&pUVar4[7].field_0x24;
  FSoftObjectPath::FSoftObjectPath(&local_38.ObjectID,(FSoftObjectPath *)(pUVar4 + 8));
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
  if (pUVar4 == (UObject *)0x0) {
LAB_148957cf7:
    `UInputSettings::GetDefaultInputComponentClass'::__l2::<lambda_1>::operator()(local_res8);
  }
  else {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_148957cf7;
    pUVar3 = Z_Construct_UClass_UInputComponent_NoRegister();
    if (pUVar3 == (UClass *)0x0) goto LAB_148957cf7;
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)&pUVar4[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_148957cf7;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UInputComponent_NoRegister();
      if (pUVar3 != (UClass *)0x0) {
        iVar1 = (int)pUVar3->_padding_;
        if ((*(int *)&pUVar4[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar3 = (UClass *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
          if (pUVar3 != (UClass *)0x0) {
            pUVar5 = Z_Construct_UClass_UClass_NoRegister();
            iVar1 = (int)pUVar5->_padding_;
            if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar5->_padding_)) {
              pUVar5 = Z_Construct_UClass_UInputComponent_NoRegister();
              if (pUVar5 != (UClass *)0x0) {
                iVar1 = (int)pUVar5->_padding_;
                if (((int)pUVar3->_padding_ < iVar1) ||
                   ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
                    &pUVar5->_padding_)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) goto LAB_148957de3;
              }
            }
          }
          pUVar3 = (UClass *)0x0;
          goto LAB_148957de3;
        }
      }
    }
  }
  pUVar3 = Z_Construct_UClass_UInputComponent_NoRegister();
LAB_148957de3:
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar3;
}

// GetDefaultPlayerInputClass @ 148957e10

UClass * __cdecl UInputSettings::GetDefaultPlayerInputClass(void)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined1 local_res8 [32];
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar4 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  local_38.WeakPtr.ObjectIndex = *(int *)&pUVar4[6].field_0x20;
  local_38.WeakPtr.ObjectSerialNumber = *(int *)&pUVar4[6].field_0x24;
  FSoftObjectPath::FSoftObjectPath(&local_38.ObjectID,(FSoftObjectPath *)(pUVar4 + 7));
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
  if (pUVar4 == (UObject *)0x0) {
LAB_148957eb7:
    `UInputSettings::GetDefaultPlayerInputClass'::__l2::<lambda_1>::operator()(local_res8);
  }
  else {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_148957eb7;
    pUVar3 = UPlayerInput::StaticClass();
    if (pUVar3 == (UClass *)0x0) goto LAB_148957eb7;
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)&pUVar4[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_148957eb7;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar3 = UPlayerInput::StaticClass();
      if (pUVar3 != (UClass *)0x0) {
        iVar1 = (int)pUVar3->_padding_;
        if ((*(int *)&pUVar4[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar3 = (UClass *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_38);
          if (pUVar3 != (UClass *)0x0) {
            pUVar5 = Z_Construct_UClass_UClass_NoRegister();
            iVar1 = (int)pUVar5->_padding_;
            if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar5->_padding_)) {
              pUVar5 = UPlayerInput::StaticClass();
              if (pUVar5 != (UClass *)0x0) {
                iVar1 = (int)pUVar5->_padding_;
                if (((int)pUVar3->_padding_ < iVar1) ||
                   ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
                    &pUVar5->_padding_)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) goto LAB_148957fa3;
              }
            }
          }
          pUVar3 = (UClass *)0x0;
          goto LAB_148957fa3;
        }
      }
    }
  }
  pUVar3 = UPlayerInput::StaticClass();
LAB_148957fa3:
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar3;
}

// GetInputSettings @ 148959d60

UInputSettings * __cdecl UInputSettings::GetInputSettings(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UInputSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UInputSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14895b190

UClass * __cdecl UInputSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputSettings",
               &Z_Registration_Info_UClass_UInputSettings.InnerSingleton,
               StaticRegisterNativesUInputSettings,400,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputSettings>,InternalVTableHelperCtorCaller<UInputSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputSettings.InnerSingleton;
}

// GetSpeechMappings @ 14895d070

TArray<FInputActionSpeechMapping,TSizedDefaultAllocator<32>_> * __thiscall
UInputSettings::GetSpeechMappings(UInputSettings *this)

{
  return &this->SpeechMappings;
}

// GetUniqueActionName @ 14895efd0

FName __thiscall UInputSettings::GetUniqueActionName(UInputSettings *this,FName param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 in_R8D;
  
LAB_14895eff0:
  do {
    NewMappingCount = NewMappingCount + 1;
    lVar1 = CONCAT44(NewMappingCount,in_R8D);
    *(longlong *)param_1 = lVar1;
    pFVar2 = (this->ActionMappings).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)(this->ActionMappings).ArrayNum * 0x28;
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 0x28) {
      if (*(longlong *)pFVar2 == lVar1) goto LAB_14895eff0;
    }
    pFVar3 = (this->SpeechMappings).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)(this->SpeechMappings).ArrayNum * 0x10;
    while( true ) {
      if (pFVar3 == pFVar2) {
        return param_1;
      }
      if (*(longlong *)pFVar3 == lVar1) break;
      pFVar3 = pFVar3 + 0x10;
    }
  } while( true );
}

// GetUniqueAxisName @ 14895f070

FName __thiscall UInputSettings::GetUniqueAxisName(UInputSettings *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 in_R8D;
  
  do {
    uVar5 = 0;
    NewMappingCount = NewMappingCount + 1;
    *(ulonglong *)param_1 = CONCAT44(NewMappingCount,in_R8D);
    if ((this->AxisMappings).ArrayNum < 1) {
      return param_1;
    }
    lVar6 = 0;
    while( true ) {
      uVar3 = 0;
      if ((int)uVar5 < (this->AxisMappings).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FName)(*pcVar1)();
        return FVar4;
      }
      if (*(longlong *)((this->AxisMappings).AllocatorInstance.Data + lVar6) == *(longlong *)param_1
         ) break;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
      if ((this->AxisMappings).ArrayNum <= (int)uVar5) {
        return param_1;
      }
    }
  } while( true );
}

// IsActionMappingDeprecated @ 148966680

bool __thiscall UInputSettings::IsActionMappingDeprecated(UInputSettings *this,FName param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x8 !=
      *(int *)&(this->DeprecatedActionAndAxisNames).Elements.field_0x34) {
    FVar4 = (this->DeprecatedActionAndAxisNames).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->DeprecatedActionAndAxisNames).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->DeprecatedActionAndAxisNames).HashSize - 1U & param_1.Number + uVar2) *
                    4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->DeprecatedActionAndAxisNames).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar3 * 0x10) == param_1) goto LAB_1489666fb;
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1489666fb:
  return iVar3 != -1;
}

// PopulateAxisConfigs @ 14896f420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UInputSettings::PopulateAxisConfigs(UInputSettings *this)

{
  TArray<FInputAxisConfigEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar12;
  undefined1 auStackY_d8 [32];
  uint local_a8;
  undefined1 local_a4 [4];
  FScriptContainerElement *local_a0;
  uint *local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  int iVar11;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar11 = (this->AxisConfig).ArrayNum;
  pTVar1 = &this->AxisConfig;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_a8 = 0;
  if (0 < iVar11) {
    do {
      uVar10 = local_a8;
      uVar6 = 0;
      if ((int)local_a8 < (this->AxisConfig).ArrayNum) {
        uVar6 = ~local_a8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_a0 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18;
      local_98 = &local_a8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)local_88,(TPairInitializer<FName_const_&,int_const_&> *)local_a4,
                 (bool *)(local_a4 + 4));
      iVar11 = (this->AxisConfig).ArrayNum;
      local_a8 = local_a8 + 1;
    } while ((int)local_a8 < iVar11);
  }
  uVar10 = iVar11 - 1;
  if (-1 < (int)uVar10) {
    lVar12 = (longlong)(int)uVar10 * 0x18;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->AxisConfig).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)((pTVar1->AllocatorInstance).Data + lVar12);
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      if (local_88._8_4_ != local_54) {
        FVar8 = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_48;
        }
        iVar11 = *(int *)((longlong)FVar8 +
                         (ulonglong)(local_40 - 1U & (int)((ulonglong)lVar3 >> 0x20) + uVar6) * 4);
        while (iVar11 != -1) {
          pFVar9 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar11 * 0x14);
          if (*(longlong *)(local_88._0_8_ + (longlong)iVar11 * 0x14) == lVar3) {
            if (pFVar9 == (FScriptContainerElement *)0x0) goto LAB_14896f622;
            goto LAB_14896f648;
          }
          iVar11 = *(int *)(pFVar9 + 0xc);
        }
      }
      pFVar9 = (FScriptContainerElement *)0x0;
LAB_14896f622:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_14896f648:
      if (*(uint *)(pFVar9 + 8) != uVar10) {
        uVar6 = 0;
        if ((int)uVar10 < (this->AxisConfig).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (this->AxisConfig).ArrayNum;
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        iVar7 = ~uVar10 + iVar11;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar9 + lVar12,pFVar9 + (longlong)(iVar11 - iVar7) * 0x18,(longlong)iVar7 * 0x18)
          ;
        }
        piVar2 = &(this->AxisConfig).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,&pTVar1->AllocatorInstance,(this->AxisConfig).ArrayNum,
                   &(this->AxisConfig).ArrayMax);
      }
      lVar12 = lVar12 + -0x18;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  bVar5 = local_88._12_4_ != 0;
  local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
  if (bVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// PostInitProperties @ 14896f860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInputSettings::PostInitProperties(UInputSettings *this)

{
  FName *pFVar1;
  int iVar2;
  bool bVar3;
  FName *pFVar4;
  FKey *pFVar5;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  UObject::PostInitProperties((UObject *)this);
  PopulateAxisConfigs(this);
  AddInternationalConsoleKey(this);
  iVar2 = (this->ActionMappings).ArrayNum;
  pFVar4 = (FName *)(this->ActionMappings).AllocatorInstance.Data;
  pFVar5 = (FKey *)(pFVar4 + 2);
  pFVar1 = pFVar4 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->ActionMappings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FInputActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = FKey::IsDeprecated(pFVar5);
    if ((bVar3) && (2 < (byte)LogInput._0_1_)) {
      FKey::ToString(pFVar5,&local_28);
      ::FName::ToString(pFVar4,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = pFVar4 + 5;
    pFVar5 = (FKey *)&pFVar5[1].KeyDetails.SharedReferenceCount;
  }
  iVar2 = (this->AxisMappings).ArrayNum;
  pFVar4 = (FName *)(this->AxisMappings).AllocatorInstance.Data;
  pFVar5 = (FKey *)(pFVar4 + 2);
  pFVar1 = pFVar4 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->AxisMappings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FInputAxisKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = FKey::IsDeprecated(pFVar5);
    if ((bVar3) && (2 < (byte)LogInput._0_1_)) {
      FKey::ToString(pFVar5,&local_38);
      ::FName::ToString(pFVar4,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = pFVar4 + 5;
    pFVar5 = (FKey *)&pFVar5[1].KeyDetails.SharedReferenceCount;
  }
  return;
}

// PostReloadConfig @ 14896fdc0

void __thiscall UInputSettings::PostReloadConfig(UInputSettings *this,FProperty *param_1)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  int *piVar2;
  TArray<FKey,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  code *pcVar5;
  FKeyDetails *pFVar6;
  FSharedReferencer<1> FVar7;
  FKeyDetails *pFVar8;
  FSharedReferencer<1> FVar9;
  FKeyDetails *pFVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  int iVar13;
  HKL pHVar14;
  FInputKeyManager *pFVar15;
  FKey *pFVar16;
  FKey FStack_98;
  FKey FStack_80;
  FKey FStack_68;
  FKey FStack_50;
  FName FStack_38;
  FName FStack_30;
  FName FStack_28;
  FName FStack_20;
  FName FStack_18;
  FName FStack_10;
  
  if ((this->ConsoleKeys).ArrayNum != 1) {
    return;
  }
  pTVar3 = &this->ConsoleKeys;
  if (*(FName *)(pTVar3->AllocatorInstance).Data != EKeys::Tilde.KeyName) {
    return;
  }
  FStack_98.KeyName = EKeys::Tilde.KeyName;
  FStack_98.KeyDetails.Object = EKeys::Tilde.KeyDetails.Object;
  FStack_98.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Tilde.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Tilde.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Tilde.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Tilde.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pHVar14 = GetKeyboardLayout(0);
  FVar11 = EKeys::Section.KeyDetails.SharedReferenceCount;
  pFVar10 = EKeys::Section.KeyDetails.Object;
  FVar9 = EKeys::Caret.KeyDetails.SharedReferenceCount;
  pFVar8 = EKeys::Caret.KeyDetails.Object;
  FVar7 = EKeys::Backslash.KeyDetails.SharedReferenceCount;
  pFVar6 = EKeys::Backslash.KeyDetails.Object;
  switch((uint)pHVar14 & 0x3ff) {
  case 7:
    FStack_98.KeyName = EKeys::Caret.KeyName;
    if (EKeys::Caret.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Caret.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Caret.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FStack_38 = (FName)FStack_98.KeyDetails.Object;
    FStack_30 = (FName)FStack_98.KeyDetails.SharedReferenceCount.ReferenceController;
    FStack_50.KeyDetails.SharedReferenceCount.ReferenceController =
         FStack_98.KeyDetails.SharedReferenceCount.ReferenceController;
    FStack_98.KeyDetails.Object = pFVar8;
    FStack_98.KeyDetails.SharedReferenceCount = FVar9;
    break;
  default:
    goto switchD_148916d04_caseD_8;
  case 10:
    pFVar15 = FInputKeyManager::Get();
    pFVar16 = FInputKeyManager::GetKeyFromCodes(pFVar15,&FStack_68,0xdc,0);
    FStack_98.KeyName = pFVar16->KeyName;
    pTVar1 = &pFVar16->KeyDetails;
    FStack_50.KeyDetails.SharedReferenceCount.ReferenceController =
         FStack_68.KeyDetails.SharedReferenceCount.ReferenceController;
    if (&FStack_98.KeyDetails != pTVar1) {
      FStack_98.KeyDetails.Object = pTVar1->Object;
      pTVar1->Object = (FKeyDetails *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_98.KeyDetails.SharedReferenceCount,
                 &(pFVar16->KeyDetails).SharedReferenceCount);
      FStack_50.KeyDetails.SharedReferenceCount.ReferenceController =
           FStack_68.KeyDetails.SharedReferenceCount.ReferenceController;
    }
    break;
  case 0xc:
  case 0xe:
    pFVar15 = FInputKeyManager::Get();
    pFVar16 = FInputKeyManager::GetKeyFromCodes(pFVar15,&FStack_80,0xde,0);
    FStack_98.KeyName = pFVar16->KeyName;
    pTVar1 = &pFVar16->KeyDetails;
    FStack_50.KeyDetails.SharedReferenceCount.ReferenceController =
         FStack_80.KeyDetails.SharedReferenceCount.ReferenceController;
    if (&FStack_98.KeyDetails != pTVar1) {
      FStack_98.KeyDetails.Object = pTVar1->Object;
      pTVar1->Object = (FKeyDetails *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_98.KeyDetails.SharedReferenceCount,
                 &(pFVar16->KeyDetails).SharedReferenceCount);
      FStack_50.KeyDetails.SharedReferenceCount.ReferenceController =
           FStack_80.KeyDetails.SharedReferenceCount.ReferenceController;
    }
    break;
  case 0x10:
    FStack_98.KeyName = EKeys::Backslash.KeyName;
    if (EKeys::Backslash.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Backslash.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Backslash.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FStack_28 = (FName)FStack_98.KeyDetails.Object;
    FStack_20 = (FName)FStack_98.KeyDetails.SharedReferenceCount.ReferenceController;
    FStack_50.KeyDetails.SharedReferenceCount.ReferenceController =
         FStack_98.KeyDetails.SharedReferenceCount.ReferenceController;
    FStack_98.KeyDetails.Object = pFVar6;
    FStack_98.KeyDetails.SharedReferenceCount = FVar7;
    break;
  case 0x11:
  case 0x19:
    pFVar15 = FInputKeyManager::Get();
    pFVar16 = FInputKeyManager::GetKeyFromCodes(pFVar15,&FStack_50,0xc0,0);
    FStack_98.KeyName = pFVar16->KeyName;
    pTVar1 = &pFVar16->KeyDetails;
    if (&FStack_98.KeyDetails != pTVar1) {
      FStack_98.KeyDetails.Object = pTVar1->Object;
      pTVar1->Object = (FKeyDetails *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_98.KeyDetails.SharedReferenceCount,
                 &(pFVar16->KeyDetails).SharedReferenceCount);
    }
    break;
  case 0x1b:
  case 0x1d:
    FStack_98.KeyName = EKeys::Section.KeyName;
    if (EKeys::Section.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Section.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Section.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FStack_18 = (FName)FStack_98.KeyDetails.Object;
    FStack_10 = (FName)FStack_98.KeyDetails.SharedReferenceCount.ReferenceController;
    FStack_50.KeyDetails.SharedReferenceCount.ReferenceController =
         FStack_98.KeyDetails.SharedReferenceCount.ReferenceController;
    FStack_98.KeyDetails.Object = pFVar10;
    FStack_98.KeyDetails.SharedReferenceCount = FVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.KeyDetails.SharedReferenceCount.ReferenceController);
switchD_148916d04_caseD_8:
  if ((FStack_98.KeyName != EKeys::Tilde.KeyName) && (bVar12 = FKey::IsValid(&FStack_98), bVar12)) {
    pFVar16 = (FKey *)(pTVar3->AllocatorInstance).Data;
    if ((pFVar16 <= &FStack_98) &&
       ((&FStack_98 < pFVar16 + (this->ConsoleKeys).ArrayMax &&
        (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar13 = (this->ConsoleKeys).ArrayNum;
    piVar2 = &(this->ConsoleKeys).ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->ConsoleKeys).ArrayNum = iVar13 + 1;
    pFVar4 = (FName *)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x18);
    *pFVar4 = FStack_98.KeyName;
    pFVar4[1] = (FName)FStack_98.KeyDetails.Object;
    pFVar4[2] = (FName)FStack_98.KeyDetails.SharedReferenceCount.ReferenceController;
    if ((FName)FStack_98.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(int *)((longlong)FStack_98.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
           *(int *)((longlong)FStack_98.KeyDetails.SharedReferenceCount.ReferenceController + 8) + 1
      ;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_98.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// RemoveActionMapping @ 148977c60

void __thiscall
UInputSettings::RemoveActionMapping
          (UInputSettings *this,FInputActionKeyMapping *param_1,bool param_2)

{
  int *piVar1;
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar11 = (this->ActionMappings).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    pTVar2 = &this->ActionMappings;
    lVar12 = (longlong)(int)uVar11 * 0x28;
    do {
      uVar9 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < (this->ActionMappings).ArrayNum) {
        uVar7 = uVar9;
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
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if ((*(FName *)(pFVar10 + lVar12) == param_1->ActionName) &&
         (*(FName *)(pFVar10 + lVar12 + 0x10) == (param_1->Key).KeyName)) {
        FVar3 = pFVar10[lVar12 + 8];
        uVar4 = param_1->field_0x8;
        if (((((byte)FVar3 ^ param_1->bShift) & 1) == 0) &&
           ((((((byte)FVar3 ^ uVar4) & 2) == 0 && ((((byte)FVar3 ^ uVar4) & 4) == 0)) &&
            ((((byte)FVar3 ^ uVar4) & 8) == 0)))) {
          uVar7 = 0;
          if ((int)uVar11 < (this->ActionMappings).ArrayNum) {
            uVar7 = uVar9;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (pTVar2->AllocatorInstance).Data + lVar12;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar10 + 0x20));
          iVar8 = (this->ActionMappings).ArrayNum + ~uVar11;
          if (iVar8 != 0) {
            memmove(pFVar10,pFVar10 + 0x28,(longlong)iVar8 * 0x28);
          }
          piVar1 = &(this->ActionMappings).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&pTVar2->AllocatorInstance,(this->ActionMappings).ArrayNum,
                     &(this->ActionMappings).ArrayMax);
        }
      }
      lVar12 = lVar12 + -0x28;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  if (!param_2) {
    return;
  }
  ForceRebuildKeymaps(this);
  return;
}

// RemoveAxisMapping @ 1489781d0

void __thiscall
UInputSettings::RemoveAxisMapping(UInputSettings *this,FInputAxisKeyMapping *param_1,bool param_2)

{
  int *piVar1;
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = (this->AxisMappings).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    pTVar2 = &this->AxisMappings;
    lVar10 = (longlong)(int)uVar9 * 0x28;
    do {
      uVar7 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < (this->AxisMappings).ArrayNum) {
        uVar5 = uVar7;
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
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if ((*(FName *)(pFVar8 + lVar10) == param_1->AxisName) &&
         (*(FName *)(pFVar8 + lVar10 + 0x10) == (param_1->Key).KeyName)) {
        uVar5 = 0;
        if ((int)uVar9 < (this->AxisMappings).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar8 = (pTVar2->AllocatorInstance).Data + lVar10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar8 + 0x20));
        iVar6 = (this->AxisMappings).ArrayNum + ~uVar9;
        if (iVar6 != 0) {
          memmove(pFVar8,pFVar8 + 0x28,(longlong)iVar6 * 0x28);
        }
        piVar1 = &(this->AxisMappings).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&pTVar2->AllocatorInstance,(this->AxisMappings).ArrayNum,
                   &(this->AxisMappings).ArrayMax);
      }
      lVar10 = lVar10 + -0x28;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  if (!param_2) {
    return;
  }
  ForceRebuildKeymaps(this);
  return;
}

// RemoveInvalidKeys @ 1489785f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInputSettings::RemoveInvalidKeys(UInputSettings *this)

{
  FName *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FName FVar9;
  wchar_t *pwVar10;
  FName *this_00;
  longlong lVar11;
  uint uVar12;
  FKey *this_01;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  int local_98 [2];
  ForAnyElementType local_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined8 local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  
  this_00 = (FName *)(this->ActionMappings).AllocatorInstance.Data;
  this_01 = (FKey *)(this_00 + 2);
  iVar2 = (this->ActionMappings).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_98[0] = 0;
  pFVar1 = this_00 + (longlong)iVar2 * 5;
  do {
    if ((this->ActionMappings).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInputActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) {
      if ((int)local_88 != 0) {
        pwVar10 = FCommandLine::Get();
        bVar5 = FParse::Param(pwVar10,L"RemoveInvalidKeys");
        if (bVar5) {
          uVar12 = (int)local_88 - 1;
          if (-1 < (int)uVar12) {
            lVar13 = (longlong)(int)uVar12 * 4;
            while( true ) {
              uVar7 = 0;
              if ((int)uVar12 < (int)local_88) {
                uVar7 = ~uVar12 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_res10 = 0;
              local_50 = 0;
              uVar7 = *(uint *)(local_90.Data + lVar13);
              lVar11 = (longlong)(int)uVar7;
              local_48 = 0;
              FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              uVar8 = 0;
              if ((int)uVar7 < (this->ActionMappings).ArrayNum) {
                uVar8 = ~uVar7 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = (this->ActionMappings).AllocatorInstance.Data;
              *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0x10) = 0;
              if (pFVar3 + lVar11 * 0x28 + 0x18 != (FScriptContainerElement *)&local_48) {
                *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0x18) = local_48;
                local_48 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          ((FSharedReferencer<1> *)(pFVar3 + lVar11 * 0x28 + 0x20),&FStack_40);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FStack_40.ReferenceController);
              lVar13 = lVar13 + -4;
              uVar12 = uVar12 - 1;
              if ((int)uVar12 < 0) break;
            }
          }
          UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
          ::FString::FString(&local_80,"");
          UObject::TryUpdateDefaultConfigFile((UObject *)this,&local_80,true);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        else if (2 < (byte)LogInput._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
        }
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      return;
    }
    bVar5 = FKey::IsValid(this_01);
    if (!bVar5) {
      FVar9 = FKey::GetFName(this_01);
      bVar5 = ::FName::Equals(*(FName *)FVar9,L"None");
      if (!bVar5) {
        if (2 < (byte)LogInput._0_1_) {
          FKey::ToString(this_01,&local_60);
          ::FName::ToString(this_00,&local_70);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        if (((local_90.Data <= (FScriptContainerElement *)local_98) &&
            ((FScriptContainerElement *)local_98 < local_90.Data + (longlong)local_88._4_4_ * 4)) &&
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
        iVar6 = (int)local_88;
        if ((int)local_88 == local_88._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_90,(int *)((longlong)&local_88 + 4));
        }
        local_88 = CONCAT44(local_88._4_4_,iVar6 + 1);
        *(int *)(local_90.Data + (longlong)iVar6 * 4) = local_98[0];
      }
    }
    local_98[0] = local_98[0] + 1;
    this_00 = this_00 + 5;
    this_01 = (FKey *)&this_01[1].KeyDetails.SharedReferenceCount;
  } while( true );
}

// SaveKeyMappings @ 14897bc90

void __thiscall UInputSettings::SaveKeyMappings(UInputSettings *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FInputActionKeyMapping,int,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<void>_>_>
            ((FInputActionKeyMapping *)(this->ActionMappings).AllocatorInstance.Data,
             (this->ActionMappings).ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  AlgoImpl::
  IntroSortInternal<FInputAxisKeyMapping,int,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<void>_>_>
            ((FInputAxisKeyMapping *)(this->AxisMappings).AllocatorInstance.Data,
             (this->AxisMappings).ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// SetActionMappingDeprecated @ 14897d420

void __thiscall
UInputSettings::SetActionMappingDeprecated(UInputSettings *this,FName param_1,bool param_2)

{
  FName local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1;
  if (param_2) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->DeprecatedActionAndAxisNames,local_res18,(bool *)&local_res10);
    return;
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
            (&this->DeprecatedActionAndAxisNames,param_1);
  return;
}

// SetDefaultInputComponentClass @ 14897e9a0

void __cdecl UInputSettings::SetDefaultInputComponentClass(TSubclassOf<UInputComponent> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UObject *local_res8;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
LAB_14897eacb:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3895977100628197938>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\InputSettings.cpp"
                       ,0x232,"NewDefaultInputComponentClass");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    return;
  }
  pUVar5 = Z_Construct_UClass_UInputComponent_NoRegister();
  if (pUVar5 == (UClass *)0x0) goto LAB_14897eacb;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) || (*(longlong *)param_1.Class.field0_0x0 == 0)) goto LAB_14897eacb;
  pUVar5 = StaticClass();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar7 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = (UObject *)0x0;
  if (pUVar7 != (UObject *)0x0) {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14897ea51;
  }
  pUVar7 = pUVar6;
LAB_14897ea51:
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_UInputComponent_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar6 = *(UObject **)param_1.Class.field0_0x0;
      }
    }
  }
  local_res8 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&pUVar7[7].field_0x20,(FObjectPtr)&local_res8);
  return;
}

// SetDefaultPlayerInputClass @ 14897eb10

void __cdecl UInputSettings::SetDefaultPlayerInputClass(TSubclassOf<UPlayerInput> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UObject *local_res8;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
LAB_14897ec3b:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3895977100628197929>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\InputSettings.cpp"
                       ,0x229,"NewDefaultPlayerInputClass");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    return;
  }
  pUVar5 = UPlayerInput::StaticClass();
  if (pUVar5 == (UClass *)0x0) goto LAB_14897ec3b;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) || (*(longlong *)param_1.Class.field0_0x0 == 0)) goto LAB_14897ec3b;
  pUVar5 = StaticClass();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar7 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = (UObject *)0x0;
  if (pUVar7 != (UObject *)0x0) {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14897ebc1;
  }
  pUVar7 = pUVar6;
LAB_14897ebc1:
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar5 = UPlayerInput::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar6 = *(UObject **)param_1.Class.field0_0x0;
      }
    }
  }
  local_res8 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&pUVar7[6].field_0x20,(FObjectPtr)&local_res8);
  return;
}

// StaticRegisterNativesUInputSettings @ 148982ae0

void __cdecl UInputSettings::StaticRegisterNativesUInputSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UInputSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14898e200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UInputSettings::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInputSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[7].field_0x10,0);
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[8].field_0x10,0);
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execAddActionMapping @ 14898e3c0

void __cdecl UInputSettings::execAddActionMapping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputActionKeyMapping *pFVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  FInputActionKeyMapping local_48;
  
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_res10 = 0;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.bCmd = '\0';
  local_48.bAlt = '\0';
  local_48.bCtrl = '\0';
  local_48.bShift = '\0';
  local_48.ActionName.ComparisonIndex.Value = 0;
  local_48.ActionName.Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  pFVar2 = &local_48;
  if ((FInputActionKeyMapping *)param_2->MostRecentPropertyAddress != (FInputActionKeyMapping *)0x0)
  {
    pFVar2 = (FInputActionKeyMapping *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputActionKeyMapping_const_&>
            ((TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *)&param_1[3].field_0x18,
             pFVar2);
  if (bVar3) {
    ForceRebuildKeymaps((UInputSettings *)param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execAddAxisMapping @ 14898e530

void __cdecl UInputSettings::execAddAxisMapping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputAxisKeyMapping *pFVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  FInputAxisKeyMapping local_48;
  
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_res10 = 0;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Scale = 1.0;
  local_48.AxisName.ComparisonIndex.Value = 0;
  local_48.AxisName.Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  pFVar2 = &local_48;
  if ((FInputAxisKeyMapping *)param_2->MostRecentPropertyAddress != (FInputAxisKeyMapping *)0x0) {
    pFVar2 = (FInputAxisKeyMapping *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputAxisKeyMapping_const_&>
            ((TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *)(param_1 + 4),pFVar2);
  if (bVar3) {
    ForceRebuildKeymaps((UInputSettings *)param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execForceRebuildKeymaps @ 14898e6c0

void __cdecl UInputSettings::execForceRebuildKeymaps(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ForceRebuildKeymaps((UInputSettings *)param_1);
  return;
}

// execGetActionMappingByName @ 14898e6e0

void __cdecl
UInputSettings::execGetActionMappingByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res10;
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetActionMappingByName((UInputSettings *)param_1,local_res10,pTVar2);
  DestructItems<FInputActionKeyMapping,int>
            ((FInputActionKeyMapping *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FInputActionKeyMapping *)local_18.AllocatorInstance.Data != (FInputActionKeyMapping *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetActionNames @ 14898e7e0

void __cdecl UInputSettings::execGetActionNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  FName local_res8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->AllocatorInstance,0,&this->ArrayMax);
  }
  iVar1 = *(int *)&param_1[3].field_0x20;
  pFVar3 = *(FName **)&param_1[3].field_0x18;
  pFVar4 = pFVar3 + (longlong)iVar1 * 5;
  while( true ) {
    if (*(int *)&param_1[3].field_0x20 != iVar1) {
      `TCheckedPointerIterator<FInputActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar3 == pFVar4) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this,pFVar3);
    pFVar3 = pFVar3 + 5;
  }
  iVar1 = *(int *)&param_1[6].field_0x18;
  pFVar4 = *(FName **)&param_1[6].field_0x10;
  pFVar3 = pFVar4 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)&param_1[6].field_0x18 != iVar1) {
      `TCheckedPointerIterator<FInputActionSpeechMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar3) break;
    local_res8 = *pFVar4;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(this,&local_res8);
    pFVar4 = pFVar4 + 2;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetAxisMappingByName @ 14898e950

void __cdecl
UInputSettings::execGetAxisMappingByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res10;
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAxisMappingByName((UInputSettings *)param_1,local_res10,pTVar2);
  DestructItems<FInputAxisKeyMapping,int>
            ((FInputAxisKeyMapping *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FInputAxisKeyMapping *)local_18.AllocatorInstance.Data != (FInputAxisKeyMapping *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAxisNames @ 14898ea50

void __cdecl UInputSettings::execGetAxisNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  FName *pFVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->AllocatorInstance,0,&this->ArrayMax);
  }
  iVar2 = *(int *)&param_1[4].field_0x8;
  pFVar4 = *(FName **)(param_1 + 4);
  pFVar1 = pFVar4 + (longlong)iVar2 * 5;
  while( true ) {
    if (*(int *)&param_1[4].field_0x8 != iVar2) {
      `TCheckedPointerIterator<FInputAxisKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this,pFVar4);
    pFVar4 = pFVar4 + 5;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetInputSettings @ 14898eb70

void __cdecl UInputSettings::execGetInputSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  UClass *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    *(TObjectPtr<UObject>_u_0 *)param_3 = (this->ClassDefaultObject).field0_0x0;
    return;
  }
  *(TObjectPtr<UObject>_u_0 *)param_3 = (this->ClassDefaultObject).field0_0x0;
  return;
}

// execRemoveActionMapping @ 148991910

void __cdecl UInputSettings::execRemoveActionMapping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputActionKeyMapping *pFVar2;
  int local_res10 [4];
  undefined8 local_res20;
  FInputActionKeyMapping local_48;
  
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_res20 = 0;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.bCmd = '\0';
  local_48.bAlt = '\0';
  local_48.bCtrl = '\0';
  local_48.bShift = '\0';
  local_48.ActionName.ComparisonIndex.Value = 0;
  local_48.ActionName.Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  pFVar2 = &local_48;
  if ((FInputActionKeyMapping *)param_2->MostRecentPropertyAddress != (FInputActionKeyMapping *)0x0)
  {
    pFVar2 = (FInputActionKeyMapping *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveActionMapping((UInputSettings *)param_1,pFVar2,local_res10[0] != 0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execRemoveAxisMapping @ 148991a60

void __cdecl UInputSettings::execRemoveAxisMapping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputAxisKeyMapping *pFVar2;
  int local_res10 [4];
  undefined8 local_res20;
  FInputAxisKeyMapping local_48;
  
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_res20 = 0;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Scale = 1.0;
  local_48.AxisName.ComparisonIndex.Value = 0;
  local_48.AxisName.Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  pFVar2 = &local_48;
  if ((FInputAxisKeyMapping *)param_2->MostRecentPropertyAddress != (FInputAxisKeyMapping *)0x0) {
    pFVar2 = (FInputAxisKeyMapping *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveAxisMapping((UInputSettings *)param_1,pFVar2,local_res10[0] != 0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execSaveKeyMappings @ 148991bb0

void __cdecl UInputSettings::execSaveKeyMappings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AlgoImpl::
  IntroSortInternal<FInputActionKeyMapping,int,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<void>_>_>
            (*(FInputActionKeyMapping **)&param_1[3].field_0x18,*(int *)&param_1[3].field_0x20,
             local_res8[0],(TLess<void> *)local_res8);
  AlgoImpl::
  IntroSortInternal<FInputAxisKeyMapping,int,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<void>_>_>
            (*(FInputAxisKeyMapping **)(param_1 + 4),*(int *)&param_1[4].field_0x8,local_res8[0],
             (TLess<void> *)local_res8);
  UObject::SaveConfig(param_1,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// operator() @ 150533c30

bool __thiscall
`UInputSettings::GetDefaultInputComponentClass'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3895977100628197923>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3895977100628197923>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150533c70

bool __thiscall
`UInputSettings::GetDefaultPlayerInputClass'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3895977100628197916>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3895977100628197916>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

