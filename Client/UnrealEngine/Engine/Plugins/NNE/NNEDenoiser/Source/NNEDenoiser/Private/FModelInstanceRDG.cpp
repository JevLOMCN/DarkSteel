// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 9

// FModelInstanceRDG @ 14eae5ee0

FModelInstanceRDG * __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::FModelInstanceRDG
          (FModelInstanceRDG *this,TSharedRef<UE::NNE::IModelInstanceRDG,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FModelInstanceRDG_Private_NNEDenoiser_UE__6B_;
  (this->ModelInstance).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ModelInstance).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FModelInstanceRDG @ 14eae6cb0

void __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::~FModelInstanceRDG(FModelInstanceRDG *this)

{
  this->_padding_ = (longlong)&___7FModelInstanceRDG_Private_NNEDenoiser_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelInstance).SharedReferenceCount.ReferenceController);
  return;
}

// EnqueueRDG @ 14eaf3d20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

EResultStatus __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::EnqueueRDG
          (FModelInstanceRDG *this,FRDGBuilder *param_1,
          TArrayView<UE::NNE::FTensorBindingRDG_const_,int> *param_2,
          TArrayView<UE::NNE::FTensorBindingRDG_const_,int> *param_3)

{
  IModelInstanceRDG *pIVar1;
  EResultStatus EVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28 = *(undefined4 *)&param_3->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iStack_20 = param_3->ArrayNum;
  uStack_1c = *(undefined4 *)&param_3->field_0xc;
  pIVar1 = (this->ModelInstance).Object;
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  EVar2 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,local_18,&local_18,&local_28);
  return EVar2;
}

// GetInputTensorDescs @ 14eaf92f0

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::GetInputTensorDescs
          (FModelInstanceRDG *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 8))();
  return __return_storage_ptr__;
}

// GetInputTensorShapes @ 14eaf9380

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::GetInputTensorShapes
          (FModelInstanceRDG *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x18))();
  return __return_storage_ptr__;
}

// GetOutputTensorDescs @ 14eaf95d0

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::GetOutputTensorDescs
          (FModelInstanceRDG *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x10))();
  return __return_storage_ptr__;
}

// GetOutputTensorShapes @ 14eaf9660

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::GetOutputTensorShapes
          (FModelInstanceRDG *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x20))();
  return __return_storage_ptr__;
}

// Make @ 14eafb1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
 __cdecl UE::NNEDenoiser::Private::FModelInstanceRDG::Make(UNNEModelData *param_1,FString *param_2)

