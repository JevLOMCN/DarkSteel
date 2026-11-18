// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 35

// StaticClass @ 14a875db0

UClass * __cdecl UChooserFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserFunctionLibrary",
               &Z_Registration_Info_UClass_UChooserFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUChooserFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChooserFunctionLibrary>,
               InternalVTableHelperCtorCaller<UChooserFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserFunctionLibrary.InnerSingleton;
}

// UChooserFunctionLibrary @ 14a87d900

UChooserFunctionLibrary * __thiscall
UChooserFunctionLibrary::UChooserFunctionLibrary
          (UChooserFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UChooserFunctionLibrary__6B_;
  return this;
}

// UChooserFunctionLibrary @ 14a87d930

UChooserFunctionLibrary * __thiscall
UChooserFunctionLibrary::UChooserFunctionLibrary
          (UChooserFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UChooserFunctionLibrary__6B_;
  return this;
}

// ~UChooserFunctionLibrary @ 14a87e6a0

void __thiscall UChooserFunctionLibrary::~UChooserFunctionLibrary(UChooserFunctionLibrary *this)

{
  *(undefined ***)this = &___7UChooserFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14a87f190

EIteratorStatus __thiscall
`UChooserFunctionLibrary::EvaluateChooser'::__l2::<lambda_1>::operator()
          (void *this,UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *local_res10;
  
  if (param_1 == (UObject *)0x0) {
    return Continue;
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  if ((lVar2 != 0) && (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (local_res10 = *(UObject **)((longlong)this + 8), local_res10 != (UObject *)0x0))
    {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res10);
      }
      bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                        ((UObjectBaseUtility *)param_1,(TSubclassOf<UObject>)&local_res10);
      if (!bVar3) {
        return Continue;
      }
    }
  }
  **(undefined8 **)this = param_1;
  return Stop;
}

// operator() @ 14a87f430

EIteratorStatus __thiscall
`UChooserFunctionLibrary::EvaluateChooserMulti'::__l2::<lambda_1>::operator()
          (void *this,UObject *param_1)

{
  int *piVar1;
  longlong lVar2;
  UObject *pUVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  EIteratorStatus EVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *local_res8;
  UObject *local_res10;
  
  if (param_1 != (UObject *)0x0) {
    lVar2 = *(longlong *)((longlong)this + 8);
    local_res10 = param_1;
    if ((lVar2 != 0) && (pUVar9 = Z_Construct_UClass_UObject_NoRegister(), pUVar9 != (UClass *)0x0))
    {
      iVar8 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar8) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar9->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (pUVar3 = *(UObject **)((longlong)this + 8), pUVar3 != (UObject *)0x0)) {
        local_res8 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        bVar6 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                          ((UObjectBaseUtility *)local_res10,(TSubclassOf<UObject>)&local_res8);
        if (!bVar6) goto LAB_14a87f556;
      }
    }
    pFVar4 = *(ForAnyElementType **)this;
    if (((pFVar4->Data <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    iVar8 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar8 + 1;
    *(UObject **)(pFVar4->Data + (longlong)iVar8 * 8) = local_res10;
  }
LAB_14a87f556:
  return (EIteratorStatus)(*(int *)(*(longlong *)this + 8) == 1);
}

// operator() @ 14a87f570

EIteratorStatus __thiscall
`UChooserFunctionLibrary::EvaluateObjectChooserBase'::__l8::<lambda_1>::operator()
          (void *this,UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *local_res10;
  
  if (param_1 == (UObject *)0x0) {
    return Continue;
  }
  lVar2 = *(longlong *)((longlong)this + 0x10);
  if ((lVar2 != 0) && (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (local_res10 = *(UObject **)((longlong)this + 0x10), local_res10 != (UObject *)0x0)) {
      if (*(char *)((longlong)this + 8) == '\0') {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_res10);
        }
        bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                          ((UObjectBaseUtility *)param_1,(TSubclassOf<UObject>)&local_res10);
      }
      else {
        pUVar4 = Z_Construct_UClass_UClass_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
          return Continue;
        }
        if ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_) {
          return Continue;
        }
        lVar2 = *(longlong *)((longlong)this + 0x10);
        if (lVar2 == 0) {
          return Continue;
        }
        pUVar4 = Z_Construct_UClass_UObject_NoRegister();
        if (pUVar4 == (UClass *)0x0) {
          return Continue;
        }
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return Continue;
        }
        lVar2 = *(longlong *)((longlong)this + 0x10);
        if (lVar2 == 0) {
          return Continue;
        }
        if ((*(int *)&param_1[1].field_0x10 < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)(*(longlong *)&param_1[1].field_0x8 + (longlong)*(int *)(lVar2 + 0x38) * 8)
            != lVar2 + 0x30)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      if (bVar3 == false) {
        return Continue;
      }
    }
  }
  **(undefined8 **)this = param_1;
  return Stop;
}

// operator() @ 14a87f6e0

EIteratorStatus __thiscall
`UChooserFunctionLibrary::EvaluateObjectChooserBaseMulti'::__l8::<lambda_1>::operator()
          (void *this,UObject *param_1)

{
  int *piVar1;
  longlong lVar2;
  UObject *pUVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  UObject *pUVar6;
  bool bVar7;
  EIteratorStatus EVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *local_res8;
  UObject *local_res10;
  
  lVar2 = *(longlong *)((longlong)this + 0x10);
  local_res10 = param_1;
  if (lVar2 != 0) {
    pUVar10 = Z_Construct_UClass_UObject_NoRegister();
    pUVar6 = local_res10;
    if (pUVar10 != (UClass *)0x0) {
      iVar9 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar9) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar10->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (((bVar7) && (pUVar3 = *(UObject **)((longlong)this + 0x10), pUVar3 != (UObject *)0x0)) &&
         (local_res10 != (UObject *)0x0)) {
        if (*(char *)((longlong)this + 8) == '\0') {
          local_res8 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          bVar7 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                            ((UObjectBaseUtility *)local_res10,(TSubclassOf<UObject>)&local_res8);
        }
        else {
          pUVar10 = Z_Construct_UClass_UClass_NoRegister();
          iVar9 = (int)pUVar10->_padding_;
          if (((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar9) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
               &pUVar10->_padding_)) ||
             ((pUVar6 == (UObject *)0x0 ||
              (lVar2 = *(longlong *)((longlong)this + 0x10), lVar2 == 0)))) goto LAB_14a87f8ce;
          pUVar10 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar10 == (UClass *)0x0) goto LAB_14a87f8ce;
          iVar9 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((!bVar7) || (lVar2 = *(longlong *)((longlong)this + 0x10), lVar2 == 0))
          goto LAB_14a87f8ce;
          if ((*(int *)&pUVar6[1].field_0x10 < *(int *)(lVar2 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)&pUVar6[1].field_0x8 + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
        }
        if (bVar7 == false) goto LAB_14a87f8ce;
      }
    }
  }
  pFVar4 = *(ForAnyElementType **)this;
  if ((pFVar4->Data <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 <
      pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      EVar8 = (*pcVar5)();
      return EVar8;
    }
  }
  iVar9 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar9 + 1;
  *(UObject **)(pFVar4->Data + (longlong)iVar9 * 8) = local_res10;
LAB_14a87f8ce:
  return (EIteratorStatus)(*(int *)(*(longlong *)this + 8) == 1);
}

// operator() @ 14a87f8f0

EIteratorStatus __thiscall
`UChooserFunctionLibrary::EvaluateObjectChooserBaseMultiSoft'::__l8::<lambda_1>::operator()
          (void *this,TSoftObjectPtr<UObject> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EIteratorStatus EVar6;
  int iVar7;
  
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= param_1) &&
     (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x28)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x28) = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(pFVar3 + (longlong)iVar7 * 0x28 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  return (EIteratorStatus)(*(int *)(*(longlong *)this + 8) == 1);
}

// AddChooserObjectInput @ 14a881260

void __cdecl
UChooserFunctionLibrary::AddChooserObjectInput(FChooserEvaluationContext *param_1,UObject *param_2)

{
  TArray<FChooserEvaluationInputObject,TFixedAllocator<4>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UPackage *pUVar7;
  uint uVar8;
  TTypeCompatibleBytes<FChooserEvaluationInputObject> aTStack_28 [2];
  FStructView FStack_18;
  
  pTVar1 = &param_1->ObjectParams;
  aTStack_28[0].Pad = (uchar  [8])param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  if ((pTVar1 <= aTStack_28) &&
     (aTStack_28 < (pTVar1->AllocatorInstance).InlineData + (param_1->ObjectParams).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->ObjectParams).ArrayNum;
  piVar2 = &(param_1->ObjectParams).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FChooserEvaluationInputObject>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_1->ObjectParams).ArrayNum = iVar5 + 1;
  *&(pTVar1->AllocatorInstance).InlineData[iVar5].Pad = aTStack_28[0].Pad;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (aTStack_28[0].Pad != (uchar  [8])0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)aTStack_28[0].Pad);
  }
  iVar5 = (param_1->ObjectParams).ArrayNum;
  uVar8 = iVar5 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar5) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->ObjectParams).ArrayNum;
  if (Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserEvaluationInputObject,(UObject *)pUVar7,
                         L"ChooserEvaluationInputObject");
  }
  FStack_18.ScriptStruct =
       Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton;
  FStack_18.StructMemory = (pTVar1->AllocatorInstance).InlineData[iVar5 + -1].Pad;
  FChooserEvaluationContext::AddStructViewParam(param_1,(FStructView *)(aTStack_28 + 2));
  return;
}

// AddChooserStructInput @ 14a881270

void __cdecl
UChooserFunctionLibrary::AddChooserStructInput(FChooserEvaluationContext *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\ChooserFunctionLibrary.cpp"
                     ,0x4c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EvaluateChooser @ 14a885c90

UObject * __cdecl
UChooserFunctionLibrary::EvaluateChooser
          (UObject *param_1,UChooserTable *param_2,TSubclassOf<UObject> param_3)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UObject *local_res18;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pUVar1 = *(UObject **)param_3.Class.field0_0x0;
  local_res18 = (UObject *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UChooserFunctionLibrary::EvaluateChooser'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = &local_res18;
    puVar2[4] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  StaticEvaluateChooser
            (param_1,param_2,
             (TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
              *)local_48);
  return local_res18;
}

// EvaluateChooserMulti @ 14a886b40

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
UChooserFunctionLibrary::EvaluateChooserMulti
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1,
          UChooserTable *param_2,TSubclassOf<UObject> param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UClass *pUVar8;
  int iVar9;
  UObject *pUVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  UObject *pUVar14;
  UObject *pUVar15;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pUVar14 = (UObject *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar10 = *(UObject **)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  uVar13 = 0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UChooserFunctionLibrary::EvaluateChooserMulti'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = __return_storage_ptr__;
    puVar5[4] = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  StaticEvaluateChooser
            (param_1,param_2,
             (TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
              *)local_68);
  iVar9 = __return_storage_ptr__->ArrayNum;
  pUVar10 = pUVar14;
  pUVar15 = pUVar14;
  if (0 < iVar9) {
    do {
      uVar12 = (uint)pUVar10;
      uVar11 = ~uVar12 >> 0x1f;
      uVar4 = uVar13;
      if ((int)uVar12 < iVar9) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      if (*(longlong *)
           (&pUVar15->field_0x0 + (longlong)(__return_storage_ptr__->AllocatorInstance).Data) != 0)
      {
        uVar4 = uVar13;
        if ((int)uVar12 < __return_storage_ptr__->ArrayNum) {
          uVar4 = uVar11;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        pUVar10 = *(UObject **)param_3.Class.field0_0x0;
        lVar1 = *(longlong *)
                 (&pUVar15->field_0x0 + (longlong)(__return_storage_ptr__->AllocatorInstance).Data);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar10 != (UObject *)0x0) goto LAB_14a886d04;
LAB_14a886d32:
          pUVar10 = pUVar14;
        }
        else {
          if (pUVar10 == (UObject *)0x0) goto LAB_14a886d32;
          UE::GC::MarkAsReachable(pUVar10);
LAB_14a886d04:
          pUVar8 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar8 == (UClass *)0x0) goto LAB_14a886d32;
          iVar9 = (int)pUVar8->_padding_;
          if ((*(int *)&pUVar10[1].field_0x10 < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar10[1].field_0x8 + (longlong)iVar9 * 8)
              != &pUVar8->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14a886d32;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x38) < *(int *)&pUVar10[1].field_0x10) ||
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar10[1].field_0x10 * 8) !=
            &pUVar10[1].field_0x8)) {
          uVar4 = uVar13;
          if ((int)uVar12 < __return_storage_ptr__->ArrayNum) {
            uVar4 = uVar11;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar7;
          }
          *(undefined8 *)
           (&pUVar15->field_0x0 + (longlong)(__return_storage_ptr__->AllocatorInstance).Data) = 0;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      pUVar10 = (UObject *)(ulonglong)(uVar12 + 1);
      pUVar15 = (UObject *)&pUVar15->field_0x8;
    } while ((int)(uVar12 + 1) < iVar9);
  }
  return __return_storage_ptr__;
}

// EvaluateObjectChooserBase @ 14a886de0

UObject * __cdecl
UChooserFunctionLibrary::EvaluateObjectChooserBase
          (FChooserEvaluationContext *param_1,FInstancedStruct *param_2,TSubclassOf<UObject> param_3
          ,bool param_4)

{
  int iVar1;
  UAnimInstance *this;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  USkeletalMeshComponent *pUVar6;
  FAnimInstanceProxy *pFVar7;
  FObjectChooserBase *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UObject *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res8 = (UObject *)0x0;
  if (0 < (param_1->ObjectParams).ArrayNum) {
    if ((param_1->ObjectParams).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UObject *)(*pcVar2)();
        return pUVar4;
      }
    }
    this = *(UAnimInstance **)(param_1->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this == (UAnimInstance *)0x0) goto LAB_14a886ed5;
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (this != (UAnimInstance *)0x0) {
      pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
        if (bVar3) {
          bVar3 = IsInGameThread();
          if (bVar3) {
            pUVar6 = UAnimInstance::GetSkelMeshComponentChecked(this);
            UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
          }
        }
        if (this->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) {
          pFVar7 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
          this->AnimInstanceProxy = pFVar7;
        }
      }
    }
  }
LAB_14a886ed5:
  pFVar8 = FInstancedStruct::GetPtr<FObjectChooserBase>(param_2);
  if (pFVar8 != (FObjectChooserBase *)0x0) {
    pUVar4 = *(UObject **)param_3.Class.field0_0x0;
    pcVar2 = *(code **)((longlong)*pFVar8 + 0x30);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UChooserFunctionLibrary::EvaluateObjectChooserBase'::`8'::<lambda_1>_>
                 ::_vftable_;
      puVar9[3] = &local_res8;
      *(bool *)(puVar9 + 4) = param_4;
      puVar9[5] = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    (*pcVar2)(pFVar8,param_1,&local_68);
  }
  return local_res8;
}

