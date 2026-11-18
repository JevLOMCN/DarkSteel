// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// CanBeUsedOnAnyThread @ 14162da00

bool __thiscall FOutputDeviceDebug::CanBeUsedOnAnyThread(FOutputDeviceDebug *this)

{
  return true;
}

// CanBeUsedOnPanicThread @ 14162da30

bool __thiscall FOutputDeviceDebug::CanBeUsedOnPanicThread(FOutputDeviceDebug *this)

{
  return true;
}

// CanBeUsedOnMultipleThreads @ 1418c9f90

bool __thiscall FOutputDeviceDebug::CanBeUsedOnMultipleThreads(FOutputDeviceDebug *this)

{
  BOOL BVar1;
  
  if (!GIgnoreDebugger) {
    BVar1 = IsDebuggerPresent();
    if (BVar1 != 0) {
      return true;
    }
  }
  return false;
}

// Serialize @ 1418f53f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceDebug::Serialize(FOutputDeviceDebug *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  (**(code **)(this->_padding_ + 8))();
  return;
}

// Serialize @ 1418f5420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceDebug::Serialize
          (FOutputDeviceDebug *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  atomic<double> aVar1;
  code *pcVar2;
  atomic<double> aVar3;
  atomic<bool> aVar4;
  size_t sVar5;
  ulong64 uVar6;
  FCbFieldViewIterator *pFVar7;
  void *pvVar8;
  TStringBuilderBase<wchar_t> *this_00;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStackY_ec8 [32];
  int local_e88;
  int local_e84;
  int local_e80;
  int local_e7c;
  int local_e78;
  int local_e74;
  int local_e70 [2];
  FDateTime local_e68;
  int local_e60 [2];
  LARGE_INTEGER local_e58 [2];
  char *local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  char *local_e38;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  uchar *local_e28;
  int iStack_e20;
  undefined4 uStack_e1c;
  char *local_e18;
  undefined4 uStack_e10;
  undefined4 uStack_e0c;
  wchar_t *local_e08;
  int iStack_e00;
  undefined4 uStack_dfc;
  char *local_df8;
  undefined4 uStack_df0;
  undefined4 uStack_dec;
  wchar_t *local_de8;
  int iStack_de0;
  undefined4 uStack_ddc;
  TMemoryView<void> local_dd8;
  TStringView<char8_t> local_dc8;
  TStringView<char8_t> local_db8;
  TStringView<char8_t> local_da8;
  TStringView<char8_t> local_d98;
  TStringView<wchar_t> local_d88;
  TStringView<char8_t> local_d78;
  TStringView<wchar_t> local_d68;
  FCbFieldView local_d58;
  FCbFieldViewIterator local_d48;
  TStringBuilderBase<char8_t> local_d28;
  uchar local_d08 [64];
  undefined1 local_cc8 [32];
  wchar_t local_ca8 [512];
  wchar_t local_8a8 [4];
  byte local_8a0;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [512];
  ForElementType<unsigned_char> local_478;
  ulong64 auStack_70 [3];
  ulonglong local_58;
  
  if (param_2 != SetColor) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_ec8;
    aVar3 = (atomic<double>)param_4;
    if (param_4 < 0.0) {
      QueryPerformanceCounter(local_e58);
      aVar3 = (atomic<double>)
              (((double)local_e58[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000) - GStartTime);
    }
    aVar1 = this->LastTickTime;
    if (((double)aVar1 == 0.0) || ((double)aVar1 + __real_3ff0000000000000 <= (double)aVar3)) {
      LOCK();
      bVar10 = aVar1 == this->LastTickTime;
      if (bVar10) {
        this->LastTickTime = aVar3;
      }
      UNLOCK();
      if (bVar10) {
        aVar4 = (atomic<bool>)FGenericPlatformMisc::IsLowLevelOutputDebugStringStructured();
        LOCK();
        this->bSerializeAsJson = aVar4;
        UNLOCK();
      }
    }
    if (this->bSerializeAsJson == (atomic<bool>)0x0) {
      local_898.Base = local_878;
      local_898.bIsDynamic = false;
      local_898.bIsExternal = false;
      local_898.CurPos = local_878;
      local_898.End = (wchar_t *)&local_478;
      FOutputDeviceHelper::AppendFormatLogLine
                (&local_898,param_2,param_3,param_1,GPrintLogTimes,param_4,(int *)0x0);
      if (local_898.End < (ForElementType<unsigned_char> *)(local_898.CurPos + 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_898,2);
      }
      pvVar8 = FGenericPlatformString::Memcpy(local_898.CurPos,L"\r\n",4);
      local_898.CurPos = (wchar_t *)((longlong)pvVar8 + 4);
      if (local_898.End < (ForElementType<unsigned_char> *)((longlong)pvVar8 + 6U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_898,1);
      }
      *local_898.CurPos = L'\0';
      FGenericPlatformMisc::LowLevelOutputDebugString(local_898.Base);
      this_00 = &local_898;
    }
    else {
      FCbWriter::FCbWriter((FCbWriter *)local_cc8,0x400);
      local_8a0 = 0;
      FCbWriter::~FCbWriter((FCbWriter *)local_cc8);
      FCbWriter::FCbWriter((FCbWriter *)local_cc8,0x400);
      local_8a0 = 0;
      FCbWriter::BeginObject((FCbWriter *)local_cc8);
      FWindowsPlatformTime::UtcTime
                (local_e70,&local_e74,local_e60,&local_e78,&local_e7c,&local_e80,&local_e84,
                 &local_e88);
      FDateTime::FDateTime
                (&local_e68,local_e70[0],local_e74,local_e78,local_e7c,local_e80,local_e84,local_e88
                );
      local_e48 = "Time";
      uStack_e40 = 4;
      local_dc8._12_4_ = uStack_e3c;
      local_dc8.Size = 4;
      local_dc8.DataPtr = "Time";
      FCbWriter::AddDateTime((FCbWriter *)local_cc8,&local_dc8,local_e68);
      local_d28.Base = local_d08;
      local_d28.bIsDynamic = false;
      local_d28.bIsExternal = false;
      local_d28.CurPos = local_d08;
      local_d28.End = local_cc8;
      ::FName::AppendString(param_3,&local_d28);
      iStack_e20 = (int)local_d28.CurPos - (int)local_d28.Base;
      local_e28 = local_d28.Base;
      uStack_e30 = 8;
      local_e38 = "Category";
      local_db8._12_4_ = uStack_e2c;
      local_db8.Size = 8;
      local_db8.DataPtr = "Category";
      FCbWriter::SetName((FCbWriter *)local_cc8,&local_db8);
      local_da8._12_4_ = uStack_e1c;
      local_da8.Size = iStack_e20;
      local_da8.DataPtr = local_e28;
      FCbWriter::AddString((FCbWriter *)local_cc8,&local_da8);
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_d28);
      local_e08 = ::ToString(param_2);
      iStack_e00 = 0;
      if (local_e08 != (wchar_t *)0x0) {
        sVar5 = wcslen(local_e08);
        iStack_e00 = (int)sVar5;
      }
      uStack_e10 = 9;
      local_e18 = "Verbosity";
      local_d98._12_4_ = uStack_e0c;
      local_d98.Size = 9;
      local_d98.DataPtr = "Verbosity";
      FCbWriter::SetName((FCbWriter *)local_cc8,&local_d98);
      local_d88._12_4_ = uStack_dfc;
      local_d88.Size = iStack_e00;
      local_d88.DataPtr = local_e08;
      FCbWriter::AddString((FCbWriter *)local_cc8,&local_d88);
      iStack_de0 = 0;
      local_de8 = param_1;
      if (param_1 != (wchar_t *)0x0) {
        sVar5 = wcslen(param_1);
        iStack_de0 = (int)sVar5;
      }
      uStack_df0 = 7;
      local_df8 = "Message";
      local_d78._12_4_ = uStack_dec;
      local_d78.Size = 7;
      local_d78.DataPtr = "Message";
      FCbWriter::SetName((FCbWriter *)local_cc8,&local_d78);
      local_d68._12_4_ = uStack_ddc;
      local_d68.Size = iStack_de0;
      local_d68.DataPtr = local_de8;
      FCbWriter::AddString((FCbWriter *)local_cc8,&local_d68);
      FCbWriter::EndObject((FCbWriter *)local_cc8);
      auStack_70[1] = 0x400;
      local_478.SecondaryData = (ForElementType<unsigned_char>)0x0;
      auStack_70[0] = 0;
      uVar6 = FCbWriter::GetSaveSize((FCbWriter *)local_cc8);
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>::ForElementType<unsigned_char>_>
                (1,1,uVar6,&local_478,(long64 *)auStack_70,(long64 *)(auStack_70 + 1));
      local_dd8.Data = &local_478;
      if (local_478.SecondaryData != (ForElementType<unsigned_char>)0x0) {
        local_dd8.Data = (void *)local_478.SecondaryData;
      }
      local_dd8.Size = auStack_70[0];
      pFVar7 = FCbWriter::Save((FCbWriter *)local_cc8,&local_d48,&local_dd8);
      uVar9 = (ulonglong)local_8a0;
      local_d58.TypeWithFlags = pFVar7->field_0x0;
      local_d58.Error = pFVar7->field_0x1;
      local_d58._2_2_ = *(undefined2 *)&pFVar7->field_0x2;
      local_d58.NameLen = *(uint *)&pFVar7->field_0x4;
      local_d58.Value = *(void **)&pFVar7->field_0x8;
      if ((1 < uVar9) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::TDestructorCaller<TCbWriter<1024>_>::Destruct) {
        FCbWriter::~FCbWriter((FCbWriter *)local_cc8);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])();
      }
      local_cc8._0_8_ = local_ca8;
      local_cc8[0x18] = false;
      local_cc8[0x19] = false;
      local_cc8._8_8_ = local_ca8;
      local_8a0 = 1;
      local_cc8._16_8_ = local_8a8;
      CompactBinaryToCompactJson(&local_d58,(TStringBuilderBase<wchar_t> *)local_cc8);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)local_cc8,L"\r\n",2);
      if ((ulonglong)local_cc8._16_8_ < (wchar_t *)(local_cc8._8_8_ + 2)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_cc8,1);
      }
      *(wchar_t *)local_cc8._8_8_ = L'\0';
      FGenericPlatformMisc::LowLevelOutputDebugString((wchar_t *)local_cc8._0_8_);
      if (local_478.SecondaryData != (ForElementType<unsigned_char>)0x0) {
        FMemory::Free((void *)local_478.SecondaryData);
      }
      uVar9 = (ulonglong)local_8a0;
      if ((1 < uVar9) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (TStringBuilderBase<wchar_t> *)local_cc8;
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] !=
          UE::Core::Private::TDestructorCaller<TStringBuilderWithBuffer<wchar_t,512>_>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])();
        return;
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(this_00);
  }
  return;
}

