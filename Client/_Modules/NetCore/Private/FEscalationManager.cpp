// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 14

// FEscalationManager @ 1441d1450

FEscalationManager * __thiscall
UE::Net::FEscalationManager::FEscalationManager
          (FEscalationManager *this,FEscalationManagerParms *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  uchar *puVar3;
  code *pcVar4;
  TArrayView<int,int> *pTVar5;
  undefined4 uVar6;
  bool bVar7;
  UPackage *pUVar8;
  FEscalationManager *pFVar9;
  
  iVar1 = param_1->NumCounters;
  pUVar2 = param_1->StateStruct;
  puVar3 = param_1->StateMemory;
  (this->ManagerContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagerContext).Data.ArrayNum = 0;
  (this->ManagerContext).Data.ArrayMax = 0;
  *(undefined8 *)&this->NotifySeverityUpdate = 0;
  *(undefined8 *)&(this->NotifySeverityUpdate).field_0x28 = 0;
  this->NumCounters = iVar1;
  this->BaseConfig = (UEscalationManagerConfig *)0x0;
  this->bEnabled = false;
  FStructOnScope::FStructOnScope((FStructOnScope *)&this->State,pUVar2,puVar3);
  *(undefined ***)&this->State =
       &
       ___7__TStructOnScopeLite_UFEscalationState__PEAVUScriptStruct___FEscalationManager_Net_UE__6B_
  ;
  if (Z_Registration_Info_UScriptStruct_FEscalationState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UScriptStruct_FEscalationState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEscalationState,(UObject *)pUVar8,
                         L"EscalationState");
    if (Z_Registration_Info_UScriptStruct_FEscalationState.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_1441d14e0;
  }
  else {
LAB_1441d14e0:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FEscalationState.OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FEscalationState.OuterSingleton)->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_1441d152a;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("InScriptStruct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Connection\\EscalationStates.h"
                     ,0x18b,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FEscalationManager *)(*pcVar4)();
    return pFVar9;
  }
LAB_1441d152a:
  (this->FrameCounters).DataPtr = (FEscalationCounter *)0x0;
  (this->FrameCounters).ArrayNum = 0;
  (this->SecondCounters).DataPtr = (FEscalationCounter *)0x0;
  (this->SecondCounters).ArrayNum = 0;
  (this->CountersPerSecHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CountersPerSecHistory).ArrayNum = 0;
  (this->CountersPerSecHistory).ArrayMax = 0;
  (this->CountersPerSecHistoryAlloc).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CountersPerSecHistoryAlloc).ArrayNum = 0;
  (this->CountersPerSecHistoryAlloc).ArrayMax = 0;
  pTVar5 = (param_1->RegisteredCountersCache).DataPtr;
  iVar1 = (param_1->RegisteredCountersCache).ArrayNum;
  uVar6 = *(undefined4 *)&(param_1->RegisteredCountersCache).field_0xc;
  this->ActiveState = '\0';
  this->LastMetEscalationConditions = 0.0;
  this->LastPerSecQuotaBegin = 0.0;
  this->LastCountersPerSecHistoryIdx = 0;
  this->CountersPerPeriodHistory[0].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[0].ArrayNum = 0;
  this->CountersPerPeriodHistory[1].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[1].ArrayNum = 0;
  this->CountersPerPeriodHistory[2].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[2].ArrayNum = 0;
  this->CountersPerPeriodHistory[3].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[3].ArrayNum = 0;
  this->CountersPerPeriodHistory[4].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[4].ArrayNum = 0;
  this->CountersPerPeriodHistory[5].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[5].ArrayNum = 0;
  this->CountersPerPeriodHistory[6].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[6].ArrayNum = 0;
  this->CountersPerPeriodHistory[7].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[7].ArrayNum = 0;
  this->CountersPerPeriodHistory[8].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[8].ArrayNum = 0;
  this->CountersPerPeriodHistory[9].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[9].ArrayNum = 0;
  this->CountersPerPeriodHistory[10].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[10].ArrayNum = 0;
  this->CountersPerPeriodHistory[0xb].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[0xb].ArrayNum = 0;
  this->CountersPerPeriodHistory[0xc].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[0xc].ArrayNum = 0;
  this->CountersPerPeriodHistory[0xd].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[0xd].ArrayNum = 0;
  this->CountersPerPeriodHistory[0xe].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[0xe].ArrayNum = 0;
  this->CountersPerPeriodHistory[0xf].DataPtr = (FEscalationCounter *)0x0;
  this->CountersPerPeriodHistory[0xf].ArrayNum = 0;
  (this->RegisteredCounters).DataPtr = pTVar5;
  (this->RegisteredCounters).ArrayNum = iVar1;
  *(undefined4 *)&(this->RegisteredCounters).field_0xc = uVar6;
  if (this->NumCounters < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumCounters > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\EscalationStates.cpp"
                       ,0x65,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FEscalationManager *)(*pcVar4)();
      return pFVar9;
    }
  }
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&(this->State).field_0x8);
  if ((!bVar7) || (*(longlong *)&(this->State).field_0x10 == 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\EscalationStates.cpp"
                       ,0x66,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FEscalationManager *)(*pcVar4)();
      return pFVar9;
    }
  }
  return this;
}

// AddNewCounter_Internal @ 1441d5df0

int __thiscall
UE::Net::FEscalationManager::AddNewCounter_Internal
          (FEscalationManager *this,int param_1,TArrayView<UE::Net::FEscalationCounter,int> *param_2
          )