// EvaluateObjectChooserBaseMulti @ 14a886ff0

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
UChooserFunctionLibrary::EvaluateObjectChooserBaseMulti
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FChooserEvaluationContext *param_1,FInstancedStruct *param_2,TSubclassOf<UObject> param_3,
          bool param_4)

{
  int iVar1;
  UAnimInstance *this;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *pUVar7;
  FAnimInstanceProxy *pFVar8;
  FObjectChooserBase *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < (param_1->ObjectParams).ArrayNum) {
    if ((param_1->ObjectParams).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar5;
      }
    }
    this = *(UAnimInstance **)(param_1->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this == (UAnimInstance *)0x0) goto LAB_14a8870e8;
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (this != (UAnimInstance *)0x0) {
      pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        bVar4 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
        if (bVar4) {
          bVar4 = IsInGameThread();
          if (bVar4) {
            pUVar7 = UAnimInstance::GetSkelMeshComponentChecked(this);
            UAnimInstance::HandleExistingParallelEvaluationTask(pUVar7);
          }
        }
        if (this->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) {
          pFVar8 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
          this->AnimInstanceProxy = pFVar8;
        }
      }
    }
  }
LAB_14a8870e8:
  pFVar9 = FInstancedStruct::GetPtr<FObjectChooserBase>(param_2);
  if (pFVar9 != (FObjectChooserBase *)0x0) {
    pUVar2 = *(UObject **)param_3.Class.field0_0x0;
    pcVar3 = *(code **)((longlong)*pFVar9 + 0x30);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UChooserFunctionLibrary::EvaluateObjectChooserBaseMulti'::`8'::<lambda_1>_>
                  ::_vftable_;
      puVar10[3] = __return_storage_ptr__;
      *(bool *)(puVar10 + 4) = param_4;
      puVar10[5] = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    (*pcVar3)(pFVar9,param_1,&local_68);
  }
  return __return_storage_ptr__;
}

