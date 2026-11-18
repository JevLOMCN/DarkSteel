// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 29

// StaticClass @ 14dc66e30

UClass * __cdecl UMovieGraphEvaluatedConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEvaluatedConfig",
               &Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton,
               StaticRegisterNativesUMovieGraphEvaluatedConfig,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieGraphEvaluatedConfig>,
               InternalVTableHelperCtorCaller<UMovieGraphEvaluatedConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton;
}

// GetSettingForBranch<UMovieGraphCameraSettingNode> @ 14dc6e350

UMovieGraphCameraSettingNode * __thiscall
UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
          (UMovieGraphEvaluatedConfig *this,FName param_1,bool param_2,bool param_3)

{
  int iVar1;
  UMovieGraphCameraSettingNode *pUVar2;
  UClass *pUVar3;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar3 = Z_Construct_UClass_UMovieGraphCameraSettingNode_NoRegister();
  GetSettingsForBranch(this,&local_18,pUVar3,param_1,param_2,param_3);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar2 = *(UMovieGraphCameraSettingNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar2 != (UMovieGraphCameraSettingNode *)0x0) {
      pUVar3 = Z_Construct_UClass_UMovieGraphCameraSettingNode_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
  }
  return (UMovieGraphCameraSettingNode *)0x0;
}

// GetSettingForBranch<UMovieGraphGlobalOutputSettingNode> @ 14dc6e400

UMovieGraphGlobalOutputSettingNode * __thiscall
UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
          (UMovieGraphEvaluatedConfig *this,FName param_1,bool param_2,bool param_3)

{
  int iVar1;
  UMovieGraphGlobalOutputSettingNode *pUVar2;
  UClass *pUVar3;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar3 = Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister();
  GetSettingsForBranch(this,&local_18,pUVar3,param_1,param_2,param_3);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar2 = *(UMovieGraphGlobalOutputSettingNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar2 != (UMovieGraphGlobalOutputSettingNode *)0x0) {
      pUVar3 = Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
  }
  return (UMovieGraphGlobalOutputSettingNode *)0x0;
}

// UMovieGraphEvaluatedConfig @ 14dc72fa0

UMovieGraphEvaluatedConfig * __thiscall
UMovieGraphEvaluatedConfig::UMovieGraphEvaluatedConfig
          (UMovieGraphEvaluatedConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphEvaluatedConfig__6B_;
  *(undefined8 *)&this->BranchConfigMapping = 0;
  *(undefined8 *)&(this->BranchConfigMapping).field_0x8 = 0;
  *(undefined8 *)&(this->BranchConfigMapping).field_0x20 = 0;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x28 = 0;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x34 = 0;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BranchConfigMapping).field_0x40 = 0;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x48 = 0;
  *(undefined8 *)&this->VariablesByName = 0;
  *(undefined8 *)&(this->VariablesByName).field_0x8 = 0;
  *(undefined8 *)&(this->VariablesByName).field_0x20 = 0;
  *(undefined4 *)&(this->VariablesByName).field_0x28 = 0;
  *(undefined4 *)&(this->VariablesByName).field_0x2c = 0x80;
  *(undefined4 *)&(this->VariablesByName).field_0x34 = 0;
  *(undefined4 *)&(this->VariablesByName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VariablesByName).field_0x40 = 0;
  *(undefined4 *)&(this->VariablesByName).field_0x48 = 0;
  (this->EvaluatedGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluatedGraphs).ArrayNum = 0;
  (this->EvaluatedGraphs).ArrayMax = 0;
  return this;
}

// UMovieGraphEvaluatedConfig @ 14dc73040

