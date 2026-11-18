// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 7

// StaticStruct @ 1494bd930

UScriptStruct * __cdecl FComputeGraphInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComputeGraphInstance.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FComputeGraphInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComputeGraphInstance,(UObject *)pUVar1,
                         L"ComputeGraphInstance");
  }
  return Z_Registration_Info_UScriptStruct_FComputeGraphInstance.OuterSingleton;
}

// operator() @ 1494c67a0

void __thiscall
`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  FName FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  FName local_res8;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  
  lVar4 = *(longlong *)this;
  uVar5 = *(undefined8 *)((longlong)this + 0x50);
  FVar2 = *(FScriptContainerElement *)((longlong)this + 0x58);
  local_58 = (undefined1  [8])0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x38));
  iVar10 = *(int *)((longlong)this + 0x30);
  _Src = *(void **)((longlong)this + 0x28);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar10);
  if (iVar10 == 0) {
    local_60 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar10,0,&local_68,iVar10,(int *)((longlong)&local_60 + 4));
    memcpy(local_68.Data,_Src,(longlong)iVar10 << 3);
  }
  FVar6 = *(FName *)((longlong)this + 8);
  uVar7 = *(undefined8 *)((longlong)this + 0x20);
  FVar3 = *(FScriptContainerElement *)((longlong)this + 0x18);
  uVar8 = *(undefined8 *)((longlong)this + 0x10);
  local_res8 = FVar6;
  uVar9 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
  pTVar11 = TMapBase<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>_>
                        *)(lVar4 + 8),FVar6.Number + uVar9,&local_res8);
  iVar10 = pTVar11->ArrayNum;
  if (iVar10 == pTVar11->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
  }
  pTVar11->ArrayNum = iVar10 + 1;
  pFVar12 = (pTVar11->AllocatorInstance).Data + (longlong)iVar10 * 0x50;
  DefaultConstructItems<FComputeGraphTaskWorker::FGraphInvocation,int>(pFVar12,1);
  *(undefined8 *)pFVar12 = uVar8;
  pFVar1 = pFVar12 + 0x20;
  *(undefined8 *)(pFVar12 + 8) = uVar5;
  pFVar12[0x10] = FVar3;
  *(undefined8 *)(pFVar12 + 0x18) = uVar7;
  if (pFVar1 != (FScriptContainerElement *)&local_68) {
    if (*(void **)pFVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar1);
    }
    *(FScriptContainerElement **)pFVar1 = local_68.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar12 + 0x28) = (undefined4)local_60;
    *(undefined4 *)(pFVar12 + 0x2c) = local_60._4_4_;
    local_60 = 0;
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar12 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  pFVar12[0x48] = FVar2;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// CreateDataProviders @ 1494cb1b0

void __thiscall
FComputeGraphInstance::CreateDataProviders
          (FComputeGraphInstance *this,UComputeGraph *param_1,int param_2,
          TObjectPtr<UObject> param_3)

{
  if (param_1 != (UComputeGraph *)0x0) {
    UComputeGraph::CreateDataProviders
              (param_1,param_2,(TObjectPtr<UObject> *)param_3.field0_0x0,&this->DataProviders);
    return;
  }
  return;
}

// DestroyDataProviders @ 1494cc370

void __thiscall FComputeGraphInstance::DestroyDataProviders(FComputeGraphInstance *this)

{
  (this->DataProviders).ArrayNum = 0;
  if ((this->DataProviders).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->DataProviders).ArrayMax);
  }
  return;
}

// EnqueueWork @ 1494ccf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FComputeGraphInstance::EnqueueWork
          (FComputeGraphInstance *this,UComputeGraph *param_1,FSceneInterface *param_2,FName param_3
          ,FName param_4,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_5,
          UObject *param_6,uchar param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FComputeGraphTaskWorker *pFVar3;
  code *pcVar4;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FComputeGraphTaskWorker **ppFVar8;
  FComputeGraphRenderProxy *pFVar9;
  code **ppcVar10;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [8];
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined8 local_140;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_138;
  FComputeGraphTaskWorker *local_130;
  FName local_128;
  FName local_120;
  int local_118;
  FComputeGraphRenderProxy *local_110;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  ForAnyElementType FStack_f0;
  int local_e8;
  UObject *local_e0;
  undefined1 local_d8;
  FDestructionSentinel local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_138 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_5;
  if ((((param_1 != (UComputeGraph *)0x0) && (param_2 != (FSceneInterface *)0x0)) &&
      (0 < GComputeFrameworkEnable)) &&
     ((FComputeFrameworkModule::ComputeSystem != (FComputeFrameworkSystem *)0x0 &&
      (iVar2 = (param_1->DataInterfaces).ArrayNum, iVar2 == (this->DataProviders).ArrayNum)))) {
    uVar13 = 0;
    if (0 < iVar2) {
      lVar15 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar13 < (this->DataProviders).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if (*(longlong *)((this->DataProviders).AllocatorInstance.Data + lVar15) == 0) {
          uVar7 = 0;
          if ((int)uVar13 < (param_1->DataInterfaces).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          param_5 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_138;
          if (*(longlong *)((param_1->DataInterfaces).AllocatorInstance.Data + lVar15) != 0)
          goto LAB_1494cd4b6;
        }
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 8;
      } while ((int)uVar13 < (param_1->DataInterfaces).ArrayNum);
    }
    param_5 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_138;
    ppFVar8 = TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
              ::Find((TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
                      *)&FComputeFrameworkModule::ComputeSystem->ComputeWorkers,param_2);
    if ((ppFVar8 == (FComputeGraphTaskWorker **)0x0) ||
       (pFVar3 = *ppFVar8, pFVar3 == (FComputeGraphTaskWorker *)0x0)) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7802821735530627004>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphInstance.cpp"
                         ,0x44,"ComputeGraphWorker");
      param_5 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_138;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      pFVar9 = param_1->RenderProxy;
      if (pFVar9 != (FComputeGraphRenderProxy *)0x0) {
        pFVar14 = (this->DataProviders).AllocatorInstance.Data;
        iVar2 = (this->DataProviders).ArrayNum;
        local_150.Data = (FScriptContainerElement *)0x0;
        local_148._0_4_ = 0;
        local_148._4_4_ = 0;
        pFVar1 = pFVar14 + (longlong)iVar2 * 8;
        while( true ) {
          if ((this->DataProviders).ArrayNum != iVar2) {
            local_158[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UComputeDataProvider>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_158);
          }
          this_00 = local_138;
          if (pFVar14 == pFVar1) {
            bVar5 = this->bEnableRenderCaptures;
            local_120 = param_4;
            local_118 = (uint)this->GraphSortPriority + (uint)param_7;
            local_108 = local_150.Data;
            local_100._0_4_ = (int)local_148;
            local_100._4_4_ = local_148._4_4_;
            local_148 = 0;
            local_150.Data = (FScriptContainerElement *)0x0;
            local_f8 = (undefined1  [8])0x0;
            FStack_f0.Data = (FScriptContainerElement *)0x0;
            local_e8 = 0;
            local_130 = pFVar3;
            local_128 = param_3;
            local_110 = pFVar9;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_138);
            local_e0 = param_6;
            local_b8[0] = (code *)0x0;
            local_d8 = bVar5;
            ppcVar10 = FMemory::Malloc(0x68,8);
            *ppcVar10 = (code *)&UE::Core::Private::Function::
                                 TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::`2'::<lambda_1>,1,1>
                                 ::_vftable_;
            ppcVar10[1] = (code *)local_130;
            *(FName *)(ppcVar10 + 2) = local_128;
            *(FName *)(ppcVar10 + 3) = local_120;
            *(int *)(ppcVar10 + 4) = local_118;
            ppcVar10[5] = (code *)local_110;
            ppcVar10[6] = (code *)0x0;
            ppcVar10[6] = (code *)local_108;
            local_108 = (void *)0x0;
            *(int *)(ppcVar10 + 7) = (int)local_100;
            *(int *)((longlong)ppcVar10 + 0x3c) = local_100._4_4_;
            local_100 = 0;
            local_90 = ppcVar10;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(ppcVar10 + 8),
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8);
            ppcVar10[0xb] = (code *)local_e0;
            *(undefined1 *)(ppcVar10 + 0xc) = local_d8;
            if (ppcVar10 + 1 != (code **)0x0) {
              local_b8[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                            ::Call;
            }
            this_01 = FRenderCommandList::GetInstanceTLS();
            if (this_01 == (FRenderCommandList *)0x0) {
              FRenderThreadCommandPipe::
              Enqueue<TRenderCommandTag<_FComputeGraphInstance::EnqueueWork_::__l2::TSTR_ComputeFrameworkEnqueueExecutionCommand93>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
            }
            else {
              this_02 = FRenderCommandList::GetRenderThread(this_01);
              local_88._0_8_ = local_b8[0];
              local_60 = local_90;
              local_90 = (code **)0x0;
              local_88._16_8_ = local_a8[0];
              local_88._24_8_ = local_a8[1];
              local_88._32_8_ = local_a8[2];
              local_b8[0] = (code *)0x0;
              local_58 = 2;
              pFVar11 = (FRenderCommandTag *)
                        TRenderCommandTag<`FComputeGraphInstance::EnqueueWork'::__l2::TSTR_ComputeFrameworkEnqueueExecutionCommand93>
                        ::Get();
              UE::RenderCommandPipe::FCommandList::Enqueue
                        (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                  *)local_88,pFVar11);
              uVar12 = (ulonglong)local_58;
              if ((2 < uVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar12] ==
                  UE::Core::Private::
                  TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                  Destruct) {
                if ((code *)local_88._0_8_ != (code *)0x0) {
                  ppcVar10 = (code **)(local_88 + 0x10);
                  if (local_60 != (code **)0x0) {
                    ppcVar10 = local_60;
                  }
                  (**(code **)(*ppcVar10 + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar12])(local_88);
              }
            }
            if (local_b8[0] != (code *)0x0) {
              ppcVar10 = local_b8 + 2;
              if (local_90 != (code **)0x0) {
                ppcVar10 = local_90;
              }
              (**(code **)(*ppcVar10 + 0x10))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
                       (FWriteAccessScope *)&local_d0);
            if ((local_e8 != 0) && (FStack_f0.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_f0.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_f0,0,0,0x10);
              local_e8 = 0;
            }
            if (local_d0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
            }
            if (FStack_f0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_f0.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_f8);
            if (local_108 != (void *)0x0) {
              FMemory::Free(local_108);
            }
            if (local_150.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data);
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      (this_00);
            return true;
          }
          if (*(longlong **)pFVar14 == (longlong *)0x0) {
            local_140 = 0;
          }
          else {
            local_140 = (**(code **)(**(longlong **)pFVar14 + 0x2b8))();
          }
          if (((local_150.Data <= (FScriptContainerElement *)&local_140) &&
              ((FScriptContainerElement *)&local_140 <
               local_150.Data + (longlong)local_148._4_4_ * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) break;
          if ((int)local_148 == local_148._4_4_) {
            local_148._0_4_ =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_150,(int *)((longlong)&local_148 + 4));
          }
          lVar15 = (longlong)(int)local_148;
          pFVar14 = pFVar14 + 8;
          local_148._0_4_ = (int)local_148 + 1;
          *(undefined8 *)(local_150.Data + lVar15 * 8) = local_140;
        }
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7802821735530626994>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphInstance.cpp"
                         ,0x4e,"ComputeFramework::IsDeferredCompilation()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      UComputeGraph::ReleaseRenderProxy(param_1,param_1->RenderProxy);
      pFVar9 = UComputeGraph::CreateRenderProxy(param_1);
      param_1->RenderProxy = pFVar9;
    }
  }
LAB_1494cd4b6:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return false;
}

// InitializeDataProviders @ 1494d3d00

void __thiscall
FComputeGraphInstance::InitializeDataProviders
          (FComputeGraphInstance *this,UComputeGraph *param_1,int param_2,
          TObjectPtr<UObject> param_3)

{
  if (param_1 != (UComputeGraph *)0x0) {
    UComputeGraph::InitializeDataProviders
              (param_1,param_2,(TObjectPtr<UObject> *)param_3.field0_0x0,&this->DataProviders);
    return;
  }
  return;
}

// ResetDataProviders @ 1494d6a40

void __thiscall FComputeGraphInstance::ResetDataProviders(FComputeGraphInstance *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->DataProviders).AllocatorInstance.Data;
  iVar2 = (this->DataProviders).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DataProviders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UComputeDataProvider>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x2c0))();
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

