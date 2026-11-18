// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 15

// StaticClass @ 14e7002c0

UClass * __cdecl UInterchangeSceneImportAssetFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSceneImportAssetFactory",
               &Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneImportAssetFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneImportAssetFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSceneImportAssetFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.InnerSingleton;
}

// UInterchangeSceneImportAssetFactory @ 14e708a30

UInterchangeSceneImportAssetFactory * __thiscall
UInterchangeSceneImportAssetFactory::UInterchangeSceneImportAssetFactory
          (UInterchangeSceneImportAssetFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSceneImportAssetFactory__6B_;
  return this;
}

// UInterchangeSceneImportAssetFactory @ 14e708a60

UInterchangeSceneImportAssetFactory * __thiscall
UInterchangeSceneImportAssetFactory::UInterchangeSceneImportAssetFactory
          (UInterchangeSceneImportAssetFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSceneImportAssetFactory__6B_;
  return this;
}

// ~UInterchangeSceneImportAssetFactory @ 14e709a10

void __thiscall
UInterchangeSceneImportAssetFactory::~UInterchangeSceneImportAssetFactory
          (UInterchangeSceneImportAssetFactory *this)

{
  *(undefined ***)this = &___7UInterchangeSceneImportAssetFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// BackupSourceData @ 14e70eae0

void __thiscall
UInterchangeSceneImportAssetFactory::BackupSourceData
          (UInterchangeSceneImportAssetFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e70ecf0

/* WARNING: Enum "Type": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeSceneImportAssetFactory::BeginImportAsset_GameThread
          (UInterchangeSceneImportAssetFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  UClass *pUVar7;
  FImportAssetResult *pFVar8;
  bool bVar9;
  undefined1 local_28 [32];
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId120,
               "UInterchangeSceneImportAssetFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneImportAssetFactory.cpp"
               ,0x78);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId120);
  }
  pUVar5 = (UClass *)(**(code **)(*(longlong *)this + 0x2b0))(this);
  if (((param_1->NodeContainer != (UInterchangeBaseNodeContainer *)0x0) &&
      (param_1->AssetNode != (UInterchangeFactoryBaseNode *)0x0)) &&
     (lVar6 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (pUVar2 = param_1->AssetNode, pUVar2 != (UInterchangeFactoryBaseNode *)0x0)) {
      pUVar7 = Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_NoRegister();
      lVar6 = pUVar2->_padding_;
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(lVar6 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        local_28._8_8_ =
             UE::Interchange::Private::InterchangeSceneImportAssetFactory::FindOrCreateAsset
                       (param_1,pUVar5);
        if ((UObject *)local_28._8_8_ == (UObject *)0x0) {
LAB_14e70ee64:
          local_28._8_8_ = (UObject *)0x0;
          if (2 < (byte)LogInterchangeImport._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
            local_28._8_8_ = (UObject *)0x0;
          }
        }
        else {
          pUVar5 = Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(*(longlong *)&((UObject *)local_28._8_8_)->field_0x10 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&((UObject *)local_28._8_8_)->field_0x10 + 0x30) +
               (longlong)iVar1 * 8) != &pUVar5->_padding_)) goto LAB_14e70ee64;
          if (param_1->SourceData == (UInterchangeSourceData *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1975487366189547383>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneImportAssetFactory.cpp"
                               ,0x89,"Arguments.SourceData");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar8 = (FImportAssetResult *)(*pcVar3)();
              return pFVar8;
            }
          }
          else {
            UInterchangeSourceData::GetFileContentHash
                      (param_1->SourceData,(TOptional<FMD5Hash> *)local_28);
          }
        }
        local_28[0] = false;
        *(ulonglong *)__return_storage_ptr__ = (ulonglong)(uint7)local_28._1_7_ << 8;
        __return_storage_ptr__->ImportedObject = (UObject *)local_28._8_8_;
        goto LAB_14e70eeb1;
      }
    }
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
LAB_14e70eeb1:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ClearBackupSourceData @ 14e711940

void __thiscall
UInterchangeSceneImportAssetFactory::ClearBackupSourceData
          (UInterchangeSceneImportAssetFactory *this,UObject *param_1)

{
  return;
}

// FinalizeObject_GameThread @ 14e7149d0

void __thiscall
UInterchangeSceneImportAssetFactory::FinalizeObject_GameThread
          (UInterchangeSceneImportAssetFactory *this,FSetupObjectParams *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  bool bVar7;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId172,
               "UInterchangeSceneImportAssetFactory::FinalizeObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneImportAssetFactory.cpp"
               ,0xac);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId172);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneImportAssetFactory.cpp"
                         ,0xad,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x142,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar2 = param_1->ImportedObject;
  if (pUVar2 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister();
    lVar3 = *(longlong *)&pUVar2->field_0x10;
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(lVar3 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar6->_padding_)) && (param_1->FactoryNode != (UInterchangeFactoryBaseNode *)0x0))
    goto LAB_14e714adf;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1975487366189547343>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneImportAssetFactory.cpp"
                     ,0xb1,"SceneImportAsset && Arguments.FactoryNode");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14e714adf:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetFactoryClass @ 14e7183f0

UClass * __thiscall
UInterchangeSceneImportAssetFactory::GetFactoryClass(UInterchangeSceneImportAssetFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeSceneImportAsset",
               &Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton,
               UInterchangeSceneImportAsset::StaticRegisterNativesUInterchangeSceneImportAsset,0x30,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeSceneImportAsset>,
               InternalVTableHelperCtorCaller<UInterchangeSceneImportAsset>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71a400

UClass * __cdecl UInterchangeSceneImportAssetFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSceneImportAssetFactory",
               &Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneImportAssetFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneImportAssetFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSceneImportAssetFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e71b710

bool __thiscall
UInterchangeSceneImportAssetFactory::GetSourceFilenames
          (UInterchangeSceneImportAssetFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ReinstateSourceData @ 14e727da0

void __thiscall
UInterchangeSceneImportAssetFactory::ReinstateSourceData
          (UInterchangeSceneImportAssetFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e728320

bool __thiscall
UInterchangeSceneImportAssetFactory::SetSourceFilename
          (UInterchangeSceneImportAssetFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e7284f0

void __thiscall
UInterchangeSceneImportAssetFactory::SetupObject_GameThread
          (UInterchangeSceneImportAssetFactory *this,FSetupObjectParams *param_1)

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
              (&::__CpuProfilerEventSpecId150,
               "UInterchangeSceneImportAssetFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneImportAssetFactory.cpp"
               ,0x96);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId150);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneImportAssetFactory.cpp"
                         ,0x97,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
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
  pUVar5 = param_1->ImportedObject;
  if (pUVar5 == (UObject *)0x0) {
LAB_14e7285d0:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14e7285d0;
  }
  this_00 = param_1->FactoryNode;
  if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) && (pUVar5 != (UObject *)0x0)) &&
       (param_1->SourceData != (UInterchangeSourceData *)0x0)) {
      UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(this_00,pUVar5);
      goto LAB_14e728644;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1975487366189547364>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneImportAssetFactory.cpp"
                     ,0x9c,"FactoryNode && SceneImportAsset && Arguments.SourceData");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14e728644:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StaticRegisterNativesUInterchangeSceneImportAssetFactory @ 14e72a580

void __cdecl
UInterchangeSceneImportAssetFactory::StaticRegisterNativesUInterchangeSceneImportAssetFactory(void)

{
  return;
}

