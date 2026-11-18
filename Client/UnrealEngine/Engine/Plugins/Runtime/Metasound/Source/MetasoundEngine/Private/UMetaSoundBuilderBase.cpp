// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 188

// StaticClass @ 14b2ef540

UClass * __cdecl UMetaSoundBuilderBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundBuilderBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundBuilderBase",
               &Z_Registration_Info_UClass_UMetaSoundBuilderBase.InnerSingleton,
               StaticRegisterNativesUMetaSoundBuilderBase,0xa8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundBuilderBase>,
               InternalVTableHelperCtorCaller<UMetaSoundBuilderBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderBase.InnerSingleton;
}

// BuildInternal<UMetaSoundPatch> @ 14b309a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMetaSoundPatch * __thiscall
UMetaSoundBuilderBase::BuildInternal<UMetaSoundPatch>
          (UMetaSoundBuilderBase *this,UObject *param_1,FMetaSoundBuilderOptions *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UMetaSoundPatch *pUVar4;
  longlong lVar5;
  FName FVar6;
  UClass *pUVar7;
  FString *pFVar8;
  IDocumentBuilderRegistry *pIVar9;
  FMetasoundFrontendDocument *pFVar10;
  TArrayView<FGuid_const_,int> *pTVar11;
  longlong *plVar12;
  FMetasoundFrontendClassName *pFVar13;
  FMetasoundFrontendClassName *pFVar14;
  FMetasoundFrontendClassName *pFVar15;
  undefined1 auStack_1d8 [32];
  FScriptContainerElement *local_1b8;
  undefined4 local_1a8 [2];
  FGuid *local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  UMetaSoundPatch *local_190;
  FMetasoundFrontendClassName *local_188;
  undefined1 local_180 [8];
  FString local_178;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_168;
  FString local_158;
  FString local_148;
  TArrayView<FGuid_const_,int> local_138;
  FMetaSoundFrontendDocumentBuilder local_128;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar13 = (FMetasoundFrontendClassName *)0x0;
  if ((*(UObject **)&param_2->ExistingMetaSound == (UObject *)0x0) ||
     (*(longlong *)&(param_2->ExistingMetaSound).field_0x8 == 0)) {
    FVar1 = param_2->Name;
    FVar6.ComparisonIndex.Value = 0;
    FVar6.Number = 0;
    if (FVar1 != (FName)0x0) {
      FVar6 = (FName)UMetaSoundPatch::StaticClass();
      local_1b8 = (FScriptContainerElement *)((ulonglong)local_1b8 & 0xffffffff00000000);
      FVar6 = MakeUniqueObjectName
                        ((UObject *)local_180,(UClass *)param_1,FVar6,
                         FVar1.ComparisonIndex.Value.Value);
      FVar6 = *(FName *)FVar6;
    }
    if (param_1 == (UObject *)0x0) {
      param_1 = (UObject *)GetTransientPackage();
    }
    if (FVar6 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = UMetaSoundPatch::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_Transient|RF_Public;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = param_1;
    local_c8._16_8_ = FVar6;
    pUVar4 = (UMetaSoundPatch *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar12 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  else {
    pUVar4 = CastChecked<UMetaSoundPatch,UObject>(*(UObject **)&param_2->ExistingMetaSound);
    if (pUVar4 != (UMetaSoundPatch *)0x0) {
      lVar5 = (**(code **)(pUVar4->_padding_ + 0x18))(&pUVar4->_padding_);
      pFVar15 = (FMetasoundFrontendClassName *)(lVar5 + 0x88);
      if (param_2->bForceUniqueClassName != false) {
        pFVar15 = pFVar13;
      }
      FMetasoundAssetBase::UnregisterGraphWithFrontend((FMetasoundAssetBase *)&pUVar4->_padding_);
      goto LAB_14b309bbf;
    }
  }
  pFVar15 = pFVar13;
  if (pUVar4 == (UMetaSoundPatch *)0x0) {
    pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_178,(UObject *)0x0);
    if ((pFVar8->Data).ArrayNum == 0) {
      local_1b8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_1b8 = (pFVar8->Data).AllocatorInstance.Data;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetaSound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundBuilderBase.h"
                       ,0x27d,L"Failed to build MetaSound from builder \'%s\'");
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    pFVar15 = (FMetasoundFrontendClassName *)0x0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UMetaSoundPatch *)(*pcVar2)();
      return pUVar4;
    }
  }
LAB_14b309bbf:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMetaSoundPatch *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pFVar14 = (FMetasoundFrontendClassName *)&pUVar4->_padding_;
  if (pUVar4 == (UMetaSoundPatch *)0x0) {
    pFVar14 = pFVar13;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMetaSoundPatch *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  if (pFVar15 != (FMetasoundFrontendClassName *)0x0) {
    pIVar9 = Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
    (**(code **)((longlong)*pIVar9 + 0x28))(pIVar9,pFVar15,0);
  }
  local_168.Object = (FDocumentModifyDelegates *)0x0;
  local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_190 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMetaSoundPatch *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_188 = pFVar14;
  FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
            (&local_128,(TScriptInterface<IMetaSoundDocumentInterface> *)&local_190,&local_168,false
            );
  pFVar10 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  FMetaSoundFrontendDocumentBuilder::InitDocument(&local_128,pFVar10,pFVar15,false);
  if (pUVar4 != (UMetaSoundPatch *)0x0) {
    pFVar13 = pFVar14;
  }
  (**(code **)((longlong)pFVar13->Namespace + 0x38))();
  FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&local_128);
  if (param_2->bAddToRegistry != false) {
    local_1a8[0] = 0x10101;
    local_1a0 = (FGuid *)0x0;
    iStack_198 = 0;
    pTVar11 = UMetaSoundSettings::GetPageOrder(&local_138);
    local_1a0 = pTVar11->DataPtr;
    iStack_198 = pTVar11->ArrayNum;
    uStack_194 = *(undefined4 *)&pTVar11->field_0xc;
    (**(code **)(pUVar4->_padding_ + 0x18))(&pUVar4->_padding_,local_1a8);
  }
  if (6 < (byte)LogMetaSound._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_148,(UObject *)0x0,None);
    ::FName::ToString(&param_2->Name,&local_158);
    UE::Logging::Private::BasicLog<7>
              (&`protected:_class_UMetaSoundPatch&___ptr64___cdecl_UMetaSoundBuilderBase::BuildInternal<UMetaSoundPatch>(UObject*___ptr64,FMetaSoundBuilderOptions_const&___ptr64)const___ptr64'
                ::__l32::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  return pUVar4;
}

// BuildInternal<UMetaSoundSource> @ 14b309d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMetaSoundSource * __thiscall
UMetaSoundBuilderBase::BuildInternal<UMetaSoundSource>
          (UMetaSoundBuilderBase *this,UObject *param_1,FMetaSoundBuilderOptions *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UMetaSoundSource *pUVar4;
  longlong lVar5;
  FName FVar6;
  UClass *pUVar7;
  FString *pFVar8;
  IDocumentBuilderRegistry *pIVar9;
  FMetasoundFrontendDocument *pFVar10;
  TArrayView<FGuid_const_,int> *pTVar11;
  longlong *plVar12;
  FMetasoundFrontendClassName *pFVar13;
  FMetasoundFrontendClassName *pFVar14;
  FMetasoundFrontendClassName *pFVar15;
  undefined1 auStack_1d8 [32];
  FScriptContainerElement *local_1b8;
  undefined4 local_1a8 [2];
  FGuid *local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  UMetaSoundSource *local_190;
  FMetasoundFrontendClassName *local_188;
  undefined1 local_180 [8];
  FString local_178;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_168;
  FString local_158;
  FString local_148;
  TArrayView<FGuid_const_,int> local_138;
  FMetaSoundFrontendDocumentBuilder local_128;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar13 = (FMetasoundFrontendClassName *)0x0;
  if ((*(UObject **)&param_2->ExistingMetaSound == (UObject *)0x0) ||
     (*(longlong *)&(param_2->ExistingMetaSound).field_0x8 == 0)) {
    FVar1 = param_2->Name;
    FVar6.ComparisonIndex.Value = 0;
    FVar6.Number = 0;
    if (FVar1 != (FName)0x0) {
      FVar6 = (FName)UMetaSoundSource::StaticClass();
      local_1b8 = (FScriptContainerElement *)((ulonglong)local_1b8 & 0xffffffff00000000);
      FVar6 = MakeUniqueObjectName
                        ((UObject *)local_180,(UClass *)param_1,FVar6,
                         FVar1.ComparisonIndex.Value.Value);
      FVar6 = *(FName *)FVar6;
    }
    if (param_1 == (UObject *)0x0) {
      param_1 = (UObject *)GetTransientPackage();
    }
    if (FVar6 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = UMetaSoundSource::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_Transient|RF_Public;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = param_1;
    local_c8._16_8_ = FVar6;
    pUVar4 = (UMetaSoundSource *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar12 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  else {
    pUVar4 = CastChecked<UMetaSoundSource,UObject>(*(UObject **)&param_2->ExistingMetaSound);
    if (pUVar4 != (UMetaSoundSource *)0x0) {
      lVar5 = (**(code **)(*(longlong *)&pUVar4->field_0x4b8 + 0x18))();
      pFVar15 = (FMetasoundFrontendClassName *)(lVar5 + 0x88);
      if (param_2->bForceUniqueClassName != false) {
        pFVar15 = pFVar13;
      }
      FMetasoundAssetBase::UnregisterGraphWithFrontend((FMetasoundAssetBase *)&pUVar4->field_0x468);
      goto LAB_14b309f04;
    }
  }
  pFVar15 = pFVar13;
  if (pUVar4 == (UMetaSoundSource *)0x0) {
    pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_178,(UObject *)0x0);
    if ((pFVar8->Data).ArrayNum == 0) {
      local_1b8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_1b8 = (pFVar8->Data).AllocatorInstance.Data;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetaSound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundBuilderBase.h"
                       ,0x27d,L"Failed to build MetaSound from builder \'%s\'");
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    pFVar15 = (FMetasoundFrontendClassName *)0x0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UMetaSoundSource *)(*pcVar2)();
      return pUVar4;
    }
  }
LAB_14b309f04:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMetaSoundSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pFVar14 = (FMetasoundFrontendClassName *)&pUVar4->field_0x4b8;
  if (pUVar4 == (UMetaSoundSource *)0x0) {
    pFVar14 = pFVar13;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMetaSoundSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  if (pFVar15 != (FMetasoundFrontendClassName *)0x0) {
    pIVar9 = Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
    (**(code **)((longlong)*pIVar9 + 0x28))(pIVar9,pFVar15,0);
  }
  local_168.Object = (FDocumentModifyDelegates *)0x0;
  local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_190 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMetaSoundSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_188 = pFVar14;
  FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
            (&local_128,(TScriptInterface<IMetaSoundDocumentInterface> *)&local_190,&local_168,false
            );
  pFVar10 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  FMetaSoundFrontendDocumentBuilder::InitDocument(&local_128,pFVar10,pFVar15,false);
  if (pUVar4 != (UMetaSoundSource *)0x0) {
    pFVar13 = pFVar14;
  }
  (**(code **)((longlong)pFVar13->Namespace + 0x38))();
  FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&local_128);
  if (param_2->bAddToRegistry != false) {
    local_1a8[0] = 0x10101;
    local_1a0 = (FGuid *)0x0;
    iStack_198 = 0;
    pTVar11 = UMetaSoundSettings::GetPageOrder(&local_138);
    local_1a0 = pTVar11->DataPtr;
    iStack_198 = pTVar11->ArrayNum;
    uStack_194 = *(undefined4 *)&pTVar11->field_0xc;
    (**(code **)(*(longlong *)&pUVar4->field_0x468 + 0x18))(&pUVar4->field_0x468,local_1a8);
  }
  if (6 < (byte)LogMetaSound._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_148,(UObject *)0x0,None);
    ::FName::ToString(&param_2->Name,&local_158);
    UE::Logging::Private::BasicLog<7>
              (&`protected:_class_UMetaSoundSource&___ptr64___cdecl_UMetaSoundBuilderBase::BuildInternal<UMetaSoundSource>(UObject*___ptr64,FMetaSoundBuilderOptions_const&___ptr64)const___ptr64'
                ::__l32::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  return pUVar4;
}

// UMetaSoundBuilderBase @ 14b34c260

UMetaSoundBuilderBase * __thiscall
UMetaSoundBuilderBase::UMetaSoundBuilderBase(UMetaSoundBuilderBase *this,FVTableHelper *param_1)

{
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_28;
  TScriptInterface<IMetaSoundDocumentInterface> local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMetaSoundBuilderBase__6B_;
  local_28.Object = (FDocumentModifyDelegates *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
            (&this->Builder,&local_18,&local_28,false);
  *(undefined8 *)&(this->BuilderReloadDelegate).field_0x18 = 2;
  *(undefined8 *)&this->BuilderReloadDelegate = 0;
  *(undefined8 *)&(this->BuilderReloadDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BuilderReloadDelegate).field_0x10 = 0;
  this->LastTransactionRegistered = 0;
  return this;
}

// UMetaSoundBuilderBase @ 14b34c2e0

UMetaSoundBuilderBase * __thiscall
UMetaSoundBuilderBase::UMetaSoundBuilderBase
          (UMetaSoundBuilderBase *this,FObjectInitializer *param_1)

{
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_28;
  TScriptInterface<IMetaSoundDocumentInterface> local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMetaSoundBuilderBase__6B_;
  local_28.Object = (FDocumentModifyDelegates *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
            (&this->Builder,&local_18,&local_28,false);
  *(undefined8 *)&(this->BuilderReloadDelegate).field_0x18 = 2;
  *(undefined8 *)&this->BuilderReloadDelegate = 0;
  *(undefined8 *)&(this->BuilderReloadDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BuilderReloadDelegate).field_0x10 = 0;
  this->LastTransactionRegistered = 0;
  return this;
}

// ~UMetaSoundBuilderBase @ 14b352430

void __thiscall UMetaSoundBuilderBase::~UMetaSoundBuilderBase(UMetaSoundBuilderBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMetaSoundBuilderBase__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BuilderReloadDelegate).field_0x8,
             *(int *)&(this->BuilderReloadDelegate).field_0x10);
  pvVar1 = *(void **)&(this->BuilderReloadDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BuilderReloadDelegate);
  FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&this->Builder);
  UObject::~UObject((UObject *)this);
  return;
}

// AddGraphInputNode @ 14b363800

/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundBuilderNodeOutputHandle * __thiscall
UMetaSoundBuilderBase::AddGraphInputNode
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *__return_storage_ptr__,
          FName param_1,FName param_2,FMetasoundFrontendLiteral *param_3,
          EMetaSoundBuilderResult *param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  IDataTypeRegistry *pIVar7;
  longlong lVar8;
  FMetasoundFrontendNode *pFVar9;
  FDocumentIDGenerator *this_00;
  FMetasoundFrontendDocument *pFVar10;
  FGuid *pFVar11;
  FMetasoundFrontendLiteral *pFVar12;
  FMetaSoundBuilderNodeOutputHandle *pFVar13;
  EMetaSoundBuilderResult EVar14;
  uint uVar15;
  uint uVar16;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 local_188 [40];
  longlong lStack_160;
  uint local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FMetasoundFrontendClassInput local_e8;
  FGuid local_a0;
  FGuid local_90;
  FMetasoundFrontendLiteral local_80;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  local_res18 = param_1;
  local_res20 = param_2;
  pIVar7 = Metasound::Frontend::IDataTypeRegistry::Get();
  lVar8 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,&local_res20);
  if (lVar8 == 0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_res20,&local_118);
      ::FName::ToString(&local_res18,&local_128);
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_138);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    this_01 = &this->Builder;
    pFVar9 = FMetaSoundFrontendDocumentBuilder::FindGraphInputNode(this_01,local_res18,(FGuid *)0x0)
    ;
    if (pFVar9 == (FMetasoundFrontendNode *)0x0) {
      this_00 = Metasound::Frontend::FDocumentIDGenerator::Get();
      pFVar10 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(this_01);
      local_188._0_4_ = local_res18.ComparisonIndex.Value;
      local_188._4_4_ = local_res18.Number;
      local_188._8_4_ = local_res20.ComparisonIndex.Value;
      local_188._12_4_ = local_res20.Number;
      local_188._16_8_ = 0;
      local_188._24_8_ = 0;
      stack0xfffffffffffffe98 = Metasound::FrontendInvalidID;
      local_150.Data = (FScriptContainerElement *)0x0;
      local_148._0_4_ = 0;
      local_148._4_4_ = 0;
      pFVar11 = Metasound::Frontend::FDocumentIDGenerator::CreateNodeID(this_00,&local_a0,pFVar10);
      unique0x10000454 = *pFVar11;
      pFVar11 = Metasound::Frontend::FDocumentIDGenerator::CreateVertexID(this_00,&local_90,pFVar10)
      ;
      local_188._16_4_ = pFVar11->A;
      local_188._20_4_ = pFVar11->B;
      local_188._24_4_ = pFVar11->C;
      local_188._28_4_ = pFVar11->D;
      local_158 = (uint)param_5;
      pFVar12 = FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_80,param_3);
      FMetasoundFrontendClassInput::InitDefault((FMetasoundFrontendClassInput *)local_188,pFVar12);
      local_e8._padding_._0_4_ = local_158;
      local_e8.Defaults.AllocatorInstance.Data = local_150.Data;
      local_e8._padding_ = local_188._0_8_;
      local_e8._padding_ = local_188._8_8_;
      local_e8.Defaults.ArrayNum = (int)local_148;
      local_e8.Defaults.ArrayMax = local_148._4_4_;
      local_148._0_4_ = 0;
      local_148._4_4_ = 0;
      local_e8._padding_ = local_188._16_8_;
      local_e8._padding_ = local_188._24_8_;
      local_150.Data = (FScriptContainerElement *)0x0;
      local_e8._padding_ = local_188._32_8_;
      local_e8._padding_ = lStack_160;
      pFVar9 = FMetaSoundFrontendDocumentBuilder::AddGraphInput(this_01,&local_e8,(FGuid *)0x0);
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)local_150.Data,(int)local_148);
      if ((FMetasoundFrontendClassInputDefault *)local_150.Data !=
          (FMetasoundFrontendClassInputDefault *)0x0) {
        FMemory::Free(local_150.Data);
      }
      if (pFVar9 == (FMetasoundFrontendNode *)0x0) goto LAB_14b363b84;
    }
    else if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_res20,&local_f8);
      ::FName::ToString(&local_res18,&local_108);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    if (((pFVar9->Interface).Outputs.ArrayNum == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Outputs.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                           ,99,L"Node should be initialized and have one output."), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FMetaSoundBuilderNodeOutputHandle *)(*pcVar3)();
      return pFVar13;
    }
    uVar16 = (pFVar9->ID).B;
    uVar15 = (pFVar9->ID).C;
    uVar5 = (pFVar9->ID).D;
    *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar9->ID).A;
    *(uint *)&__return_storage_ptr__->field_0x4 = uVar16;
    *(uint *)&__return_storage_ptr__->field_0x8 = uVar15;
    *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
    iVar2 = (pFVar9->Interface).Outputs.ArrayNum;
    uVar15 = iVar2 - 1;
    uVar16 = 0;
    if ((int)uVar15 < iVar2) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FMetaSoundBuilderNodeOutputHandle *)(*pcVar3)();
      return pFVar13;
    }
    pFVar1 = (pFVar9->Interface).Outputs.AllocatorInstance.Data +
             (longlong)(pFVar9->Interface).Outputs.ArrayNum * 0x20 + -0x10;
    uVar4 = *(undefined8 *)(pFVar1 + 8);
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)pFVar1;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar4;
  }
LAB_14b363b84:
  if ((((*(int *)__return_storage_ptr__ == 0 && *(int *)&__return_storage_ptr__->field_0x8 == 0) &&
       *(int *)&__return_storage_ptr__->field_0xc == 0) &&
       *(int *)&__return_storage_ptr__->field_0x4 == 0) ||
     (((*(int *)&__return_storage_ptr__->field_0x1c == 0 &&
       *(int *)&__return_storage_ptr__->field_0x18 == 0) &&
      *(int *)&__return_storage_ptr__->field_0x14 == 0) &&
      *(int *)&__return_storage_ptr__->field_0x10 == 0)) {
    EVar14 = Failed;
  }
  else {
    EVar14 = Succeeded;
  }
  *param_4 = EVar14;
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_3);
  return __return_storage_ptr__;
}

// AddGraphOutputNode @ 14b363bf0

/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundBuilderNodeInputHandle * __thiscall
UMetaSoundBuilderBase::AddGraphOutputNode
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *__return_storage_ptr__,
          FName param_1,FName param_2,FMetasoundFrontendLiteral *param_3,
          EMetaSoundBuilderResult *param_4,bool param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  IDataTypeRegistry *pIVar8;
  longlong lVar9;
  FMetasoundFrontendNode *pFVar10;
  FDocumentIDGenerator *this_00;
  FMetasoundFrontendDocument *pFVar11;
  FGuid *pFVar12;
  FMetaSoundBuilderNodeInputHandle *pFVar13;
  EMetaSoundBuilderResult EVar14;
  uint uVar15;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  FName FStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FScriptContainerElement *local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  FName local_98;
  FName FStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FScriptContainerElement *local_78;
  int iStack_70;
  int iStack_6c;
  uint local_68;
  FGuid local_58;
  FGuid local_48;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  local_res18 = param_1;
  local_res20 = param_2;
  pIVar8 = Metasound::Frontend::IDataTypeRegistry::Get();
  lVar9 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,&local_res20);
  if (lVar9 == 0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_res20,&local_f8);
      ::FName::ToString(&local_res18,&local_108);
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_128);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    this_01 = &this->Builder;
    pFVar10 = FMetaSoundFrontendDocumentBuilder::FindGraphOutputNode
                        (this_01,local_res18,(FGuid *)0x0);
    if (pFVar10 == (FMetasoundFrontendNode *)0x0) {
      this_00 = Metasound::Frontend::FDocumentIDGenerator::Get();
      pFVar11 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(this_01);
      local_d8 = local_res18;
      FStack_d0 = local_res20;
      pFVar12 = Metasound::Frontend::FDocumentIDGenerator::CreateNodeID(this_00,&local_58,pFVar11);
      local_118.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar12;
      local_118.Data.ArrayNum = pFVar12->C;
      local_118.Data.ArrayMax = pFVar12->D;
      local_b8 = local_118.Data.AllocatorInstance.Data;
      uStack_b0 = local_118.Data._8_8_;
      pFVar12 = Metasound::Frontend::FDocumentIDGenerator::CreateVertexID(this_00,&local_48,pFVar11)
      ;
      local_c8._0_4_ = pFVar12->A;
      local_c8._4_4_ = pFVar12->B;
      uStack_c0._0_4_ = pFVar12->C;
      uStack_c0._4_4_ = pFVar12->D;
      local_98 = local_d8;
      FStack_90 = FStack_d0;
      local_a8 = (uint)param_5;
      local_78 = local_118.Data.AllocatorInstance.Data;
      iStack_70 = local_118.Data.ArrayNum;
      iStack_6c = local_118.Data.ArrayMax;
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_68 = local_a8;
      pFVar10 = FMetaSoundFrontendDocumentBuilder::AddGraphOutput
                          (this_01,(FMetasoundFrontendClassOutput *)&local_98,(FGuid *)0x0);
      if (pFVar10 == (FMetasoundFrontendNode *)0x0) goto LAB_14b363eff;
    }
    else if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_res20,&local_118);
      ::FName::ToString(&local_res18,&local_e8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    if (((pFVar10->Interface).Inputs.ArrayNum == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Inputs.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                           ,0x90,L"Node should be initialized and have one input."), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FMetaSoundBuilderNodeInputHandle *)(*pcVar3)();
      return pFVar13;
    }
    iVar1 = (pFVar10->Interface).Inputs.ArrayNum;
    uVar15 = iVar1 - 1;
    uVar7 = 0;
    if ((int)uVar15 < iVar1) {
      uVar7 = ~uVar15 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FMetaSoundBuilderNodeInputHandle *)(*pcVar3)();
      return pFVar13;
    }
    iVar1 = (pFVar10->Interface).Inputs.ArrayNum;
    pFVar2 = (pFVar10->Interface).Inputs.AllocatorInstance.Data;
    bVar6 = FMetaSoundFrontendDocumentBuilder::SetNodeInputDefault
                      (this_01,&pFVar10->ID,(FGuid *)(pFVar2 + (longlong)iVar1 * 0x20 + -0x10),
                       param_3,(FGuid *)0x0);
    if (bVar6) {
      uVar7 = (pFVar10->ID).B;
      uVar15 = (pFVar10->ID).C;
      uVar5 = (pFVar10->ID).D;
      *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar10->ID).A;
      *(uint *)&__return_storage_ptr__->field_0x4 = uVar7;
      *(uint *)&__return_storage_ptr__->field_0x8 = uVar15;
      *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
      uVar4 = *(undefined8 *)(pFVar2 + (longlong)iVar1 * 0x20 + -8);
      *(undefined8 *)&__return_storage_ptr__->field_0x10 =
           *(undefined8 *)(pFVar2 + (longlong)iVar1 * 0x20 + -0x10);
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar4;
    }
  }
