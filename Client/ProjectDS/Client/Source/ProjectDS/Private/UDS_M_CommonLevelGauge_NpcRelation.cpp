// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b50bfd0

UClass * __cdecl UDS_M_CommonLevelGauge_NpcRelation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_NpcRelation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonLevelGauge_NpcRelation",
               &Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_NpcRelation.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonLevelGauge_NpcRelation,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonLevelGauge_NpcRelation>,
               InternalVTableHelperCtorCaller<UDS_M_CommonLevelGauge_NpcRelation>,local_res8,
               UDS_M_CommonLevelGauge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_NpcRelation.InnerSingleton;
}

// UDS_M_CommonLevelGauge_NpcRelation @ 14b510000

UDS_M_CommonLevelGauge_NpcRelation * __thiscall
UDS_M_CommonLevelGauge_NpcRelation::UDS_M_CommonLevelGauge_NpcRelation
          (UDS_M_CommonLevelGauge_NpcRelation *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_CommonLevelGauge_NpcRelation__6B_;
  this->PlayerEntityID = 0;
  this->NpcTID = 0;
  return this;
}

// UDS_M_CommonLevelGauge_NpcRelation @ 14b510040

UDS_M_CommonLevelGauge_NpcRelation * __thiscall
UDS_M_CommonLevelGauge_NpcRelation::UDS_M_CommonLevelGauge_NpcRelation
          (UDS_M_CommonLevelGauge_NpcRelation *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_CommonLevelGauge_NpcRelation__6B_;
  this->PlayerEntityID = 0;
  this->NpcTID = 0;
  return this;
}

// ~UDS_M_CommonLevelGauge_NpcRelation @ 14b5128c0

void __thiscall
UDS_M_CommonLevelGauge_NpcRelation::~UDS_M_CommonLevelGauge_NpcRelation
          (UDS_M_CommonLevelGauge_NpcRelation *this)

{
  this->_padding_ = (longlong)&___7UDS_M_CommonLevelGauge__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5150c0

UClass * __cdecl UDS_M_CommonLevelGauge_NpcRelation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_NpcRelation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonLevelGauge_NpcRelation",
               &Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_NpcRelation.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonLevelGauge_NpcRelation,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonLevelGauge_NpcRelation>,
               InternalVTableHelperCtorCaller<UDS_M_CommonLevelGauge_NpcRelation>,local_res8,
               UDS_M_CommonLevelGauge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_NpcRelation.InnerSingleton;
}

// StaticRegisterNativesUDS_M_CommonLevelGauge_NpcRelation @ 14b516ba0

void __cdecl
UDS_M_CommonLevelGauge_NpcRelation::StaticRegisterNativesUDS_M_CommonLevelGauge_NpcRelation(void)

{
  return;
}

