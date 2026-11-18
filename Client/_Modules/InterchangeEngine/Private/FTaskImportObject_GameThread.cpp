// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// operator() @ 14e4def50

void __thiscall
`UE::Interchange::FTaskImportObject_GameThread::Execute'::__l2::<lambda_2>::operator()(void *this)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UPackage *pUVar9;
  FString *pFVar10;
  FName local_res8;
  wchar_t *local_58;
  undefined4 uStack_4c;
  FString local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  FString local_18;
  
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)(*(longlong *)this + 0x121) == '\0') {
    return;
  }
  if ((int)(*(longlong **)((longlong)this + 0x20))[1] == 0) {
    local_58 = L"";
  }
  else {
    local_58 = (wchar_t *)**(longlong **)((longlong)this + 0x20);
    iVar5 = 0;
    if (local_58 == (wchar_t *)0x0) goto LAB_14e4defc4;
  }
  sVar6 = wcslen(local_58);
  iVar5 = (int)sVar6;
LAB_14e4defc4:
  pUVar8 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
  pUVar7 = UObjectRedirector::GetPrivateStaticClass();
  local_38._12_4_ = uStack_4c;
  local_38.Size = iVar5;
  local_38.DataPtr = local_58;
  pUVar8 = StaticFindObject(pUVar7,pUVar8,&local_38,None);
  if ((pUVar8 != (UObject *)0x0) &&
     (*(UObjectBaseUtility **)(pUVar8 + 1) != (UObjectBaseUtility *)0x0)) {
    puVar2 = *(undefined8 **)((longlong)this + 0x10);
    pUVar9 = UObjectBaseUtility::GetPackage(*(UObjectBaseUtility **)(pUVar8 + 1));
    *puVar2 = pUVar9;
    puVar2 = *(undefined8 **)((longlong)this + 0x20);
    pFVar10 = FPackageName::GetLongPackageAssetName(&local_28,*(FString **)((longlong)this + 0x18));
    iVar5 = *(int *)(puVar2 + 1);
    iVar1 = (pFVar10->Data).ArrayNum;
    if (iVar1 == iVar5) {
      if (iVar1 < 2) {
        bVar4 = true;
      }
      else {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,(wchar_t *)*puVar2);
        bVar4 = iVar5 == 0;
      }
    }
    else {
      bVar4 = iVar5 + iVar1 == 1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      local_res8 = *(FName *)(**(longlong **)((longlong)this + 0x10) + 0x18);
      ::FName::ToString(&local_res8,&local_48);
      pFVar10 = FPackageName::GetLongPackageAssetName(&local_18,&local_48);
      ::FString::operator=(*(FString **)((longlong)this + 0x20),pFVar10);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Execute @ 14e4ece40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Interchange::FTaskImportObject_GameThread::Execute(FTaskImportObject_GameThread *this)

{
  longlong *plVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  UInterchangeFactoryBaseNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  UPackage *pUVar6;
  UInterchangeResultWarning_Generic *pUVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  atomic<int> aVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FString *pFVar16;
  UInterchangeFactoryBase *pUVar17;
  UObjectBase *pUVar18;
  UInterchangeResultError_Generic *pUVar19;
  UObject *pUVar20;
  FText *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  longlong lVar24;
  UClass *pUVar25;
  size_t sVar26;
  FUObjectItem *pFVar27;
  void *pvVar28;
  FAssetCompilingManager *this_00;
  FImportedObjectInfo *this_01;
  longlong lVar29;
  uint uVar30;
  ForAnyElementType FVar31;
  FImportAsyncHelper *this_02;
  UObjectBase *this_03;
  bool bVar32;
  bool bVar33;
  FLLMScope local_res18 [2];
  undefined1 local_res20 [8];
  FString local_6a8;
  FString local_698;
  UPackage *local_688;
  UInterchangeFactoryBase *local_680;
  ForAnyElementType local_678;
  undefined8 local_670;
  ForAnyElementType local_668;
  undefined8 local_660;
  ForAnyElementType local_658;
  undefined8 local_650;
  FString local_648;
  FString local_638;
  UInterchangeResultWarning_Generic *local_628;
  TReferenceControllerBase<1> *local_620;
  char local_618 [8];
  UObjectBaseUtility *local_610;
  FString local_608;
  void *local_5f8;
  undefined8 local_5f0;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FSoftObjectPath local_5b8;
  FSoftObjectPath local_598;
  FSoftObjectPath local_578;
  FSoftObjectPath local_558;
  FSoftObjectPath local_538;
  UPackage *local_518;
  FString local_510;
  UInterchangeFactoryBaseNode *local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  UInterchangeBaseNodeContainer *local_4e8;
  UObjectBase *pUStack_4e0;
  FName local_4d8;
  UInterchangeBaseNodeContainer *local_4d0;
  FMemScope local_4c8;
  UPackage *local_4c0;
  UInterchangeManager *local_4b8;
  FName local_4b0;
  undefined1 local_4a8 [4];
  undefined1 local_4a4 [4];
  TPairInitializer<FString_const_&,UPackage_*_const_&> local_4a0;
  FScriptContainerElement *local_488;
  int iStack_480;
  undefined4 uStack_47c;
  FScriptContainerElement *local_478;
  int iStack_470;
  undefined4 uStack_46c;
  FName local_468;
  FText local_460;
  FText local_450;
  FText local_440;
  FName local_430;
  FText local_428;
  FName local_418;
  undefined1 local_410 [8];
  UObjectBase *local_408;
  FName local_400;
  FImportAsyncHelper *local_3f8;
  TReferenceControllerBase<1> *local_3f0;
  UPackage **local_3e8;
  FString *local_3e0;
  FString *local_3d8;
  FString local_3d0;
  FString local_3c0;
  FText local_3b0;
  FText local_3a0;
  FText local_390;
  FText local_380;
  FString *local_370;
  UPackage **local_368;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  UObjectBase **local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FText local_2d8;
  FText local_2c8;
  TStringView<wchar_t> local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FText local_248;
  FText local_238;
  TArrayView<UObject_*_const,int> local_228;
  FString local_218;
  FString local_208;
  FText local_1f8;
  FText local_1e8;
  FString local_1d8;
  FText local_1c8;
  FText local_1b8;
  FScriptContainerElement *local_1a8 [2];
  FScriptContainerElement *local_198 [2];
  FText local_188;
  FText local_178;
  TStringView<wchar_t> local_168;
  FString local_158;
  FText local_148;
  FTextFormat local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FTextFormat local_f8;
  FTextFormat local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FTextFormat local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  
  this_02 = (FImportAsyncHelper *)0x0;
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId263,"UE::Interchange::FTaskImportObject_GameThread::DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
               ,0x107);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId263);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name268,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name268,false,None,Default,true);
  FMemScope::FMemScope(&local_4c8,&LLMScope_Name268,true);
  local_620 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  if (local_620 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e4ecf46:
    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                       ("AsyncHelper.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                        ,0x111,L"");
    if (bVar33) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar5 = local_620->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        local_620 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4ecf46;
      }
      LOCK();
      aVar12 = local_620->SharedReferenceCount;
      bVar33 = aVar5 == aVar12;
      if (bVar33) {
        local_620->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar12 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar12;
    } while (!bVar33);
    this_02 = (this->WeakAsyncHelper).Object;
    if (this_02 == (FImportAsyncHelper *)0x0) goto LAB_14e4ecf46;
  }
  bVar33 = false;
  bVar9 = false;
  if ((this_02 == (FImportAsyncHelper *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this_02->bCancel != (atomic<bool>)0x0) ||
     (this->FactoryNode == (UInterchangeFactoryBaseNode *)0x0)) goto LAB_14e4eee08;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                         ,0x124,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this_02 == (FImportAsyncHelper *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar16 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this->FactoryNode,&local_1d8);
  pUVar17 = FImportAsyncHelper::GetCreatedFactory(this_02,pFVar16);
  local_680 = pUVar17;
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (pUVar17 == (UInterchangeFactoryBase *)0x0) {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2649133002084319528>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                       ,0x128,"Factory");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_14e4eee08;
  }
  local_688 = (UPackage *)0x0;
  local_698.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_698.Data.ArrayNum = 0;
  local_698.Data.ArrayMax = 0;
  local_6a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.Data.ArrayNum = 0;
  local_6a8.Data.ArrayMax = 0;
  if ((this_02 == (FImportAsyncHelper *)0x0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar33)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_03 = (UObjectBase *)(this_02->TaskData).ReimportObject;
  Interchange::Private::InternalGetPackageName
            (this_02,this->SourceIndex,&this->PackageBasePath,this->FactoryNode,&local_698,
             &local_6a8);
  local_5f8 = (void *)0x0;
  local_5f0 = 0;
  pUVar18 = (UObjectBase *)
            (**(code **)(pUVar17->_padding_ + 0x348))
                      (pUVar17,this_03,this->FactoryNode,&local_698,&local_6a8,&local_5f8);
  if (pUVar18 != this_03) {
    this_03 = pUVar18;
  }
  if (local_5f8 != (void *)0x0) {
    FMemory::Free(local_5f8);
  }
  bVar33 = bVar9;
  if (GIsGarbageCollecting == false) {
    uVar14 = this->SourceIndex;
    if (((int)uVar14 < 0) || ((this_02->BaseNodeContainers).ArrayNum <= (int)uVar14)) {
      pUVar19 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>(pUVar17);
      uVar14 = this->SourceIndex;
      uVar30 = 0;
      if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
        uVar30 = ~uVar14 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar24 = *(longlong *)
                ((this_02->SourceDatas).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
      local_668.Data = (FScriptContainerElement *)0x0;
      iVar15 = *(int *)(lVar24 + 0x30);
      pvVar28 = *(void **)(lVar24 + 0x28);
      local_660 = CONCAT44(local_660._4_4_,iVar15);
      if (iVar15 == 0) {
        local_660 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar15,0,&local_668,iVar15,(int *)((longlong)&local_660 + 4));
        memcpy(local_668.Data,pvVar28,(longlong)iVar15 * 2);
      }
      plVar1 = &pUVar19->_padding_;
      if ((ForAnyElementType *)plVar1 != &local_668) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_668.Data;
        *(undefined4 *)&pUVar19->_padding_ = (undefined4)local_660;
        local_668.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&pUVar19->_padding_ + 4) = local_660._4_4_;
        local_660 = 0;
      }
      if (local_668.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_668.Data);
      }
      if (this_03 == (UObjectBase *)0x0) {
        pFVar16 = (FString *)
                  (**(code **)(this->FactoryNode->_padding_ + 0x2d8))(this->FactoryNode,local_1a8);
        ::FString::operator=((FString *)&pUVar19->_padding_,pFVar16);
        local_360.Data.AllocatorInstance.Data = local_1a8[0];
      }
      else {
        local_4b0 = (this_03->NamePrivate).Name;
        ::FName::ToString(&local_4b0,&local_360);
        ::FString::operator=((FString *)&pUVar19->_padding_,&local_360);
      }
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      pUVar20 = (UObject *)(**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar20);
      }
      pUVar19->_padding_ = (longlong)pUVar20;
      pFVar21 = FText::FromString(&local_d8,&local_6a8);
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (&local_1b8,L"FTaskImportObject_GameThread",L"InvalidBaseNodeContainer",
                           L"Cannot import asset \'{0}\'. The node container is invalid for this source index."
                          );
      pFVar23 = FTextFormat::FTextFormat(&local_c8,pFVar22,Default);
      pFVar21 = FText::Format<FText>(&local_1c8,pFVar23,pFVar21);
      FText::operator=(&pUVar19->Text,pFVar21);
      if (local_1c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
      }
      goto LAB_14e4eedd8;
    }
    uVar30 = 0;
    if ((int)uVar14 < (this_02->BaseNodeContainers).ArrayNum) {
      uVar30 = ~uVar14 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_4d0 = *(UInterchangeBaseNodeContainer **)
                 ((this_02->BaseNodeContainers).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
    if ((this_03 == (UObjectBase *)0x0) ||
       (bVar8 = Interchange::Private::ShouldReimportFactoryNode
                          (this->FactoryNode,local_4d0,(UObject *)this_03), !bVar8)) {
      bVar8 = false;
      if (this_03 == (UObjectBase *)0x0) goto LAB_14e4ed43c;
      bVar10 = false;
    }
    else {
      bVar8 = true;
LAB_14e4ed43c:
      bVar10 = true;
    }
    bVar10 = Interchange::Private::CanImportClass
                       (this_02,this->FactoryNode,this->SourceIndex,bVar10);
    if (!bVar10) goto LAB_14e4eede3;
    bVar10 = false;
    local_3f0 = local_620;
    if (local_620 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_620->SharedReferenceCount = (atomic<int>)((int)local_620->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3e8 = &local_688;
    local_3e0 = &local_698;
    local_3d8 = &local_6a8;
    local_3f8 = this_02;
    lVar24 = (**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
    pUVar25 = Z_Construct_UClass_UWorld_NoRegister();
    if (pUVar25 == (UClass *)0x0) {
LAB_14e4ed4ec:
      bVar4 = false;
    }
    else {
      iVar15 = (int)pUVar25->_padding_;
      if ((*(int *)(lVar24 + 0x38) < iVar15) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar25->_padding_)) goto LAB_14e4ed4ec;
      bVar4 = true;
    }
    bVar11 = UInterchangeBaseNode::IsEnabled((UInterchangeBaseNode *)this->FactoryNode);
    if (bVar11) {
      local_4b8 = UInterchangeManager::GetInterchangeManager();
      if (this_03 == (UObjectBase *)0x0) {
        Interchange::Private::InternalGetPackageName
                  (this_02,this->SourceIndex,&this->PackageBasePath,this->FactoryNode,&local_698,
                   &local_6a8);
        if (!bVar4) {
          local_5d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5d8.Data.ArrayNum = 0;
          local_5d8.Data.ArrayMax = 0;
          bVar8 = FPackageUtils::IsMapPackageAsset(&local_698,&local_5d8);
          if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
          }
          if (bVar8) {
            pUVar19 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>
                                (local_680);
            uVar14 = this->SourceIndex;
            uVar30 = 0;
            if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
              uVar30 = ~uVar14 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar24 = *(longlong *)
                      ((this_02->SourceDatas).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
            local_638.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_638.Data.ArrayNum = *(int *)(lVar24 + 0x30);
            lVar29 = (longlong)local_638.Data.ArrayNum;
            pvVar28 = *(void **)(lVar24 + 0x28);
            if (local_638.Data.ArrayNum == 0) {
              local_638.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_638.Data.ArrayNum,0,(ForAnyElementType *)&local_638,
                         local_638.Data.ArrayNum,&local_638.Data.ArrayMax);
              memcpy(local_638.Data.AllocatorInstance.Data,pvVar28,lVar29 * 2);
            }
            ::FString::operator=((FString *)&pUVar19->_padding_,&local_638);
            if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_638.Data.AllocatorInstance.Data);
            }
            uVar14 = local_6a8.Data.ArrayNum - 1;
            if (local_6a8.Data.ArrayNum == 0) {
              uVar14 = 0;
            }
            ::FString::AssignRange
                      ((FString *)&pUVar19->_padding_,
                       (wchar_t *)local_6a8.Data.AllocatorInstance.Data,uVar14);
            pUVar20 = (UObject *)(**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
              GC::MarkAsReachable(pUVar20);
            }
            pUVar19->_padding_ = (longlong)pUVar20;
            pFVar21 = FText::AsLocalizable_Advanced_LocText
                                (&local_148,L"FTaskImportObject_GameThread",L"MapExistsWithSameName"
                                 ,
                                 L"You cannot create an asset with this name because there is already a map file with the same name in this folder."
                                );
            FText::operator=(&pUVar19->Text,pFVar21);
            if (local_148.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_3f0);
              goto LAB_14e4eede3;
            }
            goto LAB_14e4eebac;
          }
        }
        bVar8 = false;
        FVar31.Data = (FScriptContainerElement *)L"";
        if (local_698.Data.ArrayNum != 0) {
          FVar31.Data = local_698.Data.AllocatorInstance.Data;
        }
        local_688 = FindPackage((UObject *)0x0,(wchar_t *)FVar31.Data);
        if (local_688 == (UPackage *)0x0) {
          FVar31.Data = (FScriptContainerElement *)L"";
          if (local_698.Data.ArrayNum != 0) {
            FVar31.Data = local_698.Data.AllocatorInstance.Data;
          }
          local_688 = LoadPackage((UPackage *)0x0,(wchar_t *)FVar31.Data,0x2002,(FArchive *)0x0,
                                  (FLinkerInstancingContext *)0x0);
          if (local_688 == (UPackage *)0x0) {
            FVar31.Data = (FScriptContainerElement *)L"";
            if (local_698.Data.ArrayNum != 0) {
              FVar31.Data = local_698.Data.AllocatorInstance.Data;
            }
            local_688 = CreatePackage((wchar_t *)FVar31.Data);
            if ((atomic<unsigned_int>)((uint)local_688->PackageFlagsPrivate | 1) !=
                local_688->PackageFlagsPrivate) {
              LOCK();
              local_688->PackageFlagsPrivate =
                   (atomic<unsigned_int>)((uint)local_688->PackageFlagsPrivate | 1);
              UNLOCK();
            }
            bVar8 = true;
          }
        }
        if (local_688 == (UPackage *)0x0) {
          pUVar19 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>(local_680);
          uVar14 = this->SourceIndex;
          uVar30 = 0;
          if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
            uVar30 = ~uVar14 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar24 = *(longlong *)
                    ((this_02->SourceDatas).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
          local_678.Data = (FScriptContainerElement *)0x0;
          iVar15 = *(int *)(lVar24 + 0x30);
          pvVar28 = *(void **)(lVar24 + 0x28);
          local_670 = CONCAT44(local_670._4_4_,iVar15);
          if (iVar15 == 0) {
            local_670 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar15,0,&local_678,iVar15,(int *)((longlong)&local_670 + 4));
            memcpy(local_678.Data,pvVar28,(longlong)iVar15 * 2);
          }
          plVar1 = &pUVar19->_padding_;
          if ((ForAnyElementType *)plVar1 != &local_678) {
            if ((void *)*plVar1 != (void *)0x0) {
              FMemory::Free((void *)*plVar1);
            }
            *plVar1 = (longlong)local_678.Data;
            *(undefined4 *)&pUVar19->_padding_ = (undefined4)local_670;
            local_678.Data = (FScriptContainerElement *)0x0;
            *(undefined4 *)((longlong)&pUVar19->_padding_ + 4) = local_670._4_4_;
            local_670 = 0;
          }
          if (local_678.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_678.Data);
          }
          uVar14 = local_6a8.Data.ArrayNum - 1;
          if (local_6a8.Data.ArrayNum == 0) {
            uVar14 = 0;
          }
          ::FString::AssignRange
                    ((FString *)&pUVar19->_padding_,(wchar_t *)local_6a8.Data.AllocatorInstance.Data
                     ,uVar14);
          pUVar20 = (UObject *)(**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar20);
          }
          pUVar19->_padding_ = (longlong)pUVar20;
          pFVar21 = FText::FromString(&local_a8,&local_698);
          pFVar22 = FText::AsLocalizable_Advanced_LocText
                              (&local_2c8,L"FTaskImportObject_GameThread",L"CouldntCreatePackage",
                               L"It was not possible to create a package named \'{0}\'. The asset will not be imported."
                              );
          pFVar23 = FTextFormat::FTextFormat(&local_98,pFVar22,Default);
          pFVar21 = FText::Format<FText>(&local_2d8,pFVar23,pFVar21);
          FText::operator=(&pUVar19->Text,pFVar21);
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
          }
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3f0);
            goto LAB_14e4eede3;
          }
          goto LAB_14e4eebac;
        }
        if (!bVar8) {
          `UE::Interchange::FTaskImportObject_GameThread::Execute'::__l2::<lambda_2>::operator()
                    (&local_3f8);
        }
        pUVar6 = local_688;
        if (local_6a8.Data.ArrayNum == 0) {
          local_478 = (FScriptContainerElement *)0x15060d16c;
LAB_14e4edcb9:
          sVar26 = wcslen((wchar_t *)local_478);
          iStack_470 = (int)sVar26;
        }
        else {
          iStack_470 = 0;
          local_478 = local_6a8.Data.AllocatorInstance.Data;
          if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14e4edcb9;
        }
        local_2b8._12_4_ = uStack_46c;
        local_2b8.Size = iStack_470;
        local_2b8.DataPtr = (wchar_t *)local_478;
        pUVar18 = (UObjectBase *)StaticFindObject((UClass *)0x0,(UObject *)pUVar6,&local_2b8,None);
        if (pUVar18 != (UObjectBase *)0x0) {
          if ((this_02->TaskData).bReplaceExisting != false) goto LAB_14e4edf84;
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar18,&local_5c8,(UObject *)0x0,None);
          if (Interchange::Private::StaticHelpers::bReplaceExistingAllDialogAnswer ==
              (TAtomic<signed_char>)0xff) {
            bVar10 = true;
            pFVar21 = FText::FromString(&local_88,&local_5c8);
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_2a8,L"InterchangeTaskimportObject",L"OverrideAssetMessage",
                                 L"Are you sure you want to override asset \'{0}\'?");
            pFVar23 = FTextFormat::FTextFormat(&local_78,pFVar22,Default);
            FText::Format<FText>(&local_298,pFVar23,pFVar21);
            if (local_2a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
            }
            if (GIsAutomationTesting == false) {
              FApp::IsUnattended();
            }
            if (local_298.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
            }
