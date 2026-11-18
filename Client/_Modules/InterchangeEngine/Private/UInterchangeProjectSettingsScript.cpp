// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 12

// StaticClass @ 14e4cbd80

UClass * __cdecl UInterchangeProjectSettingsScript::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeProjectSettingsScript",
               &Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton,
               StaticRegisterNativesUInterchangeProjectSettingsScript,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeProjectSettingsScript>,
               InternalVTableHelperCtorCaller<UInterchangeProjectSettingsScript>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton;
}

// UInterchangeProjectSettingsScript @ 14e4d9000

UInterchangeProjectSettingsScript * __thiscall
UInterchangeProjectSettingsScript::UInterchangeProjectSettingsScript
          (UInterchangeProjectSettingsScript *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeProjectSettingsScript__6B_;
  return this;
}

// UInterchangeProjectSettingsScript @ 14e4d9030

UInterchangeProjectSettingsScript * __thiscall
UInterchangeProjectSettingsScript::UInterchangeProjectSettingsScript
          (UInterchangeProjectSettingsScript *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeProjectSettingsScript__6B_;
  return this;
}

// ~UInterchangeProjectSettingsScript @ 14e4db200

void __thiscall
UInterchangeProjectSettingsScript::~UInterchangeProjectSettingsScript
          (UInterchangeProjectSettingsScript *this)

{
  *(undefined ***)this = &___7UInterchangeProjectSettingsScript__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPipelineArrayFromPipelineStack @ 14e4f71e0

TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> * __cdecl
UInterchangeProjectSettingsScript::GetPipelineArrayFromPipelineStack
          (TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FInterchangePipelineStack *param_1)

{
  UE::Interchange::Private::GetPipelineArrayFromSoftObjectArray
            (__return_storage_ptr__,&param_1->Pipelines);
  return __return_storage_ptr__;
}

// GetPipelineArrayFromTranslatorPipelines @ 14e4f7380

TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> * __cdecl
UInterchangeProjectSettingsScript::GetPipelineArrayFromTranslatorPipelines
          (TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FInterchangeTranslatorPipelines *param_1)

{
  UE::Interchange::Private::GetPipelineArrayFromSoftObjectArray
            (__return_storage_ptr__,&param_1->Pipelines);
  return __return_storage_ptr__;
}

// GetPipelineStackFromSourceData @ 14e4f76f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> * __cdecl
UInterchangeProjectSettingsScript::GetPipelineStackFromSourceData
          (TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1,UInterchangeSourceData *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  TTuple<FName,FInterchangePipelineStack> *pTVar8;
  UInterchangeManager *this;
  UInterchangeTranslatorBase *pUVar9;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  undefined7 in_register_00000011;
  UInterchangeTranslatorBase *pUVar12;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar13;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  TSet<TTuple<FName,FInterchangePipelineStack>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelineStack,0>,FDefaultSetAllocator>
  *this_01;
  ForElementType<FSetElementId> FVar14;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar15;
  FNameEntryId local_res8;
  uint uStackX_c;
  undefined1 local_res10 [8];
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FInterchangeProjectSettingsUtils::GetDefaultPipelineStackName
            (SUB81(&local_res8,0),(UInterchangeSourceData *)CONCAT71(in_register_00000011,param_1));
  pUVar7 = UInterchangeProjectSettings::StaticClass();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  FVar3.Number = uStackX_c;
  FVar3.ComparisonIndex.Value = local_res8.Value;
  lVar11 = 0x160;
  if (!param_1) {
    lVar11 = 0x38;
  }
  this_01 = (TSet<TTuple<FName,FInterchangePipelineStack>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelineStack,0>,FDefaultSetAllocator>
             *)(&((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr)->field_0x0 + lVar11);
  uVar5 = ::GetTypeHash(local_res8);
  if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
    FVar14 = (this_01->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this_01->Hash;
    }
    iVar6 = *(int *)((longlong)FVar14 + (ulonglong)(this_01->HashSize - 1U & uVar5 + uStackX_c) * 4)
    ;
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_01->Elements + (longlong)iVar6 * 0x30) == FVar3) {
          pTVar8 = TSet<TTuple<FName,FInterchangePipelineStack>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelineStack,0>,FDefaultSetAllocator>
                   ::Find(this_01,FVar3);
          if (pTVar8 == (TTuple<FName,FInterchangePipelineStack> *)0x0) {
            return __return_storage_ptr__;
          }
          pTVar13 = (TPersistentObjectPtr<FSoftObjectPath> *)&pTVar8->field_0x8;
          if (pTVar13 == (TPersistentObjectPtr<FSoftObjectPath> *)0x0) {
            return __return_storage_ptr__;
          }
          this = UInterchangeManager::GetInterchangeManager();
          pUVar9 = UInterchangeManager::GetTranslatorForSourceData(this,param_2);
          pUVar12 = (UInterchangeTranslatorBase *)0x0;
          if (pUVar9 != (UInterchangeTranslatorBase *)0x0) {
            UObjectBase::AddRef((UObjectBase *)pUVar9);
            pUVar12 = pUVar9;
          }
          iVar6 = *(int *)&pTVar8->field_0x20;
          this_00 = *(TPersistentObjectPtr<FSoftObjectPath> **)&pTVar8->field_0x18;
          pTVar15 = (TPersistentObjectPtr<FSoftObjectPath> *)
                    ((longlong)iVar6 * 0x38 + (longlong)this_00);
          goto LAB_14e4f7820;
        }
        iVar6 = *(int *)(*(longlong *)&this_01->Elements + 0x28 + (longlong)iVar6 * 0x30);
      } while (iVar6 != -1);
    }
  }
  return __return_storage_ptr__;
