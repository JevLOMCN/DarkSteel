// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 4

// AddOrRemoveFlags @ 1445b2820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FBackendStatus::AddOrRemoveFlags
          (FBackendStatus *this,EFlags param_1,bool param_2,wchar_t *param_3)

{
  atomic<unsigned_char> aVar1;
  atomic<unsigned_char> aVar2;
  size_t sVar3;
  void *pvVar4;
  TStringBuilderBase<wchar_t> *pTVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_178 [32];
  TStringBuilderWithBuffer<wchar_t,128> local_158;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  aVar2 = this->Flags;
  if (param_2) {
    do {
      LOCK();
      aVar1 = this->Flags;
      bVar9 = aVar2 == aVar1;
      if (bVar9) {
        this->Flags = (atomic<unsigned_char>)((byte)aVar2 | param_1);
        aVar1 = aVar2;
      }
      aVar2 = aVar1;
      UNLOCK();
    } while (!bVar9);
  }
  else {
    do {
      LOCK();
      aVar1 = this->Flags;
      bVar9 = aVar2 == aVar1;
      if (bVar9) {
        this->Flags = (atomic<unsigned_char>)((byte)aVar2 & ~param_1);
        aVar1 = aVar2;
      }
      aVar2 = aVar1;
      UNLOCK();
    } while (!bVar9);
  }
  local_158._padding_._0_2_ = 0;
  local_158._padding_ = (longlong)local_158.StringBuffer;
  iVar8 = 0;
  local_158._padding_ = (longlong)local_38;
  pwVar7 = local_158.StringBuffer;
  local_158._padding_ = (longlong)pwVar7;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    iVar8 = (int)sVar3;
  }
  uVar6 = (ulong64)iVar8;
  if (local_38 < local_158.StringBuffer + uVar6) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,uVar6);
    pwVar7 = (wchar_t *)local_158._padding_;
  }
  if (iVar8 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pwVar7,param_3,uVar6 * 2);
    local_158._padding_ = (longlong)pvVar4 + uVar6 * 2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)&local_158,L" \'",2)
  ;
  pwVar7 = L"false";
  if (param_2) {
    pwVar7 = L"true";
  }
  sVar3 = wcslen(pwVar7);
  uVar6 = (ulong64)(int)sVar3;
  if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + uVar6 * 2)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,uVar6);
  }
  if ((int)sVar3 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy((void *)local_158._padding_,pwVar7,uVar6 * 2);
    local_158._padding_ = (longlong)pvVar4 + uVar6 * 2;
  }
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)&local_158,L"\', backend status \'(",0x14);
  pTVar5 = IoStore::operator<<(pTVar5,(EFlags)aVar2);
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,L") -> (",6);
  pTVar5 = IoStore::operator<<(pTVar5,(EFlags)this->Flags);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,L")\'",2);
  if (4 < (byte)LogIas._0_1_) {
    Logging::Private::
    LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringBuilderWithBuffer<wchar_t,128>_&>
              ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_158);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_158);
  return;
}

// IsHttpEnabled @ 1445dde30

bool __cdecl UE::IoStore::FBackendStatus::IsHttpEnabled(uchar param_1)

{
  if (((param_1 & 2) != 0) && (GIasHttpEnabled)) {
    return true;
  }
  return false;
}

// IsHttpEnabled @ 1445dde50

bool __thiscall
UE::IoStore::FBackendStatus::IsHttpEnabled(FBackendStatus *this,EIoChunkType param_1)

{
  if (((((byte)this->Flags & 2) != 0) && (GIasHttpEnabled)) &&
     ((param_1 != OptionalBulkData ||
      ((((byte)this->Flags & 4) == 0 && (GIasHttpOptionalBulkDataEnabled)))))) {
    return true;
  }
  return false;
}

// ToString @ 144605290

void __thiscall
UE::IoStore::FBackendStatus::ToString(FBackendStatus *this,TStringBuilderBase<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  
  if (((byte)this->Flags & 1) == 0) {
    iVar2 = 0x12;
    pwVar1 = L"Caching - Disabled";
  }
  else {
    iVar2 = 0x11;
    pwVar1 = L"Caching - Enabled";
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar2);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L" | ",3);
  if ((((byte)this->Flags & 2) == 0) || (GIasHttpEnabled == false)) {
    iVar2 = 0xf;
    pwVar1 = L"Http - Disabled";
  }
  else {
    iVar2 = 0xe;
    pwVar1 = L"Http - Enabled";
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar2);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L" | ",3);
  if ((((((byte)this->Flags & 2) != 0) && (GIasHttpEnabled != false)) &&
      (((byte)this->Flags & 4) == 0)) && (GIasHttpOptionalBulkDataEnabled != false)) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"Optional Mips Enabled",0x15);
    return;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"Optional Mips Disabled",0x16);
  return;
}

