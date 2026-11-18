// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 8

// ~SLiveLinkMessageBusSourceFactory @ 14d016c30

void __thiscall
SLiveLinkMessageBusSourceFactory::~SLiveLinkMessageBusSourceFactory
          (SLiveLinkMessageBusSourceFactory *this)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  IModuleInterface *pIVar3;
  longlong lVar4;
  FName local_res8 [4];
  
  this->_padding_ = (longlong)&___7SLiveLinkMessageBusSourceFactory__6B_;
  pFVar2 = ::FName::FName(local_res8,"LiveLink");
  pIVar3 = FModuleManager::GetModulePtr_Internal(*pFVar2);
  if (pIVar3 != (IModuleInterface *)0x0) {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3);
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSourceSelected);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedResult).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,int>
            ((TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *)
             (this->Sources).AllocatorInstance.Data,(this->Sources).ArrayNum);
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FProviderPollResult,1>,int>
            ((TSharedPtr<FProviderPollResult,1> *)(this->PollData).AllocatorInstance.Data,
             (this->PollData).ArrayNum);
  pFVar1 = (this->PollData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14d01a530

bool __thiscall
`SLiveLinkMessageBusSourceFactory::Tick'::__l5::<lambda_1>::operator()
          (void *this,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1)

{
  double dVar1;
  code *pcVar3;
  atomic<double> aVar4;
  bool bVar5;
  undefined1 uVar6;
  double dVar7;
  double dVar2;
  
  aVar4 = FApp::CurrentTime;
  if (param_1->Object == (FLiveLinkSource *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  dVar7 = (double)aVar4 - param_1->Object->LastTimeSincePong;
  dVar1 = *(double *)(*(longlong *)this + 0x308);
  dVar2 = *(double *)(*(longlong *)this + 0x308);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return dVar2 <= dVar7 && dVar7 != dVar1;
}

// operator() @ 14d01b4e0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
`SLiveLinkMessageBusSourceFactory::Tick'::__l9::<lambda_2>::operator()
          (void *this,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1)

{
  longlong lVar1;
  FLiveLinkSource *pFVar2;
  FProviderPollResult *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((param_1->Object == (FLiveLinkSource *)0x0) || (lVar1 = **(longlong **)this, lVar1 == 0)) {
LAB_14d01b599:
    bVar5 = false;
  }
  else {
    pFVar2 = param_1->Object;
    if ((pFVar2->PollResult).Object == (FProviderPollResult *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar3 = (pFVar2->PollResult).Object;
    iVar7 = (pFVar3->Name).Data.ArrayNum;
    if (iVar7 == *(int *)(lVar1 + 0x18)) {
      if (1 < iVar7) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data,
                           *(wchar_t **)(lVar1 + 0x10));
        bVar5 = iVar7 == 0;
        goto LAB_14d01b562;
      }
    }
    else {
      bVar5 = iVar7 + *(int *)(lVar1 + 0x18) == 1;
LAB_14d01b562:
      if (!bVar5) goto LAB_14d01b599;
    }
    iVar7 = (pFVar3->MachineName).Data.ArrayNum;
    if (iVar7 == *(int *)(lVar1 + 0x28)) {
      if (1 < iVar7) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar3->MachineName).Data.AllocatorInstance.Data,
                           *(wchar_t **)(lVar1 + 0x20));
        bVar5 = iVar7 == 0;
        goto LAB_14d01b58e;
      }
    }
    else {
      bVar5 = iVar7 + *(int *)(lVar1 + 0x28) == 1;
LAB_14d01b58e:
      if (!bVar5) goto LAB_14d01b599;
    }
    bVar5 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar5;
}

// operator() @ 14d01b5c0