LAB_14b363eff:
  if ((((*(int *)__return_storage_ptr__ == 0 && *(int *)&__return_storage_ptr__->field_0x4 == 0) &&
       *(int *)&__return_storage_ptr__->field_0x8 == 0) &&
       *(int *)&__return_storage_ptr__->field_0xc == 0) ||
     (((*(int *)&__return_storage_ptr__->field_0x14 == 0 &&
       *(int *)&__return_storage_ptr__->field_0x18 == 0) &&
      *(int *)&__return_storage_ptr__->field_0x10 == 0) &&
      *(int *)&__return_storage_ptr__->field_0x1c == 0)) {
    EVar14 = Failed;
  }
  else {
    EVar14 = Succeeded;
  }
  *param_4 = EVar14;
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_3);
  return __return_storage_ptr__;
}

// AddGraphVariable @ 14b363fa0

void __thiscall
UMetaSoundBuilderBase::AddGraphVariable
          (UMetaSoundBuilderBase *this,FName param_1,FName param_2,
          FMetasoundFrontendLiteral *param_3,EMetaSoundBuilderResult *param_4)

{
  FMetasoundFrontendVariable *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::AddGraphVariable
                     (&this->Builder,param_1,param_2,param_3,(FText *)0x0,(FText *)0x0,(FGuid *)0x0)
  ;
  *param_4 = pFVar1 == (FMetasoundFrontendVariable *)0x0;
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_3);
  return;
}

// AddGraphVariableGetDelayedNode @ 14b363ff0

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::AddGraphVariableGetDelayedNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,FName param_1,
          EMetaSoundBuilderResult *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FMetasoundFrontendNode *pFVar5;
  FGuid local_28;
  FGuid local_18;
  
  *param_2 = Failed;
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  pFVar4 = FGuid::NewGuid(&local_18);
  local_28.A = pFVar4->A;
  local_28.B = pFVar4->B;
  local_28.C = pFVar4->C;
  local_28.D = pFVar4->D;
  pFVar5 = FMetaSoundFrontendDocumentBuilder::AddGraphVariableDeferredAccessorNode
                     (&this->Builder,param_1,&local_28,(FGuid *)0x0);
  if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
    uVar1 = (pFVar5->ID).B;
    uVar2 = (pFVar5->ID).C;
    uVar3 = (pFVar5->ID).D;
    (__return_storage_ptr__->NodeID).A = (pFVar5->ID).A;
    (__return_storage_ptr__->NodeID).B = uVar1;
    (__return_storage_ptr__->NodeID).C = uVar2;
    (__return_storage_ptr__->NodeID).D = uVar3;
    *param_2 = Succeeded;
  }
  return __return_storage_ptr__;
}

// AddGraphVariableGetNode @ 14b364080

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::AddGraphVariableGetNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,FName param_1,
          EMetaSoundBuilderResult *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FMetasoundFrontendNode *pFVar5;
  FGuid local_28;
  FGuid local_18;
  
  *param_2 = Failed;
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  pFVar4 = FGuid::NewGuid(&local_18);
  local_28.A = pFVar4->A;
  local_28.B = pFVar4->B;
  local_28.C = pFVar4->C;
  local_28.D = pFVar4->D;
  pFVar5 = FMetaSoundFrontendDocumentBuilder::AddGraphVariableAccessorNode
                     (&this->Builder,param_1,&local_28,(FGuid *)0x0);
  if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
    uVar1 = (pFVar5->ID).B;
    uVar2 = (pFVar5->ID).C;
    uVar3 = (pFVar5->ID).D;
    (__return_storage_ptr__->NodeID).A = (pFVar5->ID).A;
    (__return_storage_ptr__->NodeID).B = uVar1;
    (__return_storage_ptr__->NodeID).C = uVar2;
    (__return_storage_ptr__->NodeID).D = uVar3;
    *param_2 = Succeeded;
  }
  return __return_storage_ptr__;
}

// AddGraphVariableSetNode @ 14b364110

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::AddGraphVariableSetNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,FName param_1,
          EMetaSoundBuilderResult *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FMetasoundFrontendNode *pFVar5;
  FGuid local_28;
  FGuid local_18;
  
  *param_2 = Failed;
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  pFVar4 = FGuid::NewGuid(&local_18);
  local_28.A = pFVar4->A;
  local_28.B = pFVar4->B;
  local_28.C = pFVar4->C;
  local_28.D = pFVar4->D;
  pFVar5 = FMetaSoundFrontendDocumentBuilder::AddGraphVariableMutatorNode
                     (&this->Builder,param_1,&local_28,(FGuid *)0x0);
  if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
    uVar1 = (pFVar5->ID).B;
    uVar2 = (pFVar5->ID).C;
    uVar3 = (pFVar5->ID).D;
    (__return_storage_ptr__->NodeID).A = (pFVar5->ID).A;
    (__return_storage_ptr__->NodeID).B = uVar1;
    (__return_storage_ptr__->NodeID).C = uVar2;
    (__return_storage_ptr__->NodeID).D = uVar3;
    *param_2 = Succeeded;
  }
  return __return_storage_ptr__;
}

// AddInterface @ 14b3641a0

void __thiscall
UMetaSoundBuilderBase::AddInterface
          (UMetaSoundBuilderBase *this,FName param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::AddInterface(&this->Builder,param_1);
  *param_2 = !bVar1;
  return;
}

// AddNode @ 14b3641d0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::AddNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,
          TScriptInterface<IMetaSoundDocumentInterface> *param_1,EMetaSoundBuilderResult *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  EMetasoundFrontendClassAccessFlags EVar4;
  longlong lVar5;
  FGuid *pFVar6;
  FMetasoundFrontendNode *pFVar7;
  longlong *plVar8;
  EMetasoundFrontendClassAccessFlags local_res10 [4];
  ForAnyElementType local_38;
  ForAnyElementType local_28;
  undefined8 uStack_20;
  
  plVar8 = (longlong *)0x0;
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  if ((*(UObject **)param_1 != (UObject *)0x0) && (*(longlong *)&param_1->field_0x8 != 0)) {
    RegisterGraphIfOutstandingTransactions(*(UObject **)param_1);
    if (*(longlong *)param_1 != 0) {
      plVar8 = *(longlong **)&param_1->field_0x8;
    }
    lVar5 = (**(code **)(*plVar8 + 0x18))(plVar8);
    EVar4 = FMetasoundFrontendClassMetadata::GetAccessFlags
                      ((FMetasoundFrontendClassMetadata *)(lVar5 + 0x88));
    if ((EVar4 & Default) == None) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_res10[0] = Default;
        ::LexToString((FString *)&local_28,local_res10);
        FMetasoundFrontendClassName::ToString
                  ((FMetasoundFrontendClassName *)(lVar5 + 0x88),(FString *)&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data);
        }
        if (local_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data);
        }
      }
      *param_2 = Failed;
      return __return_storage_ptr__;
    }
    pFVar6 = FGuid::NewGuid((FGuid *)&local_38);
    local_28.Data = *(FScriptContainerElement **)pFVar6;
    uStack_20._0_4_ = pFVar6->C;
    uStack_20._4_4_ = pFVar6->D;
    pFVar7 = FMetaSoundFrontendDocumentBuilder::AddGraphNode
                       (&this->Builder,(FMetasoundFrontendGraphClass *)(lVar5 + 0x70),
                        (FGuid *)&local_28,(FGuid *)0x0);
    if (pFVar7 != (FMetasoundFrontendNode *)0x0) {
      uVar1 = (pFVar7->ID).B;
      uVar2 = (pFVar7->ID).C;
      uVar3 = (pFVar7->ID).D;
      (__return_storage_ptr__->NodeID).A = (pFVar7->ID).A;
      (__return_storage_ptr__->NodeID).B = uVar1;
      (__return_storage_ptr__->NodeID).C = uVar2;
      (__return_storage_ptr__->NodeID).D = uVar3;
    }
  }
  *param_2 = (((__return_storage_ptr__->NodeID).C == 0 && (__return_storage_ptr__->NodeID).D == 0)
             && (__return_storage_ptr__->NodeID).A == 0) && (__return_storage_ptr__->NodeID).B == 0;
  return __return_storage_ptr__;
}

// AddNodeByClassName @ 14b364330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::AddNodeByClassName
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,
          FMetasoundFrontendClassName *param_1,EMetaSoundBuilderResult *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  EMetasoundFrontendClassAccessFlags EVar5;
  ISearchEngine *pIVar6;
  FGuid *pFVar7;
  FMetasoundFrontendNode *pFVar8;
  ForAnyElementType FVar9;
  EMetasoundFrontendClassAccessFlags local_res10 [4];
  ForAnyElementType local_d8;
  ForAnyElementType local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  FGuid local_b0;
  FMetasoundFrontendClassMetadata local_a0;
  FMetasoundFrontendClassInput *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  local_b8 = &___7FMetasoundFrontendClass__6B_;
  local_b0 = Metasound::FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_a0);
  local_68 = (FMetasoundFrontendClassInput *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  pIVar6 = Metasound::Frontend::ISearchEngine::Get();
  cVar4 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,param_1,param_3,&local_b8);
  if (cVar4 == '\0') {
    if (1 < (byte)LogMetaSound._0_1_) {
      FMetasoundFrontendClassName::ToString(param_1,(FString *)&local_d8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      FVar9.Data = local_d8.Data;
LAB_14b36440c:
      if (FVar9.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar9.Data);
      }
    }
  }
  else {
    EVar5 = FMetasoundFrontendClassMetadata::GetAccessFlags(&local_a0);
    if ((EVar5 & Default) != None) {
      pFVar7 = FGuid::NewGuid((FGuid *)&local_d8);
      local_c8.Data = *(FScriptContainerElement **)pFVar7;
      uStack_c0._0_4_ = pFVar7->C;
      uStack_c0._4_4_ = pFVar7->D;
      pFVar8 = FMetaSoundFrontendDocumentBuilder::AddNodeByClassName
                         (&this->Builder,param_1,param_3,(FGuid *)&local_c8,(FGuid *)0x0);
      if (pFVar8 != (FMetasoundFrontendNode *)0x0) {
        uVar1 = (pFVar8->ID).B;
        uVar2 = (pFVar8->ID).C;
        uVar3 = (pFVar8->ID).D;
        (__return_storage_ptr__->NodeID).A = (pFVar8->ID).A;
        (__return_storage_ptr__->NodeID).B = uVar1;
        (__return_storage_ptr__->NodeID).C = uVar2;
        (__return_storage_ptr__->NodeID).D = uVar3;
      }
      *param_2 = (((__return_storage_ptr__->NodeID).C == 0 &&
                  (__return_storage_ptr__->NodeID).A == 0) &&
                 (__return_storage_ptr__->NodeID).B == 0) && (__return_storage_ptr__->NodeID).D == 0
      ;
      goto LAB_14b3644ec;
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      local_res10[0] = Default;
      ::LexToString((FString *)&local_c8,local_res10);
      FMetasoundFrontendClassName::ToString(param_1,(FString *)&local_d8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      FVar9.Data = local_c8.Data;
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
        FVar9.Data = local_c8.Data;
      }
      goto LAB_14b36440c;
    }
  }
  *param_2 = Failed;
LAB_14b3644ec:
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_68,(int)local_60);
  if (local_68 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_68);
  }
  return __return_storage_ptr__;
}

// AddNodeByClassName @ 14b364550

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::AddNodeByClassName
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,
          FMetasoundFrontendClassName *param_1,int param_2,EMetaSoundBuilderResult *param_3)

{
  AddNodeByClassName(this,__return_storage_ptr__,param_1,param_3,param_2);
  return __return_storage_ptr__;
}

// AddTransactionListener @ 14b365370

void __thiscall
UMetaSoundBuilderBase::AddTransactionListener
          (UMetaSoundBuilderBase *this,
          TSharedRef<Metasound::Frontend::IDocumentBuilderTransactionListener,1> *param_1)

{
  IDocumentBuilderTransactionListener *pIVar1;
  code *pcVar2;
  FDocumentModifyDelegates *pFVar3;
  
  pIVar1 = param_1->Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 8);
  pFVar3 = FMetaSoundFrontendDocumentBuilder::GetDocumentDelegates(&this->Builder);
  (*pcVar2)(pIVar1,pFVar3);
  TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
  ::AddSP<Metasound::Frontend::IDocumentBuilderTransactionListener,1>
            ((TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
              *)&this->BuilderReloadDelegate,
             (TSharedRef<Metasound::Frontend::IDocumentBuilderTransactionListener,1> *)
             &stack0x00000008,(pmf_3b2951b3 *)param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BeginDestroy @ 14b365fe0

void __thiscall UMetaSoundBuilderBase::BeginDestroy(UMetaSoundBuilderBase *this)

{
  code *pcVar1;
  bool bVar2;
  IDocumentBuilderRegistry *pIVar3;
  FMetasoundFrontendDocument *pFVar4;
  FTopLevelAssetPath *pFVar5;
  
  bVar2 = FMetaSoundFrontendDocumentBuilder::IsValid(&this->Builder);
  if (bVar2) {
    pIVar3 = Metasound::Frontend::IDocumentBuilderRegistry::Get();
    if (pIVar3 != (IDocumentBuilderRegistry *)0x0) {
      pFVar4 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x20);
      pFVar5 = FMetaSoundFrontendDocumentBuilder::GetHintPath(&this->Builder);
      (*pcVar1)(pIVar3,&(pFVar4->RootGraph)._padding_,pFVar5,0);
    }
    FMetaSoundFrontendDocumentBuilder::FinishBuilding(&this->Builder);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Build @ 14b366650

TScriptInterface<IMetaSoundDocumentInterface> * __thiscall
UMetaSoundBuilderBase::Build
          (UMetaSoundBuilderBase *this,
          TScriptInterface<IMetaSoundDocumentInterface> *__return_storage_ptr__,UObject *param_1,
          FMetaSoundBuilderOptions *param_2)

{
  (**(code **)(this->_padding_ + 0x2b8))(this,__return_storage_ptr__,param_2->Name);
  return __return_storage_ptr__;
}

// BuildAndOverwriteMetaSound @ 14b366680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundBuilderBase::BuildAndOverwriteMetaSound
          (UMetaSoundBuilderBase *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined7 in_register_00000081;
  UObject *local_18;
  undefined8 local_10;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 == (longlong *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      return;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x1c0))(plVar1,param_1,CONCAT71(in_register_00000081,param_2));
    if (cVar3 == '\0') {
      local_18 = *(UObject **)param_1;
      pcVar2 = *(code **)(this->_padding_ + 0x2e0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_18);
      }
      local_10 = *(undefined8 *)&param_1->field_0x8;
      (*pcVar2)(this,&local_18,param_2);
    }
    else if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      return;
    }
  }
  return;
}

// BuildAndOverwriteMetaSoundInternal @ 14b366770

void __thiscall
UMetaSoundBuilderBase::BuildAndOverwriteMetaSoundInternal
          (UMetaSoundBuilderBase *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          bool param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundBuilderBase.h"
             ,0x244,L"Pure virtual not implemented (%s)");
  return;
}

// BuildInternal @ 14b366900

void __thiscall
UMetaSoundBuilderBase::BuildInternal
          (UMetaSoundBuilderBase *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          FMetasoundFrontendClassName *param_2)

{
  IDocumentBuilderRegistry *pIVar1;
  FMetasoundFrontendDocument *pFVar2;
  longlong *plVar3;
  UObject *local_88 [2];
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_78;
  FMetaSoundFrontendDocumentBuilder local_68;
  
  if (param_2 != (FMetasoundFrontendClassName *)0x0) {
    pIVar1 = Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_2,0);
  }
  local_88[0] = *(UObject **)param_1;
  local_78.Object = (FDocumentModifyDelegates *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_88[0]);
  }
  local_88[1] = *(UObject **)&param_1->field_0x8;
  FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
            (&local_68,(TScriptInterface<IMetaSoundDocumentInterface> *)local_88,&local_78,false);
  pFVar2 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  FMetaSoundFrontendDocumentBuilder::InitDocument(&local_68,pFVar2,param_2,false);
  if (*(longlong *)param_1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&param_1->field_0x8;
  }
  (**(code **)(*plVar3 + 0x38))();
  FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&local_68);
  return;
}

// BuildNewMetaSound @ 14b3669d0

TScriptInterface<IMetaSoundDocumentInterface> * __thiscall
UMetaSoundBuilderBase::BuildNewMetaSound
          (UMetaSoundBuilderBase *this,
          TScriptInterface<IMetaSoundDocumentInterface> *__return_storage_ptr__,FName param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundBuilderBase.h"
             ,0x216,L"Pure virtual not implemented (%s)");
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// ConformObjectToDocument @ 14b369230

bool __thiscall UMetaSoundBuilderBase::ConformObjectToDocument(UMetaSoundBuilderBase *this)

