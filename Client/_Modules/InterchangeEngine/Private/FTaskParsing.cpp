// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 4

// operator() @ 14e4de740

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
`UE::Interchange::FTaskParsing::Execute'::__l17::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeFactoryBaseNode *param_2)

{
  int *piVar1;
  ForElementType<UInterchangeFactoryBaseNode_*> *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  longlong lVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<UInterchangeFactoryBaseNode_*> *pFVar11;
  FScriptContainerElement FVar12;
  FScriptContainerElement *pFVar13;
  ForElementType<UInterchangeFactoryBaseNode_*> local_res18;
  FString local_28;
  
  local_res18.InlineData = (uchar  [8])param_2;
  pUVar7 = (UClass *)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  pUVar7 = UInterchangeManager::GetRegisteredFactoryClass
                     (*(UInterchangeManager **)(*(longlong *)this + 0x60),pUVar7);
  lVar8 = (**(code **)(*(longlong *)local_res18.InlineData + 0x2f8))();
  pUVar9 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
LAB_14e4de7c9:
    lVar8 = (**(code **)(*(longlong *)local_res18.InlineData + 0x2f8))();
    pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar9 != (UClass *)0x0) {
      iVar6 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar9->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_14e4de808;
    }
    FVar12 = (FScriptContainerElement)0x0;
  }
  else {
    iVar6 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14e4de7c9;
LAB_14e4de808:
    FVar12 = (FScriptContainerElement)0x1;
  }
  if ((pUVar7 != (UClass *)0x0) &&
     ((FVar12 == (FScriptContainerElement)0x0 || (**(char **)((longlong)this + 8) != '\0')))) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    iVar6 = *(int *)&pFVar3[1].Data;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    pFVar13 = pFVar3->Data + (longlong)iVar6 * 0x60;
    DefaultConstructItems<UE::InterchangeTaskParsing::Private::FTaskData,int>(pFVar13,1);
    pFVar10 = (FScriptContainerElement *)
              UInterchangeBaseNode::GetUniqueID
                        ((UInterchangeBaseNode *)local_res18.InlineData,&local_28);
    if (pFVar13 != pFVar10) {
      if (*(void **)pFVar13 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar13);
      }
      *(undefined8 *)pFVar13 = *(undefined8 *)pFVar10;
      *(undefined8 *)pFVar10 = 0;
      *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(pFVar10 + 8);
      *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(pFVar10 + 0xc);
      *(undefined8 *)(pFVar10 + 8) = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = (ForElementType<UInterchangeFactoryBaseNode_*> *)(pFVar13 + 0x48);
    *(undefined4 *)(pFVar13 + 0x10) = **(undefined4 **)((longlong)this + 0x18);
    pFVar13[0x14] = FVar12;
    pFVar11 = *(ForElementType<UInterchangeFactoryBaseNode_*> **)(pFVar13 + 0x50);
    if (*(ForElementType<UInterchangeFactoryBaseNode_*> **)(pFVar13 + 0x50) ==
        (ForElementType<UInterchangeFactoryBaseNode_*> *)0x0) {
      pFVar11 = pFVar2;
    }
    if (((pFVar11 <= &local_res18) &&
        (&local_res18 <
         (ForElementType<UInterchangeFactoryBaseNode_*> *)
         (pFVar11->InlineData + (longlong)*(int *)(pFVar13 + 0x5c) * 8))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(pFVar13 + 0x58);
    if (iVar6 == *(int *)(pFVar13 + 0x5c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UInterchangeFactoryBaseNode_*>_>
                        (0x808,pFVar2,(int *)(pFVar13 + 0x5c));
    }
    *(int *)(pFVar13 + 0x58) = iVar6 + 1;
    pFVar11 = *(ForElementType<UInterchangeFactoryBaseNode_*> **)(pFVar13 + 0x50);
    if (*(ForElementType<UInterchangeFactoryBaseNode_*> **)(pFVar13 + 0x50) ==
        (ForElementType<UInterchangeFactoryBaseNode_*> *)0x0) {
      pFVar11 = pFVar2;
    }
    *(uchar (*) [8])(pFVar11->InlineData + (longlong)iVar6 * 8) = local_res18.InlineData;
    UInterchangeFactoryBaseNode::GetFactoryDependencies
              ((UInterchangeFactoryBaseNode *)local_res18.InlineData,
               (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x18));
    *(UClass **)(pFVar13 + 0x40) = pUVar7;
  }
  return;
}

// operator() @ 14e4dfac0

bool __thiscall
`UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>::operator()
          (void *this,FTaskData *param_1,FTaskData *param_2)

{
  bool bVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  pTVar2 = UE::InterchangeTaskParsing::Private::FNodeDependencyCache::GetAccumulatedDependencies
                     (*(FNodeDependencyCache **)((longlong)this + 8),
                      (UInterchangeBaseNodeContainer *)**(undefined8 **)this,&param_2->UniqueID);
  pTVar3 = UE::InterchangeTaskParsing::Private::FNodeDependencyCache::GetAccumulatedDependencies
                     (*(FNodeDependencyCache **)((longlong)this + 8),
                      (UInterchangeBaseNodeContainer *)**(undefined8 **)this,&param_1->UniqueID);
  iVar4 = *(int *)&(pTVar2->Elements).field_0x8 - *(int *)&(pTVar2->Elements).field_0x34;
  iVar6 = *(int *)&(pTVar3->Elements).field_0x8 - *(int *)&(pTVar3->Elements).field_0x34;
  if (iVar6 == iVar4) {
    pwVar5 = L"";
    if ((param_2->UniqueID).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->UniqueID).Data.AllocatorInstance.Data;
    }
    if ((param_1->UniqueID).Data.ArrayNum != 0) {
      pwVar5 = (wchar_t *)(param_1->UniqueID).Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar7);
    bVar1 = SUB41((uint)iVar4 >> 0x1f,0);
  }
  else {
    bVar1 = iVar6 < iVar4;
  }
  return bVar1;
}

// Execute @ 14e4eeeb0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UE::Interchange::FTaskParsing::Execute(FTaskParsing *this)

