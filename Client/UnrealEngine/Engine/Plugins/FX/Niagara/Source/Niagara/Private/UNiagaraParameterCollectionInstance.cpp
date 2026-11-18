// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 57

// StaticClass @ 1492c21d0

UClass * __cdecl UNiagaraParameterCollectionInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterCollectionInstance",
               &Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton,
               StaticRegisterNativesUNiagaraParameterCollectionInstance,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraParameterCollectionInstance>,
               InternalVTableHelperCtorCaller<UNiagaraParameterCollectionInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton;
}

// UNiagaraParameterCollectionInstance @ 1492d32b0

UNiagaraParameterCollectionInstance * __thiscall
UNiagaraParameterCollectionInstance::UNiagaraParameterCollectionInstance
          (UNiagaraParameterCollectionInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraParameterCollectionInstance__6B_;
  (this->Collection).field0_0x0.DebugPtr = (UNiagaraParameterCollection *)0x0;
  (this->OverridenParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverridenParameters).ArrayNum = 0;
  (this->OverridenParameters).ArrayMax = 0;
  FNiagaraParameterStore::FNiagaraParameterStore(&this->ParameterStorage);
  (this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr =
       (UMaterialParameterCollectionInstance *)0x0;
  (this->DirtyParameterLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DirtyScalarParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyScalarParameters).ArrayNum = 0;
  (this->DirtyScalarParameters).ArrayMax = 0;
  (this->DirtyVectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyVectorParameters).ArrayNum = 0;
  (this->DirtyVectorParameters).ArrayMax = 0;
  (this->ScalarParamUpdateDelegate).ID = 0;
  (this->VectorParamUpdateDelegate).ID = 0;
  return this;
}

// UNiagaraParameterCollectionInstance @ 1492d3340

UNiagaraParameterCollectionInstance * __thiscall
UNiagaraParameterCollectionInstance::UNiagaraParameterCollectionInstance
          (UNiagaraParameterCollectionInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraParameterCollectionInstance__6B_;
  (this->Collection).field0_0x0.DebugPtr = (UNiagaraParameterCollection *)0x0;
  (this->OverridenParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverridenParameters).ArrayNum = 0;
  (this->OverridenParameters).ArrayMax = 0;
  FNiagaraParameterStore::FNiagaraParameterStore(&this->ParameterStorage);
  (this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr =
       (UMaterialParameterCollectionInstance *)0x0;
  (this->DirtyParameterLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DirtyScalarParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyScalarParameters).ArrayNum = 0;
  (this->DirtyScalarParameters).ArrayMax = 0;
  (this->DirtyVectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyVectorParameters).ArrayNum = 0;
  (this->DirtyVectorParameters).ArrayMax = 0;
  (this->ScalarParamUpdateDelegate).ID = 0;
  (this->VectorParamUpdateDelegate).ID = 0;
  FNiagaraParameterStore::SetOwner(&this->ParameterStorage,(UObject *)this);
  return this;
}

// ~UNiagaraParameterCollectionInstance @ 1492d4c60

void __thiscall
UNiagaraParameterCollectionInstance::~UNiagaraParameterCollectionInstance
          (UNiagaraParameterCollectionInstance *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7UNiagaraParameterCollectionInstance__6B_;
  pFVar1 = (this->DirtyVectorParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DirtyScalarParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DirtyParameterLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DirtyParameterLock);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore(&this->ParameterStorage);
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)(this->OverridenParameters).AllocatorInstance.Data,
             (this->OverridenParameters).ArrayNum);
  pFVar1 = (this->OverridenParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddParameter @ 1492db050

bool __thiscall
UNiagaraParameterCollectionInstance::AddParameter
          (UNiagaraParameterCollectionInstance *this,FNiagaraVariable *param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)((this->ParameterStorage)._padding_ + 0x10))
                    (&this->ParameterStorage,param_1,1,1,0);
  return (bool)uVar1;
}

// Bind @ 1492db9d0

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

void __thiscall
UNiagaraParameterCollectionInstance::Bind(UNiagaraParameterCollectionInstance *this,UWorld *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  FName *pFVar3;
  UNiagaraParameterCollection *pUVar4;
  UMaterialParameterCollection *pUVar5;
  code *pcVar6;
  FName FVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  UMaterialParameterCollectionInstance *pUVar11;
  FDelegateHandle FVar12;
  UMaterialParameterCollection *pUVar13;
  FNiagaraTypeRegistry *pFVar14;
  FNiagaraTypeDefinition *pFVar15;
  int *piVar16;
  ulonglong uVar17;
  int iVar18;
  ForAnyElementType FVar19;
  int iVar20;
  undefined1 auStack_968 [32];
  undefined1 local_948;
  undefined1 local_947 [7];
  TArray<TTuple<FName,FLinearColor>,TSizedDefaultAllocator<32>_> local_940;
  TArray<TTuple<FName,float>,TSizedDefaultAllocator<32>_> local_930;
  UNiagaraParameterCollectionInstance *local_920;
  UNiagaraParameterCollectionInstance *local_918;
  FName local_910;
  FName local_908;
  FName local_900;
  FName local_8f8;
  int local_8f0;
  FName local_8ec;
  int local_8e4;
  FName local_8e0;
  int local_8d8;
  void *local_8d0;
  undefined8 local_8c8;
  FName local_8c0;
  int local_8b8;
  void *local_8b0;
  undefined8 local_8a8;
  <lambda_1> local_8a0;
  <lambda_2> local_898 [2];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_968;
  pUVar4 = (this->Collection).field0_0x0.DebugPtr;
  if ((pUVar4 != (UNiagaraParameterCollection *)0x0) &&
     (pUVar5 = (pUVar4->SourceMaterialCollection).field0_0x0.DebugPtr,
     pUVar5 != (UMaterialParameterCollection *)0x0)) {
    pUVar11 = UWorld::GetParameterCollectionInstance(param_1,pUVar5);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar11 == (UMaterialParameterCollectionInstance *)0x0)) {
      (this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr = pUVar11;
      if (pUVar11 == (UMaterialParameterCollectionInstance *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
      (this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr = pUVar11;
    }
    local_920 = this;
    FVar12 = TMulticastDelegateRegistration<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy>
             ::AddLambda<_UNiagaraParameterCollectionInstance::Bind_::__l8::<lambda_1>_>
                       ((TMulticastDelegateRegistration<void___cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy>
                         *)&pUVar11->ScalarParameterUpdatedDelegate,&local_8a0);
                    /* WARNING: Load size is inaccurate */
    (this->ScalarParamUpdateDelegate).ID = *FVar12.ID;
    local_918 = this;
    FVar12 = TMulticastDelegateRegistration<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy>
             ::AddLambda<_UNiagaraParameterCollectionInstance::Bind_::__l8::<lambda_2>_>
                       ((TMulticastDelegateRegistration<void___cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy>
                         *)&((this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr)->
                            VectorParameterUpdatedDelegate,local_898);
                    /* WARNING: Load size is inaccurate */
    (this->VectorParamUpdateDelegate).ID = *FVar12.ID;
    local_930.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_930.ArrayNum = 0;
    local_930.ArrayMax = 0;
    local_940.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_940.ArrayNum = 0;
    local_940.ArrayMax = 0;
    BuildCollectionValues
              (pUVar5,(this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr,&local_930,
               &local_940);
    pUVar4 = (this->Collection).field0_0x0.DebugPtr;
    if ((pUVar4 != (UNiagaraParameterCollection *)0x0) &&
       (pUVar5 = (pUVar4->SourceMaterialCollection).field0_0x0.DebugPtr,
       pUVar5 != (UMaterialParameterCollection *)0x0)) {
      pUVar11 = (this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr;
      if ((pUVar11 == (UMaterialParameterCollectionInstance *)0x0) ||
         (pUVar13 = (UMaterialParameterCollection *)
                    FWeakObjectPtr::Get(&(pUVar11->Collection).WeakPtr), pUVar13 != pUVar5)) {
        pUVar11 = UWorld::GetParameterCollectionInstance(param_1,pUVar5);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UMaterialParameterCollectionInstance *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        (this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr = pUVar11;
      }
      if ((this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr !=
          (UMaterialParameterCollectionInstance *)0x0) {
        local_888.bIsDynamic = false;
        local_888.bIsExternal = false;
        local_888.End = local_52;
        local_910 = ((this->Collection).field0_0x0.DebugPtr)->FullNamespace;
        local_888.Base = local_868;
        local_888.CurPos = local_868;
        ::FName::AppendString(&local_910,&local_888);
        iVar8 = local_930.ArrayNum;
        uVar17 = (ulonglong)local_930.ArrayNum;
        iVar20 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
        if (local_930.ArrayNum != 0) {
          pFVar2 = (FName *)(local_930.AllocatorInstance.Data + uVar17 * 0xc);
          FVar19.Data = local_930.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar17 != iVar8) {
              local_948 = 0;
              `TCheckedPointerIterator<TTuple<FName,float>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_948);
            }
            if ((FName *)FVar19.Data == pFVar2) break;
            iVar10 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
            iVar18 = iVar10 - iVar20;
            if ((iVar10 < iVar18) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount <= Len()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                   ,0xe8,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_888.CurPos = local_888.CurPos + -(longlong)iVar18;
            ::FName::AppendString((FName *)FVar19.Data,&local_888);
            if (local_888.End < local_888.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_888,1);
            }
            *local_888.CurPos = L'\0';
            ::FName::FName(&local_908,local_888.Base);
            local_8f8 = local_908;
            if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
              local_8f0 = -1;
            }
            else {
              pFVar14 = FNiagaraTypeRegistry::Get();
              local_8f0 = FNiagaraTypeRegistry::RegisterTypeInternal
                                    (pFVar14,&FNiagaraTypeDefinition::FloatDef);
            }
            local_8e0 = local_8f8;
            local_8d0 = (void *)0x0;
            local_8c8 = 0;
            local_8d8 = local_8f0;
            pFVar14 = FNiagaraTypeRegistry::Get();
            pFVar15 = FNiagaraTypeRegistry::GetRegisteredType(pFVar14,local_8d8);
            iVar10 = FNiagaraTypeDefinition::GetSize(pFVar15);
            if ((iVar10 != 4) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Param.GetSizeInBytes() == sizeof(T)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                   ,0x232,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            piVar16 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                                       (&this->ParameterStorage,&local_8e0);
            if ((piVar16 != (int *)0x0) && (*piVar16 != -1)) {
              *(uint *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data + *piVar16) =
                   (((FName *)((longlong)FVar19.Data + 8))->ComparisonIndex).Value;
              (this->ParameterStorage).bParametersDirty = 1;
            }
            if (local_8d0 != (void *)0x0) {
              FMemory::Free(local_8d0);
            }
            uVar17 = local_930._8_8_ & 0xffffffff;
            FVar19.Data = (FScriptContainerElement *)&((FName *)((longlong)FVar19.Data + 8))->Number
            ;
          }
        }
        iVar8 = local_940.ArrayNum;
        uVar17 = (ulonglong)local_940.ArrayNum;
        if (local_940.ArrayNum != 0) {
          pFVar2 = (FName *)(local_940.AllocatorInstance.Data + uVar17 * 0x18);
          FVar19.Data = local_940.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar17 != iVar8) {
              local_947[0] = 0;
              `TCheckedPointerIterator<TTuple<FName,FLinearColor>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_947);
            }
            if ((FName *)FVar19.Data == pFVar2) break;
            iVar10 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
            iVar18 = iVar10 - iVar20;
            if ((iVar10 < iVar18) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount <= Len()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                   ,0xe8,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_888.CurPos = local_888.CurPos + -(longlong)iVar18;
            ::FName::AppendString((FName *)FVar19.Data,&local_888);
            if (local_888.End < local_888.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_888,1);
            }
            *local_888.CurPos = L'\0';
            ::FName::FName(&local_900,local_888.Base);
            local_8ec = local_900;
            if (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
              local_8e4 = -1;
            }
            else {
              pFVar14 = FNiagaraTypeRegistry::Get();
              local_8e4 = FNiagaraTypeRegistry::RegisterTypeInternal
                                    (pFVar14,&FNiagaraTypeDefinition::ColorDef);
            }
            local_8c0 = local_8ec;
            local_8b0 = (void *)0x0;
            local_8a8 = 0;
            local_8b8 = local_8e4;
            pFVar14 = FNiagaraTypeRegistry::Get();
            pFVar15 = FNiagaraTypeRegistry::GetRegisteredType(pFVar14,local_8b8);
            iVar10 = FNiagaraTypeDefinition::GetSize(pFVar15);
            if ((iVar10 != 0x10) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Param.GetSizeInBytes() == sizeof(T)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                   ,0x232,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            piVar16 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                                       (&this->ParameterStorage,&local_8c0,0);
            if ((piVar16 != (int *)0x0) && (*piVar16 != -1)) {
              FVar7 = *(FName *)((longlong)FVar19.Data + 0x10);
              pFVar3 = (FName *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data +
                                *piVar16);
              *pFVar3 = *(FName *)((longlong)FVar19.Data + 8);
              pFVar3[1] = FVar7;
              (this->ParameterStorage).bParametersDirty = 1;
            }
            if (local_8b0 != (void *)0x0) {
              FMemory::Free(local_8b0);
            }
            uVar17 = local_940._8_8_ & 0xffffffff;
            FVar19.Data = FVar19.Data + 0x18;
          }
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
      }
    }
    if ((FName *)local_940.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_940.AllocatorInstance.Data);
    }
    if ((FName *)local_930.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_930.AllocatorInstance.Data);
    }
  }
  return;
}

// Empty @ 1492e2ac0

void __thiscall
UNiagaraParameterCollectionInstance::Empty(UNiagaraParameterCollectionInstance *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001492e2aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->ParameterStorage)._padding_ + 0x30))(&this->ParameterStorage,1);
  return;
}

// GetBoolParameter @ 1492ed870

bool __thiscall
UNiagaraParameterCollectionInstance::GetBoolParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1)

