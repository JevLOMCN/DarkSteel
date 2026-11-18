// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 12

// FArchetypeGroup_MultiLevelQueryBase @ 1470f2b80

FArchetypeGroup_MultiLevelQueryBase * __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::FArchetypeGroup_MultiLevelQueryBase
          (FArchetypeGroup_MultiLevelQueryBase *this)

{
  int iVar1;
  
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ = (longlong)&___7FArchetypeGroup_MultiLevelQueryBase_Test_Mass_UE__6B_;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->GroupTypes).AllocatorInstance);
  (this->GroupTypes).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->GroupTypes).AllocatorInstance);
  (this->GroupTypes).ArrayMax = iVar1;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->Entities).AllocatorInstance);
  (this->Entities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->Entities).AllocatorInstance);
  (this->Entities).ArrayMax = iVar1;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->GroupSizes).AllocatorInstance);
  (this->GroupSizes).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->GroupSizes).AllocatorInstance);
  (this->GroupSizes).ArrayMax = iVar1;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->Tests).AllocatorInstance);
  (this->Tests).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->Tests).AllocatorInstance);
  (this->Tests).ArrayMax = iVar1;
  return this;
}

// ~FArchetypeGroup_MultiLevelQueryBase @ 1470f7f90

void __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::~FArchetypeGroup_MultiLevelQueryBase
          (FArchetypeGroup_MultiLevelQueryBase *this)

{
  TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>::
  ~TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>
            (&this->Tests);
  TArray<int_const_,TSizedDefaultAllocator<32>_>::~TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&this->GroupSizes);
  FMassEntityQuery::~FMassEntityQuery(&this->EntityQuery);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->Entities);
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_>::
  ~TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_>(&this->GroupTypes);
  FEntityTestBase::~FEntityTestBase((FEntityTestBase *)this);
  return;
}

// operator() @ 1470ff400

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestRaw'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this_00;
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  this_00 = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)this;
  pTVar1 = FMassExecutionContext::GetEntities(param_1,&local_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FMassEntityHandle_const_,int>_>(this_00,pTVar1);
  return;
}

