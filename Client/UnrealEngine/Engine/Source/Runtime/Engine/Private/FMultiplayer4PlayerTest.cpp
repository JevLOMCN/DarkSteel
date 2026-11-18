// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// GetTestFlags @ 148868d10

EAutomationTestFlags __thiscall FMultiplayer4PlayerTest::GetTestFlags(FMultiplayer4PlayerTest *this)

{
  return EngineFilter|ClientContext;
}

// GetRequiredDeviceNum @ 148868d20

uint __thiscall FMultiplayer4PlayerTest::GetRequiredDeviceNum(FMultiplayer4PlayerTest *this)

{
  return 2;
}

// GetTestSourceFileName @ 148868d30

FString * __thiscall
FMultiplayer4PlayerTest::GetTestSourceFileName
          (FMultiplayer4PlayerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\NetworkAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148868d60

int __thiscall FMultiplayer4PlayerTest::GetTestSourceFileLine(FMultiplayer4PlayerTest *this)

{
  return 0x1e;
}

// GetTests @ 148868dd0

/* WARNING: Removing unreachable block (ram,0x000148868ebd) */
/* WARNING: Removing unreachable block (ram,0x000148868f88) */

void __thiscall
FMultiplayer4PlayerTest::GetTests
          (FMultiplayer4PlayerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Networking.Multiplayer.TwoPlayerSessionStartupShutdown");
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

// RunTest @ 148868fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FMultiplayer4PlayerTest::RunTest(FMultiplayer4PlayerTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  UEngine *pUVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  FAutomationTestFramework *pFVar9;
  IAutomationNetworkCommand *pIVar10;
  IAutomationNetworkCommand *pIVar11;
  IAutomationNetworkCommand *pIVar12;
  uint uVar13;
  IAutomationNetworkCommand *pIVar15;
  TSharedPtr<IAutomationNetworkCommand,1> local_38;
  TSharedPtr<IAutomationNetworkCommand,1> local_28;
  IAutomationNetworkCommand *pIVar14;
  
  bVar6 = (**(code **)(*(longlong *)this + 8))();
  if (((bVar6 & 0x1f) != 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GetTestFlags() & EAutomationTestFlags_ApplicationContextMask) == EAutomationTestFlags::ClientContext"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\NetworkAutomationTests.cpp"
                         ,0x2a,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if (((GEngine->WorldList).Array.ArrayNum != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine->GetWorldContexts().Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\NetworkAutomationTests.cpp"
                         ,0x2b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pUVar5 = GEngine;
  pIVar15 = (IAutomationNetworkCommand *)0x0;
  if (((GEngine->WorldList).Array.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if ((**(char **)(pUVar5->WorldList).Array.AllocatorInstance.Data != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine->GetWorldContexts()[0].WorldType == EWorldType::Game",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\NetworkAutomationTests.cpp"
                         ,0x2c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pFVar9 = FAutomationTestFramework::Get();
  pIVar10 = ::operator_new(0x20);
  pIVar14 = pIVar15;
  if (pIVar10 != (IAutomationNetworkCommand *)0x0) {
    *(undefined8 *)&pIVar10->field_0x8 = 0;
    *(undefined8 *)&pIVar10->field_0x10 = 0;
    *(undefined ***)pIVar10 = &`FMultiplayer4PlayerTest::RunTest'::`2'::FOpenMap::_vftable_;
    *(atomic<int> *)(pIVar10 + 1) = (atomic<int>)0x0;
    pIVar14 = pIVar10;
  }
  local_38.Object = pIVar14;
  pIVar11 = ::operator_new(0x18);
  pIVar10 = pIVar15;
  if (pIVar11 != (IAutomationNetworkCommand *)0x0) {
    *(atomic<int> *)&pIVar11->field_0x8 = (atomic<int>)0x1;
    *(atomic<int> *)&pIVar11->field_0xc = (atomic<int>)0x1;
    *(undefined ***)pIVar11 =
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<`FMultiplayer4PlayerTest::RunTest'::`2'::FOpenMap,SharedPointerInternals::DefaultDeleter<`FMultiplayer4PlayerTest::RunTest'::`2'::FOpenMap>,1>
          ::_vftable_;
    *(IAutomationNetworkCommand **)&pIVar11->field_0x10 = pIVar14;
    pIVar10 = pIVar11;
  }
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar10;
  if ((pIVar14 != (IAutomationNetworkCommand *)0x0) &&
     (((*(longlong *)&pIVar14->field_0x8 == 0 || (*(longlong *)&pIVar14->field_0x10 == 0)) ||
      (*(int *)(*(longlong *)&pIVar14->field_0x10 + 8) < 1)))) {
    if (pIVar10 != (IAutomationNetworkCommand *)0x0) {
      LOCK();
      *(atomic<int> *)&pIVar10->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pIVar10->field_0x8 + 1);
      UNLOCK();
    }
    *(IAutomationNetworkCommand **)&pIVar14->field_0x8 = pIVar14;
    if (pIVar10 != *(IAutomationNetworkCommand **)&pIVar14->field_0x10) {
      if (pIVar10 != (IAutomationNetworkCommand *)0x0) {
        LOCK();
        *(atomic<int> *)&pIVar10->field_0xc =
             (atomic<int>)((int)*(atomic<int> *)&pIVar10->field_0xc + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pIVar14->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(IAutomationNetworkCommand **)&pIVar14->field_0x10 = pIVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pIVar10);
  }
  FAutomationTestFramework::EnqueueNetworkCommand(pFVar9,&local_38);
  pIVar14 = pIVar15;
  do {
    pFVar9 = FAutomationTestFramework::Get();
    pIVar11 = ::operator_new(0x20);
    pIVar10 = pIVar15;
    if (pIVar11 != (IAutomationNetworkCommand *)0x0) {
      *(undefined8 *)&pIVar11->field_0x8 = 0;
      *(undefined8 *)&pIVar11->field_0x10 = 0;
      *(undefined ***)pIVar11 = &`FMultiplayer4PlayerTest::RunTest'::`25'::FInvitePlayers::_vftable_
      ;
      *(atomic<int> *)(pIVar11 + 1) = SUB84(pIVar14,0);
      pIVar10 = pIVar11;
    }
    local_28.Object = pIVar10;
    pIVar12 = ::operator_new(0x18);
    pIVar11 = pIVar15;
    if (pIVar12 != (IAutomationNetworkCommand *)0x0) {
      *(atomic<int> *)&pIVar12->field_0x8 = (atomic<int>)0x1;
      *(atomic<int> *)&pIVar12->field_0xc = (atomic<int>)0x1;
      *(undefined ***)pIVar12 =
           &SharedPointerInternals::
            TReferenceControllerWithDeleter<`FMultiplayer4PlayerTest::RunTest'::`25'::FInvitePlayers,SharedPointerInternals::DefaultDeleter<`FMultiplayer4PlayerTest::RunTest'::`25'::FInvitePlayers>,1>
            ::_vftable_;
      *(IAutomationNetworkCommand **)&pIVar12->field_0x10 = pIVar10;
      pIVar11 = pIVar12;
    }
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar11;
    if ((pIVar10 != (IAutomationNetworkCommand *)0x0) &&
       (((*(longlong *)&pIVar10->field_0x8 == 0 || (*(longlong *)&pIVar10->field_0x10 == 0)) ||
        (*(int *)(*(longlong *)&pIVar10->field_0x10 + 8) < 1)))) {
      if (pIVar11 != (IAutomationNetworkCommand *)0x0) {
        LOCK();
        *(atomic<int> *)&pIVar11->field_0x8 =
             (atomic<int>)((int)*(atomic<int> *)&pIVar11->field_0x8 + 1);
        UNLOCK();
      }
      *(IAutomationNetworkCommand **)&pIVar10->field_0x8 = pIVar10;
      if (pIVar11 != *(IAutomationNetworkCommand **)&pIVar10->field_0x10) {
        if (pIVar11 != (IAutomationNetworkCommand *)0x0) {
          LOCK();
          *(atomic<int> *)&pIVar11->field_0xc =
               (atomic<int>)((int)*(atomic<int> *)&pIVar11->field_0xc + 1);
          UNLOCK();
        }
        plVar3 = *(longlong **)&pIVar10->field_0x10;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        *(IAutomationNetworkCommand **)&pIVar10->field_0x10 = pIVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pIVar11);
    }
    FAutomationTestFramework::EnqueueNetworkCommand(pFVar9,&local_28);
    uVar13 = (int)SUB84(pIVar14,0) + 1;
    pIVar14 = (IAutomationNetworkCommand *)(ulonglong)uVar13;
  } while ((int)uVar13 < 2);
  return true;
}

// GetBeautifiedTestName @ 1488692c0

FString * __thiscall
FMultiplayer4PlayerTest::GetBeautifiedTestName
          (FMultiplayer4PlayerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Networking.Multiplayer.TwoPlayerSessionStartupShutdown");
  return __return_storage_ptr__;
}