{
  UNiagaraParameterCollection *this_00;
  int iVar1;
  FNiagaraTypeRegistry *this_01;
  wchar_t *pwVar2;
  FName local_res8;
  FName local_res10;
  FNiagaraVariableBase local_28;
  void *local_18;
  undefined8 local_10;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar2);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this_00,(FName)&local_res10);
  local_28.Name = local_res10;
  if (FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_28.TypeDefHandle.RegisteredTypeIndex = -1;
  }
  else {
    this_01 = FNiagaraTypeRegistry::Get();
    local_28.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeRegistry::RegisterTypeInternal(this_01,&FNiagaraTypeDefinition::BoolDef);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  iVar1 = FNiagaraParameterStore::GetParameterValue<int>(&this->ParameterStorage,&local_28);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return iVar1 == -1;
}

// GetColorParameter @ 1492eda00

FLinearColor * __thiscall
UNiagaraParameterCollectionInstance::GetColorParameter
          (UNiagaraParameterCollectionInstance *this,FLinearColor *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UNiagaraParameterCollection *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeRegistry *pFVar5;
  FNiagaraTypeDefinition *this_01;
  FLinearColor *pFVar6;
  int *piVar7;
  wchar_t *pwVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FName local_res8;
  undefined8 local_res10;
  undefined8 local_28;
  int local_20;
  void *local_18;
  undefined8 local_10;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar8);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this_00,(FName)&local_res10);
  local_28 = local_res10;
  if (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_20 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    local_20 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::ColorDef);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  pFVar5 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar5,local_20);
  iVar4 = FNiagaraTypeDefinition::GetSize(this_01);
  if (iVar4 != 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
  }
  piVar7 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                            (&this->ParameterStorage,&local_28,0);
  if (piVar7 != (int *)0x0) {
    iVar4 = *piVar7;
    if (iVar4 != -1) {
      if ((iVar4 < 0) ||
         ((ulonglong)(longlong)(this->ParameterStorage).ParameterData.ArrayNum <
          (longlong)iVar4 + 0x10U)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FLinearColor *)(*pcVar2)();
          return pFVar6;
        }
      }
      pFVar1 = (this->ParameterStorage).ParameterData.AllocatorInstance.Data + iVar4;
      fVar9 = *(float *)pFVar1;
      fVar10 = *(float *)(pFVar1 + 4);
      fVar11 = *(float *)(pFVar1 + 8);
      fVar12 = *(float *)(pFVar1 + 0xc);
      goto LAB_1492edb31;
    }
  }
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
LAB_1492edb31:
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar12;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetFloatParameter @ 1492ee920

float __thiscall
UNiagaraParameterCollectionInstance::GetFloatParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1)

{
  UNiagaraParameterCollection *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeRegistry *pFVar4;
  FNiagaraTypeDefinition *this_01;
  int *piVar5;
  wchar_t *pwVar6;
  float fVar7;
  FName local_res8;
  undefined8 local_res10;
  undefined8 local_38;
  int local_30;
  void *local_28;
  undefined8 local_20;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar6);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this_00,(FName)&local_res10);
  local_38 = local_res10;
  if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_30 = -1;
  }
  else {
    pFVar4 = FNiagaraTypeRegistry::Get();
    local_30 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar4,&FNiagaraTypeDefinition::FloatDef);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  pFVar4 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar4,local_30);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_01);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar7 = (float)(*pcVar1)();
      return fVar7;
    }
  }
  piVar5 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                            (&this->ParameterStorage,&local_38,0);
  if (piVar5 != (int *)0x0) {
    iVar3 = *piVar5;
    if (iVar3 != -1) {
      if ((iVar3 < 0) ||
         ((ulonglong)(longlong)(this->ParameterStorage).ParameterData.ArrayNum <
          (longlong)iVar3 + 4U)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar7 = (float)(*pcVar1)();
          return fVar7;
        }
      }
      fVar7 = *(float *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data + iVar3);
      goto LAB_1492eea52;
    }
  }
  fVar7 = 0.0;
LAB_1492eea52:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return fVar7;
}

// GetIntParameter @ 1492efee0

int __thiscall
UNiagaraParameterCollectionInstance::GetIntParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1)

{
  UNiagaraParameterCollection *this_00;
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeRegistry *this_01;
  int iVar4;
  wchar_t *pwVar5;
  FName local_res8;
  FName *local_res10;
  FName local_res18;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FNiagaraVariableBase local_50;
  void *local_40;
  undefined8 local_38;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar5);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this_00,(FName)&local_res18);
  local_res8 = (FName)FNiagaraTypeDefinition::IntStruct;
  local_68.DebugPtr = (UObject *)FNiagaraTypeDefinition::IntStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::IntStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::IntStruct);
  }
  local_5e = 0;
  local_60 = 2;
  iVar3 = -1;
  local_5c = 0xffffffffffffffff;
  bVar2 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res8,UserFacing);
  if (!bVar2) {
    local_res10 = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
  }
  if (((UScriptStruct *)local_68.DebugPtr == (UScriptStruct *)0x0) ||
     (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
  }
  iVar4 = local_78.Data.ArrayNum + -1;
  FVar1.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_50.Name = local_res18;
  if ((UScriptStruct *)local_68.DebugPtr != (UScriptStruct *)0x0) {
    this_01 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal
                      (this_01,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  local_50.TypeDefHandle.RegisteredTypeIndex = iVar3;
  iVar3 = FNiagaraParameterStore::GetParameterValue<int>(&this->ParameterStorage,&local_50);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return iVar3;
}

// GetParameters @ 1492f0dd0

void __thiscall
UNiagaraParameterCollectionInstance::GetParameters
          (UNiagaraParameterCollectionInstance *this,
          TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *param_1)

{
  FNiagaraParameterStore::GetParameters(&this->ParameterStorage,param_1);
  return;
}

// GetPrivateStaticClass @ 1492f13b0

UClass * __cdecl UNiagaraParameterCollectionInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterCollectionInstance",
               &Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton,
               StaticRegisterNativesUNiagaraParameterCollectionInstance,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraParameterCollectionInstance>,
               InternalVTableHelperCtorCaller<UNiagaraParameterCollectionInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.InnerSingleton;
}

// GetQuatParameter @ 1492f1460

TQuat<double> * __thiscall
UNiagaraParameterCollectionInstance::GetQuatParameter
          (UNiagaraParameterCollectionInstance *this,TQuat<double> *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UNiagaraParameterCollection *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  FNiagaraTypeRegistry *pFVar7;
  FNiagaraTypeDefinition *this_01;
  TQuat<double> *pTVar8;
  int *piVar9;
  wchar_t *pwVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FName local_res8;
  undefined8 local_res10;
  undefined8 local_28;
  int local_20;
  void *local_18;
  undefined8 local_10;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar10);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this_00,(FName)&local_res10);
  local_28 = local_res10;
  if (FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_20 = -1;
  }
  else {
    pFVar7 = FNiagaraTypeRegistry::Get();
    local_20 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar7,&FNiagaraTypeDefinition::QuatDef);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  pFVar7 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar7,local_20);
  iVar6 = FNiagaraTypeDefinition::GetSize(this_01);
  if (iVar6 != 0x10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TQuat<double> *)(*pcVar2)();
      return pTVar8;
    }
  }
  piVar9 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                            (&this->ParameterStorage,&local_28,0);
  if (piVar9 != (int *)0x0) {
    iVar6 = *piVar9;
    if (iVar6 != -1) {
      if ((iVar6 < 0) ||
         ((ulonglong)(longlong)(this->ParameterStorage).ParameterData.ArrayNum <
          (longlong)iVar6 + 0x10U)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TQuat<double> *)(*pcVar2)();
          return pTVar8;
        }
      }
      pFVar1 = (this->ParameterStorage).ParameterData.AllocatorInstance.Data + iVar6;
      fVar11 = *(float *)pFVar1;
      fVar12 = *(float *)(pFVar1 + 4);
      fVar13 = *(float *)(pFVar1 + 8);
      fVar14 = *(float *)(pFVar1 + 0xc);
      goto LAB_1492f15a0;
    }
  }
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
LAB_1492f15a0:
  auVar3._8_4_ = SUB84((double)fVar12,0);
  auVar3._0_8_ = (double)fVar11;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  __return_storage_ptr__->X = (double)fVar11;
  __return_storage_ptr__->Y = (double)auVar3._8_8_;
  auVar4._8_4_ = SUB84((double)fVar14,0);
  auVar4._0_8_ = (double)fVar13;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  __return_storage_ptr__->Z = (double)fVar13;
  __return_storage_ptr__->W = (double)auVar4._8_8_;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetVector2DParameter @ 1492f28b0

TVector2<double> * __thiscall
UNiagaraParameterCollectionInstance::GetVector2DParameter
          (UNiagaraParameterCollectionInstance *this,TVector2<double> *__return_storage_ptr__,
          FString *param_1)

{
  UNiagaraParameterCollection *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeRegistry *pFVar4;
  FNiagaraTypeDefinition *this_01;
  TVector2<double> *pTVar5;
  int *piVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  FName local_res10;
  undefined8 local_res18 [2];
  undefined8 local_38;
  int local_30;
  void *local_28;
  undefined8 local_20;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,pwVar7);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this_00,(FName)local_res18);
  local_38 = local_res18[0];
  if (FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_30 = -1;
  }
  else {
    pFVar4 = FNiagaraTypeRegistry::Get();
    local_30 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar4,&FNiagaraTypeDefinition::Vec2Def);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  pFVar4 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar4,local_30);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_01);
  if (iVar3 != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  piVar6 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                            (&this->ParameterStorage,&local_38,0);
  if (piVar6 != (int *)0x0) {
    iVar3 = *piVar6;
    if (iVar3 != -1) {
      if ((iVar3 < 0) ||
         ((ulonglong)(longlong)(this->ParameterStorage).ParameterData.ArrayNum <
          (longlong)iVar3 + 8U)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TVector2<double> *)(*pcVar1)();
          return pTVar5;
        }
      }
      local_res8 = *(undefined8 *)
                    ((this->ParameterStorage).ParameterData.AllocatorInstance.Data + iVar3);
      goto LAB_1492f29e1;
    }
  }
  local_res8 = 0;
LAB_1492f29e1:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)local_res8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_res8._4_4_;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetVector4Parameter @ 1492f2a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<double> * __thiscall
UNiagaraParameterCollectionInstance::GetVector4Parameter
          (UNiagaraParameterCollectionInstance *this,TVector4<double> *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UNiagaraParameterCollection *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  FNiagaraTypeRegistry *pFVar7;
  FNiagaraTypeDefinition *this_01;
  TVector4<double> *pTVar8;
  int *piVar9;
  wchar_t *pwVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FName local_res8;
  undefined8 local_res10;
  undefined8 local_28;
  int local_20;
  void *local_18;
  undefined8 local_10;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar10);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this_00,(FName)&local_res10);
  local_28 = local_res10;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_20 = -1;
  }
  else {
    pFVar7 = FNiagaraTypeRegistry::Get();
    local_20 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar7,&FNiagaraTypeDefinition::Vec4Def);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  pFVar7 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar7,local_20);
  iVar6 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar6 != 0x10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parameter.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x195,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TVector4<double> *)(*pcVar2)();
    return pTVar8;
  }
  piVar9 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                            (&this->ParameterStorage,&local_28,0);
  fVar11 = ___xmm_3f800000000000000000000000000000;
  fVar12 = _UNK_150689644;
  fVar13 = _UNK_150689648;
  fVar14 = _UNK_15068964c;
  if (piVar9 != (int *)0x0) {
    iVar6 = *piVar9;
    if (iVar6 != -1) {
      if (((iVar6 < 0) ||
          ((ulonglong)(longlong)(this->ParameterStorage).ParameterData.ArrayNum <
           (longlong)iVar6 + 0x10U)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x17f,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TVector4<double> *)(*pcVar2)();
        return pTVar8;
      }
      pFVar1 = (this->ParameterStorage).ParameterData.AllocatorInstance.Data + iVar6;
      fVar11 = *(float *)pFVar1;
      fVar12 = *(float *)(pFVar1 + 4);
      fVar13 = *(float *)(pFVar1 + 8);
      fVar14 = *(float *)(pFVar1 + 0xc);
    }
  }
  auVar3._8_4_ = SUB84((double)fVar12,0);
  auVar3._0_8_ = (double)fVar11;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar14,0);
  auVar4._0_8_ = (double)fVar13;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar4;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetVectorParameter @ 1492f2bb0

