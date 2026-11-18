// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 5

// FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> @ 147021730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> * __thiscall
FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::
FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>
          (FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *this)

{
  UMockGameplayTasksComponent **ppUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UMockGameplayTasksComponent *pUVar7;
  FUObjectItem *this_00;
  FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  UMockGameplayTasksComponent **local_d8;
  UMockGameplayTasksComponent **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UMockGameplayTasksComponent *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__FAITest_SimpleComponentBasedTest_VUMockGameplayTasksComponent____6B_;
  (this->Logger).ExpectedValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Logger).ExpectedValues.ArrayNum = 0;
  (this->Logger).ExpectedValues.ArrayMax = 0;
  (this->Logger).LoggedValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Logger).LoggedValues.ArrayNum = 0;
  (this->Logger).LoggedValues.ArrayMax = 0;
  (this->Logger).TestRunner = (FAutomationTestBase *)0x0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UMockGameplayTasksComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = pUVar5;
  pUVar7 = (UMockGameplayTasksComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar7->field_0xc);
  FUObjectItem::SetRootFlags(this_00,RootSet);
  ppUVar1 = (UMockGameplayTasksComponent **)this->_padding_;
  local_a8[0] = pUVar7;
  if ((ppUVar1 <= local_a8) &&
     (lVar10 = (longlong)*(int *)((longlong)&this->_padding_ + 4), local_a8 < ppUVar1 + lVar10)) {
    local_c0 = (longlong)(int)this->_padding_;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = ppUVar1;
    local_c8 = lVar10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar4 = (int)this->_padding_;
  if (iVar4 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(UMockGameplayTasksComponent **)(this->_padding_ + (longlong)iVar4 * 8) = local_a8[0];
  this->Component = pUVar7;
  return this;
}

// ~FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> @ 14704b530

void __thiscall
FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::
~FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>
          (FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *this)

{
  int iVar1;
  FAutomationTestBase *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_18;
  
  this->_padding_ =
       (longlong)&___7__FAITest_SimpleComponentBasedTest_VUMockGameplayTasksComponent____6B_;
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->Logger).ExpectedValues.ArrayNum;
  if ((iVar1 == 0) || (iVar1 == (this->Logger).LoggedValues.ArrayNum)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this->_padding_,L"Not all expected values has been logged",bVar4
            );
  iVar1 = (this->Logger).ExpectedValues.ArrayNum;
  this_00 = (this->Logger).TestRunner;
  if ((iVar1 == 0) || ((this->Logger).LoggedValues.ArrayNum == iVar1)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  ::FString::FString(&local_18,"Not all values expected values have been logged!");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar5.Data,bVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = (this->Logger).LoggedValues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Logger).ExpectedValues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FAITestBase__6B_;
  if ((this->_padding_ & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bTearedDown && \"Super implementation of TearDown not called!\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\AITestsCommon.cpp"
                       ,0x7c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// SetTestRunner @ 147058680

void __thiscall
FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::SetTestRunner
          (FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *this,
          FAutomationTestBase *param_1)

{
  this->_padding_ = (longlong)param_1;
  (this->Logger).TestRunner = param_1;
  return;
}

// SetUp @ 1470586a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::SetUp
          (FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *this)

{
  UWorld *pUVar1;
  
  pUVar1 = FAITestHelpers::GetWorld();
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)this->Component,pUVar1,(FRegisterComponentContext *)0x0);
  return pUVar1 != (UWorld *)0x0;
}

// TickComponent @ 147059c70

void __thiscall
FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::TickComponent
          (FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147059c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Component + 0x410))(this->Component,__real_3d088889,2,0);
  return;
}

