// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147154e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147154fc4) */
/* WARNING: Removing unreachable block (ram,0x0001471550c8) */
/* WARNING: Removing unreachable block (ram,0x00014715526d) */
/* WARNING: Removing unreachable block (ram,0x0001471553b5) */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Relations::FDestructionPolicy::InstantTest(FDestructionPolicy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TNotNull<UScriptStruct_*> this_00;
  TNotNull<UScriptStruct_*> *pTVar4;
  FRoleTraits *pFVar5;
  FMassEntityManager *pFVar6;
  undefined1 auStackY_2b8 [32];
  bool local_288;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_280;
  uint local_270;
  undefined4 local_26c;
  uint local_268;
  undefined4 local_264;
  uint local_260;
  undefined4 local_25c;
  uint local_258;
  undefined4 local_254;
  uint local_250;
  UScriptStruct *local_248;
  TNotNull<UScriptStruct_*> *local_240;
  FTypeManager *local_238;
  FMassEntityManager *local_230;
  undefined4 local_228;
  undefined4 local_224;
  FMassEntityHandle *local_220;
  FMassEntityHandle *local_218;
  FMassEntityHandle *local_210;
  FMassEntityHandle local_208;
  FMassEntityHandle local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  FMassEntityHandle *local_1f0;
  FMassEntityHandle *local_1e8;
  FMassEntityHandle *local_1e0;
  FMassEntityHandle local_1d8;
  FMassEntityHandle local_1d0;
  undefined1 local_1c8 [32];
  FMassEntityHandle local_1a8;
  FName local_1a0;
  UScriptStruct *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  FMassEntityHandle *local_188;
  FMassEntityHandle *local_180;
  FMassEntityHandle *local_178;
  FMassEntityHandle local_170;
  FMassEntityManager *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  FMassEntityHandle *local_158;
  FMassEntityHandle *local_150;
  FWeakObjectPtr local_148;
  FMassEntityHandle local_140;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  ForAnyElementType local_128;
  FMassArchetypeHandle local_120;
  FString local_110;
  TNotNull<UScriptStruct_*> local_100;
  undefined1 local_f8 [8];
  FName local_f0;
  undefined1 local_e8 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_e0;
  FRelationTypeTraits local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_120,(FMassArchetypeHandle *)&this->field_0x60);
  local_128.Data = (FScriptContainerElement *)&local_f0;
  ::FName::FName((FName *)local_128.Data,"DestroyChildOnParentDestruction");
  this_00 = FRelationTestBase::MakeRelationType((FName)local_e8);
  local_248 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__(this_00.Val);
  local_240 = &local_100;
  pTVar4 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                     (local_240,&local_248);
  FRelationTestBase::CreateRelationTypeDescription(&local_c8,pTVar4->Val);
  pFVar5 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&local_c8.RoleTraits,1);
  pFVar5->DestructionPolicy = Destroy;
  pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_238 = FMassEntityManager::GetTypeManager(pFVar6);
  FTypeManager::RegisterType(local_238,(FRelationTypeTraits *)local_1c8);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_280.AllocatorInstance);
  local_280.ArrayNum = 0;
  local_280.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_280.AllocatorInstance);
  local_230 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities(local_230,&local_e0,&local_120,2,&local_280);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_e0);
  local_198 = *(UScriptStruct **)&this->field_0xa8;
  local_26c = 1;
  local_270 = (uint)(0 < local_280.ArrayNum);
  if (local_270 == 0) {
    local_228 = 0;
    local_224 = 0;
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
  local_220 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_218 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_210 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_208 = *(FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_264 = 1;
  local_268 = (uint)(1 < local_280.ArrayNum);
  local_200 = local_208;
  local_1c8._24_8_ = local_208;
  if (local_268 == 0) {
    local_1f8 = 0;
    local_1f4 = 0;
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
  local_1f0 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_1e8 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_1e0 = (FMassEntityHandle *)(local_280.AllocatorInstance.Data + 8);
  local_1d8 = *local_1e0;
  local_1c8._8_8_ = local_1c8._0_8_;
  local_1c8._16_8_ = local_1c8._0_8_;
  local_1a0.ComparisonIndex.Value = local_1c8._0_4_;
  local_1a0.Number = local_1c8._4_4_;
  local_1d0 = local_1d8;
  local_1a8 = local_1d8;
  FRelationManager::CreateRelationInstance
            ((FRelationManager *)local_198,(FTypeHandle)local_f8,(FMassEntityHandle)local_1c8._0_8_,
             local_1d8);
  pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar6);
  local_168 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_25c = 1;
  local_260 = (uint)(0 < local_280.ArrayNum);
  if (local_260 == 0) {
    local_190._0_1_ = CleanUp;
    local_190._1_1_ = false;
    local_190._2_1_ = No;
    local_190._3_1_ = 0;
    local_18c = 0;
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
  local_188 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_180 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_178 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_170 = *(FMassEntityHandle *)local_280.AllocatorInstance.Data;
  FMassEntityManager::DestroyEntity(local_168,local_170);
  pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar6);
  local_130 = (FWeakObjectPtr)FAITestBase::GetTestRunner((FAITestBase *)this);
  local_138 = (FWeakObjectPtr)
              TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_254 = 1;
  local_258 = (uint)(1 < local_280.ArrayNum);
  if (local_258 == 0) {
    local_160 = 0;
    local_15c = 0;
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
  local_158 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_150 = (FMassEntityHandle *)local_280.AllocatorInstance.Data;
  local_148 = (FWeakObjectPtr)((longlong)local_280.AllocatorInstance.Data + 8);
  local_140 = *(FMassEntityHandle *)local_148;
  local_288 = FMassEntityManager::IsEntityActive((FMassEntityManager *)local_138,local_140);
  local_288 = !local_288;
  ::FString::FString(&local_110,"Destroying the parent destroys the child.");
  bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)local_130,&local_110,local_288);
  local_250 = (uint)!bVar2;
  ::FString::~FString(&local_110);
  bVar2 = bVar2;
  if (bVar2) {
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_280);
    ::FString::~FString(&local_c8.DebugInFix);
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                *)&local_c8.RegisterObserversDelegate);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_120);
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_280);
    ::FString::~FString(&local_c8.DebugInFix);
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                *)&local_c8.RegisterObserversDelegate);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_120);
  }
  return bVar2;
}