TVector<double> * __thiscall
UNiagaraParameterCollectionInstance::GetVectorParameter
          (UNiagaraParameterCollectionInstance *this,TVector<double> *__return_storage_ptr__,
          FString *param_1)

{
  UNiagaraParameterCollection *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeRegistry *pFVar5;
  FNiagaraTypeDefinition *this_01;
  TVector<double> *pTVar6;
  int *piVar7;
  longlong lVar8;
  float fVar9;
  wchar_t *pwVar10;
  FName local_res8;
  undefined8 local_res10;
  undefined8 local_38;
  undefined8 local_28;
  int local_20;
  void *local_18;
  undefined8 local_10;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar10);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this_00,(FName)&local_res10);
  local_28 = local_res10;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_20 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    local_20 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec3Def);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  pFVar5 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar5,local_20);
  iVar4 = FNiagaraTypeDefinition::GetSize(this_01);
  if (iVar4 != 0xc) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  piVar7 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                            (&this->ParameterStorage,&local_28,0);
  if (piVar7 != (int *)0x0) {
    iVar4 = *piVar7;
    lVar8 = (longlong)iVar4;
    if (iVar4 != -1) {
      if ((iVar4 < 0) ||
         ((ulonglong)(longlong)(this->ParameterStorage).ParameterData.ArrayNum < lVar8 + 0xcU)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TVector<double> *)(*pcVar2)();
          return pTVar6;
        }
      }
      pFVar1 = (this->ParameterStorage).ParameterData.AllocatorInstance.Data;
      local_38 = *(undefined8 *)(pFVar1 + lVar8);
      fVar9 = *(float *)(pFVar1 + lVar8 + 8);
      goto LAB_1492f2cf3;
    }
  }
  fVar9 = 0.0;
  local_38 = 0;
LAB_1492f2cf3:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)local_38;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_38._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar9;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// InitDelegates @ 1492f8030

void __thiscall
UNiagaraParameterCollectionInstance::InitDelegates
          (UNiagaraParameterCollectionInstance *this,UNiagaraParameterCollection *param_1)

{
  return;
}

// IsDefaultInstance @ 1492f8730

bool __thiscall
UNiagaraParameterCollectionInstance::IsDefaultInstance(UNiagaraParameterCollectionInstance *this)

{
  UNiagaraParameterCollection *pUVar1;
  
  pUVar1 = (this->Collection).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNiagaraParameterCollection *)0x0) &&
     ((pUVar1->DefaultInstance).field0_0x0.DebugPtr == this)) {
    return true;
  }
  return false;
}

// IsExternallyDriven @ 1492f8750

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UNiagaraParameterCollectionInstance::IsExternallyDriven
          (UNiagaraParameterCollectionInstance *this,FNiagaraVariable *param_1)

{
  UNiagaraParameterCollection *this_00;
  UMaterialParameterCollection *pUVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong local_res8 [4];
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((this_00 != (UNiagaraParameterCollection *)0x0) &&
     (pUVar1 = (this_00->SourceMaterialCollection).field0_0x0.DebugPtr,
     pUVar1 != (UMaterialParameterCollection *)0x0)) {
    UNiagaraParameterCollection::FriendlyNameFromParameterName(this_00,(FName)local_res8);
    pFVar2 = (pUVar1->ScalarParameters).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)(pUVar1->ScalarParameters).ArrayNum * 0x1c;
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 0x1c) {
      if (*(longlong *)pFVar2 == local_res8[0]) {
        return true;
      }
    }
    pFVar3 = (pUVar1->VectorParameters).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)(pUVar1->VectorParameters).ArrayNum * 0x28;
    for (; pFVar3 != pFVar2; pFVar3 = pFVar3 + 0x28) {
      if (*(longlong *)pFVar3 == local_res8[0]) {
        return true;
      }
    }
  }
  return false;
}

// OverridesParameter @ 1492fa220

bool __thiscall
UNiagaraParameterCollectionInstance::OverridesParameter
          (UNiagaraParameterCollectionInstance *this,FNiagaraVariable *param_1)

{
  UNiagaraParameterCollection *pUVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pUVar1 = (this->Collection).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNiagaraParameterCollection *)0x0) &&
     ((pUVar1->DefaultInstance).field0_0x0.DebugPtr == this)) {
    return true;
  }
  pFVar2 = (this->OverridenParameters).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)(this->OverridenParameters).ArrayNum * 0x20;
  if (pFVar2 != pFVar3) {
    do {
      if ((*(longlong *)pFVar2 == param_1->_padding_) &&
         (*(int *)(pFVar2 + 8) == (int)param_1->_padding_)) {
        return true;
      }
      pFVar2 = pFVar2 + 0x20;
    } while (pFVar2 != pFVar3);
  }
  return false;
}

// PostLoad @ 1492fb110

void __thiscall
UNiagaraParameterCollectionInstance::PostLoad(UNiagaraParameterCollectionInstance *this)

{
  UNiagaraParameterCollection *this_00;
  
  UObject::PostLoad((UObject *)this);
  FNiagaraParameterStore::PostLoad(&this->ParameterStorage,(UObject *)this);
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if ((this_00 != (UNiagaraParameterCollection *)0x0) &&
     ((this_00->DefaultInstance).field0_0x0.DebugPtr != this)) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  SyncWithCollection(this);
  return;
}

// RefreshSourceParameters @ 149302080

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

void __thiscall
UNiagaraParameterCollectionInstance::RefreshSourceParameters
          (UNiagaraParameterCollectionInstance *this,UWorld *param_1,
          TArray<TTuple<FName,float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TTuple<FName,FLinearColor>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  FName *pFVar2;
  int iVar3;
  UNiagaraParameterCollection *pUVar4;
  UMaterialParameterCollection *pUVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  UMaterialParameterCollection *pUVar10;
  UMaterialParameterCollectionInstance *pUVar11;
  FNiagaraTypeRegistry *pFVar12;
  FNiagaraTypeDefinition *pFVar13;
  int *piVar14;
  int iVar15;
  FName *pFVar16;
  FName *pFVar17;
  FName *this_00;
  int iVar18;
  undefined1 auStack_928 [32];
  undefined1 local_908;
  undefined1 local_907 [7];
  TArray<TTuple<FName,FLinearColor>,TSizedDefaultAllocator<32>_> *local_900;
  FName local_8f8;
  FName local_8f0;
  FName local_8e8;
  FName local_8e0;
  int local_8d8;
  FName local_8d4;
  int local_8cc;
  FName local_8c8;
  int local_8c0;
  void *local_8b8;
  undefined8 local_8b0;
  FName local_8a8;
  int local_8a0;
  void *local_898;
  undefined8 local_890;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_928;
  pUVar4 = (this->Collection).field0_0x0.DebugPtr;
  if (pUVar4 == (UNiagaraParameterCollection *)0x0) {
    return;
  }
  pUVar5 = (pUVar4->SourceMaterialCollection).field0_0x0.DebugPtr;
  if (pUVar5 == (UMaterialParameterCollection *)0x0) {
    return;
  }
  pUVar11 = (this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr;
  local_900 = param_3;
  if ((pUVar11 == (UMaterialParameterCollectionInstance *)0x0) ||
     (pUVar10 = (UMaterialParameterCollection *)FWeakObjectPtr::Get(&(pUVar11->Collection).WeakPtr),
     pUVar10 != pUVar5)) {
    pUVar11 = UWorld::GetParameterCollectionInstance(param_1,pUVar5);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UMaterialParameterCollectionInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr = pUVar11;
  }
  if ((this->SourceMaterialCollectionInstance).field0_0x0.DebugPtr !=
      (UMaterialParameterCollectionInstance *)0x0) {
    local_888.Base = local_868;
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    local_888.CurPos = local_868;
    local_888.End = local_52;
    local_8f8 = ((this->Collection).field0_0x0.DebugPtr)->FullNamespace;
    ::FName::AppendString(&local_8f8,&local_888);
    iVar3 = param_2->ArrayNum;
    iVar18 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
    if (iVar3 != 0) {
      pFVar17 = (FName *)(param_2->AllocatorInstance).Data;
      pFVar16 = (FName *)((longlong)pFVar17 + (longlong)iVar3 * 0xc);
      while( true ) {
        if (param_2->ArrayNum != iVar3) {
          local_908 = 0;
          `TCheckedPointerIterator<TTuple<FName,float>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_908);
        }
        if (pFVar17 == pFVar16) break;
        iVar9 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
        iVar15 = iVar9 - iVar18;
        if ((iVar9 < iVar15) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_888.CurPos = local_888.CurPos + -(longlong)iVar15;
        ::FName::AppendString(pFVar17,&local_888);
        if (local_888.End < local_888.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_888,1);
        }
        *local_888.CurPos = L'\0';
        ::FName::FName(&local_8f0,local_888.Base);
        local_8e0 = local_8f0;
        if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
          local_8d8 = -1;
        }
        else {
          pFVar12 = FNiagaraTypeRegistry::Get();
          local_8d8 = FNiagaraTypeRegistry::RegisterTypeInternal
                                (pFVar12,&FNiagaraTypeDefinition::FloatDef);
        }
        local_8b8 = (void *)0x0;
        local_8b0 = 0;
        local_8c8 = local_8e0;
        local_8c0 = local_8d8;
        pFVar12 = FNiagaraTypeRegistry::Get();
        pFVar13 = FNiagaraTypeRegistry::GetRegisteredType(pFVar12,local_8c0);
        iVar9 = FNiagaraTypeDefinition::GetSize(pFVar13);
        if ((iVar9 != 4) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Param.GetSizeInBytes() == sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x232,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        piVar14 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                                   (&this->ParameterStorage,&local_8c8);
        if ((piVar14 != (int *)0x0) && (*piVar14 != -1)) {
          *(uint *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data + *piVar14) =
               pFVar17[1].ComparisonIndex.Value;
          (this->ParameterStorage).bParametersDirty = 1;
        }
        if (local_8b8 != (void *)0x0) {
          FMemory::Free(local_8b8);
        }
        pFVar17 = (FName *)&pFVar17[1].Number;
      }
    }
    iVar3 = local_900->ArrayNum;
    if (iVar3 != 0) {
      this_00 = (FName *)(local_900->AllocatorInstance).Data;
      pFVar17 = this_00 + (longlong)iVar3 * 3;
      pFVar16 = this_00 + 1;
      while( true ) {
        if (local_900->ArrayNum != iVar3) {
          local_907[0] = 0;
          `TCheckedPointerIterator<TTuple<FName,FLinearColor>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_907);
        }
        if (this_00 == pFVar17) break;
        iVar9 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
        iVar15 = iVar9 - iVar18;
        if ((iVar9 < iVar15) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_888.CurPos = local_888.CurPos + -(longlong)iVar15;
        ::FName::AppendString(this_00,&local_888);
        if (local_888.End < local_888.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_888,1);
        }
        *local_888.CurPos = L'\0';
        ::FName::FName(&local_8e8,local_888.Base);
        local_8d4 = local_8e8;
        if (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
          local_8cc = -1;
        }
        else {
          pFVar12 = FNiagaraTypeRegistry::Get();
          local_8cc = FNiagaraTypeRegistry::RegisterTypeInternal
                                (pFVar12,&FNiagaraTypeDefinition::ColorDef);
        }
        local_898 = (void *)0x0;
        local_890 = 0;
        local_8a8 = local_8d4;
        local_8a0 = local_8cc;
        pFVar12 = FNiagaraTypeRegistry::Get();
        pFVar13 = FNiagaraTypeRegistry::GetRegisteredType(pFVar12,local_8a0);
        iVar9 = FNiagaraTypeDefinition::GetSize(pFVar13);
        if ((iVar9 != 0x10) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Param.GetSizeInBytes() == sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x232,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        piVar14 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                                   (&this->ParameterStorage,&local_8a8,0);
        if ((piVar14 != (int *)0x0) && (*piVar14 != -1)) {
          FVar7 = pFVar16[1];
          pFVar2 = (FName *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data +
                            *piVar14);
          *pFVar2 = *pFVar16;
          pFVar2[1] = FVar7;
          (this->ParameterStorage).bParametersDirty = 1;
        }
        if (local_898 != (void *)0x0) {
          FMemory::Free(local_898);
        }
        this_00 = this_00 + 3;
        pFVar16 = pFVar16 + 3;
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  }
  return;
}

// RemoveParameter @ 149303a80

bool __thiscall
UNiagaraParameterCollectionInstance::RemoveParameter
          (UNiagaraParameterCollectionInstance *this,FNiagaraVariable *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149303a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->ParameterStorage)._padding_ + 0x18))(&this->ParameterStorage);
  return (bool)uVar1;
}

