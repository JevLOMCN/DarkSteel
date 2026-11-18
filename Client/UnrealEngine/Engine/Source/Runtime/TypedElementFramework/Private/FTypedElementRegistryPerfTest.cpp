// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// GetTestFlags @ 142c84c60

EAutomationTestFlags __thiscall
FTypedElementRegistryPerfTest::GetTestFlags(FTypedElementRegistryPerfTest *this)

{
  return PerfFilter|EditorContext;
}

// IsStressTest @ 142c84c70

bool __thiscall FTypedElementRegistryPerfTest::IsStressTest(FTypedElementRegistryPerfTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142c84c80

uint __thiscall
FTypedElementRegistryPerfTest::GetRequiredDeviceNum(FTypedElementRegistryPerfTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142c84c90

FString * __thiscall
FTypedElementRegistryPerfTest::GetTestSourceFileName
          (FTypedElementRegistryPerfTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\TypedElementFrameworkTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142c84cc0

int __thiscall
FTypedElementRegistryPerfTest::GetTestSourceFileLine(FTypedElementRegistryPerfTest *this)

{
  return 0xe4;
}

// GetTests @ 142c84d10

/* WARNING: Removing unreachable block (ram,0x000142c84dfd) */
/* WARNING: Removing unreachable block (ram,0x000142c84ec8) */

void __thiscall
FTypedElementRegistryPerfTest::GetTests
          (FTypedElementRegistryPerfTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Runtime.TypedElementRegistry.PerfTest");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 142c84ef0

bool __thiscall
FTypedElementRegistryPerfTest::RunTest(FTypedElementRegistryPerfTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  TTypedElementInternalData<FTestTypedElementData> *pTVar3;
  TTypedElementInternalData<void> *pTVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  undefined1 uVar8;
  UObject *pUVar9;
  UTypedElementRegistry *this_00;
  UTestTypedElementInterfaceA_ImplTyped *pUVar10;
  TRegisteredElementType<void,1> *this_01;
  UTestTypedElementInterfaceA_ImplUntyped *pUVar11;
  TTypedElementList<FTypedElementHandle> *this_02;
  FOutputDeviceRedirector *pFVar12;
  ulonglong uVar13;
  FRegisteredElementType *pFVar14;
  FTypedElementId *pFVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  FTypedElementHandle *pFVar20;
  ForAnyElementType FVar21;
  FTypedElementHandle *pFVar22;
  TTypedElementOwner<FTestTypedElementData> *pTVar23;
  TTypedElementOwner<void> *pTVar24;
  double dVar25;
  double dVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_3e8;
  undefined8 local_3e0;
  ForAnyElementType local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8;
  undefined1 local_3c7 [15];
  TTypedElementList<FTypedElementHandle> *local_3b8;
  FSharedReferencer<1> FStack_3b0;
  FName local_3a8;
  FName local_3a0;
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  local_398 [2];
  TTypedElementOwner<FTestTypedElementData> *local_388;
  uint uStack_380;
  undefined4 uStack_37c;
  TRawPtrProxy<TTypedElementList<FTypedElementHandle>_> local_378;
  LARGE_INTEGER local_370;
  LARGE_INTEGER local_368;
  LARGE_INTEGER local_360;
  UTypedElementRegistry *local_358;
  LARGE_INTEGER local_350;
  UTypedElementRegistry *local_348;
  LARGE_INTEGER local_340;
  UTypedElementRegistry *local_338;
  LARGE_INTEGER local_330;
  LARGE_INTEGER local_328;
  LARGE_INTEGER local_320;
  LARGE_INTEGER local_318;
  undefined8 local_310;
  FSharedReferencer<1> local_308;
  TTypedElementOwner<void> local_300;
  TTypedElementOwner<FTestTypedElementData> local_2f0;
  code *local_2e0;
  UTypedElementRegistry **local_2d8;
  FScopedDurationTimeLogger local_2d0;
  FScopedDurationTimeLogger local_2a0;
  FScopedDurationTimeLogger local_270;
  FScopedDurationTimeLogger local_240;
  FScopedDurationTimeLogger local_210;
  FScopedDurationTimeLogger local_1e0;
  FScopedDurationTimeLogger local_1b0;
  FScopedDurationTimeLogger local_180;
  FScopedDurationTimeLogger local_150;
  FString local_120;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TArrayView<TTypedElementOwner<FTestTypedElementData>_const_,int> local_b8;
  TArrayView<TTypedElementOwner<void>_const_,int> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  TRegisteredElementType<void,1> *pTVar19;
  
  pUVar9 = GetTransientPackageAsObject();
  this_00 = NewObject<UTypedElementRegistry>(pUVar9);
  ::FName::FName(&local_3a8,"DummyElementType_Typed");
  UTypedElementRegistry::RegisterElementType<FTestTypedElementData,1>(this_00,local_3a8);
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UTestTypedElementInterfaceA_ImplTyped>(pUVar9);
  UTypedElementRegistry::RegisterElementInterface<ITestTypedElementInterfaceA>
            (this_00,local_3a8,(UObject *)pUVar10,false);
  ::FName::FName(&local_3a0,"DummyElementType_Untyped");
  FVar6 = local_3a0;
  this_01 = ::operator_new(0x130);
  pTVar19 = (TRegisteredElementType<void,1> *)0x0;
  local_398[0].Ptr = (FRegisteredElementType *)pTVar19;
  if (this_01 != (TRegisteredElementType<void,1> *)0x0) {
    memset(this_01,0,0x130);
    local_398[0].Ptr =
         (FRegisteredElementType *)
         UTypedElementRegistry::TRegisteredElementType<void,1>::TRegisteredElementType<void,1>
                   (this_01);
  }
  UTypedElementRegistry::RegisterElementTypeImpl(this_00,FVar6,local_398);
  if ((TRegisteredElementType<void,1> *)local_398[0].Ptr != (TRegisteredElementType<void,1> *)0x0) {
    (**(code **)(local_398[0].Ptr)->_padding_)(local_398[0].Ptr,1);
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UTestTypedElementInterfaceA_ImplUntyped>(pUVar9);
  UTypedElementRegistry::RegisterElementInterface<ITestTypedElementInterfaceA>
            (this_00,local_3a0,(UObject *)pUVar11,false);
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0._0_4_ = 0;
  local_3d0._4_4_ = 0;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  local_3e0._0_4_ = 0;
  local_3e0._4_4_ = 0;
  this_02 = ::operator_new(0xe0);
  if (this_02 == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_378.Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  }
  else {
    local_378.Object =
         TTypedElementList<FTypedElementHandle>::TTypedElementList<FTypedElementHandle>
                   (this_02,this_00);
    if ((((local_378.Object != (TTypedElementList<FTypedElementHandle> *)0x0) &&
         ((local_378.Object)->_padding_ != 0)) && ((local_378.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_378.Object)->_padding_ + 8) &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar7)))) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  TSharedRef<TTypedElementList<FTypedElementHandle>,1>::
  TSharedRef<TTypedElementList<FTypedElementHandle>,1><TTypedElementList<FTypedElementHandle>_>
            (&local_108,&local_378);
  local_3b8 = local_108.Object;
  FStack_3b0.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
  if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  if ((int)local_3d0._4_4_ < 1000000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1000000,&local_3d8,(uint)local_3d0,(int *)((longlong)&local_3d0 + 4));
  }
  pFVar12 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_e8,L"Creating %d typed handles");
  FScopedDurationTimeLogger::FScopedDurationTimeLogger
            (&local_2a0,&local_e8,(FOutputDevice *)pFVar12);
  lVar18 = 1000000;
  do {
    UTypedElementRegistry::CreateElementImpl<FTestTypedElementData>(this_00,&local_2f0,local_3a8,-1)
    ;
    if ((uint)local_3d0 == local_3d0._4_4_) {
      local_3d0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_3d8,(int *)((longlong)&local_3d0 + 4));
    }
    pTVar3 = local_2f0.DataPtr;
    uVar17 = (uint)local_3d0 + 1;
    local_2f0.DataPtr = (TTypedElementInternalData<FTestTypedElementData> *)0x0;
    *(TTypedElementInternalData<FTestTypedElementData> **)
     &local_3d8.Data[(longlong)(int)(uint)local_3d0 * 0x10].field_0x0 = pTVar3;
    *(undefined4 *)(local_3d8.Data + (longlong)(int)(uint)local_3d0 * 0x10 + 8) = 0xffffffff;
    lVar18 = lVar18 + -1;
    local_3d0._0_4_ = uVar17;
  } while (lVar18 != 0);
  QueryPerformanceCounter(&local_370);
  dVar26 = __real_4170000000000000;
  dVar25 = (double)local_370.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  *local_2a0.Timer.Accumulator = (dVar25 - local_2a0.Timer.StartTime) + *local_2a0.Timer.Accumulator
  ;
  local_2a0.Timer.StartTime = dVar25;
  FOutputDevice::LogfImpl(local_2a0.Device,L"%s: %f secs");
  if (local_2a0.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Msg.Data.AllocatorInstance.Data);
  }
  if ((int)local_3e0._4_4_ < 1000000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1000000,&local_3e8,(uint)local_3e0,(int *)((longlong)&local_3e0 + 4));
  }
  pFVar12 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_d8,L"Creating %d untyped handles");
  FScopedDurationTimeLogger::FScopedDurationTimeLogger
            (&local_270,&local_d8,(FOutputDevice *)pFVar12);
  do {
    UTypedElementRegistry::CreateElementImpl<void>(this_00,&local_300,local_3a0,(int)pTVar19);
    if ((uint)local_3e0 == local_3e0._4_4_) {
      local_3e0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_3e8,(int *)((longlong)&local_3e0 + 4));
    }
    pTVar4 = local_300.DataPtr;
    uVar17 = (uint)local_3e0 + 1;
    uVar16 = (int)pTVar19 + 1;
    pTVar19 = (TRegisteredElementType<void,1> *)(ulonglong)uVar16;
    local_300.DataPtr = (TTypedElementInternalData<void> *)0x0;
    *(TTypedElementInternalData<void> **)
     &local_3e8.Data[(longlong)(int)(uint)local_3e0 * 0x10].field_0x0 = pTVar4;
    *(undefined4 *)(local_3e8.Data + (longlong)(int)(uint)local_3e0 * 0x10 + 8) = 0xffffffff;
    local_3e0._0_4_ = uVar17;
  } while ((int)uVar16 < 1000000);
  QueryPerformanceCounter(&local_368);
  dVar25 = (double)local_368.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar26;
  *local_270.Timer.Accumulator = (dVar25 - local_270.Timer.StartTime) + *local_270.Timer.Accumulator
  ;
  local_270.Timer.StartTime = dVar25;
  FOutputDevice::LogfImpl(local_270.Device,L"%s: %f secs");
  if (local_270.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Msg.Data.AllocatorInstance.Data);
  }
  pFVar12 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_c8,L"Appending %d typed handles to list");
  FScopedDurationTimeLogger::FScopedDurationTimeLogger
            (&local_240,&local_c8,(FOutputDevice *)pFVar12);
  if ((local_108.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar17 = (uint)local_3d0 + (uint)local_3e0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reserve
            (&(local_108.Object)->ElementCombinedIds,uVar17);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &((local_108.Object)->ElementHandles).ArrayMax;
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&((local_108.Object)->ElementHandles).AllocatorInstance,
               ((local_108.Object)->ElementHandles).ArrayNum,piVar1);
  }
  if ((local_108.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar17 = (uint)local_3d0;
  local_388 = (TTypedElementOwner<FTestTypedElementData> *)local_3d8.Data;
  if (((int)(uint)local_3d0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uStack_380 = uVar17;
  local_b8._12_4_ = uStack_37c;
  local_b8.ArrayNum = uVar17;
  local_b8.DataPtr = local_388;
  TTypedElementList<FTypedElementHandle>::Append<FTestTypedElementData>(local_108.Object,&local_b8);
  if ((local_108.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar17 = (uint)local_3e0;
  local_388 = (TTypedElementOwner<FTestTypedElementData> *)local_3e8.Data;
  if (((int)(uint)local_3e0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uStack_380 = uVar17;
  local_a8._12_4_ = uStack_37c;
  local_a8.ArrayNum = uVar17;
  local_a8.DataPtr = (TTypedElementOwner<void> *)local_388;
  TTypedElementList<FTypedElementHandle>::Append<void>(local_108.Object,&local_a8);
  QueryPerformanceCounter(&local_360);
  dVar25 = (double)local_360.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar26;
  *local_240.Timer.Accumulator = (dVar25 - local_240.Timer.StartTime) + *local_240.Timer.Accumulator
  ;
  local_240.Timer.StartTime = dVar25;
  FOutputDevice::LogfImpl(local_240.Device,L"%s: %f secs");
  if (local_240.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Msg.Data.AllocatorInstance.Data);
  }
  pFVar12 = GetGlobalLogSingleton();
  if ((local_108.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  ::FString::PrintfImpl(&local_98,L"Finding %d interfaces from list");
  FScopedDurationTimeLogger::FScopedDurationTimeLogger
            (&local_2d0,&local_98,(FOutputDevice *)pFVar12);
  iVar2 = ((local_108.Object)->ElementHandles).ArrayNum;
  pFVar20 = (FTypedElementHandle *)((local_108.Object)->ElementHandles).AllocatorInstance.Data;
  pFVar22 = pFVar20 + iVar2;
  local_358 = this_00;
  while( true ) {
    if (((local_108.Object)->ElementHandles).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((pFVar20 == pFVar22) ||
       ((pFVar20->DataPtr != (FTypedElementInternalData *)0x0 &&
        (bVar7 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTypedElementRegistryPerfTest::RunTest'::__l12::<lambda_1>,bool,FTypedElementHandle_const_&>
                 ::Call(&local_358,pFVar20), !bVar7)))) break;
    pFVar20 = pFVar20 + 1;
  }
  QueryPerformanceCounter(&local_350);
  dVar25 = (double)local_350.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar26;
  *local_2d0.Timer.Accumulator = (dVar25 - local_2d0.Timer.StartTime) + *local_2d0.Timer.Accumulator
  ;
  local_2d0.Timer.StartTime = dVar25;
  FOutputDevice::LogfImpl(local_2d0.Device,L"%s: %f secs");
  if (local_2d0.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Msg.Data.AllocatorInstance.Data);
  }
  pFVar12 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_88,L"Finding %d elements from list");
  FScopedDurationTimeLogger::FScopedDurationTimeLogger
            (&local_1e0,&local_88,(FOutputDevice *)pFVar12);
  iVar2 = ((local_108.Object)->ElementHandles).ArrayNum;
  pFVar20 = (FTypedElementHandle *)((local_108.Object)->ElementHandles).AllocatorInstance.Data;
  pFVar22 = pFVar20 + iVar2;
  local_348 = this_00;
  while( true ) {
    if (((local_108.Object)->ElementHandles).ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if ((pFVar20 == pFVar22) ||
       ((pFVar20->DataPtr != (FTypedElementInternalData *)0x0 &&
        (bVar7 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTypedElementRegistryPerfTest::RunTest'::__l13::<lambda_2>,bool,FTypedElementHandle_const_&>
                 ::Call(&local_348,pFVar20), !bVar7)))) break;
    pFVar20 = pFVar20 + 1;
  }
  QueryPerformanceCounter(&local_340);
  dVar25 = (double)local_340.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar26;
  *local_1e0.Timer.Accumulator = (dVar25 - local_1e0.Timer.StartTime) + *local_1e0.Timer.Accumulator
  ;
  local_1e0.Timer.StartTime = dVar25;
  FOutputDevice::LogfImpl(local_1e0.Device,L"%s: %f secs");
  if (local_1e0.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Msg.Data.AllocatorInstance.Data);
  }
  pFVar12 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_78,L"Enumerating %d elements in list");
  FScopedDurationTimeLogger::FScopedDurationTimeLogger
            (&local_1b0,&local_78,(FOutputDevice *)pFVar12);
  local_2d8 = &local_338;
  local_2e0 = UE::Core::Private::Function::
              TFunctionRefCaller<`FTypedElementRegistryPerfTest::RunTest'::__l14::<lambda_3>,bool,TTypedElement<ITestTypedElementInterfaceA>_const_&>
              ::Call;
  local_338 = this_00;
  TTypedElementList<FTypedElementHandle>::ForEachElement<ITestTypedElementInterfaceA>
            (local_108.Object,
             (TFunctionRef<bool___cdecl(TTypedElement<ITestTypedElementInterfaceA>_const_&)> *)
             &local_2e0);
  QueryPerformanceCounter(&local_330);
  dVar25 = (double)local_330.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar26;
  *local_1b0.Timer.Accumulator = (dVar25 - local_1b0.Timer.StartTime) + *local_1b0.Timer.Accumulator
  ;
  local_1b0.Timer.StartTime = dVar25;
  FOutputDevice::LogfImpl(local_1b0.Device,L"%s: %f secs");
  if (local_1b0.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Msg.Data.AllocatorInstance.Data);
  }
  pFVar12 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_120,L"Reset %d elements in list");
  FScopedDurationTimeLogger::FScopedDurationTimeLogger
            (&local_180,&local_120,(FOutputDevice *)pFVar12);
  local_308.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3b8 = (TTypedElementList<FTypedElementHandle> *)0x0;
  local_310 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_3b0,&local_308);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.ReferenceController);
  QueryPerformanceCounter(&local_328);
  dVar25 = (double)local_328.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar26;
  *local_180.Timer.Accumulator = (dVar25 - local_180.Timer.StartTime) + *local_180.Timer.Accumulator
  ;
  local_180.Timer.StartTime = dVar25;
  FOutputDevice::LogfImpl(local_180.Device,L"%s: %f secs");
  if (local_180.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Msg.Data.AllocatorInstance.Data);
  }
  pFVar12 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(local_68,L"Destroying %d typed handles");
  FScopedDurationTimeLogger::FScopedDurationTimeLogger(&local_150,local_68,(FOutputDevice *)pFVar12)
  ;
  uVar17 = (uint)local_3d0;
  uVar13 = (ulonglong)(int)(uint)local_3d0;
  pTVar23 = (TTypedElementOwner<FTestTypedElementData> *)(local_3d8.Data + uVar13 * 0x10);
  FVar21.Data = local_3d8.Data;
  while( true ) {
    if ((uint)uVar13 != uVar17) {
      local_3c8 = 0;
      `TCheckedPointerIterator<TTypedElementOwner<FTestTypedElementData>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_3c8);
    }
    if ((TTypedElementOwner<FTestTypedElementData> *)FVar21.Data == pTVar23) {
      QueryPerformanceCounter(&local_320);
      dVar25 = (double)local_320.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar26;
      *local_150.Timer.Accumulator =
           (dVar25 - local_150.Timer.StartTime) + *local_150.Timer.Accumulator;
      local_150.Timer.StartTime = dVar25;
      FOutputDevice::LogfImpl(local_150.Device,L"%s: %f secs");
      if (local_150.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Msg.Data.AllocatorInstance.Data);
      }
      if ((int)local_3d0._4_4_ < 0) {
        DestructItems<TTypedElementOwner<FTestTypedElementData>,int>
                  ((TTypedElementOwner<FTestTypedElementData> *)local_3d8.Data,(uint)local_3d0);
        bVar7 = local_3d0._4_4_ != 0;
        local_3d0 = (ulonglong)local_3d0._4_4_ << 0x20;
        if (bVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_3d8,0,(int *)((longlong)&local_3d0 + 4));
        }
      }
      else {
        DestructItems<TTypedElementOwner<FTestTypedElementData>,int>
                  ((TTypedElementOwner<FTestTypedElementData> *)local_3d8.Data,(uint)local_3d0);
        local_3d0 = (ulonglong)local_3d0._4_4_ << 0x20;
      }
      pFVar12 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_f8,L"Destroying %d untyped handles");
      FScopedDurationTimeLogger::FScopedDurationTimeLogger
                (&local_210,&local_f8,(FOutputDevice *)pFVar12);
      uVar17 = (uint)local_3e0;
      uVar13 = (ulonglong)(int)(uint)local_3e0;
      pTVar24 = (TTypedElementOwner<void> *)(local_3e8.Data + uVar13 * 0x10);
      FVar21.Data = local_3e8.Data;
      while( true ) {
        if ((uint)uVar13 != uVar17) {
          local_3c7[0] = 0;
          `TCheckedPointerIterator<TTypedElementOwner<void>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_3c7);
        }
        if ((TTypedElementOwner<void> *)FVar21.Data == pTVar24) break;
        pFVar15 = (FTypedElementId *)&((TTypedElementOwner<void> *)FVar21.Data)->DataPtr->field_0x8;
        if (((TTypedElementOwner<void> *)FVar21.Data)->DataPtr ==
            (TTypedElementInternalData<void> *)0x0) {
          pFVar15 = &FTypedElementId::Unset;
        }
        pFVar14 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                            (this_00,(pFVar15->field0_0x0)._s_0.TypeId);
        if ((pFVar14 == (FRegisteredElementType *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RegisteredElementType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                               ,0x229,L"Element type ID \'%d\' has not been registered!"), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pTVar4 = ((TTypedElementOwner<void> *)FVar21.Data)->DataPtr;
        pFVar15 = (FTypedElementId *)&pTVar4->field_0x8;
        if (pTVar4 == (TTypedElementInternalData<void> *)0x0) {
          pFVar15 = &FTypedElementId::Unset;
        }
        (**(code **)(pFVar14->_padding_ + 0x10))(pFVar14,pFVar15->field0_0x0 & 0xffffff,pTVar4,1);
        ((TTypedElementOwner<void> *)FVar21.Data)->ReferenceId = -1;
        ((TTypedElementOwner<void> *)FVar21.Data)->DataPtr = (TTypedElementInternalData<void> *)0x0;
        FVar21.Data = FVar21.Data + 0x10;
        uVar13 = (ulonglong)(uint)local_3e0;
      }
      QueryPerformanceCounter(&local_318);
      dVar26 = (double)local_318.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar26;
      *local_210.Timer.Accumulator =
           (dVar26 - local_210.Timer.StartTime) + *local_210.Timer.Accumulator;
      local_210.Timer.StartTime = dVar26;
      FOutputDevice::LogfImpl(local_210.Device,L"%s: %f secs");
      if (local_210.Msg.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Msg.Data.AllocatorInstance.Data);
      }
      if ((int)local_3e0._4_4_ < 0) {
        DestructItems<TTypedElementOwner<void>,int>
                  ((TTypedElementOwner<void> *)local_3e8.Data,(uint)local_3e0);
        bVar7 = local_3e0._4_4_ != 0;
        local_3e0 = (ulonglong)local_3e0._4_4_ << 0x20;
        if (bVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_3e8,0,(int *)((longlong)&local_3e0 + 4));
        }
      }
      else {
        DestructItems<TTypedElementOwner<void>,int>
                  ((TTypedElementOwner<void> *)local_3e8.Data,(uint)local_3e0);
        local_3e0 = (ulonglong)local_3e0._4_4_ << 0x20;
      }
      UTypedElementRegistry::ProcessDeferredElementsToDestroy(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_3b0.ReferenceController);
      DestructItems<TTypedElementOwner<void>,int>
                ((TTypedElementOwner<void> *)local_3e8.Data,(uint)local_3e0);
      if ((TTypedElementOwner<void> *)local_3e8.Data != (TTypedElementOwner<void> *)0x0) {
        FMemory::Free(local_3e8.Data);
      }
      DestructItems<TTypedElementOwner<FTestTypedElementData>,int>
                ((TTypedElementOwner<FTestTypedElementData> *)local_3d8.Data,(uint)local_3d0);
      if ((TTypedElementOwner<FTestTypedElementData> *)local_3d8.Data !=
          (TTypedElementOwner<FTestTypedElementData> *)0x0) {
        FMemory::Free(local_3d8.Data);
      }
      return true;
    }
    pFVar15 = (FTypedElementId *)
              &((TTypedElementOwner<FTestTypedElementData> *)FVar21.Data)->DataPtr->_padding_;
    if (((TTypedElementOwner<FTestTypedElementData> *)FVar21.Data)->DataPtr ==
        (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
      pFVar15 = &FTypedElementId::Unset;
    }
    pFVar14 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (this_00,*(uchar *)((longlong)pFVar15 + 3));
    if ((pFVar14 == (FRegisteredElementType *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x229,L"Element type ID \'%d\' has not been registered!"), bVar7))
    break;
    pTVar3 = ((TTypedElementOwner<FTestTypedElementData> *)FVar21.Data)->DataPtr;
    pFVar15 = (FTypedElementId *)&pTVar3->_padding_;
    if (pTVar3 == (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
      pFVar15 = &FTypedElementId::Unset;
    }
    (**(code **)(pFVar14->_padding_ + 0x10))(pFVar14,pFVar15->field0_0x0 & 0xffffff,pTVar3,1);
    ((TTypedElementOwner<FTestTypedElementData> *)FVar21.Data)->ReferenceId = -1;
    ((TTypedElementOwner<FTestTypedElementData> *)FVar21.Data)->DataPtr =
         (TTypedElementInternalData<FTestTypedElementData> *)0x0;
    FVar21.Data = FVar21.Data + 0x10;
    uVar13 = (ulonglong)(uint)local_3d0;
  }
  pcVar5 = (code *)swi(3);
  uVar8 = (*pcVar5)();
  return (bool)uVar8;
}

// GetBeautifiedTestName @ 142c85de0

FString * __thiscall
FTypedElementRegistryPerfTest::GetBeautifiedTestName
          (FTypedElementRegistryPerfTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Runtime.TypedElementRegistry.PerfTest");
  return __return_storage_ptr__;
}

// operator() @ 142c9f6d0

bool __thiscall
`FTypedElementRegistryPerfTest::RunTest'::__l13::<lambda_2>::operator()
          (void *this,FTypedElementHandle *param_1)

{
  uint *puVar1;
  longlong lVar2;
  UTypedElementRegistry *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  code *pcVar4;
  byte bVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  HANDLE *ppvVar9;
  LONG LVar10;
  longlong lVar11;
  uint uVar12;
  TObjectPtr<UClass>_u_0 local_res8;
  TTypedElement<ITestTypedElementInterfaceA> local_48;
  
  this_00 = *(UTypedElementRegistry **)this;
  LVar10 = -1;
  local_48._0_8_ = 0;
  local_48._8_4_ = -1;
  local_48._16_8_ = 0;
  local_res8.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITestTypedElementInterfaceA>
            (this_00,param_1,(TSubclassOf<UInterface> *)&local_res8.ObjectPtr,&local_48);
  uVar6 = local_48._8_4_;
  if (local_48._0_8_ != 0) {
    LOCK();
    *(int *)(local_48._0_8_ + 0xc) = *(int *)(local_48._0_8_ + 0xc) + -1;
    UNLOCK();
    lpCriticalSection = *(LPCRITICAL_SECTION *)(local_48._0_8_ + 0x10);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      lVar11 = (longlong)(int)local_48._8_4_;
      if (local_48._8_4_ != -1) {
        EnterCriticalSection(lpCriticalSection);
        p_Var3 = lpCriticalSection[1].DebugInfo;
        bVar5 = (byte)uVar6 & 0x1f;
        uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        if (((int)uVar6 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar6)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        lVar2 = (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4;
        ppvVar9 = (HANDLE *)lpCriticalSection[1].SpinCount;
        if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
          ppvVar9 = &lpCriticalSection[1].OwningThread;
        }
        if ((*(uint *)((longlong)ppvVar9 + lVar2) & uVar12) == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        if (lpCriticalSection[2].RecursionCount != 0) {
          *(undefined4 *)((longlong)lpCriticalSection[2].LockCount * 0x108 + (longlong)p_Var3) =
               uVar6;
        }
        *(undefined4 *)(lVar11 * 0x108 + (longlong)p_Var3) = 0xffffffff;
        if (0 < lpCriticalSection[2].RecursionCount) {
          LVar10 = lpCriticalSection[2].LockCount;
        }
        *(LONG *)(lVar11 * 0x108 + 4 + (longlong)p_Var3) = LVar10;
        lpCriticalSection[2].RecursionCount = lpCriticalSection[2].RecursionCount + 1;
        lpCriticalSection[2].LockCount = uVar6;
        if (((int)uVar6 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar6)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        ppvVar9 = (HANDLE *)lpCriticalSection[1].SpinCount;
        if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
          ppvVar9 = &lpCriticalSection[1].OwningThread;
        }
        puVar1 = (uint *)((longlong)ppvVar9 + lVar2);
        *puVar1 = *puVar1 & ~uVar12;
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return true;
}

