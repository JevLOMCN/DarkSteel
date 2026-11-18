// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 14

// StaticClass @ 14e6ffe80

UClass * __cdecl UInterchangeActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeActorFactory",
               &Z_Registration_Info_UClass_UInterchangeActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeActorFactory,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeActorFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeActorFactory.InnerSingleton;
}

// FillMessage<UInterchangeResultError_Generic> @ 14e703130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeActorFactory::FillMessage<UInterchangeResultError_Generic>
          (UInterchangeActorFactory *this,FImportSceneObjectsParams *param_1,FText *param_2,
          FString *param_3,UInterchangeResultError_Generic *param_4)

{
  longlong *plVar1;
  int iVar2;
  UInterchangeSourceData *pUVar3;
  FScriptContainerElement *_Src;
  ITextData *pIVar4;
  ITextData *pIVar5;
  bool bVar6;
  bool bVar7;
  UInterchangeResultError_Generic *pUVar8;
  FString *pFVar9;
  UObject *pUVar10;
  FString local_48;
  FString local_38;
  
  pUVar3 = param_1->SourceData;
  if (pUVar3 == (UInterchangeSourceData *)0x0) {
    pFVar9 = ::FString::FString(&local_38,L"Unknown file");
    bVar7 = false;
    bVar6 = true;
  }
  else {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = (pUVar3->Filename).Data.ArrayNum;
    _Src = (pUVar3->Filename).Data.AllocatorInstance.Data;
    local_48.Data.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_48.Data.ArrayMax = 0;
      pFVar9 = &local_48;
      bVar7 = true;
      bVar6 = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,(ForAnyElementType *)&local_48,iVar2,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
      pFVar9 = &local_48;
      bVar7 = true;
      bVar6 = false;
    }
  }
  pUVar8 = param_4;
  plVar1 = &param_4->_padding_;
  if ((FString *)plVar1 != pFVar9) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)(pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pUVar8->_padding_ = (pFVar9->Data).ArrayNum;
    *(int *)((longlong)&pUVar8->_padding_ + 4) = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (bVar6) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar7) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::operator=((FString *)&pUVar8->_padding_,&param_1->ObjectName);
  pUVar10 = (UObject *)(**(code **)(*(longlong *)this + 0x2b0))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  pUVar8->_padding_ = (longlong)pUVar10;
  pIVar4 = (param_2->TextData).Reference;
  pIVar5 = (pUVar8->Text).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (pUVar8->Text).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&param_4);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (pUVar8->Text).Flags = param_2->Flags;
  if (1 < (param_3->Data).ArrayNum) {
    ::FString::operator=((FString *)&pUVar8->_padding_,param_3);
  }
  return;
}

// UInterchangeActorFactory @ 14e7084a0

UInterchangeActorFactory * __thiscall
UInterchangeActorFactory::UInterchangeActorFactory
          (UInterchangeActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  return this;
}

// UInterchangeActorFactory @ 14e7084d0

UInterchangeActorFactory * __thiscall
UInterchangeActorFactory::UInterchangeActorFactory
          (UInterchangeActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  return this;
}

// ~UInterchangeActorFactory @ 14e709860

void __thiscall UInterchangeActorFactory::~UInterchangeActorFactory(UInterchangeActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// ApplyAllCustomAttributesToObject @ 14e70e160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeActorFactory::ApplyAllCustomAttributesToObject
          (UInterchangeActorFactory *this,FImportSceneObjectsParams *param_1,AActor *param_2,
          UObject *param_3)

{
  UInterchangeFactoryBaseNode *pUVar1;
  
  if ((param_1->ReimportObject != (UObject *)0x0) &&
     (*(UObject **)&param_3->field_0x20 == param_1->ReimportObject)) {
    pUVar1 = UInterchangeFactoryBaseNode::DuplicateWithObject(param_1->FactoryNode,param_3);
    UE::Interchange::FFactoryCommon::ApplyReimportStrategyToAsset
              (param_3,param_1->ReimportFactoryNode,pUVar1,param_1->FactoryNode);
    return;
  }
  UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(param_1->FactoryNode,param_3);
  return;
}

// ExecuteResetObjectProperties @ 14e713f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeActorFactory::ExecuteResetObjectProperties
          (UInterchangeActorFactory *this,UInterchangeBaseNodeContainer *param_1,
          UInterchangeFactoryBaseNode *param_2,UObject *param_3)

{
  uchar uVar1;
  int iVar2;
  USceneComponent *pUVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  UActorComponent *this_00;
  UActorComponent *this_01;
  FText local_88;
  FImportSceneObjectsParams local_78;
  
  local_78.Level = (ULevel *)0x0;
  local_78.ObjectName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ObjectName.Data.ArrayNum = 0;
  local_78.ObjectName.Data.ArrayMax = 0;
  local_78.SourceData = (UInterchangeSourceData *)0x0;
  local_78.ReimportFactoryNode = (UInterchangeFactoryBaseNode *)0x0;
  local_78.ImportAssets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ImportAssets.ArrayNum = 0;
  local_78.ImportAssets.ArrayMax = 0;
  local_78.bIsReimport = false;
  local_78.AsyncHelperUid = -1;
  local_78.FactoryNode = param_2;
  local_78.NodeContainer = param_1;
  local_78.ReimportObject = param_3;
  FText::FText(&local_88);
  pAVar4 = UE::Interchange::ActorHelper::SpawnFactoryActor(&local_78,&local_88);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if ((pAVar4 != (AActor *)0x0) && (param_2 != (UInterchangeFactoryBaseNode *)0x0)) {
    pUVar5 = Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      this_00 = (UActorComponent *)
                (**(code **)(*(longlong *)this + 0x368))(this,pAVar4,param_2,param_1,&local_78);
      if ((this_00 != (UActorComponent *)0x0) &&
         (pUVar3 = (pAVar4->RootComponent).field0_0x0.DebugPtr, pUVar3 != (USceneComponent *)0x0)) {
        pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        this_01 = (UActorComponent *)0x0;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar5->_padding_)) {
          UActorComponent::UnregisterComponent(this_00);
          this_01 = this_00;
        }
        uVar1 = (pUVar3->Mobility).Value;
        (**(code **)(pUVar3->_padding_ + 0x5f8))(pUVar3,2);
        (**(code **)(*(longlong *)this + 0x370))(this,&local_78,pAVar4,this_00);
        if (uVar1 != '\x02') {
          (**(code **)(pUVar3->_padding_ + 0x5f8))(pUVar3,uVar1);
        }
        if (this_01 != (UActorComponent *)0x0) {
          UActorComponent::RegisterComponent(this_01);
        }
        goto LAB_14e71410a;
      }
    }
  }
  UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(param_2,param_3);
