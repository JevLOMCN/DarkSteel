// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// operator() @ 149beeff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGPathfindingElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
          *param_1,FExecutionState *param_2,FIterationState *param_3,uint param_4)

{
  int *piVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  char cVar2;
  EPCGPathfindingSplineMode EVar3;
  int iVar4;
  FPCGPoint *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  void *pvVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  ESearchResult EVar15;
  int iVar16;
  int iVar17;
  UObject *pUVar18;
  UPCGSplineData *this_01;
  UPCGPointData *this_02;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar19;
  FText *pFVar20;
  wchar_t *pwVar21;
  FSearchState *pFVar22;
  TSparseSetElement<FString> *_Src;
  FPCGDataPtrWrapper *this_03;
  wchar_t **ppwVar23;
  FGCScopeGuard local_res10 [8];
  FExecutionState *local_res18;
  FIterationState *local_res20;
  FGCScopeGuard local_118 [8];
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> local_110;
  FSearchState *local_100;
  FPCGPoint *local_f8;
  int iStack_f0;
  undefined1 local_e8 [8];
  FSearchState *local_e0;
  UPCGSplineData *local_d8;
  UPCGPointData *local_d0;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_c8;
  FText local_b8;
  FPCGPoint *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_98;
  FSparseArrayAllocationInfo local_88;
  TArrayView<FPCGPoint_const_,int> local_78;
  TArrayView<FPCGPoint_const_,int> local_68 [2];
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                          ,0x48,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  uVar13 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar13 = ~param_4 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  if ((param_1->PerIterationStateResultArray).AllocatorInstance.Data[(int)param_4] !=
      (FScriptContainerElement)0x2) {
    uVar13 = param_3->PathIterationIndex;
    cVar2 = *(char *)(*(longlong *)this + 400);
    if ((int)uVar13 < param_2->IterationCount) {
      local_100 = &param_3->SearchState;
      local_e0 = local_100;
      do {
        piVar1 = &(param_2->GoalPoints).ArrayNum;
        local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.ArrayNum = 0;
        local_110.ArrayMax = 0;
        if (uVar13 != param_3->LastPathIterationIndex) {
          if (cVar2 == '\x01') {
            uVar13 = (int)uVar13 / *piVar1;
          }
          uVar14 = 0;
          if ((int)uVar13 < (param_2->StartPoints).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          pFVar22 = local_e0;
          PCGSpatialAlgo::AStar::Initialize
                    ((FPCGPoint *)
                     ((param_2->StartPoints).AllocatorInstance.Data + (longlong)(int)uVar13 * 0xd0),
                     local_e0);
          local_100 = pFVar22;
          uVar13 = local_res20->PathIterationIndex;
          local_res20->LastPathIterationIndex = uVar13;
        }
        pFVar22 = local_100;
        if (*(char *)(*(longlong *)this + 400) == '\0') {
          iVar16 = *piVar1;
          pFVar5 = (FPCGPoint *)(param_2->GoalPoints).AllocatorInstance.Data;
          param_2 = local_res18;
          if ((iVar16 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), param_2 = local_res18, bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
        }
        else {
          if (cVar2 == '\x01') {
            uVar13 = (int)uVar13 % *piVar1;
          }
          iStack_f0 = 1;
          pFVar5 = (FPCGPoint *)
                   ((param_2->GoalPoints).AllocatorInstance.Data + (longlong)(int)uVar13 * 0xd0);
          iVar16 = iStack_f0;
        }
        iStack_f0 = iVar16;
        local_f8 = pFVar5;
        pFVar5 = local_f8;
        uVar10._4_4_ = local_b8._12_4_;
        uVar10._0_4_ = iStack_f0;
        while( true ) {
          local_78.DataPtr = pFVar5;
          local_78._8_8_ = uVar10;
          EVar15 = PCGSpatialAlgo::AStar::ExecuteSearchIteration
                             (&param_2->Settings,pFVar22,&local_78,&local_110);
          if (EVar15 != Processing) break;
          bVar11 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_);
          pFVar22 = local_100;
          if (bVar11) goto LAB_149bef810;
        }
        if (EVar15 == Invalid) {
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_b8,L"PCGPathfindingElement",L"InvalidSearch",
                               L"The search could not be completed. Check for invalid search settings or input."
                              );
          PCGLog::LogErrorOnGraph(pFVar20,(FPCGContext *)0x0);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
LAB_149bef880:
          bVar11 = true;
LAB_149bef882:
          if (local_110.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return bVar11;
          }
          FMemory::Free(local_110.AllocatorInstance.Data);
          return bVar11;
        }
        if (local_110.ArrayNum == 0) {
          if ((((param_2->Settings).bAcceptPartialPath != false) || (EVar15 == Partial)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ExecutionState.Settings.bAcceptPartialPath && SearchResult != ESearchResult::Partial"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
                                  ,0x207,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          goto LAB_149bef880;
        }
        iVar16 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        *(int *)&param_1->_padding_ = iVar16 + 1;
        this_03 = (FPCGDataPtrWrapper *)((longlong)iVar16 * 0x78 + param_1->_padding_);
        this_03[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_03->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_03->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_03[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_03[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)((longlong)&this_03[4].Data.field0_0x0 + 4) = 0;
        *(undefined4 *)&this_03[4].Data.field0_0x0 = 0xffffffff;
        this_03[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_03[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_03[7].Data.field0_0x0 + 4) = 0xffffffff;
        if (*(char *)(*(longlong *)this + 0x2d1) == '\0') {
          bVar11 = IsInGameThread();
          if (param_1 ==
              (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
               *)0x0) {
            if ((!bVar11) &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4331830188552749225>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0xa9,"Context != nullptr || IsInGameThread()"), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
LAB_149bef510:
            pUVar18 = GetTransientPackageAsObject();
            this_02 = NewObject<UPCGPointData>(pUVar18);
          }
          else {
            if (bVar11) goto LAB_149bef510;
            if (((char)param_1->_padding_ != '\0') &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4331830188552749348>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            FGCScopeGuard::FGCScopeGuard(local_118);
            pUVar18 = GetTransientPackageAsObject();
            this_02 = NewObject<UPCGPointData>(pUVar18);
            FGCScopeGuard::~FGCScopeGuard(local_118);
            if ((this_02 == (UPCGPointData *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0x12a,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            local_d0 = this_02;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_02 != (UPCGPointData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_02);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_>
                      ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                        *)&param_1->_padding_,(TObjectPtr<UObject> *)(local_e8 + 4),
                       (bool *)&local_d0);
          }
          if ((local_res18->Settings).bCopyOriginatingPoints != false) {
            UPCGSpatialData::InitializeFromData
                      ((UPCGSpatialData *)this_02,(UPCGSpatialData *)local_100->OriginatingPointData
                       ,(UPCGMetadata *)0x0,true,true);
          }
          pTVar19 = UPCGPointData::GetMutablePoints(this_02);
          if (pTVar19 != &local_110) {
            pFVar6 = (pTVar19->AllocatorInstance).Data;
            if (pFVar6 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar6);
            }
            (pTVar19->AllocatorInstance).Data = local_110.AllocatorInstance.Data;
            local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pTVar19->ArrayNum = local_110.ArrayNum;
            pTVar19->ArrayMax = local_110.ArrayMax;
            local_110.ArrayNum = 0;
            local_110.ArrayMax = 0;
          }
          FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)this_02);
        }
        else {
          EVar3 = *(EPCGPathfindingSplineMode *)(*(longlong *)this + 0x2d2);
          iVar16 = local_110.ArrayNum;
          local_a8 = (FPCGPoint *)local_110.AllocatorInstance.Data;
          if ((local_110.ArrayNum < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          iStack_a0 = iVar16;
          local_68[0]._12_4_ = uStack_9c;
          local_68[0].ArrayNum = iVar16;
          local_68[0].DataPtr = local_a8;
          PCGPathfindingElement::Helpers::ConvertPathToSplinePoints(&local_98,local_68,EVar3);
          bVar11 = IsInGameThread();
          if (param_1 ==
              (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
               *)0x0) {
            if ((!bVar11) &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4331830188552749225>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0xa9,"Context != nullptr || IsInGameThread()"), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
LAB_149bef3b5:
            pUVar18 = GetTransientPackageAsObject();
            this_01 = NewObject<UPCGSplineData>(pUVar18);
          }
          else {
            if (bVar11) goto LAB_149bef3b5;
            if (((char)param_1->_padding_ != '\0') &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4331830188552749348>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            FGCScopeGuard::FGCScopeGuard(local_res10);
            pUVar18 = GetTransientPackageAsObject();
            this_01 = NewObject<UPCGSplineData>(pUVar18);
            FGCScopeGuard::~FGCScopeGuard(local_res10);
            if ((this_01 == (UPCGSplineData *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0x12a,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            local_d8 = this_01;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_01 != (UPCGSplineData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_>
                      ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                        *)&param_1->_padding_,(TObjectPtr<UObject> *)local_e8,(bool *)&local_d8);
          }
          local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.ArrayNum = 0;
          local_c8.ArrayMax = 0;
          UPCGSplineData::Initialize
                    (this_01,&local_98,false,&UE::Math::TTransform<double>::Identity,&local_c8);
          FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)this_01);
          if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.AllocatorInstance.Data);
          }
        }
        if ((local_res18->Settings).bAcceptPartialPath != false) {
          iVar16 = *(int *)((longlong)&this_03[4].Data.field0_0x0 + 4);
          this_00 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_03 + 1);
          ppwVar23 = &PCGPathfindingElement::Constants::PartialPathTag;
          if (EVar15 == Complete) {
            ppwVar23 = &PCGPathfindingElement::Constants::CompletePathTag;
          }
          if (iVar16 == 0) {
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x18,8,1,(ForAnyElementType *)this_00,(int *)&this_03[1].WeakData,
                                &this_03[1].WeakData.WeakPtr.ObjectSerialNumber);
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)(this_03 + 2),false);
          }
          else {
            iVar17 = *(int *)&this_03[4].Data.field0_0x0;
            iVar16 = iVar16 + -1;
            lVar7 = *(longlong *)&this_00->Elements;
            iVar4 = *(int *)(lVar7 + 4 + (longlong)iVar17 * 0x18);
            *(int *)&this_03[4].Data.field0_0x0 = iVar4;
            *(int *)((longlong)&this_03[4].Data.field0_0x0 + 4) = iVar16;
            if (iVar16 != 0) {
              *(undefined4 *)(lVar7 + (longlong)iVar4 * 0x18) = 0xffffffff;
            }
          }
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,&local_88,iVar17);
          _Src = local_88.Pointer;
          if (local_88.Pointer == (TSparseSetElement<FString> *)0x0) {
            _Src = (TSparseSetElement<FString> *)0x0;
          }
          else {
            ::FString::FString(local_88.Pointer,*ppwVar23);
            *(undefined4 *)((longlong)_Src + 0x10) = 0xffffffff;
          }
          iVar17 = local_88.Index;
          iVar16 = *(int *)&_Src->field_0x8 + -1;
          if (*(int *)&_Src->field_0x8 == 0) {
            pwVar21 = L"";
            iVar16 = 0;
          }
          else {
            pwVar21 = *(wchar_t **)_Src;
          }
          uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar21);
          if ((this_03[1].WeakData.WeakPtr.ObjectIndex -
               *(int *)((longlong)&this_03[4].Data.field0_0x0 + 4) == 1) ||
             (iVar16 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                       FindIndexByHash<FString>(this_00,uVar13,(FString *)_Src), iVar16 == -1)) {
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RehashOrLink
                      (this_00,uVar13,_Src,iVar17);
          }
          else {
            lVar7 = *(longlong *)&this_00->Elements;
            pvVar8 = *(void **)(lVar7 + (longlong)iVar16 * 0x18);
            if (pvVar8 != (void *)0x0) {
              FMemory::Free(pvVar8);
            }
            memmove((void *)(lVar7 + (longlong)iVar16 * 0x18),_Src,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,iVar17,1);
          }
        }
        param_3 = local_res20;
        local_res20->PathIterationIndex = local_res20->PathIterationIndex + 1;
        bVar11 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_);
        if (bVar11) {
LAB_149bef810:
          bVar11 = false;
          goto LAB_149bef882;
        }
        if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
        }
        uVar13 = param_3->PathIterationIndex;
        param_2 = local_res18;
      } while ((int)uVar13 < local_res18->IterationCount);
    }
  }
  return true;
}

