// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// IAsyncReadRequest @ 14161e590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

IAsyncReadRequest * __thiscall
IAsyncReadRequest::IAsyncReadRequest
          (IAsyncReadRequest *this,TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_1,
          bool param_2,uchar *param_3)

{
  FName FVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  IAsyncReadRequest *pIVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 auStackY_d8 [32];
  FName local_78;
  FStatMessage local_70;
  FName local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  *(undefined8 *)&this->Callback = 0;
  *(undefined8 *)&(this->Callback).field_0x28 = 0;
  *(undefined ***)this = &___7IAsyncReadRequest__6B_;
  this->bDataIsReady = false;
  this->bCompleteAndCallbackCalled = false;
  this->bCompleteSync = false;
  this->bCanceled = false;
  this->bUserSuppliedMemory = param_3 != (uchar *)0x0;
  this->bSizeRequest = param_2;
  if (param_1 != (TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *)0x0) {
    local_58 = *(longlong *)param_1;
    uStack_30 = (longlong *)0x0;
    if (local_58 != 0) {
      puVar15 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar15 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar15)(puVar15,&local_48);
    }
    lVar9 = *(longlong *)&this->Callback;
    uVar10 = *(undefined8 *)&(this->Callback).field_0x8;
    uVar3 = *(undefined4 *)&(this->Callback).field_0x10;
    uVar4 = *(undefined4 *)&(this->Callback).field_0x14;
    uVar5 = *(undefined4 *)&(this->Callback).field_0x18;
    uVar6 = *(undefined4 *)&(this->Callback).field_0x1c;
    uVar7 = *(undefined8 *)&(this->Callback).field_0x20;
    plVar8 = *(longlong **)&(this->Callback).field_0x28;
    *(longlong *)&this->Callback = local_58;
    *(undefined8 *)&(this->Callback).field_0x8 = uStack_50;
    *(undefined4 *)&(this->Callback).field_0x10 = (undefined4)local_48;
    *(undefined4 *)&(this->Callback).field_0x14 = local_48._4_4_;
    *(undefined4 *)&(this->Callback).field_0x18 = uStack_40;
    *(undefined4 *)&(this->Callback).field_0x1c = uStack_3c;
    *(undefined4 *)&(this->Callback).field_0x20 = (undefined4)local_38;
    *(undefined4 *)&(this->Callback).field_0x24 = local_38._4_4_;
    *(undefined4 *)&(this->Callback).field_0x28 = (undefined4)uStack_30;
    *(undefined4 *)&(this->Callback).field_0x2c = uStack_30._4_4_;
    local_48._0_4_ = uVar3;
    local_48._4_4_ = uVar4;
    uStack_40 = uVar5;
    uStack_3c = uVar6;
    local_38 = uVar7;
    uStack_30 = plVar8;
    local_58 = lVar9;
    uStack_50 = uVar10;
    if (lVar9 != 0) {
      plVar16 = &local_48;
      if (plVar8 != (longlong *)0x0) {
        plVar16 = plVar8;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  if (this->bSizeRequest == false) {
    (this->field8_0x8).Memory = param_3;
    if (((param_3 != (uchar *)0x0) != this->bUserSuppliedMemory) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(!!Memory) == bUserSuppliedMemory",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                            ,0x43,L""), bVar11)) goto code_r0x00014161e6f7;
  }
  else {
    (this->field8_0x8).Size = -1;
    if (((param_3 != (uchar *)0x0) || (this->bUserSuppliedMemory != false)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UserSuppliedMemory && !bUserSuppliedMemory",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                            ,0x3e,L""), bVar11)) {
code_r0x00014161e6f7:
      pcVar2 = (code *)swi(3);
      pIVar12 = (IAsyncReadRequest *)(*pcVar2)();
      return pIVar12;
    }
  }
  FVar14 = StatPtr_STAT_AsyncFileRequests;
  if (StatPtr_STAT_AsyncFileRequests == (FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests>)0x0) {
    pFVar13 = ::FName::FName(&local_60,"STAT_AsyncFileRequests");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileRequests,*pFVar13,
                        L"Num Async File Requests","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar14;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_78 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_70.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_70.StatData.Pad[0] = '\x01';
    local_70.StatData.Pad[1] = '\0';
    local_70.StatData.Pad[2] = '\0';
    local_70.StatData.Pad[3] = '\0';
    local_70.StatData.Pad[4] = '\0';
    local_70.StatData.Pad[5] = '\0';
    local_70.StatData.Pad[6] = '\0';
    local_70.StatData.Pad[7] = '\0';
    local_78 = FVar1;
    local_70.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_70);
    FStatsTrace::Add(&local_78,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~IAsyncReadRequest @ 141621260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IAsyncReadRequest::~IAsyncReadRequest(IAsyncReadRequest *this)

{
  FName FVar1;
  longlong *plVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar5;
  FName local_res8;
  FStatMessage local_18;
  
  *(undefined ***)this = &___7IAsyncReadRequest__6B_;
  if ((this->bCompleteAndCallbackCalled == false) ||
     ((this->bSizeRequest == false && ((this->field8_0x8).Size != 0)))) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual___cdecl_IAsyncReadRequest::~IAsyncReadRequest(void)___ptr64'::__l3
                ::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  FVar4 = StatPtr_STAT_AsyncFileRequests;
  if (StatPtr_STAT_AsyncFileRequests == (FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_AsyncFileRequests");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileRequests,*pFVar3,
                       L"Num Async File Requests","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar4;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  if (*(longlong *)&this->Callback == 0) {
    return;
  }
  plVar2 = *(longlong **)&(this->Callback).field_0x28;
  plVar5 = (longlong *)&(this->Callback).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000141621431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))();
  return;
}

// EnsureCompletion @ 141638c00

void __thiscall IAsyncReadRequest::EnsureCompletion(IAsyncReadRequest *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141638c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))(this,0);
  return;
}

// SetComplete @ 14165ce10

void __thiscall IAsyncReadRequest::SetComplete(IAsyncReadRequest *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  IAsyncReadRequest *local_res10;
  
  this->bDataIsReady = true;
  if (*(void **)&this->Callback != (void *)0x0) {
    local_res8[0] = this->bCanceled;
    local_res10 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->Callback);
    plVar1 = *(longlong **)&(this->Callback).field_0x28;
    pcVar2 = *(code **)&this->Callback;
    plVar4 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8,&local_res10);
  }
  this->bCompleteAndCallbackCalled = true;
  return;
}

// GetReadResults @ 14194aa20

uchar * __thiscall IAsyncReadRequest::GetReadResults(IAsyncReadRequest *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if ((this->bDataIsReady == false) || (this->bSizeRequest != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataIsReady && !bSizeRequest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                       ,0x96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = (uchar *)(this->field8_0x8).Size;
  if (puVar3 != (uchar *)0x0) {
    if (this->bCanceled != false) {
      return (uchar *)0x0;
    }
    if (this->bUserSuppliedMemory == false) {
      (**(code **)(*(longlong *)this + 0x20))(this);
    }
  }
  (this->field8_0x8).Size = 0;
  return puVar3;
}

