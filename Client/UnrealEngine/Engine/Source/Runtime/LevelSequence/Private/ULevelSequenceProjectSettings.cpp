// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 7

// StaticClass @ 146c44480

UClass * __cdecl ULevelSequenceProjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceProjectSettings",
               &Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton,
               StaticRegisterNativesULevelSequenceProjectSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelSequenceProjectSettings>,
               InternalVTableHelperCtorCaller<ULevelSequenceProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton;
}

// ULevelSequenceProjectSettings @ 146c4ebb0

ULevelSequenceProjectSettings * __thiscall
ULevelSequenceProjectSettings::ULevelSequenceProjectSettings
          (ULevelSequenceProjectSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelSequenceProjectSettings__6B_;
  (this->DefaultDisplayRate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultDisplayRate).Data.ArrayNum = 0;
  (this->DefaultDisplayRate).Data.ArrayMax = 0;
  (this->DefaultTickResolution).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultTickResolution).Data.ArrayNum = 0;
  (this->DefaultTickResolution).Data.ArrayMax = 0;
  return this;
}

// ULevelSequenceProjectSettings @ 146c4ebf0

ULevelSequenceProjectSettings * __thiscall
ULevelSequenceProjectSettings::ULevelSequenceProjectSettings(ULevelSequenceProjectSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar1);
  this->bDefaultLockEngineToDisplayRate = false;
  this->_padding_ = (longlong)&___7ULevelSequenceProjectSettings__6B_;
  ::FString::FString(&this->DefaultDisplayRate,"30fps");
  ::FString::FString(&this->DefaultTickResolution,"24000fps");
  this->DefaultClockSource = Tick;
  return this;
}

// ~ULevelSequenceProjectSettings @ 146c4f330

void __thiscall
ULevelSequenceProjectSettings::~ULevelSequenceProjectSettings(ULevelSequenceProjectSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULevelSequenceProjectSettings__6B_;
  pFVar1 = (this->DefaultTickResolution).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultDisplayRate).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 146c55c70

UClass * __cdecl ULevelSequenceProjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceProjectSettings",
               &Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton,
               StaticRegisterNativesULevelSequenceProjectSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelSequenceProjectSettings>,
               InternalVTableHelperCtorCaller<ULevelSequenceProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton;
}

// PostInitProperties @ 146c581a0

void __thiscall
ULevelSequenceProjectSettings::PostInitProperties(ULevelSequenceProjectSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  ULevelSequenceProjectSettings *pUStack_28;
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
      (ULevelSequenceProjectSettings **)
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
  *(ULevelSequenceProjectSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesULevelSequenceProjectSettings @ 146c5c6c0

void __cdecl ULevelSequenceProjectSettings::StaticRegisterNativesULevelSequenceProjectSettings(void)

{
  return;
}