// operator() @ 149bf09c0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
          *param_1,FExecutionState *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  EPCGTimeSliceInitResult EVar7;
  int iVar8;
  int iVar9;
  FText *pFVar10;
  UPCGData *pUVar11;
  FTextFormat *pFVar12;
  bool bVar13;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  longlong local_350;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_348;
  FName local_338;
  TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
  *local_330;
  TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
  *local_328;
  longlong local_320;
  FTextFormat local_318;
  undefined1 local_308;
  undefined1 uStack_307;
  undefined6 uStack_306;
  FText local_300;
  FText local_2f0;
  FText local_2e0;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  FPCGPoint local_208;
  FPCGPoint local_138;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_378;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId170,
               "FPCGClusterElement::PrepareData::InitializePerExecutionState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
               ,0xaa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId170);
  }
  fVar5 = __real_3f800000;
  if (*(int *)(*(longlong *)this + 8) != 0) {
    lVar3 = *(longlong *)((longlong)this + 0x10);
    if (((*(char *)(lVar3 + 0x1f0) == '\0') ||
        (iVar8 = *(int *)(*(longlong *)((longlong)this + 8) + 8), iVar8 < 2)) ||
       (iVar8 == *(int *)(*(longlong *)this + 8))) {
      local_308 = *(undefined1 *)(lVar3 + 0x2d0);
      dVar1 = *(double *)(lVar3 + 0x198);
      uStack_307 = *(undefined1 *)(lVar3 + 0x2d3);
      (param_2->Settings).SearchDistance = *(double *)(lVar3 + 200);
      (param_2->Settings).HeuristicWeight = dVar1;
      (param_2->Settings).bAcceptPartialPath = (bool)local_308;
      (param_2->Settings).bCopyOriginatingPoints = (bool)uStack_307;
      *(undefined6 *)&(param_2->Settings).field_0x12 = uStack_306;
      local_320 = *(longlong *)((longlong)this + 0x10);
      local_330 = param_1;
      local_328 = param_1;
      if (*(char *)(local_320 + 0xd0) == '\0') {
        iVar8 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)(local_320 + 0x118));
        lVar3 = *(longlong *)((longlong)this + 0x10);
        local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_2c8.Translation.ZW.m128d_f64[0] = *(double *)(lVar3 + 0x128);
        local_2c8.Translation.XY.m128d_f64[0] = *(double *)(lVar3 + 0x118);
        local_2c8.Translation.XY.m128d_f64[1] = *(double *)(lVar3 + 0x120);
        local_2c8.Translation.ZW.m128d_f64[1] = 0.0;
        local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        FPCGPoint::FPCGPoint(&local_208,&local_2c8,fVar5,iVar8);
        TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::CopyToEmpty<FPCGPoint,int>
                  (&param_2->StartPoints,&local_208,1,(param_2->StartPoints).ArrayMax);
      }
      else {
        local_338 = PCGPathfindingElement::Constants::StartLocationsInputPinLabel;
        FPCGDataCollection::GetInputsByPin
                  ((FPCGDataCollection *)&param_1->_padding_,&local_348,&local_338);
        if (local_348.ArrayNum == 0) {
          DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_348.AllocatorInstance.Data,0);
          if ((FPCGTaggedData *)local_348.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
            FMemory::Free(local_348.AllocatorInstance.Data);
          }
        }
        else {
          if (1 < local_348.ArrayNum) {
            PCGLog::InputOutput::LogFirstInputOnlyWarning(local_338,(FPCGContext *)param_1);
          }
          if (local_348.ArrayNum < 1) {
            local_350 = (longlong)local_348.ArrayNum;
            local_358 = 0;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              EVar7 = (*pcVar4)();
              return EVar7;
            }
          }
          pUVar11 = *(UPCGData **)local_348.AllocatorInstance.Data;
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)local_348.AllocatorInstance.Data,local_348.ArrayNum);
          if ((FPCGTaggedData *)local_348.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
            FMemory::Free(local_348.AllocatorInstance.Data);
          }
          if (pUVar11 != (UPCGData *)0x0) {
            ``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l2::
            <lambda_2>::operator()
                      (&local_330,pUVar11,
                       (FPCGAttributePropertyInputSelector *)
                       (*(longlong *)((longlong)this + 0x10) + 0xd8),&param_2->StartPoints);
          }
        }
      }
      if ((param_2->StartPoints).ArrayNum != 0) {
        if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x130) == '\0') {
          iVar8 = PCGHelpers::ComputeSeedFromPosition
                            ((TVector<double> *)(*(longlong *)((longlong)this + 0x10) + 0x178));
          lVar3 = *(longlong *)((longlong)this + 0x10);
          local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_268.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_268.Translation.ZW.m128d_f64[0] = *(double *)(lVar3 + 0x188);
          local_268.Translation.XY.m128d_f64[0] = *(double *)(lVar3 + 0x178);
          local_268.Translation.XY.m128d_f64[1] = *(double *)(lVar3 + 0x180);
          local_268.Translation.ZW.m128d_f64[1] = 0.0;
          local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_268.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          FPCGPoint::FPCGPoint(&local_138,&local_268,fVar5,iVar8);
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::CopyToEmpty<FPCGPoint,int>
                    (&param_2->GoalPoints,&local_138,1,(param_2->GoalPoints).ArrayMax);
        }
        else {
          pUVar11 = ``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::
                    __l2::<lambda_1>::operator()
                              (&local_328,
                               PCGPathfindingElement::Constants::GoalLocationsInputPinLabel);
          if (pUVar11 != (UPCGData *)0x0) {
            ``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l2::
            <lambda_2>::operator()
                      (&local_330,pUVar11,
                       (FPCGAttributePropertyInputSelector *)
                       (*(longlong *)((longlong)this + 0x10) + 0x138),&param_2->GoalPoints);
          }
        }
        iVar8 = (param_2->GoalPoints).ArrayNum;
        if (iVar8 != 0) {
          iVar2 = (param_2->StartPoints).ArrayNum;
          iVar9 = iVar2;
          if (*(char *)(*(longlong *)((longlong)this + 0x10) + 400) == '\x01') {
            iVar9 = iVar2 * iVar8;
          }
          param_2->IterationCount = iVar9;
          if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 400) == '\x02') && (iVar2 != iVar8))
          {
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_2e0,L"PCGPathfindingElement",
                                 L"EachStartToPairwiseGoalInvalidMapping",
                                 L"For \'Each Start To Pairwise Goal\' pathfinding mode, there must be a one-to-one mapping between start locations and goal locations. The current input was {0}:{1} Start->Goal locations."
                                );
            pFVar12 = FTextFormat::FTextFormat(&local_318,pFVar10,Default);
            pFVar10 = FText::Format<int,int>(&local_2f0,pFVar12,iVar2,iVar8);
            PCGLog::LogErrorOnGraph(pFVar10,(FPCGContext *)param_1);
            if (local_2f0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
            }
            if (local_2e0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
            }
            EVar7 = AbortExecution;
          }
          else {
            EVar7 = Success;
          }
          goto LAB_149bf0ace;
        }
      }
    }
    else {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_300,L"PCGPathfindingElement",L"InvalidFilterActorInputCount",
                           L"Filter Actor input data count must be 1 or match the In pin data count."
                          );
      PCGLog::LogErrorOnGraph(pFVar10,(FPCGContext *)param_1);
      if (local_300.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
      }
    }
  }
  EVar7 = NoOperation;
