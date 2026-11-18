// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1488735a0

EAutomationTestFlags __thiscall
FCommonCommandsExecCommandTest::GetTestFlags(FCommonCommandsExecCommandTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148873780

bool __thiscall FCommonCommandsExecCommandTest::IsStressTest(FCommonCommandsExecCommandTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1488737c0

uint __thiscall
FCommonCommandsExecCommandTest::GetRequiredDeviceNum(FCommonCommandsExecCommandTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1488737d0

FString * __thiscall
FCommonCommandsExecCommandTest::GetTestSourceFileName
          (FCommonCommandsExecCommandTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\ExecCommandsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148873800

int __thiscall
FCommonCommandsExecCommandTest::GetTestSourceFileLine(FCommonCommandsExecCommandTest *this)

{
  return 0xd9;
}

// GetTests @ 148873810

/* WARNING: Removing unreachable block (ram,0x0001488738fd) */
/* WARNING: Removing unreachable block (ram,0x0001488739c8) */

void __thiscall
FCommonCommandsExecCommandTest::GetTests
          (FCommonCommandsExecCommandTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.ExecCommands.Common Commands");
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

// RunTest @ 1488739f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FCommonCommandsExecCommandTest::RunTest(FCommonCommandsExecCommandTest *this,FString *param_1)

{
  code *pcVar1;
  UEngine *pUVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_288 [32];
  FScriptContainerElement local_238;
  FIdentityFunctor local_237 [7];
  ForAnyElementType local_230;
  undefined8 local_228;
  ForAnyElementType local_220;
  undefined8 local_218;
  TArray<FString,TSizedDefaultAllocator<32>_> local_210;
  undefined8 local_200;
  FString local_1f8;
  FString local_1e8;
  FArchiveState local_1d8;
  undefined8 local_148;
  ForAnyElementType *local_140;
  undefined8 local_138;
  FOutputDeviceMemory local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (GEngine == (UEngine *)0x0) {
    bVar3 = false;
  }
  else {
    local_230.Data = (FScriptContainerElement *)0x0;
    local_228 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,5,&local_230,0,(int *)((longlong)&local_228 + 4));
    iVar5 = (uint)local_228;
    if ((uint)local_228 == local_228._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_230,(int *)((longlong)&local_228 + 4));
    }
    local_228._0_4_ = iVar5 + 1;
    ::FString::FString((FString *)(local_230.Data + (longlong)iVar5 * 0x10),L"recompileshaders");
    if ((uint)local_228 == local_228._4_4_) {
      local_228._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_230,(int *)((longlong)&local_228 + 4));
    }
    lVar10 = (longlong)(int)(uint)local_228;
    local_228._0_4_ = (uint)local_228 + 1;
    ::FString::FString((FString *)(local_230.Data + lVar10 * 0x10),L"stat");
    pUVar2 = GEngine;
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar8->_padding_)) {
      if ((uint)local_228 == local_228._4_4_) {
        local_228._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_230,(int *)((longlong)&local_228 + 4));
      }
      lVar10 = (longlong)(int)(uint)local_228;
      local_228._0_4_ = (uint)local_228 + 1;
      ::FString::FString((FString *)(local_230.Data + lVar10 * 0x10),L"quit");
    }
    FOutputDeviceMemory::FOutputDeviceMemory(&local_128,0x40000,0x200000,true);
    bVar3 = (bool)(**(code **)(GEngine->_padding_ + 8))
                            (&GEngine->_padding_,0,L"DumpConsoleCommands",&local_128);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"DumpConsoleCommands failed to execute.",bVar3);
    local_220.Data = (FScriptContainerElement *)0x0;
    local_218 = 0;
    local_1d8._padding_ = 0;
    local_1d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_200 = 0;
    local_1d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_1d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_1d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_1d8._40_8_ = 0;
    local_1d8.ArSerializingDefaults = 0;
    local_1d8.ArPortFlags = 0;
    local_1d8.ArMaxSerializeSize = 0;
    local_1d8.ArUEVer.FileVersionUE4 = 0;
    local_1d8.ArUEVer.FileVersionUE5 = 0;
    local_1d8.ArLicenseeUEVer = 0;
    local_1d8.ArEngineVer.Major = 0;
    local_1d8.ArEngineVer.Minor = 0;
    local_1d8.ArEngineVer.Patch = 0;
    local_1d8.ArEngineVer._6_2_ = 0;
    local_1d8.ArEngineVer.Changelist = 0;
    local_1d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_1d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_1d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_1d8.SerializedProperty = (FProperty *)0x0;
    local_1d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_1d8.bCustomVersionsAreReset = false;
    local_1d8._129_7_ = 0;
    local_1d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_1d8);
    local_148 = 0;
    local_1d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_140 = &local_220;
    local_138 = 0;
    FArchiveState::SetIsSaving(&local_1d8,true);
    (**(code **)(local_1d8._padding_ + 0x108))(&local_1d8,0);
    local_1d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FOutputDeviceMemory::Dump(&local_128,(FArchive *)&local_1d8);
    uVar6 = 0;
    if ((int)((int)local_218 - 1U) < (int)local_218) {
      uVar6 = ~((int)local_218 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (local_220.Data[(int)local_218 + -1] != (FScriptContainerElement)0x0) {
      local_238 = (FScriptContainerElement)0x0;
      iVar5 = (int)local_218;
      if ((local_220.Data <= &local_238) && (&local_238 < local_220.Data + local_218._4_4_)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        iVar5 = (int)local_218;
      }
      if (iVar5 == local_218._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_220,(int *)((longlong)&local_218 + 4));
      }
      local_218 = CONCAT44(local_218._4_4_,iVar5 + 1);
      local_220.Data[iVar5] = local_238;
    }
    ::FString::FString(&local_1e8,(char *)local_220.Data);
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    ::FString::ParseIntoArrayLines(&local_1e8,&local_210,true);
    uVar6 = (uint)local_228;
    uVar9 = (ulonglong)(int)(uint)local_228;
    pFVar15 = local_230.Data + uVar9 * 0x10;
    FVar14.Data = local_230.Data;
    while( true ) {
      if ((uint)uVar9 != uVar6) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_237);
      }
      if (FVar14.Data == pFVar15) break;
      iVar5 = AlgoImpl::LowerBoundInternal<FString_const_,int,FString,FIdentityFunctor,TLess<void>_>
                        ((FString *)local_210.AllocatorInstance.Data,local_210.ArrayNum,
                         (FString *)FVar14.Data,local_237[0],(TLess<void>)local_237[0]);
      if (iVar5 < local_210.ArrayNum) {
        if (*(int *)(local_210.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)(local_210.AllocatorInstance.Data + (longlong)iVar5 * 0x10);
        }
        if (*(int *)(FVar14.Data + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)FVar14.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar11,pwVar12);
        if (iVar7 < 0) goto LAB_148873e18;
      }
      else {
LAB_148873e18:
        iVar5 = -1;
      }
      ::FString::PrintfImpl(&local_1f8,L"%s failed to execute.");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_1f8.Data.ArrayNum != 0) {
        FVar13.Data = local_1f8.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar5 != -1);
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      uVar9 = (ulonglong)(uint)local_228;
      FVar14.Data = FVar14.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_210.AllocatorInstance.Data,local_210.ArrayNum);
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1d8);
    if (local_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data);
    }
    FOutputDeviceMemory::~FOutputDeviceMemory(&local_128);
    DestructItems<FString,int>((FString *)local_230.Data,(uint)local_228);
    if (local_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data);
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetBeautifiedTestName @ 148873f40

FString * __thiscall
FCommonCommandsExecCommandTest::GetBeautifiedTestName
          (FCommonCommandsExecCommandTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.ExecCommands.Common Commands");
  return __return_storage_ptr__;
}

