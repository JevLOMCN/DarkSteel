// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// StaticStruct @ 146f14e50

UScriptStruct * __cdecl FEQSParametrizedQueryExecutionRequest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEQSParametrizedQueryExecutionRequest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEQSParametrizedQueryExecutionRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest,
                         (UObject *)pUVar1,L"EQSParametrizedQueryExecutionRequest");
  }
  return Z_Registration_Info_UScriptStruct_FEQSParametrizedQueryExecutionRequest.OuterSingleton;
}

// FEQSParametrizedQueryExecutionRequest @ 146f28b60

FEQSParametrizedQueryExecutionRequest * __thiscall
FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest
          (FEQSParametrizedQueryExecutionRequest *this)

{
  undefined1 *puVar1;
  
  (this->EQSQueryBlackboardKey).bNoneIsAllowedValue = 0;
  this->bUseBBKeyForQueryTemplate = 0;
  this->bInitialized = 0;
  (this->QueryTemplate).field0_0x0.DebugPtr = (UEnvQuery *)0x0;
  (this->QueryConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryConfig).ArrayNum = 0;
  (this->QueryConfig).ArrayMax = 0;
  (this->EQSQueryBlackboardKey).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->EQSQueryBlackboardKey).AllowedTypes.ArrayNum = 0;
  (this->EQSQueryBlackboardKey).AllowedTypes.ArrayMax = 0;
  (this->EQSQueryBlackboardKey).SelectedKeyName.ComparisonIndex = 0;
  (this->EQSQueryBlackboardKey).SelectedKeyName.Number = 0;
  (this->EQSQueryBlackboardKey).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RunMode).Value = '\0';
  (this->EQSQueryBlackboardKey).SelectedKeyID = 0xffff;
  return this;
}

// Execute @ 146f463d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FEQSParametrizedQueryExecutionRequest::Execute
          (FEQSParametrizedQueryExecutionRequest *this,UObject *param_1,
          UBlackboardComponent *param_2,
          TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy> *param_3
          )