{
  int *piVar1;
  TArray<UE::Net::FEscalationCounter,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 *puVar3;
  FScriptContainerElement *pFVar4;
  FEscalationCounter *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FEscalationCounter *pFVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  TArrayView<UE::Net::FEscalationCounter,int> *pTVar25;
  int local_res20;
  longlong lStack_98;
  undefined4 uStack_54;
  
  pTVar25 = this->CountersPerPeriodHistory + 0xf;
  local_res20 = 0xf;
  iVar13 = this->NumCounters;
  iVar18 = iVar13 + param_1;
  uVar24 = iVar18 * 0xf;
  lVar23 = (longlong)(int)uVar24 << 4;
  do {
    pFVar10 = pTVar25->DataPtr;
    lVar20 = *(longlong *)&pTVar25->ArrayNum;
    uVar22 = 0;
    if ((int)uVar24 < param_2->ArrayNum) {
      uVar22 = ~uVar24 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      iVar13 = (*pcVar6)();
      return iVar13;
    }
    pFVar5 = param_2->DataPtr;
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      iVar13 = (*pcVar6)();
      return iVar13;
    }
    uVar22 = 0;
    pTVar25->DataPtr = (FEscalationCounter *)((longlong)&pFVar5->Counter + lVar23);
    *(ulonglong *)&pTVar25->ArrayNum = CONCAT44(uStack_54,iVar18);
    if (0 < (longlong)iVar13) {
      lStack_98._0_4_ = (int)lVar20;
      lVar21 = 0;
      lVar19 = (longlong)iVar13;
      do {
        uVar14 = 0;
        if ((int)uVar22 < (int)lStack_98) {
          uVar14 = ~uVar22 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          iVar13 = (*pcVar6)();
          return iVar13;
        }
        puVar3 = (undefined4 *)((longlong)&pFVar10->Counter + lVar21);
        uVar7 = *puVar3;
        uVar8 = puVar3[1];
        lVar11 = *(longlong *)(puVar3 + 2);
        uVar9 = puVar3[3];
        lVar20 = *(longlong *)(puVar3 + 2);
        uVar14 = 0;
        if ((int)uVar22 < pTVar25->ArrayNum) {
          uVar14 = ~uVar22 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          iVar13 = (*pcVar6)();
          return iVar13;
        }
        uVar22 = uVar22 + 1;
        puVar3 = (undefined4 *)((longlong)&pTVar25->DataPtr->Counter + lVar21);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        puVar3[2] = (int)lVar11;
        puVar3[3] = uVar9;
        lVar21 = lVar21 + 0x10;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    lStack_98 = lVar20;
    pTVar25 = pTVar25 + -1;
    local_res20 = local_res20 + -1;
    lVar23 = lVar23 + (longlong)-iVar18 * 0x10;
    uVar24 = uVar24 + -iVar18;
  } while (-1 < local_res20);
  iVar15 = GetHighestHistoryRequirement(this);
  lVar23 = (longlong)iVar15;
  iVar16 = (this->CountersPerSecHistoryAlloc).ArrayNum;
  pTVar2 = &this->CountersPerSecHistoryAlloc;
  uVar24 = iVar15 * param_1 + iVar16;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  piVar1 = &(this->CountersPerSecHistoryAlloc).ArrayMax;
  if ((this->CountersPerSecHistoryAlloc).ArrayMax < (int)uVar24) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar24,&pTVar2->AllocatorInstance,iVar16,piVar1);
  }
  uVar24 = 0;
  if (0 < iVar15) {
    lVar20 = 0;
    uVar22 = 0;
    do {
      iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,param_1,&pTVar2->AllocatorInstance,
                          &(this->CountersPerSecHistoryAlloc).ArrayNum,piVar1);
      lVar19 = (longlong)(int)(uVar22 + iVar13) * 0x10;
      pFVar17 = (pTVar2->AllocatorInstance).Data + lVar19;
      memmove(pFVar17 + (longlong)param_1 * 0x10,pFVar17,
              (longlong)(int)((iVar16 - uVar22) - iVar13) << 4);
      DefaultConstructItems<UE::Net::FEscalationCounter,int>
                ((pTVar2->AllocatorInstance).Data + lVar19,param_1);
      uVar14 = 0;
      if ((int)uVar22 < (this->CountersPerSecHistoryAlloc).ArrayNum) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        iVar13 = (*pcVar6)();
        return iVar13;
      }
      lVar19 = (longlong)(int)uVar22;
      pFVar17 = (pTVar2->AllocatorInstance).Data;
      lStack_98 = CONCAT44(lStack_98._4_4_,iVar18);
      if ((iVar18 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        iVar13 = (*pcVar6)();
        return iVar13;
      }
      uVar14 = 0;
      if ((int)uVar24 < (this->CountersPerSecHistory).ArrayNum) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        iVar13 = (*pcVar6)();
        return iVar13;
      }
      uVar24 = uVar24 + 1;
      uVar22 = uVar22 + iVar18;
      pFVar4 = (this->CountersPerSecHistory).AllocatorInstance.Data + lVar20;
      *(FScriptContainerElement **)pFVar4 = pFVar17 + lVar19 * 0x10;
      *(longlong *)(pFVar4 + 8) = lStack_98;
      lVar20 = lVar20 + 0x10;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  this->NumCounters = this->NumCounters + param_1;
  return iVar13;
}

// CheckQuotas @ 1441d7180

void __thiscall UE::Net::FEscalationManager::CheckQuotas(FEscalationManager *this)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  FString *pFVar4;
  uint7 uStack_77;
  FEscalationCounter *local_70;
  undefined8 uStack_68;
  FEscalationCounter *local_60;
  undefined8 uStack_58;
  TArrayView<TArrayView<int,int>,int> *local_48;
  TArrayView<UE::Net::FEscalationCounter,int> *pTStack_40;
  FEscalationCounter **local_38;
  FEscalationCounter **ppFStack_30;
  longlong local_28;
  FString local_18;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&(this->State).field_0x8);
  if ((bVar2) && (plVar1 = *(longlong **)&(this->State).field_0x10, plVar1 != (longlong *)0x0)) {
    local_70 = (this->SecondCounters).DataPtr;
    uStack_68 = *(undefined8 *)&(this->SecondCounters).ArrayNum;
    local_48 = &this->RegisteredCounters;
    pTStack_40 = this->CountersPerPeriodHistory;
    local_38 = &local_70;
    local_60 = (this->FrameCounters).DataPtr;
    uStack_58 = *(undefined8 *)&(this->FrameCounters).ArrayNum;
    ppFStack_30 = &local_60;
    local_28 = (ulonglong)uStack_77 << 8;
    cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
    if (cVar3 != '\0') {
      pFVar4 = ::FString::FString(&local_18,L"");
      UpdateSeverity(this,Escalate,QuotaLimit,pFVar4);
    }
  }
  return;
}

// GetBaseConfig @ 1441dc250

UEscalationManagerConfig * __thiscall
UE::Net::FEscalationManager::GetBaseConfig(FEscalationManager *this)

{
  return this->BaseConfig;
}

// GetHighestHistoryRequirement @ 1441dc700

