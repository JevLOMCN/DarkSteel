// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 21

// StaticClass @ 14e6fff40

UClass * __cdecl UInterchangeTextureFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeTextureFactory",
               &Z_Registration_Info_UClass_UInterchangeTextureFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureFactory,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureFactory>,
               InternalVTableHelperCtorCaller<UInterchangeTextureFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureFactory.InnerSingleton;
}

// UInterchangeTextureFactory @ 14e708f50

UInterchangeTextureFactory * __thiscall
UInterchangeTextureFactory::UInterchangeTextureFactory
          (UInterchangeTextureFactory *this,FVTableHelper *param_1)

{
  FProcessedPayload *pFVar1;
  FSharedBufferWithID *pFVar2;
  
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeTextureFactory__6B_;
  (this->ProcessedPayload).SettingsFromPayload.TypeIndex = '\0';
  (this->ProcessedPayload).PayloadAndId.Payload.Owner.Owner = (FBufferOwner *)0x0;
  pFVar1 = &this->ProcessedPayload;
  (pFVar1->PayloadAndId).PayloadId.Hash[0] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[1] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[2] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[3] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[4] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[5] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[6] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[7] = '\0';
  pFVar2 = &(this->ProcessedPayload).PayloadAndId;
  (pFVar2->PayloadId).Hash[8] = '\0';
  (pFVar2->PayloadId).Hash[9] = '\0';
  (pFVar2->PayloadId).Hash[10] = '\0';
  (pFVar2->PayloadId).Hash[0xb] = '\0';
  (pFVar2->PayloadId).Hash[0xc] = '\0';
  (pFVar2->PayloadId).Hash[0xd] = '\0';
  (pFVar2->PayloadId).Hash[0xe] = '\0';
  (pFVar2->PayloadId).Hash[0xf] = '\0';
  pFVar2 = &(this->ProcessedPayload).PayloadAndId;
  (pFVar2->PayloadId).Hash[0x10] = '\0';
  (pFVar2->PayloadId).Hash[0x11] = '\0';
  (pFVar2->PayloadId).Hash[0x12] = '\0';
  (pFVar2->PayloadId).Hash[0x13] = '\0';
  this->bSkipImport = false;
  (this->AlternateTexturePath).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->AlternateTexturePath).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->AlternateTexturePath).field0_0x0 + 0xc) = 0xffffffff;
  return this;
}

// UInterchangeTextureFactory @ 14e708fc0

UInterchangeTextureFactory * __thiscall
UInterchangeTextureFactory::UInterchangeTextureFactory
          (UInterchangeTextureFactory *this,FObjectInitializer *param_1)

{
  FProcessedPayload *pFVar1;
  FSharedBufferWithID *pFVar2;
  
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeTextureFactory__6B_;
  (this->ProcessedPayload).SettingsFromPayload.TypeIndex = '\0';
  (this->ProcessedPayload).PayloadAndId.Payload.Owner.Owner = (FBufferOwner *)0x0;
  pFVar1 = &this->ProcessedPayload;
  (pFVar1->PayloadAndId).PayloadId.Hash[0] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[1] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[2] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[3] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[4] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[5] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[6] = '\0';
  (pFVar1->PayloadAndId).PayloadId.Hash[7] = '\0';
  pFVar2 = &(this->ProcessedPayload).PayloadAndId;
  (pFVar2->PayloadId).Hash[8] = '\0';
  (pFVar2->PayloadId).Hash[9] = '\0';
  (pFVar2->PayloadId).Hash[10] = '\0';
  (pFVar2->PayloadId).Hash[0xb] = '\0';
  (pFVar2->PayloadId).Hash[0xc] = '\0';
  (pFVar2->PayloadId).Hash[0xd] = '\0';
  (pFVar2->PayloadId).Hash[0xe] = '\0';
  (pFVar2->PayloadId).Hash[0xf] = '\0';
  pFVar2 = &(this->ProcessedPayload).PayloadAndId;
  (pFVar2->PayloadId).Hash[0x10] = '\0';
  (pFVar2->PayloadId).Hash[0x11] = '\0';
  (pFVar2->PayloadId).Hash[0x12] = '\0';
  (pFVar2->PayloadId).Hash[0x13] = '\0';
  this->bSkipImport = false;
  (this->AlternateTexturePath).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->AlternateTexturePath).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->AlternateTexturePath).field0_0x0 + 0xc) = 0xffffffff;
  return this;
}

// ~UInterchangeTextureFactory @ 14e709bb0

void __thiscall
UInterchangeTextureFactory::~UInterchangeTextureFactory(UInterchangeTextureFactory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeTextureFactory__6B_;
  if ((*(int *)((longlong)&(this->AlternateTexturePath).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->AlternateTexturePath).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  UE::Interchange::Private::InterchangeTextureFactory::FProcessedPayload::~FProcessedPayload
            (&this->ProcessedPayload);
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e70a620

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UInterchangeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  UInterchangeResultError_Generic *pUVar6;
  UObject *pUVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_78;
  undefined8 local_70;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar6 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                     (*(UInterchangeResultsContainer **)(lVar3 + 0x28));
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x28);
  local_78.Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(lVar3 + 0x30);
  _Src = *(void **)(lVar3 + 0x28);
  local_70 = CONCAT44(local_70._4_4_,iVar2);
  if (iVar2 == 0) {
    local_70 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_78,iVar2,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src,(longlong)iVar2 * 2);
  }
  plVar1 = &pUVar6->_padding_;
  if ((ForAnyElementType *)plVar1 != &local_78) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_78.Data;
    *(undefined4 *)&pUVar6->_padding_ = (undefined4)local_70;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&pUVar6->_padding_ + 4) = local_70._4_4_;
    local_70 = 0;
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::operator=
            ((FString *)&pUVar6->_padding_,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  pUVar7 = (UObject *)(**(code **)(**(longlong **)this + 0x2b0))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  pUVar6->_padding_ = (longlong)pUVar7;
  local_68.TextData.Reference = (param_1->TextData).Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,local_res8);
  }
  local_68.Flags = param_1->Flags;
  pFVar8 = FText::FromString(&local_38,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"InterchangeTextureFactory",L"TexFact_CouldNotCreateMat",
                      L"UInterchangeTextureFactory: Could not create texture asset {0}. Reason: {1}"
                     );
  pFVar10 = FTextFormat::FTextFormat(&local_28,pFVar9,Default);
  pFVar8 = FText::Format<FText,FText>(&local_58,pFVar10,pFVar8,&local_68);
  FText::operator=(&pUVar6->Text,pFVar8);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  *(undefined1 *)(*(longlong *)this + 0x100) = 1;
  **(undefined1 **)((longlong)this + 0x10) = 1;
  return;
}

// operator() @ 14e70a830

UInterchangeResultError_Generic * __thiscall
`UInterchangeTextureFactory::CheckForInvalidResolutions'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FText *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  UInterchangeResultError_Generic *pUVar7;
  longlong *plVar8;
  UObject *pUVar9;
  undefined1 local_res8 [8];
  void *local_28 [2];
  
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar7 = (UInterchangeResultError_Generic *)(*pcVar5)();
      return pUVar7;
    }
  }
  pUVar7 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                     (*(UInterchangeResultsContainer **)(lVar2 + 0x28));
  plVar1 = &pUVar7->_padding_;
  if ((FString *)plVar1 != param_1) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)(param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pUVar7->_padding_ = (param_1->Data).ArrayNum;
    *(int *)((longlong)&pUVar7->_padding_ + 4) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  plVar8 = (longlong *)
           (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x2d8))
                     ((longlong *)**(undefined8 **)((longlong)this + 8),local_28);
  plVar1 = &pUVar7->_padding_;
  if (plVar1 != plVar8) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = *plVar8;
    *plVar8 = 0;
    *(int *)&pUVar7->_padding_ = (int)plVar8[1];
    *(undefined4 *)((longlong)&pUVar7->_padding_ + 4) = *(undefined4 *)((longlong)plVar8 + 0xc);
    plVar8[1] = 0;
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  pUVar9 = (UObject *)(**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x2f8))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  pUVar7->_padding_ = (longlong)pUVar9;
  pIVar3 = (param_2->TextData).Reference;
  pIVar4 = (pUVar7->Text).TextData.Reference;
  if (pIVar4 != pIVar3) {
    (pUVar7->Text).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (pUVar7->Text).Flags = param_2->Flags;
  return pUVar7;
}

// operator() @ 14e70af50

void __thiscall
`UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  ITextData *pIVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  UInterchangeResultError_Generic *pUVar8;
  UObject *pUVar9;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pUVar8 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                     (*(UInterchangeResultsContainer **)(lVar3 + 0x28));
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x28);
  local_28.Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(lVar3 + 0x30);
  _Src = *(void **)(lVar3 + 0x28);
  local_20 = CONCAT44(local_20._4_4_,iVar2);
  if (iVar2 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_28,iVar2,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar2 * 2);
  }
  plVar1 = &pUVar8->_padding_;
  if ((ForAnyElementType *)plVar1 != &local_28) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_28.Data;
    *(undefined4 *)&pUVar8->_padding_ = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  ::FString::operator=
            ((FString *)&pUVar8->_padding_,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  pUVar9 = (UObject *)(**(code **)(**(longlong **)this + 0x2b0))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  pUVar8->_padding_ = (longlong)pUVar9;
  pIVar4 = (param_1->TextData).Reference;
  pIVar5 = (pUVar8->Text).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (pUVar8->Text).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (pUVar8->Text).Flags = param_1->Flags;
  return;
}

