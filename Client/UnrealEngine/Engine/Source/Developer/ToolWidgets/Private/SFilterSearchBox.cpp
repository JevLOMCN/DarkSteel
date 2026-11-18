// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 20

// Construct @ 142d7fe30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFilterSearchBox::Construct(SFilterSearchBox *this,FArguments *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  TSharedPtr<FText,1> *this_00;
  TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  FName FVar8;
  code *pcVar9;
  FSharedReferencer<1> FVar10;
  FSharedReferencer<1> FVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  FText *pFVar17;
  FText *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  FArguments *pFVar20;
  FArguments *pFVar21;
  undefined8 *puVar22;
  TSharedRef<SWidget,1> *pTVar23;
  ulong64 uVar24;
  TSharedRef<SWidget_const_,1> *pTVar25;
  SFilterSearchBoxImpl *pSVar26;
  SFilterSearchBoxImpl *pSVar27;
  FArguments *pFVar28;
  FName *pFVar29;
  ISlateStyle *pIVar30;
  FArguments *pFVar31;
  SListView<TSharedPtr<FText,1>_> *pSVar32;
  SListView<TSharedPtr<FText,1>_> *pSVar33;
  TSharedRef<SBorder,1> *pTVar34;
  SMenuAnchor *pSVar35;
  SMenuAnchor *pSVar36;
  uint uVar37;
  FArguments *pFVar38;
  longlong *this_01;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FName local_1288;
  undefined4 uStack_1280;
  undefined4 uStack_127c;
  T0RequiredArgs local_1278;
  T0RequiredArgs local_1277 [7];
  SWidget *local_1270;
  FLLMScope local_1268;
  FLLMScope local_1264;
  FLLMScope local_1260;
  FLLMScope local_125c;
  FName local_1258;
  undefined4 uStack_1250;
  undefined4 uStack_124c;
  SWidget *local_1248;
  TReferenceControllerBase<1> *pTStack_1240;
  uint local_1238;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_1230;
  TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs> local_1218;
  TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs> local_1200;
  TSharedRef<SBorder,1> local_11e8;
  FText local_11d8;
  bool local_11c8;
  undefined1 local_11c0 [8];
  ForAnyElementType FStack_11b8;
  int local_11b0;
  undefined4 local_11a8;
  undefined1 local_11a4;
  undefined1 local_11a0 [8];
  void *pvStack_1198;
  undefined8 local_1190;
  bool local_1188;
  bool local_1187;
  undefined1 local_1180 [8];
  void *pvStack_1178;
  undefined4 local_1170;
  undefined4 local_1168;
  undefined1 local_1164;
  undefined1 local_1160 [8];
  void *pvStack_1158;
  undefined8 local_1150;
  FText local_1148;
  bool local_1138;
  undefined1 local_1130 [8];
  void *pvStack_1128;
  undefined4 local_1120;
  undefined1 local_1118 [4];
  undefined1 local_1114 [4];
  TRawPtrProxy<FText> local_1110;
  FMemScope local_1108;
  FMemScope local_1100;
  FName local_10f8;
  FMemScope local_10f0;
  FName local_10e8;
  FMemScope local_10e0;
  undefined8 local_10d8;
  FSharedReferencer<1> FStack_10d0;
  TSharedPtr<SWidget,1> local_10c8;
  TAttribute<FSlateBrush_const_*> local_10b8;
  FDestructionSentinel local_1090;
  FDestructionSentinel local_1078;
  undefined1 *local_1060;
  FDestructionSentinel local_1058;
  undefined1 *local_1040;
  FDestructionSentinel local_1038;
  undefined1 *local_1020;
  FDestructionSentinel local_1018;
  undefined1 *local_1000;
  FDestructionSentinel local_ff8;
  undefined1 *local_fe0;
  FDestructionSentinel local_fd8;
  undefined1 *local_fc0;
  TAttribute<FMargin> local_fb8;
  SListView<TSharedPtr<FText,1>_> *local_f88;
  TReferenceControllerBase<1> *pTStack_f80;
  SWidget *local_f78;
  TReferenceControllerBase<1> *pTStack_f70;
  SMenuAnchor *local_f68;
  TReferenceControllerBase<1> *pTStack_f60;
  longlong local_f58;
  TReferenceControllerBase<1> *pTStack_f50;
  SWidget *local_f48;
  TReferenceControllerBase<1> *pTStack_f40;
  TSharedRef<SWidget,1> local_f38;
  SFilterSearchBoxImpl *local_f28;
  TReferenceControllerBase<1> *pTStack_f20;
  TSharedRef<SWidget_const_,1> local_f18;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_f08;
  TSharedRef<SWidget,1> local_ef0;
  TSharedRef<SWidget,1> local_ee0;
  TSharedRef<SWidget,1> local_ed0;
  FName local_ec0;
  TSharedRef<SWidget,1> local_eb8;
  undefined1 local_ea8 [552];
  undefined1 local_c80 [24];
  undefined1 local_c68 [32];
  undefined1 local_c48 [32];
  FArguments local_c28;
  FArguments local_920;
  FArguments local_540;
  undefined8 uStack_48;
  
  uStack_48 = 0x142d7fe58;
  this->MaxSearchHistory = param_1->_MaxSearchHistory;
  local_1238 = 0;
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnTextChanged,&param_1->_OnTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommitted,&param_1->_OnTextCommitted);
  (this->bShowSearchHistory).Value = (param_1->_ShowSearchHistory).Value;
  (this->bShowSearchHistory).bIsSet = (param_1->_ShowSearchHistory).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bShowSearchHistory).Getter,&(param_1->_ShowSearchHistory).Getter);
  uVar37 = (param_1->_SearchHistory).ArrayNum;
  if (uVar37 == 0) {
    pFVar17 = ::operator_new(0x10);
    local_1110.Object = (FText *)0x0;
    if (pFVar17 != (FText *)0x0) {
      local_1110.Object =
           FText::AsLocalizable_Advanced_LocText
                     (pFVar17,L"CustomTextFilter",L"EmptySearchHistoryText",
                      L"The Search History is Empty");
    }
    this_00 = &this->EmptySearchHistoryText;
    TSharedPtr<FText,1>::operator=<FText>(this_00,&local_1110);
    pTVar4 = &this->SearchHistory;
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar5 <= this_00) && (this_00 < pFVar5 + (longlong)(this->SearchHistory).ArrayMax * 0x10)
        ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar16 = (this->SearchHistory).ArrayNum;
    piVar1 = &(this->SearchHistory).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->SearchHistory).ArrayNum = iVar16 + 1;
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    *(FText **)(pFVar5 + (longlong)iVar16 * 0x10) = this_00->Object;
    pTVar6 = (this->EmptySearchHistoryText).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar16 * 0x10 + 8) = pTVar6;
    uVar37 = 0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      uVar37 = 0;
    }
  }
  else {
    pTVar4 = &this->SearchHistory;
    if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
    }
    if ((this->SearchHistory).ArrayMax < (int)uVar37) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar37,&pTVar4->AllocatorInstance,(this->SearchHistory).ArrayNum,
                 &(this->SearchHistory).ArrayMax);
    }
    pTVar6 = _UNK_150651568;
    pSVar7 = ___xmm_00000000000000000000000000000010;
    pFVar17 = (param_1->_SearchHistory).DataPtr;
    pFVar18 = pFVar17 + (param_1->_SearchHistory).ArrayNum;
    uVar37 = 0;
    for (; pFVar17 != pFVar18; pFVar17 = pFVar17 + 1) {
      pTVar19 = ::operator_new(0x20);
      if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        local_1248 = pSVar7;
        pTStack_1240 = pTVar6;
      }
      else {
        pTVar19->SharedReferenceCount = (atomic<int>)0x1;
        pTVar19->WeakReferenceCount = (atomic<int>)0x1;
        pTVar19->_padding_ =
             (longlong)&___7__TIntrusiveReferenceController_VFText___00_SharedPointerInternals__6B_;
        FText::FText((FText *)(pTVar19 + 1),pFVar17);
        local_1270 = (SWidget *)(pTVar19 + 1);
        if ((local_1270 == (SWidget *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        LOCK();
        pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
        UNLOCK();
        local_1248 = local_1270;
        pTStack_1240 = pTVar19;
      }
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_1248) &&
          ((FScriptContainerElement *)&local_1248 <
           pFVar5 + (longlong)(this->SearchHistory).ArrayMax * 0x10)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = (this->SearchHistory).ArrayNum;
      if (iVar16 == (this->SearchHistory).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,&(this->SearchHistory).ArrayMax);
      }
      (this->SearchHistory).ArrayNum = iVar16 + 1;
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      *(SWidget **)(pFVar5 + (longlong)iVar16 * 0x10) = local_1248;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar16 * 0x10 + 8) = pTStack_1240;
      pTStack_1240 = (TReferenceControllerBase<1> *)0x0;
      local_1248 = (SWidget *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
      uVar37 = local_1238;
    }
  }
  pFVar20 = SMenuAnchor::FArguments::FArguments((FArguments *)local_ea8);
  local_1164 = 1;
  local_1168 = 4;
  local_1150 = 0;
  local_1160 = (undefined1  [8])0x0;
  pvStack_1158 = (void *)0x0;
  (pFVar20->_Placement).Value = MenuPlacement_ComboBoxRight;
  (pFVar20->_Placement).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Placement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1160);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1160);
  if (pvStack_1158 != (void *)0x0) {
    FMemory::Free(pvStack_1158);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1160);
  pFVar21 = SFilterSearchBoxImpl::FArguments::FArguments(&local_c28);
  local_1148.TextData.Reference = (param_1->_InitialText).Value.TextData.Reference;
  if (local_1148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1148.TextData.Reference + 8))
              (local_1148.TextData.Reference,local_1118);
  }
  local_1148.Flags = (param_1->_InitialText).Value.Flags;
  local_1138 = (param_1->_InitialText).bIsSet;
  local_1130 = (undefined1  [8])0x0;
  pvStack_1128 = (void *)0x0;
  local_1120 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1130,
             &(param_1->_InitialText).Getter);
  FText::operator=(&(pFVar21->_InitialText).Value,&local_1148);
  (pFVar21->_InitialText).bIsSet = local_1138;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_InitialText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1130);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1130);
  if (pvStack_1128 != (void *)0x0) {
    FMemory::Free(pvStack_1128);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1130);
  if (local_1148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1148.TextData.Reference + 0x10))();
  }
  local_11d8.TextData.Reference = (param_1->_HintText).Value.TextData.Reference;
  if (local_11d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_11d8.TextData.Reference + 8))
              (local_11d8.TextData.Reference,local_1114);
  }
  local_11d8.Flags = (param_1->_HintText).Value.Flags;
  local_11c8 = (param_1->_HintText).bIsSet;
  local_11c0 = (undefined1  [8])0x0;
  FStack_11b8.Data = (FScriptContainerElement *)0x0;
  local_11b0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_11c0,
             &(param_1->_HintText).Getter);
  FText::operator=(&(pFVar21->_HintText).Value,&local_11d8);
  (pFVar21->_HintText).bIsSet = local_11c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_11c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11c0,
             (FWriteAccessScope *)&local_1090);
  if ((local_11b0 != 0) && (FStack_11b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_11b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_11b8,0,0,0x10);
    local_11b0 = 0;
  }
  if (local_1090.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1090.Accessor,&local_1090);
  }
  if (FStack_11b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_11b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11c0);
  if (local_11d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_11d8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnTextChanged,
             (FWriteAccessScope *)&local_1078);
  local_1060 = &(pFVar21->_OnTextChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1060);
  pFVar38 = pFVar20;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_127c = local_11e8.SharedReferenceCount.ReferenceController._4_4_;
    local_1288 = (FName)HandleTextChanged;
    uStack_1280 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ed0);
    pFVar38 = (FArguments *)(pTVar23->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar23->Object;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
    }
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSFilterSearchBox___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar7;
    puVar22[4] = pFVar38;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pFVar38->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    uVar37 = 7;
    *(FName *)(puVar22 + 5) = local_1288;
    puVar22[6] = CONCAT44(uStack_127c,uStack_1280);
  }
  if ((uVar37 & 4) != 0) {
    uVar37 = uVar37 & 0xfffffffb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 & 2) != 0) {
    uVar37 = uVar37 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 & 1) != 0) {
    uVar37 = uVar37 & 0xfffffffe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ed0.SharedReferenceCount.ReferenceController);
  }
  if (local_1078.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1078.Accessor,&local_1078);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnTextCommitted,
             (FWriteAccessScope *)&local_1058);
  local_1040 = &(pFVar21->_OnTextCommitted).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1040);
  pFVar38 = pFVar20;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_127c = local_11e8.SharedReferenceCount.ReferenceController._4_4_;
    local_1288 = (FName)HandleTextCommitted;
    uStack_1280 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ee0);
    pFVar38 = (FArguments *)(pTVar23->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar23->Object;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
    }
    uVar37 = uVar37 | 0x38;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSFilterSearchBox___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar7;
    puVar22[4] = pFVar38;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pFVar38->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    *(FName *)(puVar22 + 5) = local_1288;
    puVar22[6] = CONCAT44(uStack_127c,uStack_1280);
  }
  if ((uVar37 & 0x20) != 0) {
    uVar37 = uVar37 & 0xffffffdf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 & 0x10) != 0) {
    uVar37 = uVar37 & 0xffffffef;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 & 8) != 0) {
    uVar37 = uVar37 & 0xfffffff7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ee0.SharedReferenceCount.ReferenceController);
  }
  if (local_1058.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1058.Accessor,&local_1058);
  }
  local_1188 = (param_1->_DelayChangeNotificationsWhileTyping).Value;
  local_1187 = (param_1->_DelayChangeNotificationsWhileTyping).bIsSet;
  local_1180 = (undefined1  [8])0x0;
  pvStack_1178 = (void *)0x0;
  local_1170 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1180,
             &(param_1->_DelayChangeNotificationsWhileTyping).Getter);
  (pFVar21->_DelayChangeNotificationsWhileTyping).Value = local_1188;
  (pFVar21->_DelayChangeNotificationsWhileTyping).bIsSet = local_1187;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar21->_DelayChangeNotificationsWhileTyping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1180);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1180);
  if (pvStack_1178 != (void *)0x0) {
    FMemory::Free(pvStack_1178);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1180);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&pFVar21->_OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar21->_OnSearchHistoryClicked,(FWriteAccessScope *)&local_1038);
  local_1020 = &(pFVar21->_OnSearchHistoryClicked).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1020);
  pFVar38 = pFVar20;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_127c = local_11e8.SharedReferenceCount.ReferenceController._4_4_;
    local_1288 = (FName)OnClickedSearchHistory;
    uStack_1280 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ef0);
    pFVar38 = (FArguments *)(pTVar23->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar23->Object;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
    }
    uVar37 = uVar37 | 0x1c0;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSFilterSearchBox___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar7;
    puVar22[4] = pFVar38;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pFVar38->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    *(FName *)(puVar22 + 5) = local_1288;
    puVar22[6] = CONCAT44(uStack_127c,uStack_1280);
  }
  if ((uVar37 >> 8 & 1) != 0) {
    uVar37 = uVar37 & 0xfffffeff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((char)uVar37 < '\0') {
    uVar37 = uVar37 & 0xffffff7f;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 & 0x40) != 0) {
    uVar37 = uVar37 & 0xffffffbf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ef0.SharedReferenceCount.ReferenceController);
  }
  if (local_1038.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1038.Accessor,&local_1038);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar21->_GetSearchHistoryVisibility,(FWriteAccessScope *)&local_1018);
  local_1000 = &(pFVar21->_GetSearchHistoryVisibility).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1000);
  pFVar38 = pFVar20;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_127c = local_11e8.SharedReferenceCount.ReferenceController._4_4_;
    local_1288 = (FName)GetSearchHistoryVisibility;
    uStack_1280 = 0;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f18);
    pFVar38 = (FArguments *)(pTVar25->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar25->Object;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
    }
    uVar37 = uVar37 | 0xe00;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSFilterSearchBox___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar7;
    puVar22[4] = pFVar38;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pFVar38->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    *(FName *)(puVar22 + 5) = local_1288;
    puVar22[6] = CONCAT44(uStack_127c,uStack_1280);
  }
  if ((uVar37 >> 0xb & 1) != 0) {
    uVar37 = uVar37 & 0xfffff7ff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 >> 10 & 1) != 0) {
    uVar37 = uVar37 & 0xfffffbff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 >> 9 & 1) != 0) {
    uVar37 = uVar37 & 0xfffffdff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f18.SharedReferenceCount.ReferenceController);
  }
  if (local_1018.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1018.Accessor,&local_1018);
  }
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar21->_OnSaveSearchClicked,&param_1->_OnSaveSearchClicked);
  FLLMScope::FLLMScope(&local_1268,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1288 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1108,&local_1288,true);
  TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs>
            (&local_1218,"SFilterSearchBoxImpl",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0xb4,local_res18);
  FMemScope::~FMemScope(&local_1108);
  FLLMScope::~FLLMScope(&local_1268);
  if (local_1218._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1218._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1218._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_f28 = (this->SearchBox).Object;
  pTStack_f20 = (this->SearchBox).SharedReferenceCount.ReferenceController;
  (this->SearchBox).Object = local_1218._Widget.Object;
  (this->SearchBox).SharedReferenceCount.ReferenceController =
       local_1218._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f20);
  pSVar26 = TSharedPtr<SFilterSearchBoxImpl,1>::operator->(&local_1218._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar26,(FSlateBaseNamedArgs *)pFVar21);
  pSVar26 = local_1218._Widget.Object;
  SFilterSearchBoxImpl::Construct(local_1218._Widget.Object,pFVar21);
  pSVar27 = TSharedPtr<SFilterSearchBoxImpl,1>::operator->(&local_1218._Widget);
  if ((pSVar27->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)(pSVar27->_padding_ + 0x228))(pSVar27);
    bVar15 = 0;
    if (cVar14 == '\0') goto LAB_142d80a30;
  }
  bVar15 = 0x20;
