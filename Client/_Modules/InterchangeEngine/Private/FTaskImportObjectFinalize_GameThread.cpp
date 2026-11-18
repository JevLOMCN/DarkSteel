// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// operator() @ 14e4dbd90

FImportAssetResult * __thiscall
`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>::operator()
          (void *this,FImportAssetResult *__return_storage_ptr__,FImportAssetObjectParams *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name712,L"Interchange");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name712,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name712,true);
  (**(code **)(*(longlong *)**(undefined8 **)this + 0x2e8))
            ((longlong *)**(undefined8 **)this,__return_storage_ptr__,param_1);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Execute @ 14e4ec4e0

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
UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute
          (FTaskImportObjectFinalize_GameThread *this)

{
  FUtf8String *pFVar1;
  int iVar2;
  UInterchangeFactoryBaseNode *pUVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  longlong lVar9;
  FString *pFVar10;
  FImportAssetResult *pFVar11;
  FImportedObjectInfo *pFVar12;
  UObject *pUVar13;
  FString *pFVar14;
  FImportAsyncHelper *this_00;
  ForAnyElementType FVar15;
  FName FVar16;
  FScriptContainerElement *pFVar17;
  UObject *pUVar18;
  FName FVar19;
  FImportAsyncHelper *pFVar20;
  FImportAsyncHelper *pFVar21;
  bool bVar22;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  UInterchangeFactoryBase *local_res18;
  FName local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_198;
  undefined8 local_188;
  UObject *pUStack_180;
  FSoftObjectPath local_178;
  void *local_158;
  undefined8 local_150;
  TArray<UInterchangeResult_*,TSizedDefaultAllocator<32>_> local_148;
  FSoftObjectPath local_138;
  FMemScope local_118;
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  code *local_b8 [2];
  undefined **local_a8;
  UInterchangeFactoryBase **local_a0;
  undefined8 local_90;
  code *local_88 [2];
  undefined **local_78;
  undefined8 *local_70;
  undefined8 local_60;
  FImportAssetResult local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name685,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name685,false,None,Default,true);
  FMemScope::FMemScope(&local_118,&LLMScope_Name685,true);
  pFVar21 = (FImportAsyncHelper *)(this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  this_00 = (FImportAsyncHelper *)0x0;
  pFVar20 = pFVar21;
  if (pFVar21 != (FImportAsyncHelper *)0x0) {
    aVar5 = *(atomic<int> *)&pFVar21->_padding_;
    do {
      this_00 = (FImportAsyncHelper *)0x0;
      pFVar20 = (FImportAsyncHelper *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14e4ec586;
      LOCK();
      aVar7 = *(atomic<int> *)&pFVar21->_padding_;
      bVar22 = aVar5 == aVar7;
      if (bVar22) {
        *(atomic<int> *)&pFVar21->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar22);
    this_00 = (this->WeakAsyncHelper).Object;
    pFVar20 = pFVar21;
    if (this_00 != (FImportAsyncHelper *)0x0) goto LAB_14e4ec5d2;
  }
LAB_14e4ec586:
  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                     ("AsyncHelper.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                      ,0x2b2,L"");
  if (bVar22) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pFVar21 = pFVar20;
  if (bVar22) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14e4ec5d2:
  if ((this_00->bCancel == (atomic<bool>)0x0) &&
     (pUVar3 = this->FactoryNode, pUVar3 != (UInterchangeFactoryBaseNode *)0x0)) {
    if ((this_00 == (FImportAsyncHelper *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this_00->bRuntimeOrPIE == false) ||
        (cVar6 = (**(code **)(pUVar3->_padding_ + 0x308))(pUVar3), cVar6 != '\0')) &&
       (lVar9 = (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3), lVar9 != 0)) {
      pFVar10 = UInterchangeBaseNode::GetUniqueID
                          ((UInterchangeBaseNode *)this->FactoryNode,&local_e0);
      local_res18 = FImportAsyncHelper::GetCreatedFactory(this_00,pFVar10);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_res18 != (UInterchangeFactoryBase *)0x0) {
        bVar22 = IsInGameThread();
        if ((!bVar22) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                                ,0x2c0,L""), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = this->SourceIndex;
        pUVar3 = this->FactoryNode;
        local_a8 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::`2'::<lambda_1>,0,0>
                    ::_vftable_;
        local_a0 = &local_res18;
        local_b8[0] = Core::Private::Function::
                      TFunctionRefCaller<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>,UInterchangeFactoryBase::FImportAssetResult,UInterchangeFactoryBase::FImportAssetObjectParams_&>
                      ::Call;
        local_90 = 0;
        if (pFVar21 != (FImportAsyncHelper *)0x0) {
          LOCK();
          *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + 1;
          UNLOCK();
        }
        local_110.Object = this_00;
        local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
        pFVar11 = Interchange::Private::InternalImportObjectStartup
                            (&local_58,&local_110,pUVar3,iVar2,&this->PackageBasePath,
                             (TFunction<UInterchangeFactoryBase::FImportAssetResult___cdecl(UInterchangeFactoryBase::FImportAssetObjectParams_&)>
                              *)local_b8);
        local_188 = *(undefined8 *)pFVar11;
        pUStack_180 = pFVar11->ImportedObject;
        if (pUStack_180 != (UObject *)0x0) {
          if ((char)local_188 == '\0') {
            local_78 = &Core::Private::Function::
                        TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::`28'::<lambda_2>,0,0>
                        ::_vftable_;
            local_70 = &local_188;
            local_88[0] = Core::Private::Function::
                          TFunctionRefCaller<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l28::<lambda_2>,bool,UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_&>
                          ::Call;
            local_60 = 0;
            pFVar12 = FImportAsyncHelper::FindImportedAssets
                                (this_00,this->SourceIndex,
                                 (TFunction<bool___cdecl(UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_&)>
                                  *)local_88);
            if (pFVar12 == (FImportedObjectInfo *)0x0) {
              pFVar12 = FImportAsyncHelper::AddDefaultImportedAssetGetRef(this_00,this->SourceIndex)
              ;
              local_178.AssetPath.PackageName.ComparisonIndex.Value = 0;
              local_178.AssetPath.PackageName.Number = 0;
              local_178.AssetPath.AssetName.ComparisonIndex.Value = 0;
              local_178.AssetPath.AssetName.Number = 0;
              local_178.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_178.SubPathString.Data.ArrayNum = 0;
              local_178.SubPathString.Data.ArrayMax = 0;
              FSoftObjectPath::SetPath(&local_178,pUStack_180);
              pFVar1 = &(pFVar12->ImportedObject).SubPathString;
              (pFVar12->ImportedObject).AssetPath.PackageName = local_178.AssetPath.PackageName;
              (pFVar12->ImportedObject).AssetPath.AssetName = local_178.AssetPath.AssetName;
              if (pFVar1 != &local_178.SubPathString) {
                pFVar17 = (pFVar1->Data).AllocatorInstance.Data;
                if (pFVar17 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar17);
                }
                (pFVar1->Data).AllocatorInstance.Data =
                     local_178.SubPathString.Data.AllocatorInstance.Data;
                (pFVar12->ImportedObject).SubPathString.Data.ArrayNum =
                     local_178.SubPathString.Data.ArrayNum;
                (pFVar12->ImportedObject).SubPathString.Data.ArrayMax =
                     local_178.SubPathString.Data.ArrayMax;
                local_178.SubPathString.Data.ArrayNum = 0;
                local_178.SubPathString.Data.ArrayMax = 0;
                local_178.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
              }
              if (local_178.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.SubPathString.Data.AllocatorInstance.Data);
              }
              pFVar12->Factory = local_res18;
              pFVar12->FactoryNode = this->FactoryNode;
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pUStack_180,&local_f0,(UObject *)0x0);
              local_res20.ComparisonIndex.Value = *(uint *)&pUStack_180->field_0x18;
              local_res20.Number = *(uint *)&pUStack_180->field_0x1c;
              ::FName::ToString(&local_res20,&local_100);
              local_158 = (void *)0x0;
              local_150 = 0;
              pUVar18 = (this_00->TaskData).ReimportObject;
              pUVar13 = (UObject *)
                        (**(code **)(local_res18->_padding_ + 0x348))
                                  (local_res18,pUVar18,this->FactoryNode,&local_f0,&local_100,
                                   &local_158);
              if (pUVar13 != pUVar18) {
                pUVar18 = pUVar13;
              }
              if (local_158 != (void *)0x0) {
                FMemory::Free(local_158);
              }
              pFVar12->bIsReimport = pUVar18 != (UObject *)0x0;
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              }
            }
            UInterchangeResultsContainer::GetResults
                      ((((this_00->AssetImportResult).Object)->Results).field0_0x0.DebugPtr,
                       &local_148);
            iVar2 = local_148.ArrayNum;
            FVar16 = (FName)((longlong)local_148.AllocatorInstance.Data +
                            (longlong)local_148.ArrayNum * 8);
            FVar19 = (FName)local_148.AllocatorInstance;
            local_res20 = FVar16;
            while( true ) {
              if (local_148.ArrayNum != iVar2) {
                `TCheckedPointerIterator<UInterchangeResult_*,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_res8);
              }
              if (FVar19 == FVar16) break;
              lVar9 = *(longlong *)FVar19;
              if ((1 < *(int *)(lVar9 + 0x68)) &&
                 ((*(int *)(lVar9 + 0x40) < 2 || (*(longlong *)(lVar9 + 0x58) == 0)))) {
                local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_198.ArrayNum = 0;
                local_198.ArrayMax = 0;
                UInterchangeBaseNode::GetTargetNodeUids
                          ((UInterchangeBaseNode *)this->FactoryNode,&local_198);
                pFVar17 = local_198.AllocatorInstance.Data + (longlong)local_198.ArrayNum * 0x10;
                for (FVar15.Data = local_198.AllocatorInstance.Data; FVar15.Data != pFVar17;
                    FVar15.Data = FVar15.Data + 0x10) {
                  iVar8 = *(int *)(FVar15.Data + 8);
                  if (iVar8 == *(int *)(lVar9 + 0x68)) {
                    if (1 < iVar8) {
                      iVar8 = FGenericPlatformStricmp::Stricmp
                                        (*(wchar_t **)FVar15.Data,*(wchar_t **)(lVar9 + 0x60));
                      bVar22 = iVar8 == 0;
                      goto LAB_14e4ec9c6;
                    }
LAB_14e4ec9d8:
                    pFVar14 = UObjectBaseUtility::GetPathName
                                        ((UObjectBaseUtility *)pUStack_180,&local_d0,(UObject *)0x0)
                    ;
                    pFVar10 = (FString *)(lVar9 + 0x38);
                    if (pFVar10 != pFVar14) {
                      pFVar17 = (pFVar10->Data).AllocatorInstance.Data;
                      if (pFVar17 != (FScriptContainerElement *)0x0) {
                        FMemory::Free(pFVar17);
                      }
                      (pFVar10->Data).AllocatorInstance.Data =
                           (pFVar14->Data).AllocatorInstance.Data;
                      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      *(int *)(lVar9 + 0x40) = (pFVar14->Data).ArrayNum;
                      *(int *)(lVar9 + 0x44) = (pFVar14->Data).ArrayMax;
                      (pFVar14->Data).ArrayNum = 0;
                      (pFVar14->Data).ArrayMax = 0;
                    }
                    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                    }
                    pUVar18 = *(UObject **)&pUStack_180->field_0x10;
                    if ((GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar18 != (UObject *)0x0)) {
                      GC::MarkAsReachable(pUVar18);
                    }
                    *(UObject **)(lVar9 + 0x58) = pUVar18;
                    break;
                  }
                  bVar22 = iVar8 + *(int *)(lVar9 + 0x68) == 1;
LAB_14e4ec9c6:
                  if (bVar22) goto LAB_14e4ec9d8;
                }
                DestructItems<FString,int>
                          ((FString *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
                FVar16 = local_res20;
                if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_198.AllocatorInstance.Data);
                  FVar16 = local_res20;
                }
              }
              FVar19 = (FName)((longlong)FVar19 + 8);
            }
            if ((FName)local_148.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_148.AllocatorInstance.Data);
            }
          }
          pUVar3 = this->FactoryNode;
          local_138.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_138.AssetPath.PackageName.Number = 0;
          local_138.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_138.AssetPath.AssetName.Number = 0;
          local_138.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.SubPathString.Data.ArrayNum = 0;
          local_138.SubPathString.Data.ArrayMax = 0;
          FSoftObjectPath::SetPath(&local_138,pUStack_180);
          UInterchangeFactoryBaseNode::SetCustomReferenceObject(pUVar3,&local_138);
          if (local_138.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_138.SubPathString.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar21);
  FMemScope::~FMemScope(&local_118);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// GetTaskThread @ 14e4f9740

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
UE::Interchange::FTaskImportObjectFinalize_GameThread::GetTaskThread
          (FTaskImportObjectFinalize_GameThread *this)

{
  return GameThread;
}