// GetViewModelContext @ 14bcff260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_CommonLevelGauge_NpcRelation::GetViewModelContext
          (UDS_M_CommonLevelGauge_NpcRelation *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar7;
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar8;
  UDS_NpcFunctionEvent *pUVar9;
  FDS_NpcRelationBaseTableRow *pFVar10;
  UObject *pUVar11;
  UDS_NpcRelationData *this_01;
  FDS_NpcRelationGradeTableRow *pFVar12;
  void *pvVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStackY_308 [32];
  FWeakObjectPtr local_2d8;
  TSharedPtr<FDS_ViewModelContext_LevelExpGauge,1> local_2d0;
  undefined8 local_2c0;
  int local_2b8;
  FWeakObjectPtr local_2b0;
  FReadAccessScope local_2a8;
  FReadAccessScope local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  MakeContext<FDS_ViewModelContext_LevelExpGauge>(&local_2d0);
  if ((local_2d0.Object == (FDS_ViewModelContext_LevelExpGauge *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar2)();
    return pTVar7;
  }
  *(undefined4 *)&(local_2d0.Object)->_padding_ = 0x10d;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_M_CommonLevelGauge_NpcRelation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (((TObjectPtr<UDS_ModelBase> *)&(local_2d0.Object)->_padding_)->field0_0x0).DebugPtr =
       (UDS_ModelBase *)this;
  this_00 = UDS_EventManager::GetInst();
  plVar14 = (longlong *)0x0;
  if (this_00 == (UDS_EventManager *)0x0) goto LAB_14bcff44b;
  if ((char)this_00->_padding_ == '\x01') {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14bcff44b;
    pUVar8 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_EventManager::GetEvent",0x1a,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_278.Ptr,0x31,
               L"Cannot access event during UDS_EventManager destruction.");
    pvVar13 = (void *)local_278._padding_;
  }
  else {
    pUVar9 = UDS_EventManager::GetEventInternal<UDS_NpcFunctionEvent>(this_00);
    if (((pUVar9 == (UDS_NpcFunctionEvent *)0x0) || (this->PlayerEntityID == 0)) ||
       (this->NpcTID < 1)) goto LAB_14bcff44b;
    UDS_NpcRelationData::GetData((ulong64)&local_2d8,this->PlayerEntityID,SUB41(this->NpcTID,0));
    bVar3 = FWeakObjectPtr::IsValid(&local_2d8);
    if (bVar3) {
      pFVar10 = FDS_NpcRelationBaseTableRow::Get((longlong)this->NpcTID,true);
      if (pFVar10 != (FDS_NpcRelationBaseTableRow *)0x0) {
        UDS_PlayerData::GetMainPlayerData();
        bVar3 = FWeakObjectPtr::IsValid(&local_2b0);
        if (bVar3) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pUVar9->QueryNpcRelationGradeupGaugeData,&local_2a8);
          if (((*(int *)&(pUVar9->QueryNpcRelationGradeupGaugeData).Delegate.field_0x10 == 0) ||
              (plVar1 = *(longlong **)&(pUVar9->QueryNpcRelationGradeupGaugeData).Delegate.field_0x8
              , plVar1 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_2a8);
            local_2c0 = 0;
            local_2b8 = 0;
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_2a8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pUVar9->QueryNpcRelationGradeupGaugeData,&local_290);
            if (*(int *)&(pUVar9->QueryNpcRelationGradeupGaugeData).Delegate.field_0x10 != 0) {
              plVar14 = *(longlong **)&(pUVar9->QueryNpcRelationGradeupGaugeData).Delegate.field_0x8
              ;
            }
            (**(code **)(*plVar14 + 0x60))(plVar14,&local_2c0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_290);
          }
          pUVar11 = FWeakObjectPtr::Get(&local_2d8);
          iVar6 = *(int *)&pUVar11[3].field_0x14;
          (local_2d0.Object)->CurLevel = iVar6;
          iVar5 = 0;
          if (0 < (int)local_2c0) {
            iVar5 = (int)local_2c0 - iVar6;
          }
          (local_2d0.Object)->AddLevel = iVar5;
          this_01 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_2d8);
          pUVar11 = FWeakObjectPtr::Get(&local_2b0);
          iVar6 = UDS_NpcRelationData::GetLimitGradeWithoutQuest
                            (this_01,*(int *)&pUVar11[9].field_0x10);
          (local_2d0.Object)->LimitLevel = iVar6;
          (local_2d0.Object)->MaxLevel = (uint)pFVar10->MaxGrade;
          pUVar11 = FWeakObjectPtr::Get(&local_2d8);
          pFVar12 = FDS_NpcRelationGradeTableRow::GetRef
                              (pFVar10->ID_NpcRelationGrade,pUVar11[3].field_0x14);
          bVar3 = FDS_NpcRelationGradeTableRow::IsValid(pFVar12);
          if (bVar3) {
            pUVar11 = FWeakObjectPtr::Get(&local_2d8);
            (local_2d0.Object)->CurExp = (longlong)*(int *)&pUVar11[3].field_0x10;
            (local_2d0.Object)->MaxExp = (longlong)pFVar12->ReqPoint;
            (local_2d0.Object)->AddExp = (longlong)local_2c0._4_4_;
            pUVar11 = FWeakObjectPtr::Get(&local_2d8);
            if (pFVar10->MaxGrade == pUVar11[3].field_0x14) {
              (local_2d0.Object)->CurExpRatio = 1.0;
              (local_2d0.Object)->TargetExpRatio = 0.0;
            }
            else {
              if ((local_2d0.Object)->MaxExp < 1) {
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6291604507084193605>,true,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonLevelGauge.cpp"
                                   ,0xbb,"context->MaxExp > 0");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  pTVar7 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar2)();
                  return pTVar7;
                }
                goto LAB_14bcff623;
              }
              (local_2d0.Object)->CurExpRatio =
                   (float)(local_2d0.Object)->CurExp / (float)(local_2d0.Object)->MaxExp;
              pFVar12 = FDS_NpcRelationGradeTableRow::GetRef
                                  (pFVar10->ID_NpcRelationGrade,(EDS_GradeType)local_2c0);
              bVar3 = FDS_NpcRelationGradeTableRow::IsValid(pFVar12);
              if (bVar3) {
                if ((int)local_2c0 < 1) {
                  fVar15 = (local_2d0.Object)->CurExpRatio;
                }
                else {
                  fVar15 = (float)local_2b8 / (float)pFVar12->ReqPoint;
                }
                (local_2d0.Object)->TargetExpRatio = fVar15;
              }
            }
            __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)local_2d0.Object;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 local_2d0.SharedReferenceCount.ReferenceController;
            if (local_2d0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            goto LAB_14bcff6a8;
          }
        }
      }
LAB_14bcff623:
      __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_14bcff6a8:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d0.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14bcff44b;
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_M_CommonLevelGauge_NpcRelation::GetViewModelContext",0x37,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x92,L"NpcRelationData is Invalid.");
    pvVar13 = (void *)local_158._padding_;
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
LAB_14bcff44b:
  __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SetNpcRelationInfo @ 14bd203f0

void __thiscall
UDS_M_CommonLevelGauge_NpcRelation::SetNpcRelationInfo
          (UDS_M_CommonLevelGauge_NpcRelation *this,ulong64 param_1,int param_2)

{
  this->PlayerEntityID = param_1;
  this->NpcTID = param_2;
  return;
}