LAB_14e71410a:
  if (local_78.ImportAssets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ImportAssets.AllocatorInstance.Data);
  }
  if (local_78.ObjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ObjectName.Data.AllocatorInstance.Data);
  }
  return;
}

// GetFactoryClass @ 14e718370

UClass * __thiscall UInterchangeActorFactory::GetFactoryClass(UInterchangeActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Actor",&Z_Registration_Info_UClass_AActor.InnerSingleton,
               AActor::StaticRegisterNativesAActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_AActor,L"Engine",InternalConstructor<AActor>,
               InternalVTableHelperCtorCaller<AActor>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AActor.InnerSingleton;
}

// GetPrivateStaticClass @ 14e719a40

UClass * __cdecl UInterchangeActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeActorFactory",
               &Z_Registration_Info_UClass_UInterchangeActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeActorFactory,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeActorFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeActorFactory.InnerSingleton;
}

// ImportSceneObject_GameThread @ 14e722ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

UObject * __thiscall
UInterchangeActorFactory::ImportSceneObject_GameThread
          (UInterchangeActorFactory *this,FImportSceneObjectsParams *param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  UInterchangeActorFactoryNode *this_00;
  USceneComponent *pUVar4;
  FScriptContainerElement *_Src;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  AActor *pAVar9;
  longlong lVar10;
  UInterchangeResultWarning_Generic *pUVar11;
  UObject *pUVar12;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  this_00 = (UInterchangeActorFactoryNode *)param_1->FactoryNode;
  if (this_00 != (UInterchangeActorFactoryNode *)0x0) {
    pUVar8 = Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister();
    iVar3 = (int)pUVar8->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar8->_padding_)) {
      if (param_1->NodeContainer == (UInterchangeBaseNodeContainer *)0x0) {
        return (UObject *)0x0;
      }
      FText::FText(&local_c8);
      pAVar9 = UE::Interchange::ActorHelper::SpawnFactoryActor(param_1,&local_c8);
      if (pAVar9 == (AActor *)0x0) {
        bVar7 = FText::IsEmpty(&local_c8);
        if (!bVar7) {
          pUVar11 = UInterchangeFactoryBase::AddMessage<UInterchangeResultWarning_Generic>
                              ((UInterchangeFactoryBase *)this);
          local_e8.Data = (FScriptContainerElement *)0x0;
          iVar3 = (param_1->SourceData->Filename).Data.ArrayNum;
          _Src = (param_1->SourceData->Filename).Data.AllocatorInstance.Data;
          local_e0 = CONCAT44(local_e0._4_4_,iVar3);
          if (iVar3 == 0) {
            local_e0 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,0,&local_e8,iVar3,(int *)((longlong)&local_e0 + 4));
            memcpy(local_e8.Data,_Src,(longlong)iVar3 * 2);
          }
          plVar1 = &pUVar11->_padding_;
          if ((ForAnyElementType *)plVar1 != &local_e8) {
            if ((void *)*plVar1 != (void *)0x0) {
              FMemory::Free((void *)*plVar1);
            }
            *plVar1 = (longlong)local_e8.Data;
            *(undefined4 *)&pUVar11->_padding_ = (undefined4)local_e0;
            *(undefined4 *)((longlong)&pUVar11->_padding_ + 4) = local_e0._4_4_;
            local_e0 = 0;
            local_e8.Data = (FScriptContainerElement *)0x0;
          }
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data);
          }
          ::FString::operator=((FString *)&pUVar11->_padding_,&param_1->ObjectName);
          pUVar12 = (UObject *)(**(code **)(this_00->_padding_ + 0x2f8))(this_00);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar12);
          }
          pUVar11->_padding_ = (longlong)pUVar12;
          pIVar5 = (pUVar11->Text).TextData.Reference;
          if (pIVar5 != local_c8.TextData.Reference) {
            (pUVar11->Text).TextData.Reference = local_c8.TextData.Reference;
            if (local_c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                        (local_c8.TextData.Reference,local_b8);
            }
            if (pIVar5 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
            }
          }
          (pUVar11->Text).Flags = local_c8.Flags;
        }
      }
      else {
        lVar10 = (**(code **)(*(longlong *)this + 0x368))
                           (this,pAVar9,this_00,param_1->NodeContainer);
        if ((lVar10 != 0) &&
           (pUVar4 = (pAVar9->RootComponent).field0_0x0.DebugPtr, pUVar4 != (USceneComponent *)0x0))
        {
          bVar2 = (pUVar4->Mobility).Value;
          (**(code **)(pUVar4->_padding_ + 0x5f8))(pUVar4,2);
          (**(code **)(*(longlong *)this + 0x370))(this,param_1,pAVar9,lVar10);
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = 0;
          local_d8.ArrayMax = 0;
          UInterchangeActorFactoryNode::GetComponentUids(this_00,&local_d8);
          local_a8._8_8_ = param_1->NodeContainer;
          local_98._0_8_ = (FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          local_78 = (void *)0x0;
          local_70 = 0;
          local_6c = 0x80;
          local_68 = 0xffffffff;
          local_64 = 0;
          local_58 = (void *)0x0;
          local_50 = 0;
          local_a8._0_8_ = pAVar9;
          UE::Interchange::Private::FComponentProcessHelper::ProcessComponents
                    ((FComponentProcessHelper *)local_a8,&local_d8,pUVar4,(uint)bVar2);
          if (bVar2 != 2) {
            (**(code **)(pUVar4->_padding_ + 0x5f8))(pUVar4);
          }
          local_50 = 0;
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_98,0,local_98._8_4_);
          iVar3 = SUB84(local_98._8_8_,4);
          local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
          if (iVar3 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
          }
          local_68 = 0xffffffff;
          local_64 = 0;
          local_70 = 0;
          if (0x80 < local_6c) {
            local_6c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
          }
          if (local_78 != (void *)0x0) {
            FMemory::Free(local_78);
          }
          if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98._0_8_);
          }
          DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
          if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.AllocatorInstance.Data);
          }
        }
        ProcessTags(this,this_00,pAVar9);
        ProcessLayerNames(this,this_00,pAVar9);
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        return (UObject *)pAVar9;
      }
      return (UObject *)pAVar9;
    }
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8603616661292974278>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeActorFactory.cpp"
                     ,0xc6,"FactoryNode");
  if (!bVar7) {
    return (UObject *)0x0;
  }
  pcVar6 = (code *)swi(3);
  pUVar12 = (UObject *)(*pcVar6)();
  return pUVar12;
}