// RenameParameter @ 149303e30

void __thiscall
UNiagaraParameterCollectionInstance::RenameParameter
          (UNiagaraParameterCollectionInstance *this,FNiagaraVariable *param_1,FName param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000149303e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->ParameterStorage)._padding_ + 0x20))(&this->ParameterStorage);
  return;
}

// ResetDelegates @ 149304140

void __thiscall
UNiagaraParameterCollectionInstance::ResetDelegates
          (UNiagaraParameterCollectionInstance *this,UNiagaraParameterCollection *param_1)

{
  return;
}

// SetBoolParameter @ 149305940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SetBoolParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1,bool param_2)

{
  undefined1 *puVar1;
  UNiagaraParameterCollection *pUVar2;
  UMaterialParameterCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGuid *pFVar6;
  FString *pFVar7;
  FNiagaraTypeRegistry *pFVar8;
  FNiagaraTypeDefinition *this_01;
  int *piVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_218 [32];
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  int local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FGuid local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  pUVar2 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_1e8,pwVar10);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(pUVar2,(FName)&local_1e0);
  pUVar2 = (this->Collection).field0_0x0.DebugPtr;
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UNiagaraParameterCollectionInstance::SetBoolParameter",0x35,Yes);
  local_1d8 = local_1e0;
  if (((pUVar2 == (UNiagaraParameterCollection *)0x0) ||
      (this_00 = (pUVar2->SourceMaterialCollection).field0_0x0.DebugPtr,
      this_00 == (UMaterialParameterCollection *)0x0)) ||
     (pFVar6 = UMaterialParameterCollection::GetParameterId(this_00,&local_180,local_1e0),
     ((pFVar6->D == 0 && pFVar6->C == 0) && pFVar6->B == 0) && pFVar6->A == 0)) {
    bVar4 = true;
  }
  else {
    if (LogWrittenOnce == false) {
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar7 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)
                            (pUVar2->SourceMaterialCollection).field0_0x0.DebugPtr,&local_190,
                            (UObject *)0x0,None);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)pUVar2,&local_1a0,(UObject *)0x0,None);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_1d8,&local_1b0);
        local_1f8 = (FScriptContainerElement *)pwVar11;
        local_1f0 = (FScriptContainerElement *)pwVar10;
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Skipping_attemp_151de18d8,
                   (FLogCategoryBase *)&LogNiagara);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      LogWrittenOnce = true;
    }
    bVar4 = false;
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  if (bVar4) {
    local_1d0 = local_1e0;
    if (FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      local_1c8 = -1;
    }
    else {
      pFVar8 = FNiagaraTypeRegistry::Get();
      local_1c8 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar8,&FNiagaraTypeDefinition::BoolDef);
    }
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    pFVar8 = FNiagaraTypeRegistry::Get();
    this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar8,local_1c8);
    iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
    if ((iVar5 != 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Param.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x232,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar9 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                              (&this->ParameterStorage,&local_1d0,0);
    if ((piVar9 != (int *)0x0) && (*piVar9 != -1)) {
      *(uint *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data + *piVar9) =
           (param_2 ^ 1) - 1;
      (this->ParameterStorage).bParametersDirty = 1;
    }
    if (local_1c0 != (void *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  return;
}

// SetColorParameter @ 149305c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SetColorParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1,FLinearColor *param_2)

{
  UNiagaraParameterCollection *pUVar1;
  UMaterialParameterCollection *this_00;
  bool bVar2;
  FGuid *pFVar3;
  FString *pFVar4;
  FNiagaraTypeRegistry *this_01;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_1e8 [32];
  FScriptContainerElement *local_1c8;
  FScriptContainerElement *local_1c0;
  FName local_1b8;
  FNiagaraVariable local_1b0;
  FString local_190;
  FString local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pUVar1 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_190,pwVar6);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(pUVar1,(FName)&local_1b8);
  pUVar1 = (this->Collection).field0_0x0.DebugPtr;
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UNiagaraParameterCollectionInstance::SetColorParameter",0x36,Yes);
  if (((pUVar1 == (UNiagaraParameterCollection *)0x0) ||
      (this_00 = (pUVar1->SourceMaterialCollection).field0_0x0.DebugPtr,
      this_00 == (UMaterialParameterCollection *)0x0)) ||
     (pFVar3 = UMaterialParameterCollection::GetParameterId(this_00,(FGuid *)&local_1b0,local_1b8),
     ((pFVar3->D == 0 && pFVar3->C == 0) && pFVar3->B == 0) && pFVar3->A == 0)) {
    bVar2 = true;
  }
  else {
    if (LogWrittenOnce == false) {
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar4 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)
                            (pUVar1->SourceMaterialCollection).field0_0x0.DebugPtr,
                            (FString *)&local_1b0,(UObject *)0x0,None);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        pFVar4 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)pUVar1,&local_180,(UObject *)0x0,None);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_1b8,&local_190);
        local_1c8 = (FScriptContainerElement *)pwVar5;
        local_1c0 = (FScriptContainerElement *)pwVar6;
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Skipping_attemp_151de1a40,
                   (FLogCategoryBase *)&LogNiagara);
        if ((FName)local_190.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if ((void *)local_1b0._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_1b0._padding_);
        }
      }
      LogWrittenOnce = true;
    }
    bVar2 = false;
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  if (bVar2) {
    local_1b0._padding_._0_4_ = local_1b8.ComparisonIndex.Value;
    local_1b0._padding_._4_4_ = local_1b8.Number;
    if (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      local_1b0._padding_._0_4_ = -1;
    }
    else {
      this_01 = FNiagaraTypeRegistry::Get();
      local_1b0._padding_._0_4_ =
           FNiagaraTypeRegistry::RegisterTypeInternal(this_01,&FNiagaraTypeDefinition::ColorDef);
    }
    local_1b0.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.VarData.ArrayNum = 0;
    local_1b0.VarData.ArrayMax = 0;
    FNiagaraParameterStore::SetParameterValue<FLinearColor>
              (&this->ParameterStorage,param_2,&local_1b0,false);
    if (local_1b0.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.VarData.AllocatorInstance.Data);
    }
  }
  return;
}

// SetFloatParameter @ 1493063b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SetFloatParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1,float param_2)

{
  undefined1 *puVar1;
  UNiagaraParameterCollection *pUVar2;
  UMaterialParameterCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGuid *pFVar6;
  FString *pFVar7;
  FNiagaraTypeRegistry *pFVar8;
  FNiagaraTypeDefinition *this_01;
  int *piVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_228 [32];
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  int local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FGuid local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_228;
  pUVar2 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_1f8,pwVar10);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(pUVar2,(FName)&local_1f0);
  pUVar2 = (this->Collection).field0_0x0.DebugPtr;
  local_178._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_178,"UNiagaraParameterCollectionInstance::SetFloatParameter",0x36,Yes);
  local_1e8 = local_1f0;
  if (((pUVar2 == (UNiagaraParameterCollection *)0x0) ||
      (this_00 = (pUVar2->SourceMaterialCollection).field0_0x0.DebugPtr,
      this_00 == (UMaterialParameterCollection *)0x0)) ||
     (pFVar6 = UMaterialParameterCollection::GetParameterId(this_00,&local_190,local_1f0),
     ((pFVar6->D == 0 && pFVar6->C == 0) && pFVar6->B == 0) && pFVar6->A == 0)) {
    bVar4 = true;
  }
  else {
    if (LogWrittenOnce == false) {
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar7 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)
                            (pUVar2->SourceMaterialCollection).field0_0x0.DebugPtr,&local_1a0,
                            (UObject *)0x0,None);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)pUVar2,&local_1b0,(UObject *)0x0,None);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_1e8,&local_1c0);
        local_208 = (FScriptContainerElement *)pwVar11;
        local_200 = (FScriptContainerElement *)pwVar10;
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Skipping_attemp_151de19a0,
                   (FLogCategoryBase *)&LogNiagara);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      LogWrittenOnce = true;
    }
    bVar4 = false;
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (bVar4) {
    local_1e0 = local_1f0;
    if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      local_1d8 = -1;
    }
    else {
      pFVar8 = FNiagaraTypeRegistry::Get();
      local_1d8 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar8,&FNiagaraTypeDefinition::FloatDef);
    }
    local_1d0 = (void *)0x0;
    local_1c8 = 0;
    pFVar8 = FNiagaraTypeRegistry::Get();
    this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar8,local_1d8);
    iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
    if ((iVar5 != 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Param.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x232,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar9 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                              (&this->ParameterStorage,&local_1e0,0);
    if ((piVar9 != (int *)0x0) && (*piVar9 != -1)) {
      *(float *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data + *piVar9) = param_2;
      (this->ParameterStorage).bParametersDirty = 1;
    }
    if (local_1d0 != (void *)0x0) {
      FMemory::Free(local_1d0);
    }
  }
  return;
}

// SetIntParameter @ 1493067a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SetIntParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1,int param_2)

