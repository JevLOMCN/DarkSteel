// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147a104d0

UClass * __cdecl UGarbageCollectionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GarbageCollectionSettings",
               &Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton,
               StaticRegisterNativesUGarbageCollectionSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UGarbageCollectionSettings>,
               InternalVTableHelperCtorCaller<UGarbageCollectionSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton;
}

// UGarbageCollectionSettings @ 147a28380

UGarbageCollectionSettings * __thiscall
UGarbageCollectionSettings::UGarbageCollectionSettings
          (UGarbageCollectionSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UGarbageCollectionSettings__6B_;
  return this;
}

// UGarbageCollectionSettings @ 147a283b0

UGarbageCollectionSettings * __thiscall
UGarbageCollectionSettings::UGarbageCollectionSettings(UGarbageCollectionSettings *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FObjectInitializer *pFVar3;
  FName local_res8 [4];
  
  pFVar3 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar3);
  this->_padding_ = (longlong)&___7UGarbageCollectionSettings__6B_;
  ::FName::FName(local_res8,L"Garbage Collection");
  this->_padding_ = (longlong)local_res8[0];
  this->NumRetriesBeforeForcingGC = 0;
  this->MaxObjectsNotConsideredByGC = 0;
  this->TimeBetweenPurgingPendingKillObjects = 60.0;
  this->MaxObjectsInEditor = 0xc00000;
  puVar2 = &this->field_0x3c;
  this->FlushStreamingOnGC = 0;
  this->DumpObjectCountsToLogWhenMaxObjectLimitExceeded = 0;
  this->GarbageEliminationEnabled = 0;
  this->VerifyUObjectsAreNotFGCObjects = 1;
  this->ActorClusteringEnabled = 1;
  this->AssetClusteringEnabled = 1;
  this->CreateGCClusters = 1;
  this->IncrementalBeginDestroyEnabled = 1;
  this->AllowParallelGC = 1;
  this->MaxObjectsInGame = 0x200000;
  this->MinGCClusterSize = 5;
  return this;
}

// ~UGarbageCollectionSettings @ 147a2a9e0

void __thiscall
UGarbageCollectionSettings::~UGarbageCollectionSettings(UGarbageCollectionSettings *this)

{
  this->_padding_ = (longlong)&___7UGarbageCollectionSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 147a57690

UClass * __cdecl UGarbageCollectionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GarbageCollectionSettings",
               &Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton,
               StaticRegisterNativesUGarbageCollectionSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UGarbageCollectionSettings>,
               InternalVTableHelperCtorCaller<UGarbageCollectionSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton;
}

// PostInitProperties @ 147a66bd0

void __thiscall UGarbageCollectionSettings::PostInitProperties(UGarbageCollectionSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UGarbageCollectionSettings *pUStack_28;
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
      (UGarbageCollectionSettings **)
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
  *(UGarbageCollectionSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUGarbageCollectionSettings @ 147a97670

void __cdecl UGarbageCollectionSettings::StaticRegisterNativesUGarbageCollectionSettings(void)

{
  return;
}

