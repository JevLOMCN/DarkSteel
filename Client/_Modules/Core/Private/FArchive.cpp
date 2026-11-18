// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 50

// operator<< @ 14158cc20

FArchive * __thiscall FArchive::operator<<(FArchive *this,FField **param_1)

{
  return this;
}

// operator<< @ 14158cc30

FArchive * __thiscall FArchive::operator<<(FArchive *this,UObject **param_1)

{
  return this;
}

// operator<< @ 14158cc40

FArchive * __thiscall FArchive::operator<<(FArchive *this,FName *param_1)

{
  return this;
}

// AttachBulkData @ 1415aeb80

void __thiscall FArchive::AttachBulkData(FArchive *this,FEditorBulkData *param_1)

{
  return;
}

// AttachBulkData @ 1415aeb90

void __thiscall FArchive::AttachBulkData(FArchive *this,UObject *param_1,FBulkData *param_2)

{
  return;
}

// AttachExternalReadDependency @ 1415aeba0

bool __thiscall
FArchive::AttachExternalReadDependency(FArchive *this,TFunction<bool___cdecl(double)> *param_1)

{
  return false;
}

// Close @ 1415b0900

bool __thiscall FArchive::Close(FArchive *this)

{
  return (bool)((byte)~this->field_0x29 >> 1 & 1);
}

// DetachBulkData @ 1415be540

void __thiscall FArchive::DetachBulkData(FArchive *this,FBulkData *param_1,bool param_2)

{
  return;
}

// DetachBulkData @ 1415be550

void __thiscall FArchive::DetachBulkData(FArchive *this,FEditorBulkData *param_1,bool param_2)

{
  return;
}

// Flush @ 1415c33f0

void __thiscall FArchive::Flush(FArchive *this)

{
  return;
}

// FlushCache @ 1415c3400

void __thiscall FArchive::FlushCache(FArchive *this)

{
  return;
}

// ForceBlueprintFinalization @ 1415c34b0

void __thiscall FArchive::ForceBlueprintFinalization(FArchive *this)

{
  return;
}

// GetCacheableArchive @ 1415c5130

FArchive * __thiscall FArchive::GetCacheableArchive(FArchive *this)

{
  return this;
}

// IsProxyOf @ 1415c9b30

bool __thiscall FArchive::IsProxyOf(FArchive *this,FArchive *param_1)

{
  return param_1 == this;
}

// MarkScriptSerializationEnd @ 1415d4e60

void __thiscall FArchive::MarkScriptSerializationEnd(FArchive *this,UObject *param_1)

{
  return;
}

// MarkScriptSerializationStart @ 1415d4e70

void __thiscall FArchive::MarkScriptSerializationStart(FArchive *this,UObject *param_1)

{
  return;
}

// MarkSearchableName @ 1415d4e80

void __thiscall
FArchive::MarkSearchableName(FArchive *this,TObjectPtr<UObject_const_> *param_1,FName *param_2)

{
  return;
}

// PopFileRegionType @ 1415d9000

void __thiscall FArchive::PopFileRegionType(FArchive *this)

{
  return;
}

// Precache @ 1415d9030

bool __thiscall FArchive::Precache(FArchive *this,long64 param_1,long64 param_2)

{
  return true;
}

// Preload @ 1415d9040

void __thiscall FArchive::Preload(FArchive *this,UObject *param_1)

{
  return;
}

// PushFileRegionType @ 1415da0d0

void __thiscall FArchive::PushFileRegionType(FArchive *this,EFileRegionType param_1)

{
  return;
}

// Seek @ 1415f0e10

void __thiscall FArchive::Seek(FArchive *this,long64 param_1)

{
  return;
}

// Serialize @ 1415f0fe0

void __thiscall FArchive::Serialize(FArchive *this,void *param_1,long64 param_2)

{
  return;
}

// SerializeBits @ 1415f15e0

void __thiscall FArchive::SerializeBits(FArchive *this,void *param_1,long64 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  (**(code **)(*(longlong *)this + 0x188))
            (this,param_1,
             (longlong)((ulonglong)((uint)(param_2 + 7 >> 0x3f) & 7) + param_2 + 7) >> 3);
  if (((this->field_0x28 & 1) != 0) &&
     (uVar3 = (ulonglong)((uint)(param_2 >> 0x3f) & 7), lVar2 = param_2 + uVar3,
     ((uint)lVar2 & 7) != uVar3)) {
    pbVar1 = (byte *)((lVar2 >> 3) + (longlong)param_1);
    *pbVar1 = *pbVar1 & ('\x01' << ((byte)param_2 & 7)) - 1U;
  }
  return;
}

// SerializeBulkData @ 1415f1660

bool __thiscall
FArchive::SerializeBulkData(FArchive *this,FBulkData *param_1,FBulkDataSerializationParams *param_2)

{
  return false;
}

// SerializeInt @ 1415f1b70

void __thiscall FArchive::SerializeInt(FArchive *this,uint *param_1,uint param_2)

{
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415f1b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,param_1,4);
    return;
  }
  SerializeByteOrderSwapped(this,param_1);
  return;
}

// SetCompressionMap @ 1415f2490

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall
FArchive::SetCompressionMap
          (FArchive *this,TArray<FCompressedChunk,TSizedDefaultAllocator<32>_> *param_1,
          ECompressionFlags param_2)

{
  return false;
}

// ~FArchive @ 141987b90

