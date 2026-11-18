// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// HashFile @ 14194d300

FMD5Hash * __cdecl
FMD5Hash::HashFile(FMD5Hash *__return_storage_ptr__,wchar_t *param_1,
                  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  IFileManager *pIVar1;
  FArchive *pFVar2;
  
  pIVar1 = IFileManager::Get();
  pFVar2 = (FArchive *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1,0);
  HashFileFromArchive(__return_storage_ptr__,pFVar2,param_2);
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  return __return_storage_ptr__;
}

// HashFileFromArchive @ 14194d370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMD5Hash * __cdecl
FMD5Hash::HashFileFromArchive
          (FMD5Hash *__return_storage_ptr__,FArchive *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uchar *puVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong _Size;
  ulonglong uVar10;
  uchar *puVar11;
  ulonglong uVar12;
  undefined1 auStackY_e8 [32];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b8;
  FMD5 local_a8;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  __return_storage_ptr__->bIsValid = false;
  if (param_1 != (FArchive *)0x0) {
    uVar9 = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    if (param_2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x10000,&local_b8.AllocatorInstance,&local_b8.ArrayNum,&local_b8.ArrayMax);
      param_2 = &local_b8;
    }
    local_a8.Context.count[0] = 0;
    local_a8.Context.count[1] = 0;
    local_a8.Context.state[0] = 0x67452301;
    local_a8.Context.state[1] = 0xefcdab89;
    local_a8.Context.state[2] = 0x98badcfe;
    local_a8.Context.state[3] = 0x10325476;
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    uVar8 = uVar9;
    if (0 < lVar4) {
      do {
        uVar7 = (longlong)param_2->ArrayNum;
        if ((longlong)(lVar4 - uVar9) < (longlong)param_2->ArrayNum) {
          uVar7 = lVar4 - uVar9;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(param_2->AllocatorInstance).Data,uVar7)
        ;
        FMD5::Update(&local_a8,(uchar *)(param_2->AllocatorInstance).Data,uVar7);
        uVar9 = uVar9 + uVar7;
      } while ((longlong)uVar9 < lVar4);
      uVar8 = (ulonglong)local_a8.Context.count >> 0x20;
      uVar9 = (ulonglong)local_a8.Context.count & 0xffffffff;
    }
    lVar4 = 0;
    puVar5 = (undefined1 *)((longlong)local_a8.Context.count + 1);
    do {
      local_48[lVar4] = puVar5[-1];
      local_48[lVar4 + 1] = *puVar5;
      local_48[lVar4 + 2] = puVar5[1];
      local_48[lVar4 + 3] = puVar5[2];
      lVar4 = lVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (lVar4 < 8);
    uVar3 = (uint)(uVar9 >> 3) & 0x3f;
    uVar10 = (ulonglong)uVar3;
    iVar2 = 0x38 - uVar3;
    if (0x37 < uVar3) {
      iVar2 = 0x78 - uVar3;
    }
    _Size = -uVar10 + 0x40;
    uVar12 = (ulonglong)iVar2;
    local_a8.Context.count = (uint  [2])((uVar8 << 0x20 | uVar9) + uVar12 * 8);
    if (uVar12 < _Size) {
      _Size = 0;
    }
    else {
      memcpy(local_a8.Context.buffer + uVar10,PADDING,_Size);
      FMD5::Transform(&local_a8,(uint *)&local_a8,local_a8.Context.buffer);
      for (uVar9 = -uVar10 + 0x7f; uVar9 < uVar12; uVar9 = uVar9 + 0x40) {
        FMD5::Transform(&local_a8,(uint *)&local_a8,
                        (uchar *)((longlong)L"Trace.SlowTaskMaxRegionDepth" + uVar9 + 0x29));
        _Size = _Size + 0x40;
      }
      uVar10 = 0;
    }
    memcpy(local_a8.Context.buffer + uVar10,PADDING + _Size,uVar12 - _Size);
    uVar3 = local_a8.Context.count[0] >> 3;
    local_a8.Context.count = (uint  [2])((longlong)local_a8.Context.count + 0x40);
    uVar8 = (ulonglong)(uVar3 & 0x3f);
    uVar9 = -uVar8 + 0x40;
    if (uVar9 < 9) {
      memcpy(local_a8.Context.buffer + uVar8,local_48,uVar9);
      FMD5::Transform(&local_a8,(uint *)&local_a8,local_a8.Context.buffer);
      for (uVar8 = -uVar8 + 0x7f; uVar8 < 8; uVar8 = uVar8 + 0x40) {
        FMD5::Transform(&local_a8,(uint *)&local_a8,local_a8.Context.buffer + uVar8 + 9);
        uVar9 = uVar9 + 0x40;
      }
      uVar8 = 0;
    }
    else {
      uVar9 = 0;
    }
    memcpy(local_a8.Context.buffer + uVar8,local_48 + uVar9,8 - uVar9);
    puVar6 = __return_storage_ptr__->Bytes + 2;
    lVar4 = 4;
    puVar11 = (uchar *)((longlong)local_a8.Context.state + 1);
    do {
      uVar1 = puVar11[2];
      puVar6[-2] = puVar11[-1];
      puVar6[-1] = *puVar11;
      *puVar6 = puVar11[1];
      puVar6[1] = uVar1;
      puVar6 = puVar6 + 4;
      lVar4 = lVar4 + -1;
      puVar11 = puVar11 + 4;
    } while (lVar4 != 0);
    __return_storage_ptr__->bIsValid = true;
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// LexFromString @ 141953e90

void __thiscall FMD5Hash::LexFromString(FMD5Hash *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar4 = 0;
  lVar5 = lVar4;
  do {
    wVar2 = param_1[lVar5];
    if (wVar2 == L'\0') {
      return;
    }
    wVar1 = param_1[lVar5 + 1];
    lVar5 = lVar5 + 2;
    if (wVar1 == L'\0') {
      return;
    }
    if (9 < (ushort)(wVar2 + L'￐')) {
      if ((ushort)(wVar2 + L'﾿') < 6) {
        wVar2 = (wchar_t)(byte)((char)wVar2 - 0x37);
      }
      else {
        if (5 < (ushort)(wVar2 + L'ﾟ')) {
          return;
        }
        wVar2 = (wchar_t)(byte)((char)wVar2 + 0xa9);
      }
    }
    cVar3 = (char)wVar1;
    if ((ushort)(wVar1 + L'￐') < 10) {
      cVar3 = cVar3 + -0x30;
    }
    else if ((ushort)(wVar1 + L'﾿') < 6) {
      cVar3 = cVar3 + -0x37;
    }
    else {
      if (5 < (ushort)(wVar1 + L'ﾟ')) {
        return;
      }
      cVar3 = cVar3 + -0x57;
    }
    *(char *)((longlong)&local_18 + lVar4) = (char)wVar2 * '\x10' + cVar3;
    lVar4 = lVar4 + 1;
  } while (lVar4 < 0x10);
  *(undefined8 *)this->Bytes = local_18;
  *(undefined8 *)(this->Bytes + 8) = uStack_10;
  this->bIsValid = true;
  return;
}

// LexToString @ 141953fb0

FString * __thiscall FMD5Hash::LexToString(FMD5Hash *this,FString *__return_storage_ptr__)

{
  if (this->bIsValid == false) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x");
  return __return_storage_ptr__;
}

// LoadFromCompactBinary @ 141954130

bool __thiscall FMD5Hash::LoadFromCompactBinary(FMD5Hash *this,FCbFieldView *param_1)

{
  undefined8 uVar1;
  TMemoryView<void_const_> local_28;
  TMemoryView<void_const_> local_18;
  
  local_28.Data = (void *)0x0;
  local_28.Size = 0;
  FCbFieldView::AsBinaryView(param_1,&local_18,&local_28);
  if (local_18.Size != 0x10) {
    this->bIsValid = false;
    return false;
  }
  uVar1 = *(undefined8 *)((longlong)local_18.Data + 8);
  *(undefined8 *)this->Bytes = *(undefined8 *)local_18.Data;
  *(undefined8 *)(this->Bytes + 8) = uVar1;
  this->bIsValid = true;
  return true;
}

// WriteCompactBinary @ 14197c9a0

FCbWriter * __thiscall FMD5Hash::WriteCompactBinary(FMD5Hash *this,FCbWriter *param_1)

{
  FCbWriter::AddBinary(param_1,this->Bytes,0x10);
  return param_1;
}