{
  undefined1 uVar1;
  uint uVar2;
  UBlackboardData *this_00;
  code *pcVar3;
  bool bVar4;
  FKey FVar5;
  int iVar6;
  FBlackboardEntry *pFVar7;
  UClass *pUVar8;
  uchar *puVar9;
  UEnvQuery *pUVar10;
  FString *pFVar11;
  FAIDynamicParam *pFVar12;
  UBlackboardKeyType_Object *pUVar13;
  FAIDynamicParam *pFVar14;
  wchar_t *pwVar15;
  undefined1 auStack_118 [32];
  FScriptContainerElement *local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  FString local_e0;
  TObjectPtr<UEnvQuery>_u_0 local_c8;
  UObject *local_c0;
  undefined8 local_b8;
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  TStack_b0;
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (this->bUseBBKeyForQueryTemplate == 0) goto LAB_146f465de;
  pwVar15 = L"";
  if ((param_2 == (UBlackboardComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlackboardComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTypes.cpp"
                         ,0x1ae,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  uVar2 = (this->EQSQueryBlackboardKey).SelectedKeyID;
  FVar5.Key = (ushort)uVar2;
  if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
     (local_f8 = (FScriptContainerElement *)(longlong)(int)uVar2,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("IntFitsIn<OutType>(In)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                        ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  this_00 = (param_2->BlackboardAsset).field0_0x0.DebugPtr;
  pUVar10 = (UEnvQuery *)UBlackboardKeyType_Object::InvalidValue;
  if (((this_00 != (UBlackboardData *)0x0) &&
      (pFVar7 = UBlackboardData::GetKey(this_00,FVar5),
      pUVar10 = (UEnvQuery *)UBlackboardKeyType_Object::InvalidValue,
      pFVar7 != (FBlackboardEntry *)0x0)) &&
     ((pFVar7->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
    pUVar8 = Z_Construct_UClass_UBlackboardKeyType_Object_NoRegister();
    pUVar13 = (UBlackboardKeyType_Object *)(pFVar7->KeyType).field0_0x0.DebugPtr;
    pUVar10 = (UEnvQuery *)UBlackboardKeyType_Object::InvalidValue;
    if ((UClass *)pUVar13->_padding_ == pUVar8) {
      if ((*(byte *)((longlong)&pUVar13->_padding_ + 3) & 2) != 0) {
        iVar6 = (param_2->KeyInstances).ArrayNum;
        if (iVar6 <= (int)(uVar2 & 0xffff)) {
          local_f8 = (FScriptContainerElement *)(longlong)(int)(uVar2 & 0xffff);
          local_f0 = (longlong)iVar6;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
        }
        pUVar13 = *(UBlackboardKeyType_Object **)
                   ((param_2->KeyInstances).AllocatorInstance.Data + (ulonglong)FVar5.Key * 8);
      }
      puVar9 = UBlackboardComponent::GetKeyRawData(param_2,FVar5);
      pUVar10 = (UEnvQuery *)UBlackboardKeyType_Object::InvalidValue;
      if (puVar9 + ((pFVar7->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance * 4 != (uchar *)0x0)
      {
        pUVar10 = (UEnvQuery *)
                  UBlackboardKeyType_Object::GetValue
                            (pUVar13,puVar9 + ((pFVar7->KeyType).field0_0x0.DebugPtr)->
                                              bCreateKeyInstance * 4);
      }
    }
  }
  if (pUVar10 == (UEnvQuery *)0x0) {
LAB_146f4656c:
    pUVar10 = (UEnvQuery *)0x0;
  }
  else {
    pUVar8 = UEnvQuery::StaticClass();
    iVar6 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar8->_padding_)) goto LAB_146f4656c;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UEnvQuery *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->QueryTemplate).field0_0x0.DebugPtr = pUVar10;
  if ((FVisualLogger::bIsRecording != 0) && (pUVar10 == (UEnvQuery *)0x0)) {
    pFVar11 = ::FName::ToString(&(this->EQSQueryBlackboardKey).SelectedKeyName,&local_e0);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    local_f8 = (FScriptContainerElement *)pwVar15;
    FVisualLogger::CategorizedLogfImpl
              (param_1,(FName *)&LogBehaviorTree.field_0x4,Warning,
               L"Trying to run EQS query configured to use BB key, but indicated key (%s) doesn\'t contain EQS template pointer"
              );
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
LAB_146f465de:
  local_c8 = (TObjectPtr<UEnvQuery>_u_0)(this->QueryTemplate).field0_0x0.DebugPtr;
  if (local_c8.DebugPtr == (UEnvQuery *)0x0) {
    iVar6 = -1;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_c8.DebugPtr);
    }
    local_c0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_b8 = 0;
    TStack_b0._0_8_ = 0;
    TStack_b0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    TStack_b0._48_8_ = _UNK_150631d98;
    TStack_b0._8_8_ = 0;
    TStack_b0._32_8_ = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    if (0 < (this->QueryConfig).ArrayNum) {
      iVar6 = (this->QueryConfig).ArrayNum;
      pFVar12 = (FAIDynamicParam *)(this->QueryConfig).AllocatorInstance.Data;
      pFVar14 = pFVar12 + iVar6;
      while( true ) {
        if ((this->QueryConfig).ArrayNum != iVar6) {
          `TCheckedPointerIterator<FAIDynamicParam,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_e8);
        }
        if (pFVar12 == pFVar14) break;
        FEnvQueryRequest::SetDynamicParam((FEnvQueryRequest *)&local_c8.ObjectPtr,pFVar12,param_2);
        pFVar12 = pFVar12 + 1;
      }
    }
    iVar6 = FEnvQueryRequest::Execute
                      ((FEnvQueryRequest *)&local_c8.ObjectPtr,(uint)(this->RunMode).Value,param_3);
    local_68 = 0;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&TStack_b0);
  }
  return iVar6;
}

// InitForOwnerAndBlackboard @ 146f5b4b0

void __thiscall
FEQSParametrizedQueryExecutionRequest::InitForOwnerAndBlackboard
          (FEQSParametrizedQueryExecutionRequest *this,UObject *param_1,UBlackboardData *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  UClass *local_48 [2];
  
  if (ZPULL(*(undefined4 *)&this->field_0x44,1,1) == 0) {
    *(uint *)&this->field_0x44 = *(undefined4 *)&this->field_0x44 | 2;
    local_48[0] = UEnvQuery::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48[0]);
    }
    FBlackboardKeySelector::AddObjectFilter
              (&this->EQSQueryBlackboardKey,param_1,(FName)0x0,(TSubclassOf<UObject>)local_48);
    if (((this->bUseBBKeyForQueryTemplate != 0) || (0 < (this->QueryConfig).ArrayNum)) &&
       (param_2 != (UBlackboardData *)0x0)) {
      pFVar5 = (this->QueryConfig).AllocatorInstance.Data;
      iVar1 = (this->QueryConfig).ArrayNum;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0x38;
      while( true ) {
        if ((this->QueryConfig).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FAIDynamicParam,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar5 == pFVar6) break;
        uVar2 = *(uint *)(pFVar5 + 0x30);
        if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((short)uVar2 == -1) && (*(longlong *)(pFVar5 + 0x20) != 0)) {
          FBlackboardKeySelector::ResolveSelectedKey
                    ((FBlackboardKeySelector *)(pFVar5 + 0x10),param_2);
        }
        pFVar5 = pFVar5 + 0x38;
      }
      if (this->bUseBBKeyForQueryTemplate != 0) {
        FBlackboardKeySelector::ResolveSelectedKey(&this->EQSQueryBlackboardKey,param_2);
      }
    }
  }
  return;
}

