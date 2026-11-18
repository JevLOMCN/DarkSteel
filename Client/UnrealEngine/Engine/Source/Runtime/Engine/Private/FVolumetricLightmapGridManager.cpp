// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FVolumetricLightmapGridManager @ 14834c310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVolumetricLightmapGridManager * __thiscall
FVolumetricLightmapGridManager::FVolumetricLightmapGridManager
          (FVolumetricLightmapGridManager *this,UWorld *param_1,FVolumetricLightMapGridDesc *param_2
          )

{
  TUniquePtr<FVolumetricLightmapGridStreamingManager,TDefaultDelete<FVolumetricLightmapGridStreamingManager>_>
  *pTVar1;
  FVolumetricLightmapGridStreamingManager *pFVar2;
  FStreamingManagerCollection *this_00;
  undefined8 *puVar3;
  FVolumetricLightmapGridStreamingManager *pFVar4;
  longlong local_18 [2];
  
  this->World = param_1;
  pFVar4 = (FVolumetricLightmapGridStreamingManager *)0x0;
  this->Registry =
       (UMapBuildDataRegistry *)
       (((param_1->PersistentLevel).field0_0x0.DebugPtr)->MapBuildData).field0_0x0;
  this->Grid = param_2;
  (this->PendingCellRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCellRequests).ArrayNum = 0;
  (this->PendingCellRequests).ArrayMax = 0;
  *(undefined8 *)&this->LoadedCells = 0;
  *(undefined8 *)&(this->LoadedCells).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedCells).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedCells).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedCells).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedCells).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadedCells).field_0x34 = 0;
  *(undefined8 *)&(this->LoadedCells).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedCells).field_0x48 = 0;
  (this->Bounds).IsValid = '\0';
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->PendingRequestsCriticalSection,4000);
  pTVar1 = &this->StreamingManager;
  pTVar1->Ptr = (FVolumetricLightmapGridStreamingManager *)0x0;
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FVolumetricLightmapGridStreamingManager *)0x0) {
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)&___7FVolumetricLightmapGridStreamingManager__6B_;
    pFVar2->Owner = this;
    this_00 = IStreamingManager::Get();
    FStreamingManagerCollection::AddStreamingManager(this_00,(IStreamingManager *)pFVar2);
    pFVar4 = pFVar2;
  }
  if (pTVar1 == (TUniquePtr<FVolumetricLightmapGridStreamingManager,TDefaultDelete<FVolumetricLightmapGridStreamingManager>_>
                 *)local_18) {
    if (pFVar4 == (FVolumetricLightmapGridStreamingManager *)0x0) {
      return this;
    }
    puVar3 = (undefined8 *)pFVar4->_padding_;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar4;
    if (pFVar2 == (FVolumetricLightmapGridStreamingManager *)0x0) {
      return this;
    }
    puVar3 = (undefined8 *)pFVar2->_padding_;
    pFVar4 = pFVar2;
  }
  (*(code *)*puVar3)(pFVar4,1);
  return this;
}

// ~FVolumetricLightmapGridManager @ 14834dcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVolumetricLightmapGridManager::~FVolumetricLightmapGridManager
          (FVolumetricLightmapGridManager *this)