// EvaluateObjectChooserBaseMultiSoft @ 14a887200

TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> * __cdecl
UChooserFunctionLibrary::EvaluateObjectChooserBaseMultiSoft
          (TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FChooserEvaluationContext *param_1,FInstancedStruct *param_2,TSubclassOf<UObject> param_3,
          bool param_4)

{
  int iVar1;
  UAnimInstance *this;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *pUVar7;
  FAnimInstanceProxy *pFVar8;
  FObjectChooserBase *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < (param_1->ObjectParams).ArrayNum) {
    if ((param_1->ObjectParams).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar5;
      }
    }
    this = *(UAnimInstance **)(param_1->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this == (UAnimInstance *)0x0) goto LAB_14a8872f8;
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (this != (UAnimInstance *)0x0) {
      pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        bVar4 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
        if (bVar4) {
          bVar4 = IsInGameThread();
          if (bVar4) {
            pUVar7 = UAnimInstance::GetSkelMeshComponentChecked(this);
            UAnimInstance::HandleExistingParallelEvaluationTask(pUVar7);
          }
        }
        if (this->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) {
          pFVar8 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
          this->AnimInstanceProxy = pFVar8;
        }
      }
    }
  }
LAB_14a8872f8:
  pFVar9 = FInstancedStruct::GetPtr<FObjectChooserBase>(param_2);
  if (pFVar9 != (FObjectChooserBase *)0x0) {
    pUVar2 = *(UObject **)param_3.Class.field0_0x0;
    pcVar3 = *(code **)((longlong)*pFVar9 + 0x28);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__AEBU__TSoftObjectPtr_VUObject_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy,`UChooserFunctionLibrary::EvaluateObjectChooserBaseMultiSoft'::`8'::<lambda_1>_>
                  ::_vftable_;
      puVar10[3] = __return_storage_ptr__;
      *(bool *)(puVar10 + 4) = param_4;
      puVar10[5] = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    (*pcVar3)(pFVar9,param_1,&local_68);
  }
  return __return_storage_ptr__;
}