{
  undefined1 *puVar1;
  UNiagaraParameterCollection *pUVar2;
  UMaterialParameterCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGuid *pFVar6;
  FString *pFVar7;
  FNiagaraTypeRegistry *pFVar8;
  FNiagaraTypeDefinition *this_01;
  int *piVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_218 [32];
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  int local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FGuid local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  pUVar2 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_1e8,pwVar10);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(pUVar2,(FName)&local_1e0);
  pUVar2 = (this->Collection).field0_0x0.DebugPtr;
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UNiagaraParameterCollectionInstance::SetIntParameter",0x34,Yes);
  local_1d8 = local_1e0;
  if (((pUVar2 == (UNiagaraParameterCollection *)0x0) ||
      (this_00 = (pUVar2->SourceMaterialCollection).field0_0x0.DebugPtr,
      this_00 == (UMaterialParameterCollection *)0x0)) ||
     (pFVar6 = UMaterialParameterCollection::GetParameterId(this_00,&local_180,local_1e0),
     ((pFVar6->D == 0 && pFVar6->C == 0) && pFVar6->B == 0) && pFVar6->A == 0)) {
    bVar4 = true;
  }
  else {
    if (LogWrittenOnce == false) {
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar7 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)
                            (pUVar2->SourceMaterialCollection).field0_0x0.DebugPtr,&local_190,
                            (UObject *)0x0,None);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)pUVar2,&local_1a0,(UObject *)0x0,None);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_1d8,&local_1b0);
        local_1f8 = (FScriptContainerElement *)pwVar11;
        local_1f0 = (FScriptContainerElement *)pwVar10;
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Skipping_attemp_151de19c0,
                   (FLogCategoryBase *)&LogNiagara);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      LogWrittenOnce = true;
    }
    bVar4 = false;
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  if (bVar4) {
    local_1d0 = local_1e0;
    if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      local_1c8 = -1;
    }
    else {
      pFVar8 = FNiagaraTypeRegistry::Get();
      local_1c8 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::IntDef)
      ;
    }
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    pFVar8 = FNiagaraTypeRegistry::Get();
    this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar8,local_1c8);
    iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
    if ((iVar5 != 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Param.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x232,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar9 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                              (&this->ParameterStorage,&local_1d0,0);
    if ((piVar9 != (int *)0x0) && (*piVar9 != -1)) {
      *(int *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data + *piVar9) = param_2;
      (this->ParameterStorage).bParametersDirty = 1;
    }
    if (local_1c0 != (void *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  return;
}

// SetOverridesParameter @ 149306ba0

void __thiscall
UNiagaraParameterCollectionInstance::SetOverridesParameter
          (UNiagaraParameterCollectionInstance *this,FNiagaraVariable *param_1,bool param_2)

{
  int *piVar1;
  FNiagaraVariable *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *this_00;
  FNiagaraVariable *pFVar6;
  
  this_00 = &this->OverridenParameters;
  if (!param_2) {
    TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::Remove(this_00,param_1);
    return;
  }
  pFVar2 = (FNiagaraVariable *)(this_00->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + (this->OverridenParameters).ArrayNum) {
    pFVar6 = pFVar2;
    do {
      if ((pFVar6->_padding_ == param_1->_padding_) &&
         ((int)pFVar6->_padding_ == (int)param_1->_padding_)) {
        if ((int)((longlong)pFVar6 - (longlong)pFVar2 >> 5) != -1) {
          return;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar2 + (this->OverridenParameters).ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->OverridenParameters).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->OverridenParameters).ArrayNum;
  piVar1 = &(this->OverridenParameters).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this_00->AllocatorInstance,piVar1);
    (this->OverridenParameters).ArrayNum = iVar5;
  }
  (this->OverridenParameters).ArrayNum = iVar5 + 1;
  FNiagaraVariable::FNiagaraVariable
            ((FNiagaraVariable *)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x20),
             param_1);
  return;
}

// SetParent @ 149306bc0

void __thiscall
UNiagaraParameterCollectionInstance::SetParent
          (UNiagaraParameterCollectionInstance *this,UNiagaraParameterCollection *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraParameterCollection *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Collection).field0_0x0.DebugPtr = param_1;
  SyncWithCollection(this);
  return;
}

// SetQuatParameter @ 149306cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SetQuatParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1,TQuat<double> *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  UNiagaraParameterCollection *pUVar3;
  UMaterialParameterCollection *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGuid *pFVar7;
  FString *pFVar8;
  FNiagaraTypeRegistry *pFVar9;
  FNiagaraTypeDefinition *this_01;
  int *piVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStack_228 [32];
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  int local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FGuid local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  pUVar3 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_1e8,pwVar11);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(pUVar3,(FName)&local_1e0);
  pUVar3 = (this->Collection).field0_0x0.DebugPtr;
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UNiagaraParameterCollectionInstance::SetQuatParameter",0x35,Yes);
  local_1d8 = local_1e0;
  if (((pUVar3 == (UNiagaraParameterCollection *)0x0) ||
      (this_00 = (pUVar3->SourceMaterialCollection).field0_0x0.DebugPtr,
      this_00 == (UMaterialParameterCollection *)0x0)) ||
     (pFVar7 = UMaterialParameterCollection::GetParameterId(this_00,&local_180,local_1e0),
     ((pFVar7->D == 0 && pFVar7->C == 0) && pFVar7->B == 0) && pFVar7->A == 0)) {
    bVar5 = true;
  }
  else {
    if (LogWrittenOnce == false) {
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar8 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)
                            (pUVar3->SourceMaterialCollection).field0_0x0.DebugPtr,&local_190,
                            (UObject *)0x0,None);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)pUVar3,&local_1a0,(UObject *)0x0,None);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_1d8,&local_1b0);
        local_208 = (FScriptContainerElement *)pwVar12;
        local_200 = (FScriptContainerElement *)pwVar11;
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Skipping_attemp_151de1a60,
                   (FLogCategoryBase *)&LogNiagara);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      LogWrittenOnce = true;
    }
    bVar5 = false;
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  if (bVar5) {
    local_1d0 = local_1e0;
    if (FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      local_1c8 = -1;
    }
    else {
      pFVar9 = FNiagaraTypeRegistry::Get();
      local_1c8 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar9,&FNiagaraTypeDefinition::QuatDef);
    }
    local_1f8 = (float)param_2->X;
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    fStack_1f4 = (float)param_2->Y;
    fStack_1f0 = (float)param_2->Z;
    fStack_1ec = (float)param_2->W;
    pFVar9 = FNiagaraTypeRegistry::Get();
    this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar9,local_1c8);
    iVar6 = FNiagaraTypeDefinition::GetSize(this_01);
    if ((iVar6 != 0x10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Param.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x232,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    piVar10 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                               (&this->ParameterStorage,&local_1d0,0);
    if ((piVar10 != (int *)0x0) && (*piVar10 != -1)) {
      pFVar2 = (this->ParameterStorage).ParameterData.AllocatorInstance.Data + *piVar10;
      *(ulonglong *)pFVar2 = CONCAT44(fStack_1f4,local_1f8);
      *(ulonglong *)(pFVar2 + 8) = CONCAT44(fStack_1ec,fStack_1f0);
      (this->ParameterStorage).bParametersDirty = 1;
    }
    if (local_1c0 != (void *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  return;
}

// SetVector2DParameter @ 149308460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SetVector2DParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1,TVector2<double> *param_2)

{
  undefined1 *puVar1;
  UNiagaraParameterCollection *pUVar2;
  UMaterialParameterCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGuid *pFVar6;
  FString *pFVar7;
  FNiagaraTypeRegistry *pFVar8;
  FNiagaraTypeDefinition *this_01;
  int *piVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_218 [32];
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  float local_1e8;
  float fStack_1e4;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  int local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FGuid local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  pUVar2 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_1e0,pwVar10);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(pUVar2,(FName)&local_1d8);
  pUVar2 = (this->Collection).field0_0x0.DebugPtr;
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UNiagaraParameterCollectionInstance::SetVector2DParameter",0x39,Yes);
  local_1d0 = local_1d8;
  if (((pUVar2 == (UNiagaraParameterCollection *)0x0) ||
      (this_00 = (pUVar2->SourceMaterialCollection).field0_0x0.DebugPtr,
      this_00 == (UMaterialParameterCollection *)0x0)) ||
     (pFVar6 = UMaterialParameterCollection::GetParameterId(this_00,&local_178,local_1d8),
     ((pFVar6->D == 0 && pFVar6->C == 0) && pFVar6->B == 0) && pFVar6->A == 0)) {
    bVar4 = true;
  }
  else {
    if (LogWrittenOnce == false) {
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar7 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)
                            (pUVar2->SourceMaterialCollection).field0_0x0.DebugPtr,&local_188,
                            (UObject *)0x0,None);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)pUVar2,&local_198,(UObject *)0x0,None);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_1d0,&local_1a8);
        local_1f8 = (FScriptContainerElement *)pwVar11;
        local_1f0 = (FScriptContainerElement *)pwVar10;
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Skipping_attemp_151de19e0,
                   (FLogCategoryBase *)&LogNiagara);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      LogWrittenOnce = true;
    }
    bVar4 = false;
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  if (bVar4) {
    local_1c8 = local_1d8;
    if (FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      local_1c0 = -1;
    }
    else {
      pFVar8 = FNiagaraTypeRegistry::Get();
      local_1c0 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar8,&FNiagaraTypeDefinition::Vec2Def);
    }
    local_1e8 = (float)(param_2->field0_0x0)._s_0.X;
    local_1b8 = (void *)0x0;
    local_1b0 = 0;
    fStack_1e4 = (float)(param_2->field0_0x0)._s_0.Y;
    pFVar8 = FNiagaraTypeRegistry::Get();
    this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar8,local_1c0);
    iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
    if ((iVar5 != 8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Param.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x232,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar9 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                              (&this->ParameterStorage,&local_1c8,0);
    if ((piVar9 != (int *)0x0) && (*piVar9 != -1)) {
      *(ulonglong *)((this->ParameterStorage).ParameterData.AllocatorInstance.Data + *piVar9) =
           CONCAT44(fStack_1e4,local_1e8);
      (this->ParameterStorage).bParametersDirty = 1;
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free(local_1b8);
    }
  }
  return;
}

// SetVector4Parameter @ 149308760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SetVector4Parameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1,TVector4<double> *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  UNiagaraParameterCollection *pUVar3;
  UMaterialParameterCollection *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGuid *pFVar7;
  FString *pFVar8;
  FNiagaraTypeRegistry *pFVar9;
  FNiagaraTypeDefinition *this_01;
  int *piVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStack_228 [32];
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  int local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FGuid local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  pUVar3 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_1e8,pwVar11);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(pUVar3,(FName)&local_1e0);
  pUVar3 = (this->Collection).field0_0x0.DebugPtr;
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UNiagaraParameterCollectionInstance::SetVector4Parameter",0x38,Yes);
  local_1d8 = local_1e0;
  if (((pUVar3 == (UNiagaraParameterCollection *)0x0) ||
      (this_00 = (pUVar3->SourceMaterialCollection).field0_0x0.DebugPtr,
      this_00 == (UMaterialParameterCollection *)0x0)) ||
     (pFVar7 = UMaterialParameterCollection::GetParameterId(this_00,&local_180,local_1e0),
     ((pFVar7->D == 0 && pFVar7->C == 0) && pFVar7->B == 0) && pFVar7->A == 0)) {
    bVar5 = true;
  }
  else {
    if (LogWrittenOnce == false) {
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar8 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)
                            (pUVar3->SourceMaterialCollection).field0_0x0.DebugPtr,&local_190,
                            (UObject *)0x0,None);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)pUVar3,&local_1a0,(UObject *)0x0,None);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_1d8,&local_1b0);
        local_208 = (FScriptContainerElement *)pwVar12;
        local_200 = (FScriptContainerElement *)pwVar11;
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Skipping_attemp_151de1a20,
                   (FLogCategoryBase *)&LogNiagara);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      LogWrittenOnce = true;
    }
    bVar5 = false;
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  if (bVar5) {
    local_1d0 = local_1e0;
    if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      local_1c8 = -1;
    }
    else {
      pFVar9 = FNiagaraTypeRegistry::Get();
      local_1c8 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar9,&FNiagaraTypeDefinition::Vec4Def);
    }
    local_1f8 = (float)(param_2->field0_0x0)._s_0.X;
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    fStack_1f4 = (float)(param_2->field0_0x0)._s_0.Y;
    fStack_1f0 = (float)(param_2->field0_0x0)._s_0.Z;
    fStack_1ec = (float)(param_2->field0_0x0)._s_0.W;
    pFVar9 = FNiagaraTypeRegistry::Get();
    this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar9,local_1c8);
    iVar6 = FNiagaraTypeDefinition::GetSize(this_01);
    if ((iVar6 != 0x10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Param.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x232,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    piVar10 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                               (&this->ParameterStorage,&local_1d0,0);
    if ((piVar10 != (int *)0x0) && (*piVar10 != -1)) {
      pFVar2 = (this->ParameterStorage).ParameterData.AllocatorInstance.Data + *piVar10;
      *(ulonglong *)pFVar2 = CONCAT44(fStack_1f4,local_1f8);
      *(ulonglong *)(pFVar2 + 8) = CONCAT44(fStack_1ec,fStack_1f0);
      (this->ParameterStorage).bParametersDirty = 1;
    }
    if (local_1c0 != (void *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  return;
}

// SetVectorParameter @ 149308a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SetVectorParameter
          (UNiagaraParameterCollectionInstance *this,FString *param_1,TVector<double> *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UNiagaraParameterCollection *pUVar5;
  UMaterialParameterCollection *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FGuid *pFVar10;
  FString *pFVar11;
  FNiagaraTypeRegistry *pFVar12;
  FNiagaraTypeDefinition *this_01;
  int *piVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined1 auStack_248 [32];
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  int local_1f8;
  void *local_1f0;
  undefined8 local_1e8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FGuid local_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_248;
  pUVar5 = (this->Collection).field0_0x0.DebugPtr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_218,pwVar14);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(pUVar5,(FName)&local_210);
  pUVar5 = (this->Collection).field0_0x0.DebugPtr;
  local_198._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_198,"UNiagaraParameterCollectionInstance::SetVectorParameter",0x37,Yes);
  local_208 = local_210;
  if (((pUVar5 == (UNiagaraParameterCollection *)0x0) ||
      (this_00 = (pUVar5->SourceMaterialCollection).field0_0x0.DebugPtr,
      this_00 == (UMaterialParameterCollection *)0x0)) ||
     (pFVar10 = UMaterialParameterCollection::GetParameterId(this_00,&local_1b0,local_210),
     ((pFVar10->D == 0 && pFVar10->C == 0) && pFVar10->B == 0) && pFVar10->A == 0)) {
    bVar8 = true;
  }
  else {
    if (LogWrittenOnce == false) {
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar11 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)
                             (pUVar5->SourceMaterialCollection).field0_0x0.DebugPtr,&local_1c0,
                             (UObject *)0x0,None);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pFVar11 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pUVar5,&local_1d0,(UObject *)0x0,None);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_208,&local_1e0);
        local_228 = (FScriptContainerElement *)pwVar15;
        local_220 = (FScriptContainerElement *)pwVar14;
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Skipping_attemp_151de1a00,
                   (FLogCategoryBase *)&LogNiagara);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
      }
      LogWrittenOnce = true;
    }
    bVar8 = false;
  }
  if ((void *)local_198._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_198._padding_);
  }
  if (bVar8) {
    local_200 = local_210;
    if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      local_1f8 = -1;
    }
    else {
      pFVar12 = FNiagaraTypeRegistry::Get();
      local_1f8 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar12,&FNiagaraTypeDefinition::Vec3Def);
    }
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.Z;
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    pFVar12 = FNiagaraTypeRegistry::Get();
    this_01 = FNiagaraTypeRegistry::GetRegisteredType(pFVar12,local_1f8);
    iVar9 = FNiagaraTypeDefinition::GetSize(this_01);
    if ((iVar9 != 0xc) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Param.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x232,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar13 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                               (&this->ParameterStorage,&local_200,0);
    if ((piVar13 != (int *)0x0) && (iVar9 = *piVar13, iVar9 != -1)) {
      pFVar6 = (this->ParameterStorage).ParameterData.AllocatorInstance.Data;
      *(float *)(pFVar6 + iVar9) = (float)dVar2;
      *(float *)(pFVar6 + (longlong)iVar9 + 4) = (float)dVar3;
      *(float *)(pFVar6 + (longlong)iVar9 + 8) = (float)dVar4;
      (this->ParameterStorage).bParametersDirty = 1;
    }
    if (local_1f0 != (void *)0x0) {
      FMemory::Free(local_1f0);
    }
  }
  return;
}

