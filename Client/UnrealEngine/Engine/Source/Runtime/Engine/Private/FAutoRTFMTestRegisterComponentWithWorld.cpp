// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487ecd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
_anon_689E48D4::FAutoRTFMTestRegisterComponentWithWorld::Run
          (FAutoRTFMTestRegisterComponentWithWorld *this,UWorld *param_1,UAutoRTFMTestLevel *param_2
          ,AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UAutoRTFMTestBodySetup *pUVar7;
  undefined8 *puVar8;
  FKSphereElem local_58;
  
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UAutoRTFMTestBodySetup>(pUVar6);
  local_58._padding_._0_1_ = (byte)local_58._padding_ | 1;
  local_58._padding_._0_4_ = 0;
  local_58._padding_._4_4_ = 0;
  plVar1 = &pUVar7->_padding_;
  local_58._padding_._1_1_ = 3;
  param_4->BodySetup = (UBodySetup *)pUVar7;
  local_58._padding_._0_4_ = 0;
  local_58._padding_._4_4_ = 0;
  local_58._padding_ = (longlong)&local_58;
  local_58.Center.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_58.Center.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58._padding_._0_4_ = 6;
  local_58.Center.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_58._padding_ = (longlong)&___7FKSphereElem__6B_;
  local_58.Radius = 1.0;
  if (((FKSphereElem *)*plVar1 <= &local_58) &&
     (&local_58 < (FKSphereElem *)*plVar1 + *(int *)((longlong)&pUVar7->_padding_ + 4))) {
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
  iVar5 = (int)pUVar7->_padding_;
  piVar2 = (int *)((longlong)&pUVar7->_padding_ + 4);
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)plVar1,piVar2);
  }
  *(int *)&pUVar7->_padding_ = iVar5 + 1;
  puVar8 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x50);
  *puVar8 = &___7FKShapeElem__6B_;
  *(undefined4 *)(puVar8 + 1) = (undefined4)local_58._padding_;
  *(ulonglong *)((longlong)puVar8 + 0xc) =
       CONCAT44((undefined4)local_58._padding_,local_58._padding_._4_4_);
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_58._padding_._4_4_;
  *(byte *)(puVar8 + 3) =
       *(byte *)(puVar8 + 3) ^ (*(byte *)(puVar8 + 3) ^ (byte)local_58._padding_) & 1;
  *(undefined1 *)((longlong)puVar8 + 0x19) = local_58._padding_._1_1_;
  *(undefined4 *)(puVar8 + 4) = 6;
  puVar8[5] = puVar8;
  *puVar8 = &___7FKSphereElem__6B_;
  puVar8[6] = local_58.Center.field0_0x0._s_0.X;
  puVar8[7] = local_58.Center.field0_0x0._s_0.Y;
  puVar8[8] = local_58.Center.field0_0x0._s_0.Z;
  *(float *)(puVar8 + 9) = local_58.Radius;
  FKSphereElem::~FKSphereElem(&local_58);
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)param_4,param_1,(FRegisterComponentContext *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Component->IsRegistered()",
             (bool)((byte)param_4->_padding_ & 1));
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)param_4,param_1,(FRegisterComponentContext *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Component->IsRegistered()",
             (bool)((byte)param_4->_padding_ & 1));
  return;
}

