// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148333c30

EAutomationTestFlags __thiscall
FPhysicsBodyInstanceTest::GetTestFlags(FPhysicsBodyInstanceTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148333c40

bool __thiscall FPhysicsBodyInstanceTest::IsStressTest(FPhysicsBodyInstanceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148333c50

uint __thiscall FPhysicsBodyInstanceTest::GetRequiredDeviceNum(FPhysicsBodyInstanceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148333c60

FString * __thiscall
FPhysicsBodyInstanceTest::GetTestSourceFileName
          (FPhysicsBodyInstanceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Tests\\PhysicsBodyInstanceTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148333cd0

int __thiscall FPhysicsBodyInstanceTest::GetTestSourceFileLine(FPhysicsBodyInstanceTest *this)

{
  return 0xc;
}

// GetTests @ 148333ce0

/* WARNING: Removing unreachable block (ram,0x000148333dcd) */
/* WARNING: Removing unreachable block (ram,0x000148333e98) */

void __thiscall
FPhysicsBodyInstanceTest::GetTests
          (FPhysicsBodyInstanceTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Physics.Interface.BodyInstance");
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

// RunTest @ 148333ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPhysicsBodyInstanceTest::RunTest(FPhysicsBodyInstanceTest *this,FString *param_1)

{
  int iVar1;
  UWorld *this_00;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  FActorSpawnParameters *pFVar6;
  UClass *pUVar7;
  AActor *pAVar8;
  longlong *plVar9;
  undefined1 auStackY_118 [32];
  FSingleParticlePhysicsProxy *local_d8 [2];
  wchar_t *local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  pUVar3 = GEngine;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((GEngine->WorldList).Array.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  this_00 = *(UWorld **)(*(longlong *)(pUVar3->WorldList).Array.AllocatorInstance.Data + 0x2c0);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Tests\\PhysicsBodyInstanceTests.cpp"
                       ,0x11,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar6 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  pUVar7 = Z_Construct_UClass_AStaticMeshActor_NoRegister();
  pAVar8 = UWorld::SpawnActor(this_00,pUVar7,(TVector<double> *)0x0,(TRotator<double> *)0x0,pFVar6);
  if (pAVar8 == (AActor *)0x0) {
LAB_148333fba:
    pAVar8 = (AActor *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_AStaticMeshActor_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pAVar8->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_148333fba;
  }
  if (local_88._64_8_ != 0) {
    plVar9 = (longlong *)(local_88 + 0x50);
    if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_88._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (pAVar8 == (AActor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SMA",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Tests\\PhysicsBodyInstanceTests.cpp"
                       ,0x14,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  plVar9 = (longlong *)pAVar8[1]._padding_;
  if (plVar9 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SMC",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Tests\\PhysicsBodyInstanceTests.cpp"
                       ,0x17,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  uStack_c0._0_4_ = 0;
  uStack_c0._4_4_ = 0;
  local_b8 = L"/Engine/EditorMeshes/EditorCube";
  local_c8 = (wchar_t *)0x0;
  iStack_b0 = 0x1f;
  pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
  local_98._12_4_ = uStack_ac;
  local_98.Size = iStack_b0;
  local_a8.DataPtr = local_c8;
  local_a8.Size = (int)uStack_c0;
  local_a8._12_4_ = uStack_c0._4_4_;
  local_98.DataPtr = local_b8;
  pAVar8 = (AActor *)
           StaticLoadObject(pUVar7,(UObject *)0x0,&local_98,&local_a8,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pAVar8 != (AActor *)0x0) {
    pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pAVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_1483340d5;
  }
  pAVar8 = (AActor *)0x0;
LAB_1483340d5:
  (**(code **)(*plVar9 + 0x5f8))(plVar9,2);
  (**(code **)(*plVar9 + 0x6f0))(plVar9,1);
  (**(code **)(*plVar9 + 0xb28))(plVar9,pAVar8);
  local_d8[0] = FBodyInstance::GetPhysicsActor((FBodyInstance *)(plVar9 + 0x72));
  if (local_d8[0] == (FSingleParticlePhysicsProxy *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPhysicsInterface::IsValid(PH)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Tests\\PhysicsBodyInstanceTests.cpp"
                       ,0x22,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  bVar4 = FChaosEngineInterface::IsRigidBody(local_d8);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPhysicsInterface::IsRigidBody(PH)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Tests\\PhysicsBodyInstanceTests.cpp"
                       ,0x23,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1483341a0

FString * __thiscall
FPhysicsBodyInstanceTest::GetBeautifiedTestName
          (FPhysicsBodyInstanceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Physics.Interface.BodyInstance");
  return __return_storage_ptr__;
}

