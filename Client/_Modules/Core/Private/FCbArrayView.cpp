// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FCbArrayView @ 1419ccea0

FCbArrayView * __thiscall FCbArrayView::FCbArrayView(FCbArrayView *this)

{
  FCbFieldView::FCbFieldView((FCbFieldView *)this,"\x04\x01",HasFieldType);
  return this;
}

// AppendHash @ 1419e1320

void __thiscall FCbArrayView::AppendHash(FCbArrayView *this,FIoHashBuilder *param_1)

{
  byte local_res8 [8];
  TMemoryView<void_const_> local_18;
  
  local_res8[0] = *(byte *)this & 0x1f;
  FBlake3::Update((FBlake3 *)param_1,local_res8,1);
  local_18.Size = FCbFieldView::GetValueSize((FCbFieldView *)this);
  local_18.Data = *(void **)&this->field_0x8;
  FBlake3::Update((FBlake3 *)param_1,&local_18);
  return;
}

// CopyTo @ 1419e6f70

void __thiscall FCbArrayView::CopyTo(FCbArrayView *this,FArchive *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  byte local_res8 [8];
  
  if ((param_1->field_0x28 & 4) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                       ,699,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  uVar1 = *(undefined8 *)&this->field_0x8;
  local_res8[0] = *(byte *)this & 0x1f;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,uVar1,uVar4);
  return;
}

// CopyTo @ 1419e7020

void __thiscall FCbArrayView::CopyTo(FCbArrayView *this,TMemoryView<void> *param_1)

{
  byte bVar1;
  void *_Src;
  ulong64 uVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  ulong64 _Size;
  ulonglong uVar6;
  
  _Size = FCbFieldView::GetValueSize((FCbFieldView *)this);
  _Src = *(void **)&this->field_0x8;
  if ((param_1->Size != _Size + 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.GetSize() == sizeof(ECbFieldType) + Source.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                         ,0x2b4,L"Buffer is %llu bytes but %llu is required."), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar1 = *(byte *)this;
  if ((param_1->Size == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = param_1->Size;
  pvVar4 = param_1->Data;
  uVar6 = (ulonglong)(uVar2 != 0);
  *(byte *)param_1->Data = bVar1 & 0x1f;
  if ((uVar2 - uVar6 < _Size) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (_Size != 0) {
    memcpy((void *)((longlong)pvVar4 + uVar6),_Src,_Size);
  }
  return;
}

// Equals @ 1419f67a0

bool __thiscall FCbArrayView::Equals(FCbArrayView *this,FCbArrayView *param_1)

{
  void *_Buf1;
  int iVar1;
  ulong64 _Size;
  ulong64 uVar2;
  
  if (((*(byte *)param_1 ^ *(byte *)this) & 0x1f) == 0) {
    _Size = FCbFieldView::GetValueSize((FCbFieldView *)this);
    _Buf1 = *(void **)&this->field_0x8;
    uVar2 = FCbFieldView::GetValueSize((FCbFieldView *)param_1);
    if (_Size == uVar2) {
      if ((_Buf1 != *(void **)&param_1->field_0x8) &&
         (iVar1 = memcmp(_Buf1,*(void **)&param_1->field_0x8,_Size), iVar1 != 0)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// GetHash @ 1419fec60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoHash * __thiscall FCbArrayView::GetHash(FCbArrayView *this,FIoHash *__return_storage_ptr__)

{
  undefined8 uVar1;
  FBlake3Hash *pFVar2;
  undefined1 auStack_7d8 [32];
  byte local_7b8 [16];
  FBlake3Hash local_7a8;
  FBlake3 local_788;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7d8;
  FBlake3::Reset(&local_788);
  local_7b8[0] = *(byte *)this & 0x1f;
  FBlake3::Update(&local_788,local_7b8,1);
  local_7a8.Hash._8_8_ = FCbFieldView::GetValueSize((FCbFieldView *)this);
  local_7a8.Hash._0_8_ = *(undefined8 *)&this->field_0x8;
  FBlake3::Update(&local_788,(TMemoryView<void_const_> *)&local_7a8);
  pFVar2 = FBlake3::Finalize(&local_788,&local_7a8);
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  uVar1 = *(undefined8 *)(pFVar2->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar2->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar1;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(pFVar2->Hash + 0x10);
  return __return_storage_ptr__;
}

// GetSize @ 141a03910

ulong64 __thiscall FCbArrayView::GetSize(FCbArrayView *this)

{
  ulong64 uVar1;
  
  uVar1 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  return uVar1 + 1;
}

// Num @ 141a0f4d0

ulong64 __thiscall FCbArrayView::Num(FCbArrayView *this)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte *pbVar5;
  
  uVar4 = (ulonglong)(byte)~**(byte **)&this->field_0x8 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  pbVar3 = *(byte **)&this->field_0x8 + (9 - (int)lVar2);
  pbVar5 = pbVar3 + 1;
  uVar4 = (ulonglong)(byte)~*pbVar3 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar4 = (ulonglong)(0xff >> ((char)-(int)lVar2 + 9U & 0x1f) & 0xff) & (ulonglong)*pbVar3;
  switch(-(int)lVar2) {
  case 0:
    uVar4 = (ulonglong)*pbVar5;
    pbVar5 = pbVar3 + 2;
  case -1:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -2:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -3:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -4:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -5:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -6:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -7:
    return uVar4 << 8 | (ulonglong)*pbVar5;
  default:
    return uVar4;
  }
}

