// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 7

// ~UEDatabaseStreamer @ 14deb1f00

void __thiscall UEDatabaseStreamer::~UEDatabaseStreamer(UEDatabaseStreamer *this)

{
  this->_padding_ = (longlong)&___7UEDatabaseStreamer__6B_;
  WaitForStreamingToComplete(this);
  operator_delete__(this->BulkData[0]);
  operator_delete__(this->BulkData[1]);
  return;
}

// operator() @ 14deb2050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UEDatabaseStreamer::stream_in'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,IBulkDataIORequest *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  streaming_request *psVar4;
  uint uVar5;
  
  if (4 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:___cdecl_`public:_virtual_void___cdecl_UEDatabaseStreamer::stream_in(unsigned_int,unsigned_int,bool,acl::quality_tier,acl::streaming_request_id)___ptr64'::`2'::<lambda_1>::operator()(bool,IBulkDataIORequest*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  lVar1 = *(longlong *)this;
  uVar2 = *(ulonglong *)((longlong)this + 8);
  uVar5 = (uint)(uVar2 >> 0x20);
  if (param_1) {
    if (*(uint *)(lVar1 + 0x20) <= (uint)uVar2) {
      return;
    }
    psVar4 = (streaming_request *)(*(longlong *)(lVar1 + 0x10) + (uVar2 & 0xffffffff) * 0x14);
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 4 + (uVar2 & 0xffffffff) * 0x14) == 0) {
      return;
    }
    if (psVar4->generation_id != uVar5) {
      return;
    }
    bVar3 = false;
  }
  else {
    if (*(uint *)(lVar1 + 0x20) <= (uint)uVar2) {
      return;
    }
    psVar4 = (streaming_request *)(*(longlong *)(lVar1 + 0x10) + (uVar2 & 0xffffffff) * 0x14);
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 4 + (uVar2 & 0xffffffff) * 0x14) == 0) {
      return;
    }
    if (psVar4->generation_id != uVar5) {
      return;
    }
    bVar3 = true;
  }
  acl::acl_impl::execute_request(bVar3,*(database_context_v0 **)(lVar1 + 8),psVar4);
  psVar4->tier = highest_importance;
  return;
}

// WaitForStreamingToComplete @ 14deb93c0

void __thiscall UEDatabaseStreamer::WaitForStreamingToComplete(UEDatabaseStreamer *this)