// EvaluateObjectChooserBaseSoft @ 14a887410

TSoftObjectPtr<UObject> * __cdecl
UChooserFunctionLibrary::EvaluateObjectChooserBaseSoft
          (TSoftObjectPtr<UObject> *__return_storage_ptr__,FChooserEvaluationContext *param_1,
          FInstancedStruct *param_2,TSubclassOf<UObject> param_3,bool param_4)

{
  int iVar1;
  UAnimInstance *this;
  code *pcVar2;
  bool bVar3;
  TSoftObjectPtr<UObject> *pTVar4;
  UClass *pUVar5;
  USkeletalMeshComponent *pUVar6;
  FAnimInstanceProxy *pFVar7;
  FObjectChooserBase *pFVar8;
  undefined1 *this_00;
  
  this_00 = &(__return_storage_ptr__->SoftObjectPtr).field_0x18;
  *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x20 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  if (0 < (param_1->ObjectParams).ArrayNum) {
    if ((param_1->ObjectParams).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSoftObjectPtr<UObject> *)(*pcVar2)();
        return pTVar4;
      }
    }
    this = *(UAnimInstance **)(param_1->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this == (UAnimInstance *)0x0) goto LAB_14a88751f;
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (this != (UAnimInstance *)0x0) {
      pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
        if (bVar3) {
          bVar3 = IsInGameThread();
          if (bVar3) {
            pUVar6 = UAnimInstance::GetSkelMeshComponentChecked(this);
            UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
          }
        }
        if (this->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) {
          pFVar7 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
          this->AnimInstanceProxy = pFVar7;
        }
      }
    }
  }
LAB_14a88751f:
  pFVar8 = FInstancedStruct::GetPtr<FObjectChooserBase>(param_2);
  if (pFVar8 != (FObjectChooserBase *)0x0) {
    (**(code **)((longlong)*pFVar8 + 0x20))(pFVar8,param_1,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetChooserObjectInput @ 14a889a80

UObject * __cdecl
UChooserFunctionLibrary::GetChooserObjectInput
          (FChooserEvaluationContext *param_1,int param_2,TSubclassOf<UObject> param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FChooserEvaluationInputObject *pFVar4;
  ForElementType<FStructView> FVar5;
  
  if (param_2 < (param_1->Params).ArrayNum) {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UObject *)(*pcVar1)();
        return pUVar3;
      }
    }
    FVar5 = (param_1->Params).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FStructView>)0x0) {
      FVar5 = (ForElementType<FStructView>)&param_1->Params;
    }
    pFVar4 = FStructView::GetPtr<FChooserEvaluationInputObject>
                       ((FStructView *)((longlong)FVar5 + (longlong)param_2 * 0x10));
    if (pFVar4 != (FChooserEvaluationInputObject *)0x0) {
      return (pFVar4->Object).field0_0x0.DebugPtr;
    }
  }
  return (UObject *)0x0;
}

// GetChooserStructOutput @ 14a889b20

void __cdecl
UChooserFunctionLibrary::GetChooserStructOutput
          (FChooserEvaluationContext *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\ChooserFunctionLibrary.cpp"
                     ,0x6f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14a88a7f0

UClass * __cdecl UChooserFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserFunctionLibrary",
               &Z_Registration_Info_UClass_UChooserFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUChooserFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChooserFunctionLibrary>,
               InternalVTableHelperCtorCaller<UChooserFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserFunctionLibrary.InnerSingleton;
}

// MakeChooserEvaluationContext @ 14a88c720

FChooserEvaluationContext * __cdecl
UChooserFunctionLibrary::MakeChooserEvaluationContext
          (FChooserEvaluationContext *__return_storage_ptr__)

{
  (__return_storage_ptr__->DebuggingInfo).CurrentChooser = (UObject *)0x0;
  (__return_storage_ptr__->DebuggingInfo).bCurrentDebugTarget = false;
  (__return_storage_ptr__->Params).AllocatorInstance.SecondaryData =
       (ForElementType<FStructView>)0x0;
  (__return_storage_ptr__->Params).ArrayNum = 0;
  (__return_storage_ptr__->Params).ArrayMax = 4;
  (__return_storage_ptr__->ObjectParams).ArrayNum = 0;
  (__return_storage_ptr__->ObjectParams).ArrayMax = 4;
  return __return_storage_ptr__;
}