// ProcessActor @ 14e724730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UInterchangeActorFactory::ProcessActor
          (UInterchangeActorFactory *this,AActor *param_1,UInterchangeActorFactoryNode *param_2,
          UInterchangeBaseNodeContainer *param_3,FImportSceneObjectsParams *param_4)

{
  return (UObject *)(param_1->RootComponent).field0_0x0.DebugPtr;
}

// ProcessLayerNames @ 14e725a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeActorFactory::ProcessLayerNames
          (UInterchangeActorFactory *this,UInterchangeActorFactoryNode *param_1,AActor *param_2)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FName FVar5;
  code *pcVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  FName *pFVar12;
  byte bVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  int iVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ForElementType<unsigned_int> FVar28;
  ulong64 uVar29;
  undefined1 auStack_2b8 [32];
  FName *local_298;
  FName *local_290;
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  undefined1 local_268 [4];
  FName local_264;
  TArray<FString,TSizedDefaultAllocator<32>_> local_258;
  uint local_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_240;
  undefined4 local_238;
  uint uStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  uint local_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_220;
  undefined4 local_218;
  uint uStack_214;
  uint uStack_210;
  undefined4 uStack_20c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  undefined8 uStack_1e8;
  int local_1e0;
  undefined4 uStack_1dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [16];
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FName local_120 [2];
  longlong local_110;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  uint local_100;
  int iStack_fc;
  ulonglong uStack_f8;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  uVar16 = 0;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  UInterchangeActorFactoryNode::GetLayerNames(param_1,&local_258);
  FVar23.Data = local_258.AllocatorInstance.Data;
  iVar14 = local_258.ArrayNum;
  uVar29 = (ulong64)local_258.ArrayNum;
  if ((local_258.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_c0 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if (iVar14 != 0) {
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar29);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,iVar14);
    uVar20 = 1;
    if (3 < (uint)iVar14) {
      uVar26 = (ulonglong)(((uint)iVar14 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1b8 = (undefined4)lVar19;
      uVar20 = 1 << ((byte)lVar19 & 0x1f);
    }
    if ((local_a0 == 0) || ((int)local_a0 < (int)uVar20)) {
      local_a0 = uVar20;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
      }
      if (uVar20 != 0) {
        uVar21 = uVar20;
        if (uVar20 < 2) {
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            uVar21 = 0;
            goto LAB_14e725bbd;
          }
        }
        else {
LAB_14e725bbd:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar21,4)
          ;
        }
        if (0 < (int)uVar20) {
          uVar27 = (ulonglong)uVar20;
          uVar26 = uVar16;
          do {
            FVar15.Data = local_b0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_a8.Data;
            }
            uVar11 = (longlong)(int)uVar20 - 1U & uVar26;
            uVar26 = uVar26 + 1;
            *(undefined4 *)(FVar15.Data + uVar11 * 4) = 0xffffffff;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
      }
      if (local_a0 != 0) {
        pTStack_240 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
        local_248 = 0;
        uStack_244 = 1;
        uStack_234 = 0;
        uStack_230 = 0;
        uVar26 = uVar16;
        if (local_c0 != 0) {
          FVar28 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
          if (local_c8 != (ForElementType<unsigned_int>)0x0) {
            FVar28 = local_c8;
          }
          uVar20 = *(uint *)FVar28;
          uVar27 = uVar16;
          while (uVar20 == 0) {
            uStack_230 = (int)uVar27 + 0x20;
            uVar27 = (ulonglong)uStack_230;
            iVar14 = (int)uVar26;
            local_248 = iVar14 + 1;
            uVar26 = (ulonglong)local_248;
            if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_248)
            goto LAB_14e725cd9;
            uVar20 = ((uint *)((longlong)FVar28 + 4))[iVar14];
          }
          uStack_244 = -uVar20 & uVar20;
          uVar26 = (ulonglong)uStack_244 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_1b4 = (int)lVar19;
          uStack_234 = local_1b4 + -1 + uStack_230;
          uVar26 = (ulonglong)uStack_234;
          if ((int)local_c0 < (int)uStack_234) {
LAB_14e725cd9:
            uVar26 = (ulonglong)local_c0;
            uStack_234 = local_c0;
          }
        }
        local_238 = 0xffffffff;
        local_1a0 = (longlong *)local_e8;
        local_198._padding_ = CONCAT44(uStack_244,local_248);
        local_198.CurrentBitIndex = uStack_234;
        local_198.UnvisitedBitMask = 0xffffffff;
        local_198._28_4_ = uStack_22c;
        local_198.BaseBitIndex = uStack_230;
        local_198.Array = pTStack_240;
        if ((int)uVar26 < (int)local_c0) {
          do {
            iVar10 = (int)uVar26;
            puVar24 = (undefined8 *)(*local_1a0 + (longlong)iVar10 * 0x18);
            iVar14 = *(int *)(*local_1a0 + 8 + (longlong)iVar10 * 0x18);
            if (iVar14 == 0) {
              pwVar18 = L"";
              iVar14 = 0;
            }
            else {
              pwVar18 = (wchar_t *)*puVar24;
              iVar14 = iVar14 + -1;
            }
            uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar18);
            uVar20 = local_a0 - 1 & uVar20;
            *(uint *)((longlong)puVar24 + 0x14) = uVar20;
            FVar15.Data = local_b0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_a8.Data;
            }
            uVar26 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar20;
            *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(FVar15.Data + uVar26 * 4);
            *(int *)(FVar15.Data + uVar26 * 4) = iVar10;
            local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
            uVar26 = (ulonglong)(uint)local_198.CurrentBitIndex;
          } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
        }
      }
    }
  }
  pFVar22 = FVar23.Data + uVar29 * 0x10;
  for (; FVar23.Data != pFVar22; FVar23.Data = FVar23.Data + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
               (FString *)local_1b0,(bool *)FVar23.Data);
  }
  pTVar2 = &param_2->Layers;
  uVar20 = (param_2->Layers).ArrayNum;
  pFVar22 = (pTVar2->AllocatorInstance).Data;
  if (((int)uVar20 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar20 == 0) goto LAB_14e7260a6;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar20);
  uVar21 = 1;
  if (3 < uVar20) {
    uVar26 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1b0._4_4_ = (undefined4)lVar19;
    uVar21 = 1 << ((byte)lVar19 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar21 <= (int)local_50)) goto LAB_14e7260a6;
  local_50 = uVar21;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar21 != 0) {
    uVar25 = uVar21;
    if (uVar21 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar25 = 0;
        goto LAB_14e725eed;
      }
    }
    else {
LAB_14e725eed:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar25,4);
    }
    if (0 < (int)uVar21) {
      uVar27 = (ulonglong)uVar21;
      uVar26 = uVar16;
      do {
        FVar23.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = local_58.Data;
        }
        uVar11 = uVar26 & (longlong)(int)uVar21 - 1U;
        uVar26 = uVar26 + 1;
        *(undefined4 *)(FVar23.Data + uVar11 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_220 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_228 = 0;
    uStack_224 = 1;
    uStack_214 = 0;
    uStack_210 = 0;
    if (local_70 != 0) {
      FVar28 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar28 = local_78;
      }
      uVar21 = *(uint *)FVar28;
      uVar26 = uVar16;
      while (uVar21 == 0) {
        uStack_210 = (int)uVar26 + 0x20;
        uVar26 = (ulonglong)uStack_210;
        iVar14 = (int)uVar16;
        local_228 = iVar14 + 1;
        uVar16 = (ulonglong)local_228;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_228)
        goto LAB_14e725fec;
        uVar21 = ((uint *)((longlong)FVar28 + 4))[iVar14];
      }
      uStack_224 = -uVar21 & uVar21;
      uVar16 = (ulonglong)uStack_224 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1b0._8_4_ = (undefined4)lVar19;
      uStack_214 = local_1b0._8_4_ + -1 + uStack_210;
      uVar16 = (ulonglong)uStack_214;
      if ((int)local_70 < (int)uStack_214) {
LAB_14e725fec:
        uVar16 = (ulonglong)local_70;
        uStack_214 = local_70;
      }
    }
    local_218 = 0xffffffff;
    local_178 = (longlong *)local_98;
    local_170._padding_ = CONCAT44(uStack_224,local_228);
    local_170.CurrentBitIndex = uStack_214;
    local_170.UnvisitedBitMask = 0xffffffff;
    local_170._28_4_ = uStack_20c;
    local_170.BaseBitIndex = uStack_210;
    local_170.Array = pTStack_220;
    if ((int)uVar16 < (int)local_70) {
      do {
        puVar24 = (undefined8 *)((longlong)(int)uVar16 * 0x10 + *local_178);
        uVar4 = *puVar24;
        uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar21 = local_50 - 1 & uVar21 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar24 + 0xc) = uVar21;
        FVar23.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = local_58.Data;
        }
        uVar26 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(FVar23.Data + uVar26 * 4);
        *(int *)(FVar23.Data + uVar26 * 4) = (int)uVar16;
        local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
        uVar16 = (ulonglong)(uint)local_170.CurrentBitIndex;
      } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
    }
  }
