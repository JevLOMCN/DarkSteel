// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 8

// GetTestFlags @ 14318cb90

EAutomationTestFlags __thiscall
FAnalyticsProviderETEventCacheTest::GetTestFlags(FAnalyticsProviderETEventCacheTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14318cba0

bool __thiscall
FAnalyticsProviderETEventCacheTest::IsStressTest(FAnalyticsProviderETEventCacheTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14318cbb0

uint __thiscall
FAnalyticsProviderETEventCacheTest::GetRequiredDeviceNum(FAnalyticsProviderETEventCacheTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14318cbc0

FString * __thiscall
FAnalyticsProviderETEventCacheTest::GetTestSourceFileName
          (FAnalyticsProviderETEventCacheTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\AnalyticsProviderETEventCache.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14318cbf0

int __thiscall
FAnalyticsProviderETEventCacheTest::GetTestSourceFileLine(FAnalyticsProviderETEventCacheTest *this)

{
  return 0x1ea;
}

// GetTests @ 14318cc00

/* WARNING: Removing unreachable block (ram,0x00014318cced) */
/* WARNING: Removing unreachable block (ram,0x00014318cdb8) */

void __thiscall
FAnalyticsProviderETEventCacheTest::GetTests
          (FAnalyticsProviderETEventCacheTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Analytics.AnalyticsETEventCache");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14318cde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAnalyticsProviderETEventCacheTest::RunTest
          (FAnalyticsProviderETEventCacheTest *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_1b8 [32];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_178;
  FJsonNull local_168;
  bool local_167 [7];
  FString local_160;
  FString local_150;
  FString local_140;
  wchar_t *local_130;
  wchar_t *local_128;
  FString local_120;
  FJsonFragment local_110;
  wchar_t *local_100;
  wchar_t *local_f8;
  FString local_f0;
  int local_e0 [2];
  float local_d8 [2];
  wchar_t *local_d0;
  wchar_t *local_c8 [2];
  FAnalyticsProviderETEventCache local_b8;
  ulonglong local_38;
  
  bVar1 = EventCacheStatic::bUseZeroDateOffset;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  EventCacheStatic::bUseZeroDateOffset = true;
  ::FString::FString(&local_160,L"BasicStrings");
  FAnalyticsProviderETEventCache::FAnalyticsProviderETEventCache(&local_b8,-1,-1);
  pFVar3 = ::FString::FString(&local_120,L"FStringValue");
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayMax = 0;
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
  local_178.ArrayNum = 0;
  if (local_178.ArrayMax != 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,2,&local_178.AllocatorInstance,0,&local_178.ArrayMax);
  }
  local_130 = L"ConstantStringValue";
  local_d0 = L"ConstantStringAttribute";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,wchar_t_const_*>
            (&local_178,&local_d0,&local_130);
  local_130 = L"FStringStringAttribute";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FString>(&local_178,&local_130,pFVar3);
  iVar2 = local_160.Data.ArrayNum;
  FVar4.Data = local_160.Data.AllocatorInstance.Data;
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_160.Data.ArrayNum == 0) {
    local_150.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_160.Data.ArrayNum,0,(ForAnyElementType *)&local_150,local_160.Data.ArrayNum
               ,&local_150.Data.ArrayMax);
    memcpy(local_150.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar2 * 2);
  }
  FAnalyticsProviderETEventCache::AddToCache(&local_b8,&local_150,&local_178);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_140,
                     L"{\"Events\":[{\"EventName\":\"BasicStrings\",\"DateOffset\":\"+00:00:00.000\",\"ConstantStringAttribute\":\"ConstantStringValue\",\"FStringStringAttribute\":\"FStringValue\"}]}"
                    );
  pFVar3 = FAnalyticsProviderETEventCache::FlushCache(&local_b8,&local_120,(ulong64 *)0x0);
  pwVar5 = L"";
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    FVar4.Data = local_160.Data.AllocatorInstance.Data;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar7.Data = local_140.Data.AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,pwVar6,(wchar_t *)FVar7.Data);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_b8.CachedEventsCS);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             local_b8.FlushQueue.AllocatorInstance.Data,local_b8.FlushQueue.ArrayNum);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
      local_b8.FlushQueue.AllocatorInstance.Data !=
      (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8.FlushQueue.AllocatorInstance.Data);
  }
  if (local_b8.CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_b8.CachedDefaultAttributes.AllocatorInstance.Data,
             local_b8.CachedDefaultAttributes.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_b8.CachedDefaultAttributes.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_b8.CachedDefaultAttributes.AllocatorInstance.Data);
  }
  if (local_b8.CachedEventUTF8Stream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CachedEventUTF8Stream.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int>
            ((FAnalyticsEventEntry *)local_b8.CachedEventEntries.AllocatorInstance.Data,
             local_b8.CachedEventEntries.ArrayNum);
  if ((FAnalyticsEventEntry *)local_b8.CachedEventEntries.AllocatorInstance.Data !=
      (FAnalyticsEventEntry *)0x0) {
    FMemory::Free(local_b8.CachedEventEntries.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_160,L"UnicodeEvent");
  FAnalyticsProviderETEventCache::FAnalyticsProviderETEventCache(&local_b8,-1,-1);
  ::FString::FString(&local_120,L"عاركني بالبناء 戦い");
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayMax = 0;
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
  local_178.ArrayNum = 0;
  if (local_178.ArrayMax != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,1,&local_178.AllocatorInstance,0,&local_178.ArrayMax);
  }
  local_130 = L"UnicodeAttr";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FString>(&local_178,&local_130,&local_120);
  iVar2 = local_160.Data.ArrayNum;
  FVar4.Data = local_160.Data.AllocatorInstance.Data;
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_160.Data.ArrayNum == 0) {
    local_150.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_160.Data.ArrayNum,0,(ForAnyElementType *)&local_150,local_160.Data.ArrayNum
               ,&local_150.Data.ArrayMax);
    memcpy(local_150.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar2 * 2);
  }
  FAnalyticsProviderETEventCache::AddToCache(&local_b8,&local_150,&local_178);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  ::FString::FString(&local_140,
                     L"{\"Events\":[{\"EventName\":\"UnicodeEvent\",\"DateOffset\":\"+00:00:00.000\",\"UnicodeAttr\":\"عاركني بالبناء 戦い\"}]}"
                    );
  pFVar3 = FAnalyticsProviderETEventCache::FlushCache
                     (&local_b8,(FString *)&local_178,(ulong64 *)0x0);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    FVar4.Data = local_160.Data.AllocatorInstance.Data;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar7.Data = local_140.Data.AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,pwVar6,(wchar_t *)FVar7.Data);
  if ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_b8.CachedEventsCS);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             local_b8.FlushQueue.AllocatorInstance.Data,local_b8.FlushQueue.ArrayNum);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
      local_b8.FlushQueue.AllocatorInstance.Data !=
      (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8.FlushQueue.AllocatorInstance.Data);
  }
  if (local_b8.CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_b8.CachedDefaultAttributes.AllocatorInstance.Data,
             local_b8.CachedDefaultAttributes.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_b8.CachedDefaultAttributes.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_b8.CachedDefaultAttributes.AllocatorInstance.Data);
  }
  if (local_b8.CachedEventUTF8Stream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CachedEventUTF8Stream.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int>
            ((FAnalyticsEventEntry *)local_b8.CachedEventEntries.AllocatorInstance.Data,
             local_b8.CachedEventEntries.ArrayNum);
  if ((FAnalyticsEventEntry *)local_b8.CachedEventEntries.AllocatorInstance.Data !=
      (FAnalyticsEventEntry *)0x0) {
    FMemory::Free(local_b8.CachedEventEntries.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_140,L"NumericalEvent");
  FAnalyticsProviderETEventCache::FAnalyticsProviderETEventCache(&local_b8,-1,-1);
  local_150.Data.AllocatorInstance.Data = __real_7ff8000000000000;
  local_f0.Data.AllocatorInstance.Data = __real_7ff0000000000000;
  local_110.FragmentString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128 = __real_7fefffffffffffff;
  local_168 = (FJsonNull)0x0;
  local_167[0] = true;
  local_130 = (wchar_t *)((ulonglong)local_130 & 0xffffffff00000000);
  local_d0 = (wchar_t *)((ulonglong)local_d0 & 0xffffffff00000000);
  local_d8[0] = 3.4028235e+38;
  local_f8 = (wchar_t *)0xffffffffffffffff;
  local_e0[1] = 0xffffffff;
  local_100 = (wchar_t *)0x8000000000000000;
  local_e0[0] = -0x80000000;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayMax = 0;
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
  local_178.ArrayNum = 0;
  if (local_178.ArrayMax != 0xd) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0xd,&local_178.AllocatorInstance,0,&local_178.ArrayMax);
  }
  local_c8[0] = L"IntAttr";
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int>
            (&local_178,local_c8,local_e0);
  local_c8[0] = L"LongAttr";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
            (&local_178,local_c8,(long64 *)&local_100);
  local_100 = L"UIntAttr";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned_int>
            (&local_178,&local_100,(uint *)(local_e0 + 1));
  local_100 = L"ULongAttr";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
            (&local_178,&local_100,(ulong64 *)&local_f8);
  local_f8 = L"FloatAttr";
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,float>
            (&local_178,&local_f8,local_d8);
  local_f8 = L"DoubleAttr";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>
            (&local_178,&local_f8,(double *)&local_128);
  local_128 = L"IntAttr2";
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int>
            (&local_178,&local_128,(int *)&local_d0);
  local_128 = L"FloatAttr2";
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,float>
            (&local_178,&local_128,(float *)&local_130);
  local_128 = L"DoubleAttr2";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>
            (&local_178,&local_128,(double *)&local_110);
  local_110.FragmentString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a651c8;
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool>
            (&local_178,(wchar_t **)&local_110,local_167);
  local_110.FragmentString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a651a8;
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool>
            (&local_178,(wchar_t **)&local_110,(bool *)&local_168);
  local_110.FragmentString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a65198;
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>
            (&local_178,(wchar_t **)&local_110,(double *)&local_f0);
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a65188;
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>
            (&local_178,(wchar_t **)&local_f0,(double *)&local_150);
  iVar2 = local_140.Data.ArrayNum;
  FVar4.Data = local_140.Data.AllocatorInstance.Data;
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_140.Data.ArrayNum == 0) {
    local_160.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)&local_160,local_140.Data.ArrayNum
               ,&local_160.Data.ArrayMax);
    memcpy(local_160.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar2 * 2);
  }
  FAnalyticsProviderETEventCache::AddToCache(&local_b8,&local_160,&local_178);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  ::FString::FString(&local_120,
                     L"{\"Events\":[{\"EventName\":\"NumericalEvent\",\"DateOffset\":\"+00:00:00.000\",\"IntAttr\":-2147483648,\"LongAttr\":-9223372036854775808,\"UIntAttr\":4294967295,\"ULongAttr\":18446744073709551615,\"FloatAttr\":3.402823466e+38,\"DoubleAttr\":1.797693135e+308,\"IntAttr2\":0,\"FloatAttr2\":0.0,\"DoubleAttr2\":0.0,\"BoolTrueAttr\":true,\"BoolFalseAttr\":false,\"INFAttr\":null,\"NANAttr\":null}]}"
                    );
  pFVar3 = FAnalyticsProviderETEventCache::FlushCache(&local_b8,&local_160,(ulong64 *)0x0);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar4.Data = local_140.Data.AllocatorInstance.Data;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar7.Data = local_120.Data.AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,pwVar6,(wchar_t *)FVar7.Data);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_b8.CachedEventsCS);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             local_b8.FlushQueue.AllocatorInstance.Data,local_b8.FlushQueue.ArrayNum);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
      local_b8.FlushQueue.AllocatorInstance.Data !=
      (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8.FlushQueue.AllocatorInstance.Data);
  }
  if (local_b8.CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_b8.CachedDefaultAttributes.AllocatorInstance.Data,
             local_b8.CachedDefaultAttributes.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_b8.CachedDefaultAttributes.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_b8.CachedDefaultAttributes.AllocatorInstance.Data);
  }
  if (local_b8.CachedEventUTF8Stream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CachedEventUTF8Stream.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int>
            ((FAnalyticsEventEntry *)local_b8.CachedEventEntries.AllocatorInstance.Data,
             local_b8.CachedEventEntries.ArrayNum);
  if ((FAnalyticsEventEntry *)local_b8.CachedEventEntries.AllocatorInstance.Data !=
      (FAnalyticsEventEntry *)0x0) {
    FMemory::Free(local_b8.CachedEventEntries.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_140,L"JsonEvent");
  FAnalyticsProviderETEventCache::FAnalyticsProviderETEventCache(&local_b8,-1,-1);
  ::FString::FString(&local_f0,L"{\"Key\":\"Value\",\"Key2\":\"Value2\"}");
  local_110.FragmentString.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
  local_110.FragmentString.Data.ArrayNum = local_f0.Data.ArrayNum;
  local_110.FragmentString.Data.ArrayMax = local_f0.Data.ArrayMax;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayMax = 0;
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
  local_178.ArrayNum = 0;
  if (local_178.ArrayMax != 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,2,&local_178.AllocatorInstance,0,&local_178.ArrayMax);
  }
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a65610;
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FJsonNull>
            (&local_178,(wchar_t **)&local_150,&local_168);
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a655f0;
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FJsonFragment>
            (&local_178,(wchar_t **)&local_150,&local_110);
  iVar2 = local_140.Data.ArrayNum;
  FVar4.Data = local_140.Data.AllocatorInstance.Data;
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_140.Data.ArrayNum == 0) {
    local_160.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)&local_160,local_140.Data.ArrayNum
               ,&local_160.Data.ArrayMax);
    memcpy(local_160.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar2 * 2);
  }
  FAnalyticsProviderETEventCache::AddToCache(&local_b8,&local_160,&local_178);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_178.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  if (local_110.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.FragmentString.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_120,
                     L"{\"Events\":[{\"EventName\":\"JsonEvent\",\"DateOffset\":\"+00:00:00.000\",\"NullAttr\":null,\"FragmentAttr\":{\"Key\":\"Value\",\"Key2\":\"Value2\"}}]}"
                    );
  pFVar3 = FAnalyticsProviderETEventCache::FlushCache(&local_b8,&local_160,(ulong64 *)0x0);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar4.Data = local_140.Data.AllocatorInstance.Data;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar7.Data = local_120.Data.AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,pwVar5,(wchar_t *)FVar7.Data);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_b8.CachedEventsCS);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             local_b8.FlushQueue.AllocatorInstance.Data,local_b8.FlushQueue.ArrayNum);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
      local_b8.FlushQueue.AllocatorInstance.Data !=
      (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8.FlushQueue.AllocatorInstance.Data);
  }
  if (local_b8.CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_b8.CachedDefaultAttributes.AllocatorInstance.Data,
             local_b8.CachedDefaultAttributes.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_b8.CachedDefaultAttributes.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_b8.CachedDefaultAttributes.AllocatorInstance.Data);
  }
  if (local_b8.CachedEventUTF8Stream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CachedEventUTF8Stream.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int>
            ((FAnalyticsEventEntry *)local_b8.CachedEventEntries.AllocatorInstance.Data,
             local_b8.CachedEventEntries.ArrayNum);
  if ((FAnalyticsEventEntry *)local_b8.CachedEventEntries.AllocatorInstance.Data !=
      (FAnalyticsEventEntry *)0x0) {
    FMemory::Free(local_b8.CachedEventEntries.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  EventCacheStatic::bUseZeroDateOffset = bVar1;
  return true;
}

// GetBeautifiedTestName @ 14318d910

FString * __thiscall
FAnalyticsProviderETEventCacheTest::GetBeautifiedTestName
          (FAnalyticsProviderETEventCacheTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Analytics.AnalyticsETEventCache");
  return __return_storage_ptr__;
}