LAB_14e4f7820:
  if (*(int *)&pTVar8->field_0x20 != iVar6) {
    `TCheckedPointerIterator<FInterchangeTranslatorPipelines_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res10);
  }
  if (this_00 == pTVar15) goto LAB_14e4f78f0;
  pUVar9 = (UInterchangeTranslatorBase *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
  if (pUVar9 == (UInterchangeTranslatorBase *)0x0) {
    if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
      FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
      pUVar9 = (UInterchangeTranslatorBase *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      goto LAB_14e4f7865;
    }
LAB_14e4f78bb:
    pUVar9 = (UInterchangeTranslatorBase *)0x0;
  }
  else {
LAB_14e4f7865:
    if (pUVar9 == (UInterchangeTranslatorBase *)0x0) goto LAB_14e4f78bb;
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar7->_padding_)) ||
       (pUVar7 = Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister(), pUVar7 == (UClass *)0x0
       )) goto LAB_14e4f78bb;
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)&(pUVar9->AnalyticsHelper).Object < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         ((((pUVar9->SourceData).field0_0x0.DebugPtr)->FileContentHashCache).TypedValue.Bytes +
         (longlong)iVar1 * 8 + -0x39) != &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14e4f78bb;
  }
  if (pUVar12 != (UInterchangeTranslatorBase *)0x0) {
    iVar1 = *(int *)&(pUVar9->AnalyticsHelper).Object;
    if ((iVar1 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((TObjectPtr<UInterchangeSourceData_const_> *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->SourceData)) {
      pTVar13 = this_00 + 1;
      if (pTVar13 != (TPersistentObjectPtr<FSoftObjectPath> *)0x0) {
LAB_14e4f78f0:
        pTVar10 = UE::Interchange::Private::GetPipelineArrayFromSoftObjectArray
                            (&local_48,
                             (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)pTVar13);
        if (__return_storage_ptr__ != pTVar10) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
          (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar10->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar10->ArrayMax;
          pTVar10->ArrayNum = 0;
          pTVar10->ArrayMax = 0;
        }
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (pUVar12 == (UInterchangeTranslatorBase *)0x0) {
          return __return_storage_ptr__;
        }
      }
      (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12);
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar12);
      return __return_storage_ptr__;
    }
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[1].ObjectID.AssetPath.AssetName;
  goto LAB_14e4f7820;
}

// GetPrivateStaticClass @ 14e4f82a0

UClass * __cdecl UInterchangeProjectSettingsScript::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeProjectSettingsScript",
               &Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton,
               StaticRegisterNativesUInterchangeProjectSettingsScript,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeProjectSettingsScript>,
               InternalVTableHelperCtorCaller<UInterchangeProjectSettingsScript>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton;
}

// StaticRegisterNativesUInterchangeProjectSettingsScript @ 14e50abb0

void __cdecl
UInterchangeProjectSettingsScript::StaticRegisterNativesUInterchangeProjectSettingsScript(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeProjectSettingsScript_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPipelineArrayFromPipelineStack @ 14e50d1c0

void __cdecl
UInterchangeProjectSettingsScript::execGetPipelineArrayFromPipelineStack
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_28;
  FInterchangeTranslatorPipelines *local_18;
  undefined8 local_10;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18 = (FInterchangeTranslatorPipelines *)0x0;
  local_10 = 0;
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
  if ((TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::Private::GetPipelineArrayFromSoftObjectArray(&local_38,pTVar2);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.ArrayMax;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  DestructItems<FInterchangeTranslatorPipelines,int>(local_18,(int)local_10);
  if (local_18 != (FInterchangeTranslatorPipelines *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FSoftObjectPath *)local_28.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetPipelineArrayFromTranslatorPipelines @ 14e50d2f0

void __cdecl
UInterchangeProjectSettingsScript::execGetPipelineArrayFromTranslatorPipelines
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> local_58;
  uchar local_48 [24];
  FUtf8String local_30;
  FSoftObjectPath *local_20;
  undefined8 local_18;
  
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  FUtf8String::Reset(&local_30,0);
  local_20 = (FSoftObjectPath *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar2 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::Private::GetPipelineArrayFromSoftObjectArray
            (&local_58,(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x28));
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  DestructItems<FSoftObjectPath,int>(local_20,(int)local_18);
  if (local_20 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPipelineStackFromSourceData @ 14e50d430

void __cdecl
UInterchangeProjectSettingsScript::execGetPipelineStackFromSourceData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int local_res10 [2];
  UInterchangeSourceData *local_res18 [2];
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> local_28;
  
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
  local_res18[0] = (UInterchangeSourceData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetPipelineStackFromSourceData(&local_28,bVar3,local_res18[0]);
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
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

