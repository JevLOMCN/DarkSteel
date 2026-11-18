// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// operator= @ 1488b2ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTimerUnifiedDelegate * __thiscall
FTimerUnifiedDelegate::operator=(FTimerUnifiedDelegate *this,FTimerUnifiedDelegate *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  FTimerUnifiedDelegate *pFVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1 != this) {
    bVar1 = (param_1->VariantDelegate).TypeIndex;
    local_38 = CONCAT31(local_38._1_3_,bVar1);
    if (3 < (ulonglong)bVar1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x105,L"");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FTimerUnifiedDelegate *)(*pcVar2)();
        return pFVar12;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar1])(&local_68,param_1);
    uVar3 = *(undefined8 *)&(this->VariantDelegate).field_0x10;
    uVar4 = *(undefined8 *)&(this->VariantDelegate).field_0x18;
    uVar5 = *(undefined8 *)&this->VariantDelegate;
    uVar6 = *(undefined8 *)&(this->VariantDelegate).field_0x8;
    uVar9 = CONCAT44(uStack_34,local_38);
    uVar10 = CONCAT44(uStack_2c,uStack_30);
    local_38 = *(uint *)&(this->VariantDelegate).TypeIndex;
    uStack_34 = *(undefined4 *)&(this->VariantDelegate).field_0x34;
    uStack_30 = *(undefined4 *)&(this->VariantDelegate).field_0x38;
    uStack_2c = *(undefined4 *)&(this->VariantDelegate).field_0x3c;
    uVar7 = *(undefined8 *)&(this->VariantDelegate).field_0x20;
    uVar8 = *(undefined8 *)&(this->VariantDelegate).field_0x28;
    *(undefined8 *)&this->VariantDelegate = local_68;
    *(undefined8 *)&(this->VariantDelegate).field_0x8 = uStack_60;
    *(undefined8 *)&(this->VariantDelegate).field_0x10 = local_58;
    *(undefined8 *)&(this->VariantDelegate).field_0x18 = uStack_50;
    uVar13 = local_38 & 0xff;
    *(undefined8 *)&(this->VariantDelegate).field_0x20 = local_48;
    *(undefined8 *)&(this->VariantDelegate).field_0x28 = uStack_40;
    *(undefined8 *)&(this->VariantDelegate).TypeIndex = uVar9;
    *(undefined8 *)&(this->VariantDelegate).field_0x38 = uVar10;
    local_68 = uVar5;
    uStack_60 = uVar6;
    local_58 = uVar3;
    uStack_50 = uVar4;
    local_48 = uVar7;
    uStack_40 = uVar8;
    if (3 < (ulonglong)uVar13) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FTimerUnifiedDelegate *)(*pcVar2)();
        return pFVar12;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(&local_68);
  }
  return this;
}

// Execute @ 1488be620

