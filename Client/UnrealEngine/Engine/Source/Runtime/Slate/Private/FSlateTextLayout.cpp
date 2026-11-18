// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 12

// FSlateTextLayout @ 142845b30

FSlateTextLayout * __thiscall
FSlateTextLayout::FSlateTextLayout(FSlateTextLayout *this,SWidget *param_1,FTextBlockStyle *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextLayout *pFVar3;
  
  FTextLayout::FTextLayout((FTextLayout *)this);
  *(undefined ***)this = &___7FSlateTextLayout__6B_;
  FTextBlockStyle::FTextBlockStyle(&this->DefaultTextStyle,param_2);
  (this->Children)._padding_ = (longlong)param_1;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  if (param_1 == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOwner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateTextLayout *)(*pcVar1)();
      return pFVar3;
    }
  }
  (this->Children)._padding_ = (longlong)&___7__TSlotlessChildren_VSWidget____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  (this->Children).bChangesInvalidatePrepass = false;
  (this->bIsPassword).Value = false;
  (this->bIsPassword).bIsSet = true;
  *(undefined8 *)&(this->bIsPassword).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bIsPassword).Getter = 0;
  *(undefined8 *)&(this->bIsPassword).Getter.field_0x8 = 0;
  FTextBlockStyle::~FTextBlockStyle(param_2);
  return this;
}

// AggregateChildren @ 142851da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateTextLayout::AggregateChildren(FSlateTextLayout *this)

{
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  SWidget *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint local_res8;
  uint local_res10;
  longlong local_res18;
  longlong local_res20;
  TSharedPtr<SWidget,1> local_70;
  TSharedRef<SWidget,1> local_60 [2];
  
  TSlotlessChildren<SWidget>::Empty(&this->Children,0);
  iVar7 = *(int *)&this->field_0x28;
  local_res10 = 0;
  if (0 < iVar7) {
    local_res20 = 0;
    do {
      uVar13 = 0;
      if ((int)local_res10 < iVar7) {
        uVar13 = ~local_res10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar11 = local_res20 + *(longlong *)&this->field_0x20;
      local_res8 = 0;
      if (0 < *(int *)(lVar11 + 0x30)) {
        local_res18 = 0;
        do {
          uVar13 = 0;
          if ((int)local_res8 < *(int *)(lVar11 + 0x30)) {
            uVar13 = ~local_res8 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)(lVar11 + 0x28) + 8 + local_res18)
          ;
          plVar8 = *(longlong **)(*(longlong *)(lVar11 + 0x28) + local_res18);
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0xa8))(plVar8);
          uVar13 = 0;
          iVar7 = (int)plVar8[1];
          if (0 < iVar7) {
            pTVar1 = &(this->Children).Children;
            lVar14 = 0;
            do {
              uVar6 = 0;
              if ((int)uVar13 < iVar7) {
                uVar6 = ~uVar13 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar12 = (FScriptContainerElement *)(*plVar8 + lVar14);
              if ((this->Children).bChangesInvalidatePrepass != false) {
                if (*(char *)((longlong)&(this->Children)._padding_ + 1) != -0x24) {
                  UE::Logging::Private::BasicFatalLog
                            ((FStaticBasicLogRecord *)
                             &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'
                              ::__l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
                }
                SWidget::Invalidate((SWidget *)(this->Children)._padding_,ChildOrder);
              }
              pFVar10 = (pTVar1->AllocatorInstance).Data;
              if (((pFVar10 <= pFVar12) &&
                  (pFVar12 < pFVar10 + (longlong)(this->Children).Children.ArrayMax * 0x10)) &&
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
              iVar7 = (this->Children).Children.ArrayNum;
              if (iVar7 == (this->Children).Children.ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&pTVar1->AllocatorInstance,
                                   &(this->Children).Children.ArrayMax);
              }
              (this->Children).Children.ArrayNum = iVar7 + 1;
              pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
              *(undefined8 *)pFVar10 = *(undefined8 *)pFVar12;
              lVar3 = *(longlong *)(pFVar12 + 8);
              *(longlong *)(pFVar10 + 8) = lVar3;
              if (lVar3 != 0) {
                LOCK();
                *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                UNLOCK();
              }
              this_00 = *(SWidget **)pFVar12;
              if (this_00 != SNullWidget::NullWidget.Object) {
                if (*(char *)((longlong)&(this->Children)._padding_ + 1) != -0x24) {
                  UE::Logging::Private::BasicFatalLog
                            ((FStaticBasicLogRecord *)
                             &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'
                              ::__l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
                }
                pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                                   ((TSharedFromThis<SWidget,1> *)((this->Children)._padding_ + 8),
                                    local_60);
                local_70.Object = pTVar9->Object;
                local_70.SharedReferenceCount.ReferenceController =
                     (pTVar9->SharedReferenceCount).ReferenceController;
                if (local_70.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_70.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                SWidget::AssignParentWidget(this_00,&local_70);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_60[0].SharedReferenceCount.ReferenceController);
              }
              iVar7 = (int)plVar8[1];
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 0x10;
            } while ((int)uVar13 < iVar7);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          local_res18 = local_res18 + 0x30;
          local_res8 = local_res8 + 1;
        } while ((int)local_res8 < *(int *)(lVar11 + 0x30));
      }
      local_res10 = local_res10 + 1;
      iVar7 = *(int *)&this->field_0x28;
      local_res20 = local_res20 + 0x70;
    } while ((int)local_res10 < iVar7);
  }
  return;
}

// ArrangeChildren @ 142853790

void __thiscall
FSlateTextLayout::ArrangeChildren
          (FSlateTextLayout *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res20;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  local_res20 = 0;
  if (0 < *(int *)&this->field_0x38) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)local_res20 < *(int *)&this->field_0x38) {
        uVar10 = ~local_res20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar1 = *(longlong *)&this->field_0x30;
      uVar10 = 0;
      iVar8 = *(int *)(lVar1 + 8 + lVar11);
      if (0 < iVar8) {
        lVar9 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar10 < iVar8) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_68 = *(longlong **)(*(longlong *)(lVar1 + lVar11) + lVar9);
          local_60 = *(TReferenceControllerBase<1> **)(*(longlong *)(lVar1 + lVar11) + 8 + lVar9);
          if (local_60 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
            UNLOCK();
          }
          puVar7 = (undefined8 *)(**(code **)(*local_68 + 8))(local_68,local_58);
          pTVar2 = (TReferenceControllerBase<1> *)puVar7[1];
          plVar3 = (longlong *)*puVar7;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50);
          (**(code **)(*plVar3 + 0xb0))(plVar3,&local_68,param_1,param_2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60);
          iVar8 = *(int *)(lVar1 + 8 + lVar11);
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((int)uVar10 < iVar8);
      }
      local_res20 = local_res20 + 1;
      lVar11 = lVar11 + 0x68;
    } while ((int)local_res20 < *(int *)&this->field_0x38);
  }
  return;
}

