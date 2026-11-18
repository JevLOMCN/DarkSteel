// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b50be10

UClass * __cdecl UDS_M_CommonLevelGauge_CharLevelup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_CharLevelup.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonLevelGauge_CharLevelup",
               &Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_CharLevelup.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonLevelGauge_CharLevelup,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonLevelGauge_CharLevelup>,
               InternalVTableHelperCtorCaller<UDS_M_CommonLevelGauge_CharLevelup>,local_res8,
               UDS_M_CommonLevelGauge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_CharLevelup.InnerSingleton;
}

// UDS_M_CommonLevelGauge_CharLevelup @ 14b50ff80

UDS_M_CommonLevelGauge_CharLevelup * __thiscall
UDS_M_CommonLevelGauge_CharLevelup::UDS_M_CommonLevelGauge_CharLevelup
          (UDS_M_CommonLevelGauge_CharLevelup *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->CharEntityID = 0;
  this->_padding_ = (longlong)&___7UDS_M_CommonLevelGauge_CharLevelup__6B_;
  return this;
}

// UDS_M_CommonLevelGauge_CharLevelup @ 14b50ffc0

UDS_M_CommonLevelGauge_CharLevelup * __thiscall
UDS_M_CommonLevelGauge_CharLevelup::UDS_M_CommonLevelGauge_CharLevelup
          (UDS_M_CommonLevelGauge_CharLevelup *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->CharEntityID = 0;
  this->_padding_ = (longlong)&___7UDS_M_CommonLevelGauge_CharLevelup__6B_;
  return this;
}

// ~UDS_M_CommonLevelGauge_CharLevelup @ 14b5128a0

void __thiscall
UDS_M_CommonLevelGauge_CharLevelup::~UDS_M_CommonLevelGauge_CharLevelup
          (UDS_M_CommonLevelGauge_CharLevelup *this)

{
  this->_padding_ = (longlong)&___7UDS_M_CommonLevelGauge__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515000

UClass * __cdecl UDS_M_CommonLevelGauge_CharLevelup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_CharLevelup.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonLevelGauge_CharLevelup",
               &Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_CharLevelup.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonLevelGauge_CharLevelup,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonLevelGauge_CharLevelup>,
               InternalVTableHelperCtorCaller<UDS_M_CommonLevelGauge_CharLevelup>,local_res8,
               UDS_M_CommonLevelGauge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_CharLevelup.InnerSingleton;
}

// StaticRegisterNativesUDS_M_CommonLevelGauge_CharLevelup @ 14b516b90

void __cdecl
UDS_M_CommonLevelGauge_CharLevelup::StaticRegisterNativesUDS_M_CommonLevelGauge_CharLevelup(void)

{
  return;
}

