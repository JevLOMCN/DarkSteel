// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticStruct @ 146f0f370

UScriptStruct * __cdecl FEnvQueryRequest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryRequest.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvQueryRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryRequest,(UObject *)pUVar1,
                         L"EnvQueryRequest");
  }
  return Z_Registration_Info_UScriptStruct_FEnvQueryRequest.OuterSingleton;
}

// Execute @ 146f46710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FEnvQueryRequest::Execute
          (FEnvQueryRequest *this,Type param_1,
          TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy> *param_2
          )

{
  UEnvQueryManager *this_00;
  UEnvQuery *pUVar1;
  int iVar2;
  UObject *pUVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  FStaticBasicLogRecord *pFVar6;
  UAISystemBase *pUVar7;
  FName local_res8;
  FReadAccessScope local_38;
  
  pUVar3 = (this->Owner).field0_0x0.DebugPtr;
  if (pUVar3 == (UObject *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_38);
    if ((*(int *)&param_2->field_0x10 == 0) ||
       (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)) {
      pUVar3 = (UObject *)0x0;
    }
    else {
      pUVar3 = (UObject *)(**(code **)(**(longlong **)&param_2->field_0x8 + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UObject *)0x0)) {
      (this->Owner).field0_0x0.DebugPtr = pUVar3;
      if (pUVar3 == (UObject *)0x0) {
        if ((byte)LogEQS._0_1_ < 3) {
          return -1;
        }
        pUVar1 = (this->QueryTemplate).field0_0x0.DebugPtr;
        if (pUVar1 == (UEnvQuery *)0x0) {
          ::FString::FString((FString *)&local_38,L"None");
          pFVar6 = &::LOG_Static;
        }
        else {
          local_res8 = (FName)pUVar1->_padding_;
          ::FName::ToString(&local_res8,(FString *)&local_38);
          pFVar6 = &::LOG_Static;
        }
        goto LAB_146f468fd;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar3);
      (this->Owner).field0_0x0.DebugPtr = pUVar3;
    }
  }
  pUVar4 = (this->World).field0_0x0.DebugPtr;
  if (pUVar4 == (UWorld *)0x0) {
    pUVar4 = UEngine::GetWorldFromContextObject(GEngine,pUVar3,ReturnNull);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UWorld *)0x0)) {
      (this->World).field0_0x0.DebugPtr = pUVar4;
      if (pUVar4 == (UWorld *)0x0) {
        if ((byte)LogEQS._0_1_ < 3) {
          return -1;
        }
        pUVar3 = (this->Owner).field0_0x0.DebugPtr;
        if (pUVar3 == (UObject *)0x0) {
          ::FString::FString((FString *)&local_38,L"None");
        }
        else {
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
          local_res8.Number = *(uint *)&pUVar3->field_0x1c;
          ::FName::ToString(&local_res8,(FString *)&local_38);
        }
        pFVar6 = &::LOG_Static;
LAB_146f468fd:
        UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogEQS);
        if ((FEnvQueryInstance *)local_38.DestructionSentinel._0_8_ == (FEnvQueryInstance *)0x0) {
          return -1;
        }
        FMemory::Free((void *)local_38.DestructionSentinel._0_8_);
        return -1;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      (this->World).field0_0x0.DebugPtr = pUVar4;
    }
  }
  pUVar7 = (pUVar4->AISystem).field0_0x0.DebugPtr;
  if (pUVar7 != (UAISystemBase *)0x0) {
    pUVar5 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) goto LAB_146f467fc;
  }
  pUVar7 = (UAISystemBase *)0x0;
LAB_146f467fc:
  if ((pUVar7 != (UAISystemBase *)0x0) &&
     (this_00 = (UEnvQueryManager *)pUVar7[2].OnMatchStateSetHandle.ID,
     this_00 != (UEnvQueryManager *)0x0)) {
    UEnvQueryManager::PrepareQueryInstance
              (this_00,(TSharedPtr<FEnvQueryInstance,1> *)&local_38,this,param_1);
    iVar2 = UEnvQueryManager::RunQuery(this_00,(TSharedPtr<FEnvQueryInstance,1> *)&local_38,param_2)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_38.DestructionSentinel.Accessor._4_4_,
                        local_38.DestructionSentinel.Accessor._0_4_));
    return iVar2;
  }
  if (2 < (byte)LogEQS._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
  }
  return -1;
}