LAB_14e7260a6:
  pFVar3 = pFVar22 + (longlong)(int)uVar20 * 8;
  for (; pFVar22 != pFVar3; pFVar22 = pFVar22 + 8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
               (FName *)(local_1b0 + 0xc),(bool *)pFVar22);
  }
  local_1d8._padding_._4_4_ = 1;
  local_1d8._padding_._0_4_ = 0;
  local_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_1d8.UnvisitedBitMask = 0xffffffff;
  local_1d8.CurrentBitIndex = 0;
  local_1d8.BaseBitIndex = 0;
  if (local_c0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d8);
  }
  uVar20 = local_c0;
  TStack_148._padding_ = CONCAT44(local_1d8._padding_._4_4_,(undefined4)local_1d8._padding_);
  local_150 = (longlong *)local_e8;
  TStack_148.CurrentBitIndex = local_1d8.CurrentBitIndex;
  TStack_148.UnvisitedBitMask = local_1d8.UnvisitedBitMask;
  uStack_1e8._4_4_ = local_1d8._28_4_;
  uStack_1e8._0_4_ = local_1d8.BaseBitIndex;
  local_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  bVar13 = (byte)local_c0 & 0x1f;
  local_1e0 = local_e8._8_4_ - local_b4;
  local_208._padding_ = CONCAT44(1 << bVar13,(int)local_c0 >> 5);
  local_208.CurrentBitIndex = local_c0;
  local_208.UnvisitedBitMask = -1 << bVar13;
  local_208._24_8_ = CONCAT44(local_1d8.CurrentBitIndex,local_c0) & 0xffffffffffffffe0;
  uStack_128 = CONCAT44(uStack_1dc,local_1e0);
  TStack_148.Array = local_1d8.Array;
  TStack_148._24_8_ = uStack_1e8;
  if (((int)local_c0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar20 != local_c0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
  }
  pTVar7 = local_208.Array;
  local_110 = local_208._padding_;
  pTStack_108 = local_208.Array;
  local_100 = local_208.UnvisitedBitMask;
  iStack_fc = local_208.CurrentBitIndex;
  uVar4 = _local_100;
  uStack_f8 = local_208._24_8_;
  iStack_fc = local_208.CurrentBitIndex;
  iVar14 = iStack_fc;
  _local_100 = uVar4;
  do {
    plVar8 = local_150;
    if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
      local_268[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
    }
    if (((TStack_148.CurrentBitIndex == iVar14) && (TStack_148.Array == pTVar7)) &&
       (plVar8 == (longlong *)local_e8)) {
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      local_a0 = 0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      DestructItems<FString,int>((FString *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
      if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.AllocatorInstance.Data);
      }
      return;
    }
    lVar19 = *plVar8;
    iVar10 = *(int *)(lVar19 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x18);
    iVar17 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar17 = 0;
    }
    pFVar12 = ::FName::FName(local_120,iVar17,
                             *(wchar_t **)(lVar19 + (longlong)TStack_148.CurrentBitIndex * 0x18),
                             FNAME_Add);
    FVar5 = *pFVar12;
    uVar20 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    if (local_98._8_4_ != local_64) {
      FVar23.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar23.Data = local_58.Data;
      }
      for (iVar10 = *(int *)(FVar23.Data + (ulonglong)(local_50 - 1 & FVar5.Number + uVar20) * 4);
          iVar10 != -1; iVar10 = *(int *)(local_98._0_8_ + (longlong)iVar10 * 0x10 + 8)) {
        if (*(FName *)(local_98._0_8_ + (longlong)iVar10 * 0x10) == FVar5) goto LAB_14e726376;
      }
    }
    pFVar12 = (FName *)(pTVar2->AllocatorInstance).Data;
    local_264 = FVar5;
    if ((pFVar12 <= &local_264) &&
       (lVar19 = (longlong)(param_2->Layers).ArrayMax, &local_264 < pFVar12 + lVar19)) {
      local_280 = (longlong)(param_2->Layers).ArrayNum;
      local_278 = 8;
      local_298 = &local_264;
      local_290 = pFVar12;
      local_288 = lVar19;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = (param_2->Layers).ArrayNum;
    piVar1 = &(param_2->Layers).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_2->Layers).ArrayNum = iVar10 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_264;
