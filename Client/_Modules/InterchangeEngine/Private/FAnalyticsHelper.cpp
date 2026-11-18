// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 5

// Add @ 14e4e1960

void __thiscall
UE::Interchange::FAnalyticsHelper::Add
          (FAnalyticsHelper *this,FString *param_1,FAnalyticsEventAttribute *param_2)

{
  int iVar1;
  FAnalyticsEventAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *this_00;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  pTVar7 = TMapBase<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>_>
                       *)this,uVar5,param_1);
  pFVar2 = (FAnalyticsEventAttribute *)(pTVar7->AllocatorInstance).Data;
  if (((pFVar2 <= param_2) && (param_2 < pFVar2 + pTVar7->ArrayMax)) &&
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
  iVar6 = pTVar7->ArrayNum;
  if (iVar6 == pTVar7->ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar6 + 1;
  this_00 = (pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
  ::FString::FString((FString *)this_00,&param_2->AttrName);
  ::FString::FString((FString *)(this_00 + 0x10),&param_2->AttrValueString);
  *(double *)&this_00[0x20].field_0x0 = param_2->AttrValueNumber;
  this_00[0x28] = (FScriptContainerElement)param_2->AttrValueBool;
  *(AttrTypeEnum *)(this_00 + 0x2c) = param_2->AttrType;
  return;
}

// AddThreadSafe @ 14e4e2b50

void __thiscall
UE::Interchange::FAnalyticsHelper::AddThreadSafe
          (FAnalyticsHelper *this,FString *param_1,FAnalyticsEventAttribute *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FAnalyticsEventAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *this_00;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (param_1->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  pTVar7 = TMapBase<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>_>
                       *)this,uVar5,param_1);
  pFVar2 = (FAnalyticsEventAttribute *)(pTVar7->AllocatorInstance).Data;
  if (((pFVar2 <= param_2) && (param_2 < pFVar2 + pTVar7->ArrayMax)) &&
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
  iVar6 = pTVar7->ArrayNum;
  if (iVar6 == pTVar7->ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar6 + 1;
  this_00 = (pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
  ::FString::FString((FString *)this_00,&param_2->AttrName);
  ::FString::FString((FString *)(this_00 + 0x10),&param_2->AttrValueString);
  *(double *)&this_00[0x20].field_0x0 = param_2->AttrValueNumber;
  this_00[0x28] = (FScriptContainerElement)param_2->AttrValueBool;
  *(AttrTypeEnum *)(this_00 + 0x2c) = param_2->AttrType;
                    /* WARNING: Could not recover jumptable at 0x00014e4e2c8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AppendThreadSafe @ 14e4e42a0

void __thiscall
UE::Interchange::FAnalyticsHelper::AppendThreadSafe
          (FAnalyticsHelper *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = (param_1->Data).ArrayNum;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  pTVar5 = TMapBase<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>_>
                       *)this,uVar3,param_1);
  if ((pTVar5 == param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 != 0) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar6,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              ((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0x30,
               (FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data,iVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e4e4391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ClearAnalyticsEventData @ 14e4e6130

void __thiscall
UE::Interchange::FAnalyticsHelper::ClearAnalyticsEventData(FAnalyticsHelper *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->AnalyticsAttributes).field_0x8 !=
      *(int *)&(this->AnalyticsAttributes).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    TSet<TTuple<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,uVar2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e4e61a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SendAnalytics @ 14e5065f0

void __thiscall UE::Interchange::FAnalyticsHelper::SendAnalytics(FAnalyticsHelper *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  IAnalyticsProviderET *pIVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
    iVar3 = *(int *)&(this->AnalyticsAttributes).field_0x28;
    iVar12 = 0;
    iVar14 = 0;
    uVar6 = 1;
    puVar1 = &(this->AnalyticsAttributes).field_0x10;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->AnalyticsAttributes).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e5066ad;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar7 = local_res18 + -1 + iVar14;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_14e5066ad:
    uVar11 = *(uint *)&(this->AnalyticsAttributes).field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar6,iVar12);
    TStack_50.CurrentBitIndex = iVar7;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_50._28_4_ = iVar7;
    TStack_50.BaseBitIndex = iVar14;
    uStack_30 = CONCAT44(uStack_5c,
                         *(int *)&(this->AnalyticsAttributes).field_0x8 -
                         *(int *)&(this->AnalyticsAttributes).field_0x34);
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(this->AnalyticsAttributes).field_0x28;
    if (uVar11 != uVar6) {
      puVar13 = *(undefined1 **)&(this->AnalyticsAttributes).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14e5067c0;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_14e5067c0:
    while( true ) {
      if (*(int *)&(this->AnalyticsAttributes).field_0x8 -
          *(int *)&(this->AnalyticsAttributes).field_0x34 != (int)uStack_30) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_50.CurrentBitIndex == uVar11) &&
         (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar9 = *(longlong *)&this->AnalyticsAttributes + (longlong)TStack_50.CurrentBitIndex * 0x28;
      pIVar8 = FEngineAnalytics::GetProvider();
      (**(code **)(pIVar8->_padding_ + 0x80))(pIVar8,lVar9,lVar9 + 0x10);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return;
}