{
  UObject *this_00;
  undefined1 uVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  this_00 = *(UObject **)&(this->Builder).DocumentInterface;
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(this_00);
    }
    pUVar2 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar2);
                    /* WARNING: Could not recover jumptable at 0x00014b36926f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,*(code **)(*plVar3 + 0x38));
    return (bool)uVar1;
  }
  pFVar4 = GetTypeName<UObject>(&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// ConnectGraphInputToNode @ 14b369570

void __thiscall
UMetaSoundBuilderBase::ConnectGraphInputToNode
          (UMetaSoundBuilderBase *this,FName *param_1,FMetaSoundNodeHandle *param_2,FName *param_3,
          EMetaSoundBuilderResult *param_4)

{
  FMetaSoundBuilderNodeInputHandle local_28;
  
  FindNodeInputByName(this,&local_28,param_2,*param_3,param_4);
  if (*param_4 != Failed) {
    ConnectNodeInputToGraphInput(this,*param_1,&local_28,param_4);
  }
  return;
}

// ConnectNodeInputToGraphInput @ 14b3695d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundBuilderBase::ConnectNodeInputToGraphInput
          (UMetaSoundBuilderBase *this,FName param_1,FMetaSoundBuilderNodeInputHandle *param_2,
          EMetaSoundBuilderResult *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMetasoundFrontendNode *pFVar6;
  uint uVar7;
  EInvalidEdgeReason local_res8 [8];
  FName local_res20;
  FString local_78;
  FString local_68;
  FMetasoundFrontendEdge local_58;
  
  *param_3 = Failed;
  pFVar6 = FMetaSoundFrontendDocumentBuilder::FindGraphInputNode
                     (&this->Builder,param_1,(FGuid *)0x0);
  if (pFVar6 != (FMetasoundFrontendNode *)0x0) {
    iVar2 = (pFVar6->Interface).Outputs.ArrayNum;
    uVar7 = iVar2 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar2) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_58.FromNodeID.A = (pFVar6->ID).A;
    local_58.FromNodeID.B = (pFVar6->ID).B;
    local_58.FromNodeID.C = (pFVar6->ID).C;
    local_58.FromNodeID.D = (pFVar6->ID).D;
    local_58.ToNodeID.A = *(uint *)&param_2->field_0x0;
    local_58.ToNodeID.B = *(uint *)&param_2->field_0x4;
    local_58.ToNodeID.C = *(uint *)&param_2->field_0x8;
    local_58.ToNodeID.D = *(uint *)&param_2->field_0xc;
    pFVar1 = (pFVar6->Interface).Outputs.AllocatorInstance.Data +
             (longlong)(pFVar6->Interface).Outputs.ArrayNum * 0x20 + -0x10;
    local_58.FromVertexID._0_8_ = *(undefined8 *)pFVar1;
    local_58.FromVertexID._8_8_ = *(undefined8 *)(pFVar1 + 8);
    local_58.ToVertexID.A = *(uint *)&param_2->field_0x10;
    local_58.ToVertexID.B = *(uint *)&param_2->field_0x14;
    local_58.ToVertexID.C = *(uint *)&param_2->field_0x18;
    local_58.ToVertexID.D = *(uint *)&param_2->field_0x1c;
    local_res8[0] =
         FMetaSoundFrontendDocumentBuilder::IsValidEdge(&this->Builder,&local_58,(FGuid *)0x0);
    if (local_res8[0] == None) {
      FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
                (&this->Builder,(FGuid *)param_2,(FGuid *)&param_2->field_0x10,(FGuid *)0x0);
      FMetaSoundFrontendDocumentBuilder::AddEdge(&this->Builder,&local_58,(FGuid *)0x0);
      *param_3 = Succeeded;
    }
    else if (2 < (byte)LogMetaSound._0_1_) {
      Metasound::Frontend::LexToString(&local_68,local_res8);
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ConnectNodeInputsToMatchingGraphInterfaceInputs @ 14b369790

TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::ConnectNodeInputsToMatchingGraphInterfaceInputs
          (UMetaSoundBuilderBase *this,
          TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FMetaSoundNodeHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  FScriptContainerElement *pFVar1;
  FGuid *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FMetasoundFrontendVertex *pFVar9;
  TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  bVar7 = FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeInputsToGraphInputs
                    (&this->Builder,&param_1->NodeID,&local_58,true,(FGuid *)0x0);
  iVar6 = local_58.ArrayNum;
  uVar11 = (ulonglong)local_58.ArrayNum;
  *param_2 = !bVar7;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_58.AllocatorInstance.Data + uVar11 * 8;
  FVar12.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendEdge_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar12.Data == pFVar1) break;
    pFVar2 = *(FGuid **)FVar12.Data;
    pFVar9 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                       (&this->Builder,pFVar2,pFVar2 + 1,(FGuid *)0x0);
    if (pFVar9 == (FMetasoundFrontendVertex *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Vertex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                         ,0x1fd,L"Edge connection reported success but vertex not found.");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
    }
    local_48._0_4_ = pFVar2[2].A;
    local_48._4_4_ = pFVar2[2].B;
    uStack_40._0_4_ = pFVar2[2].C;
    uStack_40._4_4_ = pFVar2[2].D;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_38._0_4_ = (pFVar9->VertexID).A;
    local_38._4_4_ = (pFVar9->VertexID).B;
    uStack_30._0_4_ = (pFVar9->VertexID).C;
    uStack_30._4_4_ = (pFVar9->VertexID).D;
    if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x420,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    FVar12.Data = FVar12.Data + 8;
    pFVar3 = pFVar4 + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar3 = local_48;
    *(undefined8 *)(pFVar3 + 8) = uStack_40;
    pFVar4 = pFVar4 + (longlong)iVar8 * 0x20 + 0x10;
    *(undefined8 *)pFVar4 = local_38;
    *(undefined8 *)(pFVar4 + 8) = uStack_30;
    uVar11 = local_58._8_8_ & 0xffffffff;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConnectNodeOutputToGraphOutput @ 14b3699a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundBuilderBase::ConnectNodeOutputToGraphOutput
          (UMetaSoundBuilderBase *this,FName param_1,FMetaSoundBuilderNodeOutputHandle *param_2,
          EMetaSoundBuilderResult *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMetasoundFrontendNode *pFVar6;
  uint uVar7;
  EInvalidEdgeReason local_res8 [8];
  FName local_res20;
  FString local_78;
  FString local_68;
  FMetasoundFrontendEdge local_58;
  
  *param_3 = Failed;
  pFVar6 = FMetaSoundFrontendDocumentBuilder::FindGraphOutputNode
                     (&this->Builder,param_1,(FGuid *)0x0);
  if (pFVar6 != (FMetasoundFrontendNode *)0x0) {
    iVar1 = (pFVar6->Interface).Inputs.ArrayNum;
    uVar7 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_58.FromNodeID.A = *(uint *)&param_2->field_0x0;
    local_58.FromNodeID.B = *(uint *)&param_2->field_0x4;
    local_58.FromNodeID.C = *(uint *)&param_2->field_0x8;
    local_58.FromNodeID.D = *(uint *)&param_2->field_0xc;
    local_58.FromVertexID.A = *(uint *)&param_2->field_0x10;
    local_58.FromVertexID.B = *(uint *)&param_2->field_0x14;
    local_58.FromVertexID.C = *(uint *)&param_2->field_0x18;
    local_58.FromVertexID.D = *(uint *)&param_2->field_0x1c;
    iVar1 = (pFVar6->Interface).Inputs.ArrayNum;
    local_58.ToNodeID.A = (pFVar6->ID).A;
    local_58.ToNodeID.B = (pFVar6->ID).B;
    local_58.ToNodeID.C = (pFVar6->ID).C;
    local_58.ToNodeID.D = (pFVar6->ID).D;
    pFVar2 = (pFVar6->Interface).Inputs.AllocatorInstance.Data;
    local_58.ToVertexID._0_8_ = *(undefined8 *)(pFVar2 + (longlong)iVar1 * 0x20 + -0x10);
    local_58.ToVertexID._8_8_ = *(undefined8 *)(pFVar2 + (longlong)iVar1 * 0x20 + -8);
    local_res8[0] =
         FMetaSoundFrontendDocumentBuilder::IsValidEdge(&this->Builder,&local_58,(FGuid *)0x0);
    if (local_res8[0] == None) {
      FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
                (&this->Builder,&pFVar6->ID,(FGuid *)(pFVar2 + (longlong)iVar1 * 0x20 + -0x10),
                 (FGuid *)0x0);
      FMetaSoundFrontendDocumentBuilder::AddEdge(&this->Builder,&local_58,(FGuid *)0x0);
      *param_3 = Succeeded;
    }
    else if (2 < (byte)LogMetaSound._0_1_) {
      Metasound::Frontend::LexToString(&local_68,local_res8);
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ConnectNodeOutputsToMatchingGraphInterfaceOutputs @ 14b369b60

TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::ConnectNodeOutputsToMatchingGraphInterfaceOutputs
          (UMetaSoundBuilderBase *this,
          TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FMetaSoundNodeHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  FGuid *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FMetasoundFrontendVertex *pFVar10;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  bVar8 = FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeOutputsToGraphOutputs
                    (&this->Builder,&param_1->NodeID,&local_58,true,(FGuid *)0x0);
  iVar7 = local_58.ArrayNum;
  uVar12 = (ulonglong)local_58.ArrayNum;
  *param_2 = !bVar8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar2 = local_58.AllocatorInstance.Data + uVar12 * 8;
  FVar13.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar12 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendEdge_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar13.Data == pFVar2) break;
    lVar3 = *(longlong *)FVar13.Data;
    pFVar1 = (FGuid *)(lVar3 + 0x20);
    pFVar10 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                        (&this->Builder,pFVar1,(FGuid *)(lVar3 + 0x30),(FGuid *)0x0);
    if (pFVar10 == (FMetasoundFrontendVertex *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Vertex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                         ,0x1ec,L"Edge connection reported success but vertex not found.");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *)
                  (*pcVar6)();
        return pTVar11;
      }
    }
    local_48._0_4_ = pFVar1->A;
    local_48._4_4_ = pFVar1->B;
    uStack_40 = *(undefined8 *)(lVar3 + 0x28);
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_38._0_4_ = (pFVar10->VertexID).A;
    local_38._4_4_ = (pFVar10->VertexID).B;
    uStack_30._0_4_ = (pFVar10->VertexID).C;
    uStack_30._4_4_ = (pFVar10->VertexID).D;
    if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *)
                  (*pcVar6)();
        return pTVar11;
      }
    }
    iVar9 = __return_storage_ptr__->ArrayNum;
    if (iVar9 == __return_storage_ptr__->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x420,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar9 + 1;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    FVar13.Data = FVar13.Data + 8;
    pFVar4 = pFVar5 + (longlong)iVar9 * 0x20;
    *(undefined8 *)pFVar4 = local_48;
    *(undefined8 *)(pFVar4 + 8) = uStack_40;
    pFVar5 = pFVar5 + (longlong)iVar9 * 0x20 + 0x10;
    *(undefined8 *)pFVar5 = local_38;
    *(undefined8 *)(pFVar5 + 8) = uStack_30;
    uVar12 = local_58._8_8_ & 0xffffffff;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConnectNodeToGraphOutput @ 14b369d70

void __thiscall
UMetaSoundBuilderBase::ConnectNodeToGraphOutput
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *param_1,FName *param_2,FName *param_3,
          EMetaSoundBuilderResult *param_4)

{
  FMetaSoundBuilderNodeOutputHandle local_28;
  
  FindNodeOutputByName(this,&local_28,param_1,*param_2,param_4);
  if (*param_4 == Succeeded) {
    ConnectNodeOutputToGraphOutput(this,*param_3,&local_28,param_4);
  }
  return;
}

// ConnectNodeToGraphOutput @ 14b369dd0

void __thiscall
UMetaSoundBuilderBase::ConnectNodeToGraphOutput
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *param_1,FName *param_2,
          FMetaSoundBuilderNodeInputHandle *param_3,EMetaSoundBuilderResult *param_4)

{
  FMetaSoundBuilderNodeOutputHandle local_28;
  
  FindNodeOutputByName(this,&local_28,param_1,*param_2,param_4);
  if (*param_4 == Succeeded) {
    ConnectNodes(this,&local_28,param_3,param_4);
  }
  return;
}

// ConnectNodes @ 14b369e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundBuilderBase::ConnectNodes
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *param_1,
          FMetaSoundBuilderNodeInputHandle *param_2,EMetaSoundBuilderResult *param_3)

{
  FMetaSoundFrontendDocumentBuilder *this_00;
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendVertex *this_01;
  FMetasoundFrontendVertex *this_02;
  FMetasoundFrontendNode *pFVar3;
  FMetasoundFrontendVertex *this_03;
  EInvalidEdgeReason local_res8 [8];
  FMetasoundFrontendNode *local_res10;
  FMetasoundFrontendNode *local_res18;
  EMetaSoundBuilderResult *local_res20;
  FName local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FMetasoundFrontendEdge local_88;
  
  *param_3 = Failed;
  this_00 = &this->Builder;
  local_88.FromNodeID.A = *(uint *)&param_1->field_0x0;
  local_88.FromNodeID.B = *(uint *)&param_1->field_0x4;
  local_88.FromNodeID.C = *(uint *)&param_1->field_0x8;
  local_88.FromNodeID.D = *(uint *)&param_1->field_0xc;
  local_88.ToNodeID.A = *(uint *)&param_2->field_0x0;
  local_88.ToNodeID.B = *(uint *)&param_2->field_0x4;
  local_88.ToNodeID.C = *(uint *)&param_2->field_0x8;
  local_88.ToNodeID.D = *(uint *)&param_2->field_0xc;
  local_88.FromVertexID.A = *(uint *)&param_1->field_0x10;
  local_88.FromVertexID.B = *(uint *)&param_1->field_0x14;
  local_88.FromVertexID.C = *(uint *)&param_1->field_0x18;
  local_88.FromVertexID.D = *(uint *)&param_1->field_0x1c;
  local_88.ToVertexID.A = *(uint *)&param_2->field_0x10;
  local_88.ToVertexID.B = *(uint *)&param_2->field_0x14;
  local_88.ToVertexID.C = *(uint *)&param_2->field_0x18;
  local_88.ToVertexID.D = *(uint *)&param_2->field_0x1c;
  local_res20 = param_3;
  local_res8[0] = FMetaSoundFrontendDocumentBuilder::IsValidEdge(this_00,&local_88,(FGuid *)0x0);
  if (local_res8[0] == None) {
    this_01 = (FMetasoundFrontendVertex *)0x0;
    local_res10 = (FMetasoundFrontendNode *)0x0;
    bVar2 = FMetaSoundFrontendDocumentBuilder::IsNodeInputConnected
                      (this_00,(FGuid *)param_2,(FGuid *)&param_2->field_0x10,(FGuid *)0x0);
    if (bVar2) {
      this_01 = FMetaSoundFrontendDocumentBuilder::FindNodeOutputConnectedToNodeInput
                          (this_00,(FGuid *)param_2,(FGuid *)&param_2->field_0x10,&local_res10,
                           (FGuid *)0x0);
    }
    bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
                      (this_00,(FGuid *)param_2,(FGuid *)&param_2->field_0x10,(FGuid *)0x0);
    FMetaSoundFrontendDocumentBuilder::AddEdge(this_00,&local_88,(FGuid *)0x0);
    if (bVar2) {
      if ((local_res10 == (FMetasoundFrontendNode *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("OldOutputNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                             ,0x1b2,
                             L"MetaSound edge was removed from output but output node not found."),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this_01 == (FMetasoundFrontendVertex *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("OldOutputVertex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                             ,0x1b3,
                             L"MetaSound edge was removed from output but output vertex not found.")
         , bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res18 = FMetaSoundFrontendDocumentBuilder::FindNode
                              (this_00,(FGuid *)param_2,(FGuid *)0x0);
      if ((local_res18 == (FMetasoundFrontendNode *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InputNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                             ,0x1b6,L"Edge was deemed valid but input parent node is missing"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_02 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                          (this_00,(FGuid *)param_2,(FGuid *)&param_2->field_0x10,(FGuid *)0x0);
      if ((this_02 == (FMetasoundFrontendVertex *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InputVertex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                             ,0x1b9,L"Edge was deemed valid but input is missing"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = FMetaSoundFrontendDocumentBuilder::FindNode(this_00,(FGuid *)param_1,(FGuid *)0x0);
      if ((pFVar3 == (FMetasoundFrontendNode *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutputNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                             ,0x1bc,L"Edge was deemed valid but output parent node is missing"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_03 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                          (this_00,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
      if ((this_03 == (FMetasoundFrontendVertex *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutputVertex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                             ,0x1bf,L"Edge was deemed valid but output is missing"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (5 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&this_03->Name,&local_b0);
        ::FName::ToString(&pFVar3->Name,&local_c0);
        ::FName::ToString(&this_02->Name,&local_d0);
        ::FName::ToString(&local_res18->Name,&local_e0);
        ::FName::ToString(&this_01->Name,&local_f0);
        ::FName::ToString(&local_res10->Name,&local_100);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
    }
    *local_res20 = Succeeded;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    Metasound::Frontend::LexToString(&local_a0,local_res8);
    local_118 = (FName)this->_padding_;
    ::FName::ToString(&local_118,&local_110);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ConnectNodes @ 14b36a240

void __thiscall
UMetaSoundBuilderBase::ConnectNodes
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *param_1,FName *param_2,
          FMetaSoundNodeHandle *param_3,FName *param_4,EMetaSoundBuilderResult *param_5)

{
  FMetaSoundBuilderNodeInputHandle local_48;
  FMetaSoundBuilderNodeOutputHandle local_28;
  
  FindNodeOutputByName(this,&local_28,param_1,*param_2,param_5);
  if (*param_5 != Failed) {
    FindNodeInputByName(this,&local_48,param_3,*param_4,param_5);
    if (*param_5 != Failed) {
      ConnectNodes(this,&local_28,&local_48,param_5);
    }
  }
  return;
}

// ConnectNodesByInterfaceBindings @ 14b36a2d0

void __thiscall
UMetaSoundBuilderBase::ConnectNodesByInterfaceBindings
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *param_1,FMetaSoundNodeHandle *param_2,
          EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::AddEdgesByNodeClassInterfaceBindings
                    (&this->Builder,&param_1->NodeID,&param_2->NodeID,true,(FGuid *)0x0);
  *param_3 = !bVar1;
  return;
}

// ContainsNode @ 14b36a3e0

bool __thiscall
UMetaSoundBuilderBase::ContainsNode(UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *param_1)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::ContainsNode
                    (&this->Builder,&param_1->NodeID,(FGuid *)0x0);
  return bVar1;
}

// ContainsNodeInput @ 14b36a400

bool __thiscall
UMetaSoundBuilderBase::ContainsNodeInput
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *param_1)

{
  FMetasoundFrontendVertex *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  return pFVar1 != (FMetasoundFrontendVertex *)0x0;
}

// ContainsNodeOutput @ 14b36a430

bool __thiscall
UMetaSoundBuilderBase::ContainsNodeOutput
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *param_1)

{
  FMetasoundFrontendVertex *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                     (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  return pFVar1 != (FMetasoundFrontendVertex *)0x0;
}

// ConvertFromPreset @ 14b36a490

void __thiscall
UMetaSoundBuilderBase::ConvertFromPreset
          (UMetaSoundBuilderBase *this,EMetaSoundBuilderResult *param_1)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::ConvertFromPreset(&this->Builder);
  *param_1 = !bVar1;
  return;
}

// ConvertToPreset @ 14b36a4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundBuilderBase::ConvertToPreset
          (UMetaSoundBuilderBase *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          EMetaSoundBuilderResult *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  UObject *this_00;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  UClass *pUVar7;
  IMetasoundUObjectRegistry *pIVar8;
  longlong *plVar9;
  TArrayView<FGuid_const_,int> *pTVar10;
  FMetasoundFrontendDocument *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FDocumentModifyDelegates *pFVar13;
  atomic<int> *paVar14;
  TReferenceControllerBase<1> *pTVar15;
  FName local_res10;
  FName local_res20;
  undefined4 local_108 [2];
  FGuid *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  FString local_f0;
  FString local_e0;
  UObject *local_d0;
  void *local_c8;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_c0;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_b0;
  TArrayView<FGuid_const_,int> local_a0;
  FMetaSoundFrontendDocumentBuilder local_88;
  
  if ((*(longlong *)param_1 == 0) ||
     (plVar3 = *(longlong **)&param_1->field_0x8, plVar3 == (longlong *)0x0)) goto LAB_14b36a7f0;
  lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
  if (lVar6 == 0) {
LAB_14b36a57e:
    lVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
    this_00 = *(UObject **)param_1;
    if (this_00 != (UObject *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        pIVar8 = Metasound::IMetasoundUObjectRegistry::Get();
        plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x50))(pIVar8,this_00);
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        if (plVar9 != (longlong *)0x0) {
          local_108[0] = 0x10101;
          local_100 = (FGuid *)0x0;
          iStack_f8 = 0;
          pTVar10 = UMetaSoundSettings::GetPageOrder(&local_a0);
          local_100 = pTVar10->DataPtr;
          iStack_f8 = pTVar10->ArrayNum;
          uStack_f4 = *(undefined4 *)&pTVar10->field_0xc;
          (**(code **)(*plVar9 + 0x18))(plVar9,local_108);
        }
        local_b0.Object = (FDocumentModifyDelegates *)0x0;
        local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(this_00);
        }
        local_d0 = this_00;
        pUVar7 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
        local_c8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar7);
        FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
                  (&local_88,(TScriptInterface<IMetaSoundDocumentInterface> *)&local_d0,&local_b0,
                   false);
        pFVar11 = (FMetasoundFrontendDocument *)(**(code **)(*plVar3 + 0x18))(plVar3);
        pTVar12 = ::operator_new(0x2f0);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          pFVar13 = (FDocumentModifyDelegates *)&DAT_00000010;
        }
        else {
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
          ;
          Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
                    ((FDocumentModifyDelegates *)(pTVar12 + 1),pFVar11);
          pFVar13 = (FDocumentModifyDelegates *)(pTVar12 + 1);
          pTVar15 = pTVar12;
          if (pFVar13 == (FDocumentModifyDelegates *)0x0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            goto LAB_14b36a744;
          }
        }
        if (((pFVar13->_padding_ == 0) || (*(longlong *)&pFVar13->_padding_ == 0)) ||
           (*(int *)(*(longlong *)&pFVar13->_padding_ + 8) < 1)) {
          paVar14 = (atomic<int> *)&pFVar13->_padding_;
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar13->_padding_ = (longlong)pFVar13;
          if (pTVar15 != *(TReferenceControllerBase<1> **)paVar14) {
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar3 = *(longlong **)paVar14;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            *(TReferenceControllerBase<1> **)paVar14 = pTVar15;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
        }
LAB_14b36a744:
        (**(code **)(this->_padding_ + 0x2e8))(this,pFVar13);
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_c0.Object = pFVar13;
        local_c0.SharedReferenceCount.ReferenceController = pTVar15;
        bVar5 = FMetaSoundFrontendDocumentBuilder::ConvertToPreset
                          (&this->Builder,&local_88,&local_c0);
        (**(code **)(this->_padding_ + 0x2c0))(this);
        *param_2 = !bVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&local_88);
        return;
      }
    }
    if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14b36a7f0;
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_e0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    local_f0.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
  }
  else {
    pUVar7 = Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) goto LAB_14b36a57e;
    if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14b36a7f0;
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_f0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
LAB_14b36a7f0:
  *param_2 = Failed;
  return;
}

// CreateTransientBuilder @ 14b38ea60

void __thiscall UMetaSoundBuilderBase::CreateTransientBuilder(UMetaSoundBuilderBase *this)

{
  return;
}

// CreateTransientDocumentObject @ 14b38ea70

UMetaSoundBuilderDocument * __thiscall
UMetaSoundBuilderBase::CreateTransientDocumentObject(UMetaSoundBuilderBase *this)

{
  UClass *pUVar1;
  UMetaSoundBuilderDocument *pUVar2;
  
  pUVar1 = (UClass *)(**(code **)(this->_padding_ + 0x2c8))();
  pUVar2 = UMetaSoundBuilderDocument::Create(pUVar1);
  return pUVar2;
}

// DisconnectNodeInput @ 14b398890

void __thiscall
UMetaSoundBuilderBase::DisconnectNodeInput
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *param_1,
          EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
                    (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  *param_2 = !bVar1;
  return;
}

// DisconnectNodeOutput @ 14b3988c0

void __thiscall
UMetaSoundBuilderBase::DisconnectNodeOutput
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *param_1,
          EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput
                    (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  *param_2 = !bVar1;
  return;
}

// DisconnectNodes @ 14b3988f0

void __thiscall
UMetaSoundBuilderBase::DisconnectNodes
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *param_1,
          FMetaSoundBuilderNodeInputHandle *param_2,EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  FMetasoundFrontendEdge local_48;
  
  local_48.FromNodeID.A = *(uint *)&param_1->field_0x0;
  local_48.FromNodeID.B = *(uint *)&param_1->field_0x4;
  local_48.FromNodeID.C = *(uint *)&param_1->field_0x8;
  local_48.FromNodeID.D = *(uint *)&param_1->field_0xc;
  local_48.FromVertexID.A = *(uint *)&param_1->field_0x10;
  local_48.FromVertexID.B = *(uint *)&param_1->field_0x14;
  local_48.FromVertexID.C = *(uint *)&param_1->field_0x18;
  local_48.FromVertexID.D = *(uint *)&param_1->field_0x1c;
  local_48.ToNodeID.A = *(uint *)&param_2->field_0x0;
  local_48.ToNodeID.B = *(uint *)&param_2->field_0x4;
  local_48.ToNodeID.C = *(uint *)&param_2->field_0x8;
  local_48.ToNodeID.D = *(uint *)&param_2->field_0xc;
  local_48.ToVertexID.A = *(uint *)&param_2->field_0x10;
  local_48.ToVertexID.B = *(uint *)&param_2->field_0x14;
  local_48.ToVertexID.C = *(uint *)&param_2->field_0x18;
  local_48.ToVertexID.D = *(uint *)&param_2->field_0x1c;
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveEdge(&this->Builder,&local_48,(FGuid *)0x0);
  *param_3 = !bVar1;
  return;
}

// DisconnectNodesByInterfaceBindings @ 14b398940

void __thiscall
UMetaSoundBuilderBase::DisconnectNodesByInterfaceBindings
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *param_1,FMetaSoundNodeHandle *param_2,
          EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveEdgesByNodeClassInterfaceBindings
                    (&this->Builder,&param_1->NodeID,&param_2->NodeID,(FGuid *)0x0);
  *param_3 = !bVar1;
  return;
}

// FindGraphInputNode @ 14b3a7610

/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::FindGraphInputNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,FName param_1,
          FName *param_2,FMetaSoundBuilderNodeOutputHandle *param_3,EMetaSoundBuilderResult *param_4
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FMetasoundFrontendNode *pFVar8;
  FMetasoundFrontendClassInput *pFVar9;
  FMetaSoundNodeHandle *pFVar10;
  FName local_res8;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  local_res18 = param_1;
  pFVar8 = FMetaSoundFrontendDocumentBuilder::FindGraphInputNode
                     (&this->Builder,param_1,(FGuid *)0x0);
  pFVar9 = FMetaSoundFrontendDocumentBuilder::FindGraphInput(&this->Builder,local_res18);
  if ((pFVar8 == (FMetasoundFrontendNode *)0x0) || (pFVar9 == (FMetasoundFrontendClassInput *)0x0))
  {
    if (3 < (byte)LogMetaSound._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      ::FName::ToString(&local_res18,&local_28);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    *param_4 = Failed;
    (__return_storage_ptr__->NodeID).A = 0;
    (__return_storage_ptr__->NodeID).B = 0;
    (__return_storage_ptr__->NodeID).C = 0;
    (__return_storage_ptr__->NodeID).D = 0;
  }
  else {
    *param_4 = Succeeded;
    uVar6 = *(undefined4 *)((longlong)&pFVar9->_padding_ + 4);
    param_2->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pFVar9->_padding_;
    param_2->Number = uVar6;
    if (((pFVar8->Interface).Outputs.ArrayNum == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GraphInputNode->Interface.Outputs.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                           ,0x366,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FMetaSoundNodeHandle *)(*pcVar2)();
      return pFVar10;
    }
    if (((pFVar8->Interface).Outputs.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FMetaSoundNodeHandle *)(*pcVar2)();
      return pFVar10;
    }
    pFVar1 = (pFVar8->Interface).Outputs.AllocatorInstance.Data;
    uVar3._0_4_ = (pFVar8->ID).A;
    uVar3._4_4_ = (pFVar8->ID).B;
    uVar4._0_4_ = (pFVar8->ID).C;
    uVar4._4_4_ = (pFVar8->ID).D;
    *(undefined8 *)param_3 = uVar3;
    *(undefined8 *)&param_3->field_0x8 = uVar4;
    uVar5 = *(undefined8 *)(pFVar1 + 0x18);
    *(undefined8 *)&param_3->field_0x10 = *(undefined8 *)(pFVar1 + 0x10);
    *(undefined8 *)&param_3->field_0x18 = uVar5;
    (__return_storage_ptr__->NodeID).A = (undefined4)uVar3;
    (__return_storage_ptr__->NodeID).B = uVar3._4_4_;
    (__return_storage_ptr__->NodeID).C = (undefined4)uVar4;
    (__return_storage_ptr__->NodeID).D = uVar4._4_4_;
  }
  return __return_storage_ptr__;
}

// FindGraphInputNode @ 14b3a77c0

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::FindGraphInputNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,FName param_1,
          EMetaSoundBuilderResult *param_2)

{
  FName local_res10 [3];
  FMetaSoundBuilderNodeOutputHandle local_28;
  
  FindGraphInputNode(this,__return_storage_ptr__,param_1,local_res10,&local_28,param_2);
  return __return_storage_ptr__;
}

// FindGraphOutputNode @ 14b3a7800

/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::FindGraphOutputNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,FName param_1,
          FName *param_2,FMetaSoundBuilderNodeInputHandle *param_3,EMetaSoundBuilderResult *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FMetasoundFrontendNode *pFVar8;
  FMetasoundFrontendClassOutput *pFVar9;
  FMetaSoundNodeHandle *pFVar10;
  FName local_res8;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  local_res18 = param_1;
  pFVar8 = FMetaSoundFrontendDocumentBuilder::FindGraphOutputNode
                     (&this->Builder,param_1,(FGuid *)0x0);
  pFVar9 = FMetaSoundFrontendDocumentBuilder::FindGraphOutput(&this->Builder,local_res18);
  if ((pFVar8 == (FMetasoundFrontendNode *)0x0) || (pFVar9 == (FMetasoundFrontendClassOutput *)0x0))
  {
    if (3 < (byte)LogMetaSound._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      ::FName::ToString(&local_res18,&local_28);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    *param_4 = Failed;
    (__return_storage_ptr__->NodeID).A = 0;
    (__return_storage_ptr__->NodeID).B = 0;
    (__return_storage_ptr__->NodeID).C = 0;
    (__return_storage_ptr__->NodeID).D = 0;
  }
  else {
    *param_4 = Succeeded;
    uVar6 = *(undefined4 *)&pFVar9->field_0xc;
    param_2->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pFVar9->field_0x8;
    param_2->Number = uVar6;
    if (((pFVar8->Interface).Inputs.ArrayNum == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GraphOutputNode->Interface.Inputs.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                           ,0x37c,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FMetaSoundNodeHandle *)(*pcVar2)();
      return pFVar10;
    }
    if (((pFVar8->Interface).Inputs.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FMetaSoundNodeHandle *)(*pcVar2)();
      return pFVar10;
    }
    pFVar1 = (pFVar8->Interface).Inputs.AllocatorInstance.Data;
    uVar3._0_4_ = (pFVar8->ID).A;
    uVar3._4_4_ = (pFVar8->ID).B;
    uVar4._0_4_ = (pFVar8->ID).C;
    uVar4._4_4_ = (pFVar8->ID).D;
    *(undefined8 *)param_3 = uVar3;
    *(undefined8 *)&param_3->field_0x8 = uVar4;
    uVar5 = *(undefined8 *)(pFVar1 + 0x18);
    *(undefined8 *)&param_3->field_0x10 = *(undefined8 *)(pFVar1 + 0x10);
    *(undefined8 *)&param_3->field_0x18 = uVar5;
    (__return_storage_ptr__->NodeID).A = (undefined4)uVar3;
    (__return_storage_ptr__->NodeID).B = uVar3._4_4_;
    (__return_storage_ptr__->NodeID).C = (undefined4)uVar4;
    (__return_storage_ptr__->NodeID).D = uVar4._4_4_;
  }
  return __return_storage_ptr__;
}

// FindGraphOutputNode @ 14b3a79b0

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::FindGraphOutputNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,FName param_1,
          EMetaSoundBuilderResult *param_2)

{
  FName local_res10 [3];
  FMetaSoundBuilderNodeInputHandle local_28;
  
  FindGraphOutputNode(this,__return_storage_ptr__,param_1,local_res10,&local_28,param_2);
  return __return_storage_ptr__;
}

// FindInterfaceInputNodes @ 14b3a79f0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::FindInterfaceInputNodes
          (UMetaSoundBuilderBase *this,
          TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1,EMetaSoundBuilderResult *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  EMetaSoundBuilderResult EVar7;
  int iVar8;
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  EMetaSoundBuilderResult *local_res20;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_res18 = param_1;
  local_res20 = param_2;
  bVar6 = FMetaSoundFrontendDocumentBuilder::FindInterfaceInputNodes
                    (&this->Builder,param_1,&local_88,(FGuid *)0x0);
  if (bVar6) {
    iVar5 = local_88.ArrayNum;
    uVar10 = (ulonglong)local_88.ArrayNum;
    pFVar1 = local_88.AllocatorInstance.Data + uVar10 * 8;
    FVar11.Data = local_88.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendNode_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar11.Data == pFVar1) break;
      puVar2 = *(undefined8 **)FVar11.Data;
      if ((puVar2 == (undefined8 *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                             ,0x331,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      local_78 = *puVar2;
      uStack_70 = puVar2[1];
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      FVar11.Data = FVar11.Data + 8;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar3 = local_78;
      *(undefined8 *)(pFVar3 + 8) = uStack_70;
      uVar10 = local_88._8_8_ & 0xffffffff;
    }
    EVar7 = Succeeded;
  }
  else {
    if (3 < (byte)LogMetaSound._0_1_) {
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_68);
      ::FName::ToString(&local_res18,&local_58);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    EVar7 = Failed;
  }
  *local_res20 = EVar7;
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindInterfaceOutputNodes @ 14b3a7c50

TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::FindInterfaceOutputNodes
          (UMetaSoundBuilderBase *this,
          TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1,EMetaSoundBuilderResult *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  EMetaSoundBuilderResult EVar7;
  int iVar8;
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar6 = FMetaSoundFrontendDocumentBuilder::FindInterfaceOutputNodes
                    (&this->Builder,param_1,&local_48,(FGuid *)0x0);
  if (bVar6) {
    iVar5 = local_48.ArrayNum;
    uVar10 = (ulonglong)local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + uVar10 * 8;
    FVar11.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendNode_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar11.Data == pFVar1) break;
      puVar2 = *(undefined8 **)FVar11.Data;
      if (puVar2 == (undefined8 *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                           ,0x348,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 <
          pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      FVar11.Data = FVar11.Data + 8;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar3 = local_38;
      *(undefined8 *)(pFVar3 + 8) = uStack_30;
      uVar10 = local_48._8_8_ & 0xffffffff;
    }
    EVar7 = Succeeded;
  }
  else {
    EVar7 = Failed;
  }
  *param_2 = EVar7;
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindNodeClassVersion @ 14b3a7eb0

FMetasoundFrontendVersion * __thiscall
UMetaSoundBuilderBase::FindNodeClassVersion
          (UMetaSoundBuilderBase *this,FMetasoundFrontendVersion *__return_storage_ptr__,
          FMetaSoundNodeHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  FMetasoundFrontendVersionNumber FVar1;
  FMetasoundFrontendNode *pFVar2;
  FMetasoundFrontendClass *pFVar3;
  FMetasoundFrontendVersionNumber *pFVar4;
  FMetasoundFrontendVersion *pFVar5;
  
  pFVar2 = FMetaSoundFrontendDocumentBuilder::FindNode(&this->Builder,&param_1->NodeID,(FGuid *)0x0)
  ;
  if (pFVar2 != (FMetasoundFrontendNode *)0x0) {
    pFVar3 = FMetaSoundFrontendDocumentBuilder::FindDependency(&this->Builder,&pFVar2->ClassID);
    if (pFVar3 != (FMetasoundFrontendClass *)0x0) {
      *param_2 = Succeeded;
      FMetasoundFrontendClassName::GetFullName(&(pFVar3->Metadata).ClassName);
      pFVar4 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar3->Metadata);
      __return_storage_ptr__->Number = *pFVar4;
      return __return_storage_ptr__;
    }
  }
  *param_2 = Failed;
  pFVar5 = FMetasoundFrontendVersion::GetInvalid();
  FVar1 = pFVar5->Number;
  __return_storage_ptr__->Name = pFVar5->Name;
  __return_storage_ptr__->Number = FVar1;
  return __return_storage_ptr__;
}

// FindNodeInputByName @ 14b3a7f50

/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundBuilderNodeInputHandle * __thiscall
UMetaSoundBuilderBase::FindNodeInputByName
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *__return_storage_ptr__,
          FMetaSoundNodeHandle *param_1,FName param_2,EMetaSoundBuilderResult *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FNameEntryId FVar5;
  FMetasoundFrontendNode *pFVar6;
  FMetasoundFrontendClass *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  FName *pFVar11;
  FName local_res8;
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res20 = param_2;
  pFVar6 = FMetaSoundFrontendDocumentBuilder::FindNode(&this->Builder,&param_1->NodeID,(FGuid *)0x0)
  ;
  if (pFVar6 == (FMetasoundFrontendNode *)0x0) {
    if ((byte)LogMetaSound._0_1_ < 4) goto LAB_14b3a81a9;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->NodeID,&local_58,Digits);
    ::FName::ToString(&local_res20,&local_38);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar10.Data = local_58.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar9 = (FName *)(pFVar6->Interface).Inputs.AllocatorInstance.Data;
    pFVar11 = pFVar9 + (longlong)(pFVar6->Interface).Inputs.ArrayNum * 4;
    for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 4) {
      if (*pFVar9 == local_res20) {
        *param_3 = Succeeded;
        uVar1 = (pFVar6->ID).A;
        uVar2 = (pFVar6->ID).B;
        uVar3 = (pFVar6->ID).C;
        uVar4 = (pFVar6->ID).D;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
        *(uint *)&__return_storage_ptr__->field_0x0 = uVar1;
        *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
        *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
        *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
        uVar1 = pFVar9[2].Number;
        FVar5.Value = pFVar9[3].ComparisonIndex.Value;
        uVar2 = pFVar9[3].Number;
        *(uint *)&__return_storage_ptr__->field_0x10 = pFVar9[2].ComparisonIndex.Value;
        *(uint *)&__return_storage_ptr__->field_0x14 = uVar1;
        *(uint *)&__return_storage_ptr__->field_0x18 = FVar5.Value;
        *(uint *)&__return_storage_ptr__->field_0x1c = uVar2;
        return __return_storage_ptr__;
      }
    }
    ::FString::FString(&local_68,L"N/A");
    pFVar7 = FMetaSoundFrontendDocumentBuilder::FindDependency(&this->Builder,&pFVar6->ClassID);
    if (pFVar7 != (FMetasoundFrontendClass *)0x0) {
      pFVar8 = FMetasoundFrontendClassName::ToString(&(pFVar7->Metadata).ClassName,&local_48);
      if (&local_68 != pFVar8) {
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_68.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_68.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = local_68.Data.AllocatorInstance.Data;
    if (3 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_res20,&local_48);
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_58);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        FVar10.Data = local_68.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
LAB_14b3a81a9:
  *param_3 = Failed;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  return __return_storage_ptr__;
}

// FindNodeInputParent @ 14b3a81f0

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::FindNodeInputParent
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,
          FMetaSoundBuilderNodeInputHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  bVar4 = FMetaSoundFrontendDocumentBuilder::ContainsNode
                    (&this->Builder,(FGuid *)param_1,(FGuid *)0x0);
  if (bVar4) {
    *param_2 = Succeeded;
    uVar1 = *(undefined4 *)&param_1->field_0x4;
    uVar2 = *(undefined4 *)&param_1->field_0x8;
    uVar3 = *(undefined4 *)&param_1->field_0xc;
    (__return_storage_ptr__->NodeID).A = *(undefined4 *)&param_1->field_0x0;
    (__return_storage_ptr__->NodeID).B = uVar1;
    (__return_storage_ptr__->NodeID).C = uVar2;
    (__return_storage_ptr__->NodeID).D = uVar3;
    return __return_storage_ptr__;
  }
  *param_2 = Failed;
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  return __return_storage_ptr__;
}

// FindNodeInputs @ 14b3a8260

TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::FindNodeInputs
          (UMetaSoundBuilderBase *this,
          TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FMetaSoundNodeHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  FindNodeInputsByDataType(this,__return_storage_ptr__,param_1,param_2,(FName)0x0);
  return __return_storage_ptr__;
}

// FindNodeInputsByDataType @ 14b3a8290

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::FindNodeInputsByDataType
          (UMetaSoundBuilderBase *this,
          TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FMetaSoundNodeHandle *param_1,EMetaSoundBuilderResult *param_2,
          FName param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_88;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar5 = FMetaSoundFrontendDocumentBuilder::ContainsNode
                    (&this->Builder,&param_1->NodeID,(FGuid *)0x0);
  if (bVar5) {
    FMetaSoundFrontendDocumentBuilder::FindNodeInputs
              (&this->Builder,&local_78,&param_1->NodeID,param_3,(FGuid *)0x0);
    iVar8 = local_78.ArrayNum;
    pFVar1 = local_78.AllocatorInstance.Data + (longlong)iVar8 * 8;
    FVar9.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if (local_78.ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar9.Data == pFVar1) break;
      local_58._0_4_ = (param_1->NodeID).A;
      local_58._4_4_ = (param_1->NodeID).B;
      uStack_50._0_4_ = (param_1->NodeID).C;
      uStack_50._4_4_ = (param_1->NodeID).D;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_48 = *(undefined8 *)(*(longlong *)FVar9.Data + 0x10);
      uStack_40 = *(undefined8 *)(*(longlong *)FVar9.Data + 0x18);
      if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
        ;
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x420,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      FVar9.Data = FVar9.Data + 8;
      pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
      *(undefined8 *)pFVar2 = local_58;
      *(undefined8 *)(pFVar2 + 8) = uStack_50;
      pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
      *(undefined8 *)pFVar3 = local_48;
      *(undefined8 *)(pFVar3 + 8) = uStack_40;
    }
    *param_2 = Succeeded;
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    if (3 < (byte)LogMetaSound._0_1_) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->NodeID,&local_88,Digits);
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_68);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    *param_2 = Failed;
  }
  return __return_storage_ptr__;
}

// FindNodeOutputByName @ 14b3a84c0

/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundBuilderNodeOutputHandle * __thiscall
UMetaSoundBuilderBase::FindNodeOutputByName
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *__return_storage_ptr__,
          FMetaSoundNodeHandle *param_1,FName param_2,EMetaSoundBuilderResult *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FNameEntryId FVar5;
  FMetasoundFrontendNode *pFVar6;
  FMetasoundFrontendClass *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  FName *pFVar11;
  FName local_res8;
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res20 = param_2;
  pFVar6 = FMetaSoundFrontendDocumentBuilder::FindNode(&this->Builder,&param_1->NodeID,(FGuid *)0x0)
  ;
  if (pFVar6 == (FMetasoundFrontendNode *)0x0) {
    if ((byte)LogMetaSound._0_1_ < 4) goto LAB_14b3a8719;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->NodeID,&local_58,Digits);
    ::FName::ToString(&local_res20,&local_38);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar10.Data = local_58.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar9 = (FName *)(pFVar6->Interface).Outputs.AllocatorInstance.Data;
    pFVar11 = pFVar9 + (longlong)(pFVar6->Interface).Outputs.ArrayNum * 4;
    for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 4) {
      if (*pFVar9 == local_res20) {
        *param_3 = Succeeded;
        uVar1 = (pFVar6->ID).A;
        uVar2 = (pFVar6->ID).B;
        uVar3 = (pFVar6->ID).C;
        uVar4 = (pFVar6->ID).D;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
        *(uint *)&__return_storage_ptr__->field_0x0 = uVar1;
        *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
        *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
        *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
        uVar1 = pFVar9[2].Number;
        FVar5.Value = pFVar9[3].ComparisonIndex.Value;
        uVar2 = pFVar9[3].Number;
        *(uint *)&__return_storage_ptr__->field_0x10 = pFVar9[2].ComparisonIndex.Value;
        *(uint *)&__return_storage_ptr__->field_0x14 = uVar1;
        *(uint *)&__return_storage_ptr__->field_0x18 = FVar5.Value;
        *(uint *)&__return_storage_ptr__->field_0x1c = uVar2;
        return __return_storage_ptr__;
      }
    }
    ::FString::FString(&local_68,L"N/A");
    pFVar7 = FMetaSoundFrontendDocumentBuilder::FindDependency(&this->Builder,&pFVar6->ClassID);
    if (pFVar7 != (FMetasoundFrontendClass *)0x0) {
      pFVar8 = FMetasoundFrontendClassName::ToString(&(pFVar7->Metadata).ClassName,&local_48);
      if (&local_68 != pFVar8) {
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_68.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_68.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = local_68.Data.AllocatorInstance.Data;
    if (3 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_res20,&local_48);
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_58);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        FVar10.Data = local_68.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
LAB_14b3a8719:
  *param_3 = Failed;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  return __return_storage_ptr__;
}

// FindNodeOutputParent @ 14b3a8760

FMetaSoundNodeHandle * __thiscall
UMetaSoundBuilderBase::FindNodeOutputParent
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *__return_storage_ptr__,
          FMetaSoundBuilderNodeOutputHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  bVar4 = FMetaSoundFrontendDocumentBuilder::ContainsNode
                    (&this->Builder,(FGuid *)param_1,(FGuid *)0x0);
  if (bVar4) {
    *param_2 = Succeeded;
    uVar1 = *(undefined4 *)&param_1->field_0x4;
    uVar2 = *(undefined4 *)&param_1->field_0x8;
    uVar3 = *(undefined4 *)&param_1->field_0xc;
    (__return_storage_ptr__->NodeID).A = *(undefined4 *)&param_1->field_0x0;
    (__return_storage_ptr__->NodeID).B = uVar1;
    (__return_storage_ptr__->NodeID).C = uVar2;
    (__return_storage_ptr__->NodeID).D = uVar3;
    return __return_storage_ptr__;
  }
  *param_2 = Failed;
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  return __return_storage_ptr__;
}

// FindNodeOutputs @ 14b3a87d0

TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::FindNodeOutputs
          (UMetaSoundBuilderBase *this,
          TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FMetaSoundNodeHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  FindNodeOutputsByDataType(this,__return_storage_ptr__,param_1,param_2,(FName)0x0);
  return __return_storage_ptr__;
}

// FindNodeOutputsByDataType @ 14b3a8800

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::FindNodeOutputsByDataType
          (UMetaSoundBuilderBase *this,
          TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FMetaSoundNodeHandle *param_1,EMetaSoundBuilderResult *param_2,
          FName param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_88;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar5 = FMetaSoundFrontendDocumentBuilder::ContainsNode
                    (&this->Builder,&param_1->NodeID,(FGuid *)0x0);
  if (bVar5) {
    FMetaSoundFrontendDocumentBuilder::FindNodeOutputs
              (&this->Builder,&local_78,&param_1->NodeID,param_3,(FGuid *)0x0);
    iVar8 = local_78.ArrayNum;
    pFVar1 = local_78.AllocatorInstance.Data + (longlong)iVar8 * 8;
    FVar9.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if (local_78.ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar9.Data == pFVar1) break;
      local_58._0_4_ = (param_1->NodeID).A;
      local_58._4_4_ = (param_1->NodeID).B;
      uStack_50._0_4_ = (param_1->NodeID).C;
      uStack_50._4_4_ = (param_1->NodeID).D;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_48 = *(undefined8 *)(*(longlong *)FVar9.Data + 0x10);
      uStack_40 = *(undefined8 *)(*(longlong *)FVar9.Data + 0x18);
      if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x420,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      FVar9.Data = FVar9.Data + 8;
      pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
      *(undefined8 *)pFVar2 = local_58;
      *(undefined8 *)(pFVar2 + 8) = uStack_50;
      pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
      *(undefined8 *)pFVar3 = local_48;
      *(undefined8 *)(pFVar3 + 8) = uStack_40;
    }
    *param_2 = Succeeded;
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    if (3 < (byte)LogMetaSound._0_1_) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->NodeID,&local_88,Digits);
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_68);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    *param_2 = Failed;
  }
  return __return_storage_ptr__;
}

// GetBaseMetaSoundUClass @ 14b3ae110

UClass * __thiscall UMetaSoundBuilderBase::GetBaseMetaSoundUClass(UMetaSoundBuilderBase *this)

{
  UClass *pUVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundBuilderBase.h"
             ,0x21b,L"Pure virtual not implemented (%s)");
  pUVar1 = Z_Construct_UClass_UClass_NoRegister();
  return pUVar1;
}

// GetBuilder @ 14b3ae3b0

FMetaSoundFrontendDocumentBuilder * __thiscall
UMetaSoundBuilderBase::GetBuilder(UMetaSoundBuilderBase *this)

{
  return &this->Builder;
}

// GetBuilderDelegates @ 14b3ae3c0

FDocumentModifyDelegates * __thiscall
UMetaSoundBuilderBase::GetBuilderDelegates(UMetaSoundBuilderBase *this)

{
  FDocumentModifyDelegates *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::GetDocumentDelegates(&this->Builder);
  return pFVar1;
}

// GetBuilderUClass @ 14b3ae3d0

UClass * __thiscall UMetaSoundBuilderBase::GetBuilderUClass(UMetaSoundBuilderBase *this)

{
  UClass *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014b3ae3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UClass *)(**(code **)(this->_padding_ + 0x2c8))();
  return pUVar1;
}

// GetConstBuilder @ 14b3ae8e0

FMetaSoundFrontendDocumentBuilder * __thiscall
UMetaSoundBuilderBase::GetConstBuilder(UMetaSoundBuilderBase *this)

{
  return &this->Builder;
}

// GetGraphInputDefault @ 14b3b4710

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderBase::GetGraphInputDefault
          (UMetaSoundBuilderBase *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          FName param_1,EMetaSoundBuilderResult *param_2)

{
  FMetasoundFrontendLiteral *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::GetGraphInputDefault
                     (&this->Builder,param_1,(FGuid *)0x0);
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    *param_2 = Succeeded;
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  *param_2 = Failed;
  *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->field_0x3 = 0;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGraphInputNames @ 14b3b47a0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::GetGraphInputNames
          (UMetaSoundBuilderBase *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EMetaSoundBuilderResult *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  FMetasoundFrontendDocument *pFVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  pFVar6 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar5->RootGraph);
  iVar2 = (pFVar6->Inputs).ArrayNum;
  pFVar7 = (pFVar6->Inputs).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((pFVar6->Inputs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    uVar3 = *(undefined8 *)pFVar7;
    pFVar7 = pFVar7 + 0x48;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = uVar3;
  }
  return __return_storage_ptr__;
}

// GetGraphOutputNames @ 14b3b48e0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundBuilderBase::GetGraphOutputNames
          (UMetaSoundBuilderBase *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EMetaSoundBuilderResult *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  FMetasoundFrontendDocument *pFVar4;
  FMetasoundFrontendClassInterface *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  pFVar5 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar4->RootGraph);
  iVar1 = (pFVar5->Outputs).ArrayNum;
  pFVar6 = (pFVar5->Outputs).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x34;
  while( true ) {
    if ((pFVar5->Outputs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    uVar2 = *(undefined8 *)pFVar6;
    pFVar6 = pFVar6 + 0x34;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 8) = uVar2;
  }
  return __return_storage_ptr__;
}

// GetGraphVariableDefault @ 14b3b49a0

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderBase::GetGraphVariableDefault
          (UMetaSoundBuilderBase *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          FName param_1,EMetaSoundBuilderResult *param_2)

{
  FMetasoundFrontendLiteral *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::GetGraphVariableDefault
                     (&this->Builder,param_1,(FGuid *)0x0);
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    *param_2 = Succeeded;
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  *param_2 = Failed;
  *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->field_0x3 = 0;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLastTransactionRegistered @ 14b3b6770

int __thiscall UMetaSoundBuilderBase::GetLastTransactionRegistered(UMetaSoundBuilderBase *this)

{
  return this->LastTransactionRegistered;
}

// GetNodeInputClassDefault @ 14b3bde60

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderBase::GetNodeInputClassDefault
          (UMetaSoundBuilderBase *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          FMetaSoundBuilderNodeInputHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  FMetasoundFrontendVertex *pFVar1;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar2;
  FMetasoundFrontendClassInputDefault *pFVar3;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  if (((pFVar1 != (FMetasoundFrontendVertex *)0x0) &&
      (pTVar2 = FMetaSoundFrontendDocumentBuilder::FindNodeClassInputDefaults
                          (&this->Builder,(FGuid *)param_1,pFVar1->Name,(FGuid *)0x0),
      pTVar2 != (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (pFVar3 = Metasound::Engine::FindPreferredPage_ThreadSafe<FMetasoundFrontendClassInputDefault>
                         (pTVar2), pFVar3 != (FMetasoundFrontendClassInputDefault *)0x0)) {
    *param_2 = Succeeded;
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(__return_storage_ptr__,&pFVar3->Literal);
    return __return_storage_ptr__;
  }
  *param_2 = Failed;
  *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->field_0x3 = 0;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNodeInputData @ 14b3bdf30

void __thiscall
UMetaSoundBuilderBase::GetNodeInputData
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *param_1,FName *param_2,
          FName *param_3,EMetaSoundBuilderResult *param_4)

{
  FMetasoundFrontendVertex *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  if (pFVar1 != (FMetasoundFrontendVertex *)0x0) {
    *param_2 = pFVar1->Name;
    *param_3 = pFVar1->TypeName;
    *param_4 = Succeeded;
    return;
  }
  param_2->ComparisonIndex = 0;
  param_2->Number = 0;
  param_3->ComparisonIndex = 0;
  param_3->Number = 0;
  *param_4 = Failed;
  return;
}

// GetNodeInputDefault @ 14b3bdfb0

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderBase::GetNodeInputDefault
          (UMetaSoundBuilderBase *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          FMetaSoundBuilderNodeInputHandle *param_1,EMetaSoundBuilderResult *param_2)

{
  FMetasoundFrontendVertexLiteral *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::FindNodeInputDefault
                     (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  if (pFVar1 != (FMetasoundFrontendVertexLiteral *)0x0) {
    *param_2 = Succeeded;
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(__return_storage_ptr__,&pFVar1->Value);
    return __return_storage_ptr__;
  }
  *param_2 = Failed;
  *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->field_0x3 = 0;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNodeInputIsConstructorPin @ 14b3be050

bool __thiscall
UMetaSoundBuilderBase::GetNodeInputIsConstructorPin
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *param_1)

{
  EMetasoundFrontendVertexAccessType EVar1;
  
  EVar1 = FMetaSoundFrontendDocumentBuilder::GetNodeInputAccessType
                    (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  return EVar1 == Value;
}

// GetNodeOutputData @ 14b3be080

void __thiscall
UMetaSoundBuilderBase::GetNodeOutputData
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *param_1,FName *param_2,
          FName *param_3,EMetaSoundBuilderResult *param_4)

{
  FMetasoundFrontendVertex *pFVar1;
  
  pFVar1 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                     (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  if (pFVar1 != (FMetasoundFrontendVertex *)0x0) {
    *param_2 = pFVar1->Name;
    *param_3 = pFVar1->TypeName;
    *param_4 = Succeeded;
    return;
  }
  param_2->ComparisonIndex = 0;
  param_2->Number = 0;
  param_3->ComparisonIndex = 0;
  param_3->Number = 0;
  *param_4 = Failed;
  return;
}

// GetNodeOutputIsConstructorPin @ 14b3be100

bool __thiscall
UMetaSoundBuilderBase::GetNodeOutputIsConstructorPin
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *param_1)

{
  EMetasoundFrontendVertexAccessType EVar1;
  
  EVar1 = FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType
                    (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  return EVar1 == Value;
}

// GetPrivateStaticClass @ 14b3bf130

UClass * __cdecl UMetaSoundBuilderBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundBuilderBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundBuilderBase",
               &Z_Registration_Info_UClass_UMetaSoundBuilderBase.InnerSingleton,
               StaticRegisterNativesUMetaSoundBuilderBase,0xa8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundBuilderBase>,
               InternalVTableHelperCtorCaller<UMetaSoundBuilderBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderBase.InnerSingleton;
}

// GetReferencedPresetAsset @ 14b3bfd90

UObject * __thiscall UMetaSoundBuilderBase::GetReferencedPresetAsset(UMetaSoundBuilderBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FMetasoundAssetBase *pFVar2;
  UObject *pUVar3;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::IsPreset(&this->Builder);
  if (bVar1) {
    pFVar2 = FMetaSoundFrontendDocumentBuilder::GetReferencedPresetAsset(&this->Builder);
    if (pFVar2 != (FMetasoundAssetBase *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00014b3bfdc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar3 = (UObject *)(*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
      return pUVar3;
    }
  }
  return (UObject *)0x0;
}

// GetRootGraphClassName @ 14b3bff40

FMetasoundFrontendClassName * __thiscall
UMetaSoundBuilderBase::GetRootGraphClassName
          (UMetaSoundBuilderBase *this,FMetasoundFrontendClassName *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FMetasoundFrontendDocument *pFVar6;
  
  pFVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  uVar1 = *(undefined4 *)((longlong)&(pFVar6->RootGraph)._padding_ + 4);
  uVar2 = *(undefined4 *)&(pFVar6->RootGraph)._padding_;
  uVar3 = *(undefined4 *)((longlong)&(pFVar6->RootGraph)._padding_ + 4);
  uVar4 = *(undefined4 *)&(pFVar6->RootGraph)._padding_;
  uVar5 = *(undefined4 *)((longlong)&(pFVar6->RootGraph)._padding_ + 4);
  (__return_storage_ptr__->Namespace).ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&(pFVar6->RootGraph)._padding_;
  (__return_storage_ptr__->Namespace).Number = uVar1;
  (__return_storage_ptr__->Name).ComparisonIndex = (FNameEntryId)uVar2;
  (__return_storage_ptr__->Name).Number = uVar3;
  (__return_storage_ptr__->Variant).ComparisonIndex = (FNameEntryId)uVar4;
  (__return_storage_ptr__->Variant).Number = uVar5;
  return __return_storage_ptr__;
}

// InitDelegates @ 14b3c4870

void __thiscall
UMetaSoundBuilderBase::InitDelegates(UMetaSoundBuilderBase *this,FDocumentModifyDelegates *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->BuilderReloadDelegate,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->BuilderReloadDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->BuilderReloadDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->BuilderReloadDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->BuilderReloadDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->BuilderReloadDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->BuilderReloadDelegate,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundBuilderBase>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnDependencyAdded,(UMetaSoundBuilderBase *)&stack0x00000008,
             (pmf_a886c6ad)this);
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundBuilderBase>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &param_1->OnRemoveSwappingDependency,(UMetaSoundBuilderBase *)&stack0x00000010,
             (pmf_b05325b7)this);
  return;
}

// InitNodeLocations @ 14b3c6780

void __thiscall UMetaSoundBuilderBase::InitNodeLocations(UMetaSoundBuilderBase *this)

{
  FMetaSoundFrontendDocumentBuilder::InitNodeLocations(&this->Builder);
  return;
}

// Initialize @ 14b3c7480

void __thiscall
UMetaSoundBuilderBase::Initialize
          (UMetaSoundBuilderBase *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendDocument *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMetaSoundFrontendDocumentBuilder *pFVar8;
  longlong lVar9;
  FDocumentModifyDelegates *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_98;
  UObject *local_88 [2];
  FMetaSoundFrontendDocumentBuilder local_78;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar11;
  if (*(longlong *)param_1 != 0) {
    pTVar7 = *(TReferenceControllerBase<1> **)&param_1->field_0x8;
  }
  pFVar6 = (FMetasoundFrontendDocument *)(**(code **)(pTVar7->_padding_ + 0x18))();
  pTVar7 = ::operator_new(0x2f0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FDocumentModifyDelegates *)&DAT_00000010;
    pTVar7 = pTVar11;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
              ((FDocumentModifyDelegates *)(pTVar7 + 1),pFVar6);
    pFVar10 = (FDocumentModifyDelegates *)(pTVar7 + 1);
    if (pFVar10 == (FDocumentModifyDelegates *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14b3c7597;
    }
  }
  if (((pFVar10->_padding_ == 0) || (*(longlong *)&pFVar10->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar10->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar10->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar10->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar10->_padding_ = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14b3c7597:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88[0] = *(UObject **)param_1;
  local_98.Object = pFVar10;
  local_98.SharedReferenceCount.ReferenceController = pTVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_88[0]);
  }
  local_88[1] = *(UObject **)&param_1->field_0x8;
  pFVar8 = FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
                     (&local_78,(TScriptInterface<IMetaSoundDocumentInterface> *)local_88,&local_98,
                      false);
  FMetaSoundFrontendDocumentBuilder::operator=(&this->Builder,pFVar8);
  FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&local_78);
  if (*(longlong *)param_1 != 0) {
    pTVar11 = *(TReferenceControllerBase<1> **)&param_1->field_0x8;
  }
  lVar9 = (**(code **)(pTVar11->_padding_ + 0x18))(pTVar11);
  bVar5 = FMetasoundFrontendClassName::IsValid((FMetasoundFrontendClassName *)(lVar9 + 0x88));
  if (!bVar5) {
    FMetaSoundFrontendDocumentBuilder::InitDocument
              (&this->Builder,(FMetasoundFrontendDocument *)0x0,(FMetasoundFrontendClassName *)0x0,
               true);
  }
  (**(code **)(this->_padding_ + 0x2e8))(this,pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Initialize @ 14b3c7670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMetaSoundBuilderBase::Initialize(UMetaSoundBuilderBase *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UObject *this_00;
  TReferenceControllerBase<1> *pTVar8;
  FMetasoundFrontendDocument *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FMetaSoundFrontendDocumentBuilder *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  longlong *plVar13;
  FDocumentModifyDelegates *pFVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_130;
  UObject *local_120;
  TReferenceControllerBase<1> *local_118;
  FMetaSoundFrontendDocumentBuilder local_110;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  local_138 = 0;
  pUVar5 = (UClass *)(**(code **)(this->_padding_ + 0x2c8))();
  pUVar6 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UObject_NoRegister();
  CheckIsClassChildOf_Internal(pUVar7,pUVar5);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_Transient|RF_Public;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar6;
  this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UObject *)0x0)) {
    pTVar8 = pTVar12;
    if (this_00 != (UObject *)0x0) goto LAB_14b3c7786;
  }
  else {
    UE::GC::MarkAsReachable(this_00);
LAB_14b3c7786:
    pUVar5 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
    pTVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar5);
  }
  pTVar10 = pTVar8;
  if (this_00 == (UObject *)0x0) {
    pTVar10 = pTVar12;
  }
  pFVar9 = (FMetasoundFrontendDocument *)(**(code **)(pTVar10->_padding_ + 0x18))();
  pTVar10 = ::operator_new(0x2f0);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDocumentModifyDelegates *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
              ((FDocumentModifyDelegates *)(pTVar10 + 1),pFVar9);
    pFVar14 = (FDocumentModifyDelegates *)(pTVar10 + 1);
    pTVar12 = pTVar10;
    if (pFVar14 == (FDocumentModifyDelegates *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14b3c7886;
    }
  }
  if (((pFVar14->_padding_ == 0) || (*(longlong *)&pFVar14->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar14->_padding_ + 8) < 1)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar12 != *(TReferenceControllerBase<1> **)&pFVar14->_padding_) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar13 = *(longlong **)&pFVar14->_padding_;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar14->_padding_ = pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
LAB_14b3c7886:
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_130.Object = pFVar14;
  local_130.SharedReferenceCount.ReferenceController = pTVar12;
  local_120 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(this_00);
  }
  local_118 = pTVar8;
  pFVar11 = FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
                      (&local_110,(TScriptInterface<IMetaSoundDocumentInterface> *)&local_120,
                       &local_130,false);
  FMetaSoundFrontendDocumentBuilder::operator=(&this->Builder,pFVar11);
  FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&local_110);
  FMetaSoundFrontendDocumentBuilder::InitDocument
            (&this->Builder,(FMetasoundFrontendDocument *)0x0,(FMetasoundFrontendClassName *)0x0,
             true);
  (**(code **)(this->_padding_ + 0x2e8))(this,pFVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// InterfaceIsDeclared @ 14b3c7e30

bool __thiscall
UMetaSoundBuilderBase::InterfaceIsDeclared(UMetaSoundBuilderBase *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::IsInterfaceDeclared(&this->Builder,param_1);
  return bVar1;
}

// InvalidateCache @ 14b3c7e40

void __thiscall UMetaSoundBuilderBase::InvalidateCache(UMetaSoundBuilderBase *this,bool param_1)

{
  TScriptInterface<IMetaSoundDocumentInterface> local_18;
  
  Reload(this,&local_18,param_1);
  return;
}

// IsPreset @ 14b3c8c60

bool __thiscall UMetaSoundBuilderBase::IsPreset(UMetaSoundBuilderBase *this)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::IsPreset(&this->Builder);
  return bVar1;
}

// NodeInputIsConnected @ 14b3c97d0

bool __thiscall
UMetaSoundBuilderBase::NodeInputIsConnected
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *param_1)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::IsNodeInputConnected
                    (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  return bVar1;
}

// NodeOutputIsConnected @ 14b3c97f0

bool __thiscall
UMetaSoundBuilderBase::NodeOutputIsConnected
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *param_1)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::IsNodeOutputConnected
                    (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  return bVar1;
}

// NodesAreConnected @ 14b3c9810

bool __thiscall
UMetaSoundBuilderBase::NodesAreConnected
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeOutputHandle *param_1,
          FMetaSoundBuilderNodeInputHandle *param_2)

{
  bool bVar1;
  FMetasoundFrontendEdge local_48;
  
  local_48.FromNodeID.A = *(uint *)&param_1->field_0x0;
  local_48.FromNodeID.B = *(uint *)&param_1->field_0x4;
  local_48.FromNodeID.C = *(uint *)&param_1->field_0x8;
  local_48.FromNodeID.D = *(uint *)&param_1->field_0xc;
  local_48.FromVertexID.A = *(uint *)&param_1->field_0x10;
  local_48.FromVertexID.B = *(uint *)&param_1->field_0x14;
  local_48.FromVertexID.C = *(uint *)&param_1->field_0x18;
  local_48.FromVertexID.D = *(uint *)&param_1->field_0x1c;
  local_48.ToNodeID.A = *(uint *)&param_2->field_0x0;
  local_48.ToNodeID.B = *(uint *)&param_2->field_0x4;
  local_48.ToNodeID.C = *(uint *)&param_2->field_0x8;
  local_48.ToNodeID.D = *(uint *)&param_2->field_0xc;
  local_48.ToVertexID.A = *(uint *)&param_2->field_0x10;
  local_48.ToVertexID.B = *(uint *)&param_2->field_0x14;
  local_48.ToVertexID.C = *(uint *)&param_2->field_0x18;
  local_48.ToVertexID.D = *(uint *)&param_2->field_0x1c;
  bVar1 = FMetaSoundFrontendDocumentBuilder::ContainsEdge(&this->Builder,&local_48,(FGuid *)0x0);
  return bVar1;
}

// OnAssetReferenceAdded @ 14b3c9c60

void __thiscall
UMetaSoundBuilderBase::OnAssetReferenceAdded
          (UMetaSoundBuilderBase *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundBuilderBase.h"
             ,0x247,L"Pure virtual not implemented (%s)");
  return;
}

// OnDependencyAdded @ 14b3ca350

void __thiscall UMetaSoundBuilderBase::OnDependencyAdded(UMetaSoundBuilderBase *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EMetasoundFrontendClassType EVar4;
  FMetasoundFrontendDocument *pFVar5;
  IMetaSoundAssetManager *pIVar6;
  uint uVar7;
  UObject *local_48;
  longlong local_40;
  UObject *local_38 [2];
  FMetaSoundAssetKey local_28;
  
  pFVar5 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  uVar7 = 0;
  if (param_1 < (pFVar5->Dependencies).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (pFVar5->Dependencies).AllocatorInstance.Data;
  EVar4 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)(pFVar1 + (longlong)param_1 * 0x90 + 0x18));
  if (EVar4 == External) {
    FMetaSoundAssetKey::FMetaSoundAssetKey
              (&local_28,
               (FMetasoundFrontendClassMetadata *)(pFVar1 + (longlong)param_1 * 0x90 + 0x18));
    pIVar6 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
    (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,&local_48,&local_28);
    if ((local_48 != (UObject *)0x0) && (local_40 != 0)) {
      local_38[0] = local_48;
      pcVar2 = *(code **)(this->_padding_ + 0x2f0);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_48);
      }
      (*pcVar2)(this,local_38);
    }
  }
  return;
}

// OnRemoveSwappingDependency @ 14b3caf60

void __thiscall
UMetaSoundBuilderBase::OnRemoveSwappingDependency
          (UMetaSoundBuilderBase *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EMetasoundFrontendClassType EVar4;
  FMetasoundFrontendDocument *pFVar5;
  IMetaSoundAssetManager *pIVar6;
  uint uVar7;
  UObject *local_48;
  longlong local_40;
  UObject *local_38 [2];
  FMetaSoundAssetKey local_28;
  
  pFVar5 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  uVar7 = 0;
  if (param_1 < (pFVar5->Dependencies).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (pFVar5->Dependencies).AllocatorInstance.Data;
  EVar4 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)(pFVar1 + (longlong)param_1 * 0x90 + 0x18));
  if (EVar4 == External) {
    FMetaSoundAssetKey::FMetaSoundAssetKey
              (&local_28,
               (FMetasoundFrontendClassMetadata *)(pFVar1 + (longlong)param_1 * 0x90 + 0x18));
    pIVar6 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
    (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,&local_48,&local_28);
    if ((local_48 != (UObject *)0x0) && (local_40 != 0)) {
      local_38[0] = local_48;
      pcVar2 = *(code **)(this->_padding_ + 0x2f8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_48);
      }
      (*pcVar2)(this,local_38);
    }
  }
  return;
}

// OnRemovingAssetReference @ 14b3cb1b0

void __thiscall
UMetaSoundBuilderBase::OnRemovingAssetReference
          (UMetaSoundBuilderBase *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundBuilderBase.h"
             ,0x248,L"Pure virtual not implemented (%s)");
  return;
}

// RegisterGraphIfOutstandingTransactions @ 14b3d18b0

void __cdecl UMetaSoundBuilderBase::RegisterGraphIfOutstandingTransactions(UObject *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IMetaSoundAssetManager *pIVar6;
  IMetasoundUObjectRegistry *pIVar7;
  longlong *plVar8;
  TArrayView<FGuid_const_,int> *pTVar9;
  UObject *pUVar10;
  IDocumentBuilderRegistry *pIVar11;
  UClass *pUVar12;
  longlong lVar13;
  UObject *pUVar14;
  UObject *pUVar15;
  FString *pFVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ForAnyElementType this;
  UObject *pUVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong *local_res20;
  TArray<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_c8;
  undefined8 *local_b8 [2];
  TArrayView<FGuid_const_,int> local_a8;
  FString local_98;
  undefined4 local_88 [2];
  FGuid *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [48];
  
  pIVar6 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
  pIVar7 = Metasound::IMetasoundUObjectRegistry::Get();
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,param_1);
  local_res20 = plVar8;
  if ((plVar8 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetaSoundAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                         ,0x467,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_88[0] = 0x10000;
  local_80 = (FGuid *)0x0;
  iStack_78 = 0;
  pTVar9 = UMetaSoundSettings::GetPageOrder(&local_a8);
  local_80 = pTVar9->DataPtr;
  iStack_78 = pTVar9->ArrayNum;
  uStack_74 = *(undefined4 *)&pTVar9->field_0xc;
  (**(code **)(*plVar8 + 0x28))(plVar8,local_b8);
  iVar5 = (int)local_b8[1];
  puVar1 = local_b8[0] + iVar5;
  puVar19 = local_b8[0];
  while( true ) {
    if ((int)local_b8[1] != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMetasoundAssetBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar19 == puVar1) break;
    pUVar10 = (UObject *)(**(code **)(*(longlong *)*puVar19 + 0x50))();
    if ((pUVar10 == (UObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RefMetaSound",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                           ,0x472,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,local_70,pUVar10);
    RegisterGraphIfOutstandingTransactions(pUVar10);
    puVar19 = puVar19 + 1;
  }
  pIVar11 = Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    pUVar12 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
    pUVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar12);
    if (param_1 == (UObject *)0x0) {
      pUVar10 = (UObject *)0x0;
    }
    lVar13 = (**(code **)(*(longlong *)pUVar10 + 0x18))(pUVar10);
    lpCriticalSection = (LPCRITICAL_SECTION)(pIVar11 + 0xb);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
    ::MultiFind<TSizedDefaultAllocator<32>_>
              ((TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
                *)(pIVar11 + 1),(FMetasoundFrontendClassName *)(lVar13 + 0x88),&local_c8,false);
    LeaveCriticalSection(lpCriticalSection);
    iVar5 = local_c8.ArrayNum;
    uVar18 = (ulonglong)local_c8.ArrayNum;
    pFVar2 = (FWeakObjectPtr *)(local_c8.AllocatorInstance.Data + uVar18 * 8);
    this.Data = local_c8.AllocatorInstance.Data;
    pUVar10 = (UObject *)0x0;
    while( true ) {
      if ((int)uVar18 != iVar5) {
        `TCheckedPointerIterator<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      pUVar14 = pUVar10;
      if ((FWeakObjectPtr *)this.Data == pFVar2) break;
      pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      pUVar20 = pUVar10;
      if ((pUVar14 != (UObject *)0x0) &&
         (bVar4 = FMetaSoundFrontendDocumentBuilder::IsValid
                            ((FMetaSoundFrontendDocumentBuilder *)(pUVar14 + 1)), pUVar20 = pUVar14,
         bVar4)) {
        pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        if (*(UObject **)&pUVar15[1].field_0x8 == (UObject *)0x0) {
          pFVar16 = GetTypeName<UObject>(&local_98);
          if ((pFVar16->Data).ArrayNum == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar17);
        }
        pUVar20 = pUVar10;
        if (*(UObject **)&pUVar15[1].field_0x8 == param_1) break;
      }
      uVar18 = local_c8._8_8_ & 0xffffffff;
      this.Data = this.Data + 8;
      pUVar10 = pUVar20;
    }
    if ((FWeakObjectPtr *)local_c8.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (pUVar14 != (UObject *)0x0) {
      iVar5 = FMetaSoundFrontendDocumentBuilder::GetTransactionCount
                        ((FMetaSoundFrontendDocumentBuilder *)(pUVar14 + 1));
      local_88[0] = CONCAT31(local_88[0]._1_3_,*(int *)(pUVar14 + 4) != iVar5);
      *(int *)(pUVar14 + 4) = iVar5;
    }
  }
  (**(code **)(*local_res20 + 0x18))(local_res20,local_88);
  if (local_b8[0] != (undefined8 *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  return;
}

// Reload @ 14b3d3520

void __thiscall
UMetaSoundBuilderBase::Reload
          (UMetaSoundBuilderBase *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          bool param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendDocument *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDocumentModifyDelegates *pFVar8;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_28;
  
  pFVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this->Builder);
  pTVar7 = ::operator_new(0x2f0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FDocumentModifyDelegates *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
              ((FDocumentModifyDelegates *)(pTVar7 + 1),pFVar6);
    pFVar8 = (FDocumentModifyDelegates *)(pTVar7 + 1);
    if (pFVar8 == (FDocumentModifyDelegates *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14b3d3641;
    }
  }
  if (((pFVar8->_padding_ == 0) || (*(longlong *)&pFVar8->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar8->_padding_ = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14b3d3641:
  (**(code **)(this->_padding_ + 0x2e8))(this,pFVar8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar8;
  local_28.SharedReferenceCount.ReferenceController = pTVar7;
  FMetaSoundFrontendDocumentBuilder::Reload(&this->Builder,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// ReloadCache @ 14b3d3740

void __thiscall UMetaSoundBuilderBase::ReloadCache(UMetaSoundBuilderBase *this,bool param_1)

{
  TScriptInterface<IMetaSoundDocumentInterface> local_18;
  
  Reload(this,&local_18,param_1);
  return;
}

// RemoveGraphInput @ 14b3d4db0

void __thiscall
UMetaSoundBuilderBase::RemoveGraphInput
          (UMetaSoundBuilderBase *this,FName param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveGraphInput(&this->Builder,param_1,true);
  *param_2 = !bVar1;
  return;
}

// RemoveGraphOutput @ 14b3d4de0

void __thiscall
UMetaSoundBuilderBase::RemoveGraphOutput
          (UMetaSoundBuilderBase *this,FName param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveGraphOutput(&this->Builder,param_1);
  *param_2 = !bVar1;
  return;
}

// RemoveGraphVariable @ 14b3d4e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundBuilderBase::RemoveGraphVariable
          (UMetaSoundBuilderBase *this,FName param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  FMetasoundFrontendVariable *pFVar2;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar2 = FMetaSoundFrontendDocumentBuilder::FindGraphVariable(&this->Builder,param_1,(FGuid *)0x0)
  ;
  if (pFVar2 != (FMetasoundFrontendVariable *)0x0) {
    bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveGraphVariable
                      (&this->Builder,local_res10[0],(FGuid *)0x0);
    *param_2 = !bVar1;
    return;
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  *param_2 = Failed;
  return;
}

// RemoveInterface @ 14b3d4ee0

void __thiscall
UMetaSoundBuilderBase::RemoveInterface
          (UMetaSoundBuilderBase *this,FName param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveInterface(&this->Builder,param_1);
  *param_2 = !bVar1;
  return;
}

// RemoveNode @ 14b3d5040

void __thiscall
UMetaSoundBuilderBase::RemoveNode
          (UMetaSoundBuilderBase *this,FMetaSoundNodeHandle *param_1,
          EMetaSoundBuilderResult *param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveNode
                    (&this->Builder,&param_1->NodeID,(FGuid *)0x0);
  if ((bVar1) && (param_3)) {
    FMetaSoundFrontendDocumentBuilder::RemoveUnusedDependencies(&this->Builder);
  }
  *param_2 = !bVar1;
  return;
}

// RemoveNodeInputDefault @ 14b3d50b0

void __thiscall
UMetaSoundBuilderBase::RemoveNodeInputDefault
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *param_1,
          EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveNodeInputDefault
                    (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,(FGuid *)0x0);
  *param_2 = !bVar1;
  return;
}

// RemoveTransactionListener @ 14b3d5610

void __thiscall
UMetaSoundBuilderBase::RemoveTransactionListener
          (UMetaSoundBuilderBase *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->BuilderReloadDelegate,
               param_1);
    return;
  }
  return;
}

// RemoveUnusedDependencies @ 14b3d5630

void __thiscall UMetaSoundBuilderBase::RemoveUnusedDependencies(UMetaSoundBuilderBase *this)

{
  FMetaSoundFrontendDocumentBuilder::RemoveUnusedDependencies(&this->Builder);
  return;
}

// RenameRootGraphClass @ 14b3d59c0

void __thiscall
UMetaSoundBuilderBase::RenameRootGraphClass
          (UMetaSoundBuilderBase *this,FMetasoundFrontendClassName *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderBase.cpp"
                     ,0x4ef,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetGraphInputAccessType @ 14b3dfea0

void __thiscall
UMetaSoundBuilderBase::SetGraphInputAccessType
          (UMetaSoundBuilderBase *this,FName param_1,EMetasoundFrontendVertexAccessType param_2,
          EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType(&this->Builder,param_1,param_2)
  ;
  *param_3 = !bVar1;
  return;
}

// SetGraphInputDataType @ 14b3dfed0

void __thiscall
UMetaSoundBuilderBase::SetGraphInputDataType
          (UMetaSoundBuilderBase *this,FName param_1,FName param_2,EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::SetGraphInputDataType(&this->Builder,param_1,param_2);
  *param_3 = !bVar1;
  return;
}

// SetGraphInputDefault @ 14b3dff00

void __thiscall
UMetaSoundBuilderBase::SetGraphInputDefault
          (UMetaSoundBuilderBase *this,FName param_1,FMetasoundFrontendLiteral *param_2,
          EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  FMetasoundFrontendLiteral *pFVar2;
  FMetasoundFrontendLiteral local_68;
  
  pFVar2 = FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_68,param_2);
  bVar1 = FMetaSoundFrontendDocumentBuilder::SetGraphInputDefault
                    (&this->Builder,param_1,pFVar2,(FGuid *)0x0);
  *param_3 = !bVar1;
  return;
}

// SetGraphInputName @ 14b3dff60

void __thiscall
UMetaSoundBuilderBase::SetGraphInputName
          (UMetaSoundBuilderBase *this,FName param_1,FName param_2,EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::SetGraphInputName(&this->Builder,param_1,param_2);
  *param_3 = !bVar1;
  return;
}

// SetGraphOutputAccessType @ 14b3dff90

void __thiscall
UMetaSoundBuilderBase::SetGraphOutputAccessType
          (UMetaSoundBuilderBase *this,FName param_1,EMetasoundFrontendVertexAccessType param_2,
          EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType
                    (&this->Builder,param_1,param_2);
  *param_3 = !bVar1;
  return;
}

// SetGraphOutputDataType @ 14b3dffc0

void __thiscall
UMetaSoundBuilderBase::SetGraphOutputDataType
          (UMetaSoundBuilderBase *this,FName param_1,FName param_2,EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::SetGraphOutputDataType(&this->Builder,param_1,param_2);
  *param_3 = !bVar1;
  return;
}

// SetGraphOutputName @ 14b3dfff0

void __thiscall
UMetaSoundBuilderBase::SetGraphOutputName
          (UMetaSoundBuilderBase *this,FName param_1,FName param_2,EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::SetGraphOutputName(&this->Builder,param_1,param_2);
  *param_3 = !bVar1;
  return;
}

// SetNodeInputDefault @ 14b3e0030

void __thiscall
UMetaSoundBuilderBase::SetNodeInputDefault
          (UMetaSoundBuilderBase *this,FMetaSoundBuilderNodeInputHandle *param_1,
          FMetasoundFrontendLiteral *param_2,EMetaSoundBuilderResult *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::SetNodeInputDefault
                    (&this->Builder,(FGuid *)param_1,(FGuid *)&param_1->field_0x10,param_2,
                     (FGuid *)0x0);
  *param_3 = !bVar1;
  return;
}

// StaticRegisterNativesUMetaSoundBuilderBase @ 14b3e13f0

void __cdecl UMetaSoundBuilderBase::StaticRegisterNativesUMetaSoundBuilderBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x4a;
  local_18.DataPtr = Z_Construct_UClass_UMetaSoundBuilderBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddGraphInputNode @ 14b3e84e0

void __cdecl
UMetaSoundBuilderBase::execAddGraphInputNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  void *pvVar3;
  FString *pFVar4;
  int iVar5;
  TObjectPtr<UObject> *pTVar6;
  FMetaSoundBuilderNodeOutputHandle *pFVar7;
  size_t _Size;
  longlong lVar8;
  EMetaSoundBuilderResult *pEVar9;
  bool bVar10;
  EMetaSoundBuilderResult local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  FName local_128 [2];
  EMetasoundFrontendLiteralType local_118 [4];
  int local_114;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  FString *local_e0;
  undefined8 local_d8;
  TObjectPtr<UObject> *local_d0;
  undefined8 local_c8;
  FMetasoundFrontendLiteral local_b8;
  FMetaSoundBuilderNodeOutputHandle local_60;
  
  local_128[0].ComparisonIndex.Value = 0;
  local_128[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
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
  local_118[0] = None;
  local_114 = 0;
  local_110 = (void *)0x0;
  local_108 = 0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  local_e0 = (FString *)0x0;
  local_d8 = 0;
  local_d0 = (TObjectPtr<UObject> *)0x0;
  local_c8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pEVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar9 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pvVar3 = local_110;
  bVar10 = local_res18[0] != 0;
  local_b8.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_108;
  local_b8.Type = local_118[0];
  local_b8.AsNumDefault = local_114;
  local_b8.AsBoolean.ArrayNum = (int)local_108;
  if ((int)local_108 == 0) {
    local_b8.AsBoolean.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_108,0,&local_b8.AsBoolean.AllocatorInstance,(int)local_108,
               &local_b8.AsBoolean.ArrayMax);
    memcpy(local_b8.AsBoolean.AllocatorInstance.Data,pvVar3,_Size);
  }
  pvVar3 = local_100;
  lVar8 = (longlong)(int)local_f8;
  local_b8.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AsInteger.ArrayNum = (int)local_f8;
  if ((int)local_f8 == 0) {
    local_b8.AsInteger.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_f8,0,&local_b8.AsInteger.AllocatorInstance,(int)local_f8,
               &local_b8.AsInteger.ArrayMax);
    memcpy(local_b8.AsInteger.AllocatorInstance.Data,pvVar3,lVar8 << 2);
  }
  pvVar3 = local_f0;
  lVar8 = (longlong)(int)local_e8;
  local_b8.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AsFloat.ArrayNum = (int)local_e8;
  if ((int)local_e8 == 0) {
    local_b8.AsFloat.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_e8,0,&local_b8.AsFloat.AllocatorInstance,(int)local_e8,
               &local_b8.AsFloat.ArrayMax);
    memcpy(local_b8.AsFloat.AllocatorInstance.Data,pvVar3,lVar8 << 2);
  }
  pFVar4 = local_e0;
  iVar5 = (int)local_d8;
  local_b8.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AsString.ArrayNum = (int)local_d8;
  if ((int)local_d8 == 0) {
    local_b8.AsString.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_d8,0,&local_b8.AsString.AllocatorInstance,(int)local_d8,
               &local_b8.AsString.ArrayMax);
    ConstructItems<FString,FString,int>(local_b8.AsString.AllocatorInstance.Data,pFVar4,iVar5);
  }
  pTVar6 = local_d0;
  iVar5 = (int)local_c8;
  local_b8.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AsUObject.ArrayNum = (int)local_c8;
  if ((int)local_c8 == 0) {
    local_b8.AsUObject.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_c8,0,&local_b8.AsUObject.AllocatorInstance,(int)local_c8,
               &local_b8.AsUObject.ArrayMax);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              (local_b8.AsUObject.AllocatorInstance.Data,pTVar6,iVar5);
  }
  pFVar7 = AddGraphInputNode((UMetaSoundBuilderBase *)param_1,&local_60,local_128[0],local_res20,
                             &local_b8,pEVar9,bVar10);
  uVar2 = *(undefined8 *)&pFVar7->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar7;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = *(undefined8 *)&pFVar7->field_0x18;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&pFVar7->field_0x10;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  if (local_d0 != (TObjectPtr<UObject> *)0x0) {
    FMemory::Free(local_d0);
  }
  DestructItems<FString,int>(local_e0,(int)local_d8);
  if (local_e0 != (FString *)0x0) {
    FMemory::Free(local_e0);
  }
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  return;
}

// execAddGraphOutputNode @ 14b3e8910

void __cdecl
UMetaSoundBuilderBase::execAddGraphOutputNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  void *pvVar3;
  FString *pFVar4;
  int iVar5;
  TObjectPtr<UObject> *pTVar6;
  FMetaSoundBuilderNodeInputHandle *pFVar7;
  size_t _Size;
  longlong lVar8;
  EMetaSoundBuilderResult *pEVar9;
  bool bVar10;
  EMetaSoundBuilderResult local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  FName local_128 [2];
  EMetasoundFrontendLiteralType local_118 [4];
  int local_114;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  FString *local_e0;
  undefined8 local_d8;
  TObjectPtr<UObject> *local_d0;
  undefined8 local_c8;
  FMetasoundFrontendLiteral local_b8;
  FMetaSoundBuilderNodeInputHandle local_60;
  
  local_128[0].ComparisonIndex.Value = 0;
  local_128[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
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
  local_118[0] = None;
  local_114 = 0;
  local_110 = (void *)0x0;
  local_108 = 0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  local_e0 = (FString *)0x0;
  local_d8 = 0;
  local_d0 = (TObjectPtr<UObject> *)0x0;
  local_c8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pEVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar9 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pvVar3 = local_110;
  bVar10 = local_res18[0] != 0;
  local_b8.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_108;
  local_b8.Type = local_118[0];
  local_b8.AsNumDefault = local_114;
  local_b8.AsBoolean.ArrayNum = (int)local_108;
  if ((int)local_108 == 0) {
    local_b8.AsBoolean.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_108,0,&local_b8.AsBoolean.AllocatorInstance,(int)local_108,
               &local_b8.AsBoolean.ArrayMax);
    memcpy(local_b8.AsBoolean.AllocatorInstance.Data,pvVar3,_Size);
  }
  pvVar3 = local_100;
  lVar8 = (longlong)(int)local_f8;
  local_b8.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AsInteger.ArrayNum = (int)local_f8;
  if ((int)local_f8 == 0) {
    local_b8.AsInteger.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_f8,0,&local_b8.AsInteger.AllocatorInstance,(int)local_f8,
               &local_b8.AsInteger.ArrayMax);
    memcpy(local_b8.AsInteger.AllocatorInstance.Data,pvVar3,lVar8 << 2);
  }
  pvVar3 = local_f0;
  lVar8 = (longlong)(int)local_e8;
  local_b8.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AsFloat.ArrayNum = (int)local_e8;
  if ((int)local_e8 == 0) {
    local_b8.AsFloat.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_e8,0,&local_b8.AsFloat.AllocatorInstance,(int)local_e8,
               &local_b8.AsFloat.ArrayMax);
    memcpy(local_b8.AsFloat.AllocatorInstance.Data,pvVar3,lVar8 << 2);
  }
  pFVar4 = local_e0;
  iVar5 = (int)local_d8;
  local_b8.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AsString.ArrayNum = (int)local_d8;
  if ((int)local_d8 == 0) {
    local_b8.AsString.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_d8,0,&local_b8.AsString.AllocatorInstance,(int)local_d8,
               &local_b8.AsString.ArrayMax);
    ConstructItems<FString,FString,int>(local_b8.AsString.AllocatorInstance.Data,pFVar4,iVar5);
  }
  pTVar6 = local_d0;
  iVar5 = (int)local_c8;
  local_b8.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AsUObject.ArrayNum = (int)local_c8;
  if ((int)local_c8 == 0) {
    local_b8.AsUObject.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_c8,0,&local_b8.AsUObject.AllocatorInstance,(int)local_c8,
               &local_b8.AsUObject.ArrayMax);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              (local_b8.AsUObject.AllocatorInstance.Data,pTVar6,iVar5);
  }
  pFVar7 = AddGraphOutputNode((UMetaSoundBuilderBase *)param_1,&local_60,local_128[0],local_res20,
                              &local_b8,pEVar9,bVar10);
  uVar2 = *(undefined8 *)&pFVar7->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar7;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = *(undefined8 *)&pFVar7->field_0x18;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&pFVar7->field_0x10;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  if (local_d0 != (TObjectPtr<UObject> *)0x0) {
    FMemory::Free(local_d0);
  }
  DestructItems<FString,int>(local_e0,(int)local_d8);
  if (local_e0 != (FString *)0x0) {
    FMemory::Free(local_e0);
  }
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  return;
}

// execAddGraphVariable @ 14b3e8d40

void __cdecl
UMetaSoundBuilderBase::execAddGraphVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  FString *pFVar3;
  int iVar4;
  TObjectPtr<UObject> *pTVar5;
  FMetasoundFrontendVariable *pFVar6;
  size_t _Size;
  longlong lVar7;
  uchar *puVar8;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res20;
  FMetasoundFrontendLiteral local_e8;
  EMetasoundFrontendLiteralType local_88 [4];
  int local_84;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  FString *local_50;
  undefined8 local_48;
  TObjectPtr<UObject> *local_40;
  undefined8 local_38;
  
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
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_88[0] = None;
  local_84 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (FString *)0x0;
  local_48 = 0;
  local_40 = (TObjectPtr<UObject> *)0x0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pvVar2 = local_80;
  local_e8.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar8 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_78;
  local_e8.Type = local_88[0];
  local_e8.AsNumDefault = local_84;
  local_e8.AsBoolean.ArrayNum = (int)local_78;
  if ((int)local_78 == 0) {
    local_e8.AsBoolean.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_78,0,&local_e8.AsBoolean.AllocatorInstance,(int)local_78,
               &local_e8.AsBoolean.ArrayMax);
    memcpy(local_e8.AsBoolean.AllocatorInstance.Data,pvVar2,_Size);
  }
  pvVar2 = local_70;
  lVar7 = (longlong)(int)local_68;
  local_e8.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsInteger.ArrayNum = (int)local_68;
  if ((int)local_68 == 0) {
    local_e8.AsInteger.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_68,0,&local_e8.AsInteger.AllocatorInstance,(int)local_68,
               &local_e8.AsInteger.ArrayMax);
    memcpy(local_e8.AsInteger.AllocatorInstance.Data,pvVar2,lVar7 << 2);
  }
  pvVar2 = local_60;
  lVar7 = (longlong)(int)local_58;
  local_e8.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsFloat.ArrayNum = (int)local_58;
  if ((int)local_58 == 0) {
    local_e8.AsFloat.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_58,0,&local_e8.AsFloat.AllocatorInstance,(int)local_58,
               &local_e8.AsFloat.ArrayMax);
    memcpy(local_e8.AsFloat.AllocatorInstance.Data,pvVar2,lVar7 << 2);
  }
  pFVar3 = local_50;
  iVar4 = (int)local_48;
  local_e8.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsString.ArrayNum = (int)local_48;
  if ((int)local_48 == 0) {
    local_e8.AsString.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_48,0,&local_e8.AsString.AllocatorInstance,(int)local_48,
               &local_e8.AsString.ArrayMax);
    ConstructItems<FString,FString,int>(local_e8.AsString.AllocatorInstance.Data,pFVar3,iVar4);
  }
  pTVar5 = local_40;
  iVar4 = (int)local_38;
  local_e8.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsUObject.ArrayNum = (int)local_38;
  if ((int)local_38 == 0) {
    local_e8.AsUObject.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_38,0,&local_e8.AsUObject.AllocatorInstance,(int)local_38,
               &local_e8.AsUObject.ArrayMax);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              (local_e8.AsUObject.AllocatorInstance.Data,pTVar5,iVar4);
  }
  pFVar6 = FMetaSoundFrontendDocumentBuilder::AddGraphVariable
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res20,local_res10,
                      &local_e8,(FText *)0x0,(FText *)0x0,(FGuid *)0x0);
  *puVar8 = pFVar6 == (FMetasoundFrontendVariable *)0x0;
  if (local_e8.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_e8.AsString.AllocatorInstance.Data,local_e8.AsString.ArrayNum);
  if (local_e8.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsString.AllocatorInstance.Data);
  }
  if (local_e8.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsFloat.AllocatorInstance.Data);
  }
  if (local_e8.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsInteger.AllocatorInstance.Data);
  }
  if (local_e8.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsBoolean.AllocatorInstance.Data);
  }
  if (local_40 != (TObjectPtr<UObject> *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<FString,int>(local_50,(int)local_48);
  if (local_50 != (FString *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  return;
}

// execAddGraphVariableGetDelayedNode @ 14b3e9140

void __cdecl
UMetaSoundBuilderBase::execAddGraphVariableGetDelayedNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FGuid *pFVar3;
  FMetasoundFrontendNode *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FName local_res10;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  FGuid local_38;
  FGuid local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res10;
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar5 = '\x01';
  pFVar3 = FGuid::NewGuid(&local_28);
  local_38.A = pFVar3->A;
  local_38.B = pFVar3->B;
  local_38.C = pFVar3->C;
  local_38.D = pFVar3->D;
  pFVar4 = FMetaSoundFrontendDocumentBuilder::AddGraphVariableDeferredAccessorNode
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),FVar2,&local_38,
                      (FGuid *)0x0);
  if (pFVar4 == (FMetasoundFrontendNode *)0x0) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  else {
    local_48 = (pFVar4->ID).A;
    uStack_44 = (pFVar4->ID).B;
    uStack_40 = (pFVar4->ID).C;
    uStack_3c = (pFVar4->ID).D;
    *puVar5 = '\0';
  }
  *(uint *)param_3 = local_48;
  *(uint *)((longlong)param_3 + 4) = uStack_44;
  *(uint *)((longlong)param_3 + 8) = uStack_40;
  *(uint *)((longlong)param_3 + 0xc) = uStack_3c;
  return;
}

// execAddGraphVariableGetNode @ 14b3e9270

void __cdecl
UMetaSoundBuilderBase::execAddGraphVariableGetNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FGuid *pFVar3;
  FMetasoundFrontendNode *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FName local_res10;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  FGuid local_38;
  FGuid local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res10;
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar5 = '\x01';
  pFVar3 = FGuid::NewGuid(&local_28);
  local_38.A = pFVar3->A;
  local_38.B = pFVar3->B;
  local_38.C = pFVar3->C;
  local_38.D = pFVar3->D;
  pFVar4 = FMetaSoundFrontendDocumentBuilder::AddGraphVariableAccessorNode
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),FVar2,&local_38,
                      (FGuid *)0x0);
  if (pFVar4 == (FMetasoundFrontendNode *)0x0) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  else {
    local_48 = (pFVar4->ID).A;
    uStack_44 = (pFVar4->ID).B;
    uStack_40 = (pFVar4->ID).C;
    uStack_3c = (pFVar4->ID).D;
    *puVar5 = '\0';
  }
  *(uint *)param_3 = local_48;
  *(uint *)((longlong)param_3 + 4) = uStack_44;
  *(uint *)((longlong)param_3 + 8) = uStack_40;
  *(uint *)((longlong)param_3 + 0xc) = uStack_3c;
  return;
}

// execAddGraphVariableSetNode @ 14b3e93a0

void __cdecl
UMetaSoundBuilderBase::execAddGraphVariableSetNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FGuid *pFVar3;
  FMetasoundFrontendNode *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FName local_res10;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  FGuid local_38;
  FGuid local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res10;
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar5 = '\x01';
  pFVar3 = FGuid::NewGuid(&local_28);
  local_38.A = pFVar3->A;
  local_38.B = pFVar3->B;
  local_38.C = pFVar3->C;
  local_38.D = pFVar3->D;
  pFVar4 = FMetaSoundFrontendDocumentBuilder::AddGraphVariableMutatorNode
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),FVar2,&local_38,
                      (FGuid *)0x0);
  if (pFVar4 == (FMetasoundFrontendNode *)0x0) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  else {
    local_48 = (pFVar4->ID).A;
    uStack_44 = (pFVar4->ID).B;
    uStack_40 = (pFVar4->ID).C;
    uStack_3c = (pFVar4->ID).D;
    *puVar5 = '\0';
  }
  *(uint *)param_3 = local_48;
  *(uint *)((longlong)param_3 + 4) = uStack_44;
  *(uint *)((longlong)param_3 + 8) = uStack_40;
  *(uint *)((longlong)param_3 + 0xc) = uStack_3c;
  return;
}

// execAddInterface @ 14b3e94d0

void __cdecl UMetaSoundBuilderBase::execAddInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::AddInterface
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res10);
  *puVar3 = !bVar2;
  return;
}

// execAddNode @ 14b3e95b0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMetaSoundBuilderBase::execAddNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMetasoundFrontendClassAccessFlags EVar2;
  longlong lVar3;
  FGuid *pFVar4;
  FMetasoundFrontendNode *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uchar *puVar10;
  bool bVar11;
  uchar local_res10 [8];
  EMetasoundFrontendClassAccessFlags local_res18 [8];
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  longlong local_88 [2];
  FString local_78;
  FString local_68;
  FGuid local_58;
  FGuid local_48;
  
  plVar6 = (longlong *)0x0;
  uVar9 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  plVar8 = local_88;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_98 = 0;
  uStack_8c = 0;
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uStack_90 = 0;
  plVar7 = plVar6;
  if (((UObject *)*plVar8 != (UObject *)0x0) && (plVar7 = (longlong *)0x0, plVar8[1] != 0)) {
    RegisterGraphIfOutstandingTransactions((UObject *)*plVar8);
    if (*plVar8 != 0) {
      plVar6 = (longlong *)plVar8[1];
    }
    lVar3 = (**(code **)(*plVar6 + 0x18))();
    EVar2 = FMetasoundFrontendClassMetadata::GetAccessFlags
                      ((FMetasoundFrontendClassMetadata *)(lVar3 + 0x88));
    if ((EVar2 & Default) == None) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_res18[0] = Default;
        ::LexToString(&local_68,local_res18);
        FMetasoundFrontendClassName::ToString
                  ((FMetasoundFrontendClassName *)(lVar3 + 0x88),&local_78);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      bVar11 = true;
      goto LAB_14b3e97aa;
    }
    pFVar4 = FGuid::NewGuid(&local_48);
    local_58.A = pFVar4->A;
    local_58.B = pFVar4->B;
    local_58.C = pFVar4->C;
    local_58.D = pFVar4->D;
    pFVar5 = FMetaSoundFrontendDocumentBuilder::AddGraphNode
                       ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),
                        (FMetasoundFrontendGraphClass *)(lVar3 + 0x70),&local_58,(FGuid *)0x0);
    if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
      uVar9 = (pFVar5->ID).A;
      local_98._0_4_ = (pFVar5->ID).A;
      local_98._4_4_ = (pFVar5->ID).B;
      uStack_90 = (pFVar5->ID).C;
      uStack_8c = (pFVar5->ID).D;
      plVar7 = (longlong *)(ulonglong)(pFVar5->ID).C;
    }
  }
  bVar11 = (((int)((ulonglong)local_98 >> 0x20) == 0 && uStack_8c == 0) && (int)plVar7 == 0) &&
           uVar9 == 0;
LAB_14b3e97aa:
  *puVar10 = bVar11;
  *(undefined8 *)param_3 = local_98;
  *(ulonglong *)((longlong)param_3 + 8) = CONCAT44(uStack_8c,uStack_90);
  return;
}

// execAddNodeByClassName @ 14b3e97e0

void __cdecl
UMetaSoundBuilderBase::execAddNodeByClassName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendClassName *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FMetaSoundNodeHandle *pFVar4;
  FMetasoundFrontendClassName *pFVar5;
  EMetaSoundBuilderResult *pEVar6;
  EMetaSoundBuilderResult local_res10 [8];
  int local_res18 [4];
  FMetaSoundNodeHandle local_58;
  FMetasoundFrontendClassName local_48;
  
  local_48.Namespace.ComparisonIndex.Value = 0;
  local_48.Namespace.Number = 0;
  local_48.Name.ComparisonIndex.Value = 0;
  local_48.Name.Number = 0;
  local_48.Variant.ComparisonIndex.Value = 0;
  local_48.Variant.Number = 0;
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
  pFVar1 = (FMetasoundFrontendClassName *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_48;
  if (pFVar1 != (FMetasoundFrontendClassName *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = AddNodeByClassName((UMetaSoundBuilderBase *)param_1,&local_58,pFVar5,pEVar6,
                              local_res18[0]);
  uVar3 = *(undefined8 *)&(pFVar4->NodeID).C;
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar4->NodeID;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execBuild @ 14b3e9b90

void __cdecl UMetaSoundBuilderBase::execBuild(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  undefined8 local_res8;
  undefined1 local_38 [16];
  uchar local_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\x01';
  local_18 = 0;
  uStack_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38,local_res8,puVar3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar2 != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*puVar2);
  }
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = puVar2[1];
  return;
}

// execBuildAndOverwriteMetaSound @ 14b3e9cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMetaSoundBuilderBase::execBuildAndOverwriteMetaSound
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int local_res10 [2];
  UObject *local_38;
  undefined8 uStack_30;
  UObject *local_28;
  undefined8 local_20;
  
  local_38 = (UObject *)0x0;
  uStack_30 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  pUVar3 = local_38;
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_38 == (UObject *)0x0)) {
    if (local_38 == (UObject *)0x0) {
      if ((byte)LogMetaSound._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable(local_38);
  }
  uVar4 = uStack_30;
  cVar5 = (**(code **)(*(longlong *)pUVar3 + 0x1c0))(pUVar3);
  if (cVar5 == '\0') {
    local_28 = pUVar3;
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x2e0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_20 = uVar4;
    (*pcVar2)(param_1,&local_28,bVar6);
  }
  else if (1 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  return;
}

// execBuildNewMetaSound @ 14b3e9e50

void __cdecl
UMetaSoundBuilderBase::execBuildNewMetaSound(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_18 [16];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_18,local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar2 != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*puVar2);
  }
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = puVar2[1];
  return;
}

// execConnectNamedNodeOutputToGraphOutput @ 14b3e9f20

void __cdecl
UMetaSoundBuilderBase::execConnectNamedNodeOutputToGraphOutput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FMetaSoundBuilderNodeInputHandle *pFVar2;
  FProperty *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  FGuid *pFVar5;
  FMetaSoundBuilderNodeInputHandle *pFVar6;
  FName *pFVar7;
  EMetaSoundBuilderResult local_res10 [16];
  FName local_res20;
  FGuid local_88;
  FMetaSoundBuilderNodeInputHandle local_78;
  FMetaSoundBuilderNodeOutputHandle local_58;
  
  local_88.A = 0;
  local_88.B = 0;
  local_88.C = 0;
  local_88.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_88;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  pFVar7 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar7 = (FName *)param_2->MostRecentPropertyAddress;
  }
  local_78._16_8_ = 0;
  local_78._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar2 = (FMetaSoundBuilderNodeInputHandle *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_78;
  if (pFVar2 != (FMetaSoundBuilderNodeInputHandle *)0x0) {
    pFVar6 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FindNodeOutputByName
            ((UMetaSoundBuilderBase *)param_1,&local_58,(FMetaSoundNodeHandle *)pFVar5,*pFVar7,
             pEVar4);
  if (*pEVar4 == Succeeded) {
    ConnectNodes((UMetaSoundBuilderBase *)param_1,&local_58,pFVar6,pEVar4);
  }
  return;
}

// execConnectNamedNodeOutputToNamedGraphOutput @ 14b3ea0f0

void __cdecl
UMetaSoundBuilderBase::execConnectNamedNodeOutputToNamedGraphOutput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FName *pFVar2;
  FProperty *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  FGuid *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res20;
  FName local_68;
  FGuid local_60;
  FMetaSoundBuilderNodeOutputHandle local_50;
  
  local_60.A = 0;
  local_60.B = 0;
  local_60.C = 0;
  local_60.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_60;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar7 = &local_res20;
  if (pFVar2 != (FName *)0x0) {
    pFVar7 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_68;
  if (pFVar2 != (FName *)0x0) {
    pFVar6 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FindNodeOutputByName
            ((UMetaSoundBuilderBase *)param_1,&local_50,(FMetaSoundNodeHandle *)pFVar5,*pFVar7,
             pEVar4);
  if (*pEVar4 == Succeeded) {
    ConnectNodeOutputToGraphOutput((UMetaSoundBuilderBase *)param_1,*pFVar6,&local_50,pEVar4);
  }
  return;
}

// execConnectNodeInputToGraphInput @ 14b3ea2e0

void __cdecl
UMetaSoundBuilderBase::execConnectNodeInputToGraphInput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetaSoundBuilderNodeInputHandle *pFVar1;
  FProperty *pFVar2;
  FMetaSoundBuilderNodeInputHandle *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  EMetaSoundBuilderResult local_res10 [16];
  FName local_res20;
  FMetaSoundBuilderNodeInputHandle local_38;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  local_38._16_8_ = 0;
  local_38._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FMetaSoundBuilderNodeInputHandle *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_38;
  if (pFVar1 != (FMetaSoundBuilderNodeInputHandle *)0x0) {
    pFVar3 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConnectNodeInputToGraphInput((UMetaSoundBuilderBase *)param_1,local_res20,pFVar3,pEVar4);
  return;
}

// execConnectNodeInputsToMatchingGraphInterfaceInputs @ 14b3ea420

void __cdecl
UMetaSoundBuilderBase::execConnectNodeInputsToMatchingGraphInterfaceInputs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  FGuid *pFVar4;
  EMetaSoundBuilderResult *pEVar5;
  EMetaSoundBuilderResult local_res10 [8];
  FGuid local_38;
  TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> local_28;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = ConnectNodeInputsToMatchingGraphInterfaceInputs
                     ((UMetaSoundBuilderBase *)param_1,&local_28,(FMetaSoundNodeHandle *)pFVar4,
                      pEVar5);
  if (param_3 != pTVar3) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar3->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConnectNodeOutputToGraphOutput @ 14b3ea570

void __cdecl
UMetaSoundBuilderBase::execConnectNodeOutputToGraphOutput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetaSoundBuilderNodeOutputHandle *pFVar1;
  FProperty *pFVar2;
  FMetaSoundBuilderNodeOutputHandle *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  EMetaSoundBuilderResult local_res10 [16];
  FName local_res20;
  FMetaSoundBuilderNodeOutputHandle local_38;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  local_38._16_8_ = 0;
  local_38._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FMetaSoundBuilderNodeOutputHandle *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_38;
  if (pFVar1 != (FMetaSoundBuilderNodeOutputHandle *)0x0) {
    pFVar3 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConnectNodeOutputToGraphOutput((UMetaSoundBuilderBase *)param_1,local_res20,pFVar3,pEVar4);
  return;
}

// execConnectNodeOutputsToMatchingGraphInterfaceOutputs @ 14b3ea6b0

void __cdecl
UMetaSoundBuilderBase::execConnectNodeOutputsToMatchingGraphInterfaceOutputs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  FGuid *pFVar4;
  EMetaSoundBuilderResult *pEVar5;
  EMetaSoundBuilderResult local_res10 [8];
  FGuid local_38;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> local_28;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = ConnectNodeOutputsToMatchingGraphInterfaceOutputs
                     ((UMetaSoundBuilderBase *)param_1,&local_28,(FMetaSoundNodeHandle *)pFVar4,
                      pEVar5);
  if (param_3 != pTVar3) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar3->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConnectNodes @ 14b3ea800

void __cdecl UMetaSoundBuilderBase::execConnectNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetaSoundBuilderNodeInputHandle *pFVar1;
  FProperty *pFVar2;
  FMetaSoundBuilderNodeInputHandle *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  FMetaSoundBuilderNodeOutputHandle *pFVar5;
  EMetaSoundBuilderResult local_res10 [8];
  FMetaSoundBuilderNodeOutputHandle local_58;
  FMetaSoundBuilderNodeInputHandle local_38;
  
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  local_58._16_8_ = 0;
  local_58._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  pFVar5 = &local_58;
  if ((FMetaSoundBuilderNodeOutputHandle *)param_2->MostRecentPropertyAddress !=
      (FMetaSoundBuilderNodeOutputHandle *)0x0) {
    pFVar5 = (FMetaSoundBuilderNodeOutputHandle *)param_2->MostRecentPropertyAddress;
  }
  local_38._16_8_ = 0;
  local_38._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FMetaSoundBuilderNodeInputHandle *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_38;
  if (pFVar1 != (FMetaSoundBuilderNodeInputHandle *)0x0) {
    pFVar3 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConnectNodes((UMetaSoundBuilderBase *)param_1,pFVar5,pFVar3,pEVar4);
  return;
}

// execConnectNodesByInterfaceBindings @ 14b3ea970

void __cdecl
UMetaSoundBuilderBase::execConnectNodesByInterfaceBindings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FGuid *pFVar5;
  FGuid *pFVar6;
  uchar local_res8 [8];
  FGuid local_38;
  FGuid local_28;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  pFVar5 = &local_38;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar5 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_28;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar6 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::AddEdgesByNodeClassInterfaceBindings
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar5,pFVar6,true,
                     (FGuid *)0x0);
  *puVar4 = !bVar3;
  return;
}

// execContainsNode @ 14b3eaae0

void __cdecl UMetaSoundBuilderBase::execContainsNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGuid *pFVar3;
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar3 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::ContainsNode
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar3,(FGuid *)0x0);
  *(bool *)param_3 = bVar2;
  return;
}

// execContainsNodeInput @ 14b3eaba0

void __cdecl
UMetaSoundBuilderBase::execContainsNodeInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendVertex *pFVar2;
  FGuid *pFVar3;
  FGuid local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
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
  pFVar3 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar3 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar3,pFVar3 + 1,
                      (FGuid *)0x0);
  *(bool *)param_3 = pFVar2 != (FMetasoundFrontendVertex *)0x0;
  return;
}

// execContainsNodeOutput @ 14b3eac60

void __cdecl
UMetaSoundBuilderBase::execContainsNodeOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendVertex *pFVar2;
  FGuid *pFVar3;
  FGuid local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
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
  pFVar3 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar3 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar3,pFVar3 + 1,
                      (FGuid *)0x0);
  *(bool *)param_3 = pFVar2 != (FMetasoundFrontendVertex *)0x0;
  return;
}

// execConvertFromPreset @ 14b3eae90

void __cdecl
UMetaSoundBuilderBase::execConvertFromPreset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::ConvertFromPreset
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
  *puVar3 = !bVar2;
  return;
}

// execConvertToPreset @ 14b3eaf40

void __cdecl
UMetaSoundBuilderBase::execConvertToPreset(UObject *param_1,FFrame *param_2,void *param_3)

{
  TScriptInterface<IMetaSoundDocumentInterface> *pTVar1;
  FProperty *pFVar2;
  TScriptInterface<IMetaSoundDocumentInterface> *pTVar3;
  EMetaSoundBuilderResult *pEVar4;
  EMetaSoundBuilderResult local_res10 [8];
  TScriptInterface<IMetaSoundDocumentInterface> local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar1 = (TScriptInterface<IMetaSoundDocumentInterface> *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar3 = &local_18;
  if (pTVar1 != (TScriptInterface<IMetaSoundDocumentInterface> *)0x0) {
    pTVar3 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConvertToPreset((UMetaSoundBuilderBase *)param_1,pTVar3,pEVar4);
  return;
}

// execDisconnectNodeInput @ 14b3ee750

void __cdecl
UMetaSoundBuilderBase::execDisconnectNodeInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FGuid *pFVar5;
  uchar local_res8 [8];
  FGuid local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar5,pFVar5 + 1,
                     (FGuid *)0x0);
  *puVar4 = !bVar3;
  return;
}

// execDisconnectNodeOutput @ 14b3ee860

void __cdecl
UMetaSoundBuilderBase::execDisconnectNodeOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FGuid *pFVar5;
  uchar local_res8 [8];
  FGuid local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar5,pFVar5 + 1,
                     (FGuid *)0x0);
  *puVar4 = !bVar3;
  return;
}

// execDisconnectNodes @ 14b3ee970

void __cdecl
UMetaSoundBuilderBase::execDisconnectNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  uchar local_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  FMetasoundFrontendEdge local_68;
  
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_88 = 0;
  local_80 = 0;
  puVar5 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  local_78 = 0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = (uchar *)&local_88;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.FromNodeID._0_8_ = *(undefined8 *)puVar5;
  local_68.FromNodeID._8_8_ = *(undefined8 *)(puVar5 + 8);
  local_68.ToNodeID._0_8_ = *(undefined8 *)puVar4;
  local_68.ToNodeID._8_8_ = *(undefined8 *)(puVar4 + 8);
  local_68.FromVertexID._0_8_ = *(undefined8 *)(puVar5 + 0x10);
  local_68.FromVertexID._8_8_ = *(undefined8 *)(puVar5 + 0x18);
  local_68.ToVertexID._0_8_ = *(undefined8 *)(puVar4 + 0x10);
  local_68.ToVertexID._8_8_ = *(undefined8 *)(puVar4 + 0x18);
  bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveEdge
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),&local_68,(FGuid *)0x0);
  *puVar3 = !bVar2;
  return;
}

// execDisconnectNodesByInterfaceBindings @ 14b3eeb10

void __cdecl
UMetaSoundBuilderBase::execDisconnectNodesByInterfaceBindings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FGuid *pFVar5;
  FGuid *pFVar6;
  uchar local_res8 [8];
  FGuid local_38;
  FGuid local_28;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  pFVar6 = &local_38;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar6 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_28;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::RemoveEdgesByNodeClassInterfaceBindings
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar6,pFVar5,(FGuid *)0x0);
  *puVar4 = !bVar3;
  return;
}

// execFindGraphInputNode @ 14b3ef2a0

void __cdecl
UMetaSoundBuilderBase::execFindGraphInputNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetaSoundBuilderNodeOutputHandle *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FMetaSoundNodeHandle *pFVar4;
  EMetaSoundBuilderResult *pEVar5;
  FMetaSoundBuilderNodeOutputHandle *pFVar6;
  FName *pFVar7;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18;
  FName local_res20;
  FMetaSoundNodeHandle local_68;
  FMetaSoundBuilderNodeOutputHandle local_58;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  pFVar7 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar7 = (FName *)param_2->MostRecentPropertyAddress;
  }
  local_58._16_8_ = 0;
  local_58._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar1 = (FMetaSoundBuilderNodeOutputHandle *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_58;
  if (pFVar1 != (FMetaSoundBuilderNodeOutputHandle *)0x0) {
    pFVar6 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FindGraphInputNode((UMetaSoundBuilderBase *)param_1,&local_68,local_res20,pFVar7,pFVar6,
                              pEVar5);
  uVar3 = *(undefined8 *)&(pFVar4->NodeID).C;
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar4->NodeID;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execFindGraphOutputNode @ 14b3ef440

void __cdecl
UMetaSoundBuilderBase::execFindGraphOutputNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetaSoundBuilderNodeInputHandle *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FMetaSoundNodeHandle *pFVar4;
  EMetaSoundBuilderResult *pEVar5;
  FMetaSoundBuilderNodeInputHandle *pFVar6;
  FName *pFVar7;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18;
  FName local_res20;
  FMetaSoundNodeHandle local_68;
  FMetaSoundBuilderNodeInputHandle local_58;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  pFVar7 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar7 = (FName *)param_2->MostRecentPropertyAddress;
  }
  local_58._16_8_ = 0;
  local_58._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar1 = (FMetaSoundBuilderNodeInputHandle *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_58;
  if (pFVar1 != (FMetaSoundBuilderNodeInputHandle *)0x0) {
    pFVar6 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FindGraphOutputNode((UMetaSoundBuilderBase *)param_1,&local_68,local_res20,pFVar7,pFVar6,
                               pEVar5);
  uVar3 = *(undefined8 *)&(pFVar4->NodeID).C;
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar4->NodeID;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execFindInterfaceInputNodes @ 14b3ef5e0

void __cdecl
UMetaSoundBuilderBase::execFindInterfaceInputNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  EMetaSoundBuilderResult *pEVar3;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18 [2];
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = FindInterfaceInputNodes((UMetaSoundBuilderBase *)param_1,&local_28,local_res18[0],pEVar3)
  ;
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

// execFindInterfaceOutputNodes @ 14b3ef700

void __cdecl
UMetaSoundBuilderBase::execFindInterfaceOutputNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  EMetaSoundBuilderResult *pEVar3;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18 [2];
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = FindInterfaceOutputNodes
                     ((UMetaSoundBuilderBase *)param_1,&local_28,local_res18[0],pEVar3);
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

// execFindNodeClassVersion @ 14b3ef820

void __cdecl
UMetaSoundBuilderBase::execFindNodeClassVersion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  FMetasoundFrontendNode *pFVar3;
  FMetasoundFrontendClass *pFVar4;
  FMetasoundFrontendVersionNumber *pFVar5;
  FMetasoundFrontendVersion *pFVar6;
  FGuid *pFVar7;
  uchar *puVar8;
  uchar local_res8 [8];
  FGuid local_38;
  uint local_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar7 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar7 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar8 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMetaSoundFrontendDocumentBuilder::FindNode
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar7,(FGuid *)0x0);
  if (pFVar3 != (FMetasoundFrontendNode *)0x0) {
    pFVar4 = FMetaSoundFrontendDocumentBuilder::FindDependency
                       ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),&pFVar3->ClassID);
    if (pFVar4 != (FMetasoundFrontendClass *)0x0) {
      *puVar8 = '\0';
      FMetasoundFrontendClassName::GetFullName(&(pFVar4->Metadata).ClassName);
      pFVar5 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar4->Metadata);
      iStack_20 = (*pFVar5).Major;
      iStack_1c = (*pFVar5).Minor;
      goto LAB_14b3ef95a;
    }
  }
  *puVar8 = '\x01';
  pFVar6 = FMetasoundFrontendVersion::GetInvalid();
  local_28 = (pFVar6->Name).ComparisonIndex.Value;
  uStack_24 = (pFVar6->Name).Number;
  iStack_20 = (pFVar6->Number).Major;
  iStack_1c = (pFVar6->Number).Minor;
LAB_14b3ef95a:
  *(uint *)param_3 = local_28;
  *(uint *)((longlong)param_3 + 4) = uStack_24;
  *(int *)((longlong)param_3 + 8) = iStack_20;
  *(int *)((longlong)param_3 + 0xc) = iStack_1c;
  return;
}

// execFindNodeInputByName @ 14b3ef980

void __cdecl
UMetaSoundBuilderBase::execFindNodeInputByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FMetaSoundBuilderNodeInputHandle *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  FGuid *pFVar5;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18;
  FGuid local_48;
  FMetaSoundBuilderNodeInputHandle local_38;
  
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pFVar5 = &local_48;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar5 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FindNodeInputByName((UMetaSoundBuilderBase *)param_1,&local_38,
                               (FMetaSoundNodeHandle *)pFVar5,local_res18,pEVar4);
  uVar2 = *(undefined8 *)&pFVar3->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = *(undefined8 *)&pFVar3->field_0x18;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&pFVar3->field_0x10;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  return;
}

// execFindNodeInputParent @ 14b3efb00

void __cdecl
UMetaSoundBuilderBase::execFindNodeInputParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FGuid *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FGuid local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::ContainsNode
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar4,(FGuid *)0x0);
  if (bVar3) {
    *puVar5 = '\0';
    local_38.A = pFVar4->A;
    local_38.B = pFVar4->B;
    local_38.C = pFVar4->C;
    local_38.D = pFVar4->D;
  }
  else {
    *puVar5 = '\x01';
    local_38.A = 0;
    local_38.B = 0;
    local_38.C = 0;
    local_38.D = 0;
  }
  *(uint *)param_3 = local_38.A;
  *(uint *)((longlong)param_3 + 4) = local_38.B;
  *(uint *)((longlong)param_3 + 8) = local_38.C;
  *(uint *)((longlong)param_3 + 0xc) = local_38.D;
  return;
}

// execFindNodeInputs @ 14b3efc40

void __cdecl
UMetaSoundBuilderBase::execFindNodeInputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  FGuid *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  EMetaSoundBuilderResult local_res10 [8];
  undefined8 local_res18;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> local_38;
  FGuid local_28;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_28;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar3 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = 0;
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FindNodeInputsByDataType
            ((UMetaSoundBuilderBase *)param_1,&local_38,(FMetaSoundNodeHandle *)pFVar3,pEVar4,
             (FName)0x0);
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
  return;
}

// execFindNodeInputsByDataType @ 14b3efda0

void __cdecl
UMetaSoundBuilderBase::execFindNodeInputsByDataType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  FGuid *pFVar4;
  EMetaSoundBuilderResult *pEVar5;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18 [2];
  FGuid local_48;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> local_38;
  
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
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
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_48;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  pEVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = FindNodeInputsByDataType
                     ((UMetaSoundBuilderBase *)param_1,&local_38,(FMetaSoundNodeHandle *)pFVar4,
                      pEVar5,local_res18[0]);
  if (param_3 != pTVar3) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar3->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execFindNodeOutputByName @ 14b3eff50

void __cdecl
UMetaSoundBuilderBase::execFindNodeOutputByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FMetaSoundBuilderNodeOutputHandle *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  FGuid *pFVar5;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18;
  FGuid local_48;
  FMetaSoundBuilderNodeOutputHandle local_38;
  
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pFVar5 = &local_48;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar5 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FindNodeOutputByName
                     ((UMetaSoundBuilderBase *)param_1,&local_38,(FMetaSoundNodeHandle *)pFVar5,
                      local_res18,pEVar4);
  uVar2 = *(undefined8 *)&pFVar3->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = *(undefined8 *)&pFVar3->field_0x18;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&pFVar3->field_0x10;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  return;
}

// execFindNodeOutputParent @ 14b3f00d0

void __cdecl
UMetaSoundBuilderBase::execFindNodeOutputParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FGuid *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FGuid local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::ContainsNode
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar4,(FGuid *)0x0);
  if (bVar3) {
    *puVar5 = '\0';
    local_38.A = pFVar4->A;
    local_38.B = pFVar4->B;
    local_38.C = pFVar4->C;
    local_38.D = pFVar4->D;
  }
  else {
    *puVar5 = '\x01';
    local_38.A = 0;
    local_38.B = 0;
    local_38.C = 0;
    local_38.D = 0;
  }
  *(uint *)param_3 = local_38.A;
  *(uint *)((longlong)param_3 + 4) = local_38.B;
  *(uint *)((longlong)param_3 + 8) = local_38.C;
  *(uint *)((longlong)param_3 + 0xc) = local_38.D;
  return;
}

// execFindNodeOutputs @ 14b3f0210

void __cdecl
UMetaSoundBuilderBase::execFindNodeOutputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  FGuid *pFVar3;
  EMetaSoundBuilderResult *pEVar4;
  EMetaSoundBuilderResult local_res10 [8];
  undefined8 local_res18;
  TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> local_38;
  FGuid local_28;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_28;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar3 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = 0;
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FindNodeOutputsByDataType
            ((UMetaSoundBuilderBase *)param_1,&local_38,(FMetaSoundNodeHandle *)pFVar3,pEVar4,
             (FName)0x0);
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
  return;
}

// execFindNodeOutputsByDataType @ 14b3f0370

void __cdecl
UMetaSoundBuilderBase::execFindNodeOutputsByDataType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  FGuid *pFVar4;
  EMetaSoundBuilderResult *pEVar5;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18 [2];
  FGuid local_48;
  TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> local_38;
  
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
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
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_48;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  pEVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = FindNodeOutputsByDataType
                     ((UMetaSoundBuilderBase *)param_1,&local_38,(FMetaSoundNodeHandle *)pFVar4,
                      pEVar5,local_res18[0]);
  if (param_3 != pTVar3) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar3->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execGetGraphInputDefault @ 14b3f1250

void __cdecl
UMetaSoundBuilderBase::execGetGraphInputDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  FMetasoundFrontendLiteral local_88;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FMetaSoundFrontendDocumentBuilder::GetGraphInputDefault
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res10,(FGuid *)0x0);
  if (pFVar2 == (FMetasoundFrontendLiteral *)0x0) {
    *puVar3 = '\x01';
    local_88._1_2_ = 0;
    local_88._3_1_ = 0;
    local_88.Type = None;
    local_88.AsNumDefault = 0;
    local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsBoolean.ArrayNum = 0;
    local_88.AsBoolean.ArrayMax = 0;
    local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsInteger.ArrayNum = 0;
    local_88.AsInteger.ArrayMax = 0;
    local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsFloat.ArrayNum = 0;
    local_88.AsFloat.ArrayMax = 0;
    local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsString.ArrayNum = 0;
    local_88.AsString.ArrayMax = 0;
    local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsUObject.ArrayNum = 0;
    local_88.AsUObject.ArrayMax = 0;
  }
  else {
    *puVar3 = '\0';
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_88,pFVar2);
  }
  FMetasoundFrontendLiteral::operator=(param_3,&local_88);
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetGraphInputNames @ 14b3f13f0

void __cdecl
UMetaSoundBuilderBase::execGetGraphInputNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  int iVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendClassInterface *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
  pFVar7 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar6->RootGraph);
  iVar2 = (pFVar7->Inputs).ArrayNum;
  pFVar8 = (pFVar7->Inputs).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((pFVar7->Inputs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) break;
    iVar5 = (int)local_30;
    if ((int)local_30 == local_30._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_38,(int *)((longlong)&local_30 + 4));
    }
    local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
    uVar4 = *(undefined8 *)pFVar8;
    pFVar8 = pFVar8 + 0x48;
    *(undefined8 *)(local_38.Data + (longlong)iVar5 * 8) = uVar4;
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_30;
    *(int *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetGraphOutputNames @ 14b3f1550

void __cdecl
UMetaSoundBuilderBase::execGetGraphOutputNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  int iVar4;
  FMetasoundFrontendDocument *pFVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
  pFVar6 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar5->RootGraph);
  iVar1 = (pFVar6->Outputs).ArrayNum;
  pFVar7 = (pFVar6->Outputs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x34;
  while( true ) {
    if ((pFVar6->Outputs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    iVar4 = (int)local_30;
    if ((int)local_30 == local_30._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_38,(int *)((longlong)&local_30 + 4));
    }
    local_30 = CONCAT44(local_30._4_4_,iVar4 + 1);
    uVar3 = *(undefined8 *)pFVar7;
    pFVar7 = pFVar7 + 0x34;
    *(undefined8 *)(local_38.Data + (longlong)iVar4 * 8) = uVar3;
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_30;
    *(int *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetGraphVariableDefault @ 14b3f16b0

void __cdecl
UMetaSoundBuilderBase::execGetGraphVariableDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  FMetasoundFrontendLiteral local_88;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FMetaSoundFrontendDocumentBuilder::GetGraphVariableDefault
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res10,(FGuid *)0x0);
  if (pFVar2 == (FMetasoundFrontendLiteral *)0x0) {
    *puVar3 = '\x01';
    local_88._1_2_ = 0;
    local_88._3_1_ = 0;
    local_88.Type = None;
    local_88.AsNumDefault = 0;
    local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsBoolean.ArrayNum = 0;
    local_88.AsBoolean.ArrayMax = 0;
    local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsInteger.ArrayNum = 0;
    local_88.AsInteger.ArrayMax = 0;
    local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsFloat.ArrayNum = 0;
    local_88.AsFloat.ArrayMax = 0;
    local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsString.ArrayNum = 0;
    local_88.AsString.ArrayMax = 0;
    local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsUObject.ArrayNum = 0;
    local_88.AsUObject.ArrayMax = 0;
  }
  else {
    *puVar3 = '\0';
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_88,pFVar2);
  }
  FMetasoundFrontendLiteral::operator=(param_3,&local_88);
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetNodeInputClassDefault @ 14b3f2b50

void __cdecl
UMetaSoundBuilderBase::execGetNodeInputClassDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  FMetasoundFrontendVertex *pFVar3;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar4;
  FMetasoundFrontendClassInputDefault *pFVar5;
  FGuid *pFVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  FGuid local_a8;
  undefined8 local_98;
  undefined8 local_90;
  FMetasoundFrontendLiteral local_88;
  
  local_a8.A = 0;
  local_a8.B = 0;
  local_a8.C = 0;
  local_a8.D = 0;
  local_98 = 0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_a8;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar6 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar6,pFVar6 + 1,
                      (FGuid *)0x0);
  if (pFVar3 != (FMetasoundFrontendVertex *)0x0) {
    pTVar4 = FMetaSoundFrontendDocumentBuilder::FindNodeClassInputDefaults
                       ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar6,pFVar3->Name,
                        (FGuid *)0x0);
    if (pTVar4 != (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar5 = Metasound::Engine::FindPreferredPage_ThreadSafe<FMetasoundFrontendClassInputDefault>
                         (pTVar4);
      if (pFVar5 != (FMetasoundFrontendClassInputDefault *)0x0) {
        *puVar7 = '\0';
        FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_88,&pFVar5->Literal);
        goto LAB_14b3f2cbe;
      }
    }
  }
  *puVar7 = '\x01';
  local_88._1_2_ = 0;
  local_88._3_1_ = 0;
  local_88.Type = None;
  local_88.AsNumDefault = 0;
  local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsBoolean.ArrayNum = 0;
  local_88.AsBoolean.ArrayMax = 0;
  local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsInteger.ArrayNum = 0;
  local_88.AsInteger.ArrayMax = 0;
  local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsFloat.ArrayNum = 0;
  local_88.AsFloat.ArrayMax = 0;
  local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsString.ArrayNum = 0;
  local_88.AsString.ArrayMax = 0;
  local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsUObject.ArrayNum = 0;
  local_88.AsUObject.ArrayMax = 0;
LAB_14b3f2cbe:
  FMetasoundFrontendLiteral::operator=(param_3,&local_88);
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetNodeInputData @ 14b3f2d40

void __cdecl
UMetaSoundBuilderBase::execGetNodeInputData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FName *pFVar2;
  FProperty *pFVar3;
  FMetasoundFrontendVertex *pFVar4;
  FName *pFVar5;
  FName *pFVar6;
  uchar *puVar7;
  FGuid *pFVar8;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res20;
  FGuid local_60;
  undefined8 local_50;
  undefined8 local_48;
  
  local_60.A = 0;
  local_60.B = 0;
  local_60.C = 0;
  local_60.D = 0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar8 = &local_60;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar8 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_res10;
  if (pFVar2 != (FName *)0x0) {
    pFVar5 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_res20;
  if (pFVar2 != (FName *)0x0) {
    pFVar6 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar8,pFVar8 + 1,
                      (FGuid *)0x0);
  if (pFVar4 == (FMetasoundFrontendVertex *)0x0) {
    pFVar5->ComparisonIndex = 0;
    pFVar5->Number = 0;
    pFVar6->ComparisonIndex = 0;
    pFVar6->Number = 0;
    *puVar7 = '\x01';
  }
  else {
    *pFVar5 = pFVar4->Name;
    *pFVar6 = pFVar4->TypeName;
    *puVar7 = '\0';
  }
  return;
}

// execGetNodeInputDefault @ 14b3f2f20

void __cdecl
UMetaSoundBuilderBase::execGetNodeInputDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  FMetasoundFrontendVertexLiteral *pFVar3;
  FGuid *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FGuid local_a8;
  undefined8 local_98;
  undefined8 local_90;
  FMetasoundFrontendLiteral local_88;
  
  local_a8.A = 0;
  local_a8.B = 0;
  local_a8.C = 0;
  local_a8.D = 0;
  local_98 = 0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_a8;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMetaSoundFrontendDocumentBuilder::FindNodeInputDefault
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar4,pFVar4 + 1,
                      (FGuid *)0x0);
  if (pFVar3 == (FMetasoundFrontendVertexLiteral *)0x0) {
    *puVar5 = '\x01';
    local_88._1_2_ = 0;
    local_88._3_1_ = 0;
    local_88.Type = None;
    local_88.AsNumDefault = 0;
    local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsBoolean.ArrayNum = 0;
    local_88.AsBoolean.ArrayMax = 0;
    local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsInteger.ArrayNum = 0;
    local_88.AsInteger.ArrayMax = 0;
    local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsFloat.ArrayNum = 0;
    local_88.AsFloat.ArrayMax = 0;
    local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsString.ArrayNum = 0;
    local_88.AsString.ArrayMax = 0;
    local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AsUObject.ArrayNum = 0;
    local_88.AsUObject.ArrayMax = 0;
  }
  else {
    *puVar5 = '\0';
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_88,&pFVar3->Value);
  }
  FMetasoundFrontendLiteral::operator=(param_3,&local_88);
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetNodeInputIsConstructorPin @ 14b3f30f0

void __cdecl
UMetaSoundBuilderBase::execGetNodeInputIsConstructorPin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMetasoundFrontendVertexAccessType EVar2;
  FGuid *pFVar3;
  FGuid local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
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
  pFVar3 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar3 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = FMetaSoundFrontendDocumentBuilder::GetNodeInputAccessType
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar3,pFVar3 + 1,
                     (FGuid *)0x0);
  *(bool *)param_3 = EVar2 == Value;
  return;
}

// execGetNodeOutputData @ 14b3f31b0

void __cdecl
UMetaSoundBuilderBase::execGetNodeOutputData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FName *pFVar2;
  FProperty *pFVar3;
  FMetasoundFrontendVertex *pFVar4;
  FName *pFVar5;
  FName *pFVar6;
  uchar *puVar7;
  FGuid *pFVar8;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res20;
  FGuid local_60;
  undefined8 local_50;
  undefined8 local_48;
  
  local_60.A = 0;
  local_60.B = 0;
  local_60.C = 0;
  local_60.D = 0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar8 = &local_60;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar8 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_res10;
  if (pFVar2 != (FName *)0x0) {
    pFVar5 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_res20;
  if (pFVar2 != (FName *)0x0) {
    pFVar6 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar8,pFVar8 + 1,
                      (FGuid *)0x0);
  if (pFVar4 == (FMetasoundFrontendVertex *)0x0) {
    pFVar5->ComparisonIndex = 0;
    pFVar5->Number = 0;
    pFVar6->ComparisonIndex = 0;
    pFVar6->Number = 0;
    *puVar7 = '\x01';
  }
  else {
    *pFVar5 = pFVar4->Name;
    *pFVar6 = pFVar4->TypeName;
    *puVar7 = '\0';
  }
  return;
}

// execGetNodeOutputIsConstructorPin @ 14b3f3390

void __cdecl
UMetaSoundBuilderBase::execGetNodeOutputIsConstructorPin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMetasoundFrontendVertexAccessType EVar2;
  FGuid *pFVar3;
  FGuid local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
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
  pFVar3 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar3 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar3,pFVar3 + 1,
                     (FGuid *)0x0);
  *(bool *)param_3 = EVar2 == Value;
  return;
}

// execGetReferencedPresetAsset @ 14b3f3800

void __cdecl
UMetaSoundBuilderBase::execGetReferencedPresetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FMetasoundAssetBase *pFVar2;
  undefined8 uVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FMetaSoundFrontendDocumentBuilder::IsPreset
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
  if (bVar1) {
    pFVar2 = FMetaSoundFrontendDocumentBuilder::GetReferencedPresetAsset
                       ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
    if (pFVar2 != (FMetasoundAssetBase *)0x0) {
      uVar3 = (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2);
      *(undefined8 *)param_3 = uVar3;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetRootGraphClassName @ 14b3f3870

void __cdecl
UMetaSoundBuilderBase::execGetRootGraphClassName(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  longlong lVar2;
  FMetasoundFrontendDocument *pFVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
  lVar2 = (pFVar3->RootGraph)._padding_;
  lVar1 = (pFVar3->RootGraph)._padding_;
  *(longlong *)param_3 = (pFVar3->RootGraph)._padding_;
  *(longlong *)((longlong)param_3 + 8) = lVar2;
  *(longlong *)((longlong)param_3 + 0x10) = lVar1;
  return;
}

// execInterfaceIsDeclared @ 14b3f40d0

void __cdecl
UMetaSoundBuilderBase::execInterfaceIsDeclared(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::IsInterfaceDeclared
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res8);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsPreset @ 14b3f44e0

void __cdecl UMetaSoundBuilderBase::execIsPreset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FMetaSoundFrontendDocumentBuilder::IsPreset
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
  *(bool *)param_3 = bVar1;
  return;
}

// execNodeInputIsConnected @ 14b3f46a0

void __cdecl
UMetaSoundBuilderBase::execNodeInputIsConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGuid *pFVar3;
  FGuid local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
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
  pFVar3 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar3 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::IsNodeInputConnected
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar3,pFVar3 + 1,
                     (FGuid *)0x0);
  *(bool *)param_3 = bVar2;
  return;
}

// execNodeOutputIsConnected @ 14b3f4760

void __cdecl
UMetaSoundBuilderBase::execNodeOutputIsConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGuid *pFVar3;
  FGuid local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  local_18 = 0;
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
  pFVar3 = &local_28;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar3 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::IsNodeOutputConnected
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar3,pFVar3 + 1,
                     (FGuid *)0x0);
  *(bool *)param_3 = bVar2;
  return;
}

// execNodesAreConnected @ 14b3f4820

void __cdecl
UMetaSoundBuilderBase::execNodesAreConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FMetasoundFrontendEdge local_58;
  
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_78 = 0;
  uStack_70 = 0;
  puVar4 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_68 = 0;
  uStack_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  puVar3 = (uchar *)&local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58.FromNodeID._0_8_ = *(undefined8 *)puVar4;
  local_58.FromNodeID._8_8_ = *(undefined8 *)(puVar4 + 8);
  local_58.ToNodeID._0_8_ = *(undefined8 *)puVar3;
  local_58.ToNodeID._8_8_ = *(undefined8 *)(puVar3 + 8);
  local_58.FromVertexID._0_8_ = *(undefined8 *)(puVar4 + 0x10);
  local_58.FromVertexID._8_8_ = *(undefined8 *)(puVar4 + 0x18);
  local_58.ToVertexID._0_8_ = *(undefined8 *)(puVar3 + 0x10);
  local_58.ToVertexID._8_8_ = *(undefined8 *)(puVar3 + 0x18);
  bVar2 = FMetaSoundFrontendDocumentBuilder::ContainsEdge
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),&local_58,(FGuid *)0x0);
  *(bool *)param_3 = bVar2;
  return;
}

// execRemoveGraphInput @ 14b3f5050

void __cdecl
UMetaSoundBuilderBase::execRemoveGraphInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveGraphInput
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res10,true);
  *puVar3 = !bVar2;
  return;
}

// execRemoveGraphOutput @ 14b3f5130

void __cdecl
UMetaSoundBuilderBase::execRemoveGraphOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveGraphOutput
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res10);
  *puVar3 = !bVar2;
  return;
}

// execRemoveGraphVariable @ 14b3f5210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMetaSoundBuilderBase::execRemoveGraphVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMetasoundFrontendVariable *pFVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res20;
  FString local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20 = local_res10;
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMetaSoundFrontendDocumentBuilder::FindGraphVariable
                     ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res10,(FGuid *)0x0);
  if (pFVar3 != (FMetasoundFrontendVariable *)0x0) {
    bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveGraphVariable
                      ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res20,(FGuid *)0x0);
    *puVar4 = !bVar2;
    return;
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&local_res20,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  *puVar4 = '\x01';
  return;
}

// execRemoveInterface @ 14b3f5370

void __cdecl
UMetaSoundBuilderBase::execRemoveInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveInterface
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res10);
  *puVar3 = !bVar2;
  return;
}

// execRemoveNode @ 14b3f5450

void __cdecl UMetaSoundBuilderBase::execRemoveNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FGuid *pFVar5;
  bool bVar6;
  uchar local_res8 [8];
  int local_res10 [2];
  FGuid local_38;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::RemoveNode
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar5,(FGuid *)0x0);
  if ((bVar3) && (bVar6)) {
    FMetaSoundFrontendDocumentBuilder::RemoveUnusedDependencies
              ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
  }
  *puVar4 = !bVar3;
  return;
}

// execRemoveNodeInputDefault @ 14b3f55b0

void __cdecl
UMetaSoundBuilderBase::execRemoveNodeInputDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FGuid *pFVar5;
  uchar local_res8 [8];
  FGuid local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_28 = 0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_38;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::RemoveNodeInputDefault
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar5,pFVar5 + 1,
                     (FGuid *)0x0);
  *puVar4 = !bVar3;
  return;
}

// execRemoveUnusedDependencies @ 14b3f56c0

void __cdecl
UMetaSoundBuilderBase::execRemoveUnusedDependencies(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMetaSoundFrontendDocumentBuilder::RemoveUnusedDependencies
            ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1));
  return;
}

// execSetGraphInputAccessType @ 14b3f5840

void __cdecl
UMetaSoundBuilderBase::execSetGraphInputAccessType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  EMetasoundFrontendVertexAccessType local_res10 [2];
  FName local_res20;
  
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
  local_res10[0] = Reference;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res20,local_res10[0]);
  *puVar3 = !bVar2;
  return;
}

// execSetGraphInputDataType @ 14b3f5960

void __cdecl
UMetaSoundBuilderBase::execSetGraphInputDataType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res20;
  
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
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::SetGraphInputDataType
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res20,local_res10);
  *puVar3 = !bVar2;
  return;
}

// execSetGraphInputDefault @ 14b3f5a80

void __cdecl
UMetaSoundBuilderBase::execSetGraphInputDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  FMetasoundFrontendLiteral *pFVar4;
  uchar *puVar5;
  FMetasoundFrontendLiteral *pFVar6;
  uchar local_res8 [8];
  FName local_res10;
  FMetasoundFrontendLiteral local_e8;
  FMetasoundFrontendLiteral local_88;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_e8.Type = None;
  local_e8.AsNumDefault = 0;
  local_e8.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsBoolean.ArrayNum = 0;
  local_e8.AsBoolean.ArrayMax = 0;
  local_e8.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsInteger.ArrayNum = 0;
  local_e8.AsInteger.ArrayMax = 0;
  local_e8.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsFloat.ArrayNum = 0;
  local_e8.AsFloat.ArrayMax = 0;
  local_e8.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsString.ArrayNum = 0;
  local_e8.AsString.ArrayMax = 0;
  local_e8.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsUObject.ArrayNum = 0;
  local_e8.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pFVar4 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_e8;
  if (pFVar4 != (FMetasoundFrontendLiteral *)0x0) {
    pFVar6 = pFVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res10;
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_88,pFVar6);
  bVar3 = FMetaSoundFrontendDocumentBuilder::SetGraphInputDefault
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),FVar2,pFVar4,(FGuid *)0x0);
  *puVar5 = !bVar3;
  if (local_e8.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_e8.AsString.AllocatorInstance.Data,local_e8.AsString.ArrayNum);
  if (local_e8.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsString.AllocatorInstance.Data);
  }
  if (local_e8.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsFloat.AllocatorInstance.Data);
  }
  if (local_e8.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsInteger.AllocatorInstance.Data);
  }
  if (local_e8.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execSetGraphInputName @ 14b3f5c60

void __cdecl
UMetaSoundBuilderBase::execSetGraphInputName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res20;
  
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
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::SetGraphInputName
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res20,local_res10);
  *puVar3 = !bVar2;
  return;
}

// execSetGraphOutputAccessType @ 14b3f5d80

void __cdecl
UMetaSoundBuilderBase::execSetGraphOutputAccessType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  EMetasoundFrontendVertexAccessType local_res10 [2];
  FName local_res20;
  
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
  local_res10[0] = Reference;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res20,local_res10[0]);
  *puVar3 = !bVar2;
  return;
}

// execSetGraphOutputDataType @ 14b3f5ea0

void __cdecl
UMetaSoundBuilderBase::execSetGraphOutputDataType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res20;
  
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
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::SetGraphOutputDataType
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res20,local_res10);
  *puVar3 = !bVar2;
  return;
}

// execSetGraphOutputName @ 14b3f5fc0

void __cdecl
UMetaSoundBuilderBase::execSetGraphOutputName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res20;
  
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
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundFrontendDocumentBuilder::SetGraphOutputName
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),local_res20,local_res10);
  *puVar3 = !bVar2;
  return;
}

// execSetNodeInputDefault @ 14b3f60e0

void __cdecl
UMetaSoundBuilderBase::execSetNodeInputDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *pFVar5;
  FGuid *pFVar6;
  uchar local_res8 [8];
  FGuid local_a8;
  undefined8 local_98;
  undefined8 local_90;
  FMetasoundFrontendLiteral local_88;
  
  local_a8.A = 0;
  local_a8.B = 0;
  local_a8.C = 0;
  local_a8.D = 0;
  local_98 = 0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_88.Type = None;
  local_88.AsNumDefault = 0;
  pFVar6 = &local_a8;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar6 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsBoolean.ArrayNum = 0;
  local_88.AsBoolean.ArrayMax = 0;
  local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsInteger.ArrayNum = 0;
  local_88.AsInteger.ArrayMax = 0;
  local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsFloat.ArrayNum = 0;
  local_88.AsFloat.ArrayMax = 0;
  local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsString.ArrayNum = 0;
  local_88.AsString.ArrayMax = 0;
  local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsUObject.ArrayNum = 0;
  local_88.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_88;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundFrontendDocumentBuilder::SetNodeInputDefault
                    ((FMetaSoundFrontendDocumentBuilder *)(param_1 + 1),pFVar6,pFVar6 + 1,pFVar5,
                     (FGuid *)0x0);
  *puVar4 = !bVar3;
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