LAB_142d80a30:
  *(byte *)&pSVar27->_padding_ = (byte)pSVar27->_padding_ & 0xdf;
  *(byte *)&pSVar27->_padding_ = (byte)pSVar27->_padding_ | bVar15;
  pSVar27 = TSharedPtr<SFilterSearchBoxImpl,1>::operator->(&local_1218._Widget);
  pbVar3 = (byte *)((longlong)&pSVar27->_padding_ + 1);
  *pbVar3 = *pbVar3 | 4;
  if ((local_1218._Widget.Object == (SFilterSearchBoxImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar11.ReferenceController = local_1218._Widget.SharedReferenceCount.ReferenceController;
  local_1218._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1218._Widget.Object = (SFilterSearchBoxImpl *)0x0;
  if ((pSVar26 == (SFilterSearchBoxImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f48 = (pFVar20->_Content).Widget.Object;
  pTStack_f40 = (pFVar20->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar20->_Content).Widget.Object = (SWidget *)pSVar26;
  (pFVar20->_Content).Widget.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f40);
  pFVar28 = SBorder::FArguments::FArguments(&local_920);
  pFVar29 = ::FName::FName(&local_ec0,"Menu.Background");
  FVar8 = *pFVar29;
  pIVar30 = FAppStyle::Get();
  local_10b8.Value = (FSlateBrush *)(**(code **)((longlong)*pIVar30 + 0x50))(pIVar30,FVar8);
  local_10b8.bIsSet = true;
  local_10b8.Getter._16_8_ = 0;
  local_10b8.Getter._0_8_ = 0;
  local_10b8.Getter._8_8_ = 0;
  pFVar28 = SBorder::FArguments::BorderImage(pFVar28,&local_10b8);
  local_fb8.bIsSet = true;
  local_fb8.Getter._16_8_ = 0;
  local_fb8.Value.Left = ___xmm_40000000400000004000000040000000;
  local_fb8.Value.Top = _UNK_15076ba34;
  local_fb8.Value.Right = _UNK_15076ba38;
  local_fb8.Value.Bottom = _UNK_15076ba3c;
  local_fb8.Getter._0_8_ = 0;
  local_fb8.Getter._8_8_ = 0;
  pFVar28 = SBorder::FArguments::Padding(pFVar28,&local_fb8);
  pFVar31 = SListView<TSharedPtr<FText,1>_>::FArguments::FArguments(&local_540);
  local_10d8 = 0;
  FStack_10d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar31->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar31->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FText,1>_> *)0x0;
  if (&pFVar31->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FText,1>_>,1> *)&local_10d8) {
    (pFVar31->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FText,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar31->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_10d0)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10d0.ReferenceController);
  pFVar31->_ListItemsSource_ArrayPointer = &this->SearchHistory;
  local_11a4 = 1;
  local_11a8 = 1;
  local_1190 = 0;
  local_11a0 = (undefined1  [8])0x0;
  pvStack_1198 = (void *)0x0;
  (pFVar31->_SelectionMode).Value = Single;
  (pFVar31->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar31->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a0);
  if (pvStack_1198 != (void *)0x0) {
    FMemory::Free(pvStack_1198);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnGenerateRow,
             (FWriteAccessScope *)&local_ff8);
  local_fe0 = &(pFVar31->_OnGenerateRow).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_fe0);
  pFVar38 = pFVar20;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_124c = local_11e8.SharedReferenceCount.ReferenceController._4_4_;
    local_1258 = (FName)MakeSearchHistoryRowWidget;
    uStack_1250 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f38);
    pFVar38 = (FArguments *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_1270 = pTVar23->Object;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
    }
    uVar37 = uVar37 | 0x7000;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFText___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSFilterSearchBox___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFText___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = local_1270;
    puVar22[4] = pFVar38;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pFVar38->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    *(FName *)(puVar22 + 5) = local_1258;
    puVar22[6] = CONCAT44(uStack_124c,uStack_1250);
  }
  if ((uVar37 >> 0xe & 1) != 0) {
    uVar37 = uVar37 & 0xffffbfff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 >> 0xd & 1) != 0) {
    uVar37 = uVar37 & 0xffffdfff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 >> 0xc & 1) != 0) {
    uVar37 = uVar37 & 0xffffefff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f38.SharedReferenceCount.ReferenceController);
  }
  if (local_ff8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ff8.Accessor,&local_ff8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_fd8);
  local_fc0 = &(pFVar31->_OnSelectionChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_fc0);
  pFVar38 = pFVar20;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_124c = local_11e8.SharedReferenceCount.ReferenceController._4_4_;
    local_1258 = (FName)OnSelectionChanged;
    uStack_1250 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_eb8);
    pFVar38 = (FArguments *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_1270 = pTVar23->Object;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
      UNLOCK();
    }
    uVar37 = uVar37 | 0x38000;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFText___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSFilterSearchBox___00__A6AXV__TSharedPtr_VFText___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = local_1270;
    puVar22[4] = pFVar38;
    if (pFVar38 != (FArguments *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pFVar38->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    *(FName *)(puVar22 + 5) = local_1258;
    puVar22[6] = CONCAT44(uStack_124c,uStack_1250);
  }
  if ((uVar37 >> 0x11 & 1) != 0) {
    uVar37 = uVar37 & 0xfffdffff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 >> 0x10 & 1) != 0) {
    uVar37 = uVar37 & 0xfffeffff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar38);
  }
  if ((uVar37 >> 0xf & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_eb8.SharedReferenceCount.ReferenceController);
  }
  if (local_fd8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_fd8.Accessor,&local_fd8);
  }
  pFVar31->_ScrollbarDragFocusCause = SetDirectly;
  FLLMScope::FLLMScope(&local_1264,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1258 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1100,&local_1258,true);
  TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_1200,"SListView< TSharedPtr<FText> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0xc5,local_res20);
  FMemScope::~FMemScope(&local_1100);
  FLLMScope::~FLLMScope(&local_1264);
  if (local_1200._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1200._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1200._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_f88 = (this->SearchHistoryListView).Object;
  pTStack_f80 = (this->SearchHistoryListView).SharedReferenceCount.ReferenceController;
  (this->SearchHistoryListView).Object = local_1200._Widget.Object;
  (this->SearchHistoryListView).SharedReferenceCount.ReferenceController =
       local_1200._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f80);
  pSVar32 = TSharedPtr<SListView<TSharedPtr<FText,1>_>,1>::operator->(&local_1200._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar32,(FSlateBaseNamedArgs *)pFVar31);
  pSVar32 = local_1200._Widget.Object;
  SListView<TSharedPtr<FText,1>_>::Construct(local_1200._Widget.Object,pFVar31);
  pSVar33 = TSharedPtr<SListView<TSharedPtr<FText,1>_>,1>::operator->(&local_1200._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar33);
  pSVar33 = TSharedPtr<SListView<TSharedPtr<FText,1>_>,1>::operator->(&local_1200._Widget);
  pbVar3 = (byte *)((longlong)&pSVar33->_padding_ + 1);
  *pbVar3 = *pbVar3 | 4;
  if ((local_1200._Widget.Object == (SListView<TSharedPtr<FText,1>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar12.ReferenceController = local_1200._Widget.SharedReferenceCount.ReferenceController;
  local_1200._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1200._Widget.Object = (SListView<TSharedPtr<FText,1>_> *)0x0;
  if ((pSVar32 == (SListView<TSharedPtr<FText,1>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f78 = (pFVar28->_Content).Widget.Object;
  pTStack_f70 = (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar28->_Content).Widget.Object = (SWidget *)pSVar32;
  (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f70);
  FLLMScope::FLLMScope(&local_1260,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10f0,&local_10f8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_f08,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0xc1,&local_1278);
  FMemScope::~FMemScope(&local_10f0);
  FLLMScope::~FLLMScope(&local_1260);
  pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f08,&local_11e8,pFVar28);
  pTVar6 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_10c8.Object = (SWidget *)pTVar34->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10c8.SharedReferenceCount.ReferenceController = pTVar6;
  TSharedPtr<SWidget,1>::operator=(&pFVar20->_MenuContent,&local_10c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(&local_125c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10e0,&local_10e8,true);
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
            (&local_1230,"SMenuAnchor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0xb1,local_1277);
  FMemScope::~FMemScope(&local_10e0);
  FLLMScope::~FLLMScope(&local_125c);
  if (local_1230._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1230._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1230._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_f68 = (this->SearchHistoryBox).Object;
  pTStack_f60 = (this->SearchHistoryBox).SharedReferenceCount.ReferenceController;
  (this->SearchHistoryBox).Object = local_1230._Widget.Object;
  (this->SearchHistoryBox).SharedReferenceCount.ReferenceController =
       local_1230._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f60);
  pSVar35 = TSharedPtr<SMenuAnchor,1>::operator->(&local_1230._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar35,(FSlateBaseNamedArgs *)pFVar20);
  pSVar35 = local_1230._Widget.Object;
  SMenuAnchor::Construct(local_1230._Widget.Object,pFVar20);
  pSVar36 = TSharedPtr<SMenuAnchor,1>::operator->(&local_1230._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar36);
  pSVar36 = TSharedPtr<SMenuAnchor,1>::operator->(&local_1230._Widget);
  pbVar3 = (byte *)((longlong)&pSVar36->_padding_ + 1);
  *pbVar3 = *pbVar3 | 4;
  if ((local_1230._Widget.Object == (SMenuAnchor *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar10.ReferenceController = local_1230._Widget.SharedReferenceCount.ReferenceController;
  local_1230._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1230._Widget.Object = (SMenuAnchor *)0x0;
  if ((pSVar35 == (SMenuAnchor *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_01 = &this->_padding_;
  if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f58 = this->_padding_;
  pTStack_f50 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar35;
  this->_padding_ = (longlong)FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f50);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1230._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_11e8.SharedReferenceCount.ReferenceController._4_4_,
                      local_11e8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1200._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FText,1>_>::FArguments::~FArguments(&local_540);
  SBorder::FArguments::~FArguments(&local_920);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1218._Widget.SharedReferenceCount.ReferenceController);
  SFilterSearchBoxImpl::FArguments::~FArguments(&local_c28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c48);
  if ((void *)local_c48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c68);
  if ((void *)local_c68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c80);
  if ((void *)local_c80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_ea8._544_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_ea8._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_ea8);
  return;
}

// GetSearchHistory @ 142db06f0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FText,TSizedDefaultAllocator<32>_> * __thiscall
SFilterSearchBox::GetSearchHistory
          (SFilterSearchBox *this,TArray<FText,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar2 = (this->SearchHistory).ArrayNum;
  if (uVar2 == 1) {
    if (*(FText **)(this->SearchHistory).AllocatorInstance.Data ==
        (this->EmptySearchHistoryText).Object) {
      return __return_storage_ptr__;
    }
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < 1) goto LAB_142db075e;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
LAB_142db075e:
  pFVar10 = (this->SearchHistory).AllocatorInstance.Data;
  iVar3 = (this->SearchHistory).ArrayNum;
  pFVar11 = pFVar10 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->SearchHistory).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FText,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    pFVar4 = *(FScriptContainerElement **)pFVar10;
    pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar12 <= pFVar4) && (pFVar4 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<FText,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar9;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(longlong *)pFVar12 = 0;
    plVar5 = *(longlong **)pFVar4;
    *(longlong **)pFVar12 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5,local_res10);
    }
    pFVar10 = pFVar10 + 0x10;
    *(undefined4 *)(pFVar12 + 8) = *(undefined4 *)(pFVar4 + 8);
  }
  return __return_storage_ptr__;
}

// GetSearchHistoryVisibility @ 142db08b0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SFilterSearchBox::GetSearchHistoryVisibility(SFilterSearchBox *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  pbVar1 = TAttribute<bool>::Get(&this->bShowSearchHistory);
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSelection @ 142db1910

/* WARNING: Enum "Type": Some values do not have unique names */

FTextSelection * __thiscall
SFilterSearchBox::GetSelection(SFilterSearchBox *this,FTextSelection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FTextSelection *pFVar3;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTextSelection *)(*pcVar1)();
      return pFVar3;
    }
  }
  SSearchBox::GetSelection((SSearchBox *)(this->SearchBox).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetText @ 142db2010

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SFilterSearchBox::GetText(SFilterSearchBox *this,FText *__return_storage_ptr__)

{
  SFilterSearchBoxImpl *pSVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pSVar1 = (this->SearchBox).Object;
  if (pSVar1->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  SEditableText::GetText((SEditableText *)pSVar1->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleTextChanged @ 142db3180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFilterSearchBox::HandleTextChanged(SFilterSearchBox *this,FText *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged,
             &local_28);
  if ((*(int *)&(this->OnTextChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTextChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// HandleTextCommitted @ 142db31e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SFilterSearchBox::HandleTextCommitted(SFilterSearchBox *this,FText *param_1,Type param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  undefined1 local_48 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  local_48._0_8_ = (param_1->TextData).Reference;
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 8))(local_48._0_8_,local_res8);
  }
  local_48._8_4_ = param_1->Flags;
  local_48[0x10] = true;
  local_20 = 0;
  local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SEditableTextBox::SetText
            ((SEditableTextBox *)(this->SearchBox).Object,(TAttribute<FText> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_30,(FWriteAccessScope *)&local_78);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted,
             &local_60);
  if ((*(int *)&(this->OnTextCommitted).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTextCommitted).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  UpdateSearchHistory(this,param_1);
  return;
}

// HasKeyboardFocus @ 142db34d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SFilterSearchBox::HasKeyboardFocus(SFilterSearchBox *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142db3518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(((this->SearchBox).Object)->_padding_ + 0x1a0))();
  return (bool)uVar3;
}

// MakeSearchHistoryRowWidget @ 142db8f60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SFilterSearchBox::MakeSearchHistoryRowWidget
          (SFilterSearchBox *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FText,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TOptional<ETextOverflowPolicy> *pTVar1;
  FText *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SHorizontalBox *pSVar4;
  FText *pFVar5;
  code *pcVar6;
  STableRow<TSharedPtr<FString,1>_> *pSVar7;
  bool bVar8;
  FArguments *pFVar9;
  TSharedRef<SHorizontalBox,1> *pTVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  FSlot *this_00;
  FSlot *pFVar12;
  FSlotArguments *pFVar13;
  FArguments *pFVar14;
  TSharedRef<STextBlock,1> *pTVar15;
  FArguments *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  TSharedPtr<FText,1> *local_res18;
  TSharedRef<STableViewBase,1> *local_res20;
  FLLMScope local_d58;
  FLLMScope local_d54;
  FLLMScope local_d50;
  undefined2 local_d4c [2];
  STextBlock *local_d48;
  FSharedReferencer<1> local_d40;
  float local_d38;
  undefined1 local_d34;
  undefined1 local_d30 [8];
  ForAnyElementType FStack_d28;
  ulonglong local_d20;
  FText local_d18;
  bool local_d08;
  undefined1 local_d00 [8];
  ForAnyElementType FStack_cf8;
  ulonglong local_cf0;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_ce8;
  undefined1 local_cd0 [4];
  FName local_ccc;
  FMemScope local_cc0;
  FSlot *local_cb8;
  FName local_cb0;
  FMemScope local_ca8;
  FText *local_ca0;
  FName local_c98;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_c90;
  FMemScope local_c88;
  undefined8 local_c80;
  FSharedReferencer<1> local_c78;
  TAttribute<float> local_c70;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> local_c50;
  FDestructionSentinel local_c40;
  FDestructionSentinel local_c28;
  TSharedRef<SHorizontalBox,1> local_c10;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_c00;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_be8;
  TSharedRef<STextBlock,1> local_bd0;
  SWidget *local_bc0;
  TReferenceControllerBase<1> *pTStack_bb8;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> local_bb0;
  undefined **local_ba0;
  undefined8 *local_b98 [2];
  TReferenceControllerBase<1> *local_b88;
  undefined1 local_b68 [24];
  int local_b50;
  undefined1 local_b4c;
  undefined4 local_b48;
  undefined1 local_b44;
  FSlotArgumentsMixin local_b40;
  TPanelChildren<SBoxPanel::FSlot> *local_ab0;
  int local_aa8;
  FArguments local_aa0;
  FArguments local_898;
  FArguments local_5a0;
  
  pFVar2 = (this->EmptySearchHistoryText).Object;
  pFVar12 = (FSlot *)0x0;
  local_ca0 = param_1->Object;
  bVar20 = local_ca0 == pFVar2;
  local_res18 = param_1;
  local_res20 = param_2;
  pFVar9 = SHorizontalBox::FArguments::FArguments(&local_aa0);
  FLLMScope::FLLMScope(&local_d58,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ccc = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_cc0,&local_ccc,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_c00,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0x12f,local_res8);
  FMemScope::~FMemScope(&local_cc0);
  FLLMScope::~FLLMScope(&local_d58);
  pTVar10 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_c00,&local_c10,pFVar9);
  pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar10->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c10.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c00._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_aa0._Slots.AllocatorInstance.Data,local_aa0._Slots.ArrayNum);
  if ((FSlotArguments *)local_aa0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_aa0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_aa0);
  if ((pSVar4 == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar6)();
    return pTVar11;
  }
  this_00 = ::operator_new(0x58);
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    pFVar12 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_cb8 = pFVar12;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_b98,(FSlot *)&local_cb8);
  local_ba0 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_ab0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar4->field_0x218;
  local_d38 = __real_43fa0000;
  local_b40._MaxSize.Value = __real_43fa0000;
  local_d20 = 0;
  local_aa8 = -1;
  local_b4c = 1;
  local_b48 = 2;
  local_b44 = 1;
  local_d34 = 1;
  local_d30 = (undefined1  [8])0x0;
  FStack_d28.Data = (FScriptContainerElement *)0x0;
  local_b40._MaxSize.bIsSet = true;
  local_b50 = bVar20 + 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_b40._MaxSize.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d30,
             (FWriteAccessScope *)&local_c40);
  if (((int)local_d20 != 0) && (FStack_d28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d28,0,0,0x10);
    local_d20 = local_d20 & 0xffffffff00000000;
  }
  if (local_c40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c40.Accessor,&local_c40);
  }
  if (FStack_d28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d30);
  local_c70.Value = 1.0;
  local_c70.Getter._16_8_ = 0;
  local_c70.bIsSet = true;
  local_c70.Getter._0_8_ = 0;
  local_c70.Getter._8_8_ = 0;
  pFVar13 = SHorizontalBox::FSlot::FSlotArguments::FillWidth((FSlotArguments *)local_b98,&local_c70)
  ;
  pFVar14 = STextBlock::FArguments::FArguments(&local_5a0);
  pFVar5 = local_res18->Object;
  local_d18.TextData.Reference = (pFVar5->TextData).Reference;
  if (local_d18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d18.TextData.Reference + 8))
              (local_d18.TextData.Reference,local_cd0);
  }
  local_d18.Flags = pFVar5->Flags;
  local_d08 = true;
  local_cf0 = 0;
  local_d00 = (undefined1  [8])0x0;
  FStack_cf8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar14->_Text).Value,&local_d18);
  (pFVar14->_Text).bIsSet = local_d08;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d00,
             (FWriteAccessScope *)&local_c28);
  if (((int)local_cf0 != 0) && (FStack_cf8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_cf8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_cf8,0,0,0x10);
    local_cf0 = local_cf0 & 0xffffffff00000000;
  }
  if (local_c28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c28.Accessor,&local_c28);
  }
  if (FStack_cf8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_cf8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d00);
  if (local_d18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d18.TextData.Reference + 0x10))();
  }
  pTVar1 = &pFVar14->_OverflowPolicy;
  if ((TOptional<ETextOverflowPolicy> *)local_d4c != pTVar1) {
    pTVar1->TypedValue = Ellipsis;
    pTVar1->bIsSet = true;
  }
  FLLMScope::FLLMScope(&local_d54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_cb0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ca8,&local_cb0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_be8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0x138,local_res10);
  FMemScope::~FMemScope(&local_ca8);
  FLLMScope::~FLLMScope(&local_d54);
  pTVar15 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_be8,&local_bd0,pFVar14);
  pTVar17 = (pTVar15->SharedReferenceCount).ReferenceController;
  local_d48 = pTVar15->Object;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  local_d40.ReferenceController = pTVar17;
  if ((STextBlock **)&pFVar13->field_0x8 != &local_d48) {
    *(STextBlock **)&pFVar13->field_0x8 = local_d48;
    local_d48 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar13->field_0x10,&local_d40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bd0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_be8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a0);
  local_ba0 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_b98[0] != (undefined8 *)0x0) {
    if (local_aa8 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_ab0,(FSlotArguments *)local_b98);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_ab0,(FSlotArguments *)local_b98,local_aa8);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b68);
  if ((void *)local_b68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b88);
  if (local_b98[0] != (undefined8 *)0x0) {
    (**(code **)*local_b98[0])(local_b98[0],1);
  }
  pFVar16 = STableRow<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_898);
  pFVar16->_ShowSelection = local_ca0 != pFVar2;
  if ((pSVar4 == (SHorizontalBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar6)();
    return pTVar11;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (SHorizontalBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar6)();
    return pTVar11;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_bc0 = (pFVar16->_Content).Widget.Object;
  pTStack_bb8 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_bb8);
  local_c90.Arg0 = local_res20;
  FLLMScope::FLLMScope(&local_d50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_c98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_c88,&local_c98,true);
  local_ce8._RequiredArgs = &local_c90;
  local_ce8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar17 = ::operator_new(0x408);
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFString___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FString,1>_>::STableRow<TSharedPtr<FString,1>_>
              ((STableRow<TSharedPtr<FString,1>_> *)(pTVar17 + 1));
    pTVar19 = pTVar17;
  }
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>::TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>
            (&local_c50,(STableRow<TSharedPtr<FString,1>_> *)(pTVar19 + 1),pTVar19);
  local_c78.ReferenceController = local_c50.SharedReferenceCount.ReferenceController;
  if (local_c50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ce8._Widget.Object = local_c50.Object;
  local_c80 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_ce8._Widget.SharedReferenceCount,&local_c78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c78.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c50.SharedReferenceCount.ReferenceController);
  pSVar7 = local_ce8._Widget.Object;
  if ((local_ce8._Widget.Object == (STableRow<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar6)();
    return pTVar11;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar7->_padding_,"STableRow< TSharedPtr<FString> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0x13d,0x3f8);
  FMemScope::~FMemScope(&local_c88);
  FLLMScope::~FLLMScope(&local_d50);
  pTVar18 = TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(&local_ce8,&local_bb0,pFVar16);
  __return_storage_ptr__->Object = (ITableRow *)pTVar18->Object;
  pTVar17 = (pTVar18->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar17;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bb0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  STableRow<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_898);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res18->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnClickedSearchHistory @ 142dbc380

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SFilterSearchBox::OnClickedSearchHistory(SFilterSearchBox *this,FReply *__return_storage_ptr__)

{
  SMenuAnchor *pSVar1;
  SListView<TSharedPtr<FText,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  FReply *pFVar5;
  Type *pTVar6;
  
  if ((this->SearchHistoryBox).Object == (SMenuAnchor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar3)();
      return pFVar5;
    }
  }
  bVar4 = SMenuAnchor::ShouldOpenDueToClick((this->SearchHistoryBox).Object);
  if ((bVar4) && ((this->SearchHistory).ArrayNum != 0)) {
    if ((this->SearchHistoryBox).Object == (SMenuAnchor *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar3)();
        return pFVar5;
      }
    }
    pSVar1 = (this->SearchHistoryBox).Object;
    (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,1,1,0);
    if ((this->SearchHistoryListView).Object == (SListView<TSharedPtr<FText,1>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar3)();
        return pFVar5;
      }
    }
    pSVar2 = (this->SearchHistoryListView).Object;
    pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar2->_padding_);
    if ((*pTVar6 != None) &&
       (*(int *)&(pSVar2->SelectedItems).Elements.field_0x8 !=
        *(int *)&(pSVar2->SelectedItems).Elements.field_0x34)) {
      (**(code **)(pSVar2->_padding_ + 0x30))(&pSVar2->_padding_);
      (**(code **)(pSVar2->_padding_ + 0x40))(&pSVar2->_padding_,3);
    }
  }
  else {
    if ((this->SearchHistoryBox).Object == (SMenuAnchor *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar3)();
        return pFVar5;
      }
    }
    pSVar1 = (this->SearchHistoryBox).Object;
    (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,0,1,0);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnFocusLost @ 142dbe530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFilterSearchBox::OnFocusLost(SFilterSearchBox *this,FFocusEvent *param_1)