/* WARNING: Removing unreachable block (ram,0x0001488be92c) */
/* WARNING: Removing unreachable block (ram,0x0001488be951) */
/* WARNING: Removing unreachable block (ram,0x0001488be65e) */
/* WARNING: Removing unreachable block (ram,0x0001488be683) */
/* WARNING: Removing unreachable block (ram,0x0001488bea39) */
/* WARNING: Removing unreachable block (ram,0x0001488bea5e) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTimerUnifiedDelegate::Execute(FTimerUnifiedDelegate *this)

{
  int *piVar1;
  uchar uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_void___cdecl_FTimerUnifiedDelegate::Execute(void)const_::_16_::FStat_STAT_FTimerUnifiedDelegate_Execute>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  UObject *this_02;
  UFunction *pUVar10;
  UObjectBaseUtility *pUVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  UObjectBaseUtility *pUVar16;
  bool bVar17;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FName local_60;
  byte local_58;
  FStatMessage local_50;
  FDestructionSentinel local_40;
  
  uVar2 = (this->VariantDelegate).TypeIndex;
  if (uVar2 == '\x01') {
    if (((*(int *)&(this->VariantDelegate).field_0x8 != 0) &&
        (*(longlong **)&this->VariantDelegate != (longlong *)0x0)) &&
       (cVar7 = (**(code **)(**(longlong **)&this->VariantDelegate + 0x38))(), cVar7 != '\0')) {
      pUVar16 = (UObjectBaseUtility *)0x0;
      pUVar11 = pUVar16;
      if ((*(int *)&(this->VariantDelegate).field_0x8 != 0) &&
         (*(longlong **)&this->VariantDelegate != (longlong *)0x0)) {
        pUVar11 = (UObjectBaseUtility *)
                  (**(code **)(**(longlong **)&this->VariantDelegate + 0x10))();
      }
      FScopeCycleCounterUObject::FScopeCycleCounterUObject
                ((FScopeCycleCounterUObject *)&local_60,pUVar11);
      if (*(int *)&(this->VariantDelegate).field_0x8 != 0) {
        pUVar16 = *(UObjectBaseUtility **)&this->VariantDelegate;
      }
      (**(code **)(*(longlong *)pUVar16 + 0x60))(pUVar16);
      if ((local_58 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_58 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_58 & 4) != 0) {
        FThreadStats::AddMessage(local_60,CycleScopeEnd);
        return;
      }
    }
  }
  else if (uVar2 == '\x02') {
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&local_40);
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&(this->VariantDelegate).field_0x8);
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object.IsValid() != false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                             ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(longlong *)&(this->VariantDelegate).field_0x10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FunctionName != NAME_None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                             ,0x1bc,L"ProcessDelegate() called with no function name set!"), bVar6))
      {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_02 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->VariantDelegate).field_0x8);
      FVar3.ComparisonIndex.Value = *(uint *)&(this->VariantDelegate).field_0x10;
      FVar3.Number = *(uint *)&(this->VariantDelegate).field_0x14;
      pUVar10 = UObject::FindFunctionChecked(this_02,FVar3);
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      (**(code **)(*(longlong *)this_02 + 0x260))(this_02,pUVar10,0);
      return;
    }
  }
  else if ((uVar2 == '\x03') && (*(longlong *)&this->VariantDelegate != 0)) {
    FVar15.Value = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_FTimerUnifiedDelegate_Execute ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FTimerUnifiedDelegate::Execute(void)const_::_16_::FStat_STAT_FTimerUnifiedDelegate_Execute>
           )0x0) {
        pFVar8 = ::FName::FName(&local_res20,"STAT_FTimerUnifiedDelegate_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTimerUnifiedDelegate_Execute,*pFVar8,
                   L"STAT_FTimerUnifiedDelegate_Execute","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar9 = StatPtr_STAT_FTimerUnifiedDelegate_Execute;
    if (StatPtr_STAT_FTimerUnifiedDelegate_Execute ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FTimerUnifiedDelegate::Execute(void)const_::_16_::FStat_STAT_FTimerUnifiedDelegate_Execute>
         )0x0) {
      pFVar8 = ::FName::FName(&local_78,"STAT_FTimerUnifiedDelegate_Execute");
      FVar9 = (FThreadSafeStaticStat<_public:_void___cdecl_FTimerUnifiedDelegate::Execute(void)const_::_16_::FStat_STAT_FTimerUnifiedDelegate_Execute>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTimerUnifiedDelegate_Execute,
                           *pFVar8,L"STAT_FTimerUnifiedDelegate_Execute","STATGROUP_Quick",
                           "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar9;
    bVar6 = false;
    bVar5 = false;
    local_70.ComparisonIndex.Value = 0;
    local_70.Number = 0;
    FVar13.Bits = (uint)FVar3.ComparisonIndex.Value;
    uVar12 = FVar3.Number;
    if ((FVar13.Bits == 0) && (uVar12 == 0)) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                  *)this);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
        bVar6 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res10.Bits = FVar13.Bits;
          local_res14 = uVar12;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                     ,0x180);
          bVar6 = true;
          bVar5 = true;
        }
      }
      bVar17 = FThreadStats::bPrimaryEnable != false;
      FVar14 = local_70;
      if (bVar17) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        local_70 = FVar3;
        FThreadStats::AddMessage(FVar3,CycleScopeStart);
        FVar14 = FVar3;
        FVar15.Value = local_70.ComparisonIndex.Value;
      }
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                  *)this);
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar17) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_50.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
          local_50.NameAndInfo.Index.Value = FVar15.Value;
          QueryPerformanceCounter(&local_res18);
          local_50.StatData.Pad[4] = '\0';
          local_50.StatData.Pad[5] = '\0';
          local_50.StatData.Pad[6] = '\0';
          local_50.StatData.Pad[7] = '\0';
          local_50.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
          local_50.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
          local_50.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
          local_50.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_50);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
  }
  return;
}

// GetBoundObject @ 1488c2370

/* WARNING: Removing unreachable block (ram,0x0001488c2394) */
/* WARNING: Removing unreachable block (ram,0x0001488c23b9) */
/* WARNING: Removing unreachable block (ram,0x0001488c23fb) */
/* WARNING: Removing unreachable block (ram,0x0001488c2420) */

