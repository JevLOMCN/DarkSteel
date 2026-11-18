// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1483cccb0

UClass * __cdecl UHealthSnapshotBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HealthSnapshotBlueprintLibrary",
               &Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUHealthSnapshotBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHealthSnapshotBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UHealthSnapshotBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.InnerSingleton;
}

// UHealthSnapshotBlueprintLibrary @ 1483e79a0

UHealthSnapshotBlueprintLibrary * __thiscall
UHealthSnapshotBlueprintLibrary::UHealthSnapshotBlueprintLibrary
          (UHealthSnapshotBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UHealthSnapshotBlueprintLibrary__6B_;
  return this;
}

// UHealthSnapshotBlueprintLibrary @ 1483e79d0

UHealthSnapshotBlueprintLibrary * __thiscall
UHealthSnapshotBlueprintLibrary::UHealthSnapshotBlueprintLibrary
          (UHealthSnapshotBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UHealthSnapshotBlueprintLibrary__6B_;
  return this;
}

// ~UHealthSnapshotBlueprintLibrary @ 1483e8fe0

void __thiscall
UHealthSnapshotBlueprintLibrary::~UHealthSnapshotBlueprintLibrary
          (UHealthSnapshotBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UHealthSnapshotBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 148409da0

UClass * __cdecl UHealthSnapshotBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HealthSnapshotBlueprintLibrary",
               &Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUHealthSnapshotBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHealthSnapshotBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UHealthSnapshotBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.InnerSingleton;
}