// StaticRegisterNativesUNiagaraParameterCollectionInstance @ 149309e40

void __cdecl
UNiagaraParameterCollectionInstance::StaticRegisterNativesUNiagaraParameterCollectionInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SyncWithCollection @ 149309e80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SyncWithCollection(UNiagaraParameterCollectionInstance *this)

{
  FNiagaraParameterStore *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *this_01;
  TObjectPtr<UNiagaraParameterCollection>_u_0 TVar4;
  UNiagaraParameterCollection *pUVar5;
  UNiagaraParameterCollectionInstance *pUVar6;
  code *pcVar7;
  FNiagaraVariable *pFVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  int *piVar15;
  UNiagaraDataInterface *pUVar16;
  UObject *pUVar17;
  TObjectPtr<UObject> TVar18;
  FNiagaraTypeRegistry *pFVar19;
  FNiagaraTypeDefinition *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong *plVar22;
  FNiagaraParameterStore *this_02;
  FScriptContainerElement *pFVar23;
  longlong *plVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  FNiagaraVariable *this_03;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20 [2];
  int local_118;
  uint local_114;
  FName local_110;
  FNiagaraVariable *local_108;
  uint *local_100;
  FNiagaraTypeDefinition *local_f8;
  FNiagaraParameterStore *local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  FNiagaraParameterStore local_d8;
  
  this_00 = &this->ParameterStorage;
  FNiagaraParameterStore::FNiagaraParameterStore(&local_d8,this_00);
  (**(code **)(this_00->_padding_ + 0x30))
            (this_00,(this->Collection).field0_0x0.DebugPtr == (UNiagaraParameterCollection *)0x0);
  TVar4 = (this->Collection).field0_0x0;
  if (TVar4.DebugPtr == (UNiagaraParameterCollection *)0x0) {
    DestructItems<FNiagaraVariable,int>
              ((FNiagaraVariable *)(this->OverridenParameters).AllocatorInstance.Data,
               (this->OverridenParameters).ArrayNum);
    piVar15 = &(this->OverridenParameters).ArrayMax;
    (this->OverridenParameters).ArrayNum = 0;
    if (*piVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->OverridenParameters).AllocatorInstance,0,piVar15);
    }
