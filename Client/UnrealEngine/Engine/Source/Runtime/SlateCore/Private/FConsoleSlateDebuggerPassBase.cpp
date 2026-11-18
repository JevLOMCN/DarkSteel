// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 19

// FConsoleSlateDebuggerPassBase @ 14242af70

FConsoleSlateDebuggerPassBase * __thiscall
FConsoleSlateDebuggerPassBase::FConsoleSlateDebuggerPassBase(FConsoleSlateDebuggerPassBase *this)

{
  uint uVar1;
  
  this->bEnabled = false;
  this->bDisplayWidgetsNameList = false;
  this->bUseWidgetPathAsName = false;
  this->bDrawBox = false;
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerPassBase__6B_;
  this->bDrawBorder = true;
  this->bLogWidgetName = false;
  this->bLogWidgetNameOnce = false;
  this->bDebugGameWindowOnly = true;
  *(undefined8 *)&(this->MostRecentColor).field0_0x0 = 0x3f400000;
  (this->MostRecentColor).field0_0x0._s_0.B = 0.0;
  *(undefined8 *)((longlong)&(this->MostRecentColor).field0_0x0 + 0xc) = 0x3ca3d70a;
  *(undefined8 *)((longlong)&(this->LeastRecentColor).field0_0x0 + 4) = 0x3f400000;
  (this->LeastRecentColor).field0_0x0._s_0.A = 0.5;
  (this->DrawWidgetNameColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::SpicyPink.field0_0x0._s_0.R];
  (this->DrawWidgetNameColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::SpicyPink.field0_0x0._s_0.G];
  (this->DrawWidgetNameColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::SpicyPink.field0_0x0._s_0.B];
  uVar1 = (uint)FColorList::SpicyPink.field0_0x0._s_0.A;
  this->MaxNumberOfWidgetInList = 0x14;
  this->FadeDuration = 2.0;
  (this->DrawWidgetNameColor).field0_0x0._s_0.A = (float)uVar1 * __real_3b808081;
  ::FName::FName(&this->PIEWindowTag,"PIEWindow");
  *(undefined8 *)&this->Widgets = 0;
  *(undefined8 *)&(this->Widgets).field_0x8 = 0;
  *(undefined8 *)&(this->Widgets).field_0x20 = 0;
  (this->WidgetLogLocation).field0_0x0._s_0.X = 10.0;
  (this->WidgetLogLocation).field0_0x0._s_0.Y = 10.0;
  *(undefined4 *)&(this->Widgets).field_0x28 = 0;
  *(undefined4 *)&(this->Widgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->Widgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Widgets).field_0x34 = 0;
  *(undefined8 *)&(this->Widgets).field_0x40 = 0;
  *(undefined4 *)&(this->Widgets).field_0x48 = 0;
  return this;
}

// ~FConsoleSlateDebuggerPassBase @ 14242ea60

void __thiscall
FConsoleSlateDebuggerPassBase::~FConsoleSlateDebuggerPassBase(FConsoleSlateDebuggerPassBase *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Widgets).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerPassBase__6B_;
  pvVar1 = *(void **)&(this->Widgets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Widgets);
  return;
}

// operator() @ 14242fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FConsoleSlateDebuggerPassBase::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,TVector2<float> *param_2,FLinearColor *param_3)

{
  float fVar1;
  byte bVar2;
  FSlateFontInfo *pFVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStackY_108 [32];
  float local_c8;
  float fStack_c4;
  TTransform2<float> local_b0;
  TTransform2<float> local_98;
  TVector2<float>_u_0 local_80;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  float local_64 [2];
  float afStack_5c [2];
  TVector2<float>_u_0 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar3 = *(FSlateFontInfo **)((longlong)this + 0x18);
  local_b0.Trans.field0_0x0 =
       (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(param_2->field0_0x0)._s_0;
  lVar4 = *(longlong *)((longlong)this + 0x10);
  fVar1 = *(float *)(lVar4 + 8);
  local_c8 = local_b0.Trans.field0_0x0._0_4_;
  bVar2 = *(byte *)(lVar4 + 0x34);
  fStack_c4 = local_b0.Trans.field0_0x0._4_4_;
  local_b0.M.M[0][1] = (float)*(undefined8 *)(lVar4 + 0xc);
  local_b0.M.M[1][0] = (float)((ulonglong)*(undefined8 *)(lVar4 + 0xc) >> 0x20);
  fVar5 = fVar1 * local_c8 + local_b0.M.M[0][1];
  fVar6 = fVar1 * fStack_c4 + local_b0.M.M[1][0];
  local_b0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_b0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_b0.M.M[1][0] = (float)_UNK_15076b188;
  local_b0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_98,&local_b0,(TTransform2<float> *)(lVar4 + 0x1c));
  local_80._s_0.Y = fVar6;
  local_80._s_0.X = fVar5;
  local_6c = 0x3f8000003f800000;
  local_4c = (bVar2 & 1) * '\x02' | local_4c & 0xfc;
  local_74 = 0;
  local_64[0] = local_98.M.M[0][0];
  local_64[1] = local_98.M.M[0][1];
  afStack_5c[0] = local_98.M.M[1][0];
  afStack_5c[1] = local_98.M.M[1][1];
  local_54 = local_98.Trans.field0_0x0;
  local_78 = fVar1;
  FSlateDrawElement::MakeText
            (*(FSlateWindowElementList **)this,**(uint **)((longlong)this + 8),
             (FPaintGeometry *)&local_80._s_0,param_1,pFVar3,None,param_3);
  return;
}