LAB_14e4ede14:
            local_628 = UInterchangeFactoryBase::AddMessage<UInterchangeResultWarning_Generic>
                                  (local_680);
            uVar14 = this->SourceIndex;
            uVar30 = 0;
            if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
              uVar30 = ~uVar14 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ::FString::FString(&local_320,
                               (FString *)
                               (*(longlong *)
                                 ((this_02->SourceDatas).AllocatorInstance.Data +
                                 (longlong)(int)uVar14 * 8) + 0x28));
            pUVar7 = local_628;
            ::FString::operator=((FString *)&local_628->_padding_,&local_320);
            if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_320.Data.AllocatorInstance.Data);
            }
            ::FString::operator=((FString *)&pUVar7->_padding_,&local_5c8);
            pUVar20 = (UObject *)(**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
              GC::MarkAsReachable(pUVar20);
            }
            local_628->_padding_ = (longlong)pUVar20;
            pFVar21 = FText::FromString(&local_68,&local_5c8);
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_278,L"FTaskImportObject_GameThread",
                                 L"CouldntReplaceExistingAsset",
                                 L"The option bReplaceExisting is false, we are not overriding the asset named \'{0}\'."
                                );
            pFVar23 = FTextFormat::FTextFormat(&local_138,pFVar22,Default);
            pFVar21 = FText::Format<FText>(&local_288,pFVar23,pFVar21);
            FText::operator=(&local_628->Text,pFVar21);
            if (local_288.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
            }
            if (local_278.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
            }
          }
          else {
            if (Interchange::Private::StaticHelpers::bReplaceExistingAllDialogAnswer ==
                (TAtomic<signed_char>)0xff) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                );
              if (bVar8) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              bVar10 = false;
            }
            else {
              bVar10 = Interchange::Private::StaticHelpers::bReplaceExistingAllDialogAnswer ==
                       (TAtomic<signed_char>)0x1;
            }
            bVar10 = (bool)(bVar10 ^ 1);
            if (bVar10) goto LAB_14e4ede14;
          }
          if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
          }
          goto LAB_14e4edf84;
        }
