// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 8

// GetTestFlags @ 142373640

EAutomationTestFlags __thiscall FBoneWeightTestBasic::GetTestFlags(FBoneWeightTestBasic *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 142373650

bool __thiscall FBoneWeightTestBasic::IsStressTest(FBoneWeightTestBasic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142373660

uint __thiscall FBoneWeightTestBasic::GetRequiredDeviceNum(FBoneWeightTestBasic *this)

{
  return 1;
}

// GetTestSourceFileName @ 142373670

FString * __thiscall
FBoneWeightTestBasic::GetTestSourceFileName
          (FBoneWeightTestBasic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\Tests\\BoneWeightsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1423736a0

int __thiscall FBoneWeightTestBasic::GetTestSourceFileLine(FBoneWeightTestBasic *this)

{
  return 0xc;
}

// GetTests @ 1423736b0

/* WARNING: Removing unreachable block (ram,0x00014237379d) */
/* WARNING: Removing unreachable block (ram,0x000142373868) */

void __thiscall
FBoneWeightTestBasic::GetTests
          (FBoneWeightTestBasic *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AnimationCore.BoneWeight.Basic");
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

// RunTest @ 142373890

bool __thiscall FBoneWeightTestBasic::RunTest(FBoneWeightTestBasic *this,FString *param_1)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  bool bVar4;
  longlong lVar5;
  FBoneWeight local_res18 [2];
  FBoneWeight local_res20 [2];
  FArchiveState local_1c8;
  undefined8 local_138;
  void **local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  FArchiveState local_108;
  void *local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"FBoneWeight index (uint8)",2,2);
  fVar1 = __real_38d1b717;
  if ((((((bVar4) &&
         (bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,L"FBoneWeight min value (uint8)",0.0,0.0,
                             __real_38d1b717), bVar4)) &&
        (bVar4 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,L"FBoneWeight mid value (uint8)",
                            __real_3efefeff,__real_3efefeff,fVar1), bVar4)) &&
       (((bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,L"FBoneWeight mid raw value (uint8)",0x7f7f
                             ,0x7f7f), fVar2 = __real_3f800000, bVar4 &&
         (bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,L"FBoneWeight max value (uint8)",
                             __real_3f800000,__real_3f800000,fVar1), bVar4)) &&
        ((bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,L"FBoneWeight index (uint8)",2,2), bVar4 &&
         ((bVar4 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,L"FBoneWeight min value (uint16)",0.0,0.0,
                              fVar1), bVar4 &&
          (bVar4 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,L"FBoneWeight mid value (uint16)",
                              __real_3effff00,__real_3effff00,fVar1), bVar4)))))))) &&
      (bVar4 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,L"FBoneWeight mid raw value (uint16)",0x7fff,
                          0x7fff), bVar4)) &&
     (((bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,L"FBoneWeight max value (uint16)",fVar2,fVar2
                           ,fVar1), bVar4 &&
       (bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,L"FBoneWeight copied index",2,2), bVar4)) &&
      (bVar4 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,L"FBoneWeight copied value",0x8000,0x8000),
      bVar4)))) {
    local_1c8._padding_ = 0;
    local_1c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_1c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_1c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_1c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_1c8._40_8_ = 0;
    local_1c8.ArSerializingDefaults = 0;
    local_1c8.ArPortFlags = 0;
    local_1c8.ArMaxSerializeSize = 0;
    local_1c8.ArUEVer.FileVersionUE4 = 0;
    local_1c8.ArUEVer.FileVersionUE5 = 0;
    local_1c8.ArLicenseeUEVer = 0;
    local_1c8.ArEngineVer.Major = 0;
    local_1c8.ArEngineVer.Minor = 0;
    local_1c8.ArEngineVer.Patch = 0;
    local_1c8.ArEngineVer._6_2_ = 0;
    local_1c8.ArEngineVer.Changelist = 0;
    local_1c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_1c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_1c8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_1c8.SerializedProperty = (FProperty *)0x0;
    local_1c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_1c8.bCustomVersionsAreReset = false;
    local_1c8._129_7_ = 0;
    local_1c8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_1c8);
    local_138 = 0;
    local_1c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_130 = &local_120;
    local_128 = 0;
    FArchiveState::SetIsSaving(&local_1c8,true);
    (**(code **)(local_1c8._padding_ + 0x108))(&local_1c8,0);
    local_120 = (void *)0x0;
    local_1c8._padding_ = (longlong)&___7FBufferArchive__6B_;
    local_118 = 0;
    local_res18[0].BoneIndex = 2;
    local_res18[0].RawWeight = 0x8000;
    ::operator<<((FArchive *)&local_1c8,local_res18);
    pvVar3 = local_120;
    lVar5 = (longlong)(int)local_118;
    FArchiveState::FArchiveState(&local_108);
    local_78 = pvVar3;
    local_108._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_70 = 0;
    local_60 = '\0';
    local_68 = lVar5;
    FArchiveState::SetIsLoading(&local_108,true);
    (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
    local_108._padding_ = (longlong)&___7FBufferReader__6B_;
    ::operator<<((FArchive *)&local_108,local_res20);
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"FBoneWeight::Archive[Index]",
                       (uint)local_res20[0].BoneIndex,2);
    if ((bVar4) &&
       (bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,L"FBoneWeight::Archive[Weight]",
                           (uint)local_res20[0].RawWeight,0x8000), bVar4)) {
      local_108._padding_ = (longlong)&___7FBufferReader__6B_;
      if (local_60 != '\0') {
        FMemory::Free(local_78);
        local_78 = (void *)0x0;
      }
      local_108._padding_ = (longlong)&___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)&local_108);
      if (local_120 != (void *)0x0) {
        FMemory::Free(local_120);
      }
      FArchive::~FArchive((FArchive *)&local_1c8);
      bVar4 = true;
    }
    else {
      local_108._padding_ = (longlong)&___7FBufferReader__6B_;
      if (local_60 != '\0') {
        FMemory::Free(local_78);
        local_78 = (void *)0x0;
      }
      local_108._padding_ = (longlong)&___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)&local_108);
      if (local_120 != (void *)0x0) {
        FMemory::Free(local_120);
      }
      FArchive::~FArchive((FArchive *)&local_1c8);
      bVar4 = false;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// GetBeautifiedTestName @ 142373cb0

FString * __thiscall
FBoneWeightTestBasic::GetBeautifiedTestName
          (FBoneWeightTestBasic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AnimationCore.BoneWeight.Basic");
  return __return_storage_ptr__;
}