void * __thiscall FTimerUnifiedDelegate::GetBoundObject(FTimerUnifiedDelegate *this)

{
  uchar uVar1;
  bool bVar2;
  char cVar3;
  UObject *pUVar4;
  void *pvVar5;
  FReadAccessScope local_28;
  
  uVar1 = (this->VariantDelegate).TypeIndex;
  if (uVar1 == '\x01') {
    if ((((*(int *)&(this->VariantDelegate).field_0x8 != 0) &&
         (*(longlong **)&this->VariantDelegate != (longlong *)0x0)) &&
        (cVar3 = (**(code **)(**(longlong **)&this->VariantDelegate + 0x38))(), cVar3 != '\0')) &&
       ((*(int *)&(this->VariantDelegate).field_0x8 != 0 &&
        (*(longlong **)&this->VariantDelegate != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001488c244f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar5 = (void *)(**(code **)(**(longlong **)&this->VariantDelegate + 0x18))();
      return pvVar5;
    }
  }
  else if ((uVar1 == '\x02') &&
          (bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this), bVar2)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->VariantDelegate).field_0x8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return pUVar4;
  }
  return (void *)0x0;
}

// IsBound @ 1488ccf10

/* WARNING: Removing unreachable block (ram,0x0001488ccf76) */
/* WARNING: Removing unreachable block (ram,0x0001488ccf9b) */
/* WARNING: Removing unreachable block (ram,0x0001488ccf3e) */
/* WARNING: Removing unreachable block (ram,0x0001488ccf63) */
/* WARNING: Removing unreachable block (ram,0x0001488ccfae) */
/* WARNING: Removing unreachable block (ram,0x0001488ccfd3) */

bool __thiscall FTimerUnifiedDelegate::IsBound(FTimerUnifiedDelegate *this)

{
  uchar uVar1;
  bool bVar2;
  char cVar3;
  
  uVar1 = (this->VariantDelegate).TypeIndex;
  if (uVar1 == '\x01') {
    if (((*(int *)&(this->VariantDelegate).field_0x8 != 0) &&
        (*(longlong **)&this->VariantDelegate != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)&this->VariantDelegate + 0x38))(), cVar3 != '\0')) {
      return true;
    }
  }
  else {
    if (uVar1 == '\x02') {
      bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                        ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this);
      return bVar2;
    }
    if (uVar1 == '\x03') {
      return *(longlong *)&this->VariantDelegate != 0;
    }
  }
  return false;
}