// operator() @ 1470ffc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::SetUp'::__l5::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  FArchetypeGroup_MultiLevelQueryBase *local_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [32];
  initializer_list<int_const_> local_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_a8;
  initializer_list<int_const_> local_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_88;
  int local_78 [20];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_78[0] = 0;
  local_78[1] = 1;
  local_78[2] = 2;
  local_78[3] = 3;
  local_78[4] = 4;
  local_78[5] = 5;
  local_78[6] = 6;
  local_78[7] = 7;
  local_78[8] = 8;
  local_78[9] = 9;
  local_78[10] = 10;
  local_78[0xb] = 0xb;
  local_78[0xc] = 0xc;
  local_78[0xd] = 0xd;
  local_78[0xe] = 0xe;
  local_78[0xf] = 0xf;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&local_98,local_78,local_78 + 0x10);
  piVar4 = &local_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&local_e8,&local_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&local_88,&local_e8,(TArray<int_const_,TSizedDefaultAllocator<32>_> *)local_d8
                     );
  piVar5 = &local_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (local_d8 + 8),&local_a8);
  _vector_destructor_iterator_
            (&local_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  local_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)this;
  local_f8 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestDefaultOrder
                       (local_f0,param_1,
                        (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(local_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (local_d8 + 8));
  return (bool)local_f8;
}

// AssignGroups @ 147110700

void __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::AssignGroups
          (FArchetypeGroup_MultiLevelQueryBase *this)

{
  TArrayView<FMassEntityHandle,int> *pTVar1;
  longlong lVar2;
  TArrayView<FMassEntityHandle,int> *pTVar3;
  <lambda_1> local_48;
  TArrayView<FMassEntityHandle,int> *local_40;
  TArrayView<FMassEntityHandle,int> local_38;
  TArrayView<FMassEntityHandle,int> local_28;
  
  local_40 = &local_28;
  local_48.__this = this;
  pTVar1 = TArrayView<FMassEntityHandle,int>::
           TArrayView<FMassEntityHandle,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_40,&this->Entities);
  pTVar3 = &local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&pTVar3->DataPtr = *(undefined1 *)&pTVar1->DataPtr;
    pTVar1 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar1->DataPtr + 1);
    pTVar3 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar3->DataPtr + 1);
  }
  `UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::AssignGroups'::__l2::<lambda_1>::
  operator()<_UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::AssignGroups_::__l2::<lambda_1>_&>
            (&local_48,&local_48,0,&local_38);
  return;
}

// InstantTest @ 1471353c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471357e0) */
/* WARNING: Removing unreachable block (ram,0x000147135910) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::InstantTest
          (FArchetypeGroup_MultiLevelQueryBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FArchetypeGroupType FVar4;
  int iVar5;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined4 extraout_var;
  undefined1 auStackY_828 [32];
  bool local_7d8;
  int local_7c8;
  int local_7c0;
  undefined1 local_7bc [4];
  int local_7b8;
  uint local_7b4;
  undefined4 local_7b0;
  uint local_7ac;
  undefined4 local_7a8;
  uint local_7a4;
  uint local_7a0;
  uint local_79c;
  FScriptContainerElement *local_798;
  int local_790;
  uint local_78c;
  uint local_788;
  uint local_784;
  uint local_780;
  uint local_77c;
  FArchetypeGroupType local_778;
  FArchetypeGroupType local_774;
  int local_770;
  int local_76c;
  int local_768;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_760;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_758;
  TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_> *local_750;
  FScriptContainerElement *local_748;
  FString *local_740;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_738;
  int local_728;
  wchar_t *local_720;
  FScriptContainerElement *local_718;
  FScriptContainerElement *local_710;
  FScriptContainerElement *local_708;
  FScriptContainerElement *local_700;
  FName local_6f8;
  FName local_6f0;
  FMassEntityManager *local_6e8;
  FScriptContainerElement *local_6e0;
  FScriptContainerElement *local_6d8;
  FScriptContainerElement *local_6d0;
  FScriptContainerElement *local_6c8;
  FScriptContainerElement *local_6c0;
  FScriptContainerElement *local_6b8;
  undefined4 local_6b0;
  undefined4 local_6ac;
  FScriptContainerElement *local_6a8;
  FScriptContainerElement *local_6a0;
  FScriptContainerElement *local_698;
  longlong local_690;
  longlong local_688;
  FScriptContainerElement *local_680;
  FScriptContainerElement *local_678;
  FScriptContainerElement *local_670;
  undefined4 *local_668;
  undefined4 local_660;
  undefined4 local_65c;
  FScriptContainerElement *local_658;
  FScriptContainerElement *local_650;
  FScriptContainerElement *local_648;
  undefined4 local_640;
  undefined4 local_63c;
  FScriptContainerElement *local_638;
  FScriptContainerElement *local_630;
  FScriptContainerElement *local_628;
  FAutomationTestBase *local_620;
  FMassEntityManager *local_618;
  FMassEntityManager *local_610;
  undefined4 local_608;
  undefined4 local_604;
  FScriptContainerElement *local_600;
  FScriptContainerElement *local_5f8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_5f0;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_5e8;
  undefined1 local_5e0 [8];
  FString local_5d8;
  FString local_5c8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_5b8;
  FMassExecutionContext local_5a8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_828;
  local_76c = (this->GroupSizes).ArrayNum;
  local_7c8 = 0;
  local_768 = local_76c;
  do {
    if (local_768 <= local_7c8) {
      local_620 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_760 = &this->GroupTypes;
      local_7b0 = 1;
      local_7b4 = (uint)(1 < (this->GroupTypes).ArrayNum);
      if (local_7b4 == 0) {
        local_660 = 0;
        local_65c = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_658 = (local_760->AllocatorInstance).Data;
      local_648 = local_658 + 4;
      local_78c = *(uint *)local_648;
      local_758 = &this->GroupTypes;
      local_7a8 = 1;
      local_7ac = (uint)(0 < (this->GroupTypes).ArrayNum);
      local_788 = local_78c;
      local_778.Identifier = local_78c;
      local_650 = local_658;
      if (local_7ac == 0) {
        local_640 = 0;
        local_63c = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_638 = (local_758->AllocatorInstance).Data;
      local_784 = *(uint *)local_638;
      local_780 = local_784;
      local_77c = local_784;
      local_774.Identifier = local_784;
      local_630 = local_638;
      local_628 = local_638;
      ::FString::FString(&local_5d8,
                         L"Two differently named group types are not expected to be equal");
      bVar2 = FTestHelpers::
              TestNotEqual<UE::Mass::FArchetypeGroupType,UE::Mass::FArchetypeGroupType>
                        (&local_5d8,local_774,local_778,local_620);
      local_7a4 = (uint)!bVar2;
      ::FString::~FString(&local_5d8);
      if (!bVar2) {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_7d8 = false;
      }
      else {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_738.AllocatorInstance);
        local_738.ArrayNum = 0;
        local_738.ArrayMax =
             TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                       (&local_738.AllocatorInstance);
        local_618 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
        FMassEntityManager::BatchCreateEntities
                  (local_618,&local_5b8,(FMassArchetypeHandle *)&this->_padding_,0x10,
                   &this->Entities);
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_5b8);
        (**(code **)(this->_padding_ + 0x40))(this);
        local_610 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
        FMassEntityManager::CreateExecutionContext(local_610,&local_5a8,0.0);
        local_7c0 = 0;
        local_7d8 = true;
        while ((local_7d8 != false && (local_770 = (this->Tests).ArrayNum, local_7c0 < local_770)))
        {
          local_750 = &this->Tests;
          local_79c = (uint)(-1 < local_7c0);
          bVar2 = local_7c0 < (this->Tests).ArrayNum;
          local_7a0 = (uint)bVar2;
          if (-1 >= local_7c0 || !bVar2) {
            local_608 = 0;
            local_604 = 0;
            Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_600 = (local_750->AllocatorInstance).Data;
          local_5f0 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
                       *)(local_600 + (longlong)local_7c0 * 0x30);
          local_7c0 = local_7c0 + 1;
          local_5f8 = local_600;
          local_5e8 = local_5f0;
          local_7d8 = Core::Private::Function::
                      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
                      ::operator()(local_5f0,&local_5a8);
        }
        FMassExecutionContext::~FMassExecutionContext(&local_5a8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_738);
      }
      return local_7d8;
    }
    local_720 = L"TestGroup_%d";
    local_740 = ::FString::Printf<int>
                          (&local_5c8,(TCheckedFormatStringPrivate<wchar_t,int>)0x151551fd8,
                           local_7c8);
    local_790 = (local_740->Data).ArrayNum;
    if (local_790 == 0) {
      local_748 = (FScriptContainerElement *)
                  `FString::operator*'::__l2::<lambda_1>::operator()(local_7bc);
    }
    else {
      local_748 = (local_740->Data).AllocatorInstance.Data;
      local_718 = local_748;
      local_710 = local_748;
      local_708 = local_748;
    }
    local_700 = local_748;
    ::FName::FName(&local_6f8,(wchar_t *)local_748);
    ::FString::~FString(&local_5c8);
    pTVar6 = &this->GroupTypes;
    local_6e8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_6f0 = local_6f8;
    FVar4 = FMassEntityManager::FindOrAddArchetypeGroupType(local_6e8,(FName)local_5e0);
    local_798 = (FScriptContainerElement *)CONCAT44(extraout_var,FVar4.Identifier);
    local_6e0 = (pTVar6->AllocatorInstance).Data;
    local_6d8 = local_6e0;
    local_6d0 = local_6e0;
    if ((local_6e0 <= local_798) &&
       (local_6c8 = (pTVar6->AllocatorInstance).Data, local_6c0 = local_6c8, local_6b8 = local_6c8,
       local_798 < local_6c8 + (longlong)(this->GroupTypes).ArrayMax * 4)) {
      local_6b0 = 0;
      local_6ac = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_690 = (longlong)(this->GroupTypes).ArrayNum;
      local_688 = (longlong)(this->GroupTypes).ArrayMax;
      local_6a8 = (pTVar6->AllocatorInstance).Data;
      local_6a0 = local_6a8;
      local_698 = local_6a8;
      local_680 = local_6a8;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((this->GroupTypes).ArrayNum == (this->GroupTypes).ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar6->AllocatorInstance,&(this->GroupTypes).ArrayMax);
      (this->GroupTypes).ArrayNum = iVar5;
    }
    local_7b8 = (this->GroupTypes).ArrayNum;
    (this->GroupTypes).ArrayNum = (this->GroupTypes).ArrayNum + 1;
    local_678 = (pTVar6->AllocatorInstance).Data;
    local_670 = local_678 + (longlong)local_7b8 * 4;
    local_668 = ::operator_new(4,local_670);
    *local_668 = *(undefined4 *)local_798;
    local_728 = local_7b8;
    local_7c8 = local_7c8 + 1;
  } while( true );
}