{
  FVolumetricLightmapGridStreamingManager *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if (*(int *)&(this->LoadedCells).field_0x8 != *(int *)&(this->LoadedCells).field_0x34) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LoadedCells.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                       ,0x9c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (this->StreamingManager).Ptr;
  if (pFVar1 != (FVolumetricLightmapGridStreamingManager *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingRequestsCriticalSection);
  *(undefined4 *)&(this->LoadedCells).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LoadedCells).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoadedCells);
  pFVar3 = (this->PendingCellRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 1483509b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FVolumetricLightmapGridManager::RequestVolumetricLightMapCell'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,IBulkDataIORequest *param_2)

{
  code *pcVar1;
  FPrecomputedVolumetricLightmapData *pFVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar6;
  bool local_res10 [16];
  FPrecomputedVolumetricLightmapData *local_res20;
  TMemoryView<void_const_> local_188;
  FString local_178;
  undefined1 local_168 [336];
  
  if (param_1) {
    lVar6 = (**(code **)((longlong)*param_2 + 0x18))(param_2);
    if ((lVar6 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IORequest->GetReadResults()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                           ,0x10e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pvVar4 = (void *)(**(code **)((longlong)*param_2 + 0x18))();
    if (pvVar4 != (void *)0x0) {
      local_188.Data = pvVar4;
      local_188.Size = (**(code **)((longlong)*param_2 + 0x20))(param_2);
      local_res10[0] = true;
      TVersionedReader<FMemoryReaderView>::
      TVersionedReader<FMemoryReaderView><TMemoryView<void_const_>_&,bool>
                ((TVersionedReader<FMemoryReaderView> *)local_168,&local_188,local_res10);
      local_res20 = (FPrecomputedVolumetricLightmapData *)0x0;
      ::operator<<((FArchive *)local_168,&local_res20);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)((longlong)this + 8) + 0xb0);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      lVar6 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x18);
      lVar5 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 0x20) * 0x20 + lVar6;
      for (; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
        if (*(longlong *)(lVar6 + 0x10) == *(longlong *)this) goto LAB_148350ab7;
      }
      lVar6 = 0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                         ,0x100,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
LAB_148350ab7:
      if (4 < (byte)LogVolumetricLightmapStreaming._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_178,
                   (UObject *)0x0,None);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogVolumetricLightmapStreaming);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
      }
      pFVar2 = local_res20;
      if ((local_res20 == (FPrecomputedVolumetricLightmapData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                             ,0x104,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((*(longlong *)(lVar6 + 0x18) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Request->Data",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                             ,0x105,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(FPrecomputedVolumetricLightmapData **)(lVar6 + 0x18) = pFVar2;
      LeaveCriticalSection(lpCriticalSection);
      FMemory::Free(pvVar4);
      FArchiveProxy::~FArchiveProxy((FArchiveProxy *)local_168);
      FArchive::~FArchive((FArchive *)(local_168 + 0x98));
    }
  }
  return;
}

// GetNumPendingRequests @ 1483848a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FVolumetricLightmapGridManager::GetNumPendingRequests(FVolumetricLightmapGridManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->PendingRequestsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->PendingCellRequests).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessRequests @ 14839b8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FVolumetricLightmapGridManager::ProcessRequests(FVolumetricLightmapGridManager *this)

{
  FScriptContainerElement *pFVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FVolumetricLightmapGridManager::FCellRequest,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  FPrecomputedVolumetricLightmap *pFVar10;
  long64 lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TPairInitializer<FVolumetricLightMapGridCell_*_&&,FVolumetricLightmapGridManager::FLoadedCellData_const_&>
  local_res18;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  ForAnyElementType local_98;
  int local_90;
  int iStack_8c;
  ForAnyElementType local_88;
  undefined8 local_80;
  FLoadedCellData **local_78;
  FPrecomputedVolumetricLightmapData **local_70;
  FPrecomputedVolumetricLightmapData *local_68;
  FLoadedCellData *local_60;
  FPrecomputedVolumetricLightmap *local_58;
  
  lpCriticalSection = &this->PendingRequestsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar8 = (this->PendingCellRequests).ArrayNum;
  pTVar2 = &this->PendingCellRequests;
  pFVar13 = (pTVar2->AllocatorInstance).Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  pFVar15 = pFVar13 + (longlong)iVar8 * 0x20;
  local_90 = 0;
  iStack_8c = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  while( true ) {
    while( true ) {
      if ((this->PendingCellRequests).ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FVolumetricLightmapGridManager::FCellRequest,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      iVar9 = local_90;
      if (pFVar13 == pFVar15) {
        pFVar13 = local_98.Data + (longlong)local_90 * 8;
        FVar14.Data = local_98.Data;
        while( true ) {
          if (local_90 != iVar9) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FVolumetricLightmapGridManager::FCellRequest_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (FVar14.Data == pFVar13) break;
                    /* WARNING: Load size is inaccurate */
          local_58 = (FPrecomputedVolumetricLightmap *)0x0;
          local_68 = *(FPrecomputedVolumetricLightmapData **)(*FVar14.Data + 0x18);
          local_60 = *(FLoadedCellData **)(*FVar14.Data + 0x10);
          if (local_68 == (FPrecomputedVolumetricLightmapData *)0x0) {
            lVar11 = FBulkData::GetBulkDataSize((FBulkData *)&local_60[2].Cell);
            if ((lVar11 != 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LoadedCell.Cell->BulkData.GetElementCount() == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                                   ,0x1b7,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar8 = (*pcVar4)();
              return iVar8;
            }
          }
          else {
            pFVar10 = ::operator_new(0x30);
            local_58 = (FPrecomputedVolumetricLightmap *)0x0;
            if (pFVar10 != (FPrecomputedVolumetricLightmap *)0x0) {
              pFVar10->Data = (FPrecomputedVolumetricLightmapData *)0x0;
              pFVar10->bAddedToScene = false;
              (pFVar10->SourceRegistry).WeakPtr = (FWeakObjectPtr)0x0;
              (pFVar10->WorldOriginOffset).field0_0x0._s_0.X = 0.0;
              (pFVar10->WorldOriginOffset).field0_0x0._s_0.Y = 0.0;
              (pFVar10->WorldOriginOffset).field0_0x0._s_0.Z = 0.0;
              local_58 = pFVar10;
            }
            FPrecomputedVolumetricLightmap::AddToScene
                      (local_58,this->World->Scene,this->Registry,local_68,false);
          }
          local_res18.Value = local_60;
          local_78 = &local_res18.Value;
          local_70 = &local_68;
          TSet<TTuple<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData>,TDefaultMapHashableKeyFuncs<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FVolumetricLightMapGridCell_*_&&,FVolumetricLightmapGridManager::FLoadedCellData_const_&>_>
                    ((TSet<TTuple<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData>,TDefaultMapHashableKeyFuncs<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,0>,FDefaultSetAllocator>
                      *)&this->LoadedCells,&local_res18,(bool *)&local_78);
          FVar14.Data = FVar14.Data + 8;
        }
        if (pTVar2 != (TArray<FVolumetricLightmapGridManager::FCellRequest,TSizedDefaultAllocator<32>_>
                       *)&local_88) {
          pFVar13 = (pTVar2->AllocatorInstance).Data;
          if (pFVar13 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar13);
          }
          (pTVar2->AllocatorInstance).Data = local_88.Data;
          (this->PendingCellRequests).ArrayNum = (int)local_80;
          (this->PendingCellRequests).ArrayMax = local_80._4_4_;
          local_80 = 0;
          local_88.Data = (FScriptContainerElement *)0x0;
        }
        iVar8 = (this->PendingCellRequests).ArrayNum;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return iVar8;
      }
      if (*(int *)pFVar13 == 2) break;
      if (*(int *)pFVar13 == 1) {
        cVar7 = (**(code **)(**(longlong **)(pFVar13 + 8) + 8))();
        if (cVar7 == '\0') {
          if (((local_88.Data <= pFVar13) &&
              (pFVar13 < local_88.Data + (longlong)local_80._4_4_ * 0x20)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return iVar8;
          }
          iVar9 = (int)local_80;
          if ((int)local_80 == local_80._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_88,(int *)((longlong)&local_80 + 4));
          }
          local_80 = CONCAT44(local_80._4_4_,iVar9 + 1);
          uVar5 = *(undefined8 *)(pFVar13 + 8);
          *(undefined8 *)(local_88.Data + (longlong)iVar9 * 0x20) = *(undefined8 *)pFVar13;
          *(undefined8 *)(local_88.Data + (longlong)iVar9 * 0x20 + 8) = uVar5;
          pFVar1 = pFVar13 + 0x10;
          uVar5 = *(undefined8 *)(pFVar13 + 0x18);
          pFVar13 = pFVar13 + 0x20;
          *(undefined8 *)(local_88.Data + (longlong)iVar9 * 0x20 + 0x10) = *(undefined8 *)pFVar1;
          *(undefined8 *)(local_88.Data + (longlong)iVar9 * 0x20 + 0x10 + 8) = uVar5;
        }
        else {
          if ((*(longlong *)(pFVar13 + 0x18) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Request.Data",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                                 ,0x199,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return iVar8;
          }
          local_a0 = pFVar13;
          if (((local_98.Data <= (FScriptContainerElement *)&local_a0) &&
              ((FScriptContainerElement *)&local_a0 < local_98.Data + (longlong)iStack_8c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return iVar8;
          }
          if (local_90 == iStack_8c) {
            local_90 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_98,&iStack_8c);
          }
          iVar9 = local_90 + 1;
          *(FScriptContainerElement **)(local_98.Data + (longlong)local_90 * 8) = local_a0;
          puVar3 = *(undefined8 **)(pFVar13 + 8);
          local_90 = iVar9;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(pFVar13 + 8) = 0;
          *(int *)pFVar13 = 2;
          pFVar13 = pFVar13 + 0x20;
        }
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                           ,0x1a7,L"Unexpected request status\n");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        pFVar13 = pFVar13 + 0x20;
      }
    }
    if ((*(longlong *)(pFVar13 + 0x18) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request.Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                           ,0x191,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    if ((*(longlong *)(pFVar13 + 8) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Request.IORequest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                           ,0x192,L""), bVar6)) break;
    local_a8 = pFVar13;
    if (((local_98.Data <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < local_98.Data + (longlong)iStack_8c * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    if (local_90 == iStack_8c) {
      local_90 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_98,&iStack_8c);
    }
    lVar12 = (longlong)local_90;
    pFVar13 = pFVar13 + 0x20;
    local_90 = local_90 + 1;
    *(FScriptContainerElement **)(local_98.Data + lVar12 * 8) = local_a8;
  }
  pcVar4 = (code *)swi(3);
  iVar8 = (*pcVar4)();
  return iVar8;
}

// ReleaseCellData @ 14839d740

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

void __thiscall
FVolumetricLightmapGridManager::ReleaseCellData
          (FVolumetricLightmapGridManager *this,FLoadedCellData *param_1,FSceneInterface *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  FScriptContainerElement *local_a8;
  FString local_98;
  code *local_88 [2];
  undefined **local_78;
  FPrecomputedVolumetricLightmapData *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPrecomputedVolumetricLightmapData *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1->Data != (FPrecomputedVolumetricLightmapData *)0x0) {
    if (4 < (byte)LogVolumetricLightmapStreaming._0_1_) {
      pFVar3 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)this->World,&local_98,(UObject *)0x0,None);
      if ((pFVar3->Data).ArrayNum == 0) {
        local_a8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_a8 = (pFVar3->Data).AllocatorInstance.Data;
      }
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogVolumetricLightmapStreaming);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    pFStack_70 = param_1->Data;
    param_1->Data = (FPrecomputedVolumetricLightmapData *)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVolumetricLightmapGridManager::ReleaseCellData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FVolumetricLightmapGridManager::ReleaseCellData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FVolumetricLightmapGridManager::ReleaseCellData_::__l5::TSTR_DeleteVolumetricLightDataCommand192>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FVolumetricLightmapGridManager::ReleaseCellData'::__l5::TSTR_DeleteVolumetricLightDataCommand192>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// RemoveFromScene @ 14839ffa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVolumetricLightmapGridManager::RemoveFromScene
          (FVolumetricLightmapGridManager *this,FSceneInterface *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  FPrecomputedVolumetricLightmap *this_00;
  FVolumetricLightmapGridStreamingManager *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  WaitForPendingRequest(this,0.0);
  iVar13 = 0;
  iVar3 = *(int *)&(this->LoadedCells).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->LoadedCells).field_0x10;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->LoadedCells).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_60.Array;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1483a0052;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1483a0052:
  uVar12 = *(uint *)&(this->LoadedCells).field_0x28;
  puVar1 = &(this->LoadedCells).field_0x10;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LoadedCells).field_0x8 -
                       *(int *)&(this->LoadedCells).field_0x34);
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->LoadedCells).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->LoadedCells).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1483a014a;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_1483a014a:
  while( true ) {
    if (*(int *)&(this->LoadedCells).field_0x8 - *(int *)&(this->LoadedCells).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->LoadedCells;
    this_00 = *(FPrecomputedVolumetricLightmap **)(lVar4 + 0x18 + lVar10 * 0x28);
    if (this_00 != (FPrecomputedVolumetricLightmap *)0x0) {
      FPrecomputedVolumetricLightmap::RemoveFromScene(this_00,param_1);
    }
    ReleaseCellData(this,(FLoadedCellData *)(lVar4 + lVar10 * 0x28 + 8),param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData>,TDefaultMapHashableKeyFuncs<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData>,TDefaultMapHashableKeyFuncs<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,0>,FDefaultSetAllocator>
           *)&this->LoadedCells);
  pFVar5 = (this->StreamingManager).Ptr;
  if (pFVar5 != (FVolumetricLightmapGridStreamingManager *)0x0) {
    (this->StreamingManager).Ptr = (FVolumetricLightmapGridStreamingManager *)0x0;
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  return;
}

// RequestVolumetricLightMapCell @ 1483a0e90

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
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FVolumetricLightmapGridManager::RequestVolumetricLightMapCell
          (FVolumetricLightmapGridManager *this,FCellRequest *param_1)

{
  FVolumetricLightMapGridCell *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  EStatus EVar7;
  long64 lVar8;
  TEventRef<unsigned_int> TVar9;
  FString *pFVar10;
  IBulkDataIORequest *pIVar11;
  FWriteBuffer *pFVar12;
  undefined ***pppuVar13;
  wchar_t *pwVar14;
  undefined1 auStack_d8 [32];
  FScriptContainerElement *local_b8;
  undefined8 local_a4;
  FName local_9c;
  FName local_94;
  FString local_88;
  undefined4 *local_78;
  longlong local_70;
  code *local_68 [2];
  undefined **local_58;
  FVolumetricLightMapGridCell *local_50;
  FVolumetricLightmapGridManager *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar1 = (param_1->Cell).Val;
  pwVar14 = L"";
  if (pFVar1 == (FVolumetricLightMapGridCell *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cell",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                       ,0xe3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->Data != (FPrecomputedVolumetricLightmapData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InCellRequest.Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                       ,0xe6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar8 = FBulkData::GetBulkDataSize((FBulkData *)&pFVar1->BulkData);
  if (lVar8 == 0) {
    param_1->Status = Ready;
  }
  else {
    local_50 = pFVar1;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FVolumetricLightmapGridManager::RequestVolumetricLightMapCell'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_40 = (undefined ***)0x0;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVolumetricLightmapGridManager::RequestVolumetricLightMapCell'::__l2::<lambda_1>,void,bool,IBulkDataIORequest_*>
                  ::Call;
    local_48 = this;
    if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
      local_a4 = 0;
      TVar9 = (TEventRef<unsigned_int>)&local_a4;
    }
    else {
      ::FName::FName(&local_9c,"PrecomputedVolumetricLightmap");
      TVar9 = FStringTrace::GetNameRef(&local_94);
    }
    uVar2 = *(undefined8 *)TVar9;
    bVar5 = false;
    if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                ((TLogScope<0> *)&local_78);
      bVar5 = true;
      *local_78 = (int)uVar2;
      *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
    }
    bVar6 = FBulkData::IsBulkDataLoaded((FBulkData *)&pFVar1->BulkData);
    if (bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                         ,0x126,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar7 = Ready;
    }
    else {
      if (4 < (byte)LogVolumetricLightmapStreaming._0_1_) {
        pFVar10 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this->World,&local_88,(UObject *)0x0,None);
        if ((pFVar10->Data).ArrayNum != 0) {
          pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        local_b8 = (FScriptContainerElement *)pwVar14;
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogVolumetricLightmapStreaming);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      pIVar11 = FBulkData::CreateStreamingRequest
                          ((FBulkData *)&pFVar1->BulkData,AIOP_Normal,
                           (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_68,
                           (uchar *)0x0);
      param_1->IORequest = pIVar11;
      EVar7 = Requested;
    }
    param_1->Status = EVar7;
    if (bVar5) {
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar3 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar12 = *(FWriteBuffer **)(lVar3 + 0x20);
      if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
        pFVar12 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar12->Cursor = '\n';
      pFVar12->Cursor = pFVar12->Cursor + 1;
      pFVar12->Committed = pFVar12->Cursor;
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar13 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar13 = local_40;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  return;
}

// WaitForPendingRequest @ 1483b9c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FVolumetricLightmapGridManager::WaitForPendingRequest
          (FVolumetricLightmapGridManager *this,float param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  LARGE_INTEGER local_res8;
  undefined1 local_res10 [8];
  
  QueryPerformanceCounter(&local_res8);
  fVar4 = __real_3a83126f;
  dVar3 = __real_4170000000000000;
  dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + (double)param_1 +
          __real_4170000000000000;
  if (param_1 == 0.0) {
    dVar2 = __real_47efffffe0000000;
  }
  do {
    iVar1 = (this->PendingCellRequests).ArrayNum;
    pFVar6 = (this->PendingCellRequests).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->PendingCellRequests).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVolumetricLightmapGridManager::FCellRequest,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if ((pFVar6 == pFVar7) ||
         (QueryPerformanceCounter(&local_res8),
         (float)(dVar2 - ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                         dVar3)) < fVar4)) {
        return (this->PendingCellRequests).ArrayNum;
      }
      if ((*(longlong **)(pFVar6 + 8) != (longlong *)0x0) &&
         (cVar5 = (**(code **)(**(longlong **)(pFVar6 + 8) + 0x10))(), cVar5 != '\0')) break;
      pFVar6 = pFVar6 + 0x20;
    }
    ProcessRequests(this);
  } while( true );
}

