// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 4

// FTaskCreateSceneObjects_GameThread @ 14e4d7cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTaskCreateSceneObjects_GameThread * __thiscall
UE::Interchange::FTaskCreateSceneObjects_GameThread::FTaskCreateSceneObjects_GameThread
          (FTaskCreateSceneObjects_GameThread *this,FString *param_1,int param_2,
          TWeakPtr<UE::Interchange::FImportAsyncHelper,1> *param_3,
          TArrayView<UInterchangeFactoryBaseNode_*,int> *param_4,UClass *param_5)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<UInterchangeFactoryBaseNode_*,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  UInterchangeFactoryBaseNode **_Src;
  code *pcVar7;
  bool bVar8;
  FTaskCreateSceneObjects_GameThread *pFVar9;
  
  this->_padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTaskCreateSceneObjects_GameThread_Interchange_UE__6B_;
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::FString(&this->PackageBasePath,param_1);
  this->SourceIndex = param_2;
  (this->WeakAsyncHelper).Object = param_3->Object;
  pTVar6 = (param_3->WeakReferenceCount).ReferenceController;
  (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->FactoryNodes;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = param_4->ArrayNum;
  _Src = param_4->DataPtr;
  piVar1 = &(this->FactoryNodes).ArrayMax;
  (this->FactoryNodes).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar5 << 3);
  }
  this->FactoryClass = param_5;
  if (param_5 == (UClass *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("FactoryClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCreateSceneObjects.cpp"
                       ,0x21,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FTaskCreateSceneObjects_GameThread *)(*pcVar7)();
      return pFVar9;
    }
  }
  pTVar6 = (param_3->WeakReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar6->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  return this;
}

// operator() @ 14e4dbc20

