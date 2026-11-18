// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 14160ac80

EAutomationTestFlags __thiscall FMMapFileReadTest::GetTestFlags(FMMapFileReadTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14160ac90

bool __thiscall FMMapFileReadTest::IsStressTest(FMMapFileReadTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14160aca0

uint __thiscall FMMapFileReadTest::GetRequiredDeviceNum(FMMapFileReadTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14160acb0

FString * __thiscall
FMMapFileReadTest::GetTestSourceFileName(FMMapFileReadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFileTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14160ace0

int __thiscall FMMapFileReadTest::GetTestSourceFileLine(FMMapFileReadTest *this)

{
  return 0x14;
}

// GetTests @ 14160acf0

/* WARNING: Removing unreachable block (ram,0x00014160addd) */
/* WARNING: Removing unreachable block (ram,0x00014160aea8) */

void __thiscall
FMMapFileReadTest::GetTests
          (FMMapFileReadTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Files.MMapFileRead");
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

// RunTest @ 14160aed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014160b127) */
/* WARNING: Removing unreachable block (ram,0x00014160b24b) */

bool __thiscall FMMapFileReadTest::RunTest(FMMapFileReadTest *this,FString *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  FPlatformFileManager *pFVar9;
  IPlatformFile *pIVar10;
  longlong *plVar11;
  IMappedFileRegion *this_00;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  FScriptContainerElement *local_e8;
  FString local_e0;
  undefined8 local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FFileSystemError local_58;
  byte local_40;
  char local_38 [8];
  char acStack_30 [8];
  char local_28 [2];
  char local_26;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_118;
  FVar15.Data = (FScriptContainerElement *)0x0;
  FPaths::AutomationTransientDir(&local_88);
  ::FString::FString(&local_98,L"MMap_FileToRead");
  ::FString::FString(&local_a8,L".txt");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar13.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar18.Data = local_98.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar12.Data = local_88.Data.AllocatorInstance.Data;
  }
  pFVar7 = FPaths::CreateTempFilename
                     (&local_78,(wchar_t *)FVar12.Data,(wchar_t *)FVar18.Data,(wchar_t *)FVar13.Data
                     );
  FPaths::ConvertRelativePathToFull(&local_e0,pFVar7);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FPaths::GetPath(&local_b8,&local_e0);
  pIVar8 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar13.Data = local_b8.Data.AllocatorInstance.Data;
  }
  bVar5 = (bool)(**(code **)((longlong)*pIVar8 + 0x60))(pIVar8,FVar13.Data,1);
  ::FString::FString(&local_c8,"Making directory tree");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar13.Data = local_c8.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar5);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar17 = FVar15.Data;
  if (!bVar5) goto LAB_14160b37b;
  local_28[0] = s_Temp_file_to_read_[0x10];
  local_28[1] = s_Temp_file_to_read_[0x11];
  local_26 = s_Temp_file_to_read_[0x12];
  local_38[0] = s_Temp_file_to_read_[0];
  local_38[1] = s_Temp_file_to_read_[1];
  local_38[2] = s_Temp_file_to_read_[2];
  local_38[3] = s_Temp_file_to_read_[3];
  local_38[4] = s_Temp_file_to_read_[4];
  local_38[5] = s_Temp_file_to_read_[5];
  local_38[6] = s_Temp_file_to_read_[6];
  local_38[7] = s_Temp_file_to_read_[7];
  acStack_30[0] = s_Temp_file_to_read_[8];
  acStack_30[1] = s_Temp_file_to_read_[9];
  acStack_30[2] = s_Temp_file_to_read_[10];
  acStack_30[3] = s_Temp_file_to_read_[0xb];
  acStack_30[4] = s_Temp_file_to_read_[0xc];
  acStack_30[5] = s_Temp_file_to_read_[0xd];
  acStack_30[6] = s_Temp_file_to_read_[0xe];
  acStack_30[7] = s_Temp_file_to_read_[0xf];
  pFVar9 = FPlatformFileManager::Get();
  pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar13.Data = local_e0.Data.AllocatorInstance.Data;
  }
  plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x110))(pIVar10,FVar13.Data,0,0);
  if (plVar11 == (longlong *)0x0) goto LAB_14160b37b;
  (**(code **)(*plVar11 + 0x30))(plVar11,local_38,0x13);
  (**(code **)(*plVar11 + 0x38))(plVar11,0);
  (**(code **)*plVar11)(plVar11,1);
  pFVar9 = FPlatformFileManager::Get();
  pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
  local_f8 = 0;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar13.Data = local_e0.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar10 + 0x1b0))(pIVar10,&local_58,FVar13.Data,0);
  uVar14 = (ulonglong)local_40;
  if ((2 < uVar14) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
        ::__l2::bIsSameType)[uVar14] == '\0') {
    if ((local_40 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FVar15.Data = local_58.ErrorMessage.Data.AllocatorInstance.Data;
    local_e8 = local_58.ErrorMessage.Data.AllocatorInstance.Data;
    local_58.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((2 < local_40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40])(&local_58);
    local_40 = 2;
    bVar4 = local_40;
    local_e8 = (FScriptContainerElement *)0x0;
    pFVar17 = local_e8;
    local_40 = 2;
    local_e8 = (FScriptContainerElement *)0x0;
    if (FVar15.Data == (FScriptContainerElement *)0x0) goto LAB_14160b131;
    this_00 = (IMappedFileRegion *)
              (**(code **)(*(longlong *)FVar15.Data + 8))(FVar15.Data,0,0x7fffffffffffffff,0);
    IMappedFileRegion::GetMappedSize(this_00);
    IMappedFileRegion::GetMappedPtr(this_00);
    if (this_00 != (IMappedFileRegion *)0x0) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
LAB_14160b31c:
    pFVar17 = (FScriptContainerElement *)&DAT_00000001;
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)FVar15.Data)(FVar15.Data,1);
    }
  }
  else {
    local_d0 = 0;
    pFVar17 = local_e8;
    bVar4 = local_40;
LAB_14160b131:
    local_40 = bVar4;
    local_e8 = pFVar17;
    uVar14 = (ulonglong)local_40;
    if ((2 < uVar14) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType)[uVar14] != '\0') {
      if ((local_40 != 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar7 = FFileSystemError::GetMessage(&local_58,&local_68);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pwVar19 = L"OpenMappedEx is not implemented on this platform";
      do {
        while( true ) {
          wVar1 = *(wchar_t *)
                   ((FScriptContainerElement *)((longlong)pwVar20 + -0x150642800) +
                   (longlong)pwVar19);
          wVar2 = *pwVar19;
          pwVar19 = pwVar19 + 1;
          if (wVar1 != wVar2) break;
          iVar16 = 0;
          if (wVar1 == L'\0') goto LAB_14160b30a;
        }
        if (((wVar1 | wVar2) & 0xff80U) != 0) {
          iVar16 = (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
          break;
        }
        iVar16 = (uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2];
      } while ((uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2] == 0);
LAB_14160b30a:
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (iVar16 == 0) goto LAB_14160b31c;
    }
    pFVar17 = (FScriptContainerElement *)0x0;
  }
  uVar14 = (ulonglong)local_40;
  if ((2 < local_40) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar14])(&local_58);
LAB_14160b37b:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return (bool)(char)pFVar17;
}

// GetBeautifiedTestName @ 14160b400

FString * __thiscall
FMMapFileReadTest::GetBeautifiedTestName(FMMapFileReadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Files.MMapFileRead");
  return __return_storage_ptr__;
}

