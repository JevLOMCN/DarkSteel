// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// BindActionValues @ 14d65c620

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Cameras::FInputAxisBindingHelpers::BindActionValues
          (FCameraNodeEvaluatorInitializeParams *param_1,UCameraNode *param_2,
          UEnhancedInputComponent *param_3,
          TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FEnhancedInputActionValueBinding_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  FInputBindingHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UPackage *pUVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  TArray<FEnhancedInputActionValueBinding,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_d8;
  uint local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FInputBindingHandle local_98;
  FWeakObjectPtr local_88;
  double local_80;
  double dStack_78;
  double local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  UObject *local_60;
  FScriptContainerElement *local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakOwner).WeakPtr);
  if (param_3 == (UEnhancedInputComponent *)0x0) {
    if ((param_1->Evaluator->Role == Game) && (1 < (byte)LogCameraSystem._0_1_)) {
      if ((param_2 == (UCameraNode *)0x0) ||
         (pUVar8 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2),
         pUVar8 == (UPackage *)0x0)) {
        ::FString::FString(&local_a8,L"None");
      }
      else {
        local_50 = (FName)pUVar8->_padding_;
        ::FName::ToString(&local_50,&local_a8);
      }
      if (param_2 == (UCameraNode *)0x0) {
        ::FString::FString(&local_b8,L"None");
      }
      else {
        local_48 = (FName)param_2->_padding_;
        ::FName::ToString(&local_48,&local_b8);
      }
      if (pUVar6 == (UObject *)0x0) {
        ::FString::FString(&local_c8,L"None");
      }
      else {
        local_40.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_40.Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(&local_40,&local_c8);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_d0 = param_4->ArrayNum;
    uVar9 = (ulonglong)(int)local_d0;
    pFVar12 = (param_4->AllocatorInstance).Data;
    local_58 = pFVar12 + uVar9 * 8;
    while( true ) {
      pFVar11 = local_58;
      if (param_4->ArrayNum != (int)uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UInputAction>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar11) break;
      pUVar6 = *(UObject **)pFVar12;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      pTVar13 = &param_3->EnhancedActionValueBindings;
      pFVar11 = (pTVar13->AllocatorInstance).Data;
      pFVar10 = pFVar11 + (longlong)(param_3->EnhancedActionValueBindings).ArrayNum * 0x38;
      for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 0x38) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar11 + 0x10));
        if (pUVar7 == pUVar6) {
          if (pFVar11 != (FScriptContainerElement *)0x0) goto LAB_14d65c864;
          break;
        }
      }
      FInputBindingHandle::FInputBindingHandle(&local_98);
      local_98._padding_ = (longlong)&___7FEnhancedInputActionValueBinding__6B_;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      local_88.ObjectIndex = 0;
      local_88.ObjectSerialNumber = 0;
      local_60 = pUVar6;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_60);
      pFVar2 = (FInputBindingHandle *)(pTVar13->AllocatorInstance).Data;
      uStack_68 = 0;
      local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (((pFVar2 <= &local_98) &&
          (&local_98 <
           (FInputBindingHandle *)
           ((longlong)pFVar2 + (longlong)(param_3->EnhancedActionValueBindings).ArrayMax * 0x38)))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (param_3->EnhancedActionValueBindings).ArrayNum;
      piVar1 = &(param_3->EnhancedActionValueBindings).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar13->AllocatorInstance,piVar1);
      }
      (param_3->EnhancedActionValueBindings).ArrayNum = iVar5 + 1;
      pFVar11 = (pTVar13->AllocatorInstance).Data + (longlong)iVar5 * 0x38;
      *(undefined ***)pFVar11 = &___7FInputBindingHandle__6B_;
      *(uint *)(pFVar11 + 8) = local_98.Handle;
      *(undefined ***)pFVar11 = &___7FEnhancedInputActionValueBinding__6B_;
      *(FWeakObjectPtr *)(pFVar11 + 0x10) = local_88;
      *(double *)(pFVar11 + 0x18) = local_80;
      *(double *)(pFVar11 + 0x20) = dStack_78;
      *(double *)(pFVar11 + 0x28) = local_70;
      *(ulonglong *)(pFVar11 + 0x30) = CONCAT71(uStack_67,uStack_68);
LAB_14d65c864:
      pFVar10 = (param_5->AllocatorInstance).Data;
      local_d8 = pFVar11;
      if (((pFVar10 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < pFVar10 + (longlong)param_5->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_5->ArrayNum;
      if (iVar5 == param_5->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar5 + 1;
      pFVar12 = pFVar12 + 8;
      *(FScriptContainerElement **)((param_5->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_d8;
      uVar9 = (ulonglong)local_d0;
    }
  }
  return;
}

// FindInputComponent @ 14d65f7b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UEnhancedInputComponent * __cdecl
UE::Cameras::FInputAxisBindingHelpers::FindInputComponent
          (FCameraNodeEvaluatorInitializeParams *param_1)

{
  undefined1 *this;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UEnhancedInputComponent *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  
  if ((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UEnhancedInputComponent *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakOwner).WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_AActor_NoRegister();
      pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar5,pUVar6);
      if ((pUVar5 != (UObject *)0x0) && (this = &pUVar5[9].field_0x10, *(longlong *)this != 0)) {
        pUVar6 = Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this,pUVar6);
        if (bVar3) {
          return *(UEnhancedInputComponent **)this;
        }
      }
    }
    else if (*(longlong *)&pUVar5[9].field_0x10 != 0) {
      pUVar6 = Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&pUVar5[9].field_0x10,pUVar6);
      if (bVar3) {
        return *(UEnhancedInputComponent **)&pUVar5[9].field_0x10;
      }
    }
  }
  return (UEnhancedInputComponent *)0x0;
}

// GetHighestValue @ 14d65fdd0

TVector2<double> * __cdecl
UE::Cameras::FInputAxisBindingHelpers::GetHighestValue
          (TVector2<double> *__return_storage_ptr__,
          TArray<FEnhancedInputActionValueBinding_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FEnhancedInputActionValueBinding_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    lVar3 = *(longlong *)pFVar6;
    if (lVar3 != 0) {
      dVar4 = *(double *)(lVar3 + 0x18);
      dVar5 = *(double *)(lVar3 + 0x20);
      if (0.0 < dVar5 * dVar5 + dVar4 * dVar4) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return __return_storage_ptr__;
}