{
  int *piVar1;
  atomic<int> aVar2;
  UObject *pUVar3;
  FImportAsyncHelper *pFVar4;
  UInterchangeManager *pUVar5;
  code *pcVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  FIdentityFunctor FVar9;
  ForAnyElementType FVar10;
  FTaskData *pFVar11;
  FName FVar12;
  FName FVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  atomic<int> aVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  UClass *pUVar20;
  UPackage *pUVar21;
  UClass *pUVar22;
  UInterchangeResult *pUVar23;
  FText *pFVar24;
  FTaskGraphInterface *pFVar25;
  ulong64 uVar26;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar27;
  FString *pFVar28;
  FText *pFVar29;
  FText *pFVar30;
  FTextFormat *pFVar31;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *pTVar32;
  FString *pFVar33;
  UInterchangeResultWarning_Generic *pUVar34;
  UInterchangeTranslatorBase *pUVar35;
  TReferenceControllerBase<1> *pTVar36;
  FInterchangeTaskSystem *pFVar37;
  TReferenceControllerBase<1> *pTVar38;
  longlong *plVar39;
  ITextData *pIVar40;
  ulong64 *puVar41;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar42;
  longlong lVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  atomic<int> *paVar46;
  uint uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  atomic<int> *paVar50;
  FInterchangeTaskBase *pFVar51;
  FScriptContainerElement *pFVar52;
  FWeakObjectPtr *this_00;
  bool bVar53;
  undefined1 auStackY_708 [32];
  FGCScopeGuard local_6b4;
  char local_6b3;
  FIdentityFunctor local_6b0 [8];
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> local_6a8;
  undefined1 local_698;
  undefined1 local_697 [7];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_690;
  ForAnyElementType local_680;
  undefined8 local_678;
  uint local_670 [2];
  ForAnyElementType local_668;
  undefined8 local_660;
  TReferenceControllerBase<1> *local_658;
  TArray<UE::InterchangeTaskParsing::Private::FTaskData,TSizedDefaultAllocator<32>_> local_650;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_640;
  uint local_630;
  FWeakObjectPtr local_62c;
  FLLMScope local_624;
  FTaskData *local_620;
  ulong64 local_618;
  ulong64 local_610;
  FTaskParsing *local_608;
  FScriptContainerElement *local_600;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_5f8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_5e8;
  FString local_5d8;
  UInterchangeBaseNodeContainer *local_5c8;
  longlong local_5c0;
  FName local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  FText local_5a0;
  longlong *local_590;
  longlong lStack_588;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_580;
  undefined8 uStack_578;
  longlong lStack_570;
  int local_568;
  undefined4 uStack_564;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_560;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_550;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_540;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_520;
  undefined1 local_500 [4];
  undefined1 local_4fc [4];
  UObject *local_4f8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_4f0;
  FMemScope local_4e0;
  undefined1 local_4d8 [12];
  uint uStack_4cc;
  TBitArray<FDefaultBitArrayAllocator> *local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  undefined8 uStack_4b0;
  longlong *local_4a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4a0;
  undefined8 uStack_480;
  code *local_478;
  FTaskParsing **local_470;
  UInterchangeBaseNodeContainer **local_468;
  undefined1 *local_460;
  initializer_list<FFormatArgumentValue> local_458;
  FTextFormat local_448;
  FText local_438;
  FTextFormat local_428;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_418;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_408;
  undefined1 local_3f8 [24];
  longlong lStack_3e0;
  longlong lStack_3d8;
  int local_3d0;
  undefined4 uStack_3cc;
  FTaskParsing *local_3c8;
  undefined1 *local_3c0;
  TArray<UE::InterchangeTaskParsing::Private::FTaskData,TSizedDefaultAllocator<32>_> *local_3b8;
  uint *local_3b0;
  FFormatArgumentValue local_3a8;
  undefined1 local_388 [16];
  FText local_378;
  undefined4 local_368;
  FText local_358;
  FFormatArgumentValue local_348;
  FText local_328;
  TRangedForIterator local_318;
  FText local_2e8;
  FText local_2d8;
  FTextFormat local_2c8;
  FText local_2b8;
  FTextFormat local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_298;
  undefined1 local_278 [128];
  undefined1 local_1f8 [128];
  undefined1 local_178 [32];
  undefined8 local_158;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  void *local_138;
  undefined4 local_130;
  undefined1 local_128 [32];
  undefined8 local_108;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [64];
  void *local_98;
  undefined4 local_90;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_708;
  bVar53 = -1 < CpuChannel->Enabled;
  local_608 = this;
  if (bVar53) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId300,"UE::Interchange::FTaskParsing::DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskParsing.cpp"
               ,300);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId300);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name304,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_624,LLMScope_Name304,false,None,Default,true);
  FMemScope::FMemScope(&local_4e0,&LLMScope_Name304,true);
  local_6b3 = '\0';
  bVar15 = IsInGameThread();
  if (!bVar15) {
    if (local_6b3 != '\0') {
      FGCScopeGuard::~FGCScopeGuard(&local_6b4);
    }
    FGCScopeGuard::FGCScopeGuard(&local_6b4);
    local_6b3 = '\x01';
  }
  local_6a8.SharedReferenceCount.ReferenceController =
       (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  local_6a8.Object = (FImportAsyncHelper *)0x0;
  if (local_6a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_6a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_6a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4ef009;
      }
      LOCK();
      aVar16 = (local_6a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar15 = aVar2 == aVar16;
      if (bVar15) {
        (local_6a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar16 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar16;
    } while (!bVar15);
    if ((local_6a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
       && (local_6a8.Object = (this->WeakAsyncHelper).Object,
          local_6a8.Object != (FImportAsyncHelper *)0x0)) goto LAB_14e4ef02f;
  }
LAB_14e4ef009:
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("AsyncHelper.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskParsing.cpp"
                      ,0x13b,L"");
  if (bVar15) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14e4ef02f:
  local_668.Data = (FScriptContainerElement *)0x0;
  local_660 = 0;
  if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar9 = local_6b0[0];
  if ((local_6a8.Object)->bCancel == (atomic<bool>)0x0) {
    local_670[0] = 0;
    while( true ) {
      if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = local_670[0];
      pFVar4 = local_6a8.Object;
      if (((local_6a8.Object)->SourceDatas).ArrayNum <= (int)local_670[0]) break;
      local_650.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_650.ArrayNum = 0;
      local_650.ArrayMax = 0;
      if (((int)local_670[0] < 0) ||
         (((local_6a8.Object)->BaseNodeContainers).ArrayNum <= (int)local_670[0])) {
        iVar17 = 0;
      }
      else {
        uVar47 = 0;
        if ((int)local_670[0] < ((local_6a8.Object)->BaseNodeContainers).ArrayNum) {
          uVar47 = ~local_670[0] >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_5c8 = *(UInterchangeBaseNodeContainer **)
                     ((pFVar4->BaseNodeContainers).AllocatorInstance.Data +
                     (longlong)(int)uVar19 * 8);
        if (local_5c8 == (UInterchangeBaseNodeContainer *)0x0) {
          iVar17 = local_650.ArrayNum;
        }
        else {
          UInterchangeBaseNodeContainer::ComputeChildrenCache(local_5c8);
          if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_478 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Interchange::FTaskParsing::Execute'::__l17::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
                      ::Call;
          local_698 = ((local_6a8.Object)->TaskData).ImportType == ImportType_Scene;
          local_3c0 = &local_698;
          local_3b8 = &local_650;
          local_3b0 = local_670;
          local_470 = &local_3c8;
          local_3c8 = this;
          UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeFactoryBaseNode>
                    (local_5c8,
                     (TFunctionRef<void___cdecl(FString_const_&,UInterchangeFactoryBaseNode_*)> *)
                     &local_478);
          local_d8._0_8_ = 0;
          local_d8._8_8_ = 0;
          local_d8._32_8_ = 0;
          local_d8._40_4_ = 0;
          local_d8._44_4_ = 0x80;
          local_d8._48_4_ = 0xffffffff;
          local_d8._52_4_ = 0;
          local_98 = (void *)0x0;
          local_90 = 0;
          InterchangeTaskParsing::Private::FNodeDependencyCache::CacheAccumulatedDependencies
                    ((FNodeDependencyCache *)local_d8,local_5c8,&local_650);
          local_468 = &local_5c8;
          local_460 = local_d8;
          AlgoImpl::
          IntroSortInternal<UE::InterchangeTaskParsing::Private::FTaskData,int,FIdentityFunctor,TDereferenceWrapper<UE::InterchangeTaskParsing::Private::FTaskData,_UE::Interchange::FTaskParsing::Execute_::__l24::<lambda_2>_>_>
                    ((FTaskData *)local_650.AllocatorInstance.Data,local_650.ArrayNum,FVar9,
                     (<lambda_2> *)&local_468);
          local_90 = 0;
          if (local_98 != (void *)0x0) {
            FMemory::Free(local_98);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_d8);
          lVar44 = (longlong)local_650.ArrayNum;
          if (local_650.ArrayNum != 0) {
            iVar17 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,8,local_650.ArrayNum,&local_668,(int *)&local_660,
                                (int *)((longlong)&local_660 + 4));
            memmove(local_668.Data + (longlong)iVar17 * 0x60,local_650.AllocatorInstance.Data,
                    lVar44 * 0x60);
            local_650._8_8_ = local_650._8_8_ & 0xffffffff00000000;
          }
          iVar17 = 0;
        }
      }
      DestructItems<UE::InterchangeTaskParsing::Private::FTaskData,int>
                ((FTaskData *)local_650.AllocatorInstance.Data,iVar17);
      if ((FTaskData *)local_650.AllocatorInstance.Data != (FTaskData *)0x0) {
        FMemory::Free(local_650.AllocatorInstance.Data);
      }
      local_670[0] = local_670[0] + 1;
    }
  }
  local_178._0_8_ = 0;
  local_178._8_8_ = 0;
  local_158 = 0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  if ((int)local_660 == 0) {
    if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = local_6a8.Object;
    pFVar52 = ((local_6a8.Object)->Translators).AllocatorInstance.Data;
    iVar17 = ((local_6a8.Object)->Translators).ArrayNum;
    local_600 = pFVar52 + (longlong)iVar17 * 8;
    while( true ) {
      pFVar45 = local_600;
      if ((pFVar4->Translators).ArrayNum != iVar17) {
        local_697[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UInterchangeTranslatorBase>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_697);
      }
      if (pFVar52 == pFVar45) break;
      pUVar35 = *(UInterchangeTranslatorBase **)pFVar52;
      if (GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar35 != (UInterchangeTranslatorBase *)0x0) goto LAB_14e4ef429;
      }
      else if (pUVar35 != (UInterchangeTranslatorBase *)0x0) {
        GC::MarkAsReachable((UObject *)pUVar35);
LAB_14e4ef429:
        if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((local_6a8.Object)->bCancel == (atomic<bool>)0x0) {
          local_5b8.ComparisonIndex.Value = 0;
          local_5b8.Number = 0;
          pUVar20 = Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister();
          pUVar21 = GetTransientPackage();
          FVar12 = local_5b8;
          if (local_5b8 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)pUVar21,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar22 = Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister();
          CheckIsClassChildOf_Internal(pUVar22,pUVar20);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_278,pUVar20);
          FVar13 = local_5b8;
          local_5b8.ComparisonIndex = FVar12.ComparisonIndex.Value;
          local_5b8.Number = FVar12.Number;
          local_278._16_4_ = local_5b8.ComparisonIndex.Value;
          local_278._20_4_ = local_5b8.Number;
          local_278._48_8_ = (FObjectInstancingGraph *)0x0;
          local_278._56_8_ = (UPackage *)0x0;
          local_278._24_4_ = RF_NoFlags;
          local_278._40_8_ = (UObject *)0x0;
          local_278[0x20] = false;
          local_5b8 = FVar13;
          local_278._8_8_ = pUVar21;
          pUVar23 = (UInterchangeResult *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_278);
          if (local_278._64_8_ != 0) {
            plVar39 = (longlong *)(local_278 + 0x50);
            if ((longlong *)local_278._104_8_ != (longlong *)0x0) {
              plVar39 = (longlong *)local_278._104_8_;
            }
            (**(code **)(*plVar39 + 0x10))();
          }
          pFVar24 = FText::AsLocalizable_Advanced_LocText
                              ((FText *)&local_348,L"InterchangeTaskParsing",
                               L"TranslatorNoAssetImported",
                               L"There was no data to import in the provided source data.");
          FText::operator=((FText *)(pUVar23 + 1),pFVar24);
          if ((ITextData *)local_348._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_348._0_8_ + 0x10))();
          }
          ::FString::FString(&local_5d8,&((pUVar35->SourceData).field0_0x0.DebugPtr)->Filename);
          pFVar28 = &pUVar23->SourceAssetName;
          if (pFVar28 != &local_5d8) {
            pFVar45 = (pFVar28->Data).AllocatorInstance.Data;
            if (pFVar45 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar45);
            }
            (pFVar28->Data).AllocatorInstance.Data = local_5d8.Data.AllocatorInstance.Data;
            (pUVar23->SourceAssetName).Data.ArrayNum = local_5d8.Data.ArrayNum;
            (pUVar23->SourceAssetName).Data.ArrayMax = local_5d8.Data.ArrayMax;
            local_5d8.Data.ArrayNum = 0;
            local_5d8.Data.ArrayMax = 0;
            local_5d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
          }
          UInterchangeTranslatorBase::AddMessage(pUVar35,pUVar23);
        }
      }
      pFVar52 = pFVar52 + 8;
    }
  }
  local_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e8.ArrayNum = 0;
  local_5e8.ArrayMax = 0;
  pFVar25 = FTaskGraphInterface::Get();
  iVar18 = (**(code **)((longlong)*pFVar25 + 0x20))(pFVar25);
  local_680.Data = (FScriptContainerElement *)0x0;
  local_678 = 0;
  local_630 = 0;
  iVar17 = 1;
  if (1 < iVar18 / 2) {
    iVar17 = iVar18 / 2;
  }
  local_658 = (TReferenceControllerBase<1> *)CONCAT44(local_658._4_4_,iVar17);
  if (0 < (int)local_660) {
    local_5c0 = 0;
    local_600 = (FScriptContainerElement *)0x0;
    do {
      lVar44 = local_5c0;
      pFVar52 = local_600;
      uVar19 = local_630;
      uVar48 = 0;
      uVar49 = uVar48;
      if ((int)local_630 < (int)local_660) {
        uVar49 = (ulonglong)(~local_630 >> 0x1f);
      }
      if (((int)uVar49 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_620 = (FTaskData *)(local_668.Data + (longlong)pFVar52);
      if ((0 < (local_620->Dependencies).ArrayNum) && (0 < lVar44)) {
        lVar43 = 0;
        uVar49 = uVar48;
        do {
          pFVar11 = local_620;
          uVar47 = (uint)uVar48;
          uVar19 = 0;
          if ((int)uVar47 < (int)local_660) {
            uVar19 = ~uVar47 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar10.Data = local_668.Data;
          pFVar52 = (pFVar11->Dependencies).AllocatorInstance.Data;
          pFVar45 = pFVar52 + (longlong)(pFVar11->Dependencies).ArrayNum * 0x10;
          for (; pFVar52 != pFVar45; pFVar52 = pFVar52 + 0x10) {
            iVar17 = *(int *)(pFVar52 + 8);
            iVar18 = *(int *)(FVar10.Data + lVar43 + 8);
            if (iVar17 == iVar18) {
              if (1 < iVar17) {
                iVar17 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar52,*(wchar_t **)(FVar10.Data + lVar43));
                bVar15 = iVar17 == 0;
                goto LAB_14e4ef736;
              }
LAB_14e4ef74b:
              pFVar11 = local_620;
              uVar19 = 0;
              if ((int)uVar47 < (int)local_660) {
                uVar19 = ~uVar47 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar52 = (pFVar11->Prerequisites).AllocatorInstance.Data;
              pFVar45 = local_668.Data + lVar43 + 0x28;
              if (((pFVar52 <= pFVar45) &&
                  (pFVar45 < pFVar52 + (longlong)(pFVar11->Prerequisites).ArrayMax * 8)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar17 = (pFVar11->Prerequisites).ArrayNum;
              piVar1 = &(pFVar11->Prerequisites).ArrayMax;
              if (iVar17 == *piVar1) {
                iVar17 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(pFVar11->Prerequisites).AllocatorInstance,piVar1);
              }
              (pFVar11->Prerequisites).ArrayNum = iVar17 + 1;
              *(undefined8 *)
               ((pFVar11->Prerequisites).AllocatorInstance.Data + (longlong)iVar17 * 8) =
                   *(undefined8 *)pFVar45;
              break;
            }
            bVar15 = iVar17 + iVar18 == 1;
LAB_14e4ef736:
            if (bVar15) goto LAB_14e4ef74b;
          }
          uVar48 = (ulonglong)(uVar47 + 1);
          uVar49 = uVar49 + 1;
          lVar43 = lVar43 + 0x60;
          lVar44 = local_5c0;
          pFVar52 = local_600;
          uVar19 = local_630;
        } while ((longlong)uVar49 < local_5c0);
      }
      pFVar11 = local_620;
      if ((int)local_658 <= (int)local_678) {
        pTVar42 = &local_620->Prerequisites;
        if ((pTVar42 == (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&local_680) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar43 = (longlong)(int)local_678;
        if ((int)local_678 != 0) {
          iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,(int)local_678,&pTVar42->AllocatorInstance,
                              &(pFVar11->Prerequisites).ArrayNum,&(pFVar11->Prerequisites).ArrayMax)
          ;
          memcpy((pTVar42->AllocatorInstance).Data + (longlong)iVar17 * 8,local_680.Data,lVar43 << 3
                );
        }
        bVar15 = (longlong)local_678 < 0;
        local_678 = local_678 & 0xffffffff00000000;
        if (bVar15) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_680,0,(int *)((longlong)&local_678 + 4));
        }
      }
      puVar41 = &local_620->GraphEventRef;
      uVar26 = InterchangeTaskParsing::Private::CreateTasksFromData
                         (local_620,&local_6a8,
                          (TMap<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>_>
                           *)local_178,&local_88);
      *puVar41 = uVar26;
      if (((local_680.Data <= puVar41) && (puVar41 < local_680.Data + (longlong)local_678._4_4_ * 8)
          ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar17 = (int)local_678;
      if ((int)local_678 == local_678._4_4_) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_680,(int *)((longlong)&local_678 + 4));
      }
      local_630 = uVar19 + 1;
      local_678 = CONCAT44(local_678._4_4_,iVar17 + 1);
      local_5c0 = lVar44 + 1;
      local_600 = pFVar52 + 0x60;
      *(ulong64 *)(local_680.Data + (longlong)iVar17 * 8) = *puVar41;
    } while ((int)local_630 < (int)local_660);
  }
  lVar44 = (longlong)(int)local_678;
  if ((int)local_678 != 0) {
    iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,(int)local_678,&local_5e8.AllocatorInstance,&local_5e8.ArrayNum,
                        &local_5e8.ArrayMax);
    memcpy(local_5e8.AllocatorInstance.Data + (longlong)iVar17 * 8,local_680.Data,lVar44 << 3);
  }
  if (local_178._8_4_ != local_144) {
    local_520.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
    local_128._0_8_ = 0;
    local_128._8_8_ = 0;
    local_108 = 0;
    local_100 = 0;
    local_fc = 0x80;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = (ForElementType<FSetElementId>)0x0;
    local_e0 = 0;
    local_520._padding_._0_4_ = 0;
    local_520._padding_._4_4_ = 1;
    local_520.UnvisitedBitMask = 0xffffffff;
    local_520.CurrentBitIndex = 0;
    local_520.BaseBitIndex = 0;
    if (local_150 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_520);
    }
    unique0x10001780 =
         (TBitArray<FDefaultBitArrayAllocator> *)
         CONCAT44(local_520._padding_._4_4_,(undefined4)local_520._padding_);
    local_3d0 = local_178._8_4_ - local_144;
    local_4d8._0_8_ = local_178;
    uStack_4c0 = CONCAT44(local_520.CurrentBitIndex,local_520.UnvisitedBitMask);
    local_4b8 = CONCAT44(local_520._28_4_,local_520.BaseBitIndex);
    local_3f8._16_8_ = local_520.Array;
    uStack_4b0._4_4_ = uStack_3cc;
    uStack_4b0._0_4_ = local_3d0;
    local_4c8 = local_520.Array;
    local_3f8._0_8_ = local_4d8._0_8_;
    local_3f8._8_8_ = unique0x10001780;
    lStack_3e0 = uStack_4c0;
    lStack_3d8 = local_4b8;
    pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_3f8,
                         (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),local_150);
    local_590 = (longlong *)local_178;
    lStack_588 = pTVar27->_padding_;
    pTStack_580 = pTVar27->Array;
    uStack_578._0_4_ = pTVar27->UnvisitedBitMask;
    uStack_578._4_4_ = pTVar27->CurrentBitIndex;
    lStack_570 = *(longlong *)&pTVar27->BaseBitIndex;
    local_568 = local_178._8_4_ - local_144;
    local_318._44_4_ = uStack_564;
    local_318.InitialNum = local_568;
    local_318._padding_ = (longlong)local_590;
    local_318._padding_ = lStack_588;
    local_318._padding_ = (longlong)pTStack_580;
    local_318._padding_ = uStack_578;
    local_318._padding_ = lStack_570;
    bVar15 = TSparseArray<TSparseSetElement<TTuple<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_4d8,&local_318);
    if (bVar15) {
      do {
        lVar44 = *(longlong *)local_4d8._0_8_ + (longlong)uStack_4c0._4_4_ * 0x48;
        if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = local_6a8.Object;
        uVar19 = *(uint *)(lVar44 + 0x18);
        uVar47 = 0;
        if ((int)uVar19 < ((local_6a8.Object)->Translators).ArrayNum) {
          uVar47 = ~uVar19 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar3 = *(UObject **)
                  ((pFVar4->Translators).AllocatorInstance.Data + (longlong)(int)uVar19 * 8);
        if (GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar3 != (UObject *)0x0) {
            GC::MarkAsReachable(pUVar3);
          }
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar3);
          }
        }
        local_62c.ObjectIndex = 0;
        local_62c.ObjectSerialNumber = 0;
        local_4f8 = pUVar3;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_62c,(FObjectPtr)&local_4f8);
        pFVar28 = TMapBase<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,0>_>
                  ::FindOrAddImpl<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>_>
                            ((TMapBase<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,0>_>
                              *)local_128,local_62c.ObjectSerialNumber ^ local_62c.ObjectIndex,
                             (TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr> *)&local_62c
                            );
        pFVar24 = FText::FromString(&local_2e8,(FString *)(lVar44 + 0x30));
        pFVar29 = FText::FromString(&local_2d8,(FString *)(lVar44 + 0x20));
        pFVar30 = FText::AsLocalizable_Advanced_LocText
                            ((FText *)((longlong)&local_348 + 0x10),L"InterchangeTaskParsingDoTask",
                             L"RenamedAssetMessagePerAsset",L"\n OriginalName:[{0}] NewName:[{1}]");
        pFVar31 = FTextFormat::FTextFormat(&local_2c8,pFVar30,Default);
        local_388._0_4_ = 4;
        FText::FText(&local_378,pFVar29);
        if ((local_378.TextData.Reference == (ITextData *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_368 = 4;
        FText::FText(&local_358,pFVar24);
        if ((local_358.TextData.Reference == (ITextData *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_458._First = (FFormatArgumentValue *)local_388;
        local_458._Last = &local_348;
        pTVar32 = TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>::
                  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>(&local_4f0,&local_458);
        local_448.TextFormatData.Object = (pFVar31->TextFormatData).Object;
        local_448.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar31->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_448.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_448.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_448.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_438,&local_448,pTVar32);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_4f0.AllocatorInstance.Data,local_4f0.ArrayNum);
        if ((FFormatArgumentValue *)local_4f0.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_4f0.AllocatorInstance.Data);
        }
        if (local_358.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
        }
        if (local_378.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar31->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar40 = (pFVar29->TextData).Reference;
        if (pIVar40 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar40 + 0x10))();
        }
        pIVar40 = (pFVar24->TextData).Reference;
        if (pIVar40 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar40 + 0x10))();
        }
        pFVar33 = FText::ToString(&local_438);
        iVar18 = (pFVar33->Data).ArrayNum;
        iVar17 = iVar18 + -1;
        if (iVar18 == 0) {
          iVar17 = 0;
        }
        ::FString::AppendChars(pFVar28,(wchar_t *)(pFVar33->Data).AllocatorInstance.Data,iVar17);
        if (local_438.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
        }
        if (local_348.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_348.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        uStack_4c0 = CONCAT44(uStack_4c0._4_4_,(uint)uStack_4c0 & ~uStack_4cc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_4d8 + 8));
        bVar15 = TSparseArray<TSparseSetElement<TTuple<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_4d8,&local_318);
      } while (bVar15);
    }
    local_540.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
    local_540._padding_._0_4_ = 0;
    local_540._padding_._4_4_ = 1;
    local_540.UnvisitedBitMask = 0xffffffff;
    local_540.CurrentBitIndex = 0;
    local_540.BaseBitIndex = 0;
    if (local_100 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_540);
    }
    lStack_588 = CONCAT44(local_540._padding_._4_4_,(undefined4)local_540._padding_);
    local_590 = (longlong *)local_128;
    uStack_578._4_4_ = local_540.CurrentBitIndex;
    uStack_578._0_4_ = local_540.UnvisitedBitMask;
    lStack_570._4_4_ = local_540._28_4_;
    lStack_570._0_4_ = local_540.BaseBitIndex;
    local_568 = local_128._8_4_ - local_f4;
    pTStack_580 = local_540.Array;
    uStack_480 = CONCAT44(uStack_564,local_568);
    TStack_4a0.Array = local_540.Array;
    local_4a8 = local_590;
    TStack_4a0._padding_ = lStack_588;
    TStack_4a0._16_8_ = uStack_578;
    TStack_4a0._24_8_ = lStack_570;
    pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_298,(TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),
                         local_100);
    lStack_588 = pTVar27->_padding_;
    pTVar7 = pTVar27->Array;
    uVar8._0_4_ = pTVar27->UnvisitedBitMask;
    uVar8._4_4_ = pTVar27->CurrentBitIndex;
    lStack_570 = *(longlong *)&pTVar27->BaseBitIndex;
    pTStack_580 = pTVar7;
    uStack_578 = uVar8;
    while( true ) {
      plVar39 = local_4a8;
      if ((int)local_4a8[1] - *(int *)((longlong)local_4a8 + 0x34) != (int)uStack_480) {
        local_6b0[0] = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_6b0);
      }
      if (((TStack_4a0.CurrentBitIndex == uVar8._4_4_) && (TStack_4a0.Array == pTVar7)) &&
         (plVar39 == (longlong *)local_128)) break;
      this_00 = (FWeakObjectPtr *)((longlong)TStack_4a0.CurrentBitIndex * 0x20 + *plVar39);
      pFVar24 = FText::FromString(&local_2b8,(FString *)(this_00 + 1));
      pFVar29 = FText::AsLocalizable_Advanced_LocText
                          (&local_328,L"InterchangeTaskParsingDoTask",L"RenamedAssetsMessageHeader",
                           L"Renamed Assets: {0}");
      pFVar31 = FTextFormat::FTextFormat(&local_2a8,pFVar29,Default);
      local_3a8.Type = Text;
      FText::FText((FText *)&local_3a8.TextValue,pFVar24);
      if ((local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_5f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5f8.ArrayNum = 1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_5f8.AllocatorInstance,1,&local_5f8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_5f8.AllocatorInstance.Data,&local_3a8,1);
      local_428.TextFormatData.Object = (pFVar31->TextFormatData).Object;
      local_428.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar31->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_428.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_428.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_428.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_5a0,&local_428,&local_5f8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_5f8.AllocatorInstance.Data,local_5f8.ArrayNum);
      if ((FFormatArgumentValue *)local_5f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_5f8.AllocatorInstance.Data);
      }
      if (local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar31->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar40 = (pFVar24->TextData).Reference;
      if (pIVar40 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar40 + 0x10))();
      }
      if (local_328.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
      }
      if (GIsAutomationTesting == false) {
        local_5a8 = 0;
        pUVar20 = Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister();
        pUVar21 = GetTransientPackage();
        pUVar34 = NewObject<UInterchangeResultWarning_Generic>
                            ((UObject *)pUVar21,pUVar20,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        pIVar40 = (pUVar34->Text).TextData.Reference;
        if (pIVar40 != local_5a0.TextData.Reference) {
          (pUVar34->Text).TextData.Reference = local_5a0.TextData.Reference;
          if (local_5a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_5a0.TextData.Reference + 8))
                      (local_5a0.TextData.Reference,local_4fc);
          }
          goto LAB_14e4f030d;
        }
      }
      else {
        local_5b0 = 0;
        pUVar20 = Z_Construct_UClass_UInterchangeResultDisplay_Generic_NoRegister();
        pUVar21 = GetTransientPackage();
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar21,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar22 = Z_Construct_UClass_UInterchangeResultDisplay_Generic_NoRegister();
        CheckIsClassChildOf_Internal(pUVar22,pUVar20);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1f8,pUVar20);
        local_1f8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_1f8._56_8_ = (UPackage *)0x0;
        local_1f8._16_4_ = 0;
        local_1f8._20_4_ = 0;
        local_1f8._24_4_ = RF_NoFlags;
        local_1f8._40_8_ = (UObject *)0x0;
        local_1f8[0x20] = false;
        local_1f8._8_8_ = pUVar21;
        pUVar34 = (UInterchangeResultWarning_Generic *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1f8);
        if (local_1f8._64_8_ != 0) {
          plVar39 = (longlong *)(local_1f8 + 0x50);
          if ((longlong *)local_1f8._104_8_ != (longlong *)0x0) {
            plVar39 = (longlong *)local_1f8._104_8_;
          }
          (**(code **)(*plVar39 + 0x10))();
        }
        pIVar40 = (pUVar34->Text).TextData.Reference;
        if (pIVar40 != local_5a0.TextData.Reference) {
          (pUVar34->Text).TextData.Reference = local_5a0.TextData.Reference;
          if (local_5a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_5a0.TextData.Reference + 8))
                      (local_5a0.TextData.Reference,local_500);
          }
