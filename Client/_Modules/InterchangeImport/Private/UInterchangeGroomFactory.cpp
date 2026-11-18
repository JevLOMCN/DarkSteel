// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 17

// StaticClass @ 14e6aad20

UClass * __cdecl UInterchangeGroomFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGroomFactory",
               &Z_Registration_Info_UClass_UInterchangeGroomFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeGroomFactory,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeGroomFactory>,
               InternalVTableHelperCtorCaller<UInterchangeGroomFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomFactory.InnerSingleton;
}

// UInterchangeGroomFactory @ 14e6b5900

UInterchangeGroomFactory * __thiscall
UInterchangeGroomFactory::UInterchangeGroomFactory
          (UInterchangeGroomFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeGroomFactory__6B_;
  (this->GroomPayload).bIsSet = false;
  return this;
}

// UInterchangeGroomFactory @ 14e6b5930

UInterchangeGroomFactory * __thiscall
UInterchangeGroomFactory::UInterchangeGroomFactory
          (UInterchangeGroomFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeGroomFactory__6B_;
  (this->GroomPayload).bIsSet = false;
  return this;
}

// ~UInterchangeGroomFactory @ 14e6b9b90

void __thiscall UInterchangeGroomFactory::~UInterchangeGroomFactory(UInterchangeGroomFactory *this)

