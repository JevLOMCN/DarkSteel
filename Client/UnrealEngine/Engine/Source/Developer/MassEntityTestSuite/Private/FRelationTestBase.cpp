// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// FRelationTestBase @ 1470f4fd0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FRelationTestBase * __thiscall
UE::Mass::Test::Relations::FRelationTestBase::FRelationTestBase(FRelationTestBase *this)

{
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ = (longlong)&___7FRelationTestBase_Relations_Test_Mass_UE__6B_;
  this->MyRelationType = (UScriptStruct *)0x0;
  this->RelationTraits = (FRelationTypeTraits *)0x0;
  FObjectKey::FObjectKey((FObjectKey *)&this->RelationTypeHandle);
  this->RelationshipManagerPtr = (FRelationManager *)0x0;
  return this;
}

// CreateRelationTypeDescription @ 14711bed0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRelationTypeTraits * __cdecl
UE::Mass::Test::Relations::FRelationTestBase::CreateRelationTypeDescription
          (FRelationTypeTraits *__return_storage_ptr__,TNotNull<UScriptStruct_*> param_1)

{
  TNotNull<UScriptStruct_const_*> *pTVar1;
  FRoleTraits *pFVar2;
  TNotNull<UScriptStruct_*> local_res10 [3];
  TNotNull<UScriptStruct_const_*> local_20;
  FRelationTypeTraits *local_18;
  
  local_res10[0].Val = param_1.Val;
  pTVar1 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (&local_20,local_res10);
  local_18 = Mass::Relations::FRelationTypeTraits::FRelationTypeTraits
                       (__return_storage_ptr__,pTVar1->Val);
  pFVar2 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&__return_storage_ptr__->RoleTraits,1);
  pFVar2->DestructionPolicy = Destroy;
  pFVar2 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&__return_storage_ptr__->RoleTraits,1);
  pFVar2->bExclusive = true;
  pFVar2 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&__return_storage_ptr__->RoleTraits,0);
  pFVar2->DestructionPolicy = CleanUp;
  pFVar2 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&__return_storage_ptr__->RoleTraits,0);
  pFVar2->bExclusive = false;
  __return_storage_ptr__->bHierarchical = true;
  return __return_storage_ptr__;
}

// GetRelationObject @ 1471217f0

/* WARNING: Removing unreachable block (ram,0x0001471218a1) */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall
UE::Mass::Test::Relations::FRelationTestBase::GetRelationObject
          (FRelationTestBase *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  FMassEntityHandle FVar3;
  longlong lVar4;
  FMassEntityHandle *pFVar5;
  FMassEntityHandle in_R8;
  FMassEntityHandle *local_68;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_60;
  FRelationManager *local_50;
  undefined4 local_48;
  undefined4 local_44;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  FScriptContainerElement *local_30;
  FMassEntityHandle local_28;
  FMassEntityHandle local_20;
  FMassEntityHandle *local_18;
  
  if ((this->RelationshipManagerPtr == (FRelationManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RelationshipManagerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassRelationTest.cpp"
                         ,0x52,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FMassEntityHandle)(*pcVar1)();
    return FVar3;
  }
  local_50 = this->RelationshipManagerPtr;
  FRelationManager::GetRelationObjects
            (local_50,&local_60,(FTypeHandle)(this->RelationTypeHandle).TypeKey.ObjectKey,in_R8);
  if (local_60.ArrayNum == 0) {
    pFVar5 = &local_20;
    for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)&pFVar5->Index = 0;
      pFVar5 = (FMassEntityHandle *)((longlong)&pFVar5->Index + 1);
    }
    local_68 = FMassEntityHandle::FMassEntityHandle(&local_20);
  }
  else {
    if (local_60.ArrayNum < 1) {
      local_48 = 0;
      local_44 = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FMassEntityHandle)(*pcVar1)();
        return FVar3;
      }
    }
    local_40 = local_60.AllocatorInstance.Data;
    local_38 = local_60.AllocatorInstance.Data;
    local_30 = local_60.AllocatorInstance.Data;
    local_28 = *(FMassEntityHandle *)local_60.AllocatorInstance.Data;
    local_68 = &local_28;
  }
  local_18 = local_68;
  *(FMassEntityHandle *)param_1 = *local_68;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_60);
  return param_1;
}

// MakeRelationType @ 147192a60

