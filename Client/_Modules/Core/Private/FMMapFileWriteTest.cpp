// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 14160b470

EAutomationTestFlags __thiscall FMMapFileWriteTest::GetTestFlags(FMMapFileWriteTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14160b480

bool __thiscall FMMapFileWriteTest::IsStressTest(FMMapFileWriteTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14160b490

uint __thiscall FMMapFileWriteTest::GetRequiredDeviceNum(FMMapFileWriteTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14160b4a0

FString * __thiscall
FMMapFileWriteTest::GetTestSourceFileName(FMMapFileWriteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFileTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14160b4d0

int __thiscall FMMapFileWriteTest::GetTestSourceFileLine(FMMapFileWriteTest *this)

{
  return 0x4d;
}

// GetTests @ 14160b4e0

/* WARNING: Removing unreachable block (ram,0x00014160b5cd) */
/* WARNING: Removing unreachable block (ram,0x00014160b698) */

void __thiscall
FMMapFileWriteTest::GetTests
          (FMMapFileWriteTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Files.MMapFileWrite");
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

// RunTest @ 14160b6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014160b888) */
/* WARNING: Removing unreachable block (ram,0x00014160b9ac) */

bool __thiscall FMMapFileWriteTest::RunTest(FMMapFileWriteTest *this,FString *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar9;
  IMappedFileRegion *this_01;
  uchar *puVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  FScriptContainerElement *local_f8;
  FString local_f0;
  undefined8 local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78 [8];
  FString local_70;
  FString local_60;
  FFileSystemError local_50;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_128;
  FVar14.Data = (FScriptContainerElement *)0x0;
  FPaths::AutomationTransientDir(&local_98);
  ::FString::FString(&local_a8,L"MMap_FileToWrite");
  ::FString::FString(&local_b8,L".txt");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar12.Data = local_b8.Data.AllocatorInstance.Data;
  }
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar17.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar11.Data = local_98.Data.AllocatorInstance.Data;
  }
  pFVar7 = FPaths::CreateTempFilename
                     (&local_70,(wchar_t *)FVar11.Data,(wchar_t *)FVar17.Data,(wchar_t *)FVar12.Data
                     );
  FPaths::ConvertRelativePathToFull(&local_f0,pFVar7);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  FPaths::GetPath(&local_c8,&local_f0);
  pIVar8 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar12.Data = local_c8.Data.AllocatorInstance.Data;
  }
  bVar5 = (bool)(**(code **)((longlong)*pIVar8 + 0x60))(pIVar8,FVar12.Data,1);
  ::FString::FString(&local_d8,"Making directory tree");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar12.Data = local_d8.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar5);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pFVar16 = FVar14.Data;
  if (!bVar5) goto LAB_14160bb6e;
  this_00 = FPlatformFileManager::Get();
  pIVar9 = FPlatformFileManager::GetPlatformFile(this_00);
  local_108 = 0x400;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar12.Data = local_f0.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar9 + 0x1b0))(pIVar9,&local_50,FVar12.Data,1);
  uVar13 = (ulonglong)local_38;
  if ((2 < uVar13) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
        ::__l2::bIsSameType)[uVar13] == '\0') {
    if ((local_38 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FVar14.Data = local_50.ErrorMessage.Data.AllocatorInstance.Data;
    local_f8 = local_50.ErrorMessage.Data.AllocatorInstance.Data;
    local_50.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((2 < local_38) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38])(&local_50);
    local_38 = 2;
    bVar4 = local_38;
    local_f8 = (FScriptContainerElement *)0x0;
    pFVar16 = local_f8;
    local_38 = 2;
    local_f8 = (FScriptContainerElement *)0x0;
    if (FVar14.Data == (FScriptContainerElement *)0x0) goto LAB_14160b892;
    this_01 = (IMappedFileRegion *)
              (**(code **)(*(longlong *)FVar14.Data + 8))(FVar14.Data,0,0x400,2);
    local_78[0] = s_Temp_file_to_write_[0x10];
    local_78[1] = s_Temp_file_to_write_[0x11];
    local_78[2] = s_Temp_file_to_write_[0x12];
    local_78[3] = s_Temp_file_to_write_[0x13];
    local_88._0_1_ = s_Temp_file_to_write_[0];
    local_88._1_1_ = s_Temp_file_to_write_[1];
    local_88._2_1_ = s_Temp_file_to_write_[2];
    local_88._3_1_ = s_Temp_file_to_write_[3];
    uStack_84._0_1_ = s_Temp_file_to_write_[4];
    uStack_84._1_1_ = s_Temp_file_to_write_[5];
    uStack_84._2_1_ = s_Temp_file_to_write_[6];
    uStack_84._3_1_ = s_Temp_file_to_write_[7];
    uStack_80._0_1_ = s_Temp_file_to_write_[8];
    uStack_80._1_1_ = s_Temp_file_to_write_[9];
    uStack_80._2_1_ = s_Temp_file_to_write_[10];
    uStack_80._3_1_ = s_Temp_file_to_write_[0xb];
    uStack_7c._0_1_ = s_Temp_file_to_write_[0xc];
    uStack_7c._1_1_ = s_Temp_file_to_write_[0xd];
    uStack_7c._2_1_ = s_Temp_file_to_write_[0xe];
    uStack_7c._3_1_ = s_Temp_file_to_write_[0xf];
    puVar10 = IMappedFileRegion::GetMappedPtr(this_01);
    if (((this_01->MappedPtr == (uchar *)0x0) || (this_01->MappedSize == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((this_01->MappedSize < 0x14) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(FileContent) <= MapSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFileTest.cpp"
                           ,0x68,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    *(undefined4 *)puVar10 = local_88;
    *(undefined4 *)(puVar10 + 4) = uStack_84;
    *(undefined4 *)(puVar10 + 8) = uStack_80;
    *(undefined4 *)(puVar10 + 0xc) = uStack_7c;
    *(undefined4 *)(puVar10 + 0x10) = local_78._0_4_;
    (**(code **)(*(longlong *)FVar14.Data + 0x10))(FVar14.Data);
    (**(code **)this_01->_padding_)(this_01,1);
LAB_14160bb0f:
    pFVar16 = (FScriptContainerElement *)&DAT_00000001;
    if (FVar14.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)FVar14.Data)(FVar14.Data,1);
    }
  }
  else {
    local_e0 = 0;
    pFVar16 = local_f8;
    bVar4 = local_38;
LAB_14160b892:
    local_38 = bVar4;
    local_f8 = pFVar16;
    uVar13 = (ulonglong)local_38;
    if ((2 < uVar13) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType)[uVar13] != '\0') {
      if ((local_38 != 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar7 = FFileSystemError::GetMessage(&local_50,&local_60);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pwVar18 = L"OpenMappedEx is not implemented on this platform";
      do {
        while( true ) {
          wVar1 = *(wchar_t *)
                   ((FScriptContainerElement *)((longlong)pwVar19 + -0x150642800) +
                   (longlong)pwVar18);
          wVar2 = *pwVar18;
          pwVar18 = pwVar18 + 1;
          if (wVar1 != wVar2) break;
          iVar15 = 0;
          if (wVar1 == L'\0') goto LAB_14160bafd;
        }
        if (((wVar1 | wVar2) & 0xff80U) != 0) {
          iVar15 = (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
          break;
        }
        iVar15 = (uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2];
      } while ((uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2] == 0);
LAB_14160bafd:
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (iVar15 == 0) goto LAB_14160bb0f;
    }
    pFVar16 = (FScriptContainerElement *)0x0;
  }
  uVar13 = (ulonglong)local_38;
  if ((2 < local_38) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar13])(&local_50);
LAB_14160bb6e:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return (bool)(char)pFVar16;
}

// GetBeautifiedTestName @ 14160bbf0

FString * __thiscall
FMMapFileWriteTest::GetBeautifiedTestName(FMMapFileWriteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Files.MMapFileWrite");
  return __return_storage_ptr__;
}