{
  this->_padding_ = (longlong)&___7UInterchangeGroomFactory__6B_;
  if ((this->GroomPayload).bIsSet != false) {
    FHairDescription::~FHairDescription((FHairDescription *)&this->GroomPayload);
  }
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e6bb520

void __thiscall
`UInterchangeGroomFactory::CreatePayloadTasks'::__l32::<lambda_1>::operator()(void *this)

{
  FHairDescription *this_00;
  FHairDescription *pFVar1;
  bool bVar2;
  FHairDescription local_128;
  char local_18;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId71,"UInterchangeGroomFactory::GetGroomPayloadDataTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomFactory.cpp"
               ,0x47);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId71);
  }
  pFVar1 = (FHairDescription *)
           (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
                     (*(longlong **)((longlong)this + 8),&local_128,(longlong)this + 0x10);
  this_00 = *(FHairDescription **)this;
  if (pFVar1 != this_00) {
    if (*(char *)&pFVar1[1].VertexAttributesSet == '\0') {
      if (*(char *)&this_00[1].VertexAttributesSet != '\0') {
        FHairDescription::~FHairDescription(this_00);
        *(undefined1 *)&this_00[1].VertexAttributesSet = 0;
      }
    }
    else {
      if (*(char *)&this_00[1].VertexAttributesSet != '\0') {
        FHairDescription::~FHairDescription(this_00);
      }
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)pFVar1);
      *(undefined4 *)&(this_00->VertexAttributesSet).field_0x50 =
           *(undefined4 *)&(pFVar1->VertexAttributesSet).field_0x50;
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)&this_00->StrandAttributesSet,
                 (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)&pFVar1->StrandAttributesSet);
      *(undefined4 *)&(this_00->StrandAttributesSet).field_0x50 =
           *(undefined4 *)&(pFVar1->StrandAttributesSet).field_0x50;
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)&this_00->GroomAttributesSet,
                 (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)&pFVar1->GroomAttributesSet);
      *(undefined4 *)&(this_00->GroomAttributesSet).field_0x50 =
           *(undefined4 *)&(pFVar1->GroomAttributesSet).field_0x50;
      this_00->NumVertices = pFVar1->NumVertices;
      this_00->NumStrands = pFVar1->NumStrands;
      *(undefined1 *)&this_00[1].VertexAttributesSet = 1;
    }
  }
  if (local_18 != '\0') {
    FHairDescription::~FHairDescription(&local_128);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BackupSourceData @ 14e6becd0

void __thiscall
UInterchangeGroomFactory::BackupSourceData(UInterchangeGroomFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e6c0c80

FImportAssetResult * __thiscall
UInterchangeGroomFactory::BeginImportAsset_GameThread
          (UInterchangeGroomFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId81,"UInterchangeGroomFactory::BeginImportAsset_GameThread",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomFactory.cpp"
             ,0x51);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId81);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// ClearBackupSourceData @ 14e6c0fe0

void __thiscall
UInterchangeGroomFactory::ClearBackupSourceData(UInterchangeGroomFactory *this,UObject *param_1)

{
  return;
}

// CreatePayloadTasks @ 14e6c1bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGroomFactory::CreatePayloadTasks
          (UInterchangeGroomFactory *this,FImportAssetObjectParams *param_1,bool param_2,
          TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  UInterchangeFactoryBaseNode *this_00;
  UInterchangeTranslatorBase *this_01;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  void *pvVar5;
  UInterchangeGroomNode *this_02;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  TReferenceControllerBase<1> *local_b8;
  TReferenceControllerBase<1> *local_b0;
  TOptional<UE::Interchange::FGroomPayloadData> *local_a8;
  void *local_a0;
  FString local_98;
  EInterchangeGroomPayLoadType local_88;
  int local_84;
  TOptional<FInterchangeGroomPayloadKey> local_80;
  code *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  atomic<int> aStack_40;
  atomic<int> aStack_3c;
  longlong local_38;
  undefined8 *local_30;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId32,"UInterchangeGroomFactory::CreatePayloadTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomFactory.cpp"
               ,0x20);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId32);
  }
  this_00 = param_1->AssetNode;
  if (this_00 == (UInterchangeFactoryBaseNode *)0x0) goto LAB_14e6c20a3;
  pUVar4 = Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister();
  iVar3 = (int)pUVar4->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar4->_padding_)) goto LAB_14e6c20a3;
  this_01 = param_1->Translator;
  if (this_01 != (UInterchangeTranslatorBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterchangeGroomPayloadInterface_NoRegister();
    pvVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar4);
    if (pvVar5 != (void *)0x0) {
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)this_00,&local_c8);
      iVar3 = 0;
      if (local_c8.ArrayNum != 0) {
        if ((local_c8.ArrayNum < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_02 = (UInterchangeGroomNode *)
                  UInterchangeBaseNodeContainer::GetNode
                            (param_1->NodeContainer,(FString *)local_c8.AllocatorInstance.Data);
        if (this_02 == (UInterchangeGroomNode *)0x0) {
LAB_14e6c1d33:
          this_02 = (UInterchangeGroomNode *)0x0;
        }
        else {
          pUVar4 = Z_Construct_UClass_UInterchangeGroomNode_NoRegister();
          iVar3 = (int)pUVar4->_padding_;
          if ((*(int *)(this_02->_padding_ + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar4->_padding_)) goto LAB_14e6c1d33;
        }
        if (this_02 != (UInterchangeGroomNode *)0x0) {
          UInterchangeGroomNode::GetPayloadKey(this_02,&local_80);
          if (local_80.bIsSet == false) {
            bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6851125508940234693>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomFactory.cpp"
                               ,0x3b,"OptionalPayloadKey.IsSet()");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (2 < (byte)LogInterchangeImport._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
            }
          }
          else {
            local_a8 = &this->GroomPayload;
            local_a0 = pvVar5;
            ::FString::FString(&local_98,(FString *)&local_80);
            local_88 = local_80.TypedValue.Type;
            local_84 = local_80.TypedValue.FrameNumber;
            pTVar6 = ::operator_new(0xb0);
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
              pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
            }
            else {
              pTVar6->SharedReferenceCount = (atomic<int>)0x1;
              pTVar6->WeakReferenceCount = (atomic<int>)0x1;
              local_58 = (code *)0x0;
              pTVar6->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFInterchangeTaskLambda_Interchange_UE___00_SharedPointerInternals__6B_
              ;
              local_30 = FMemory::Malloc(0x30,8);
              *local_30 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`UInterchangeGroomFactory::CreatePayloadTasks'::`32'::<lambda_1>,0,1>
                           ::_vftable_;
              local_30[1] = local_a8;
              local_30[2] = local_a0;
              local_30[3] = 0;
              local_30[3] = local_98.Data.AllocatorInstance.Data;
              local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(local_30 + 4) = local_98.Data.ArrayNum;
              *(int *)((longlong)local_30 + 0x24) = local_98.Data.ArrayMax;
              local_98.Data.ArrayNum = 0;
              local_98.Data.ArrayMax = 0;
              *(EInterchangeGroomPayLoadType *)(local_30 + 5) = local_88;
              *(int *)((longlong)local_30 + 0x2c) = local_84;
              if (local_30 + 1 != (longlong *)0x0) {
                local_58 = UE::Core::Private::Function::
                           TFunctionRefCaller<`UInterchangeGroomFactory::CreatePayloadTasks'::__l32::<lambda_1>,void>
                           ::Call;
              }
              pTVar6[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
              InitializeCriticalSectionAndSpinCount
                        ((LPCRITICAL_SECTION)&pTVar6[1].SharedReferenceCount,4000);
              pTVar6[1]._padding_ = (longlong)&___7FInterchangeTaskLambda_Interchange_UE__6B_;
              pTVar6[4]._padding_ = -1;
              *(undefined1 *)&pTVar6[4].SharedReferenceCount = 0;
              pTVar6[5]._padding_ = 0;
              pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
              pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
              pTVar6[6]._padding_ = 0;
              pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
              pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
              *(bool *)&pTVar6[7]._padding_ = param_2;
              pTVar6[8]._padding_ = (longlong)local_58;
              *(undefined8 **)&pTVar6[10].SharedReferenceCount = local_30;
              *(undefined4 *)&pTVar6[9]._padding_ = local_48;
              *(undefined4 *)((longlong)&pTVar6[9]._padding_ + 4) = uStack_44;
              pTVar6[9].SharedReferenceCount = aStack_40;
              pTVar6[9].WeakReferenceCount = aStack_3c;
              local_30 = (undefined8 *)0x0;
              pTVar6[10]._padding_ = local_38;
              if (pTVar6[8]._padding_ != 0) {
                local_58 = (code *)0x0;
              }
              if (local_58 != (code *)0x0) {
                (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))(&local_48);
              }
              pTVar9 = pTVar6 + 1;
              if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
              pTVar7 = pTVar6;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar8 = (param_3->AllocatorInstance).Data;
            local_b8 = pTVar9;
            local_b0 = pTVar7;
            if (((pFVar8 <= (FScriptContainerElement *)&local_b8) &&
                ((FScriptContainerElement *)&local_b8 < pFVar8 + (longlong)param_3->ArrayMax * 0x10)
                ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar3 = param_3->ArrayNum;
            if (iVar3 == param_3->ArrayMax) {
              iVar3 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar3 + 1;
            pFVar8 = (param_3->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
            *(TReferenceControllerBase<1> **)pFVar8 = local_b8;
            *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_b0;
            local_b0 = (TReferenceControllerBase<1> *)0x0;
            local_b8 = (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
          }
          if ((local_80.bIsSet != false) &&
             (local_80.TypedValue.UniqueId.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_80.TypedValue.UniqueId.Data.AllocatorInstance.Data);
          }
        }
        iVar3 = local_c8.ArrayNum;
      }
      DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,iVar3);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      goto LAB_14e6c20a3;
    }
  }
  if (1 < (byte)LogInterchangeImport._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
LAB_14e6c20a3:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetFactoryAssetType @ 14e6c38c0

EInterchangeFactoryAssetType __thiscall
UInterchangeGroomFactory::GetFactoryAssetType(UInterchangeGroomFactory *this)

{
  return Grooms;
}

// GetFactoryClass @ 14e6c38e0

UClass * __thiscall UInterchangeGroomFactory::GetFactoryClass(UInterchangeGroomFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGroomAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomAsset",
               &Z_Registration_Info_UClass_UGroomAsset.InnerSingleton,
               UGroomAsset::StaticRegisterNativesUGroomAsset,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomAsset>,
               InternalVTableHelperCtorCaller<UGroomAsset>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomAsset.InnerSingleton;
}

// GetPrivateStaticClass @ 14e6c4f80

UClass * __cdecl UInterchangeGroomFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGroomFactory",
               &Z_Registration_Info_UClass_UInterchangeGroomFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeGroomFactory,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeGroomFactory>,
               InternalVTableHelperCtorCaller<UInterchangeGroomFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e6c89c0

bool __thiscall
UInterchangeGroomFactory::GetSourceFilenames
          (UInterchangeGroomFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ReinstateSourceData @ 14e6d0bd0

void __thiscall
UInterchangeGroomFactory::ReinstateSourceData(UInterchangeGroomFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e6d1b50

bool __thiscall
UInterchangeGroomFactory::SetSourceFilename
          (UInterchangeGroomFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e6d2260

void __thiscall
UInterchangeGroomFactory::SetupObject_GameThread
          (UInterchangeGroomFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId183,"UInterchangeGroomFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomFactory.cpp"
               ,0xb7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId183);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (!bVar3) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// StaticRegisterNativesUInterchangeGroomFactory @ 14e6d2320

void __cdecl UInterchangeGroomFactory::StaticRegisterNativesUInterchangeGroomFactory(void)

{
  return;
}