// BackupSourceData @ 14e70eb10

void __thiscall
UInterchangeTextureFactory::BackupSourceData(UInterchangeTextureFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e710080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeTextureFactory::BeginImportAsset_GameThread
          (UInterchangeTextureFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  UObject *pUVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FText *pFVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  TVariant<FEmptyVariantState,UInterchangeTexture2DFactoryNode_*,UInterchangeTextureCubeFactoryNode_*,UInterchangeTextureCubeArrayFactoryNode_*,UInterchangeTexture2DArrayFactoryNode_*,UInterchangeTextureLightProfileFactoryNode_*,UInterchangeVolumeTextureFactoryNode_*>
  *pTVar11;
  FImportAssetResult *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  UObject *pUVar16;
  FName *pFVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  bool bVar20;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  UInterchangeTextureFactory *local_1d0;
  FImportAssetObjectParams *local_1c8;
  FImportAssetResult *local_1c0;
  FSoftObjectPath local_1b8;
  UInterchangeTextureFactory *local_198;
  FText local_190;
  FName local_180;
  FText local_178;
  FText local_168;
  FText local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FTextFormat local_f8;
  undefined1 local_e8 [128];
  TVariant<FEmptyVariantState,UInterchangeTexture2DNode_const_*,UInterchangeTextureCubeNode_const_*,UInterchangeTextureCubeArrayNode_const_*,UInterchangeTexture2DArrayNode_const_*,UInterchangeTextureLightProfileNode_const_*,UInterchangeVolumeTextureNode_const_*>
  local_68;
  TVariant<FEmptyVariantState,UInterchangeTexture2DFactoryNode_*,UInterchangeTextureCubeFactoryNode_*,UInterchangeTextureCubeArrayFactoryNode_*,UInterchangeTexture2DArrayFactoryNode_*,UInterchangeTextureLightProfileFactoryNode_*,UInterchangeVolumeTextureFactoryNode_*>
  local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  bVar20 = -1 < CpuChannel->Enabled;
  local_198 = this;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1892,
               "UInterchangeTextureFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTextureFactory.cpp"
               ,0x764);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1892);
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  local_1d0 = this;
  local_1c8 = param_1;
  local_1c0 = __return_storage_ptr__;
  if (param_1->AssetNode == (UInterchangeFactoryBaseNode *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_178,L"InterchangeTextureFactory",L"TextureFactory_AssetNodeNull",
                        L"Asset node parameter is null.");
    `UInterchangeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
              (&local_1d0,pFVar8);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    if (!bVar20) {
      return __return_storage_ptr__;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return __return_storage_ptr__;
  }
  pUVar9 = (UClass *)(**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar10 = Z_Construct_UClass_UTexture_NoRegister(), pUVar10 != (UClass *)0x0)) {
    iVar1 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar10 = UE::Interchange::Private::InterchangeTextureFactory::GetSupportedFactoryNodeClass
                          (param_1->AssetNode);
      if (pUVar10 == (UClass *)0x0) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_168,L"InterchangeTextureFactory",L"TextureFactory_NodeClassWrong"
                            ,
                            L"Asset node parameter is not a UInterchangeTextureFactoryNode or UInterchangeTextureCubeFactoryNode."
                           );
        `UInterchangeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
                  (&local_1d0,pFVar8);
        if (local_168.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
        }
        goto LAB_14e710584;
      }
      pUVar2 = param_1->NodeContainer;
      pTVar11 = UE::Interchange::Private::InterchangeTextureFactory::GetAsTextureFactoryNodeVariant
                          (&local_58,param_1->AssetNode,pUVar10);
      UE::Interchange::Private::InterchangeTextureFactory::GetTextureNodeVariantFromFactoryVariant
                (&local_68,pTVar11,pUVar2);
      pwVar19 = L"";
      if ((6 < (ulonglong)local_68.TypeIndex) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FImportAssetResult *)(*pcVar5)();
        return pFVar12;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,UInterchangeTexture2DNode_const*___ptr64,UInterchangeTextureCubeNode_const*___ptr64,UInterchangeTextureCubeArrayNode_const*___ptr64,UInterchangeTexture2DArrayNode_const*___ptr64,UInterchangeTextureLightProfileNode_const*___ptr64,UInterchangeVolumeTextureNode_const*___ptr64>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)local_68.TypeIndex) != '\0') {
        pFVar13 = UField::GetAuthoredName((UField *)pUVar10,&local_148);
        pFVar8 = FText::FromString(&local_108,pFVar13);
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_158,L"InterchangeTextureFactory",
                             L"TextureFactory_InvalidTextureTranslated",
                             L"Asset factory node ({0}) doesn\'t reference a valid texture translated node."
                            );
        pFVar15 = FTextFormat::FTextFormat(&local_f8,pFVar14,Default);
        FText::Format<FText>(&local_190,pFVar15,pFVar8);
        if (local_158.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        `UInterchangeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
                  (&local_1d0,&local_190);
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
        }
        goto LAB_14e710584;
      }
      bVar6 = UE::Interchange::Private::InterchangeTextureFactory::HasPayloadKey(&local_68);
      if (!bVar6) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_138,L"InterchangeTextureFactory",
                            L"TextureFactory_InvalidPayloadKey",
                            L"Texture translated node doesn\'t have a payload key.");
        `UInterchangeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
                  (&local_1d0,pFVar8);
        if (local_138.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
        }
        goto LAB_14e710584;
      }
      pUVar3 = param_1->ReimportObject;
      pUVar16 = pUVar3;
      if (pUVar3 == (UObject *)0x0) {
        local_1b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_1b8.AssetPath.PackageName.Number = 0;
        local_1b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_1b8.AssetPath.AssetName.Number = 0;
        local_1b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.SubPathString.Data.ArrayNum = 0;
        local_1b8.SubPathString.Data.ArrayMax = 0;
        bVar6 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(param_1->AssetNode,&local_1b8)
        ;
        if (bVar6) {
          pUVar16 = FSoftObjectPath::TryLoad(&local_1b8,(FUObjectSerializeContext *)0x0);
        }
        if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
        }
        if (pUVar16 != (UObject *)0x0) goto LAB_14e7104ba;
        if ((param_1->AssetName).Data.ArrayNum != 0) {
          pwVar19 = (wchar_t *)(param_1->AssetName).Data.AllocatorInstance.Data;
        }
        pFVar17 = ::FName::FName(&local_180,pwVar19);
        pUVar3 = param_1->Parent;
        local_1d8 = 0;
        FVar4 = *pFVar17;
        if (FVar4 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    (pUVar3,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar10 = Z_Construct_UClass_UTexture_NoRegister();
        CheckIsClassChildOf_Internal(pUVar10,pUVar9);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_e8,pUVar9);
        local_e8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_e8._56_8_ = (UPackage *)0x0;
        local_e8._24_4_ = RF_Standalone|RF_Public;
        local_e8._40_8_ = (UObject *)0x0;
        local_e8[0x20] = false;
        local_e8._8_8_ = pUVar3;
        local_e8._16_8_ = FVar4;
        pUVar16 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
        if (local_e8._64_8_ != 0) {
          plVar18 = (longlong *)(local_e8 + 0x50);
          if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
            plVar18 = (longlong *)local_e8._104_8_;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        if (pUVar16 == (UObject *)0x0) goto LAB_14e71050e;
        pUVar9 = Z_Construct_UClass_UTextureLightProfile_NoRegister();
        iVar1 = (int)pUVar9->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar9->_padding_)) {
          *(undefined2 *)&pUVar16[8].field_0x15 = 0x101;
          pUVar16[6].field_0x1f = 0x1b;
        }
      }
      else {
LAB_14e7104ba:
        pUVar9 = Z_Construct_UClass_UTexture_NoRegister();
        iVar1 = (int)pUVar9->_padding_;
        if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar9->_padding_)) {
          pUVar16 = (UObject *)0x0;
        }
        if ((pUVar3 == (UObject *)0x0) &&
           (cVar7 = (**(code **)(param_1->Translator->_padding_ + 0x2c8))(), cVar7 != '\x01')) {
          __return_storage_ptr__->bIsFactorySkipAsset = true;
          local_198->bSkipImport = true;
        }
        if (pUVar16 == (UObject *)0x0) {
LAB_14e71050e:
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_128,L"InterchangeTextureFactory",
                              L"TextureFactory_TextureCreateFail",L"Texture creation failed.");
          `UInterchangeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
                    (&local_1d0,pFVar8);
          if (local_128.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
          }
          goto LAB_14e710584;
        }
      }
      __return_storage_ptr__->ImportedObject = pUVar16;
      goto LAB_14e710584;
    }
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_118,L"InterchangeTextureFactory",L"TextureFactory_NodeClassMissmatch",
                      L"Asset node parameter class doesn\'t derive from UTexture.");
  `UInterchangeTextureFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
            (&local_1d0,pFVar8);
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
LAB_14e710584:
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// CheckForInvalidResolutions @ 14e710e30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UInterchangeTextureFactory::CheckForInvalidResolutions
          (UInterchangeTextureFactory *this,
          TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
          *param_1,UInterchangeSourceData *param_2,UInterchangeTextureFactoryNode *param_3)

