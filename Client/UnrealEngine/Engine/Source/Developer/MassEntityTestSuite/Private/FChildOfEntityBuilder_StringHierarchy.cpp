// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// BuildHierarchy @ 1471148e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfEntityBuilder_StringHierarchy::BuildHierarchy
          (FChildOfEntityBuilder_StringHierarchy *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_3a8 [32];
  FMassEntityHandle local_388;
  FMassEntityHandle local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  FMassEntityHandle *local_358;
  FMassEntityHandle *local_350;
  int local_348;
  int local_340;
  int local_338;
  uint local_334;
  uint local_330;
  int local_32c;
  longlong *local_328;
  FMassEntityHandle local_320;
  FMassEntityHandle local_318;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  FMassEntityManager *local_2f8;
  FMassEntityHandle local_2f0;
  FMassEntityHandle local_2e8;
  FMassEntityHandle local_2e0;
  FMassEntityHandle local_2d8;
  FMassEntityHandle local_2d0;
  FMassEntityHandle local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  FMassEntityHandle local_2b8;
  FMassEntityHandle local_2b0;
  FMassEntityHandle local_2a8;
  longlong local_2a0;
  longlong local_298;
  FMassEntityHandle local_290;
  FMassEntityHandle local_288;
  void *local_280;
  undefined8 *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  FMassEntityHandle *local_248;
  FMassEntityHandle local_240;
  FObjectKey local_238;
  FTestFragment_Int *local_230;
  FMassEntityHandle local_228;
  FMassEntityHandle local_220;
  FMassEntityHandle local_218;
  FMassEntityHandle local_210;
  FMassEntityHandle local_208;
  FMassEntityHandle local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  FMassEntityHandle local_1f0;
  FMassEntityHandle local_1e8;
  FMassEntityHandle local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  FMassEntityHandle local_1c8;
  FMassEntityHandle local_1c0;
  void *local_1b8;
  undefined8 *local_1b0;
  FEntityBuilder local_198;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_2f8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::MakeEntityBuilder(local_2f8,&local_198);
  local_310 = *(int *)&this->field_0xa0;
  local_308 = local_310;
  local_230 = FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(&local_198,&local_308);
  local_358 = (FMassEntityHandle *)&this->field_0x98;
  local_320 = FEntityBuilder::CommitAndReprepare(&local_198);
  local_2f0 = *local_358;
  local_2e8 = local_2f0;
  local_2e0 = local_2f0;
  if (((ulonglong)local_2f0 <= (ulonglong)local_320) &&
     (local_2d8 = *local_358, local_2d0 = local_2d8, local_2c8 = local_2d8,
     (ulonglong)local_320 <
     (ulonglong)((longlong)local_2d8 + (longlong)local_358[1].SerialNumber * 8))) {
    local_2c0 = 0;
    local_2bc = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_370 = (longlong)local_358[1].Index;
    local_378 = (longlong)local_358[1].SerialNumber;
    local_380 = *local_358;
    local_368 = 8;
    local_388 = local_320;
    local_2b8 = local_380;
    local_2b0 = local_380;
    local_2a8 = local_380;
    local_2a0 = local_370;
    local_298 = local_378;
    local_290 = local_380;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_358[1].Index == local_358[1].SerialNumber) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_358,&local_358[1].SerialNumber);
    local_358[1].Index = iVar3;
  }
  local_338 = local_358[1].Index;
  local_358[1].Index = local_358[1].Index + 1;
  local_288 = *local_358;
  local_280 = (void *)((longlong)local_288 + (longlong)local_338 * 8);
  local_278 = ::operator_new(8,local_280);
  *local_278 = *(undefined8 *)local_320;
  local_304 = local_338;
  local_348 = 0;
  do {
    if (3 < local_348) {
      FEntityBuilder::~FEntityBuilder(&local_198);
      return;
    }
    local_328 = (longlong *)&this->field_0x98;
    local_340 = *(int *)&this->field_0xa0 + -1;
    local_330 = (uint)(-1 < local_340);
    bVar2 = local_340 < *(int *)&this->field_0xa0;
    local_334 = (uint)bVar2;
    if (-1 >= local_340 || !bVar2) {
      local_270 = 0;
      local_26c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_380 = (FMassEntityHandle)(longlong)(int)local_328[1];
      local_388 = (FMassEntityHandle)(longlong)local_340;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_268 = *local_328;
    local_258 = (longlong)((int)local_328[1] + -1) * 8;
    local_248 = (FMassEntityHandle *)(local_268 + local_258);
    local_240 = *local_248;
    local_238.ObjectIndex = *(int *)&this->field_0xbc;
    local_238.ObjectSerialNumber = *(int *)&this->field_0xc0;
    local_260 = local_268;
    local_250 = local_268;
    FEntityBuilder::AddRelation(&local_198,(FTypeHandle)local_238,local_240,Object);
    local_30c = *(int *)&this->field_0xa0;
    local_230->Value = local_30c;
    local_350 = (FMassEntityHandle *)&this->field_0x98;
    local_318 = FEntityBuilder::CommitAndReprepare(&local_198);
    local_228 = *local_350;
    local_220 = local_228;
    local_218 = local_228;
    if (((ulonglong)local_228 <= (ulonglong)local_318) &&
       (local_210 = *local_350, local_208 = local_210, local_200 = local_210,
       (ulonglong)local_318 <
       (ulonglong)((longlong)local_210 + (longlong)local_350[1].SerialNumber * 8))) {
      local_1f8 = 0;
      local_1f4 = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_370 = (longlong)local_350[1].Index;
      local_378 = (longlong)local_350[1].SerialNumber;
      local_380 = *local_350;
      local_368 = 8;
      local_388 = local_318;
      local_1f0 = local_380;
      local_1e8 = local_380;
      local_1e0 = local_380;
      local_1d8 = local_370;
      local_1d0 = local_378;
      local_1c8 = local_380;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_350[1].Index == local_350[1].SerialNumber) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)local_350,&local_350[1].SerialNumber);
      local_350[1].Index = iVar3;
    }
    local_32c = local_350[1].Index;
    local_350[1].Index = local_350[1].Index + 1;
    local_1c0 = *local_350;
    local_1b8 = (void *)((longlong)local_1c0 + (longlong)local_32c * 8);
    local_1b0 = ::operator_new(8,local_1b8);
    *local_1b0 = *(undefined8 *)local_318;
    local_300 = local_32c;
    local_348 = local_348 + 1;
  } while( true );
}

