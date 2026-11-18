// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 10

// StaticClass @ 14e7010c0

UClass * __cdecl UInterchangeLevelFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelFactory",
               &Z_Registration_Info_UClass_UInterchangeLevelFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeLevelFactory,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeLevelFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLevelFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelFactory.InnerSingleton;
}

// UInterchangeLevelFactory @ 14e708890

UInterchangeLevelFactory * __thiscall
UInterchangeLevelFactory::UInterchangeLevelFactory
          (UInterchangeLevelFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeLevelFactory__6B_;
  return this;
}

// UInterchangeLevelFactory @ 14e7088c0

UInterchangeLevelFactory * __thiscall
UInterchangeLevelFactory::UInterchangeLevelFactory
          (UInterchangeLevelFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeLevelFactory__6B_;
  return this;
}

// ~UInterchangeLevelFactory @ 14e709990

void __thiscall UInterchangeLevelFactory::~UInterchangeLevelFactory(UInterchangeLevelFactory *this)

{
  *(undefined ***)this = &___7UInterchangeLevelFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// BeginImportAsset_GameThread @ 14e70eb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeLevelFactory::BeginImportAsset_GameThread
          (UInterchangeLevelFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  FImportAssetResult *pFVar8;
  UInterchangeFactoryBaseNode *pUVar9;
  bool bVar10;
  undefined1 local_28 [32];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId252,"UInterchangeLevelFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
               ,0xfc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId252);
  }
  pUVar4 = (UClass *)(**(code **)(*(longlong *)this + 0x2b0))(this);
  if (((param_1->NodeContainer != (UInterchangeBaseNodeContainer *)0x0) &&
      (param_1->AssetNode != (UInterchangeFactoryBaseNode *)0x0)) &&
     (lVar5 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar9 = param_1->AssetNode;
      if (pUVar9 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e70ec0e:
        pUVar9 = (UInterchangeFactoryBaseNode *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14e70ec0e;
      }
      if (pUVar9 != (UInterchangeFactoryBaseNode *)0x0) {
        pUVar7 = UE::Interchange::Private::InterchangeLevelFactory::FindOrCreateWorldAsset
                           (param_1,pUVar4);
        if (pUVar7 == (UWorld *)0x0) {
          if (2 < (byte)LogInterchangeImport._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
          }
        }
        else if (param_1->SourceData == (UInterchangeSourceData *)0x0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8886604699147436302>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
                             ,0x10e,"Arguments.SourceData");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FImportAssetResult *)(*pcVar2)();
            return pFVar8;
          }
        }
        else {
          UInterchangeSourceData::GetFileContentHash
                    (param_1->SourceData,(TOptional<FMD5Hash> *)local_28);
        }
        local_28[0] = false;
        *(ulonglong *)__return_storage_ptr__ = (ulonglong)(uint7)local_28._1_7_ << 8;
        __return_storage_ptr__->ImportedObject = (UObject *)pUVar7;
        local_28._8_8_ = pUVar7;
        goto LAB_14e70ecbd;
      }
    }
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
LAB_14e70ecbd:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetFactoryClass @ 14e7183c0

UClass * __thiscall UInterchangeLevelFactory::GetFactoryClass(UInterchangeLevelFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorld.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UWorld::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"World",&Z_Registration_Info_UClass_UWorld.InnerSingleton,
               UWorld::StaticRegisterNativesUWorld,0xb88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorld>,InternalVTableHelperCtorCaller<UWorld>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorld.InnerSingleton;
}

// GetObjectToReimport @ 14e719520

UObject * __thiscall
UInterchangeLevelFactory::GetObjectToReimport
          (UInterchangeLevelFactory *this,UObject *param_1,UInterchangeFactoryBaseNode *param_2,
          FString *param_3,FString *param_4,FString *param_5)

{
  int iVar1;
  UInterchangeFactoryBaseNode *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  TArray<UInterchangeFactoryBaseNode_const_*,TSizedDefaultAllocator<32>_> local_38;
  FSoftObjectPath local_28;
  
  if (param_1 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  pUVar4 = Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar1) {
    return param_1;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return param_1;
  }
  pUVar4 = Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
    return param_1;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return param_1;
  }
  pUVar5 = UInterchangeSceneImportAsset::GetSceneObject
                     ((UInterchangeSceneImportAsset *)param_1,param_3,param_4,param_5);
  if (pUVar5 != (UObject *)0x0) {
    return pUVar5;
  }
  pUVar4 = Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister();
  UInterchangeSceneImportAsset::GetFactoryNodesOfClass
            ((UInterchangeSceneImportAsset *)param_1,&local_38,pUVar4);
  if ((1 < local_38.ArrayNum) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8886604699147436258>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
                         ,0xe2,"FacoryNodes.Num() < 2"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UObject *)(*pcVar2)();
    return pUVar5;
  }
  if (local_38.ArrayNum == 1) {
    this_00 = *(UInterchangeFactoryBaseNode **)local_38.AllocatorInstance.Data;
    if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
      pUVar4 = Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_28.AssetPath.PackageName.Number = 0;
        local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_28.AssetPath.AssetName.Number = 0;
        local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.SubPathString.Data.ArrayNum = 0;
        local_28.SubPathString.Data.ArrayMax = 0;
        bVar3 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_00,&local_28);
        if ((!bVar3) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8886604699147436267>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
                               ,0xeb,"LevelFactoryNode->GetCustomReferenceObject(ObjectPath)"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UObject *)(*pcVar2)();
          return pUVar5;
        }
        param_1 = FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
        if ((param_1 == (UObject *)0x0) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8886604699147436270>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
                               ,0xee,"ObjectToReimport"), bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UObject *)(*pcVar2)();
          return pUVar5;
        }
        if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14e71971e;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8886604699147436264>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
                       ,0xe8,"LevelFactoryNode");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
LAB_14e71971e:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14e71a100

UClass * __cdecl UInterchangeLevelFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelFactory",
               &Z_Registration_Info_UClass_UInterchangeLevelFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeLevelFactory,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeLevelFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLevelFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelFactory.InnerSingleton;
}

// SetupObject_GameThread @ 14e728360

void __thiscall
UInterchangeLevelFactory::SetupObject_GameThread
          (UInterchangeLevelFactory *this,FSetupObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId291,"UInterchangeLevelFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
               ,0x123);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId291);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8886604699147436325>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
                       ,0x125,"IsInGameThread()");
    if (bVar3) goto code_r0x00014e7284c1;
    goto LAB_14e7284c2;
  }
  pUVar5 = param_1->ImportedObject;
  if (pUVar5 == (UObject *)0x0) {
LAB_14e72844e:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14e72844e;
  }
  this_00 = param_1->FactoryNode;
  if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) && (pUVar5 != (UObject *)0x0)) &&
       (param_1->SourceData != (UInterchangeSourceData *)0x0)) {
      UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(this_00,pUVar5);
      goto LAB_14e7284c2;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8886604699147436332>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelFactory.cpp"
                     ,300,"FactoryNode && World && Arguments.SourceData");
  if (bVar3) {
code_r0x00014e7284c1:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14e7284c2:
  if (!bVar6) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// StaticRegisterNativesUInterchangeLevelFactory @ 14e72a540

void __cdecl UInterchangeLevelFactory::StaticRegisterNativesUInterchangeLevelFactory(void)

{
  return;
}

