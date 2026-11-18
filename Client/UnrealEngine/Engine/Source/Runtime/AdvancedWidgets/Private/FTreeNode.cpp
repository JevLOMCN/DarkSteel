// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 14

// ~FTreeNode @ 14d83ab00

void __thiscall UE::PropertyViewer::Private::FTreeNode::~FTreeNode(FTreeNode *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar7;
  
  FVar7 = (this->ChildNodes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    FVar7 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)&this->ChildNodes
    ;
  }
  DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
            ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar7,
             (this->ChildNodes).ArrayNum);
  FVar7 = (this->ChildNodes).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  pTVar5 = (this->PropertyWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = *(longlong **)&(this->OverrideDisplayName).field0_0x0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  pTVar5 = (this->Container).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->ParentNode).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// BuildChildNodes @ 14d842c30

TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_> *
__thiscall
UE::PropertyViewer::Private::FTreeNode::BuildChildNodes
          (FTreeNode *this,
          TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,IFieldIterator *param_1,IFieldExpander *param_2,bool param_3)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  BuildChildNodesRecursive(this,param_1,param_2,param_3,2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// BuildChildNodesRecursive @ 14d842c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PropertyViewer::Private::FTreeNode::BuildChildNodesRecursive
          (FTreeNode *this,IFieldIterator *param_1,IFieldExpander *param_2,bool param_3,int param_4,
          TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
          *param_5)

{
  TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  FWeakObjectPtr *this_00;
  FContainer *pFVar3;
  FWeakObjectPtr FVar4;
  FWeakObjectPtr FVar5;
  FFieldVariant FVar6;
  TReferenceControllerBase<1> *pTVar7;
  FTreeNode *pFVar8;
  ulonglong uVar9;
  code *pcVar10;
  atomic<int> aVar11;
  TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
  *pTVar12;
  FFieldObjectUnion *pFVar13;
  char cVar14;
  bool bVar15;
  atomic<int> aVar16;
  int iVar17;
  UStruct *pUVar18;
  UClass *pUVar19;
  UFunction *pUVar20;
  FProperty *pFVar21;
  FText *pFVar22;
  FString *pFVar23;
  FName *pFVar24;
  FProperty *pFVar25;
  UObject *pUVar26;
  void *pvVar27;
  FFieldClass *pFVar28;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *pTVar29;
  FText *this_01;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar30;
  int iVar31;
  FName FVar32;
  FFieldObjectUnion *this_02;
  FProperty *pFVar33;
  undefined1 auStackY_1d8 [32];
  FIdentityFunctor local_1a7 [7];
  undefined8 local_1a0;
  TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
  *local_198;
  IFieldIterator *local_190;
  FFieldObjectUnion *local_188;
  FText local_180;
  FFieldObjectUnion *local_170 [2];
  undefined1 local_160 [8];
  FProperty *local_158;
  IFieldExpander *local_150;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_148;
  FProperty *local_138;
  char local_130;
  FProperty *local_128;
  char local_120;
  TOptional<FText>_u_0 local_118;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> local_108;
  TOptional<FText>_u_0 local_f8;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> local_e8;
  FName local_d8;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> local_d0;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> local_c0;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> local_b0;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> local_a0;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> local_90;
  FPropertyPath local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_198 = param_5;
  if (param_4 < 1) {
    return;
  }
  pTVar1 = &this->ChildNodes;
  iVar17 = (this->ChildNodes).ArrayNum;
  FVar30 = (this->ChildNodes).AllocatorInstance.SecondaryData;
  piVar2 = &(this->ChildNodes).ArrayMax;
  local_190 = param_1;
  local_150 = param_2;
  if ((this->ChildNodes).ArrayMax < 0) {
    if (FVar30 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
      FVar30 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)pTVar1;
    }
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
              ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar30,iVar17);
    (this->ChildNodes).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
                (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    if (FVar30 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
      FVar30 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)pTVar1;
    }
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
              ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar30,iVar17);
    (this->ChildNodes).ArrayNum = 0;
  }
  pFVar21 = (FProperty *)0x0;
  local_1a0 = 0;
  if ((this->bIsStructProperty == false) && (this->bIsObjectProperty == false)) {
    if (this->FunctionName == (FName)0x0) {
      pFVar25 = (FProperty *)(this->Container).WeakReferenceCount.ReferenceController;
      pFVar33 = pFVar25;
      if (pFVar25 == (FProperty *)0x0) {
LAB_14d842e01:
        FVar32.ComparisonIndex.Value = 0;
        FVar32.Number = 0;
        pFVar25 = pFVar33;
      }
      else {
        aVar11 = *(atomic<int> *)&pFVar25->_padding_;
        do {
          pFVar33 = pFVar21;
          if (aVar11 == (atomic<int>)0x0) goto LAB_14d842e01;
          LOCK();
          aVar16 = *(atomic<int> *)&pFVar25->_padding_;
          bVar15 = aVar11 == aVar16;
          if (bVar15) {
            *(atomic<int> *)&pFVar25->_padding_ = (atomic<int>)((int)aVar11 + 1);
            aVar16 = aVar11;
          }
          UNLOCK();
          aVar11 = aVar16;
        } while (!bVar15);
        pFVar3 = (this->Container).Object;
        pFVar33 = pFVar25;
        if (pFVar3 == (FContainer *)0x0) goto LAB_14d842e01;
        pFVar21 = (FProperty *)FWeakObjectPtr::Get(&(pFVar3->Container).WeakPtr);
        local_180.TextData.Reference = (ITextData *)0x0;
        local_180.Flags = 0;
        if ((pFVar3->DisplayName).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          local_180.TextData.Reference = *(ITextData **)&(pFVar3->DisplayName).field0_0x0;
          (**(code **)((longlong)*local_180.TextData.Reference + 8))
                    (local_180.TextData.Reference,local_160);
          local_180.Flags = (pFVar3->DisplayName).field0_0x0.TypedValue.Flags;
        }
        pFVar22 = FText::GetEmpty();
        this_01 = &local_180;
        if (local_180.TextData.Reference == (ITextData *)0x0) {
          this_01 = pFVar22;
        }
        pFVar23 = FText::ToString(this_01);
        iVar17 = (pFVar23->Data).ArrayNum;
        iVar31 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar31 = 0;
        }
        pFVar24 = ::FName::FName(&local_d8,iVar31,(wchar_t *)(pFVar23->Data).AllocatorInstance.Data,
                                 FNAME_Add);
        FVar32 = *pFVar24;
        if (local_180.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar25);
          local_138 = pFVar21;
          goto LAB_14d843136;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar25);
      local_138 = pFVar21;
    }
    else {
      pUVar18 = (UStruct *)FWeakObjectPtr::Get(&(this->FieldOwner).WeakPtr);
      FVar32 = this->FunctionName;
      if (pUVar18 == (UStruct *)0x0) goto LAB_14d8433a6;
      pUVar19 = CastChecked<UClass_const_,UStruct_const_>(pUVar18);
      pUVar20 = UClass::FindFunctionByName(pUVar19,this->FunctionName,IncludeSuper);
      if ((pUVar20 == (UFunction *)0x0) ||
         ((**(code **)((longlong)*param_2 + 0x10))(param_2,&local_128,pUVar20),
         local_138 = local_128, local_120 == '\0')) goto LAB_14d8433a6;
    }
  }
  else {
    if ((this->PropertyName == (FName)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!PropertyName.IsNone()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                            ,0x149,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar32 = this->PropertyName;
    local_188 = (FFieldObjectUnion *)FWeakObjectPtr::Get(&(this->FieldOwner).WeakPtr);
    pFVar25 = pFVar21;
    if (((local_188 == (FFieldObjectUnion *)0x0) ||
        (pFVar25 = UStruct::FindPropertyByName((UStruct *)local_188,this->PropertyName),
        pFVar25 == (FProperty *)0x0)) || ((*(uint *)(pFVar25->_padding_ + 0x18) >> 0x14 & 1) == 0))
    {
      if ((pFVar25 == (FProperty *)0x0) ||
         ((*(uint *)(*(longlong *)&pFVar25->_padding_ + 0x18) >> 0x1a & 1) == 0))
      goto LAB_14d8433a6;
      GetOwnerContainer(this,&local_148);
      if (local_148.Object != (FContainer *)0x0) {
        if ((local_148.Object == (FContainer *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pUVar26 = FWeakObjectPtr::Get(&((local_148.Object)->ObjectInstance).WeakPtr);
        if ((local_148.Object)->bIsObject == false) {
          pUVar26 = (local_148.Object)->StructInstance;
        }
        if (pUVar26 != (UObject *)0x0) {
          GetPropertyPath(this,&local_80);
          pvVar27 = FPropertyPath::GetContainerPtr(&local_80);
          if (pvVar27 != (void *)0x0) {
            pFVar21 = (FProperty *)(**(code **)(pFVar25->_padding_ + 0x208))(pFVar25,pvVar27,0);
          }
          if (local_80.Properties.AllocatorInstance.SecondaryData !=
              (ForElementType<FProperty_const_*>)0x0) {
            FMemory::Free((void *)local_80.Properties.AllocatorInstance.SecondaryData);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      (**(code **)*param_2)(param_2,&local_138,pFVar25,pFVar21);
      if (local_130 == '\0') goto LAB_14d8433a6;
      if (pFVar21 != (FProperty *)0x0) {
        pTVar29 = TSharedFromThis<UE::PropertyViewer::Private::FTreeNode,1>::AsShared
                            ((TSharedFromThis<UE::PropertyViewer::Private::FTreeNode,1> *)this,
                             &local_d0);
        pTVar12 = local_198;
        iVar17 = local_198->ArrayNum;
        if (iVar17 == local_198->ArrayMax) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_198->AllocatorInstance,&local_198->ArrayMax);
        }
        pTVar12->ArrayNum = iVar17 + 1;
        FVar4 = (FWeakObjectPtr)pTVar29->Object;
        FVar5 = (FWeakObjectPtr)(pTVar29->SharedReferenceCount).ReferenceController;
        this_00 = (FWeakObjectPtr *)((pTVar12->AllocatorInstance).Data + (longlong)iVar17 * 0x18);
        if (FVar5 != (FWeakObjectPtr)0x0) {
          LOCK();
          *(int *)((longlong)FVar5 + 0xc) = *(int *)((longlong)FVar5 + 0xc) + 1;
          UNLOCK();
        }
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)pFVar21);
        }
        this_00->ObjectIndex = 0;
        this_00->ObjectSerialNumber = 0;
        local_158 = pFVar21;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)pFVar21);
        }
        FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_158);
        this_00[1] = FVar4;
        this_00[2] = FVar5;
        if (FVar5 != (FWeakObjectPtr)0x0) {
          LOCK();
          *(int *)((longlong)FVar5 + 0xc) = *(int *)((longlong)FVar5 + 0xc) + 1;
          UNLOCK();
          LOCK();
          piVar2 = (int *)((longlong)FVar5 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*(longlong *)FVar5 + 8))(FVar5,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
        param_2 = local_150;
      }
      if ((local_130 == '\0') &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      cVar14 = (**(code **)((longlong)*param_2 + 8))(param_2,pFVar25);
      if (cVar14 == '\0') goto LAB_14d8433a6;
      local_138 = (FProperty *)pFVar25[1]._padding_;
    }
  }
LAB_14d843136:
  if (local_138 != (FProperty *)0x0) {
    (**(code **)*local_190)(local_190,local_170,local_138,FVar32);
    iVar17 = (int)local_170[1];
    local_188 = local_170[0] + iVar17;
    this_02 = local_170[0];
    while( true ) {
      pFVar13 = local_188;
      if ((int)local_170[1] != iVar17) {
        local_1a7[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FFieldVariant,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1a7);
      }
      if (this_02 == pFVar13) break;
      pFVar28 = FProperty::StaticClass();
      bVar15 = FFieldVariant::IsA((FFieldVariant *)this_02,pFVar28);
      if ((bVar15) &&
         (FVar6.Container = (FFieldObjectUnion)this_02->Field, FVar6.Container != (FField *)0x0)) {
        local_118.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_118.TypedValue.Flags = 0;
        pTVar29 = TSharedFromThis<UE::PropertyViewer::Private::FTreeNode,1>::AsShared
                            ((TSharedFromThis<UE::PropertyViewer::Private::FTreeNode,1> *)this,
                             &local_b0);
        local_108.Object = pTVar29->Object;
        local_108.SharedReferenceCount.ReferenceController =
             (pTVar29->SharedReferenceCount).ReferenceController;
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar29 = MakeField(&local_c0,&local_108,(FProperty *)FVar6.Container,
                            (TOptional<FText> *)&local_118.TypedValue);
        pTVar7 = (pTVar29->SharedReferenceCount).ReferenceController;
        pFVar8 = pTVar29->Object;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.SharedReferenceCount.ReferenceController);
        if ((pFVar8 == (FTreeNode *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        BuildChildNodesRecursive(pFVar8,local_190,param_2,param_3,param_4 + -1,local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      }
      pUVar19 = Z_Construct_UClass_UFunction_NoRegister();
      bVar15 = FFieldVariant::IsA((FFieldVariant *)this_02,pUVar19);
      if ((bVar15) &&
         (uVar9 = this_02->Unknown, (UFunction *)(uVar9 & 0xfffffffffffffffe) != (UFunction *)0x0))
      {
        local_f8.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_f8.TypedValue.Flags = 0;
        pTVar29 = TSharedFromThis<UE::PropertyViewer::Private::FTreeNode,1>::AsShared
                            ((TSharedFromThis<UE::PropertyViewer::Private::FTreeNode,1> *)this,
                             &local_90);
        local_e8.Object = pTVar29->Object;
        local_e8.SharedReferenceCount.ReferenceController =
             (pTVar29->SharedReferenceCount).ReferenceController;
        if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar29 = MakeField(&local_a0,&local_e8,(UFunction *)(uVar9 & 0xfffffffffffffffe),
                            (TOptional<FText> *)&local_f8.TypedValue);
        pTVar7 = (pTVar29->SharedReferenceCount).ReferenceController;
        pFVar8 = pTVar29->Object;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90.SharedReferenceCount.ReferenceController);
        if ((pFVar8 == (FTreeNode *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        BuildChildNodesRecursive(pFVar8,local_190,param_2,param_3,param_4 + -1,local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      }
      this_02 = this_02 + 1;
    }
    if (local_170[0] != (FFieldObjectUnion *)0x0) {
      FMemory::Free(local_170[0]);
    }
    if (param_3) {
      FVar30 = (this->ChildNodes).AllocatorInstance.SecondaryData;
      if (FVar30 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
        FVar30 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
                 &this->ChildNodes;
      }
      AlgoImpl::
      IntroSortInternal<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>_>
                ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar30,
                 (this->ChildNodes).ArrayNum,local_1a7[0],
                 (TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>
                  )0x14d888960);
    }
  }
LAB_14d8433a6:
  this->bChildGenerated = true;
  return;
}

// GetField @ 14d867400

FFieldVariant __thiscall UE::PropertyViewer::Private::FTreeNode::GetField(FTreeNode *this)

{
  code *pcVar1;
  bool bVar2;
  UStruct *this_00;
  FProperty *pFVar3;
  FFieldVariant FVar4;
  UClass *this_01;
  UFunction *pUVar5;
  FFieldObjectUnion in_RDX;
  
  this_00 = (UStruct *)FWeakObjectPtr::Get(&(this->FieldOwner).WeakPtr);
  if (this_00 != (UStruct *)0x0) {
    if (this->PropertyName != (FName)0x0) {
      pFVar3 = UStruct::FindPropertyByName(this_00,this->PropertyName);
      (in_RDX.Field)->_padding_ = (longlong)pFVar3;
      if (((ulonglong)pFVar3 & 1) == 0) {
        return (FFieldVariant)in_RDX.Field;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L"");
      if (!bVar2) {
        return (FFieldVariant)in_RDX.Field;
      }
      pcVar1 = (code *)swi(3);
      FVar4.Container = (FFieldObjectUnion)(*pcVar1)();
      return (FFieldVariant)FVar4.Container;
    }
    if (this->FunctionName != (FName)0x0) {
      this_01 = CastChecked<UClass_const_,UStruct_const_>(this_00);
      pUVar5 = UClass::FindFunctionByName(this_01,this->FunctionName,IncludeSuper);
      (in_RDX.Field)->_padding_ = (ulonglong)pUVar5 | 1;
      if ((UObject *)((ulonglong)pUVar5 & 0xfffffffffffffffe) == (UObject *)0x0) {
        return (FFieldVariant)in_RDX.Field;
      }
      if (GC::GIsIncrementalReachabilityPending == false) {
        return (FFieldVariant)in_RDX.Field;
      }
      GC::MarkAsReachable((UObject *)((ulonglong)pUVar5 & 0xfffffffffffffffe));
      return (FFieldVariant)in_RDX;
    }
  }
  (in_RDX.Field)->_padding_ = 0;
  return (FFieldVariant)in_RDX.Field;
}

// GetFieldPath @ 14d8674e0

TArray<FFieldVariant,TSizedDefaultAllocator<32>_> * __thiscall
UE::PropertyViewer::Private::FTreeNode::GetFieldPath
          (FTreeNode *this,TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  TWeakPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  int iVar7;
  atomic<int> aVar8;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong local_18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this == (FTreeNode *)0x0) {
    return __return_storage_ptr__;
  }
  do {
    GetField(this);
    if ((local_18[0] & 0xfffffffffffffffe) != 0) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      memmove(pFVar2 + 8,pFVar2,(longlong)iVar7 << 3);
      *(ulonglong *)(__return_storage_ptr__->AllocatorInstance).Data = local_18[0];
      if ((((local_18[0] & 1) != 0) &&
          ((UObject *)(local_18[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
         (GC::GIsIncrementalReachabilityPending != false)) {
        GC::MarkAsReachable((UObject *)(local_18[0] & 0xfffffffffffffffe));
      }
    }
    pTVar3 = (this->ParentNode).WeakReferenceCount.ReferenceController;
    pTVar1 = &this->ParentNode;
    this = (FTreeNode *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar3->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return __return_storage_ptr__;
        }
        LOCK();
        aVar8 = pTVar3->SharedReferenceCount;
        bVar6 = aVar5 == aVar8;
        if (bVar6) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar6);
      this = pTVar1->Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  } while (this != (FTreeNode *)0x0);
  return __return_storage_ptr__;
}

// GetFilterStrings @ 14d8679e0

/* WARNING: Removing unreachable block (ram,0x00014d867c2c) */
/* WARNING: Removing unreachable block (ram,0x00014d867b27) */
/* WARNING: Removing unreachable block (ram,0x00014d867e90) */

void __thiscall
UE::PropertyViewer::Private::FTreeNode::GetFilterStrings
          (FTreeNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  FContainer *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  int iVar8;
  atomic<int> aVar9;
  UStruct *this_00;
  FProperty *pFVar10;
  UClass *this_01;
  UFunction *pUVar11;
  FScriptContainerElement *pFVar12;
  UObject *pUVar13;
  FScriptContainerElement *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FText local_40;
  
  this_00 = (UStruct *)FWeakObjectPtr::Get(&(this->FieldOwner).WeakPtr);
  if (this_00 != (UStruct *)0x0) {
    if ((this->PropertyName != (FName)0x0) &&
       (pFVar10 = UStruct::FindPropertyByName(this_00,this->PropertyName),
       pFVar10 != (FProperty *)0x0)) {
      bVar7 = IsThisNotNull(pFVar10,"FField::GetName");
      if (bVar7) {
        ::FName::ToString((FName *)&pFVar10->_padding_,&local_70);
      }
      else {
        ::FString::FString(&local_70,L"None");
      }
      pFVar14 = (param_1->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_70) &&
          ((FScriptContainerElement *)&local_70 < pFVar14 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar8 + 1;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_70.Data.AllocatorInstance.Data;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar14 + 8) = local_70.Data.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_70.Data.ArrayMax;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
    }
    if (this->FunctionName != (FName)0x0) {
      this_01 = CastChecked<UClass_const_,UStruct_const_>(this_00);
      pUVar11 = UClass::FindFunctionByName(this_01,this->FunctionName,IncludeSuper);
      if (pUVar11 != (UFunction *)0x0) {
        local_res20 = (FName)pUVar11->_padding_;
        ::FName::ToString(&local_res20,&local_60);
        pFVar14 = (param_1->AllocatorInstance).Data;
        if (((pFVar14 <= (FScriptContainerElement *)&local_60) &&
            ((FScriptContainerElement *)&local_60 < pFVar14 + (longlong)param_1->ArrayMax * 0x10))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar14 = 0;
        *(FScriptContainerElement **)pFVar14 = local_60.Data.AllocatorInstance.Data;
        local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar14 + 8) = local_60.Data.ArrayNum;
        *(int *)(pFVar14 + 0xc) = local_60.Data.ArrayMax;
        local_60.Data.ArrayNum = 0;
        local_60.Data.ArrayMax = 0;
      }
    }
  }
  pTVar1 = (this->Container).WeakReferenceCount.ReferenceController;
  pTVar15 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar1->SharedReferenceCount;
    do {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (aVar6 == (atomic<int>)0x0) goto LAB_14d867c56;
      LOCK();
      aVar9 = pTVar1->SharedReferenceCount;
      bVar7 = aVar6 == aVar9;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar7);
    pFVar4 = (this->Container).Object;
    pTVar15 = pTVar1;
    if ((pFVar4 != (FContainer *)0x0) &&
       (pUVar13 = FWeakObjectPtr::Get(&(pFVar4->Container).WeakPtr), pUVar13 != (UObject *)0x0)) {
      local_78.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
      local_78.Number = *(uint *)&pUVar13->field_0x1c;
      ::FName::ToString(&local_78,&local_50);
      pFVar14 = (param_1->AllocatorInstance).Data;
      if ((pFVar14 <= (FScriptContainerElement *)&local_50) &&
         (((FScriptContainerElement *)&local_50 < pFVar14 + (longlong)param_1->ArrayMax * 0x10 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar8 + 1;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_50.Data.AllocatorInstance.Data;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar14 + 8) = local_50.Data.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_50.Data.ArrayMax;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
    }
  }
LAB_14d867c56:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  plVar2 = *(longlong **)&(this->OverrideDisplayName).field0_0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res8);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    pIVar3 = *(ITextData **)&(this->OverrideDisplayName).field0_0x0;
    local_40.TextData.Reference = (ITextData *)0x0;
    local_40.Flags = 0;
    if (pIVar3 != (ITextData *)0x0) {
      local_40.TextData.Reference = pIVar3;
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
      local_40.Flags = (this->OverrideDisplayName).field0_0x0.TypedValue.Flags;
    }
    if ((local_40.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar12 = (FScriptContainerElement *)FText::ToString(&local_40);
    pFVar14 = (param_1->AllocatorInstance).Data;
    if (((pFVar14 <= pFVar12) && (pFVar12 < pFVar14 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == param_1->ArrayMax) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar8 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                       (FString *)pFVar12);
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
  }
  return;
}

// GetOverrideDisplayName @ 14d86a900

TOptional<FText> * __thiscall
UE::PropertyViewer::Private::FTreeNode::GetOverrideDisplayName
          (FTreeNode *this,TOptional<FText> *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  if ((this->OverrideDisplayName).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    pIVar1 = *(ITextData **)&(this->OverrideDisplayName).field0_0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags =
         (this->OverrideDisplayName).field0_0x0.TypedValue.Flags;
  }
  return __return_storage_ptr__;
}

// GetOwnerContainer @ 14d86a960

TSharedPtr<UE::PropertyViewer::Private::FContainer,1> * __thiscall
UE::PropertyViewer::Private::FTreeNode::GetOwnerContainer
          (FTreeNode *this,
          TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *__return_storage_ptr__)

{
  FContainer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  
  if (this != (FTreeNode *)0x0) {
LAB_14d86a980:
    pTVar4 = (this->Container).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar4->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d86a9a3;
        }
        LOCK();
        aVar2 = pTVar4->SharedReferenceCount;
        bVar5 = aVar3 == aVar2;
        if (bVar5) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar2 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar2;
      } while (!bVar5);
      pFVar1 = (this->Container).Object;
      if (pFVar1 != (FContainer *)0x0) {
        __return_storage_ptr__->Object = pFVar1;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14d86a9f1;
      }
    }
LAB_14d86a9a3:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (this->ParentNode).WeakReferenceCount.ReferenceController;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d86a9d0;
    aVar3 = pTVar4->SharedReferenceCount;
    if (aVar3 != (atomic<int>)0x0) {
      while( true ) {
        LOCK();
        aVar2 = pTVar4->SharedReferenceCount;
        bVar5 = aVar3 == aVar2;
        if (bVar5) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar2 = aVar3;
        }
        aVar3 = aVar2;
        UNLOCK();
        if (bVar5) break;
        if (aVar3 == (atomic<int>)0x0) goto LAB_14d86a9ce;
      }
      this = (this->ParentNode).Object;
      if (this == (FTreeNode *)0x0) goto LAB_14d86a9d0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      goto LAB_14d86a980;
    }
LAB_14d86a9ce:
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
LAB_14d86a9d0:
    `UE::PropertyViewer::Private::FTreeNode::GetOwnerContainer'::__l12::<lambda_1>::operator()
              (local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  __return_storage_ptr__->Object = (FContainer *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14d86a9f1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetPropertyPath @ 14d86b680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPropertyPath * __thiscall
UE::PropertyViewer::Private::FTreeNode::GetPropertyPath
          (FTreeNode *this,FPropertyPath *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  FContainer *pFVar4;
  ForElementType<FProperty_const_*> FVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  UStruct *pUVar10;
  ForElementType<FProperty_const_*> FVar11;
  FPropertyPath *pFVar12;
  UObject *pUVar13;
  UFunction *pUVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  UClass *pUVar17;
  FString *pFVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  TArray<FProperty_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar22;
  uchar auVar23 [8];
  undefined1 auStack_138 [32];
  FProperty **local_118;
  ForElementType<FProperty_const_*> local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  FFieldObjectUnion local_e8;
  FProperty *local_e0;
  void *local_d8;
  undefined8 local_d0;
  UStruct *local_c8;
  TArray<FProperty_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_c0;
  TArray<FProperty_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_a8;
  FString local_90;
  FString local_80;
  uchar local_70 [8];
  ForElementType<FProperty_const_*> local_58;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar16 = (UClass *)0x0;
  local_44 = 1;
  local_58.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  local_48 = 0;
  if (this != (FTreeNode *)0x0) {
    do {
      pUVar10 = (UStruct *)FWeakObjectPtr::Get(&(this->FieldOwner).WeakPtr);
      if ((pUVar10 != (UStruct *)0x0) && (this->PropertyName != (FName)0x0)) {
        local_e0 = UStruct::FindPropertyByName(pUVar10,this->PropertyName);
        if (local_e0 == (FProperty *)0x0) {
          (__return_storage_ptr__->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
          (__return_storage_ptr__->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
          __return_storage_ptr__->TopLevelContainer_ScriptStructData = (void *)0x0;
          (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[0] = '\0';
          (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[1] = '\0';
          (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[2] = '\0';
          (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[3] = '\0';
          (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[4] = '\0';
          (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[5] = '\0';
          (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[6] = '\0';
          (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[7] = '\0';
          (__return_storage_ptr__->Properties).AllocatorInstance.SecondaryData =
               (ForElementType<FProperty_const_*>)0x0;
          (__return_storage_ptr__->Properties).ArrayNum = 0;
          (__return_storage_ptr__->Properties).ArrayMax = 0;
          goto LAB_14d86bb9e;
        }
        FVar11 = (ForElementType<FProperty_const_*>)&local_58;
        if (local_58.SecondaryData != (ForElementType<FProperty_const_*>)0x0) {
          FVar11 = local_58.SecondaryData;
        }
        if ((ulonglong)FVar11 <= &local_e0) {
          FVar11 = (ForElementType<FProperty_const_*>)&local_58;
          if (local_58.SecondaryData != (ForElementType<FProperty_const_*>)0x0) {
            FVar11 = local_58.SecondaryData;
          }
          if (&local_e0 < (FProperty **)((longlong)FVar11 + (longlong)local_44 * 8)) {
            local_100 = (longlong)local_48;
            local_f8 = 8;
            local_118 = &local_e0;
            local_110 = (ForElementType<FProperty_const_*>)&local_58;
            if (local_58.SecondaryData != (ForElementType<FProperty_const_*>)0x0) {
              local_110 = local_58.SecondaryData;
            }
            local_108 = (longlong)local_44;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              pFVar12 = (FPropertyPath *)(*pcVar6)();
              return pFVar12;
            }
          }
        }
        if (local_48 == local_44) {
          local_48 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
                               (0x808,&local_58,&local_44);
        }
        FVar11 = (ForElementType<FProperty_const_*>)&local_58;
        if (local_58.SecondaryData != (ForElementType<FProperty_const_*>)0x0) {
          FVar11 = local_58.SecondaryData;
        }
        lVar21 = (longlong)local_48;
        local_48 = local_48 + 1;
        memmove((undefined8 *)((longlong)FVar11 + 8),(void *)FVar11,lVar21 << 3);
        FVar11 = (ForElementType<FProperty_const_*>)&local_58;
        if (local_58.SecondaryData != (ForElementType<FProperty_const_*>)0x0) {
          FVar11 = local_58.SecondaryData;
        }
        *(FProperty **)FVar11 = local_e0;
      }
      pUVar3 = (UClass *)(this->Container).WeakReferenceCount.ReferenceController;
      pUVar17 = pUVar3;
      if (pUVar3 != (UClass *)0x0) {
        aVar7 = *(atomic<int> *)&pUVar3->_padding_;
        do {
          pUVar17 = pUVar16;
          if (aVar7 == (atomic<int>)0x0) goto LAB_14d86b812;
          LOCK();
          aVar9 = *(atomic<int> *)&pUVar3->_padding_;
          bVar8 = aVar7 == aVar9;
          if (bVar8) {
            *(atomic<int> *)&pUVar3->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar8);
        pFVar4 = (this->Container).Object;
        pUVar17 = pUVar3;
        if (pFVar4 != (FContainer *)0x0) {
          if (pFVar4->bIsObject == false) {
            if (pFVar4->StructInstance != (void *)0x0) {
              pUVar10 = (UStruct *)FWeakObjectPtr::Get(&(pFVar4->Container).WeakPtr);
              iVar2 = local_48;
              FVar11 = local_58.SecondaryData;
              if (pUVar10 == (UStruct *)0x0) goto LAB_14d86bb6d;
              bVar8 = local_58.SecondaryData == (ForElementType<FProperty_const_*>)0x0;
              local_58.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
              auVar23 = local_70;
              if (bVar8) {
                auVar23 = local_58.InlineData;
              }
              local_48 = 0;
              local_e8.Unknown._0_4_ = local_44;
              local_44 = 1;
              local_d8 = pFVar4->StructInstance;
              pUVar16 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar1 = (int)pUVar16->_padding_;
              if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
                  != &pUVar16->_padding_)) {
                pFVar18 = GetTypeName<UScriptStruct_const_>(&local_90);
                pwVar19 = L"";
                if ((pFVar18->Data).ArrayNum == 0) {
                  pwVar20 = L"";
                }
                else {
                  pwVar20 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
                }
                pFVar18 = GetFullNameForCastLogError<UStruct_const_>(&local_80,pUVar10);
                if ((pFVar18->Data).ArrayNum != 0) {
                  pwVar19 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
                }
                    /* WARNING: Subroutine does not return */
                CastLogError(pwVar19,pwVar20);
              }
              (__return_storage_ptr__->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
              local_d0 = 0;
              FWeakObjectPtr::operator=
                        ((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_d0);
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar10);
              }
              (__return_storage_ptr__->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0
              ;
              local_c8 = pUVar10;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar10);
              }
              FWeakObjectPtr::operator=
                        (&(__return_storage_ptr__->TopLevelContainer_ScriptStruct).WeakPtr,
                         (FObjectPtr)&local_c8);
              __return_storage_ptr__->TopLevelContainer_ScriptStructData = local_d8;
              (__return_storage_ptr__->Properties).AllocatorInstance.SecondaryData =
                   (ForElementType<FProperty_const_*>)0x0;
              if (FVar11 == (ForElementType<FProperty_const_*>)0x0) {
                *&(__return_storage_ptr__->Properties).AllocatorInstance.InlineData = auVar23;
              }
              FVar5 = (__return_storage_ptr__->Properties).AllocatorInstance.SecondaryData;
              if (FVar5 != (ForElementType<FProperty_const_*>)0x0) {
                FMemory::Free((void *)FVar5);
              }
              (__return_storage_ptr__->Properties).AllocatorInstance.SecondaryData = FVar11;
              (__return_storage_ptr__->Properties).ArrayNum = iVar2;
              (__return_storage_ptr__->Properties).ArrayMax = local_e8.Unknown._0_4_;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pUVar3);
              goto LAB_14d86bba6;
            }
            pUVar17 = (UClass *)FWeakObjectPtr::Get(&(pFVar4->Container).WeakPtr);
            if (pUVar17 == (UClass *)0x0) {
LAB_14d86bb11:
              pUVar17 = pUVar16;
            }
            else {
              pUVar15 = Z_Construct_UClass_UClass_NoRegister();
              iVar2 = (int)pUVar15->_padding_;
              if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
                  != &pUVar15->_padding_)) goto LAB_14d86bb11;
            }
            iVar2 = local_44;
            FVar11 = local_58.SecondaryData;
            if (pUVar17 == (UClass *)0x0) goto LAB_14d86bb6d;
            local_58.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
            local_a8.ArrayNum = local_48;
            local_44 = 1;
            local_48 = 0;
            local_a8.AllocatorInstance.SecondaryData = FVar11;
            local_a8.ArrayMax = iVar2;
            if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(pUVar17);
            }
            pUVar13 = (pUVar17->ClassDefaultObject).field0_0x0.DebugPtr;
            pTVar22 = &local_a8;
          }
          else {
            pUVar13 = FWeakObjectPtr::Get(&(pFVar4->ObjectInstance).WeakPtr);
            if (pUVar13 == (UObject *)0x0) {
LAB_14d86bb6d:
              (__return_storage_ptr__->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
              (__return_storage_ptr__->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0
              ;
              __return_storage_ptr__->TopLevelContainer_ScriptStructData = (void *)0x0;
              (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[0] = '\0';
              (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[1] = '\0';
              (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[2] = '\0';
              (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[3] = '\0';
              (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[4] = '\0';
              (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[5] = '\0';
              (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[6] = '\0';
              (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[7] = '\0';
              (__return_storage_ptr__->Properties).AllocatorInstance.SecondaryData =
                   (ForElementType<FProperty_const_*>)0x0;
              (__return_storage_ptr__->Properties).ArrayNum = 0;
              (__return_storage_ptr__->Properties).ArrayMax = 0;
              FPropertyPath::FPropertyPath(__return_storage_ptr__);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pUVar3);
              goto LAB_14d86bba6;
            }
            pTVar22 = &local_c0;
            local_c0.AllocatorInstance.SecondaryData = local_58.SecondaryData;
            local_c0.ArrayNum = local_48;
            local_c0.ArrayMax = local_44;
            local_44 = 1;
            local_58.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
            local_48 = 0;
          }
          FPropertyPath::FPropertyPath(__return_storage_ptr__,pUVar13,pTVar22);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pUVar3);
          goto LAB_14d86bba6;
        }
      }
LAB_14d86b812:
      pUVar3 = (UClass *)(this->ParentNode).WeakReferenceCount.ReferenceController;
      pUVar15 = pUVar3;
      if (pUVar3 == (UClass *)0x0) goto LAB_14d86b837;
      aVar7 = *(atomic<int> *)&pUVar3->_padding_;
      do {
        pUVar15 = pUVar16;
        if (aVar7 == (atomic<int>)0x0) goto LAB_14d86b837;
        LOCK();
        aVar9 = *(atomic<int> *)&pUVar3->_padding_;
        bVar8 = aVar7 == aVar9;
        if (bVar8) {
          *(atomic<int> *)&pUVar3->_padding_ = (atomic<int>)((int)aVar7 + 1);
          aVar9 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar9;
      } while (!bVar8);
      this = (this->ParentNode).Object;
      pUVar15 = pUVar3;
      if (this == (FTreeNode *)0x0) goto LAB_14d86b837;
      pUVar10 = (UStruct *)FWeakObjectPtr::Get(&(this->FieldOwner).WeakPtr);
      if (pUVar10 == (UStruct *)0x0) {
LAB_14d86b97c:
        local_e8.Field = (FField *)0x0;
      }
      else if (this->PropertyName == (FName)0x0) {
        if (this->FunctionName == (FName)0x0) goto LAB_14d86b97c;
        pUVar15 = CastChecked<UClass_const_,UStruct_const_>(pUVar10);
        pUVar14 = UClass::FindFunctionByName(pUVar15,this->FunctionName,IncludeSuper);
        local_e8.Unknown = (ulonglong)pUVar14 | 1;
        if (((UObject *)((ulonglong)pUVar14 & 0xfffffffffffffffe) != (UObject *)0x0) &&
           (GC::GIsIncrementalReachabilityPending != false)) {
          GC::MarkAsReachable((UObject *)((ulonglong)pUVar14 & 0xfffffffffffffffe));
        }
      }
      else {
        local_e8.Field = (FField *)UStruct::FindPropertyByName(pUVar10,this->PropertyName);
        if (((local_e8.Unknown & 1) != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsUObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x180,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPropertyPath *)(*pcVar6)();
          return pFVar12;
        }
      }
      pUVar15 = Z_Construct_UClass_UFunction_NoRegister();
      bVar8 = FFieldVariant::IsA((FFieldVariant *)&local_e8,pUVar15);
      if ((bVar8) && (pUVar15 = pUVar3, (local_e8.Unknown & 0xfffffffffffffffe) != 0))
      goto LAB_14d86b837;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar17);
    } while( true );
  }
  (__return_storage_ptr__->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->TopLevelContainer_ScriptStructData = (void *)0x0;
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[0] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[1] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[2] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[3] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[4] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[5] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[6] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[7] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.SecondaryData =
       (ForElementType<FProperty_const_*>)0x0;
  (__return_storage_ptr__->Properties).ArrayNum = 0;
  (__return_storage_ptr__->Properties).ArrayMax = 0;
LAB_14d86bb9e:
  FPropertyPath::FPropertyPath(__return_storage_ptr__);
LAB_14d86bba6:
  if (local_58.SecondaryData != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  return __return_storage_ptr__;
LAB_14d86b837:
  (__return_storage_ptr__->TopLevelContainer_Object).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->TopLevelContainer_ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->TopLevelContainer_ScriptStructData = (void *)0x0;
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[0] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[1] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[2] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[3] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[4] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[5] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[6] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.InlineData[7] = '\0';
  (__return_storage_ptr__->Properties).AllocatorInstance.SecondaryData =
       (ForElementType<FProperty_const_*>)0x0;
  (__return_storage_ptr__->Properties).ArrayNum = 0;
  (__return_storage_ptr__->Properties).ArrayMax = 0;
  FPropertyPath::FPropertyPath(__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar17);
  goto LAB_14d86bba6;
}

// MakeContainer @ 14d872930

TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> * __cdecl
UE::PropertyViewer::Private::FTreeNode::MakeContainer
          (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *__return_storage_ptr__,
          TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *param_1,TOptional<FText> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTreeNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  MakeShared<UE::PropertyViewer::Private::FTreeNode,1>(__return_storage_ptr__);
  pFVar3 = __return_storage_ptr__->Object;
  (pFVar3->Container).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (pFVar3->Container).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (pFVar3->Container).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (pFVar3->Container).WeakReferenceCount.ReferenceController = pTVar4;
  }
  TOptional<FText>::operator=(&__return_storage_ptr__->Object->OverrideDisplayName,param_2);
  if (*(longlong **)&param_2->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_2->field0_0x0 + 0x10))();
  }
  return __return_storage_ptr__;
}

// MakeField @ 14d872a00

TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> * __cdecl
UE::PropertyViewer::Private::FTreeNode::MakeField
          (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *__return_storage_ptr__,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,FProperty *param_2,
          TOptional<FText> *param_3)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  FTreeNode *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *pTVar11;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar12;
  FName FVar13;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar14;
  UStruct *local_res8;
  FTreeNode *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if ((param_2 == (FProperty *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                         ,0x78,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar8)();
    return pTVar11;
  }
  MakeShared<UE::PropertyViewer::Private::FTreeNode,1>(__return_storage_ptr__);
  local_res8 = FField::GetOwnerStruct((FField *)param_2);
  pFVar4 = __return_storage_ptr__->Object;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(pFVar4->FieldOwner).WeakPtr,(FObjectPtr)&local_res8);
  bVar9 = IsThisNotNull(param_2,"FField::GetFName");
  if (bVar9) {
    FVar13 = (FName)param_2->_padding_;
  }
  else {
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  __return_storage_ptr__->Object->PropertyName = FVar13;
  if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    __return_storage_ptr__->Object->bIsStructProperty = false;
    if (param_2 != (FProperty *)0x0) goto LAB_14d872ad9;
  }
  else {
    __return_storage_ptr__->Object->bIsStructProperty = true;
LAB_14d872ad9:
    if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x1a & 1) != 0) goto LAB_14d872ae8;
  }
  param_2 = (FProperty *)0x0;
LAB_14d872ae8:
  __return_storage_ptr__->Object->bIsObjectProperty = param_2 != (FProperty *)0x0;
  TOptional<FText>::operator=(&__return_storage_ptr__->Object->OverrideDisplayName,param_3);
  pFVar4 = __return_storage_ptr__->Object;
  (pFVar4->ParentNode).Object = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (pFVar4->ParentNode).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pFVar4->ParentNode).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (pFVar4->ParentNode).WeakReferenceCount.ReferenceController = pTVar5;
  }
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar8)();
    return pTVar11;
  }
  local_28 = __return_storage_ptr__->Object;
  pFVar4 = param_1->Object;
  FVar14 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
           &pFVar4->ChildNodes;
  local_20 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar7 = (pFVar4->ChildNodes).AllocatorInstance.SecondaryData;
  FVar12 = FVar14;
  if (FVar7 != (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    FVar12 = FVar7;
  }
  if ((ulonglong)FVar12 <= &local_28) {
    FVar12 = FVar14;
    if (FVar7 != (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
      FVar12 = FVar7;
    }
    if ((&local_28 <
         (FTreeNode **)((longlong)FVar12 + (longlong)(pFVar4->ChildNodes).ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar8)();
      return pTVar11;
    }
  }
  iVar10 = (pFVar4->ChildNodes).ArrayNum;
  piVar2 = &(pFVar4->ChildNodes).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
                       (0x810,(ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                               *)FVar14,piVar2);
  }
  (pFVar4->ChildNodes).ArrayNum = iVar10 + 1;
  FVar7 = (pFVar4->ChildNodes).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    FVar14 = FVar7;
  }
  *(FTreeNode **)((longlong)FVar14 + (longlong)iVar10 * 0x10) = local_28;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar14 + 8) + (longlong)iVar10 * 0x10) =
       local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FTreeNode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  if (*(longlong **)&param_3->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_3->field0_0x0 + 0x10))();
  }
  return __return_storage_ptr__;
}

// MakeField @ 14d872cc0

TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> * __cdecl
UE::PropertyViewer::Private::FTreeNode::MakeField
          (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *__return_storage_ptr__,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,UFunction *param_2,
          TOptional<FText> *param_3)

{
  atomic<int> *paVar1;
  TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int *piVar3;
  atomic<int> aVar4;
  FTreeNode *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *pTVar12;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar13;
  undefined8 *puVar14;
  UClass *local_res8;
  FTreeNode *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if (param_2 == (UFunction *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Function",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                        ,0x87,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar8)();
      return pTVar12;
    }
  }
  MakeShared<UE::PropertyViewer::Private::FTreeNode,1>(__return_storage_ptr__);
  local_res8 = UField::GetOwnerClass((UField *)param_2);
  pFVar5 = __return_storage_ptr__->Object;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(pFVar5->FieldOwner).WeakPtr,(FObjectPtr)&local_res8);
  pFVar5 = __return_storage_ptr__->Object;
  uVar9 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  (pFVar5->FunctionName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_2->_padding_;
  (pFVar5->FunctionName).Number = uVar9;
  TOptional<FText>::operator=(&__return_storage_ptr__->Object->OverrideDisplayName,param_3);
  pFVar5 = __return_storage_ptr__->Object;
  (pFVar5->ParentNode).Object = param_1->Object;
  pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (pFVar5->ParentNode).WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (pFVar5->ParentNode).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    (pFVar5->ParentNode).WeakReferenceCount.ReferenceController = pTVar6;
  }
  if (param_1->Object == (FTreeNode *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar8)();
      return pTVar12;
    }
  }
  local_28 = __return_storage_ptr__->Object;
  pFVar5 = param_1->Object;
  local_20 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pTVar2 = &pFVar5->ChildNodes;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar13 = (pFVar5->ChildNodes).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    FVar13 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)pTVar2;
  }
  if (((ulonglong)FVar13 <= &local_28) &&
     (&local_28 < (FTreeNode **)((longlong)FVar13 + (longlong)(pFVar5->ChildNodes).ArrayMax * 0x10))
     ) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar8)();
      return pTVar12;
    }
  }
  iVar11 = (pFVar5->ChildNodes).ArrayNum;
  piVar3 = &(pFVar5->ChildNodes).ArrayMax;
  if (iVar11 == *piVar3) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
                       (0x810,&pTVar2->AllocatorInstance,piVar3);
  }
  (pFVar5->ChildNodes).ArrayNum = iVar11 + 1;
  FVar13 = (pFVar5->ChildNodes).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    FVar13 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)pTVar2;
  }
  puVar14 = (undefined8 *)((longlong)FVar13 + (longlong)iVar11 * 0x10);
  *puVar14 = local_28;
  puVar14[1] = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FTreeNode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  if (*(longlong **)&param_3->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_3->field0_0x0 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Sort @ 14d888960

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::PropertyViewer::Private::FTreeNode::Sort
          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_2)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  FName FVar4;
  FTreeNode *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  atomic<int> aVar14;
  int iVar15;
  UObject *pUVar16;
  FFieldVariant FVar17;
  FContainer *pFVar18;
  FContainer *pFVar19;
  FContainer *pFVar20;
  FContainer *pFVar21;
  uint local_res8;
  undefined4 uStackX_c;
  FName local_res18;
  FName local_res20;
  
  pFVar21 = (FContainer *)0x0;
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if ((((param_1->Object->Container).Object == (FContainer *)0x0) ||
      (pTVar2 = (param_1->Object->Container).WeakReferenceCount.ReferenceController,
      pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((param_2->Object == (FTreeNode *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if ((((param_2->Object->Container).Object == (FContainer *)0x0) ||
      (pTVar2 = (param_2->Object->Container).WeakReferenceCount.ReferenceController,
      pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  bVar11 = param_1->Object->bIsObjectProperty;
  if ((param_2->Object == (FTreeNode *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  bVar12 = param_2->Object->bIsObjectProperty;
  local_res8 = (uint)bVar12;
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  FVar3 = param_1->Object->FunctionName;
  if ((param_2->Object == (FTreeNode *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  FVar4 = param_2->Object->FunctionName;
  if (bVar8) {
    if ((param_1->Object == (FTreeNode *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pFVar5 = param_1->Object;
    pFVar20 = (FContainer *)(pFVar5->Container).WeakReferenceCount.ReferenceController;
    pFVar18 = pFVar20;
    pFVar19 = pFVar21;
    if (pFVar20 == (FContainer *)0x0) {
LAB_14d888b51:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pFVar20 = pFVar18;
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    else {
      aVar7 = *(atomic<int> *)&(pFVar20->Container).WeakPtr.ObjectSerialNumber;
      do {
        pFVar18 = pFVar21;
        if (aVar7 == (atomic<int>)0x0) goto LAB_14d888b51;
        paVar1 = (atomic<int> *)&(pFVar20->Container).WeakPtr.ObjectSerialNumber;
        LOCK();
        aVar14 = *paVar1;
        bVar8 = aVar7 == aVar14;
        if (bVar8) {
          *paVar1 = (atomic<int>)((int)aVar7 + 1);
          aVar14 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar14;
      } while (!bVar8);
      pFVar19 = (pFVar5->Container).Object;
      pFVar18 = pFVar20;
      if (pFVar19 == (FContainer *)0x0) goto LAB_14d888b51;
    }
    pUVar16 = FWeakObjectPtr::Get(&(pFVar19->Container).WeakPtr);
    local_res20 = (FName)&pUVar16->field_0x18;
    pFVar19 = (FContainer *)&DAT_00000001;
  }
  else {
    if ((param_1->Object == (FTreeNode *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    FVar17 = GetField(param_1->Object);
    local_res20 = FFieldVariant::GetFName((FFieldVariant *)FVar17.Container);
    pFVar20 = (FContainer *)CONCAT44(uStackX_c,local_res8);
    pFVar19 = pFVar21;
  }
  local_res20 = *(FName *)local_res20;
  if (pFVar19 != (FContainer *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar20);
  }
  bVar8 = false;
  if (bVar10) {
    if ((param_2->Object == (FTreeNode *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pFVar5 = param_2->Object;
    bVar8 = true;
    pFVar20 = (FContainer *)(pFVar5->Container).WeakReferenceCount.ReferenceController;
    pFVar19 = pFVar20;
    if (pFVar20 == (FContainer *)0x0) {
LAB_14d888c61:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pFVar20 = pFVar19;
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    else {
      aVar7 = *(atomic<int> *)&(pFVar20->Container).WeakPtr.ObjectSerialNumber;
      do {
        pFVar19 = pFVar21;
        if (aVar7 == (atomic<int>)0x0) goto LAB_14d888c61;
        paVar1 = (atomic<int> *)&(pFVar20->Container).WeakPtr.ObjectSerialNumber;
        LOCK();
        aVar14 = *paVar1;
        bVar10 = aVar7 == aVar14;
        if (bVar10) {
          *paVar1 = (atomic<int>)((int)aVar7 + 1);
          aVar14 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar14;
      } while (!bVar10);
      pFVar21 = (pFVar5->Container).Object;
      pFVar19 = pFVar20;
      if (pFVar21 == (FContainer *)0x0) goto LAB_14d888c61;
    }
    pUVar16 = FWeakObjectPtr::Get(&(pFVar21->Container).WeakPtr);
    local_res18 = (FName)&pUVar16->field_0x18;
  }
  else {
    if ((param_2->Object == (FTreeNode *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    FVar17 = GetField(param_2->Object);
    local_res18 = FFieldVariant::GetFName((FFieldVariant *)FVar17.Container);
    pFVar20 = (FContainer *)CONCAT44(uStackX_c,local_res8);
  }
  local_res18 = *(FName *)local_res18;
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar20);
  }
  if (((FVar3 != (FName)0x0) && (FVar4 != (FName)0x0)) || ((bVar11 != false && (bVar12 != false))))
  {
LAB_14d888d11:
    iVar15 = ::FName::Compare(&local_res20,&local_res18);
    return SUB41((uint)iVar15 >> 0x1f,0);
  }
  if (FVar3 == (FName)0x0) {
    if (FVar4 == (FName)0x0) {
      if (bVar11 != false) goto LAB_14d888d59;
      if (bVar12 == false) goto LAB_14d888d11;
    }
    bVar8 = false;
  }
  else {
LAB_14d888d59:
    bVar8 = true;
  }
  return bVar8;
}

// operator() @ 150587700

bool __thiscall
`UE::PropertyViewer::Private::FTreeNode::GetOwnerContainer'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4905965031381795072>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4905965031381795072>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