// ToString @ 1488e80a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001488e838b) */
/* WARNING: Removing unreachable block (ram,0x0001488e83ac) */
/* WARNING: Removing unreachable block (ram,0x0001488e8109) */
/* WARNING: Removing unreachable block (ram,0x0001488e812e) */
/* WARNING: Removing unreachable block (ram,0x0001488e84af) */
/* WARNING: Removing unreachable block (ram,0x0001488e84d0) */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FTimerUnifiedDelegate::ToString(FTimerUnifiedDelegate *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  uchar uVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_class_FString___cdecl_FTimerUnifiedDelegate::ToString(void)const_::_30_::FStat_STAT_FTimerUnifiedDelegate_Execute>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  UObject *this_02;
  longlong *plVar9;
  longlong lVar10;
  ulong64 uVar11;
  size_t sVar12;
  UObjectBaseUtility *this_03;
  uint uVar13;
  wchar_t *pwVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStackY_ff8 [32];
  FColor_u_0 local_f98 [2];
  FString local_f90;
  FName local_f80;
  FName local_f78;
  longlong local_f68;
  LARGE_INTEGER local_f60;
  FName local_f58;
  FStatMessage local_f50;
  FString local_f40;
  FString local_f30;
  FString local_f20;
  FName local_f10;
  FName local_f08;
  undefined1 local_f00 [8];
  FString local_ef8;
  FString local_ee8;
  FString local_ed8;
  FReadAccessScope local_ec8;
  FReadAccessScope local_eb0;
  FProgramCounterSymbolInfo local_e98;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_ff8;
  this_03 = (UObjectBaseUtility *)0x0;
  FVar17.Value = 0;
  local_f98[0].Bits = 0;
  uVar2 = (this->VariantDelegate).TypeIndex;
  if (uVar2 != '\x01') {
    if (uVar2 != '\x02') {
      if (uVar2 == '\x03') {
        local_f98[0].Bits = 0;
        if (*(longlong *)&this->VariantDelegate == 0) {
          pwVar14 = L"UNBOUND TFUNCTION";
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            if (StatPtr_STAT_FTimerUnifiedDelegate_Execute ==
                (FThreadSafeStaticStat<_public:_class_FString___cdecl_FTimerUnifiedDelegate::ToString(void)const_::_30_::FStat_STAT_FTimerUnifiedDelegate_Execute>
                 )0x0) {
              pFVar7 = ::FName::FName(&local_f10,"STAT_FTimerUnifiedDelegate_Execute");
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTimerUnifiedDelegate_Execute,
                         *pFVar7,L"STAT_FTimerUnifiedDelegate_Execute","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
            }
            _Init_thread_footer(&::_TSS0);
          }
          FVar8 = StatPtr_STAT_FTimerUnifiedDelegate_Execute;
          if (StatPtr_STAT_FTimerUnifiedDelegate_Execute ==
              (FThreadSafeStaticStat<_public:_class_FString___cdecl_FTimerUnifiedDelegate::ToString(void)const_::_30_::FStat_STAT_FTimerUnifiedDelegate_Execute>
               )0x0) {
            pFVar7 = ::FName::FName(&local_f08,"STAT_FTimerUnifiedDelegate_Execute");
            FVar8 = (FThreadSafeStaticStat<_public:_class_FString___cdecl_FTimerUnifiedDelegate::ToString(void)const_::_30_::FStat_STAT_FTimerUnifiedDelegate_Execute>
                     )FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)
                                 &StatPtr_STAT_FTimerUnifiedDelegate_Execute,*pFVar7,
                                 L"STAT_FTimerUnifiedDelegate_Execute","STATGROUP_Quick",
                                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                                 MCR_Invalid);
          }
          FVar3 = *(FName *)FVar8;
          bVar5 = false;
          bVar4 = false;
          local_f78.ComparisonIndex.Value = 0;
          local_f78.Number = 0;
          FVar15 = FVar3.ComparisonIndex.Value;
          uVar13 = FVar3.Number;
          if ((FVar15.Value != 0) || (uVar13 != 0)) {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_f98[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_f98[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
              bVar5 = false;
              bVar4 = true;
              if (-1 < CpuChannel->Enabled) {
                local_f80.ComparisonIndex.Value = FVar15.Value;
                local_f80.Number = uVar13;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_f80,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                           ,0x205);
                bVar5 = true;
                bVar4 = true;
              }
            }
            bVar19 = FThreadStats::bPrimaryEnable != false;
            FVar16 = local_f78;
            if (bVar19) {
              local_f80.ComparisonIndex.Value = FVar15.Value;
              local_f80.Number = uVar13;
              local_f78 = FVar3;
              FThreadStats::AddMessage(FVar3,CycleScopeStart);
              FVar16 = FVar3;
              FVar17.Value = local_f78.ComparisonIndex.Value;
            }
            ::FString::FString(__return_storage_ptr__,L"TFUNCTION");
            if (bVar4) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar5) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (!bVar19) {
              return __return_storage_ptr__;
            }
            if (FVar16 == (FName)0x0) {
              return __return_storage_ptr__;
            }
            if (FThreadStats::bPrimaryDisableForever != false) {
              return __return_storage_ptr__;
            }
            if (FThreadStats::TlsSlot == 0xffffffff) {
              return __return_storage_ptr__;
            }
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
              return __return_storage_ptr__;
            }
            local_f50.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
            local_f50.NameAndInfo.Index.Value = FVar17.Value;
            QueryPerformanceCounter(&local_f60);
            local_f50.StatData.Pad[4] = '\0';
            local_f50.StatData.Pad[5] = '\0';
            local_f50.StatData.Pad[6] = '\0';
            local_f50.StatData.Pad[7] = '\0';
            local_f50.StatData.Pad[0] = local_f60.s.LowPart._0_1_;
            local_f50.StatData.Pad[1] = local_f60.s.LowPart._1_1_;
            local_f50.StatData.Pad[2] = local_f60.s.LowPart._2_1_;
            local_f50.StatData.Pad[3] = local_f60.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(this_00,&local_f50);
            piVar1 = &this_00->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(this_00,false,false);
              return __return_storage_ptr__;
            }
            if (FThreadStats::bIsRawStatsActive == false) {
              return __return_storage_ptr__;
            }
            FThreadStats::FlushRawStats(this_00,false,false);
            return __return_storage_ptr__;
          }
          pwVar14 = L"TFUNCTION";
        }
      }
      else {
        pwVar14 = L"UNSET";
      }
