// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 9

// StaticClass @ 14a780a70

UClass * __cdecl UCommonUIInputSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIInputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIInputSettings",
               &Z_Registration_Info_UClass_UCommonUIInputSettings.InnerSingleton,
               StaticRegisterNativesUCommonUIInputSettings,0x80,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UCommonUIInputSettings>,
               InternalVTableHelperCtorCaller<UCommonUIInputSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIInputSettings.InnerSingleton;
}

// UCommonUIInputSettings @ 14a7af610

UCommonUIInputSettings * __thiscall
UCommonUIInputSettings::UCommonUIInputSettings(UCommonUIInputSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bLinkCursorToGamepadFocus = true;
  this->_padding_ = (longlong)&___7UCommonUIInputSettings__6B_;
  (this->InputActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActions).ArrayNum = 0;
  (this->InputActions).ArrayMax = 0;
  (this->ActionOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionOverrides).ArrayNum = 0;
  (this->ActionOverrides).ArrayMax = 0;
  this->UIActionProcessingPriority = 10000;
  (this->AnalogCursorSettings).PreprocessorPriority = 2;
  (this->AnalogCursorSettings).PreprocessorRegistrationInfo.Type = Game;
  (this->AnalogCursorSettings).PreprocessorRegistrationInfo.Priority = 2;
  (this->AnalogCursorSettings).bEnableCursorAcceleration = true;
  (this->AnalogCursorSettings).CursorAcceleration = 1500.0;
  (this->AnalogCursorSettings).CursorMaxSpeed = 2200.0;
  (this->AnalogCursorSettings).CursorDeadZone = 0.25;
  (this->AnalogCursorSettings).HoverSlowdownFactor = 0.4;
  (this->AnalogCursorSettings).ScrollDeadZone = 0.2;
  (this->AnalogCursorSettings).ScrollUpdatePeriod = 0.1;
  (this->AnalogCursorSettings).ScrollMultiplier = 2.5;
  return this;
}

// UCommonUIInputSettings @ 14a7af6a0

UCommonUIInputSettings * __thiscall
UCommonUIInputSettings::UCommonUIInputSettings
          (UCommonUIInputSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bLinkCursorToGamepadFocus = true;
  this->_padding_ = (longlong)&___7UCommonUIInputSettings__6B_;
  (this->InputActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActions).ArrayNum = 0;
  (this->InputActions).ArrayMax = 0;
  (this->ActionOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionOverrides).ArrayNum = 0;
  (this->ActionOverrides).ArrayMax = 0;
  this->UIActionProcessingPriority = 10000;
  (this->AnalogCursorSettings).PreprocessorPriority = 2;
  (this->AnalogCursorSettings).PreprocessorRegistrationInfo.Type = Game;
  (this->AnalogCursorSettings).PreprocessorRegistrationInfo.Priority = 2;
  (this->AnalogCursorSettings).bEnableCursorAcceleration = true;
  (this->AnalogCursorSettings).CursorAcceleration = 1500.0;
  (this->AnalogCursorSettings).CursorMaxSpeed = 2200.0;
  (this->AnalogCursorSettings).CursorDeadZone = 0.25;
  (this->AnalogCursorSettings).HoverSlowdownFactor = 0.4;
  (this->AnalogCursorSettings).ScrollDeadZone = 0.2;
  (this->AnalogCursorSettings).ScrollUpdatePeriod = 0.1;
  (this->AnalogCursorSettings).ScrollMultiplier = 2.5;
  return this;
}

// ~UCommonUIInputSettings @ 14a7b3810

void __thiscall UCommonUIInputSettings::~UCommonUIInputSettings(UCommonUIInputSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCommonUIInputSettings__6B_;
  DestructItems<FUIInputAction,int>
            ((FUIInputAction *)(this->ActionOverrides).AllocatorInstance.Data,
             (this->ActionOverrides).ArrayNum);
  pFVar1 = (this->ActionOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FUIInputAction,int>
            ((FUIInputAction *)(this->InputActions).AllocatorInstance.Data,
             (this->InputActions).ArrayNum);
  pFVar1 = (this->InputActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FindAction @ 14a7dbb60

FUIInputAction * __thiscall
UCommonUIInputSettings::FindAction(UCommonUIInputSettings *this,FUIActionTag param_1)

{
  FUIInputAction *pFVar1;
  FUIInputAction *pFVar2;
  
  pFVar2 = (FUIInputAction *)(this->InputActions).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->InputActions).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FUIInputAction *)0x0;
    }
    if (pFVar2->ActionTag == param_1) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// Get @ 14a7dff80

UCommonUIInputSettings * __cdecl UCommonUIInputSettings::Get(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UCommonUIInputSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UCommonUIInputSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14a7e66d0

UClass * __cdecl UCommonUIInputSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIInputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIInputSettings",
               &Z_Registration_Info_UClass_UCommonUIInputSettings.InnerSingleton,
               StaticRegisterNativesUCommonUIInputSettings,0x80,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UCommonUIInputSettings>,
               InternalVTableHelperCtorCaller<UCommonUIInputSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIInputSettings.InnerSingleton;
}

// PostInitProperties @ 14a802270

void __thiscall UCommonUIInputSettings::PostInitProperties(UCommonUIInputSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UCommonUIInputSettings *pUStack_28;
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
      (UCommonUIInputSettings **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8)))
  {
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
  *(UCommonUIInputSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUCommonUIInputSettings @ 14a81e910

void __cdecl UCommonUIInputSettings::StaticRegisterNativesUCommonUIInputSettings(void)

{
  return;
}