UMovieGraphEvaluatedConfig * __thiscall
UMovieGraphEvaluatedConfig::UMovieGraphEvaluatedConfig
          (UMovieGraphEvaluatedConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphEvaluatedConfig__6B_;
  *(undefined8 *)&this->BranchConfigMapping = 0;
  *(undefined8 *)&(this->BranchConfigMapping).field_0x8 = 0;
  *(undefined8 *)&(this->BranchConfigMapping).field_0x20 = 0;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x28 = 0;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x34 = 0;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BranchConfigMapping).field_0x40 = 0;
  *(undefined4 *)&(this->BranchConfigMapping).field_0x48 = 0;
  *(undefined8 *)&this->VariablesByName = 0;
  *(undefined8 *)&(this->VariablesByName).field_0x8 = 0;
  *(undefined8 *)&(this->VariablesByName).field_0x20 = 0;
  *(undefined4 *)&(this->VariablesByName).field_0x28 = 0;
  *(undefined4 *)&(this->VariablesByName).field_0x2c = 0x80;
  *(undefined4 *)&(this->VariablesByName).field_0x34 = 0;
  *(undefined4 *)&(this->VariablesByName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VariablesByName).field_0x40 = 0;
  *(undefined4 *)&(this->VariablesByName).field_0x48 = 0;
  (this->EvaluatedGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluatedGraphs).ArrayNum = 0;
  (this->EvaluatedGraphs).ArrayMax = 0;
  return this;
}

// ~UMovieGraphEvaluatedConfig @ 14dc744d0

void __thiscall
UMovieGraphEvaluatedConfig::~UMovieGraphEvaluatedConfig(UMovieGraphEvaluatedConfig *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphEvaluatedConfig__6B_;
  pFVar1 = (this->EvaluatedGraphs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->VariablesByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->VariablesByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VariablesByName);
  *(undefined4 *)&(this->BranchConfigMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BranchConfigMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieGraphEvaluatedBranchConfig>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieGraphEvaluatedBranchConfig>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieGraphEvaluatedBranchConfig>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BranchConfigMapping);
  UObject::~UObject((UObject *)this);
  return;
}

// GetEvaluatedGraphs @ 14dc803f0

TArray<UMovieGraphConfig_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphEvaluatedConfig::GetEvaluatedGraphs(UMovieGraphEvaluatedConfig *this)

{
  return &this->EvaluatedGraphs;
}

// GetPrivateStaticClass @ 14dc81b30

UClass * __cdecl UMovieGraphEvaluatedConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEvaluatedConfig",
               &Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton,
               StaticRegisterNativesUMovieGraphEvaluatedConfig,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieGraphEvaluatedConfig>,
               InternalVTableHelperCtorCaller<UMovieGraphEvaluatedConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton;
}

// GetSettingsForBranch @ 14dc82c40

TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphEvaluatedConfig::GetSettingsForBranch
          (UMovieGraphEvaluatedConfig *this,
          TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UClass *param_1,FName param_2,bool param_3,bool param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  TObjectPtr<UObject>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FMovieGraphEvaluatedBranchConfig *this_00;
  UClass *pUVar9;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  FName *local_res10;
  FName local_res20;
  longlong local_68;
  TObjectPtr<UObject>_u_0 local_60;
  FScriptContainerElement *local_58;
  TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> local_50;
  
  local_res20 = param_2;
  this_00 = TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
            ::Find((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
                    *)&this->BranchConfigMapping,param_2);
  if (this_00 == (FMovieGraphEvaluatedBranchConfig *)0x0) {
    local_res10 = &local_res20;
    `UMovieGraphEvaluatedConfig::GetSettingsForBranch'::__l2::<lambda_1>::operator()(&local_res10);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    FMovieGraphEvaluatedBranchConfig::GetNodes(this_00,&local_50);
    iVar8 = local_50.ArrayNum;
    local_58 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
    FVar11.Data = local_50.AllocatorInstance.Data;
    while( true ) {
      pFVar2 = local_58;
      if (local_50.ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar11.Data == pFVar2) break;
      lVar1 = *(longlong *)FVar11.Data;
      if (param_4) {
        bVar6 = *(UClass **)(lVar1 + 0x10) == param_1;
      }
      else {
        iVar7 = (int)param_1->_padding_;
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
            &param_1->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
      }
      if (bVar6) {
        if (lVar1 == 0) {
LAB_14dc82d62:
          local_68 = 0;
        }
        else {
          pUVar9 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
          iVar7 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < iVar7) ||
             (local_68 = lVar1,
             (longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
             &pUVar9->_padding_)) goto LAB_14dc82d62;
        }
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_68;
      }
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  if (!param_3) {
    return __return_storage_ptr__;
  }
  if (__return_storage_ptr__->ArrayNum != 0) {
    return __return_storage_ptr__;
  }
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  TVar3 = (TObjectPtr<UObject>_u_0)(param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr != (UObject *)0x0) {
    pUVar9 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38)) &&
       (local_60 = TVar3,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
       &pUVar9->_padding_)) goto LAB_14dc82e9c;
  }
  local_60.DebugPtr = (UObject *)0x0;
LAB_14dc82e9c:
  pTVar4 = (TObjectPtr<UObject>_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pTVar4 <= &local_60) && (&local_60 < pTVar4 + __return_storage_ptr__->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  ((TObjectPtr<UObject>_u_0 *)
  ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8))->DebugPtr =
       (UObject *)local_60;
  return __return_storage_ptr__;
}

// GetVariableStringValueByName @ 14dc838b0

bool __thiscall
UMovieGraphEvaluatedConfig::GetVariableStringValueByName
          (UMovieGraphEvaluatedConfig *this,FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  UMovieGraphValueContainer *local_28;
  FString local_20;
  
  bVar2 = GetVariableValueByName(this,param_1,&local_28);
  if (bVar2) {
    pFVar3 = UMovieGraphValueContainer::GetValueSerializedString(local_28,&local_20);
    if (param_3 != pFVar3) {
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_3->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_3->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (param_3->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    return true;
  }
  ::FString::operator=(param_3,param_2);
  return false;
}

// GetVariableValueByName @ 14dc83950

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UMovieGraphEvaluatedConfig::GetVariableValueByName
          (UMovieGraphEvaluatedConfig *this,FString *param_1,UMovieGraphValueContainer **param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UWorld *pUVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UMovieGraphValueContainer *pUVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 auStackY_118 [32];
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pTVar4 = TMapBase<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->VariablesByName,param_1);
  if (pTVar4 == (TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pUVar6 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UMovieGraphValueContainer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar7);
    local_b8._8_8_ = pUVar6;
    pUVar8 = (UMovieGraphValueContainer *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    bVar14 = false;
  }
  else {
    if (1 < pTVar4->ArrayNum) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`UMovieGraphEvaluatedConfig::GetVariableValueByName'::__l8::
               _dynamic_atexit_destructor_for____LoggedMessages__DuplicateVariableNameWarning__);
        _Init_thread_footer(&::_TSS0);
      }
      pUVar5 = MoviePipeline::FindCurrentWorld();
      if (__LastRenderWorld__DuplicateVariableNameWarning != pUVar5) {
        __LastRenderWorld__DuplicateVariableNameWarning = MoviePipeline::FindCurrentWorld();
        DestructItems<FString,int>
                  ((FString *)__LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance.Data,
                   __LoggedMessages__DuplicateVariableNameWarning.ArrayNum);
        __LoggedMessages__DuplicateVariableNameWarning.ArrayNum = 0;
        if (__LoggedMessages__DuplicateVariableNameWarning.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&__LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance,0,
                     &__LoggedMessages__DuplicateVariableNameWarning.ArrayMax);
        }
      }
      ::FString::PrintfImpl
                (&local_c8,
                 L"GetVariableValueByName(): Found a duplicate variable name [%s] within the graphs being used to render (including subgraphs). It\'s suggested that variable names are unique so their values can be fetched reliably from within blueprints."
                );
      pFVar13 = __LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance.Data +
                (longlong)__LoggedMessages__DuplicateVariableNameWarning.ArrayNum * 0x10;
      uVar9 = local_c8.Data._8_8_;
      for (FVar11 = __LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance;
          FVar11.Data != pFVar13; FVar11.Data = FVar11.Data + 0x10) {
        iVar3 = *(int *)(FVar11.Data + 8);
        if (iVar3 == (int)uVar9) {
          if (iVar3 < 2) goto LAB_14dc83bf5;
          iVar3 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar11.Data,
                             (wchar_t *)local_c8.Data.AllocatorInstance.Data);
          bVar14 = iVar3 == 0;
          uVar9 = local_c8.Data._8_8_;
        }
        else {
          bVar14 = iVar3 + (int)uVar9 == 1;
        }
        if (bVar14) goto LAB_14dc83bf5;
      }
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      if (((__LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance.Data <=
            (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           __LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance.Data +
           (longlong)__LoggedMessages__DuplicateVariableNameWarning.ArrayMax * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return (bool)uVar2;
      }
      if (__LoggedMessages__DuplicateVariableNameWarning.ArrayNum ==
          __LoggedMessages__DuplicateVariableNameWarning.ArrayMax) {
        __LoggedMessages__DuplicateVariableNameWarning.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&__LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance,
                        &__LoggedMessages__DuplicateVariableNameWarning.ArrayMax);
      }
      FVar11.Data = local_c8.Data.AllocatorInstance.Data;
      lVar12 = (longlong)__LoggedMessages__DuplicateVariableNameWarning.ArrayNum;
      __LoggedMessages__DuplicateVariableNameWarning.ArrayNum =
           __LoggedMessages__DuplicateVariableNameWarning.ArrayNum + 1;
      pFVar13 = __LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance.Data +
                lVar12 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(int *)(pFVar13 + 8) = local_c8.Data.ArrayNum;
      if (local_c8.Data.ArrayNum == 0) {
        *(int *)(pFVar13 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_c8.Data.ArrayNum,
                   (int *)(pFVar13 + 0xc));
        memcpy(*(void **)pFVar13,FVar11.Data,(longlong)local_c8.Data.ArrayNum * 2);
      }
LAB_14dc83bf5:
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    if ((pTVar4->ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    pUVar8 = *(UMovieGraphValueContainer **)(pTVar4->AllocatorInstance).Data;
    if ((pUVar8 == (UMovieGraphValueContainer *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("FirstVariableWithName",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphConfig.cpp"
                            ,0x1b3,L""), bVar14)) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    bVar14 = true;
  }
  *param_2 = pUVar8;
  return bVar14;
}

// StaticRegisterNativesUMovieGraphEvaluatedConfig @ 14dc89b80

void __cdecl UMovieGraphEvaluatedConfig::StaticRegisterNativesUMovieGraphEvaluatedConfig(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBranchNames @ 14dc91130

void __cdecl
UMovieGraphEvaluatedConfig::execGetBranchNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
              *)(param_1 + 1),&local_18);
  _Src.Data = local_18.AllocatorInstance.Data;
  if (param_3 != &local_18) {
    iVar2 = local_18.ArrayNum;
    lVar3 = (longlong)local_18.ArrayNum;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_18.ArrayNum,*piVar1,param_3,local_18.ArrayNum,piVar1);
      if (iVar2 != 0) {
        memcpy(*(void **)param_3,_Src.Data,lVar3 << 3);
      }
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetEvaluatedGraphs @ 14dc930d0

void __cdecl
UMovieGraphEvaluatedConfig::execGetEvaluatedGraphs(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != param_1 + 5) {
    iVar1 = *(int *)&param_1[5].field_0x8;
    _Src = *(void **)(param_1 + 5);
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execGetSettingForBranch @ 14dc94e00

void __cdecl
UMovieGraphEvaluatedConfig::execGetSettingForBranch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  UClass *local_48;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_40;
  
  local_48 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetSettingsForBranch
            ((UMovieGraphEvaluatedConfig *)param_1,&local_40,local_48,local_res20,bVar3,
             local_res18[0] != 0);
  if (0 < local_40.ArrayNum) {
    uVar2 = *(undefined8 *)local_40.AllocatorInstance.Data;
    FMemory::Free(local_40.AllocatorInstance.Data);
    *(undefined8 *)param_3 = uVar2;
    return;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetSettingsForBranch @ 14dc94fc0

void __cdecl
UMovieGraphEvaluatedConfig::execGetSettingsForBranch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  UClass *local_48;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_40;
  
  local_48 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSettingsForBranch
                     ((UMovieGraphEvaluatedConfig *)param_1,&local_40,local_48,local_res20,bVar3,
                      local_res18[0] != 0);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// execGetVariableStringValueByName @ 14dc95750

void __cdecl
UMovieGraphEvaluatedConfig::execGetVariableStringValueByName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType _Src;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  longlong lVar8;
  FString *pFVar9;
  UMovieGraphValueContainer *local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar9 = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar9 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = GetVariableValueByName((UMovieGraphEvaluatedConfig *)param_1,&local_38,&local_res10);
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  if (bVar5) {
    pFVar7 = UMovieGraphValueContainer::GetValueSerializedString(local_res10,&local_28);
    if (pFVar9 != pFVar7) {
      pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar9->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (pFVar9->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    if (pFVar9 != &local_58) {
      iVar4 = local_58.Data.ArrayNum;
      lVar8 = (longlong)local_58.Data.ArrayNum;
      piVar1 = &(pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = local_58.Data.ArrayNum;
      if ((local_58.Data.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar9,
                   local_58.Data.ArrayNum,piVar1);
        if (iVar4 != 0) {
          memcpy((pFVar9->Data).AllocatorInstance.Data,_Src.Data,lVar8 * 2);
        }
      }
    }
    uVar6 = 0;
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetVariableValueByName @ 14dc95970

void __cdecl
UMovieGraphEvaluatedConfig::execGetVariableValueByName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UMovieGraphValueContainer **ppUVar3;
  UMovieGraphValueContainer *local_res10;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UMovieGraphValueContainer *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  ppUVar3 = &local_res10;
  if ((UMovieGraphValueContainer **)param_2->MostRecentPropertyAddress !=
      (UMovieGraphValueContainer **)0x0) {
    ppUVar3 = (UMovieGraphValueContainer **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetVariableValueByName((UMovieGraphEvaluatedConfig *)param_1,&local_28,ppUVar3);
  *(bool *)param_3 = bVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*ppUVar3 != (UMovieGraphValueContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar3);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetSettingForBranch<UMovieGraphDebugSettingNode> @ 14dca7200

UMovieGraphDebugSettingNode * __thiscall
UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphDebugSettingNode>
          (UMovieGraphEvaluatedConfig *this,FName param_1,bool param_2,bool param_3)

{
  int iVar1;
  UMovieGraphDebugSettingNode *pUVar2;
  UClass *pUVar3;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar3 = Z_Construct_UClass_UMovieGraphDebugSettingNode_NoRegister();
  GetSettingsForBranch(this,&local_18,pUVar3,param_1,param_2,param_3);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar2 = *(UMovieGraphDebugSettingNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar2 != (UMovieGraphDebugSettingNode *)0x0) {
      pUVar3 = Z_Construct_UClass_UMovieGraphDebugSettingNode_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
  }
  return (UMovieGraphDebugSettingNode *)0x0;
}

// GetSettingForBranch<UMovieGraphGlobalGameOverridesNode> @ 14dca72b0

UMovieGraphGlobalGameOverridesNode * __thiscall
UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalGameOverridesNode>
          (UMovieGraphEvaluatedConfig *this,FName param_1,bool param_2,bool param_3)

{
  int iVar1;
  UMovieGraphGlobalGameOverridesNode *pUVar2;
  UClass *pUVar3;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar3 = Z_Construct_UClass_UMovieGraphGlobalGameOverridesNode_NoRegister();
  GetSettingsForBranch(this,&local_18,pUVar3,param_1,param_2,param_3);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar2 = *(UMovieGraphGlobalGameOverridesNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar2 != (UMovieGraphGlobalGameOverridesNode *)0x0) {
      pUVar3 = Z_Construct_UClass_UMovieGraphGlobalGameOverridesNode_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
  }
  return (UMovieGraphGlobalGameOverridesNode *)0x0;
}

// GetSettingForBranch<UMovieGraphWarmUpSettingNode> @ 14dca7360

UMovieGraphWarmUpSettingNode * __thiscall
UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphWarmUpSettingNode>
          (UMovieGraphEvaluatedConfig *this,FName param_1,bool param_2,bool param_3)

{
  int iVar1;
  UMovieGraphWarmUpSettingNode *pUVar2;
  UClass *pUVar3;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar3 = Z_Construct_UClass_UMovieGraphWarmUpSettingNode_NoRegister();
  GetSettingsForBranch(this,&local_18,pUVar3,param_1,param_2,param_3);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar2 = *(UMovieGraphWarmUpSettingNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar2 != (UMovieGraphWarmUpSettingNode *)0x0) {
      pUVar3 = Z_Construct_UClass_UMovieGraphWarmUpSettingNode_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
  }
  return (UMovieGraphWarmUpSettingNode *)0x0;
}

// GetSettingsForBranch<UMovieGraphCollectionNode> @ 14dca7410

TArray<UMovieGraphCollectionNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphEvaluatedConfig::GetSettingsForBranch<UMovieGraphCollectionNode>
          (UMovieGraphEvaluatedConfig *this,
          TArray<UMovieGraphCollectionNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  UClass *pUVar6;
  TArray<UMovieGraphCollectionNode_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined1 local_48 [8];
  UObject *local_40;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar6 = Z_Construct_UClass_UMovieGraphCollectionNode_NoRegister();
  GetSettingsForBranch(this,&local_28,pUVar6,param_1,param_2,param_3);
  uVar9 = (ulonglong)(uint)local_28.ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if (local_28.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (0 < local_28.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_28.ArrayNum,&local_38,0,&iStack_2c);
    uVar9 = (ulonglong)(uint)local_28.ArrayNum;
  }
  iVar8 = (int)uVar9;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar8 * 8;
  FVar11.Data = local_28.AllocatorInstance.Data;
  do {
    if ((int)uVar9 != iVar8) {
      local_48[0] = 0;
      `TCheckedPointerIterator<UMovieGraphSettingNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
    }
    _Src.Data = local_38.Data;
    if (FVar11.Data == pFVar1) {
      lVar10 = (longlong)local_30;
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = local_30;
      if (local_30 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_30,0,&__return_storage_ptr__->AllocatorInstance,local_30,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar10 << 3);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar3 = *(UObject **)FVar11.Data;
    if (pUVar3 == (UObject *)0x0) {
LAB_14dca74f7:
      local_40 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UMovieGraphCollectionNode_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
         (local_40 = pUVar3,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar6->_padding_)) goto LAB_14dca74f7;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    if ((local_38.Data <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 < local_38.Data + (longlong)iStack_2c * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<UMovieGraphCollectionNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    if (local_30 == iStack_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_38,&iStack_2c);
    }
    lVar10 = (longlong)local_30;
    local_30 = local_30 + 1;
    *(UObject **)(local_38.Data + lVar10 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    uVar9 = (ulonglong)(uint)local_28.ArrayNum;
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// GetSettingsForBranch<UMovieGraphExecuteScriptNode> @ 14dca7680

TArray<UMovieGraphExecuteScriptNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphEvaluatedConfig::GetSettingsForBranch<UMovieGraphExecuteScriptNode>
          (UMovieGraphEvaluatedConfig *this,
          TArray<UMovieGraphExecuteScriptNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,FName param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  UClass *pUVar6;
  TArray<UMovieGraphExecuteScriptNode_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined1 local_48 [8];
  UObject *local_40;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar6 = Z_Construct_UClass_UMovieGraphExecuteScriptNode_NoRegister();
  GetSettingsForBranch(this,&local_28,pUVar6,param_1,param_2,param_3);
  uVar9 = (ulonglong)(uint)local_28.ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if (local_28.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (0 < local_28.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_28.ArrayNum,&local_38,0,&iStack_2c);
    uVar9 = (ulonglong)(uint)local_28.ArrayNum;
  }
  iVar8 = (int)uVar9;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar8 * 8;
  FVar11.Data = local_28.AllocatorInstance.Data;
  do {
    if ((int)uVar9 != iVar8) {
      local_48[0] = 0;
      `TCheckedPointerIterator<UMovieGraphSettingNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
    }
    _Src.Data = local_38.Data;
    if (FVar11.Data == pFVar1) {
      lVar10 = (longlong)local_30;
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = local_30;
      if (local_30 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_30,0,&__return_storage_ptr__->AllocatorInstance,local_30,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar10 << 3);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar3 = *(UObject **)FVar11.Data;
    if (pUVar3 == (UObject *)0x0) {
LAB_14dca7767:
      local_40 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UMovieGraphExecuteScriptNode_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
         (local_40 = pUVar3,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar6->_padding_)) goto LAB_14dca7767;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    if ((local_38.Data <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 < local_38.Data + (longlong)iStack_2c * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<UMovieGraphExecuteScriptNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    if (local_30 == iStack_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_38,&iStack_2c);
    }
    lVar10 = (longlong)local_30;
    local_30 = local_30 + 1;
    *(UObject **)(local_38.Data + lVar10 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    uVar9 = (ulonglong)(uint)local_28.ArrayNum;
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// GetSettingsForBranch<UMovieGraphOutputBurnInNode> @ 14dca78f0

TArray<UMovieGraphOutputBurnInNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphEvaluatedConfig::GetSettingsForBranch<UMovieGraphOutputBurnInNode>
          (UMovieGraphEvaluatedConfig *this,
          TArray<UMovieGraphOutputBurnInNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  UClass *pUVar6;
  TArray<UMovieGraphOutputBurnInNode_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined1 local_48 [8];
  UObject *local_40;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar6 = UMovieGraphOutputBurnInNode::StaticClass();
  GetSettingsForBranch(this,&local_28,pUVar6,param_1,param_2,param_3);
  uVar9 = (ulonglong)(uint)local_28.ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if (local_28.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (0 < local_28.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_28.ArrayNum,&local_38,0,&iStack_2c);
    uVar9 = (ulonglong)(uint)local_28.ArrayNum;
  }
  iVar8 = (int)uVar9;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar8 * 8;
  FVar11.Data = local_28.AllocatorInstance.Data;
  do {
    if ((int)uVar9 != iVar8) {
      local_48[0] = 0;
      `TCheckedPointerIterator<UMovieGraphSettingNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
    }
    _Src.Data = local_38.Data;
    if (FVar11.Data == pFVar1) {
      lVar10 = (longlong)local_30;
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = local_30;
      if (local_30 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_30,0,&__return_storage_ptr__->AllocatorInstance,local_30,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar10 << 3);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar3 = *(UObject **)FVar11.Data;
    if (pUVar3 == (UObject *)0x0) {
LAB_14dca79d5:
      local_40 = (UObject *)0x0;
    }
    else {
      pUVar6 = UMovieGraphOutputBurnInNode::StaticClass();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
         (local_40 = pUVar3,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar6->_padding_)) goto LAB_14dca79d5;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    if ((local_38.Data <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 < local_38.Data + (longlong)iStack_2c * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<UMovieGraphOutputBurnInNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    if (local_30 == iStack_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_38,&iStack_2c);
    }
    lVar10 = (longlong)local_30;
    local_30 = local_30 + 1;
    *(UObject **)(local_38.Data + lVar10 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    uVar9 = (ulonglong)(uint)local_28.ArrayNum;
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// GetSettingsForBranch<UMovieGraphRenderPassNode> @ 14dca7b60

TArray<UMovieGraphRenderPassNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphEvaluatedConfig::GetSettingsForBranch<UMovieGraphRenderPassNode>
          (UMovieGraphEvaluatedConfig *this,
          TArray<UMovieGraphRenderPassNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  UClass *pUVar6;
  TArray<UMovieGraphRenderPassNode_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined1 local_48 [8];
  UObject *local_40;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar6 = Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister();
  GetSettingsForBranch(this,&local_28,pUVar6,param_1,param_2,param_3);
  uVar9 = (ulonglong)(uint)local_28.ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if (local_28.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (0 < local_28.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_28.ArrayNum,&local_38,0,&iStack_2c);
    uVar9 = (ulonglong)(uint)local_28.ArrayNum;
  }
  iVar8 = (int)uVar9;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar8 * 8;
  FVar11.Data = local_28.AllocatorInstance.Data;
  do {
    if ((int)uVar9 != iVar8) {
      local_48[0] = 0;
      `TCheckedPointerIterator<UMovieGraphSettingNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
    }
    _Src.Data = local_38.Data;
    if (FVar11.Data == pFVar1) {
      lVar10 = (longlong)local_30;
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = local_30;
      if (local_30 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_30,0,&__return_storage_ptr__->AllocatorInstance,local_30,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar10 << 3);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar3 = *(UObject **)FVar11.Data;
    if (pUVar3 == (UObject *)0x0) {
LAB_14dca7c47:
      local_40 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
         (local_40 = pUVar3,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar6->_padding_)) goto LAB_14dca7c47;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    if ((local_38.Data <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 < local_38.Data + (longlong)iStack_2c * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<UMovieGraphRenderPassNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    if (local_30 == iStack_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_38,&iStack_2c);
    }
    lVar10 = (longlong)local_30;
    local_30 = local_30 + 1;
    *(UObject **)(local_38.Data + lVar10 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    uVar9 = (ulonglong)(uint)local_28.ArrayNum;
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// GetSettingsImplementing<IMovieGraphPostRenderNode> @ 14dca7dd0

TArray<IMovieGraphPostRenderNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphPostRenderNode>
          (UMovieGraphEvaluatedConfig *this,
          TArray<IMovieGraphPostRenderNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UClass *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieGraphEvaluatedBranchConfig *this_01;
  UClass *pUVar6;
  TArray<IMovieGraphPostRenderNode_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FName *local_res10;
  FName local_res20;
  void *local_58;
  TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> local_50;
  
  local_res20 = param_2;
  this_01 = TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
            ::Find((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
                    *)&this->BranchConfigMapping,param_2);
  if (this_01 == (FMovieGraphEvaluatedBranchConfig *)0x0) {
    local_res10 = &local_res20;
    `UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphPostRenderNode>'::__l2::
    <lambda_1>::operator()(&local_res10);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FMovieGraphEvaluatedBranchConfig::GetNodes(this_01,&local_50);
  iVar8 = local_50.ArrayNum;
  pFVar1 = local_50.AllocatorInstance.Data + (longlong)iVar8 * 8;
  FVar9.Data = local_50.AllocatorInstance.Data;
LAB_14dca7e71:
  do {
    if (local_50.ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar9.Data == pFVar1) {
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    bVar4 = UClass::ImplementsInterface(*(UClass **)(*(longlong *)FVar9.Data + 0x10),param_1);
    if (bVar4) {
      this_00 = *(UObjectBaseUtility **)FVar9.Data;
      if (this_00 == (UObjectBaseUtility *)0x0) {
        local_58 = (void *)0x0;
      }
      else {
        pUVar6 = UMovieGraphPostRenderNode::StaticClass();
        local_58 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
        if (local_58 != (void *)0x0) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
             ((FScriptContainerElement *)&local_58 <
              pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar7 = (TArray<IMovieGraphPostRenderNode_*,TSizedDefaultAllocator<32>_> *)
                       (*pcVar3)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          FVar9.Data = FVar9.Data + 8;
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(void **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
               local_58;
          goto LAB_14dca7e71;
        }
      }
    }
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// operator() @ 15058b520

bool __thiscall
`UMovieGraphEvaluatedConfig::GetSettingsForBranch'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9043200851732069915>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9043200851732069915>,
                       &`public:___cdecl_`public:_class_TArray<UMovieGraphSettingNode*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UMovieGraphEvaluatedConfig::GetSettingsForBranch(UClass*___ptr64,FName,bool,bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058b587;
    }
  }
  bVar2 = false;
LAB_15058b587:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15058b780

bool __thiscall
`UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphModifierNodeInterface>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9043200851732069884>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9043200851732069884>,
                       &`public:___cdecl_`public:_class_TArray<IMovieGraphModifierNodeInterface*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphModifierNodeInterface>(UClass_const*___ptr64,FName)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058b7e7;
    }
  }
  bVar2 = false;
LAB_15058b7e7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15058b820

bool __thiscall
`UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphPostRenderNode>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9043200851732069884>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9043200851732069884>,
                       &`public:___cdecl_`public:_class_TArray<IMovieGraphPostRenderNode*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphPostRenderNode>(UClass_const*___ptr64,FName)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058b887;
    }
  }
  bVar2 = false;
LAB_15058b887:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