{
  code *pcVar1;
  int iVar2;
  INNERuntimeRDG *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
  TVar7;
  undefined8 *puVar8;
  TWeakInterfacePtr<INNERuntimeRDG> *pTVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FString *in_R8;
  undefined1 local_res18 [8];
  FString *local_res20;
  FString *local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  TWeakInterfacePtr<INNERuntimeRDG> local_90;
  longlong local_80;
  TReferenceControllerBase<1> *local_78;
  longlong *local_70;
  TReferenceControllerBase<1> *local_68;
  TWeakInterfacePtr<INNERuntimeRDG> local_60;
  TWeakInterfacePtr<INNERuntimeRDG> local_50;
  
  if (((in_R8->Data).ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RuntimeName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceRDG.cpp"
                         ,0x15,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    TVar7.Ptr = (FModelInstanceRDG *)(*pcVar1)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
            )TVar7.Ptr;
  }
  NNE::GetRuntime<INNERuntimeRDG>(&local_90,in_R8);
  if ((local_90.InterfaceInstance == (INNERuntimeRDG *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) {
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    NNE::GetAllRuntimeNames(&local_a0);
    FVar11.Data = local_a0.AllocatorInstance.Data;
    pFVar13 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10;
    FVar10.Data = local_a0.AllocatorInstance.Data;
    while (FVar10.Data != pFVar13) {
      pTVar9 = NNE::GetRuntime<INNERuntimeRDG>(&local_60,(FString *)FVar10.Data);
      if ((pTVar9->InterfaceInstance == (INNERuntimeRDG *)0x0) ||
         (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar9), !bVar5)) {
        do {
          pFVar14 = pFVar13;
          pFVar13 = pFVar14 + -0x10;
          if (FVar10.Data == pFVar13) goto LAB_14eafb5d6;
          pTVar9 = NNE::GetRuntime<INNERuntimeRDG>(&local_50,(FString *)pFVar13);
        } while ((pTVar9->InterfaceInstance == (INNERuntimeRDG *)0x0) ||
                (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar9), !bVar5));
        if (*(void **)FVar10.Data != (void *)0x0) {
          FMemory::Free(*(void **)FVar10.Data);
        }
        *(undefined8 *)FVar10.Data = *(undefined8 *)pFVar13;
        *(undefined8 *)pFVar13 = 0;
        *(int *)(FVar10.Data + 8) = *(int *)(pFVar14 + -8);
        *(int *)(FVar10.Data + 0xc) = *(int *)(pFVar14 + -4);
        FVar10.Data = FVar10.Data + 0x10;
        *(undefined8 *)(pFVar14 + -8) = 0;
      }
      else {
        FVar10.Data = FVar10.Data + 0x10;
      }
    }
LAB_14eafb5d6:
    TArray<FString,TSizedDefaultAllocator<32>_>::SetNum
              (&local_a0,(int)((longlong)FVar10.Data - (longlong)FVar11.Data >> 4),Default);
    iVar2 = local_a0.ArrayNum;
    pFVar13 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10;
    FVar11.Data = local_a0.AllocatorInstance.Data;
    while( true ) {
      if (local_a0.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar11.Data == pFVar13) break;
      if (4 < (byte)LogNNEDenoiser._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      }
      FVar11.Data = FVar11.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  else {
    if (((local_90.InterfaceInstance == (INNERuntimeRDG *)0x0) ||
        (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      TVar7.Ptr = (FModelInstanceRDG *)(*pcVar1)();
      return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
              )TVar7.Ptr;
    }
    pIVar3 = local_90.InterfaceInstance;
    pcVar1 = *(code **)((longlong)*local_90.InterfaceInstance + 0x10);
    local_res20 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (FString *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    cVar6 = (*pcVar1)(pIVar3,&local_res20);
    if (cVar6 == '\0') {
      if (((local_90.InterfaceInstance == (INNERuntimeRDG *)0x0) ||
          (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                             ,0x8d,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FModelInstanceRDG *)(*pcVar1)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
                )TVar7.Ptr;
      }
      pcVar1 = *(code **)((longlong)*local_90.InterfaceInstance + 0x18);
      local_a8 = param_2;
      if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (FString *)0x0)) {
        GC::MarkAsReachable((UObject *)param_2);
      }
      (*pcVar1)(local_90.InterfaceInstance,&local_70,&local_a8);
      if (local_70 == (longlong *)0x0) {
        if (4 < (byte)LogNNEDenoiser._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
        }
        param_1->_padding_ = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68);
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
                )(FModelInstanceRDG *)param_1;
      }
      if ((local_70 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FModelInstanceRDG *)(*pcVar1)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
                )TVar7.Ptr;
      }
      (**(code **)(*local_70 + 8))(local_70,&local_80);
      if (local_80 == 0) {
        if (4 < (byte)LogNNEDenoiser._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
        }
        param_1->_padding_ = 0;
      }
      else {
        lVar12 = local_80;
        if ((local_80 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), lVar12 = local_80, bVar5)) {
          pcVar1 = (code *)swi(3);
          TVar7.Ptr = (FModelInstanceRDG *)(*pcVar1)();
          return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
                  )TVar7.Ptr;
        }
        pTVar4 = local_78;
        if (local_78 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((lVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          TVar7.Ptr = (FModelInstanceRDG *)(*pcVar1)();
          return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
                  )TVar7.Ptr;
        }
        puVar8 = ::operator_new(0x18);
        if (puVar8 == (undefined8 *)0x0) {
          param_1->_padding_ = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
        }
        else if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          *puVar8 = &___7FModelInstanceRDG_Private_NNEDenoiser_UE__6B_;
          puVar8[1] = lVar12;
          puVar8[2] = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          param_1->_padding_ = (longlong)puVar8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          *puVar8 = &___7FModelInstanceRDG_Private_NNEDenoiser_UE__6B_;
          puVar8[1] = lVar12;
          puVar8[2] = pTVar4;
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          param_1->_padding_ = (longlong)puVar8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
              )(FModelInstanceRDG *)param_1;
    }
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
          )(FModelInstanceRDG *)param_1;
}

// SetInputTensorShapes @ 14eafe030

EResultStatus __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::SetInputTensorShapes
          (FModelInstanceRDG *this,TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  IModelInstanceRDG *pIVar1;
  EResultStatus EVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  pIVar1 = (this->ModelInstance).Object;
  EVar2 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&local_18);
  return EVar2;
}