bool __thiscall
`SLiveLinkMessageBusSourceFactory::Tick'::__l5::<lambda_3>::operator()
          (void *this,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1,
          TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FLiveLinkSource *pFVar5;
  FProviderPollResult *pFVar6;
  FProviderPollResult *pFVar7;
  wchar_t *_Str1;
  wchar_t *pwVar8;
  wchar_t *_Str1_00;
  
  if (((param_1->Object != (FLiveLinkSource *)0x0) && (param_2->Object != (FLiveLinkSource *)0x0))
     && ((param_1->Object->PollResult).Object != (FProviderPollResult *)0x0)) {
    pFVar5 = TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::operator->(param_2);
    if ((pFVar5->PollResult).Object != (FProviderPollResult *)0x0) {
      pFVar5 = TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::operator->(param_1);
      _Str1_00 = L"";
      if ((pFVar5->PollResult).Object == (FProviderPollResult *)0x0) {
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
      pFVar6 = (pFVar5->PollResult).Object;
      pFVar5 = TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::operator->(param_2);
      if ((pFVar5->PollResult).Object == (FProviderPollResult *)0x0) {
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
      pFVar7 = (pFVar5->PollResult).Object;
      if ((pFVar7->Name).Data.ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar7->Name).Data.AllocatorInstance.Data;
      }
      if ((pFVar6->Name).Data.ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(pFVar6->Name).Data.AllocatorInstance.Data;
      }
      iVar4 = wcscmp(_Str1,pwVar8);
      bVar2 = false;
      if (iVar4 == 0) {
        pFVar5 = TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::operator->
                           (param_1);
        pFVar6 = TSharedPtr<FProviderPollResult,1>::operator->(&pFVar5->PollResult);
        pFVar5 = TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::operator->
                           (param_2);
        pFVar7 = TSharedPtr<FProviderPollResult,1>::operator->(&pFVar5->PollResult);
        if ((pFVar7->MachineName).Data.ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->MachineName).Data.AllocatorInstance.Data;
        }
        if ((pFVar6->MachineName).Data.ArrayNum != 0) {
          _Str1_00 = (wchar_t *)(pFVar6->MachineName).Data.AllocatorInstance.Data;
        }
        iVar4 = wcscmp(_Str1_00,pwVar8);
        bVar2 = iVar4 == 0;
      }
      return bVar2 || iVar4 < 0;
    }
  }
  return true;
}

// Construct @ 14d02cd10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SLiveLinkMessageBusSourceFactory::Construct
          (SLiveLinkMessageBusSourceFactory *this,FArguments *param_1)

{
  byte *pbVar1;
  int *piVar2;
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  FName FVar5;
  SWidget *pSVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  FSharedReferencer<1> FVar11;
  FSharedReferencer<1> FVar12;
  FSharedReferencer<1> FVar13;
  FArguments *pFVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  bool bVar18;
  int iVar19;
  FName *pFVar20;
  FModuleManager *this_00;
  IModuleInterface *pIVar21;
  FLiveLinkMessageBusDiscoveryManager *this_01;
  FSlot *this_02;
  FArguments *pFVar22;
  FArguments *pFVar23;
  undefined8 *puVar24;
  TSharedRef<SWidget_const_,1> *pTVar25;
  ulong64 uVar26;
  TSharedRef<SWidget,1> *pTVar27;
  FArguments *pFVar28;
  FArguments *pFVar29;
  FText *pFVar30;
  SHeaderRow *pSVar31;
  SHeaderRow *pSVar32;
  SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *pSVar33;
  SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *pSVar34;
  TSharedRef<SBox,1> *pTVar35;
  SVerticalBox *pSVar36;
  SVerticalBox *pSVar37;
  TReferenceControllerBase<1> *pTVar38;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1ad0;
  FLLMScope local_1acc;
  FLLMScope local_1ac8;
  FLLMScope local_1ac4 [2];
  undefined1 local_1abc;
  undefined1 local_1ab8 [8];
  ForAnyElementType FStack_1ab0;
  ulonglong local_1aa8;
  undefined1 local_1aa0 [8];
  ForAnyElementType local_1a98;
  int local_1a90;
  undefined4 local_1a88;
  undefined1 local_1a84;
  undefined1 local_1a80 [8];
  ForAnyElementType FStack_1a78;
  ulonglong local_1a70;
  undefined4 local_1a68;
  undefined1 local_1a64;
  undefined1 local_1a60 [8];
  ForAnyElementType FStack_1a58;
  ulonglong local_1a50;
  undefined4 local_1a48;
  undefined1 local_1a44;
  undefined1 local_1a40 [8];
  ForAnyElementType FStack_1a38;
  ulonglong local_1a30;
  FName local_1a28;
  undefined4 uStack_1a20;
  undefined4 uStack_1a1c;
  undefined4 local_1a18;
  undefined4 local_1a10;
  undefined1 local_1a0c;
  undefined1 local_1a08 [8];
  ForAnyElementType FStack_1a00;
  int local_19f8;
  undefined4 local_19f0;
  undefined1 local_19ec;
  undefined1 local_19e8 [8];
  ForAnyElementType FStack_19e0;
  int local_19d8;
  TSlateDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs>
  local_19d0;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_19b8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_19a0;
  undefined8 local_1988;
  FSharedReferencer<1> local_1980;
  FMemScope local_1978;
  FMemScope local_1970;
  FName local_1968;
  FMemScope local_1960;
  FArguments *local_1958;
  FName local_1950;
  FMemScope local_1948;
  FName local_1940;
  undefined8 local_1938;
  FSharedReferencer<1> FStack_1930;
  code *local_1928;
  undefined4 uStack_1920;
  undefined4 uStack_191c;
  FText local_1918;
  TAttribute<float> local_1908;
  TAttribute<float> local_18e8;
  TSharedRef<SWidget,1> local_18c8;
  undefined1 local_18b8 [8];
  undefined8 uStack_18b0;
  FSharedReferencer<1> FStack_18a8;
  undefined8 local_18a0;
  undefined8 uStack_1898;
  undefined1 local_1890;
  undefined8 local_1888;
  undefined8 uStack_1880;
  undefined8 local_1878;
  undefined1 local_186c;
  undefined1 local_1864;
  undefined4 local_1860;
  undefined4 local_1858;
  undefined1 local_1854;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1850;
  undefined4 local_1838;
  undefined1 local_1834;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1830;
  char local_1818;
  undefined4 local_1810;
  undefined1 local_180c;
  undefined8 local_1808;
  undefined8 uStack_1800;
  undefined8 local_17f8;
  undefined4 local_17f0;
  undefined1 local_17ec;
  undefined8 local_17e8;
  undefined8 uStack_17e0;
  undefined8 local_17d8;
  FDestructionSentinel local_17d0;
  FDestructionSentinel local_17b8;
  FDestructionSentinel local_17a0;
  FDestructionSentinel local_1788;
  FDestructionSentinel local_1770;
  FDestructionSentinel local_1758;
  FDestructionSentinel local_1740;
  FDestructionSentinel local_1728;
  undefined1 *local_1710;
  FDestructionSentinel local_1708;
  undefined1 *local_16f0;
  TAttribute<FText> local_16e8;
  TAttribute<FText> local_16b8;
  FName local_1688;
  TSharedRef<SWidget_const_,1> local_1680;
  FText local_1670;
  SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *local_1660;
  TReferenceControllerBase<1> *pTStack_1658;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1650;
  TSharedRef<SBox,1> local_1638;
  SWidget *local_1628;
  TReferenceControllerBase<1> *pTStack_1620;
  SHeaderRow *local_1618;
  TReferenceControllerBase<1> *pTStack_1610;
  TSharedRef<SWidget,1> local_1608;
  FReadAccessScope local_15f8;
  FArguments local_15e0;
  FArguments local_1100;
  FArguments local_e88;
  FArguments local_c80;
  FArguments local_808;
  FArguments local_390;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d02cd2f;
  bVar10 = false;
  bVar9 = false;
  bVar18 = false;
  local_res8 = 0;
  if (&param_1->_OnSourceSelected != &this->OnSourceSelected) {
    local_1aa0 = (undefined1  [8])0x0;
    local_1a98.Data = (FScriptContainerElement *)0x0;
    local_1a90 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnSourceSelected
               ,&local_15f8);
    if ((*(int *)&(param_1->_OnSourceSelected).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnSourceSelected).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_1aa0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_15f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSourceSelected,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1aa0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1aa0,
               (FWriteAccessScope *)&local_17d0);
    if ((local_1a90 != 0) && (local_1a98.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1a98.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a98,0,0,0x10);
      local_1a90 = 0;
    }
    if (local_17d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17d0.Accessor,&local_17d0);
    }
    if (local_1a98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a98.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1aa0);
  }
  this->FactoryClass = param_1->_FactoryClass;
  pFVar20 = ::FName::FName(&local_1688,"LiveLink");
  FVar5 = *pFVar20;
  this_00 = FModuleManager::Get();
  pIVar21 = FModuleManager::LoadModuleChecked(this_00,FVar5);
  this_01 = (FLiveLinkMessageBusDiscoveryManager *)(**(code **)((longlong)*pIVar21 + 0x50))(pIVar21)
  ;
  FLiveLinkMessageBusDiscoveryManager::AddDiscoveryMessageRequest(this_01);
  local_1958 = SVerticalBox::FArguments::FArguments(&local_e88);
  this_02 = ::operator_new(0x58);
  if (this_02 == (FSlot *)0x0) {
    local_18b8 = (undefined1  [8])0x0;
LAB_14d02cecd:
    FStack_18a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    uStack_18b0 = (SBox *)0x0;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Slot.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                        ,0x9b,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    *(undefined8 *)this_02 = 0;
    *(undefined8 *)&this_02->field_0x8 = 0;
    *(undefined8 *)&this_02->field_0x10 = 0;
    *(undefined8 *)&this_02->field_0x18 = 0;
    *(undefined8 *)&this_02->field_0x20 = 0;
    *(undefined8 *)&this_02->field_0x28 = 0;
    *(undefined8 *)&this_02->field_0x30 = 0;
    *(undefined8 *)&this_02->field_0x38 = 0;
    *(undefined8 *)&this_02->field_0x40 = 0;
    *(undefined8 *)&this_02->field_0x48 = 0;
    *(undefined8 *)&this_02->field_0x50 = 0;
    local_18b8 = (undefined1  [8])SVerticalBox::FSlot::FSlot(this_02);
    uStack_18b0 = (SBox *)0x0;
    FStack_18a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_18b8 == (undefined1  [8])0x0) goto LAB_14d02cecd;
  }
  stack0xffffffffffffe540 = __real_3f800000;
  local_1878 = 0;
  local_17f8 = 0;
  local_17d8 = 0;
  local_1aa8 = 0;
  local_1a10 = __real_3f800000;
  local_18a0 = 0;
  uStack_1898 = 0;
  local_1890 = 0;
  local_1888 = 0;
  uStack_1880 = 0;
  local_186c = 0;
  local_1864 = 0;
  local_1818 = '\0';
  local_1810 = 0;
  local_180c = 0;
  local_1808 = 0;
  uStack_1800 = 0;
  local_17f0 = 0;
  local_17ec = 0;
  local_17e8 = 0;
  uStack_17e0 = 0;
  local_1abc = 1;
  local_1ab8 = (undefined1  [8])0x0;
  FStack_1ab0.Data = (FScriptContainerElement *)0x0;
  local_1a18 = 1;
  local_1a0c = 1;
  local_1a08 = (undefined1  [8])0x0;
  FStack_1a00.Data = (FScriptContainerElement *)0x0;
  local_19f8 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a08,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ab8);
  local_19f0 = stack0xffffffffffffe540;
  local_19e8 = (undefined1  [8])0x0;
  FStack_19e0.Data = (FScriptContainerElement *)0x0;
  local_19ec = local_1abc;
  local_19d8 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_19e8,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ab8);
  if (local_1818 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1830);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1850);
  }
  local_1860 = local_1a18;
  local_1854 = local_1a0c;
  local_1858 = local_1a10;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_1850,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a08);
  local_1838 = local_19f0;
  local_1834 = local_19ec;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_1830,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_19e8);
  local_1818 = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_19e8,
             (FWriteAccessScope *)&local_17b8);
  if ((local_19d8 != 0) && (FStack_19e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_19e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_19e0,0,0,0x10);
    local_19d8 = 0;
  }
  if (local_17b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17b8.Accessor,&local_17b8);
  }
  if (FStack_19e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_19e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a08,
             (FWriteAccessScope *)&local_17a0);
  if ((local_19f8 != 0) && (FStack_1a00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a00,0,0,0x10);
    local_19f8 = 0;
  }
  if (local_17a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17a0.Accessor,&local_17a0);
  }
  if (FStack_1a00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ab8,
             (FWriteAccessScope *)&local_1788);
  if (((int)local_1aa8 != 0) && (FStack_1ab0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ab0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ab0,0,0,0x10);
    local_1aa8 = local_1aa8 & 0xffffffff00000000;
  }
  if (local_1788.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1788.Accessor,&local_1788);
  }
  if (FStack_1ab0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ab0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ab8);
  pFVar22 = SBox::FArguments::FArguments(&local_390);
  local_1a68 = 0x43480000;
  local_1a64 = 1;
  local_1a60 = (undefined1  [8])0x0;
  FStack_1a58.Data = (FScriptContainerElement *)0x0;
  local_1a50 = 0;
  (pFVar22->_HeightOverride).Value.Size = 200.0;
  (pFVar22->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a60,
             (FWriteAccessScope *)&local_1770);
  if (((int)local_1a50 != 0) && (FStack_1a58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a58,0,0,0x10);
    local_1a50 = local_1a50 & 0xffffffff00000000;
  }
  if (local_1770.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1770.Accessor,&local_1770);
  }
  if (FStack_1a58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a60);
  local_1a88 = 0x43480000;
  local_1a84 = 1;
  local_1a70 = 0;
  local_1a80 = (undefined1  [8])0x0;
  FStack_1a78.Data = (FScriptContainerElement *)0x0;
  (pFVar22->_WidthOverride).Value.Size = 200.0;
  (pFVar22->_WidthOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a80,
             (FWriteAccessScope *)&local_1740);
  if (((int)local_1a70 != 0) && (FStack_1a78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a78,0,0,0x10);
    local_1a70 = local_1a70 & 0xffffffff00000000;
  }
  if (local_1740.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1740.Accessor,&local_1740);
  }
  if (FStack_1a78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a80);
  pFVar23 = SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::FArguments
            ::FArguments(&local_15e0);
  local_1938 = 0;
  FStack_1930.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar23->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  pFVar23->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)0x0;
  if (&pFVar23->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
       *)&local_1938) {
    (pFVar23->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar23->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_1930)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1930.ReferenceController);
  pFVar23->_ListItemsSource_ArrayPointer = &this->Sources;
  local_1a44 = 1;
  local_1a48 = 2;
  local_1a30 = 0;
  local_1a40 = (undefined1  [8])0x0;
  FStack_1a38.Data = (FScriptContainerElement *)0x0;
  (pFVar23->_SelectionMode).Value = SingleToggle;
  (pFVar23->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a40,
             (FWriteAccessScope *)&local_1758);
  if (((int)local_1a30 != 0) && (FStack_1a38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a38,0,0,0x10);
    local_1a30 = local_1a30 & 0xffffffff00000000;
  }
  if (local_1758.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1758.Accessor,&local_1758);
  }
  if (FStack_1a38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar23->_OnGenerateRow,
             (FWriteAccessScope *)&local_1728);
  local_1710 = &(pFVar23->_OnGenerateRow).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1710);
  if (puVar24 == (undefined8 *)0x0) {
    pTVar38 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1a1c = local_1918._12_4_;
    local_1a28 = (FName)MakeSourceListViewWidget;
    uStack_1a20 = 0;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1680);
    pTVar38 = (pTVar25->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar25->Object;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSLiveLinkMessageBusSourceFactory___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = pSVar6;
    puVar24[4] = pTVar38;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->WeakReferenceCount = (atomic<int>)((int)pTVar38->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar18 = true;
    *(FName *)(puVar24 + 5) = local_1a28;
    puVar24[6] = CONCAT44(uStack_1a1c,uStack_1a20);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1680.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar18 = false;
  if (local_1728.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1728.Accessor,&local_1728);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar23->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_1708);
  local_16f0 = &(pFVar23->_OnSelectionChanged).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_16f0);
  if (puVar24 == (undefined8 *)0x0) {
    pTVar38 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_191c = local_1918._12_4_;
    local_1928 = OnSourceListSelectionChanged;
    uStack_1920 = 0;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1608);
    pTVar38 = (pTVar27->SharedReferenceCount).ReferenceController;
    local_1a28 = (FName)pTVar27->Object;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar18 = true;
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSLiveLinkMessageBusSourceFactory___00__A6AXV__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar24 + 3) = local_1a28;
    puVar24[4] = pTVar38;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->WeakReferenceCount = (atomic<int>)((int)pTVar38->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar24[5] = local_1928;
    puVar24[6] = CONCAT44(uStack_191c,uStack_1920);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1608.SharedReferenceCount.ReferenceController);
  }
  if (local_1708.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1708.Accessor,&local_1708);
  }
  pFVar28 = SHeaderRow::FArguments::FArguments(&local_1100);
  SHeaderRow::FColumn::FArguments::FArguments(&local_808);
  local_808._ColumnId = ProviderPollUI::TypeColumnName;
  local_1908.Value = 43.0;
  local_1908.bIsSet = true;
  local_1908.Getter._0_8_ = 0;
  local_1908.Getter._8_8_ = 0;
  local_1908.Getter._16_8_ = 0;
  pFVar29 = SHeaderRow::FColumn::FArguments::FillWidth(&local_808,&local_1908);
  pFVar30 = FText::AsLocalizable_Advanced_LocText
                      (&local_1918,L"LiveLinkMessageBusSourceEditor",L"TypeColumnHeaderName",
                       L"Source Type");
  FText::FText(&local_16e8.Value,pFVar30);
  local_16e8.bIsSet = true;
  local_16e8.Getter._16_8_ = 0;
  local_16e8.Getter._0_8_ = 0;
  local_16e8.Getter._8_8_ = 0;
  pFVar29 = SHeaderRow::FColumn::FArguments::DefaultLabel(pFVar29,&local_16e8);
  pFVar28 = SHeaderRow::FArguments::operator+(pFVar28,pFVar29);
  SHeaderRow::FColumn::FArguments::FArguments(&local_c80);
  local_c80._ColumnId = ProviderPollUI::MachineColumnName;
  local_18e8.Value = 43.0;
  local_18e8.bIsSet = true;
  local_18e8.Getter._0_8_ = 0;
  local_18e8.Getter._8_8_ = 0;
  local_18e8.Getter._16_8_ = 0;
  pFVar29 = SHeaderRow::FColumn::FArguments::FillWidth(&local_c80,&local_18e8);
  pFVar30 = FText::AsLocalizable_Advanced_LocText
                      (&local_1670,L"LiveLinkMessageBusSourceEditor",L"MachineColumnHeaderName",
                       L"Source Machine");
  FText::FText(&local_16b8.Value,pFVar30);
  local_16b8.bIsSet = true;
  local_16b8.Getter._16_8_ = 0;
  local_16b8.Getter._0_8_ = 0;
  local_16b8.Getter._8_8_ = 0;
  pFVar29 = SHeaderRow::FColumn::FArguments::DefaultLabel(pFVar29,&local_16b8);
  pFVar28 = SHeaderRow::FArguments::operator+(pFVar28,pFVar29);
  FLLMScope::FLLMScope(&local_1ad0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1a28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1978,&local_1a28,true);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
            (&local_19b8,"SHeaderRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\SLiveLinkMessageBusSourceFactory.cpp"
             ,0x72,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1978);
  FLLMScope::~FLLMScope(&local_1ad0);
  pSVar31 = TSharedPtr<SHeaderRow,1>::operator->(&local_19b8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar31,(FSlateBaseNamedArgs *)pFVar28);
  pSVar31 = local_19b8._Widget.Object;
  SHeaderRow::Construct(local_19b8._Widget.Object,pFVar28);
  pSVar32 = TSharedPtr<SHeaderRow,1>::operator->(&local_19b8._Widget);
  if ((pSVar32->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)(pSVar32->_padding_ + 0x228))(pSVar32);
    bVar17 = 0;
    if (cVar16 != '\0') goto LAB_14d02d902;
  }
  else {
LAB_14d02d902:
    bVar17 = 0x20;
  }
  *(byte *)&pSVar32->_padding_ = (byte)pSVar32->_padding_ & 0xdf;
  *(byte *)&pSVar32->_padding_ = (byte)pSVar32->_padding_ | bVar17;
  pSVar32 = TSharedPtr<SHeaderRow,1>::operator->(&local_19b8._Widget);
  pbVar1 = (byte *)((longlong)&pSVar32->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_19b8._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar12.ReferenceController = local_19b8._Widget.SharedReferenceCount.ReferenceController;
  local_19b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_19b8._Widget.Object = (SHeaderRow *)0x0;
  if ((pSVar31 == (SHeaderRow *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
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
  local_1618 = (pFVar23->_HeaderRow).Object;
  pTStack_1610 = (pFVar23->_HeaderRow).SharedReferenceCount.ReferenceController;
  (pFVar23->_HeaderRow).Object = pSVar31;
  (pFVar23->_HeaderRow).SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1610);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  FLLMScope::FLLMScope(&local_1acc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1940 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1970,&local_1940,true);
  TSlateDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_19d0,"SListView<TSharedPtr<FLiveLinkSource>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\SLiveLinkMessageBusSourceFactory.cpp"
             ,0x6b,local_res10);
  FMemScope::~FMemScope(&local_1970);
  FLLMScope::~FLLMScope(&local_1acc);
  if (local_19d0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_19d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_19d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1660 = (this->ListView).Object;
  pTStack_1658 = (this->ListView).SharedReferenceCount.ReferenceController;
  (this->ListView).Object = local_19d0._Widget.Object;
  (this->ListView).SharedReferenceCount.ReferenceController =
       local_19d0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1658);
  pSVar33 = TSharedPtr<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
            ::operator->(&local_19d0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar33,(FSlateBaseNamedArgs *)pFVar23);
  pSVar33 = local_19d0._Widget.Object;
  SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::Construct
            (local_19d0._Widget.Object,pFVar23);
  pSVar34 = TSharedPtr<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
            ::operator->(&local_19d0._Widget);
  if ((pSVar34->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)(pSVar34->_padding_ + 0x228))(pSVar34);
    bVar17 = 0;
    if (cVar16 != '\0') goto LAB_14d02dac5;
  }
  else {
LAB_14d02dac5:
    bVar17 = 0x20;
  }
  *(byte *)&pSVar34->_padding_ = (byte)pSVar34->_padding_ & 0xdf;
  *(byte *)&pSVar34->_padding_ = (byte)pSVar34->_padding_ | bVar17;
  pSVar34 = TSharedPtr<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
            ::operator->(&local_19d0._Widget);
  pbVar1 = (byte *)((longlong)&pSVar34->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_19d0._Widget.Object ==
       (SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar11.ReferenceController = local_19d0._Widget.SharedReferenceCount.ReferenceController;
  local_19d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_19d0._Widget.Object =
       (SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)0x0;
  if ((pSVar33 == (SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)0x0
      ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
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
  local_1628 = (pFVar22->_Content).Widget.Object;
  pTStack_1620 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar22->_Content).Widget.Object = (SWidget *)pSVar33;
  (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1620);
  FLLMScope::FLLMScope(&local_1ac8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1968 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1960,&local_1968,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1650,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\SLiveLinkMessageBusSourceFactory.cpp"
             ,0x67,local_res18);
  FMemScope::~FMemScope(&local_1960);
  FLLMScope::~FLLMScope(&local_1ac8);
  pTVar35 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1650,&local_1638,pFVar22);
  pTVar38 = (pTVar35->SharedReferenceCount).ReferenceController;
  uStack_18b0 = pTVar35->Object;
  if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1988 = 0;
  local_1980.ReferenceController = pTVar38;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_18a8,&local_1980);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1980.ReferenceController);
  pFVar14 = local_1958;
  pTVar3 = &local_1958->_Slots;
  pFVar7 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)local_18b8) &&
      ((FScriptContainerElement *)local_18b8 <
       pFVar7 + (longlong)(local_1958->_Slots).ArrayMax * 0xe8)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar19 = (pFVar14->_Slots).ArrayNum;
  piVar2 = &(pFVar14->_Slots).ArrayMax;
  if (iVar19 == *piVar2) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e8,&pTVar3->AllocatorInstance,piVar2);
  }
  (pFVar14->_Slots).ArrayNum = iVar19 + 1;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0xe8),
             (FSlotArguments *)local_18b8);
  FLLMScope::FLLMScope(local_1ac4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1950 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1948,&local_1950,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_19a0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\SLiveLinkMessageBusSourceFactory.cpp"
             ,99,local_res20);
  FMemScope::~FMemScope(&local_1948);
  FLLMScope::~FLLMScope(local_1ac4);
  pSVar36 = TSharedPtr<SVerticalBox,1>::operator->(&local_19a0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar36,(FSlateBaseNamedArgs *)pFVar14);
  pSVar36 = local_19a0._Widget.Object;
  SVerticalBox::Construct(local_19a0._Widget.Object,pFVar14);
  pSVar37 = TSharedPtr<SVerticalBox,1>::operator->(&local_19a0._Widget);
  if ((pSVar37->field_0x30 & 0x10) == 0) {
    cVar16 = (**(code **)(*(longlong *)pSVar37 + 0x228))(pSVar37);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_14d02ddf2;
  }
  bVar17 = 0x20;
LAB_14d02ddf2:
  pSVar37->field_0x30 = pSVar37->field_0x30 & 0xdf;
  pSVar37->field_0x30 = pSVar37->field_0x30 | bVar17;
  pSVar37 = TSharedPtr<SVerticalBox,1>::operator->(&local_19a0._Widget);
  pSVar37->field_0x31 = pSVar37->field_0x31 | 4;
  if ((local_19a0._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar13.ReferenceController = local_19a0._Widget.SharedReferenceCount.ReferenceController;
  local_19a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_19a0._Widget.Object = (SVerticalBox *)0x0;
  if ((pSVar36 == (SVerticalBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_18c8.Object = (SWidget *)pSVar36;
  local_18c8.SharedReferenceCount.ReferenceController = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_18c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1638.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1650._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19d0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19b8._Widget.SharedReferenceCount.ReferenceController);
  if (local_1670.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1670.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_c80);
  if (local_1918.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1918.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_808);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1100._OnHiddenColumnsListChanged);
  if (local_1100._HiddenColumnsList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1100._HiddenColumnsList.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1100._OnGetMaxRowSizeForColumn);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1100._OnColumnsChanged);
  if (local_1100.Slots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1100.Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1100);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._IsFocusable.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._ScrollbarVisibility.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e0._ExternalScrollbar.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e0._HeaderRow.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._SelectionMode.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._MaxPinnedItems.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._ItemHeight.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e0._ListItemsSource_SharedObservableArray.SharedReferenceCount.
             ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_15e0._OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_15e0);
  SBox::FArguments::~FArguments(&local_390);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_18b8);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_e88._Slots.AllocatorInstance.Data,local_e88._Slots.ArrayNum);
  if ((FSlotArguments *)local_e88._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e88._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e88);
  return;
}

// MakeSourceListViewWidget @ 14d0619e0

TSharedRef<ITableRow,1> * __thiscall
SLiveLinkMessageBusSourceFactory::MakeSourceListViewWidget
          (SLiveLinkMessageBusSourceFactory *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  FProviderPollResult *pFVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  TSharedRef<ITableRow,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FLLMScope local_res10 [2];
  FName local_res18;
  TSharedRef<STableViewBase,1> *local_res20;
  FSharedReferencer<1> local_290;
  TSharedRef<STableViewBase,1> **local_288;
  FMemScope local_280;
  undefined8 local_278;
  FSharedReferencer<1> local_270;
  TSharedRef<SProviderPollRow,1> local_268;
  FProviderPollResult *local_258;
  TReferenceControllerBase<1> *pTStack_250;
  FArguments local_248;
  
  pFVar8 = SProviderPollRow::FArguments::FArguments(&local_248);
  if ((param_1->Object == (FLiveLinkSource *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar9;
  }
  pTVar11 = (param_1->Object->PollResult).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Object->PollResult).Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_258 = (pFVar8->_PollResultPtr).Object;
  pTStack_250 = (pFVar8->_PollResultPtr).SharedReferenceCount.ReferenceController;
  (pFVar8->_PollResultPtr).Object = pFVar2;
  (pFVar8->_PollResultPtr).SharedReferenceCount.ReferenceController = pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_250);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  local_res20 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_280,&local_res18,true);
  local_288 = &local_res20;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_290.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = ::operator_new(0x478);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSProviderPollRow___00_SharedPointerInternals__6B_;
    memset(pTVar10 + 1,0,0x468);
    STableRow<TSharedPtr<FProviderPollResult,1>_>::STableRow<TSharedPtr<FProviderPollResult,1>_>
              ((STableRow<TSharedPtr<FProviderPollResult,1>_> *)(pTVar10 + 1));
    pTVar10[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x41]._padding_ = 0;
    pTVar10[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x42]._padding_ = 0;
    pTVar10[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar10[0x44]._padding_ + 4) = 0x80;
    pTVar10[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar10[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[0x46]._padding_ = 0;
    pTVar10[1]._padding_ = (longlong)&SProviderPollRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar10[1].SharedReferenceCount = &SProviderPollRow::_vftable__for__SBorder__;
    pTVar10[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x47]._padding_ = 0;
    pTVar11 = pTVar10;
  }
  TSharedRef<SProviderPollRow,1>::TSharedRef<SProviderPollRow,1>
            (&local_268,(SProviderPollRow *)(pTVar11 + 1),pTVar11);
  local_270.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
  if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_278 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_290,&local_270);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if ((local_268.Object == (SProviderPollRow *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar9;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&(local_268.Object)->_padding_,"SProviderPollRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\SLiveLinkMessageBusSourceFactory.cpp"
             ,0xc4,0x468);
  FMemScope::~FMemScope(&local_280);
  FLLMScope::~FLLMScope(local_res10);
  if ((local_268.Object == (SProviderPollRow *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar9;
  }
  SWidget::SWidgetConstruct((SWidget *)&(local_268.Object)->_padding_,(FSlateBaseNamedArgs *)pFVar8)
  ;
  SProviderPollRow::Construct(local_268.Object,pFVar8,*local_288);
  if ((local_268.Object == (SProviderPollRow *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_268.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_268.Object)->_padding_ + 0x228))(&(local_268.Object)->_padding_);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14d061cfd;
  }
  bVar7 = 0x20;
LAB_14d061cfd:
  *(byte *)&(local_268.Object)->_padding_ = (byte)(local_268.Object)->_padding_ & 0xdf;
  *(byte *)&(local_268.Object)->_padding_ = (byte)(local_268.Object)->_padding_ | bVar7;
  if ((local_268.Object == (SProviderPollRow *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar9;
  }
  pbVar1 = (byte *)((longlong)&(local_268.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_268.Object == (SProviderPollRow *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar9;
  }
  FVar4.ReferenceController = local_290.ReferenceController;
  local_290.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_268.Object == (SProviderPollRow *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar9;
  }
  __return_storage_ptr__->Object = (ITableRow *)local_268.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._PollResultPtr.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnSourceListSelectionChanged @ 14d06ad90

void __thiscall
SLiveLinkMessageBusSourceFactory::OnSourceListSelectionChanged
          (SLiveLinkMessageBusSourceFactory *this,
          TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1,Type param_2)

{
  FLiveLinkSource *pFVar1;
  FProviderPollResult *pFVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FProviderPollResult *local_48;
  TReferenceControllerBase<1> *local_40;
  FProviderPollResult *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FReadAccessScope local_28;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FLiveLinkSource *)0x0) {
    pFVar2 = (pFVar1->PollResult).Object;
    pTVar4 = (pFVar1->PollResult).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = (this->SelectedResult).Object;
    pTStack_30 = (this->SelectedResult).SharedReferenceCount.ReferenceController;
    (this->SelectedResult).Object = pFVar2;
    (this->SelectedResult).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    pFVar2 = (this->SelectedResult).Object;
    pTVar4 = (this->SelectedResult).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSourceSelected,
               &local_28);
    if ((*(int *)&(this->OnSourceSelected).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(this->OnSourceSelected).field_0x8, plVar3 == (longlong *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
    else {
      local_48 = pFVar2;
      local_40 = pTVar4;
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Tick @ 14d081a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SLiveLinkMessageBusSourceFactory::Tick
          (SLiveLinkMessageBusSourceFactory *this,FGeometry *param_1,double param_2,float param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TSharedPtr<FProviderPollResult,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
  *this_00;
  TSharedPtr<FProviderPollResult,1> *pTVar3;
  FName FVar4;
  longlong lVar5;
  undefined8 uVar6;
  UClass *pUVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  atomic<double> aVar11;
  SLiveLinkMessageBusSourceFactory *pSVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  FName *pFVar18;
  FModuleManager *pFVar19;
  IModuleInterface *pIVar20;
  longlong lVar21;
  TSet<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTVar22;
  int *piVar23;
  TReferenceControllerBase<1> *pTVar24;
  byte bVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  uint *puVar31;
  TReferenceControllerBase<1> *pTVar32;
  TReferenceControllerBase<1> *pTVar33;
  FScriptContainerElement *pFVar34;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  FIdentityFunctor local_1d6 [6];
  FScriptContainerElement *local_1d0;
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  TReferenceControllerBase<1> *local_1b8;
  TReferenceControllerBase<1> *pTStack_1b0;
  uint local_1a8;
  SLiveLinkMessageBusSourceFactory *local_1a0;
  int local_198;
  int local_194;
  SLiveLinkMessageBusSourceFactory *local_190;
  FScriptContainerElement *local_188;
  int *local_180;
  FScriptContainerElement *local_178;
  longlong *local_170;
  uint uStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> local_110;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> local_100;
  undefined8 local_f0;
  longlong local_e8;
  FName local_e0;
  FName local_d8;
  FReadAccessScope local_d0 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((double)FApp::CurrentTime - this->LastUIUpdateSeconds <= __real_3fe0000000000000) {
    return;
  }
  pTVar2 = &this->PollData;
  piVar23 = &(this->PollData).ArrayNum;
  pTVar3 = (TSharedPtr<FProviderPollResult,1> *)(pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->PollData).ArrayMax;
  local_1a0 = this;
  local_180 = piVar23;
  if ((this->PollData).ArrayMax < 0) {
    DestructItems<TSharedPtr<FProviderPollResult,1>,int>(pTVar3,*piVar23);
    *piVar23 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FProviderPollResult,1>,int>(pTVar3,*piVar23);
    *piVar23 = 0;
  }
  pFVar18 = ::FName::FName(&local_e0,"LiveLink");
  FVar4 = *pFVar18;
  pFVar19 = FModuleManager::Get();
  pIVar20 = FModuleManager::LoadModuleChecked(pFVar19,FVar4);
  lVar21 = (**(code **)((longlong)*pIVar20 + 0x50))(pIVar20);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar21 + 0x68);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  local_1c8.Data = (FScriptContainerElement *)0x0;
  iVar17 = *(int *)(lVar21 + 0x38);
  pTVar3 = *(TSharedPtr<FProviderPollResult,1> **)(lVar21 + 0x30);
  local_1c0 = iVar17;
  if (iVar17 == 0) {
    local_1bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar17,0,&local_1c8,iVar17,&local_1bc);
    ConstructItems<TSharedPtr<FProviderPollResult,1>,TSharedPtr<FProviderPollResult,1>,int>
              (local_1c8.Data,pTVar3,iVar17);
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((pTVar2 == (TArray<TSharedPtr<FProviderPollResult,1>,TSizedDefaultAllocator<32>_> *)&local_1c8
      ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar21 = (longlong)local_1c0;
  if (local_1c0 != 0) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,local_1c0,&pTVar2->AllocatorInstance,piVar23,piVar1);
    memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x10,local_1c8.Data,lVar21 << 4);
    local_1c0 = 0;
  }
  DestructItems<TSharedPtr<FProviderPollResult,1>,int>
            ((TSharedPtr<FProviderPollResult,1> *)local_1c8.Data,local_1c0);
  if ((TSharedPtr<FProviderPollResult,1> *)local_1c8.Data !=
      (TSharedPtr<FProviderPollResult,1> *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  pSVar12 = local_1a0;
  bVar14 = false;
  uVar29 = 0;
  local_190 = local_1a0;
  this_00 = &local_1a0->Sources;
  iVar17 = (local_1a0->Sources).ArrayNum;
  if (0 < iVar17) {
    lVar21 = 0;
    do {
      uVar28 = 0;
      if ((int)uVar29 < iVar17) {
        uVar28 = ~uVar29 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar34 = (this_00->AllocatorInstance).Data;
      local_110.Object = *(FLiveLinkSource **)(pFVar34 + lVar21);
      local_110.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar34 + lVar21 + 8);
      if (local_110.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar15 = `SLiveLinkMessageBusSourceFactory::Tick'::__l5::<lambda_1>::operator()
                         (&local_190,&local_110);
      if (bVar15) {
        bVar14 = true;
        uVar28 = 0;
        if ((int)uVar29 < (pSVar12->Sources).ArrayNum) {
          uVar28 = ~uVar29 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(this_00,uVar29);
      }
      else {
        uVar29 = uVar29 + 1;
        lVar21 = lVar21 + 0x10;
      }
      iVar17 = (pSVar12->Sources).ArrayNum;
    } while ((int)uVar29 < iVar17);
    if (bVar14) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_00->AllocatorInstance,iVar17,&(pSVar12->Sources).ArrayMax);
    }
  }
  pFVar18 = ::FName::FName(&local_d8,"LiveLink");
  FVar4 = *pFVar18;
  pFVar19 = FModuleManager::Get();
  pIVar20 = FModuleManager::LoadModuleChecked(pFVar19,FVar4);
  pTVar22 = (TSet<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
             *)(**(code **)((longlong)*pIVar20 + 0x68))(pIVar20);
  pTVar33 = (TReferenceControllerBase<1> *)0x0;
  local_6c = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSet<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
               *)local_98,pTVar22);
  pTVar10 = _UNK_150651568;
  pTVar9 = ___xmm_00000000000000000000000000000010;
  local_1a8 = (this->PollData).ArrayNum;
  uVar26 = (ulonglong)(int)local_1a8;
  pFVar34 = (pTVar2->AllocatorInstance).Data;
  local_178 = pFVar34 + uVar26 * 0x10;
  piVar23 = &(this->PollData).ArrayNum;
