// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 136

// StaticClass @ 148c72830

UClass * __cdecl AFunctionalTest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTest",
               &Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton,
               StaticRegisterNativesAFunctionalTest,0x438,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AFunctionalTest>,
               InternalVTableHelperCtorCaller<AFunctionalTest>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton;
}

// AFunctionalTest @ 148c7e4a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AFunctionalTest * __thiscall
AFunctionalTest::AFunctionalTest(AFunctionalTest *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AFunctionalTest__6B_;
  (this->TestLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestLabel).Data.ArrayNum = 0;
  (this->TestLabel).Data.ArrayMax = 0;
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->TestTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestTags).Data.ArrayNum = 0;
  (this->TestTags).Data.ArrayMax = 0;
  (this->SpriteComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->PreviousTestTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousTestTags).Data.ArrayNum = 0;
  (this->PreviousTestTags).Data.ArrayMax = 0;
  (this->PersistentLevelName).ComparisonIndex = 0;
  (this->PersistentLevelName).Number = 0;
  (this->ObservationPoint).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->RandomNumbersStream).InitialSeed = 0;
  (this->RandomNumbersStream).Seed = 0;
  FText::FText(&this->TimesUpMessage);
  *(undefined8 *)&this->OnTestPrepare = 0;
  *(undefined8 *)&(this->OnTestPrepare).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestPrepare).field_0x10 = 0;
  *(undefined8 *)&this->OnTestStart = 0;
  *(undefined8 *)&(this->OnTestStart).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestStart).field_0x10 = 0;
  *(undefined8 *)&this->OnTestFinished = 0;
  *(undefined8 *)&(this->OnTestFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestFinished).field_0x10 = 0;
  (this->AutoDestroyActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoDestroyActors).ArrayNum = 0;
  (this->AutoDestroyActors).ArrayMax = 0;
  (this->FailureMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailureMessage).Data.ArrayNum = 0;
  (this->FailureMessage).Data.ArrayMax = 0;
  (this->RerunCauses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RerunCauses).ArrayNum = 0;
  (this->RerunCauses).ArrayMax = 0;
  (this->CurrentRerunCause).ComparisonIndex = 0;
  (this->CurrentRerunCause).Number = 0;
  *(undefined8 *)&this->TestFinishedObserver = 0;
  *(undefined8 *)&(this->TestFinishedObserver).field_0x8 = 0;
  *(undefined4 *)&(this->TestFinishedObserver).field_0x10 = 0;
  (this->Steps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Steps).ArrayNum = 0;
  (this->Steps).ArrayMax = 0;
  (this->EnvSetup).Object = (FScopedTestEnvironment *)0x0;
  (this->EnvSetup).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// AFunctionalTest @ 148c7e5e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AFunctionalTest * __thiscall
AFunctionalTest::AFunctionalTest(AFunctionalTest *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  FName FVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UBillboardComponent *pUVar7;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AFunctionalTest__6B_;
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&this->TestLabel);
  this->bShouldDelayGarbageCollection = 1;
  this->Result = Invalid;
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  this->bIsEnabled = 1;
  this->bIsInSublevel = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->TestTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestTags).Data.ArrayNum = 0;
  (this->TestTags).Data.ArrayMax = 0;
  (this->SpriteComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->PreviousTestTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousTestTags).Data.ArrayNum = 0;
  (this->PreviousTestTags).Data.ArrayMax = 0;
  (this->PersistentLevelName).ComparisonIndex = 0;
  (this->PersistentLevelName).Number = 0;
  this->LogErrorHandling = ProjectDefault;
  this->LogWarningHandling = ProjectDefault;
  (this->ObservationPoint).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->RandomNumbersStream).InitialSeed = 0;
  (this->RandomNumbersStream).Seed = 0;
  this->PreparationTimeLimit = 15.0;
  this->TimeLimit = 60.0;
  FText::AsLocalizable_Advanced_LocText
            (&this->TimesUpMessage,L"FunctionalTest",L"DefaultTimesUpMessage",L"Time\'s Up.");
  bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
  this->TimesUpResult = Failed;
  *(undefined8 *)&this->OnTestPrepare = 0;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0xfb | 3;
  *(undefined8 *)&(this->OnTestPrepare).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestPrepare).field_0x10 = 0;
  *(undefined8 *)&this->OnTestStart = 0;
  *(undefined8 *)&(this->OnTestStart).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestStart).field_0x10 = 0;
  *(undefined8 *)&this->OnTestFinished = 0;
  *(undefined8 *)&(this->OnTestFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestFinished).field_0x10 = 0;
  (this->AutoDestroyActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoDestroyActors).ArrayNum = 0;
  (this->AutoDestroyActors).ArrayMax = 0;
  (this->FailureMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailureMessage).Data.ArrayNum = 0;
  (this->FailureMessage).Data.ArrayMax = 0;
  (this->RerunCauses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RerunCauses).ArrayNum = 0;
  (this->RerunCauses).ArrayMax = 0;
  (this->CurrentRerunCause).ComparisonIndex = 0;
  (this->CurrentRerunCause).Number = 0;
  *(undefined8 *)&this->TestFinishedObserver = 0;
  *(undefined8 *)&(this->TestFinishedObserver).field_0x8 = 0;
  *(undefined4 *)&(this->TestFinishedObserver).field_0x10 = 0;
  this->bIsRunning = false;
  (this->Steps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Steps).ArrayNum = 0;
  (this->Steps).ArrayMax = 0;
  this->TotalTime = 0.0;
  this->RunFrame = 0;
  this->RunTime = 0.0;
  this->StartFrame = 0;
  this->StartTime = 0.0;
  this->bIsReady = false;
  (this->EnvSetup).Object = (FScopedTestEnvironment *)0x0;
  (this->EnvSetup).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfe;
  pFVar5 = ::FName::FName(&local_res8,L"Sprite");
  FVar4 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UBillboardComponent_NoRegister();
  pUVar7 = (UBillboardComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar7 == (UBillboardComponent *)0x0)
     ) {
    (this->SpriteComponent).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UBillboardComponent *)0x0) {
      return this;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
    (this->SpriteComponent).field0_0x0.DebugPtr = pUVar7;
  }
  pbVar1 = (byte *)((longlong)&pUVar7->_padding_ + 1);
  *pbVar1 = *pbVar1 | 8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (this->SpriteComponent).field0_0x0.DebugPtr, pUVar7 != (UBillboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  this->_padding_ = (longlong)(this->SpriteComponent).field0_0x0;
  return this;
}

// ~AFunctionalTest @ 148c80900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::~AFunctionalTest(AFunctionalTest *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&___7AFunctionalTest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EnvSetup).SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>((FString *)(this->Steps).AllocatorInstance.Data,(this->Steps).ArrayNum)
  ;
  pFVar1 = (this->Steps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TestFinishedObserver);
  pvVar2 = *(void **)&(this->TestFinishedObserver).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TestFinishedObserver);
  pFVar1 = (this->RerunCauses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FailureMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoDestroyActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnTestFinished).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestFinished);
  pvVar2 = *(void **)&(this->OnTestStart).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestStart);
  pvVar2 = *(void **)&(this->OnTestPrepare).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestPrepare);
  pIVar3 = (this->TimesUpMessage).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar1 = (this->PreviousTestTags).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestTags).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Author).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestLabel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// AddError @ 148c83ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::AddError(AFunctionalTest *this,FString *param_1)

{
  LogStep(this,Error,param_1);
  return;
}

// AddInfo @ 148c84120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::AddInfo(AFunctionalTest *this,FString *param_1)

{
  LogStep(this,Log,param_1);
  return;
}

// AddRerun @ 148c84130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::AddRerun(AFunctionalTest *this,FName param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName local_res10 [3];
  
  pTVar2 = &this->RerunCauses;
  pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= local_res10) && (local_res10 < pFVar3 + (this->RerunCauses).ArrayMax)) {
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
  iVar6 = (this->RerunCauses).ArrayNum;
  piVar1 = &(this->RerunCauses).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RerunCauses).ArrayNum = iVar6 + 1;
  *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  return;
}

// AddWarning @ 148c84470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::AddWarning(AFunctionalTest *this,FString *param_1)

{
  LogStep(this,Warning,param_1);
  return;
}

// AssertEqual_Bool @ 148c850e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Bool
          (AFunctionalTest *this,bool param_1,bool param_2,FString *param_3,UObject *param_4)

