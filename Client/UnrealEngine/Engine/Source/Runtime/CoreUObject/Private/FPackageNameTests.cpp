// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// GetTestFlags @ 141e644d0

EAutomationTestFlags __thiscall FPackageNameTests::GetTestFlags(FPackageNameTests *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e644e0

bool __thiscall FPackageNameTests::IsStressTest(FPackageNameTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e644f0

uint __thiscall FPackageNameTests::GetRequiredDeviceNum(FPackageNameTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e64500

FString * __thiscall
FPackageNameTests::GetTestSourceFileName(FPackageNameTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e64530

int __thiscall FPackageNameTests::GetTestSourceFileLine(FPackageNameTests *this)

{
  return 0xd81;
}

// GetTests @ 141e64540

/* WARNING: Removing unreachable block (ram,0x000141e6462d) */
/* WARNING: Removing unreachable block (ram,0x000141e646f8) */

void __thiscall
FPackageNameTests::GetTests
          (FPackageNameTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.PackageNames");
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

// RunTest @ 141e64720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPackageNameTests::RunTest(FPackageNameTests *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_228 [32];
  TStringView<wchar_t> local_1d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1c8;
  TStringView<wchar_t> local_1b8;
  undefined1 local_1a8 [8];
  undefined8 uStack_1a0;
  TStringView<wchar_t> local_198;
  undefined1 local_188 [16];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_178;
  TStringView<wchar_t> local_168;
  undefined1 local_158 [16];
  TStringView<wchar_t> local_148;
  FPackageNameTests *local_138 [2];
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_c0 = local_c8;
  ::FString::FString((FString *)local_158,L"/Game");
  local_1d8.DataPtr = (wchar_t *)local_158._0_8_;
  local_1d8.Size = local_158._8_4_ + -1;
  if (local_158._8_4_ == 0) {
    local_1d8.Size = 0;
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_158._0_8_;
  local_1c8.ArrayNum = local_1d8.Size;
  local_1c8.ArrayMax = local_1d8._12_4_;
  bVar2 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)&local_1c8);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_1d8,
               L"Path \'%s\' failed FPackageName::IsLocalizedPackage (got \'%d\', expected \'%d\')."
              );
    (*pcVar1)(this,&local_1d8,0);
    if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  ::FString::FString((FString *)local_158,L"/Game/MyAsset");
  local_1d8.DataPtr = (wchar_t *)local_158._0_8_;
  local_1c8.ArrayNum = local_158._8_4_ + -1;
  if (local_158._8_4_ == 0) {
    local_1c8.ArrayNum = 0;
  }
  local_1d8.Size = local_1c8.ArrayNum;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_158._0_8_;
  local_1c8.ArrayMax = local_1d8._12_4_;
  bVar2 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)&local_1c8);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_1d8,
               L"Path \'%s\' failed FPackageName::IsLocalizedPackage (got \'%d\', expected \'%d\')."
              );
    (*pcVar1)(this,&local_1d8,0);
    if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  ::FString::FString((FString *)local_158,L"/Game/L10N");
  local_1d8.DataPtr = (wchar_t *)local_158._0_8_;
  local_1c8.ArrayNum = local_158._8_4_ + -1;
  if (local_158._8_4_ == 0) {
    local_1c8.ArrayNum = 0;
  }
  local_1d8.Size = local_1c8.ArrayNum;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_158._0_8_;
  local_1c8.ArrayMax = local_1d8._12_4_;
  bVar2 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)&local_1c8);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_1d8,
               L"Path \'%s\' failed FPackageName::IsLocalizedPackage (got \'%d\', expected \'%d\')."
              );
    (*pcVar1)(this,&local_1d8,0);
    if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  ::FString::FString((FString *)local_158,L"/Game/L10N/en");
  local_1d8.DataPtr = (wchar_t *)local_158._0_8_;
  local_1c8.ArrayNum = local_158._8_4_ + -1;
  if (local_158._8_4_ == 0) {
    local_1c8.ArrayNum = 0;
  }
  local_1d8.Size = local_1c8.ArrayNum;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_158._0_8_;
  local_1c8.ArrayMax = local_1d8._12_4_;
  bVar2 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)&local_1c8);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_1d8,
               L"Path \'%s\' failed FPackageName::IsLocalizedPackage (got \'%d\', expected \'%d\')."
              );
    (*pcVar1)(this,&local_1d8,0);
    if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  ::FString::FString((FString *)local_158,L"/Game/L10N/en/MyAsset");
  local_1d8.DataPtr = (wchar_t *)local_158._0_8_;
  local_1c8.ArrayNum = local_158._8_4_ + -1;
  if (local_158._8_4_ == 0) {
    local_1c8.ArrayNum = 0;
  }
  local_1d8.Size = local_1c8.ArrayNum;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_158._0_8_;
  local_1c8.ArrayMax = local_1d8._12_4_;
  bVar2 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)&local_1c8);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_1d8,
               L"Path \'%s\' failed FPackageName::IsLocalizedPackage (got \'%d\', expected \'%d\')."
              );
    (*pcVar1)(this,&local_1d8,0);
    if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)this;
  ::FString::FString((FString *)&local_1b8,L"/Game");
  ::FString::FString((FString *)&local_1d8,L"/Game");
  `FPackageNameTests::RunTest'::__l4::<lambda_4>::operator()
            (&local_178,(FString *)&local_1d8,(FString *)&local_1b8);
  if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.DataPtr);
  }
  if (local_1b8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_1b8.DataPtr);
  }
  ::FString::FString((FString *)&local_1b8,L"/Game/MyAsset");
  ::FString::FString((FString *)&local_1d8,L"/Game/MyAsset");
  `FPackageNameTests::RunTest'::__l4::<lambda_4>::operator()
            (&local_178,(FString *)&local_1d8,(FString *)&local_1b8);
  if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.DataPtr);
  }
  if (local_1b8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_1b8.DataPtr);
  }
  ::FString::FString((FString *)&local_1b8,L"/Game");
  ::FString::FString((FString *)&local_1d8,L"/Game/L10N");
  `FPackageNameTests::RunTest'::__l4::<lambda_4>::operator()
            (&local_178,(FString *)&local_1d8,(FString *)&local_1b8);
  if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.DataPtr);
  }
  if (local_1b8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_1b8.DataPtr);
  }
  ::FString::FString((FString *)&local_1b8,L"/Game");
  ::FString::FString((FString *)&local_1d8,L"/Game/L10N/en");
  `FPackageNameTests::RunTest'::__l4::<lambda_4>::operator()
            (&local_178,(FString *)&local_1d8,(FString *)&local_1b8);
  if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.DataPtr);
  }
  if (local_1b8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_1b8.DataPtr);
  }
  ::FString::FString((FString *)&local_1b8,L"/Game/MyAsset");
  ::FString::FString((FString *)&local_1d8,L"/Game/L10N/en/MyAsset");
  `FPackageNameTests::RunTest'::__l4::<lambda_4>::operator()
            (&local_178,(FString *)&local_1d8,(FString *)&local_1b8);
  if ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.DataPtr);
  }
  if (local_1b8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_1b8.DataPtr);
  }
  local_158._8_8_ = &local_78;
  local_1d8.Size = 4;
  uStack_1a0 = local_188;
  local_1b8.Size = 0x17;
  local_78 = L"/Game/MyAsset.MyAsset:SubObject.AnotherObject";
  local_1a8 = (undefined1  [8])
              UE::Core::Private::Function::
              TFunctionRefCaller<`FPackageNameTests::RunTest'::__l6::<lambda_6>,TStringView<wchar_t>,TStringView<wchar_t>_>
              ::Call;
  local_1d8.DataPtr = (wchar_t *)&local_b8;
  local_70 = 0x2d;
  local_1b8.DataPtr = L"ObjectPathToPackageName";
  local_198.DataPtr = L"ObjectPathToPackageName";
  local_198.Size = 0x17;
  local_198._12_4_ = local_1b8._12_4_;
  local_68 = L"/Game/MyAsset.MyAsset:SubObject";
  local_60 = 0x1f;
  local_58 = L"/Game/MyAsset.MyAsset";
  local_50 = 0x15;
  local_48 = L"/Game/MyAsset";
  local_40 = 0xd;
  local_b8.DataPtr = L"/Game/MyAsset";
  local_b8.Size = 0xd;
  local_a8 = L"/Game/MyAsset";
  local_a0 = 0xd;
  local_98 = L"/Game/MyAsset";
  local_90 = 0xd;
  local_88 = L"/Game/MyAsset";
  local_80 = 0xd;
  local_1c8.ArrayNum = 4;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_1d8.DataPtr;
  local_158._0_8_ = this;
  `FPackageNameTests::RunTest'::__l5::<lambda_5>::operator()
            (local_158,&local_198,(TArrayView<TStringView<wchar_t>_const_,int> *)&local_1c8,
             (TFunctionRef<TStringView<wchar_t>___cdecl(TStringView<wchar_t>)> *)local_1a8);
  local_1d8.Size = 4;
  local_88 = L"";
  uStack_1a0 = local_188;
  local_1b8.Size = 0x1d;
  local_b8.DataPtr = L"MyAsset:SubObject.AnotherObject";
  local_1a8 = (undefined1  [8])
              UE::Core::Private::Function::
              TFunctionRefCaller<`FPackageNameTests::RunTest'::__l7::<lambda_7>,TStringView<wchar_t>,TStringView<wchar_t>_>
              ::Call;
  local_1d8.DataPtr = (wchar_t *)&local_b8;
  local_b8.Size = 0x1f;
  local_1b8.DataPtr = L"ObjectPathToPathWithinPackage";
  local_198.DataPtr = L"ObjectPathToPathWithinPackage";
  local_198.Size = 0x1d;
  local_198._12_4_ = local_1b8._12_4_;
  local_a8 = L"MyAsset:SubObject";
  local_a0 = 0x11;
  local_98 = L"MyAsset";
  local_90 = 7;
  local_80 = 0;
  local_1c8.ArrayNum = 4;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_1d8.DataPtr;
  `FPackageNameTests::RunTest'::__l5::<lambda_5>::operator()
            (local_158,&local_198,(TArrayView<TStringView<wchar_t>_const_,int> *)&local_1c8,
             (TFunctionRef<TStringView<wchar_t>___cdecl(TStringView<wchar_t>)> *)local_1a8);
  local_b8.DataPtr = L"/Game/MyAsset.MyAsset:SubObject";
  local_98 = L"/Game/MyAsset";
  local_88 = L"";
  local_b8.Size = 0x1f;
  local_a8 = L"/Game/MyAsset.MyAsset";
  local_a0 = 0x15;
  local_90 = 0xd;
  uStack_1a0 = local_188;
  local_1d8.Size = 4;
  local_1b8.Size = 0x15;
  local_1a8 = (undefined1  [8])
              UE::Core::Private::Function::
              TFunctionRefCaller<`FPackageNameTests::RunTest'::__l8::<lambda_8>,TStringView<wchar_t>,TStringView<wchar_t>_>
              ::Call;
  local_1d8.DataPtr = (wchar_t *)&local_b8;
  local_80 = 0;
  local_1b8.DataPtr = L"ObjectPathToOuterPath";
  local_198.DataPtr = L"ObjectPathToOuterPath";
  local_198.Size = 0x15;
  local_198._12_4_ = local_1b8._12_4_;
  local_1c8.ArrayNum = 4;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_1d8.DataPtr;
  `FPackageNameTests::RunTest'::__l5::<lambda_5>::operator()
            (local_158,&local_198,(TArrayView<TStringView<wchar_t>_const_,int> *)&local_1c8,
             (TFunctionRef<TStringView<wchar_t>___cdecl(TStringView<wchar_t>)> *)local_1a8);
  local_1d8.Size = 4;
  local_b8.DataPtr = L"SubObject.AnotherObject";
  local_1b8.Size = 0x19;
  local_a8 = L"SubObject";
  local_b8.Size = 0x17;
  local_88 = L"/Game/MyAsset";
  uStack_1a0 = local_188;
  local_a0 = 9;
  local_98 = L"MyAsset";
  local_1a8 = (undefined1  [8])
              UE::Core::Private::Function::
              TFunctionRefCaller<`FPackageNameTests::RunTest'::__l9::<lambda_9>,TStringView<wchar_t>,TStringView<wchar_t>_>
              ::Call;
  local_1d8.DataPtr = (wchar_t *)&local_b8;
  local_1b8.DataPtr = L"ObjectPathToSubObjectPath";
  local_198.DataPtr = L"ObjectPathToSubObjectPath";
  local_198.Size = 0x19;
  local_198._12_4_ = local_1b8._12_4_;
  local_90 = 7;
  local_80 = 0xd;
  local_1c8.ArrayNum = 4;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_1d8.DataPtr;
  `FPackageNameTests::RunTest'::__l5::<lambda_5>::operator()
            (local_158,&local_198,(TArrayView<TStringView<wchar_t>_const_,int> *)&local_1c8,
             (TFunctionRef<TStringView<wchar_t>___cdecl(TStringView<wchar_t>)> *)local_1a8);
  local_1d8.Size = 4;
  local_b8.DataPtr = L"AnotherObject";
  local_1b8.Size = 0x16;
  local_a8 = L"SubObject";
  local_b8.Size = 0xd;
  local_88 = L"/Game/MyAsset";
  uStack_1a0 = local_188;
  local_a0 = 9;
  local_98 = L"MyAsset";
  local_1a8 = (undefined1  [8])
              UE::Core::Private::Function::
              TFunctionRefCaller<`FPackageNameTests::RunTest'::__l10::<lambda_10>,TStringView<wchar_t>,TStringView<wchar_t>_>
              ::Call;
  local_1d8.DataPtr = (wchar_t *)&local_b8;
  local_1b8.DataPtr = L"ObjectPathToObjectName";
  local_198.DataPtr = L"ObjectPathToObjectName";
  local_198.Size = 0x16;
  local_198._12_4_ = local_1b8._12_4_;
  local_90 = 7;
  local_80 = 0xd;
  local_1c8.ArrayNum = 4;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)local_1d8.DataPtr;
  `FPackageNameTests::RunTest'::__l5::<lambda_5>::operator()
            (local_158,&local_198,(TArrayView<TStringView<wchar_t>_const_,int> *)&local_1c8,
             (TFunctionRef<TStringView<wchar_t>___cdecl(TStringView<wchar_t>)> *)local_1a8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd750;
  local_1c8.ArrayNum = 0x1f;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"/Game/MyAsset";
  local_1b8.Size = 0xd;
  local_1a8 = (undefined1  [8])0x1507dd650;
  uStack_1a0._0_4_ = 0x2d;
  local_198.DataPtr = L"/Game/MyAsset";
  local_198.Size = 0xd;
  local_198._12_4_ = local_1b8._12_4_;
  local_1d8.DataPtr = L"/Game/MyAsset.MyAsset:SubObject.AnotherObject";
  local_1d8.Size = 0x2d;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)this;
  `FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd790;
  local_1c8.ArrayNum = 0x11;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"/Game/MyAsset";
  local_1b8.Size = 0xd;
  local_1a8 = (undefined1  [8])0x1507dd6b0;
  uStack_1a0._0_4_ = 0x1f;
  local_1d8.DataPtr = L"/Game/MyAsset.MyAsset:SubObject";
  local_1d8.Size = 0x1f;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"/Game/MyAsset";
  local_198.Size = 0xd;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd7b8;
  local_1c8.ArrayNum = 7;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"/Game/MyAsset";
  local_1b8.Size = 0xd;
  local_1a8 = (undefined1  [8])0x1507dd6f0;
  uStack_1a0._0_4_ = 0x15;
  local_1d8.DataPtr = L"/Game/MyAsset.MyAsset";
  local_1d8.Size = 0x15;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"/Game/MyAsset";
  local_198.Size = 0xd;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1b8.Size = 0xd;
  local_1b8.DataPtr = L"/Game/MyAsset";
  local_1d8._8_8_ = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  local_1c8.ArrayNum = local_1d8.Size;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1a8 = (undefined1  [8])0x1507dd5c8;
  uStack_1a0._0_4_ = 0xd;
  local_1d8.DataPtr = L"/Game/MyAsset";
  local_1d8.Size = 0xd;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"/Game/MyAsset";
  local_198.Size = 0xd;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd868;
  local_1c8.ArrayNum = 9;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"MyAsset";
  local_1b8.Size = 7;
  local_1a8 = (undefined1  [8])0x1507dd790;
  uStack_1a0._0_4_ = 0x11;
  local_198.DataPtr = L"MyAsset";
  local_198.Size = 7;
  local_198._12_4_ = local_1b8._12_4_;
  local_1d8.DataPtr = L"MyAsset:SubObject";
  local_1d8.Size = 0x11;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  `FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1a8 = (undefined1  [8])0x1507dd908;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd868;
  local_1c8.ArrayNum = 9;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"MyAsset";
  local_1b8.Size = 7;
  uStack_1a0._0_4_ = 0x11;
  local_1d8.DataPtr = L"MyAsset.SubObject";
  local_1d8.Size = 0x11;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"MyAsset";
  local_198.Size = 7;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1d8._8_8_ = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  local_1c8.ArrayNum = local_1d8.Size;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"MyAsset";
  local_1b8.Size = 7;
  local_1a8 = (undefined1  [8])0x1507dd7b8;
  uStack_1a0._0_4_ = 7;
  local_1d8.DataPtr = L"MyAsset";
  local_1d8.Size = 7;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"MyAsset";
  local_198.Size = 7;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  iVar9 = 0;
  local_1d8._8_8_ = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  local_1c8.ArrayNum = local_1d8.Size;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"";
  local_1b8.Size = 0;
  local_1a8 = (undefined1  [8])0x15060d16c;
  uStack_1a0._0_4_ = 0;
  local_1d8.DataPtr = L"";
  local_1d8.Size = 0;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"";
  local_198.Size = 0;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd930;
  local_1c8.ArrayNum = 0xf;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"Object";
  local_1b8.Size = 6;
  local_1a8 = (undefined1  [8])0x1507dd950;
  uStack_1a0._0_4_ = 8;
  local_1d8.DataPtr = L"/Package";
  local_1d8.Size = 8;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"Object";
  local_198.Size = 6;
  local_198._12_4_ = local_1b8._12_4_;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)this;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd968;
  local_1c8.ArrayNum = 0x19;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"SubObject";
  local_1b8.Size = 9;
  local_1a8 = (undefined1  [8])0x1507dd930;
  uStack_1a0._0_4_ = 0xf;
  local_1d8.DataPtr = L"/Package.Object";
  local_1d8.Size = 0xf;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"SubObject";
  local_198.Size = 9;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1b8.DataPtr = L"NextSubObject";
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd9a0;
  local_1c8.ArrayNum = 0x27;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.Size = 0xd;
  local_1a8 = (undefined1  [8])0x1507dd968;
  uStack_1a0._0_4_ = 0x19;
  local_198.DataPtr = L"NextSubObject";
  local_198.Size = 0xd;
  local_198._12_4_ = local_1b8._12_4_;
  local_1d8.DataPtr = L"/Package.Object:SubObject";
  local_1d8.Size = 0x19;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1b8.DataPtr = L"Object.SubObject";
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd968;
  local_1c8.ArrayNum = 0x19;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.Size = 0x10;
  local_1a8 = (undefined1  [8])0x1507dd950;
  uStack_1a0._0_4_ = 8;
  local_198.DataPtr = L"Object.SubObject";
  local_198.Size = 0x10;
  local_198._12_4_ = local_1b8._12_4_;
  local_1d8.DataPtr = L"/Package";
  local_1d8.Size = 8;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dda38;
  local_1c8.ArrayNum = 0x1e;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"/OtherPackage.Object:SubObject";
  local_1b8.Size = 0x1e;
  local_1a8 = (undefined1  [8])0x1507dd950;
  uStack_1a0._0_4_ = 8;
  local_1d8.DataPtr = L"/Package";
  local_1d8.Size = 8;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"/OtherPackage.Object:SubObject";
  local_198.Size = 0x1e;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1b8.DataPtr = L"";
  local_1b8.Size = 0;
  local_1a8 = (undefined1  [8])0x1507dd950;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd950;
  local_1c8.ArrayNum = 8;
  local_1c8.ArrayMax = local_1d8._12_4_;
  uStack_1a0._0_4_ = 8;
  local_1d8.DataPtr = L"/Package";
  local_1d8.Size = 8;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"";
  local_198.Size = 0;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507dd968;
  local_1c8.ArrayNum = 0x19;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"/Package.Object:SubObject";
  local_1b8.Size = 0x19;
  local_1a8 = (undefined1  [8])0x15060d16c;
  uStack_1a0._0_4_ = 0;
  local_1d8.DataPtr = L"";
  local_1d8.Size = 0;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"/Package.Object:SubObject";
  local_198.Size = 0x19;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1506641c8;
  local_1c8.ArrayNum = 6;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"Object";
  local_1b8.Size = 6;
  local_1a8 = (undefined1  [8])0x15060d16c;
  uStack_1a0._0_4_ = 0;
  local_1d8.DataPtr = L"";
  local_1d8.Size = 0;
  local_1d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = L"Object";
  local_198.Size = 6;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_1d8._8_8_ = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  local_1c8.ArrayNum = local_1d8.Size;
  local_1c8.ArrayMax = local_1d8._12_4_;
  local_1b8.DataPtr = L"";
  local_1b8._8_8_ = (ulonglong)(uint)local_1b8._12_4_ << 0x20;
  local_1a8 = (undefined1  [8])0x15060d16c;
  uStack_1a0 = (undefined1 *)((ulonglong)uStack_1a0._4_4_ << 0x20);
  local_1d8.DataPtr = L"";
  local_1d8._8_8_ = uStack_1a0;
  local_198.DataPtr = L"";
  local_198.Size = local_1b8.Size;
  local_198._12_4_ = local_1b8._12_4_;
  `FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
            (&local_178,&local_1d8,&local_198,(TStringView<wchar_t> *)&local_1c8);
  local_138[0] = this;
  FPaths::EngineContentDir((FString *)local_158);
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)local_158;
  local_1d8.Size = 8;
  iVar7 = 0;
  iVar4 = (int)local_158._8_8_ + -1;
  if ((int)local_158._8_8_ == 0) {
    iVar4 = iVar7;
  }
  local_168.DataPtr = (wchar_t *)0x0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1c8.ArrayNum = 7;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1d8.DataPtr = L"/Engine/";
  local_198.DataPtr = (wchar_t *)local_158._0_8_;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x150645c08;
  local_198.Size = iVar4;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,(TStringView<wchar_t> *)&local_1c8,true,&local_198,&local_1d8,&local_1b8,
             (TStringView<wchar_t> *)local_1a8,&local_168,PackageName,PackageNameUnknown);
  local_198.Size = (int)local_158._8_8_ + -1;
  if ((int)local_158._8_8_ == 0) {
    local_198.Size = iVar7;
  }
  local_1c8.ArrayNum = 8;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1d8.Size = 8;
  local_168.DataPtr = (wchar_t *)0x0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x150711970;
  local_198.DataPtr = (wchar_t *)local_158._0_8_;
  local_1d8.DataPtr = L"/Engine/";
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_1d8,true,&local_198,(TStringView<wchar_t> *)&local_1c8,&local_168,
             (TStringView<wchar_t> *)local_1a8,&local_1b8,PackageName,PackageNameUnknown);
  local_198.Size = (int)local_158._8_8_ + -1;
  if ((int)local_158._8_8_ == 0) {
    local_198.Size = iVar9;
  }
  local_1c8.ArrayNum = 8;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x150711970;
  local_198.DataPtr = (wchar_t *)local_158._0_8_;
  local_1d8.DataPtr = (wchar_t *)local_158._0_8_;
  local_1d8.Size = local_198.Size;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_1d8,true,&local_198,(TStringView<wchar_t> *)&local_1c8,&local_168,
             (TStringView<wchar_t> *)local_1a8,&local_1b8,LocalPath,PackageNameUnknown);
  local_1c8.ArrayNum = 3;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_198.DataPtr = L"/Engine/Foo";
  local_198.Size = 0xb;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_d8,(TStringView<wchar_t> *)&local_1c8);
  local_1c8.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_1d8.Size = 0xb;
  local_1c8.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_1c8.ArrayNum = iVar7;
  }
  local_1d8.DataPtr = L"/Engine/Foo";
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_1d8,true,(TStringView<wchar_t> *)&local_1c8,&local_198,&local_168,
             (TStringView<wchar_t> *)local_1a8,&local_1b8,PackageName,PackageNameUnknown);
  if (local_d8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1c8.ArrayNum = 3;
  local_d8.DataPtr = L"Foo";
  local_d8.Size = 3;
  local_d8._12_4_ = local_1c8.ArrayMax;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_198.DataPtr = L"/Engine/Foo";
  local_198.Size = 0xb;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_128,&local_d8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1c8.ArrayNum = 3;
  local_1d8.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_d8.DataPtr = L"Foo";
  local_d8.Size = 3;
  local_d8._12_4_ = local_1c8.ArrayMax;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = iVar7;
  }
  local_1d8.Size = iVar3;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_f8,&local_d8);
  local_1c8.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_d8.DataPtr = local_1b8.DataPtr;
  local_d8.Size = local_1b8.Size;
  local_d8._12_4_ = local_1b8._12_4_;
  local_1b8.DataPtr = (wchar_t *)local_1a8;
  local_1b8.Size = (int)uStack_1a0;
  local_1b8._12_4_ = uStack_1a0._4_4_;
  local_1c8.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_1c8.ArrayNum = iVar7;
  }
  local_1a8 = (undefined1  [8])local_168.DataPtr;
  uStack_1a0._0_4_ = local_168.Size;
  uStack_1a0._4_4_ = local_168._12_4_;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,(TStringView<wchar_t> *)&local_1c8,true,&local_1d8,&local_198,
             (TStringView<wchar_t> *)local_1a8,&local_1b8,&local_d8,LocalPath,PackageNameUnknown);
  if (local_f8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_f8.DataPtr);
  }
  if (local_128.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_128.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1c8.ArrayNum = 3;
  local_128.DataPtr = L"Foo";
  local_128.Size = 3;
  local_128._12_4_ = local_1c8.ArrayMax;
  local_198.DataPtr = L".uasset";
  local_198.Size = 7;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_1d8.DataPtr = L"/Engine/Foo";
  local_1d8.Size = 0xb;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_118,&local_128);
  local_1c8.ArrayNum = 10;
  local_168.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = iVar7;
  }
  local_168.Size = iVar3;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507ddaa0;
  local_128.DataPtr = L"Foo.uasset";
  local_128.Size = 10;
  local_128._12_4_ = local_1c8.ArrayMax;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_108,&local_128);
  local_1c8.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_128.DataPtr = local_198.DataPtr;
  local_128.Size = local_198.Size;
  local_128._12_4_ = local_198._12_4_;
  local_f8.DataPtr = local_1b8.DataPtr;
  local_f8.Size = local_1b8.Size;
  local_f8._12_4_ = local_1b8._12_4_;
  local_1c8.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_1c8.ArrayNum = iVar7;
  }
  local_d8.DataPtr = (wchar_t *)local_1a8;
  local_d8.Size = (int)uStack_1a0;
  local_d8._12_4_ = uStack_1a0._4_4_;
  local_198.DataPtr = local_1d8.DataPtr;
  local_198.Size = local_1d8.Size;
  local_198._12_4_ = local_1d8._12_4_;
  local_1d8.DataPtr = local_168.DataPtr;
  local_1d8.Size = local_168.Size;
  local_1d8._12_4_ = local_168._12_4_;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,(TStringView<wchar_t> *)&local_1c8,true,&local_1d8,&local_198,&local_d8,
             &local_f8,&local_128,LocalPath,PackageNameUnknown);
  if (local_108.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_108.DataPtr);
  }
  if (local_118.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_118.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1c8.ArrayNum = 3;
  local_118.DataPtr = L"Foo";
  local_118.Size = 3;
  local_118._12_4_ = local_1c8.ArrayMax;
  local_198.DataPtr = L".Bar";
  local_198.Size = 4;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_1d8.DataPtr = L"/Engine/Foo";
  local_1d8.Size = 0xb;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_148,&local_118);
  local_1c8.ArrayNum = 7;
  local_168.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = iVar7;
  }
  local_168.Size = iVar3;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507ddac8;
  local_118.DataPtr = L"Foo.Bar";
  local_118.Size = 7;
  local_118._12_4_ = local_1c8.ArrayMax;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_e8,&local_118);
  local_1c8.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_118.DataPtr = local_198.DataPtr;
  local_118.Size = local_198.Size;
  local_118._12_4_ = local_198._12_4_;
  local_108.DataPtr = local_1b8.DataPtr;
  local_108.Size = local_1b8.Size;
  local_108._12_4_ = local_1b8._12_4_;
  iVar7 = 0;
  local_1c8.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_1c8.ArrayNum = iVar7;
  }
  local_128.DataPtr = (wchar_t *)local_1a8;
  local_128.Size = (int)uStack_1a0;
  local_128._12_4_ = uStack_1a0._4_4_;
  local_f8.DataPtr = local_1d8.DataPtr;
  local_f8.Size = local_1d8.Size;
  local_f8._12_4_ = local_1d8._12_4_;
  local_d8.DataPtr = local_168.DataPtr;
  local_d8.Size = local_168.Size;
  local_d8._12_4_ = local_168._12_4_;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,(TStringView<wchar_t> *)&local_1c8,true,&local_d8,&local_f8,&local_128,
             &local_108,&local_118,LocalPath,PackageNameUnknown);
  if (local_e8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  if (local_148.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_148.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1c8.ArrayNum = 3;
  local_148.DataPtr = L"Foo";
  local_148.Size = 3;
  local_148._12_4_ = local_1c8.ArrayMax;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_198.DataPtr = L"Bar";
  local_198.Size = 3;
  local_1d8.DataPtr = L"/Engine/Foo";
  local_1d8.Size = 0xb;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_d8,&local_148);
  local_1c8.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_148.DataPtr = local_1b8.DataPtr;
  local_148.Size = local_1b8.Size;
  local_148._12_4_ = local_1b8._12_4_;
  local_e8.DataPtr = (wchar_t *)local_1a8;
  local_e8.Size = (int)uStack_1a0;
  local_e8._12_4_ = uStack_1a0._4_4_;
  local_1c8.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_1c8.ArrayNum = iVar7;
  }
  local_118.DataPtr = local_198.DataPtr;
  local_118.Size = local_198.Size;
  local_118._12_4_ = local_198._12_4_;
  local_168.DataPtr = L"/Engine/Foo.Bar";
  local_108.DataPtr = local_1d8.DataPtr;
  local_108.Size = local_1d8.Size;
  local_108._12_4_ = local_1d8._12_4_;
  local_168.Size = 0xf;
  local_128.Size = local_1c8.ArrayNum;
  local_128._12_4_ = local_1c8.ArrayMax;
  local_f8.DataPtr = L"/Engine/Foo.Bar";
  local_f8.Size = 0xf;
  local_f8._12_4_ = local_168._12_4_;
  local_128.DataPtr = (wchar_t *)local_1c8.AllocatorInstance.Data;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,true,&local_128,&local_108,&local_118,&local_e8,&local_148,
             ObjectPath,PackageNameUnknown);
  if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1c8.ArrayNum = 3;
  local_148.DataPtr = L"Foo";
  local_148.Size = 3;
  local_148._12_4_ = local_1c8.ArrayMax;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_198.DataPtr = L"Baz";
  local_198.Size = 3;
  local_1d8.DataPtr = L"Bar";
  local_1d8.Size = 3;
  local_1a8 = (undefined1  [8])0x1507dda78;
  uStack_1a0._0_4_ = 0xb;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_d8,&local_148);
  local_1c8.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_148.DataPtr = local_1b8.DataPtr;
  local_148.Size = local_1b8.Size;
  local_148._12_4_ = local_1b8._12_4_;
  local_e8.DataPtr = local_198.DataPtr;
  local_e8.Size = local_198.Size;
  local_e8._12_4_ = local_198._12_4_;
  local_1c8.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_1c8.ArrayNum = iVar9;
  }
  local_118.DataPtr = local_1d8.DataPtr;
  local_118.Size = local_1d8.Size;
  local_118._12_4_ = local_1d8._12_4_;
  local_168.DataPtr = L"/Engine/Foo.Bar:Baz";
  local_108.DataPtr = (wchar_t *)local_1a8;
  local_108.Size = (int)uStack_1a0;
  local_108._12_4_ = uStack_1a0._4_4_;
  local_168.Size = 0x13;
  local_128.Size = local_1c8.ArrayNum;
  local_128._12_4_ = local_1c8.ArrayMax;
  local_f8.DataPtr = L"/Engine/Foo.Bar:Baz";
  local_f8.Size = 0x13;
  local_f8._12_4_ = local_168._12_4_;
  local_128.DataPtr = (wchar_t *)local_1c8.AllocatorInstance.Data;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,true,&local_128,&local_108,&local_118,&local_e8,&local_148,
             ObjectPath,PackageNameUnknown);
  if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1c8.ArrayNum = 3;
  local_148.DataPtr = L"Foo";
  local_148.Size = 3;
  local_148._12_4_ = local_1c8.ArrayMax;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_198.DataPtr = L"Spaces Ignored";
  local_198.Size = 0xe;
  local_1d8.DataPtr = L"/Engine/Foo";
  local_1d8.Size = 0xb;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_d8,&local_148);
  local_1c8.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_148.DataPtr = local_1b8.DataPtr;
  local_148.Size = local_1b8.Size;
  local_148._12_4_ = local_1b8._12_4_;
  local_e8.DataPtr = (wchar_t *)local_1a8;
  local_e8.Size = (int)uStack_1a0;
  local_e8._12_4_ = uStack_1a0._4_4_;
  local_1c8.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_1c8.ArrayNum = iVar7;
  }
  local_118.DataPtr = local_198.DataPtr;
  local_118.Size = local_198.Size;
  local_118._12_4_ = local_198._12_4_;
  local_168.DataPtr = L"/Engine/Foo.Spaces Ignored";
  local_108.DataPtr = local_1d8.DataPtr;
  local_108.Size = local_1d8.Size;
  local_108._12_4_ = local_1d8._12_4_;
  local_168.Size = 0x1a;
  local_128.Size = local_1c8.ArrayNum;
  local_128._12_4_ = local_1c8.ArrayMax;
  local_f8.DataPtr = L"/Engine/Foo.Spaces Ignored";
  local_f8.Size = 0x1a;
  local_f8._12_4_ = local_168._12_4_;
  local_128.DataPtr = (wchar_t *)local_1c8.AllocatorInstance.Data;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,true,&local_128,&local_108,&local_118,&local_e8,&local_148,
             ObjectPath,PackageNameUnknown);
  if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1c8.ArrayNum = 3;
  local_148.DataPtr = L"Foo";
  local_148.Size = 3;
  local_148._12_4_ = local_1c8.ArrayMax;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_198.DataPtr = L"For Spaces";
  local_198.Size = 10;
  local_1d8.DataPtr = L"Spaces Ignored";
  local_1d8.Size = 0xe;
  local_1a8 = (undefined1  [8])0x1507dda78;
  uStack_1a0._0_4_ = 0xb;
  pFVar5 = `FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
                     (&local_178,(FString *)&local_d8,&local_148);
  local_1c8.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_148.DataPtr = local_1b8.DataPtr;
  local_148.Size = local_1b8.Size;
  local_148._12_4_ = local_1b8._12_4_;
  local_e8.DataPtr = local_198.DataPtr;
  local_e8.Size = local_198.Size;
  local_e8._12_4_ = local_198._12_4_;
  local_1c8.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_1c8.ArrayNum = iVar7;
  }
  local_118.DataPtr = local_1d8.DataPtr;
  local_118.Size = local_1d8.Size;
  local_118._12_4_ = local_1d8._12_4_;
  local_168.DataPtr = L"/Engine/Foo.Spaces Ignored:For Spaces";
  local_108.DataPtr = (wchar_t *)local_1a8;
  local_108.Size = (int)uStack_1a0;
  local_108._12_4_ = uStack_1a0._4_4_;
  local_168.Size = 0x25;
  local_128.Size = local_1c8.ArrayNum;
  local_128._12_4_ = local_1c8.ArrayMax;
  local_f8.DataPtr = L"/Engine/Foo.Spaces Ignored:For Spaces";
  local_f8.Size = 0x25;
  local_f8._12_4_ = local_168._12_4_;
  local_128.DataPtr = (wchar_t *)local_1c8.AllocatorInstance.Data;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,true,&local_128,&local_108,&local_118,&local_e8,&local_148,
             ObjectPath,PackageNameUnknown);
  if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507ddbf0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_148.DataPtr = (wchar_t *)0x0;
  local_148.Size = 0;
  local_148._12_4_ = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_e8.DataPtr = (wchar_t *)0x0;
  local_e8.Size = 0;
  local_e8._12_4_ = 0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_118.DataPtr = (wchar_t *)0x0;
  local_118.Size = 0;
  local_118._12_4_ = 0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_108._12_4_ = 0;
  local_1d8.Size = 0;
  local_1d8._12_4_ = 0;
  local_1d8.DataPtr = (wchar_t *)0x0;
  local_1c8.ArrayNum = 0x16;
  local_128.DataPtr = (wchar_t *)0x0;
  local_128.Size = 0;
  local_128._12_4_ = 0;
  local_f8.DataPtr = L"/Engine/Package Spaces";
  local_f8.Size = 0x16;
  local_f8._12_4_ = local_1c8.ArrayMax;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,false,&local_128,&local_108,&local_118,&local_e8,&local_148,Invalid
             ,PackageNameSpacesNotAllowed);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507ddc20;
  local_1d8.Size = 0;
  local_1d8._12_4_ = 0;
  local_1d8.DataPtr = (wchar_t *)0x0;
  local_148.DataPtr = (wchar_t *)0x0;
  local_148.Size = 0;
  local_148._12_4_ = 0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_e8.DataPtr = (wchar_t *)0x0;
  local_e8.Size = 0;
  local_e8._12_4_ = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_118.DataPtr = (wchar_t *)0x0;
  local_118.Size = 0;
  local_118._12_4_ = 0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_108._12_4_ = 0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0x23;
  local_128.DataPtr = (wchar_t *)0x0;
  local_128.Size = 0;
  local_128._12_4_ = 0;
  local_f8.DataPtr = L"/Engine/PackageNameWithInvalidChar?";
  local_f8.Size = 0x23;
  local_f8._12_4_ = local_1c8.ArrayMax;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,false,&local_128,&local_108,&local_118,&local_e8,&local_148,Invalid
             ,PackageNameContainsInvalidCharacters);
  local_1d8.Size = 0;
  local_1d8._12_4_ = 0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507ddc68;
  local_1d8.DataPtr = (wchar_t *)0x0;
  local_148.DataPtr = (wchar_t *)0x0;
  local_148.Size = 0;
  local_148._12_4_ = 0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_e8.DataPtr = (wchar_t *)0x0;
  local_e8.Size = 0;
  local_e8._12_4_ = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_118.DataPtr = (wchar_t *)0x0;
  local_118.Size = 0;
  local_118._12_4_ = 0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_108._12_4_ = 0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0x15;
  local_128.DataPtr = (wchar_t *)0x0;
  local_128.Size = 0;
  local_128._12_4_ = 0;
  local_f8.DataPtr = L"Texture2D /Engine/Foo";
  local_f8.Size = 0x15;
  local_f8._12_4_ = local_1c8.ArrayMax;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,false,&local_128,&local_108,&local_118,&local_e8,&local_148,Invalid
             ,PackageNameSpacesNotAllowed);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507ddc98;
  local_1d8.Size = 0;
  local_1d8._12_4_ = 0;
  local_1d8.DataPtr = (wchar_t *)0x0;
  local_148.DataPtr = (wchar_t *)0x0;
  local_148.Size = 0;
  local_148._12_4_ = 0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_e8.DataPtr = (wchar_t *)0x0;
  local_e8.Size = 0;
  local_e8._12_4_ = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_118.DataPtr = (wchar_t *)0x0;
  local_118.Size = 0;
  local_118._12_4_ = 0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_108._12_4_ = 0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0x1a;
  local_128.DataPtr = (wchar_t *)0x0;
  local_128.Size = 0;
  local_128._12_4_ = 0;
  local_f8.DataPtr = L"/FPackageNameTests_DNE/Foo";
  local_f8.Size = 0x1a;
  local_f8._12_4_ = local_1c8.ArrayMax;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,false,&local_128,&local_108,&local_118,&local_e8,&local_148,Invalid
             ,PackageNamePathNotMounted);
  local_1d8.Size = 0;
  local_1d8._12_4_ = 0;
  local_1d8.DataPtr = (wchar_t *)0x0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x1507ddcd0;
  local_148.DataPtr = (wchar_t *)0x0;
  local_148.Size = 0;
  local_148._12_4_ = 0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_e8.DataPtr = (wchar_t *)0x0;
  local_e8.Size = 0;
  local_e8._12_4_ = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_118.DataPtr = (wchar_t *)0x0;
  local_118.Size = 0;
  local_118._12_4_ = 0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_108._12_4_ = 0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0x22;
  local_128.DataPtr = (wchar_t *)0x0;
  local_128.Size = 0;
  local_128._12_4_ = 0;
  local_f8.DataPtr = L"../../../FPackageNameTests_DNE/Foo";
  local_f8.Size = 0x22;
  local_f8._12_4_ = local_1c8.ArrayMax;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,false,&local_128,&local_108,&local_118,&local_e8,&local_148,Invalid
             ,PackageNamePathNotMounted);
  local_1d8.Size = 0;
  local_1d8._12_4_ = 0;
  local_1d8.DataPtr = (wchar_t *)0x0;
  local_148.DataPtr = (wchar_t *)0x0;
  local_148.Size = 0;
  local_148._12_4_ = 0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_e8.DataPtr = (wchar_t *)0x0;
  local_e8.Size = 0;
  local_e8._12_4_ = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  local_1a8 = (undefined1  [8])0x0;
  local_118.DataPtr = (wchar_t *)0x0;
  local_118.Size = 0;
  local_118._12_4_ = 0;
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_108._12_4_ = 0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  local_1c8._8_8_ = (ulonglong)(uint)local_1c8.ArrayMax << 0x20;
  local_128.DataPtr = (wchar_t *)0x0;
  local_128.Size = 0;
  local_128._12_4_ = 0;
  local_f8.DataPtr = L"";
  local_f8.Size = local_1c8.ArrayNum;
  local_f8._12_4_ = local_1c8.ArrayMax;
  `FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
            (local_138,&local_f8,false,&local_128,&local_108,&local_118,&local_e8,&local_148,Invalid
             ,PackageNameEmptyPath);
  if ((FPackageNameTests *)local_158._0_8_ != (FPackageNameTests *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  local_158._8_8_ = &local_c0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  local_1c8._8_8_ = local_1c8._8_8_ & 0xffffffff00000000;
  local_158._0_8_ = this;
  pFVar5 = FPaths::ProjectContentDir((FString *)&local_f8);
  local_1d8.Size = 5;
  local_1d8.DataPtr = L"/Game";
  local_198.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = iVar7;
  }
  local_198.Size = iVar3;
  pFVar5 = FPaths::ProjectContentDir((FString *)&local_128);
  local_1b8.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_148.DataPtr = (wchar_t *)local_1c8.AllocatorInstance.Data;
  local_148.Size = local_1c8.ArrayNum;
  local_148._12_4_ = local_1c8.ArrayMax;
  local_e8.DataPtr = local_198.DataPtr;
  local_e8.Size = local_198.Size;
  local_e8._12_4_ = local_198._12_4_;
  local_108.Size = iVar4 + -1;
  if (iVar4 == 0) {
    local_108.Size = iVar7;
  }
  local_118.DataPtr = local_1d8.DataPtr;
  local_118.Size = local_1d8.Size;
  local_118._12_4_ = local_1d8._12_4_;
  local_1b8.Size = local_108.Size;
  local_108._12_4_ = local_1b8._12_4_;
  local_108.DataPtr = local_1b8.DataPtr;
  `FPackageNameTests::RunTest'::__l14::<lambda_15>::operator()
            (local_158,&local_108,true,&local_118,&local_e8,&local_148,LocalPath,PackageNameUnknown)
  ;
  if (local_128.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_128.DataPtr);
  }
  if (local_f8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_f8.DataPtr);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  local_1c8._8_8_ = local_1c8._8_8_ & 0xffffffff00000000;
  pFVar5 = FPaths::ProjectContentDir((FString *)&local_128);
  local_198.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  local_148.DataPtr = (wchar_t *)local_1c8.AllocatorInstance.Data;
  local_148.Size = local_1c8.ArrayNum;
  local_148._12_4_ = local_1c8.ArrayMax;
  local_1d8.DataPtr = L"/Game";
  local_1d8.Size = 5;
  local_e8.Size = iVar4 + -1;
  if (iVar4 == 0) {
    local_e8.Size = iVar7;
  }
  local_1b8.DataPtr = L"/Game";
  local_198.Size = local_e8.Size;
  local_e8._12_4_ = local_198._12_4_;
  local_1b8.Size = 5;
  local_108.DataPtr = L"/Game";
  local_108.Size = 5;
  local_108._12_4_ = local_1b8._12_4_;
  local_118.DataPtr = L"/Game";
  local_118.Size = 5;
  local_118._12_4_ = local_1d8._12_4_;
  local_e8.DataPtr = local_198.DataPtr;
  `FPackageNameTests::RunTest'::__l14::<lambda_15>::operator()
            (local_158,&local_108,true,&local_118,&local_e8,&local_148,PackageName,
             PackageNameUnknown);
  if (local_128.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_128.DataPtr);
  }
  FPaths::ProjectContentDir((FString *)&local_178);
  iVar4 = iswalpha(0x5c);
  if (iVar4 == 0) {
    ::FString::ReplaceCharInlineCaseSensitive((FString *)&local_178,L'\\',L'/');
  }
  else {
    ::FString::ReplaceCharInlineIgnoreCase((FString *)&local_178,L'\\',L'/');
  }
  iVar4 = local_178.ArrayNum + -1;
  if (local_178.ArrayNum == 0) {
    iVar4 = iVar9;
  }
  if (iVar4 + -1 < iVar4) {
    iVar4 = iVar4 + -1;
  }
  local_1c8.AllocatorInstance.Data = local_178.AllocatorInstance.Data;
  local_148.Size = iVar7;
  if (0 < iVar4) {
    local_148.Size = iVar4;
  }
  local_1c8.ArrayNum = local_148.Size;
  local_148.DataPtr = (wchar_t *)local_178.AllocatorInstance.Data;
  local_148._12_4_ = local_1c8.ArrayMax;
  iVar4 = UE::String::FindLastChar(&local_148,L'/',CaseSensitive);
  if (iVar4 != -1) {
    pFVar5 = ::FString::RightChop((FString *)&local_178,(FString *)&local_148,iVar4);
    iVar8 = local_178.ArrayNum;
    iVar3 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar3 = iVar7;
    }
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (iVar8 != 0) {
      FVar6.Data = local_178.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize((FString *)&local_1d8,(wchar_t *)FVar6.Data,iVar7);
    ::FString::ConcatFC((FString *)&local_198,(FString *)&local_1d8,L"/");
    ::FString::ConcatFF((FString *)&local_1c8,(FString *)&local_198,pFVar5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::operator=(&local_178,&local_1c8);
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_198.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.DataPtr);
    }
    if (local_1d8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_1d8.DataPtr);
    }
    if ((FScriptContainerElement *)local_148.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
    local_1b8.DataPtr = (wchar_t *)local_178.AllocatorInstance.Data;
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
    local_1c8._8_8_ = local_1c8._8_8_ & 0xffffffff00000000;
    local_108.Size = local_178.ArrayNum + -1;
    if (local_178.ArrayNum == 0) {
      local_108.Size = iVar9;
    }
    local_1b8.Size = local_108.Size;
    local_148.DataPtr = L"";
    local_148.Size = local_1c8.ArrayNum;
    local_148._12_4_ = local_1c8.ArrayMax;
    local_198.DataPtr = L"";
    local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
    local_e8.DataPtr = L"";
    local_e8.Size = local_198.Size;
    local_e8._12_4_ = local_198._12_4_;
    local_1d8.DataPtr = L"";
    local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
    local_108.DataPtr = (wchar_t *)local_178.AllocatorInstance.Data;
    local_108._12_4_ = local_1b8._12_4_;
    local_118.DataPtr = L"";
    local_118.Size = local_1d8.Size;
    local_118._12_4_ = local_1d8._12_4_;
    `FPackageNameTests::RunTest'::__l14::<lambda_15>::operator()
              (local_158,&local_108,false,&local_118,&local_e8,&local_148,Invalid,
               PackageNamePathNotMounted);
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141e66a10

FString * __thiscall
FPackageNameTests::GetBeautifiedTestName(FPackageNameTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.PackageNames");
  return __return_storage_ptr__;
}

// operator() @ 141e898a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPackageNameTests::RunTest'::__l11::<lambda_11>::operator()
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  longlong *plVar1;
  wchar_t *_Str1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_2e8 [32];
  wchar_t *local_2c8 [2];
  TStringView<wchar_t> local_2b8;
  code *local_2a8;
  TArrayView<wchar_t_const_,int> local_298;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [256];
  ulonglong local_68 [5];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_2e8;
  local_298.DataPtr = (wchar_t *)local_2c8;
  _Str1 = param_1->DataPtr;
  uVar2._0_4_ = param_1->Size;
  uVar2._4_4_ = *(undefined4 *)&param_1->field_0xc;
  local_298.ArrayNum = 2;
  local_298._12_4_ = local_2b8._12_4_;
  local_2c8[0] = (wchar_t *)CONCAT44(local_2c8[0]._4_4_,0x2e003a);
  local_2b8.DataPtr = _Str1;
  local_2b8._8_8_ = uVar2;
  local_2a8 = this;
  iVar3 = UE::String::FindFirstOfAnyChar(&local_2b8,&local_298,CaseSensitive,(int *)0x0);
  if (iVar3 < 0) {
    local_2c8[0] = (wchar_t *)0x0;
    iVar4 = 0;
    uVar9 = uVar2;
  }
  else {
    iVar4 = (int)uVar2;
    if (iVar3 < (int)uVar2) {
      iVar4 = iVar3;
    }
    iVar8 = 0;
    if (0 < iVar4) {
      iVar8 = iVar4;
    }
    local_2b8.Size = iVar8;
    uVar9 = local_2b8._8_8_;
    iVar4 = ((int)uVar2 - iVar3) + -1;
    iVar3 = (int)uVar2;
    if (iVar4 < (int)uVar2) {
      iVar3 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    local_2b8.Size = iVar4;
    local_2c8[0] = _Str1 + ((longlong)(int)uVar2 - (longlong)iVar4);
  }
  iVar8 = (int)*(undefined8 *)&param_2->Size;
  iVar3 = (int)uVar9;
  local_2b8.DataPtr = _Str1;
  if (iVar3 == iVar8) {
    if ((iVar3 != 0) && (iVar8 != 0)) {
      iVar5 = iVar8;
      if (iVar3 < iVar8) {
        iVar5 = iVar3;
      }
      iVar5 = wcsncmp(_Str1,param_2->DataPtr,(longlong)iVar5);
      if (iVar5 != 0) goto LAB_141e89a48;
    }
    if ((iVar3 == iVar8) && (iVar8 = (int)*(undefined8 *)&param_3->Size, iVar4 == iVar8)) {
      if ((iVar4 != 0) && (iVar8 != 0)) {
        iVar5 = iVar8;
        if (iVar4 < iVar8) {
          iVar5 = iVar4;
        }
        iVar5 = wcsncmp(local_2c8[0],param_3->DataPtr,(longlong)iVar5);
        if (iVar5 != 0) goto LAB_141e89a48;
      }
      if (iVar4 == iVar8) {
        return;
      }
    }
  }
LAB_141e89a48:
  local_288.Base = local_268;
  plVar1 = *(longlong **)local_2a8;
  local_288.bIsDynamic = false;
  local_288.bIsExternal = false;
  local_2a8 = *(code **)(*plVar1 + 0x28);
  local_288.CurPos = local_268;
  local_288.End = (wchar_t *)local_68;
  pvVar6 = FGenericPlatformString::Memcpy(local_268,L"ObjectPathSplitFirstName",0x30);
  local_288.CurPos = (wchar_t *)((longlong)pvVar6 + 0x30);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_288,L": Expected {\'",0xd);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar7,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\', \'",4);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar7,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\'} but got {\'",0xd);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,local_2b8.DataPtr,iVar3);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\', \'",4);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,local_2c8[0],iVar4);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\'} for input \'",0xe);
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar7,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\'",1);
  if (local_288.End < local_288.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_288,1);
  }
  *local_288.CurPos = L'\0';
  ::FString::FString((FString *)&local_298,local_288.Base);
  (*local_2a8)(plVar1,&local_298,0);
  if ((wchar_t **)local_298.DataPtr != (wchar_t **)0x0) {
    FMemory::Free(local_298.DataPtr);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
  return;
}

// operator() @ 141e89c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPackageNameTests::RunTest'::__l12::<lambda_12>::operator()
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  TStringBuilderBase<wchar_t> *pTVar5;
  ulong64 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_4b8 [32];
  TStringView<wchar_t> local_498;
  TStringBuilderBase<wchar_t> local_488;
  TStringBuilderBase<wchar_t> local_468 [16];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4b8;
  local_498.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_498.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_498.Size = param_1->Size;
  local_498._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_488.Base = (wchar_t *)local_468;
  local_488.End = (wchar_t *)&local_268;
  iVar7 = (int)*(undefined8 *)&param_1->Size;
  uVar6 = (ulong64)iVar7;
  local_488.bIsDynamic = false;
  local_488.bIsExternal = false;
  local_488.CurPos = (wchar_t *)local_468;
  if (&local_268 < (TStringBuilderBase<wchar_t> *)((longlong)&local_468[0].Base + uVar6 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,uVar6);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy
                       (local_488.CurPos,
                        (void *)CONCAT44(local_498.DataPtr._4_4_,local_498.DataPtr._0_4_),uVar6 * 2)
    ;
    local_488.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
  }
  local_498.DataPtr = param_2->DataPtr;
  local_498.Size = param_2->Size;
  local_498._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FPackageName::ObjectPathAppend(&local_488,&local_498);
  iVar8 = (int)*(undefined8 *)&param_3->Size;
  iVar7 = (int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1);
  if (iVar7 == iVar8) {
    if ((iVar7 != 0) && (iVar8 != 0)) {
      iVar3 = iVar8;
      if (iVar7 < iVar8) {
        iVar3 = iVar7;
      }
      iVar3 = wcsncmp(local_488.Base,param_3->DataPtr,(longlong)iVar3);
      if (iVar3 != 0) goto LAB_141e89d11;
    }
    if (iVar7 == iVar8) goto LAB_141e89e8f;
  }
LAB_141e89d11:
  plVar1 = *(longlong **)this;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  pcVar2 = *(code **)(*plVar1 + 0x28);
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  pvVar4 = FGenericPlatformString::Memcpy(local_248,L"ObjectPathAppend",0x20);
  local_268.CurPos = (wchar_t *)((longlong)pvVar4 + 0x20);
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_268,L": Expected \'",0xc);
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar5,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,L"\' but got \'",0xb);
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar5,local_488.Base,
                      (int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1));
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,L"\' for input {\'",0xe);
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar5,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,L"\', \'",4);
  pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar5,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,L"\'}",2);
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FString::FString((FString *)&local_498,local_268.Base);
  (*pcVar2)(plVar1,&local_498,0);
  if (local_498.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_498.DataPtr);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
LAB_141e89e8f:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
  return;
}

// operator() @ 141e89ec0

void __thiscall
`FPackageNameTests::RunTest'::__l13::<lambda_13>::operator()
          (void *this,TStringView<wchar_t> *param_1,bool param_2,TStringView<wchar_t> *param_3,
          TStringView<wchar_t> *param_4,TStringView<wchar_t> *param_5,TStringView<wchar_t> *param_6,
          TStringView<wchar_t> *param_7,EFlexNameType param_8,EErrorCode param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  EErrorCode local_e4;
  EFlexNameType local_e0 [2];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  wchar_t *local_78;
  FScriptContainerElement *local_70;
  longlong *local_68;
  TStringView<wchar_t> local_58;
  
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  bVar1 = FPackageName::TryConvertToMountedPath
                    (&local_58,&local_98,&local_a8,&local_b8,&local_c8,&local_d8,local_e0,&local_e4)
  ;
  if (bVar1 == param_2) {
    iVar4 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    iVar3 = (int)*(undefined8 *)&param_3->Size;
    if (iVar3 == iVar4) {
      if ((iVar3 != 0) && (iVar4 != 0)) {
        iVar2 = iVar4;
        if (iVar3 < iVar4) {
          iVar2 = iVar3;
        }
        iVar2 = FGenericPlatformStricmp::Strnicmp
                          (param_3->DataPtr,(wchar_t *)local_98.Data.AllocatorInstance.Data,
                           (longlong)iVar2);
        if (iVar2 != 0) goto LAB_141e8a139;
      }
      if (iVar3 == iVar4) {
        iVar4 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        iVar3 = (int)*(undefined8 *)&param_4->Size;
        if (iVar3 == iVar4) {
          if ((iVar3 != 0) && (iVar4 != 0)) {
            iVar2 = iVar4;
            if (iVar3 < iVar4) {
              iVar2 = iVar3;
            }
            iVar2 = FGenericPlatformStricmp::Strnicmp
                              (param_4->DataPtr,(wchar_t *)local_a8.Data.AllocatorInstance.Data,
                               (longlong)iVar2);
            if (iVar2 != 0) goto LAB_141e8a139;
          }
          if (iVar3 == iVar4) {
            iVar4 = local_b8.Data.ArrayNum + -1;
            if (local_b8.Data.ArrayNum == 0) {
              iVar4 = 0;
            }
            iVar3 = (int)*(undefined8 *)&param_5->Size;
            if (iVar3 == iVar4) {
              if ((iVar3 != 0) && (iVar4 != 0)) {
                iVar2 = iVar4;
                if (iVar3 < iVar4) {
                  iVar2 = iVar3;
                }
                iVar2 = FGenericPlatformStricmp::Strnicmp
                                  (param_5->DataPtr,(wchar_t *)local_b8.Data.AllocatorInstance.Data,
                                   (longlong)iVar2);
                if (iVar2 != 0) goto LAB_141e8a139;
              }
              if (iVar3 == iVar4) {
                iVar4 = local_c8.Data.ArrayNum + -1;
                if (local_c8.Data.ArrayNum == 0) {
                  iVar4 = 0;
                }
                iVar3 = (int)*(undefined8 *)&param_6->Size;
                if (iVar3 == iVar4) {
                  if ((iVar3 != 0) && (iVar4 != 0)) {
                    iVar2 = iVar4;
                    if (iVar3 < iVar4) {
                      iVar2 = iVar3;
                    }
                    iVar2 = FGenericPlatformStricmp::Strnicmp
                                      (param_6->DataPtr,
                                       (wchar_t *)local_c8.Data.AllocatorInstance.Data,
                                       (longlong)iVar2);
                    if (iVar2 != 0) goto LAB_141e8a139;
                  }
                  if (iVar3 == iVar4) {
                    iVar4 = local_d8.Data.ArrayNum + -1;
                    if (local_d8.Data.ArrayNum == 0) {
                      iVar4 = 0;
                    }
                    iVar3 = (int)*(undefined8 *)&param_7->Size;
                    if (iVar3 == iVar4) {
                      if ((iVar3 != 0) && (iVar4 != 0)) {
                        iVar2 = iVar4;
                        if (iVar3 < iVar4) {
                          iVar2 = iVar3;
                        }
                        iVar2 = FGenericPlatformStricmp::Strnicmp
                                          (param_7->DataPtr,
                                           (wchar_t *)local_d8.Data.AllocatorInstance.Data,
                                           (longlong)iVar2);
                        if (iVar2 != 0) goto LAB_141e8a139;
                      }
                      if (((iVar3 == iVar4) && (local_e0[0] == param_8)) && (local_e4 == param_9))
                      goto LAB_141e8a2bf;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_141e8a139:
  local_78 = param_7->DataPtr;
  local_68 = *(longlong **)this;
  local_58.DataPtr = *(wchar_t **)(*local_68 + 0x28);
  local_70 = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    local_70 = local_d8.Data.AllocatorInstance.Data;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    local_88.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
  }
  ::FString::PrintfImpl
            (&local_88,
             L"Path \'%.*s\' failed FPackageName::TryConvertToMountedPath\ngot      %s,\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',%d,%d,\nexpected %s,\'%.*s\',\'%.*s\',\'%.*s\',\'%.*s\',\'%.*s\',%d,%d."
            );
  (*(code *)local_58.DataPtr)(local_68,&local_88,0);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_141e8a2bf:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
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
  return;
}

// operator() @ 141e8a350

FString * __thiscall
`FPackageNameTests::RunTest'::__l13::<lambda_14>::operator()
          (void *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TStringView<wchar_t> local_38;
  FScriptContainerElement *local_28;
  int local_20;
  FString local_18;
  
  pFVar2 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_38,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  pFVar3 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  if (&local_18 != pFVar2) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  local_38.DataPtr = (wchar_t *)**(undefined8 **)this;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  local_20 = iVar4 + -1;
  if (iVar4 == 0) {
    local_20 = 0;
  }
  local_28 = pFVar3;
  FPaths::CombineInternal(__return_storage_ptr__,&local_38,2);
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// operator() @ 141e8a420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPackageNameTests::RunTest'::__l14::<lambda_15>::operator()
          (void *this,TStringView<wchar_t> *param_1,bool param_2,TStringView<wchar_t> *param_3,
          TStringView<wchar_t> *param_4,TStringView<wchar_t> *param_5,EFlexNameType param_6,
          EErrorCode param_7)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TStringView<wchar_t> *pTVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FString *pFVar11;
  TStringView<wchar_t> *pTVar12;
  TStringView<wchar_t> *pTVar13;
  TStringView<wchar_t> *pTVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  TStringView<wchar_t> *pTVar18;
  TStringView<wchar_t> *pTVar19;
  TStringView<wchar_t> *pTVar20;
  undefined1 auStackY_8b8 [32];
  TStringView<wchar_t> local_828;
  TStringView<wchar_t> *local_810;
  TStringView<wchar_t> local_808;
  FString local_7f8;
  FString local_7e8;
  EErrorCode local_7d8;
  EErrorCode local_7d4;
  EFlexNameType local_7d0 [2];
  TStringView<wchar_t> *local_7c8;
  TStringView<wchar_t> *local_7c0;
  TStringView<wchar_t> *local_7b8;
  TStringView<wchar_t> *local_7a8;
  int iStack_7a0;
  undefined4 uStack_79c;
  EFlexNameType local_798;
  TStringView<wchar_t> *local_790;
  TStringView<wchar_t> *local_788;
  TStringView<wchar_t> *local_780;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  TStringBuilderBase<wchar_t> local_6b8;
  wchar_t local_698 [256];
  TStringBuilderBase<wchar_t> local_498;
  wchar_t local_478 [256];
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  pTVar13 = (TStringView<wchar_t> *)0x0;
  local_7f8.Data.AllocatorInstance.Data = local_7f8.Data.AllocatorInstance.Data & 0xffffffff00000000
  ;
  local_828.DataPtr = param_1->DataPtr;
  local_828.Size = param_1->Size;
  local_828._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_7d8 = param_7;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_498.Base = local_478;
  local_498.CurPos = local_478;
  local_498.End = (wchar_t *)&local_278;
  local_6b8.Base = local_698;
  local_6b8.CurPos = local_698;
  local_6b8.End = (wchar_t *)&local_498;
  local_810 = param_4;
  local_7b8 = param_5;
  local_798 = param_6;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_498.bIsDynamic = false;
  local_498.bIsExternal = false;
  local_6b8.bIsDynamic = false;
  local_6b8.bIsExternal = false;
  local_790 = this;
  local_788 = param_3;
  local_780 = param_1;
  bVar8 = FPackageName::TryGetMountPointForPath
                    (&local_828,&local_278,&local_498,&local_6b8,local_7d0,&local_7d4);
  iVar17 = 0;
  if (((bVar8 == param_2) && (local_7d0[0] == param_6)) && (local_7d4 == local_7d8)) {
    if (!param_2) goto LAB_141e8acfb;
    puVar1 = *(undefined8 **)((longlong)this + 8);
    local_7c0 = (TStringView<wchar_t> *)0x0;
    pFVar11 = ::FString::ConstructFromPtrSize
                        ((FString *)&local_828,local_278.Base,
                         (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1));
    iVar15 = 0;
    local_7a8 = pTVar13;
    iVar16 = iVar15;
    if (&local_738 != pFVar11) {
      local_7a8 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar16 = (pFVar11->Data).ArrayNum;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      local_7c0 = local_7a8;
    }
    if ((TStringView<wchar_t> *)local_828.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_828.DataPtr);
    }
    local_7c8 = (TStringView<wchar_t> *)0x0;
    iStack_7a0 = iVar16 + -1;
    if (iVar16 == 0) {
      iStack_7a0 = iVar15;
    }
    pFVar11 = ::FString::ConstructFromPtrSize
                        ((FString *)&local_828,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
    pTVar14 = pTVar13;
    iVar16 = iVar15;
    if (&local_728 != pFVar11) {
      pTVar14 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar16 = (pFVar11->Data).ArrayNum;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      local_7c8 = pTVar14;
    }
    if ((TStringView<wchar_t> *)local_828.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_828.DataPtr);
    }
    local_7f8.Data.ArrayNum = iVar16 + -1;
    if (iVar16 == 0) {
      local_7f8.Data.ArrayNum = iVar15;
    }
    local_828._12_4_ = local_7f8.Data.ArrayMax;
    local_828.Size = local_7f8.Data.ArrayNum;
    local_828.DataPtr = (wchar_t *)pTVar14;
    local_7f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar14;
    RunTest'::__l2::<lambda_1>::operator()((void *)*puVar1,&local_7e8,&local_828);
    local_828._12_4_ = uStack_79c;
    local_828.Size = iStack_7a0;
    local_828.DataPtr = (wchar_t *)local_7a8;
    RunTest'::__l2::<lambda_1>::operator()((void *)*puVar1,&local_7f8,&local_828);
    bVar9 = FPaths::IsSamePath(&local_7e8,&local_7f8);
    if ((TStringView<wchar_t> *)local_7f8.Data.AllocatorInstance.Data != (TStringView<wchar_t> *)0x0
       ) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
    if ((TStringView<wchar_t> *)local_7e8.Data.AllocatorInstance.Data != (TStringView<wchar_t> *)0x0
       ) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
    bVar3 = false;
    if (bVar9) {
      puVar1 = *(undefined8 **)((longlong)this + 8);
      pFVar11 = ::FString::ConstructFromPtrSize
                          ((FString *)&local_828,local_498.Base,
                           (int)((longlong)local_498.CurPos - (longlong)local_498.Base >> 1));
      pTVar14 = pTVar13;
      iVar16 = iVar15;
      if (&local_758 != pFVar11) {
        pTVar14 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = (pFVar11->Data).ArrayNum;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if ((TStringView<wchar_t> *)local_828.DataPtr != (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_828.DataPtr);
      }
      iStack_7a0 = iVar16 + -1;
      if (iVar16 == 0) {
        iStack_7a0 = 0;
      }
      local_7a8 = pTVar14;
      pFVar11 = ::FString::ConstructFromPtrSize
                          ((FString *)&local_828,local_810->DataPtr,
                           (int)*(undefined8 *)&local_810->Size);
      pTVar19 = pTVar13;
      iVar16 = iVar15;
      if (&local_748 != pFVar11) {
        pTVar19 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = (pFVar11->Data).ArrayNum;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if ((TStringView<wchar_t> *)local_828.DataPtr != (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_828.DataPtr);
      }
      local_7e8.Data.ArrayNum = iVar16 + -1;
      if (iVar16 == 0) {
        local_7e8.Data.ArrayNum = iVar17;
      }
      local_828._12_4_ = local_7e8.Data.ArrayMax;
      local_828.Size = local_7e8.Data.ArrayNum;
      local_828.DataPtr = (wchar_t *)pTVar19;
      local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar19;
      RunTest'::__l2::<lambda_1>::operator()((void *)*puVar1,&local_7f8,&local_828);
      local_828._12_4_ = uStack_79c;
      local_828.Size = iStack_7a0;
      local_828.DataPtr = (wchar_t *)local_7a8;
      RunTest'::__l2::<lambda_1>::operator()((void *)*puVar1,&local_7e8,&local_828);
      bVar9 = FPaths::IsSamePath(&local_7f8,&local_7e8);
      if ((TStringView<wchar_t> *)local_7e8.Data.AllocatorInstance.Data !=
          (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
      }
      if ((TStringView<wchar_t> *)local_7f8.Data.AllocatorInstance.Data !=
          (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
      bVar3 = true;
      local_758.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar14;
      local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar19;
      if (!bVar9) goto LAB_141e8a903;
      local_7f8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)((longlong)this + 8);
      pFVar11 = ::FString::ConstructFromPtrSize
                          ((FString *)&local_828,local_6b8.Base,
                           (int)((longlong)local_6b8.CurPos - (longlong)local_6b8.Base >> 1));
      pTVar20 = pTVar13;
      iVar16 = iVar17;
      if (&local_778 != pFVar11) {
        pTVar20 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = (pFVar11->Data).ArrayNum;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if ((TStringView<wchar_t> *)local_828.DataPtr != (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_828.DataPtr);
      }
      iStack_7a0 = iVar16 + -1;
      if (iVar16 == 0) {
        iStack_7a0 = 0;
      }
      local_7a8 = pTVar20;
      pFVar11 = ::FString::ConstructFromPtrSize
                          ((FString *)&local_828,local_7b8->DataPtr,
                           (int)*(undefined8 *)&local_7b8->Size);
      pTVar18 = pTVar13;
      iVar16 = iVar15;
      if (&local_768 != pFVar11) {
        pTVar18 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = (pFVar11->Data).ArrayNum;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if ((TStringView<wchar_t> *)local_828.DataPtr != (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_828.DataPtr);
      }
      FVar6.Data = local_7f8.Data.AllocatorInstance.Data;
      local_7e8.Data.ArrayNum = iVar16 + -1;
      if (iVar16 == 0) {
        local_7e8.Data.ArrayNum = iVar15;
      }
      local_808._12_4_ = local_7e8.Data.ArrayMax;
      local_808.Size = local_7e8.Data.ArrayNum;
      local_808.DataPtr = (wchar_t *)pTVar18;
      local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar18;
      RunTest'::__l2::<lambda_1>::operator()
                (*(void **)local_7f8.Data.AllocatorInstance.Data,(FString *)&local_828,&local_808);
      local_808._12_4_ = uStack_79c;
      local_808.Size = iStack_7a0;
      local_808.DataPtr = (wchar_t *)local_7a8;
      RunTest'::__l2::<lambda_1>::operator()(*(void **)FVar6.Data,&local_7e8,&local_808);
      bVar10 = FPaths::IsSamePath((FString *)&local_828,&local_7e8);
      if ((TStringView<wchar_t> *)local_7e8.Data.AllocatorInstance.Data !=
          (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
      }
      if ((TStringView<wchar_t> *)local_828.DataPtr != (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_828.DataPtr);
      }
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar9 = true;
      local_768.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar18;
      local_778.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar20;
      if (!bVar10) goto LAB_141e8a90b;
      bVar2 = true;
      bVar3 = true;
      bVar4 = true;
      bVar7 = true;
LAB_141e8a914:
      bVar10 = bVar7;
      local_778.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar20;
      local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar19;
      if ((TStringView<wchar_t> *)local_768.Data.AllocatorInstance.Data !=
          (TStringView<wchar_t> *)0x0) {
        FMemory::Free(local_768.Data.AllocatorInstance.Data);
      }
    }
    else {
LAB_141e8a903:
      bVar2 = false;
      bVar9 = false;
LAB_141e8a90b:
      bVar10 = false;
      pTVar14 = (TStringView<wchar_t> *)local_758.Data.AllocatorInstance.Data;
      pTVar20 = (TStringView<wchar_t> *)local_778.Data.AllocatorInstance.Data;
      pTVar19 = (TStringView<wchar_t> *)local_748.Data.AllocatorInstance.Data;
      bVar7 = false;
      if (bVar9) goto LAB_141e8a914;
    }
    if ((bVar2) &&
       ((TStringView<wchar_t> *)local_778.Data.AllocatorInstance.Data != (TStringView<wchar_t> *)0x0
       )) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
    if ((bVar3) &&
       ((TStringView<wchar_t> *)local_748.Data.AllocatorInstance.Data != (TStringView<wchar_t> *)0x0
       )) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (pTVar14 != (TStringView<wchar_t> *)0x0)) {
      FMemory::Free(pTVar14);
    }
    if (local_7c8 != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_7c8);
    }
    if (local_7c0 != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_7c0);
    }
    param_5 = local_7b8;
    this = local_790;
    param_4 = local_810;
    if (bVar10) goto LAB_141e8acfb;
  }
  if (!bVar8) {
    local_278.CurPos = local_278.Base;
    local_498.CurPos = local_498.Base;
    local_6b8.CurPos = local_6b8.Base;
  }
  local_7c8 = (TStringView<wchar_t> *)((TStringView<wchar_t> *)this)->DataPtr;
  local_7f8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(local_7c8->DataPtr + 0x14);
  pFVar11 = ::FString::ConstructFromPtrSize
                      ((FString *)&local_808,param_5->DataPtr,(int)*(undefined8 *)&param_5->Size);
  pTVar14 = pTVar13;
  iVar16 = iVar17;
  if (&local_718 != pFVar11) {
    pTVar14 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = (pFVar11->Data).ArrayNum;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if ((TStringView<wchar_t> *)local_808.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_808.DataPtr);
  }
  local_790 = (TStringView<wchar_t> *)L"";
  if (iVar16 != 0) {
    local_790 = pTVar14;
  }
  pFVar11 = ::FString::ConstructFromPtrSize
                      ((FString *)&local_808,param_4->DataPtr,(int)*(undefined8 *)&param_4->Size);
  pTVar19 = pTVar13;
  iVar16 = iVar17;
  if (&local_708 != pFVar11) {
    pTVar19 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = (pFVar11->Data).ArrayNum;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if ((TStringView<wchar_t> *)local_808.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_808.DataPtr);
  }
  local_7b8 = (TStringView<wchar_t> *)L"";
  if (iVar16 != 0) {
    local_7b8 = pTVar19;
  }
  pFVar11 = ::FString::ConstructFromPtrSize
                      ((FString *)&local_808,local_788->DataPtr,(int)*(undefined8 *)&local_788->Size
                      );
  pTVar20 = pTVar13;
  iVar16 = iVar17;
  if (&local_6f8 != pFVar11) {
    pTVar20 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = (pFVar11->Data).ArrayNum;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if ((TStringView<wchar_t> *)local_808.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_808.DataPtr);
  }
  local_788 = (TStringView<wchar_t> *)L"";
  if (iVar16 != 0) {
    local_788 = pTVar20;
  }
  pFVar11 = ::FString::ConstructFromPtrSize
                      ((FString *)&local_808,local_6b8.Base,
                       (int)((longlong)local_6b8.CurPos - (longlong)local_6b8.Base >> 1));
  pTVar18 = pTVar13;
  iVar16 = iVar17;
  if (&local_6e8 != pFVar11) {
    pTVar18 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = (pFVar11->Data).ArrayNum;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if ((TStringView<wchar_t> *)local_808.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_808.DataPtr);
  }
  local_7c0 = (TStringView<wchar_t> *)L"";
  if (iVar16 != 0) {
    local_7c0 = pTVar18;
  }
  pFVar11 = ::FString::ConstructFromPtrSize
                      ((FString *)&local_808,local_498.Base,
                       (int)((longlong)local_498.CurPos - (longlong)local_498.Base >> 1));
  local_810 = (TStringView<wchar_t> *)0x0;
  if (&local_6d8 != pFVar11) {
    local_810 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar17 = (pFVar11->Data).ArrayNum;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  pTVar5 = local_810;
  if ((TStringView<wchar_t> *)local_808.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_808.DataPtr);
  }
  pTVar12 = (TStringView<wchar_t> *)L"";
  if (iVar17 != 0) {
    pTVar12 = local_810;
  }
  local_810 = pTVar12;
  pFVar11 = ::FString::ConstructFromPtrSize
                      ((FString *)&local_808,local_278.Base,
                       (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1));
  if (&local_6c8 != pFVar11) {
    pTVar13 = (TStringView<wchar_t> *)(pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if ((TStringView<wchar_t> *)local_808.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_808.DataPtr);
  }
  ::FString::PrintfImpl
            ((FString *)&local_828,
             L"Path \'%.*s\' failed FPackageName::TestTryGetMountPointForPath\ngot      %s,\'%s\',\'%s\',\'%s\',%d,%d,\nexpected %s,\'%s\',\'%s\',\'%s\',%d,%d."
            );
  (*(code *)local_7f8.Data.AllocatorInstance.Data)(local_7c8,&local_828,0);
  if ((TStringView<wchar_t> *)local_828.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_828.DataPtr);
  }
  if (pTVar13 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(pTVar13);
  }
  if (pTVar5 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(pTVar5);
  }
  if (pTVar18 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(pTVar18);
  }
  if (pTVar20 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(pTVar20);
  }
  if (pTVar19 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(pTVar19);
  }
  if (pTVar14 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(pTVar14);
  }
LAB_141e8acfb:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6b8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_498);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return;
}

// operator() @ 141e8b800

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
`FPackageNameTests::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  short sVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  int iVar9;
  FString local_48;
  FString local_38;
  FString local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->Size;
  uVar2 = *(undefined8 *)&param_1->Size;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar7 = ::FString::ConstructFromPtrSize(&local_28,param_1->DataPtr,(int)uVar2);
  if (__return_storage_ptr__ != pFVar7) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar6 = iswalpha(0x5c);
  if (iVar6 == 0) {
    ::FString::ReplaceCharInlineCaseSensitive(__return_storage_ptr__,L'\\',L'/');
  }
  else {
    ::FString::ReplaceCharInlineIgnoreCase(__return_storage_ptr__,L'\\',L'/');
  }
  iVar6 = (__return_storage_ptr__->Data).ArrayNum;
  iVar8 = 0;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = iVar8;
  }
  if (1 < iVar9) {
    if (((iVar9 + -1 < 0) || (iVar9 <= iVar9 + -1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
    sVar1 = *(short *)((__return_storage_ptr__->Data).AllocatorInstance.Data +
                      (longlong)iVar9 * 2 + -2);
    iVar6 = (__return_storage_ptr__->Data).ArrayNum;
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = iVar8;
    }
    if (((iVar9 + -2 < 0) || (iVar9 <= iVar9 + -2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
    if (((sVar1 == 0x2f) &&
        (sVar1 = *(short *)((__return_storage_ptr__->Data).AllocatorInstance.Data +
                           (longlong)iVar9 * 2 + -4), sVar1 != 0x2f)) && (sVar1 != 0x3a)) {
      iVar6 = (__return_storage_ptr__->Data).ArrayNum;
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = iVar8;
      }
      if (iVar9 + -1 < iVar9) {
        iVar9 = iVar9 + -1;
      }
      if (0 < iVar9) {
        iVar8 = iVar9;
      }
      ::FString::RemoveAt(__return_storage_ptr__,iVar8,1,Default);
    }
  }
  bVar5 = ::FString::StartsWith(__return_storage_ptr__,L"//",2,IgnoreCase);
  if (bVar5) {
    ::FString::RightChop(__return_storage_ptr__,&local_38,2);
    ::FString::ReplaceInline(&local_38,L"//",L"/",IgnoreCase);
    ::FString::ConcatCF(&local_48,L"//",&local_38);
    if (__return_storage_ptr__ != &local_48) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    ::FString::ReplaceInline(__return_storage_ptr__,L"//",L"/",IgnoreCase);
  }
  return __return_storage_ptr__;
}

// operator() @ 141e8d180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPackageNameTests::RunTest'::__l4::<lambda_4>::operator()
          (void *this,FString *param_1,FString *param_2)

{
  wchar_t wVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  FString local_38;
  FString local_28;
  
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar9 = (longlong)local_38.Data.ArrayNum;
  pFVar6 = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar6,lVar9 * 2);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar6 = FVar5.Data + 2;
  if (*(wchar_t *)FVar5.Data == L'/') {
    do {
      wVar1 = *(wchar_t *)pFVar6;
      if (wVar1 == L'\0') break;
      pFVar6 = pFVar6 + 2;
    } while (wVar1 != L'/');
    if (*(wchar_t *)pFVar6 != L'\0') {
      iVar8 = 5;
      iVar4 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar6,L"L10N/",5);
      if (iVar4 == 0) {
        iVar8 = 6;
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar5.Data = local_38.Data.AllocatorInstance.Data;
        }
        pFVar7 = pFVar6 + 10;
        iVar4 = (int)((longlong)(pFVar6 + (-2 - (longlong)FVar5.Data)) >> 1);
        wVar1 = *(wchar_t *)pFVar7;
        while ((wVar1 != L'\0' && (pFVar7 = pFVar7 + 2, wVar1 != L'/'))) {
          iVar8 = iVar8 + 1;
          wVar1 = *(wchar_t *)pFVar7;
        }
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar6,L"L10N");
        if (iVar4 != 0) goto LAB_141e8d2d5;
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar5.Data = local_38.Data.AllocatorInstance.Data;
        }
        iVar4 = (int)((longlong)(pFVar6 + (-2 - (longlong)FVar5.Data)) >> 1);
      }
      ::FString::RemoveAt(&local_38,iVar4,iVar8,Default);
    }
  }
LAB_141e8d2d5:
  iVar8 = (param_2->Data).ArrayNum;
  if (local_38.Data.ArrayNum == iVar8) {
    if (local_38.Data.ArrayNum < 2) goto LAB_141e8d36b;
    iVar8 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar10 = iVar8 == 0;
  }
  else {
    bVar10 = iVar8 + local_38.Data.ArrayNum == 1;
  }
  if (!bVar10) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl
              (&local_28,
               L"Path \'%s\' failed FPackageName::GetSourcePackagePath (got \'%s\', expected \'%s\')."
              );
    (*pcVar3)(plVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
LAB_141e8d36b:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141e8d3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPackageNameTests::RunTest'::__l5::<lambda_5>::operator()
          (void *this,TStringView<wchar_t> *param_1,
          TArrayView<TStringView<wchar_t>_const_,int> *param_2,
          TFunctionRef<TStringView<wchar_t>___cdecl(TStringView<wchar_t>)> *param_3)

{
  undefined8 *puVar1;
  TStringView<wchar_t> *pTVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  TStringBuilderBase<wchar_t> *pTVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined8 *local_348;
  longlong local_340;
  TFunctionRef<TStringView<wchar_t>___cdecl(TStringView<wchar_t>)> *local_338;
  TStringView<wchar_t> *local_330;
  undefined8 *local_328;
  longlong *local_320;
  code *local_318;
  wchar_t *local_308;
  int iStack_300;
  FString local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  wchar_t *local_2d8;
  undefined8 uStack_2d0;
  wchar_t *local_2c8;
  undefined8 uStack_2c0;
  wchar_t *local_2b8;
  undefined8 uStack_2b0;
  wchar_t *local_2a8;
  undefined8 uStack_2a0;
  wchar_t *local_298;
  undefined8 uStack_290;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [256];
  ulonglong local_68 [5];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348 = this;
  local_338 = param_3;
  local_330 = param_1;
  if ((param_2->ArrayNum != 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(sizeof(UEArrayCountHelper(SourceObjectPaths)) - 1) == ExpectedOutputPaths.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                         ,0xdd6,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = 0;
  local_340 = 0;
  uVar16 = uVar12;
  do {
    local_2e8 = *(undefined8 *)(uVar16 + local_348[1]);
    uStack_2e0 = ((undefined8 *)(uVar16 + local_348[1]))[1];
    (**(code **)local_338)(&local_308,*(undefined8 *)&local_338->field_0x8,&local_2e8);
    iVar15 = param_2->ArrayNum;
    uVar13 = (uint)uVar12;
    uVar7 = 0;
    if ((int)uVar13 < iVar15) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_358 = (longlong)(int)uVar13;
      local_350 = (longlong)iVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = iStack_300;
    puVar1 = (undefined8 *)((longlong)&param_2->DataPtr->DataPtr + uVar16);
    local_2d8 = (wchar_t *)*puVar1;
    uStack_2d0 = puVar1[1];
    iVar14 = (int)*(undefined8 *)((longlong)&param_2->DataPtr->Size + uVar16);
    if (iStack_300 == iVar14) {
      local_2c8 = local_2d8;
      uStack_2c0 = uStack_2d0;
      if ((iStack_300 != 0) && (iVar14 != 0)) {
        iVar8 = iVar14;
        if (iStack_300 < iVar14) {
          iVar8 = iStack_300;
        }
        iVar8 = FGenericPlatformStricmp::Strnicmp(local_308,local_2d8,(longlong)iVar8);
        if (iVar8 != 0) goto LAB_141e8d4f3;
      }
      if (iVar5 != iVar14) goto LAB_141e8d4f3;
    }
    else {
LAB_141e8d4f3:
      local_320 = (longlong *)*local_348;
      local_318 = *(code **)(*local_320 + 0x28);
      local_328 = (undefined8 *)(local_348[1] + uVar16);
      uVar7 = 0;
      if ((int)uVar13 < iVar15) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_350 = (longlong)iVar15;
        local_358 = local_340;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar2 = param_2->DataPtr;
      local_288.Base = local_268;
      local_288.End = (wchar_t *)local_68;
      local_288.bIsDynamic = false;
      local_288.bIsExternal = false;
      local_288.CurPos = local_268;
      pwVar4 = local_330->DataPtr;
      uStack_2b0 = *(undefined8 *)&local_330->Size;
      iVar15 = (int)*(undefined8 *)&local_330->Size;
      uVar11 = (ulong64)iVar15;
      local_2b8 = pwVar4;
      if (local_68 < local_268 + uVar11) {
        TStringBuilderBase<wchar_t>::Extend(&local_288,uVar11);
      }
      if (iVar15 != 0) {
        pvVar9 = FGenericPlatformString::Memcpy(local_288.CurPos,pwVar4,uVar11 * 2);
        local_288.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
      }
      pTVar10 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_288,L": Expected \'",0xc);
      puVar1 = (undefined8 *)((longlong)&pTVar2->DataPtr + uVar16);
      local_2a8 = (wchar_t *)*puVar1;
      uStack_2a0 = puVar1[1];
      pTVar10 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar10,local_2a8,(int)*(undefined8 *)((longlong)&pTVar2->Size + uVar16))
      ;
      pTVar10 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar10,L"\' but got \'",0xb);
      pTVar10 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar10,local_308,iStack_300);
      pTVar10 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar10,L"\' for input \'",0xd);
      local_298 = (wchar_t *)*local_328;
      uStack_290 = local_328[1];
      pTVar10 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar10,local_298,(int)local_328[1]);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar10,L"\'",1);
      if (local_288.End < local_288.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_288,1);
      }
      *local_288.CurPos = L'\0';
      ::FString::FString(&local_2f8,local_288.Base);
      (*local_318)(local_320,&local_2f8,0);
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
    }
    local_340 = local_340 + 1;
    uVar12 = (ulonglong)(uVar13 + 1);
    uVar16 = uVar16 + 0x10;
    if (3 < uVar13 + 1) {
      return;
    }
  } while( true );
}

