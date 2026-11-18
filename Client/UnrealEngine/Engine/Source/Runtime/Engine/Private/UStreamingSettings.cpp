// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147a10410

UClass * __cdecl UStreamingSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamingSettings",
               &Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton,
               StaticRegisterNativesUStreamingSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamingSettings>,
               InternalVTableHelperCtorCaller<UStreamingSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton;
}

// UStreamingSettings @ 147a284c0

UStreamingSettings * __thiscall
UStreamingSettings::UStreamingSettings(UStreamingSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UStreamingSettings__6B_;
  return this;
}

// UStreamingSettings @ 147a284f0

UStreamingSettings * __thiscall UStreamingSettings::UStreamingSettings(UStreamingSettings *this)

{
  undefined1 *puVar1;
  FObjectInitializer *pFVar2;
  FName local_res8 [4];
  
  pFVar2 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar2);
  this->_padding_ = (longlong)&___7UStreamingSettings__6B_;
  ::FName::FName(local_res8,L"Streaming");
  this->AsyncLoadingThreadEnabled = 0;
  this->WarnIfTimeLimitExceeded = 0;
  this->UseBackgroundLevelStreaming = 1;
  this->AsyncLoadingUseFullTimeLimit = 1;
  this->EventDrivenLoaderEnabled = 0;
  this->FlushStreamingOnExit = 1;
  this->_padding_ = (longlong)local_res8[0];
  this->TimeLimitExceededMultiplier = 1.5;
  this->TimeLimitExceededMinTime = 0.005;
  this->MinBulkDataSizeForAsyncLoading = 0x20000;
  this->AsyncLoadingTimeLimit = 5.0;
  this->PriorityAsyncLoadingExtraTime = 15.0;
  this->LevelStreamingActorsUpdateTimeLimit = 5.0;
  this->PriorityLevelStreamingActorsUpdateExtraTime = 5.0;
  this->LevelStreamingComponentsRegistrationGranularity = 10;
  this->LevelStreamingAddPrimitiveGranularity = 0x78;
  this->LevelStreamingUnregisterComponentsTimeLimit = 1.0;
  this->LevelStreamingComponentsUnregistrationGranularity = 5;
  return this;
}

// ~UStreamingSettings @ 147a2aa20

void __thiscall UStreamingSettings::~UStreamingSettings(UStreamingSettings *this)

{
  this->_padding_ = (longlong)&___7UStreamingSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 147a57810

UClass * __cdecl UStreamingSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamingSettings",
               &Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton,
               StaticRegisterNativesUStreamingSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamingSettings>,
               InternalVTableHelperCtorCaller<UStreamingSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton;
}

// PostInitProperties @ 147a66be0

void __thiscall UStreamingSettings::PostInitProperties(UStreamingSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UStreamingSettings *pUStack_28;
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
      (UStreamingSettings **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
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
  *(UStreamingSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUStreamingSettings @ 147a97690

void __cdecl UStreamingSettings::StaticRegisterNativesUStreamingSettings(void)

{
  return;
}

