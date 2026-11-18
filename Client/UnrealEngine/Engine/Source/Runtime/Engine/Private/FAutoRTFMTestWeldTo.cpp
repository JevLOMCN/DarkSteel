// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487ed030

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
_anon_689E48D4::FAutoRTFMTestWeldTo::Run
          (FAutoRTFMTestWeldTo *this,UWorld *param_1,UAutoRTFMTestLevel *param_2,
          AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBodyInstance *pFVar5;
  UObject *pUVar6;
  UAutoRTFMTestBodySetup *pUVar7;
  UAutoRTFMTestPrimitiveComponent *pUVar8;
  UAutoRTFMTestPrimitiveComponent *pUVar9;
  undefined8 *puVar10;
  FKSphereElem local_398;
  UAutoRTFMTestBodySetup *local_348 [2];
  FBodyInstance local_338;
  FBodyInstance local_1a8;
  
  UActorComponent::RegisterComponent((UActorComponent *)param_4);
  FBodyInstance::FBodyInstance(&local_338);
  pFVar5 = FBodyInstance::FBodyInstance(&local_1a8);
  FBodyInstance::operator=((FBodyInstance *)&param_4->_padding_,pFVar5);
  FBodyInstance::~FBodyInstance(&local_1a8);
  *(byte *)&param_4->_padding_ = (byte)param_4->_padding_ | 1;
  param_4->_padding_ = (longlong)&local_338;
  bVar3 = UPrimitiveComponent::IsWelded((UPrimitiveComponent *)param_4);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Component->IsWelded()",bVar3);
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UAutoRTFMTestBodySetup>(pUVar6);
  local_398._padding_._0_1_ = (byte)local_398._padding_ | 1;
  local_398._padding_._0_4_ = 0;
  local_398._padding_._4_4_ = 0;
  local_398._padding_ = (longlong)&local_398;
  local_398._padding_._1_1_ = 3;
  local_398.Center.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_398.Center.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_398._padding_._0_4_ = 0;
  local_398._padding_._4_4_ = 0;
  local_398._padding_._0_4_ = 6;
  local_398._padding_ = (longlong)&___7FKSphereElem__6B_;
  local_398.Center.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_398.Radius = 1.0;
  if (((FKSphereElem *)pUVar7->_padding_ <= &local_398) &&
     (&local_398 < (FKSphereElem *)pUVar7->_padding_ + *(int *)((longlong)&pUVar7->_padding_ + 4)))
  {
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
  iVar4 = (int)pUVar7->_padding_;
  piVar1 = (int *)((longlong)&pUVar7->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)&pUVar7->_padding_,piVar1);
  }
  *(int *)&pUVar7->_padding_ = iVar4 + 1;
  puVar10 = (undefined8 *)((longlong)iVar4 * 0x50 + pUVar7->_padding_);
  *puVar10 = &___7FKShapeElem__6B_;
  *(undefined4 *)(puVar10 + 1) = (undefined4)local_398._padding_;
  *(ulonglong *)((longlong)puVar10 + 0xc) =
       CONCAT44((undefined4)local_398._padding_,local_398._padding_._4_4_);
  *(undefined4 *)((longlong)puVar10 + 0x14) = local_398._padding_._4_4_;
  *(byte *)(puVar10 + 3) =
       *(byte *)(puVar10 + 3) ^ (*(byte *)(puVar10 + 3) ^ (byte)local_398._padding_) & 1;
  *(undefined1 *)((longlong)puVar10 + 0x19) = local_398._padding_._1_1_;
  *(undefined4 *)(puVar10 + 4) = 6;
  puVar10[5] = puVar10;
  *puVar10 = &___7FKSphereElem__6B_;
  puVar10[6] = local_398.Center.field0_0x0._s_0.X;
  puVar10[7] = local_398.Center.field0_0x0._s_0.Y;
  puVar10[8] = local_398.Center.field0_0x0._s_0.Z;
  *(float *)(puVar10 + 9) = local_398.Radius;
  FKSphereElem::~FKSphereElem(&local_398);
  local_348[0] = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UAutoRTFMTestBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_4->_padding_,(FObjectPtr)local_348);
  pUVar8 = NewObject<UAutoRTFMTestPrimitiveComponent>((UObject *)param_3);
  pUVar9 = NewObject<UAutoRTFMTestPrimitiveComponent>((UObject *)param_3);
  (**(code **)(param_4->_padding_ + 0x850))(param_4,pUVar8,0,0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  bVar3 = UPrimitiveComponent::IsWelded((UPrimitiveComponent *)param_4);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Component->IsWelded()",bVar3);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"&SomeInstance == Component->BodyInstance.WeldParent",
             &local_338 == (FBodyInstance *)param_4->_padding_);
  (**(code **)(param_4->_padding_ + 0x850))(param_4,pUVar8,0,0);
  bVar3 = UPrimitiveComponent::IsWelded((UPrimitiveComponent *)param_4);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"Component->IsWelded()",bVar3);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"nullptr == Component->BodyInstance.WeldParent",
             param_4->_padding_ == 0);
  (**(code **)(param_4->_padding_ + 0x850))(param_4,pUVar9,0,0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  bVar3 = UPrimitiveComponent::IsWelded((UPrimitiveComponent *)param_4);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"Component->IsWelded()",bVar3);
  (**(code **)(param_4->_padding_ + 0x850))(param_4,pUVar9,0,0);
  bVar3 = UPrimitiveComponent::IsWelded((UPrimitiveComponent *)param_4);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"Component->IsWelded()",bVar3);
  (**(code **)(param_4->_padding_ + 0x860))();
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  bVar3 = UPrimitiveComponent::IsWelded((UPrimitiveComponent *)param_4);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"Component->IsWelded()",bVar3);
  (**(code **)(param_4->_padding_ + 0x860))();
  bVar3 = UPrimitiveComponent::IsWelded((UPrimitiveComponent *)param_4);
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"Component->IsWelded()",bVar3);
  FBodyInstance::~FBodyInstance(&local_338);
  return;
}