void __thiscall
`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FSoftObjectPath *pFVar8;
  FSoftObjectPath *this_00;
  undefined1 local_res10 [8];
  UObject *local_28 [2];
  
  iVar2 = param_1->ArrayNum;
  this_00 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  pFVar8 = (FSoftObjectPath *)((longlong)this_00 + (longlong)iVar2 * 0x38);
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar8) break;
    pUVar7 = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
    if (pUVar7 != (UObject *)0x0) {
      pFVar3 = *(ForAnyElementType **)this;
      local_28[0] = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28[0]);
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(UObject **)(pFVar3->Data + (longlong)iVar6 * 8) = local_28[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28[0]);
      }
    }
    this_00 = (FSoftObjectPath *)&this_00[1].SubPathString.Data.ArrayNum;
  }
  return;
}

// Execute @ 14e4ebb70

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
UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute
          (FTaskCreateSceneObjects_GameThread *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName this_00;
  TObjectPtr<UInterchangeResultsContainer> TVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<ULevel>_u_0 TVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TObjectPtr<UObject> *pTVar8;
  bool bVar9;
  atomic<int> aVar10;
  uint uVar11;
  int iVar12;
  TObjectPtr<ULevel>_u_0 this_01;
  ulonglong uVar13;
  UPackage *pUVar14;
  FName FVar15;
  FString *pFVar16;
  UInterchangeManager *this_02;
  UInterchangeFactoryBaseNode *this_03;
  UWorld *pUVar17;
  UClass *pUVar18;
  UObject *pUVar19;
  UObject *pUVar20;
  FImportedObjectInfo *pFVar21;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar22;
  FName *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  UWorld *this_04;
  FName *pFVar25;
  FImportAsyncHelper *this_05;
  bool bVar26;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20;
  FSoftObjectPath local_248;
  TObjectPtr<ULevel>_u_0 local_228;
  TReferenceControllerBase<1> *local_220;
  TObjectPtr<UObject> *local_218;
  undefined8 local_210;
  FName local_208;
  FName *local_200;
  FName *local_1f8;
  FString local_1f0;
  FString local_1e0;
  TObjectPtr<ULevel>_u_0 local_1c8;
  FString FStack_1c0;
  FName local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  UObject *local_198;
  undefined8 uStack_190;
  ForAnyElementType local_188;
  undefined8 local_180;
  undefined1 local_178;
  int local_174;
  FSoftObjectPath local_168;
  FSoftObjectPath local_148;
  UWorld *local_128;
  FName local_120;
  FName local_118;
  UObject *local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  code *local_a8 [2];
  undefined **local_98;
  TObjectPtr<UObject> **local_90;
  undefined8 local_80;
  code *local_78 [2];
  undefined **local_68;
  UObject *local_60;
  undefined8 local_50;
  
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId38,
               "UE::Interchange::FTaskCreateSceneObjects_GameThread::DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCreateSceneObjects.cpp"
               ,0x26);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId38);
  }
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCreateSceneObjects.cpp"
                         ,0x2c,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_220 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  this_05 = (FImportAsyncHelper *)0x0;
  if (local_220 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = local_220->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        local_220 = (TReferenceControllerBase<1> *)0x0;
        this_05 = (FImportAsyncHelper *)0x0;
        goto LAB_14e4ebc3a;
      }
      LOCK();
      aVar10 = local_220->SharedReferenceCount;
      bVar9 = aVar7 == aVar10;
      if (bVar9) {
        local_220->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar10 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar10;
    } while (!bVar9);
    this_05 = (this->WeakAsyncHelper).Object;
  }
LAB_14e4ebc3a:
  pTVar24 = local_220;
  if (((((this->WeakAsyncHelper).Object == (FImportAsyncHelper *)0x0) ||
       (pTVar2 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController,
       pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeakAsyncHelper.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCreateSceneObjects.cpp"
                         ,0x2e,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this_05 == (FImportAsyncHelper *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this_05->bCancel == (atomic<bool>)0x0) {
    local_218 = (TObjectPtr<UObject> *)0x0;
    local_210 = 0;
    if ((this_05 == (FImportAsyncHelper *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_98 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_90 = &local_218;
    local_80 = 0;
    local_a8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>,void,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    FImportAsyncHelper::IterateImportedAssets
              (this_05,this->SourceIndex,
               (TFunction<void___cdecl(TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                *)local_a8);
    if ((this_05 == (FImportAsyncHelper *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_01 = (TObjectPtr<ULevel>_u_0)(this_05->TaskData).ImportLevel;
    local_110 = (this_05->TaskData).ReimportObject;
    if (this_01.DebugPtr == (ULevel *)0x0) {
      local_228 = this_01;
      this_01.DebugPtr = UWorld::GetCurrentLevel(GWorld.World);
    }
    local_228 = this_01;
    local_128 = ULevel::GetWorld(this_01.DebugPtr);
    pFVar25 = (FName *)(this->FactoryNodes).AllocatorInstance.Data;
    local_res20 = (this->FactoryNodes).ArrayNum;
    uVar13 = (ulonglong)(int)local_res20;
    pFVar23 = pFVar25 + uVar13;
    local_200 = pFVar23;
    while( true ) {
      local_1f8 = pFVar25;
      if ((this->FactoryNodes).ArrayNum != (int)uVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UInterchangeFactoryBaseNode_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar25 == pFVar23) break;
      this_00 = *pFVar25;
      if ((this_00 != (FName)0x0) &&
         (bVar9 = UInterchangeBaseNode::IsEnabled((UInterchangeBaseNode *)this_00), bVar9)) {
        pUVar18 = this->FactoryClass;
        local_208.ComparisonIndex.Value = 0;
        local_208.Number = 0;
        pUVar14 = GetTransientPackage();
        FVar15 = (FName)NewObject<UInterchangeFactoryBase>
                                  ((UObject *)pUVar14,pUVar18,local_208,RF_NoFlags,(UObject *)0x0,
                                   false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        TVar3.field0_0x0 =
             (TObjectPtr<UInterchangeResultsContainer>_u_0)
             (((this_05->AssetImportResult).Object)->Results).field0_0x0.DebugPtr;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (TVar3.field0_0x0 != (UInterchangeResultsContainer *)0x0)) {
          GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
        }
        *(TObjectPtr<UInterchangeResultsContainer>_u_0 *)((longlong)FVar15 + 0x28) =
             TVar3.field0_0x0;
        pFVar16 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_b8);
        FImportAsyncHelper::AddCreatedFactory(this_05,pFVar16,(UInterchangeFactoryBase *)FVar15);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        (**(code **)(*(longlong *)this_00 + 0x2d8))(this_00,&local_1e0);
        this_02 = UInterchangeManager::GetInterchangeManager();
        UInterchangeManager::SanitizeNameInline
                  (this_02,&local_1e0,LongPackage|ObjectPath|ObjectName);
        this_04 = local_128;
        local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f0.Data.ArrayNum = 0;
        local_1f0.Data.ArrayMax = 0;
        bVar9 = UInterchangeFactoryBaseNode::GetCustomLevelUid
                          ((UInterchangeFactoryBaseNode *)this_00,&local_1f0);
        if (bVar9) {
          uVar1 = this->SourceIndex;
          uVar11 = 0;
          if ((int)uVar1 < (this_05->BaseNodeContainers).ArrayNum) {
            uVar11 = ~uVar1 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this_05->BaseNodeContainers).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar4 + (longlong)(int)uVar1 * 8) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                 ,0x67,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_03 = UInterchangeBaseNodeContainer::GetFactoryNode
                              (*(UInterchangeBaseNodeContainer **)
                                (pFVar4 + (longlong)(int)uVar1 * 8),&local_1f0);
          if (this_03 != (UInterchangeFactoryBaseNode *)0x0) {
            local_168.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_168.AssetPath.PackageName.Number = 0;
            local_168.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_168.AssetPath.AssetName.Number = 0;
            local_168.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_168.SubPathString.Data.ArrayNum = 0;
            local_168.SubPathString.Data.ArrayMax = 0;
            bVar9 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_03,&local_168);
            if ((bVar9) &&
               (pUVar17 = (UWorld *)
                          FSoftObjectPath::TryLoad(&local_168,(FUObjectSerializeContext *)0x0),
               pUVar17 != (UWorld *)0x0)) {
              pUVar18 = Z_Construct_UClass_UWorld_NoRegister();
              iVar12 = (int)pUVar18->_padding_;
              if ((iVar12 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
                 (((longlong *)
                   *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar12 * 8)
                   == &pUVar18->_padding_ &&
                  (TVar5 = (TObjectPtr<ULevel>_u_0)(pUVar17->PersistentLevel).field0_0x0.DebugPtr,
                  TVar5.DebugPtr != (ULevel *)0x0)))) {
                this_04 = pUVar17;
                this_01 = TVar5;
              }
            }
            if (local_168.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.SubPathString.Data.AllocatorInstance.Data);
            }
          }
        }
        pUVar14 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_04);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar14,&local_c8,(UObject *)0x0);
        local_120 = (FName)this_04->_padding_;
        ::FName::ToString(&local_120,&local_d8);
        local_118 = (FName)(this_01.DebugPtr)->_padding_;
        ::FName::ToString(&local_118,&local_f8);
        ::FString::ConcatFC(&local_108,&local_f8,L".");
        ::FString::ConcatFF(&local_e8,&local_108,&local_1e0);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        local_1c8.DebugPtr = (ULevel *)0x0;
        FStack_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1c0.Data.ArrayNum = 0;
        FStack_1c0.Data.ArrayMax = 0;
        local_1b0.ComparisonIndex.Value = 0;
        local_1b0.Number = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        iVar12 = local_1e0.Data.ArrayNum + -1;
        local_198 = (UObject *)0x0;
        uStack_190 = 0;
        local_188.Data = (FScriptContainerElement *)0x0;
        local_180 = 0;
        local_178 = 0;
        local_174 = 0xffffffff;
        if (local_1e0.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange(&FStack_1c0,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar12);
        pTVar8 = local_218;
        iVar12 = (int)local_210;
        local_180 = CONCAT44(local_180._4_4_,(int)local_210);
        local_1c8 = this_01;
        local_1b0 = this_00;
        if (((int)local_210 == 0) && (local_180._4_4_ == 0)) {
          local_180 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_210,local_180._4_4_,&local_188,(int)local_210,
                     (int *)((longlong)&local_180 + 4));
          ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>(local_188.Data,pTVar8,iVar12);
        }
        pUVar20 = local_110;
        pUVar19 = (UObject *)
                  (**(code **)(*(longlong *)FVar15 + 0x348))
                            (FVar15,local_110,this_00,&local_c8,&local_d8,&local_e8);
        uStack_190 = 0;
        local_198 = pUVar20;
        if (pUVar19 != pUVar20) {
          local_198 = pUVar19;
        }
        local_178 = pUVar20 != (UObject *)0x0;
        iVar12 = this->SourceIndex;
        local_174 = this_05->UniqueId;
        if ((-1 < iVar12) && (iVar12 < (this_05->BaseNodeContainers).ArrayNum)) {
          if (((this_05->BaseNodeContainers).ArrayNum <= iVar12) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_1a8 = *(undefined8 *)
                       ((this_05->BaseNodeContainers).AllocatorInstance.Data + (longlong)iVar12 * 8)
          ;
          uVar1 = this->SourceIndex;
          uVar11 = 0;
          if ((int)uVar1 < (this_05->SourceDatas).ArrayNum) {
            uVar11 = ~uVar1 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uStack_1a0 = *(undefined8 *)
                        ((this_05->SourceDatas).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
        }
        pUVar20 = (UObject *)(**(code **)(*(longlong *)FVar15 + 0x2f0))(FVar15,&local_1c8);
        if (pUVar20 != (UObject *)0x0) {
          local_68 = &Core::Private::Function::
                      TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::`50'::<lambda_2>,0,0>
                      ::_vftable_;
          local_50 = 0;
          local_78[0] = Core::Private::Function::
                        TFunctionRefCaller<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l50::<lambda_2>,bool,UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_&>
                        ::Call;
          local_60 = pUVar20;
          pFVar21 = FImportAsyncHelper::FindImportedSceneObjects
                              (this_05,this->SourceIndex,
                               (TFunction<bool___cdecl(UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_&)>
                                *)local_78);
          if (pFVar21 == (FImportedObjectInfo *)0x0) {
            local_res18[0] = this->SourceIndex;
            lpCriticalSection = &this_05->ImportedSceneObjectsPerSourceIndexLock;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            pTVar22 = TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<int_const_&>
                                ((TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this_05->ImportedSceneObjectsPerSourceIndex,local_res18[0],
                                 (int *)local_res18);
            iVar12 = pTVar22->ArrayNum;
            if (iVar12 == pTVar22->ArrayMax) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
            }
            pTVar22->ArrayNum = iVar12 + 1;
            pFVar25 = (FName *)((pTVar22->AllocatorInstance).Data + (longlong)iVar12 * 0x38);
            DefaultConstructItems<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,int>
                      (pFVar25,1);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            local_248.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_248.AssetPath.PackageName.Number = 0;
            local_248.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_248.AssetPath.AssetName.Number = 0;
            local_248.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.SubPathString.Data.ArrayNum = 0;
            local_248.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_248,pUVar20);
            pFVar23 = pFVar25 + 2;
            *pFVar25 = local_248.AssetPath.PackageName;
            pFVar25[1] = local_248.AssetPath.AssetName;
            if (pFVar23 == (FName *)&local_248.SubPathString) {
              if ((FName)local_248.SubPathString.Data.AllocatorInstance.Data != (FName)0x0) {
                FMemory::Free(local_248.SubPathString.Data.AllocatorInstance.Data);
              }
            }
            else {
              if (*pFVar23 != (FName)0x0) {
                FMemory::Free((void *)*pFVar23);
              }
              *pFVar23 = (FName)local_248.SubPathString.Data.AllocatorInstance.Data;
              pFVar25[3].ComparisonIndex.Value = local_248.SubPathString.Data.ArrayNum;
              pFVar25[3].Number = local_248.SubPathString.Data.ArrayMax;
              local_248.SubPathString.Data.ArrayNum = 0;
              local_248.SubPathString.Data.ArrayMax = 0;
              local_248.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            pFVar25[4] = FVar15;
            pFVar25[5] = this_00;
          }
          local_148.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_148.AssetPath.PackageName.Number = 0;
          local_148.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_148.AssetPath.AssetName.Number = 0;
          local_148.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.SubPathString.Data.ArrayNum = 0;
          local_148.SubPathString.Data.ArrayMax = 0;
          FSoftObjectPath::SetPath(&local_148,pUVar20);
          UInterchangeFactoryBaseNode::SetCustomReferenceObject
                    ((UInterchangeFactoryBaseNode *)this_00,&local_148);
          if (local_148.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_148.SubPathString.Data.AllocatorInstance.Data);
          }
        }
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data);
        }
        if (FStack_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1c0.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        pFVar23 = local_200;
        this_01 = local_228;
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          pFVar23 = local_200;
          this_01 = local_228;
        }
      }
      uVar13 = (ulonglong)local_res20;
      pFVar25 = local_1f8 + 1;
    }
    pTVar24 = local_220;
    if (local_218 != (TObjectPtr<UObject> *)0x0) {
      FMemory::Free(local_218);
      pTVar24 = local_220;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTaskThread @ 14e4f9730

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
UE::Interchange::FTaskCreateSceneObjects_GameThread::GetTaskThread
          (FTaskCreateSceneObjects_GameThread *this)

{
  return GameThread;
}