LAB_14e4ee3de:
        local_518 = (UPackage *)0x0;
        local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_510.Data.ArrayNum = 0;
        local_510.Data.ArrayMax = 0;
        local_500 = (UInterchangeFactoryBaseNode *)0x0;
        uVar30 = 0;
        uVar14 = local_6a8.Data.ArrayNum - 1;
        if (local_6a8.Data.ArrayNum == 0) {
          uVar14 = uVar30;
        }
        local_4f8 = 0;
        uStack_4f0 = 0;
        local_4e8 = (UInterchangeBaseNodeContainer *)0x0;
        pUStack_4e0 = (UObjectBase *)0x0;
        ::FString::AssignRange(&local_510,(wchar_t *)local_6a8.Data.AllocatorInstance.Data,uVar14);
        local_500 = this->FactoryNode;
        uVar14 = this->SourceIndex;
        local_518 = local_688;
        uVar13 = uVar30;
        if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_4f0 = *(undefined8 *)
                      ((this_02->SourceDatas).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
        uVar14 = this->SourceIndex;
        if ((int)uVar14 < (this_02->Translators).ArrayNum) {
          uVar30 = ~uVar14 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar17 = local_680;
        local_4f8 = *(undefined8 *)
                     ((this_02->Translators).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
        local_4e8 = local_4d0;
        pUStack_4e0 = this_03;
        (**(code **)(local_680->_padding_ + 0x2d0))(local_680,local_618,&local_518);
        FVar31.Data = local_510.Data.AllocatorInstance.Data;
        if (local_610 != (UObjectBaseUtility *)0x0) {
          if (local_618[0] == '\0') {
            pFVar27 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&local_610->field_0xc);
            if (((uint)((ulonglong)(pFVar27->field0_0x0).FlagsAndRefCount >> 0x3a) & 1) == 0) {
              bVar33 = IsInGameThread();
              if ((!bVar33) &&
                 (bVar33 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<2649133002084319843>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                                      ,0x263,"IsInGameThread()"), bVar33)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              UObjectBaseUtility::SetInternalFlags(local_610,Async);
            }
            this_01 = FImportAsyncHelper::AddDefaultImportedAssetGetRef(this_02,this->SourceIndex);
            local_578.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_578.AssetPath.PackageName.Number = 0;
            local_578.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_578.AssetPath.AssetName.Number = 0;
            local_578.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_578.SubPathString.Data.ArrayNum = 0;
            local_578.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_578,(UObject *)local_610);
            FSoftObjectPath::operator=(&this_01->ImportedObject,&local_578);
            if (local_578.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_578.SubPathString.Data.AllocatorInstance.Data);
            }
            this_01->Factory = pUVar17;
            this_01->FactoryNode = this->FactoryNode;
            this_01->bIsReimport = this_03 != (UObjectBase *)0x0;
          }
          UPackage::FullyLoad(local_688);
          if (this_03 == (UObjectBase *)0x0) {
            lpCriticalSection = &this_02->CreatedPackagesLock;
            local_4c0 = local_688;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            iVar15 = local_698.Data.ArrayNum + -1;
            FVar31.Data = local_698.Data.AllocatorInstance.Data;
            if (local_698.Data.ArrayNum == 0) {
              iVar15 = 0;
              FVar31.Data = (FScriptContainerElement *)L"";
            }
            uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,(wchar_t *)FVar31.Data);
            iVar15 = TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>
                               ((TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
                                 *)&this_02->CreatedPackages,uVar14,&local_698);
            if (iVar15 == -1) {
              local_370 = &local_698;
              local_368 = &local_4c0;
              TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_const_&,UPackage_*_const_&>_>
                        ((TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
                          *)&this_02->CreatedPackages,&local_4a0,(bool *)&local_370);
            }
            else {
              bVar33 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_6687235758857649758>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                                  ,0x1a2,"!CreatedPackages.Contains(PackageName)");
              if (bVar33) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
          lVar24 = *(longlong *)&local_610->field_0x10;
          lVar29 = (**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
          if (lVar29 == 0) {
LAB_14e4eeb08:
            bVar33 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2649133002084319861>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                                ,0x275,
                                "ImportAssetResult.ImportedObject->GetClass()->IsChildOf(FactoryNode->GetObjectClass())"
                               );
            if (bVar33) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            if ((*(int *)(lVar24 + 0x38) < *(int *)(lVar29 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar29 + 0x38) * 8)
                != lVar29 + 0x30)) {
              bVar33 = false;
            }
            else {
              bVar33 = true;
            }
            if (!bVar33) goto LAB_14e4eeb08;
          }
          pUVar2 = this->FactoryNode;
          local_558.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_558.AssetPath.PackageName.Number = 0;
          local_558.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_558.AssetPath.AssetName.Number = 0;
          local_558.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_558.SubPathString.Data.ArrayNum = 0;
          local_558.SubPathString.Data.ArrayMax = 0;
          FSoftObjectPath::SetPath(&local_558,(UObject *)local_610);
          UInterchangeFactoryBaseNode::SetCustomReferenceObject(pUVar2,&local_558);
          if (local_558.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_558.SubPathString.Data.AllocatorInstance.Data);
          }
          bVar9 = true;
          FVar31.Data = local_510.Data.AllocatorInstance.Data;
        }
        goto LAB_14e4eeba2;
      }
      if (!bVar8) goto LAB_14e4eebac;
      local_468 = (this_03->NamePrivate).Name;
      pUVar2 = this->FactoryNode;
      ::FName::ToString(&local_468,&local_340);
      UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)pUVar2,&local_340);
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
      pUVar2 = this->FactoryNode;
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x2e0);
      local_430 = (this_03->NamePrivate).Name;
      ::FName::ToString(&local_430,&local_330);
      (*pcVar3)(pUVar2,&local_330);
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      local_688 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_03);
      pFVar16 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)local_688,&local_158,(UObject *)0x0);
      if (&local_698 != pFVar16) {
        if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_698.Data.AllocatorInstance.Data);
        }
        local_698.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_698.Data.ArrayNum = (pFVar16->Data).ArrayNum;
        local_698.Data.ArrayMax = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      local_418 = (this_03->NamePrivate).Name;
      ::FName::ToString(&local_418,&local_608);
      if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
      }
      local_6a8.Data.AllocatorInstance.Data = local_608.Data.AllocatorInstance.Data;
      local_608.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a8.Data.ArrayNum = local_608.Data.ArrayNum;
      local_6a8.Data.ArrayMax = local_608.Data.ArrayMax;
      local_608.Data.ArrayNum = 0;
      local_608.Data.ArrayMax = 0;
      pUVar18 = this_03;