LAB_14e726376:
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ProcessTags @ 14e726440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeActorFactory::ProcessTags
          (UInterchangeActorFactory *this,UInterchangeActorFactoryNode *param_1,AActor *param_2)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FName FVar5;
  code *pcVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  FName *pFVar12;
  byte bVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  int iVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ForElementType<unsigned_int> FVar28;
  ulong64 uVar29;
  undefined1 auStack_2b8 [32];
  FName *local_298;
  FName *local_290;
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  undefined1 local_268 [8];
  FName local_260;
  TArray<FString,TSizedDefaultAllocator<32>_> local_258;
  uint local_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_240;
  undefined4 local_238;
  uint uStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  uint local_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_220;
  undefined4 local_218;
  uint uStack_214;
  uint uStack_210;
  undefined4 uStack_20c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  undefined8 uStack_1e8;
  int local_1e0;
  undefined4 uStack_1dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [16];
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FName local_120 [2];
  longlong local_110;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  uint local_100;
  int iStack_fc;
  ulonglong uStack_f8;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  uVar16 = 0;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  UInterchangeActorFactoryNode::GetTags(param_1,&local_258);
  FVar23.Data = local_258.AllocatorInstance.Data;
  iVar14 = local_258.ArrayNum;
  uVar29 = (ulong64)local_258.ArrayNum;
  if ((local_258.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_c0 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if (iVar14 != 0) {
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar29);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,iVar14);
    uVar20 = 1;
    if (3 < (uint)iVar14) {
      uVar26 = (ulonglong)(((uint)iVar14 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1b8 = (undefined4)lVar19;
      uVar20 = 1 << ((byte)lVar19 & 0x1f);
    }
    if ((local_a0 == 0) || ((int)local_a0 < (int)uVar20)) {
      local_a0 = uVar20;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
      }
      if (uVar20 != 0) {
        uVar21 = uVar20;
        if (uVar20 < 2) {
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            uVar21 = 0;
            goto LAB_14e7265ad;
          }
        }
        else {
LAB_14e7265ad:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar21,4)
          ;
        }
        if (0 < (int)uVar20) {
          uVar27 = (ulonglong)uVar20;
          uVar26 = uVar16;
          do {
            FVar15.Data = local_b0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_a8.Data;
            }
            uVar11 = (longlong)(int)uVar20 - 1U & uVar26;
            uVar26 = uVar26 + 1;
            *(undefined4 *)(FVar15.Data + uVar11 * 4) = 0xffffffff;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
      }
      if (local_a0 != 0) {
        pTStack_240 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
        local_248 = 0;
        uStack_244 = 1;
        uStack_234 = 0;
        uStack_230 = 0;
        uVar26 = uVar16;
        if (local_c0 != 0) {
          FVar28 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
          if (local_c8 != (ForElementType<unsigned_int>)0x0) {
            FVar28 = local_c8;
          }
          uVar20 = *(uint *)FVar28;
          uVar27 = uVar16;
          while (uVar20 == 0) {
            uStack_230 = (int)uVar27 + 0x20;
            uVar27 = (ulonglong)uStack_230;
            iVar14 = (int)uVar26;
            local_248 = iVar14 + 1;
            uVar26 = (ulonglong)local_248;
            if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_248)
            goto LAB_14e7266c9;
            uVar20 = ((uint *)((longlong)FVar28 + 4))[iVar14];
          }
          uStack_244 = -uVar20 & uVar20;
          uVar26 = (ulonglong)uStack_244 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_1b4 = (int)lVar19;
          uStack_234 = local_1b4 + -1 + uStack_230;
          uVar26 = (ulonglong)uStack_234;
          if ((int)local_c0 < (int)uStack_234) {
LAB_14e7266c9:
            uVar26 = (ulonglong)local_c0;
            uStack_234 = local_c0;
          }
        }
        local_238 = 0xffffffff;
        local_1a0 = (longlong *)local_e8;
        local_198._padding_ = CONCAT44(uStack_244,local_248);
        local_198.CurrentBitIndex = uStack_234;
        local_198.UnvisitedBitMask = 0xffffffff;
        local_198._28_4_ = uStack_22c;
        local_198.BaseBitIndex = uStack_230;
        local_198.Array = pTStack_240;
        if ((int)uVar26 < (int)local_c0) {
          do {
            iVar10 = (int)uVar26;
            puVar24 = (undefined8 *)(*local_1a0 + (longlong)iVar10 * 0x18);
            iVar14 = *(int *)(*local_1a0 + 8 + (longlong)iVar10 * 0x18);
            if (iVar14 == 0) {
              pwVar18 = L"";
              iVar14 = 0;
            }
            else {
              pwVar18 = (wchar_t *)*puVar24;
              iVar14 = iVar14 + -1;
            }
            uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar18);
            uVar20 = local_a0 - 1 & uVar20;
            *(uint *)((longlong)puVar24 + 0x14) = uVar20;
            FVar15.Data = local_b0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_a8.Data;
            }
            uVar26 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar20;
            *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(FVar15.Data + uVar26 * 4);
            *(int *)(FVar15.Data + uVar26 * 4) = iVar10;
            local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
            uVar26 = (ulonglong)(uint)local_198.CurrentBitIndex;
          } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
        }
      }
    }
  }
  pFVar22 = FVar23.Data + uVar29 * 0x10;
  for (; FVar23.Data != pFVar22; FVar23.Data = FVar23.Data + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
               (FString *)local_1b0,(bool *)FVar23.Data);
  }
  pTVar2 = &param_2->Tags;
  uVar20 = (param_2->Tags).ArrayNum;
  pFVar22 = (pTVar2->AllocatorInstance).Data;
  if (((int)uVar20 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar20 == 0) goto LAB_14e726a96;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar20);
  uVar21 = 1;
  if (3 < uVar20) {
    uVar26 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1b0._4_4_ = (undefined4)lVar19;
    uVar21 = 1 << ((byte)lVar19 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar21 <= (int)local_50)) goto LAB_14e726a96;
  local_50 = uVar21;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar21 != 0) {
    uVar25 = uVar21;
    if (uVar21 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar25 = 0;
        goto LAB_14e7268dd;
      }
    }
    else {
LAB_14e7268dd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar25,4);
    }
    if (0 < (int)uVar21) {
      uVar27 = (ulonglong)uVar21;
      uVar26 = uVar16;
      do {
        FVar23.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = local_58.Data;
        }
        uVar11 = uVar26 & (longlong)(int)uVar21 - 1U;
        uVar26 = uVar26 + 1;
        *(undefined4 *)(FVar23.Data + uVar11 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_220 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_228 = 0;
    uStack_224 = 1;
    uStack_214 = 0;
    uStack_210 = 0;
    if (local_70 != 0) {
      FVar28 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar28 = local_78;
      }
      uVar21 = *(uint *)FVar28;
      uVar26 = uVar16;
      while (uVar21 == 0) {
        uStack_210 = (int)uVar26 + 0x20;
        uVar26 = (ulonglong)uStack_210;
        iVar14 = (int)uVar16;
        local_228 = iVar14 + 1;
        uVar16 = (ulonglong)local_228;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_228)
        goto LAB_14e7269dc;
        uVar21 = ((uint *)((longlong)FVar28 + 4))[iVar14];
      }
      uStack_224 = -uVar21 & uVar21;
      uVar16 = (ulonglong)uStack_224 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1b0._8_4_ = (undefined4)lVar19;
      uStack_214 = local_1b0._8_4_ + -1 + uStack_210;
      uVar16 = (ulonglong)uStack_214;
      if ((int)local_70 < (int)uStack_214) {
LAB_14e7269dc:
        uVar16 = (ulonglong)local_70;
        uStack_214 = local_70;
      }
    }
    local_218 = 0xffffffff;
    local_178 = (longlong *)local_98;
    local_170._padding_ = CONCAT44(uStack_224,local_228);
    local_170.CurrentBitIndex = uStack_214;
    local_170.UnvisitedBitMask = 0xffffffff;
    local_170._28_4_ = uStack_20c;
    local_170.BaseBitIndex = uStack_210;
    local_170.Array = pTStack_220;
    if ((int)uVar16 < (int)local_70) {
      do {
        puVar24 = (undefined8 *)((longlong)(int)uVar16 * 0x10 + *local_178);
        uVar4 = *puVar24;
        uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar21 = local_50 - 1 & uVar21 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar24 + 0xc) = uVar21;
        FVar23.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = local_58.Data;
        }
        uVar26 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(FVar23.Data + uVar26 * 4);
        *(int *)(FVar23.Data + uVar26 * 4) = (int)uVar16;
        local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
        uVar16 = (ulonglong)(uint)local_170.CurrentBitIndex;
      } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
    }
  }