// SerializeRecord @ 1418f75e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDeviceDebug::SerializeRecord(FOutputDeviceDebug *this,FLogRecord *param_1)

{
  int iVar1;
  atomic<double> aVar2;
  wchar_t *_Str;
  uchar *_Str_00;
  code *pcVar3;
  atomic<double> aVar4;
  atomic<bool> aVar5;
  FDateTime FVar6;
  size_t sVar7;
  ulong64 uVar8;
  FCbFieldViewIterator *pFVar9;
  void *pvVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStackY_f48 [32];
  LARGE_INTEGER local_f08 [2];
  char *local_ef8;
  undefined4 uStack_ef0;
  undefined4 uStack_eec;
  char *local_ee8;
  undefined4 uStack_ee0;
  undefined4 uStack_edc;
  uchar *local_ed8;
  int iStack_ed0;
  undefined4 uStack_ecc;
  char *local_ec8;
  undefined4 uStack_ec0;
  undefined4 uStack_ebc;
  wchar_t *local_eb8;
  int iStack_eb0;
  undefined4 uStack_eac;
  char *local_ea8;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  uchar *local_e98;
  int iStack_e90;
  undefined4 uStack_e8c;
  char *local_e88;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  wchar_t *local_e78;
  int iStack_e70;
  undefined4 uStack_e6c;
  char *local_e68;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  uchar *local_e58;
  int iStack_e50;
  undefined4 uStack_e4c;
  char *local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  char *local_e38;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  TMemoryView<void> local_e28;
  TStringView<char8_t> local_e18;
  TStringView<char8_t> local_e08;
  TStringView<char8_t> local_df8;
  TStringView<char8_t> local_de8;
  TStringView<wchar_t> local_dd8;
  TStringView<char8_t> local_dc8;
  TStringView<char8_t> local_db8;
  TStringView<char8_t> local_da8;
  TStringView<wchar_t> local_d98;
  TStringView<char8_t> local_d88;
  TStringView<char8_t> local_d78;
  TStringView<char8_t> local_d68;
  TStringView<char8_t> local_d58;
  FCbFieldView local_d48;
  FCbFieldViewIterator local_d38;
  TStringBuilderBase<char8_t> local_d18;
  uchar local_cf8 [64];
  undefined1 local_cb8 [32];
  wchar_t local_c98 [512];
  wchar_t local_898 [4];
  byte local_890;
  undefined1 local_888 [16];
  byte *local_878;
  undefined2 local_870;
  uchar local_868 [992];
  ForElementType<unsigned_char> local_488;
  ulong64 auStack_480 [3];
  byte local_468 [16];
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_f48;
  QueryPerformanceCounter(local_f08);
  aVar2 = this->LastTickTime;
  aVar4 = (atomic<double>)
          (((double)local_f08[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000) - GStartTime);
  if (((double)aVar2 == 0.0) || ((double)aVar2 + __real_3ff0000000000000 <= (double)aVar4)) {
    LOCK();
    bVar12 = aVar2 == this->LastTickTime;
    if (bVar12) {
      this->LastTickTime = aVar4;
    }
    UNLOCK();
    if (bVar12) {
      aVar5 = (atomic<bool>)FGenericPlatformMisc::IsLowLevelOutputDebugStringStructured();
      LOCK();
      this->bSerializeAsJson = aVar5;
      UNLOCK();
    }
  }
  if (this->bSerializeAsJson == (atomic<bool>)0x0) {
    local_458.Base = local_438;
    local_458.CurPos = local_438;
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    local_458.End = (wchar_t *)local_38;
    FOutputDeviceHelper::AppendFormatLogLine
              (&local_458,param_1->Verbosity,&param_1->Category,(wchar_t *)0x0,GPrintLogTimes,
               __real_bff0000000000000,(int *)0x0);
    UE::FLogRecord::FormatMessageTo(param_1,&local_458);
    if (local_458.End < local_458.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,2);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_458.CurPos,L"\r\n",4);
    local_458.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
    if (local_458.End < (wchar_t *)((longlong)pvVar10 + 6U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,1);
    }
    *local_458.CurPos = L'\0';
    FGenericPlatformMisc::LowLevelOutputDebugString(local_458.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  }
  else {
    local_888._0_8_ = local_868;
    local_888._8_8_ = local_868;
    local_878 = local_468;
    local_870._0_1_ = false;
    local_870._1_1_ = false;
    local_468[0] = 0;
    FCbWriter::FCbWriter((FCbWriter *)local_cb8,0x400);
    uVar11 = (ulonglong)local_468[0];
    local_890 = 0;
    if ((1 < uVar11) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TStringBuilderWithBuffer<char8_t,1024>,TArray<unsigned_char,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::TDestructorCaller<TStringBuilderWithBuffer<char8_t,1024>_>::Destruct) {
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
                ((TStringBuilderBase<char8_t> *)local_888);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TStringBuilderWithBuffer<char8_t,1024>,TArray<unsigned_char,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])();
    }
    local_888._0_8_ = local_868;
    local_870._0_1_ = false;
    local_870._1_1_ = false;
    local_888._8_8_ = local_868;
    local_468[0] = 0;
    local_878 = local_468;
    UE::FLogRecord::FormatMessageTo(param_1,(TStringBuilderBase<char8_t> *)local_888);
    uVar11 = (ulonglong)local_890;
    if ((1 < uVar11) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::TDestructorCaller<TCbWriter<1024>_>::Destruct) {
      FCbWriter::~FCbWriter((FCbWriter *)local_cb8);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])();
    }
    FCbWriter::FCbWriter((FCbWriter *)local_cb8,0x400);
    local_890 = 0;
    FCbWriter::BeginObject((FCbWriter *)local_cb8);
    FVar6 = UE::FLogTime::GetUtcTime(&param_1->Time);
    uStack_ef0 = 4;
    local_ef8 = "Time";
    local_e18._12_4_ = uStack_eec;
    local_e18.Size = 4;
                    /* WARNING: Load size is inaccurate */
    local_e18.DataPtr = "Time";
    FCbWriter::AddDateTime((FCbWriter *)local_cb8,&local_e18,(FDateTime)*FVar6.Ticks);
    local_d18.Base = local_cf8;
    local_d18.bIsDynamic = false;
    local_d18.bIsExternal = false;
    local_d18.CurPos = local_cf8;
    local_d18.End = local_cb8;
    ::FName::AppendString(&param_1->Category,&local_d18);
    iStack_ed0 = (int)local_d18.CurPos - (int)local_d18.Base;
    local_ed8 = local_d18.Base;
    uStack_ee0 = 8;
    local_ee8 = "Category";
    local_e08._12_4_ = uStack_edc;
    local_e08.Size = 8;
    local_e08.DataPtr = "Category";
    FCbWriter::SetName((FCbWriter *)local_cb8,&local_e08);
    local_df8._12_4_ = uStack_ecc;
    local_df8.Size = iStack_ed0;
    local_df8.DataPtr = local_ed8;
    FCbWriter::AddString((FCbWriter *)local_cb8,&local_df8);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_d18);
    local_eb8 = ::ToString(param_1->Verbosity);
    iStack_eb0 = 0;
    if (local_eb8 != (wchar_t *)0x0) {
      sVar7 = wcslen(local_eb8);
      iStack_eb0 = (int)sVar7;
    }
    uStack_ec0 = 9;
    local_ec8 = "Verbosity";
    local_de8._12_4_ = uStack_ebc;
    local_de8.Size = 9;
    local_de8.DataPtr = "Verbosity";
    FCbWriter::SetName((FCbWriter *)local_cb8,&local_de8);
    local_dd8._12_4_ = uStack_eac;
    local_dd8.Size = iStack_eb0;
    local_dd8.DataPtr = local_eb8;
    FCbWriter::AddString((FCbWriter *)local_cb8,&local_dd8);
    iStack_e90 = local_888._8_4_ - (int)local_888._0_8_;
    local_e98 = (uchar *)local_888._0_8_;
    uStack_ea0 = 7;
    local_ea8 = "Message";
    local_dc8._12_4_ = uStack_e9c;
    local_dc8.Size = 7;
    local_dc8.DataPtr = "Message";
    FCbWriter::SetName((FCbWriter *)local_cb8,&local_dc8);
    local_db8._12_4_ = uStack_e8c;
    local_db8.Size = iStack_e90;
    local_db8.DataPtr = local_e98;
    FCbWriter::AddString((FCbWriter *)local_cb8,&local_db8);
    _Str = param_1->Format;
    if (_Str != (wchar_t *)0x0) {
      local_e78 = _Str;
      sVar7 = wcslen(_Str);
      iStack_e70 = (int)sVar7;
      uStack_e80 = 6;
      local_e88 = "Format";
      local_da8._12_4_ = uStack_e7c;
      local_da8.Size = 6;
      local_da8.DataPtr = "Format";
      FCbWriter::SetName((FCbWriter *)local_cb8,&local_da8);
      local_d98._12_4_ = uStack_e6c;
      local_d98.Size = iStack_e70;
      local_d98.DataPtr = local_e78;
      FCbWriter::AddString((FCbWriter *)local_cb8,&local_d98);
    }
    _Str_00 = (uchar *)param_1->File;
    if (_Str_00 != (uchar *)0x0) {
      local_e58 = _Str_00;
      sVar7 = strlen((char *)_Str_00);
      iStack_e50 = (int)sVar7;
      uStack_e60 = 4;
      local_e68 = "File";
      local_d88._12_4_ = uStack_e5c;
      local_d88.Size = 4;
      local_d88.DataPtr = "File";
      FCbWriter::SetName((FCbWriter *)local_cb8,&local_d88);
      local_d78._12_4_ = uStack_e4c;
      local_d78.Size = iStack_e50;
      local_d78.DataPtr = local_e58;
      FCbWriter::AddString((FCbWriter *)local_cb8,&local_d78);
    }
    iVar1 = param_1->Line;
    if (iVar1 != 0) {
      uStack_e40 = 4;
      local_e48 = "Line";
      local_d68._12_4_ = uStack_e3c;
      local_d68.Size = 4;
      local_d68.DataPtr = "Line";
      FCbWriter::SetName((FCbWriter *)local_cb8,&local_d68);
      FCbWriter::AddInteger((FCbWriter *)local_cb8,iVar1);
    }
    bVar12 = FCbObjectView::operator_bool((FCbObjectView *)&param_1->Fields);
    if (bVar12) {
      uStack_e30 = 6;
      local_e38 = "Fields";
      local_d58._12_4_ = uStack_e2c;
      local_d58.Size = 6;
      local_d58.DataPtr = "Fields";
      FCbWriter::SetName((FCbWriter *)local_cb8,&local_d58);
      FCbWriter::AddObject((FCbWriter *)local_cb8,&param_1->Fields);
    }
    FCbWriter::EndObject((FCbWriter *)local_cb8);
    uVar11 = (ulonglong)local_468[0];
    if ((1 < uVar11) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TStringBuilderWithBuffer<char8_t,1024>,TArray<unsigned_char,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::TDestructorCaller<TStringBuilderWithBuffer<char8_t,1024>_>::Destruct) {
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
                ((TStringBuilderBase<char8_t> *)local_888);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TStringBuilderWithBuffer<char8_t,1024>,TArray<unsigned_char,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])();
    }
    auStack_480[1] = 0x400;
    local_468[0] = 1;
    local_488 = (ForElementType<unsigned_char>)0x0;
    auStack_480[0] = 0;
    uVar8 = FCbWriter::GetSaveSize((FCbWriter *)local_cb8);
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>::ForElementType<unsigned_char>_>
              (1,1,uVar8,(ForElementType<unsigned_char> *)local_888,(long64 *)auStack_480,
               (long64 *)(auStack_480 + 1));
    local_e28.Data = local_888;
    if (local_488 != (ForElementType<unsigned_char>)0x0) {
      local_e28.Data = (void *)local_488;
    }
    local_e28.Size = auStack_480[0];
    pFVar9 = FCbWriter::Save((FCbWriter *)local_cb8,&local_d38,&local_e28);
    uVar11 = (ulonglong)local_890;
    local_d48.TypeWithFlags = pFVar9->field_0x0;
    local_d48.Error = pFVar9->field_0x1;
    local_d48._2_2_ = *(undefined2 *)&pFVar9->field_0x2;
    local_d48.NameLen = *(uint *)&pFVar9->field_0x4;
    local_d48.Value = *(void **)&pFVar9->field_0x8;
    if ((1 < uVar11) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::TDestructorCaller<TCbWriter<1024>_>::Destruct) {
      FCbWriter::~FCbWriter((FCbWriter *)local_cb8);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])();
    }
    local_cb8._0_8_ = local_c98;
    local_cb8[0x18] = false;
    local_cb8[0x19] = false;
    local_cb8._8_8_ = local_c98;
    local_890 = 1;
    local_cb8._16_8_ = local_898;
    CompactBinaryToCompactJson(&local_d48,(TStringBuilderBase<wchar_t> *)local_cb8);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)local_cb8,L"\r\n",2);
    if ((ulonglong)local_cb8._16_8_ < (wchar_t *)(local_cb8._8_8_ + 2)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_cb8,1);
    }
    *(wchar_t *)local_cb8._8_8_ = L'\0';
    FGenericPlatformMisc::LowLevelOutputDebugString((wchar_t *)local_cb8._0_8_);
    uVar11 = (ulonglong)local_890;
    if ((1 < uVar11) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::TDestructorCaller<TStringBuilderWithBuffer<wchar_t,512>_>::Destruct) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)local_cb8);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TCbWriter<1024>,TStringBuilderWithBuffer<wchar_t,512>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])();
    }
    uVar11 = (ulonglong)local_468[0];
    if ((1 < uVar11) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TStringBuilderWithBuffer<char8_t,1024>,TArray<unsigned_char,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TArray<unsigned_char,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>_>_>
        ::Destruct) {
      if (local_488 != (ForElementType<unsigned_char>)0x0) {
        FMemory::Free((void *)local_488);
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TStringBuilderWithBuffer<char8_t,1024>,TArray<unsigned_char,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(local_888);
    }
  }
  return;
}

// TickAsync @ 1418fab20

void __thiscall FOutputDeviceDebug::TickAsync(FOutputDeviceDebug *this)

{
  atomic<bool> aVar1;
  
  aVar1 = (atomic<bool>)FGenericPlatformMisc::IsLowLevelOutputDebugStringStructured();
  LOCK();
  this->bSerializeAsJson = aVar1;
  UNLOCK();
  return;
}