int __thiscall UE::Net::FEscalationManager::GetHighestHistoryRequirement(FEscalationManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UEscalationManagerConfig *pUVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  pUVar3 = this->BaseConfig;
  iVar6 = 0;
  if (pUVar3 != (UEscalationManagerConfig *)0x0) {
    pFVar5 = (pUVar3->EscalationSeverityState).AllocatorInstance.Data;
    iVar2 = (pUVar3->EscalationSeverityState).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((pUVar3->EscalationSeverityState).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TStructOnScope<FEscalationState>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      iVar4 = (int)*(char *)(*(longlong *)(pFVar5 + 0x10) + 0x1e) +
              (int)*(short *)(*(longlong *)(pFVar5 + 0x10) + 0x1a);
      if (iVar4 < iVar6) {
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      pFVar5 = pFVar5 + 0x28;
    }
  }
  return iVar6;
}

// InitConfig @ 1441de030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FEscalationManager::InitConfig(FEscalationManager *this,FStateConfigParms *param_1)

{
  int *piVar1;
  TArray<UE::Net::FEscalationCounter,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArrayView<UE::Net::FEscalationCounter,int>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  FStateStruct *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  size_t sVar13;
  UEscalationManagerConfig *pUVar14;
  UClass *pUVar15;
  undefined8 uVar16;
  FString *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  undefined1 local_res10 [8];
  int *local_res18;
  FString *local_res20;
  undefined4 uStack_9c;
  FString local_98;
  FString local_88;
  FString local_78;
  FStateConfigParms local_68;
  
  sVar13 = wcslen(param_1->ConfigSection);
  pwVar26 = L"";
  if ((int)sVar13 < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("FCString::Strlen(ConfigParms.ConfigSection) > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\EscalationStates.cpp"
                        ,0x76,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_68.ConfigSection = param_1->ConfigSection;
  local_res20 = &param_1->ConfigContext;
  ::FString::FString(&local_68.ConfigContext,local_res20);
  local_68.ConfigClass = param_1->ConfigClass;
  local_68.StateStruct = param_1->StateStruct;
  pUVar14 = (UEscalationManagerConfig *)UStatePerObjectConfig::Get(&local_68);
  if (pUVar14 == (UEscalationManagerConfig *)0x0) {
    pFVar17 = GetTypeName<UEscalationManagerConfig>(&local_98);
    if ((pFVar17->Data).ArrayNum != 0) {
      pwVar26 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar26);
  }
  pUVar15 = UEscalationManagerConfig::StaticClass();
  iVar21 = (int)pUVar15->_padding_;
  if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar21) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar21 * 8)
      != &pUVar15->_padding_)) {
    pFVar17 = GetTypeName<UEscalationManagerConfig>(&local_88);
    if ((pFVar17->Data).ArrayNum == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
    pFVar17 = GetFullNameForCastLogError<UStatePerObjectConfig_const_>
                        (&local_78,(UStatePerObjectConfig *)pUVar14);
    if ((pFVar17->Data).ArrayNum != 0) {
      pwVar26 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar26,pwVar25);
  }
  this->BaseConfig = pUVar14;
  bVar10 = *(bool *)&pUVar14->_padding_;
  this->bEnabled = bVar10;
  if (bVar10 == false) goto LAB_1441de526;
  uVar11 = GetHighestHistoryRequirement(this);
  iVar21 = (pUVar14->EscalationSeverityState).ArrayNum;
  lVar23 = (longlong)(int)uVar11;
  if (iVar21 < 1) {
    if (2 < (byte)LogNetCore._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    }
    this->bEnabled = false;
    goto LAB_1441de526;
  }
  cVar5 = this->ActiveState;
  pFVar6 = *(FStateStruct **)&(this->State).field_0x10;
  uVar20 = 0;
  if (cVar5 < iVar21) {
    uVar20 = (uint)~(int)cVar5 >> 0x1f;
  }
  if (uVar20 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  UStatePerObjectConfig::ApplyState
            ((FStructOnScope *)
             ((pUVar14->EscalationSeverityState).AllocatorInstance.Data + (longlong)cVar5 * 0x28),
             pFVar6);
  pTVar2 = &this->CountersPerSecHistoryAlloc;
  uVar20 = uVar11 * this->NumCounters;
  piVar1 = &(this->CountersPerSecHistoryAlloc).ArrayNum;
  iVar21 = *piVar1;
  local_res18 = piVar1;
  if (iVar21 < (int)uVar20) {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar20 - iVar21,&pTVar2->AllocatorInstance,piVar1,
                        &(this->CountersPerSecHistoryAlloc).ArrayMax);
    DefaultConstructItems<UE::Net::FEscalationCounter,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10,uVar20 - iVar21);
  }
  else {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if ((int)uVar20 < iVar21) {
      iVar21 = iVar21 - uVar20;
      if (iVar21 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      else if (iVar21 == 0) goto LAB_1441de2b5;
      pFVar18 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x10;
      iVar12 = (*piVar1 - iVar21) - uVar20;
      if (iVar12 != 0) {
        memmove(pFVar18,pFVar18 + (longlong)iVar21 * 0x10,(longlong)iVar12 << 4);
      }
      *piVar1 = *piVar1 - iVar21;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar2->AllocatorInstance,*piVar1,
                 &(this->CountersPerSecHistoryAlloc).ArrayMax);
    }
  }
LAB_1441de2b5:
  pTVar3 = &this->CountersPerSecHistory;
  iVar21 = (this->CountersPerSecHistory).ArrayNum;
  piVar1 = &(this->CountersPerSecHistory).ArrayNum;
  if (iVar21 < (int)uVar11) {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar11 - iVar21,&pTVar3->AllocatorInstance,piVar1,
                        &(this->CountersPerSecHistory).ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x10,0,
           (longlong)(int)(uVar11 - iVar21) << 4);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar21) {
      iVar21 = iVar21 - uVar11;
      if (iVar21 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      else if (iVar21 == 0) goto LAB_1441de3b3;
      pFVar18 = (pTVar3->AllocatorInstance).Data + lVar23 * 0x10;
      iVar12 = (*piVar1 - iVar21) - uVar11;
      if (iVar12 != 0) {
        memmove(pFVar18,pFVar18 + (longlong)iVar21 * 0x10,(longlong)iVar12 << 4);
      }
      *piVar1 = *piVar1 - iVar21;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar3->AllocatorInstance,*piVar1,&(this->CountersPerSecHistory).ArrayMax);
    }
  }
LAB_1441de3b3:
  uVar20 = 0;
  if (0 < (int)uVar11) {
    lVar24 = 0;
    do {
      uVar22 = uVar20 * this->NumCounters;
      uVar11 = 0;
      if ((int)uVar22 < *local_res18) {
        uVar11 = ~uVar22 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar18 = (this->CountersPerSecHistoryAlloc).AllocatorInstance.Data;
      iVar21 = this->NumCounters;
      if (iVar21 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar11 = 0;
      if ((int)uVar20 < *piVar1) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar20 = uVar20 + 1;
      pFVar4 = (pTVar3->AllocatorInstance).Data + lVar24;
      *(FScriptContainerElement **)pFVar4 = pFVar18 + (longlong)(int)uVar22 * 0x10;
      *(longlong *)(pFVar4 + 8) = CONCAT44(uStack_9c,iVar21);
      lVar24 = lVar24 + 0x10;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  if (*(void **)&this->NotifySeverityUpdate != (void *)0x0) {
    uVar7 = *(undefined8 *)&(this->State).field_0x10;
    local_res10[0] = 0;
    Core::Private::Function::CheckCallable(*(void **)&this->NotifySeverityUpdate);
    plVar8 = *(longlong **)&(this->NotifySeverityUpdate).field_0x28;
    pcVar9 = *(code **)&this->NotifySeverityUpdate;
    plVar19 = (longlong *)&(this->NotifySeverityUpdate).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar19 = plVar8;
    }
    uVar16 = (**(code **)(*plVar19 + 8))();
    (*pcVar9)(uVar16,uVar7,uVar7,local_res10);
  }
LAB_1441de526:
  pFVar18 = (local_res20->Data).AllocatorInstance.Data;
  if (pFVar18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar18);
  }
  return;
}

// InitParms @ 1441de8e0

void __thiscall
UE::Net::FEscalationManager::InitParms
          (FEscalationManager *this,FEscalationManagerInitParms *param_1)

{
  int iVar1;
  FEscalationCounter *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TArrayView<UE::Net::FEscalationCounter,int> *pTVar8;
  uint uVar9;
  undefined4 uStack_1c;
  
  iVar1 = (param_1->FrameCounters).ArrayNum;
  uVar4 = *(undefined4 *)&(param_1->FrameCounters).field_0xc;
  pTVar8 = this->CountersPerPeriodHistory;
  uVar9 = 0;
  (this->FrameCounters).DataPtr = (param_1->FrameCounters).DataPtr;
  (this->FrameCounters).ArrayNum = iVar1;
  *(undefined4 *)&(this->FrameCounters).field_0xc = uVar4;
  iVar1 = (param_1->SecondCounters).ArrayNum;
  uVar4 = *(undefined4 *)&(param_1->SecondCounters).field_0xc;
  (this->SecondCounters).DataPtr = (param_1->SecondCounters).DataPtr;
  (this->SecondCounters).ArrayNum = iVar1;
  *(undefined4 *)&(this->SecondCounters).field_0xc = uVar4;
  do {
    iVar1 = this->NumCounters;
    uVar7 = iVar1 * uVar9;
    uVar6 = 0;
    if ((int)uVar7 < (param_1->CountersPerPeriodHistoryAlloc).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_1->CountersPerPeriodHistoryAlloc).DataPtr;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar9 = uVar9 + 1;
    pTVar8->DataPtr = pFVar2 + (int)uVar7;
    *(ulonglong *)&pTVar8->ArrayNum = CONCAT44(uStack_1c,iVar1);
    pTVar8 = pTVar8 + 1;
  } while (uVar9 < 0x10);
  return;
}

// IsDormant @ 1441e0fd0

bool __thiscall UE::Net::FEscalationManager::IsDormant(FEscalationManager *this)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&(this->State).field_0x8);
  if (((bVar2) && (lVar1 = *(longlong *)&(this->State).field_0x10, lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x19) != '\0')) {
    return true;
  }
  return false;
}