LAB_14e726a96:
  pFVar3 = pFVar22 + (longlong)(int)uVar20 * 8;
  for (; pFVar22 != pFVar3; pFVar22 = pFVar22 + 8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
               (FName *)(local_1b0 + 0xc),(bool *)pFVar22);
  }
  local_1d8._padding_._4_4_ = 1;
  local_1d8._padding_._0_4_ = 0;
  local_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_1d8.UnvisitedBitMask = 0xffffffff;
  local_1d8.CurrentBitIndex = 0;
  local_1d8.BaseBitIndex = 0;
  if (local_c0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d8);
  }
  uVar20 = local_c0;
  TStack_148._padding_ = CONCAT44(local_1d8._padding_._4_4_,(undefined4)local_1d8._padding_);
  local_150 = (longlong *)local_e8;
  TStack_148.CurrentBitIndex = local_1d8.CurrentBitIndex;
  TStack_148.UnvisitedBitMask = local_1d8.UnvisitedBitMask;
  uStack_1e8._4_4_ = local_1d8._28_4_;
  uStack_1e8._0_4_ = local_1d8.BaseBitIndex;
  local_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  bVar13 = (byte)local_c0 & 0x1f;
  local_1e0 = local_e8._8_4_ - local_b4;
  local_208._padding_ = CONCAT44(1 << bVar13,(int)local_c0 >> 5);
  local_208.CurrentBitIndex = local_c0;
  local_208.UnvisitedBitMask = -1 << bVar13;
  local_208._24_8_ = CONCAT44(local_1d8.CurrentBitIndex,local_c0) & 0xffffffffffffffe0;
  uStack_128 = CONCAT44(uStack_1dc,local_1e0);
  TStack_148.Array = local_1d8.Array;
  TStack_148._24_8_ = uStack_1e8;
  if (((int)local_c0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar20 != local_c0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
  }
  pTVar7 = local_208.Array;
  local_110 = local_208._padding_;
  pTStack_108 = local_208.Array;
  local_100 = local_208.UnvisitedBitMask;
  iStack_fc = local_208.CurrentBitIndex;
  uVar4 = _local_100;
  uStack_f8 = local_208._24_8_;
  iStack_fc = local_208.CurrentBitIndex;
  iVar14 = iStack_fc;
  _local_100 = uVar4;
  do {
    plVar8 = local_150;
    if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
      local_268[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
    }
    if (((TStack_148.CurrentBitIndex == iVar14) && (TStack_148.Array == pTVar7)) &&
       (plVar8 == (longlong *)local_e8)) {
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      local_a0 = 0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      DestructItems<FString,int>((FString *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
      if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.AllocatorInstance.Data);
      }
      return;
    }
    lVar19 = *plVar8;
    iVar10 = *(int *)(lVar19 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x18);
    iVar17 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar17 = 0;
    }
    pFVar12 = ::FName::FName(local_120,iVar17,
                             *(wchar_t **)(lVar19 + (longlong)TStack_148.CurrentBitIndex * 0x18),
                             FNAME_Add);
    FVar5 = *pFVar12;
    local_260 = FVar5;
    uVar20 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    if (local_98._8_4_ != local_64) {
      FVar23.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar23.Data = local_58.Data;
      }
      for (iVar10 = *(int *)(FVar23.Data + (ulonglong)(local_50 - 1 & FVar5.Number + uVar20) * 4);
          iVar10 != -1; iVar10 = *(int *)(local_98._0_8_ + (longlong)iVar10 * 0x10 + 8)) {
        if (*(FName *)(local_98._0_8_ + (longlong)iVar10 * 0x10) == FVar5) goto LAB_14e726d61;
      }
    }
    pFVar12 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar12 <= &local_260) &&
       (lVar19 = (longlong)(param_2->Tags).ArrayMax, &local_260 < pFVar12 + lVar19)) {
      local_280 = (longlong)(param_2->Tags).ArrayNum;
      local_278 = 8;
      local_298 = &local_260;
      local_290 = pFVar12;
      local_288 = lVar19;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = (param_2->Tags).ArrayNum;
    piVar1 = &(param_2->Tags).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_2->Tags).ArrayNum = iVar10 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_260;
LAB_14e726d61:
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// StaticRegisterNativesUInterchangeActorFactory @ 14e72a4b0

void __cdecl UInterchangeActorFactory::StaticRegisterNativesUInterchangeActorFactory(void)

{
  return;
}