void __thiscall FArchive::~FArchive(FArchive *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  *(undefined ***)this = &___7FArchiveState__6B_;
  if (*(longlong *)&this->field_0x88 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                       ,0x8c,L"Archive destroyed before its proxies");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = *(undefined8 **)&this->field_0x58;
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    ::operator_delete(puVar1,0x10);
  }
  pvVar2 = *(void **)&this->field_0x78;
  if (pvVar2 != (void *)0x0) {
    if (*(void **)((longlong)pvVar2 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar2 + 0x40));
    }
    ::operator_delete(pvVar2,0x58);
  }
  return;
}

// operator<< @ 141988700

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FArchive::operator<<(FArchive *this,FLazyObjectPtr *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  return this;
}

// operator<< @ 141988730

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FArchive::operator<<(FArchive *this,FObjectPtr *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  return this;
}

// operator<< @ 141988760

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FArchive::operator<<(FArchive *this,FSoftObjectPath *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  return this;
}

// operator<< @ 141988790

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FArchive::operator<<(FArchive *this,FSoftObjectPtr *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  return this;
}

// operator<< @ 1419887c0

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FArchive::operator<<(FArchive *this,FWeakObjectPtr *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  return this;
}

// operator<< @ 1419887f0

FArchive * __thiscall FArchive::operator<<(FArchive *this,FText *param_1)

{
  FText::SerializeText(this,param_1);
  return this;
}

// ByteSwap @ 14198ed20

void __thiscall FArchive::ByteSwap(FArchive *this,void *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 + -1);
  if (0 < param_2 + -1) {
    lVar4 = 0;
    do {
      puVar1 = (undefined1 *)(lVar4 + (longlong)param_1);
      puVar2 = (undefined1 *)(lVar4 + (longlong)param_1);
      uVar3 = *(undefined1 *)(lVar5 + (longlong)param_1);
      lVar4 = lVar4 + 1;
      *(undefined1 *)(lVar5 + (longlong)param_1) = *puVar1;
      lVar5 = lVar5 + -1;
      *puVar2 = uVar3;
    } while (lVar4 < lVar5);
  }
  return;
}

// LogfImpl @ 1419a1c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001419a1d76) */
/* WARNING: Removing unreachable block (ram,0x0001419a1d7f) */

void __thiscall FArchive::LogfImpl(FArchive *this,wchar_t *param_1)