LAB_14930a521:
    FNiagaraParameterStore::~FNiagaraParameterStore(&local_d8);
    return;
  }
  local_114 = ((TVar4.DebugPtr)->Parameters).ArrayNum;
  uVar13 = (ulonglong)(int)local_114;
  this_03 = *(FNiagaraVariable **)((longlong)TVar4 + 0x30);
  local_108 = this_03 + uVar13;
  while( true ) {
    pFVar8 = local_108;
    if (((TVar4.DebugPtr)->Parameters).ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNiagaraVariable_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_03 == pFVar8) break;
    puVar14 = (uint *)(**(code **)(local_d8._padding_ + 0x58))(&local_d8,this_03,0);
    if (puVar14 == (uint *)0x0) {
LAB_149309fba:
      pUVar6 = (((this->Collection).field0_0x0.DebugPtr)->DefaultInstance).field0_0x0.DebugPtr;
      this_02 = &pUVar6->ParameterStorage;
      piVar15 = (int *)(**(code **)((pUVar6->ParameterStorage)._padding_ + 0x58))(this_02,this_03);
      if ((piVar15 == (int *)0x0) || (iVar25 = *piVar15, iVar25 == -1)) goto LAB_14930a341;
      local_118 = -1;
      (**(code **)(this_00->_padding_ + 0x10))(this_00,this_03,0,1,&local_118);
      bVar9 = FNiagaraVariableBase::IsDataInterface((FNiagaraVariableBase *)this_03);
      if (bVar9) {
        local_110.ComparisonIndex.Value = 0;
        local_110.Number = 0;
        pUVar16 = FNiagaraParameterStore::GetDataInterface(this_02,iVar25);
        pUVar17 = StaticDuplicateObject
                            ((UObject *)pUVar16,(UObject *)this,local_110,
                             RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                             RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                             RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                             RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient
                             |RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|
                             RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|
                             RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                             RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
                             RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|
                             RF_MarkAsNative|RF_Standalone|RF_Public,(UClass *)0x0,Normal,
                             PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native
                             |ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport
                             |AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                             ReachabilityFlag0);
        pUVar16 = CastChecked<UNiagaraDataInterface,UObject>(pUVar17);
        FNiagaraParameterStore::SetDataInterface(this_00,pUVar16,this_03);
        uVar13 = (ulonglong)local_114;
        this_03 = this_03 + 1;
      }
      else {
        bVar9 = FNiagaraVariableBase::IsUObject((FNiagaraVariableBase *)this_03);
        if (!bVar9) {
          pFVar19 = FNiagaraTypeRegistry::Get();
          pFVar20 = FNiagaraTypeRegistry::GetRegisteredType(pFVar19,(int)this_03->_padding_);
          iVar11 = FNiagaraTypeDefinition::GetSize(pFVar20);
          iVar12 = local_118;
          pFVar19 = FNiagaraTypeRegistry::Get();
          pFVar20 = FNiagaraTypeRegistry::GetRegisteredType(pFVar19,(int)this_03->_padding_);
          pFVar21 = (FScriptContainerElement *)
                    FNiagaraParameterStore::GetParameterData(this_02,iVar25,pFVar20);
          if (pFVar21 == (FScriptContainerElement *)0x0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x255,L"");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if ((iVar12 < 0) || ((this->ParameterStorage).ParameterData.ArrayNum < iVar11 + iVar12)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x256,L"");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          goto LAB_14930a31f;
        }
        iVar25 = (int)local_e0;
LAB_14930a255:
        TVar18 = FNiagaraParameterStore::GetUObject(this_02,iVar25);
        FNiagaraParameterStore::SetUObject(this_00,TVar18,this_03);
        uVar13 = (ulonglong)local_114;
        this_03 = this_03 + 1;
      }
    }
    else {
      uVar26 = *puVar14;
      if (uVar26 == 0xffffffff) goto LAB_149309fba;
      pUVar5 = (this->Collection).field0_0x0.DebugPtr;
      if ((pUVar5 == (UNiagaraParameterCollection *)0x0) ||
         ((pUVar5->DefaultInstance).field0_0x0.DebugPtr != this)) {
        pFVar21 = (this->OverridenParameters).AllocatorInstance.Data;
        pFVar23 = pFVar21 + (longlong)(this->OverridenParameters).ArrayNum * 0x20;
        if (pFVar21 != pFVar23) {
          do {
            if ((*(longlong *)pFVar21 == this_03->_padding_) &&
               (*(int *)(pFVar21 + 8) == (int)this_03->_padding_)) goto LAB_14930a082;
            pFVar21 = pFVar21 + 0x20;
          } while (pFVar21 != pFVar23);
        }
        goto LAB_149309fba;
      }
LAB_14930a082:
      local_res20[0] = -1;
      (**(code **)(this_00->_padding_ + 0x10))(this_00,this_03,0,1,local_res20);
      bVar9 = FNiagaraVariableBase::IsDataInterface((FNiagaraVariableBase *)this_03);
      if (bVar9) {
        if (((int)uVar26 < 0) || (local_d8.DataInterfaces.ArrayNum <= (int)uVar26)) {
          FNiagaraParameterStore::SetDataInterface(this_00,(UNiagaraDataInterface *)0x0,this_03);
          uVar13 = (ulonglong)local_114;
          this_03 = this_03 + 1;
        }
        else {
          uVar27 = 0;
          if ((int)uVar26 < local_d8.DataInterfaces.ArrayNum) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          FNiagaraParameterStore::SetDataInterface
                    (this_00,*(UNiagaraDataInterface **)
                              (local_d8.DataInterfaces.AllocatorInstance.Data +
                              (longlong)(int)uVar26 * 8),this_03);
          uVar13 = (ulonglong)local_114;
          this_03 = this_03 + 1;
        }
      }
      else {
        bVar9 = FNiagaraVariableBase::IsUObject((FNiagaraVariableBase *)this_03);
        if (bVar9) {
          iVar25 = (int)local_e8;
          this_02 = &local_d8;
          goto LAB_14930a255;
        }
        pFVar19 = FNiagaraTypeRegistry::Get();
        pFVar20 = FNiagaraTypeRegistry::GetRegisteredType(pFVar19,(int)this_03->_padding_);
        iVar11 = FNiagaraTypeDefinition::GetSize(pFVar20);
        iVar12 = local_res20[0];
        pFVar19 = FNiagaraTypeRegistry::Get();
        pFVar20 = FNiagaraTypeRegistry::GetRegisteredType(pFVar19,(int)this_03->_padding_);
        iVar25 = local_d8.ParameterData.ArrayNum;
        local_res18[0] = uVar26;
        if (((int)uVar26 < 0) ||
           (iVar10 = FNiagaraTypeDefinition::GetSize(pFVar20),
           iVar25 < (int)(iVar10 + local_res18[0]))) {
          local_100 = local_res18;
          local_f0 = &local_d8;
          local_f8 = pFVar20;
          `FNiagaraParameterStore::GetParameterData'::__l2::<lambda_1>::operator()(&local_100);
        }
        pFVar21 = local_d8.ParameterData.AllocatorInstance.Data + (int)local_res18[0];
        if (pFVar21 == (FScriptContainerElement *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x255,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if ((iVar12 < 0) || ((this->ParameterStorage).ParameterData.ArrayNum < iVar11 + iVar12)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x256,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
LAB_14930a31f:
        pFVar23 = (this->ParameterStorage).ParameterData.AllocatorInstance.Data + iVar12;
        if (pFVar23 != pFVar21) {
          memcpy(pFVar23,pFVar21,(longlong)iVar11);
        }
        (this->ParameterStorage).bParametersDirty = 1;
LAB_14930a341:
        this_03 = this_03 + 1;
        uVar13 = (ulonglong)local_114;
      }
    }
  }
  this_01 = &this->OverridenParameters;
  pFVar21 = (this->OverridenParameters).AllocatorInstance.Data;
  pFVar29 = pFVar21 + (longlong)(this->OverridenParameters).ArrayNum * 0x20;
  pFVar23 = pFVar21;
LAB_14930a370:
  if (pFVar23 != pFVar29) {
    plVar22 = *(longlong **)((longlong)TVar4 + 0x30);
    plVar24 = plVar22 + (longlong)((TVar4.DebugPtr)->Parameters).ArrayNum * 4;
    if (plVar22 != plVar24) {
      do {
        if ((*plVar22 == *(longlong *)pFVar23) && ((int)plVar22[1] == *(int *)(pFVar23 + 8)))
        goto LAB_14930a42d;
        plVar22 = plVar22 + 4;
      } while (plVar22 != plVar24);
    }
    plVar22 = *(longlong **)((longlong)TVar4 + 0x30);
    while (pFVar28 = pFVar29, pFVar29 = pFVar28 + -0x20, pFVar23 != pFVar29) {
      if (plVar22 != plVar22 + (longlong)((TVar4.DebugPtr)->Parameters).ArrayNum * 4) {
        plVar24 = plVar22;
        do {
          if ((*plVar24 == *(longlong *)pFVar29) && ((int)plVar24[1] == *(int *)(pFVar28 + -0x18)))
          {
            pFVar1 = pFVar28 + -0x10;
            *(longlong *)pFVar23 = *(longlong *)pFVar29;
            pFVar2 = pFVar23 + 0x10;
            *(undefined4 *)(pFVar23 + 8) = *(undefined4 *)(pFVar28 + -0x18);
            if (pFVar2 != pFVar1) {
              if (*(void **)pFVar2 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar2);
              }
              *(longlong *)pFVar2 = *(longlong *)pFVar1;
              *(longlong *)pFVar1 = 0;
              *(undefined4 *)(pFVar23 + 0x18) = *(undefined4 *)(pFVar28 + -8);
              *(undefined4 *)(pFVar23 + 0x1c) = *(undefined4 *)(pFVar28 + -4);
              *(longlong *)(pFVar28 + -8) = 0;
            }
            goto LAB_14930a42d;
          }
          plVar24 = plVar24 + 4;
        } while (plVar24 != plVar22 + (longlong)((TVar4.DebugPtr)->Parameters).ArrayNum * 4);
      }
    }
  }
  iVar25 = (this->OverridenParameters).ArrayNum;
  uVar13 = (longlong)pFVar23 - (longlong)pFVar21 >> 5;
  uVar26 = (uint)uVar13;
  if (iVar25 < (int)uVar26) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,uVar26 - iVar25,&this_01->AllocatorInstance,
                        &(this->OverridenParameters).ArrayNum,&(this->OverridenParameters).ArrayMax)
    ;
    DefaultConstructItems<FNiagaraVariable,int>
              ((this_01->AllocatorInstance).Data + (longlong)iVar12 * 0x20,uVar26 - iVar25);
  }
  else {
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13 & 0xffffffff);
    }
    if ((int)uVar26 < iVar25) {
      uVar27 = iVar25 - uVar26;
      if (((int)(uVar27 | uVar26) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar27 != 0) {
        TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_01,uVar26,uVar27);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&this_01->AllocatorInstance,(this->OverridenParameters).ArrayNum,
                   &(this->OverridenParameters).ArrayMax);
      }
    }
  }
  FNiagaraParameterStore::Rebind(&this->ParameterStorage);
  goto LAB_14930a521;
LAB_14930a42d:
  pFVar23 = pFVar23 + 0x20;
  goto LAB_14930a370;
}

// SyncWithCollectionParameters @ 14930a550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UNiagaraParameterCollectionInstance::SyncWithCollectionParameters
          (UNiagaraParameterCollectionInstance *this,TArrayView<FName_const_,int> *param_1)

{
  undefined1 *puVar1;
  TObjectPtr<UNiagaraParameterCollection>_u_0 TVar2;
  UNiagaraParameterCollection *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  int *piVar9;
  UNiagaraDataInterface *pUVar10;
  UObject *pUVar11;
  TObjectPtr<UObject> TVar12;
  FNiagaraTypeRegistry *pFVar13;
  FNiagaraTypeDefinition *pFVar14;
  FScriptContainerElement *_Src;
  ulonglong uVar15;
  FName *pFVar16;
  FScriptContainerElement *_Dst;
  FNiagaraVariable *this_00;
  int iVar17;
  FNiagaraVariable *pFVar18;
  FNiagaraParameterStore *this_01;
  undefined1 local_res10 [8];
  uint local_res18;
  FName local_res20;
  undefined1 local_40 [8];
  
  if (param_1->ArrayNum == 0) {
    return;
  }
  TVar2 = (this->Collection).field0_0x0;
  local_res18 = ((TVar2.DebugPtr)->Parameters).ArrayNum;
  uVar15 = (ulonglong)(int)local_res18;
  this_00 = *(FNiagaraVariable **)((longlong)TVar2 + 0x30);
  pFVar18 = this_00 + uVar15;
LAB_14930a5a7:
  while( true ) {
    if (((TVar2.DebugPtr)->Parameters).ArrayNum != (int)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNiagaraVariable,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00 == pFVar18) {
      return;
    }
    pFVar16 = param_1->DataPtr;
    pFVar8 = pFVar16 + param_1->ArrayNum;
    if (pFVar16 == pFVar8) break;
    do {
      if (*pFVar16 == (FName)this_00->_padding_) {
        pUVar3 = (this->Collection).field0_0x0.DebugPtr;
        if ((pUVar3 != (UNiagaraParameterCollection *)0x0) &&
           ((pUVar3->DefaultInstance).field0_0x0.DebugPtr == this)) goto LAB_14930a833;
        pFVar8 = (FName *)(this->OverridenParameters).AllocatorInstance.Data;
        pFVar16 = pFVar8 + (longlong)(this->OverridenParameters).ArrayNum * 4;
        goto joined_r0x00014930a628;
      }
      pFVar16 = pFVar16 + 1;
    } while (pFVar16 != pFVar8);
    this_00 = this_00 + 1;
    uVar15 = (ulonglong)local_res18;
  }
  goto LAB_14930a833;
joined_r0x00014930a628:
  if (pFVar8 == pFVar16) goto LAB_14930a64a;
  if ((*pFVar8 == (FName)this_00->_padding_) &&
     (pFVar8[1].ComparisonIndex.Value == (uint)this_00->_padding_)) goto LAB_14930a833;
  pFVar8 = pFVar8 + 4;
  goto joined_r0x00014930a628;
LAB_14930a64a:
  this_01 = &((pUVar3->DefaultInstance).field0_0x0.DebugPtr)->ParameterStorage;
  piVar9 = (int *)(**(code **)(this_01->_padding_ + 0x58))(this_01,this_00,0);
  if (piVar9 == (int *)0x0) {
    iVar17 = -1;
  }
  else {
    iVar17 = *piVar9;
  }
  piVar9 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                            (&this->ParameterStorage,this_00,0);
  if (piVar9 == (int *)0x0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *piVar9;
  }
  if ((iVar17 != -1) && (iVar6 != -1)) {
    bVar5 = FNiagaraVariableBase::IsDataInterface((FNiagaraVariableBase *)this_00);
    if (bVar5) {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
      pUVar10 = FNiagaraParameterStore::GetDataInterface(this_01,iVar17);
      pUVar11 = StaticDuplicateObject
                          ((UObject *)pUVar10,(UObject *)this,local_res20,
                           RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                           RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                           RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                           RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                           RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                           RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                           RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                           RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                           RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                           RF_Public,(UClass *)0x0,Normal,
                           PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                           ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                           AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                           ReachabilityFlag0);
      pUVar10 = CastChecked<UNiagaraDataInterface,UObject>(pUVar11);
      FNiagaraParameterStore::SetDataInterface(&this->ParameterStorage,pUVar10,this_00);
      this_00 = this_00 + 1;
      uVar15 = (ulonglong)local_res18;
      goto LAB_14930a5a7;
    }
    bVar5 = FNiagaraVariableBase::IsUObject((FNiagaraVariableBase *)this_00);
    if (bVar5) {
      TVar12 = FNiagaraParameterStore::GetUObject(this_01,(int)local_40);
      FNiagaraParameterStore::SetUObject(&this->ParameterStorage,TVar12,this_00);
      this_00 = this_00 + 1;
      uVar15 = (ulonglong)local_res18;
      goto LAB_14930a5a7;
    }
    piVar9 = (int *)(**(code **)((this->ParameterStorage)._padding_ + 0x58))
                              (&this->ParameterStorage,this_00,0);
    if (piVar9 != (int *)0x0) {
      pFVar13 = FNiagaraTypeRegistry::Get();
      pFVar14 = FNiagaraTypeRegistry::GetRegisteredType(pFVar13,(int)this_00->_padding_);
      iVar7 = FNiagaraTypeDefinition::GetSize(pFVar14);
      iVar6 = *piVar9;
      pFVar13 = FNiagaraTypeRegistry::Get();
      pFVar14 = FNiagaraTypeRegistry::GetRegisteredType(pFVar13,(int)this_00->_padding_);
      _Src = (FScriptContainerElement *)
             FNiagaraParameterStore::GetParameterData(this_01,iVar17,pFVar14);
      if ((_Src == (FScriptContainerElement *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x255,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((iVar6 < 0) || ((this->ParameterStorage).ParameterData.ArrayNum < iVar7 + iVar6)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _Dst = (this->ParameterStorage).ParameterData.AllocatorInstance.Data + iVar6;
      if (_Dst != _Src) {
        memcpy(_Dst,_Src,(longlong)iVar7);
      }
      (this->ParameterStorage).bParametersDirty = 1;
    }
  }
LAB_14930a833:
  this_00 = this_00 + 1;
  uVar15 = (ulonglong)local_res18;
  goto LAB_14930a5a7;
}

// Tick @ 14930aa50

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
UNiagaraParameterCollectionInstance::Tick(UNiagaraParameterCollectionInstance *this,UWorld *param_1)

{
  int *piVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->DirtyParameterLock);
  if (((this->DirtyScalarParameters).ArrayNum != 0) || ((this->DirtyVectorParameters).ArrayNum != 0)
     ) {
    RefreshSourceParameters(this,param_1,&this->DirtyScalarParameters,&this->DirtyVectorParameters);
    piVar1 = &(this->DirtyScalarParameters).ArrayMax;
    (this->DirtyScalarParameters).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->DirtyScalarParameters).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->DirtyVectorParameters).ArrayMax;
    (this->DirtyVectorParameters).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&(this->DirtyVectorParameters).AllocatorInstance,0,piVar1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->DirtyParameterLock);
  FNiagaraParameterStore::Tick(&this->ParameterStorage);
  return;
}

// Unbind @ 14930bcb0

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
UNiagaraParameterCollectionInstance::Unbind
          (UNiagaraParameterCollectionInstance *this,UWorld *param_1)

{
  UNiagaraParameterCollection *pUVar1;
  UMaterialParameterCollection *pUVar2;
  FDelegateHandle FVar3;
  UMaterialParameterCollectionInstance *pUVar4;
  
  pUVar1 = (this->Collection).field0_0x0.DebugPtr;
  if (((pUVar1 != (UNiagaraParameterCollection *)0x0) &&
      (pUVar2 = (pUVar1->SourceMaterialCollection).field0_0x0.DebugPtr,
      pUVar2 != (UMaterialParameterCollection *)0x0)) &&
     (pUVar4 = UWorld::GetParameterCollectionInstance(param_1,pUVar2),
     pUVar4 != (UMaterialParameterCollectionInstance *)0x0)) {
    FVar3.ID = (this->ScalarParamUpdateDelegate).ID;
    if (FVar3.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar4->ScalarParameterUpdatedDelegate,FVar3);
    }
    FVar3.ID = (this->VectorParamUpdateDelegate).ID;
    if (FVar3.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar4->VectorParameterUpdatedDelegate,FVar3);
    }
  }
  (this->ScalarParamUpdateDelegate).ID = 0;
  (this->VectorParamUpdateDelegate).ID = 0;
  return;
}

// execGetBoolParameter @ 14930e820

void __cdecl
UNiagaraParameterCollectionInstance::execGetBoolParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraParameterCollection *this;
  int iVar2;
  FNiagaraTypeRegistry *this_00;
  wchar_t *pwVar3;
  FName local_res8;
  FName local_res10;
  wchar_t *local_48;
  undefined8 local_40;
  FNiagaraVariableBase local_38;
  void *local_28;
  undefined8 local_20;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_40 != 0) {
    pwVar3 = local_48;
  }
  this = *(UNiagaraParameterCollection **)(param_1 + 1);
  ::FName::FName(&local_res8,pwVar3);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this,(FName)&local_res10);
  local_38.Name = local_res10;
  if (FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_38.TypeDefHandle.RegisteredTypeIndex = -1;
  }
  else {
    this_00 = FNiagaraTypeRegistry::Get();
    local_38.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeRegistry::RegisterTypeInternal(this_00,&FNiagaraTypeDefinition::BoolDef);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  iVar2 = FNiagaraParameterStore::GetParameterValue<int>
                    ((FNiagaraParameterStore *)&param_1[1].field_0x18,&local_38);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  *(bool *)param_3 = iVar2 == -1;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetColorParameter @ 14930e950

void __cdecl
UNiagaraParameterCollectionInstance::execGetColorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 *puVar1;
  FProperty *pFVar2;
  UNiagaraParameterCollection *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeRegistry *pFVar6;
  FNiagaraTypeDefinition *this_00;
  int *piVar7;
  wchar_t *pwVar8;
  FName local_res8;
  undefined8 local_res10;
  wchar_t *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_30;
  void *local_28;
  undefined8 local_20;
  
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar8 = L"";
  if ((int)local_50 != 0) {
    pwVar8 = local_58;
  }
  this = *(UNiagaraParameterCollection **)(param_1 + 1);
  ::FName::FName(&local_res8,pwVar8);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this,(FName)&local_res10);
  local_38 = local_res10;
  if (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_30 = -1;
  }
  else {
    pFVar6 = FNiagaraTypeRegistry::Get();
    local_30 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar6,&FNiagaraTypeDefinition::ColorDef);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  pFVar6 = FNiagaraTypeRegistry::Get();
  this_00 = FNiagaraTypeRegistry::GetRegisteredType(pFVar6,local_30);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar5 != 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar7 = (int *)(**(code **)(*(longlong *)&param_1[1].field_0x18 + 0x58))
                            (&param_1[1].field_0x18,&local_38,0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    if (iVar5 != -1) {
      if ((iVar5 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[2].field_0x18 < (longlong)iVar5 + 0x10U)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar1 = (undefined4 *)(*(longlong *)&param_1[2].field_0x10 + (longlong)iVar5);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      goto LAB_14930eaeb;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_14930eaeb:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  *(ulonglong *)param_3 = CONCAT44(uStack_44,local_48);
  *(ulonglong *)((longlong)param_3 + 8) = CONCAT44(uStack_3c,uStack_40);
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetFloatParameter @ 14930eb40

void __cdecl
UNiagaraParameterCollectionInstance::execGetFloatParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraParameterCollection *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeRegistry *pFVar5;
  FNiagaraTypeDefinition *this_00;
  int *piVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  FName local_res8;
  undefined8 local_res10;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  void *local_38;
  undefined8 local_30;
  
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar7 = L"";
  if ((int)local_50 != 0) {
    pwVar7 = local_58;
  }
  this = *(UNiagaraParameterCollection **)(param_1 + 1);
  ::FName::FName(&local_res8,pwVar7);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this,(FName)&local_res10);
  local_48 = local_res10;
  if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_40 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    local_40 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::FloatDef);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  pFVar5 = FNiagaraTypeRegistry::Get();
  this_00 = FNiagaraTypeRegistry::GetRegisteredType(pFVar5,local_40);
  iVar4 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar4 != 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar6 = (int *)(**(code **)(*(longlong *)&param_1[1].field_0x18 + 0x58))
                            (&param_1[1].field_0x18,&local_48,0);
  if (piVar6 != (int *)0x0) {
    iVar4 = *piVar6;
    if (iVar4 != -1) {
      if ((iVar4 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[2].field_0x18 < (longlong)iVar4 + 4U)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar8 = *(undefined4 *)((longlong)iVar4 + *(longlong *)&param_1[2].field_0x10);
      goto LAB_14930ece1;
    }
  }
  uVar8 = 0;
LAB_14930ece1:
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  *(undefined4 *)param_3 = uVar8;
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetIntParameter @ 14930ed30

void __cdecl
UNiagaraParameterCollectionInstance::execGetIntParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraParameterCollection *this;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeRegistry *this_00;
  int iVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FName *local_res10;
  FName local_res18;
  wchar_t *local_88;
  undefined8 local_80;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FNiagaraVariableBase local_50;
  void *local_40;
  undefined8 local_38;
  
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar6 = L"";
  if ((int)local_80 != 0) {
    pwVar6 = local_88;
  }
  this = *(UNiagaraParameterCollection **)(param_1 + 1);
  ::FName::FName(&local_res8,pwVar6);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this,(FName)&local_res18);
  local_res8 = (FName)FNiagaraTypeDefinition::IntStruct;
  local_68.DebugPtr = (UObject *)FNiagaraTypeDefinition::IntStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::IntStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::IntStruct);
  }
  local_5e = 0;
  local_60 = 2;
  iVar4 = -1;
  local_5c = 0xffffffffffffffff;
  bVar3 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res8,UserFacing);
  if (!bVar3) {
    local_res10 = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
  }
  if (((UScriptStruct *)local_68.DebugPtr == (UScriptStruct *)0x0) ||
     (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
  }
  iVar5 = local_78.Data.ArrayNum + -1;
  FVar2.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_50.Name = local_res18;
  if ((UScriptStruct *)local_68.DebugPtr != (UScriptStruct *)0x0) {
    this_00 = FNiagaraTypeRegistry::Get();
    iVar4 = FNiagaraTypeRegistry::RegisterTypeInternal
                      (this_00,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  local_50.TypeDefHandle.RegisteredTypeIndex = iVar4;
  iVar4 = FNiagaraParameterStore::GetParameterValue<int>
                    ((FNiagaraParameterStore *)&param_1[1].field_0x18,&local_50);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  *(int *)param_3 = iVar4;
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execGetQuatParameter @ 14930f020

void __cdecl
UNiagaraParameterCollectionInstance::execGetQuatParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  UNiagaraParameterCollection *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeRegistry *pFVar6;
  FNiagaraTypeDefinition *this_00;
  int *piVar7;
  wchar_t *pwVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FName local_res8;
  undefined8 local_res10;
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  void *local_68;
  undefined8 local_60;
  
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar8 = L"";
  if ((int)local_80 != 0) {
    pwVar8 = local_88;
  }
  this = *(UNiagaraParameterCollection **)(param_1 + 1);
  ::FName::FName(&local_res8,pwVar8);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this,(FName)&local_res10);
  local_78 = local_res10;
  if (FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_70 = -1;
  }
  else {
    pFVar6 = FNiagaraTypeRegistry::Get();
    local_70 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar6,&FNiagaraTypeDefinition::QuatDef);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  pFVar6 = FNiagaraTypeRegistry::Get();
  this_00 = FNiagaraTypeRegistry::GetRegisteredType(pFVar6,local_70);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar5 != 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar7 = (int *)(**(code **)(*(longlong *)&param_1[1].field_0x18 + 0x58))
                            (&param_1[1].field_0x18,&local_78,0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    if (iVar5 != -1) {
      if ((iVar5 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[2].field_0x18 < (longlong)iVar5 + 0x10U)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pfVar1 = (float *)(*(longlong *)&param_1[2].field_0x10 + (longlong)iVar5);
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      goto LAB_14930f1d6;
    }
  }
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar9 = 0.0;
LAB_14930f1d6:
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  *(double *)param_3 = (double)fVar9;
  *(double *)((longlong)param_3 + 8) = (double)fVar10;
  *(double *)((longlong)param_3 + 0x10) = (double)fVar11;
  *(double *)((longlong)param_3 + 0x18) = (double)fVar12;
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execGetVector2DParameter @ 14930f270

void __cdecl
UNiagaraParameterCollectionInstance::execGetVector2DParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraParameterCollection *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeRegistry *pFVar5;
  FNiagaraTypeDefinition *this_00;
  int *piVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  FName local_res10;
  undefined8 local_res18 [2];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  void *local_58;
  undefined8 local_50;
  
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar7 = L"";
  if ((int)local_70 != 0) {
    pwVar7 = local_78;
  }
  this = *(UNiagaraParameterCollection **)(param_1 + 1);
  ::FName::FName(&local_res10,pwVar7);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this,(FName)local_res18);
  local_68 = local_res18[0];
  if (FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_60 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    local_60 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec2Def);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  pFVar5 = FNiagaraTypeRegistry::Get();
  this_00 = FNiagaraTypeRegistry::GetRegisteredType(pFVar5,local_60);
  iVar4 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar4 != 8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar6 = (int *)(**(code **)(*(longlong *)&param_1[1].field_0x18 + 0x58))
                            (&param_1[1].field_0x18,&local_68,0);
  if (piVar6 != (int *)0x0) {
    iVar4 = *piVar6;
    if (iVar4 != -1) {
      if ((iVar4 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[2].field_0x18 < (longlong)iVar4 + 8U)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_res8 = *(undefined8 *)((longlong)iVar4 + *(longlong *)&param_1[2].field_0x10);
      goto LAB_14930f41b;
    }
  }
  local_res8 = 0;
LAB_14930f41b:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  *(double *)param_3 = (double)(float)local_res8;
  *(double *)((longlong)param_3 + 8) = (double)local_res8._4_4_;
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execGetVector4Parameter @ 14930f480

void __cdecl
UNiagaraParameterCollectionInstance::execGetVector4Parameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  UNiagaraParameterCollection *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeRegistry *pFVar6;
  FNiagaraTypeDefinition *this_00;
  int *piVar7;
  wchar_t *pwVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FName local_res8;
  undefined8 local_res10;
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  void *local_68;
  undefined8 local_60;
  
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar8 = L"";
  if ((int)local_80 != 0) {
    pwVar8 = local_88;
  }
  this = *(UNiagaraParameterCollection **)(param_1 + 1);
  ::FName::FName(&local_res8,pwVar8);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this,(FName)&local_res10);
  local_78 = local_res10;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_70 = -1;
  }
  else {
    pFVar6 = FNiagaraTypeRegistry::Get();
    local_70 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar6,&FNiagaraTypeDefinition::Vec4Def);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  pFVar6 = FNiagaraTypeRegistry::Get();
  this_00 = FNiagaraTypeRegistry::GetRegisteredType(pFVar6,local_70);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar5 != 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar7 = (int *)(**(code **)(*(longlong *)&param_1[1].field_0x18 + 0x58))
                            (&param_1[1].field_0x18,&local_78,0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    if (iVar5 != -1) {
      if ((iVar5 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[2].field_0x18 < (longlong)iVar5 + 0x10U)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pfVar1 = (float *)(*(longlong *)&param_1[2].field_0x10 + (longlong)iVar5);
      fVar9 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar10 = pfVar1[3];
      goto LAB_14930f653;
    }
  }
  fVar12 = 0.0;
  fVar11 = 0.0;
  fVar9 = 0.0;
  fVar10 = __real_3f800000;
LAB_14930f653:
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  *(double *)param_3 = (double)fVar9;
  *(double *)((longlong)param_3 + 8) = (double)fVar12;
  *(double *)((longlong)param_3 + 0x10) = (double)fVar11;
  *(double *)((longlong)param_3 + 0x18) = (double)fVar10;
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execGetVectorParameter @ 14930f6e0

void __cdecl
UNiagaraParameterCollectionInstance::execGetVectorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraParameterCollection *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeRegistry *pFVar5;
  FNiagaraTypeDefinition *this_00;
  int *piVar6;
  longlong lVar7;
  float fVar8;
  wchar_t *pwVar9;
  FName local_res8;
  undefined8 local_res10;
  undefined8 local_88;
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  void *local_58;
  undefined8 local_50;
  
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar9 = L"";
  if ((int)local_70 != 0) {
    pwVar9 = local_78;
  }
  this = *(UNiagaraParameterCollection **)(param_1 + 1);
  ::FName::FName(&local_res8,pwVar9);
  UNiagaraParameterCollection::ConditionalAddFullNamespace(this,(FName)&local_res10);
  local_68 = local_res10;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_60 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    local_60 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec3Def);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  pFVar5 = FNiagaraTypeRegistry::Get();
  this_00 = FNiagaraTypeRegistry::GetRegisteredType(pFVar5,local_60);
  iVar4 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar4 != 0xc) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar6 = (int *)(**(code **)(*(longlong *)&param_1[1].field_0x18 + 0x58))
                            (&param_1[1].field_0x18,&local_68,0);
  if (piVar6 != (int *)0x0) {
    iVar4 = *piVar6;
    lVar7 = (longlong)iVar4;
    if (iVar4 != -1) {
      if ((iVar4 < 0) || ((ulonglong)(longlong)*(int *)&param_1[2].field_0x18 < lVar7 + 0xcU)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_88 = *(undefined8 *)(*(longlong *)&param_1[2].field_0x10 + lVar7);
      fVar8 = *(float *)(*(longlong *)&param_1[2].field_0x10 + 8 + lVar7);
      goto LAB_14930f89c;
    }
  }
  fVar8 = 0.0;
  local_88 = 0;
LAB_14930f89c:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  *(double *)param_3 = (double)(float)local_88;
  *(double *)((longlong)param_3 + 8) = (double)local_88._4_4_;
  *(double *)((longlong)param_3 + 0x10) = (double)fVar8;
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execSetBoolParameter @ 149310990

void __cdecl
UNiagaraParameterCollectionInstance::execSetBoolParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetBoolParameter((UNiagaraParameterCollectionInstance *)param_1,&local_18,local_res10[0] != 0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetColorParameter @ 149310a80

void __cdecl
UNiagaraParameterCollectionInstance::execSetColorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetColorParameter((UNiagaraParameterCollectionInstance *)param_1,&local_38,
                    (FLinearColor *)&local_18._s_0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetFloatParameter @ 149310cd0

void __cdecl
UNiagaraParameterCollectionInstance::execSetFloatParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetFloatParameter((UNiagaraParameterCollectionInstance *)param_1,&local_18,local_res10[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetIntParameter @ 149310dc0

void __cdecl
UNiagaraParameterCollectionInstance::execSetIntParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIntParameter((UNiagaraParameterCollectionInstance *)param_1,&local_18,local_res10[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetQuatParameter @ 149310eb0

void __cdecl
UNiagaraParameterCollectionInstance::execSetQuatParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TQuat<double> *pTVar2;
  FString local_38;
  TQuat<double> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar2 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetQuatParameter((UNiagaraParameterCollectionInstance *)param_1,&local_38,pTVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetVector2DParameter @ 149312660

void __cdecl
UNiagaraParameterCollectionInstance::execSetVector2DParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_38;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVector2DParameter
            ((UNiagaraParameterCollectionInstance *)param_1,&local_38,
             (TVector2<double> *)&local_18._s_0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetVector4Parameter @ 149312750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UNiagaraParameterCollectionInstance::execSetVector4Parameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector4<double>_u_0 *pTVar2;
  FString local_38;
  TVector4<double>_u_0 local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.W = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector4<double>_u_0 *)0x0) {
    pTVar2 = (TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVector4Parameter((UNiagaraParameterCollectionInstance *)param_1,&local_38,
                      (TVector4<double> *)&pTVar2->_s_0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetVectorParameter @ 149312860

void __cdecl
UNiagaraParameterCollectionInstance::execSetVectorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVectorParameter((UNiagaraParameterCollectionInstance *)param_1,&local_58,
                     (TVector<double> *)&local_28._s_0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