// SetUp @ 14719da80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::SetUp
          (FArchetypeGroup_MultiLevelQueryBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TSharedRef<FMassEntityManager,1> *pTVar5;
  undefined1 auStack_178 [32];
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_> *local_128;
  int local_120;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_118;
  int local_110;
  longlong *local_108;
  FMassFragmentRequirements *local_100;
  FMassEntityQuery *local_f8;
  <lambda_1> local_f0;
  <lambda_1> *local_e8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_e0;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_d8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  longlong local_90;
  longlong local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_68;
  TSharedRef<FMassEntityManager,1> local_60;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar2 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar2) {
    local_100 = (FMassFragmentRequirements *)&this->EntityQuery;
    local_108 = &this->_padding_;
    pTVar5 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                       ((TSharedPtr<FMassEntityManager,1> *)local_108,&local_60);
    FMassFragmentRequirements::Initialize(local_100,pTVar5);
    TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_60);
    local_f8 = &this->EntityQuery;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
              ((FMassFragmentRequirements *)local_f8,ReadOnly,All);
    local_128 = &this->Tests;
    local_e8 = &local_f0;
    local_f0.__this = this;
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::SetUp_::__l5::<lambda_1>_>
              ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_48,local_e8);
    local_118 = &local_48;
    local_e0 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
                *)(local_128->AllocatorInstance).Data;
    local_d8 = local_e0;
    local_d0 = local_e0;
    if ((local_e0 <= local_118) &&
       (local_c8 = (local_128->AllocatorInstance).Data, local_c0 = local_c8, local_b8 = local_c8,
       local_118 <
       (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
        *)(local_c8 + (longlong)local_128->ArrayMax * 0x30))) {
      local_b0 = 0;
      local_ac = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_140 = (longlong)local_128->ArrayNum;
      local_148 = (longlong)local_128->ArrayMax;
      local_150 = (local_128->AllocatorInstance).Data;
      local_138 = 0x30;
      local_158 = local_118;
      local_a8 = local_150;
      local_a0 = local_150;
      local_98 = local_150;
      local_90 = local_140;
      local_88 = local_148;
      local_80 = local_150;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (local_128->ArrayNum == local_128->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&local_128->AllocatorInstance,&local_128->ArrayMax);
      local_128->ArrayNum = iVar4;
    }
    local_120 = local_128->ArrayNum;
    local_128->ArrayNum = local_128->ArrayNum + 1;
    local_78 = (local_128->AllocatorInstance).Data;
    local_70 = local_78 + (longlong)local_120 * 0x30;
    local_68 = ::operator_new(0x30,local_70);
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)>
              (local_68,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_48);
    local_110 = local_120;
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
              (&local_48);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// Test1 @ 1471abdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471abe37) */