// SetBoolParam @ 146f73b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryRequest * __thiscall
FEnvQueryRequest::SetBoolParam(FEnvQueryRequest *this,FName param_1,bool param_2)

{
  FName local_res10;
  float local_res18 [4];
  
  local_res18[0] = __real_bf800000;
  if (param_2) {
    local_res18[0] = __real_3f800000;
  }
  local_res10 = param_1;
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  Emplace<FName_const_&,float>
            ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
              *)&this->NamedParams,&local_res10,local_res18);
  return this;
}

// SetDynamicParam @ 146f74490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryRequest * __thiscall
FEnvQueryRequest::SetDynamicParam
          (FEnvQueryRequest *this,FAIDynamicParam *param_1,UBlackboardComponent *param_2)

{
  EAIParamType EVar1;
  undefined1 uVar2;
  uint uVar3;
  UBlackboardData *pUVar4;
  code *pcVar5;
  bool bVar6;
  FKey FVar7;
  int iVar8;
  FEnvQueryRequest *pFVar9;
  FBlackboardEntry *pFVar10;
  UClass *pUVar11;
  uchar *puVar12;
  FName *pFVar13;
  UBlackboardKeyType_Bool *pUVar14;
  UBlackboardKeyType_Int *pUVar15;
  UBlackboardKeyType_Float *pUVar16;
  float *pfVar17;
  float fVar18;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  FName local_res20;
  FName local_58;
  FName local_50;
  FAIDynamicParam *local_48;
  FEnvQueryRequest *local_40;
  
  if (param_2 == (UBlackboardComponent *)0x0) {
    uVar3 = (param_1->BBKey).SelectedKeyID;
    if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
      return pFVar9;
    }
    if (((short)uVar3 != -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BlackboardComponent || (Param.BBKey.IsSet() == false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                           ,0x50,L"BBKey.IsSet but no BlackboardComponent provided"), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
      return pFVar9;
    }
  }
  if (param_1->bAllowBBKey == 0) {
    uVar3 = (param_1->BBKey).SelectedKeyID;
    if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
      return pFVar9;
    }
    if ((short)uVar3 != -1) {
      local_48 = param_1;
      local_40 = this;
      `FEnvQueryRequest::SetDynamicParam'::__l2::<lambda_1>::operator()(&local_48);
    }
  }
  if (param_1->bAllowBBKey != 0) {
    uVar3 = (param_1->BBKey).SelectedKeyID;
    if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
      return pFVar9;
    }
    if (((short)uVar3 != -1) && (param_2 != (UBlackboardComponent *)0x0)) {
      EVar1 = param_1->ParamType;
      if (EVar1 == Float) {
        uVar3 = (param_1->BBKey).SelectedKeyID;
        FVar7.Key = (ushort)uVar3;
        if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
          return pFVar9;
        }
        pUVar4 = (param_2->BlackboardAsset).field0_0x0.DebugPtr;
        if (((pUVar4 != (UBlackboardData *)0x0) &&
            (pFVar10 = UBlackboardData::GetKey(pUVar4,FVar7), pFVar10 != (FBlackboardEntry *)0x0))
           && ((pFVar10->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
          pUVar11 = Z_Construct_UClass_UBlackboardKeyType_Float_NoRegister();
          pUVar16 = (UBlackboardKeyType_Float *)(pFVar10->KeyType).field0_0x0.DebugPtr;
          if ((UClass *)pUVar16->_padding_ == pUVar11) {
            if ((*(byte *)((longlong)&pUVar16->_padding_ + 3) & 2) != 0) {
              if (((param_2->KeyInstances).ArrayNum <= (int)(uVar3 & 0xffff)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
                return pFVar9;
              }
              pUVar16 = *(UBlackboardKeyType_Float **)
                         ((param_2->KeyInstances).AllocatorInstance.Data + (ulonglong)FVar7.Key * 8)
              ;
            }
            puVar12 = UBlackboardComponent::GetKeyRawData(param_2,FVar7);
            if (puVar12 + (-(uint)(((pFVar10->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance !=
                                  '\0') & 4) != (uchar *)0x0) {
              fVar18 = UBlackboardKeyType_Float::GetValue
                                 (pUVar16,puVar12 + (-(uint)(((pFVar10->KeyType).field0_0x0.DebugPtr
                                                             )->bCreateKeyInstance != '\0') & 4));
              SetFloatParam(this,param_1->ParamName,fVar18);
              return this;
            }
          }
        }
        SetFloatParam(this,param_1->ParamName,UBlackboardKeyType_Float::InvalidValue);
        return this;
      }
      if (EVar1 == Int) {
        uVar3 = (param_1->BBKey).SelectedKeyID;
        FVar7.Key = (ushort)uVar3;
        if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
          return pFVar9;
        }
        pUVar4 = (param_2->BlackboardAsset).field0_0x0.DebugPtr;
        if (((pUVar4 != (UBlackboardData *)0x0) &&
            (pFVar10 = UBlackboardData::GetKey(pUVar4,FVar7), pFVar10 != (FBlackboardEntry *)0x0))
           && ((pFVar10->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
          pUVar11 = Z_Construct_UClass_UBlackboardKeyType_Int_NoRegister();
          pUVar15 = (UBlackboardKeyType_Int *)(pFVar10->KeyType).field0_0x0.DebugPtr;
          if ((UClass *)pUVar15->_padding_ == pUVar11) {
            if ((*(byte *)((longlong)&pUVar15->_padding_ + 3) & 2) != 0) {
              if (((param_2->KeyInstances).ArrayNum <= (int)(uVar3 & 0xffff)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
                return pFVar9;
              }
              pUVar15 = *(UBlackboardKeyType_Int **)
                         ((param_2->KeyInstances).AllocatorInstance.Data + (ulonglong)FVar7.Key * 8)
              ;
            }
            puVar12 = UBlackboardComponent::GetKeyRawData(param_2,FVar7);
            if (puVar12 + (-(uint)(((pFVar10->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance !=
                                  '\0') & 4) != (uchar *)0x0) {
              iVar8 = UBlackboardKeyType_Int::GetValue
                                (pUVar15,puVar12 + (-(uint)(((pFVar10->KeyType).field0_0x0.DebugPtr)
                                                            ->bCreateKeyInstance != '\0') & 4));
              SetIntParam(this,param_1->ParamName,iVar8);
              return this;
            }
          }
        }
        SetIntParam(this,param_1->ParamName,UBlackboardKeyType_Int::InvalidValue);
        return this;
      }
      if (EVar1 == Bool) {
        uVar3 = (param_1->BBKey).SelectedKeyID;
        FVar7.Key = (ushort)uVar3;
        if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
          return pFVar9;
        }
        pUVar4 = (param_2->BlackboardAsset).field0_0x0.DebugPtr;
        if (((pUVar4 != (UBlackboardData *)0x0) &&
            (pFVar10 = UBlackboardData::GetKey(pUVar4,FVar7), pFVar10 != (FBlackboardEntry *)0x0))
           && ((pFVar10->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
          pUVar11 = Z_Construct_UClass_UBlackboardKeyType_Bool_NoRegister();
          pUVar14 = (UBlackboardKeyType_Bool *)(pFVar10->KeyType).field0_0x0.DebugPtr;
          if ((UClass *)pUVar14->_padding_ == pUVar11) {
            if ((*(byte *)((longlong)&pUVar14->_padding_ + 3) & 2) != 0) {
              if (((param_2->KeyInstances).ArrayNum <= (int)(uVar3 & 0xffff)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
                return pFVar9;
              }
              pUVar14 = *(UBlackboardKeyType_Bool **)
                         ((param_2->KeyInstances).AllocatorInstance.Data + (ulonglong)FVar7.Key * 8)
              ;
            }
            puVar12 = UBlackboardComponent::GetKeyRawData(param_2,FVar7);
            if (puVar12 + (-(uint)(((pFVar10->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance !=
                                  '\0') & 4) != (uchar *)0x0) {
              bVar6 = UBlackboardKeyType_Bool::GetValue
                                (pUVar14,puVar12 + (-(uint)(((pFVar10->KeyType).field0_0x0.DebugPtr)
                                                            ->bCreateKeyInstance != '\0') & 4));
              SetBoolParam(this,param_1->ParamName,bVar6);
              return this;
            }
          }
        }
        SetBoolParam(this,param_1->ParamName,UBlackboardKeyType_Bool::InvalidValue);
        return this;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                         ,0x6c,L"");
      if (!bVar6) {
        return this;
      }
      goto code_r0x000146f749c7;
    }
  }
  EVar1 = param_1->ParamType;
  if (EVar1 == Float) {
    local_res18[0] = param_1->Value;
    pfVar17 = local_res18;
    local_50 = param_1->ParamName;
    pFVar13 = &local_50;
  }
  else {
    if (EVar1 != Int) {
      if (EVar1 == Bool) {
        local_res20 = param_1->ParamName;
        local_res8[0] = __real_bf800000;
        if (0.0 < param_1->Value) {
          local_res8[0] = __real_3f800000;
        }
        TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
        Emplace<FName_const_&,float>
                  ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                    *)&this->NamedParams,&local_res20,local_res8);
        return this;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                         ,0x85,L"");
      if (!bVar6) {
        return this;
      }
code_r0x000146f749c7:
      pcVar5 = (code *)swi(3);
      pFVar9 = (FEnvQueryRequest *)(*pcVar5)();
      return pFVar9;
    }
    local_res10[0] = (float)(int)param_1->Value;
    pfVar17 = local_res10;
    pFVar13 = &local_58;
    local_58 = param_1->ParamName;
  }
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  Emplace<FName_const_&,float_const_&>
            ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
              *)&this->NamedParams,pFVar13,pfVar17);
  return this;
}

// SetFloatParam @ 146f74a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryRequest * __thiscall
FEnvQueryRequest::SetFloatParam(FEnvQueryRequest *this,FName param_1,float param_2)

{
  FName local_res10;
  float local_res18 [4];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  Emplace<FName_const_&,float_const_&>
            ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
              *)&this->NamedParams,&local_res10,local_res18);
  return this;
}

// SetIntParam @ 146f74b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryRequest * __thiscall
FEnvQueryRequest::SetIntParam(FEnvQueryRequest *this,FName param_1,int param_2)

{
  FName local_res10;
  float local_res18 [4];
  
  local_res10 = param_1;
  local_res18[0] = (float)param_2;
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  Emplace<FName_const_&,float_const_&>
            ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
              *)&this->NamedParams,&local_res10,local_res18);
  return this;
}

// SetNamedParams @ 146f74bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryRequest * __thiscall
FEnvQueryRequest::SetNamedParams
          (FEnvQueryRequest *this,TArray<FEnvNamedValue,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FEnvQueryRequest *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar7) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar7) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FEnvQueryRequest *)(*pcVar2)();
        return pFVar5;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar4 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FEnvQueryRequest *)(*pcVar2)();
        return pFVar5;
      }
      TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
      Emplace<FName_const_&,float_const_&>
                ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)&this->NamedParams,
                 (FName *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10),
                 (float *)(pFVar1 + (longlong)(int)uVar6 * 0x10 + 0xc));
      iVar7 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar7);
  }
  return this;
}

// operator() @ 1504ff3a0

bool __thiscall `FEnvQueryRequest::SetDynamicParam'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<636647700980301905>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    ::FName::ToString(*(FName **)this,&local_18);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<636647700980301905>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504ff466;
    }
  }
  bVar4 = false;
LAB_1504ff466:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