TNotNull<UScriptStruct_*> __cdecl
UE::Mass::Test::Relations::FRelationTestBase::MakeRelationType(FName param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  undefined1 local_e8;
  undefined1 local_e7 [3];
  int local_e4;
  int local_e0;
  UScriptStruct *local_d8;
  FString *local_d0;
  FScriptContainerElement *local_c8;
  FString *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  wchar_t *local_90;
  FScriptContainerElement *local_88;
  wchar_t *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FName local_58;
  UClass *local_50;
  UScriptStruct *local_48;
  code *local_40;
  FName local_38;
  FString local_30;
  FString local_20 [2];
  
  local_d0 = ::FName::ToString(local_res10,local_20);
  local_e4 = (local_d0->Data).ArrayNum;
  if (local_e4 == 0) {
    local_c8 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(&local_e8);
  }
  else {
    local_c8 = (local_d0->Data).AllocatorInstance.Data;
    local_b0 = local_c8;
    local_a8 = local_c8;
    local_a0 = local_c8;
  }
  local_98 = local_c8;
  local_88 = local_c8;
  local_90 = L"Relation_%s";
  local_80 = L"Relation_%s";
  local_c0 = ::FString::Printf<wchar_t_const_*>
                       (&local_30,(TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x151552768,
                        (wchar_t *)local_c8);
  local_e0 = (local_c0->Data).ArrayNum;
  if (local_e0 == 0) {
    local_b8 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(local_e7);
  }
  else {
    local_b8 = (local_c0->Data).AllocatorInstance.Data;
    local_78 = local_b8;
    local_70 = local_b8;
    local_68 = local_b8;
  }
  local_60 = local_b8;
  pFVar1 = ::FName::FName(&local_38,(wchar_t *)local_b8);
  local_58 = *pFVar1;
  local_50 = UScriptStruct::StaticClass();
  local_d8 = NewObject<UScriptStruct>
                       ((UObject *)local_50,local_58,RF_Public,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  ::FString::~FString(&local_30);
  ::FString::~FString(local_20);
  local_40 = *(code **)(local_d8->_padding_ + 800);
  local_48 = FMassRelation::StaticStruct();
  (*local_40)(local_d8,local_48);
  TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*>
            ((TNotNull<UScriptStruct_*> *)param_1,&local_d8);
  return (TNotNull<UScriptStruct_*>)param_1;
}

// SetUp @ 1471a9190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Relations::FRelationTestBase::SetUp(FRelationTestBase *this)

{
  bool bVar1;
  TNotNull<UScriptStruct_*> TVar2;
  UScriptStruct *pUVar3;
  FName *pFVar4;
  TNotNull<UScriptStruct_*> *pTVar5;
  FMassEntityManager *pFVar6;
  FTypeHandle FVar7;
  FRelationTypeTraits *pFVar8;
  FRelationManager *pFVar9;
  undefined1 auStack_168 [32];
  FName *local_148;
  FName *local_140;
  FName local_138;
  UScriptStruct *local_130;
  TNotNull<UScriptStruct_*> *local_128;
  code *local_120;
  FTypeManager *local_118;
  FObjectKey local_110;
  FTypeManager *local_108;
  FName local_100;
  undefined1 local_f8 [8];
  FName local_f0;
  undefined1 local_e8 [8];
  TNotNull<UScriptStruct_*> local_e0;
  undefined1 local_d8 [96];
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
  local_78;
  FString local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar1 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar1) {
    local_148 = &local_100;
    ::FName::FName(local_148,"MyChildOfRelation");
    TVar2 = MakeRelationType((FName)local_f8);
    pUVar3 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__(TVar2.Val);
    this->MyRelationType = pUVar3;
    local_140 = &local_f0;
    pFVar4 = ::FName::FName(local_140,"MyChildOfRelation");
    local_138 = *pFVar4;
    TVar2 = MakeRelationType((FName)local_e8);
    local_130 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__(TVar2.Val);
    local_128 = &local_e0;
    pTVar5 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                       (local_128,&local_130);
    CreateRelationTypeDescription((FRelationTypeTraits *)(local_d8 + 0x10),pTVar5->Val);
    local_120 = *(code **)(this->_padding_ + 0x40);
    (*local_120)(this,local_d8 + 0x10);
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_118 = FMassEntityManager::GetTypeManager(pFVar6);
    FVar7 = FTypeManager::RegisterType(local_118,(FRelationTypeTraits *)local_d8);
    (this->RelationTypeHandle).TypeKey.ObjectKey = *(FObjectKey *)FVar7.TypeKey.ObjectKey;
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_108 = FMassEntityManager::GetTypeManager(pFVar6);
    local_110 = (this->RelationTypeHandle).TypeKey.ObjectKey;
    pFVar8 = FTypeManager::GetRelationTypeChecked(local_108,(FTypeHandle)local_110);
    this->RelationTraits = pFVar8;
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    pFVar9 = FMassEntityManager::GetRelationManager(pFVar6);
    this->RelationshipManagerPtr = pFVar9;
    ::FString::~FString(&local_28);
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              (&local_78);
  }
  bVar1 = FTypeHandle::IsValid(&this->RelationTypeHandle);
  return bVar1;
}

// TweakRelation @ 1471b0a80

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::Relations::FRelationTestBase::TweakRelation
          (FRelationTestBase *this,FRelationTypeTraits *param_1)

{
  return;
}