/* WARNING: Removing unreachable block (ram,0x0001471abf50) */
/* WARNING: Removing unreachable block (ram,0x0001471ac088) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test1
          (FArchetypeGroup_MultiLevelQueryBase *this,FMassExecutionContext *param_1,
          TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  uint local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined4 local_e4;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_e0;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_d8;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FMassEntityQuery *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FMassEntityQuery *local_80;
  undefined4 local_78;
  undefined4 local_74;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FMassEntityQuery *local_58;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  FMassEntityQuery::ResetGrouping(&this->EntityQuery);
  local_a8 = &this->EntityQuery;
  local_e0 = &this->GroupTypes;
  local_f4 = 1;
  local_f8 = (uint)(0 < (this->GroupTypes).ArrayNum);
  if (local_f8 == 0) {
    local_c8 = 0;
    local_c4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_100 = (longlong)local_e0->ArrayNum;
    local_108 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_c0 = (local_e0->AllocatorInstance).Data;
  local_b8 = local_c0;
  local_b0 = local_c0;
  FMassEntityQuery::GroupBy(local_a8,(FArchetypeGroupType)*(uint *)local_c0);
  local_80 = &this->EntityQuery;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
            (&local_48,&DescendingGroupSorter);
  local_d8 = &this->GroupTypes;
  local_ec = 1;
  local_f0 = (uint)(1 < (this->GroupTypes).ArrayNum);
  if (local_f0 == 0) {
    local_a0 = 0;
    local_9c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_100 = (longlong)local_d8->ArrayNum;
    local_108 = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_98 = (local_d8->AllocatorInstance).Data;
  local_88 = local_98 + 4;
  local_90 = local_98;
  FMassEntityQuery::GroupBy(local_80,(FArchetypeGroupType)*(uint *)local_88,&local_48);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&local_48);
  local_58 = &this->EntityQuery;
  local_d0 = &this->GroupTypes;
  local_e4 = 1;
  local_e8 = (uint)(2 < (this->GroupTypes).ArrayNum);
  if (local_e8 == 0) {
    local_78 = 0;
    local_74 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_100 = (longlong)local_d0->ArrayNum;
    local_108 = 2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_70 = (local_d0->AllocatorInstance).Data;
  local_60 = local_70 + 8;
  local_68 = local_70;
  FMassEntityQuery::GroupBy(local_58,(FArchetypeGroupType)*(uint *)local_60);
  bVar2 = TestRaw(this,param_1,param_2);
  return bVar2;
}

// Test2 @ 1471ac1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471ac227) */
/* WARNING: Removing unreachable block (ram,0x0001471ac32b) */
/* WARNING: Removing unreachable block (ram,0x0001471ac462) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test2
          (FArchetypeGroup_MultiLevelQueryBase *this,FMassExecutionContext *param_1,
          TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  uint local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined4 local_e4;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_e0;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_d8;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FMassEntityQuery *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FMassEntityQuery *local_80;
  undefined4 local_78;
  undefined4 local_74;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FMassEntityQuery *local_58;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  FMassEntityQuery::ResetGrouping(&this->EntityQuery);
  local_a8 = &this->EntityQuery;
  local_e0 = &this->GroupTypes;
  local_f4 = 1;
  local_f8 = (uint)(0 < (this->GroupTypes).ArrayNum);
  if (local_f8 == 0) {
    local_c8 = 0;
    local_c4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_100 = (longlong)local_e0->ArrayNum;
    local_108 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_c0 = (local_e0->AllocatorInstance).Data;
  local_b8 = local_c0;
  local_b0 = local_c0;
  FMassEntityQuery::GroupBy(local_a8,(FArchetypeGroupType)*(uint *)local_c0);
  local_80 = &this->EntityQuery;
  local_d8 = &this->GroupTypes;
  local_ec = 1;
  local_f0 = (uint)(1 < (this->GroupTypes).ArrayNum);
  if (local_f0 == 0) {
    local_a0 = 0;
    local_9c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_100 = (longlong)local_d8->ArrayNum;
    local_108 = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_98 = (local_d8->AllocatorInstance).Data;
  local_88 = local_98 + 4;
  local_90 = local_98;
  FMassEntityQuery::GroupBy(local_80,(FArchetypeGroupType)*(uint *)local_88);
  local_58 = &this->EntityQuery;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
            (&local_48,&DescendingGroupSorter);
  local_d0 = &this->GroupTypes;
  local_e4 = 1;
  local_e8 = (uint)(2 < (this->GroupTypes).ArrayNum);
  if (local_e8 == 0) {
    local_78 = 0;
    local_74 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_100 = (longlong)local_d0->ArrayNum;
    local_108 = 2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_70 = (local_d0->AllocatorInstance).Data;
  local_60 = local_70 + 8;
  local_68 = local_70;
  FMassEntityQuery::GroupBy(local_58,(FArchetypeGroupType)*(uint *)local_60,&local_48);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&local_48);
  bVar2 = TestRaw(this,param_1,param_2);
  return bVar2;
}

// Test3 @ 1471ac5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471ac62d) */
/* WARNING: Removing unreachable block (ram,0x0001471ac760) */
/* WARNING: Removing unreachable block (ram,0x0001471ac892) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test3
          (FArchetypeGroup_MultiLevelQueryBase *this,FMassExecutionContext *param_1,
          TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  uint local_128;
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  uint local_118;
  undefined4 local_114;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_110;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_108;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FMassEntityQuery *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FMassEntityQuery *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FMassEntityQuery *local_88;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> local_78;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  FMassEntityQuery::ResetGrouping(&this->EntityQuery);
  local_d8 = &this->EntityQuery;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
            (&local_78,&DescendingGroupSorter);
  local_110 = &this->GroupTypes;
  local_124 = 1;
  local_128 = (uint)(1 < (this->GroupTypes).ArrayNum);
  if (local_128 == 0) {
    local_f8 = 0;
    local_f4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_130 = (longlong)local_110->ArrayNum;
    local_138 = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_f0 = (local_110->AllocatorInstance).Data;
  local_e0 = local_f0 + 4;
  local_e8 = local_f0;
  FMassEntityQuery::GroupBy(local_d8,(FArchetypeGroupType)*(uint *)local_e0,&local_78);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&local_78);
  local_b0 = &this->EntityQuery;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
            (&local_48,&DescendingGroupSorter);
  local_108 = &this->GroupTypes;
  local_11c = 1;
  local_120 = (uint)(0 < (this->GroupTypes).ArrayNum);
  if (local_120 == 0) {
    local_d0 = 0;
    local_cc = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_130 = (longlong)local_108->ArrayNum;
    local_138 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_c8 = (local_108->AllocatorInstance).Data;
  local_c0 = local_c8;
  local_b8 = local_c8;
  FMassEntityQuery::GroupBy(local_b0,(FArchetypeGroupType)*(uint *)local_c8,&local_48);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&local_48);
  local_88 = &this->EntityQuery;
  local_100 = &this->GroupTypes;
  local_114 = 1;
  local_118 = (uint)(2 < (this->GroupTypes).ArrayNum);
  if (local_118 == 0) {
    local_a8 = 0;
    local_a4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_130 = (longlong)local_100->ArrayNum;
    local_138 = 2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_a0 = (local_100->AllocatorInstance).Data;
  local_90 = local_a0 + 8;
  local_98 = local_a0;
  FMassEntityQuery::GroupBy(local_88,(FArchetypeGroupType)*(uint *)local_90);
  bVar2 = TestRaw(this,param_1,param_2);
  return bVar2;
}

// TestDefaultOrder @ 1471ac9c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestDefaultOrder
          (FArchetypeGroup_MultiLevelQueryBase *this,FMassExecutionContext *param_1,
          TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_88 [4];
  uint local_84;
  TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *local_80;
  int local_78;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> local_70;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  FArchetypeGroupType *local_38;
  FArchetypeGroupType *local_30;
  FMassEntityQuery *local_28;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> local_20;
  
  FMassEntityQuery::ResetGrouping(&this->EntityQuery);
  local_80 = &this->GroupTypes;
  local_58 = (local_80->AllocatorInstance).Data;
  local_50 = local_58;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>
            (&local_70,&(this->GroupTypes).ArrayNum,(FArchetypeGroupType *)local_58);
  local_48 = (local_80->AllocatorInstance).Data;
  local_78 = local_80->ArrayNum;
  local_40 = local_48;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>
            (&local_20,&local_80->ArrayNum,
             (FArchetypeGroupType *)(local_48 + (longlong)local_78 * 4));
  while( true ) {
    if (*local_70.CurrentNum != local_70.InitialNum) {
      puVar3 = local_88;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      `TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_88);
    }
    local_88[1] = local_70.Ptr != local_20.Ptr;
    local_84 = (uint)(byte)local_88[1];
    if (!(bool)local_88[1]) break;
    local_38 = local_70.Ptr;
    local_30 = local_70.Ptr;
    local_28 = &this->EntityQuery;
    FMassEntityQuery::GroupBy(local_28,(FArchetypeGroupType)(local_70.Ptr)->Identifier);
    local_70.Ptr = local_70.Ptr + 1;
  }
  bVar1 = TestRaw(this,param_1,param_2);
  return bVar1;
}

// TestRaw @ 1471ad320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471ad487) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestRaw
          (FArchetypeGroup_MultiLevelQueryBase *this,FMassExecutionContext *param_1,
          TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_3d8 [32];
  FScriptContainerElement *local_3b8;
  FScriptContainerElement *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  bool local_388;
  int local_384;
  int local_380;
  char local_37c;
  undefined1 local_37b;
  char local_37a [6];
  int local_374;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_370;
  int local_360;
  int local_358;
  int local_354;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_350;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  uint local_330;
  uint local_32c;
  uint local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  uint local_314;
  int local_310;
  uint local_30c;
  uint local_308;
  uint local_304;
  uint local_300;
  uint local_2fc;
  FScriptContainerElement *local_2f8;
  uint local_2f0;
  undefined4 local_2ec;
  FScriptContainerElement *local_2e8;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_2d0;
  int local_2c8;
  FScriptContainerElement *local_2c0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_2b8;
  int local_2b0;
  int local_2ac;
  TCheckedPointerIterator<int_const_,int,0> local_2a8;
  FMassEntityQuery *local_290;
  undefined4 local_288;
  undefined4 local_284;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  FScriptContainerElement *local_270;
  undefined4 local_268;
  undefined4 local_264;
  longlong local_260;
  longlong local_258;
  int *local_250;
  undefined4 local_248;
  undefined4 local_244;
  FScriptContainerElement *local_240;
  FScriptContainerElement *local_238;
  FMassEntityHandle *local_230;
  FMassEntityHandle local_228;
  FMassEntityHandle local_220;
  undefined4 local_218;
  undefined4 local_214;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FMassEntityHandle *local_200;
  FMassEntityHandle local_1f8;
  FMassEntityHandle local_1f0;
  FMassEntityHandle local_1e8;
  FAutomationTestBase *local_1e0;
  FMassEntityHandle local_1d8;
  FMassEntityHandle local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  int *local_1a8;
  int *local_1a0;
  longlong local_198;
  longlong local_190;
  int *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  longlong local_110;
  longlong local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FMassEntityHandle *local_a8;
  FAutomationTestBase *local_a0;
  int local_98;
  <lambda_1> local_90;
  <lambda_1> *local_88;
  FString local_80;
  FString local_70;
  TCheckedPointerIterator<int_const_,int,0> local_60;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_350.AllocatorInstance);
  local_350.ArrayNum = 0;
  local_350.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_350.AllocatorInstance);
  local_290 = &this->EntityQuery;
  local_90.VerifyEntities = &local_350;
  local_88 = &local_90;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestRaw_::__l2::<lambda_1>_>
            (&local_48,local_88);
  FMassEntityQuery::ForEachEntityChunk(local_290,param_1,&local_48);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  local_2b0 = param_2->ArrayNum;
  if (local_2b0 == 1) {
    for (local_384 = 0; local_2c8 = local_350.ArrayNum, local_384 < local_350.ArrayNum;
        local_384 = local_384 + 1) {
      local_1e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_2b8 = &this->Entities;
      local_2ec = 1;
      local_2f0 = (uint)(0 < param_2->ArrayNum);
      if (local_2f0 == 0) {
        local_288 = 0;
        local_284 = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_3b0 = (FScriptContainerElement *)(longlong)param_2->ArrayNum;
        local_3b8 = (FScriptContainerElement *)0x0;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_2c0 = (param_2->AllocatorInstance).Data;
      local_33c = (uint)(-1 < local_384);
      local_340 = (uint)(local_384 < *(int *)(local_2c0 + 8));
      local_280 = local_2c0;
      local_278 = local_2c0;
      local_270 = local_2c0;
      if (-1 >= local_384 || local_384 >= *(int *)(local_2c0 + 8)) {
        local_268 = 0;
        local_264 = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_3b0 = (FScriptContainerElement *)(longlong)*(int *)(local_2c0 + 8);
        local_3b8 = (FScriptContainerElement *)(longlong)local_384;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_260 = *(longlong *)local_2c0;
      local_250 = (int *)(local_260 + (longlong)local_384 * 4);
      local_360 = *local_250;
      local_334 = (uint)(-1 < local_360);
      bVar2 = local_360 < local_2b8->ArrayNum;
      local_338 = (uint)bVar2;
      local_258 = local_260;
      if (-1 >= local_360 || !bVar2) {
        local_248 = 0;
        local_244 = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_3b0 = (FScriptContainerElement *)(longlong)local_2b8->ArrayNum;
        local_3b8 = (FScriptContainerElement *)(longlong)local_360;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_240 = (local_2b8->AllocatorInstance).Data;
      local_230 = (FMassEntityHandle *)(local_240 + (longlong)local_360 * 8);
      local_228 = *local_230;
      local_32c = (uint)(-1 < local_384);
      local_330 = (uint)(local_384 < local_350.ArrayNum);
      local_238 = local_240;
      local_220 = local_228;
      local_1d8 = local_228;
      if (-1 >= local_384 || local_384 >= local_350.ArrayNum) {
        local_218 = 0;
        local_214 = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_3b0 = (FScriptContainerElement *)(longlong)local_350.ArrayNum;
        local_3b8 = (FScriptContainerElement *)(longlong)local_384;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_210 = local_350.AllocatorInstance.Data;
      local_208 = local_350.AllocatorInstance.Data;
      local_200 = (FMassEntityHandle *)(local_350.AllocatorInstance.Data + (longlong)local_384 * 8);
      local_1f8 = *local_200;
      local_1f0 = local_1f8;
      local_1e8 = local_1f8;
      local_1d0 = local_1f8;
      ::FString::FString(&local_70,"Expected results vs received");
      bVar2 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                        (&local_70,local_1d0,local_1d8,local_1e0);
      local_37c = !bVar2;
      local_328 = (uint)(byte)local_37c;
      ::FString::~FString(&local_70);
      if (local_37c != '\0') {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_37b = 0;
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_350);
        return (bool)local_37b;
      }
    }
  }
  else {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_370.AllocatorInstance);
    local_370.ArrayNum = 0;
    local_370.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_370.AllocatorInstance);
    local_374 = 0;
    for (local_380 = 0; local_2ac = param_2->ArrayNum, local_380 < local_2ac;
        local_380 = local_380 + 1) {
      local_320 = (uint)(-1 < local_380);
      bVar2 = local_380 < param_2->ArrayNum;
      local_324 = (uint)bVar2;
      if (-1 >= local_380 || !bVar2) {
        local_1c8 = 0;
        local_1c4 = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_3b0 = (FScriptContainerElement *)(longlong)param_2->ArrayNum;
        local_3b8 = (FScriptContainerElement *)(longlong)local_380;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_1c0 = (param_2->AllocatorInstance).Data;
      local_2f8 = local_1c0 + (longlong)local_380 * 0x10;
      local_1a8 = *(int **)local_2f8;
      local_1b8 = local_1c0;
      local_1b0 = local_2f8;
      local_1a0 = local_1a8;
      TCheckedPointerIterator<int_const_,int,0>::TCheckedPointerIterator<int_const_,int,0>
                (&local_2a8,(int *)(local_2f8 + 8),local_1a8);
      local_198 = *(longlong *)local_2f8;
      local_2e0 = *(int *)(local_2f8 + 8);
      local_190 = local_198;
      TCheckedPointerIterator<int_const_,int,0>::TCheckedPointerIterator<int_const_,int,0>
                (&local_60,(int *)(local_2f8 + 8),(int *)(local_198 + (longlong)local_2e0 * 4));
      while( true ) {
        if (*local_2a8.CurrentNum != local_2a8.InitialNum) {
          pcVar6 = local_37a;
          for (lVar5 = 1; lVar5 != 0; lVar5 = lVar5 + -1) {
            *pcVar6 = '\0';
            pcVar6 = pcVar6 + 1;
          }
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_37a);
        }
        local_37a[1] = local_2a8.Ptr != local_60.Ptr;
        local_31c = (uint)(byte)local_37a[1];
        if (!(bool)local_37a[1]) break;
        local_188 = local_2a8.Ptr;
        local_358 = *local_2a8.Ptr;
        local_2d0 = &this->Entities;
        local_314 = (uint)(-1 < local_358);
        bVar2 = local_358 < (this->Entities).ArrayNum;
        local_318 = (uint)bVar2;
        if (-1 >= local_358 || !bVar2) {
          local_180 = 0;
          local_17c = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_3b0 = (FScriptContainerElement *)(longlong)local_2d0->ArrayNum;
          local_3b8 = (FScriptContainerElement *)(longlong)local_358;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_178 = (local_2d0->AllocatorInstance).Data;
        local_2e8 = local_178 + (longlong)local_358 * 8;
        local_160 = local_370.AllocatorInstance.Data;
        local_158 = local_370.AllocatorInstance.Data;
        local_150 = local_370.AllocatorInstance.Data;
        local_170 = local_178;
        local_168 = local_2e8;
        if (local_370.AllocatorInstance.Data <= local_2e8) {
          local_148 = local_370.AllocatorInstance.Data;
          local_140 = local_370.AllocatorInstance.Data;
          local_138 = local_370.AllocatorInstance.Data;
          if (local_2e8 < local_370.AllocatorInstance.Data + (longlong)local_370.ArrayMax * 8) {
            local_130 = 0;
            local_12c = 0;
            Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_3a0 = (longlong)local_370.ArrayNum;
            local_3a8 = (longlong)local_370.ArrayMax;
            local_128 = local_370.AllocatorInstance.Data;
            local_120 = local_370.AllocatorInstance.Data;
            local_118 = local_370.AllocatorInstance.Data;
            local_100 = local_370.AllocatorInstance.Data;
            local_398 = 8;
            local_3b0 = local_370.AllocatorInstance.Data;
            local_3b8 = local_2e8;
            local_110 = local_3a0;
            local_108 = local_3a8;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
        }
        if (local_370.ArrayNum == local_370.ArrayMax) {
          local_370.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_370.AllocatorInstance,&local_370.ArrayMax);
        }
        local_310 = local_370.ArrayNum;
        local_f8 = local_370.AllocatorInstance.Data;
        local_f0 = local_370.AllocatorInstance.Data + (longlong)local_370.ArrayNum * 8;
        local_370.ArrayNum = local_370.ArrayNum + 1;
        local_e8 = ::operator_new(8,local_f0);
        *local_e8 = *(undefined8 *)local_2e8;
        local_98 = local_310;
        local_2a8.Ptr = local_2a8.Ptr + 1;
      }
      local_308 = (uint)(-1 < local_380);
      bVar2 = local_380 < param_2->ArrayNum;
      local_30c = (uint)bVar2;
      if (-1 >= local_380 || !bVar2) {
        local_e0 = 0;
        local_dc = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_3b0 = (FScriptContainerElement *)(longlong)param_2->ArrayNum;
        local_3b8 = (FScriptContainerElement *)(longlong)local_380;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_d8 = (param_2->AllocatorInstance).Data;
      local_c8 = local_d8 + (longlong)local_380 * 0x10;
      local_2dc = *(int *)(local_c8 + 8);
      local_2d8 = local_2dc;
      local_d0 = local_d8;
      for (local_354 = 0; local_354 < local_2d8; local_354 = local_354 + 1) {
        local_a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_300 = (uint)(-1 < local_374);
        local_304 = (uint)(local_374 < local_350.ArrayNum);
        if (-1 >= local_374 || local_374 >= local_350.ArrayNum) {
          local_c0 = 0;
          local_bc = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_3b0 = (FScriptContainerElement *)(longlong)local_350.ArrayNum;
          local_3b8 = (FScriptContainerElement *)(longlong)local_374;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_b8 = local_350.AllocatorInstance.Data;
        local_b0 = local_350.AllocatorInstance.Data;
        local_a8 = (FMassEntityHandle *)(local_350.AllocatorInstance.Data + (longlong)local_374 * 8)
        ;
        iVar4 = TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Find(&local_370,local_a8);
        local_388 = iVar4 != -1;
        ::FString::FString(&local_80,"Result in expected set");
        bVar2 = FAutomationTestBase::TestTrue(local_a0,&local_80,local_388);
        local_37a[2] = !bVar2;
        local_2fc = (uint)(byte)local_37a[2];
        ::FString::~FString(&local_80);
        if (local_37a[2] != '\0') {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_37a[3] = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_370);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_350);
          return (bool)local_37a[3];
        }
        local_374 = local_374 + 1;
      }
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&local_370,0);
    }
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_370);
  }
  local_37a[4] = 1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_350);
  return (bool)local_37a[4];
}