LAB_1488e8795:
      ::FString::FString(__return_storage_ptr__,pwVar14);
      return __return_storage_ptr__;
    }
    local_f98[0].Bits = 0;
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this);
    if (!bVar5) {
      pwVar14 = L"UNBOUND DYN DELEGATE";
      goto LAB_1488e8795;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_ec8);
    this_02 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->VariantDelegate).field_0x8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_ec8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_eb0);
    local_f58.ComparisonIndex.Value = *(uint *)&(this->VariantDelegate).field_0x10;
    local_f58.Number = *(uint *)&(this->VariantDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_eb0);
    ::FName::ToString(&local_f58,&local_ee8);
    if (this_02 == (UObject *)0x0) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"DYN DELEGATE,%s,%s");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_02,&local_ef8,(UObject *)0x0);
      ::FString::PrintfImpl(__return_storage_ptr__,L"DYN DELEGATE,%s,%s");
      if (local_ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_1488e8782;
  }
  local_f98[0].Bits = 0;
  if (((*(int *)&(this->VariantDelegate).field_0x8 == 0) ||
      (*(longlong **)&this->VariantDelegate == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(**(longlong **)&this->VariantDelegate + 0x38))(), cVar6 == '\0')) {
    pwVar14 = L"UNBOUND DELEGATE";
    goto LAB_1488e8795;
  }
  local_f90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f90.Data.ArrayNum = 0;
  local_f90.Data.ArrayMax = 0;
  if ((*(int *)&(this->VariantDelegate).field_0x8 == 0) ||
     (plVar9 = *(longlong **)&this->VariantDelegate, plVar9 == (longlong *)0x0)) {
    local_f68 = 0;
    plVar9 = &local_f68;
  }
  else {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,local_f00);
  }
  if (*plVar9 == 0) {
    if (*(int *)&(this->VariantDelegate).field_0x8 != 0) {
      if ((*(longlong **)&this->VariantDelegate != (longlong *)0x0) &&
         (lVar10 = (**(code **)(**(longlong **)&this->VariantDelegate + 0x18))(), lVar10 != 0)) {
        ::FString::PrintfImpl(&local_f40,L"vtbl: %p");
        if (local_f90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f90.Data.AllocatorInstance.Data);
        }
        local_f90.Data.AllocatorInstance.Data = local_f40.Data.AllocatorInstance.Data;
        local_f90.Data.ArrayMax = local_f40.Data.ArrayMax;
        local_f90.Data.ArrayNum = local_f40.Data.ArrayNum;
      }
      if (((*(int *)&(this->VariantDelegate).field_0x8 != 0) &&
          (*(longlong **)&this->VariantDelegate != (longlong *)0x0)) &&
         (uVar11 = (**(code **)(**(longlong **)&this->VariantDelegate + 0x20))(), uVar11 != 0)) {
        ::FString::PrintfImpl(&local_f30,L" func: 0x%llx");
        iVar18 = local_f30.Data.ArrayNum + -1;
        if (local_f30.Data.ArrayNum == 0) {
          iVar18 = 0;
        }
        ::FString::AppendChars(&local_f90,(wchar_t *)local_f30.Data.AllocatorInstance.Data,iVar18);
        if (local_f30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f30.Data.AllocatorInstance.Data);
        }
        if (DumpTimerLogSymbolNames != 0) {
          FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(&local_e98);
          local_e98.FunctionName[0] = '\0';
          local_e98.Filename[0] = '\0';
          local_e98.LineNumber = 0;
          FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo(uVar11,&local_e98);
          local_158._padding_ = 0;
          sVar12 = strlen(local_e98.Filename);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,local_e98.Filename,(int)sVar12,Yes);
          local_278._padding_ = 0;
          sVar12 = strlen(local_e98.FunctionName);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,local_e98.FunctionName,(int)sVar12,Yes);
          ::FString::PrintfImpl(&local_f20,L" %s [%s:%d]");
          iVar18 = local_f20.Data.ArrayNum + -1;
          if (local_f20.Data.ArrayNum == 0) {
            iVar18 = 0;
          }
          ::FString::AppendChars(&local_f90,(wchar_t *)local_f20.Data.AllocatorInstance.Data,iVar18)
          ;
          if (local_f20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f20.Data.AllocatorInstance.Data);
          }
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        goto LAB_1488e86fe;
      }
    }
    ::FString::operator=(&local_f90,L" 0x0");
  }
LAB_1488e86fe:
  if ((*(int *)&(this->VariantDelegate).field_0x8 != 0) &&
     (*(longlong **)&this->VariantDelegate != (longlong *)0x0)) {
    this_03 = (UObjectBaseUtility *)(**(code **)(**(longlong **)&this->VariantDelegate + 0x10))();
  }
  if (this_03 == (UObjectBaseUtility *)0x0) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"DELEGATE,%s,%s");
    local_ee8.Data.AllocatorInstance.Data = local_f90.Data.AllocatorInstance.Data;
  }
  else {
    UObjectBaseUtility::GetPathName(this_03,&local_ed8,(UObject *)0x0);
    ::FString::PrintfImpl(__return_storage_ptr__,L"DELEGATE,%s,%s");
    local_ee8.Data.AllocatorInstance.Data = local_f90.Data.AllocatorInstance.Data;
    if (local_ed8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ed8.Data.AllocatorInstance.Data);
      local_ee8.Data.AllocatorInstance.Data = local_f90.Data.AllocatorInstance.Data;
    }
  }
LAB_1488e8782:
  if (local_ee8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