LAB_14e4f030d:
          if (pIVar40 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar40 + 0x10))(pIVar40);
          }
        }
      }
      (pUVar34->Text).Flags = local_5a0.Flags;
      pUVar35 = (UInterchangeTranslatorBase *)FWeakObjectPtr::Get(this_00);
      UInterchangeTranslatorBase::AddMessage(pUVar35,(UInterchangeResult *)pUVar34);
      if (local_5a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_5a0.TextData.Reference + 0x10))();
      }
      TStack_4a0.UnvisitedBitMask = TStack_4a0.UnvisitedBitMask & ~TStack_4a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4a0);
    }
    local_e0 = 0;
    if (local_e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8);
    }
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_128);
  }
  local_640.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_640.ArrayNum = 0;
  local_640.ArrayMax = 0;
  pTVar36 = ::operator_new(0x88);
  if (pTVar36 == (TReferenceControllerBase<1> *)0x0) {
    local_658 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar37 = FInterchangeTaskSystem::Get();
    local_550.Object = (FInterchangeTaskBase *)&DAT_00000010;
    local_550.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar36->SharedReferenceCount = (atomic<int>)0x1;
    pTVar36->WeakReferenceCount = (atomic<int>)0x1;
    pTVar36->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTaskPreCompletion_GameThread_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    pTVar38 = (local_608->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
    pFVar4 = (local_608->WeakAsyncHelper).Object;
    if (pTVar38 == (TReferenceControllerBase<1> *)0x0) {
      paVar50 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar50 = &pTVar38->WeakReferenceCount;
      LOCK();
      *paVar50 = (atomic<int>)((int)*paVar50 + 1);
      UNLOCK();
    }
    pUVar5 = local_608->InterchangeManager;
    FInterchangeTaskBase::FInterchangeTaskBase((FInterchangeTaskBase *)(pTVar36 + 1));
    pTVar36[7]._padding_ = (longlong)pUVar5;
    pTVar36[1]._padding_ = (longlong)&___7FTaskPreCompletion_GameThread_Interchange_UE__6B_;
    *(FImportAsyncHelper **)&pTVar36[7].SharedReferenceCount = pFVar4;
    pTVar36[8]._padding_ = (longlong)pTVar38;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar50 = (atomic<int>)((int)*paVar50 + 1);
      UNLOCK();
      LOCK();
      aVar2 = *paVar50;
      *paVar50 = (atomic<int>)((int)*paVar50 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar38->_padding_ + 8))(pTVar38,1);
      }
    }
    local_658 = pTVar36;
    if (((FInterchangeTaskBase *)(pTVar36 + 1) == (FInterchangeTaskBase *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
    pFVar37 = FInterchangeTaskSystem::Get();
    LOCK();
    pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
    UNLOCK();
    local_550.Object = (FInterchangeTaskBase *)(pTVar36 + 1);
    local_550.SharedReferenceCount.ReferenceController = pTVar36;
  }
  iVar17 = 0;
  paVar50 = (atomic<int> *)&DAT_0000000c;
  uVar26 = FInterchangeTaskSystem::AddTask(pFVar37,&local_550,&local_5e8);
  if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar41 = &(local_6a8.Object)->PreCompletionTask;
  *puVar41 = uVar26;
  if (((local_640.AllocatorInstance.Data <= puVar41) &&
      (puVar41 < local_640.AllocatorInstance.Data + (longlong)local_640.ArrayMax * 8)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar18 = local_640.ArrayNum;
  if (local_640.ArrayNum == local_640.ArrayMax) {
    iVar18 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_640.AllocatorInstance,&local_640.ArrayMax);
  }
  local_640.ArrayNum = iVar18 + 1;
  *(ulong64 *)(local_640.AllocatorInstance.Data + (longlong)iVar18 * 8) = *puVar41;
  local_690.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_690.ArrayNum = 0;
  local_690.ArrayMax = 0;
  while( true ) {
    pTVar36 = (TReferenceControllerBase<1> *)0x0;
    if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((local_6a8.Object)->SourceDatas).ArrayNum <= iVar17) break;
    pTVar38 = ::operator_new(0x88);
    if (pTVar38 == (TReferenceControllerBase<1> *)0x0) {
      pFVar51 = (FInterchangeTaskBase *)&DAT_00000010;
    }
    else {
      pTVar38->SharedReferenceCount = (atomic<int>)0x1;
      pTVar38->WeakReferenceCount = (atomic<int>)0x1;
      pTVar38->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTaskWaitAssetCompilation_GameThread_Interchange_UE___00_SharedPointerInternals__6B_
      ;
      pTVar36 = (local_608->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
      pFVar4 = (local_608->WeakAsyncHelper).Object;
      if (pTVar36 == (TReferenceControllerBase<1> *)0x0) {
        paVar46 = (atomic<int> *)&DAT_0000000c;
      }
      else {
        paVar46 = &pTVar36->WeakReferenceCount;
        LOCK();
        *paVar46 = (atomic<int>)((int)*paVar46 + 1);
        UNLOCK();
      }
      pTVar38[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pTVar38[1].SharedReferenceCount,4000);
      *(undefined1 *)&pTVar38[4].SharedReferenceCount = 0;
      pTVar38[5]._padding_ = 0;
      pTVar38[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar38[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar38[6]._padding_ = 0;
      pTVar38[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar38[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar38[1]._padding_ = (longlong)&___7FTaskWaitAssetCompilation_GameThread_Interchange_UE__6B_
      ;
      pTVar38[4]._padding_ = -1;
      *(int *)&pTVar38[7]._padding_ = iVar17;
      *(FImportAsyncHelper **)&pTVar38[7].SharedReferenceCount = pFVar4;
      pTVar38[8]._padding_ = (longlong)pTVar36;
      if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar46 = (atomic<int>)((int)*paVar46 + 1);
        UNLOCK();
        LOCK();
        aVar2 = *paVar46;
        *paVar46 = (atomic<int>)((int)*paVar46 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar36->_padding_ + 8))(pTVar36,1);
        }
      }
      pFVar51 = (FInterchangeTaskBase *)(pTVar38 + 1);
      if ((pFVar51 == (FInterchangeTaskBase *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
      pTVar36 = pTVar38;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
    if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = local_6a8.Object;
    pTVar42 = &(local_6a8.Object)->WaitAssetCompilationTasks;
    pFVar37 = FInterchangeTaskSystem::Get();
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_418.Object = pFVar51;
    local_418.SharedReferenceCount.ReferenceController = pTVar36;
    local_618 = FInterchangeTaskSystem::AddTask(pFVar37,&local_418,&local_640);
    pFVar52 = (pTVar42->AllocatorInstance).Data;
    if (((pFVar52 <= (FScriptContainerElement *)&local_618) &&
        ((FScriptContainerElement *)&local_618 <
         pFVar52 + (longlong)(pFVar4->WaitAssetCompilationTasks).ArrayMax * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar19 = (pFVar4->WaitAssetCompilationTasks).ArrayNum;
    piVar1 = &(pFVar4->WaitAssetCompilationTasks).ArrayMax;
    if (uVar19 == *piVar1) {
      uVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar42->AllocatorInstance,piVar1);
    }
    pFVar52 = (pTVar42->AllocatorInstance).Data;
    (pFVar4->WaitAssetCompilationTasks).ArrayNum = uVar19 + 1;
    *(ulong64 *)(pFVar52 + (longlong)(int)uVar19 * 8) = local_618;
    if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = local_6a8.Object;
    uVar47 = 0;
    if ((int)uVar19 < ((local_6a8.Object)->WaitAssetCompilationTasks).ArrayNum) {
      uVar47 = ~uVar19 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar52 = (pFVar4->WaitAssetCompilationTasks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8
    ;
    if (((local_690.AllocatorInstance.Data <= pFVar52) &&
        (pFVar52 < local_690.AllocatorInstance.Data + (longlong)local_690.ArrayMax * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar18 = local_690.ArrayNum;
    if (local_690.ArrayNum == local_690.ArrayMax) {
      iVar18 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_690.AllocatorInstance,&local_690.ArrayMax);
    }
    local_690.ArrayNum = iVar18 + 1;
    *(undefined8 *)(local_690.AllocatorInstance.Data + (longlong)iVar18 * 8) =
         *(undefined8 *)pFVar52;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
    iVar17 = iVar17 + 1;
  }
  while( true ) {
    pTVar38 = (TReferenceControllerBase<1> *)0x0;
    if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar17 = (int)pTVar36;
    if (((local_6a8.Object)->SourceDatas).ArrayNum <= iVar17) {
      pTVar36 = ::operator_new(0x88);
      if (pTVar36 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pFVar37 = FInterchangeTaskSystem::Get();
        local_560.Object = (FInterchangeTaskBase *)&DAT_00000010;
        local_560.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar36->SharedReferenceCount = (atomic<int>)0x1;
        pTVar36->WeakReferenceCount = (atomic<int>)0x1;
        pTVar36->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFTaskCompletion_GameThread_Interchange_UE___00_SharedPointerInternals__6B_
        ;
        pTVar38 = (local_608->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
        pFVar4 = (local_608->WeakAsyncHelper).Object;
        if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
          paVar50 = &pTVar38->WeakReferenceCount;
          LOCK();
          *paVar50 = (atomic<int>)((int)*paVar50 + 1);
          UNLOCK();
        }
        pUVar5 = local_608->InterchangeManager;
        pTVar36[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)&pTVar36[1].SharedReferenceCount,4000);
        pTVar36[4]._padding_ = -1;
        pTVar36[5]._padding_ = 0;
        pTVar36[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar36[5].WeakReferenceCount = (atomic<int>)0x0;
        pTVar36[6]._padding_ = 0;
        pTVar36[6].SharedReferenceCount = (atomic<int>)0x0;
        pTVar36[6].WeakReferenceCount = (atomic<int>)0x0;
        pTVar36[1]._padding_ = (longlong)&___7FTaskCompletion_GameThread_Interchange_UE__6B_;
        *(undefined1 *)&pTVar36[4].SharedReferenceCount = 0;
        pTVar36[7]._padding_ = (longlong)pUVar5;
        *(FImportAsyncHelper **)&pTVar36[7].SharedReferenceCount = pFVar4;
        pTVar36[8]._padding_ = (longlong)pTVar38;
        if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar50 = (atomic<int>)((int)*paVar50 + 1);
          UNLOCK();
          LOCK();
          aVar2 = *paVar50;
          *paVar50 = (atomic<int>)((int)*paVar50 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar38->_padding_ + 8))(pTVar38,1);
          }
        }
        if (((FInterchangeTaskBase *)(pTVar36 + 1) == (FInterchangeTaskBase *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36)
        ;
        pFVar37 = FInterchangeTaskSystem::Get();
        LOCK();
        pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
        UNLOCK();
        local_560.Object = (FInterchangeTaskBase *)(pTVar36 + 1);
        local_560.SharedReferenceCount.ReferenceController = pTVar36;
      }
      FVar14.ReferenceController = local_560.SharedReferenceCount.ReferenceController;
      pTVar36 = local_658;
      uVar26 = FInterchangeTaskSystem::AddTask(pFVar37,&local_560,&local_690);
      if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (local_6a8.Object)->CompletionTask = uVar26;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      if (local_690.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_690.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
      if (local_640.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_640.AllocatorInstance.Data);
      }
      if (local_680.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_680.Data);
      }
      if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.AllocatorInstance.Data);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      local_130 = 0;
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_178);
      DestructItems<UE::InterchangeTaskParsing::Private::FTaskData,int>
                ((FTaskData *)local_668.Data,(int)local_660);
      if ((FTaskData *)local_668.Data != (FTaskData *)0x0) {
        FMemory::Free(local_668.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6a8.SharedReferenceCount.ReferenceController);
      if (local_6b3 != '\0') {
        FGCScopeGuard::~FGCScopeGuard(&local_6b4);
      }
      FMemScope::~FMemScope(&local_4e0);
      FLLMScope::~FLLMScope(&local_624);
      if (bVar53) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pTVar36 = ::operator_new(0x88);
    if (pTVar36 == (TReferenceControllerBase<1> *)0x0) {
      pFVar51 = (FInterchangeTaskBase *)&DAT_00000010;
    }
    else {
      pTVar36->SharedReferenceCount = (atomic<int>)0x1;
      pTVar36->WeakReferenceCount = (atomic<int>)0x1;
      pTVar36->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTaskPostImport_GameThread_Interchange_UE___00_SharedPointerInternals__6B_
      ;
      pTVar38 = (local_608->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
      pFVar4 = (local_608->WeakAsyncHelper).Object;
      if (pTVar38 == (TReferenceControllerBase<1> *)0x0) {
        paVar46 = (atomic<int> *)&DAT_0000000c;
      }
      else {
        paVar46 = &pTVar38->WeakReferenceCount;
        LOCK();
        *paVar46 = (atomic<int>)((int)*paVar46 + 1);
        UNLOCK();
      }
      pTVar36[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pTVar36[1].SharedReferenceCount,4000);
      pTVar36[4]._padding_ = -1;
      pTVar36[5]._padding_ = 0;
      pTVar36[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar36[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar36[6]._padding_ = 0;
      pTVar36[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar36[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar36[1]._padding_ = (longlong)&___7FTaskPostImport_GameThread_Interchange_UE__6B_;
      *(undefined1 *)&pTVar36[4].SharedReferenceCount = 0;
      *(int *)&pTVar36[7]._padding_ = iVar17;
      *(FImportAsyncHelper **)&pTVar36[7].SharedReferenceCount = pFVar4;
      pTVar36[8]._padding_ = (longlong)pTVar38;
      if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar46 = (atomic<int>)((int)*paVar46 + 1);
        UNLOCK();
        LOCK();
        aVar2 = *paVar46;
        *paVar46 = (atomic<int>)((int)*paVar46 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar38->_padding_ + 8))(pTVar38,1);
        }
      }
      pFVar51 = (FInterchangeTaskBase *)(pTVar36 + 1);
      if ((pFVar51 == (FInterchangeTaskBase *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      pTVar38 = pTVar36;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
    if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = local_6a8.Object;
    pTVar42 = &(local_6a8.Object)->PostImportTasks;
    pFVar37 = FInterchangeTaskSystem::Get();
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_408.Object = pFVar51;
    local_408.SharedReferenceCount.ReferenceController = pTVar38;
    local_610 = FInterchangeTaskSystem::AddTask(pFVar37,&local_408,&local_690);
    pFVar52 = (pTVar42->AllocatorInstance).Data;
    if (((pFVar52 <= (FScriptContainerElement *)&local_610) &&
        ((FScriptContainerElement *)&local_610 <
         pFVar52 + (longlong)(pFVar4->PostImportTasks).ArrayMax * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) break;
    uVar19 = (pFVar4->PostImportTasks).ArrayNum;
    piVar1 = &(pFVar4->PostImportTasks).ArrayMax;
    if (uVar19 == *piVar1) {
      uVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar42->AllocatorInstance,piVar1);
    }
    pFVar52 = (pTVar42->AllocatorInstance).Data;
    (pFVar4->PostImportTasks).ArrayNum = uVar19 + 1;
    *(ulong64 *)(pFVar52 + (longlong)(int)uVar19 * 8) = local_610;
    if ((local_6a8.Object == (FImportAsyncHelper *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = local_6a8.Object;
    uVar47 = 0;
    if ((int)uVar19 < ((local_6a8.Object)->PostImportTasks).ArrayNum) {
      uVar47 = ~uVar19 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar52 = (pFVar4->PostImportTasks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8;
    if (((local_690.AllocatorInstance.Data <= pFVar52) &&
        (pFVar52 < local_690.AllocatorInstance.Data + (longlong)local_690.ArrayMax * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar18 = local_690.ArrayNum;
    if (local_690.ArrayNum == local_690.ArrayMax) {
      iVar18 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_690.AllocatorInstance,&local_690.ArrayMax);
    }
    local_690.ArrayNum = iVar18 + 1;
    *(undefined8 *)(local_690.AllocatorInstance.Data + (longlong)iVar18 * 8) =
         *(undefined8 *)pFVar52;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
    pTVar36 = (TReferenceControllerBase<1> *)(ulonglong)(iVar17 + 1);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// GetTaskThread @ 14e4f97d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EInterchangeTaskThread __thiscall UE::Interchange::FTaskParsing::GetTaskThread(FTaskParsing *this)

{
  return GameThread;
}