{
  FAttributeKey *pFVar1;
  uchar uVar2;
  byte bVar3;
  FAttributeStorage *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  UInterchangeTextureFactoryNode *pUVar7;
  UInterchangeResultError_Generic *pUVar8;
  uint uVar9;
  atomic<int> aVar10;
  FString *pFVar11;
  EAttributeStorageResult EVar12;
  UClass *pUVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FImportImage *pFVar16;
  UClass *pUVar17;
  FImportSlicedImage *pFVar18;
  int iVar19;
  ForAnyElementType FVar20;
  longlong *plVar21;
  char cVar22;
  TReferenceControllerBase<1> *pTVar23;
  TReferenceControllerBase<1> *pTVar24;
  TReferenceControllerBase<1> *pTVar25;
  longlong lVar26;
  int iVar27;
  int *piVar28;
  uint uVar29;
  TReferenceControllerBase<1> *pTVar30;
  uint uVar31;
  bool bVar32;
  bool local_res8 [8];
  char local_res10;
  UInterchangeSourceData *local_res18;
  UInterchangeTextureFactoryNode *local_res20;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  FString local_1d8;
  FText local_1c8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  UInterchangeTextureFactory *local_168;
  UInterchangeTextureFactoryNode **local_160;
  FString local_158;
  UInterchangeResultError_Generic *local_148;
  TAttributeHandle<bool,void> local_140;
  FString local_128;
  FTextFormat local_118;
  FText local_108;
  FFormatArgumentValue local_f8;
  undefined4 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  void *local_b8 [2];
  FString local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FString local_68;
  FTextFormat local_58;
  
  bVar32 = CpuChannel->Enabled < 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (bVar32) {
    local_res10 = '\0';
  }
  else {
    local_res10 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2317,
               "UInterchangeTextureFactory::CheckForInvalidResolutions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTextureFactory.cpp"
               ,0x90d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2317);
  }
  pUVar7 = local_res20;
  cVar22 = !bVar32;
  local_160 = &local_res20;
  local_res8[0] = false;
  local_168 = this;
  pFVar11 = (FString *)(**(code **)(local_res20->_padding_ + 0x2b0))(local_res20,local_b8);
  ::FString::ConcatFC(&local_128,pFVar11,L".GetAllowNonPowerOfTwo");
  if (local_b8[0] != (void *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  if ((pUVar7->_padding_ == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar32)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = &pUVar7->Macro_CustomAllowNonPowerOfTwoKey;
  this_00 = (FAttributeStorage *)pUVar7->_padding_;
  bVar32 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar32) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(this_00,&local_140,pFVar1);
    bVar32 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_140);
    if ((bVar32) &&
       (EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                           (&local_140,local_res8), (EVar12 & Operation_Success) == None)) {
      ::FString::FString(&local_a8,&pFVar1->Key);
      pFVar11 = ::FString::FString(&local_68,&local_128);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar11,(FAttributeKey *)&local_a8);
    }
    if (local_140.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  FText::FText(&local_1c8);
  uVar2 = param_1->TypeIndex;
  if (uVar2 == '\x02') {
    if ((param_1 !=
         (TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
          *)0x0) && ((char)param_1->_padding_ != '\0')) {
      iVar27 = (int)param_1->_padding_;
      pTVar30 = (TReferenceControllerBase<1> *)0x0;
      uVar29 = 0;
      pTVar23 = pTVar30;
      pTVar25 = pTVar30;
      if (0 < iVar27) {
        do {
          uVar31 = (uint)pTVar25;
          uVar9 = uVar29;
          if ((int)uVar31 < (int)param_1->_padding_) {
            uVar9 = ~uVar31 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          piVar28 = (int *)((longlong)&pTVar23->_padding_ + param_1->_padding_);
          bVar32 = UE::TextureUtilitiesCommon::IsImportResolutionValid
                             ((longlong)piVar28[2],(longlong)piVar28[3],local_res8[0],&local_1c8);
          pUVar7 = local_res20;
          if (!bVar32) {
            local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d8.Data.ArrayNum = 0;
            local_1d8.Data.ArrayMax = 0;
            if (local_res20 != (UInterchangeTextureFactoryNode *)0x0) {
              pUVar13 = Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister();
              iVar27 = (int)pUVar13->_padding_;
              if ((iVar27 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar27 * 8)
                  == &pUVar13->_padding_)) {
                uVar9 = UE::TextureUtilitiesCommon::GetUDIMIndex(*piVar28,piVar28[1]);
                pTVar25 = (TReferenceControllerBase<1> *)pUVar7[1]._padding_;
                pTVar24 = pTVar25;
                if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e711111:
                  bVar32 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<4942768438637494661>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                      ,0x185,"AttributesPtr.IsValid()");
                  pTVar25 = pTVar24;
                  if (bVar32) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                else {
                  aVar6 = pTVar25->SharedReferenceCount;
                  do {
                    pTVar24 = pTVar30;
                    if (aVar6 == (atomic<int>)0x0) goto LAB_14e711111;
                    LOCK();
                    aVar10 = pTVar25->SharedReferenceCount;
                    bVar32 = aVar6 == aVar10;
                    if (bVar32) {
                      pTVar25->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
                      aVar10 = aVar6;
                    }
                    UNLOCK();
                    aVar6 = aVar10;
                  } while (!bVar32);
                  pTVar24 = pTVar25;
                  if (pUVar7[1]._padding_ == 0) goto LAB_14e711111;
                  if ((int)pUVar7[1]._padding_ != *(int *)((longlong)&pUVar7[1]._padding_ + 4)) {
                    plVar21 = &pUVar7[1]._padding_;
                    if ((longlong *)pUVar7[1]._padding_ != (longlong *)0x0) {
                      plVar21 = (longlong *)pUVar7[1]._padding_;
                    }
                    iVar27 = *(int *)((longlong)plVar21 +
                                     (ulonglong)((int)pUVar7[1]._padding_ - 1U & uVar9) * 4);
                    if (iVar27 != -1) {
                      lVar26 = pUVar7[1]._padding_;
                      do {
                        if (*(uint *)((longlong)iVar27 * 0x40 + lVar26) == uVar9) {
                          if (((iVar27 != -1) &&
                              (lVar26 = (longlong)iVar27 * 0x40 + lVar26, lVar26 != 0)) &&
                             (lVar26 != -8)) {
                            UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                                      ((TAttributeHandle<FString,void> *)(lVar26 + 0x20),&local_1d8)
                            ;
                          }
                          break;
                        }
                        iVar27 = *(int *)((longlong)iVar27 * 0x40 + 0x38 + lVar26);
                      } while (iVar27 != -1);
                    }
                  }
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar25);
              }
            }
            if (local_1d8.Data.ArrayNum < 2) {
              local_1e8.Data = (FScriptContainerElement *)0x0;
              iVar27 = (local_res18->Filename).Data.ArrayNum;
              pFVar4 = (local_res18->Filename).Data.AllocatorInstance.Data;
              local_1e0._0_4_ = iVar27;
              if (iVar27 == 0) {
                local_1e0._0_4_ = 0;
                local_1e0._4_4_ = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar27,0,&local_1e8,iVar27,(int *)((longlong)&local_1e0 + 4));
                memcpy(local_1e8.Data,pFVar4,(longlong)iVar27 * 2);
              }
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              local_1d8.Data.AllocatorInstance.Data = local_1e8.Data;
              local_1d8.Data.ArrayNum = (int)local_1e0;
              local_1d8.Data.ArrayMax = local_1e0._4_4_;
              local_1e0 = 0;
              local_1e8.Data = (FScriptContainerElement *)0x0;
            }
            local_148 = `UInterchangeTextureFactory::CheckForInvalidResolutions'::__l2::<lambda_1>::
                        operator()(&local_168,&local_1d8,&local_1c8);
            iVar27 = piVar28[1];
            iVar19 = *piVar28;
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_98,L"InterchangeTextureFactory",
                                 L"BlockIndexInvalidResolutionError",
                                 L"Invalid block (X : {0}, Y : {1}) \n");
            pFVar15 = FTextFormat::FTextFormat(&local_58,pFVar14,Default);
            local_f8.Type = Int;
            local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
                 (TRefCountPtr<ITextData>)(ITextData *)0x0;
            local_f8.TextValue.field0_0x0.TypedValue.Flags = 0;
            local_d8 = 0;
            local_c8 = (longlong *)0x0;
            local_c0 = 0;
            local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.ArrayNum = 2;
            local_f8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar19;
            local_d0 = (longlong)iVar27;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_1b8.AllocatorInstance,2,&local_1b8.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_1b8.AllocatorInstance.Data,&local_f8,2);
            local_118.TextFormatData.Object = (pFVar15->TextFormatData).Object;
            local_118.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_118.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_118.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_118.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_108,&local_118,&local_1b8);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
            if ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_1b8.AllocatorInstance.Data);
            }
            if (local_c8 != (longlong *)0x0) {
              (**(code **)(*local_c8 + 0x10))();
            }
            if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                          + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
            pFVar11 = FText::ToString(&local_108);
            local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            lVar26 = (longlong)local_1a8.Data.ArrayNum;
            pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
            if (local_1a8.Data.ArrayNum == 0) {
              local_1a8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1a8.Data.ArrayNum,0,(ForAnyElementType *)&local_1a8,
                         local_1a8.Data.ArrayNum,&local_1a8.Data.ArrayMax);
              memcpy(local_1a8.Data.AllocatorInstance.Data,pFVar4,lVar26 * 2);
            }
            if (local_108.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
            }
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
            pUVar8 = local_148;
            pFVar11 = FText::ToString(&local_148->Text);
            iVar27 = (pFVar11->Data).ArrayNum;
            uVar9 = iVar27 - 1;
            if (iVar27 == 0) {
              uVar9 = uVar29;
            }
            ::FString::AppendChars
                      (&local_1a8,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,uVar9);
            pFVar14 = FText::FromString(&local_88,&local_1a8);
            FText::operator=(&pUVar8->Text,pFVar14);
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            uVar9 = uVar29;
            if ((int)uVar31 < (int)param_1->_padding_) {
              uVar9 = ~uVar31 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar27 = (int)param_1->_padding_;
            lVar26 = param_1->_padding_;
            iVar19 = (iVar27 - uVar31) + -1;
            if (1 < iVar19) {
              iVar19 = 1;
            }
            if (iVar19 != 0) {
              memmove((void *)(lVar26 + (longlong)(int)uVar31 * 0x18),
                      (void *)(lVar26 + (longlong)(iVar27 - iVar19) * 0x18),(longlong)iVar19 * 0x18)
              ;
            }
            *(int *)&param_1->_padding_ = (int)param_1->_padding_ + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,(ForAnyElementType *)&param_1->_padding_,(int)param_1->_padding_,
                       (int *)((longlong)&param_1->_padding_ + 4));
            uVar31 = uVar31 - 1;
            pTVar23 = (TReferenceControllerBase<1> *)&pTVar23[-2].SharedReferenceCount;
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
          }
          iVar27 = (int)param_1->_padding_;
          pTVar23 = (TReferenceControllerBase<1> *)&pTVar23[1].SharedReferenceCount;
          pTVar25 = (TReferenceControllerBase<1> *)(ulonglong)(uVar31 + 1);
          cVar22 = local_res10;
        } while ((int)(uVar31 + 1) < iVar27);
      }
      if (iVar27 == 0) {
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_78,L"InterchangeTextureFactory",L"UDIMHasNoValidBlock",
                             L"All blocks were invalid. The texture won\'t be imported.");
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        `UInterchangeTextureFactory::CheckForInvalidResolutions'::__l2::<lambda_1>::operator()
                  (&local_168,&local_158,pFVar14);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        bVar3 = param_1->TypeIndex;
        if ((4 < (ulonglong)bVar3) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar32)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[bVar3])(param_1);
        param_1->TypeIndex = '\0';
      }
    }
    goto LAB_14e7118e2;
  }
  if (uVar2 == '\x01') {
    if ((param_1 ==
         (TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
          *)0x0) || ((char)param_1->_padding_ == '\0')) goto LAB_14e7118e2;
    pFVar16 = TOptional<UE::Interchange::FImportImage>::GetValue
                        ((TOptional<UE::Interchange::FImportImage> *)param_1);
    pUVar13 = Z_Construct_UClass_UTextureCube_NoRegister();
    pUVar17 = (UClass *)(**(code **)(local_res20->_padding_ + 0x2f8))();
    if ((pUVar13 == pUVar17) ||
       (bVar32 = UE::TextureUtilitiesCommon::IsImportResolutionValid
                           ((longlong)pFVar16->SizeX,(longlong)pFVar16->SizeY,local_res8[0],
                            &local_1c8), bVar32)) goto LAB_14e7118e2;
    local_198.Data.ArrayNum = (param_2->Filename).Data.ArrayNum;
    lVar26 = (longlong)local_198.Data.ArrayNum;
    pFVar4 = (param_2->Filename).Data.AllocatorInstance.Data;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_198.Data.ArrayNum == 0) {
      local_198.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_198.Data.ArrayNum,0,(ForAnyElementType *)&local_198,
                 local_198.Data.ArrayNum,&local_198.Data.ArrayMax);
      memcpy(local_198.Data.AllocatorInstance.Data,pFVar4,lVar26 * 2);
    }
    `UInterchangeTextureFactory::CheckForInvalidResolutions'::__l2::<lambda_1>::operator()
              (&local_168,&local_198,&local_1c8);
    FVar20.Data = local_198.Data.AllocatorInstance.Data;
  }
  else if (uVar2 == '\x04') {
    if (((param_1 ==
          (TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
           *)0x0) || ((char)param_1->_padding_ == '\0')) ||
       (bVar32 = UE::TextureUtilitiesCommon::IsImportResolutionValid
                           ((longlong)(int)param_1->_padding_,
                            (longlong)*(int *)((longlong)&param_1->_padding_ + 4),local_res8[0],
                            &local_1c8), bVar32)) goto LAB_14e7118e2;
    local_188.Data.ArrayNum = (param_2->Filename).Data.ArrayNum;
    lVar26 = (longlong)local_188.Data.ArrayNum;
    pFVar4 = (param_2->Filename).Data.AllocatorInstance.Data;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_188.Data.ArrayNum == 0) {
      local_188.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_188.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
                 local_188.Data.ArrayNum,&local_188.Data.ArrayMax);
      memcpy(local_188.Data.AllocatorInstance.Data,pFVar4,lVar26 * 2);
    }
    `UInterchangeTextureFactory::CheckForInvalidResolutions'::__l2::<lambda_1>::operator()
              (&local_168,&local_188,&local_1c8);
    FVar20.Data = local_188.Data.AllocatorInstance.Data;
  }
  else {
    if (((uVar2 != '\x03') ||
        (param_1 ==
         (TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
          *)0x0)) || ((char)param_1->_padding_ == '\0')) goto LAB_14e7118e2;
    pFVar18 = TOptional<UE::Interchange::FImportSlicedImage>::GetValue
                        ((TOptional<UE::Interchange::FImportSlicedImage> *)param_1);
    bVar32 = UE::TextureUtilitiesCommon::IsImportResolutionValid
                       ((longlong)(int)pFVar18->_padding_,
                        (longlong)*(int *)((longlong)&pFVar18->_padding_ + 4),local_res8[0],
                        &local_1c8);
    if (bVar32) goto LAB_14e7118e2;
    local_178.Data.ArrayNum = (param_2->Filename).Data.ArrayNum;
    lVar26 = (longlong)local_178.Data.ArrayNum;
    pFVar4 = (param_2->Filename).Data.AllocatorInstance.Data;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_178.Data.ArrayNum == 0) {
      local_178.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_178.Data.ArrayNum,0,(ForAnyElementType *)&local_178,
                 local_178.Data.ArrayNum,&local_178.Data.ArrayMax);
      memcpy(local_178.Data.AllocatorInstance.Data,pFVar4,lVar26 * 2);
    }
    `UInterchangeTextureFactory::CheckForInvalidResolutions'::__l2::<lambda_1>::operator()
              (&local_168,&local_178,&local_1c8);
    FVar20.Data = local_178.Data.AllocatorInstance.Data;
  }
  if (FVar20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar20.Data);
  }
  bVar3 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar3) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar32)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar3] !=
      UE::Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar3])(param_1);
  }
  param_1->TypeIndex = '\0';
LAB_14e7118e2:
  if (local_1c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
  }
  if (cVar22 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ClearBackupSourceData @ 14e711970

void __thiscall
UInterchangeTextureFactory::ClearBackupSourceData(UInterchangeTextureFactory *this,UObject *param_1)

{
  return;
}

// EndImportAsset_GameThread @ 14e713d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeTextureFactory::EndImportAsset_GameThread
          (UInterchangeTextureFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *pUVar2;
  bool bVar3;
  UObject *this_00;
  UClass *pUVar4;
  FUObjectItem *this_01;
  bool bVar5;
  FSoftObjectPath local_58;
  FSoftObjectPath local_38;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2170,"UInterchangeTextureFactory::ImportAsset_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTextureFactory.cpp"
               ,0x87a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2170);
  }
  pUVar2 = param_1->AssetNode;
  bVar3 = this->bSkipImport;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  __return_storage_ptr__->bIsFactorySkipAsset = bVar3;
  if (pUVar2 == (UInterchangeFactoryBaseNode *)0x0) {
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_58.AssetPath.PackageName.Number = 0;
    local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_58.AssetPath.AssetName.Number = 0;
    local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.SubPathString.Data.ArrayNum = 0;
    local_58.SubPathString.Data.ArrayMax = 0;
    bVar3 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(pUVar2,&local_58);
    if ((bVar3) &&
       (this_00 = FSoftObjectPath::TryLoad(&local_58,(FUObjectSerializeContext *)0x0),
       this_00 != (UObject *)0x0)) {
      pUVar4 = Z_Construct_UClass_UTexture_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        __return_storage_ptr__->ImportedObject = this_00;
        bVar3 = UE::Interchange::Private::InterchangeTextureFactory::FProcessedPayload::IsValid
                          (&this->ProcessedPayload);
        if (!bVar3) {
          if (param_1->ReimportObject == (UObject *)0x0) {
            iVar1 = *(int *)&this_00->field_0xc;
            __return_storage_ptr__->ImportedObject = (UObject *)0x0;
            this_01 = FUObjectArray::IndexToObject(&GUObjectArray,iVar1);
            FUObjectItem::ClearRootFlags(this_01,RootSet);
            UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
            pUVar2 = param_1->AssetNode;
            local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_38.AssetPath.PackageName.Number = 0;
            local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_38.AssetPath.AssetName.Number = 0;
            local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_38.SubPathString.Data.ArrayNum = 0;
            local_38.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_38,(UObject *)0x0);
            UInterchangeFactoryBaseNode::SetCustomReferenceObject(pUVar2,&local_38);
            if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
            }
          }
          UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)param_1->AssetNode,false);
          this->bSkipImport = true;
          __return_storage_ptr__->bIsFactorySkipAsset = true;
        }
      }
    }
    if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e718360

EInterchangeFactoryAssetType __thiscall
UInterchangeTextureFactory::GetFactoryAssetType(UInterchangeTextureFactory *this)

{
  return Textures;
}

// GetFactoryClass @ 14e718480

UClass * __thiscall UInterchangeTextureFactory::GetFactoryClass(UInterchangeTextureFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTexture.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture",&Z_Registration_Info_UClass_UTexture.InnerSingleton,
               UTexture::StaticRegisterNativesUTexture,0x150,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTexture>,
               InternalVTableHelperCtorCaller<UTexture>,aFStackX_8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71aac0

UClass * __cdecl UInterchangeTextureFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeTextureFactory",
               &Z_Registration_Info_UClass_UInterchangeTextureFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureFactory,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureFactory>,
               InternalVTableHelperCtorCaller<UInterchangeTextureFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e71b740

bool __thiscall
UInterchangeTextureFactory::GetSourceFilenames
          (UInterchangeTextureFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ImportAsset_Async @ 14e721e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeTextureFactory::ImportAsset_Async
          (UInterchangeTextureFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  TOptional<FString> *pTVar1;
  int iVar2;
  UInterchangeBaseNodeContainer *this_00;
  FScriptContainerElement *pFVar3;
  UInterchangeTranslatorBase *pUVar4;
  UInterchangeTextureFactoryNode *pUVar5;
  code *pcVar6;
  UInterchangeTextureFactory *pUVar7;
  bool bVar8;
  char cVar9;
  FText *pFVar10;
  longlong lVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  UInterchangeBaseNode *pUVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  FString *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  FImportAssetResult *pFVar20;
  char *pcVar21;
  char *pcVar22;
  UInterchangeSourceNode *this_01;
  FImportLightProfile *pFVar23;
  FTaskGraphInterface *pFVar24;
  UInterchangeResultError_Generic *pUVar25;
  TRefCountPtr<FBaseGraphTask> *pTVar26;
  wchar_t *pwVar27;
  UObject *pUVar28;
  wchar_t *pwVar29;
  undefined8 uVar30;
  char *pcVar31;
  ulonglong uVar32;
  FString *pFVar33;
  bool bVar34;
  undefined1 auStackY_338 [32];
  FString local_2f0;
  TVariant<FEmptyVariantState,UInterchangeTexture2DNode_const_*,UInterchangeTextureCubeNode_const_*,UInterchangeTextureCubeArrayNode_const_*,UInterchangeTexture2DArrayNode_const_*,UInterchangeTextureLightProfileNode_const_*,UInterchangeVolumeTextureNode_const_*>
  local_2e0;
  FString local_2d0;
  UInterchangeTextureFactory *local_2c0;
  FImportAssetObjectParams *local_2b8;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  UInterchangeTextureFactory *local_280;
  FImportAssetObjectParams *local_278;
  FSoftObjectPath local_270;
  FString local_250;
  FName local_240;
  FText local_238;
  FString local_228;
  FText local_218;
  FText local_208;
  FText local_1f8;
  FString local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FText local_188;
  FText local_178;
  FTextFormat local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  TVariant<FEmptyVariantState,UInterchangeTexture2DFactoryNode_*,UInterchangeTextureCubeFactoryNode_*,UInterchangeTextureCubeArrayFactoryNode_*,UInterchangeTexture2DArrayFactoryNode_*,UInterchangeTextureLightProfileFactoryNode_*,UInterchangeVolumeTextureFactoryNode_*>
  local_128;
  undefined1 local_118 [56];
  FString local_e0 [2];
  char local_b8 [8];
  char local_b0 [8];
  char local_a8 [8];
  char local_a0 [24];
  bool local_88;
  byte local_80;
  TRefCountPtr<FBaseGraphTask> local_78 [4];
  TRefCountPtr<FBaseGraphTask> *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  bVar34 = -1 < CpuChannel->Enabled;
  local_2c0 = this;
  local_2b8 = param_1;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1996,"UInterchangeTextureFactory::ImportAsset_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTextureFactory.cpp"
               ,0x7cc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1996);
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  pUVar28 = (UObject *)0x0;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  __return_storage_ptr__->bIsFactorySkipAsset = this->bSkipImport;
  local_280 = this;
  local_278 = param_1;
  if (param_1->AssetNode == (UInterchangeFactoryBaseNode *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_218,L"InterchangeTextureFactory",
                         L"TextureFactory_Async_AssetNodeNull",
                         L"UInterchangeTextureFactory: Asset node parameter is null.");
    `UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
              (&local_280,pFVar10);