LAB_14e4edf84:
      pUVar25 = (pUVar18->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      if ((pUVar25 == (UClass *)0x0) ||
         (lVar24 = (**(code **)(this->FactoryNode->_padding_ + 0x2f8))(), lVar24 == 0)) {
LAB_14e4ee6c7:
        pUVar19 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>(local_680);
        uVar14 = this->SourceIndex;
        uVar30 = 0;
        if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
          uVar30 = ~uVar14 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar24 = *(longlong *)
                  ((this_02->SourceDatas).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
        local_648.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_648.Data.ArrayNum = *(int *)(lVar24 + 0x30);
        lVar29 = (longlong)local_648.Data.ArrayNum;
        pvVar28 = *(void **)(lVar24 + 0x28);
        if (local_648.Data.ArrayNum == 0) {
          local_648.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_648.Data.ArrayNum,0,(ForAnyElementType *)&local_648,
                     local_648.Data.ArrayNum,&local_648.Data.ArrayMax);
          memcpy(local_648.Data.AllocatorInstance.Data,pvVar28,lVar29 * 2);
        }
        ::FString::operator=((FString *)&pUVar19->_padding_,&local_648);
        if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_648.Data.AllocatorInstance.Data);
        }
        iVar15 = local_6a8.Data.ArrayNum + -1;
        if (local_6a8.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        ::FString::AssignRange
                  ((FString *)&pUVar19->_padding_,(wchar_t *)local_6a8.Data.AllocatorInstance.Data,
                   iVar15);
        pUVar20 = (UObject *)(**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar20);
        }
        pUVar19->_padding_ = (longlong)pUVar20;
        lVar24 = (**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
        local_400 = *(FName *)(lVar24 + 0x18);
        ::FName::ToString(&local_400,&local_3d0);
        FText::FromString(&local_440,&local_3d0);
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
        local_4d8 = (FName)((pUVar18->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_4d8,&local_3c0);
        FText::FromString(&local_450,&local_3c0);
        if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
        }
        FText::FromString(&local_460,&local_6a8);
        pFVar16 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)local_688,&local_208,(UObject *)0x0);
        pFVar16 = FPaths::GetPath(&local_218,pFVar16);
        FText::FromString(&local_428,pFVar16);
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        local_3b0.TextData.Reference = local_450.TextData.Reference;
        if (local_450.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_450.TextData.Reference + 8))
                    (local_450.TextData.Reference,local_res20);
        }
        local_3b0.Flags = local_450.Flags;
        local_3a0.TextData.Reference = local_428.TextData.Reference;
        if (local_428.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_428.TextData.Reference + 8))
                    (local_428.TextData.Reference,local_410);
        }
        local_3a0.Flags = local_428.Flags;
        local_390.TextData.Reference = local_460.TextData.Reference;
        if (local_460.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_460.TextData.Reference + 8))
                    (local_460.TextData.Reference,local_4a8);
        }
        local_390.Flags = local_460.Flags;
        local_380.TextData.Reference = local_440.TextData.Reference;
        if (local_440.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_440.TextData.Reference + 8))
                    (local_440.TextData.Reference,local_4a4);
        }
        local_380.Flags = local_440.Flags;
        pFVar21 = FText::AsLocalizable_Advanced_LocText
                            (&local_1e8,L"FTaskImportObject_GameThread",
                             L"AssetVersusFactoryClassWrong_Error",
                             L"You cannot create an asset of class \'{0}\' named \'{1}\' in \'{2}\' because there is already an asset of class \'{3}\' with the same name in that folder."
                            );
        pFVar23 = FTextFormat::FTextFormat(&local_e8,pFVar21,Default);
        pFVar21 = FText::Format<FText,FText,FText,FText>
                            (&local_1f8,pFVar23,&local_380,&local_390,&local_3a0,&local_3b0);
        FText::operator=(&pUVar19->Text,pFVar21);
        if (local_1f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
        }
        if (local_1e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
        }
        if (local_428.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
        }
        if (local_460.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
        }
        if (local_450.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_450.TextData.Reference + 0x10))();
        }
        if (local_440.TextData.Reference == (ITextData *)0x0) goto LAB_14e4eebac;
        (**(code **)((longlong)*local_440.TextData.Reference + 0x10))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3f0);
      }
      else {
        if (((int)pUVar25->_padding_ < *(int *)(lVar24 + 0x38)) ||
           (*(longlong *)(pUVar25->_padding_ + (longlong)*(int *)(lVar24 + 0x38) * 8) !=
            lVar24 + 0x30)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_14e4ee6c7;
        if ((pUVar18->ObjectFlags >> 0x1e & 1) != 0) {
          UObjectBase::AtomicallyClearFlags(pUVar18,RF_MirroredGarbage);
          pFVar27 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar18->InternalIndex);
          FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar27,Garbage);
          if ((pUVar18->ObjectFlags >> 0x1e & 1) != 0) {
            pUVar19 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>
                                (local_680);
            uVar14 = this->SourceIndex;
            uVar30 = 0;
            if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
              uVar30 = ~uVar14 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ::FString::FString(&local_310,
                               (FString *)
                               (*(longlong *)
                                 ((this_02->SourceDatas).AllocatorInstance.Data +
                                 (longlong)(int)uVar14 * 8) + 0x28));
            ::FString::operator=((FString *)&pUVar19->_padding_,&local_310);
            if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_310.Data.AllocatorInstance.Data);
            }
            iVar15 = local_6a8.Data.ArrayNum + -1;
            if (local_6a8.Data.ArrayNum == 0) {
              iVar15 = 0;
            }
            ::FString::AssignRange
                      ((FString *)&pUVar19->_padding_,
                       (wchar_t *)local_6a8.Data.AllocatorInstance.Data,iVar15);
            pUVar20 = (UObject *)(**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
              GC::MarkAsReachable(pUVar20);
            }
            pUVar19->_padding_ = (longlong)pUVar20;
            pFVar21 = FText::FromString(&local_128,&local_6a8);
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_258,L"FTaskImportObject_GameThread",L"InvalidExistingAsset",
                                 L"An invalid asset exists at the same asset location [{0}]. This asset will be skipped."
                                );
            pFVar23 = FTextFormat::FTextFormat(&local_58,pFVar22,Default);
            pFVar21 = FText::Format<FText>(&local_268,pFVar23,pFVar21);
            FText::operator=(&pUVar19->Text,pFVar21);
            if (local_268.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
            }
            if (local_258.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_3f0);
              goto LAB_14e4eede3;
            }
            goto LAB_14e4eebac;
          }
        }
        pUVar2 = this->FactoryNode;
        local_598.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_598.AssetPath.PackageName.Number = 0;
        local_598.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_598.AssetPath.AssetName.Number = 0;
        local_598.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_598.SubPathString.Data.ArrayNum = 0;
        local_598.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_598,(UObject *)pUVar18);
        UInterchangeFactoryBaseNode::SetCustomReferenceObject(pUVar2,&local_598);
        if (local_598.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_598.SubPathString.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          UInterchangeFactoryBaseNode::SetSkipNodeImport(this->FactoryNode);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3f0);
        }
        else {
          bVar8 = UInterchangeManager::IsObjectBeingImported(local_4b8,(UObject *)pUVar18);
          if (!bVar8) {
            pUVar25 = Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
            pvVar28 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar18,pUVar25)
            ;
            if (pvVar28 != (void *)0x0) {
              this_00 = FAssetCompilingManager::Get();
              local_2e8 = &local_408;
              uStack_2e0 = 1;
              local_228._12_4_ = uStack_2dc;
              local_228.ArrayNum = 1;
              local_408 = pUVar18;
              local_228.DataPtr = (UObject **)local_2e8;
              FAssetCompilingManager::FinishCompilationForObjects(this_00,&local_228);
            }
            goto LAB_14e4ee3de;
          }
          pUVar19 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>(local_680);
          uVar14 = this->SourceIndex;
          uVar30 = 0;
          if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
            uVar30 = ~uVar14 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FString::FString(&local_300,
                             (FString *)
                             (*(longlong *)
                               ((this_02->SourceDatas).AllocatorInstance.Data +
                               (longlong)(int)uVar14 * 8) + 0x28));
          ::FString::operator=((FString *)&pUVar19->_padding_,&local_300);
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
          iVar15 = local_6a8.Data.ArrayNum + -1;
          if (local_6a8.Data.ArrayNum == 0) {
            iVar15 = 0;
          }
          ::FString::AssignRange
                    ((FString *)&pUVar19->_padding_,(wchar_t *)local_6a8.Data.AllocatorInstance.Data
                     ,iVar15);
          pUVar20 = (UObject *)(**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar20);
          }
          pUVar19->_padding_ = (longlong)pUVar20;
          pFVar21 = FText::FromString(&local_108,&local_6a8);
          pFVar22 = FText::AsLocalizable_Advanced_LocText
                              (&local_238,L"FTaskImportObject_GameThread",
                               L"AssetCollisionBetweenImportTask",
                               L"Multiple import tasks are importing the same asset at the same location [{0}]. This asset will be skipped. See the log for more information."
                              );
          pFVar23 = FTextFormat::FTextFormat(&local_f8,pFVar22,Default);
          pFVar21 = FText::Format<FText>(&local_248,pFVar23,pFVar21);
          FText::operator=(&pUVar19->Text,pFVar21);
          if (local_248.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
          }
          if (local_238.TextData.Reference == (ITextData *)0x0) goto LAB_14e4eebac;
          (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3f0);
        }
      }
    }
    else {
      Interchange::Private::InternalGetPackageName
                (this_02,this->SourceIndex,&this->PackageBasePath,this->FactoryNode,&local_698,
                 &local_6a8);
      if (!bVar4) {
        local_5e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5e8.Data.ArrayNum = 0;
        local_5e8.Data.ArrayMax = 0;
        bVar33 = FPackageUtils::IsMapPackageAsset(&local_698,&local_5e8);
        if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
        }
        if (bVar33) goto LAB_14e4eebac;
      }
      FVar31.Data = (FScriptContainerElement *)L"";
      if (local_698.Data.ArrayNum != 0) {
        FVar31.Data = local_698.Data.AllocatorInstance.Data;
      }
      local_688 = FindPackage((UObject *)0x0,(wchar_t *)FVar31.Data);
      if (local_688 == (UPackage *)0x0) {
        FVar31.Data = (FScriptContainerElement *)L"";
        if (local_698.Data.ArrayNum != 0) {
          FVar31.Data = local_698.Data.AllocatorInstance.Data;
        }
        local_688 = LoadPackage((UPackage *)0x0,(wchar_t *)FVar31.Data,0x2002,(FArchive *)0x0,
                                (FLinkerInstancingContext *)0x0);
        if (local_688 == (UPackage *)0x0) goto LAB_14e4eebac;
      }
      `UE::Interchange::FTaskImportObject_GameThread::Execute'::__l2::<lambda_2>::operator()
                (&local_3f8);
      if (local_6a8.Data.ArrayNum == 0) {
        local_488 = (FScriptContainerElement *)0x15060d16c;
LAB_14e4ed5e2:
        sVar26 = wcslen((wchar_t *)local_488);
        iStack_480 = (int)sVar26;
      }
      else {
        iStack_480 = 0;
        local_488 = local_6a8.Data.AllocatorInstance.Data;
        if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14e4ed5e2;
      }
      local_168._12_4_ = uStack_47c;
      local_168.Size = iStack_480;
      local_168.DataPtr = (wchar_t *)local_488;
      pUVar20 = StaticFindObject((UClass *)0x0,(UObject *)local_688,&local_168,None);
      if (pUVar20 != (UObject *)0x0) {
        local_538.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_538.AssetPath.PackageName.Number = 0;
        local_538.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_538.AssetPath.AssetName.Number = 0;
        local_538.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_538.SubPathString.Data.ArrayNum = 0;
        local_538.SubPathString.Data.ArrayMax = 0;
        bVar33 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this->FactoryNode,&local_538)
        ;
        FVar31.Data = local_538.SubPathString.Data.AllocatorInstance.Data;
        if (!bVar33) {
          pUVar2 = this->FactoryNode;
          local_5b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_5b8.AssetPath.PackageName.Number = 0;
          local_5b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_5b8.AssetPath.AssetName.Number = 0;
          local_5b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5b8.SubPathString.Data.ArrayNum = 0;
          local_5b8.SubPathString.Data.ArrayMax = 0;
          FSoftObjectPath::SetPath(&local_5b8,pUVar20);
          UInterchangeFactoryBaseNode::SetCustomReferenceObject(pUVar2,&local_5b8);
          FVar31.Data = local_538.SubPathString.Data.AllocatorInstance.Data;
          if (local_5b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_5b8.SubPathString.Data.AllocatorInstance.Data);
            FVar31.Data = local_538.SubPathString.Data.AllocatorInstance.Data;
          }
        }
LAB_14e4eeba2:
        if (FVar31.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar31.Data);
        }
      }
LAB_14e4eebac:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3f0)
      ;
      bVar33 = bVar9;
    }
  }
  else {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2649133002084319547>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                       ,0x13b,"!IsGarbageCollecting()");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar19 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>(pUVar17);
    uVar14 = this->SourceIndex;
    uVar30 = 0;
    if ((int)uVar14 < (this_02->SourceDatas).ArrayNum) {
      uVar30 = ~uVar14 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar24 = *(longlong *)
              ((this_02->SourceDatas).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
    local_658.Data = (FScriptContainerElement *)0x0;
    iVar15 = *(int *)(lVar24 + 0x30);
    pvVar28 = *(void **)(lVar24 + 0x28);
    local_650 = CONCAT44(local_650._4_4_,iVar15);
    if (iVar15 == 0) {
      local_650 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar15,0,&local_658,iVar15,(int *)((longlong)&local_650 + 4));
      memcpy(local_658.Data,pvVar28,(longlong)iVar15 * 2);
    }
    plVar1 = &pUVar19->_padding_;
    if ((ForAnyElementType *)plVar1 != &local_658) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)local_658.Data;
      *(undefined4 *)&pUVar19->_padding_ = (undefined4)local_650;
      local_658.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&pUVar19->_padding_ + 4) = local_650._4_4_;
      local_650 = 0;
    }
    if (local_658.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data);
    }
    if (this_03 == (UObjectBase *)0x0) {
      pFVar16 = (FString *)
                (**(code **)(this->FactoryNode->_padding_ + 0x2d8))(this->FactoryNode,local_198);
      ::FString::operator=((FString *)&pUVar19->_padding_,pFVar16);
      local_350.Data.AllocatorInstance.Data = local_198[0];
    }
    else {
      local_4a0._4_8_ = (this_03->NamePrivate).Name;
      ::FName::ToString((FName *)((longlong)&local_4a0.Key + 4),&local_350);
      ::FString::operator=((FString *)&pUVar19->_padding_,&local_350);
    }
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    pUVar20 = (UObject *)(**(code **)(this->FactoryNode->_padding_ + 0x2f8))();
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar20);
    }
    pUVar19->_padding_ = (longlong)pUVar20;
    pFVar21 = FText::FromString(&local_118,&local_6a8);
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        (&local_178,L"FTaskImportObject_GameThread",L"GarbageCollectIsRunning_Error"
                         ,
                         L"Cannot import asset \'{0}\'. The garbage collector is running during the import process."
                        );
    pFVar23 = FTextFormat::FTextFormat(&local_b8,pFVar22,Default);
    pFVar21 = FText::Format<FText>(&local_188,pFVar23,pFVar21);
    FText::operator=(&pUVar19->Text,pFVar21);
    local_1b8.TextData.Reference = local_178.TextData.Reference;
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      local_1b8.TextData.Reference = local_178.TextData.Reference;
    }
LAB_14e4eedd8:
    if (local_1b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
  }
LAB_14e4eede3:
  if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
  }
  if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data.AllocatorInstance.Data);
  }
LAB_14e4eee08:
  if ((this->FactoryNode != (UInterchangeFactoryBaseNode *)0x0) && (!bVar33)) {
    UInterchangeFactoryBaseNode::SetSkipNodeImport(this->FactoryNode);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_620);
  FMemScope::~FMemScope(&local_4c8);
  FLLMScope::~FLLMScope(local_res18);
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTaskThread @ 14e4f97c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EInterchangeTaskThread __thiscall
UE::Interchange::FTaskImportObject_GameThread::GetTaskThread(FTaskImportObject_GameThread *this)

{
  return GameThread;
}