// AddInitialVisibleWidget @ 142432bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerPassBase::AddInitialVisibleWidget
          (FConsoleSlateDebuggerPassBase *this,SWidget *param_1,ulong64 param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  
  if ((((byte)param_1->VisibilityAttribute & 0x19) != 0) && (param_1->LastPaintFrame != 0)) {
    (**(code **)(this->_padding_ + 0x40))();
    plVar5 = (longlong *)(**(code **)(param_1->_padding_ + 400))(param_1);
    if (plVar5 == (longlong *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5236881326551859517>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\ConsoleSlateDebuggerPassBase.cpp"
                         ,0x13d,"Children");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if (*(char *)((longlong)plVar5 + 0x19) != -0x24) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                    __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      lVar2 = plVar5[3];
      *(undefined1 *)(plVar5 + 3) = 1;
      iVar4 = (**(code **)*plVar5)(plVar5);
      iVar6 = 0;
      if (0 < iVar4) {
        do {
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_38,iVar6);
          AddInitialVisibleWidget(this,local_28,param_2);
          if (local_38 != 0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_30);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      *(char *)(plVar5 + 3) = (char)lVar2;
    }
  }
  return;
}

// AddUpdatedWidget_Internal @ 142432f60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FWidgetInfo * __thiscall
FConsoleSlateDebuggerPassBase::AddUpdatedWidget_Internal
          (FConsoleSlateDebuggerPassBase *this,SWidget *param_1,ulong64 param_2,uint param_3)

{
  FSlateInvalidationWidgetIndex *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  SWidget *pSVar10;
  longlong *plVar11;
  FDeprecateSlateVector2D FVar12;
  code *pcVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  int iVar17;
  atomic<int> aVar18;
  ulonglong *puVar19;
  FString *pFVar20;
  SWidget *pSVar21;
  FWidgetInfo *pFVar22;
  FSlateApplicationBase *pFVar23;
  SWidget *pSVar24;
  SWidget *pSVar25;
  SWidget *pSVar26;
  undefined1 *puVar27;
  bool bVar28;
  SWidget *pSVar29;
  undefined8 local_res8;
  ulonglong local_res10;
  TKeyInitializer<unsigned___int64_const_&> local_res20;
  FString local_68;
  FString local_58;
  ulonglong local_48 [2];
  
  pSVar29 = (SWidget *)0x0;
  local_res20.Key._0_4_ = 0;
  local_res10 = param_1->UniqueIdentifier;
  if (*(int *)&(this->Widgets).field_0x8 != *(int *)&(this->Widgets).field_0x34) {
    puVar27 = *(undefined1 **)&(this->Widgets).field_0x40;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = &(this->Widgets).field_0x38;
    }
    iVar17 = *(int *)(puVar27 +
                     ((local_res10 >> 0x20) * 0x17 + local_res10 &
                     (ulonglong)(*(int *)&(this->Widgets).field_0x48 - 1)) * 4);
    if (iVar17 != -1) {
      do {
        puVar19 = (ulonglong *)((longlong)iVar17 * 0x60 + *(longlong *)&this->Widgets);
        if (*puVar19 == local_res10) {
          pSVar25 = (SWidget *)(puVar19 + 1);
          if (puVar19 == (ulonglong *)0x0) {
            pSVar25 = pSVar29;
          }
          if (pSVar25 != (SWidget *)0x0) {
            if (pSVar25->_padding_ != param_2) {
              bVar28 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5236881326551859541>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\ConsoleSlateDebuggerPassBase.cpp"
                                  ,0x155,"FoundItem->Window == WindowId");
              if (bVar28) {
                pcVar13 = (code *)swi(3);
                pFVar22 = (FWidgetInfo *)(*pcVar13)();
                return pFVar22;
              }
              pSVar25->_padding_ = param_2;
            }
            goto LAB_142433123;
          }
          break;
        }
        iVar17 = (int)puVar19[0xb];
      } while (iVar17 != -1);
    }
  }
  local_res8 = (FSlateInvalidationRoot *)&local_res10;
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
              *)&this->Widgets,&local_res20,(bool *)&local_res8);
  pSVar25 = (SWidget *)(*(longlong *)&this->Widgets + (longlong)(int)local_res20.Key * 0x60 + 8);
  *(undefined4 *)&(pSVar25->PersistentState).PaintParent.WeakReferenceCount.ReferenceController = 0;
  pSVar25->_padding_ = param_2;
  bVar28 = this->bUseWidgetPathAsName == false;
  if (bVar28) {
    pFVar20 = FReflectionMetaData::GetWidgetDebugInfo(&local_68,param_1);
  }
  else {
    pFVar20 = FReflectionMetaData::GetWidgetPath(&local_58,param_1,true,false);
  }
  pFVar1 = &(pSVar25->FastPathProxyHandle).WidgetIndex;
  if (pFVar1 != (FSlateInvalidationWidgetIndex *)pFVar20) {
    if (*(void **)&pFVar1->ArrayIndex != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar1->ArrayIndex);
    }
    *(FScriptContainerElement **)&pFVar1->ArrayIndex = (pFVar20->Data).AllocatorInstance.Data;
    (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pSVar25->field_0x30 = (pFVar20->Data).ArrayNum;
    uVar14 = *(undefined1 *)((longlong)&(pFVar20->Data).ArrayMax + 1);
    uVar15 = *(undefined1 *)((longlong)&(pFVar20->Data).ArrayMax + 2);
    uVar16 = *(undefined1 *)((longlong)&(pFVar20->Data).ArrayMax + 3);
    pSVar25->AccessibleSummaryBehavior = *(undefined1 *)&(pFVar20->Data).ArrayMax;
    pSVar25->Clipping = uVar14;
    pSVar25->PixelSnappingMethod = uVar15;
    pSVar25->FlowDirectionPreference = uVar16;
    (pFVar20->Data).ArrayNum = 0;
    (pFVar20->Data).ArrayMax = 0;
  }
  if ((bVar28) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((!bVar28) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_142433123:
  if ((this->bLogWidgetName != false) && (4 < (byte)LogSlateDebugger._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
  }
  pSVar26 = (SWidget *)param_1->_padding_;
  pSVar10 = (SWidget *)param_1->_padding_;
  if (pSVar26 != (SWidget *)0x0) {
    LOCK();
    ((atomic<int> *)&pSVar26->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pSVar26->_padding_)[1] + 1);
    UNLOCK();
    aVar4 = *(atomic<int> *)&pSVar26->_padding_;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1424331b2;
      }
      LOCK();
      aVar18 = *(atomic<int> *)&pSVar26->_padding_;
      bVar28 = aVar4 == aVar18;
      if (bVar28) {
        *(atomic<int> *)&pSVar26->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar18 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar18;
    } while (!bVar28);
  }
  pSVar24 = pSVar10;
  if (pSVar26 == (SWidget *)0x0) {
    pSVar24 = pSVar29;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar26);
  pSVar21 = (SWidget *)&pSVar24->_padding_;
  if (pSVar24 == (SWidget *)0x0) {
    pSVar21 = pSVar29;
  }
  if (pSVar21 != (SWidget *)&param_1->_padding_) {
LAB_1424331b2:
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result.Pin().Get() == this",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x6d5,L"");
    if (bVar28) {
      pcVar13 = (code *)swi(3);
      pFVar22 = (FWidgetInfo *)(*pcVar13)();
      return pFVar22;
    }
  }
  if ((TWeakPtr<SWidget_const_,1> *)&pSVar25->_padding_ != (TWeakPtr<SWidget_const_,1> *)local_48) {
    plVar11 = (longlong *)pSVar25->_padding_;
    pSVar25->_padding_ = (longlong)pSVar26;
    ((TWeakPtr<SWidget_const_,1> *)&pSVar25->_padding_)->Object = pSVar10;
    pSVar26 = pSVar29;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar17 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      pSVar26 = (SWidget *)0x0;
      if (iVar17 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (pSVar26 != (SWidget *)0x0) {
    LOCK();
    paVar3 = (atomic<int> *)&pSVar26->_padding_ + 1;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pSVar26->_padding_ + 8))(pSVar26,1);
    }
  }
  local_res8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_res8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  local_res8 = (FSlateInvalidationRoot *)
               CONCAT44((float)local_res8 *
                        (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M
                        [0][1] + local_res8._4_4_ *
                                 (param_1->PersistentState).AllottedGeometry.
                                 AccumulatedRenderTransform.M.M[1][1] +
                        (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans
                        .field0_0x0._s_0.Y,
                        local_res8._4_4_ *
                        (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M
                        [1][0] + (float)local_res8 *
                                 (param_1->PersistentState).AllottedGeometry.
                                 AccumulatedRenderTransform.M.M[0][0] +
                        (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans
                        .field0_0x0._s_0.X);
  (pSVar25->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot = local_res8;
  FVar12 = (param_1->PersistentState).AllottedGeometry.Size;
  local_res8._4_4_ = FVar12._4_4_;
  local_res8._0_4_ = FVar12._0_4_;
  fVar5 = (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][0];
  fVar6 = (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][0];
  fVar7 = (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][1];
  fVar8 = (param_1->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][1];
  pSVar25->UpdateFlags = (char)param_3;
  pSVar25->VisibilityAttribute =
       (TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
       (char)(param_3 >> 8);
  pSVar25->EnabledStateAttribute =
       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
       (char)(param_3 >> 0x10);
  pSVar25->HoveredAttribute =
       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
       (char)(param_3 >> 0x18);
  local_res8 = (FSlateInvalidationRoot *)
               CONCAT44((float)local_res8 * fVar7 + local_res8._4_4_ * fVar8,
                        local_res8._4_4_ * fVar5 + (float)local_res8 * fVar6);
  *(FSlateInvalidationRoot **)&(pSVar25->FastPathProxyHandle).InvalidationRootHandle.UniqueId =
       local_res8;
  pFVar23 = FSlateApplicationBase::Get();
  pSVar29 = (SWidget *)(**(code **)(*(longlong *)pFVar23 + 0x60))(pFVar23);
  uVar9._0_1_ = pSVar25->UpdateFlags;
  uVar9._1_1_ = pSVar25->VisibilityAttribute;
  uVar9._2_1_ = pSVar25->EnabledStateAttribute;
  uVar9._3_1_ = pSVar25->HoveredAttribute;
  (pSVar25->PersistentState).PaintParent.Object = pSVar29;
  if (GFrameNumber != uVar9) {
    (pSVar25->PersistentState).PaintParent.Object =
         (SWidget *)
         ((double)(pSVar25->PersistentState).PaintParent.Object -
         (double)(GFrameNumber - *(int *)&pSVar25->UpdateFlags) * (double)FApp::DeltaTime);
  }
  return (FWidgetInfo *)pSVar25;
}

// BuildInitialWidgetList @ 142435b80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerPassBase::BuildInitialWidgetList(FConsoleSlateDebuggerPassBase *this)

{
  bool bVar1;
  longlong *plVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  ulong64 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FSlateApplicationBase *pFVar10;
  FName *pFVar11;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_28;
  
  bVar1 = this->bLogWidgetName;
  this->bLogWidgetName = false;
  pFVar10 = FSlateApplicationBase::Get();
  (**(code **)(*(longlong *)pFVar10 + 0x40))(pFVar10,&local_28);
  uVar15 = 0;
  do {
    iVar13 = local_28.ArrayNum;
    if (((int)uVar15 < 0) || (iVar13 <= (int)uVar15)) {
      DestructItems<TSharedRef<SWindow,1>,int>
                ((TSharedRef<SWindow,1> *)local_28.AllocatorInstance.Data,iVar13);
      if ((TSharedRef<SWindow,1> *)local_28.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0)
      {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      this->bLogWidgetName = bVar1;
      return;
    }
    uVar8 = 0;
    if ((int)uVar15 < iVar13) {
      uVar8 = ~uVar15 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar14 = local_28.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
    if ((this->bDebugGameWindowOnly == false) ||
       (plVar2 = *(longlong **)&pFVar14->field_0x0, *(int *)((longlong)plVar2 + 0x374) == 5)) {
LAB_142435c52:
      pSVar3 = *(SWidget **)&pFVar14->field_0x0;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
      uVar5 = pSVar3->UniqueIdentifier;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      AddInitialVisibleWidget(this,pSVar3,uVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    else {
      pFVar11 = (FName *)(**(code **)(*plVar2 + 0x1f0))(plVar2,local_res8);
      if (*pFVar11 == this->PIEWindowTag) goto LAB_142435c52;
    }
    pTVar12 = SWindow::GetChildWindows(*(SWindow **)&pFVar14->field_0x0);
    if (&local_28 == pTVar12) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar13 = pTVar12->ArrayNum;
    if (iVar13 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar13,&local_28.AllocatorInstance,&local_28.ArrayNum,
                         &local_28.ArrayMax);
      ConstructItems<TSharedRef<SWindow,1>,TSharedRef<SWindow,1>,int>
                (local_28.AllocatorInstance.Data + (longlong)iVar9 * 0x10,
                 (TSharedRef<SWindow,1> *)(pTVar12->AllocatorInstance).Data,iVar13);
    }
    uVar15 = uVar15 + 1;
  } while( true );
}

// HandleDebugGameWindowOnlyChanged @ 14243ffb0

void __thiscall
FConsoleSlateDebuggerPassBase::HandleDebugGameWindowOnlyChanged
          (FConsoleSlateDebuggerPassBase *this,IConsoleVariable *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  (**(code **)(this->_padding_ + 0x10))();
  if (this->bEnabled != false) {
    bVar3 = 1 < *(int *)&(this->Widgets).field_0x48;
    if (!bVar3) {
      TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
                        *)&this->Widgets);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&this->Widgets,0,*(int *)&(this->Widgets).field_0x8);
    puVar1 = &(this->Widgets).field_0xc;
    *(undefined4 *)&(this->Widgets).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)&this->Widgets,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Widgets).field_0x34 = 0;
    *(undefined4 *)&(this->Widgets).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->Widgets).field_0x2c;
    *(undefined4 *)&(this->Widgets).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->Widgets).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Widgets).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->Widgets).field_0x48 = 1;
      TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
                *)&this->Widgets);
    }
    BuildInitialWidgetList(this);
  }
  return;
}