LAB_14e721f70:
    if (local_218.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
    }
    goto LAB_14e722dba;
  }
  lVar11 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
  if ((lVar11 != 0) &&
     (pUVar12 = Z_Construct_UClass_UTexture_NoRegister(), pUVar12 != (UClass *)0x0)) {
    iVar2 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar11 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar12->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      pUVar12 = UE::Interchange::Private::InterchangeTextureFactory::GetSupportedFactoryNodeClass
                          (param_1->AssetNode);
      if (pUVar12 == (UClass *)0x0) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_208,L"InterchangeTextureFactory",
                             L"TextureFactory_Async_NodeWrongClass",
                             L"UInterchangeTextureFactory: Asset node parameter is not a child of UInterchangeTextureFactoryNode."
                            );
        `UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
                  (&local_280,pFVar10);
        local_218.TextData.Reference = local_208.TextData.Reference;
        goto LAB_14e721f70;
      }
      local_270.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_270.AssetPath.PackageName.Number = 0;
      local_270.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_270.AssetPath.AssetName.Number = 0;
      local_270.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.SubPathString.Data.ArrayNum = 0;
      local_270.SubPathString.Data.ArrayMax = 0;
      bVar8 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(param_1->AssetNode,&local_270);
      pUVar13 = pUVar28;
      if (bVar8) {
        pUVar13 = FSoftObjectPath::TryLoad(&local_270,(FUObjectSerializeContext *)0x0);
      }
      if (this->bSkipImport != false) {
        __return_storage_ptr__->ImportedObject = pUVar13;
        goto LAB_14e722b4e;
      }
      UE::Interchange::Private::InterchangeTextureFactory::GetAsTextureFactoryNodeVariant
                (&local_128,param_1->AssetNode,pUVar12);
      this_00 = param_1->NodeContainer;
      local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d0.Data.ArrayNum = 0;
      local_2d0.Data.ArrayMax = 0;
      if (((((local_128.TypeIndex == '\x01') || (local_128.TypeIndex == '\x02')) ||
           (local_128.TypeIndex == '\x03')) ||
          ((local_128.TypeIndex == '\x04' || (local_128.TypeIndex == '\x05')))) ||
         (local_128.TypeIndex == '\x06')) {
        UInterchangeTextureFactoryNode::GetCustomTranslatedTextureNodeUid
                  ((UInterchangeTextureFactoryNode *)local_128._padding_,&local_2d0);
      }
      pUVar14 = UInterchangeBaseNodeContainer::GetNode(this_00,&local_2d0);
      if (pUVar14 == (UInterchangeBaseNode *)0x0) {
LAB_14e72227a:
        cVar9 = '\0';
        local_2e0.TypeIndex = '\0';
        pUVar16 = pUVar28;
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
      }
      else {
        pUVar15 = Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister();
        iVar2 = (int)pUVar15->_padding_;
        if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar15->_padding_)) {
          pUVar15 = Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister();
          iVar2 = (int)pUVar15->_padding_;
          if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar15->_padding_)) {
            pUVar15 = Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();
            iVar2 = (int)pUVar15->_padding_;
            if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar15->_padding_)) {
              pUVar15 = Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();
              iVar2 = (int)pUVar15->_padding_;
              if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar2) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8)
                  != &pUVar15->_padding_)) {
                pUVar15 = Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();
                iVar2 = (int)pUVar15->_padding_;
                if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar15->_padding_)) {
                  pUVar15 = Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister();
                  iVar2 = (int)pUVar15->_padding_;
                  if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar2) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                      &pUVar15->_padding_)) goto LAB_14e72227a;
                  cVar9 = '\x06';
                  local_2e0.TypeIndex = '\x06';
                  local_2e0._padding_ = (longlong)pUVar14;
                  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                  }
                  pUVar16 = (UObject *)&DAT_00000006;
                }
                else {
                  cVar9 = '\x01';
                  local_2e0.TypeIndex = '\x01';
                  local_2e0._padding_ = (longlong)pUVar14;
                  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                  }
                  pUVar16 = (UObject *)&DAT_00000001;
                }
              }
              else {
                cVar9 = '\x05';
                local_2e0.TypeIndex = '\x05';
                local_2e0._padding_ = (longlong)pUVar14;
                if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                }
                pUVar16 = (UObject *)&DAT_00000005;
              }
            }
            else {
              cVar9 = '\x04';
              local_2e0.TypeIndex = '\x04';
              local_2e0._padding_ = (longlong)pUVar14;
              if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
              }
              pUVar16 = (UObject *)&DAT_00000004;
            }
          }
          else {
            cVar9 = '\x03';
            local_2e0.TypeIndex = '\x03';
            local_2e0._padding_ = (longlong)pUVar14;
            if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
            }
            pUVar16 = (UObject *)&DAT_00000003;
          }
        }
        else {
          cVar9 = '\x02';
          local_2e0.TypeIndex = '\x02';
          local_2e0._padding_ = (longlong)pUVar14;
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
          pUVar16 = (UObject *)&DAT_00000002;
        }
      }
      if (*(char *)(pUVar16 + 0x8795067) == '\0') {
        if (cVar9 == '\x01') {
          (**(code **)(*(longlong *)local_2e0._padding_ + 0x2f8))(local_2e0._padding_,&local_2f0);
        }
        else if (cVar9 == '\x02') {
          (**(code **)(*(longlong *)local_2e0._padding_ + 0x2f8))(local_2e0._padding_,&local_2f0);
        }
        else if (cVar9 == '\x03') {
          (**(code **)(*(longlong *)local_2e0._padding_ + 0x2f8))(local_2e0._padding_,&local_2f0);
        }
        else if (cVar9 == '\x04') {
          (**(code **)(*(longlong *)local_2e0._padding_ + 0x2f8))(local_2e0._padding_,&local_2f0);
        }
        else if (cVar9 == '\x05') {
          (**(code **)(*(longlong *)local_2e0._padding_ + 0x2f8))(local_2e0._padding_,&local_2f0);
        }
        else if (cVar9 == '\x06') {
          (**(code **)(*(longlong *)local_2e0._padding_ + 0x2f8))(local_2e0._padding_,&local_2f0);
        }
        else {
          local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f0.Data.ArrayNum = 0;
          local_2f0.Data.ArrayMax = -1;
        }
        if (local_2f0.Data.ArrayMax == -1) {
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_1d8,L"InterchangeTextureFactory",
                               L"TextureFactory_Async_InvalidPayloadKey",
                               L"UInterchangeTextureFactory: Texture translated node (UInterchangeTexture2DNode) doesn\'t have a payload key."
                              );
          `UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
                    (&local_280,pFVar10);
          if (local_1d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
          }
        }
        else {
          pTVar1 = &this->AlternateTexturePath;
          if (*(int *)((longlong)&(this->AlternateTexturePath).field0_0x0 + 0xc) != -1) {
            pFVar3 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            *(undefined4 *)((longlong)&(this->AlternateTexturePath).field0_0x0 + 8) = 0;
            *(undefined4 *)((longlong)&(this->AlternateTexturePath).field0_0x0 + 0xc) = 0xffffffff;
          }
          pUVar4 = param_1->Translator;
          if ((local_2f0.Data.ArrayMax == -1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar20 = (FImportAssetResult *)(*pcVar6)();
            return pFVar20;
          }
          UE::Interchange::Private::InterchangeTextureFactory::GetTexturePayload
                    ((TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
                      *)local_118,param_1->SourceData,&local_2f0,&local_2e0,&local_128,pUVar4,pTVar1
                    );
          bVar8 = UE::Interchange::Private::InterchangeTextureFactory::IsTextureOptionalPayloadSet
                            ((TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
                              *)local_118);
          if (bVar8) {
            uVar32 = (ulonglong)local_80;
            pwVar29 = L"";
            local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2b0.Data.ArrayNum = 0;
            local_2b0.Data.ArrayMax = 0;
            local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a0.Data.ArrayNum = 0;
            local_2a0.Data.ArrayMax = 0;
            local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_290.Data.ArrayNum = 0;
            local_290.Data.ArrayMax = 0;
            if ((4 < uVar32) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              pFVar20 = (FImportAssetResult *)(*pcVar6)();
              return pFVar20;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar32) == '\0') {
              uVar32 = (ulonglong)local_80;
              if ((4 < uVar32) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x12f,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                pFVar20 = (FImportAssetResult *)(*pcVar6)();
                return pFVar20;
              }
              pFVar17 = (FString *)&DAT_00000038;
              pcVar31 = &DAT_00000068;
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TOptional<UE::Interchange::FImportImage>,FEmptyVariantState,TOptional<struct_UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar32) != '\0') {
                if (local_80 == 1) {
                  pFVar33 = local_e0;
                  pcVar22 = local_b0;
                  pcVar21 = local_a8;
                }
                else {
                  pFVar33 = (FString *)&DAT_00000038;
                  pcVar22 = &DAT_00000068;
                  pcVar21 = &DAT_00000070;
                }
                if ((*pcVar21 != '\0') && (*pcVar22 != '\0')) {
                  if ((*(char *)&pFVar33[3].Data.AllocatorInstance.Data == '\0') &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsSet()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                         ,0x1bd,
                                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    pFVar20 = (FImportAssetResult *)(*pcVar6)();
                    return pFVar20;
                  }
                  ::FString::operator=(&local_2b0,pFVar33);
                  ::FString::operator=(&local_2a0,pFVar33 + 1);
                  ::FString::operator=(&local_290,pFVar33 + 2);
                }
              }
              uVar32 = (ulonglong)local_80;
              if ((4 < uVar32) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x12f,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                pFVar20 = (FImportAssetResult *)(*pcVar6)();
                return pFVar20;
              }
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TOptional<UE::Interchange::FImportBlockedImage>,FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<struct_UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar32) != '\0') {
                if (local_80 == 2) {
                  pFVar33 = (FString *)(local_118 + 0x30);
                  pcVar22 = local_b8;
                  pcVar21 = local_b0;
                }
                else {
                  pcVar22 = &DAT_00000060;
                  pFVar33 = (FString *)&DAT_00000030;
                  pcVar21 = &DAT_00000068;
                }
                if ((*pcVar21 != '\0') && (*pcVar22 != '\0')) {
                  if ((*(char *)&pFVar33[3].Data.AllocatorInstance.Data == '\0') &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsSet()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                         ,0x1bd,
                                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    pFVar20 = (FImportAssetResult *)(*pcVar6)();
                    return pFVar20;
                  }
                  ::FString::operator=(&local_2b0,pFVar33);
                  ::FString::operator=(&local_2a0,pFVar33 + 1);
                  ::FString::operator=(&local_290,pFVar33 + 2);
                }
              }
              uVar32 = (ulonglong)local_80;
              if ((4 < uVar32) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x12f,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                pFVar20 = (FImportAssetResult *)(*pcVar6)();
                return pFVar20;
              }
              this = local_2c0;
              param_1 = local_2b8;
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TOptional<UE::Interchange::FImportSlicedImage>,FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<struct_UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar32) != '\0') {
                if (local_80 == 3) {
                  pFVar17 = local_e0;
                  pcVar31 = local_b0;
                  pcVar22 = local_a0;
                }
                else {
                  pcVar22 = &DAT_00000078;
                }
                if ((*pcVar22 != '\0') && (*pcVar31 != '\0')) {
                  if ((*(char *)&pFVar17[3].Data.AllocatorInstance.Data == '\0') &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsSet()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                         ,0x1bd,
                                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    pFVar20 = (FImportAssetResult *)(*pcVar6)();
                    return pFVar20;
                  }
                  ::FString::operator=(&local_2b0,pFVar17);
                  ::FString::operator=(&local_2a0,pFVar17 + 1);
                  ::FString::operator=(&local_290,pFVar17 + 2);
                  this = local_2c0;
                  param_1 = local_2b8;
                }
              }
            }
            this_01 = UInterchangeSourceNode::FindOrCreateUniqueInstance(param_1->NodeContainer);
            if (this_01 != (UInterchangeSourceNode *)0x0) {
              if (1 < local_2b0.Data.ArrayNum) {
                pFVar17 = UE::Interchange::FSourceNodeExtraInfoStaticData::
                          GetApplicationVendorExtraInfoKey();
                UInterchangeSourceNode::SetExtraInformation(this_01,pFVar17,&local_2b0);
              }
              if (1 < local_2a0.Data.ArrayNum) {
                pFVar17 = UE::Interchange::FSourceNodeExtraInfoStaticData::
                          GetApplicationNameExtraInfoKey();
                UInterchangeSourceNode::SetExtraInformation(this_01,pFVar17,&local_2a0);
              }
              if (1 < local_290.Data.ArrayNum) {
                pFVar17 = UE::Interchange::FSourceNodeExtraInfoStaticData::
                          GetApplicationVersionExtraInfoKey();
                UInterchangeSourceNode::SetExtraInformation(this_01,pFVar17,&local_290);
              }
            }
            if (pUVar13 == (UObject *)0x0) {
              pFVar10 = FText::AsLocalizable_Advanced_LocText
                                  (&local_1b8,L"InterchangeTextureFactory",
                                   L"TextureFactory_Async_CannotCreateAsync",
                                   L"UInterchangeTextureFactory: Could not create Texture asset outside of the game thread."
                                  );
              `UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
                        (&local_280,pFVar10);
            }
            else {
              pUVar12 = Z_Construct_UClass_UTexture_NoRegister();
              iVar2 = (int)pUVar12->_padding_;
              if ((iVar2 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                  == &pUVar12->_padding_)) {
                pUVar5 = (UInterchangeTextureFactoryNode *)param_1->AssetNode;
                if (pUVar5 == (UInterchangeTextureFactoryNode *)0x0) {
                  pFVar17 = GetTypeName<UInterchangeTextureFactoryNode>(&local_158);
                  if ((pFVar17->Data).ArrayNum != 0) {
                    pwVar29 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(L"nullptr",pwVar29);
                }
                pUVar12 = Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister();
                iVar2 = (int)pUVar12->_padding_;
                if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar12->_padding_)) {
                  pFVar17 = GetTypeName<UInterchangeTextureFactoryNode>(&local_148);
                  if ((pFVar17->Data).ArrayNum == 0) {
                    pwVar27 = L"";
                  }
                  else {
                    pwVar27 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                  }
                  pFVar17 = GetFullNameForCastLogError<UInterchangeFactoryBaseNode>
                                      (&local_138,(UInterchangeFactoryBaseNode *)pUVar5);
                  if ((pFVar17->Data).ArrayNum != 0) {
                    pwVar29 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(pwVar29,pwVar27);
                }
                CheckForInvalidResolutions
                          (this,(TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
                                 *)local_118,param_1->SourceData,pUVar5);
                pUVar12 = Z_Construct_UClass_UTexture2D_NoRegister();
                iVar2 = (int)pUVar12->_padding_;
                if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar12->_padding_)) {
LAB_14e722b6e:
                  local_240.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
                  local_240.Number = *(uint *)&pUVar13->field_0x1c;
                  ::FName::ToString(&local_240,&local_228);
                  local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_250.Data.ArrayNum = (param_1->SourceData->Filename).Data.ArrayNum;
                  lVar11 = (longlong)local_250.Data.ArrayNum;
                  pFVar3 = (param_1->SourceData->Filename).Data.AllocatorInstance.Data;
                  if (local_250.Data.ArrayNum == 0) {
                    local_250.Data.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_250.Data.ArrayNum,0,(ForAnyElementType *)&local_250,
                               local_250.Data.ArrayNum,&local_250.Data.ArrayMax);
                    memcpy(local_250.Data.AllocatorInstance.Data,pFVar3,lVar11 * 2);
                  }
                  pUVar7 = local_2c0;
                  pUVar16 = *(UObject **)&pUVar13->field_0x10;
                  if ((local_2c0->_padding_ == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Results != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                                         ,0x17b,L""), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    pFVar20 = (FImportAssetResult *)(*pcVar6)();
                    return pFVar20;
                  }
                  pUVar25 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                                      ((UInterchangeResultsContainer *)pUVar7->_padding_);
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar16 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar16);
                  }
                  pUVar25->_padding_ = (longlong)pUVar16;
                  ::FString::operator=((FString *)&pUVar25->_padding_,&local_250);
                  ::FString::operator=((FString *)&pUVar25->_padding_,&local_228);
                  pFVar10 = FText::AsLocalizable_Advanced_LocText
                                      (&local_1a8,L"InterchangeTextureFactory",L"InvalidPayload",
                                       L"Unable to retrieve the payload from the source file.");
                  FText::operator=(&pUVar25->Text,pFVar10);
                  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
                  }
                  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_250.Data.AllocatorInstance.Data);
                  }
                  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_228.Data.AllocatorInstance.Data);
                  }
                  pUVar16 = local_2b8->ReimportObject;
                  __return_storage_ptr__->bIsFactorySkipAsset = true;
                  if (pUVar16 != (UObject *)0x0) {
                    pUVar28 = pUVar13;
                  }
                  __return_storage_ptr__->ImportedObject = pUVar28;
                  UInterchangeBaseNode::SetEnabled
                            ((UInterchangeBaseNode *)local_2b8->AssetNode,false);
                  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_290.Data.AllocatorInstance.Data);
                  }
                  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                  }
                  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                  }
                  if ((4 < (ulonglong)local_80) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                         ,0xd4,L""), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    pFVar20 = (FImportAssetResult *)(*pcVar6)();
                    return pFVar20;
                  }
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[local_80])(local_118);
                }
                else {
                  if (local_80 != 1) {
                    if ((local_80 == 4) && (local_88 != false)) {
                      pFVar23 = TOptional<UE::Interchange::FImportLightProfile>::operator->
                                          ((TOptional<UE::Interchange::FImportLightProfile> *)
                                           local_118);
                      local_118._0_8_ = pFVar23->_padding_;
                      goto LAB_14e722a62;
                    }
                    goto LAB_14e722b6e;
                  }
                  pFVar23 = (FImportLightProfile *)local_118;
                  if (local_a8[0] == '\0') goto LAB_14e722b6e;
LAB_14e722a62:
                  cVar9 = (**(code **)(local_118._0_8_ + 0x18))(pFVar23);
                  if (cVar9 == '\0') goto LAB_14e722b6e;
                  local_58 = (TRefCountPtr<FBaseGraphTask> *)0x0;
                  local_50 = 0;
                  local_4c = 4;
                  UE::Interchange::Private::InterchangeTextureFactory::FProcessedPayload::operator=
                            (&local_2c0->ProcessedPayload,
                             (TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
                              *)local_118);
                  bVar8 = IsInGameThread();
                  pFVar24 = FTaskGraphInterface::Get();
                  uVar30 = 0xff;
                  if (bVar8) {
                    uVar30 = 1;
                  }
                  (**(code **)((longlong)*pFVar24 + 0x60))(pFVar24,local_78,uVar30);
                  pTVar26 = local_78;
                  if (local_58 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
                    pTVar26 = local_58;
                  }
                  __return_storage_ptr__->ImportedObject = pUVar13;
                  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar26,local_50);
                  if (local_58 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
                    FMemory::Free(local_58);
                  }
                  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_290.Data.AllocatorInstance.Data);
                  }
                  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                  }
                  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                  }
                  TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
                  ::
                  ~TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
                            ((TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
                              *)local_118);
                }
                if ((local_2f0.Data.ArrayMax != -1) &&
                   (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
                }
LAB_14e722b4e:
                if (local_270.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_270.SubPathString.Data.AllocatorInstance.Data);
                }
                if (!bVar34) {
                  return __return_storage_ptr__;
                }
                FCpuProfilerTrace::OutputEndEvent();
                return __return_storage_ptr__;
              }
              pFVar10 = FText::AsLocalizable_Advanced_LocText
                                  (&local_198,L"InterchangeTextureFactory",
                                   L"TextureFactory_Async_FailCreatingAsset",
                                   L"UInterchangeTextureFactory: Could not create texture asset.");
              `UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
                        (&local_280,pFVar10);
              local_1b8.TextData.Reference = local_198.TextData.Reference;
            }
            if (local_1b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
            }
            if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_290.Data.AllocatorInstance.Data);
            }
            if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
            }
            if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            }
          }
          else {
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_1c8,L"InterchangeTextureFactory",
                                 L"TextureFactory_Async_CannotRetrievePayload",
                                 L"UInterchangeTextureFactory: Invalid translator couldn\'t retrieve a payload."
                                );
            `UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
                      (&local_280,pFVar10);
            if (local_1c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
            }
          }
          if ((4 < (ulonglong)local_80) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar20 = (FImportAssetResult *)(*pcVar6)();
            return pFVar20;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_80])(local_118);
        }
        if ((local_2f0.Data.ArrayMax != -1) &&
           (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar17 = UField::GetAuthoredName((UField *)pUVar12,&local_1e8);
        pFVar10 = FText::FromString(&local_178,pFVar17);
        pFVar18 = FText::AsLocalizable_Advanced_LocText
                            (&local_1f8,L"InterchangeTextureFactory",
                             L"TextureFactory_Async_InvalidTextureTranslated",
                             L"UInterchangeTextureFactory: Asset factory node ({0}) doesn\'t reference a valid texture translated node."
                            );
        pFVar19 = FTextFormat::FTextFormat(&local_168,pFVar18,Default);
        FText::Format<FText>(&local_238,pFVar19,pFVar10);
        if (local_1f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        `UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()
                  (&local_280,&local_238);
        if (local_238.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
        }
      }
      if (local_270.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.SubPathString.Data.AllocatorInstance.Data);
      }
      goto LAB_14e722dba;
    }
  }
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_188,L"InterchangeTextureFactory",
                       L"TextureFactory_Async_MissMatchClass",
                       L"UInterchangeTextureFactory: Asset node parameter class doesn\'t derive from UTexture."
                      );
  `UInterchangeTextureFactory::ImportAsset_Async'::__l2::<lambda_1>::operator()(&local_280,pFVar10);
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
LAB_14e722dba:
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ReinstateSourceData @ 14e727dd0

void __thiscall
UInterchangeTextureFactory::ReinstateSourceData(UInterchangeTextureFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e728350

bool __thiscall
UInterchangeTextureFactory::SetSourceFilename
          (UInterchangeTextureFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e729210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangeTextureFactory::SetupObject_GameThread
          (UInterchangeTextureFactory *this,FSetupObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FUObjectItem *this_00;
  UTexture2D *this_01;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2222,"UInterchangeTextureFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTextureFactory.cpp"
               ,0x8ae);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2222);
  }
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTextureFactory.cpp"
                         ,0x8b0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bSkipImport != false) goto LAB_14e7293c6;
  this_01 = (UTexture2D *)param_1->ImportedObject;
  if (this_01 == (UTexture2D *)0x0) {
LAB_14e729361:
    this_01 = (UTexture2D *)0x0;
LAB_14e729363:
    if (param_1->bIsReimport == false) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4));
      FUObjectItem::ClearRootFlags(this_00,RootSet);
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_01);
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UTexture_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14e729361;
    bVar4 = UE::Interchange::Private::InterchangeTextureFactory::FProcessedPayload::IsValid
                      (&this->ProcessedPayload);
    if (!bVar4) goto LAB_14e729363;
    pUVar2 = param_1->FactoryNode;
    bVar4 = param_1->bIsReimport;
    pUVar5 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1353253485260306647>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTextureFactory.cpp"
                         ,0x729,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      UE::Interchange::Private::InterchangeTextureFactory::SetupTexture2DSourceDataFromPayload
                (pUVar2,this_01,&this->ProcessedPayload,bVar4);
    }
  }
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e7293c6:
  if (!bVar6) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// StaticRegisterNativesUInterchangeTextureFactory @ 14e72a610

void __cdecl UInterchangeTextureFactory::StaticRegisterNativesUInterchangeTextureFactory(void)

{
  return;
}