{
  bool bVar1;
  FName local_48;
  FString local_40;
  FString local_30;
  
  if (param_1 == param_2) {
    ::FString::PrintfImpl(&local_30,L"Bool assertion passed (%s)");
    LogStep(this,Log,&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_4 != (UObject *)0x0) {
      local_48.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_48.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_48,&local_40);
    }
    ::FString::PrintfImpl
              (&local_30,L"Expected \'%s\' to be {%d}, but it was {%d} for context \'%s\'");
    LogStep(this,Error,&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertEqual_Box2D @ 148c85220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Box2D
          (AFunctionalTest *this,TBox2<double> *param_1,TBox2<double> *param_2,FString *param_3,
          float param_4,UObject *param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  FName local_res10;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar2 = (param_2->Min).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
  dVar3 = (double)param_4;
  if ((((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (dVar2 = (param_2->Min).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y,
       dVar3 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (dVar2 = (param_2->Max).field0_0x0._s_0.X - (param_1->Max).field0_0x0._s_0.X,
      dVar3 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar2 = (param_2->Max).field0_0x0._s_0.Y - (param_1->Max).field0_0x0._s_0.Y,
     dVar3 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    if (param_5 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_res10.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_res10,&local_68);
    }
    ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_78,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_88,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl
              (local_58,
               L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
              );
    LogStep(this,Error,local_58);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  else {
    ::FString::PrintfImpl(&local_68,L"Vector2D assertion passed (%s)");
    LogStep(this,Log,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  return bVar1;
}

// AssertEqual_Double @ 148c85570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Double
          (AFunctionalTest *this,double param_1,double param_2,FString *param_3,double param_4,
          UObject *param_5)

{
  bool bVar1;
  FString local_58;
  FString local_48 [4];
  
  if ((double)CONCAT44((uint)((ulonglong)(param_1 - param_2) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_1 - param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      param_4) {
    ::FString::PrintfImpl(local_48,L"Double assertion passed (%s)");
    LogStep(this,Log,local_48);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    bVar1 = param_5 != (UObject *)0x0;
    if (bVar1) {
      param_4 = *(double *)&param_5->field_0x18;
      ::FName::ToString((FName *)&param_4,&local_58);
    }
    ::FString::PrintfImpl
              (local_48,
               L"Expected \'%s\' to be {%lf}, but it was {%lf} within tolerance {%lf} for context \'%s\'"
              );
    LogStep(this,Error,local_48);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertEqual_Float @ 148c856f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Float
          (AFunctionalTest *this,float param_1,float param_2,FString *param_3,float param_4,
          UObject *param_5)

{
  bool bVar1;
  FName local_58;
  FString local_50;
  FString local_40 [3];
  
  if ((float)((uint)(param_1 - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_4) {
    ::FString::PrintfImpl(local_40,L"Float assertion passed (%s)");
    LogStep(this,Log,local_40);
    if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_5 != (UObject *)0x0) {
      local_58.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_58.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_58,&local_50);
    }
    ::FString::PrintfImpl
              (local_40,
               L"Expected \'%s\' to be {%f}, but it was {%f} within tolerance {%f} for context \'%s\'"
              );
    LogStep(this,Error,local_40);
    if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertEqual_Int @ 148c85870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Int
          (AFunctionalTest *this,int param_1,int param_2,FString *param_3,UObject *param_4)

{
  bool bVar1;
  FName local_48;
  FString local_40;
  FString local_30;
  
  if (param_1 == param_2) {
    ::FString::PrintfImpl(&local_30,L"Bool assertion passed (%s)");
    LogStep(this,Log,&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_4 != (UObject *)0x0) {
      local_48.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_48.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_48,&local_40);
    }
    ::FString::PrintfImpl
              (&local_30,L"Expected \'%s\' to be {%d}, but it was {%d} for context \'%s\'");
    LogStep(this,Error,&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertEqual_Matrix @ 148c859b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Matrix
          (AFunctionalTest *this,TMatrix<double> *param_1,TMatrix<double> *param_2,FString *param_3,
          float param_4,UObject *param_5)

{
  double (*padVar1) [4];
  longlong lVar2;
  double (*padVar3) [4];
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40 [2];
  
  lVar4 = 0;
  local_78 = (FName)((ulonglong)local_78 & 0xffffffff00000000);
  padVar1 = (double (*) [4])param_1;
  lVar2 = lVar4;
  lVar5 = lVar4;
  padVar3 = (double (*) [4])param_1;
  do {
    do {
      dVar6 = *(double *)((longlong)padVar1 + ((longlong)param_2 - (longlong)param_1)) -
              (*padVar1)[0];
      if ((double)param_4 <
          (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        if (param_5 != (UObject *)0x0) {
          local_78.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
          local_78.Number = *(uint *)&param_5->field_0x1c;
          ::FName::ToString(&local_78,&local_70);
        }
        UE::Math::TMatrix<double>::ToString(param_1,local_40);
        UE::Math::TMatrix<double>::ToString(param_2,&local_50);
        ::FString::PrintfImpl
                  (&local_60,
                   L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
                  );
        LogStep(this,Error,&local_60);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
        }
        if ((param_5 != (UObject *)0x0) &&
           (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        return false;
      }
      lVar2 = lVar2 + 1;
      padVar1 = (double (*) [4])(*padVar1 + 1);
    } while (lVar2 < 4);
    lVar5 = lVar5 + 1;
    padVar1 = padVar3 + 1;
    lVar2 = lVar4;
    padVar3 = padVar1;
  } while (lVar5 < 4);
  ::FString::PrintfImpl(&local_70,L"Matrix assertion passed (%s)");
  LogStep(this,Log,&local_70);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return true;
}

// AssertEqual_Name @ 148c85be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Name
          (AFunctionalTest *this,FName param_1,FName param_2,FString *param_3,UObject *param_4)

{
  FName local_res10;
  FName local_res18 [2];
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_78 = (FName)((ulonglong)local_78 & 0xffffffff00000000);
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_1 != param_2) {
    if (param_4 != (UObject *)0x0) {
      local_78.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_78.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_78,&local_70);
    }
    ::FName::ToString(&local_res10,&local_40);
    ::FName::ToString(local_res18,&local_50);
    ::FString::PrintfImpl
              (&local_60,L"Expected \'%s\' to be {%s}, but it was {%s} for context \'%s\'");
    LogStep(this,Error,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    return false;
  }
  ::FString::PrintfImpl(&local_60,L"FName assertion passed (%s)");
  LogStep(this,Log,&local_60);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return true;
}

// AssertEqual_Object @ 148c85d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Object
          (AFunctionalTest *this,UObject *param_1,UObject *param_2,FString *param_3,UObject *param_4
          )

{
  bool bVar1;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (param_1 == param_2) {
    ::FString::PrintfImpl(&local_38,L"Object assertion passed (%s)");
    LogStep(this,Log,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_4 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_res10.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_res10,&local_48);
    }
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res10,&local_58);
    }
    if (param_2 == (UObject *)0x0) {
      ::FString::FString(&local_68,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_res10.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_res10,&local_68);
    }
    ::FString::PrintfImpl
              (&local_38,L"Expected \'%s\' to be {%s}, but it was {%s} for context \'%s\'");
    LogStep(this,Error,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertEqual_Plane @ 148c85f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Plane
          (AFunctionalTest *this,TPlane<double> *param_1,TPlane<double> *param_2,FString *param_3,
          float param_4,UObject *param_5)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar3 = (double)param_2->_padding_ - (double)param_1->_padding_;
  dVar1 = (double)param_4;
  if ((((dVar1 <= (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
       || (dVar3 = (double)param_2->_padding_ - (double)param_1->_padding_,
          dVar1 <= (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
      || (dVar3 = (double)param_2->_padding_ - (double)param_1->_padding_,
         dVar1 <= (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
     || (dVar3 = param_2->W - param_1->W,
        dVar1 <= (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    if (param_5 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_res10.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_res10,&local_58);
    }
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl
              (local_48,
               L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
              );
    LogStep(this,Error,local_48);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    ::FString::PrintfImpl(&local_58,L"Plane assertion passed (%s)");
    LogStep(this,Log,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  return bVar2;
}

// AssertEqual_Quat @ 148c861d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Quat
          (AFunctionalTest *this,TQuat<double> *param_1,TQuat<double> *param_2,FString *param_3,
          float param_4,UObject *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_EAX;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FName local_res10;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [4];
  
  dVar7 = param_1->Z + param_2->Z;
  dVar8 = param_1->W + param_2->W;
  dVar13 = param_2->Z - param_1->Z;
  dVar14 = param_2->W - param_1->W;
  dVar5 = param_1->X + param_2->X;
  dVar6 = param_1->Y + param_2->Y;
  dVar15 = param_2->X - param_1->X;
  dVar16 = param_2->Y - param_1->Y;
  local_res10 = (FName)(double)param_4;
  lVar12 = -(ulonglong)
            ((double)local_res10 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar12;
  auVar1._0_8_ = -(ulonglong)
                  ((double)local_res10 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  iVar10 = movmskpd((int)this,auVar1);
  lVar12 = -(ulonglong)
            ((double)local_res10 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar12;
  auVar2._0_8_ = -(ulonglong)
                  ((double)local_res10 <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  uVar9 = movmskpd(in_EAX,auVar2);
  uVar11 = iVar10 << 2 | uVar9;
  if (uVar11 != 0) {
    lVar12 = -(ulonglong)
              ((double)local_res10 <
              (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar8,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar12;
    auVar3._0_8_ = -(ulonglong)
                    ((double)local_res10 <
                    (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    uVar11 = movmskpd(uVar11,auVar3);
    lVar12 = -(ulonglong)
              ((double)local_res10 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar6,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar12;
    auVar4._0_8_ = -(ulonglong)
                    ((double)local_res10 <
                    (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    iVar10 = movmskpd(uVar9,auVar4);
    if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
      if (param_5 != (UObject *)0x0) {
        local_res10.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
        local_res10.Number = *(uint *)&param_5->field_0x1c;
        ::FName::ToString(&local_res10,&local_78);
      }
      ::FString::PrintfImpl(&local_88,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
      ::FString::PrintfImpl(&local_98,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
      ::FString::PrintfImpl
                (local_68,
                 L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
                );
      LogStep(this,Error,local_68);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((param_5 != (UObject *)0x0) &&
         (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      return false;
    }
  }
  ::FString::PrintfImpl(local_68,L"Quat assertion passed (%s)");
  LogStep(this,Log,local_68);
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// AssertEqual_Rotator @ 148c86470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Rotator
          (AFunctionalTest *this,TRotator<double> *param_1,TRotator<double> *param_2,
          FString *param_3,float param_4,UObject *param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined4 in_EAX;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  FName local_res10;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [5];
  
  dVar32 = param_2->Pitch - param_1->Pitch;
  dVar34 = param_2->Yaw - param_1->Yaw;
  dVar2 = param_2->Roll - param_1->Roll;
  auVar18._8_4_ = SUB84(dVar34,0);
  auVar18._0_8_ = dVar32;
  auVar18._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar19 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  local_res10 = (FName)(double)param_4;
  auVar19 = roundpd(in_XMM1,auVar19,3);
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar26._0_8_ = auVar19._0_8_ * dVar7;
  dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar26._8_8_ = auVar19._8_8_ * dVar8;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar2;
  dVar32 = dVar32 - auVar26._0_8_;
  dVar34 = dVar34 - auVar26._8_8_;
  auVar19 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar19 = roundpd(auVar26,auVar19,3);
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar34,0);
  auVar21._0_8_ = dVar32;
  auVar21._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  dVar2 = dVar2 - auVar19._0_8_ * dVar5;
  dVar3 = 0.0 - auVar19._8_8_ * dVar6;
  uVar12 = -(ulonglong)(0.0 <= dVar32);
  uVar14 = -(ulonglong)(0.0 <= dVar34);
  auVar27._0_8_ = uVar12 & (ulonglong)dVar32;
  auVar27._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar34);
  auVar27._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar34) >> 0x20);
  dVar34 = auVar21._8_8_ + dVar8;
  uVar13 = -(ulonglong)(0.0 <= dVar2);
  uVar15 = -(ulonglong)(0.0 <= dVar3);
  auVar35._0_4_ = ~(uint)uVar12 & SUB84(dVar32 + dVar7,0);
  auVar35._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar7) >> 0x20);
  auVar35._8_4_ = ~(uint)uVar14 & SUB84(dVar34,0);
  auVar35._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
  auVar35 = auVar35 | auVar27;
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar34 = auVar22._8_8_ + dVar6;
  auVar33._0_4_ = ~(uint)uVar13 & SUB84(dVar2 + dVar5,0);
  auVar33._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar5) >> 0x20);
  auVar33._8_4_ = ~(uint)uVar15 & SUB84(dVar34,0);
  auVar33._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
  auVar19._8_4_ = (int)((ulonglong)dVar3 & uVar15);
  auVar19._0_8_ = (ulonglong)dVar2 & uVar13;
  auVar19._12_4_ = (int)(((ulonglong)dVar3 & uVar15) >> 0x20);
  auVar33 = auVar33 | auVar19;
  uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar33._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar33._8_8_);
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar35._0_8_);
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar35._8_8_);
  auVar28._0_8_ = uVar13 & (ulonglong)(auVar33._0_8_ - dVar5);
  uVar12 = uVar15 & (ulonglong)(auVar33._8_8_ - dVar6);
  auVar28._8_4_ = (undefined4)uVar12;
  auVar28._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar13 & auVar33._0_4_;
  auVar23._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar33._4_4_;
  auVar23._8_4_ = ~(uint)uVar15 & auVar33._8_4_;
  auVar23._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar33._12_4_;
  auVar28 = auVar28 | auVar23;
  auVar24._8_4_ = local_res10.ComparisonIndex.Value.Value;
  auVar24._0_4_ = local_res10.ComparisonIndex.Value;
  auVar24._4_4_ = local_res10.Number;
  auVar24._12_4_ = local_res10.Number;
  auVar29._0_8_ =
       (double)CONCAT44(auVar28._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar28._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar29._8_4_ = auVar28._8_4_ & _UNK_15061cc88;
  auVar29._12_4_ = auVar28._12_4_ & _UNK_15061cc8c;
  auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < auVar29._8_8_);
  auVar25._0_8_ = -(ulonglong)((double)local_res10 < auVar29._0_8_);
  uVar11 = movmskpd((int)this,auVar25);
  auVar30._0_8_ = uVar14 & (ulonglong)(auVar35._0_8_ - dVar7);
  uVar12 = uVar16 & (ulonglong)(auVar35._8_8_ - dVar8);
  auVar30._8_4_ = (undefined4)uVar12;
  auVar30._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar4._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar35._4_4_;
  auVar4._0_4_ = ~(uint)uVar14 & auVar35._0_4_;
  auVar4._8_4_ = ~(uint)uVar16 & auVar35._8_4_;
  auVar4._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar35._12_4_;
  auVar30 = auVar30 | auVar4;
  auVar31._0_8_ =
       (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
  auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
  lVar17 = -(ulonglong)((double)local_res10 < auVar31._8_8_);
  auVar1._8_4_ = (int)lVar17;
  auVar1._0_8_ = -(ulonglong)((double)local_res10 < auVar31._0_8_);
  auVar1._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  iVar10 = movmskpd(in_EAX,auVar1);
  if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
    ::FString::PrintfImpl(local_78,L"Rotator assertion passed (%s)");
    LogStep(this,Log,local_78);
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    bVar9 = true;
  }
  else {
    if (param_5 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_res10.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_res10,&local_88);
    }
    ::FString::PrintfImpl(&local_98,L"P=%f Y=%f R=%f");
    ::FString::PrintfImpl(&local_a8,L"P=%f Y=%f R=%f");
    ::FString::PrintfImpl
              (local_78,
               L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
              );
    LogStep(this,Error,local_78);
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    bVar9 = false;
  }
  return bVar9;
}

// AssertEqual_RotatorOrientation @ 148c86790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_RotatorOrientation
          (AFunctionalTest *this,TRotator<double> *param_1,TRotator<double> *param_2,
          FString *param_3,float param_4,UObject *param_5)

{
  bool bVar1;
  TQuat<double> *pTVar2;
  TQuat<double> *pTVar3;
  double dVar4;
  double dVar5;
  FName local_98;
  FString local_90;
  FString local_80;
  TQuat<double> local_68;
  TQuat<double> local_48;
  
  local_98 = (FName)((ulonglong)local_98 & 0xffffffff00000000);
  pTVar2 = UE::Math::TRotator<double>::Quaternion(param_2,&local_48);
  pTVar3 = UE::Math::TRotator<double>::Quaternion(param_1,&local_68);
  dVar5 = pTVar3->W * pTVar2->W + pTVar3->Z * pTVar2->Z +
          pTVar3->Y * pTVar2->Y + pTVar2->X * pTVar3->X;
  dVar4 = (dVar5 + dVar5) * dVar5 - __real_3ff0000000000000;
  dVar5 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar4) && (dVar5 = dVar4, __real_3ff0000000000000 <= dVar4)) {
    dVar5 = __real_3ff0000000000000;
  }
  dVar5 = acos(dVar5);
  if (dVar5 <= (double)param_4) {
    ::FString::PrintfImpl((FString *)&local_48,L"Rotator assertion passed (%s)");
    LogStep(this,Log,(FString *)&local_48);
    if ((void *)local_48.X != (void *)0x0) {
      FMemory::Free((void *)local_48.X);
    }
    bVar1 = true;
  }
  else {
    if (param_5 != (UObject *)0x0) {
      local_98.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_98.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_98,(FString *)&local_68);
    }
    ::FString::PrintfImpl(&local_80,L"P=%f Y=%f R=%f");
    ::FString::PrintfImpl(&local_90,L"P=%f Y=%f R=%f");
    ::FString::PrintfImpl
              ((FString *)&local_48,
               L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
              );
    LogStep(this,Error,(FString *)&local_48);
    if ((void *)local_48.X != (void *)0x0) {
      FMemory::Free((void *)local_48.X);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) && ((void *)local_68.X != (void *)0x0)) {
      FMemory::Free((void *)local_68.X);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertEqual_String @ 148c86a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_String
          (AFunctionalTest *this,FString *param_1,FString *param_2,FString *param_3,UObject *param_4
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  iVar3 = (param_2->Data).ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_148c86b7d;
    iVar3 = wcscmp((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                   (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar1 + iVar3 == 1;
  }
  if (!bVar4) {
    if (param_4 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_res10.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_res10,&local_38);
    }
    ::FString::PrintfImpl
              (&local_28,L"Expected \'%s\' to be {%s} but it was {%s} for context \'%s\'");
    LogStep(this,Error,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return false;
  }
LAB_148c86b7d:
  ::FString::PrintfImpl(&local_28,L"String assertion passed (%s)");
  LogStep(this,Log,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return true;
}

// AssertEqual_TraceQueryResults @ 148c86c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_TraceQueryResults
          (AFunctionalTest *this,UTraceQueryTestResults *param_1,UTraceQueryTestResults *param_2,
          FString *param_3,UObject *param_4)

{
  bool bVar1;
  
  bVar1 = UTraceQueryTestResults::AssertEqual(param_1,param_2,param_3,param_4,this);
  return bVar1;
}

// AssertEqual_Transform @ 148c86c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Transform
          (AFunctionalTest *this,TTransform<double> *param_1,TTransform<double> *param_2,
          FString *param_3,float param_4,UObject *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  dVar14 = (param_2->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar16 = (param_2->Translation).ZW.m128d_f64[1] - (param_1->Translation).ZW.m128d_f64[1];
  dVar18 = (param_2->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar20 = (param_2->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  local_res10 = (FName)(double)param_4;
  lVar13 = -(ulonglong)
            ((double)local_res10 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  ((double)local_res10 <
                  (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar10 = movmskpd((int)this,auVar1);
  lVar13 = -(ulonglong)
            ((double)local_res10 <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar20,0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar13;
  auVar6._0_8_ = -(ulonglong)
                  ((double)local_res10 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd((int)&stack0x00000000,auVar6);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar14 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar16 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar18 = (param_2->Rotation).XY.m128d_f64[0];
    dVar20 = (param_2->Rotation).XY.m128d_f64[1];
    dVar15 = dVar14 - (param_1->Rotation).ZW.m128d_f64[0];
    dVar17 = dVar16 - (param_1->Rotation).ZW.m128d_f64[1];
    dVar14 = dVar14 + (param_1->Rotation).ZW.m128d_f64[0];
    dVar16 = dVar16 + (param_1->Rotation).ZW.m128d_f64[1];
    dVar19 = dVar18 - (param_1->Rotation).XY.m128d_f64[0];
    dVar21 = dVar20 - (param_1->Rotation).XY.m128d_f64[1];
    dVar18 = dVar18 + (param_1->Rotation).XY.m128d_f64[0];
    dVar20 = dVar20 + (param_1->Rotation).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              ((double)local_res10 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    ((double)local_res10 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd(0,auVar2);
    lVar13 = -(ulonglong)
              ((double)local_res10 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    ((double)local_res10 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar10 = movmskpd(iVar9,auVar3);
    uVar12 = iVar11 << 2 | uVar10;
    if (uVar12 != 0) {
      lVar13 = -(ulonglong)
                ((double)local_res10 <
                (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar16,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar13;
      auVar4._0_8_ = -(ulonglong)
                      ((double)local_res10 <
                      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar14,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      lVar13 = -(ulonglong)
                ((double)local_res10 <
                (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar20,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar13;
      auVar7._0_8_ = -(ulonglong)
                      ((double)local_res10 <
                      (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar18,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar7);
      if ((uVar12 & 0x3fffffff) != 0 || uVar10 != 0) goto LAB_148c86dcf;
    }
    dVar14 = (param_2->Scale3D).ZW.m128d_f64[0] - (param_1->Scale3D).ZW.m128d_f64[0];
    dVar16 = (param_2->Scale3D).ZW.m128d_f64[1] - (param_1->Scale3D).ZW.m128d_f64[1];
    dVar18 = (param_2->Scale3D).XY.m128d_f64[0] - (param_1->Scale3D).XY.m128d_f64[0];
    dVar20 = (param_2->Scale3D).XY.m128d_f64[1] - (param_1->Scale3D).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              ((double)local_res10 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar16,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar13;
    auVar5._0_8_ = -(ulonglong)
                    ((double)local_res10 <
                    (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar12 = movmskpd(0,auVar5);
    lVar13 = -(ulonglong)
              ((double)local_res10 <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar13;
    auVar8._0_8_ = -(ulonglong)
                    ((double)local_res10 <
                    (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar9 = movmskpd(uVar10,auVar8);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      ::FString::PrintfImpl(&local_88,L"Transform assertion passed (%s)");
      LogStep(this,Log,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
LAB_148c86dcf:
  if (param_5 != (UObject *)0x0) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
    local_res10.Number = *(uint *)&param_5->field_0x1c;
    ::FName::ToString(&local_res10,&local_88);
  }
  ::`anonymous_namespace'::TransformToString(local_58,param_1);
  ::`anonymous_namespace'::TransformToString(&local_68,param_2);
  ::FString::PrintfImpl
            (&local_78,
             L"Expected \'%s\' to be {%s}, but it was {%s} within tolerance {%f} for context \'%s\'"
            );
  LogStep(this,Error,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if ((param_5 != (UObject *)0x0) &&
     (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return false;
}

// AssertEqual_Vector2D @ 148c86f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Vector2D
          (AFunctionalTest *this,TVector2<double> *param_1,TVector2<double> *param_2,
          FString *param_3,float param_4,UObject *param_5)

{
  bool bVar1;
  double dVar2;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  if (((double)param_4 <
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
     (dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
     (double)param_4 <
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    if (param_5 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_res10.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_res10,&local_58);
    }
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl
              (local_48,
               L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
              );
    LogStep(this,Error,local_48);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  else {
    ::FString::PrintfImpl(&local_58,L"Vector2D assertion passed (%s)");
    LogStep(this,Log,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  return bVar1;
}

// AssertEqual_Vector4 @ 148c87160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Vector4
          (AFunctionalTest *this,TVector4<double> *param_1,TVector4<double> *param_2,
          FString *param_3,float param_4,UObject *param_5)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar1 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar2 = (double)param_4;
  uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((dVar2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != dVar2) ||
       (dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
       uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != dVar2)) ||
      (dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z,
      uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      dVar2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != dVar2)) ||
     (dVar1 = (param_2->field0_0x0)._s_0.W - (param_1->field0_0x0)._s_0.W,
     uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     dVar2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != dVar2)) {
    if (param_5 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_res10.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_res10,&local_58);
    }
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::PrintfImpl
              (local_48,
               L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
              );
    LogStep(this,Error,local_48);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    ::FString::PrintfImpl(&local_58,L"Vector4 assertion passed (%s)");
    LogStep(this,Log,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  return bVar3;
}

// AssertEqual_Vector @ 148c873d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertEqual_Vector
          (AFunctionalTest *this,TVector<double> *param_1,TVector<double> *param_2,FString *param_3,
          float param_4,UObject *param_5)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar1 = (double)param_4;
  if (((dVar1 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
      dVar1 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar3 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z,
     dVar1 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    if (param_5 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_res10.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_res10,&local_58);
    }
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl
              (local_48,
               L"Expected \'%s\' to be {%s} but it was {%s} within tolerance {%f} for context \'%s\'"
              );
    LogStep(this,Error,local_48);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    ::FString::PrintfImpl(&local_58,L"Vector assertion passed (%s)");
    LogStep(this,Log,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  return bVar2;
}

// AssertFalse @ 148c87630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertFalse(AFunctionalTest *this,bool param_1,FString *param_2,UObject *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148c87636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x760))(this,!param_1);
  return (bool)uVar1;
}

// AssertIsValid @ 148c87650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertIsValid
          (AFunctionalTest *this,UObject *param_1,FString *param_2,UObject *param_3)

{
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if ((param_1 != (UObject *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
    ::FString::PrintfImpl(&local_28,L"Valid object: (%s)");
    LogStep(this,Log,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return true;
  }
  if (param_3 != (UObject *)0x0) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
    local_res10.Number = *(uint *)&param_3->field_0x1c;
    ::FName::ToString(&local_res10,&local_28);
  }
  ::FString::PrintfImpl(&local_18,L"Invalid object: \'%s\' for context \'%s\'");
  LogStep(this,Error,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((param_3 != (UObject *)0x0) &&
     (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// AssertNotEqual_Box2D @ 148c87780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Box2D
          (AFunctionalTest *this,TBox2<double> *param_1,TBox2<double> *param_2,FString *param_3,
          UObject *param_4)

{
  bool bVar1;
  double dVar2;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar2 = (param_2->Min).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (dVar2 = (param_2->Min).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (dVar2 = (param_2->Max).field0_0x0._s_0.X - (param_1->Max).field0_0x0._s_0.X,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar2 = (param_2->Max).field0_0x0._s_0.Y - (param_1->Max).field0_0x0._s_0.Y,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    ::FString::PrintfImpl(&local_38,L"Vector2D assertion passed (%s)");
    LogStep(this,Log,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_4 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_res10.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_res10,&local_48);
    }
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_58,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_38,L"Expected \'%s\' not to be {%s} for context \'%s\'");
    LogStep(this,Error,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertNotEqual_Matrix @ 148c879f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Matrix
          (AFunctionalTest *this,TMatrix<double> *param_1,TMatrix<double> *param_2,FString *param_3,
          UObject *param_4)

{
  longlong lVar1;
  double (*padVar2) [4];
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  FName local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  lVar3 = 0;
  local_58 = (FName)((ulonglong)local_58 & 0xffffffff00000000);
  lVar4 = (longlong)param_2 - (longlong)param_1;
  lVar1 = lVar3;
  lVar5 = lVar3;
  padVar2 = (double (*) [4])param_1;
  do {
    do {
      dVar6 = *(double *)((longlong)param_1 + lVar4) - (*(double (*) [4])param_1)[0];
      if (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        ::FString::PrintfImpl(&local_40,L"Matrix assertion passed (%s)");
        LogStep(this,Log,&local_40);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        return true;
      }
      lVar1 = lVar1 + 1;
      param_1 = (TMatrix<double> *)(*(double (*) [4])param_1 + 1);
    } while (lVar1 < 4);
    lVar5 = lVar5 + 1;
    param_1 = (TMatrix<double> *)(padVar2 + 1);
    lVar1 = lVar3;
    padVar2 = (double (*) [4])param_1;
  } while (lVar5 < 4);
  if (param_4 != (UObject *)0x0) {
    local_58.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
    local_58.Number = *(uint *)&param_4->field_0x1c;
    ::FName::ToString(&local_58,&local_50);
  }
  UE::Math::TMatrix<double>::ToString(param_2,&local_30);
  ::FString::PrintfImpl(&local_40,L"Expected \'%s\' not to be {%s} for context \'%s\'");
  LogStep(this,Error,&local_40);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if ((param_4 != (UObject *)0x0) &&
     (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return false;
}

// AssertNotEqual_Plane @ 148c87bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Plane
          (AFunctionalTest *this,TPlane<double> *param_1,TPlane<double> *param_2,FString *param_3,
          UObject *param_4)

{
  bool bVar1;
  double dVar2;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58 [4];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar2 = (double)param_2->_padding_ - (double)param_1->_padding_;
  if ((((__real_3f1a36e2e0000000 <=
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (dVar2 = (double)param_2->_padding_ - (double)param_1->_padding_,
       __real_3f1a36e2e0000000 <=
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (dVar2 = (double)param_2->_padding_ - (double)param_1->_padding_,
      __real_3f1a36e2e0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar2 = param_2->W - param_1->W,
     __real_3f1a36e2e0000000 <=
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    ::FString::PrintfImpl(local_58,L"Plane assertion passed (%s)");
    LogStep(this,Log,local_58);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_4 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_res10.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_res10,&local_68);
    }
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(local_58,L"Expected \'%s\' not to be {%s} for context \'%s\'");
    LogStep(this,Error,local_58);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertNotEqual_Quat @ 148c87dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Quat
          (AFunctionalTest *this,TQuat<double> *param_1,TQuat<double> *param_2,FString *param_3,
          UObject *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48 [3];
  
  dVar7 = param_1->Z + param_2->Z;
  dVar8 = param_1->W + param_2->W;
  dVar13 = param_2->Z - param_1->Z;
  dVar14 = param_2->W - param_1->W;
  dVar5 = param_1->X + param_2->X;
  dVar6 = param_1->Y + param_2->Y;
  dVar15 = param_2->X - param_1->X;
  dVar16 = param_2->Y - param_1->Y;
  local_res10 = __real_3f1a36e2e0000000;
  lVar12 = -(ulonglong)
            ((double)__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar12;
  auVar1._0_8_ = -(ulonglong)
                  ((double)__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  iVar10 = movmskpd((int)this,auVar1);
  lVar12 = -(ulonglong)
            ((double)__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar12;
  auVar2._0_8_ = -(ulonglong)
                  ((double)__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  uVar9 = movmskpd((int)&stack0x00000000,auVar2);
  uVar11 = iVar10 << 2 | uVar9;
  if (uVar11 != 0) {
    lVar12 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar8,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar12;
    auVar3._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    uVar11 = movmskpd(uVar11,auVar3);
    lVar12 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar6,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar12;
    auVar4._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    iVar10 = movmskpd(uVar9,auVar4);
    if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
      ::FString::PrintfImpl(&local_58,L"Quat assertion passed (%s)");
      LogStep(this,Log,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  if (param_4 != (UObject *)0x0) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
    local_res10.Number = *(uint *)&param_4->field_0x1c;
    ::FName::ToString(&local_res10,&local_58);
  }
  ::FString::PrintfImpl(&local_68,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  ::FString::PrintfImpl(local_48,L"Expected \'%s\' not to be {%s} for context \'%s\'");
  LogStep(this,Error,local_48);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((param_4 != (UObject *)0x0) &&
     (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return false;
}

// AssertNotEqual_Rotator @ 148c88000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Rotator
          (AFunctionalTest *this,TRotator<double> *param_1,TRotator<double> *param_2,
          FString *param_3,UObject *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  undefined4 in_EAX;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58 [4];
  
  dVar32 = param_2->Pitch - param_1->Pitch;
  dVar34 = param_2->Yaw - param_1->Yaw;
  dVar2 = param_2->Roll - param_1->Roll;
  auVar18._8_4_ = SUB84(dVar34,0);
  auVar18._0_8_ = dVar32;
  auVar18._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar19 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar19 = roundpd(in_XMM1,auVar19,3);
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar26._0_8_ = auVar19._0_8_ * dVar6;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar26._8_8_ = auVar19._8_8_ * dVar7;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar2;
  local_res10 = __real_3f1a36e2e0000000;
  dVar32 = dVar32 - auVar26._0_8_;
  dVar34 = dVar34 - auVar26._8_8_;
  auVar19 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar19 = roundpd(auVar26,auVar19,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar34,0);
  auVar21._0_8_ = dVar32;
  auVar21._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  dVar2 = dVar2 - auVar19._0_8_ * dVar4;
  dVar3 = 0.0 - auVar19._8_8_ * dVar5;
  uVar12 = -(ulonglong)(0.0 <= dVar32);
  uVar14 = -(ulonglong)(0.0 <= dVar34);
  auVar27._0_8_ = uVar12 & (ulonglong)dVar32;
  auVar27._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar34);
  auVar27._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar34) >> 0x20);
  dVar34 = auVar21._8_8_ + dVar7;
  uVar13 = -(ulonglong)(0.0 <= dVar2);
  uVar15 = -(ulonglong)(0.0 <= dVar3);
  auVar35._0_4_ = ~(uint)uVar12 & SUB84(dVar32 + dVar6,0);
  auVar35._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar6) >> 0x20);
  auVar35._8_4_ = ~(uint)uVar14 & SUB84(dVar34,0);
  auVar35._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
  auVar35 = auVar35 | auVar27;
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar34 = auVar22._8_8_ + dVar5;
  auVar33._0_4_ = ~(uint)uVar13 & SUB84(dVar2 + dVar4,0);
  auVar33._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
  auVar33._8_4_ = ~(uint)uVar15 & SUB84(dVar34,0);
  auVar33._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
  auVar19._8_4_ = (int)((ulonglong)dVar3 & uVar15);
  auVar19._0_8_ = (ulonglong)dVar2 & uVar13;
  auVar19._12_4_ = (int)(((ulonglong)dVar3 & uVar15) >> 0x20);
  auVar33 = auVar33 | auVar19;
  uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar33._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar33._8_8_);
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar35._0_8_);
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar35._8_8_);
  auVar28._0_8_ = uVar13 & (ulonglong)(auVar33._0_8_ - dVar4);
  uVar12 = uVar15 & (ulonglong)(auVar33._8_8_ - dVar5);
  auVar28._8_4_ = (undefined4)uVar12;
  auVar28._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar13 & auVar33._0_4_;
  auVar23._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar33._4_4_;
  auVar23._8_4_ = ~(uint)uVar15 & auVar33._8_4_;
  auVar23._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar33._12_4_;
  auVar28 = auVar28 | auVar23;
  auVar24._8_4_ = __real_3f1a36e2e0000000.ComparisonIndex.Value.Value;
  auVar24._0_8_ = __real_3f1a36e2e0000000;
  auVar24._12_4_ = __real_3f1a36e2e0000000.Number;
  auVar29._0_8_ =
       (double)CONCAT44(auVar28._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar28._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar29._8_4_ = auVar28._8_4_ & _UNK_15061cc88;
  auVar29._12_4_ = auVar28._12_4_ & _UNK_15061cc8c;
  auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < auVar29._8_8_);
  auVar25._0_8_ = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar29._0_8_);
  uVar11 = movmskpd((int)this,auVar25);
  auVar30._0_8_ = uVar14 & (ulonglong)(auVar35._0_8_ - dVar6);
  uVar12 = uVar16 & (ulonglong)(auVar35._8_8_ - dVar7);
  auVar30._8_4_ = (undefined4)uVar12;
  auVar30._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar1._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar35._4_4_;
  auVar1._0_4_ = ~(uint)uVar14 & auVar35._0_4_;
  auVar1._8_4_ = ~(uint)uVar16 & auVar35._8_4_;
  auVar1._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar35._12_4_;
  auVar30 = auVar30 | auVar1;
  auVar31._0_8_ =
       (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
  auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
  lVar17 = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar31._8_8_);
  auVar8._8_4_ = (int)lVar17;
  auVar8._0_8_ = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar31._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  iVar10 = movmskpd(in_EAX,auVar8);
  if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
    if (param_4 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_res10.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_res10,&local_68);
    }
    ::FString::PrintfImpl(&local_78,L"P=%f Y=%f R=%f");
    ::FString::PrintfImpl(local_58,L"Expected \'%s\' not to be {%s} for context \'%s\'");
    LogStep(this,Error,local_58);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar9 = false;
  }
  else {
    ::FString::PrintfImpl(local_58,L"Rotator assertion passed (%s)");
    LogStep(this,Log,local_58);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    bVar9 = true;
  }
  return bVar9;
}

// AssertNotEqual_String @ 148c882b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_String
          (AFunctionalTest *this,FString *param_1,FString *param_2,FString *param_3,UObject *param_4
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  iVar3 = (param_2->Data).ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_148c88360;
    iVar3 = wcscmp((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                   (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    ::FString::PrintfImpl(&local_38,L"String assertion passed (%s)");
    LogStep(this,Log,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return true;
  }
LAB_148c88360:
  if (param_4 != (UObject *)0x0) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
    local_res10.Number = *(uint *)&param_4->field_0x1c;
    ::FName::ToString(&local_res10,&local_38);
  }
  ::FString::PrintfImpl(&local_28,L"Expected \'%s\' not to be {%s} for context \'%s\'");
  LogStep(this,Error,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((param_4 != (UObject *)0x0) &&
     (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// AssertNotEqual_Transform @ 148c88450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Transform
          (AFunctionalTest *this,TTransform<double> *param_1,TTransform<double> *param_2,
          FString *param_3,UObject *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48 [3];
  
  dVar14 = (param_2->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar16 = (param_2->Translation).ZW.m128d_f64[1] - (param_1->Translation).ZW.m128d_f64[1];
  dVar18 = (param_2->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar20 = (param_2->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  lVar13 = -(ulonglong)
            ((double)__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  ((double)__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar10 = movmskpd((int)this,auVar1);
  lVar13 = -(ulonglong)
            ((double)__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar20,0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar13;
  auVar6._0_8_ = -(ulonglong)
                  ((double)__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd((int)&stack0x00000000,auVar6);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar18 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar20 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar14 = (param_2->Rotation).XY.m128d_f64[0];
    dVar16 = (param_2->Rotation).XY.m128d_f64[1];
    dVar15 = dVar18 - (param_1->Rotation).ZW.m128d_f64[0];
    dVar17 = dVar20 - (param_1->Rotation).ZW.m128d_f64[1];
    dVar18 = dVar18 + (param_1->Rotation).ZW.m128d_f64[0];
    dVar20 = dVar20 + (param_1->Rotation).ZW.m128d_f64[1];
    dVar19 = dVar14 - (param_1->Rotation).XY.m128d_f64[0];
    dVar21 = dVar16 - (param_1->Rotation).XY.m128d_f64[1];
    dVar14 = dVar14 + (param_1->Rotation).XY.m128d_f64[0];
    dVar16 = dVar16 + (param_1->Rotation).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd(0,auVar2);
    lVar13 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar10 = movmskpd(iVar9,auVar3);
    uVar12 = iVar11 << 2 | uVar10;
    if (uVar12 != 0) {
      lVar13 = -(ulonglong)
                ((double)__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar20,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar13;
      auVar4._0_8_ = -(ulonglong)
                      ((double)__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar18,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      lVar13 = -(ulonglong)
                ((double)__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar16,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar13;
      auVar7._0_8_ = -(ulonglong)
                      ((double)__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar14,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar7);
      if ((uVar12 & 0x3fffffff) != 0 || uVar10 != 0) goto LAB_148c88684;
    }
    dVar14 = (param_2->Scale3D).ZW.m128d_f64[0] - (param_1->Scale3D).ZW.m128d_f64[0];
    dVar16 = (param_2->Scale3D).ZW.m128d_f64[1] - (param_1->Scale3D).ZW.m128d_f64[1];
    dVar18 = (param_2->Scale3D).XY.m128d_f64[0] - (param_1->Scale3D).XY.m128d_f64[0];
    dVar20 = (param_2->Scale3D).XY.m128d_f64[1] - (param_1->Scale3D).XY.m128d_f64[1];
    local_res10 = __real_3f1a36e2e0000000;
    lVar13 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar16,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar13;
    auVar5._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar12 = movmskpd(0,auVar5);
    lVar13 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar13;
    auVar8._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar9 = movmskpd(uVar10,auVar8);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      if (param_4 != (UObject *)0x0) {
        local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
        local_res10.Number = *(uint *)&param_4->field_0x1c;
        ::FName::ToString(&local_res10,&local_68);
      }
      ::`anonymous_namespace'::TransformToString(local_48,param_2);
      ::FString::PrintfImpl(&local_58,L"Expected \'%s\' not to be {%s} for context \'%s\'");
      LogStep(this,Error,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      if ((param_4 != (UObject *)0x0) &&
         (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      return false;
    }
  }
LAB_148c88684:
  local_res10 = __real_3f1a36e2e0000000;
  ::FString::PrintfImpl(&local_58,L"Transform assertion passed (%s)");
  LogStep(this,Log,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return true;
}

// AssertNotEqual_Vector2D @ 148c88700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Vector2D
          (AFunctionalTest *this,TVector2<double> *param_1,TVector2<double> *param_2,
          FString *param_3,UObject *param_4)

{
  bool bVar1;
  double dVar2;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48 [3];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
     (dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    ::FString::PrintfImpl(local_48,L"Vector2D assertion passed (%s)");
    LogStep(this,Log,local_48);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_4 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_res10.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_res10,&local_58);
    }
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(local_48,L"Expected \'%s\' not to be {%s} for context \'%s\'");
    LogStep(this,Error,local_48);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertNotEqual_Vector4 @ 148c888d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Vector4
          (AFunctionalTest *this,TVector4<double> *param_1,TVector4<double> *param_2,
          FString *param_3,UObject *param_4)

{
  bool bVar1;
  double dVar2;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68 [5];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar2 = (param_2->field0_0x0)._s_0.W - (param_1->field0_0x0)._s_0.W,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    ::FString::PrintfImpl(local_68,L"Vector4 assertion passed (%s)");
    LogStep(this,Log,local_68);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_4 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_res10.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_res10,&local_78);
    }
    ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::PrintfImpl(local_68,L"Expected \'%s\' not to be {%s} for context \'%s\'");
    LogStep(this,Error,local_68);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertNotEqual_Vector @ 148c88af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertNotEqual_Vector
          (AFunctionalTest *this,TVector<double> *param_1,TVector<double> *param_2,FString *param_3,
          UObject *param_4)

{
  bool bVar1;
  double dVar2;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58 [4];
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    ::FString::PrintfImpl(local_58,L"Vector assertion passed (%s)");
    LogStep(this,Log,local_58);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    if (param_4 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_4->field_0x18;
      local_res10.Number = *(uint *)&param_4->field_0x1c;
      ::FName::ToString(&local_res10,&local_68);
    }
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(local_58,L"Expected \'%s\' not to be {%s} for context \'%s\'");
    LogStep(this,Error,local_58);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((param_4 != (UObject *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// AssertTrue @ 148c88ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertTrue(AFunctionalTest *this,bool param_1,FString *param_2,UObject *param_3)

{
  FName local_38;
  FString local_30;
  FString local_20;
  
  if (!param_1) {
    if (param_3 != (UObject *)0x0) {
      local_38.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
      local_38.Number = *(uint *)&param_3->field_0x1c;
      ::FName::ToString(&local_38,&local_30);
    }
    ::FString::PrintfImpl(&local_20,L"Assertion in Blueprint failed: \'%s\' for context \'%s\'");
    LogStep(this,Error,&local_20);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    if ((param_3 != (UObject *)0x0) &&
       (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    return false;
  }
  ::FString::PrintfImpl(&local_20,L"Assertion passed (%s)");
  LogStep(this,Log,&local_20);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return true;
}

// AssertValue_DateTime @ 148c88e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertValue_DateTime
          (AFunctionalTest *this,FDateTime param_1,EComparisonMethod param_2,FDateTime param_3,
          FString *param_4,UObject *param_5)

{
  bool bVar1;
  FDateTime local_res10;
  undefined4 local_res18;
  FDateTime local_res20;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res18 = 0;
  local_res10.Ticks = param_1.Ticks;
  local_res20.Ticks = param_3.Ticks;
  switch(param_2) {
  case Equal_To:
    bVar1 = param_1.Ticks == param_3.Ticks;
    break;
  case Not_Equal_To:
    bVar1 = param_1.Ticks != param_3.Ticks;
    break;
  case Greater_Than_Or_Equal_To:
    bVar1 = param_3.Ticks <= param_1.Ticks;
    break;
  case Less_Than_Or_Equal_To:
    bVar1 = param_1.Ticks <= param_3.Ticks;
    break;
  case Greater_Than:
    bVar1 = param_3.Ticks < param_1.Ticks;
    break;
  case Less_Than:
    bVar1 = param_1.Ticks < param_3.Ticks;
    break;
  default:
    if (1 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_compari_151cb41c8,
                 (FLogCategoryBase *)&LogFunctionalTest);
    }
    goto LAB_148c88ef0;
  }
  if (bVar1) {
    ::FString::PrintfImpl(&local_80,L"DateTime assertion passed (%s)");
    LogStep(this,Log,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    return true;
  }
LAB_148c88ef0:
  if (param_5 != (UObject *)0x0) {
    local_88.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
    local_88.Number = *(uint *)&param_5->field_0x1c;
    ::FName::ToString(&local_88,&local_80);
  }
  FDateTime::ToString(&local_res20,&local_40);
  ::`anonymous_namespace'::GetComparisonAsString(&local_50,param_2);
  FDateTime::ToString(&local_res10,&local_60);
  ::FString::PrintfImpl(&local_70,L"%s: expected {%s} to be %s {%s} for context \'%s\'");
  LogStep(this,Error,&local_70);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if ((param_5 != (UObject *)0x0) &&
     (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return false;
}

// AssertValue_Double @ 148c89090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertValue_Double
          (AFunctionalTest *this,double param_1,EComparisonMethod param_2,double param_3,
          FString *param_4,UObject *param_5)

{
  bool bVar1;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50 [3];
  
  switch(param_2) {
  case Equal_To:
    if (param_1 != param_3) goto LAB_148c89222;
    goto LAB_148c8911a;
  case Not_Equal_To:
    bVar1 = param_1 == param_3;
    goto LAB_148c89114;
  case Greater_Than_Or_Equal_To:
    bVar1 = param_3 <= param_1;
    break;
  case Less_Than_Or_Equal_To:
    bVar1 = param_1 <= param_3;
    break;
  case Greater_Than:
    bVar1 = param_1 < param_3;
    goto LAB_148c8910f;
  case Less_Than:
    bVar1 = param_3 < param_1;
LAB_148c8910f:
    bVar1 = !bVar1 && param_3 != param_1;
    break;
  default:
    if (1 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_compari_151cb41a8,
                 (FLogCategoryBase *)&LogFunctionalTest);
    }
    goto LAB_148c89222;
  }
  bVar1 = !bVar1;
LAB_148c89114:
  if (bVar1) {
LAB_148c89222:
    if (param_5 != (UObject *)0x0) {
      local_78.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_78.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_78,&local_70);
    }
    ::`anonymous_namespace'::GetComparisonAsString(local_50,param_2);
    ::FString::PrintfImpl(&local_60,L"%s: expected {%lf} to be %s {%lf} for context \'%s\'");
    LogStep(this,Error,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  else {
LAB_148c8911a:
    if (param_5 != (UObject *)0x0) {
      local_78.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_78.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_78,&local_70);
    }
    ::`anonymous_namespace'::GetComparisonAsString(local_50,param_2);
    ::FString::PrintfImpl(&local_60,L"%s: expected {%lf} to be %s {%lf} for context \'%s\'");
    LogStep(this,Log,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  return bVar1;
}

// AssertValue_Float @ 148c89350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertValue_Float
          (AFunctionalTest *this,float param_1,EComparisonMethod param_2,float param_3,
          FString *param_4,UObject *param_5)

{
  bool bVar1;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50 [3];
  
  switch(param_2) {
  case Equal_To:
    if (param_1 != param_3) goto LAB_148c894e7;
    goto LAB_148c893d4;
  case Not_Equal_To:
    bVar1 = param_1 == param_3;
    goto LAB_148c893ce;
  case Greater_Than_Or_Equal_To:
    bVar1 = param_3 <= param_1;
    break;
  case Less_Than_Or_Equal_To:
    bVar1 = param_1 <= param_3;
    break;
  case Greater_Than:
    bVar1 = param_1 < param_3;
    goto LAB_148c893c9;
  case Less_Than:
    bVar1 = param_3 < param_1;
LAB_148c893c9:
    bVar1 = !bVar1 && param_3 != param_1;
    break;
  default:
    if (1 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_compari_151cb4188,
                 (FLogCategoryBase *)&LogFunctionalTest);
    }
    goto LAB_148c894e7;
  }
  bVar1 = !bVar1;
LAB_148c893ce:
  if (bVar1) {
LAB_148c894e7:
    if (param_5 != (UObject *)0x0) {
      local_78.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_78.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_78,&local_70);
    }
    ::`anonymous_namespace'::GetComparisonAsString(local_50,param_2);
    ::FString::PrintfImpl(&local_60,L"%s: expected {%f} to be %s {%f} for context \'%s\'");
    LogStep(this,Error,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  else {
LAB_148c893d4:
    if (param_5 != (UObject *)0x0) {
      local_78.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_78.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_78,&local_70);
    }
    ::`anonymous_namespace'::GetComparisonAsString(local_50,param_2);
    ::FString::PrintfImpl(&local_60,L"%s: expected {%f} to be %s {%f} for context \'%s\'");
    LogStep(this,Log,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  return bVar1;
}

// AssertValue_Int @ 148c89620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::AssertValue_Int
          (AFunctionalTest *this,int param_1,EComparisonMethod param_2,int param_3,FString *param_4,
          UObject *param_5)

{
  bool bVar1;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  switch(param_2) {
  case Equal_To:
    bVar1 = param_1 == param_3;
    break;
  case Not_Equal_To:
    bVar1 = param_1 != param_3;
    break;
  case Greater_Than_Or_Equal_To:
    bVar1 = param_3 <= param_1;
    break;
  case Less_Than_Or_Equal_To:
    bVar1 = param_1 <= param_3;
    break;
  case Greater_Than:
    bVar1 = param_3 < param_1;
    break;
  case Less_Than:
    bVar1 = param_1 < param_3;
    break;
  default:
    if (1 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_compari_151cb4130,
                 (FLogCategoryBase *)&LogFunctionalTest);
    }
    goto LAB_148c8979d;
  }
  if (bVar1) {
    if (param_5 != (UObject *)0x0) {
      local_68.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_68.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_68,&local_60);
    }
    ::`anonymous_namespace'::GetComparisonAsString(&local_40,param_2);
    ::FString::PrintfImpl(&local_50,L"%s: expected {%d} to be %s {%d} for context \'%s\'");
    LogStep(this,Log,&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
LAB_148c8979d:
    if (param_5 != (UObject *)0x0) {
      local_68.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_68.Number = *(uint *)&param_5->field_0x1c;
      ::FName::ToString(&local_68,&local_60);
    }
    ::`anonymous_namespace'::GetComparisonAsString(&local_40,param_2);
    ::FString::PrintfImpl(&local_50,L"%s: expected {%d} to be %s {%d} for context \'%s\'");
    LogStep(this,Error,&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((param_5 != (UObject *)0x0) &&
       (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// CleanUp @ 148c8ab50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::CleanUp(AFunctionalTest *this)

{
  ::FString::operator=(&this->FailureMessage,L"");
  return;
}

// DebugGatherRelevantActors @ 148c8cdf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
AFunctionalTest::DebugGatherRelevantActors
          (AFunctionalTest *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  void *_Src;
  UFunction *pUVar1;
  longlong lVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AFunctionalTest_DebugGatherRelevantActors);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  _Src = local_18;
  lVar2 = (longlong)(int)local_10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_10,0,&__return_storage_ptr__->AllocatorInstance,(int)local_10,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,lVar2 << 3);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// EndPlay @ 148c8d5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::EndPlay(AFunctionalTest *this,Type param_1)

{
  code *pcVar1;
  FString local_18;
  
  if (this->bIsRunning != false) {
    pcVar1 = *(code **)(this->_padding_ + 0x880);
    ::FString::FString(&local_18,L"Test was aborted");
    (*pcVar1)(this,1,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TestFinishedObserver);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// FinishStep @ 148c8e9d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::FinishStep(AFunctionalTest *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FString local_18;
  
  if ((this->Steps).ArrayNum < 1) {
    ::FString::FString(&local_18,L"FinishStep was called when no steps were currently in progress.")
    ;
    LogStep(this,Warning,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    pTVar5 = &this->Steps;
    lVar4 = (longlong)(this->Steps).ArrayNum;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    pvVar2 = *(void **)(pFVar6 + lVar4 * 0x10 + -0x10);
    *(undefined8 *)(pFVar6 + lVar4 * 0x10 + -0x10) = 0;
    *(undefined8 *)(pFVar6 + lVar4 * 0x10 + -8) = 0;
    iVar3 = (this->Steps).ArrayNum;
    pFVar6 = (pTVar5->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    if (*(void **)(pFVar6 + -0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar6 + -0x10));
    }
    iVar3 = (this->Steps).ArrayNum - iVar3;
    if (iVar3 != 0) {
      memmove(pFVar6 + -0x10,pFVar6,(longlong)iVar3 << 4);
    }
    piVar1 = &(this->Steps).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar5->AllocatorInstance,(this->Steps).ArrayNum,&(this->Steps).ArrayMax);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  return;
}

// FinishTest @ 148c8eae0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalTest::FinishTest(AFunctionalTest *this,EFunctionalTestResult param_1,FString *param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_FunctionalTest_FinishTest> FVar10;
  FAutomationTestFramework *pFVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res20;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  FString local_78;
  FReadAccessScope local_68 [2];
  
  if (this->bIsRunning == false) {
    return;
  }
  iVar15 = 0;
  FVar10 = StatPtr_STAT_FunctionalTest_FinishTest;
  if (StatPtr_STAT_FunctionalTest_FinishTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_FinishTest>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_FunctionalTest_FinishTest");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_FinishTest>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_FinishTest,*pFVar9
                        ,L"FunctionalTest - FinishTest","STATGROUP_FunctionalTest",
                        "STATCAT_Advanced",L"FunctionalTest",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits == 0) && (uVar12 == 0)) {
LAB_148c8ec31:
    bVar5 = false;
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                   ,0x1cb);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c8ec31;
    local_res8.Bits = FVar13.Bits;
    uStackX_c = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
  }
  this->Result = param_1;
  if ((param_1 == Invalid) || (param_1 == Error)) {
LAB_148c8ece0:
    pcVar2 = *(code **)(this->_padding_ + 0x868);
    ::LexToString((FString *)local_68,param_1);
    ::FString::PrintfImpl(&local_78,L"FinishTest TestResult=%s. %s");
    (*pcVar2)(this,&local_78);
LAB_148c8ed38:
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
LAB_148c8ed4a:
    if ((FScriptContainerElement *)local_68[0].DestructionSentinel._0_8_ !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68[0].DestructionSentinel._0_8_);
    }
  }
  else {
    if (param_1 == Running) {
      ::LexToString((FString *)local_68,Running);
      ::FString::PrintfImpl(&local_78,L"FinishTest TestResult=%s. %s");
      LogStep(this,Warning,&local_78);
      goto LAB_148c8ed38;
    }
    if (param_1 == Failed) goto LAB_148c8ece0;
    if (1 < (param_2->Data).ArrayNum) {
      ::FString::FString(&local_78,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
      LogStep(this,Log,&local_78);
      local_68[0].DestructionSentinel._0_8_ = local_78.Data.AllocatorInstance.Data;
      goto LAB_148c8ed4a;
    }
  }
  pFVar11 = FAutomationTestFramework::Get();
  if (pFVar11->CurrentTest == (FAutomationTestBase *)0x0) goto LAB_148c8ee2b;
  if ((FFunctionalTestBase::bIsFunctionalTestRunning == false) &&
     (1 < (byte)LogFunctionalTest._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  iVar8 = (this->TestLabel).Data.ArrayNum;
  if (iVar8 == FFunctionalTestBase::ActiveTestName.Data.ArrayNum) {
    if (1 < iVar8) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->TestLabel).Data.AllocatorInstance.Data,
                         (wchar_t *)FFunctionalTestBase::ActiveTestName.Data.AllocatorInstance.Data)
      ;
      bVar17 = iVar8 == 0;
      goto LAB_148c8edc4;
    }
  }
  else {
    bVar17 = iVar8 + FFunctionalTestBase::ActiveTestName.Data.ArrayNum == 1;
LAB_148c8edc4:
    if ((!bVar17) && (1 < (byte)LogFunctionalTest._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
  }
  FFunctionalTestBase::bIsFunctionalTestRunning = false;
  ::FString::operator=(&FFunctionalTestBase::ActiveTestName,L"");
LAB_148c8ee2b:
  this->bIsRunning = false;
  (**(code **)(this->_padding_ + 0x4a8))(this,0);
  UObject::FindFunctionChecked((UObject *)this,NAME_AFunctionalTest_ReceiveTestFinished);
  (**(code **)(this->_padding_ + 0x260))(this);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTestFinished,
             (void *)0x0);
  uVar7 = __real_3c23d70a;
  pFVar16 = (this->AutoDestroyActors).AllocatorInstance.Data;
  if (0 < (this->AutoDestroyActors).ArrayNum) {
    do {
      plVar3 = *(longlong **)pFVar16;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x400))(plVar3,uVar7);
      }
      iVar15 = iVar15 + 1;
      pFVar16 = pFVar16 + 8;
    } while (iVar15 < (this->AutoDestroyActors).ArrayNum);
  }
  piVar1 = &(this->AutoDestroyActors).ArrayMax;
  (this->AutoDestroyActors).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AutoDestroyActors).AllocatorInstance,0,piVar1);
  }
  UEngine::ForceGarbageCollection(GEngine,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TestFinishedObserver,
             local_68);
  if ((*(int *)&(this->TestFinishedObserver).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->TestFinishedObserver).field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_68);
  local_88 = 0;
  FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->EnvSetup != (TSharedPtr<FScopedTestEnvironment,1> *)&local_88) {
    (this->EnvSetup).Object = (FScopedTestEnvironment *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EnvSetup).SharedReferenceCount,&FStack_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_80.ReferenceController);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// GatherRelevantActors @ 148c8f470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalTest::GatherRelevantActors
          (AFunctionalTest *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TObjectPtr<AActor>_u_0 TVar2;
  AActor *pAVar3;
  code *pcVar4;
  void *_Src;
  bool bVar5;
  int iVar6;
  UFunction *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  TObjectPtr<AActor>_u_0 local_res10;
  AActor *local_res18 [2];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_58;
  void *local_48;
  undefined8 local_40;
  
  TVar2 = (TObjectPtr<AActor>_u_0)(this->ObservationPoint).field0_0x0.DebugPtr;
  if (TVar2.DebugPtr != (AActor *)0x0) {
    local_res10 = TVar2;
    TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>
              (param_1,&local_res10.DebugPtr);
  }
  pFVar8 = (this->AutoDestroyActors).AllocatorInstance.Data;
  iVar6 = (this->AutoDestroyActors).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar6 * 8;
  do {
    if ((this->AutoDestroyActors).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      local_48 = (void *)0x0;
      local_40 = 0;
      pUVar7 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_AFunctionalTest_DebugGatherRelevantActors);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar7,&local_48);
      _Src = local_48;
      lVar9 = (longlong)(int)local_40;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = (int)local_40;
      if ((int)local_40 == 0) {
        local_58.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(int)local_40,0,&local_58.AllocatorInstance,(int)local_40,&local_58.ArrayMax)
        ;
        memcpy(local_58.AllocatorInstance.Data,_Src,lVar9 << 3);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      if (param_1 == &local_58) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar9 = (longlong)local_58.ArrayNum;
      if (local_58.ArrayNum != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_58.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        memmove((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8,
                local_58.AllocatorInstance.Data,lVar9 << 3);
        local_58.ArrayNum = 0;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    pAVar3 = *(AActor **)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pAVar3 != (AActor *)0x0) goto LAB_148c8f4f1;
    }
    else if (pAVar3 != (AActor *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
LAB_148c8f4f1:
      local_res18[0] = pAVar3;
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>(param_1,local_res18);
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetAdditionalTestFinishedMessage @ 148c8fe40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
AFunctionalTest::GetAdditionalTestFinishedMessage
          (AFunctionalTest *this,FString *__return_storage_ptr__,EFunctionalTestResult param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurrentRerunReason @ 148c90610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall AFunctionalTest::GetCurrentRerunReason(AFunctionalTest *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->CurrentRerunCause;
  return in_RDX;
}

// GetCurrentStepName @ 148c90630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
AFunctionalTest::GetCurrentStepName(AFunctionalTest *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FString local_28;
  FString local_18;
  
  iVar1 = (this->Steps).ArrayNum;
  if (iVar1 < 1) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::FString(__return_storage_ptr__,&local_18);
    FVar8.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
    }
    lVar7 = (longlong)(this->Steps).ArrayNum;
    pFVar2 = (this->Steps).AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = *(int *)(pFVar2 + lVar7 * 0x10 + -8);
    lVar9 = (longlong)local_28.Data.ArrayNum;
    _Src = *(void **)(pFVar2 + lVar7 * 0x10 + -0x10);
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    FVar8.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148c91200

UClass * __cdecl AFunctionalTest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTest",
               &Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton,
               StaticRegisterNativesAFunctionalTest,0x438,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AFunctionalTest>,
               InternalVTableHelperCtorCaller<AFunctionalTest>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton;
}

// GetReproString @ 148c92460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
AFunctionalTest::GetReproString(AFunctionalTest *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSpriteComponent @ 148c926b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBillboardComponent * __thiscall AFunctionalTest::GetSpriteComponent(AFunctionalTest *this)

{
  return (this->SpriteComponent).field0_0x0.DebugPtr;
}

// GoToObservationPoint @ 148c92c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::GoToObservationPoint(AFunctionalTest *this)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  UWorld *this_00;
  UObject *pUVar8;
  UClass *pUVar9;
  TRotator<double> *pTVar10;
  undefined4 uStack_84;
  uint uStack_7c;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  TRotator<double> local_40;
  TRotator<double> local_28;
  
  if ((((this->ObservationPoint).field0_0x0.DebugPtr == (AActor *)0x0) ||
      (this_00 = AActor::GetWorld((AActor *)this), this_00 == (UWorld *)0x0)) ||
     ((this_00->OwningGameInstance).field0_0x0.DebugPtr == (UGameInstance *)0x0)) {
    return;
  }
  UWorld::GetPlayerControllerIterator(this_00,&local_78);
  do {
    iVar1 = local_78.Index;
    pTVar5 = local_78.Container;
    if (local_78.Index < 0) {
      return;
    }
    if ((local_78.Container)->ArrayNum <= local_78.Index) {
      return;
    }
    uVar7 = 0;
    if (local_78.Index < (local_78.Container)->ArrayNum) {
      uVar7 = (uint)~local_78.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar5->AllocatorInstance).Data + (longlong)iVar1 * 8));
    if (pUVar8 != (UObject *)0x0) {
      pUVar9 = Z_Construct_UClass_ADebugCameraController_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        pUVar2 = *(UObject **)&pUVar8[0x13].field_0x18;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar2 == (UObject *)0x0) goto LAB_148c92e2f;
          UE::GC::MarkAsReachable(pUVar2);
        }
        if (pUVar2 != (UObject *)0x0) {
          pUVar2 = *(UObject **)&pUVar8[0x13].field_0x18;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          pcVar4 = *(code **)(*(longlong *)pUVar2 + 0x5f8);
          pTVar10 = AActor::GetActorRotation((this->ObservationPoint).field0_0x0.DebugPtr,&local_40)
          ;
          lVar3 = *(longlong *)((longlong)(this->ObservationPoint).field0_0x0 + 0x1b8);
          local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uStack_54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uStack_4c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (lVar3 != 0) {
            local_58 = *(undefined4 *)(lVar3 + 0x210);
            uStack_54 = *(undefined4 *)(lVar3 + 0x214);
            uStack_50 = *(undefined4 *)(lVar3 + 0x218);
            uStack_4c = *(undefined4 *)(lVar3 + 0x21c);
            local_48 = *(double *)(lVar3 + 0x220);
          }
          (*pcVar4)(pUVar2,&local_58,pTVar10,0,1);
          pcVar4 = *(code **)(*(longlong *)pUVar8 + 0x7b0);
          pTVar10 = AActor::GetActorRotation((this->ObservationPoint).field0_0x0.DebugPtr,&local_28)
          ;
          (*pcVar4)(pUVar8,pTVar10);
          return;
        }
LAB_148c92e2f:
        uStack_5c = uStack_7c & 0xfffffffe;
        uStack_84 = CONCAT31(uStack_84._1_3_,1);
        local_68 = 0;
        uStack_64 = uStack_84;
        uStack_60 = 0x40000000;
        (**(code **)(*(longlong *)pUVar8 + 0xef8))
                  (pUVar8,(this->ObservationPoint).field0_0x0.DebugPtr,&local_68);
        return;
      }
    }
    local_78.Index = local_78.Index + 1;
  } while( true );
}

// IsEnabled @ 148c93d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalTest::IsEnabled(AFunctionalTest *this)

{
  return this->bIsEnabled;
}

// IsEnabledInWorld @ 148c93d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalTest::IsEnabledInWorld(AFunctionalTest *this,UWorld *param_1)

{
  undefined1 *puVar1;
  
  if (this->bIsInSublevel == 0) {
    return this->bIsEnabled;
  }
  if ((param_1 != (UWorld *)0x0) && ((FName)param_1->_padding_ == this->PersistentLevelName)) {
    return this->bIsEnabled;
  }
  return false;
}

// IsInStep @ 148c93d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalTest::IsInStep(AFunctionalTest *this)

{
  return 0 < (this->Steps).ArrayNum;
}

// IsReady @ 148c93e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalTest::IsReady(AFunctionalTest *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AFunctionalTest_IsReady);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000148c93ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x8d8))(this);
  return (bool)uVar1;
}

// IsReady_Implementation @ 148c93f40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalTest::IsReady_Implementation(AFunctionalTest *this)

{
  return true;
}

// IsRunning @ 148c940b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalTest::IsRunning(AFunctionalTest *this)

{
  return this->bIsRunning;
}

// LogMessage @ 148c94610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::LogMessage(AFunctionalTest *this,FString *param_1)

{
  if (4 < (byte)LogFunctionalTest._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogFunctionalTest.field_0x4,Log,L"%s> %s");
  }
  return;
}

// LogStep @ 148c946d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::LogStep(AFunctionalTest *this,Type param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  void *pvVar8;
  FAutomationTestFramework *pFVar9;
  longlong lVar10;
  ulong64 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStackY_328 [32];
  FString local_2e8;
  ForAnyElementType local_2d8;
  int local_2d0;
  int local_2cc [3];
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  void *local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2cc[1] = 0;
  local_268.Base = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  pFVar2 = (this->TestLabel).Data.AllocatorInstance.Data;
  iVar1 = (this->TestLabel).Data.ArrayNum;
  iVar12 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar12 = 0;
  }
  uVar11 = (ulong64)iVar12;
  if (local_48 < local_248 + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar11);
  }
  if (iVar12 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,pFVar2,uVar11 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
  }
  if (local_268.End < local_268.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,2);
  }
  pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,&u___,4);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  local_268.CurPos = (wchar_t *)((longlong)pvVar8 + 4);
  iVar1 = (param_2->Data).ArrayNum;
  uVar13 = 0;
  uVar14 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar14 = uVar13;
  }
  uVar11 = (ulong64)(int)uVar14;
  if (local_268.End < local_268.CurPos + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar11);
  }
  if (uVar14 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,pFVar2,uVar11 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
  }
  if ((this->Steps).ArrayNum < 1) goto LAB_148c94a1b;
  if (local_268.End < local_268.CurPos + 10) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,10);
  }
  pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,L" in step: ",0x14);
  iVar1 = (this->Steps).ArrayNum;
  local_268.CurPos = (wchar_t *)((longlong)pvVar8 + 0x14);
  if (iVar1 < 1) {
    bVar5 = false;
    bVar7 = true;
    local_2e8.Data.ArrayNum = 0;
    local_280 = (void *)0x0;
LAB_148c9497d:
    local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.Data.ArrayMax = 0;
    if ((bVar7) && (local_280 != (void *)0x0)) {
      FMemory::Free(local_280);
    }
    if (bVar5) goto LAB_148c9499b;
  }
  else {
    uVar14 = uVar13;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar14 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Steps).AllocatorInstance.Data;
    lVar10 = (longlong)(this->Steps).ArrayNum;
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = *(int *)(pFVar2 + lVar10 * 0x10 + -8);
    lVar15 = (longlong)local_2d0;
    pvVar8 = *(void **)(pFVar2 + lVar10 * 0x10 + -0x10);
    if (local_2d0 == 0) {
      local_2cc[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2d0,0,&local_2d8,local_2d0,local_2cc);
      memcpy(local_2d8.Data,pvVar8,lVar15 * 2);
    }
    iVar1 = local_2d0;
    FVar6.Data = local_2d8.Data;
    bVar5 = true;
    bVar7 = false;
    local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.Data.ArrayNum = local_2d0;
    if (local_2d0 == 0) goto LAB_148c9497d;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d0,0,(ForAnyElementType *)&local_2e8,local_2d0,&local_2e8.Data.ArrayMax);
    memcpy(local_2e8.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar1 * 2);
LAB_148c9499b:
    if (local_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
  }
  if (local_2e8.Data.ArrayNum < 2) {
    ::FString::operator=(&local_2e8,L"<UN-NAMED STEP>");
  }
  FVar6.Data = local_2e8.Data.AllocatorInstance.Data;
  uVar14 = local_2e8.Data.ArrayNum - 1;
  if (local_2e8.Data.ArrayNum == 0) {
    uVar14 = uVar13;
  }
  uVar11 = (ulong64)(int)uVar14;
  if (local_268.End < local_268.CurPos + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar11);
  }
  if (uVar14 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar6.Data,uVar11 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
LAB_148c94a1b:
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  if ((pFVar3 == (FAutomationTestBase *)0x0) && (2 < (byte)LogFunctionalTest._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  if (param_1 == Error) {
    if (pFVar3 == (FAutomationTestBase *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogFunctionalTest.field_0x4,Error,L"%s");
      }
      if (1 < (byte)LogFunctionalTest._0_1_) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
      }
    }
    else {
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L'\0';
      ::FString::FString(&local_290,local_268.Base);
      (*pcVar4)(pFVar3,&local_290,2);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_1 == Warning) {
    if (pFVar3 == (FAutomationTestBase *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogFunctionalTest.field_0x4,Warning,L"%s");
      }
      if (2 < (byte)LogFunctionalTest._0_1_) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
      }
    }
    else {
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x48);
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L'\0';
      ::FString::FString(&local_2a0,local_268.Base);
      (*pcVar4)(pFVar3,&local_2a0,2);
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_1 == Display) {
    if (pFVar3 == (FAutomationTestBase *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogFunctionalTest.field_0x4,Display,L"%s");
      }
      if (3 < (byte)LogFunctionalTest._0_1_) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
      }
    }
    else {
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L'\0';
      ::FString::FString(&local_2b0,local_268.Base);
      (*pcVar4)(pFVar3,&local_2b0,2,0);
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_1 == Log) {
    if (pFVar3 == (FAutomationTestBase *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogFunctionalTest.field_0x4,Log,L"%s");
      }
      if (4 < (byte)LogFunctionalTest._0_1_) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
      }
    }
    else {
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L'\0';
      ::FString::FString(&local_2c0,local_268.Base);
      (*pcVar4)(pFVar3,&local_2c0,2,0);
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return;
}

// OnAdditionalTestFinishedMessageRequest @ 148c95350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
AFunctionalTest::OnAdditionalTestFinishedMessageRequest
          (AFunctionalTest *this,FString *__return_storage_ptr__,EFunctionalTestResult param_1)

{
  int *piVar1;
  void *_Src;
  UFunction *pUVar2;
  longlong lVar3;
  EFunctionalTestResult local_28 [8];
  void *local_20;
  undefined8 local_18;
  
  local_20 = (void *)0x0;
  local_18 = 0;
  local_28[0] = param_1;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AFunctionalTest_OnAdditionalTestFinishedMessageRequest);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_28);
  _Src = local_20;
  lVar3 = (longlong)(int)local_18;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (int)local_18;
  if ((int)local_18 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_18,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_18,piVar1)
    ;
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return __return_storage_ptr__;
}

// OnConstruction @ 148c95750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::OnConstruction(AFunctionalTest *this,TTransform<double> *param_1)

{
  return;
}

// OnTimeout @ 148c967a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall AFunctionalTest::OnTimeout(AFunctionalTest *this)

{
  code *pcVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  FSharedReferencer<1> FVar6;
  undefined1 local_res8 [8];
  FText local_78;
  TSharedPtr<FCulture,1> local_68;
  TSharedPtr<FCulture,1> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_78);
  if (this->bIsReady == false) {
    local_68.Object = (FCulture *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar2 = FText::AsNumber(&local_18,this->TotalTime,(FNumberFormattingOptions *)0x0,&local_68);
    local_58.Object = (FCulture *)(this->TimesUpMessage).TextData.Reference;
    if (local_58.Object != (FCulture *)0x0) {
      (*(code *)((((local_58.Object)->Implementation).Ptr)->ICULocale)._padding_)
                (local_58.Object,local_res8);
    }
    local_58.SharedReferenceCount.ReferenceController._0_4_ = (this->TimesUpMessage).Flags;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"FunctionalTest",L"TimeOutInTestPrep",
                        L"{0}. Test preparation timed out in {1} seconds");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar3,Default);
    pFVar2 = FText::Format<FText,FText>(&local_38,pFVar4,(FText *)&local_58,pFVar2);
    FText::operator=(&local_78,pFVar2);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    FVar6.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      FVar6.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    local_58.Object = (FCulture *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar2 = FText::AsNumber(&local_28,this->TotalTime,(FNumberFormattingOptions *)0x0,&local_58);
    local_68.Object = (FCulture *)(this->TimesUpMessage).TextData.Reference;
    if (local_68.Object != (FCulture *)0x0) {
      (*(code *)((((local_68.Object)->Implementation).Ptr)->ICULocale)._padding_)
                (local_68.Object,local_res8);
    }
    local_68.SharedReferenceCount.ReferenceController._0_4_ = (this->TimesUpMessage).Flags;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FunctionalTest",L"TimeOutInTest",
                        L"{0}. Test timed out in {1} seconds");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar3,Default);
    pFVar2 = FText::Format<FText,FText>(&local_48,pFVar4,(FText *)&local_68,pFVar2);
    FText::operator=(&local_78,pFVar2);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FVar6.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      FVar6.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  pcVar1 = *(code **)(this->_padding_ + 0x880);
  pFVar5 = FText::ToString(&local_78);
  (*pcVar1)(this,this->TimesUpResult,pFVar5);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return;
}

// OnWantsReRunCheck @ 148c969b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalTest::OnWantsReRunCheck(AFunctionalTest *this)

{
  UFunction *pUVar1;
  char local_res8 [32];
  
  local_res8[0] = '\0';
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AFunctionalTest_OnWantsReRunCheck);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0] != '\0';
}

// PrepareTest @ 148c96f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::PrepareTest(AFunctionalTest *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_FunctionalTest_PrepareTest> FVar6;
  UFunction *pUVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_FunctionalTest_PrepareTest;
  if (StatPtr_STAT_FunctionalTest_PrepareTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_PrepareTest>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_FunctionalTest_PrepareTest");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_PrepareTest>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_PrepareTest,*pFVar5
                       ,L"FunctionalTest - PrepareTest","STATGROUP_FunctionalTest",
                       "STATCAT_Advanced",L"FunctionalTest",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                   ,0x170);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_148c9708e;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_148c9708e:
  pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_AFunctionalTest_ReceivePrepareTest);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar7);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ReceivePrepareTest @ 148c97bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::ReceivePrepareTest(AFunctionalTest *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AFunctionalTest_ReceivePrepareTest);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000148c97c1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReceiveStartTest @ 148c97c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::ReceiveStartTest(AFunctionalTest *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AFunctionalTest_ReceiveStartTest);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000148c97c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReceiveTestFinished @ 148c97c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::ReceiveTestFinished(AFunctionalTest *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AFunctionalTest_ReceiveTestFinished);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000148c97c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// RegisterAutoDestroyActor @ 148c97cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::RegisterAutoDestroyActor(AFunctionalTest *this,AActor *param_1)

{
  TObjectPtr<AActor>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<AActor>_>
            (&this->AutoDestroyActors,(TObjectPtr<AActor> *)&local_res8[0].ObjectPtr);
  return;
}

// RunTest @ 148c9a7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalTest::RunTest(AFunctionalTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  double dVar2;
  EFunctionalTestLogHandling EVar3;
  EFunctionalTestLogHandling EVar4;
  int iVar5;
  FFunctionalTestBase *this_00;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FunctionalTest_RunTest> FVar14;
  FAutomationTestFramework *pFVar15;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  int iVar16;
  FName FVar17;
  undefined1 uVar18;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  FName local_res20;
  LARGE_INTEGER local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FVar14 = StatPtr_STAT_FunctionalTest_RunTest;
  if (StatPtr_STAT_FunctionalTest_RunTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_RunTest>)0x0) {
    pFVar13 = ::FName::FName(&local_90,"STAT_FunctionalTest_RunTest");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_RunTest>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_RunTest,*pFVar13,
                        L"FunctionalTest - RunTest","STATGROUP_FunctionalTest","STATCAT_Advanced",
                        L"FunctionalTest",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_res18.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                   ,0x124);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      goto LAB_148c9a91d;
    }
  }
  bVar9 = false;
  FVar17 = local_88;
LAB_148c9a91d:
  local_res20 = (FName)AActor::GetWorld((AActor *)this);
  bVar11 = UWorld::HasBegunPlay((UWorld *)local_res20);
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7584221661239443764>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                          ,0x134,"World->HasBegunPlay()"), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  pFVar15 = FAutomationTestFramework::Get();
  EVar3 = this->LogErrorHandling;
  this_00 = (FFunctionalTestBase *)pFVar15->CurrentTest;
  uVar12 = local_res8[0]._s_0.B;
  if (EVar3 != ProjectDefault) {
    uVar12 = EVar3 == OutputIgnored;
  }
  EVar4 = this->LogWarningHandling;
  bVar11 = EVar4 == ProjectDefault;
  uVar18 = local_res8[0]._s_0.B;
  uVar7 = local_res8[0]._s_0.B;
  if (!bVar11) {
    uVar18 = EVar4 == OutputIsError;
    uVar7 = EVar4 == OutputIgnored;
  }
  if (this_00 != (FFunctionalTestBase *)0x0) {
    if (bVar11) {
      uVar18 = local_res8[0]._s_0.B;
      uVar7 = local_res8[0]._s_0.B;
    }
    if (EVar3 == ProjectDefault) {
      FFunctionalTestBase::SetLogErrorAndWarningHandlingToDefault(this_00);
    }
    else {
      FFunctionalTestBase::SetLogErrorAndWarningHandlingToDefault(this_00);
      this_00->bSuppressLogErrors = (bool)uVar12;
    }
    if (!bVar11) {
      this_00->bSuppressLogWarnings = (bool)uVar7;
      this_00->bElevateLogWarningsToErrors = (bool)uVar18;
    }
    if ((FFunctionalTestBase::bIsFunctionalTestRunning != false) &&
       (1 < (byte)LogFunctionalTest._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
    iVar5 = (this->TestLabel).Data.ArrayNum;
    iVar16 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar16 = 0;
    }
    if ((iVar16 == 0) && (1 < (byte)LogFunctionalTest._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
    FFunctionalTestBase::bIsFunctionalTestRunning = true;
    ::FString::operator=(&FFunctionalTestBase::ActiveTestName,&this->TestLabel);
    bVar11 = FAutomationTestFramework::NeedLogBPTestMetadata();
    if ((bVar11) && (GIsAutomationTesting != false)) {
      pcVar6 = *(code **)(this->_padding_ + 0x870);
      ::FString::PrintfImpl(&local_68,L"[Owner] %s");
      (*pcVar6)(this,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pcVar6 = *(code **)(this->_padding_ + 0x870);
      ::FString::PrintfImpl(&local_58,L"[Description] %s");
      (*pcVar6)(this,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pcVar6 = *(code **)(this->_padding_ + 0x870);
      ::FString::PrintfImpl(&local_48,L"[TestTags] %s");
      (*pcVar6)(this,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  ::FString::operator=(&this->FailureMessage,L"");
  this->RunFrame = GFrameNumber;
  dVar2 = *(double *)((longlong)local_res20 + 0x8f8);
  this->TotalTime = 0.0;
  this->RunTime = (float)dVar2;
  if (0.0 < this->TimeLimit || this->TimeLimit == 0.0) {
    (**(code **)(this->_padding_ + 0x4a8))(this);
  }
  this->bIsReady = false;
  this->bIsRunning = true;
  GoToObservationPoint(this);
  (**(code **)(this->_padding_ + 0x8c8))(this);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTestPrepare,
             (void *)0x0);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_78.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_78);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return true;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return true;
}

// SetConsoleVariable @ 148c9b970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalTest::SetConsoleVariable(AFunctionalTest *this,FString *param_1,FString *param_2)

{
  TSharedPtr<FScopedTestEnvironment,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar4;
  TSharedPtr<FScopedTestEnvironment,1> local_18;
  
  pTVar1 = &this->EnvSetup;
  if (pTVar1->Object == (FScopedTestEnvironment *)0x0) {
    pTVar4 = FScopedTestEnvironment::Get(&local_18);
    if (pTVar1 != pTVar4) {
      pTVar1->Object = pTVar4->Object;
      pTVar4->Object = (FScopedTestEnvironment *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EnvSetup).SharedReferenceCount,&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pTVar1->Object == (FScopedTestEnvironment *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FScopedTestEnvironment::SetConsoleVariableValue(pTVar1->Object,param_1,param_2);
  return;
}

// SetConsoleVariableFromBoolean @ 148c9ba20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalTest::SetConsoleVariableFromBoolean(AFunctionalTest *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar3;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar4;
  FString local_28;
  TSharedPtr<FScopedTestEnvironment,1> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_28,(uint)param_2);
  pTVar4 = &this->EnvSetup;
  if (pTVar4->Object == (FScopedTestEnvironment *)0x0) {
    pTVar3 = FScopedTestEnvironment::Get(&local_18);
    if (pTVar4 != pTVar3) {
      pTVar4->Object = pTVar3->Object;
      pTVar3->Object = (FScopedTestEnvironment *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EnvSetup).SharedReferenceCount,&pTVar3->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pTVar4->Object == (FScopedTestEnvironment *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  FScopedTestEnvironment::SetConsoleVariableValue(pTVar4->Object,param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetConsoleVariableFromFloat @ 148c9baf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalTest::SetConsoleVariableFromFloat(AFunctionalTest *this,FString *param_1,float param_2)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::SanitizeFloat(&local_18,(double)param_2,1);
  SetConsoleVariable(this,param_1,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetConsoleVariableFromInteger @ 148c9bb50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalTest::SetConsoleVariableFromInteger(AFunctionalTest *this,FString *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar3;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar4;
  FString local_28;
  TSharedPtr<FScopedTestEnvironment,1> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_28,param_2);
  pTVar4 = &this->EnvSetup;
  if (pTVar4->Object == (FScopedTestEnvironment *)0x0) {
    pTVar3 = FScopedTestEnvironment::Get(&local_18);
    if (pTVar4 != pTVar3) {
      pTVar4->Object = pTVar3->Object;
      pTVar3->Object = (FScopedTestEnvironment *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EnvSetup).SharedReferenceCount,&pTVar3->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pTVar4->Object == (FScopedTestEnvironment *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  FScopedTestEnvironment::SetConsoleVariableValue(pTVar4->Object,param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTimeLimit @ 148c9c110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalTest::SetTimeLimit(AFunctionalTest *this,float param_1,EFunctionalTestResult param_2)

{
  if (param_1 < 0.0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogFunctionalTest.field_0x4,Warning,
                 L"%s> Trying to set TimeLimit to less than 0. Falling back to 0 (infinite).");
    }
    param_1 = 0.0;
  }
  this->TimeLimit = param_1;
  if (param_2 == Invalid) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogFunctionalTest.field_0x4,Warning,
                 L"%s> Trying to set test Result to \'Invalid\'. Falling back to \'Failed\'");
    }
    this->TimesUpResult = Failed;
  }
  else {
    this->TimesUpResult = param_2;
  }
  return;
}

// StartStep @ 148c9cf20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::StartStep(AFunctionalTest *this,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->Steps;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Steps).ArrayMax * 0x10)) {
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
  iVar6 = (this->Steps).ArrayNum;
  piVar1 = &(this->Steps).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Steps).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  return;
}

// StartTest @ 148c9d010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::StartTest(AFunctionalTest *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_FunctionalTest_StartTest> FVar6;
  UWorld *pUVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_FunctionalTest_StartTest;
  if (StatPtr_STAT_FunctionalTest_StartTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_StartTest>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_FunctionalTest_StartTest");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_StartTest>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_StartTest,*pFVar5,
                       L"FunctionalTest - StartTest","STATGROUP_FunctionalTest","STATCAT_Advanced",
                       L"FunctionalTest",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                   ,0x176);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_148c9d172;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_148c9d172:
  this->TotalTime = 0.0;
  this->StartFrame = GFrameNumber;
  pUVar7 = AActor::GetWorld((AActor *)this);
  this->StartTime = (float)pUVar7->TimeSeconds;
  UObject::FindFunctionChecked((UObject *)this,NAME_AFunctionalTest_ReceiveStartTest);
  (**(code **)(this->_padding_ + 0x260))(this);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTestStart,(void *)0x0)
  ;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// StaticRegisterNativesAFunctionalTest @ 148c9d370

void __cdecl AFunctionalTest::StaticRegisterNativesAFunctionalTest(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x34;
  local_18.DataPtr = Z_Construct_UClass_AFunctionalTest_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 148c9e3e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalTest::Tick(AFunctionalTest *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_FunctionalTest_TickTest> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  float fVar12;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38 [2];
  
  if (this->bIsRunning == false) {
    return;
  }
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_FunctionalTest_TickTest;
  if (StatPtr_STAT_FunctionalTest_TickTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_TickTest>)0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_FunctionalTest_TickTest");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_TickTest>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_TickTest,*pFVar6,
                       L"FunctionalTest - Tick","STATGROUP_FunctionalTest","STATCAT_Advanced",
                       L"FunctionalTest",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar8 == 0)) {
LAB_148c9e54f:
    bVar3 = false;
    FVar10.ComparisonIndex.Value = 0;
    FVar10.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                   ,0x198);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c9e54f;
    local_res8.s.LowPart = FVar9.Value;
    local_res8.s.HighPart = uVar8;
    FThreadStats::AddMessage(FVar10,CycleScopeStart);
    bVar3 = true;
    FVar11.Value = FVar9.Value;
  }
  if (this->bShouldDelayGarbageCollection != 0) {
    UEngine::DelayGarbageCollection(GEngine);
  }
  fVar12 = param_1 + this->TotalTime;
  this->TotalTime = fVar12;
  if (this->bIsReady == false) {
    bVar5 = IsReady(this);
    this->bIsReady = bVar5;
    if (bVar5) {
      (**(code **)(this->_padding_ + 0x8d0))(this);
      goto LAB_148c9e5e9;
    }
    if ((this->PreparationTimeLimit <= 0.0) || (this->TotalTime <= this->PreparationTimeLimit))
    goto LAB_148c9e5e9;
  }
  else if ((this->TimeLimit <= 0.0) || (fVar12 <= this->TimeLimit)) goto LAB_148c9e5e9;
  (**(code **)(this->_padding_ + 0x8e0))(this);
LAB_148c9e5e9:
  AActor::Tick((AActor *)this,param_1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38[0].NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38[0].NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38[0].StatData.Pad[4] = '\0';
      local_38[0].StatData.Pad[5] = '\0';
      local_38[0].StatData.Pad[6] = '\0';
      local_38[0].StatData.Pad[7] = '\0';
      local_38[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// WantsToRunAgain @ 148ca1300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalTest::WantsToRunAgain(AFunctionalTest *this)

{
  return false;
}

// execAddError @ 148ca2850

void __cdecl AFunctionalTest::execAddError(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
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
  (**(code **)(*(longlong *)param_1 + 0x868))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAddInfo @ 148ca3080

void __cdecl AFunctionalTest::execAddInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
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
  (**(code **)(*(longlong *)param_1 + 0x870))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAddRerun @ 148ca3130

void __cdecl AFunctionalTest::execAddRerun(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 local_res8;
  undefined8 local_18 [2];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = &param_1[0x18].field_0x8;
  local_18[0] = local_res8;
  if ((*(undefined8 **)puVar1 <= local_18) &&
     (local_18 < *(undefined8 **)puVar1 + *(int *)&param_1[0x18].field_0x14)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&param_1[0x18].field_0x10;
  if (iVar5 == *(int *)&param_1[0x18].field_0x14) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)puVar1,(int *)&param_1[0x18].field_0x14);
  }
  *(int *)&param_1[0x18].field_0x10 = iVar5 + 1;
  *(undefined8 *)(*(longlong *)puVar1 + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// execAddWarning @ 148ca36a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AFunctionalTest::execAddWarning(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  LogStep((AFunctionalTest *)param_1,Warning,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAssertEqual_Bool @ 148ca3780

void __cdecl AFunctionalTest::execAssertEqual_Bool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  void *local_38;
  undefined8 local_30;
  
  local_res8[0] = 0;
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7a0))(param_1,bVar3,bVar4,&local_38,local_res18);
  *(undefined1 *)param_3 = uVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execAssertEqual_Box2D @ 148ca3920

void __cdecl AFunctionalTest::execAssertEqual_Box2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8 = (void *)0x0;
  local_d0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_78 = local_c8;
  uStack_70 = uStack_c0;
  local_68 = local_b8;
  uStack_60 = uStack_b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_a8;
  local_48 = local_a0;
  uStack_40 = uStack_98;
  local_38 = local_90;
  uStack_30 = uStack_88;
  local_28 = local_80;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x800))
                    (param_1,&local_48,&local_78,&local_d8,local_res8[0],local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}

// execAssertEqual_Double @ 148ca3b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AFunctionalTest::execAssertEqual_Double(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  bool bVar3;
  double local_res10;
  double local_res18;
  double local_res20;
  longlong local_98;
  FName local_90;
  void *local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68 [4];
  
  local_res10 = (double)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((double)CONCAT44((uint)((ulonglong)(local_res20 - local_res18) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_res20 - local_res18,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= local_res10) {
    ::FString::PrintfImpl(local_68,L"Double assertion passed (%s)");
    LogStep((AFunctionalTest *)param_1,Log,local_68);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    uVar2 = 1;
  }
  else {
    bVar3 = local_98 != 0;
    if (bVar3) {
      local_90 = *(FName *)(local_98 + 0x18);
      ::FName::ToString(&local_90,&local_78);
    }
    ::FString::PrintfImpl
              (local_68,
               L"Expected \'%s\' to be {%lf}, but it was {%lf} within tolerance {%lf} for context \'%s\'"
              );
    LogStep((AFunctionalTest *)param_1,Error,local_68);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    uVar2 = 0;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execAssertEqual_Float @ 148ca3de0

void __cdecl AFunctionalTest::execAssertEqual_Float(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  void *local_38;
  undefined8 local_30;
  
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x798))
                    (param_1,local_res18[0],local_res10[0],&local_38,local_res8[0],local_res20);
  *(undefined1 *)param_3 = uVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execAssertEqual_Int @ 148ca3fc0

void __cdecl AFunctionalTest::execAssertEqual_Int(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  void *local_28;
  undefined8 local_20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7a8))
                    (param_1,local_res10[0],local_res8[0],&local_28,local_res18);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAssertEqual_Matrix @ 148ca4140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AFunctionalTest::execAssertEqual_Matrix(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_258 [2];
  undefined8 local_250;
  void *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_248 = (void *)0x0;
  local_240 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  local_258[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_258);
  }
  local_250 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_250,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_250);
  }
  local_238 = local_138;
  uStack_230 = uStack_130;
  local_218 = local_118;
  uStack_210 = uStack_110;
  local_228 = local_128;
  uStack_220 = uStack_120;
  local_1f8 = local_f8;
  uStack_1f0 = uStack_f0;
  local_208 = local_108;
  uStack_200 = uStack_100;
  local_1d8 = local_d8;
  uStack_1d0 = uStack_d0;
  local_1e8 = local_e8;
  uStack_1e0 = uStack_e0;
  local_1b8 = local_b8;
  uStack_1b0 = uStack_b0;
  local_1c8 = local_c8;
  uStack_1c0 = uStack_c0;
  local_198 = local_98;
  uStack_190 = uStack_90;
  local_1a8 = local_a8;
  uStack_1a0 = uStack_a0;
  local_178 = local_78;
  uStack_170 = uStack_70;
  local_188 = local_88;
  uStack_180 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_158 = local_58;
  uStack_150 = uStack_50;
  local_168 = local_68;
  uStack_160 = uStack_60;
  local_260 = local_250;
  local_268 = local_258[0];
  local_148 = local_48;
  uStack_144 = uStack_44;
  uStack_140 = uStack_40;
  uStack_13c = uStack_3c;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x840))(param_1,&local_1b8,&local_238,&local_248);
  *(undefined1 *)param_3 = uVar2;
  if (local_248 != (void *)0x0) {
    FMemory::Free(local_248);
  }
  return;
}

// execAssertEqual_Name @ 148ca43d0

void __cdecl AFunctionalTest::execAssertEqual_Name(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  void *local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7b0))
                    (param_1,local_res10,local_res8,&local_28,local_res18);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAssertEqual_Object @ 148ca4550

void __cdecl AFunctionalTest::execAssertEqual_Object(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  void *local_28;
  undefined8 local_20;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7b8))
                    (param_1,local_res18,local_res10,&local_28,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAssertEqual_Plane @ 148ca46d0

void __cdecl AFunctionalTest::execAssertEqual_Plane(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = local_98;
  uStack_50 = uStack_90;
  local_48 = local_88;
  uStack_40 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_78;
  uStack_30 = uStack_70;
  local_28 = local_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x820))
                    (param_1,&local_38,&local_58,&local_a8,local_res8[0],local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execAssertEqual_Quat @ 148ca48b0

void __cdecl AFunctionalTest::execAssertEqual_Quat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = local_98;
  uStack_50 = uStack_90;
  local_48 = local_88;
  uStack_40 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_78;
  uStack_30 = uStack_70;
  local_28 = local_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x830))
                    (param_1,&local_38,&local_58,&local_a8,local_res8[0],local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execAssertEqual_Rotator @ 148ca4a90

void __cdecl
AFunctionalTest::execAssertEqual_Rotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = local_88;
  uStack_50 = uStack_80;
  local_48 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_70;
  uStack_30 = uStack_68;
  local_28 = local_60;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7c8))
                    (param_1,&local_38,&local_58,&local_98,local_res8[0],local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execAssertEqual_RotatorOrientation @ 148ca4c80

void __cdecl
AFunctionalTest::execAssertEqual_RotatorOrientation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = local_88;
  uStack_50 = uStack_80;
  local_48 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_70;
  uStack_30 = uStack_68;
  local_28 = local_60;
  uVar2 = (**(code **)(*(longlong *)param_1 + 2000))
                    (param_1,&local_38,&local_58,&local_98,local_res8[0],local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execAssertEqual_String @ 148ca4e70

void __cdecl AFunctionalTest::execAssertEqual_String(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pvVar4 = local_78;
  uVar3 = local_res8;
  local_58.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_70;
  local_50 = (int)local_70;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x850);
  if ((int)local_70 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,&local_58,(int)local_70,&local_4c);
    memcpy(local_58.Data,pvVar4,lVar6 * 2);
  }
  pvVar4 = local_68;
  lVar6 = (longlong)(int)local_60;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = (int)local_60;
  if ((int)local_60 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,&local_48,(int)local_60,&local_3c);
    memcpy(local_48.Data,pvVar4,lVar6 * 2);
  }
  uVar5 = (*pcVar2)(param_1,&local_48,&local_58,&local_38,uVar3);
  *(undefined1 *)param_3 = uVar5;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execAssertEqual_TraceQueryResults @ 148ca50d0

void __cdecl
AFunctionalTest::execAssertEqual_TraceQueryResults(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  void *local_28;
  undefined8 local_20;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x860))
                    (param_1,local_res18,local_res10,&local_28,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAssertEqual_Transform @ 148ca5250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AFunctionalTest::execAssertEqual_Transform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 uVar14;
  uchar *puVar15;
  uchar *puVar16;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_108._8_4_ = SUB84((double)fVar5,0);
  local_108._0_8_ = (double)fVar2;
  local_108._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_f8._8_4_ = SUB84((double)fVar11,0);
  local_f8._0_8_ = (double)fVar8;
  local_f8._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_e8._8_4_ = SUB84((double)fVar6,0);
  local_e8._0_8_ = (double)fVar3;
  local_e8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_d8._8_4_ = SUB84((double)fVar12,0);
  local_d8._0_8_ = (double)fVar9;
  local_d8._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_c8._8_4_ = SUB84((double)fVar7,0);
  local_c8._0_8_ = (double)fVar4;
  local_c8._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_b8._8_4_ = SUB84((double)fVar13,0);
  local_b8._0_8_ = (double)fVar10;
  local_b8._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  puVar15 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar16 = local_108;
  if (puVar15 != (uchar *)0x0) {
    puVar16 = puVar15;
  }
  local_a8._8_4_ = SUB84((double)fVar5,0);
  local_a8._0_8_ = (double)fVar2;
  local_a8._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_98._8_4_ = SUB84((double)fVar11,0);
  local_98._0_8_ = (double)fVar8;
  local_98._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_88._8_4_ = SUB84((double)fVar6,0);
  local_88._0_8_ = (double)fVar3;
  local_88._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_78._8_4_ = SUB84((double)fVar12,0);
  local_78._0_8_ = (double)fVar9;
  local_78._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_68._8_4_ = SUB84((double)fVar7,0);
  local_68._0_8_ = (double)fVar4;
  local_68._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_58._8_4_ = SUB84((double)fVar13,0);
  local_58._0_8_ = (double)fVar10;
  local_58._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_118 = (void *)0x0;
  local_110 = 0;
  puVar15 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_128[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_130 = local_120;
  local_138 = local_128[0];
  uVar14 = (**(code **)(*(longlong *)param_1 + 0x790))(param_1,puVar16,puVar15,&local_118);
  *(undefined1 *)param_3 = uVar14;
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  return;
}

// execAssertEqual_Vector2D @ 148ca54f0

void __cdecl
AFunctionalTest::execAssertEqual_Vector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38 = local_58;
  uStack_30 = uStack_50;
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7f0))
                    (param_1,&local_28,&local_38,&local_68,local_res8[0],local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execAssertEqual_Vector4 @ 148ca56c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AFunctionalTest::execAssertEqual_Vector4(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_78 = 0;
  uStack_70 = 0;
  local_68 = ___xmm_3ff00000000000000000000000000000;
  uStack_60 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = ___xmm_3ff00000000000000000000000000000;
  uStack_80 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = local_98;
  uStack_50 = uStack_90;
  local_48 = local_88;
  uStack_40 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_78;
  uStack_30 = uStack_70;
  local_28 = local_68;
  uStack_20 = uStack_60;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x810))
                    (param_1,&local_38,&local_58,&local_a8,local_res8[0],local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execAssertEqual_Vector @ 148ca58d0

void __cdecl AFunctionalTest::execAssertEqual_Vector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = local_88;
  uStack_50 = uStack_80;
  local_48 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_70;
  uStack_30 = uStack_68;
  local_28 = local_60;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7e0))
                    (param_1,&local_38,&local_58,&local_98,local_res8[0],local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execAssertFalse @ 148ca5ac0

void __cdecl AFunctionalTest::execAssertFalse(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  void *local_28;
  undefined8 local_20;
  
  local_res8[0] = 0;
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
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x768))(param_1,bVar3,&local_28,local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAssertIsValid @ 148ca5c00

void __cdecl AFunctionalTest::execAssertIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  void *local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x770))(param_1,local_res10,&local_28,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAssertNotEqual_Box2D @ 148ca5d30

void __cdecl
AFunctionalTest::execAssertNotEqual_Box2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8 = (void *)0x0;
  local_d0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_78 = local_c8;
  uStack_70 = uStack_c0;
  local_68 = local_b8;
  uStack_60 = uStack_b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_a8;
  local_48 = local_a0;
  uStack_40 = uStack_98;
  local_38 = local_90;
  uStack_34 = uStack_8c;
  uStack_30 = uStack_88;
  uStack_2c = uStack_84;
  local_28 = local_80;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x808))
                    (param_1,&local_48,&local_78,&local_d8,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}

// execAssertNotEqual_Matrix @ 148ca5ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AFunctionalTest::execAssertNotEqual_Matrix(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 local_258;
  void *local_250;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_250 = (void *)0x0;
  local_248 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_250,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_250);
  }
  local_258 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  local_238 = local_138;
  uStack_230 = uStack_130;
  local_228 = local_128;
  uStack_220 = uStack_120;
  local_218 = local_118;
  uStack_210 = uStack_110;
  local_208 = local_108;
  uStack_200 = uStack_100;
  local_1f8 = local_f8;
  uStack_1f0 = uStack_f0;
  local_1e8 = local_e8;
  uStack_1e0 = uStack_e0;
  local_1d8 = local_d8;
  uStack_1d0 = uStack_d0;
  local_1c8 = local_c8;
  uStack_1c0 = uStack_c0;
  local_1b8 = local_b8;
  uStack_1b0 = uStack_b0;
  local_1a8 = local_a8;
  uStack_1a0 = uStack_a0;
  local_198 = local_98;
  uStack_190 = uStack_90;
  local_188 = local_88;
  uStack_180 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_178 = local_78;
  uStack_170 = uStack_70;
  local_168 = local_68;
  uStack_160 = uStack_60;
  local_158 = local_58;
  uStack_154 = uStack_54;
  uStack_150 = uStack_50;
  uStack_14c = uStack_4c;
  local_148 = local_48;
  uStack_144 = uStack_44;
  uStack_140 = uStack_40;
  uStack_13c = uStack_3c;
  local_268 = local_258;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x848))(param_1,&local_1b8,&local_238,&local_250);
  *(undefined1 *)param_3 = uVar2;
  if (local_250 != (void *)0x0) {
    FMemory::Free(local_250);
  }
  return;
}

// execAssertNotEqual_Plane @ 148ca6130

void __cdecl
AFunctionalTest::execAssertNotEqual_Plane(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_58 = local_98;
  uStack_50 = uStack_90;
  local_48 = local_88;
  uStack_40 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  local_28 = local_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x828))
                    (param_1,&local_38,&local_58,&local_a8,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execAssertNotEqual_Quat @ 148ca62d0

void __cdecl
AFunctionalTest::execAssertNotEqual_Quat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_58 = local_98;
  uStack_50 = uStack_90;
  local_48 = local_88;
  uStack_40 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  local_28 = local_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x838))
                    (param_1,&local_38,&local_58,&local_a8,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execAssertNotEqual_Rotator @ 148ca6470

void __cdecl
AFunctionalTest::execAssertNotEqual_Rotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_58 = local_88;
  uStack_50 = uStack_80;
  local_48 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  local_28 = local_60;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7d8))
                    (param_1,&local_38,&local_58,&local_98,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execAssertNotEqual_String @ 148ca6610

void __cdecl
AFunctionalTest::execAssertNotEqual_String(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pvVar4 = local_78;
  uVar3 = local_res8;
  local_58.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_70;
  local_50 = (int)local_70;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x858);
  if ((int)local_70 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,&local_58,(int)local_70,&local_4c);
    memcpy(local_58.Data,pvVar4,lVar6 * 2);
  }
  pvVar4 = local_68;
  lVar6 = (longlong)(int)local_60;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = (int)local_60;
  if ((int)local_60 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,&local_48,(int)local_60,&local_3c);
    memcpy(local_48.Data,pvVar4,lVar6 * 2);
  }
  uVar5 = (*pcVar2)(param_1,&local_48,&local_58,&local_38,uVar3);
  *(undefined1 *)param_3 = uVar5;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execAssertNotEqual_Transform @ 148ca6870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AFunctionalTest::execAssertNotEqual_Transform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 uVar14;
  double *pdVar15;
  double *pdVar16;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_108 = (double)fVar2;
  dStack_100 = (double)fVar5;
  local_f8 = (double)fVar8;
  dStack_f0 = (double)fVar11;
  local_d8 = (double)fVar9;
  dStack_d0 = (double)fVar12;
  local_e8._8_4_ = SUB84((double)fVar6,0);
  local_e8._0_8_ = (double)fVar3;
  local_e8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_b8 = (double)fVar10;
  dStack_b0 = (double)fVar13;
  local_c8._8_4_ = SUB84((double)fVar7,0);
  local_c8._0_8_ = (double)fVar4;
  local_c8._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  local_a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar16 = &local_108;
  if (pdVar15 != (double *)0x0) {
    pdVar16 = pdVar15;
  }
  local_98 = (double)fVar6;
  dStack_90 = (double)fVar9;
  local_78 = (double)fVar7;
  dStack_70 = (double)fVar10;
  local_88._8_4_ = SUB84((double)fVar4,0);
  local_88._0_8_ = (double)fVar2;
  local_88._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_58 = (double)fVar8;
  dStack_50 = (double)fVar11;
  local_68._8_4_ = SUB84((double)fVar5,0);
  local_68._0_8_ = (double)fVar3;
  local_68._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_120 = (void *)0x0;
  local_118 = 0;
  pdVar15 = &local_a8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_138 = local_128;
  uVar14 = (**(code **)(*(longlong *)param_1 + 0x7c0))(param_1,pdVar16,pdVar15,&local_120);
  *(undefined1 *)param_3 = uVar14;
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  return;
}

// execAssertNotEqual_Vector2D @ 148ca6ac0

void __cdecl
AFunctionalTest::execAssertNotEqual_Vector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7f8))
                    (param_1,&local_18,&local_28,&local_58,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAssertNotEqual_Vector4 @ 148ca6c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AFunctionalTest::execAssertNotEqual_Vector4(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_78 = 0;
  uStack_70 = 0;
  local_68 = ___xmm_3ff00000000000000000000000000000;
  uStack_60 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = ___xmm_3ff00000000000000000000000000000;
  uStack_80 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_58 = local_98;
  uStack_50 = uStack_90;
  local_48 = local_88;
  uStack_40 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = (undefined4)local_78;
  uStack_34 = local_78._4_4_;
  uStack_30 = (undefined4)uStack_70;
  uStack_2c = uStack_70._4_4_;
  local_28 = local_68;
  uStack_20 = uStack_60;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x818))
                    (param_1,&local_38,&local_58,&local_a8,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execAssertNotEqual_Vector @ 148ca6e30

void __cdecl
AFunctionalTest::execAssertNotEqual_Vector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_58 = local_88;
  uStack_50 = uStack_80;
  local_48 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  local_28 = local_60;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7e8))
                    (param_1,&local_38,&local_58,&local_98,local_res8);
  *(undefined1 *)param_3 = uVar2;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execAssertTrue @ 148ca6fd0

void __cdecl AFunctionalTest::execAssertTrue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  void *local_28;
  undefined8 local_20;
  
  local_res8[0] = 0;
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
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x760))(param_1,bVar3,&local_28,local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAssertValue_DateTime @ 148ca7110

void __cdecl
AFunctionalTest::execAssertValue_DateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  void *local_38;
  undefined8 local_30;
  
  local_res20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x788))
                    (param_1,local_res20,local_res8[0],local_res18,&local_38,local_res10);
  *(undefined1 *)param_3 = uVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execAssertValue_Double @ 148ca72f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AFunctionalTest::execAssertValue_Double(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  EComparisonMethod local_res10 [8];
  UObject *local_res18;
  double local_res20;
  double local_48;
  FString local_40 [2];
  
  local_48 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = Equal_To;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_40[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40[0].Data.ArrayNum = 0;
  local_40[0].Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = AssertValue_Double((AFunctionalTest *)param_1,local_48,local_res10[0],local_res20,local_40
                             ,local_res18);
  *(bool *)param_3 = bVar2;
  if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
  }
  return;
}

// execAssertValue_Float @ 148ca74f0

void __cdecl AFunctionalTest::execAssertValue_Float(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  void *local_38;
  undefined8 local_30;
  
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x780))
                    (param_1,local_res18[0],local_res8[0],local_res10[0],&local_38,local_res20);
  *(undefined1 *)param_3 = uVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execAssertValue_Int @ 148ca76d0

void __cdecl AFunctionalTest::execAssertValue_Int(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  void *local_38;
  undefined8 local_30;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x778))
                    (param_1,local_res18[0],local_res8[0],local_res10[0],&local_38,local_res20);
  *(undefined1 *)param_3 = uVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execFinishTest @ 148ca85b0

void __cdecl AFunctionalTest::execFinishTest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  void *local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
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
  (**(code **)(*(longlong *)param_1 + 0x880))(param_1,local_res8[0],&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetCurrentRerunReason @ 148ca86a0

void __cdecl
AFunctionalTest::execGetCurrentRerunReason(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x18].field_0x18;
  return;
}

// execIsEnabled @ 148ca9000

void __cdecl AFunctionalTest::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[0x13].field_0x20 & 1;
  return;
}

// execIsEnabledInWorld @ 148ca9030

void __cdecl AFunctionalTest::execIsEnabledInWorld(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(uint *)&param_1[0x13].field_0x20 & 2) == 0) ||
     ((local_res8 != 0 &&
      (*(longlong *)(local_res8 + 0x18) == *(longlong *)&param_1[0x13].field_0x24)))) {
    *(byte *)param_3 = (byte)*(uint *)&param_1[0x13].field_0x20 & 1;
  }
  else {
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execIsReady @ 148ca91a0

void __cdecl AFunctionalTest::execIsReady(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x8d8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsRunning @ 148ca9210

void __cdecl AFunctionalTest::execIsRunning(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x19].field_0x10;
  return;
}

// execLogMessage @ 148ca9350

void __cdecl AFunctionalTest::execLogMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
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
  (**(code **)(*(longlong *)param_1 + 0x888))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execRegisterAutoDestroyActor @ 148ca9600

void __cdecl
AFunctionalTest::execRegisterAutoDestroyActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8b0))(param_1,local_res8);
  return;
}

// execSetConsoleVariable @ 148ca9b00

void __cdecl AFunctionalTest::execSetConsoleVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar5;
  FString local_38;
  FString local_28;
  TSharedPtr<FScopedTestEnvironment,1> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = &param_1[0x1a].field_0x18;
  if (*(longlong *)puVar1 == 0) {
    pTVar5 = FScopedTestEnvironment::Get(&local_18);
    if ((TSharedPtr<FScopedTestEnvironment,1> *)puVar1 != pTVar5) {
      *(FScopedTestEnvironment **)puVar1 = pTVar5->Object;
      pTVar5->Object = (FScopedTestEnvironment *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&param_1[0x1a].field_0x20,&pTVar5->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*(longlong *)puVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FScopedTestEnvironment::SetConsoleVariableValue
            (*(FScopedTestEnvironment **)puVar1,&local_28,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetConsoleVariableFromBoolean @ 148ca9c60

void __cdecl
AFunctionalTest::execSetConsoleVariableFromBoolean(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar5;
  int local_res8 [2];
  FString local_38;
  FString local_28;
  TSharedPtr<FScopedTestEnvironment,1> local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::AppendInt(&local_28,(uint)(local_res8[0] != 0));
  puVar1 = &param_1[0x1a].field_0x18;
  if (*(longlong *)puVar1 == 0) {
    pTVar5 = FScopedTestEnvironment::Get(&local_18);
    if ((TSharedPtr<FScopedTestEnvironment,1> *)puVar1 != pTVar5) {
      *(FScopedTestEnvironment **)puVar1 = pTVar5->Object;
      pTVar5->Object = (FScopedTestEnvironment *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&param_1[0x1a].field_0x20,&pTVar5->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*(longlong *)puVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FScopedTestEnvironment::SetConsoleVariableValue
            (*(FScopedTestEnvironment **)puVar1,&local_38,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetConsoleVariableFromFloat @ 148ca9de0

void __cdecl
AFunctionalTest::execSetConsoleVariableFromFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar6;
  float local_res8 [2];
  FString local_38;
  TSharedPtr<FScopedTestEnvironment,1> local_28;
  FString local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = ::FString::SanitizeFloat(&local_18,(double)local_res8[0],1);
  puVar1 = &param_1[0x1a].field_0x18;
  if (*(longlong *)puVar1 == 0) {
    pTVar6 = FScopedTestEnvironment::Get(&local_28);
    if ((TSharedPtr<FScopedTestEnvironment,1> *)puVar1 != pTVar6) {
      *(FScopedTestEnvironment **)puVar1 = pTVar6->Object;
      pTVar6->Object = (FScopedTestEnvironment *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&param_1[0x1a].field_0x20,&pTVar6->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (*(longlong *)puVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FScopedTestEnvironment::SetConsoleVariableValue
            (*(FScopedTestEnvironment **)puVar1,&local_38,pFVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetConsoleVariableFromInteger @ 148ca9f60

void __cdecl
AFunctionalTest::execSetConsoleVariableFromInteger(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar5;
  int local_res8 [2];
  FString local_38;
  FString local_28;
  TSharedPtr<FScopedTestEnvironment,1> local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::AppendInt(&local_28,local_res8[0]);
  puVar1 = &param_1[0x1a].field_0x18;
  if (*(longlong *)puVar1 == 0) {
    pTVar5 = FScopedTestEnvironment::Get(&local_18);
    if ((TSharedPtr<FScopedTestEnvironment,1> *)puVar1 != pTVar5) {
      *(FScopedTestEnvironment **)puVar1 = pTVar5->Object;
      pTVar5->Object = (FScopedTestEnvironment *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&param_1[0x1a].field_0x20,&pTVar5->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*(longlong *)puVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FScopedTestEnvironment::SetConsoleVariableValue
            (*(FScopedTestEnvironment **)puVar1,&local_38,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetTimeLimit @ 148caa6f0

void __cdecl AFunctionalTest::execSetTimeLimit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x890))(param_1,local_res10[0],local_res8[0]);
  return;
}