// RecalculatePeriodHistory @ 1441e43e0

void __thiscall
UE::Net::FEscalationManager::RecalculatePeriodHistory
          (FEscalationManager *this,TArray<signed_char,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Net::FEscalationCounter,int> (*param_2) [16],int param_3)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FEscalationCounter *pFVar7;
  int iVar8;
  ulonglong uVar9;
  FEscalationCounter *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 local_78 [4];
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  longlong local_60;
  FScriptContainerElement *local_58;
  longlong local_50;
  FScriptContainerElement *local_48;
  
  if (param_3 == -1) {
    param_3 = this->LastCountersPerSecHistoryIdx;
  }
  local_64 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_64;
  pFVar12 = (param_1->AllocatorInstance).Data;
  local_48 = pFVar12 + uVar9;
  do {
    pFVar3 = local_48;
    local_58 = pFVar12;
    if (param_1->ArrayNum != (int)uVar9) {
      local_78[0] = 0;
      `TCheckedPointerIterator<signed_char_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_78);
    }
    if (pFVar12 == pFVar3) {
      return;
    }
    FVar1 = *pFVar12;
    lVar11 = (longlong)(char)FVar1;
    lVar13 = lVar11 * 0x10;
    pFVar7 = param_2[-1][lVar11 + 0xf].DataPtr;
    pFVar10 = pFVar7 + param_2[-1][lVar11 + 0xf].ArrayNum;
    for (; pFVar7 != pFVar10; pFVar7 = pFVar7 + 1) {
      pFVar7->Counter = 0;
      pFVar7->AccumTime = 0.0;
    }
    local_68 = (int)(char)FVar1;
    local_70 = 0;
    uVar6 = param_3;
    local_50 = lVar13;
    if ('\0' < (char)FVar1) {
      do {
        uVar9 = 0;
        uVar15 = uVar6;
        if ((int)uVar6 < 0) {
          uVar15 = ((this->CountersPerSecHistory).ArrayNum - local_70) + param_3;
        }
        local_74 = uVar6;
        if ((((int)uVar15 < 0) || ((this->CountersPerSecHistory).ArrayNum <= (int)uVar15)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PerSecHistoryIdx >= 0 && PerSecHistoryIdx < CountersPerSecHistory.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\EscalationStates.cpp"
                               ,0x192,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = *(int *)((longlong)&param_2[-1][0xf].ArrayNum + lVar13);
        if (0 < iVar8) {
          local_6c = ~uVar15 >> 0x1f;
          local_60 = (longlong)(int)uVar15 << 4;
          uVar16 = uVar9;
          do {
            uVar6 = local_6c;
            uVar14 = (uint)uVar9;
            uVar5 = 0;
            if ((int)uVar14 < iVar8) {
              uVar5 = ~uVar14 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar13 = *(longlong *)((longlong)&param_2[-1][0xf].DataPtr + lVar13);
            uVar5 = 0;
            if ((int)uVar15 < (this->CountersPerSecHistory).ArrayNum) {
              uVar5 = uVar6;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar12 = (this->CountersPerSecHistory).AllocatorInstance.Data;
            uVar6 = 0;
            if ((int)uVar14 < *(int *)(pFVar12 + local_60 + 8)) {
              uVar6 = ~uVar14 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar9 = (ulonglong)(uVar14 + 1);
            lVar11 = *(longlong *)(pFVar12 + local_60);
            *(int *)(uVar16 + lVar13) = *(int *)(uVar16 + lVar13) + *(int *)(uVar16 + lVar11);
            *(double *)(uVar16 + 8 + lVar13) =
                 *(double *)(uVar16 + 8 + lVar11) + *(double *)(uVar16 + 8 + lVar13);
            uVar16 = uVar16 + 0x10;
            iVar8 = *(int *)((longlong)&param_2[-1][0xf].ArrayNum + local_50);
            lVar13 = local_50;
          } while ((int)(uVar14 + 1) < iVar8);
        }
        local_74 = local_74 - 1;
        local_70 = local_70 + 1;
        pFVar12 = local_58;
        uVar6 = local_74;
      } while (local_70 < local_68);
    }
    pFVar12 = pFVar12 + 1;
    uVar9 = (ulonglong)local_64;
  } while( true );
}

// ResetAllCounters @ 1441e9630

void __thiscall UE::Net::FEscalationManager::ResetAllCounters(FEscalationManager *this)

{
  int iVar1;
  FEscalationCounter *pFVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  FEscalationCounter *pFVar5;
  TArrayView<UE::Net::FEscalationCounter,int> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->FrameCounters).DataPtr;
  pFVar5 = pFVar2 + (this->FrameCounters).ArrayNum;
  for (; pFVar2 != pFVar5; pFVar2 = pFVar2 + 1) {
    pFVar2->Counter = 0;
    pFVar2->AccumTime = 0.0;
  }
  pFVar2 = (this->SecondCounters).DataPtr;
  pFVar5 = pFVar2 + (this->SecondCounters).ArrayNum;
  for (; pFVar2 != pFVar5; pFVar2 = pFVar2 + 1) {
    pFVar2->Counter = 0;
    pFVar2->AccumTime = 0.0;
  }
  iVar1 = (this->CountersPerSecHistory).ArrayNum;
  pFVar7 = (this->CountersPerSecHistory).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->CountersPerSecHistory).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArrayView<UE::Net::FEscalationCounter,int>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    puVar3 = *(undefined4 **)pFVar7;
    puVar4 = puVar3 + (longlong)*(int *)(pFVar7 + 8) * 4;
    for (; puVar3 != puVar4; puVar3 = puVar3 + 4) {
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
    }
    pFVar7 = pFVar7 + 0x10;
  }
  for (pTVar6 = this->CountersPerPeriodHistory;
      pTVar6 != (TArrayView<UE::Net::FEscalationCounter,int> *)&this->RegisteredCounters;
      pTVar6 = pTVar6 + 1) {
    pFVar2 = pTVar6->DataPtr;
    pFVar5 = pFVar2 + pTVar6->ArrayNum;
    for (; pFVar2 != pFVar5; pFVar2 = pFVar2 + 1) {
      pFVar2->Counter = 0;
      pFVar2->AccumTime = 0.0;
    }
  }
  return;
}

// SetManagerContext @ 1441eba40

void __thiscall
UE::Net::FEscalationManager::SetManagerContext(FEscalationManager *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->ManagerContext,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetNotifySeverityUpdate @ 1441ebad0

void __thiscall
UE::Net::FEscalationManager::SetNotifySeverityUpdate
          (FEscalationManager *this,
          TUniqueFunction<void___cdecl(FEscalationState_const_&,FEscalationState_const_&,UE::Net::ESeverityUpdate)>
          *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->NotifySeverityUpdate;
  uVar3 = *(undefined8 *)&(this->NotifySeverityUpdate).field_0x8;
  uVar4 = *(undefined8 *)&(this->NotifySeverityUpdate).field_0x10;
  uVar5 = *(undefined8 *)&(this->NotifySeverityUpdate).field_0x18;
  uVar6 = *(undefined8 *)&(this->NotifySeverityUpdate).field_0x20;
  uVar7 = *(undefined8 *)&(this->NotifySeverityUpdate).field_0x28;
  *(undefined8 *)&this->NotifySeverityUpdate = *(undefined8 *)param_1;
  *(undefined8 *)&(this->NotifySeverityUpdate).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->NotifySeverityUpdate).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->NotifySeverityUpdate).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->NotifySeverityUpdate).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->NotifySeverityUpdate).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return;
}

// TickRealtime @ 1441ec690

void __thiscall UE::Net::FEscalationManager::TickRealtime(FEscalationManager *this,double param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  EEscalateResult EVar10;
  uint uVar11;
  uint uVar12;
  FString *pFVar13;
  FEscalationCounter *pFVar14;
  FEscalationCounter *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  double dVar22;
  double dVar23;
  FString local_78;
  FString local_68 [5];
  
  if (this->bEnabled == false) {
    return;
  }
  uVar17 = 0;
  uVar20 = 0;
  uVar16 = uVar17;
  uVar18 = uVar17;
  if (0 < (this->FrameCounters).ArrayNum) {
    do {
      uVar12 = (uint)uVar16;
      uVar11 = 0;
      if ((int)uVar12 < (this->FrameCounters).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (this->FrameCounters).DataPtr;
      uVar11 = 0;
      if ((int)uVar12 < (this->SecondCounters).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15 = (this->SecondCounters).DataPtr;
      piVar1 = (int *)((longlong)&pFVar15->Counter + uVar18);
      *piVar1 = *piVar1 + *(int *)((longlong)&pFVar14->Counter + uVar18);
      *(double *)((longlong)&pFVar15->AccumTime + uVar18) =
           *(double *)((longlong)&pFVar14->AccumTime + uVar18) +
           *(double *)((longlong)&pFVar15->AccumTime + uVar18);
      *(undefined4 *)((longlong)&pFVar14->Counter + uVar18) = 0;
      *(undefined8 *)((longlong)&pFVar14->AccumTime + uVar18) = 0;
      uVar16 = (ulonglong)(uVar12 + 1);
      uVar18 = uVar18 + 0x10;
    } while ((int)(uVar12 + 1) < (this->FrameCounters).ArrayNum);
  }
  if (param_1 - this->LastPerSecQuotaBegin <= __real_3ff0000000000000) {
    return;
  }
  if ('\0' < this->ActiveState) {
    lVar4 = *(longlong *)&(this->State).field_0x10;
    dVar7 = param_1 - this->LastMetEscalationConditions;
    dVar22 = (double)(int)*(short *)(lVar4 + 0x1a);
    dVar23 = (double)(int)*(short *)(lVar4 + 0x1c);
    if ((0.0 < dVar22) && (dVar22 < dVar7)) {
      pFVar13 = ::FString::FString(&local_78,L"");
      EVar10 = UpdateSeverity(this,Deescalate,Deescalate,pFVar13);
      if (EVar10 != NoChange) goto LAB_1441ec8a0;
    }
    if ((0.0 < dVar23) && (dVar23 < dVar7)) {
      pFVar13 = ::FString::FString(local_68,L"");
      UpdateSeverity(this,AutoEscalate,AutoEscalate,pFVar13);
    }
  }
LAB_1441ec8a0:
  if (((this->CountersPerSecHistory).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CountersPerSecHistory.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\EscalationStates.cpp"
                         ,0x15c,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = (this->CountersPerSecHistory).ArrayNum;
  uVar12 = this->LastCountersPerSecHistoryIdx + 1;
  uVar11 = uVar20;
  if ((int)uVar12 < iVar3) {
    uVar11 = uVar12;
  }
  this->LastCountersPerSecHistoryIdx = uVar11;
  uVar12 = uVar20;
  if ((int)uVar11 < iVar3) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this->CountersPerSecHistory).AllocatorInstance.Data;
  puVar19 = *(undefined8 **)(pFVar5 + (longlong)(int)uVar11 * 0x10);
  puVar21 = puVar19 + (longlong)*(int *)(pFVar5 + (longlong)(int)uVar11 * 0x10 + 8) * 2;
  uVar16 = uVar17;
  while( true ) {
    if (puVar19 == puVar21) {
      this->LastPerSecQuotaBegin = param_1;
      pFVar14 = (this->SecondCounters).DataPtr;
      pFVar15 = pFVar14 + (this->SecondCounters).ArrayNum;
      for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 1) {
        pFVar14->Counter = 0;
        pFVar14->AccumTime = 0.0;
      }
      RecalculatePeriodHistory
                (this,(TArray<signed_char,TSizedDefaultAllocator<32>_> *)
                      (*(longlong *)&(this->State).field_0x10 + 0x20),
                 &this->CountersPerPeriodHistory,-1);
      return;
    }
    uVar12 = (uint)uVar16;
    uVar11 = uVar20;
    if ((int)uVar12 < (this->SecondCounters).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) break;
    uVar16 = (ulonglong)(uVar12 + 1);
    puVar2 = (undefined8 *)((longlong)&((this->SecondCounters).DataPtr)->Counter + uVar17);
    uVar8 = puVar2[1];
    uVar17 = uVar17 + 0x10;
    *puVar19 = *puVar2;
    puVar19[1] = uVar8;
    puVar19 = puVar19 + 2;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// UpdateSeverity @ 1441f0c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EEscalateResult __thiscall
UE::Net::FEscalationManager::UpdateSeverity
          (FEscalationManager *this,ESeverityUpdate param_1,EEscalateReason param_2,FString *param_3
          )

{
  uchar *puVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  code *pcVar8;
  double dVar9;
  EEscalateResult EVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  TArrayView<UE::Net::FEscalationCounter,int> *pTVar14;
  FEscalationCounter *pFVar15;
  undefined8 uVar16;
  FString *pFVar17;
  UObject *pUVar18;
  undefined4 *puVar19;
  FEscalationCounter *pFVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ForElementType<UE::Net::FEscalationCounter> FVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ForElementType<UE::Net::FEscalationCounter> FVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  byte bVar35;
  bool bVar36;
  undefined1 auStackY_b18 [32];
  undefined1 local_ad7;
  char local_ad6;
  undefined1 local_ad5;
  ESeverityUpdate local_ad4;
  ESeverityUpdate local_ad0;
  EEscalateReason local_ac8;
  ulonglong local_ac0;
  FScriptContainerElement *local_ab8;
  FScriptContainerElement *local_ab0;
  FEscalationCounter *local_aa8;
  int iStack_aa0;
  undefined4 uStack_a9c;
  ForAnyElementType local_a98;
  int local_a90;
  int local_a8c;
  ForAnyElementType local_a88;
  int local_a80;
  int local_a7c;
  LARGE_INTEGER local_a78;
  TArrayView<TArrayView<int,int>,int> *local_a70;
  TArrayView<UE::Net::FEscalationCounter,int> *pTStack_a68;
  FEscalationCounter **local_a60;
  FEscalationCounter **ppFStack_a58;
  undefined1 local_a50;
  uint7 uStack_a4f;
  FString *local_a48;
  FName local_a40;
  FString local_a38;
  FString local_a28;
  FEscalationCounter *local_a18;
  undefined8 uStack_a10;
  FEscalationCounter *local_a08;
  undefined8 uStack_a00;
  FEscalationCounter *local_9f8;
  undefined8 uStack_9f0;
  FEscalationCounter *local_9e8;
  undefined8 uStack_9e0;
  FString local_9d8;
  TArrayView<TArrayView<int,int>,int> *local_9c8;
  TArrayView<UE::Net::FEscalationCounter,int> *pTStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  TArrayView<TArrayView<int,int>,int> *local_998;
  TArrayView<UE::Net::FEscalationCounter,int> *pTStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  longlong local_978;
  ForElementType<UE::Net::FEscalationCounter> local_968;
  int local_160 [2];
  TArrayView<UE::Net::FEscalationCounter,int> local_158 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_b18;
  uVar30 = 0;
  bVar36 = param_1 < Deescalate;
  pFVar28 = (FScriptContainerElement *)&this->BaseConfig->EscalationSeverityState;
  EVar10 = !bVar36;
  local_ac0 = local_ac0 & 0xffffffff00000000;
  iVar26 = (this->BaseConfig->EscalationSeverityState).ArrayNum;
  iVar23 = (int)this->ActiveState + (uint)bVar36 * 2;
  if (iVar23 + -1 < iVar26 + -1) {
    iVar26 = iVar23;
  }
  uVar31 = uVar30;
  if (0 < (int)(iVar26 - 1U)) {
    uVar31 = (ulonglong)(iVar26 - 1U & 0xff);
  }
  uVar13 = 0;
  local_ad6 = bVar36;
  local_ad4 = param_1;
  local_ac8 = param_2;
  local_ab8 = pFVar28;
  local_a48 = param_3;
  local_9b8 = (FEscalationCounter **)CONCAT44(local_9b8._4_4_,(undefined4)local_9b8);
  uStack_9b0 = (FEscalationCounter **)CONCAT44(uStack_9b0._4_4_,(undefined4)uStack_9b0);
  if ((char)uVar31 != this->ActiveState) {
    QueryPerformanceCounter(&local_a78);
    dVar9 = (double)local_a78.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (bVar36) {
      this->LastMetEscalationConditions = dVar9;
      local_9b8 = (FEscalationCounter **)CONCAT44(local_9b8._4_4_,(undefined4)local_9b8);
      uStack_9b0 = (FEscalationCounter **)CONCAT44(uStack_9b0._4_4_,(undefined4)uStack_9b0);
    }
    else {
      bVar35 = this->ActiveState;
      uVar31 = (ulonglong)bVar35;
      local_ac0 = CONCAT44(local_ac0._4_4_,(uint)bVar35);
      if ('\0' < (char)bVar35) {
        local_968.SecondaryData = (ForElementType<UE::Net::FEscalationCounter>)0x0;
        pTVar14 = local_158;
        local_160[0] = 0;
        lVar29 = 0x10;
        local_160[1] = 0x80;
        do {
          pTVar14->DataPtr = (FEscalationCounter *)0x0;
          pTVar14->ArrayNum = 0;
          pTVar14 = pTVar14 + 1;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        iVar26 = this->NumCounters;
        uVar24 = iVar26 * 0x10;
        if (iVar26 << 4 < 1) {
          if (iVar26 << 4 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
          }
          if ((int)uVar24 < 0) {
            uVar25 = iVar26 * -0x10;
            if (((int)(uVar25 | uVar24) < 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar36)) {
              pcVar8 = (code *)swi(3);
              EVar10 = (*pcVar8)();
              return EVar10;
            }
            if (uVar25 != 0) {
              FVar27 = (ForElementType<UE::Net::FEscalationCounter>)&local_968;
              if (local_968.SecondaryData != (ForElementType<UE::Net::FEscalationCounter>)0x0) {
                FVar27 = local_968.SecondaryData;
              }
              puVar19 = (undefined4 *)((longlong)(int)uVar24 * 0x10 + (longlong)FVar27);
              if (local_160[0] != 0) {
                memmove(puVar19,puVar19 + (longlong)(int)uVar25 * 4,(longlong)local_160[0] << 4);
              }
              local_160[0] = local_160[0] + iVar26 * 0x10;
              Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
                        (0x10,8,&local_968,local_160[0],local_160 + 1);
            }
          }
        }
        else {
          Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
                    (0x10,8,uVar24,&local_968,local_160,local_160 + 1);
        }
        pTVar14 = local_158;
        uVar31 = uVar30;
        do {
          iVar26 = this->NumCounters;
          uVar25 = iVar26 * (int)uVar31;
          uVar24 = 0;
          if ((int)uVar25 < local_160[0]) {
            uVar24 = ~uVar25 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar8 = (code *)swi(3);
            EVar10 = (*pcVar8)();
            return EVar10;
          }
          FVar27 = (ForElementType<UE::Net::FEscalationCounter>)&local_968;
          if (local_968.SecondaryData != (ForElementType<UE::Net::FEscalationCounter>)0x0) {
            FVar27 = local_968.SecondaryData;
          }
          local_aa8 = (FEscalationCounter *)((longlong)(int)uVar25 * 0x10 + (longlong)FVar27);
          iStack_aa0 = iVar26;
          if ((iVar26 < 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar36)) {
            pcVar8 = (code *)swi(3);
            EVar10 = (*pcVar8)();
            return EVar10;
          }
          uVar24 = (int)uVar31 + 1;
          uVar31 = (ulonglong)uVar24;
          pTVar14->DataPtr = local_aa8;
          *(ulonglong *)&pTVar14->ArrayNum = CONCAT44(uStack_a9c,iStack_aa0);
          pTVar14 = pTVar14 + 1;
        } while (uVar24 < 0x10);
        uVar31 = local_ac0 & 0xffffffff;
        while (pFVar28 = local_ab8, cVar12 = (char)uVar31, '\0' < cVar12) {
          uVar25 = (int)cVar12 - 1;
          uVar24 = uVar13;
          if ((int)uVar25 < *(int *)(local_ab8 + 8)) {
            uVar24 = ~uVar25 >> 0x1f;
          }
          if (uVar24 == 0) {
            bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar36) {
              pcVar8 = (code *)swi(3);
              EVar10 = (*pcVar8)();
              return EVar10;
            }
          }
          local_ab0 = (FScriptContainerElement *)((longlong)(int)uVar25 * 5);
          local_aa8 = (FEscalationCounter *)((ForAnyElementType *)&pFVar28->field_0x0)->Data;
          uVar24 = uVar13;
          if ((int)cVar12 < *(int *)(pFVar28 + 8)) {
            uVar24 = (uint)~(int)cVar12 >> 0x1f;
          }
          if (uVar24 == 0) {
            bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar36) {
              pcVar8 = (code *)swi(3);
              EVar10 = (*pcVar8)();
              return EVar10;
            }
          }
          sVar2 = *(short *)(*(longlong *)
                              (((ForAnyElementType *)&pFVar28->field_0x0)->Data +
                              (longlong)cVar12 * 0x28 + 0x10) + 0x1a);
          if ((this->CountersPerSecHistory).ArrayNum < (int)sVar2) {
            bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("CountersPerSecHistory.Num() >= CurStateCooloffTime",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\EscalationStates.cpp"
                                ,0xc9,L"");
            if (bVar36) {
              pcVar8 = (code *)swi(3);
              EVar10 = (*pcVar8)();
              return EVar10;
            }
          }
          iVar26 = local_160[0];
          FVar27 = (ForElementType<UE::Net::FEscalationCounter>)&local_968;
          if (local_968.SecondaryData != (ForElementType<UE::Net::FEscalationCounter>)0x0) {
            FVar27 = local_968.SecondaryData;
          }
          FVar32 = (ForElementType<UE::Net::FEscalationCounter>)
                   ((longlong)local_160[0] * 0x10 + (longlong)FVar27);
          while( true ) {
            if (local_160[0] != iVar26) {
              local_ad7 = 0;
              `TCheckedPointerIterator<UE::Net::FEscalationCounter,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_ad7);
            }
            if (FVar27 == FVar32) break;
            *(undefined4 *)FVar27 = 0;
            puVar1 = (uchar *)((longlong)FVar27 + 8);
            puVar1[0] = '\0';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
            puVar1[4] = '\0';
            puVar1[5] = '\0';
            puVar1[6] = '\0';
            puVar1[7] = '\0';
            FVar27 = (ForElementType<UE::Net::FEscalationCounter>)((longlong)FVar27 + 0x10);
          }
          uVar33 = uVar30;
          if (0 < sVar2) {
            do {
              iVar23 = (int)uVar33;
              iVar26 = this->LastCountersPerSecHistoryIdx - iVar23;
              lVar29 = *(longlong *)(&local_aa8[1].Counter + (longlong)local_ab0 * 2);
              if (((iVar26 < 0) &&
                  (iVar26 = iVar26 + (this->CountersPerSecHistory).ArrayNum, iVar26 < 0)) ||
                 ((this->CountersPerSecHistory).ArrayNum <= iVar26)) {
                bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIdx >= 0 && StartIdx < CountersPerSecHistory.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\EscalationStates.cpp"
                                    ,0xd8,L"");
                if (bVar36) {
                  pcVar8 = (code *)swi(3);
                  EVar10 = (*pcVar8)();
                  return EVar10;
                }
              }
              RecalculatePeriodHistory
                        (this,(TArray<signed_char,TSizedDefaultAllocator<32>_> *)(lVar29 + 0x20),
                         &local_158,iVar26);
              local_a18 = (this->SecondCounters).DataPtr;
              uStack_a10 = *(undefined8 *)&(this->SecondCounters).ArrayNum;
              local_a70 = &this->RegisteredCounters;
              pTStack_a68 = local_158;
              ppFStack_a58 = &local_a08;
              local_a50 = 1;
              local_a08 = (this->FrameCounters).DataPtr;
              uStack_a00 = *(undefined8 *)&(this->FrameCounters).ArrayNum;
              local_9a8 = CONCAT71(uStack_a4f,1);
              local_a60 = &local_a18;
              local_9c8 = local_a70;
              pTStack_9c0 = pTStack_a68;
              local_9b8 = &local_a18;
              uStack_9b0 = ppFStack_a58;
              cVar11 = (**(code **)(**(longlong **)(&local_aa8[1].Counter + (longlong)local_ab0 * 2)
                                   + 0x20))
                                 (*(longlong **)(&local_aa8[1].Counter + (longlong)local_ab0 * 2),
                                  &local_9c8);
              if (cVar11 != '\0') {
                if (cVar12 != this->ActiveState) {
                  this->LastMetEscalationConditions = dVar9 - (double)iVar23;
                }
                goto LAB_1441f1207;
              }
              uVar33 = (ulonglong)(iVar23 + 1U);
            } while ((int)(iVar23 + 1U) < (int)sVar2);
          }
          uVar31 = (ulonglong)(byte)(cVar12 - 1);
        }