// Create @ 1428655a0

TSharedRef<FSlateTextLayout,1> * __cdecl
FSlateTextLayout::Create
          (TSharedRef<FSlateTextLayout,1> *__return_storage_ptr__,SWidget *param_1,
          FTextBlockStyle *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextLayout *this;
  FTextBlockStyle *this_00;
  TSharedRef<FSlateTextLayout,1> *pTVar3;
  FLLMScope local_res8 [2];
  FName local_res20;
  TRawPtrProxy<FSlateTextLayout> local_308;
  FMemScope local_300;
  FTextBlockStyle local_2f8;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Text.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Text.UniqueName;
  FMemScope::FMemScope(&local_300,&local_res20,true);
  this = ::operator_new(0x4a0);
  if (this != (FSlateTextLayout *)0x0) {
    this_00 = FTextBlockStyle::FTextBlockStyle(&local_2f8,param_2);
    FTextLayout::FTextLayout((FTextLayout *)this);
    *(undefined ***)this = &___7FSlateTextLayout__6B_;
    FTextBlockStyle::FTextBlockStyle(&this->DefaultTextStyle,this_00);
    (this->Children)._padding_ = (longlong)param_1;
    (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
    ::FName::FName((FName *)&(this->Children)._padding_,"Children");
    *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
    if ((param_1 == (SWidget *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOwner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                           ,0x21,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FSlateTextLayout,1> *)(*pcVar1)();
      return pTVar3;
    }
    (this->Children)._padding_ = (longlong)&___7__TSlotlessChildren_VSWidget____6B_;
    (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Children).Children.ArrayNum = 0;
    (this->Children).Children.ArrayMax = 0;
    (this->Children).bChangesInvalidatePrepass = false;
    (this->bIsPassword).Value = false;
    (this->bIsPassword).bIsSet = true;
    *(undefined8 *)&(this->bIsPassword).Getter.field_0x10 = 0;
    *(undefined8 *)&(this->bIsPassword).Getter = 0;
    *(undefined8 *)&(this->bIsPassword).Getter.field_0x8 = 0;
    FTextBlockStyle::~FTextBlockStyle(this_00);
    if ((((*(longlong *)&this->field_0x8 != 0) && (*(longlong *)&this->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FSlateTextLayout,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_308.Object = this;
  TSharedRef<FSlateTextLayout,1>::TSharedRef<FSlateTextLayout,1><FSlateTextLayout>
            (__return_storage_ptr__,&local_308);
  (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x50))();
  FMemScope::~FMemScope(&local_300);
  FLLMScope::~FLLMScope(local_res8);
  FTextBlockStyle::~FTextBlockStyle(param_2);
  return __return_storage_ptr__;
}

// CreateDefaultTextRun @ 14286bbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<IRun,1> * __thiscall
FSlateTextLayout::CreateDefaultTextRun
          (FSlateTextLayout *this,TSharedRef<IRun,1> *__return_storage_ptr__,
          TSharedRef<FString,1> *param_1,FTextRange *param_2)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool *pbVar7;
  FSlateTextRun *pFVar8;
  TSharedRef<IRun,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  char cVar11;
  undefined1 auStackY_178 [32];
  TRawPtrProxy<FSlatePasswordRun> local_148;
  TRawPtrProxy<FSlateTextRun> local_140;
  TSharedRef<FString_const_,1> local_138;
  TSharedRef<FString_const_,1> local_128;
  TSharedRef<FSlatePasswordRun,1> local_118;
  TSharedRef<FSlateTextRun,1> local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [24];
  undefined8 uStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->bIsPassword).bIsSet == false) {
    cVar11 = '\0';
  }
  else {
    pbVar7 = TAttribute<bool>::Get(&this->bIsPassword);
    cVar11 = *pbVar7;
  }
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (cVar11 == '\0') {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    uStack_50 = 0;
    local_88._8_8_ = 0;
    uStack_60 = 0x8000000000;
    local_58 = 0xffffffff;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_4_ = 0;
    local_98._12_4_ = 0;
    local_88._16_8_ = 0;
    uStack_70 = 0;
    local_128.Object = pFVar1;
    local_128.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar8 = ::operator_new(0x380);
    if (pFVar8 == (FSlateTextRun *)0x0) {
      local_140.Object = (FSlateTextRun *)0x0;
    }
    else {
      local_140.Object =
           FSlateTextRun::FSlateTextRun
                     (pFVar8,(FRunInfo *)local_98,&local_128,&this->DefaultTextStyle,param_2);
      if ((((local_140.Object != (FSlateTextRun *)0x0) &&
           (*(longlong *)&(local_140.Object)->field_0x8 != 0)) &&
          (*(longlong *)&(local_140.Object)->field_0x10 != 0)) &&
         ((0 < *(int *)(*(longlong *)&(local_140.Object)->field_0x10 + 8) &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar6)))) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedRef<IRun,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    TSharedRef<FSlateTextRun,1>::TSharedRef<FSlateTextRun,1><FSlateTextRun>(&local_108,&local_140);
    __return_storage_ptr__->Object = (IRun *)local_108.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_108.SharedReferenceCount.ReferenceController;
    if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    uStack_40 = uStack_40 & 0xffffffff00000000;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    iVar4 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    uVar5 = uStack_60._4_4_;
    local_58 = 0xffffffff;
    uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
    if (0x80 < uVar5) {
      uStack_60 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    pFVar10 = (FScriptContainerElement *)local_98._0_8_;
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
      pFVar10 = (FScriptContainerElement *)local_98._0_8_;
    }
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8 = (void *)0x0;
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    uStack_b0 = 0;
    local_e8._8_8_ = 0;
    uStack_c0 = 0x8000000000;
    local_b8 = 0xffffffff;
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_f8._0_8_ = (FScriptContainerElement *)0x0;
    local_f8._8_4_ = 0;
    local_f8._12_4_ = 0;
    local_e8._16_8_ = 0;
    uStack_d0 = 0;
    local_138.Object = pFVar1;
    local_138.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar8 = ::operator_new(0x380);
    if (pFVar8 == (FSlateTextRun *)0x0) {
      pFVar8 = (FSlateTextRun *)0x0;
    }
    else {
      FSlateTextRun::FSlateTextRun
                (pFVar8,(FRunInfo *)local_f8,&local_138,&this->DefaultTextStyle,param_2);
      *(undefined ***)pFVar8 = &___7FSlatePasswordRun__6B_;
      if (((*(longlong *)&pFVar8->field_0x8 != 0) && (*(longlong *)&pFVar8->field_0x10 != 0)) &&
         ((0 < *(int *)(*(longlong *)&pFVar8->field_0x10 + 8) &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar6)))) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedRef<IRun,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    local_148.Object = (FSlatePasswordRun *)pFVar8;
    TSharedRef<FSlatePasswordRun,1>::TSharedRef<FSlatePasswordRun,1><FSlatePasswordRun>
              (&local_118,&local_148);
    __return_storage_ptr__->Object = (IRun *)local_118.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_118.SharedReferenceCount.ReferenceController;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_e8,0,local_e8._8_4_);
    iVar4 = SUB84(local_e8._8_8_,4);
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
    }
    uVar5 = uStack_c0._4_4_;
    local_b8 = 0xffffffff;
    uStack_c0 = (ulonglong)uStack_c0._4_4_ << 0x20;
    if (0x80 < uVar5) {
      uStack_c0 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    pFVar10 = (FScriptContainerElement *)local_f8._0_8_;
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
      pFVar10 = (FScriptContainerElement *)local_f8._0_8_;
    }
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// EndLayout @ 14286f0c0

void __thiscall FSlateTextLayout::EndLayout(FSlateTextLayout *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar7 = *(longlong *)&this->field_0x20;
  iVar1 = *(int *)&this->field_0x28;
  piVar5 = (int *)(lVar7 + 0x30);
  lVar6 = (longlong)iVar1 * 0x70 + lVar7;
  while( true ) {
    if (*(int *)&this->field_0x28 != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar7 == lVar6) break;
    iVar2 = *piVar5;
    puVar3 = *(undefined8 **)(piVar5 + -2);
    puVar4 = puVar3 + (longlong)iVar2 * 6;
    while( true ) {
      if (*piVar5 != iVar2) {
        `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar3 == puVar4) break;
      (**(code **)(*(longlong *)*puVar3 + 0x68))();
      puVar3 = puVar3 + 6;
    }
    lVar7 = lVar7 + 0x70;
    piVar5 = piVar5 + 0x1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00014286f16e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x50))(this);
  return;
}

// GetChildren @ 1428759b0

FChildren * __thiscall FSlateTextLayout::GetChildren(FSlateTextLayout *this)

{
  return (FChildren *)&this->Children;
}

// GetDefaultTextStyle @ 1428762f0

FTextBlockStyle * __thiscall FSlateTextLayout::GetDefaultTextStyle(FSlateTextLayout *this)

{
  return &this->DefaultTextStyle;
}

// OnPaint @ 14288ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateTextLayout::OnPaint
          (FSlateTextLayout *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float afVar13 [2];
  float afVar14 [2];
  float afVar15 [2];
  float afVar16 [2];
  bool bVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  FSlateRotatedRect *pFVar23;
  double *pdVar24;
  FLinearColor *pFVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  char cVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  undefined8 *puVar32;
  longlong lVar33;
  longlong *plVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  undefined1 auStackY_498 [32];
  char local_436;
  int local_434;
  int local_430;
  int local_428;
  uint local_424;
  uint local_418;
  longlong local_3e0;
  longlong local_3c8;
  longlong local_398;
  longlong local_390;
  longlong *local_388;
  TReferenceControllerBase<1> *local_380;
  longlong *local_378;
  undefined8 *local_370;
  FTextBlockStyle *local_368;
  char local_360;
  char local_35f;
  char local_35e;
  undefined1 local_35d;
  FSlateRect local_358;
  FSlateRect local_348;
  FSlateRect local_338;
  FSlateRect local_328;
  FSlateRect local_318;
  FLinearColor_u_0 local_308;
  TVector2<float>_u_0 local_2f8;
  float local_2f0;
  undefined8 local_2ec;
  float local_2e4;
  TVector2<float>_u_0 local_2e0;
  float local_2d8;
  undefined8 local_2d4;
  float local_2cc;
  TVector2<float>_u_0 local_2c8;
  float local_2c0;
  undefined8 local_2bc;
  float local_2b4;
  TVector2<float>_u_0 local_2b0;
  float local_2a8;
  undefined8 local_2a4;
  float local_29c;
  TVector2<float>_u_0 local_298;
  float local_290;
  undefined8 local_28c;
  float local_284;
  longlong local_280;
  TVector2<float>_u_0_s_0 local_274;
  float local_268 [4];
  undefined1 local_258 [8];
  TReferenceControllerBase<1> *local_250;
  undefined1 local_248 [8];
  TReferenceControllerBase<1> *local_240;
  TTransform2<float> local_238;
  TTransform2<float> local_220;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  FLinearColor local_1c8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  FSlateRotatedRect local_198;
  FSlateRotatedRect local_180;
  FSlateRotatedRect local_168;
  FSlateRotatedRect local_150;
  FSlateRotatedRect local_138;
  TVector2<float>_u_0 local_120;
  float local_118;
  undefined8 local_114;
  undefined8 local_10c;
  float local_104 [2];
  float afStack_fc [2];
  TVector2<float>_u_0 local_f4;
  byte local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_498;
  fVar40 = __real_3f800000 / param_2->Scale;
  lVar22 = 0x158;
  if (this->field_0x159 == '\0') {
    lVar22 = 0x431;
  }
  iVar6 = *(int *)&this->field_0x38;
  uVar30 = 0;
  uVar20 = 0;
  cVar4 = (&this->field_0x0)[lVar22];
  local_430 = param_5;
  local_424 = 0;
  local_268._0_8_ = ___xmm_3f0000003f8000003f80000000000000;
  local_268._8_8_ = _UNK_150961338;
  iVar19 = iVar6;
  if (1 < iVar6) {
    if (cVar4 == '\x02') {
      uVar30 = 0;
      lVar22 = 0;
      dVar11 = (double)fVar40;
      do {
        uVar31 = 0;
        if ((int)uVar30 < *(int *)&this->field_0x38) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          iVar19 = (*pcVar9)();
          return iVar19;
        }
        pdVar24 = (double *)(*(longlong *)&this->field_0x30 + 0x40 + lVar22);
        dVar2 = *pdVar24;
        dVar3 = pdVar24[1];
        uVar31 = 0;
        if ((int)uVar30 < *(int *)&this->field_0x38) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          iVar19 = (*pcVar9)();
          return iVar19;
        }
        local_2ec = 0;
        pdVar24 = (double *)(*(longlong *)&this->field_0x30 + 0x30 + lVar22);
        dVar38 = dVar11 * *pdVar24;
        dVar39 = dVar11 * pdVar24[1];
        local_2f8._s_0.X = (float)dVar38;
        local_2f8._s_0.Y = (float)dVar39;
        local_2f0 = (float)(dVar11 * dVar2 + dVar38) - local_2f8._s_0.X;
        local_2e4 = (float)(dVar11 * dVar3 + dVar39) - local_2f8._s_0.Y;
        pFVar23 = TransformRect<TTransform2<float>_>
                            (&local_198,&param_2->AccumulatedRenderTransform,
                             (FSlateRotatedRect *)&local_2f8._s_0);
        FSlateRotatedRect::ToBoundingRect(pFVar23,&local_358);
        local_358.Left = param_3->Left;
        local_358.Right = param_3->Right;
        if ((param_3->Top <= local_358.Top) &&
           (local_358.Bottom < param_3->Bottom || local_358.Bottom == param_3->Bottom)) {
          uVar20 = uVar30;
        }
        uVar30 = uVar30 + 1;
        lVar22 = lVar22 + 0x68;
      } while ((int)uVar30 < *(int *)&this->field_0x38);
    }
    else {
      if (cVar4 != '\x01') {
        local_424 = iVar6 - 1;
        goto LAB_14288adf2;
      }
      uVar31 = 0;
      lVar22 = 0;
      dVar11 = (double)fVar40;
      do {
        uVar21 = 0;
        if ((int)uVar31 < *(int *)&this->field_0x38) {
          uVar21 = ~uVar31 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          iVar19 = (*pcVar9)();
          return iVar19;
        }
        pdVar24 = (double *)(*(longlong *)&this->field_0x30 + 0x40 + lVar22);
        dVar2 = *pdVar24;
        dVar3 = pdVar24[1];
        uVar21 = 0;
        if ((int)uVar31 < *(int *)&this->field_0x38) {
          uVar21 = ~uVar31 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          iVar19 = (*pcVar9)();
          return iVar19;
        }
        local_2d4 = 0;
        pdVar24 = (double *)(*(longlong *)&this->field_0x30 + 0x30 + lVar22);
        dVar38 = dVar11 * *pdVar24;
        dVar39 = dVar11 * pdVar24[1];
        local_2e0._s_0.X = (float)dVar38;
        local_2e0._s_0.Y = (float)dVar39;
        local_2d8 = (float)(dVar11 * dVar2 + dVar38) - local_2e0._s_0.X;
        local_2cc = (float)(dVar11 * dVar3 + dVar39) - local_2e0._s_0.Y;
        pFVar23 = TransformRect<TTransform2<float>_>
                            (&local_180,&param_2->AccumulatedRenderTransform,
                             (FSlateRotatedRect *)&local_2e0._s_0);
        FSlateRotatedRect::ToBoundingRect(pFVar23,&local_348);
        if ((((local_348.Left < param_3->Right || local_348.Left == param_3->Right) &&
             (param_3->Left <= local_348.Right)) &&
            (local_348.Top < param_3->Bottom || local_348.Top == param_3->Bottom)) &&
           (uVar20 = uVar30, param_3->Top <= local_348.Bottom)) {
          uVar20 = uVar31;
          uVar30 = uVar31;
        }
        uVar31 = uVar31 + 1;
        lVar22 = lVar22 + 0x68;
      } while ((int)uVar31 < *(int *)&this->field_0x38);
    }
    iVar19 = uVar20 + 1;
    local_424 = uVar20;
  }
LAB_14288adf2:
  afVar15 = _UNK_15076b188;
  afVar13 = ___xmm_3f80000000000000000000003f800000;
  fVar12 = __real_42480000;
  local_390 = (longlong)iVar19;
  local_418 = 0;
  if (0 < iVar19) {
    dVar11 = (double)fVar40;
    local_398 = 0;
    do {
      uVar20 = 0;
      if ((int)local_418 < *(int *)&this->field_0x38) {
        uVar20 = ~local_418 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        iVar19 = (*pcVar9)();
        return iVar19;
      }
      plVar34 = (longlong *)(local_398 + *(longlong *)&this->field_0x30);
      local_2bc = 0;
      local_2c8._s_0.X = (float)(dVar11 * (double)plVar34[6]);
      local_2c8._s_0.Y = (float)(dVar11 * (double)plVar34[7]);
      local_2c0 = (float)(dVar11 * (double)plVar34[8] + dVar11 * (double)plVar34[6]) -
                  local_2c8._s_0.X;
      local_2b4 = (float)(dVar11 * (double)plVar34[9] + dVar11 * (double)plVar34[7]) -
                  local_2c8._s_0.Y;
      pFVar23 = TransformRect<TTransform2<float>_>
                          (&local_168,&param_2->AccumulatedRenderTransform,
                           (FSlateRotatedRect *)&local_2c8._s_0);
      FSlateRotatedRect::ToBoundingRect(pFVar23,&local_338);
      iVar19 = local_430;
      if ((((local_338.Left < param_3->Right || local_338.Left == param_3->Right) &&
           (param_3->Left <= local_338.Right)) &&
          (local_338.Top < param_3->Bottom || local_338.Top == param_3->Bottom)) &&
         (param_3->Top <= local_338.Bottom)) {
        uVar20 = (**(code **)(*(longlong *)this + 0x48))(this,param_1,plVar34,plVar34 + 2);
        bVar35 = false;
        bVar17 = false;
        local_434 = uVar20 + 1;
        if ((byte)(cVar4 - 1U) < 3) {
          if (iVar6 < 2) {
            iVar19 = *(int *)&this->field_0xb0;
            bVar35 = true;
            if ((char)plVar34[0xc] == '\x01') {
              if (iVar19 == 0) {
                iVar19 = 2;
                goto LAB_14288b273;
              }
              if (iVar19 != 2) goto LAB_14288b2af;
            }
            else {
LAB_14288b2af:
              if (iVar19 != 0) {
LAB_14288b273:
                cVar28 = '\0';
                if (iVar19 == 2) {
                  cVar28 = '\x02';
                }
                goto LAB_14288b292;
              }
            }
            iVar19 = (int)plVar34[1];
            iVar29 = 1;
            local_428 = 1;
            uVar30 = 0;
            cVar28 = '\x01';
          }
          else {
            if (cVar4 == '\x03') {
              cVar28 = '\0';
            }
            else {
              bVar35 = local_418 == local_424;
              if (((int)(local_418 + 1) < 0) || (*(int *)&this->field_0x38 <= (int)(local_418 + 1)))
              {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              bVar17 = bVar17 && bVar35;
              cVar28 = ((char)plVar34[0xc] != '\0') + '\x01';
            }
            uVar31 = 0xffffffff;
            local_428 = 0;
            if (!bVar35) {
              cVar28 = '\0';
              local_436 = '\0';
              goto LAB_14288b48f;
            }
LAB_14288b292:
            local_428 = 0;
            uVar30 = 0;
            iVar19 = 0;
            if (cVar28 == '\x01') {
              iVar19 = (int)plVar34[1];
              iVar29 = 1;
              local_428 = 1;
              uVar30 = 0;
            }
            else if (cVar28 == '\x02') {
              iVar19 = -1;
              uVar30 = (int)plVar34[1] - 1;
              local_428 = -1;
              iVar29 = -1;
            }
            else {
              iVar29 = 0;
            }
          }
          uVar31 = 0xffffffff;
          lVar22 = (longlong)(int)uVar30;
          local_436 = cVar4;
          if (lVar22 != iVar19) {
            lVar33 = lVar22 << 4;
            do {
              uVar21 = 0;
              if ((int)uVar30 < (int)plVar34[1]) {
                uVar21 = ~uVar30 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar9 = (code *)swi(3);
                iVar19 = (*pcVar9)();
                return iVar19;
              }
              lVar7 = *plVar34;
              plVar27 = *(longlong **)(lVar7 + lVar33);
              pdVar24 = (double *)(**(code **)(*plVar27 + 0x18))(plVar27,local_208);
              plVar27 = *(longlong **)(lVar7 + lVar33);
              dVar2 = *pdVar24;
              dVar3 = pdVar24[1];
              pdVar24 = (double *)(**(code **)(*plVar27 + 0x38))(plVar27,local_1f8);
              local_2a4 = 0;
              local_2b0._s_0.X = (float)((double)fVar40 * *pdVar24);
              local_2b0._s_0.Y = (float)((double)fVar40 * pdVar24[1]);
              local_2a8 = (float)((double)fVar40 * dVar2 + (double)fVar40 * *pdVar24) -
                          local_2b0._s_0.X;
              local_29c = (float)((double)fVar40 * dVar3 + (double)fVar40 * pdVar24[1]) -
                          local_2b0._s_0.Y;
              pFVar23 = TransformRect<TTransform2<float>_>
                                  (&local_150,&param_2->AccumulatedRenderTransform,
                                   (FSlateRotatedRect *)&local_2b0._s_0);
              FSlateRotatedRect::ToBoundingRect(pFVar23,&local_328);
              if ((((local_328.Left < param_3->Right || local_328.Left == param_3->Right) &&
                   (param_3->Left <= local_328.Right)) &&
                  (local_328.Top < param_3->Bottom || local_328.Top == param_3->Bottom)) &&
                 (param_3->Top <= local_328.Bottom)) {
                uVar31 = uVar30;
              }
              lVar33 = lVar33 + (longlong)iVar29 * 0x10;
              uVar30 = uVar30 + local_428;
              lVar22 = lVar22 + local_428;
            } while (lVar22 != iVar19);
          }
        }
        else {
          uVar31 = 0xffffffff;
          local_428 = 0;
          cVar28 = '\0';
          local_436 = '\0';
          bVar35 = false;
        }
LAB_14288b48f:
        iVar19 = (int)plVar34[1];
        uVar30 = 0;
        local_3c8 = 0;
        if (0 < iVar19) {
          local_280 = (longlong)(int)uVar31;
          local_3e0 = 0;
          do {
            uVar31 = 0;
            if ((int)uVar30 < iVar19) {
              uVar31 = ~uVar30 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              iVar19 = (*pcVar9)();
              return iVar19;
            }
            puVar32 = (undefined8 *)(*plVar34 + local_3e0);
            pdVar24 = (double *)
                      (**(code **)(*(longlong *)*puVar32 + 0x18))((longlong *)*puVar32,local_1e8);
            dVar2 = *pdVar24;
            dVar3 = pdVar24[1];
            pdVar24 = (double *)
                      (**(code **)(*(longlong *)*puVar32 + 0x38))((longlong *)*puVar32,local_1d8);
            local_28c = 0;
            local_298._s_0.X = (float)((double)fVar40 * *pdVar24);
            local_298._s_0.Y = (float)((double)fVar40 * pdVar24[1]);
            local_290 = (float)((double)fVar40 * dVar2 + (double)fVar40 * *pdVar24) -
                        local_298._s_0.X;
            local_284 = (float)((double)fVar40 * dVar3 + (double)fVar40 * pdVar24[1]) -
                        local_298._s_0.Y;
            pFVar23 = TransformRect<TTransform2<float>_>
                                (&local_138,&param_2->AccumulatedRenderTransform,
                                 (FSlateRotatedRect *)&local_298._s_0);
            FSlateRotatedRect::ToBoundingRect(pFVar23,&local_318);
            if (((local_318.Left < param_3->Right || local_318.Left == param_3->Right) &&
                (param_3->Left <= local_318.Right)) &&
               ((local_318.Top < param_3->Bottom || local_318.Top == param_3->Bottom &&
                (param_3->Top <= local_318.Bottom)))) {
              if (GShowTextDebugging != 0) {
                local_268[0] = local_268[0] + fVar12;
                pFVar25 = FLinearColor::HSVToLinearRGB((FLinearColor *)local_268,&local_1c8);
                local_308._s_0.R =
                     (param_6->ColorAndOpacityTint).field0_0x0._s_0.R * (pFVar25->field0_0x0)._s_0.R
                ;
                local_308._s_0.A =
                     (pFVar25->field0_0x0)._s_0.A * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A
                ;
                local_308._s_0.B =
                     (pFVar25->field0_0x0)._s_0.B * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B
                ;
                local_308._s_0.G =
                     (pFVar25->field0_0x0)._s_0.G * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G
                ;
                pdVar24 = (double *)
                          (**(code **)(*(longlong *)*puVar32 + 0x38))
                                    ((longlong *)*puVar32,local_1b8);
                dVar10 = (double)fVar40;
                dVar2 = *pdVar24;
                dVar3 = pdVar24[1];
                pdVar24 = (double *)
                          (**(code **)(*(longlong *)*puVar32 + 0x18))
                                    ((longlong *)*puVar32,local_1a8);
                afVar16 = _UNK_15076b188;
                afVar14 = ___xmm_3f80000000000000000000003f800000;
                ___xmm_3f80000000000000000000003f800000 = afVar13[0];
                _UNK_15076b184 = afVar13[1];
                local_220.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
                local_220.M.M[0][1] = _UNK_15076b184;
                _UNK_15076b188 = afVar15[0];
                _UNK_15076b18c = afVar15[1];
                local_220.M.M[1][0] = _UNK_15076b188;
                local_220.M.M[1][1] = _UNK_15076b18c;
                dVar38 = *pdVar24;
                dVar39 = pdVar24[1];
                local_274 = (param_2->AbsolutePosition).field0_0x0._s_0;
                local_220.Trans.field0_0x0._s_0.Y = (float)(dVar10 * dVar3);
                local_220.Trans.field0_0x0._s_0.X = (float)(dVar10 * dVar2);
                fVar1 = param_2->Scale;
                fVar37 = fVar1 * (float)(dVar10 * dVar3) + local_274.Y;
                fVar36 = fVar1 * (float)(dVar10 * dVar2) + local_274.X;
                ___xmm_3f80000000000000000000003f800000 = afVar14;
                _UNK_15076b188 = afVar16;
                Concatenate<TTransform2<float>_>
                          (&local_238,&local_220,&param_2->AccumulatedRenderTransform);
                local_120._s_0.Y = fVar37;
                local_120._s_0.X = fVar36;
                local_10c = CONCAT44((float)(dVar10 * dVar39),(float)(dVar10 * dVar38));
                local_ec = param_2->bHasRenderTransform * '\x02' | local_ec & 0xfc;
                local_114 = 0;
                local_104[0] = local_238.M.M[0][0];
                local_104[1] = local_238.M.M[0][1];
                afStack_fc[0] = local_238.M.M[1][0];
                afStack_fc[1] = local_238.M.M[1][1];
                local_f4 = local_238.Trans.field0_0x0;
                local_118 = fVar1;
                FSlateDrawElement::MakeBox
                          (param_4,uVar20,(FPaintGeometry *)&local_120._s_0,
                           &(this->DefaultTextStyle).HighlightShape,!param_7 << 5,
                           (FLinearColor *)&local_308._s_0);
              }
              local_360 = local_436;
              if ((bVar35) && (local_3c8 == local_280)) {
                local_35e = '\x01';
              }
              else {
                local_35e = '\0';
              }
              if ((bVar17) &&
                 ((((int)(local_428 + uVar30) < 0 || ((int)plVar34[1] <= (int)(local_428 + uVar30)))
                  || (local_35e != '\0')))) {
                local_35d = 1;
              }
              else {
                local_35d = 0;
              }
              local_378 = plVar34;
              local_370 = puVar32;
              local_368 = &this->DefaultTextStyle;
              local_35f = cVar28;
              puVar26 = (undefined8 *)
                        (**(code **)(*(longlong *)*puVar32 + 8))((longlong *)*puVar32,local_258);
              local_388 = (longlong *)*puVar26;
              local_380 = (TReferenceControllerBase<1> *)puVar26[1];
              if (local_380 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_380->SharedReferenceCount =
                     (atomic<int>)((int)local_380->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_250);
              plVar27 = (longlong *)
                        (**(code **)(*(longlong *)*puVar32 + 0x28))((longlong *)*puVar32,local_248);
              pTVar8 = (TReferenceControllerBase<1> *)plVar27[1];
              plVar27 = (longlong *)*plVar27;
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_240);
              if (plVar27 == (longlong *)0x0) {
                iVar19 = (**(code **)(*local_388 + 0xa0))(local_388,param_1,&local_378,param_2);
              }
              else {
                iVar19 = (**(code **)(*plVar27 + 8))(plVar27,param_1,plVar34,&local_388);
              }
              if (iVar19 < local_434) {
                iVar19 = local_434;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_380);
              local_434 = iVar19;
            }
            iVar19 = (int)plVar34[1];
            local_3c8 = local_3c8 + 1;
            local_3e0 = local_3e0 + 0x10;
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < iVar19);
        }
        iVar19 = (**(code **)(*(longlong *)this + 0x48))(this,param_1,plVar34,plVar34 + 4);
        if (iVar19 < local_430) {
          iVar19 = local_430;
        }
      }
      local_430 = iVar19;
      local_418 = local_418 + 1;
      local_398 = local_398 + 0x68;
      local_390 = local_390 + -1;
      param_5 = local_430;
    } while (local_390 != 0);
  }
  return param_5;
}

// OnPaintHighlights @ 14288f530

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateTextLayout::OnPaintHighlights
          (FSlateTextLayout *this,FPaintArgs *param_1,FLineView *param_2,
          TArray<FTextLayout::FLineViewHighlight,TSizedDefaultAllocator<32>_> *param_3,
          FTextBlockStyle *param_4,FGeometry *param_5,FSlateRect *param_6,
          FSlateWindowElementList *param_7,int param_8,FWidgetStyle *param_9,bool param_10)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar2 = param_3->ArrayNum;
  pFVar6 = (param_3->AllocatorInstance).Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
  iVar5 = param_8;
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTextLayout::FLineViewHighlight_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_8);
    }
    if (pFVar6 == pFVar1) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar6 + 0x20);
    plVar4 = *(longlong **)(pFVar6 + 0x18);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      local_38 = *(undefined8 *)pFVar6;
      uStack_30 = *(undefined8 *)(pFVar6 + 8);
      iVar5 = (**(code **)(*plVar4 + 8))
                        (plVar4,param_1,param_2,&local_38,*(undefined4 *)(pFVar6 + 0x10),param_4,
                         param_5,param_6,param_7,iVar5,param_9,param_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar6 = pFVar6 + 0x28;
  }
  return iVar5;
}

// SetDefaultTextStyle @ 142895f90

void __thiscall
FSlateTextLayout::SetDefaultTextStyle(FSlateTextLayout *this,FTextBlockStyle *param_1)

{
  FTextBlockStyle::operator=(&this->DefaultTextStyle,param_1);
  FTextBlockStyle::~FTextBlockStyle(param_1);
  return;
}

// SetIsPassword @ 142896ec0

void __thiscall FSlateTextLayout::SetIsPassword(FSlateTextLayout *this,TAttribute<bool> *param_1)

{
  (this->bIsPassword).Value = param_1->Value;
  (this->bIsPassword).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsPassword).Getter,&param_1->Getter);
  return;
}