LAB_149bf0ace:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar7;
}

// operator() @ 149bf6e20

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
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()
          (void *this,FIterationState *param_1,FExecutionState *param_2,uint param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  double dVar3;
  ushort uVar4;
  FPCGContext *pFVar5;
  UPCGData *this_00;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FObjectPtr_u_0 FVar11;
  bool bVar12;
  EPCGTimeSliceInitResult EVar13;
  int iVar14;
  uint uVar15;
  UClass *pUVar16;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  FString *pFVar20;
  FPCGDataPtrWrapper *pFVar21;
  IPCGGraphExecutionSource *pIVar22;
  longlong *plVar23;
  UObject *pUVar24;
  FName *pFVar25;
  longlong *plVar26;
  code *pcVar27;
  undefined8 *puVar28;
  uint uVar29;
  FPCGDataPtrWrapper *this_01;
  undefined ***pppuVar30;
  uint uVar31;
  FSharedReferencer<1> FVar32;
  IPCGAttributeAccessor *pIVar33;
  bool bVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_6f8 [32];
  FSharedReferencer<1> FStack_690;
  uint local_688;
  uint uStack_684;
  FObjectPtr_u_0 local_680;
  FWeakObjectPtr local_678;
  longlong *local_670;
  undefined1 local_668 [40];
  int local_640;
  FText local_638;
  FName local_628;
  FName local_620;
  FString local_618;
  FPCGDataPtrWrapper local_608;
  FPCGDataPtrWrapper local_5f8;
  FPCGAttributePropertySelector local_5e8;
  FPCGAttributeAccessorKeysPoints local_5a8;
  code *local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  undefined4 uStack_564;
  longlong *plStack_560;
  undefined1 local_558 [32];
  void *local_538;
  undefined4 local_530;
  uint local_52c;
  undefined4 local_528;
  undefined4 local_524;
  ForElementType<FSetElementId> local_518;
  int local_510;
  IPCGAttributeAccessor *local_508;
  TReferenceControllerBase<1> *local_500;
  code *local_4f8;
  undefined **local_4e8;
  code *pcStack_4e0;
  undefined8 local_4d8;
  undefined ***local_4d0;
  IPCGAttributeAccessor *local_4c8;
  TReferenceControllerBase<1> *local_4c0;
  undefined8 local_4b8;
  code *local_4a8;
  undefined **local_498;
  code *pcStack_490;
  undefined8 local_488;
  undefined ***local_480;
  code *local_478;
  undefined **local_468;
  code *pcStack_460;
  undefined8 local_458;
  undefined ***local_450;
  code *local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  longlong *plStack_420;
  code *local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  code *local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  code *local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  FCollisionQueryParams local_388;
  undefined1 local_2f8 [184];
  void *local_240;
  undefined4 local_238;
  longlong *local_218;
  longlong local_210;
  FCollisionQueryParams local_208;
  FWeakObjectPtr local_180;
  FPCGWorldRaycastQueryParams local_178;
  TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator> local_a0;
  ulonglong local_48;
  
  this_01 = &local_5f8;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  bVar34 = -1 < CpuChannel->Enabled;
  local_688 = param_3;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId301,
               "FPCGClusterElement::PrepareData::InitializePerIterationStates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
               ,0x12d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId301);
  }
  plVar23 = *(longlong **)this;
  uVar29 = 0;
  if ((int)param_3 < (int)plVar23[1]) {
    uVar29 = ~param_3 >> 0x1f;
  }
  if ((uVar29 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar27 = (code *)swi(3);
    EVar13 = (*pcVar27)();
    return EVar13;
  }
  local_680 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)((longlong)(int)param_3 * 0x78 + *plVar23))->Handle
  ;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149bf6f20:
    if ((UPCGPointData *)local_680.Handle != (UPCGPointData *)0x0) {
      pUVar16 = Z_Construct_UClass_UPCGPointData_NoRegister();
      bVar12 = FObjectPtr::IsA((FObjectPtr *)&local_680,pUVar16);
      FVar11 = local_680;
      if (((bVar12) && ((UPCGPointData *)local_680.Handle != (UPCGPointData *)0x0)) &&
         (iVar14 = (**(code **)(*(longlong *)local_680.Handle + 0x488))(local_680.Handle),
         iVar14 != 0)) {
        (param_1->SearchState).OriginatingPointData = (UPCGPointData *)FVar11;
        FStack_690.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x1a0) == '\0') {
          FVar32.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pIVar33 = (IPCGAttributeAccessor *)0x0;
        }
        else {
          FPCGAttributePropertyInputSelector::CopyAndFixLast
                    ((FPCGAttributePropertyInputSelector *)
                     (*(longlong *)((longlong)this + 0x10) + 0x1a8),
                     (FPCGAttributePropertyInputSelector *)&local_5e8,(UPCGData *)FVar11.Handle);
          TVar17 = PCGAttributeAccessorHelpers::CreateConstAccessor
                             ((UPCGData *)local_668,(FPCGAttributePropertySelector *)FVar11.Handle,
                              SUB81(&local_5e8,0));
          pIVar33 = (IPCGAttributeAccessor *)(TVar17.Ptr)->_padding_;
          (TVar17.Ptr)->_padding_ = 0;
          pTVar18 = ::operator_new(0x18);
          if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
            pTVar18->SharedReferenceCount = (atomic<int>)0x1;
            pTVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter___CBVIPCGAttributeAccessor__U__DefaultDeleter___CBVIPCGAttributeAccessor___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            pTVar18->WeakReferenceCount = (atomic<int>)0x1;
            pTVar18[1]._padding_ = (longlong)pIVar33;
            pTVar19 = pTVar18;
          }
          local_668._16_8_ = 0;
          local_668._24_8_ = pTVar19;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_690,(FSharedReferencer<1> *)(local_668 + 0x18));
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_668._24_8_);
          if ((undefined8 *)local_668._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_668._0_8_)(local_668._0_8_,1);
          }
          local_668._32_8_ =
               (((TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)&FVar11.Handle[10].field_0x20)->
               AllocatorInstance).Data;
          iVar14 = *(int *)(FVar11.Handle + 0xb);
          if ((iVar14 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar27 = (code *)swi(3);
            EVar13 = (*pcVar27)();
            return EVar13;
          }
          local_640 = iVar14;
          FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints
                    (&local_5a8,(TArrayView<FPCGPoint_const_,int> *)(local_668 + 0x20));
          if (pIVar33 == (IPCGAttributeAccessor *)0x0) {
            PCGLog::Metadata::LogFailToCreateAccessorError
                      (&local_5e8,*(FPCGContext **)((longlong)this + 0x18));
            FVar32.ReferenceController = FStack_690.ReferenceController;
          }
          else {
            uVar4 = pIVar33->UnderlyingType;
            if ((0xe < uVar4) ||
               ((FVar32.ReferenceController = FStack_690.ReferenceController,
                PCG::Private::BroadcastableTypes.Values[uVar4][1] == false &&
                (PCG::Private::ConstructibleTypes.Values[1][(uint)uVar4] == false)))) {
              pFVar5 = *(FPCGContext **)((longlong)this + 0x18);
              pFVar20 = FPCGAttributePropertySelector::ToString(&local_5e8,&local_618,false);
              FText::FromString(&local_638,pFVar20);
              if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_618.Data.AllocatorInstance.Data);
              }
              PCGLog::Metadata::LogFailToGetAttributeError<double>(&local_638,pIVar33,pFVar5);
              if ((FPCGCrc)local_638.TextData.Reference != (FPCGCrc)0x0) {
                (**(code **)(*(longlong *)local_638.TextData.Reference + 0x10))();
              }
              FVar32.ReferenceController = FStack_690.ReferenceController;
              pIVar33 = (IPCGAttributeAccessor *)0x0;
              if (FStack_690.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                FStack_690.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                LOCK();
                paVar1 = &(FVar32.ReferenceController)->SharedReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)(FVar32.ReferenceController)->_padding_)();
                  LOCK();
                  paVar1 = &(FVar32.ReferenceController)->WeakReferenceCount;
                  aVar2 = *paVar1;
                  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                  UNLOCK();
                  if (aVar2 == (atomic<int>)0x1) {
                    (**(code **)((FVar32.ReferenceController)->_padding_ + 8))
                              (FVar32.ReferenceController,1);
                  }
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              FVar32.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            }
          }
          DestructItems<FString,int>
                    ((FString *)local_5e8.ExtraNames.AllocatorInstance.Data,
                     local_5e8.ExtraNames.ArrayNum);
          if (local_5e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.ExtraNames.AllocatorInstance.Data);
          }
        }
        local_578 = &
                    ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        uStack_570 = ``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::
                     __l2::<lambda_1>::<lambda_invoker_cdecl>;
        local_588 = UE::Core::Private::Function::
                    TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                    ::Call;
        plStack_560 = (longlong *)0x0;
        if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x1f0) == '\0') {
LAB_149bf78df:
          pcVar27 = (code *)0x0;
          lVar6 = *(longlong *)((longlong)this + 0x10);
          if (pIVar33 == (IPCGAttributeAccessor *)0x0) {
            if (*(char *)(lVar6 + 0x1f0) != '\0') {
              local_458 = CONCAT44(uStack_564,local_568);
              local_478 = local_588;
              if (local_588 != (code *)0x0) {
                local_588 = pcVar27;
              }
              local_450 = (undefined ***)plStack_560;
              plStack_560 = (longlong *)0x0;
              local_468 = local_578;
              pcStack_460 = uStack_570;
              local_3b8 = (code *)0x0;
              puVar28 = FMemory::Malloc(0x40,0x10);
              *puVar28 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::`2'::<lambda_2>::operator()'::`50'::<lambda_5>,0,1>
                          ::_vftable_;
              plVar23 = puVar28 + 2;
              *plVar23 = (longlong)local_478;
              puVar28[7] = local_450;
              local_450 = (undefined ***)0x0;
              puVar28[4] = local_468;
              puVar28[5] = pcStack_460;
              puVar28[6] = local_458;
              if (*plVar23 != 0) {
                local_478 = (code *)0x0;
              }
              lVar6 = *(longlong *)&(param_1->SearchState).CostFunction;
              uVar10 = *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x8;
              uVar35 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x10;
              uVar36 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x14;
              uVar7 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x18;
              uVar8 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x1c;
              uVar9 = *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x20;
              plVar26 = *(longlong **)&(param_1->SearchState).CostFunction.field_0x28;
              if (plVar23 != (longlong *)0x0) {
                local_3b8 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l50::<lambda_5>,double,double,FPCGPoint_const_*,double,FPCGPoint_const_*>
                            ::Call;
              }
              *(code **)&(param_1->SearchState).CostFunction = local_3b8;
              *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x8 = uStack_3b0;
              uStack_390._0_4_ = SUB84(puVar28,0);
              uStack_390._4_4_ = (undefined4)((ulonglong)puVar28 >> 0x20);
              *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x10 = local_3a8;
              *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x14 = uStack_3a4;
              *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x18 = uStack_3a0;
              *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x1c = uStack_39c;
              *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x20 = (undefined4)local_398
              ;
              *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x24 = local_398._4_4_;
              *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x28 =
                   (undefined4)uStack_390;
              *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x2c = uStack_390._4_4_;
              local_3b8 = (code *)lVar6;
              uStack_3b0 = uVar10;
              local_3a8 = uVar35;
              uStack_3a4 = uVar36;
              uStack_3a0 = uVar7;
              uStack_39c = uVar8;
              local_398 = uVar9;
              uStack_390 = plVar26;
              if (lVar6 != 0) {
                plVar23 = (longlong *)&local_3a8;
                if (plVar26 != (longlong *)0x0) {
                  plVar23 = plVar26;
                }
                (**(code **)(*plVar23 + 0x10))();
              }
              if (local_478 != (code *)0x0) {
                pppuVar30 = &local_468;
                if (local_450 != (undefined ***)0x0) {
                  pppuVar30 = local_450;
                }
                (*(code *)(*pppuVar30)[2])();
              }
            }
          }
          else if (*(char *)(lVar6 + 0x1a0) == '\x01') {
            dVar3 = *(double *)(lVar6 + 0x1e8);
            uVar35 = SUB84(dVar3,0);
            uVar36 = (undefined4)((ulonglong)dVar3 >> 0x20);
            if (dVar3 <= __real_3ff0000000000000) {
              uVar35 = SUB84(__real_3ff0000000000000,0);
              uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            }
            if (FVar32.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar32.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar32.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_488 = CONCAT44(uStack_564,local_568);
            local_4a8 = local_588;
            if (local_588 != (code *)0x0) {
              local_588 = pcVar27;
            }
            local_4b8 = CONCAT44(uVar36,uVar35);
            local_480 = (undefined ***)plStack_560;
            plStack_560 = (longlong *)0x0;
            local_498 = local_578;
            pcStack_490 = uStack_570;
            local_418 = (code *)0x0;
            local_4c8 = pIVar33;
            local_4c0 = FVar32.ReferenceController;
            puVar28 = FMemory::Malloc(0x60,0x10);
            *puVar28 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::`2'::<lambda_2>::operator()'::`33'::<lambda_3>,0,1>
                        ::_vftable_;
            puVar28[2] = local_4c8;
            puVar28[3] = local_4c0;
            local_4c0 = (TReferenceControllerBase<1> *)0x0;
            local_4c8 = (IPCGAttributeAccessor *)0x0;
            puVar28[4] = local_4b8;
            puVar28[6] = local_4a8;
            puVar28[0xb] = local_480;
            local_480 = (undefined ***)0x0;
            puVar28[8] = local_498;
            puVar28[9] = pcStack_490;
            puVar28[10] = local_488;
            if (puVar28[6] != 0) {
              local_4a8 = (code *)0x0;
            }
            lVar6 = *(longlong *)&(param_1->SearchState).CostFunction;
            uVar10 = *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x8;
            uVar35 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x10;
            uVar36 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x14;
            uVar7 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x18;
            uVar8 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x1c;
            uVar9 = *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x20;
            plVar23 = *(longlong **)&(param_1->SearchState).CostFunction.field_0x28;
            if (puVar28 + 2 != (undefined8 *)0x0) {
              local_418 = UE::Core::Private::Function::
                          TFunctionRefCaller<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l33::<lambda_3>,double,double,FPCGPoint_const_*,double,FPCGPoint_const_*>
                          ::Call;
            }
            *(code **)&(param_1->SearchState).CostFunction = local_418;
            *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x8 = uStack_410;
            uStack_3f0._0_4_ = SUB84(puVar28,0);
            uStack_3f0._4_4_ = (undefined4)((ulonglong)puVar28 >> 0x20);
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x10 = local_408;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x14 = uStack_404;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x18 = uStack_400;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x1c = uStack_3fc;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x20 = (undefined4)local_3f8;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x24 = local_3f8._4_4_;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x28 = (undefined4)uStack_3f0;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x2c = uStack_3f0._4_4_;
            local_418 = (code *)lVar6;
            uStack_410 = uVar10;
            local_408 = uVar35;
            uStack_404 = uVar36;
            uStack_400 = uVar7;
            uStack_3fc = uVar8;
            local_3f8 = uVar9;
            uStack_3f0 = plVar23;
            if (lVar6 != 0) {
              plVar26 = (longlong *)&local_408;
              if (plVar23 != (longlong *)0x0) {
                plVar26 = plVar23;
              }
              (**(code **)(*plVar26 + 0x10))();
            }
            if (local_4a8 != (code *)0x0) {
              pppuVar30 = &local_498;
              if (local_480 != (undefined ***)0x0) {
                pppuVar30 = local_480;
              }
              (*(code *)(*pppuVar30)[2])();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_4c0);
          }
          else if (*(char *)(lVar6 + 0x1a0) == '\x02') {
            if (FVar32.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar32.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar32.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_4d8 = CONCAT44(uStack_564,local_568);
            local_4f8 = local_588;
            if (local_588 != (code *)0x0) {
              local_588 = pcVar27;
            }
            local_4d0 = (undefined ***)plStack_560;
            plStack_560 = (longlong *)0x0;
            local_4e8 = local_578;
            pcStack_4e0 = uStack_570;
            local_3e8 = (code *)0x0;
            local_508 = pIVar33;
            local_500 = FVar32.ReferenceController;
            puVar28 = FMemory::Malloc(0x50,0x10);
            *puVar28 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::`2'::<lambda_2>::operator()'::`37'::<lambda_4>,0,1>
                        ::_vftable_;
            puVar28[2] = local_508;
            puVar28[3] = local_500;
            local_500 = (TReferenceControllerBase<1> *)0x0;
            local_508 = (IPCGAttributeAccessor *)0x0;
            puVar28[4] = local_4f8;
            puVar28[9] = local_4d0;
            local_4d0 = (undefined ***)0x0;
            puVar28[6] = local_4e8;
            puVar28[7] = pcStack_4e0;
            puVar28[8] = local_4d8;
            if (puVar28[4] != 0) {
              local_4f8 = (code *)0x0;
            }
            lVar6 = *(longlong *)&(param_1->SearchState).CostFunction;
            uVar10 = *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x8;
            uVar35 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x10;
            uVar36 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x14;
            uVar7 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x18;
            uVar8 = *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x1c;
            uVar9 = *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x20;
            plVar23 = *(longlong **)&(param_1->SearchState).CostFunction.field_0x28;
            if (puVar28 + 2 != (undefined8 *)0x0) {
              local_3e8 = UE::Core::Private::Function::
                          TFunctionRefCaller<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l37::<lambda_4>,double,double,FPCGPoint_const_*,double,FPCGPoint_const_*>
                          ::Call;
            }
            *(code **)&(param_1->SearchState).CostFunction = local_3e8;
            *(undefined8 *)&(param_1->SearchState).CostFunction.field_0x8 = uStack_3e0;
            uStack_3c0._0_4_ = SUB84(puVar28,0);
            uStack_3c0._4_4_ = (undefined4)((ulonglong)puVar28 >> 0x20);
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x10 = local_3d8;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x14 = uStack_3d4;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x18 = uStack_3d0;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x1c = uStack_3cc;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x20 = (undefined4)local_3c8;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x24 = local_3c8._4_4_;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x28 = (undefined4)uStack_3c0;
            *(undefined4 *)&(param_1->SearchState).CostFunction.field_0x2c = uStack_3c0._4_4_;
            local_3e8 = (code *)lVar6;
            uStack_3e0 = uVar10;
            local_3d8 = uVar35;
            uStack_3d4 = uVar36;
            uStack_3d0 = uVar7;
            uStack_3cc = uVar8;
            local_3c8 = uVar9;
            uStack_3c0 = plVar23;
            if (lVar6 != 0) {
              plVar26 = (longlong *)&local_3d8;
              if (plVar23 != (longlong *)0x0) {
                plVar26 = plVar23;
              }
              (**(code **)(*plVar26 + 0x10))();
            }
            if (local_4f8 != (code *)0x0) {
              pppuVar30 = &local_4e8;
              if (local_4d0 != (undefined ***)0x0) {
                pppuVar30 = local_4d0;
              }
              (*(code *)(*pppuVar30)[2])();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_500);
          }
          else {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
                                ,0x1a4,L"");
            if (bVar12) {
              pcVar27 = (code *)swi(3);
              EVar13 = (*pcVar27)();
              return EVar13;
            }
          }
          EVar13 = Success;
        }
        else {
          local_670 = *(longlong **)((longlong)this + 8);
          uVar29 = *(uint *)(local_670 + 1);
          if (uVar29 == 0) {
            pFVar21 = FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_01,(UPCGData *)0x0);
          }
          else {
            uVar31 = local_688 % uVar29;
            uVar15 = 0;
            if ((int)uVar31 < (int)uVar29) {
              uVar15 = ~uVar31 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar27 = (code *)swi(3);
              EVar13 = (*pcVar27)();
              return EVar13;
            }
            pFVar21 = FPCGDataPtrWrapper::FPCGDataPtrWrapper
                                (&local_608,
                                 (FPCGDataPtrWrapper *)((longlong)(int)uVar31 * 0x78 + *local_670));
            this_01 = &local_608;
          }
          this_00 = (pFVar21->Data).field0_0x0.DebugPtr;
          FPCGDataPtrWrapper::~FPCGDataPtrWrapper(this_01);
          if ((this_00 == (UPCGData *)0x0) ||
             (bVar12 = UObjectBaseUtility::IsA<UPCGPointData>((UObjectBaseUtility *)this_00), bVar12
             )) {
LAB_149bf72bc:
            local_558._0_8_ = (FScriptContainerElement *)0x0;
            local_558._8_8_ = 0;
            local_538 = (void *)0x0;
            local_530 = 0;
            local_52c = 0x80;
            local_528 = 0xffffffff;
            local_524 = 0;
            local_518 = (ForElementType<FSetElementId>)0x0;
            local_510 = 0;
            bVar12 = FPCGWorldCommonQueryParams::ExtractLoadedActorFiltersIfNeeded
                               ((FPCGWorldCommonQueryParams *)
                                (*(longlong *)((longlong)this + 0x10) + 0x1f8),this_00,
                                (TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>
                                 *)local_558,*(FPCGContext **)((longlong)this + 0x18));
            if (bVar12) {
              lVar6 = *(longlong *)((longlong)this + 0x18);
              if (((*(longlong *)(lVar6 + 0x70) != 0) &&
                  (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar6 + 0x68)), bVar12)) &&
                 (*(longlong *)(lVar6 + 0x70) != 0)) {
                pIVar22 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->
                                    ((TWeakInterfacePtr<IPCGGraphExecutionSource> *)
                                     (*(longlong *)((longlong)this + 0x18) + 0x68));
                plVar23 = (longlong *)(**(code **)((longlong)*pIVar22 + 0x18))(pIVar22);
                local_670 = (longlong *)(**(code **)(*plVar23 + 0x20))(plVar23);
                if (local_670 != (longlong *)0x0) {
                  FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams
                            ((FPCGWorldRaycastQueryParams *)local_2f8,
                             (FPCGWorldRaycastQueryParams *)
                             (*(longlong *)((longlong)this + 0x10) + 0x1f8));
                  FPCGWorldRaycastQueryParams::Initialize((FPCGWorldRaycastQueryParams *)local_2f8);
                  lVar6 = *(longlong *)((longlong)this + 0x18);
                  if (((*(longlong *)(lVar6 + 0x70) == 0) ||
                      (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar6 + 0x68)), !bVar12))
                     || ((*(longlong **)(lVar6 + 0x70) == (longlong *)0x0 ||
                         (pUVar24 = (UObject *)(**(code **)(**(longlong **)(lVar6 + 0x70) + 8))(),
                         pUVar24 == (UObject *)0x0)))) {
LAB_149bf74ac:
                    pUVar24 = (UObject *)0x0;
                  }
                  else {
                    pUVar16 = Z_Construct_UClass_UPCGComponent_NoRegister();
                    iVar14 = (int)pUVar16->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar14) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) +
                         (longlong)iVar14 * 8) != &pUVar16->_padding_)) goto LAB_149bf74ac;
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar24 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar24);
                  }
                  local_678.ObjectIndex = 0;
                  local_678.ObjectSerialNumber = 0;
                  local_668._8_8_ = pUVar24;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar24 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar24);
                  }
                  FWeakObjectPtr::operator=(&local_678,(FObjectPtr)((longlong)local_668 + 8));
                  local_688 = 1 << (local_2f8[2] & 0x1f);
                  uStack_684 = uStack_684 & 0xffffff00;
                  local_388.OwnerTag.ComparisonIndex.Value = 0;
                  local_388.OwnerTag.Number = 0;
                  local_388.IgnoreComponents.AllocatorInstance.SecondaryData =
                       (ForElementType<unsigned_int>)0x0;
                  local_388.IgnoreComponents.ArrayNum = 0;
                  local_388.IgnoreComponents.ArrayMax = 8;
                  local_388.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
                       (ForElementType<unsigned_int>)0x0;
                  local_388.IgnoreSourceObjects.ArrayNum = 0;
                  local_388.IgnoreSourceObjects.ArrayMax = 4;
                  local_388.MobilityType = Any;
                  local_388.TraceTag.ComparisonIndex.Value = 0;
                  local_388.TraceTag.Number = 0;
                  local_388.bFindInitialOverlaps = true;
                  local_388.bReturnFaceIndex = false;
                  local_388.bReturnPhysicalMaterial = false;
                  local_388.bIgnoreBlocks = false;
                  local_388.bComponentListUnique = true;
                  local_388.IgnoreMask = '\0';
                  local_388.bIgnoreTouches = false;
                  local_388.bSkipNarrowPhase = false;
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) <
                       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                       ::__l2::_thread_safe_static_guard_0__) &&
                     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                                           ::__l2::_thread_safe_static_guard_0__),
                     `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::_thread_safe_static_guard_0__ == -1)) {
                    `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                    ::__l2::StatPtr_UnknownSceneQuery =
                         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
                          )0x0;
                    pFVar25 = ::FName::FName(&local_628,"UnknownSceneQuery");
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                                ::__l2::StatPtr_UnknownSceneQuery,*pFVar25,L"UnknownSceneQuery",
                               "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,
                               ST_int64,true,false,MCR_Invalid);
                    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                                         ::__l2::_thread_safe_static_guard_0__);
                  }
                  local_388.StatId.StatIdPtr =
                       (TStatIdData *)
                       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                       ::__l2::StatPtr_UnknownSceneQuery;
                  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                      ::__l2::StatPtr_UnknownSceneQuery ==
                      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
                       )0x0) {
                    pFVar25 = ::FName::FName(&local_620,"UnknownSceneQuery");
                    local_388.StatId.StatIdPtr =
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                                     ::__l2::StatPtr_UnknownSceneQuery,*pFVar25,L"UnknownSceneQuery"
                                    ,"STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true
                                    ,ST_int64,true,false,MCR_Invalid);
                  }
                  local_388.bTraceComplex = (bool)local_2f8[3];
                  local_218 = local_670;
                  local_210 = CONCAT44(uStack_684,local_688);
                  local_388.bDebugQuery = false;
                  local_388.bTraceIntoSubComponents = true;
                  local_388.bReplaceHitWithSubComponents = true;
                  FCollisionQueryParams::FCollisionQueryParams(&local_208,&local_388);
                  local_180 = local_678;
                  FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams
                            (&local_178,(FPCGWorldRaycastQueryParams *)local_2f8);
                  TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>
                  ::
                  TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>
                            (&local_a0,
                             (TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>
                              *)local_558);
                  local_448 = (code *)0x0;
                  plVar26 = FMemory::Malloc(0x1d0,8);
                  *plVar26 = (longlong)
                             &UE::Core::Private::Function::
                              TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::`2'::<lambda_2>::operator()'::`27'::<lambda_2>,0,1>
                              ::_vftable_;
                  plVar26[1] = (longlong)local_218;
                  plVar26[2] = local_210;
                  plStack_420 = plVar26;
                  FCollisionQueryParams::FCollisionQueryParams
                            ((FCollisionQueryParams *)(plVar26 + 3),&local_208);
                  *(FWeakObjectPtr *)(plVar26 + 0x14) = local_180;
                  FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams
                            ((FPCGWorldRaycastQueryParams *)(plVar26 + 0x15),&local_178);
                  TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>
                  ::
                  TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>
                            ((TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>
                              *)(plVar26 + 0x30),&local_a0);
                  plVar23 = plStack_560;
                  uVar9 = uStack_580;
                  uVar35 = (undefined4)local_578;
                  uVar36 = local_578._4_4_;
                  uVar7 = (undefined4)uStack_570;
                  uVar8 = uStack_570._4_4_;
                  pcVar27 = local_448;
                  if (plVar26 + 1 != (longlong *)0x0) {
                    pcVar27 = UE::Core::Private::Function::
                              TFunctionRefCaller<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l27::<lambda_2>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                              ::Call;
                  }
                  uStack_580 = uStack_440;
                  local_568 = local_428;
                  uStack_564 = uStack_424;
                  plStack_560 = plStack_420;
                  local_578 = (undefined **)CONCAT44(uStack_434,local_438);
                  uStack_570 = (code *)CONCAT44(uStack_42c,uStack_430);
                  local_448 = local_588;
                  uStack_440 = uVar9;
                  local_438 = uVar35;
                  uStack_434 = uVar36;
                  uStack_430 = uVar7;
                  uStack_42c = uVar8;
                  plStack_420 = plVar23;
                  bVar12 = local_588 != (code *)0x0;
                  local_588 = pcVar27;
                  if (bVar12) {
                    plVar26 = (longlong *)&local_438;
                    if (plVar23 != (longlong *)0x0) {
                      plVar26 = plVar23;
                    }
                    (**(code **)(*plVar26 + 0x10))();
                  }
                  ``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::
                  __l27::<lambda_2>::~<lambda_2>(&local_218);
                  if (local_388.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
                      (ForElementType<unsigned_int>)0x0) {
                    FMemory::Free((void *)local_388.IgnoreSourceObjects.AllocatorInstance.
                                          SecondaryData);
                  }
                  if (local_388.IgnoreComponents.AllocatorInstance.SecondaryData !=
                      (ForElementType<unsigned_int>)0x0) {
                    FMemory::Free((void *)local_388.IgnoreComponents.AllocatorInstance.SecondaryData
                                 );
                  }
                  local_238 = 0;
                  if (local_240 != (void *)0x0) {
                    FMemory::Free(local_240);
                  }
                  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)(local_2f8 + 0x78));
                  DestructItems<FString,int>((FString *)local_2f8._88_8_,local_2f8._96_4_);
                  if ((FString *)local_2f8._88_8_ != (FString *)0x0) {
                    FMemory::Free((void *)local_2f8._88_8_);
                  }
                  if ((void *)local_2f8._8_8_ != (void *)0x0) {
                    FMemory::Free((void *)local_2f8._8_8_);
                  }
                }
              }
              local_510 = 0;
              if (local_518 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_518);
              }
              bVar12 = local_558._12_4_ != 0;
              local_558._8_8_ = (ulonglong)(uint)local_558._12_4_ << 0x20;
              if (bVar12) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,0,(ForAnyElementType *)local_558,0,(int *)(local_558 + 0xc));
              }
              local_528 = 0xffffffff;
              local_524 = 0;
              local_530 = 0;
              if (0x80 < local_52c) {
                local_52c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_558 + 0x10),0);
              }
              if (local_538 != (void *)0x0) {
                FMemory::Free(local_538);
              }
              if ((FScriptContainerElement *)local_558._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_558._0_8_);
              }
              goto LAB_149bf78df;
            }
            local_510 = 0;
            if (local_518 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_518);
            }
            iVar14 = SUB84(local_558._8_8_,4);
            local_558._8_8_ = local_558._8_8_ & 0xffffffff00000000;
            if (iVar14 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,(ForAnyElementType *)local_558,0,(int *)(local_558 + 0xc));
            }
            local_528 = 0xffffffff;
            local_524 = 0;
            local_530 = 0;
            if (0x80 < local_52c) {
              local_52c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_558 + 0x10),0);
            }
            if (local_538 != (void *)0x0) {
              FMemory::Free(local_538);
            }
            if ((FScriptContainerElement *)local_558._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_558._0_8_);
            }
            EVar13 = NoOperation;
          }
          else {
            pUVar16 = Z_Construct_UClass_UPCGParamData_NoRegister();
            iVar14 = (int)pUVar16->_padding_;
            if ((iVar14 <= *(int *)(this_00->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
                &pUVar16->_padding_)) goto LAB_149bf72bc;
            PCGLog::InputOutput::LogTypedDataNotFoundWarning
                      (PointOrParam,PCGWorldRayHitConstants::FilterActorPinLabel,
                       *(FPCGContext **)((longlong)this + 0x18));
            EVar13 = NoOperation;
          }
        }
        if (local_588 != (code *)0x0) {
          plVar23 = &local_578;
          if (plStack_560 != (longlong *)0x0) {
            plVar23 = plStack_560;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar32.ReferenceController);
        goto LAB_149bf7e71;
      }
    }
  }
  else if ((UPCGPointData *)local_680.Handle != (UPCGPointData *)0x0) {
    UE::GC::MarkAsReachable(local_680.Handle);
    goto LAB_149bf6f20;
  }
  EVar13 = NoOperation;