// LogPerformanceSnapshot @ 1484120c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UHealthSnapshotBlueprintLibrary::LogPerformanceSnapshot(FString *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FPerformanceTrackingChart *pFVar3;
  bool bVar4;
  FDateTime FVar5;
  FHealthSnapshot *pFVar6;
  FOutputDeviceRedirector *this;
  wchar_t *pwVar7;
  FName local_res8;
  FHealthSnapshot local_388;
  FHealthSnapshot local_268;
  FHealthSnapshot local_148;
  
  FHealthSnapshot::FHealthSnapshot(&local_388,L"");
  pFVar3 = PerformanceChart.Object;
  if (PerformanceChart.Object == (FPerformanceTrackingChart *)0x0) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar6 = FHealthSnapshot::FHealthSnapshot(&local_148,pwVar7);
    FHealthSnapshot::operator=(&local_388,pFVar6);
    local_148._padding_ = (longlong)&___7FHealthSnapshot__6B_;
    if (local_148.Title.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Title.Data.AllocatorInstance.Data);
    }
    if (local_148.PlatformMemoryStats.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.PlatformMemoryStats.AllocatorInstance.Data);
    }
  }
  else {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FHealthSnapshot::FHealthSnapshot(&local_268,pwVar7);
    local_268._padding_ = (longlong)&___7FHealthSnapshot__6B_;
    FHealthSnapshot::CapturePerformanceStats(&local_268,pFVar3);
    FHealthSnapshot::operator=(&local_388,&local_268);
    local_268._padding_ = (longlong)&___7FHealthSnapshot__6B_;
    if (local_268.Title.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Title.Data.AllocatorInstance.Data);
    }
    if (local_268.PlatformMemoryStats.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.PlatformMemoryStats.AllocatorInstance.Data);
    }
    if (param_2) {
      if ((PerformanceChart.Object == (FPerformanceTrackingChart *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = PerformanceChart.Object;
      FVar5 = FDateTime::Now();
      FPerformanceTrackingChart::Reset(pFVar3,(FDateTime *)FVar5.Ticks);
    }
  }
  this = GetGlobalLogSingleton();
  if (HealthSnapshot::GLogHealthSnapshot != 0) {
    local_res8.ComparisonIndex.Value = LogHealthSnapshot._4_4_;
    local_res8.Number = LogHealthSnapshot._8_4_;
    FOutputDevice::CategorizedLogfImpl
              ((FOutputDevice *)this,&local_res8,Log,L"======= Snapshot: %s =======");
    (**(code **)(local_388._padding_ + 0x18))(&local_388,this,local_res8);
    FOutputDevice::CategorizedLogfImpl
              ((FOutputDevice *)this,&local_res8,Log,
               L"=========================================================");
  }
  local_388._padding_ = (longlong)&___7FHealthSnapshot__6B_;
  if (local_388.Title.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Title.Data.AllocatorInstance.Data);
  }
  if (local_388.PlatformMemoryStats.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.PlatformMemoryStats.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// StartPerformanceSnapshots @ 1484277e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UHealthSnapshotBlueprintLibrary::StartPerformanceSnapshots(void)

{
  code *pcVar1;
  bool bVar2;
  FPerformanceTrackingChart *this;
  FDateTime FVar3;
  FPerformanceTrackingChart *pFVar4;
  TRawPtrProxy<FPerformanceTrackingChart> local_res8 [2];
  FSharedReferencer<1> local_40;
  TSharedPtr<IPerformanceDataConsumer,1> local_38;
  FString local_28;
  TSharedPtr<IPerformanceDataConsumer,1> local_18;
  
  pFVar4 = (FPerformanceTrackingChart *)0x0;
  local_res8[0].Object = local_res8[0].Object & 0xffffffff00000000;
  if ((PerformanceChart.Object != (FPerformanceTrackingChart *)0x0) &&
     (PerformanceChart.Object != (FPerformanceTrackingChart *)0x0)) {
    local_38.Object = (IPerformanceDataConsumer *)PerformanceChart.Object;
    local_38.SharedReferenceCount.ReferenceController =
         PerformanceChart.SharedReferenceCount.ReferenceController;
    if (PerformanceChart.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    UEngine::RemovePerformanceDataConsumer(GEngine,&local_38);
    local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    PerformanceChart.Object = (FPerformanceTrackingChart *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&PerformanceChart.SharedReferenceCount,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
  }
  this = ::operator_new(0x208);
  if (this != (FPerformanceTrackingChart *)0x0) {
    ::FString::FString(&local_28,L"HealthSnapshots");
    FVar3 = FDateTime::Now();
    pFVar4 = FPerformanceTrackingChart::FPerformanceTrackingChart
                       (this,(FDateTime *)FVar3.Ticks,&local_28);
  }
  local_res8[0].Object = pFVar4;
  TSharedPtr<FPerformanceTrackingChart,1>::operator=<FPerformanceTrackingChart>
            (&PerformanceChart,local_res8);
  if ((this != (FPerformanceTrackingChart *)0x0) &&
     (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_18.Object = (IPerformanceDataConsumer *)PerformanceChart.Object;
  local_18.SharedReferenceCount.ReferenceController =
       PerformanceChart.SharedReferenceCount.ReferenceController;
  if (PerformanceChart.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  UEngine::AddPerformanceDataConsumer(GEngine,&local_18);
  if ((PerformanceChart.Object == (FPerformanceTrackingChart *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148427947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PerformanceChart.Object)->_padding_)();
  return;
}

// StaticRegisterNativesUHealthSnapshotBlueprintLibrary @ 148427a50

void __cdecl
UHealthSnapshotBlueprintLibrary::StaticRegisterNativesUHealthSnapshotBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopPerformanceSnapshots @ 148427ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UHealthSnapshotBlueprintLibrary::StopPerformanceSnapshots(void)

{
  TSharedPtr<IPerformanceDataConsumer,1> local_18;
  
  if (PerformanceChart.Object != (FPerformanceTrackingChart *)0x0) {
    local_18.Object = (IPerformanceDataConsumer *)PerformanceChart.Object;
    local_18.SharedReferenceCount.ReferenceController =
         PerformanceChart.SharedReferenceCount.ReferenceController;
    if (PerformanceChart.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    UEngine::RemovePerformanceDataConsumer(GEngine,&local_18);
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    PerformanceChart.Object = (FPerformanceTrackingChart *)0x0;
    local_18.Object = (IPerformanceDataConsumer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&PerformanceChart.SharedReferenceCount,&local_18.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  return;
}

// execLogPerformanceSnapshot @ 14842f4f0

void __cdecl
UHealthSnapshotBlueprintLibrary::execLogPerformanceSnapshot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  int local_res10 [2];
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
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
  _Src = local_28;
  bVar3 = local_res10[0] != 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_18,(int)local_20,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  LogPerformanceSnapshot(&local_18,bVar3);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execStartPerformanceSnapshots @ 14842f640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHealthSnapshotBlueprintLibrary::execStartPerformanceSnapshots
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPerformanceTrackingChart *this;
  FDateTime FVar3;
  FPerformanceTrackingChart *pFVar4;
  TRawPtrProxy<FPerformanceTrackingChart> local_res10 [3];
  FSharedReferencer<1> local_40;
  TSharedPtr<IPerformanceDataConsumer,1> local_38;
  FString local_28;
  TSharedPtr<IPerformanceDataConsumer,1> local_18;
  
  pFVar4 = (FPerformanceTrackingChart *)0x0;
  local_res10[0].Object = local_res10[0].Object & 0xffffffff00000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((PerformanceChart.Object != (FPerformanceTrackingChart *)0x0) &&
     (PerformanceChart.Object != (FPerformanceTrackingChart *)0x0)) {
    local_38.Object = (IPerformanceDataConsumer *)PerformanceChart.Object;
    local_38.SharedReferenceCount.ReferenceController =
         PerformanceChart.SharedReferenceCount.ReferenceController;
    if (PerformanceChart.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    UEngine::RemovePerformanceDataConsumer(GEngine,&local_38);
    local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    PerformanceChart.Object = (FPerformanceTrackingChart *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&PerformanceChart.SharedReferenceCount,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
  }
  this = ::operator_new(0x208);
  if (this != (FPerformanceTrackingChart *)0x0) {
    ::FString::FString(&local_28,L"HealthSnapshots");
    FVar3 = FDateTime::Now();
    pFVar4 = FPerformanceTrackingChart::FPerformanceTrackingChart
                       (this,(FDateTime *)FVar3.Ticks,&local_28);
  }
  local_res10[0].Object = pFVar4;
  TSharedPtr<FPerformanceTrackingChart,1>::operator=<FPerformanceTrackingChart>
            (&PerformanceChart,local_res10);
  if ((this != (FPerformanceTrackingChart *)0x0) &&
     (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_18.Object = (IPerformanceDataConsumer *)PerformanceChart.Object;
  local_18.SharedReferenceCount.ReferenceController =
       PerformanceChart.SharedReferenceCount.ReferenceController;
  if (PerformanceChart.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(PerformanceChart.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  UEngine::AddPerformanceDataConsumer(GEngine,&local_18);
  if ((PerformanceChart.Object == (FPerformanceTrackingChart *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014842f7ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PerformanceChart.Object)->_padding_)();
  return;
}

// execStopPerformanceSnapshots @ 14842f7d0

void __cdecl
UHealthSnapshotBlueprintLibrary::execStopPerformanceSnapshots
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopPerformanceSnapshots();
  return;
}

