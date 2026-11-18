// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 8

// GetTestFlags @ 146c16590

EAutomationTestFlags __thiscall FMediaPlaylistTest::GetTestFlags(FMediaPlaylistTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 146c165a0

bool __thiscall FMediaPlaylistTest::IsStressTest(FMediaPlaylistTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146c165b0

uint __thiscall FMediaPlaylistTest::GetRequiredDeviceNum(FMediaPlaylistTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146c165c0

FString * __thiscall
FMediaPlaylistTest::GetTestSourceFileName(FMediaPlaylistTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Tests\\MediaPlaylistTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146c165f0

int __thiscall FMediaPlaylistTest::GetTestSourceFileLine(FMediaPlaylistTest *this)

{
  return 0xc;
}

// GetTests @ 146c16600

/* WARNING: Removing unreachable block (ram,0x000146c166ed) */
/* WARNING: Removing unreachable block (ram,0x000146c167b8) */

void __thiscall
FMediaPlaylistTest::GetTests
          (FMediaPlaylistTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Media.Assets.Playlist");
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

// RunTest @ 146c167e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FMediaPlaylistTest::RunTest(FMediaPlaylistTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UMediaPlaylist *this_00;
  UMediaSource *pUVar10;
  UFileMediaSource *pUVar11;
  UFileMediaSource *pUVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  void *pvVar18;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  uint local_1a8 [2];
  UFileMediaSource *local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pUVar8 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UMediaPlaylist::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar9);
  local_b8._8_8_ = pUVar8;
  this_00 = (UMediaPlaylist *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar17 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"A new play list must be empty",(this_00->Items).ArrayNum,
             0);
  iVar1 = (this_00->Items).ArrayNum;
  if (iVar1 < 1) {
    pvVar18 = (void *)0x0;
    uVar16 = 0xffffffff;
  }
  else {
    iVar13 = iVar1 + -1;
    if (-1 < iVar13) {
      iVar13 = -1;
    }
    iVar5 = -1;
    if (-1 < iVar13) {
      iVar5 = iVar13;
    }
    uVar16 = (iVar5 + 1) % iVar1;
    uVar6 = 0;
    if ((int)uVar16 < iVar1) {
      uVar6 = ~uVar16 >> 0x1f;
    }
    local_1a8[0] = uVar16;
    if ((uVar6 == 0) &&
       (local_1b8 = (longlong)(int)uVar16, local_1b0 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pvVar18 = *(void **)((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
  }
  pUVar12 = (UFileMediaSource *)0x0;
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,
             L"GetNext(INDEX_NONE) on a new play list must return nullptr",pvVar18);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetNext(INDEX_NONE) on a new play list must yield INDEX_NONE",uVar16,-1);
  uVar6 = (this_00->Items).ArrayNum;
  uVar7 = 0;
  if ((int)uVar6 < 1) {
    uVar16 = 0xffffffff;
    pUVar11 = pUVar12;
  }
  else {
    uVar14 = uVar6;
    if ((int)uVar16 < (int)uVar6) {
      uVar14 = uVar16;
    }
    uVar16 = 0;
    if (0 < (int)uVar14) {
      uVar16 = uVar14;
    }
    uVar16 = (int)((uVar16 - 1) + uVar6) % (int)uVar6;
    uVar14 = uVar7;
    if ((int)uVar16 < (int)uVar6) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    local_1a8[0] = uVar16;
    if ((uVar14 == 0) &&
       (local_1b8 = (longlong)(int)uVar16, local_1b0 = (longlong)(int)uVar6,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar11 = *(UFileMediaSource **)
               ((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
  }
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,
             L"GetPrevious(INDEX_NONE) on a new play list must return nullptr",pUVar11);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetPrevious(INDEX_NONE) on a new play list must yield INDEX_NONE",uVar16,-1);
  iVar1 = (this_00->Items).ArrayNum;
  if (iVar1 < 1) {
    uVar16 = 0xffffffff;
    pUVar11 = pUVar12;
  }
  else {
    uVar16 = iVar1 - 1U;
    if (0 < (int)(iVar1 - 1U)) {
      uVar16 = uVar7;
    }
    uVar6 = 0xffffffff;
    if (-1 < (int)uVar16) {
      uVar6 = uVar16;
    }
    uVar16 = (int)(uVar6 + 1) % iVar1;
    uVar6 = uVar7;
    if ((int)uVar16 < iVar1) {
      uVar6 = ~uVar16 >> 0x1f;
    }
    local_1a8[0] = uVar16;
    if ((uVar6 == 0) &&
       (local_1b8 = (longlong)(int)uVar16, local_1b0 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar11 = *(UFileMediaSource **)
               ((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
  }
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"GetNext(0) on a new play list must return nullptr",
             pUVar11);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetNext(0) on a new play list must yield INDEX_NONE",
             uVar16,-1);
  uVar6 = (this_00->Items).ArrayNum;
  uVar14 = 0;
  if ((int)uVar6 < 1) {
    uVar16 = 0xffffffff;
    pUVar11 = pUVar12;
  }
  else {
    uVar15 = uVar6;
    if ((int)uVar16 < (int)uVar6) {
      uVar15 = uVar16;
    }
    uVar16 = uVar7;
    if (0 < (int)uVar15) {
      uVar16 = uVar15;
    }
    uVar16 = (int)((uVar16 - 1) + uVar6) % (int)uVar6;
    uVar15 = uVar14;
    if ((int)uVar16 < (int)uVar6) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    local_1a8[0] = uVar16;
    if ((uVar15 == 0) &&
       (local_1b8 = (longlong)(int)uVar16, local_1b0 = (longlong)(int)uVar6,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar11 = *(UFileMediaSource **)
               ((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
  }
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"GetPrevious(0) on a new play list must return nullptr",
             pUVar11);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetPrevious(0) on a new play list must yield INDEX_NONE",
             uVar16,-1);
  iVar1 = (this_00->Items).ArrayNum;
  if (iVar1 < 1) {
    uVar16 = 0xffffffff;
    pUVar11 = pUVar12;
  }
  else {
    iVar13 = iVar1 + -1;
    if (1 < iVar13) {
      iVar13 = 1;
    }
    iVar5 = -1;
    if (-1 < iVar13) {
      iVar5 = iVar13;
    }
    uVar16 = (iVar5 + 1) % iVar1;
    uVar6 = uVar14;
    if ((int)uVar16 < iVar1) {
      uVar6 = ~uVar16 >> 0x1f;
    }
    local_1a8[0] = uVar16;
    if ((uVar6 == 0) &&
       (local_1b8 = (longlong)(int)uVar16, local_1b0 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar11 = *(UFileMediaSource **)
               ((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
  }
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"GetNext(1) on a new play list must return nullptr",
             pUVar11);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetNext(1) on a new play list must yield INDEX_NONE",
             uVar16,-1);
  uVar6 = (this_00->Items).ArrayNum;
  if ((int)uVar6 < 1) {
    uVar16 = 0xffffffff;
    local_1a8[0] = 0xffffffff;
    pUVar11 = pUVar12;
  }
  else {
    uVar15 = uVar6;
    if ((int)uVar16 < (int)uVar6) {
      uVar15 = uVar16;
    }
    uVar16 = uVar7;
    if (0 < (int)uVar15) {
      uVar16 = uVar15;
    }
    uVar16 = (int)((uVar16 - 1) + uVar6) % (int)uVar6;
    if ((int)uVar16 < (int)uVar6) {
      uVar7 = ~uVar16 >> 0x1f;
    }
    local_1a8[0] = uVar16;
    if ((uVar7 == 0) &&
       (local_1b8 = (longlong)(int)uVar16, local_1b0 = (longlong)(int)uVar6,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar11 = *(UFileMediaSource **)
               ((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
  }
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"GetPrevious(1) on a new play list must return nullptr",
             pUVar11);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetPrevious(1) on a new play list must yield INDEX_NONE",
             uVar16,-1);
  pUVar10 = UMediaPlaylist::GetRandom(this_00,(int *)local_1a8);
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"GetRandom() on a new play list must return nullptr",
             pUVar10);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetRandom() on a new play list must yield INDEX_NONE",
             local_1a8[0],-1);
  pUVar8 = GetTransientPackageAsObject();
  local_1a0 = NewObject<UFileMediaSource>(pUVar8);
  UMediaPlaylist::Add(this_00,(UMediaSource *)local_1a0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"A play list with one entry and must have length 1",
             (this_00->Items).ArrayNum,1);
  iVar1 = (this_00->Items).ArrayNum;
  if (iVar1 < 1) {
    uVar16 = 0xffffffff;
  }
  else {
    iVar13 = iVar1 + -1;
    if (-1 < iVar13) {
      iVar13 = -1;
    }
    iVar5 = -1;
    if (-1 < iVar13) {
      iVar5 = iVar13;
    }
    uVar16 = (iVar5 + 1) % iVar1;
    uVar6 = uVar14;
    if ((int)uVar16 < iVar1) {
      uVar6 = ~uVar16 >> 0x1f;
    }
    local_1a8[0] = uVar16;
    if ((uVar6 == 0) &&
       (local_1b8 = (longlong)(int)uVar16, local_1b0 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(longlong *)((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar16 * 8) != 0)
    goto LAB_146c16dc8;
  }
  pcVar2 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_198,L"Expected \'%s\' to be not null.");
  (*pcVar2)(this,&local_198,0);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
LAB_146c16dc8:
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetNext(INDEX_NONE) on a play list with one entry must yield 0",uVar16,0);
  local_1a8[0] = 0xffffffff;
  pUVar10 = UMediaPlaylist::GetPrevious(this_00,(int *)local_1a8);
  if (pUVar10 == (UMediaSource *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_188,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_188,0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetPrevious(INDEX_NONE) on a play list with one entry must yield 0",local_1a8[0],0);
  local_1a8[0] = 0;
  pUVar10 = UMediaPlaylist::GetNext(this_00,(int *)local_1a8);
  if (pUVar10 == (UMediaSource *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_178,0);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetNext(0) on a play list with one entry must yield 0",
             local_1a8[0],0);
  local_1a8[0] = 0;
  pUVar10 = UMediaPlaylist::GetPrevious(this_00,(int *)local_1a8);
  if (pUVar10 == (UMediaSource *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetPrevious(0) on a play list with one entry must yield 0",local_1a8[0],0);
  local_1a8[0] = 1;
  pUVar10 = UMediaPlaylist::GetNext(this_00,(int *)local_1a8);
  if (pUVar10 == (UMediaSource *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetNext(1) on a play list with one entry must yield 0",
             local_1a8[0],0);
  local_1a8[0] = 1;
  pUVar10 = UMediaPlaylist::GetPrevious(this_00,(int *)local_1a8);
  if (pUVar10 == (UMediaSource *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_148,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetPrevious(1) on a play list with one entry must yield 0",local_1a8[0],0);
  pUVar8 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UFileMediaSource>(pUVar8);
  UMediaPlaylist::Add(this_00,(UMediaSource *)pUVar11);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"A play list with two entries and must have length 2",
             (this_00->Items).ArrayNum,2);
  iVar1 = (this_00->Items).ArrayNum;
  if (iVar1 < 1) {
    uVar16 = 0xffffffff;
  }
  else {
    iVar13 = iVar1 + -1;
    if (-1 < iVar13) {
      iVar13 = -1;
    }
    iVar5 = -1;
    if (-1 < iVar13) {
      iVar5 = iVar13;
    }
    uVar16 = (iVar5 + 1) % iVar1;
    if ((int)uVar16 < iVar1) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    local_1a8[0] = uVar16;
    if ((uVar14 == 0) &&
       (local_1b8 = (longlong)(int)uVar16, local_1b0 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar12 = *(UFileMediaSource **)
               ((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
  }
  if (pUVar12 != local_1a0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetNext(INDEX_NONE) on a play list with two entries must yield 0",uVar16,0);
  local_1a8[0] = 0xffffffff;
  pUVar12 = (UFileMediaSource *)UMediaPlaylist::GetPrevious(this_00,(int *)local_1a8);
  if (pUVar12 != pUVar11) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetPrevious(INDEX_NONE) on a play list with two entries must yield 1",local_1a8[0],1)
  ;
  local_1a8[0] = 0;
  pUVar12 = (UFileMediaSource *)UMediaPlaylist::GetNext(this_00,(int *)local_1a8);
  if (pUVar12 != pUVar11) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_118,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetNext(0) on a play list with two entries must yield 1",
             local_1a8[0],1);
  local_1a8[0] = 0;
  pUVar12 = (UFileMediaSource *)UMediaPlaylist::GetPrevious(this_00,(int *)local_1a8);
  if (pUVar12 != pUVar11) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_108,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetPrevious(0) on a play list with two entries must yield 1",local_1a8[0],1);
  local_1a8[0] = 1;
  pUVar11 = (UFileMediaSource *)UMediaPlaylist::GetNext(this_00,(int *)local_1a8);
  pUVar12 = local_1a0;
  if (pUVar11 != local_1a0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"GetNext(1) on a play list with two entries must yield 0",
             local_1a8[0],0);
  local_1a8[0] = 1;
  pUVar11 = (UFileMediaSource *)UMediaPlaylist::GetPrevious(this_00,(int *)local_1a8);
  if (pUVar11 != pUVar12) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_e8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"GetPrevious(1) on a play list with two entries must yield 0",local_1a8[0],0);
  pUVar10 = UMediaPlaylist::GetRandom(this_00,(int *)local_1a8);
  if (pUVar10 == (UMediaSource *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_d8,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1a8[0] == 0xffffffff) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_c8,L"%s: The two values are equal.");
    (*pcVar2)(this,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 146c173d0

FString * __thiscall
FMediaPlaylistTest::GetBeautifiedTestName(FMediaPlaylistTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Media.Assets.Playlist");
  return __return_storage_ptr__;
}