LAB_149bf7e71:
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar13;
}

// ExecuteInternal @ 149c14d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPathfindingElement::ExecuteInternal(FPCGPathfindingElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  UPCGPathfindingSettings *local_res18 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId447,"FPCGPathfindingElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
               ,0x1bf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId447);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
                         ,0x1c2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
                      *)param_1);
  if ((bVar4) &&
     (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) != '\x02')) {
    local_res18[0] = FPCGContext::GetInputSettings<UPCGPathfindingSettings>(param_1);
    if ((local_res18[0] == (UPCGPathfindingSettings *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Settings",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
                           ,0x1ca,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
    bVar4 = TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
            ::DataIsPreparedForExecution
                      ((TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
                        *)param_1);
    if (((bVar4) ||
        (local_res10[0] = bVar4,
        bVar4 = `TPCGTimeSlicedElementBase<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
                ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar4)) &&
       (param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex != 0)) {
      do {
        uVar2 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
        uVar6 = 0;
        if ((int)uVar2 < param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar4 = `FPCGPathfindingElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                          (local_res18,
                           (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
                            *)param_1,(FExecutionState *)&param_1[1].InputData.DataCrcs,
                           (FIterationState *)
                           ((longlong)(int)uVar2 * 0xa100 +
                           param_1[1].OutputData.InactiveOutputPinBitmask),uVar2);
        if (!bVar4) {
          bVar4 = false;
          goto LAB_149c14f40;
        }
        piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
        *piVar1 = *piVar1 + 1;
      } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex) &&
              (bVar4 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar4));
      bVar4 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
              param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = true;
  }
LAB_149c14f40:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// IsCacheable @ 149c2d440

bool __thiscall
FPCGPathfindingElement::IsCacheable(FPCGPathfindingElement *this,UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar2 = UPCGPathfindingSettings::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && (param_1[2].bUseSeed != false)) {
      return false;
    }
  }
  return true;
}

// PrepareDataInternal @ 149c2ffe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPathfindingElement::PrepareDataInternal(FPCGPathfindingElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPCGTimeSliceInitResult EVar4;
  UPCGPathfindingSettings *pUVar5;
  bool bVar6;
  TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
  *local_res10;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_60;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_58;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_50;
  UPCGPathfindingSettings *local_48;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_40;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_38;
  UPCGPathfindingSettings *local_30;
  FPCGContext *local_28;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId152,"FPCGPathfindingElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
               ,0x98);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId152);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
                         ,0x9b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar5 = FPCGContext::GetInputSettings<UPCGPathfindingSettings>(param_1);
  if ((pUVar5 == (UPCGPathfindingSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPathfindingElement.cpp"
                         ,0x9e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_88,&PCGPinConstants::DefaultInputLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_78,&PCGWorldRayHitConstants::FilterActorPinLabel);
  if (local_88.ArrayNum != 0) {
    local_58 = &local_88;
    local_50 = &local_78;
    EVar4 = *(EPCGTimeSliceInitResult *)
             ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1);
    local_48 = pUVar5;
    if (EVar4 == Uninitialized) {
      local_res10 = (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
                     *)param_1;
      EVar4 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>_*,PCGPathfindingElement::FExecutionState_&>
              ::Call(&local_58,&local_res10,(FExecutionState *)&param_1[1].InputData.DataCrcs);
      *(EPCGTimeSliceInitResult *)
       ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = EVar4;
    }
    if (EVar4 == Success) {
      local_40 = &local_88;
      local_38 = &local_78;
      local_60 = &local_40;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>,enum_EPCGTimeSliceInitResult,PCGPathfindingElement::FIterationState_&,PCGPathfindingElement::FExecutionState_const_&,unsigned_int>
                 ::Call;
      local_30 = pUVar5;
      local_28 = param_1;
      TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
      ::InitializePerIterationStates
                ((TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
                  *)param_1,local_88.ArrayNum,
                 (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGPathfindingElement::FIterationState_&,PCGPathfindingElement::FExecutionState_const_&,unsigned_int)>
                  *)&local_68);
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