{
  SFilterSearchBoxImpl *pSVar1;
  code *pcVar2;
  bool bVar3;
  FText local_18;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->SearchBox).Object;
  if (pSVar1->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SEditableText::GetText((SEditableText *)pSVar1->_padding_,&local_18);
  UpdateSearchHistory(this,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// OnFocusReceived @ 142dbe5f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SFilterSearchBox::OnFocusReceived
          (SFilterSearchBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  TReferenceControllerBase<1> *pTVar2;
  SFilterSearchBoxImpl *pSVar3;
  code *pcVar4;
  bool bVar5;
  FReply *pFVar6;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  FReply::FReply(&local_c8,true);
  EVar1 = param_2->Cause;
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar4)();
      return pFVar6;
    }
  }
  pTVar2 = (this->SearchBox).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->SearchBox).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SFilterSearchBoxImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.Object = (SWidget *)pSVar3;
  local_d8.SharedReferenceCount.ReferenceController = pTVar2;
  pFVar6 = FReply::SetUserFocus(&local_c8,&local_d8,EVar1,false);
  FReply::FReply(__return_storage_ptr__,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnSelectionChanged @ 142dc99a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SFilterSearchBox::OnSelectionChanged
          (SFilterSearchBox *this,TSharedPtr<FText,1> *param_1,Type param_2)

{
  FText *pFVar1;
  code *pcVar2;
  bool bVar3;
  SFilterSearchBoxImpl *this_00;
  SMenuAnchor *pSVar4;
  undefined1 local_res18 [8];
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if (((param_2 != OnNavigation) && (param_1->Object != (FText *)0x0)) &&
     (param_1->Object != (this->EmptySearchHistoryText).Object)) {
    this_00 = TSharedPtr<SFilterSearchBoxImpl,1>::operator->(&this->SearchBox);
    if (param_1->Object == (FText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = param_1->Object;
    local_40._0_8_ = (pFVar1->TextData).Reference;
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 8))(local_40._0_8_,local_res18);
    }
    local_40._8_4_ = pFVar1->Flags;
    local_40[0x10] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetText((SEditableTextBox *)this_00,(TAttribute<FText> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
    }
    pSVar4 = TSharedPtr<SMenuAnchor,1>::operator->(&this->SearchHistoryBox);
    (**(code **)(pSVar4->_padding_ + 0x250))(pSVar4,0,1,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SelectText @ 142dd7e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SFilterSearchBox::SelectText(SFilterSearchBox *this,FTextLocation *param_1,FTextLocation *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SSearchBox::SelectText((SSearchBox *)(this->SearchBox).Object,param_1,param_2);
  return;
}

// SetError @ 142dd8d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFilterSearchBox::SetError(SFilterSearchBox *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SEditableTextBox::SetError((SEditableTextBox *)(this->SearchBox).Object,param_1);
  return;
}

// SetError @ 142dd8d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFilterSearchBox::SetError(SFilterSearchBox *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SEditableTextBox::SetError((SEditableTextBox *)(this->SearchBox).Object,param_1);
  return;
}

// SetOnSaveSearchHandler @ 142dd9790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SFilterSearchBox::SetOnSaveSearchHandler
          (SFilterSearchBox *this,
          TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  SFilterSearchBoxImpl *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->SearchBox).Object;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *)local_38,param_1);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pSVar1->OnSaveSearchClicked,
             (TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetText @ 142dd9ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFilterSearchBox::SetText(SFilterSearchBox *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SEditableTextBox::SetText((SEditableTextBox *)(this->SearchBox).Object,param_1);
  return;
}

// SupportsKeyboardFocus @ 142dda600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SFilterSearchBox::SupportsKeyboardFocus(SFilterSearchBox *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SearchBox).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142dda648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(((this->SearchBox).Object)->_padding_ + 0x198))();
  return (bool)uVar3;
}

