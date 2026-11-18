// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 8

// GetTestFlags @ 14ea30ba0

EAutomationTestFlags __thiscall FImgMediaTests::GetTestFlags(FImgMediaTests *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ea30bb0

bool __thiscall FImgMediaTests::IsStressTest(FImgMediaTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ea30bc0

uint __thiscall FImgMediaTests::GetRequiredDeviceNum(FImgMediaTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ea30bd0

FString * __thiscall
FImgMediaTests::GetTestSourceFileName(FImgMediaTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Tests\\ImgMediaTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ea30c00

int __thiscall FImgMediaTests::GetTestSourceFileLine(FImgMediaTests *this)

{
  return 0xe;
}

// GetTests @ 14ea30c50

/* WARNING: Removing unreachable block (ram,0x00014ea30d3d) */
/* WARNING: Removing unreachable block (ram,0x00014ea30e08) */

void __thiscall
FImgMediaTests::GetTests
          (FImgMediaTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Plugins.ImgMedia.TileSelection");
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

// RunTest @ 14ea30e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ea30edc) */
/* WARNING: Removing unreachable block (ram,0x00014ea310f5) */
/* WARNING: Removing unreachable block (ram,0x00014ea31414) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff14 : 0x00014ea310f9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall FImgMediaTests::RunTest(FImgMediaTests *this,FString *param_1)

{
  int iVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  FAutomationTestBase *pFVar8;
  TIntPoint<int> TVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar14;
  ForElementType<unsigned_int> FVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  longlong local_200;
  FAutomationTestBase *local_1f8;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_1f0;
  TIntRect<int>_u_0 local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_180;
  FString local_170;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_160;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_150;
  FImgMediaTileSelection local_138;
  FImgMediaTileSelection local_f8;
  FImgMediaTileSelection local_b8;
  FImgMediaTileSelection local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_b8.Tiles.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.Tiles.MaxBits = 0x80;
  local_b8.Tiles.NumBits = 100;
  local_b8.Tiles.AllocatorInstance.InlineData[0] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[1] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[2] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[3] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[4] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[5] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[6] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[7] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[8] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[9] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[10] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[0xb] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[0xc] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[0xd] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[0xe] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[0xf] = '\0';
  uVar4 = local_b8.Tiles.AllocatorInstance.InlineData._8_8_;
  iVar18 = 3;
  local_b8.Tiles.AllocatorInstance.InlineData[0xc] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[0xd] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[0xe] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData[0xf] = '\0';
  local_b8.Tiles.AllocatorInstance.InlineData._8_8_ = uVar4;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_b8.Dimensions.field0_0x0 = ___xmm_00000000000000000000000a0000000a;
  local_b8.CachedVisibleRegion.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_152fec508;
  local_b8.CachedVisibleRegion.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_b8.bCachedVisibleRegionDirty = true;
  local_1f8 = (FAutomationTestBase *)this;
  do {
    iVar19 = 1;
    do {
      local_b8.bCachedVisibleRegionDirty = true;
      iVar12 = local_b8.Dimensions.field0_0x0._s_0.Y + -1;
      if (iVar18 < local_b8.Dimensions.field0_0x0._s_0.Y + -1) {
        iVar12 = iVar18;
      }
      iVar20 = local_b8.Dimensions.field0_0x0._s_0.X + -1;
      if (iVar19 < local_b8.Dimensions.field0_0x0._s_0.X + -1) {
        iVar20 = iVar19;
      }
      iVar20 = iVar12 * local_b8.Dimensions.field0_0x0._s_0.X + iVar20;
      if (((iVar20 < 0) || (local_b8.Tiles.NumBits <= iVar20)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FVar15 = (ForElementType<unsigned_int>)&local_b8;
      if (local_b8.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_b8.Tiles.AllocatorInstance.SecondaryData;
      }
      iVar12 = iVar20;
      if (iVar20 < 0) {
        iVar12 = iVar20 + 0x1f;
      }
      iVar19 = iVar19 + 1;
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar12 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar20 & 0x1f);
      local_b8.bCachedVisibleRegionDirty = true;
    } while (iVar19 < 6);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 7);
  FImgMediaTileSelection::GetVisibleRegion(&local_b8,(TIntRect<int> *)&local_1e0._s_0);
  pTVar14 = FImgMediaTileSelection::GetVisibleRegions
                      (&local_b8,&local_150,(FImgMediaTileSelection *)0x0);
  if (pTVar14->ArrayNum < 1) {
    local_208 = 0;
    local_200 = (longlong)pTVar14->ArrayNum;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
  }
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  uVar4 = *(undefined8 *)pFVar3;
  uVar5 = *(undefined8 *)(pFVar3 + 8);
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  pwVar16 = L"FImgMediaTests: Mismatched tile regions.";
  pcVar7 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_1d0,L"FImgMediaTests: Mismatched tile regions.");
  if (((local_1e0._0_4_ == (int)uVar4) && (local_1e0._4_4_ == (int)((ulonglong)uVar4 >> 0x20))) &&
     ((local_1e0._8_4_ == (int)uVar5 && (local_1e0._12_4_ == (int)((ulonglong)uVar5 >> 0x20))))) {
    uVar17 = 1;
  }
  else {
    uVar17 = (ulonglong)pwVar16 & 0xffffffffffffff00;
  }
  (*pcVar7)(local_1f8,uVar17,&local_1d0,0);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_b8.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.Tiles.AllocatorInstance.SecondaryData);
  }
  local_f8.Tiles.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_f8.Tiles.MaxBits = 0x80;
  local_f8.Tiles.NumBits = 100;
  local_f8.Tiles.AllocatorInstance.InlineData[0] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[1] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[2] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[3] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[4] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[5] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[6] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[7] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[8] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[9] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[10] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[0xb] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[0xc] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[0xd] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[0xe] = '\0';
  local_f8.Tiles.AllocatorInstance.InlineData[0xf] = '\0';
  iVar18 = 0;
  local_f8.Dimensions.field0_0x0 = ___xmm_00000000000000000000000a0000000a;
  local_f8.CachedVisibleRegion.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_152fec508;
  local_f8.CachedVisibleRegion.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_f8.bCachedVisibleRegionDirty = true;
  do {
    iVar19 = 0;
    do {
      local_f8.bCachedVisibleRegionDirty = true;
      iVar12 = local_f8.Dimensions.field0_0x0._s_0.Y + -1;
      if (iVar18 < local_f8.Dimensions.field0_0x0._s_0.Y + -1) {
        iVar12 = iVar18;
      }
      iVar20 = local_f8.Dimensions.field0_0x0._s_0.X + -1;
      if (iVar19 < local_f8.Dimensions.field0_0x0._s_0.X + -1) {
        iVar20 = iVar19;
      }
      iVar20 = iVar12 * local_f8.Dimensions.field0_0x0._s_0.X + iVar20;
      if (((iVar20 < 0) || (local_f8.Tiles.NumBits <= iVar20)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FVar15 = (ForElementType<unsigned_int>)&local_f8;
      if (local_f8.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_f8.Tiles.AllocatorInstance.SecondaryData;
      }
      iVar12 = iVar20;
      if (iVar20 < 0) {
        iVar12 = iVar20 + 0x1f;
      }
      iVar19 = iVar19 + 1;
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar12 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar20 & 0x1f);
      local_f8.bCachedVisibleRegionDirty = true;
    } while (iVar19 < 2);
    iVar19 = 8;
    do {
      local_f8.bCachedVisibleRegionDirty = true;
      iVar12 = local_f8.Dimensions.field0_0x0._s_0.Y + -1;
      if (iVar18 < local_f8.Dimensions.field0_0x0._s_0.Y + -1) {
        iVar12 = iVar18;
      }
      iVar20 = local_f8.Dimensions.field0_0x0._s_0.X + -1;
      if (iVar19 < local_f8.Dimensions.field0_0x0._s_0.X + -1) {
        iVar20 = iVar19;
      }
      iVar20 = iVar12 * local_f8.Dimensions.field0_0x0._s_0.X + iVar20;
      if (((iVar20 < 0) || (local_f8.Tiles.NumBits <= iVar20)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FVar15 = (ForElementType<unsigned_int>)&local_f8;
      if (local_f8.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_f8.Tiles.AllocatorInstance.SecondaryData;
      }
      iVar12 = iVar20;
      if (iVar20 < 0) {
        iVar12 = iVar20 + 0x1f;
      }
      iVar19 = iVar19 + 1;
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar12 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar20 & 0x1f);
      local_f8.bCachedVisibleRegionDirty = true;
    } while (iVar19 < 10);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 10);
  FImgMediaTileSelection::GetVisibleRegions(&local_f8,&local_1f0,(FImgMediaTileSelection *)0x0);
  pFVar8 = local_1f8;
  lVar6 = local_1f8->_padding_;
  if (local_1f0.ArrayNum == 2) {
    pcVar7 = *(code **)(lVar6 + 0x30);
    pwVar16 = L"FImgMediaTests: Mismatched tile regions.";
    ::FString::FString(&local_1c0,L"FImgMediaTests: Mismatched tile regions.");
    if (local_1f0.ArrayNum < 1) {
      local_208 = 0;
      pwVar16 = 
      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h";
      local_200 = (longlong)local_1f0.ArrayNum;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    if (((*(int *)local_1f0.AllocatorInstance.Data == 0) &&
        (*(int *)(local_1f0.AllocatorInstance.Data + 4) == 0)) &&
       ((*(int *)(local_1f0.AllocatorInstance.Data + 8) == 2 &&
        (*(int *)(local_1f0.AllocatorInstance.Data + 0xc) == 10)))) {
      uVar17 = 1;
    }
    else {
      uVar17 = (ulonglong)pwVar16 & 0xffffffffffffff00;
    }
    (*pcVar7)(pFVar8,uVar17,&local_1c0,0);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    pwVar16 = L"FImgMediaTests: Mismatched tile regions.";
    pcVar7 = *(code **)(pFVar8->_padding_ + 0x30);
    ::FString::FString(&local_1b0,L"FImgMediaTests: Mismatched tile regions.");
    if (local_1f0.ArrayNum < 2) {
      local_208 = 1;
      pwVar16 = 
      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h";
      local_200 = (longlong)local_1f0.ArrayNum;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    if (((*(int *)(local_1f0.AllocatorInstance.Data + 0x10) == 8) &&
        (*(int *)(local_1f0.AllocatorInstance.Data + 0x14) == 0)) &&
       ((*(int *)(local_1f0.AllocatorInstance.Data + 0x18) == 10 &&
        (*(int *)(local_1f0.AllocatorInstance.Data + 0x1c) == 10)))) {
      uVar17 = 1;
    }
    else {
      uVar17 = (ulonglong)pwVar16 & 0xffffffffffffff00;
    }
    (*pcVar7)(pFVar8,uVar17,&local_1b0,0);
  }
  else {
    ::FString::FString(&local_1a0,L"FImgMediaTests: Expected 2 regions.");
    (**(code **)(lVar6 + 0x28))(pFVar8,&local_1a0);
    local_1b0.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  if (local_f8.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.Tiles.AllocatorInstance.SecondaryData);
  }
  local_78.Tiles.NumBits = 100;
  local_78.Tiles.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.Tiles.MaxBits = 0x80;
  local_78.Tiles.AllocatorInstance.InlineData[0] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[1] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[2] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[3] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[4] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[5] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[6] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[7] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[8] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[9] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[10] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[0xb] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[0xc] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[0xd] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[0xe] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[0xf] = '\0';
  uVar4 = local_78.Tiles.AllocatorInstance.InlineData._8_8_;
  local_78.Tiles.AllocatorInstance.InlineData[0xc] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[0xd] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[0xe] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData[0xf] = '\0';
  local_78.Tiles.AllocatorInstance.InlineData._8_8_ = uVar4;
                    /* WARNING: Ignoring partial resolution of indirect */
  iVar19 = 0;
  local_78.Dimensions.field0_0x0 = ___xmm_00000000000000000000000a0000000a;
  local_78.CachedVisibleRegion.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_152fec508;
  local_78.CachedVisibleRegion.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_78.bCachedVisibleRegionDirty = true;
  iVar18 = 0;
  do {
    iVar20 = iVar18 + 1;
    iVar12 = iVar19;
    if (0 < iVar20) {
      do {
        local_78.bCachedVisibleRegionDirty = true;
        iVar13 = local_78.Dimensions.field0_0x0._s_0.Y + -1;
        if (iVar18 < local_78.Dimensions.field0_0x0._s_0.Y + -1) {
          iVar13 = iVar18;
        }
        iVar1 = local_78.Dimensions.field0_0x0._s_0.X + -1;
        if (iVar12 < local_78.Dimensions.field0_0x0._s_0.X + -1) {
          iVar1 = iVar12;
        }
        iVar1 = iVar13 * local_78.Dimensions.field0_0x0._s_0.X + iVar1;
        if (((iVar1 < 0) || (local_78.Tiles.NumBits <= iVar1)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        FVar15 = (ForElementType<unsigned_int>)&local_78;
        if (local_78.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_78.Tiles.AllocatorInstance.SecondaryData;
        }
        iVar13 = iVar1;
        if (iVar1 < 0) {
          iVar13 = iVar1 + 0x1f;
        }
        iVar12 = iVar12 + 1;
        puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar13 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar1 & 0x1f);
        local_78.bCachedVisibleRegionDirty = true;
      } while (iVar12 < iVar20);
    }
    local_78.bCachedVisibleRegionDirty = true;
    iVar18 = iVar20;
  } while (iVar20 < 10);
  FImgMediaTileSelection::GetVisibleRegions(&local_78,&local_180,(FImgMediaTileSelection *)0x0);
  pFVar8 = local_1f8;
  pcVar7 = *(code **)(local_1f8->_padding_ + 0x30);
  ::FString::FString(&local_190,L"FImgMediaTests: Expected 10 regions.");
  (*pcVar7)(pFVar8,local_180.ArrayNum == 10,&local_190,0);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  if (local_78.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.Tiles.AllocatorInstance.SecondaryData);
  }
  local_138.Tiles.NumBits = 0x10;
  local_138.Dimensions.field0_0x0._s_0 = (TIntPoint<int>_u_0)___xmm_00000000000000000000000400000004
  ;
  TVar9.field0_0x0 = (TIntPoint<int>_u_0)local_138.Dimensions;
  local_138.CachedVisibleRegion.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_152fec4f8;
  local_138.Tiles.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_138.Tiles.MaxBits = 0x80;
  local_138.CachedVisibleRegion.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_138.Tiles.AllocatorInstance.InlineData[0] = '\x01';
  local_138.Tiles.AllocatorInstance.InlineData[1] = '\0';
  local_138.Tiles.AllocatorInstance.InlineData[2] = '\0';
  local_138.Tiles.AllocatorInstance.InlineData[3] = '\0';
  local_138.Dimensions.field0_0x0._s_0.X = __xmm_00000000000000000000000400000004._0_4_;
  local_138.Dimensions.field0_0x0._s_0.Y = __xmm_00000000000000000000000400000004._4_4_;
  local_138.bCachedVisibleRegionDirty = true;
  iVar18 = local_138.Dimensions.field0_0x0._s_0.X + -1;
  iVar12 = local_138.Dimensions.field0_0x0._s_0.Y + -1;
  if (0 < local_138.Dimensions.field0_0x0._s_0.Y + -1) {
    iVar12 = iVar19;
  }
  if (2 < iVar18) {
    iVar18 = 2;
  }
  iVar18 = iVar12 * local_138.Dimensions.field0_0x0._s_0.X + iVar18;
  local_138.Dimensions = TVar9;
  if (((iVar18 < 0) || (0xf < iVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_138;
  if (local_138.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_138.Tiles.AllocatorInstance.SecondaryData;
  }
  puVar2 = (uint *)((longlong)FVar15 + (longlong)((int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
  iVar12 = local_138.Dimensions.field0_0x0._s_0.Y + -1;
  local_138.bCachedVisibleRegionDirty = true;
  iVar18 = local_138.Dimensions.field0_0x0._s_0.X + -1;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (1 < iVar18) {
    iVar18 = 1;
  }
  iVar18 = iVar12 * local_138.Dimensions.field0_0x0._s_0.X + iVar18;
  if (((iVar18 < 0) || (local_138.Tiles.NumBits <= iVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_138;
  if (local_138.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_138.Tiles.AllocatorInstance.SecondaryData;
  }
  puVar2 = (uint *)((longlong)FVar15 + (longlong)((int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
  iVar12 = local_138.Dimensions.field0_0x0._s_0.Y + -1;
  local_138.bCachedVisibleRegionDirty = true;
  iVar18 = local_138.Dimensions.field0_0x0._s_0.X + -1;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (3 < iVar18) {
    iVar18 = 3;
  }
  iVar18 = iVar12 * local_138.Dimensions.field0_0x0._s_0.X + iVar18;
  if (((iVar18 < 0) || (local_138.Tiles.NumBits <= iVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_138;
  if (local_138.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_138.Tiles.AllocatorInstance.SecondaryData;
  }
  puVar2 = (uint *)((longlong)FVar15 + (longlong)((int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
  iVar18 = local_138.Dimensions.field0_0x0._s_0.Y + -1;
  local_138.bCachedVisibleRegionDirty = true;
  if (2 < iVar18) {
    iVar18 = 2;
  }
  iVar12 = local_138.Dimensions.field0_0x0._s_0.X + -1;
  if (0 < local_138.Dimensions.field0_0x0._s_0.X + -1) {
    iVar12 = iVar19;
  }
  iVar12 = iVar18 * local_138.Dimensions.field0_0x0._s_0.X + iVar12;
  if (((iVar12 < 0) || (local_138.Tiles.NumBits <= iVar12)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_138;
  if (local_138.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_138.Tiles.AllocatorInstance.SecondaryData;
  }
  puVar2 = (uint *)((longlong)FVar15 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
  iVar19 = local_138.Dimensions.field0_0x0._s_0.Y + -1;
  local_138.bCachedVisibleRegionDirty = true;
  iVar18 = local_138.Dimensions.field0_0x0._s_0.X + -1;
  if (2 < iVar19) {
    iVar19 = 2;
  }
  if (2 < iVar18) {
    iVar18 = 2;
  }
  iVar18 = iVar19 * local_138.Dimensions.field0_0x0._s_0.X + iVar18;
  if (((iVar18 < 0) || (local_138.Tiles.NumBits <= iVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_138;
  if (local_138.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_138.Tiles.AllocatorInstance.SecondaryData;
  }
  puVar2 = (uint *)((longlong)FVar15 + (longlong)((int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
  iVar19 = local_138.Dimensions.field0_0x0._s_0.Y + -1;
  local_138.bCachedVisibleRegionDirty = true;
  iVar18 = local_138.Dimensions.field0_0x0._s_0.X + -1;
  if (3 < iVar19) {
    iVar19 = 3;
  }
  if (1 < iVar18) {
    iVar18 = 1;
  }
  iVar18 = iVar19 * local_138.Dimensions.field0_0x0._s_0.X + iVar18;
  if (((iVar18 < 0) || (local_138.Tiles.NumBits <= iVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_138;
  if (local_138.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_138.Tiles.AllocatorInstance.SecondaryData;
  }
  puVar2 = (uint *)((longlong)FVar15 + (longlong)((int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
  iVar19 = local_138.Dimensions.field0_0x0._s_0.Y + -1;
  local_138.bCachedVisibleRegionDirty = true;
  iVar18 = local_138.Dimensions.field0_0x0._s_0.X + -1;
  if (3 < iVar19) {
    iVar19 = 3;
  }
  if (3 < iVar18) {
    iVar18 = 3;
  }
  iVar18 = iVar19 * local_138.Dimensions.field0_0x0._s_0.X + iVar18;
  if (((iVar18 < 0) || (local_138.Tiles.NumBits <= iVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_138;
  if (local_138.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_138.Tiles.AllocatorInstance.SecondaryData;
  }
  puVar2 = (uint *)((longlong)FVar15 + (longlong)((int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
  local_138.bCachedVisibleRegionDirty = true;
  FImgMediaTileSelection::GetVisibleRegions(&local_138,&local_160,(FImgMediaTileSelection *)0x0);
  pcVar7 = *(code **)(pFVar8->_padding_ + 0x30);
  ::FString::FString(&local_170,L"FImgMediaTests: Expected 8 regions.");
  (*pcVar7)(pFVar8,local_160.ArrayNum == 8,&local_170,0);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (local_138.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_138.Tiles.AllocatorInstance.SecondaryData);
  }
  bVar10 = FAutomationTestBase::HasAnyErrors(pFVar8);
  return !bVar10;
}

// GetBeautifiedTestName @ 14ea319d0

FString * __thiscall
FImgMediaTests::GetBeautifiedTestName(FImgMediaTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Plugins.ImgMedia.TileSelection");
  return __return_storage_ptr__;
}