LAB_14d081e16:
  pFVar27 = local_178;
  local_1d0 = pFVar34;
  if (*piVar23 != (int)uVar26) {
    local_1d8 = 0;
    `TCheckedPointerIterator<TSharedPtr<FProviderPollResult,1>,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(&local_1d8);
  }
  if (pFVar34 == pFVar27) {
    AlgoImpl::
    StableSortInternal<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,_SLiveLinkMessageBusSourceFactory::Tick_::__l5::<lambda_3>_>_>
              ((TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *)
               (this_00->AllocatorInstance).Data,(pSVar12->Sources).ArrayNum,local_1d6[0],
               (<lambda_3> *)local_1d6);
    pSVar12 = local_1a0;
    if (((local_1a0->ListView).Object ==
         (SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (**(code **)(((pSVar12->ListView).Object)->_padding_ + 0x248))();
    pSVar12->LastUIUpdateSeconds = (double)FApp::CurrentTime;
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    return;
  }
  pFVar27 = (this_00->AllocatorInstance).Data;
  pFVar30 = pFVar27 + (longlong)(pSVar12->Sources).ArrayNum * 0x10;
  local_188 = pFVar34;
  for (; pFVar27 != pFVar30; pFVar27 = pFVar27 + 0x10) {
    local_100.Object = *(FLiveLinkSource **)pFVar27;
    local_100.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar27 + 8);
    if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = `SLiveLinkMessageBusSourceFactory::Tick'::__l9::<lambda_2>::operator()
                       (&local_188,&local_100);
    aVar11 = FApp::CurrentTime;
    if (bVar14) {
      if (*(longlong *)pFVar27 != 0) {
        if ((*(longlong *)pFVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar34 = pFVar34 + 0x10;
        uVar26 = (ulonglong)local_1a8;
        *(atomic<double> *)(*(longlong *)pFVar27 + 0x10) = aVar11;
        piVar23 = local_180;
        goto LAB_14d081e16;
      }
      break;
    }
  }
  uVar29 = local_70;
  uStack_164 = 1;
  local_150 = 0;
  uStack_154 = local_150;
  uStack_168 = 0;
  if (local_70 != 0) {
    puVar31 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar31 = local_78;
    }
    uVar28 = *puVar31;
    pTVar24 = pTVar33;
    pTVar32 = pTVar33;
    local_150 = 0;
    uStack_168 = 0;
    while (uVar28 == 0) {
      iVar17 = (int)pTVar24;
      local_150 = (int)pTVar32 + 0x20;
      pTVar32 = (TReferenceControllerBase<1> *)(ulonglong)local_150;
      uStack_168 = iVar17 + 1;
      pTVar24 = (TReferenceControllerBase<1> *)(ulonglong)uStack_168;
      uStack_154 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_168)
      goto LAB_14d081f10;
      uVar28 = puVar31[(longlong)iVar17 + 1];
    }
    uStack_164 = -uVar28 & uVar28;
    uVar26 = (ulonglong)uStack_164 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_198 = (int)lVar21;
    uStack_154 = (local_150 - 1) + local_198;
    if ((int)local_70 < (int)uStack_154) {
      uStack_154 = local_70;
    }
  }
