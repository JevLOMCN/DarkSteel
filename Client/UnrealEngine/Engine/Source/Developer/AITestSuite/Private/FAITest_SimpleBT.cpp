// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 4

// ~FAITest_SimpleBT @ 14704b7d0

void __thiscall FAITest_SimpleBT::~FAITest_SimpleBT(FAITest_SimpleBT *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->ExpectedResult).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAITestBase__6B_;
  if ((this->_padding_ & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bTearedDown && \"Super implementation of TearDown not called!\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\AITestsCommon.cpp"
                       ,0x7c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// SetUp @ 147059660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FAITest_SimpleBT::SetUp(FAITest_SimpleBT *this)

{
  int *piVar1;
  UBehaviorTree *pUVar2;
  UBlackboardData *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  UMockAI_BT *pUVar10;
  FUObjectItem *this_00;
  UWorld *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_118 [32];
  UMockAI_BT *local_c8;
  FWeakObjectPtr local_c0;
  UMockAI_BT *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar8 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UMockAI_BT::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = pUVar8;
  pUVar10 = (UMockAI_BT *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar10->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(this_00,RootSet);
  local_c8 = pUVar10;
  if (((UMockAI_BT **)this->_padding_ <= &local_c8) &&
     (&local_c8 < (UMockAI_BT **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  *(UMockAI_BT **)(this->_padding_ + (longlong)iVar7 * 8) = local_c8;
  this->AIBTUser = pUVar10;
  UMockAI_BT::ExecutionLog.ArrayNum = 0;
  if ((UMockAI_BT::ExecutionLog.ArrayMax < 0) && (UMockAI_BT::ExecutionLog.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&UMockAI_BT::ExecutionLog.AllocatorInstance,0,
               &UMockAI_BT::ExecutionLog.ArrayMax);
  }
  pUVar10 = this->AIBTUser;
  if ((pUVar10 == (UMockAI_BT *)0x0) || (pUVar2 = this->BTAsset, pUVar2 == (UBehaviorTree *)0x0)) {
    bVar5 = false;
  }
  else {
    pUVar3 = (pUVar2->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar3 != (UBlackboardData *)0x0) {
      UBlackboardComponent::InitializeBlackboard((UBlackboardComponent *)pUVar10->_padding_,pUVar3);
    }
    UBlackboardComponent::CacheBrainComponent
              ((UBlackboardComponent *)pUVar10->_padding_,
               (UBrainComponent *)(pUVar10->BTComp).field0_0x0.DebugPtr);
    UBrainComponent::CacheBlackboardComponent
              ((UBrainComponent *)(pUVar10->BTComp).field0_0x0.DebugPtr,
               (UBlackboardComponent *)pUVar10->_padding_);
    pUVar11 = FAITestHelpers::GetWorld();
    UActorComponent::RegisterComponentWithWorld
              ((UActorComponent *)pUVar10->_padding_,pUVar11,(FRegisterComponentContext *)0x0);
    UActorComponent::RegisterComponentWithWorld
              ((UActorComponent *)(pUVar10->BTComp).field0_0x0.DebugPtr,pUVar11,
               (FRegisterComponentContext *)0x0);
    UBehaviorTreeComponent::StartTree((pUVar10->BTComp).field0_0x0.DebugPtr,pUVar2,SingleRun);
    local_b8 = this->AIBTUser;
    plVar12 = &local_b8->_padding_;
    if (this->bUseSystemTicking == false) {
      local_c0.ObjectIndex = 0;
      local_c0.ObjectSerialNumber = 0;
      local_b0 = 0;
      FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_b0);
      *plVar12 = (longlong)local_c0;
      bVar5 = true;
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UMockAI_BT *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_b8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)plVar12,(FObjectPtr)&local_b8);
      bVar5 = true;
    }
  }
  return bVar5;
}

// Update @ 14705a510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAITest_SimpleBT::Update(FAITest_SimpleBT *this)

{
  UMockAI_BT *pUVar1;
  UBehaviorTreeComponent *pUVar2;
  char cVar3;
  UWorld *this_00;
  FTimerManager *this_01;
  UBehaviorTree *pUVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      PreviousFramesCounter = GFrameCounter;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (PreviousFramesCounter != GFrameCounter) {
    FAITestHelpers::UpdatesCounter = FAITestHelpers::UpdatesCounter + 1;
    PreviousFramesCounter = GFrameCounter;
  }
  if (this->AIBTUser != (UMockAI_BT *)0x0) {
    this_00 = (UWorld *)(**(code **)this->_padding_)(this);
    this_01 = UWorld::GetTimerManager(this_00);
    if (this_01->LastTickedFrame != GFrameCounter) {
      FTimerManager::Tick(this_01,__real_3d088889);
    }
    if (this->bUseSystemTicking == false) {
      (**(code **)(this->AIBTUser->_padding_ + 0x2b0))(this->AIBTUser,__real_3d088889);
    }
    pUVar1 = this->AIBTUser;
    pUVar2 = (pUVar1->BTComp).field0_0x0.DebugPtr;
    if (pUVar2 != (UBehaviorTreeComponent *)0x0) {
      cVar3 = (**(code **)(pUVar2->_padding_ + 0x530))();
      if (cVar3 != '\0') {
        pUVar4 = UBehaviorTreeComponent::GetRootTree((pUVar1->BTComp).field0_0x0.DebugPtr);
        if (pUVar4 != (UBehaviorTree *)0x0) {
          return false;
        }
      }
    }
  }
  VerifyResults(this);
  return true;
}

// VerifyResults @ 14705a870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAITest_SimpleBT::VerifyResults(FAITest_SimpleBT *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar8 = UMockAI_BT::ExecutionLog._8_8_;
  iVar4 = (this->ExpectedResult).ArrayNum;
  iVar6 = UMockAI_BT::ExecutionLog.ArrayNum;
  if ((iVar4 == iVar6) &&
     ((iVar4 == 0 ||
      (iVar4 = memcmp((this->ExpectedResult).AllocatorInstance.Data,
                      UMockAI_BT::ExecutionLog.AllocatorInstance.Data,(longlong)iVar4 << 2),
      iVar4 == 0)))) {
    return true;
  }
  uVar7 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  uVar9 = uVar7;
  if (0 < iVar6) {
    do {
      uVar5 = 0;
      if ((int)uVar9 < (int)uVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::PrintfImpl(&local_38,L"%d");
      uVar5 = local_38.Data.ArrayNum - 1;
      if (local_38.Data.ArrayNum == 0) {
        uVar5 = 0;
      }
      ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,uVar5);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((int)uVar9 < UMockAI_BT::ExecutionLog.ArrayNum + -1) {
        ::FString::AppendChars(&local_48,L", ",2);
      }
      uVar9 = uVar9 + 1;
      uVar8 = UMockAI_BT::ExecutionLog._8_8_;
    } while ((int)uVar9 < UMockAI_BT::ExecutionLog.ArrayNum);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (0 < (this->ExpectedResult).ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar7 < (this->ExpectedResult).ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::PrintfImpl(&local_28,L"%d");
      uVar9 = local_28.Data.ArrayNum - 1;
      if (local_28.Data.ArrayNum == 0) {
        uVar9 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_28.Data.AllocatorInstance.Data,uVar9);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if ((int)uVar7 < (this->ExpectedResult).ArrayNum + -1) {
        ::FString::AppendChars(&local_58,L", ",2);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->ExpectedResult).ArrayNum);
  }
  if (1 < (byte)LogBehaviorTreeTest._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_bool___cdecl_FAITest_SimpleBT::VerifyResults(void)___ptr64'::__l16::
                LOG_Static,(FLogCategoryBase *)&LogBehaviorTreeTest);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return false;
}