LAB_1441f1207:
        pFVar28 = local_ab8;
        if (local_968.SecondaryData != (ForElementType<UE::Net::FEscalationCounter>)0x0) {
          FMemory::Free((void *)local_968.SecondaryData);
          pFVar28 = local_ab8;
        }
      }
    }
  }
  cVar12 = this->ActiveState;
  if ((char)uVar31 == cVar12) {
    EVar10 = NoChange;
  }
  else {
    uVar24 = uVar13;
    if ((int)cVar12 < *(int *)(pFVar28 + 8)) {
      uVar24 = (uint)~(int)cVar12 >> 0x1f;
    }
    if (uVar24 == 0) {
      bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar36) {
        pcVar8 = (code *)swi(3);
        EVar10 = (*pcVar8)();
        return EVar10;
      }
    }
    pFVar3 = ((ForAnyElementType *)&pFVar28->field_0x0)->Data;
    uVar30 = (longlong)cVar12 * 5;
    pTVar14 = this->CountersPerPeriodHistory;
    local_ac0 = uVar30;
    local_ab0 = pFVar3;
    do {
      bVar35 = (byte)uVar31;
      uVar24 = uVar13;
      if ((int)(char)bVar35 < *(int *)(pFVar28 + 8)) {
        uVar24 = (uint)~(int)(char)bVar35 >> 0x1f;
      }
      if (uVar24 == 0) {
        bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar36) {
          pcVar8 = (code *)swi(3);
          EVar10 = (*pcVar8)();
          return EVar10;
        }
      }
      pFVar34 = ((ForAnyElementType *)&pFVar28->field_0x0)->Data;
      this->ActiveState = bVar35;
      UStatePerObjectConfig::ApplyState
                ((FStructOnScope *)(pFVar34 + (longlong)(char)bVar35 * 0x28),
                 *(FStateStruct **)&(this->State).field_0x10);
      RecalculatePeriodHistory
                (this,(TArray<signed_char,TSizedDefaultAllocator<32>_> *)
                      (*(longlong *)&(this->State).field_0x10 + 0x20),&pTVar14,-1);
      if (local_ad6 == '\0') {
        if (*(char *)(*(longlong *)&(this->State).field_0x10 + 0x19) != '\0') {
          pFVar15 = (this->FrameCounters).DataPtr;
          pFVar20 = pFVar15 + (this->FrameCounters).ArrayNum;
          for (; pFVar15 != pFVar20; pFVar15 = pFVar15 + 1) {
            pFVar15->Counter = 0;
            pFVar15->AccumTime = 0.0;
          }
          pFVar15 = (this->SecondCounters).DataPtr;
          pFVar20 = pFVar15 + (this->SecondCounters).ArrayNum;
          for (; pFVar15 != pFVar20; pFVar15 = pFVar15 + 1) {
            pFVar15->Counter = 0;
            pFVar15->AccumTime = 0.0;
          }
          iVar26 = (this->CountersPerSecHistory).ArrayNum;
          pFVar28 = (this->CountersPerSecHistory).AllocatorInstance.Data;
          pFVar34 = pFVar28 + (longlong)iVar26 * 0x10;
          while( true ) {
            if ((this->CountersPerSecHistory).ArrayNum != iVar26) {
              local_ad5 = 0;
              `TCheckedPointerIterator<TArrayView<UE::Net::FEscalationCounter,int>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_ad5);
            }
            if (pFVar28 == pFVar34) break;
            puVar19 = *(undefined4 **)pFVar28;
            puVar21 = puVar19 + (longlong)*(int *)(pFVar28 + 8) * 4;
            for (; puVar19 != puVar21; puVar19 = puVar19 + 4) {
              *puVar19 = 0;
              *(undefined8 *)(puVar19 + 2) = 0;
            }
            pFVar28 = pFVar28 + 0x10;
          }
          for (pTVar14 = this->CountersPerPeriodHistory; uVar30 = local_ac0,
              pTVar14 != (TArrayView<UE::Net::FEscalationCounter,int> *)&this->RegisteredCounters;
              pTVar14 = pTVar14 + 1) {
            pFVar15 = pTVar14->DataPtr;
            pFVar20 = pFVar15 + pTVar14->ArrayNum;
            for (; pFVar15 != pFVar20; pFVar15 = pFVar15 + 1) {
              pFVar15->Counter = 0;
              pFVar15->AccumTime = 0.0;
            }
          }
        }
        break;
      }
      local_9f8 = (this->SecondCounters).DataPtr;
      uStack_9f0 = *(undefined8 *)&(this->SecondCounters).ArrayNum;
      plVar4 = *(longlong **)&(this->State).field_0x10;
      local_a50 = 0;
      local_9e8 = (this->FrameCounters).DataPtr;
      uStack_9e0 = *(undefined8 *)&(this->FrameCounters).ArrayNum;
      local_a70 = &this->RegisteredCounters;
      local_a60 = &local_9f8;
      ppFStack_a58 = &local_9e8;
      local_978 = (ulonglong)uStack_a4f << 8;
      pTStack_a68 = pTVar14;
      local_998 = local_a70;
      pTStack_990 = pTVar14;
      local_988 = local_a60;
      uStack_980 = ppFStack_a58;
      cVar12 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_998);
      if (cVar12 == '\0') break;
      iVar26 = this->ActiveState + 1;
      iVar23 = *(int *)(pFVar28 + 8) + -1;
      if (iVar26 < *(int *)(pFVar28 + 8) + -1) {
        iVar23 = iVar26;
      }
      bVar35 = 0;
      if (0 < iVar23) {
        bVar35 = (byte)iVar23;
      }
      uVar31 = (ulonglong)bVar35;
    } while (bVar35 != this->ActiveState);
    if (*(void **)&this->NotifySeverityUpdate != (void *)0x0) {
      uVar5 = *(undefined8 *)&(this->State).field_0x10;
      uVar6 = *(undefined8 *)(pFVar3 + uVar30 * 8 + 0x10);
      local_ad0 = local_ad4;
      Core::Private::Function::CheckCallable(*(void **)&this->NotifySeverityUpdate);
      plVar4 = *(longlong **)&(this->NotifySeverityUpdate).field_0x28;
      pcVar8 = *(code **)&this->NotifySeverityUpdate;
      plVar22 = (longlong *)&(this->NotifySeverityUpdate).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar22 = plVar4;
      }
      uVar16 = (**(code **)(*plVar22 + 8))();
      (*pcVar8)(uVar16,uVar6,uVar5);
    }
    pFVar28 = local_ab8;
    if (*(char *)(*(longlong *)&(this->State).field_0x10 + 0x18) != '\0') {
      if ((int)(char)bVar35 < *(int *)(local_ab8 + 8)) {
        uVar13 = (uint)~(int)(char)bVar35 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar36) {
          pcVar8 = (code *)swi(3);
          EVar10 = (*pcVar8)();
          return EVar10;
        }
      }
      pFVar28 = ((ForAnyElementType *)&pFVar28->field_0x0)->Data;
      local_a78.QuadPart = (longlong)(char)bVar35 * 5;
      local_ab8 = pFVar28;
      if (2 < (byte)LogNetCore._0_1_) {
        bVar36 = (local_a48->Data).ArrayNum < 2;
        if (bVar36) {
          pFVar17 = ::FString::FString(&local_9d8,L"");
        }
        else {
          ::FString::PrintfImpl(&local_a28,L", %s");
          pFVar17 = &local_a28;
        }
        if ((pFVar17->Data).ArrayNum == 0) {
          local_aa8 = (FEscalationCounter *)0x15060d16c;
        }
        else {
          local_aa8 = (FEscalationCounter *)(pFVar17->Data).AllocatorInstance.Data;
        }
        local_a88.Data = (FScriptContainerElement *)0x0;
        local_a80 = *(int *)(*(longlong *)(pFVar28 + ((longlong)(char)bVar35 * 5 + 2) * 8) + 0x10);
        lVar29 = (longlong)local_a80;
        pvVar7 = *(void **)(*(longlong *)(pFVar28 + ((longlong)(char)bVar35 * 5 + 2) * 8) + 8);
        if (local_a80 == 0) {
          local_a7c = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_a80,0,&local_a88,local_a80,&local_a7c);
          memcpy(local_a88.Data,pvVar7,lVar29 * 2);
        }
        local_a98.Data = (FScriptContainerElement *)0x0;
        local_a90 = *(int *)(*(longlong *)(local_ab0 + local_ac0 * 8 + 0x10) + 0x10);
        lVar29 = (longlong)local_a90;
        pvVar7 = *(void **)(*(longlong *)(local_ab0 + local_ac0 * 8 + 0x10) + 8);
        if (local_a90 == 0) {
          local_a8c = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_a90,0,&local_a98,local_a90,&local_a8c);
          memcpy(local_a98.Data,pvVar7,lVar29 * 2);
        }
        pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_ab8 + local_a78.QuadPart * 8 + 8));
        local_a40.ComparisonIndex.Value = *(uint *)&pUVar18->field_0x18;
        local_a40.Number = *(uint *)&pUVar18->field_0x1c;
        ::FName::ToString(&local_a40,&local_a38);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a38.Data.AllocatorInstance.Data);
        }
        if (local_a98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a98.Data);
        }
        if (local_a88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a88.Data);
        }
        if ((bVar36) && (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
        }
        if ((!bVar36) && (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_a28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar28 = (local_a48->Data).AllocatorInstance.Data;
  if (pFVar28 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar28);
  }
  return EVar10;
}