{
  IBulkDataIORequest *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  
  pIVar1 = this->PendingIORequest;
  if (pIVar1 != (IBulkDataIORequest *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,0);
    if (cVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingIORequest->WaitCompletion()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                         ,0xa7,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = this->PendingIORequest;
    if (pIVar1 != (IBulkDataIORequest *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    this->PendingIORequest = (IBulkDataIORequest *)0x0;
  }
  return;
}

// get_bulk_data @ 14deba240

uchar * __thiscall UEDatabaseStreamer::get_bulk_data(UEDatabaseStreamer *this,quality_tier param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (param_1 == highest_importance) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tier != acl::quality_tier::highest_importance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x41,L"Unexpected quality tier");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return this->BulkData[param_1 - medium_importance];
}

// is_initialized @ 14deba780

bool __thiscall UEDatabaseStreamer::is_initialized(UEDatabaseStreamer *this)

{
  return true;
}

// stream_in @ 14debabb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
UEDatabaseStreamer::stream_in
          (UEDatabaseStreamer *this,uint param_1,uint param_2,bool param_3,quality_tier param_4,
          streaming_request_id param_5)

{
  uint uVar1;
  streaming_request *psVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  uchar *puVar9;
  TEventRef<unsigned_int> TVar10;
  IBulkDataIORequest *pIVar11;
  FWriteBuffer *pFVar12;
  undefined ***pppuVar13;
  uint uVar14;
  undefined1 auStackY_e8 [32];
  undefined8 local_b0;
  FName local_a8;
  ulonglong local_a0;
  FName local_98;
  undefined4 *local_90;
  longlong local_88;
  code *local_78 [2];
  undefined **local_68;
  UEDatabaseStreamer *local_60;
  ulong64 local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar6 = (ulonglong)param_2;
  uVar1 = param_4 - medium_importance;
  uVar14 = this->BulkDataSize[uVar1];
  if (uVar14 <= param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset < TierBulkDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x4b,L"Steam offset is outside of the bulk data range");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (uVar14 < param_2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size <= TierBulkDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x4c,L"Stream size is larger than the bulk data size");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_a0 = uVar6;
  if ((ulonglong)uVar14 < uVar6 + param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("uint64(Offset) + uint64(Size) <= uint64(TierBulkDataSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x4d,L"Streaming request is outside of the bulk data range");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_4 == highest_importance) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tier != acl::quality_tier::highest_importance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x4e,L"Unexpected quality tier");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  WaitForStreamingToComplete(this);
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__stream_in_UEDatabaseStreamer__UEAAXII_NW4quality_tier_acl__Ustreaming_request_id_5__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  bVar7 = false;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UEDatabaseStreamer::stream_in'::__l2::<lambda_1>,void,bool,IBulkDataIORequest_*>
                ::Call;
  local_60 = this;
  local_58 = param_5.value;
  if (4 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_virtual_void___cdecl_UEDatabaseStreamer::stream_in(unsigned_int,unsigned_int,bool,acl::quality_tier,acl::streaming_request_id)___ptr64'
                ::__l39::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  if (param_3) {
    if (4 < (byte)LogAnimationCompression._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_UEDatabaseStreamer::stream_in(unsigned_int,unsigned_int,bool,acl::quality_tier,acl::streaming_request_id)___ptr64'
                  ::__l60::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    if (this->BulkData[uVar1] != (uchar *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BulkData[TierIndex] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                         ,0x6a,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar9 = operator_new__((ulonglong)uVar14);
    this->BulkData[uVar1] = puVar9;
  }
  uVar14 = 0;
  if (param_4 != medium_importance) {
    uVar14 = this->BulkDataSize[0];
  }
  puVar9 = this->BulkData[uVar1];
  if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
    local_b0 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_b0;
  }
  else {
    ::FName::FName(&local_a8,"ACL");
    TVar10 = FStringTrace::GetNameRef(&local_98);
  }
  uVar3 = *(undefined8 *)TVar10;
  if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>((TLogScope<0> *)&local_90)
    ;
    bVar7 = true;
    *local_90 = (int)uVar3;
    *(undefined8 *)(local_88 + 0x28) = *(undefined8 *)(local_88 + 0x20);
  }
  pIVar11 = FBulkData::CreateStreamingRequest
                      ((FBulkData *)this->StreamableBulkData,(ulonglong)(param_1 + uVar14),local_a0,
                       AIOP_Low,(TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_78,
                       puVar9 + param_1);
  this->PendingIORequest = pIVar11;
  if (pIVar11 == (IBulkDataIORequest *)0x0) {
    if (2 < (byte)LogAnimationCompression._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_UEDatabaseStreamer::stream_in(unsigned_int,unsigned_int,bool,acl::quality_tier,acl::streaming_request_id)___ptr64'
                  ::__l94::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    if ((((uint)param_5.value < (uint)this->_padding_) &&
        (psVar2 = (streaming_request *)(this->_padding_ + (param_5.value & 0xffffffff) * 0x14),
        *(int *)(this->_padding_ + 4 + (param_5.value & 0xffffffff) * 0x14) != 0)) &&
       (psVar2->generation_id == (uint)(param_5.value >> 0x20))) {
      acl::acl_impl::execute_request(false,(database_context_v0 *)this->_padding_,psVar2);
      psVar2->tier = highest_importance;
    }
  }
  if (bVar7) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar13 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar13 = local_50;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  return;
}

// stream_out @ 14debb240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEDatabaseStreamer::stream_out
          (UEDatabaseStreamer *this,uint param_1,uint param_2,bool param_3,quality_tier param_4,
          streaming_request_id param_5)

{
  uint uVar1;
  streaming_request *psVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  
  uVar1 = param_4 - medium_importance;
  uVar3 = this->BulkDataSize[uVar1];
  if (uVar3 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset < TierBulkDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x84,L"Steam offset is outside of the bulk data range");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (uVar3 < param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size <= TierBulkDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x85,L"Stream size is larger than the bulk data size");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)uVar3 < (ulonglong)param_1 + (ulonglong)param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("uint64(Offset) + uint64(Size) <= uint64(TierBulkDataSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x86,L"Streaming request is outside of the bulk data range");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_4 == highest_importance) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tier != acl::quality_tier::highest_importance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                       ,0x87,L"Unexpected quality tier");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  WaitForStreamingToComplete(this);
  if (4 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_virtual_void___cdecl_UEDatabaseStreamer::stream_out(unsigned_int,unsigned_int,bool,acl::quality_tier,acl::streaming_request_id)___ptr64'
                ::__l39::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  if (param_3) {
    if (4 < (byte)LogAnimationCompression._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_UEDatabaseStreamer::stream_out(unsigned_int,unsigned_int,bool,acl::quality_tier,acl::streaming_request_id)___ptr64'
                  ::__l60::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    if (this->BulkData[uVar1] == (uchar *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BulkData[TierIndex] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\UEDatabaseStreamer.h"
                         ,0x99,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    operator_delete__(this->BulkData[uVar1]);
    this->BulkData[uVar1] = (uchar *)0x0;
  }
  if ((((uint)param_5.value < (uint)this->_padding_) &&
      (psVar2 = (streaming_request *)(this->_padding_ + (param_5.value & 0xffffffff) * 0x14),
      *(int *)(this->_padding_ + 4 + (param_5.value & 0xffffffff) * 0x14) != 0)) &&
     (psVar2->generation_id == (uint)(param_5.value >> 0x20))) {
    acl::acl_impl::execute_request(true,(database_context_v0 *)this->_padding_,psVar2);
    psVar2->tier = highest_importance;
  }
  return;
}