// MakeEvaluateChooser @ 14a88c750

FInstancedStruct * __cdecl
UChooserFunctionLibrary::MakeEvaluateChooser
          (FInstancedStruct *__return_storage_ptr__,UChooserTable *param_1)

{
  UPackage *pUVar1;
  FEvaluateChooser *pFVar2;
  
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEvaluateChooser,(UObject *)pUVar1,
                         L"EvaluateChooser");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton,(uchar *)0x0);
  pFVar2 = FInstancedStruct::GetMutable<FEvaluateChooser>(__return_storage_ptr__);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UChooserTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (pFVar2->Chooser).field0_0x0.DebugPtr = param_1;
    return __return_storage_ptr__;
  }
  (pFVar2->Chooser).field0_0x0.DebugPtr = param_1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUChooserFunctionLibrary @ 14a88fda0

void __cdecl UChooserFunctionLibrary::StaticRegisterNativesUChooserFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UChooserFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddChooserObjectInput @ 14a892e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChooserFunctionLibrary::execAddChooserObjectInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FChooserEvaluationContext *this;
  undefined1 auStack_c8 [32];
  UObject *local_a8;
  FChooserEvaluationContext local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a0.DebuggingInfo.CurrentChooser = (UObject *)0x0;
  local_a0.DebuggingInfo.bCurrentDebugTarget = false;
  local_a0.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
  local_a0.Params.ArrayNum = 0;
  local_a0.Params.ArrayMax = 4;
  local_a0.ObjectParams.ArrayNum = 0;
  local_a0.ObjectParams.ArrayMax = 4;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a8 = (UObject *)0x0;
  this = &local_a0;
  if ((FChooserEvaluationContext *)param_2->MostRecentPropertyAddress !=
      (FChooserEvaluationContext *)0x0) {
    this = (FChooserEvaluationContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FChooserEvaluationContext::AddObjectParam(this,local_a8);
  if (local_a0.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FMemory::Free((void *)local_a0.Params.AllocatorInstance.SecondaryData);
  }
  return;
}

// execAddChooserStructInput @ 14a892f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChooserFunctionLibrary::execAddChooserStructInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForElementType<FStructView> FVar1;
  longlong *plVar2;
  FProperty *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  ForElementType<FStructView> FVar9;
  ForElementType<FStructView> *pFVar10;
  undefined1 auStack_148 [32];
  longlong *local_128;
  ForElementType<FStructView> local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_f8;
  uchar *puStack_f0;
  undefined1 local_e8 [8];
  FBlueprintExceptionInfo local_e0;
  FText local_c8;
  ForElementType<FStructView> local_b8;
  undefined1 local_b0;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_5c = 4;
  local_b8 = (ForElementType<FStructView>)0x0;
  local_b0 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_38 = 0;
  local_34 = 4;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar10 = &local_b8;
  if ((ForElementType<FStructView> *)param_2->MostRecentPropertyAddress !=
      (ForElementType<FStructView> *)0x0) {
    pFVar10 = (ForElementType<FStructView> *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = param_2->MostRecentProperty;
  if ((pFVar3 == (FProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  }
  else {
    puVar4 = param_2->MostRecentPropertyAddress;
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar4 != (uchar *)0x0) {
      local_f8 = pFVar3[1]._padding_;
      FVar1 = (ForElementType<FStructView>)(pFVar10 + 2);
      FVar9 = pFVar10[10];
      if (pFVar10[10] == (ForElementType<FStructView>)0x0) {
        FVar9 = FVar1;
      }
      puStack_f0 = puVar4;
      if (((ulonglong)FVar9 <= &local_f8) &&
         (&local_f8 <
          (longlong *)((longlong)FVar9 + (longlong)*(int *)&pFVar10[0xb].field_0x4 * 0x10))) {
        local_110 = (longlong)*(int *)(pFVar10 + 0xb);
        local_108 = 0x10;
        local_128 = &local_f8;
        local_120 = FVar9;
        local_118 = (longlong)*(int *)&pFVar10[0xb].field_0x4;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = *(int *)(pFVar10 + 0xb);
      if (iVar7 == *(int *)&pFVar10[0xb].field_0x4) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStructView>_>
                          (0x810,(ForElementType<FStructView> *)FVar1,(int *)&pFVar10[0xb].field_0x4
                          );
      }
      *(int *)(pFVar10 + 0xb) = iVar7 + 1;
      FVar9 = pFVar10[10];
      if (pFVar10[10] == (ForElementType<FStructView>)0x0) {
        FVar9 = FVar1;
      }
      plVar2 = (longlong *)((longlong)FVar9 + (longlong)iVar7 * 0x10);
      *plVar2 = local_f8;
      plVar2[1] = (longlong)puStack_f0;
      goto LAB_14a8931e9;
    }
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_c8,L"ChooserTable",L"InstancedStruct_MakeInvalidValueWarning",
                      L"Failed to resolve the Value for Add Chooser Struct Input");
  local_e0.EventType = AbortExecution;
  local_e0.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
  if (local_e0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_e0.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_e0.Description.field0_0x0.TypedValue.TextData.Reference,local_e8);
  }
  local_e0.Description.field0_0x0.TypedValue.Flags = pFVar8->Flags;
  if (local_e0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_e0);
  if (local_e0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_e0.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
LAB_14a8931e9:
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execEvaluateChooser @ 14a893230

void __cdecl
UChooserFunctionLibrary::execEvaluateChooser(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UChooserTable *pUVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UObject *local_res10;
  UChooserTable *local_res18;
  UObject *local_res20;
  undefined8 local_68;
  undefined1 local_60 [8];
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UChooserTable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar4 = local_res20;
  pUVar3 = local_res18;
  local_68 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_58);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UChooserFunctionLibrary::EvaluateChooser'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = &local_68;
    puVar5[4] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  StaticEvaluateChooser
            (pUVar4,pUVar3,
             (TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
              *)local_60);
  *(undefined8 *)param_3 = local_68;
  return;
}

// execEvaluateChooserMulti @ 14a893410

void __cdecl
UChooserFunctionLibrary::execEvaluateChooserMulti(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *local_res10;
  UChooserTable *local_res18;
  UObject *local_res20;
  UObject *local_38;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_30;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UChooserTable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pTVar2 = EvaluateChooserMulti(&local_30,local_res20,local_res18,(TSubclassOf<UObject>)&local_38);
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
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execEvaluateObjectChooserBase @ 14a893580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChooserFunctionLibrary::execEvaluateObjectChooserBase
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FInstancedStruct *pFVar3;
  FChooserEvaluationContext *pFVar4;
  bool bVar5;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  UObject *local_e0;
  FInstancedStruct local_d8;
  UObject *local_c8;
  FChooserEvaluationContext local_c0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c0.Params.ArrayMax = 4;
  local_c0.DebuggingInfo.CurrentChooser = (UObject *)0x0;
  local_c0.DebuggingInfo.bCurrentDebugTarget = false;
  local_c0.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
  local_c0.Params.ArrayNum = 0;
  local_c0.ObjectParams.ArrayNum = 0;
  local_c0.ObjectParams.ArrayMax = 4;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  pFVar4 = &local_c0;
  if ((FChooserEvaluationContext *)param_2->MostRecentPropertyAddress !=
      (FChooserEvaluationContext *)0x0) {
    pFVar4 = (FChooserEvaluationContext *)param_2->MostRecentPropertyAddress;
  }
  FInstancedStruct::FInstancedStruct(&local_d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e0 = (UObject *)0x0;
  pFVar3 = &local_d8;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_e8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  bVar5 = local_e8[0] != 0;
  local_c8 = local_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  pUVar2 = EvaluateObjectChooserBase(pFVar4,pFVar3,(TSubclassOf<UObject>)&local_c8,bVar5);
  *(UObject **)param_3 = pUVar2;
  FInstancedStruct::Reset(&local_d8);
  if (local_c0.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FMemory::Free((void *)local_c0.Params.AllocatorInstance.SecondaryData);
  }
  return;
}

// execEvaluateObjectChooserBaseMulti @ 14a893780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChooserFunctionLibrary::execEvaluateObjectChooserBaseMulti
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *pFVar3;
  FChooserEvaluationContext *pFVar4;
  bool bVar5;
  undefined1 auStack_128 [32];
  int local_f8 [2];
  UObject *local_f0;
  FInstancedStruct local_e8;
  UObject *local_d8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_d0;
  FChooserEvaluationContext local_c0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_c0.Params.ArrayMax = 4;
  local_c0.DebuggingInfo.CurrentChooser = (UObject *)0x0;
  local_c0.DebuggingInfo.bCurrentDebugTarget = false;
  local_c0.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
  local_c0.Params.ArrayNum = 0;
  local_c0.ObjectParams.ArrayNum = 0;
  local_c0.ObjectParams.ArrayMax = 4;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  pFVar4 = &local_c0;
  if ((FChooserEvaluationContext *)param_2->MostRecentPropertyAddress !=
      (FChooserEvaluationContext *)0x0) {
    pFVar4 = (FChooserEvaluationContext *)param_2->MostRecentPropertyAddress;
  }
  FInstancedStruct::FInstancedStruct(&local_e8);
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
  local_f0 = (UObject *)0x0;
  pFVar3 = &local_e8;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_f8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  bVar5 = local_f8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = local_f0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_f0);
  }
  pTVar2 = EvaluateObjectChooserBaseMulti
                     (&local_d0,pFVar4,pFVar3,(TSubclassOf<UObject>)&local_d8,bVar5);
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
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  FInstancedStruct::Reset(&local_e8);
  if (local_c0.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FMemory::Free((void *)local_c0.Params.AllocatorInstance.SecondaryData);
  }
  return;
}

// execEvaluateObjectChooserBaseMultiSoft @ 14a8939d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChooserFunctionLibrary::execEvaluateObjectChooserBaseMultiSoft
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *pFVar3;
  FChooserEvaluationContext *pFVar4;
  bool bVar5;
  undefined1 auStack_128 [32];
  int local_f8 [2];
  UObject *local_f0;
  FInstancedStruct local_e8;
  UObject *local_d8;
  TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> local_d0;
  FChooserEvaluationContext local_c0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_c0.Params.ArrayMax = 4;
  local_c0.DebuggingInfo.CurrentChooser = (UObject *)0x0;
  local_c0.DebuggingInfo.bCurrentDebugTarget = false;
  local_c0.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
  local_c0.Params.ArrayNum = 0;
  local_c0.ObjectParams.ArrayNum = 0;
  local_c0.ObjectParams.ArrayMax = 4;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  pFVar4 = &local_c0;
  if ((FChooserEvaluationContext *)param_2->MostRecentPropertyAddress !=
      (FChooserEvaluationContext *)0x0) {
    pFVar4 = (FChooserEvaluationContext *)param_2->MostRecentPropertyAddress;
  }
  FInstancedStruct::FInstancedStruct(&local_e8);
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
  local_f0 = (UObject *)0x0;
  pFVar3 = &local_e8;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_f8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  bVar5 = local_f8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = local_f0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_f0);
  }
  pTVar2 = EvaluateObjectChooserBaseMultiSoft
                     (&local_d0,pFVar4,pFVar3,(TSubclassOf<UObject>)&local_d8,bVar5);
  if (param_3 != pTVar2) {
    DestructItems<TSoftObjectPtr<UObject>,int>
              (*(TSoftObjectPtr<UObject> **)param_3,*(int *)((longlong)param_3 + 8));
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
  DestructItems<TSoftObjectPtr<UObject>,int>
            ((TSoftObjectPtr<UObject> *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  FInstancedStruct::Reset(&local_e8);
  if (local_c0.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FMemory::Free((void *)local_c0.Params.AllocatorInstance.SecondaryData);
  }
  return;
}

// execEvaluateObjectChooserBaseSoft @ 14a893c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChooserFunctionLibrary::execEvaluateObjectChooserBaseSoft
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UAnimInstance *this;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *pUVar7;
  FAnimInstanceProxy *pFVar8;
  FObjectChooserBase *pFVar9;
  uchar *puVar10;
  FInstancedStruct *this_00;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  undefined4 local_118 [2];
  UObject *local_110;
  undefined8 local_108;
  FInstancedStruct local_100;
  TPersistentObjectPtr<FSoftObjectPath> local_f0;
  uchar local_c8 [80];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_6c = 4;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_c8[8] = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_48 = 0;
  local_44 = 4;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  puVar10 = local_c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  FInstancedStruct::FInstancedStruct(&local_100);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_110 = (UObject *)0x0;
  this_00 = &local_100;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    this_00 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_110 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_110);
  }
  local_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_f0.ObjectID.AssetPath.AssetName.Number = 0;
  local_f0.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_f0.ObjectID.AssetPath.PackageName.Number = 0;
  local_f0.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_f0.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_f0.WeakPtr.ObjectIndex = 0;
  local_f0.WeakPtr.ObjectSerialNumber = 0;
  local_108 = 0;
  FUtf8String::Reset(&local_f0.ObjectID.SubPathString,0);
  if (0 < *(int *)(puVar10 + 0x80)) {
    if (*(int *)(puVar10 + 0x80) < 1) {
      local_128 = 0;
      local_120 = (longlong)*(int *)(puVar10 + 0x80);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this = *(UAnimInstance **)(puVar10 + 0x60);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this == (UAnimInstance *)0x0) goto LAB_14a893eb0;
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (this != (UAnimInstance *)0x0) {
      pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        bVar5 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
        if (bVar5) {
          bVar5 = IsInGameThread();
          if (bVar5) {
            pUVar7 = UAnimInstance::GetSkelMeshComponentChecked(this);
            UAnimInstance::HandleExistingParallelEvaluationTask(pUVar7);
          }
        }
        if (this->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) {
          pFVar8 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
          this->AnimInstanceProxy = pFVar8;
        }
      }
    }
  }