LAB_14d081f10:
  local_170 = (longlong *)local_98;
  uStack_14c = local_9c;
  local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar28 = local_70 & 0xffffffe0;
  iStack_148 = local_98._8_4_ - local_64;
  TStack_138._padding_ = CONCAT44(uStack_164,uStack_168);
  uStack_158 = 0xffffffff;
  TStack_138.CurrentBitIndex = uStack_154;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)local_70 >> 5;
  TStack_138._28_4_ = local_9c;
  TStack_138.BaseBitIndex = local_150;
  uStack_118 = CONCAT44(uStack_144,iStack_148);
  bVar25 = (byte)local_70;
  local_140 = local_170;
  TStack_138.Array = local_160;
  if (((int)local_70 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar29 != local_70) {
    puVar31 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar31 = local_78;
    }
    uVar29 = -1 << (bVar25 & 0x1f) & puVar31[iVar17];
    while (uVar29 == 0) {
      lVar21 = (longlong)iVar17;
      uVar28 = uVar28 + 0x20;
      iVar17 = iVar17 + 1;
      uVar29 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14d082030;
      uVar29 = puVar31[lVar21 + 1];
    }
    uVar26 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_194 = (int)lVar21;
    uVar29 = (uVar28 - 1) + local_194;
    if ((int)local_70 < (int)uVar29) {
      uVar29 = local_70;
    }
  }
