// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487daaa0

EAutomationTestFlags __thiscall FSaveGameTest::GetTestFlags(FSaveGameTest *this)

{
  return EngineFilter|ClientContext;
}

// IsStressTest @ 1487daab0

bool __thiscall FSaveGameTest::IsStressTest(FSaveGameTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487daac0

uint __thiscall FSaveGameTest::GetRequiredDeviceNum(FSaveGameTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487daaf0

FString * __thiscall
FSaveGameTest::GetTestSourceFileName(FSaveGameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487dab20

int __thiscall FSaveGameTest::GetTestSourceFileLine(FSaveGameTest *this)

{
  return 0xab;
}

// GetTests @ 1487dab30

/* WARNING: Removing unreachable block (ram,0x0001487dac1d) */
/* WARNING: Removing unreachable block (ram,0x0001487dace8) */

void __thiscall
FSaveGameTest::GetTests
          (FSaveGameTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Game.Noninteractive Save");
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

// RunTest @ 1487dad10

bool __thiscall FSaveGameTest::RunTest(FSaveGameTest *this,FString *param_1)

{
  FName FVar1;
  int iVar2;
  char cVar3;
  wchar_t *pwVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IPlatformFeaturesModule *pIVar6;
  longlong *plVar7;
  bool bVar8;
  uint local_res18 [2];
  uint local_res20 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_198;
  FName local_188 [2];
  FMemoryReader local_178;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  local_res18[0] = 99;
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  local_188[0].ComparisonIndex.Value = 0;
  local_188[0].Number = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_c8.Bytes = &local_198;
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(uint **)(local_c8._padding_ + 8) < *(uint **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,local_res18);
    }
  }
  else {
    local_res18[0] = **(uint **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 4;
  }
  if (`public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
      ::__l2::StaticModule == (IPlatformFeaturesModule *)0x0) {
    pwVar4 = FWindowsPlatformMisc::GetPlatformFeaturesModuleName();
    if (pwVar4 == (wchar_t *)0x0) {
      pIVar6 = ::operator_new(8);
      `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
      ::__l2::StaticModule = (IPlatformFeaturesModule *)0x0;
      if (pIVar6 != (IPlatformFeaturesModule *)0x0) {
        *pIVar6 = (IPlatformFeaturesModule)&___7IPlatformFeaturesModule__6B_;
        `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
        ::__l2::StaticModule = pIVar6;
      }
    }
    else {
      pFVar5 = ::FName::FName(local_188,pwVar4);
      FVar1 = *pFVar5;
      this_00 = FModuleManager::Get();
      `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
      ::__l2::StaticModule =
           (IPlatformFeaturesModule *)FModuleManager::LoadModuleChecked(this_00,FVar1);
    }
  }
  plVar7 = (longlong *)
           (**(code **)((longlong)
                        *`public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
                         ::__l2::StaticModule + 0x40))();
  cVar3 = (**(code **)(*plVar7 + 0x28))(plVar7,0,L"AutomationSaveTest",0,&local_198);
  if ((cVar3 != '\0') &&
     (cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,L"AutomationSaveTest"), cVar3 != '\0')) {
    iVar2 = local_198.ArrayMax;
    local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&local_198.AllocatorInstance,0,&local_198.ArrayMax);
    }
    cVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,0,L"AutomationSaveTest",0,&local_198);
    if (cVar3 != '\0') {
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      FArchiveState::FArchiveState((FArchiveState *)&local_178);
      local_178._padding_ = 0;
      local_178._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_178.Bytes = &local_198;
      local_178.LimitSize = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading((FArchiveState *)&local_178,true);
      (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
      if (*(uint **)(local_178._padding_ + 8) < *(uint **)local_178._padding_ + 1) {
        if ((local_178._padding_ & 0x10000U) == 0) {
          if (*(code **)(local_178._padding_ + 0x188) == FMemoryReader::Serialize) {
            FMemoryReader::Serialize(&local_178,local_res20,4);
          }
          else {
            (**(code **)(local_178._padding_ + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_178,local_res20);
        }
      }
      else {
        local_res20[0] = **(uint **)local_178._padding_;
        *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 4;
      }
      cVar3 = (**(code **)(*plVar7 + 0x38))(plVar7,0,L"AutomationSaveTest",0);
      if ((cVar3 == '\0') ||
         (cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,L"AutomationSaveTest",0), cVar3 != '\x01')) {
        bVar8 = local_res20[0] == local_res18[0];
        FArchive::~FArchive((FArchive *)&local_178);
      }
      else {
        bVar8 = false;
        FArchive::~FArchive((FArchive *)&local_178);
      }
      goto LAB_1487db04d;
    }
  }
  bVar8 = false;
LAB_1487db04d:
  FArchive::~FArchive((FArchive *)&local_c8);
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return bVar8;
}

// GetBeautifiedTestName @ 1487db090

FString * __thiscall
FSaveGameTest::GetBeautifiedTestName(FSaveGameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Game.Noninteractive Save");
  return __return_storage_ptr__;
}