// UpdateSearchHistory @ 142ddce50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFilterSearchBox::UpdateSearchHistory(SFilterSearchBox *this,FText *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *this_00;
  TSharedPtr<FText,1> *pTVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Src;
  undefined1 local_res18 [8];
  <lambda_1> local_res20;
  TRawPtrProxy<FText> local_38;
  TSharedPtr<FText,1> local_30;
  
  bVar5 = FText::IsEmpty(param_1);
  if (!bVar5) {
    this_00 = &this->SearchHistory;
    if (((this->SearchHistory).ArrayNum == 1) &&
       (pTVar2 = (TSharedPtr<FText,1> *)(this_00->AllocatorInstance).Data,
       pTVar2->Object == (this->EmptySearchHistoryText).Object)) {
      DestructItems<TSharedPtr<FText,1>,int>(pTVar2,1);
      (this->SearchHistory).ArrayNum = 0;
      if ((this->SearchHistory).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&this_00->AllocatorInstance,0,&(this->SearchHistory).ArrayMax);
      }
    }
    local_res20.NewText = param_1;
    TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_>::
    RemoveAll<_SFilterSearchBox::UpdateSearchHistory_::__l2::<lambda_1>_>(this_00,&local_res20);
    local_38.Object = ::operator_new(0x10);
    if (local_38.Object == (FText *)0x0) {
      local_38.Object = (FText *)0x0;
    }
    else {
      ((local_38.Object)->TextData).Reference = (ITextData *)0x0;
      pIVar3 = (param_1->TextData).Reference;
      ((local_38.Object)->TextData).Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
      }
      (local_38.Object)->Flags = param_1->Flags;
    }
    TSharedPtr<FText,1>::TSharedPtr<FText,1><FText>(&local_30,&local_38);
    TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_>::Insert(this_00,&local_30,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.SharedReferenceCount.ReferenceController);
    iVar7 = (this->SearchHistory).ArrayNum;
    if (this->MaxSearchHistory < iVar7) {
      do {
        uVar6 = 0;
        if (iVar7 + -1 < iVar7) {
          uVar6 = ~(iVar7 - 1U) >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Src = (this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(_Src + -8));
        iVar7 = (this->SearchHistory).ArrayNum + ~(iVar7 - 1U);
        if (iVar7 != 0) {
          memmove(_Src + -0x10,_Src,(longlong)iVar7 << 4);
        }
        piVar1 = &(this->SearchHistory).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->SearchHistory).ArrayNum,
                   &(this->SearchHistory).ArrayMax);
        iVar7 = (this->SearchHistory).ArrayNum;
      } while (this->MaxSearchHistory < iVar7);
    }
    if (((this->SearchHistoryListView).Object == (SListView<TSharedPtr<FText,1>_> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(((this->SearchHistoryListView).Object)->_padding_ + 0x248))();
  }
  return;
}

