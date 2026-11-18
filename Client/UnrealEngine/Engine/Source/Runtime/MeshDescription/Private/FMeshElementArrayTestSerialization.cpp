// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 8

// GetTestFlags @ 143633350

EAutomationTestFlags __thiscall
FMeshElementArrayTestSerialization::GetTestFlags(FMeshElementArrayTestSerialization *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 143633360

bool __thiscall
FMeshElementArrayTestSerialization::IsStressTest(FMeshElementArrayTestSerialization *this)

{
  return false;
}

// GetRequiredDeviceNum @ 143633370

uint __thiscall
FMeshElementArrayTestSerialization::GetRequiredDeviceNum(FMeshElementArrayTestSerialization *this)

{
  return 1;
}

// GetTestSourceFileName @ 143633380

FString * __thiscall
FMeshElementArrayTestSerialization::GetTestSourceFileName
          (FMeshElementArrayTestSerialization *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\Tests\\MeshElementArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1436333b0

int __thiscall
FMeshElementArrayTestSerialization::GetTestSourceFileLine(FMeshElementArrayTestSerialization *this)

{
  return 0x2b;
}

// GetTests @ 1436333c0

/* WARNING: Removing unreachable block (ram,0x0001436334ad) */
/* WARNING: Removing unreachable block (ram,0x000143633578) */

void __thiscall
FMeshElementArrayTestSerialization::GetTests
          (FMeshElementArrayTestSerialization *this,
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
  
  ::FString::FString(&local_18,L"System.MeshDescription.MeshElementArray.Serialization");
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

// RunTest @ 1436335b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMeshElementArrayTestSerialization::RunTest
          (FMeshElementArrayTestSerialization *this,FString *param_1)

{
  uint *puVar1;
  code *pcVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  FAutomationTestBase *this_00;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStackY_378 [32];
  undefined1 local_328 [4];
  int local_324;
  ForAnyElementType local_320;
  undefined8 local_318;
  void *local_310;
  undefined8 local_308;
  void *local_300;
  undefined8 local_2f8;
  FScriptContainerElement *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  FAutomationTestBase *local_2d8;
  FSparseArrayAllocationInfo local_2d0;
  FArchiveState local_2b8;
  undefined8 local_228;
  void **local_220;
  undefined8 local_218;
  FArchiveState local_208;
  undefined8 local_178;
  void **local_170;
  undefined8 local_168;
  FArchiveState local_158;
  undefined8 local_c8;
  void **local_c0;
  undefined8 local_b8;
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> local_a8;
  undefined1 local_70 [32];
  undefined1 *local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_378;
  uVar13 = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.AllocationFlags._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_a8._48_8_ = _UNK_150631d98;
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318 = 0;
  uVar11 = uVar13;
  local_2d8 = (FAutomationTestBase *)this;
  do {
    if (local_a8.NumFreeIndices == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,1,(ForAnyElementType *)&local_a8,&local_a8.Data.ArrayNum,
                         &local_a8.Data.ArrayMax);
      TBitArray<FDefaultBitArrayAllocator>::Add(&local_a8.AllocationFlags,false);
    }
    else {
      iVar8 = local_a8.FirstFreeIndex;
      lVar16 = (longlong)local_a8.FirstFreeIndex;
      local_a8.NumFreeIndices = local_a8.NumFreeIndices + -1;
      local_a8.FirstFreeIndex = *(int *)(local_a8.Data.AllocatorInstance.Data + lVar16 * 8 + 4);
      if (local_a8.NumFreeIndices != 0) {
        *(undefined4 *)
         (local_a8.Data.AllocatorInstance.Data +
         (longlong)*(int *)(local_a8.Data.AllocatorInstance.Data + lVar16 * 8 + 4) * 8) = 0xffffffff
        ;
      }
    }
    TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::AllocateIndex(&local_a8,&local_2d0,iVar8);
    if (local_2d0.Pointer != (undefined4 *)0x0) {
      *(undefined4 *)local_2d0.Pointer = 0;
    }
    local_324 = local_2d0.Index;
    uVar15 = (uint)uVar11;
    *(uint *)(local_a8.Data.AllocatorInstance.Data + (longlong)local_2d0.Index * 8) = uVar15;
    if ((uVar15 != (int)(uVar11 / 3) * 3) || (0x1dff < uVar15)) {
      if ((local_320.Data <= (FScriptContainerElement *)&local_324) &&
         (((FScriptContainerElement *)&local_324 < local_320.Data + (longlong)local_318._4_4_ * 4 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      iVar8 = (int)local_318;
      if ((int)local_318 == local_318._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_320,(int *)((longlong)&local_318 + 4));
      }
      local_318 = CONCAT44(local_318._4_4_,iVar8 + 1);
      *(int *)(local_320.Data + (longlong)iVar8 * 4) = local_324;
    }
    uVar11 = (ulonglong)(uVar15 + 1);
  } while ((int)(uVar15 + 1) < 0x2800);
  iVar8 = (int)local_318;
  uVar11 = (ulonglong)(int)local_318;
  local_2f0 = local_320.Data + uVar11 * 4;
  FVar14.Data = local_320.Data;
  while( true ) {
    pFVar4 = local_2f0;
    if ((int)uVar11 != iVar8) {
      local_328[0] = 0;
      `TCheckedPointerIterator<`anonymous_namespace'::FTestID,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_328);
    }
    FVar5.Data = local_a8.Data.AllocatorInstance.Data;
    if (FVar14.Data == pFVar4) break;
    iVar17 = *(int *)FVar14.Data;
    bVar3 = (byte)iVar17 & 0x1f;
    uVar15 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    if (((iVar17 < 0) || (local_a8.AllocationFlags.NumBits <= iVar17)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
    if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    iVar9 = iVar17;
    if (iVar17 < 0) {
      iVar9 = iVar17 + 0x1f;
    }
    lVar16 = (longlong)(iVar9 >> 5) * 4;
    if (((*(uint *)(lVar16 + (longlong)FVar12) & uVar15) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (local_a8.NumFreeIndices != 0) {
      *(int *)(FVar5.Data + (longlong)local_a8.FirstFreeIndex * 8) = iVar17;
    }
    *(undefined4 *)(FVar5.Data + (longlong)iVar17 * 8) = 0xffffffff;
    iVar9 = -1;
    if (0 < local_a8.NumFreeIndices) {
      iVar9 = local_a8.FirstFreeIndex;
    }
    *(int *)(FVar5.Data + (longlong)iVar17 * 8 + 4) = iVar9;
    local_a8.NumFreeIndices = local_a8.NumFreeIndices + 1;
    local_a8.FirstFreeIndex = iVar17;
    if (((iVar17 < 0) || (local_a8.AllocationFlags.NumBits <= iVar17)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
    if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    puVar1 = (uint *)(lVar16 + (longlong)FVar12);
    *puVar1 = *puVar1 & ~uVar15;
    uVar11 = local_318 & 0xffffffff;
    FVar14.Data = FVar14.Data + 4;
  }
  local_310 = (void *)0x0;
  local_308 = 0;
  local_2b8._padding_ = 0;
  local_2b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_2e8 = 0;
  local_2b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_2b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_2b8._40_8_ = 0;
  local_2b8.ArSerializingDefaults = 0;
  local_2b8.ArPortFlags = 0;
  local_2b8.ArMaxSerializeSize = 0;
  local_2b8.ArUEVer.FileVersionUE4 = 0;
  local_2b8.ArUEVer.FileVersionUE5 = 0;
  local_2b8.ArLicenseeUEVer = 0;
  local_2b8.ArEngineVer.Major = 0;
  local_2b8.ArEngineVer.Minor = 0;
  local_2b8.ArEngineVer.Patch = 0;
  local_2b8.ArEngineVer._6_2_ = 0;
  local_2b8.ArEngineVer.Changelist = 0;
  local_2b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_2b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_2b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_2b8.SerializedProperty = (FProperty *)0x0;
  local_2b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_2b8.bCustomVersionsAreReset = false;
  local_2b8._129_7_ = 0;
  local_2b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_2b8);
  local_228 = 0;
  local_2b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_220 = &local_310;
  local_218 = 0;
  FArchiveState::SetIsSaving(&local_2b8,true);
  (**(code **)(local_2b8._padding_ + 0x108))(&local_2b8,0);
  local_2b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_2b8,(TMeshElementArrayBase<int> *)&local_a8);
  FArchive::~FArchive((FArchive *)&local_2b8);
  local_70._0_8_ = 0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  iStack_44 = _UNK_150631d94;
  iStack_40 = _UNK_150631d98;
  iStack_3c = _UNK_150631d9c;
  local_70._8_8_ = 0;
  local_158._padding_ = 0;
  local_158.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_50 = (undefined1 *)0x0;
  local_158.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_158.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_158.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_158._40_8_ = 0;
  local_158.ArSerializingDefaults = 0;
  local_158.ArPortFlags = 0;
  local_158.ArMaxSerializeSize = 0;
  local_158.ArUEVer.FileVersionUE4 = 0;
  local_158.ArUEVer.FileVersionUE5 = 0;
  local_158.ArLicenseeUEVer = 0;
  local_158.ArEngineVer.Major = 0;
  local_158.ArEngineVer.Minor = 0;
  local_158.ArEngineVer.Patch = 0;
  local_158.ArEngineVer._6_2_ = 0;
  local_158.ArEngineVer.Changelist = 0;
  local_158.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_158.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_158.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_158.SerializedProperty = (FProperty *)0x0;
  local_158.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_158.bCustomVersionsAreReset = false;
  local_158._129_7_ = 0;
  local_158.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_158);
  local_c8 = 0;
  local_158._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_c0 = &local_310;
  local_b8 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_158,true);
  (**(code **)(local_158._padding_ + 0x108))(&local_158,0);
  ::operator<<((FArchive *)&local_158,(TMeshElementArrayBase<int> *)local_70);
  FArchive::~FArchive((FArchive *)&local_158);
  local_300 = (void *)0x0;
  local_208._padding_ = 0;
  local_208.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_2f8 = 0;
  local_208.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_208.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2e0 = 0;
  local_208.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_208._40_8_ = 0;
  local_208.ArSerializingDefaults = 0;
  local_208.ArPortFlags = 0;
  local_208.ArMaxSerializeSize = 0;
  local_208.ArUEVer.FileVersionUE4 = 0;
  local_208.ArUEVer.FileVersionUE5 = 0;
  local_208.ArLicenseeUEVer = 0;
  local_208.ArEngineVer.Major = 0;
  local_208.ArEngineVer.Minor = 0;
  local_208.ArEngineVer.Patch = 0;
  local_208.ArEngineVer._6_2_ = 0;
  local_208.ArEngineVer.Changelist = 0;
  local_208.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_208.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_208.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_208.SerializedProperty = (FProperty *)0x0;
  local_208.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_208.bCustomVersionsAreReset = false;
  local_208._129_7_ = 0;
  local_208.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_208);
  local_178 = 0;
  local_208._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_170 = &local_300;
  local_168 = 0;
  FArchiveState::SetIsSaving(&local_208,true);
  (**(code **)(local_208._padding_ + 0x108))(&local_208,0);
  local_208._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_208,(TMeshElementArrayBase<int> *)local_70);
  FArchive::~FArchive((FArchive *)&local_208);
  this_00 = local_2d8;
  FAutomationTestBase::TestTrue
            (local_2d8,L"Byte arrays are the same length",(int)local_308 == (int)local_2f8);
  iVar8 = memcmp(local_310,local_300,(longlong)(int)local_308);
  FAutomationTestBase::TestTrue(this_00,L"Byte arrays are binary equivalent",iVar8 == 0);
  FAutomationTestBase::TestTrue
            (this_00,L"MeshElementArrays are the same number of valid elements",
             local_a8.Data.ArrayNum - local_a8.NumFreeIndices == local_70._8_4_ - iStack_3c);
  uVar15 = 1;
  uVar11 = uVar13;
  do {
    iVar8 = (int)uVar13;
    if (iVar8 < local_a8.Data.ArrayNum) {
      if ((local_a8.AllocationFlags.NumBits <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
      if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      iVar17 = 1;
      if ((*(uint *)((longlong)FVar12 + (uVar13 >> 5) * 4) & uVar15) == 0) goto LAB_143633c32;
    }
    else {
LAB_143633c32:
      iVar17 = 0;
    }
    if (iVar8 < (int)local_70._8_4_) {
      if ((local_48 <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      puVar10 = local_70 + 0x10;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      iVar9 = 1;
      if ((*(uint *)(puVar10 + (uVar13 >> 5) * 4) & uVar15) == 0) goto LAB_143633c90;
    }
    else {
LAB_143633c90:
      iVar9 = 0;
    }
    FAutomationTestBase::TestTrue
              (this_00,L"MeshElementArrays have the same validity",iVar17 == iVar9);
    if (iVar8 < local_a8.Data.ArrayNum) {
      if ((local_a8.AllocationFlags.NumBits <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
      if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      lVar16 = (uVar13 >> 5) * 4;
      if (((*(uint *)(lVar16 + (longlong)FVar12) & uVar15) != 0) && (iVar8 < (int)local_70._8_4_)) {
        if ((local_48 <= iVar8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        puVar10 = local_70 + 0x10;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if ((*(uint *)(puVar10 + lVar16) & uVar15) != 0) {
          FAutomationTestBase::TestTrue
                    (this_00,L"MeshElementArrays have the same element value",
                     *(int *)(local_a8.Data.AllocatorInstance.Data + uVar11) ==
                     *(int *)(local_70._0_8_ + uVar11));
        }
      }
    }
    uVar13 = (ulonglong)(iVar8 + 1U);
    uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
    uVar11 = uVar11 + 8;
    if (0x27ff < (int)(iVar8 + 1U)) {
      if (local_300 != (void *)0x0) {
        FMemory::Free(local_300);
      }
      TSparseArray<int,FDefaultSparseArrayAllocator>::
      ~TSparseArray<int,FDefaultSparseArrayAllocator>
                ((TSparseArray<int,FDefaultSparseArrayAllocator> *)local_70);
      if (local_310 != (void *)0x0) {
        FMemory::Free(local_310);
      }
      if (local_320.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data);
      }
      TSparseArray<int,FDefaultSparseArrayAllocator>::
      ~TSparseArray<int,FDefaultSparseArrayAllocator>
                ((TSparseArray<int,FDefaultSparseArrayAllocator> *)&local_a8);
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 143633e20

FString * __thiscall
FMeshElementArrayTestSerialization::GetBeautifiedTestName
          (FMeshElementArrayTestSerialization *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.MeshDescription.MeshElementArray.Serialization"
                    );
  return __return_storage_ptr__;
}