// HandleEnabled @ 1424400e0

void __thiscall
FConsoleSlateDebuggerPassBase::HandleEnabled
          (FConsoleSlateDebuggerPassBase *this,IConsoleVariable *param_1)

{
  if (this->bEnabled != false) {
                    /* WARNING: Could not recover jumptable at 0x0001424400e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x30))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424400ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// HandleEndFrame @ 1424402b0

void __thiscall FConsoleSlateDebuggerPassBase::HandleEndFrame(FConsoleSlateDebuggerPassBase *this)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
              *)&this->Widgets);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar2 = local_78._24_8_ >> 0x20;
  uVar4 = local_78._28_4_;
  local_18 = (TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
              *)&this->Widgets;
  if ((int)uVar4 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar3 = (longlong)(int)uVar2 * 0x60;
      if (((*(longlong *)(lVar3 + 0x10 + *local_48) == 0) ||
          (lVar3 = *(longlong *)(lVar3 + 0x18 + *local_48), lVar3 == 0)) ||
         (*(int *)(lVar3 + 8) < 1)) {
        TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar4);
        local_10 = '\x01';
      }
      else {
        *(undefined4 *)((longlong)(int)uVar4 * 0x60 + 0x50 + *local_48) = 0;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar2 = (ulonglong)uStack_2c;
      uVar4 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar1 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar1 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar1)) || (iVar1 < local_18->HashSize)) {
        local_18->HashSize = iVar1;
        TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// HandleLogOnce @ 142440a50

void __thiscall FConsoleSlateDebuggerPassBase::HandleLogOnce(FConsoleSlateDebuggerPassBase *this)

{
  this->bLogWidgetNameOnce = true;
  return;
}

// HandlePaintDebugInfo @ 142442650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerPassBase::HandlePaintDebugInfo
          (FConsoleSlateDebuggerPassBase *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateWindowElementList *param_3,int *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  void *_Src;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float afVar13 [2];
  float afVar14 [2];
  float afVar15 [2];
  float afVar16 [2];
  float fVar17;
  FSlateWindowElementList *pFVar18;
  TMap<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>_>
  *pTVar19;
  bool bVar20;
  SWindow *pSVar21;
  FName *pFVar22;
  ISlateStyle *pIVar23;
  FSlateApplicationBase *pFVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  ForAnyElementType _Src_00;
  undefined1 *puVar32;
  uint *puVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  undefined1 auStackY_348 [32];
  uint local_308;
  undefined1 local_304 [4];
  ForAnyElementType local_300;
  int local_2f8;
  int local_2f4;
  undefined8 local_2f0;
  FSlateWindowElementList *local_2e8;
  uint *local_2e0;
  float local_2d8;
  float fStack_2d4;
  FString local_2d0;
  longlong local_2c0;
  TVector2<float>_u_0 local_2b8;
  TVector2<float>_u_0 local_2b0;
  FLinearColor_u_0 local_2a8;
  FLinearColor_u_0 local_298;
  TMap<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>_>
  *local_288;
  int iStack_280;
  uint uStack_27c;
  undefined1 *local_278;
  undefined4 uStack_270;
  int iStack_26c;
  int local_268;
  int iStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  FSlateBrush *local_258;
  FSlateBrush *local_250;
  FString local_248;
  TMap<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>_>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  FSlateWindowElementList *local_208;
  uint *local_200;
  FGeometry *local_1f8;
  undefined1 *local_1f0;
  FString local_1e8;
  FString local_1d8;
  TTransform2<float> local_1c8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  TVector2<float>_u_0 local_19c;
  TTransform2<float> local_194;
  FName local_178;
  FName local_170;
  FName local_168;
  TTransform2<float> local_160;
  undefined1 local_148 [16];
  undefined4 local_138;
  TReferenceControllerBase<1> *local_110;
  TVector2<float>_u_0 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  float local_cc [2];
  float afStack_c4 [2];
  TVector2<float>_u_0 local_bc;
  byte local_b4;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_348;
  bVar11 = false;
  bVar10 = false;
  local_2e0 = (uint *)param_4;
  local_2e8 = param_3;
  if ((this->bDebugGameWindowOnly != false) &&
     (pSVar21 = FSlateWindowElementList::GetPaintWindow(param_3), pSVar21->Type != GameWindow)) {
    pSVar21 = FSlateWindowElementList::GetPaintWindow(param_3);
    pFVar22 = (FName *)(**(code **)(pSVar21->_padding_ + 0x1f0))(pSVar21,&local_2d8);
    if (*pFVar22 != this->PIEWindowTag) {
      return;
    }
  }
  *param_4 = *param_4 + 1;
  pSVar21 = FSlateWindowElementList::GetPaintWindow(param_3);
  if (pSVar21 == (SWindow *)0x0) {
    local_2c0 = 0;
  }
  else {
    local_2c0 = pSVar21->_padding_;
  }
  uVar35 = 0;
  uVar34 = 0;
  pIVar23 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x50);
  pFVar22 = ::FName::FName(&local_178,"WhiteBrush");
  local_258 = (FSlateBrush *)(*pcVar3)(pIVar23,*pFVar22,0);
  pIVar23 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x50);
  pFVar22 = ::FName::FName(&local_170,"Border");
  local_250 = (FSlateBrush *)(*pcVar3)(pIVar23,*pFVar22,0);
  pIVar23 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x88);
  ::FName::FName(&local_168,"SmallFont");
  (*pcVar3)(pIVar23,local_148);
  uStack_27c = 1;
  fVar36 = this->FadeDuration;
  if (this->FadeDuration <= __real_3c23d70a) {
    fVar36 = __real_3c23d70a;
  }
  local_138 = 1;
  this->FadeDuration = fVar36;
  pFVar24 = FSlateApplicationBase::Get();
  dVar5 = (double)(**(code **)(*(longlong *)pFVar24 + 0x60))(pFVar24);
  iStack_280 = 0;
  local_208 = local_2e8;
  local_268 = 0;
  local_278 = &(this->Widgets).field_0x10;
  local_200 = local_2e0;
  iVar27 = *(int *)&(this->Widgets).field_0x28;
  local_1f0 = local_148;
  iStack_26c = 0;
  if (iVar27 != 0) {
    puVar33 = *(uint **)&(this->Widgets).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)local_278;
    }
    uVar29 = *puVar33;
    while (uVar29 == 0) {
      lVar25 = (longlong)iStack_280;
      local_268 = local_268 + 0x20;
      iStack_280 = iStack_280 + 1;
      iStack_26c = iVar27;
      if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_280) goto LAB_1424428be;
      uVar29 = puVar33[lVar25 + 1];
    }
    uStack_27c = -uVar29 & uVar29;
    uVar1 = (ulonglong)uStack_27c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_2f0._0_4_ = (int)lVar25;
    iStack_26c = (int)lVar25 + -1 + local_268;
    if (iVar27 < iStack_26c) {
      iStack_26c = iVar27;
    }
  }
LAB_1424428be:
  local_308 = *(uint *)&(this->Widgets).field_0x28;
  local_288 = &this->Widgets;
  iStack_260 = *(int *)&(this->Widgets).field_0x8 - *(int *)&(this->Widgets).field_0x34;
  uStack_270 = 0xffffffff;
  uVar29 = local_308 & 0xffffffe0;
  TStack_230.CurrentBitIndex = iStack_26c;
  TStack_230.UnvisitedBitMask = 0xffffffff;
  TStack_230._padding_ = CONCAT44(uStack_27c,iStack_280);
  iVar26 = (int)local_308 >> 5;
  TStack_230._28_4_ = iStack_26c;
  TStack_230.BaseBitIndex = local_268;
  uStack_210 = CONCAT44(uStack_25c,iStack_260);
  iStack_264 = iStack_26c;
  local_238 = local_288;
  TStack_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_278;
  local_1f8 = param_2;
  if ((((int)local_308 < 0) || (iVar27 < (int)local_308)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar20)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar17 = __real_42100000;
  afVar15 = _UNK_15076b188;
  afVar13 = ___xmm_3f80000000000000000000003f800000;
  fVar12 = __real_41400000;
  fVar36 = __real_3f800000;
  uVar2 = *(uint *)&(this->Widgets).field_0x28;
  if (local_308 != uVar2) {
    puVar32 = *(undefined1 **)&(this->Widgets).field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = &(this->Widgets).field_0x10;
    }
    uVar30 = -1 << ((byte)local_308 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar26 * 4);
    while (uVar30 == 0) {
      lVar25 = (longlong)iVar26;
      uVar29 = uVar29 + 0x20;
      iVar26 = iVar26 + 1;
      local_308 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_142442a00;
      uVar30 = *(uint *)(puVar32 + lVar25 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_308 = (int)lVar25 + -1 + uVar29;
    if ((int)uVar2 < (int)local_308) {
      local_308 = uVar2;
    }
  }
LAB_142442a00:
  while( true ) {
    pTVar19 = local_238;
    if (*(int *)&local_238->field_0x8 - *(int *)&local_238->field_0x34 != (int)uStack_210) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_304);
    }
    if (((TStack_230.CurrentBitIndex == local_308) &&
        (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Widgets).field_0x10))
       && (pTVar19 == &this->Widgets)) break;
    lVar25 = *(longlong *)pTVar19;
    lVar31 = (longlong)TStack_230.CurrentBitIndex * 0x60;
    if (*(longlong *)(lVar31 + 8 + lVar25) == local_2c0) {
      if (((*(uint *)(lVar31 + 0x40 + lVar25) == GFrameNumber) &&
          (uVar35 = uVar35 + 1, this->bLogWidgetNameOnce != false)) &&
         (4 < (byte)LogSlateDebugger._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
      }
      afVar16 = _UNK_15076b188;
      afVar14 = ___xmm_3f80000000000000000000003f800000;
      fVar6 = (this->MostRecentColor).field0_0x0._s_0.R;
      fVar7 = (this->MostRecentColor).field0_0x0._s_0.G;
      fVar8 = (this->MostRecentColor).field0_0x0._s_0.B;
      fVar9 = (this->MostRecentColor).field0_0x0._s_0.A;
      local_1b0 = *(undefined8 *)(lVar31 + 0x28 + lVar25);
      TVar4 = (TVector2<float>_u_0)
              *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar31 + 0x20 + lVar25))->_s_0;
      local_1c8.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
      local_1a8 = 0x3f800000;
      ___xmm_3f80000000000000000000003f800000 = afVar13[0];
      _UNK_15076b184 = afVar13[1];
      local_1c8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_1c8.M.M[0][1] = _UNK_15076b184;
      _UNK_15076b188 = afVar15[0];
      _UNK_15076b18c = afVar15[1];
      local_1c8.M.M[1][0] = _UNK_15076b188;
      local_1c8.M.M[1][1] = _UNK_15076b18c;
      local_1a0 = 0;
      local_19c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      ___xmm_3f80000000000000000000003f800000 = afVar13[0];
      _UNK_15076b184 = afVar13[1];
      local_160.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_160.M.M[0][1] = _UNK_15076b184;
      _UNK_15076b188 = afVar15[0];
      _UNK_15076b18c = afVar15[1];
      local_160.M.M[1][0] = _UNK_15076b188;
      local_160.M.M[1][1] = _UNK_15076b18c;
      fVar37 = (float)(dVar5 - *(double *)(lVar31 + 0x48 + lVar25)) / this->FadeDuration;
      if (fVar36 <= fVar37) {
        fVar37 = fVar36;
      }
      if (fVar37 <= 0.0) {
        fVar37 = 0.0;
      }
      local_2a8._s_0.R = ((this->LeastRecentColor).field0_0x0._s_0.R - fVar6) * fVar37 + fVar6;
      local_2a8._s_0.G = ((this->LeastRecentColor).field0_0x0._s_0.G - fVar7) * fVar37 + fVar7;
      local_2a8._s_0.B = ((this->LeastRecentColor).field0_0x0._s_0.B - fVar8) * fVar37 + fVar8;
      local_2a8._s_0.A = ((this->LeastRecentColor).field0_0x0._s_0.A - fVar9) * fVar37 + fVar9;
      ___xmm_3f80000000000000000000003f800000 = afVar14;
      _UNK_15076b188 = afVar16;
      local_160.Trans.field0_0x0 = TVar4;
      Concatenate<TTransform2<float>_>(&local_194,&local_160,&local_1c8);
      pFVar18 = local_2e8;
      local_b4 = local_b4 & 0xfc;
      local_2f0._0_4_ = TVar4._s_0.X;
      local_2f0._4_4_ = TVar4._s_0.Y;
      local_2d8 = (float)(undefined4)local_2f0;
      local_e0 = 0x3f800000;
      fStack_2d4 = local_2f0._4_4_;
      local_d4 = local_1b0;
      local_d8 = 0;
      local_cc[0] = local_194.M.M[0][0];
      local_cc[1] = local_194.M.M[0][1];
      afStack_c4[0] = local_194.M.M[1][0];
      afStack_c4[1] = local_194.M.M[1][1];
      local_bc = local_194.Trans.field0_0x0;
      local_2f0 = TVar4;
      local_e8 = TVar4;
      if (this->bDrawBox != false) {
        FSlateDrawElement::MakeBox
                  (local_2e8,*local_2e0,(FPaintGeometry *)&local_e8._s_0,local_258,None,
                   (FLinearColor *)&local_2a8._s_0);
      }
      if (this->bDrawBorder != false) {
        local_298._s_0.R = local_2a8._s_0.R;
        local_298._s_0.G = local_2a8._s_0.G;
        local_298._s_0.B = local_2a8._s_0.B;
        local_298._s_0.A = 1.0;
        FSlateDrawElement::MakeBox
                  (pFVar18,*local_2e0,(FPaintGeometry *)&local_e8._s_0,local_250,None,
                   (FLinearColor *)&local_298._s_0);
      }
      if (((this->bDisplayWidgetsNameList != false) && (fVar37 < fVar36)) &&
         (uVar34 < (uint)this->MaxNumberOfWidgetInList)) {
        if (*(uint *)(lVar31 + 0x40 + lVar25) == GFrameNumber) {
          local_2f8 = *(int *)(lVar31 + 0x38 + lVar25);
          lVar28 = (longlong)local_2f8;
          _Src = *(void **)(lVar31 + 0x30 + lVar25);
          bVar11 = true;
          local_300.Data = (FScriptContainerElement *)0x0;
          if (local_2f8 == 0) {
            local_2f4 = 0;
            _Src_00.Data = (FScriptContainerElement *)0x0;
            iVar27 = local_2f8;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_2f8,0,&local_300,local_2f8,&local_2f4);
            memcpy(local_300.Data,_Src,lVar28 * 2);
            _Src_00.Data = local_300.Data;
            iVar27 = local_2f8;
          }
        }
        else {
          bVar10 = true;
          ::FString::PrintfImpl(&local_248,L"%s ( %3d frames ago )");
          _Src_00.Data = local_248.Data.AllocatorInstance.Data;
          iVar27 = local_248.Data.ArrayNum;
        }
        local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d0.Data.ArrayNum = iVar27;
        if (iVar27 == 0) {
          local_2d0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar27,0,(ForAnyElementType *)&local_2d0,iVar27,&local_2d0.Data.ArrayMax);
          memcpy(local_2d0.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar27 * 2);
        }
        if ((bVar10) &&
           (bVar10 = false, local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        if ((bVar11) && (bVar11 = false, local_300.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_300.Data);
        }
        local_2b8._s_0.X = 0.0;
        local_2b8._s_0.Y = (float)uVar34 * fVar12 + fVar17;
        `FConsoleSlateDebuggerPassBase::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                  (&local_208,&local_2d0,(TVector2<float> *)&local_2b8._s_0,
                   &this->DrawWidgetNameColor);
        uVar34 = uVar34 + 1;
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  }
  this->bLogWidgetNameOnce = false;
  (**(code **)(this->_padding_ + 0x20))(this,&local_1e8,uVar35);
  `FConsoleSlateDebuggerPassBase::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
            (&local_208,&local_1e8,&this->WidgetLogLocation,&this->DrawWidgetNameColor);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if ((this->bDisplayWidgetsNameList != false) && ((uint)this->MaxNumberOfWidgetInList < uVar35)) {
    ::FString::PrintfImpl(&local_1d8,L"   %d more widgets");
    local_2b0._s_0.X = 0.0;
    local_2b0._s_0.Y = (float)uVar34 * fVar12 + fVar17;
    `FConsoleSlateDebuggerPassBase::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_208,&local_1d8,(TVector2<float> *)&local_2b0._s_0,&FLinearColor::White);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
  return;
}

// HandleToggleWidgetNameList @ 142444210

void __thiscall
FConsoleSlateDebuggerPassBase::HandleToggleWidgetNameList(FConsoleSlateDebuggerPassBase *this)

{
  this->bDisplayWidgetsNameList = this->bDisplayWidgetsNameList == false;
                    /* WARNING: Could not recover jumptable at 0x00014244421d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// LoadConfig @ 142446e60

void __thiscall FConsoleSlateDebuggerPassBase::LoadConfig(FConsoleSlateDebuggerPassBase *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  FColor_u_0 local_res8 [2];
  FString local_48;
  FString local_38 [2];
  
  puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x18))(this,local_38);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FString::FString(&local_48,pwVar6);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetBool
            (GConfig,(wchar_t *)FVar7.Data,L"bDebugGameWindowOnly",&this->bDebugGameWindowOnly,
             local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetBool
            (GConfig,(wchar_t *)FVar7.Data,L"bDisplayWidgetsNameList",&this->bDisplayWidgetsNameList
             ,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetBool
            (GConfig,(wchar_t *)FVar7.Data,L"bUseWidgetPathAsName",&this->bUseWidgetPathAsName,
             local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetBool(GConfig,(wchar_t *)FVar7.Data,L"bDrawBox",&this->bDrawBox,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetBool(GConfig,(wchar_t *)FVar7.Data,L"bDrawBorder",&this->bDrawBorder,local_38)
  ;
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetBool
            (GConfig,(wchar_t *)FVar7.Data,L"bLogWidgetName",&this->bLogWidgetName,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,(wchar_t *)FVar7.Data,L"MostRecentColor",(FColor *)&local_res8[0]._s_0,
                     local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  fVar3 = __real_3b808081;
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->MostRecentColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->MostRecentColor).field0_0x0._s_0.G = fVar1;
    (this->MostRecentColor).field0_0x0._s_0.B = fVar2;
    (this->MostRecentColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,(wchar_t *)FVar7.Data,L"LeastRecentColor",(FColor *)&local_res8[0]._s_0
                     ,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->LeastRecentColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->LeastRecentColor).field0_0x0._s_0.G = fVar1;
    (this->LeastRecentColor).field0_0x0._s_0.B = fVar2;
    (this->LeastRecentColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,(wchar_t *)FVar7.Data,L"DrawWidgetNameColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetNameColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetNameColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetNameColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetNameColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetInt
            (GConfig,(wchar_t *)FVar7.Data,L"MaxNumberOfWidgetInList",&this->MaxNumberOfWidgetInList
             ,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetFloat
            (GConfig,(wchar_t *)FVar7.Data,L"FadeDuration",&this->FadeDuration,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveConfig @ 142451830

void __thiscall FConsoleSlateDebuggerPassBase::SaveConfig(FConsoleSlateDebuggerPassBase *this)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  FColor local_res8;
  FColor local_res10;
  FString local_28;
  FString local_18;
  
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x18))(this,&local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)*puVar1;
  }
  ::FString::FString(&local_28,pwVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool
            (GConfig,(wchar_t *)FVar3.Data,L"bDebugGameWindowOnly",this->bDebugGameWindowOnly,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool
            (GConfig,(wchar_t *)FVar3.Data,L"bDisplayWidgetsNameList",this->bDisplayWidgetsNameList,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool
            (GConfig,(wchar_t *)FVar3.Data,L"bUseWidgetPathAsName",this->bUseWidgetPathAsName,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool(GConfig,(wchar_t *)FVar3.Data,L"bDrawBox",this->bDrawBox,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool(GConfig,(wchar_t *)FVar3.Data,L"bDrawBorder",this->bDrawBorder,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool
            (GConfig,(wchar_t *)FVar3.Data,L"bLogWidgetName",this->bLogWidgetName,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->MostRecentColor);
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetColor
            (GConfig,(wchar_t *)FVar3.Data,L"MostRecentPaintColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->LeastRecentColor);
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetColor
            (GConfig,(wchar_t *)FVar3.Data,L"LeastRecentPaintColor",local_res10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetNameColor);
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetColor
            (GConfig,(wchar_t *)FVar3.Data,L"DrawWidgetNameColor",local_res10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetInt
            (GConfig,(wchar_t *)FVar3.Data,L"MaxNumberOfWidgetInList",this->MaxNumberOfWidgetInList,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetFloat
            (GConfig,(wchar_t *)FVar3.Data,L"FadeDuration",this->FadeDuration,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveConfigOnVariableChanged @ 142452080

void __thiscall
FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged
          (FConsoleSlateDebuggerPassBase *this,IConsoleVariable *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142452083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// StartDebugging @ 142452760

void __thiscall FConsoleSlateDebuggerPassBase::StartDebugging(FConsoleSlateDebuggerPassBase *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (this->bEnabled == false) {
    lVar2 = (**(code **)(this->_padding_ + 0x28))();
    local_2c = 0xe000000;
    local_18 = 0xf000000;
    local_14 = 0x1000000;
    plVar1 = *(longlong **)(lVar2 + 8);
    local_28 = 0;
    local_24 = 0;
    lVar2 = *plVar1;
    local_1c = 0;
    uVar3 = (**(code **)(lVar2 + 0xa8))(plVar1,local_38,&local_2c);
    (**(code **)(lVar2 + 0xb0))(plVar1,&u_1,uVar3);
  }
  return;
}

// StartDebugging_Internal @ 142452970

void __thiscall
FConsoleSlateDebuggerPassBase::StartDebugging_Internal(FConsoleSlateDebuggerPassBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this->bEnabled = true;
  bVar3 = 1 < *(int *)&(this->Widgets).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
                      *)&this->Widgets);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->Widgets,0,*(int *)&(this->Widgets).field_0x8);
  puVar1 = &(this->Widgets).field_0xc;
  *(undefined4 *)&(this->Widgets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)&this->Widgets,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Widgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Widgets).field_0x34 = 0;
  iVar2 = *(int *)&(this->Widgets).field_0x2c;
  *(undefined4 *)&(this->Widgets).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Widgets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Widgets).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->Widgets).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
              *)&this->Widgets);
  }
  BuildInitialWidgetList(this);
  TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FConsoleSlateDebuggerPassBase>
            ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::PaintDebugElements,
             (FConsoleSlateDebuggerPassBase *)&stack0x00000008,(pmf_5b8e7d99)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FConsoleSlateDebuggerPassBase>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(FConsoleSlateDebuggerPassBase *)&stack0x00000008,
             (pmf_3209357d)this);
  return;
}

// StopDebugging @ 142452db0

void __thiscall FConsoleSlateDebuggerPassBase::StopDebugging(FConsoleSlateDebuggerPassBase *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (this->bEnabled != false) {
    lVar2 = (**(code **)(this->_padding_ + 0x28))();
    local_2c = 0xe000000;
    local_18 = 0xf000000;
    local_14 = 0x1000000;
    plVar1 = *(longlong **)(lVar2 + 8);
    local_28 = 0;
    local_24 = 0;
    lVar2 = *plVar1;
    local_1c = 0;
    uVar3 = (**(code **)(lVar2 + 0xa8))(plVar1,local_38,&local_2c);
    (**(code **)(lVar2 + 0xb0))(plVar1,&u_0,uVar3);
  }
  return;
}

// StopDebugging_Internal @ 142452f90

void __thiscall
FConsoleSlateDebuggerPassBase::StopDebugging_Internal(FConsoleSlateDebuggerPassBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,this)
  ;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  bVar3 = 1 < *(int *)&(this->Widgets).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
                      *)&this->Widgets);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->Widgets,0,*(int *)&(this->Widgets).field_0x8);
  puVar1 = &(this->Widgets).field_0xc;
  *(undefined4 *)&(this->Widgets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)&this->Widgets,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Widgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Widgets).field_0x34 = 0;
  iVar2 = *(int *)&(this->Widgets).field_0x2c;
  *(undefined4 *)&(this->Widgets).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Widgets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Widgets).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->Widgets).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo,0>,FDefaultSetAllocator>
              *)&this->Widgets);
  }
  this->bEnabled = false;
  return;
}

