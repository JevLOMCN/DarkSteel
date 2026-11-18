// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148334360

EAutomationTestFlags __thiscall FPhysicsInterfaceTest::GetTestFlags(FPhysicsInterfaceTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148334370

bool __thiscall FPhysicsInterfaceTest::IsStressTest(FPhysicsInterfaceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148334380

uint __thiscall FPhysicsInterfaceTest::GetRequiredDeviceNum(FPhysicsInterfaceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148334390

FString * __thiscall
FPhysicsInterfaceTest::GetTestSourceFileName
          (FPhysicsInterfaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Tests\\PhysicsInterfaceTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1483343c0

int __thiscall FPhysicsInterfaceTest::GetTestSourceFileLine(FPhysicsInterfaceTest *this)

{
  return 9;
}

// GetTests @ 1483343d0

/* WARNING: Removing unreachable block (ram,0x0001483344bd) */
/* WARNING: Removing unreachable block (ram,0x000148334588) */

void __thiscall
FPhysicsInterfaceTest::GetTests
          (FPhysicsInterfaceTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Physics.Interface.ObjectCreation");
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

// RunTest @ 1483345b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPhysicsInterfaceTest::RunTest(FPhysicsInterfaceTest *this,FString *param_1)

{
  undefined1 auStack_c8 [32];
  FSingleParticlePhysicsProxy *local_a8 [2];
  FActorCreationParams local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98.InitialTM.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_98.InitialTM.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_98.InitialTM.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_98.InitialTM.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_98.Scene = (FChaosScene *)0x0;
  local_98.InitialTM.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_98.InitialTM.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_98.bStatic = false;
  local_98.bQueryOnly = false;
  local_98.bEnableGravity = false;
  local_98.bUpdateKinematicFromSimulation = false;
  local_98.bSimulatePhysics = false;
  local_98.bStartAwake = true;
  local_98.DebugName = (char *)0x0;
  FChaosEngineInterface::CreateActor(&local_98,local_a8,(UObject *)0x0);
  FChaosEngineInterface::ReleaseActor(local_a8,(FChaosScene *)0x0,false);
  return true;
}

// GetBeautifiedTestName @ 148334670

FString * __thiscall
FPhysicsInterfaceTest::GetBeautifiedTestName
          (FPhysicsInterfaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Physics.Interface.ObjectCreation");
  return __return_storage_ptr__;
}