LAB_14d082030:
  do {
    plVar13 = local_140;
    if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
      local_1d7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d7);
    }
    if (((TStack_138.CurrentBitIndex == uVar29) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar13 == (longlong *)local_98)) {
      pTVar24 = ::operator_new(0x28);
      pFVar34 = local_1d0;
      if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
        local_1b8 = pTVar9;
        pTStack_1b0 = pTVar10;
        pTVar24 = pTVar33;
      }
      else {
        pTVar24->SharedReferenceCount = (atomic<int>)0x1;
        pTVar24->WeakReferenceCount = (atomic<int>)0x1;
        pTVar24->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00_SharedPointerInternals__6B_
        ;
        lVar21 = *(longlong *)(local_1d0 + 8);
        lVar5 = *(longlong *)local_1d0;
        if (lVar21 != 0) {
          LOCK();
          *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
          UNLOCK();
        }
        pTVar24[1]._padding_ = lVar5;
        pTVar24[1].SharedReferenceCount = (atomic<int>)(int)lVar21;
        pTVar24[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar21 >> 0x20);
        pTVar24[2]._padding_ = (longlong)FApp::CurrentTime;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if ((pTVar24 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
        local_1b8 = pTVar24 + 1;
        pTStack_1b0 = pTVar24;
      }
      pFVar27 = (this_00->AllocatorInstance).Data;
      if (((pFVar27 <= (FScriptContainerElement *)&local_1b8) &&
          ((FScriptContainerElement *)&local_1b8 <
           pFVar27 + (longlong)(pSVar12->Sources).ArrayMax * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = (pSVar12->Sources).ArrayNum;
      piVar23 = &(pSVar12->Sources).ArrayMax;
      if (iVar17 == *piVar23) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&this_00->AllocatorInstance,piVar23);
      }
      (pSVar12->Sources).ArrayNum = iVar17 + 1;
      pFVar27 = (this_00->AllocatorInstance).Data;
      *(TReferenceControllerBase<1> **)(pFVar27 + (longlong)iVar17 * 0x10) = local_1b8;
      *(TReferenceControllerBase<1> **)(pFVar27 + (longlong)iVar17 * 0x10 + 8) = pTStack_1b0;
      pTStack_1b0 = (TReferenceControllerBase<1> *)0x0;
      local_1b8 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
      pFVar34 = pFVar34 + 0x10;
      uVar26 = (ulonglong)local_1a8;
      piVar23 = local_180;
      goto LAB_14d081e16;
    }
    lVar21 = *plVar13 + (longlong)TStack_138.CurrentBitIndex * 0x28;
    lVar5 = *(longlong *)(local_1d0 + 8);
    uVar6 = *(undefined8 *)local_1d0;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    pUVar7 = local_1a0->FactoryClass;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar21 + 8),local_d0);
    pTVar24 = pTVar33;
    if (*(int *)(lVar21 + 0x18) != 0) {
      pTVar24 = *(TReferenceControllerBase<1> **)(lVar21 + 0x10);
    }
    local_f0 = uVar6;
    local_e8 = lVar5;
    cVar16 = (**(code **)(pTVar24->_padding_ + 0x60))(pTVar24,pUVar7,&local_f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (cVar16 == '\0') break;
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  } while( true );
  pFVar34 = local_1d0 + 0x10;
  uVar26 = (ulonglong)local_1a8;
  piVar23 = local_180;
  goto LAB_14d081e16;
}