{
  longlong *plVar1;
  ushort *puVar2;
  ushort uVar3;
  FArchive *pFVar4;
  uint uVar5;
  int iVar6;
  void *_Memory;
  wchar_t wVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined1 local_res18 [16];
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [8];
  ulong64 *local_90;
  FArchive *local_88;
  undefined8 *local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pvVar9 = (void *)0x0;
  uVar8 = 0;
  iVar10 = 0x400;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_88 = this;
  local_90 = __local_stdio_printf_options();
  _Memory = pvVar9;
  do {
    while( true ) {
      if (GTraceAllowed != false) {
        uVar5 = uVar8;
        if (((*(char *)(*plVar1 + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
           (FBacktracer::Instance != (FBacktracer *)0x0)) {
          uVar5 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
        }
        if (-1 < MemAllocChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>((TLogScope<0> *)&local_78);
          *local_78 = _Memory;
          *(uint *)(local_78 + 1) = uVar5;
          *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
        }
        MemoryTrace_UpdateInternal();
      }
      free(_Memory);
      uVar12 = (ulonglong)iVar10;
      _Memory = malloc(uVar12 * 2);
      if (GTraceAllowed != false) {
        uVar5 = uVar8;
        if (((*(char *)(*plVar1 + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
           (FBacktracer::Instance != (FBacktracer *)0x0)) {
          uVar5 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
        }
        if (-1 < MemAllocChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FMemoryAllocSystemFields>((TLogScope<0> *)&local_68);
          *local_68 = _Memory;
          *(uint *)(local_68 + 1) = uVar5;
          *(int *)((longlong)local_68 + 0xc) = (int)((uVar12 & 0x7fffffffffffffff) >> 2);
          *(undefined1 *)(local_68 + 2) = 0;
          *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
        }
        MemoryTrace_UpdateInternal();
      }
      local_a0 = local_res18;
      local_a8 = 0;
      iVar6 = __stdio_common_vswprintf(*local_90,_Memory,uVar12,param_1);
      pFVar4 = local_88;
      if (iVar6 < 0) {
        iVar6 = -1;
      }
      if (iVar6 < iVar10) break;
      iVar10 = iVar10 * 2;
    }
    iVar10 = iVar10 * 2;
  } while (iVar6 == -1);
  *(undefined2 *)((longlong)_Memory + (longlong)iVar6 * 2) = 0;
  wVar7 = u___[0];
  if (0 < iVar6) {
    pvVar11 = pvVar9;
    do {
      uVar3 = *(ushort *)((longlong)_Memory + (longlong)pvVar11 * 2);
      local_98[0] = (char)uVar3;
      if (0x7f < uVar3) {
        local_98[0] = 0x3f;
      }
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_98,1);
      pvVar11 = (void *)((longlong)pvVar11 + 1);
      wVar7 = u___[0];
    } while ((longlong)pvVar11 < (longlong)iVar6);
  }
  do {
    local_98[0] = (undefined1)wVar7;
    (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_98,1);
    puVar2 = (ushort *)((longlong)pvVar9 + 0x150627e0e);
    pvVar9 = (void *)((longlong)pvVar9 + 2);
    wVar7 = *puVar2 & 0xff;
  } while (*puVar2 != 0);
  FMemory::SystemFree(_Memory);
  return;
}

// PopSerializedProperty @ 1419a6970

void __thiscall FArchive::PopSerializedProperty(FArchive *this,FProperty *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  
  if (param_1 != (FProperty *)0x0) {
    if (*(longlong *)&this->field_0x78 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializedPropertyChain",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                         ,0x195,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FArchiveSerializedPropertyChain::PopProperty
              (*(FArchiveSerializedPropertyChain **)&this->field_0x78,param_1,param_2);
    if (0 < ((*(FArchiveSerializedPropertyChain **)&this->field_0x78)->SerializedPropertyChain).
            ArrayNum) {
      pFVar3 = FArchiveSerializedPropertyChain::GetPropertyFromStack
                         (*(FArchiveSerializedPropertyChain **)&this->field_0x78,0);
      *(FProperty **)&this->field_0x70 = pFVar3;
      return;
    }
    *(undefined8 *)&this->field_0x70 = 0;
  }
  return;
}

// PushSerializedProperty @ 1419a6b90

void __thiscall FArchive::PushSerializedProperty(FArchive *this,FProperty *param_1,bool param_2)

{
  FArchiveSerializedPropertyChain *pFVar1;
  FArchiveSerializedPropertyChain *this_00;
  
  if (param_1 != (FProperty *)0x0) {
    this_00 = *(FArchiveSerializedPropertyChain **)&this->field_0x78;
    if (this_00 == (FArchiveSerializedPropertyChain *)0x0) {
      pFVar1 = ::operator_new(0x58);
      this_00 = (FArchiveSerializedPropertyChain *)0x0;
      if (pFVar1 != (FArchiveSerializedPropertyChain *)0x0) {
        (pFVar1->SerializedPropertyChain).AllocatorInstance.SecondaryData =
             (ForElementType<FProperty_*>)0x0;
        (pFVar1->SerializedPropertyChain).ArrayNum = 0;
        *(undefined8 *)&(pFVar1->SerializedPropertyChain).ArrayMax = 8;
        this_00 = pFVar1;
      }
      *(FArchiveSerializedPropertyChain **)&this->field_0x78 = this_00;
    }
    FArchiveSerializedPropertyChain::PushProperty(this_00,param_1,param_2);
    *(FProperty **)&this->field_0x70 = param_1;
  }
  return;
}

// SerializeByteOrderSwapped @ 1419a94a0

FArchive * __thiscall FArchive::SerializeByteOrderSwapped(FArchive *this,ushort *param_1)

{
  ushort local_res8 [4];
  
  if ((this->field_0x28 & 1) != 0) {
    (**(code **)(*(longlong *)this + 0x188))();
    *param_1 = *param_1 >> 8 | *param_1 << 8;
    return this;
  }
  local_res8[0] = *param_1 >> 8 | *param_1 << 8;
  (**(code **)(*(longlong *)this + 0x188))(this,local_res8,2);
  return this;
}

// SerializeByteOrderSwapped @ 1419a9510

FArchive * __thiscall FArchive::SerializeByteOrderSwapped(FArchive *this,uint *param_1)

{
  uint uVar1;
  uint local_res8 [2];
  
  if ((this->field_0x28 & 1) != 0) {
    (**(code **)(*(longlong *)this + 0x188))();
    uVar1 = *param_1;
    *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    return this;
  }
  uVar1 = *param_1;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (**(code **)(*(longlong *)this + 0x188))(this,local_res8,4);
  return this;
}

// SerializeByteOrderSwapped @ 1419a9580

FArchive * __thiscall FArchive::SerializeByteOrderSwapped(FArchive *this,ulong64 *param_1)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  if ((this->field_0x28 & 1) != 0) {
    (**(code **)(*(longlong *)this + 0x188))();
    uVar1 = *param_1;
    *param_1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    return this;
  }
  uVar1 = *param_1;
  local_res8 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  (**(code **)(*(longlong *)this + 0x188))(this,&local_res8,8);
  return this;
}

// SerializeByteOrderSwapped @ 1419a95f0

FArchive * __thiscall FArchive::SerializeByteOrderSwapped(FArchive *this,void *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_2;
  lVar4 = (longlong)(param_2 + -1);
  if ((this->field_0x28 & 1) == 0) {
    if (param_2 + -1 < 1) {
      (**(code **)(*(longlong *)this + 0x188))(this,param_1,lVar8);
    }
    else {
      lVar5 = 0;
      lVar6 = lVar4;
      lVar7 = lVar5;
      do {
        puVar1 = (undefined1 *)(lVar7 + (longlong)param_1);
        puVar2 = (undefined1 *)(lVar7 + (longlong)param_1);
        uVar3 = *(undefined1 *)(lVar6 + (longlong)param_1);
        lVar7 = lVar7 + 1;
        *(undefined1 *)(lVar6 + (longlong)param_1) = *puVar1;
        lVar6 = lVar6 + -1;
        *puVar2 = uVar3;
      } while (lVar7 < lVar6);
      (**(code **)(*(longlong *)this + 0x188))(this,param_1,lVar8);
      do {
        puVar1 = (undefined1 *)(lVar5 + (longlong)param_1);
        puVar2 = (undefined1 *)(lVar5 + (longlong)param_1);
        uVar3 = *(undefined1 *)(lVar4 + (longlong)param_1);
        lVar5 = lVar5 + 1;
        *(undefined1 *)(lVar4 + (longlong)param_1) = *puVar1;
        lVar4 = lVar4 + -1;
        *puVar2 = uVar3;
      } while (lVar5 < lVar4);
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x188))(this,param_1,lVar8);
    if (0 < lVar4) {
      lVar8 = 0;
      do {
        puVar1 = (undefined1 *)(lVar8 + (longlong)param_1);
        puVar2 = (undefined1 *)(lVar8 + (longlong)param_1);
        uVar3 = *(undefined1 *)(lVar4 + (longlong)param_1);
        lVar8 = lVar8 + 1;
        *(undefined1 *)(lVar4 + (longlong)param_1) = *puVar1;
        lVar4 = lVar4 + -1;
        *puVar2 = uVar3;
      } while (lVar8 < lVar4);
    }
  }
  return this;
}

// SerializeCompressed @ 1419a9700

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FArchive::SerializeCompressed
          (FArchive *this,void *param_1,long64 param_2,FName param_3,ECompressionFlags param_4,
          bool param_5)

{
  SerializeCompressedNew(this,param_1,param_2,param_3,param_3,param_4,param_5,(long64 *)0x0);
  return;
}

// SerializeCompressedNew @ 1419a9740

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FArchive::SerializeCompressedNew(FArchive *this,void *param_1,long64 param_2)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint local_res20 [2];
  
  FVar4 = FNameEntryId::FromValidEName((EName)local_res20);
  uVar1 = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  FVar4 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = uVar1;
  local_res20[1] = 0;
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = local_res20[0];
  SerializeCompressedNew(this,param_1,param_2,FVar2,FVar3,COMPRESS_NoFlags,false,(long64 *)0x0);
  return;
}

// SerializeCompressedNew @ 1419a97e0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FArchive::SerializeCompressedNew
          (FArchive *this,void *param_1,long64 param_2,FName param_3,FName param_4,
          ECompressionFlags param_5,bool param_6,long64 *param_7)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  FName FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  void *pvVar11;
  longlong lVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName *pFVar13;
  undefined8 uVar14;
  FStaticBasicLogRecord *pFVar15;
  FName FVar16;
  FName FVar17;
  uint uVar18;
  ulonglong uVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  ulong64 uVar25;
  ulong64 uVar26;
  longlong lVar27;
  char cVar28;
  longlong *plVar29;
  bool bVar30;
  uint local_res8 [2];
  longlong *local_res10;
  char local_res18;
  FName local_res20;
  TArray<FCompressedChunkInfo,TSizedDefaultAllocator<64>_> local_188;
  longlong *local_170;
  FCompressedChunkInfo local_168;
  ulonglong local_158;
  FName local_150;
  void *local_148;
  TArray<FCompressedChunkInfo,TSizedDefaultAllocator<64>_> local_140;
  longlong local_128;
  LARGE_INTEGER local_120;
  FCompressedChunkInfo local_118;
  longlong local_108;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  LARGE_INTEGER local_f0;
  undefined8 local_e8;
  FCompressedChunkInfo local_e0;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  void *local_b8 [2];
  void *local_a8 [2];
  FString local_98;
  void *local_88 [2];
  FString local_78;
  void *local_68 [5];
  
  bVar30 = CpuChannel->Enabled < 0;
  local_res10 = param_1;
  local_res20 = param_3;
  if (bVar30) {
    local_res18 = '\0';
  }
  else {
    local_res18 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId742,"FArchive::SerializeCompressed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
               ,0x2e6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId742);
  }
  cVar28 = !bVar30;
  if (param_2 < 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  }
  if ((this->field_0x28 & 1) == 0) {
    if ((this->field_0x28 & 4) != 0) {
      QueryPerformanceCounter(&local_f0);
      dVar2 = (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      if ((param_2 < 1) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("Length > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                              ,0x3b8,L""), bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar4 = local_res20;
      if ((param_5 & COMPRESS_DeprecatedFormatFlagsMask) != COMPRESS_NoFlags) {
        FVar7 = FNameEntryId::FromValidEName((EName)local_f8);
        FVar16.Number = 0;
        FVar16.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
        if ((FVar4 != FVar16) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("CompressionFormatToEncode == NAME_Zlib",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                                ,0x3bd,L""), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (2 < (byte)LogSerialization._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        }
        local_res20 = FCompression::GetCompressionFormatFromDeprecatedFlags
                                ((ECompressionFlags)local_c8);
        local_res20 = *(FName *)local_res20;
      }
      FVar4 = local_res20;
      FVar7 = FNameEntryId::FromValidEName((EName)local_f4);
      FVar17.Number = 0;
      FVar17.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
      if (((FVar4 == FVar17) && (lVar12 = *(longlong *)&this->field_0x68, lVar12 != 0)) &&
         (*(longlong *)(lVar12 + 0x10) != 0)) {
        pFVar13 = (FName *)(**(code **)(*(longlong *)(*(longlong *)(lVar12 + 8) + 8) + 0x58))
                                     (*(longlong *)(lVar12 + 8) + 8,local_c0);
        local_res20 = *pFVar13;
      }
      if ((GSavingCompressionChunkSize < 1) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("GSavingCompressionChunkSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                              ,0x3d0,L""), bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((0x7ffffffe < GSavingCompressionChunkSize) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("GSavingCompressionChunkSize < 2147483647i32",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                              ,0x3d1,L""), bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((0x3fffffffffffffff < param_2) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("Length <= (9223372036854775807i64/2)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                              ,0x3d3,L""), bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_e0.UncompressedSize = (long64)GSavingCompressionChunkSize;
      local_e0.CompressedSize = 0x222222229e2a83c1;
      ::operator<<(this,&local_e0);
      FCompressionUtil::SerializeCompressorName(this,&local_res20);
      lVar12 = ((longlong)GSavingCompressionChunkSize + -1 + param_2) /
               (longlong)GSavingCompressionChunkSize + 1;
      local_108 = lVar12;
      local_e8 = (**(code **)(*(longlong *)this + 0x28))(this);
      lVar24 = 0;
      local_140.ArrayMax = 0;
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 0;
      TArray<FCompressedChunkInfo,TSizedDefaultAllocator<64>_>::SetNum(&local_140,lVar12,Default);
      lVar22 = lVar24;
      lVar27 = lVar24;
      if (0 < lVar12) {
        do {
          if ((local_140.ArrayNum <= lVar22) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          ::operator<<(this,(FCompressedChunkInfo *)(local_140.AllocatorInstance.Data + lVar27));
          lVar22 = lVar22 + 1;
          lVar27 = lVar27 + 0x10;
        } while (lVar22 < lVar12);
      }
      if ((local_140.ArrayNum < 1) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(long64 *)(local_140.AllocatorInstance.Data + 8) = param_2;
      if ((local_140.ArrayNum < 1) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(longlong *)local_140.AllocatorInstance.Data = 0;
      if (param_6) {
        plVar10 = FMemory::Malloc((longlong)GSavingCompressionChunkSize,0);
        local_170 = plVar10;
        if (((*(byte *)(local_res10 + 5) & 1) == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("((FArchive*)V)->IsLoading()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                                ,0x4bb,L""), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        local_170 = local_res10;
        plVar10 = local_res10;
      }
      lVar12 = 1;
      iVar8 = FCompression::CompressMemoryBound
                        (local_res20,GSavingCompressionChunkSize,COMPRESS_NoFlags,0);
      local_158 = CONCAT44(local_158._4_4_,iVar8);
      local_148 = FMemory::Malloc((longlong)iVar8,0);
      plVar29 = local_170;
      if (0 < param_2) {
        uVar19 = (ulonglong)(uint)GSavingCompressionChunkSize;
        local_128 = 0x10;
        do {
          lVar22 = (longlong)(int)uVar19;
          if (param_2 < (int)uVar19) {
            lVar22 = param_2;
          }
          if (param_6) {
            (**(code **)(*local_res10 + 0x188))(local_res10,plVar29,lVar22);
          }
          uVar9 = (uint)local_158;
          if ((0x7ffffffe < (int)(uint)local_158) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CompressedSize < 2147483647",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                                  ,0x4d3,L""), bVar30)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_res8[0] = uVar9;
          bVar30 = FCompression::CompressMemory
                             (local_res20,local_148,(int *)local_res8,plVar29,(int)lVar22,param_5,0)
          ;
          if ((!bVar30) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FCompression::CompressMemory( CompressionFormatToEncode, CompressedBuffer, CompressedSizeInt, Src, BytesToCompress, Flags )"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                                  ,0x4d6,L""), bVar30)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar23 = (longlong *)(longlong)(int)local_res8[0];
          plVar10 = (longlong *)(lVar22 + (longlong)plVar29);
          if (param_6) {
            plVar10 = plVar29;
          }
          local_170 = plVar23;
          (**(code **)(*(longlong *)this + 0x188))(this,local_148,plVar23);
          if ((local_140.ArrayNum < 1) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(longlong *)local_140.AllocatorInstance.Data =
               *(longlong *)local_140.AllocatorInstance.Data + (longlong)plVar23;
          if ((local_108 <= lVar12) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentChunkIndex<TotalChunkCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                                  ,0x4e2,L""), bVar30)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar18 = (uint)((ulonglong)lVar12 >> 0x3f) ^ 1;
          uVar9 = 0;
          if (lVar12 < local_140.ArrayNum) {
            uVar9 = uVar18;
          }
          if ((uVar9 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(longlong **)(local_140.AllocatorInstance.Data + local_128) = local_170;
          uVar9 = 0;
          if (lVar12 < local_140.ArrayNum) {
            uVar9 = uVar18;
          }
          if ((uVar9 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lVar12 = lVar12 + 1;
          *(longlong *)(local_140.AllocatorInstance.Data + local_128 + 8) = lVar22;
          local_128 = local_128 + 0x10;
          uVar19 = (ulonglong)GSavingCompressionChunkSize;
          param_2 = param_2 - uVar19;
          plVar29 = plVar10;
          cVar28 = local_res18;
        } while (0 < param_2);
      }
      local_170 = plVar29;
      pvVar11 = local_148;
      if (param_6) {
        FMemory::Free(plVar10);
      }
      FMemory::Free(pvVar11);
      uVar14 = (**(code **)(*(longlong *)this + 0x28))(this);
      (**(code **)(*(longlong *)this + 0x1b8))(this,local_e8);
      lVar12 = local_108;
      lVar22 = lVar24;
      if (0 < local_108) {
        do {
          if ((local_140.ArrayNum <= lVar22) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          ::operator<<(this,(FCompressedChunkInfo *)(local_140.AllocatorInstance.Data + lVar24));
          lVar22 = lVar22 + 1;
          lVar24 = lVar24 + 0x10;
        } while (lVar22 < lVar12);
      }
      (**(code **)(*(longlong *)this + 0x1b8))(this,uVar14);
      if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      QueryPerformanceCounter(&local_120);
      GArchiveSerializedCompressedSavingTime =
           GArchiveSerializedCompressedSavingTime +
           ((double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2);
    }
    goto LAB_1419aaa5c;
  }
  local_118.CompressedSize = 0;
  local_118.UncompressedSize = 0;
  ::operator<<(this,&local_118);
  uVar9 = local_res8[0];
  bVar30 = false;
  local_150 = param_4;
  local_res8[0] = local_res8[0] & 0xffffff00;
  uVar18 = local_res8[0];
  if (local_118.CompressedSize == 0x9e2a83c1) {
LAB_1419a9a61:
    if ((param_5 & COMPRESS_DeprecatedFormatFlagsMask) != COMPRESS_NoFlags) {
      if (2 < (byte)LogSerialization._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      }
      local_150 = FCompression::GetCompressionFormatFromDeprecatedFlags((ECompressionFlags)local_d0)
      ;
      local_150 = *(FName *)local_150;
    }
    FNameEntryId::FromValidEName((EName)local_fc);
  }
  else {
    local_res8[0]._1_3_ = SUB43(uVar9,1);
    if ((local_118.CompressedSize == 0xc1832a9e) ||
       (local_118.CompressedSize == -0x3e7cd56200000000)) {
      bVar30 = true;
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      goto LAB_1419a9a61;
    }
    if ((local_118.CompressedSize != 0x222222229e2a83c1) &&
       (local_118.CompressedSize != -0x3e7cd561ddddddde)) {
      local_res8[0] = uVar18;
      if (4 < (byte)LogSerialization._0_1_) {
        (**(code **)(*(longlong *)this + 0x18))(this,local_b8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_b8[0] != (void *)0x0) {
          FMemory::Free(local_b8[0]);
        }
        if (((4 < (byte)LogSerialization._0_1_) &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization),
            4 < (byte)LogSerialization._0_1_)) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization),
           4 < (byte)LogSerialization._0_1_)) {
          (**(code **)(*(longlong *)this + 0x28))(this);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (4 < (byte)LogSerialization._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          }
        }
      }
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_BulkData_compre_1506c7800,
                 (FLogCategoryBase *)&LogSerialization);
      goto LAB_1419a9a61;
    }
    bVar30 = local_118.CompressedSize != 0x222222229e2a83c1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar30);
    FCompressionUtil::SerializeCompressorName(this,&local_150);
    FNameEntryId::FromValidEName((EName)local_100);
  }
  bVar6 = FCompression::IsFormatValid(local_150);
  if (!bVar6) {
    if (4 < (byte)LogSerialization._0_1_) {
      (**(code **)(*(longlong *)this + 0x18))(this,local_a8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_a8[0] != (void *)0x0) {
        FMemory::Free(local_a8[0]);
      }
      if (((4 < (byte)LogSerialization._0_1_) &&
          (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization),
          4 < (byte)LogSerialization._0_1_)) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization),
         4 < (byte)LogSerialization._0_1_)) {
        (**(code **)(*(longlong *)this + 0x28))(this);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if ((4 < (byte)LogSerialization._0_1_) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization),
           4 < (byte)LogSerialization._0_1_)) {
          ::FName::ToString(&local_150,&local_98);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  }
  local_168.CompressedSize = 0;
  local_168.UncompressedSize = 0;
  ::operator<<(this,&local_168);
  if (bVar30) {
    local_118.UncompressedSize =
         (ulonglong)local_118.UncompressedSize >> 0x38 |
         (local_118.UncompressedSize & 0xff000000000000U) >> 0x28 |
         (local_118.UncompressedSize & 0xff0000000000U) >> 0x18 |
         (local_118.UncompressedSize & 0xff00000000U) >> 8 |
         (local_118.UncompressedSize & 0xff000000U) << 8 |
         (local_118.UncompressedSize & 0xff0000U) << 0x18 |
         (local_118.UncompressedSize & 0xff00U) << 0x28 | local_118.UncompressedSize << 0x38;
    local_168.CompressedSize =
         (ulonglong)local_168.CompressedSize >> 0x38 |
         (local_168.CompressedSize & 0xff000000000000U) >> 0x28 |
         (local_168.CompressedSize & 0xff0000000000U) >> 0x18 |
         (local_168.CompressedSize & 0xff00000000U) >> 8 |
         (local_168.CompressedSize & 0xff000000U) << 8 |
         (local_168.CompressedSize & 0xff0000U) << 0x18 |
         (local_168.CompressedSize & 0xff00U) << 0x28 | local_168.CompressedSize << 0x38;
    local_168.UncompressedSize =
         (ulonglong)local_168.UncompressedSize >> 0x38 |
         (local_168.UncompressedSize & 0xff000000000000U) >> 0x28 |
         (local_168.UncompressedSize & 0xff0000000000U) >> 0x18 |
         (local_168.UncompressedSize & 0xff00000000U) >> 8 |
         (local_168.UncompressedSize & 0xff000000U) << 8 |
         (local_168.UncompressedSize & 0xff0000U) << 0x18 |
         (local_168.UncompressedSize & 0xff00U) << 0x28 | local_168.UncompressedSize << 0x38;
  }
  if (0x3fffffffffffffff < (ulonglong)local_168.CompressedSize) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  }
  if ((void *)0x3fffffffffffffff < (ulonglong)local_168.UncompressedSize) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  }
  uVar19 = local_118.UncompressedSize;
  if (local_118.UncompressedSize == 0x9e2a83c1) {
    uVar19 = 0x20000;
  }
  else {
    if (local_118.UncompressedSize < 1) {
      pFVar15 = &::LOG_Static;
    }
    else {
      if (local_118.UncompressedSize < 0x7fffffff) goto LAB_1419a9cd6;
      pFVar15 = &::LOG_Static;
    }
    UE::Logging::Private::BasicFatalLog(pFVar15,(FLogCategoryBase *)&LogSerialization);
  }
LAB_1419a9cd6:
  if (param_7 == (long64 *)0x0) {
    if (local_168.UncompressedSize != param_2) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
  }
  else {
    if ((param_2 < local_168.UncompressedSize) || (local_168.UncompressedSize < 0)) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
    *param_7 = local_168.UncompressedSize;
  }
  uVar21 = 0;
  plVar10 = (longlong *)((longlong)(local_168.UncompressedSize + (uVar19 - 1)) / (longlong)uVar19);
  local_188.ArrayMax = 0;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_170 = plVar10;
  TArray<FCompressedChunkInfo,TSizedDefaultAllocator<64>_>::SetNum
            (&local_188,(long64)plVar10,Default);
  local_148 = (void *)0x0;
  local_158 = 0;
  uVar26 = uVar21;
  if (0 < (longlong)plVar10) {
    cVar3 = (char)local_res8[0];
    uVar20 = uVar21;
    uVar25 = uVar21;
    do {
      if ((local_188.ArrayNum <= (longlong)uVar20) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::operator<<(this,(FCompressedChunkInfo *)(local_188.AllocatorInstance.Data + uVar25));
      if (cVar3 != '\0') {
        if ((local_188.ArrayNum <= (longlong)uVar20) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar19 = *(ulonglong *)(local_188.AllocatorInstance.Data + uVar25);
        if ((local_188.ArrayNum <= (longlong)uVar20) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(ulonglong *)(local_188.AllocatorInstance.Data + uVar25) =
             uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
             (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
             (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 | (uVar19 & 0xff00) << 0x28 |
             uVar19 << 0x38;
        if ((local_188.ArrayNum <= (longlong)uVar20) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar19 = *(ulonglong *)(local_188.AllocatorInstance.Data + uVar25 + 8);
        if ((local_188.ArrayNum <= (longlong)uVar20) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(ulonglong *)(local_188.AllocatorInstance.Data + uVar25 + 8) =
             uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
             (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
             (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 | (uVar19 & 0xff00) << 0x28 |
             uVar19 << 0x38;
      }
      if ((local_188.ArrayNum <= (longlong)uVar20) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)(local_188.AllocatorInstance.Data + uVar25) < 0) {
LAB_1419a9f8a:
        if ((local_188.ArrayNum <= (longlong)uVar20) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((local_188.ArrayNum <= (longlong)uVar20) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      }
      else {
        if ((local_188.ArrayNum <= (longlong)uVar20) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(longlong *)(local_188.AllocatorInstance.Data + uVar25 + 8) < 0) goto LAB_1419a9f8a;
      }
      if ((local_188.ArrayNum <= (longlong)uVar20) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((longlong)uVar26 < *(longlong *)(local_188.AllocatorInstance.Data + uVar25)) {
        uVar26 = *(ulong64 *)(local_188.AllocatorInstance.Data + uVar25);
      }
      if ((local_188.ArrayNum <= (longlong)uVar20) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_158 = local_158 + *(longlong *)(local_188.AllocatorInstance.Data + uVar25);
      if ((local_188.ArrayNum <= (longlong)uVar20) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar20 = uVar20 + 1;
      local_148 = (void *)((longlong)local_148 +
                          *(longlong *)(local_188.AllocatorInstance.Data + uVar25 + 8));
      uVar25 = uVar25 + 0x10;
      cVar28 = local_res18;
    } while ((longlong)uVar20 < (longlong)local_170);
  }
  pvVar11 = local_148;
  if (local_158 != local_168.CompressedSize) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  }
  if (pvVar11 != (void *)local_168.UncompressedSize) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  }
  if ((param_6) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("! bTreatBufferAsFileReader",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                          ,0x392,L""), bVar30)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar11 = FMemory::Malloc(uVar26,0);
  uVar26 = uVar21;
  if (0 < (longlong)local_170) {
LAB_1419aa1b3:
    if ((local_188.ArrayNum <= (longlong)uVar26) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar5.Data = local_188.AllocatorInstance.Data;
    (**(code **)(*(longlong *)this + 0x188))
              (this,pvVar11,*(undefined8 *)(local_188.AllocatorInstance.Data + uVar21));
    if ((this->field_0x29 & 2) == 0) {
      bVar30 = FCompression::UncompressMemory
                         (local_150,local_res10,*(long64 *)(FVar5.Data + uVar21 + 8),pvVar11,
                          *(long64 *)(FVar5.Data + uVar21),COMPRESS_NoFlags,0);
      if (bVar30) goto code_r0x0001419aa240;
      if (1 < (byte)LogSerialization._0_1_) {
        ::FName::ToString(&local_150,&local_78);
        (**(code **)(*(longlong *)this + 0x18))(this,local_88);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_88[0] != (void *)0x0) {
          FMemory::Free(local_88[0]);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      lVar12 = (**(code **)(*(longlong *)this + 8))(this);
      *(byte *)(lVar12 + 0x29) = *(byte *)(lVar12 + 0x29) | 2;
      for (lVar12 = *(longlong *)(lVar12 + 0x88); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x88)
          ) {
        *(byte *)(lVar12 + 0x29) = *(byte *)(lVar12 + 0x29) | 2;
      }
    }
    else if (1 < (byte)LogSerialization._0_1_) {
      (**(code **)(*(longlong *)this + 0x18))(this,local_68);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_68[0] != (void *)0x0) {
        FMemory::Free(local_68[0]);
      }
    }
  }
LAB_1419aa365:
  FMemory::Free(pvVar11);
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
LAB_1419aaa5c:
  if (cVar28 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
code_r0x0001419aa240:
  uVar26 = uVar26 + 1;
  local_res10 = (longlong *)((longlong)local_res10 + *(longlong *)(FVar5.Data + uVar21 + 8));
  uVar21 = uVar21 + 0x10;
  if ((longlong)local_170 <= (longlong)uVar26) goto LAB_1419aa365;
  goto LAB_1419aa1b3;
}

// SerializeIntPacked64 @ 1419aaab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FArchive::SerializeIntPacked64(FArchive *this,ulong64 *param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  ulong64 uVar7;
  byte bVar8;
  byte *pbVar9;
  undefined1 auStack_58 [32];
  byte local_38;
  undefined1 local_37 [7];
  byte local_30 [16];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar7 = 0;
  uVar6 = 0;
  if ((this->field_0x28 & 1) == 0) {
    bVar8 = (char)*param_1 * '\x02';
    uVar5 = *param_1 >> 7;
    if (uVar5 != 0) {
      pbVar9 = local_30;
      do {
        cVar4 = (char)uVar5;
        *pbVar9 = bVar8 | 1;
        pbVar9 = pbVar9 + 1;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulong64)uVar6;
        uVar5 = uVar5 >> 7;
        bVar8 = cVar4 * '\x02';
      } while (uVar5 != 0);
    }
    local_30[(int)uVar6] = bVar8;
    (**(code **)(*(longlong *)this + 0x188))(this,local_30,(longlong)(int)(uVar6 + 1));
  }
  else {
    bVar8 = 0;
    do {
      if ((9 < bVar8) &&
         (bVar2 = `FArchive::SerializeIntPacked64'::__l8::<lambda_1>::operator()(local_37), !bVar2))
      {
        lVar3 = (**(code **)(*(longlong *)this + 8))(this);
        *(byte *)(lVar3 + 0x29) = *(byte *)(lVar3 + 0x29) | 2;
        for (lVar3 = *(longlong *)(lVar3 + 0x88); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x88)) {
          *(byte *)(lVar3 + 0x29) = *(byte *)(lVar3 + 0x29) | 2;
        }
        return;
      }
      (**(code **)(*(longlong *)this + 0x188))(this,&local_38,1);
      uVar7 = uVar7 + ((ulonglong)(local_38 >> 1) << (bVar8 * '\a' & 0x3f));
      bVar1 = local_38 & 1;
      bVar8 = bVar8 + 1;
      local_38 = local_38 >> 1;
    } while (bVar1 != 0);
    *param_1 = uVar7;
  }
  return;
}

// SerializeIntPacked @ 1419aabf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FArchive::SerializeIntPacked(FArchive *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  undefined1 auStack_58 [32];
  byte local_38;
  undefined1 local_37 [3];
  byte local_34 [12];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar6 = 0;
  if ((this->field_0x28 & 1) == 0) {
    uVar1 = *param_1;
    bVar7 = (char)uVar1 * '\x02';
    if (uVar1 >> 7 != 0) {
      pbVar8 = local_34;
      do {
        *pbVar8 = bVar7 | 1;
        pbVar8 = pbVar8 + 1;
        uVar6 = uVar6 + 1;
        bVar7 = (char)(uVar1 >> 7) * '\x02';
        uVar2 = uVar1 >> 0xe;
        uVar1 = uVar1 >> 7;
      } while (uVar2 != 0);
    }
    local_34[(int)uVar6] = bVar7;
    (**(code **)(*(longlong *)this + 0x188))(this,local_34,(longlong)(int)(uVar6 + 1));
  }
  else {
    bVar7 = 0;
    do {
      if ((9 < bVar7) &&
         (bVar4 = `FArchive::SerializeIntPacked'::__l8::<lambda_1>::operator()(local_37), !bVar4)) {
        lVar5 = (**(code **)(*(longlong *)this + 8))(this);
        *(byte *)(lVar5 + 0x29) = *(byte *)(lVar5 + 0x29) | 2;
        for (lVar5 = *(longlong *)(lVar5 + 0x88); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x88)) {
          *(byte *)(lVar5 + 0x29) = *(byte *)(lVar5 + 0x29) | 2;
        }
        return;
      }
      (**(code **)(*(longlong *)this + 0x188))(this,&local_38,1);
      uVar6 = uVar6 + ((uint)(local_38 >> 1) << (bVar7 * '\a' & 0x1f));
      bVar3 = local_38 & 1;
      bVar7 = bVar7 + 1;
      local_38 = local_38 >> 1;
    } while (bVar3 != 0);
    *param_1 = uVar6;
  }
  return;
}

// UsingCustomVersion @ 1419b1160

void __thiscall FArchive::UsingCustomVersion(FArchive *this,FGuid *param_1)

{
  byte bVar1;
  FCustomVersionContainer *this_00;
  FGuid local_18;
  
  if ((this->field_0x28 & 1) == 0) {
    bVar1 = this->field_0x29;
    this_00 = (FCustomVersionContainer *)(**(code **)(*(longlong *)this + 0x60))();
    local_18.A = param_1->A;
    local_18.B = param_1->B;
    local_18.C = param_1->C;
    local_18.D = param_1->D;
    FCustomVersionContainer::SetVersionUsingRegistry
              (this_00,&local_18,bVar1 >> 4 & SkipUpdateExistingVersion);
  }
  return;
}

// operator() @ 15047f290

bool __thiscall `FArchive::SerializeIntPacked64'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8359649483654432114>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8359649483654432114>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047f2e0

bool __thiscall `FArchive::SerializeIntPacked'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8359649483654432060>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8359649483654432060>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