LAB_14a893eb0:
  pFVar9 = FInstancedStruct::GetPtr<FObjectChooserBase>(this_00);
  if (pFVar9 != (FObjectChooserBase *)0x0) {
    (**(code **)((longlong)*pFVar9 + 0x20))(pFVar9,puVar10,&local_f0);
  }
  TPersistentObjectPtr<FSoftObjectPath>::operator=(param_3,&local_f0);
  if (local_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  FInstancedStruct::Reset(&local_100);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execGetChooserObjectInput @ 14a893f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChooserFunctionLibrary::execGetChooserObjectInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FChooserEvaluationInputObject *pFVar6;
  uchar *puVar7;
  longlong lVar8;
  uchar *puVar9;
  TObjectPtr<UObject>_u_0 TVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  uint local_b8 [2];
  UObject *local_b0;
  uchar local_a8 [80];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_e8;
  TVar10.DebugPtr = (UObject *)0x0;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 4;
  local_28 = 0;
  local_24 = 4;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_b8[0] = 0;
  puVar9 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_b0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b0);
  }
  lVar8 = (longlong)(int)local_b8[0];
  iVar1 = *(int *)(puVar9 + 0x58);
  if ((int)local_b8[0] < iVar1) {
    uVar5 = 0;
    if ((int)local_b8[0] < iVar1) {
      uVar5 = ~local_b8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      local_c8 = lVar8;
      local_c0 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar7 = *(uchar **)(puVar9 + 0x50);
    if (*(uchar **)(puVar9 + 0x50) == (uchar *)0x0) {
      puVar7 = puVar9 + 0x10;
    }
    pFVar6 = FStructView::GetPtr<FChooserEvaluationInputObject>
                       ((FStructView *)(puVar7 + lVar8 * 0x10));
    if (pFVar6 != (FChooserEvaluationInputObject *)0x0) {
      TVar10.ObjectPtr.field0_0x0 = *(FObjectPtr *)&(pFVar6->Object).field0_0x0;
    }
  }
  *(TObjectPtr<UObject>_u_0 *)param_3 = TVar10;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetChooserStructOutput @ 14a894170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChooserFunctionLibrary::execGetChooserStructOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  uchar *puVar4;
  UScriptStruct *this;
  code *pcVar5;
  bool bVar6;
  FText *pFVar7;
  uint uVar8;
  uchar *puVar9;
  uchar *puVar10;
  longlong lVar11;
  uint uVar12;
  uchar *puVar13;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  uint local_f8;
  undefined1 local_f4 [4];
  FBlueprintExceptionInfo local_f0;
  FText local_d8;
  uchar local_c8 [80];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_128;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_c8[8] = 0;
  local_78 = (void *)0x0;
  uVar12 = 0;
  local_70 = 0;
  local_6c = 4;
  local_48 = 0;
  local_44 = 4;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_f8 = 0;
  puVar13 = local_c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = param_2->MostRecentProperty;
  if ((pFVar3 == (FProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  }
  else {
    puVar4 = param_2->MostRecentPropertyAddress;
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar4 != (uchar *)0x0) {
      iVar2 = *(int *)(puVar13 + 0x58);
      lVar11 = (longlong)(int)local_f8;
      if ((int)local_f8 < iVar2) {
        puVar10 = puVar13 + 0x10;
        uVar8 = uVar12;
        if ((int)local_f8 < iVar2) {
          uVar8 = ~local_f8 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_108 = lVar11;
          local_100 = (longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        puVar9 = puVar10;
        if (*(uchar **)(puVar13 + 0x50) != (uchar *)0x0) {
          puVar9 = *(uchar **)(puVar13 + 0x50);
        }
        if ((*(longlong *)(puVar9 + lVar11 * 0x10 + 8) != 0) &&
           (*(longlong *)(puVar9 + lVar11 * 0x10) != 0)) {
          lVar11 = (longlong)(int)local_f8;
          uVar8 = uVar12;
          if ((int)local_f8 < *(int *)(puVar13 + 0x58)) {
            uVar8 = ~local_f8 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_108 = lVar11;
            local_100 = (longlong)*(int *)(puVar13 + 0x58);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          this = (UScriptStruct *)pFVar3[1]._padding_;
          puVar9 = puVar10;
          if (*(uchar **)(puVar13 + 0x50) != (uchar *)0x0) {
            puVar9 = *(uchar **)(puVar13 + 0x50);
          }
          if (this != (UScriptStruct *)0x0) {
            iVar2 = (int)this->_padding_;
            if ((*(int *)(*(longlong *)(puVar9 + lVar11 * 0x10) + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(puVar9 + lVar11 * 0x10) + 0x30) + (longlong)iVar2 * 8)
                != &this->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              lVar11 = (longlong)(int)local_f8;
              if ((int)local_f8 < *(int *)(puVar13 + 0x58)) {
                uVar12 = ~local_f8 >> 0x1f;
              }
              if (uVar12 == 0) {
                local_108 = lVar11;
                local_100 = (longlong)*(int *)(puVar13 + 0x58);
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (*(uchar **)(puVar13 + 0x50) != (uchar *)0x0) {
                puVar10 = *(uchar **)(puVar13 + 0x50);
              }
              UScriptStruct::CopyScriptStruct(this,puVar4,*(void **)(puVar10 + lVar11 * 0x10 + 8),1)
              ;
            }
          }
        }
      }
      goto LAB_14a89451a;
    }
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_d8,L"ChooserTable",L"GetChooserStructOutput_InvalidValueWarning",
                      L"Failed to resolve the Value for Get Chooser Struct Output");
  local_f0.EventType = AbortExecution;
  local_f0.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar7->TextData).Reference;
  if (local_f0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_f0.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_f0.Description.field0_0x0.TypedValue.TextData.Reference,local_f4);
  }
  local_f0.Description.field0_0x0.TypedValue.Flags = pFVar7->Flags;
  if (local_f0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_f0);
  if (local_f0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_f0.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
LAB_14a89451a:
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execMakeChooserEvaluationContext @ 14a894580

void __cdecl
UChooserFunctionLibrary::execMakeChooserEvaluationContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint7 uStack_8f;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  *(ulonglong *)((longlong)param_3 + 8) = (ulonglong)uStack_8f << 8;
  if ((undefined8 *)((longlong)param_3 + 0x10) != &local_88) {
    *(undefined8 *)((longlong)param_3 + 0x10) = local_88;
    *(undefined8 *)((longlong)param_3 + 0x18) = uStack_80;
    *(undefined8 *)((longlong)param_3 + 0x20) = local_78;
    *(undefined8 *)((longlong)param_3 + 0x28) = uStack_70;
    *(undefined8 *)((longlong)param_3 + 0x30) = local_68;
    *(undefined8 *)((longlong)param_3 + 0x38) = uStack_60;
    *(undefined8 *)((longlong)param_3 + 0x40) = local_58;
    *(undefined8 *)((longlong)param_3 + 0x48) = uStack_50;
    if (*(void **)((longlong)param_3 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_3 + 0x50));
    }
    *(undefined8 *)((longlong)param_3 + 0x50) = 0;
    *(undefined4 *)((longlong)param_3 + 0x58) = 0;
    *(undefined4 *)((longlong)param_3 + 0x5c) = 4;
  }
  if ((undefined8 *)((longlong)param_3 + 0x60) != &local_38) {
    *(undefined8 *)((longlong)param_3 + 0x60) = local_38;
    *(undefined8 *)((longlong)param_3 + 0x68) = uStack_30;
    *(undefined8 *)((longlong)param_3 + 0x70) = local_28;
    *(undefined8 *)((longlong)param_3 + 0x78) = uStack_20;
    *(undefined4 *)((longlong)param_3 + 0x80) = 0;
    *(undefined4 *)((longlong)param_3 + 0x84) = 4;
  }
  return;
}

// execMakeEvaluateChooser @ 14a894660

void __cdecl
UChooserFunctionLibrary::execMakeEvaluateChooser(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UChooserTable>_u_0 TVar2;
  undefined8 uVar3;
  UPackage *pUVar4;
  FEvaluateChooser *pFVar5;
  TObjectPtr<UChooserTable>_u_0 local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  undefined8 uStack_10;
  
  local_res10.DebugPtr = (UChooserTable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  TVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_18.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEvaluateChooser,(UObject *)pUVar4,
                         L"EvaluateChooser");
  }
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&local_18.ObjectPtr,
             Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton,(uchar *)0x0);
  pFVar5 = FInstancedStruct::GetMutable<FEvaluateChooser>((FInstancedStruct *)&local_18.ObjectPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (UChooserTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  (pFVar5->Chooser).field0_0x0.DebugPtr = (UChooserTable *)TVar2;
  if (param_3 != &local_18) {
    FInstancedStruct::Reset(param_3);
    uVar3 = uStack_10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
    }
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)param_3 = local_18;
    local_18.DebugPtr = (UScriptStruct *)0x0;
    uStack_10 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_18.ObjectPtr);
  return;
}