// GetViewModelContext @ 14bcfee70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_CommonLevelGauge_CharLevelup::GetViewModelContext
          (UDS_M_CommonLevelGauge_CharLevelup *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar6;
  UDS_CharacterUIEvent *pUVar7;
  UDS_DataBase *this_00;
  FDS_CharacterBaseTableRow *pFVar8;
  UObject *pUVar9;
  UDS_CharInfoData *pUVar10;
  long64 lVar11;
  FDS_CharacterLevelTableRow *pFVar12;
  UDS_LogManager *pUVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStackY_1f8 [32];
  FWeakObjectPtr local_1b8;
  TSharedPtr<FDS_ViewModelContext_LevelExpGauge,1> local_1b0;
  undefined8 local_1a0;
  long64 local_198;
  longlong lStack_190;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  MakeContext<FDS_ViewModelContext_LevelExpGauge>(&local_1b0);
  if ((local_1b0.Object == (FDS_ViewModelContext_LevelExpGauge *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined4 *)&(local_1b0.Object)->_padding_ = 0x10d;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_M_CommonLevelGauge_CharLevelup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (((TObjectPtr<UDS_ModelBase> *)&(local_1b0.Object)->_padding_)->field0_0x0).DebugPtr =
       (UDS_ModelBase *)this;
  pUVar7 = UDS_CharacterUIEvent::GetEvent();
  if ((pUVar7 == (UDS_CharacterUIEvent *)0x0) || (this->CharEntityID == 0)) {
LAB_14bcfef13:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  UDS_CharInfoData::GetData((ulong64)&local_1b8);
  bVar2 = FWeakObjectPtr::IsValid(&local_1b8);
  if (!bVar2) goto LAB_14bcfef13;
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_1b8);
  iVar4 = UDS_DataBase::GetEntityTableID(this_00);
  pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)iVar4,true);
  if (pFVar8 != (FDS_CharacterBaseTableRow *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar7->QueryCharLevelupGuageData,&local_188);
    if (((*(int *)&(pUVar7->QueryCharLevelupGuageData).Delegate.field_0x10 == 0) ||
        (plVar14 = *(longlong **)&(pUVar7->QueryCharLevelupGuageData).Delegate.field_0x8,
        plVar14 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar14 + 0x38))(), cVar3 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_188);
      local_1a0 = 0;
      local_198 = 0;
      lStack_190 = 0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_188);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar7->QueryCharLevelupGuageData,&local_170);
      plVar14 = (longlong *)0x0;
      if (*(int *)&(pUVar7->QueryCharLevelupGuageData).Delegate.field_0x10 != 0) {
        plVar14 = *(longlong **)&(pUVar7->QueryCharLevelupGuageData).Delegate.field_0x8;
      }
      (**(code **)(*plVar14 + 0x60))(plVar14,&local_1a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_170);
    }
    pUVar9 = FWeakObjectPtr::Get(&local_1b8);
    iVar4 = *(int *)&pUVar9[8].field_0xc;
    (local_1b0.Object)->CurLevel = iVar4;
    iVar5 = 0;
    if (0 < (int)local_1a0) {
      iVar5 = (int)local_1a0 - iVar4;
    }
    (local_1b0.Object)->AddLevel = iVar5;
    pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_1b8);
    iVar4 = UDS_CharInfoData::GetAscendLimitLevel(pUVar10);
    (local_1b0.Object)->LimitLevel = iVar4;
    (local_1b0.Object)->MaxLevel = pFVar8->MaxLevel;
    pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_1b8);
    lVar11 = UDS_CharInfoData::GetLevelTableRowID(pUVar10,(local_1b0.Object)->CurLevel);
    pFVar12 = FDS_CharacterLevelTableRow::Get(lVar11,true);
    if (pFVar12 != (FDS_CharacterLevelTableRow *)0x0) {
      pUVar9 = FWeakObjectPtr::Get(&local_1b8);
      (local_1b0.Object)->CurExp = *(long64 *)&pUVar9[8].field_0x10;
      (local_1b0.Object)->MaxExp = pFVar12->ReqCharExp;
      (local_1b0.Object)->AddExp = local_198;
      if ((local_1b0.Object)->MaxExp < 1) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6291604507084193722>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonLevelGauge.cpp"
                           ,0x46,"context->MaxExp > 0");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar1)();
          return pTVar6;
        }
        __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        (local_1b0.Object)->CurExpRatio =
             (float)(local_1b0.Object)->CurExp / (float)(local_1b0.Object)->MaxExp;
        if (0 < (int)local_1a0) {
          pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_1b8);
          lVar11 = UDS_CharInfoData::GetLevelTableRowID(pUVar10,(int)local_1a0);
          pFVar12 = FDS_CharacterLevelTableRow::Get(lVar11,true);
          if (pFVar12 == (FDS_CharacterLevelTableRow *)0x0) {
            pUVar13 = UDS_LogManager::GetInst();
            if (pUVar13 != (UDS_LogManager *)0x0) {
              pUVar13 = UDS_LogManager::GetInst();
              pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_1b8);
              UDS_CharInfoData::GetLevelTableRowID(pUVar10,(int)local_1a0);
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_M_CommonLevelGauge_CharLevelup::GetViewModelContext",0x37,
                         Yes);
              UDS_LogManager::PrintLog
                        (pUVar13,1,Warning,local_158.Ptr,0x55,
                         L"targetCharLevelTableRow is nullptr. CharacterLevelTableRow ID : %d");
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
            }
          }
          else {
            if ((int)local_1a0 < 1) {
              fVar15 = (local_1b0.Object)->CurExpRatio;
            }
            else {
              fVar15 = (float)lStack_190 / (float)pFVar12->ReqCharExp;
            }
            (local_1b0.Object)->TargetExpRatio = fVar15;
          }
        }
        __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)local_1b0.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_1b0.SharedReferenceCount.ReferenceController;
        if (local_1b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
      }
      goto LAB_14bcff222;
    }
  }
  __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14bcff222:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SetCharInfo @ 14bd1e3b0

void __thiscall
UDS_M_CommonLevelGauge_CharLevelup::SetCharInfo
          (UDS_M_CommonLevelGauge_CharLevelup *this,ulong64 param_1)

{
  this->CharEntityID = param_1;
  return;
}

