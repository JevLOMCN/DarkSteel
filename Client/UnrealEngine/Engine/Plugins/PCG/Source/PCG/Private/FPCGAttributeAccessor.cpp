// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 75

// GetRangeImpl @ 149e60c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<int>::GetRangeImpl
          (FPCGAttributeAccessor<int> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<int> *this_00;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<int,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    piVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = piVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<int>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e60fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<float>::GetRangeImpl
          (FPCGAttributeAccessor<float> *this,TArrayView<float,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<float> *this_00;
  code *pcVar2;
  float *pfVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<float,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pfVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pfVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<float>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e61320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<double>::GetRangeImpl
          (FPCGAttributeAccessor<double> *this,TArrayView<double,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<double> *this_00;
  code *pcVar2;
  double *pdVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<double,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pdVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pdVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<double>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e616a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  code *pcVar2;
  TQuat<double> *pTVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<UE::Math::TQuat<double>,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pTVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pTVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValuesFromItemKeys
              (this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e61a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TRotator<double>_>::GetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TRotator<double>_> *this,
          TArrayView<UE::Math::TRotator<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this_00;
  code *pcVar2;
  TRotator<double> *pTVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<UE::Math::TRotator<double>,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pTVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pTVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValuesFromItemKeys
              (this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e61da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TTransform<double>_>::GetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TTransform<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_00;
  code *pcVar2;
  TTransform<double> *pTVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<UE::Math::TTransform<double>,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pTVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pTVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValuesFromItemKeys
              (this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e62120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector2<double>_>::GetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this_00;
  code *pcVar2;
  TVector2<double> *pTVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<UE::Math::TVector2<double>,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pTVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pTVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValuesFromItemKeys
              (this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e624a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector4<double>_>::GetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector4<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this_00;
  code *pcVar2;
  TVector4<double> *pTVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<UE::Math::TVector4<double>,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pTVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pTVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValuesFromItemKeys
              (this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e62820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector<double>_>::GetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_00;
  code *pcVar2;
  TVector<double> *pTVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<UE::Math::TVector<double>,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pTVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pTVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValuesFromItemKeys
              (this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e62ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FSoftClassPath>::GetRangeImpl
          (FPCGAttributeAccessor<FSoftClassPath> *this,TArrayView<FSoftClassPath,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<FSoftClassPath> *this_00;
  code *pcVar2;
  FSoftClassPath *pFVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<FSoftClassPath,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pFVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pFVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<FSoftClassPath>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e62f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FSoftObjectPath>::GetRangeImpl
          (FPCGAttributeAccessor<FSoftObjectPath> *this,TArrayView<FSoftObjectPath,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<FSoftObjectPath> *this_00;
  code *pcVar2;
  FSoftObjectPath *pFVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<FSoftObjectPath,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pFVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pFVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<FSoftObjectPath>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e632a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FName>::GetRangeImpl
          (FPCGAttributeAccessor<FName> *this,TArrayView<FName,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<FName> *this_00;
  code *pcVar2;
  FName *pFVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<FName,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pFVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pFVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<FName>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e63620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FString>::GetRangeImpl
          (FPCGAttributeAccessor<FString> *this,TArrayView<FString,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<FString> *this_00;
  code *pcVar2;
  FString *pFVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<FString,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pFVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pFVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<FString>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e639a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<__int64>::GetRangeImpl
          (FPCGAttributeAccessor<__int64> *this,TArrayView<__int64,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<__int64> *this_00;
  code *pcVar2;
  long64 *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<__int64,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    plVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = plVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<__int64>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// GetRangeImpl @ 149e63d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<bool>::GetRangeImpl
          (FPCGAttributeAccessor<bool> *this,TArrayView<bool,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  ForElementType<__int64_const_*> FVar1;
  FPCGMetadataAttribute<bool> *this_00;
  code *pcVar2;
  bool *pbVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<__int64> FVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<__int64_const_*> FVar13;
  undefined1 auStackY_1138 [32];
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  ForElementType<__int64_const_*> local_10d8;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  ForElementType<__int64> local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  TArrayView<__int64_const_*,int> local_10b8;
  TArrayView<bool,int> local_10a8;
  TArrayView<__int64,int> local_1098;
  ForElementType<__int64> local_1088;
  int local_880;
  int local_87c;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_878;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_878.ArrayMax = 0x100;
  bVar8 = false;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<__int64_const_*>)0x0;
  local_878.ArrayNum = 0;
  TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_878,param_1->ArrayNum,Default);
  uStack_10d0 = local_878.ArrayNum;
  local_10d8 = (ForElementType<__int64_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    local_10d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_10b8._12_4_ = uStack_10cc;
  local_10b8.ArrayNum = uStack_10d0;
  local_10b8.DataPtr = (long64 **)local_10d8;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_3,param_2,&local_10b8);
  if (bVar6) {
    uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    local_1088.SecondaryData = (ForElementType<__int64>)0x0;
    local_880 = 0;
    local_87c = 0x100;
    if (local_878.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (0x100 < local_878.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                (8,8,local_878.ArrayNum,&local_1088,0,&local_87c);
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    iVar11 = (int)uVar12;
    FVar13 = (ForElementType<__int64_const_*>)&local_878;
    if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
      FVar13 = local_878.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<__int64_const_*>)((longlong)FVar13 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)uVar12 != iVar11) {
        local_10e8[0] = 0;
        `TCheckedPointerIterator<__int64_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_10e8);
      }
      iVar5 = local_880;
      if (FVar13 == FVar1) break;
      local_10e0 = **(undefined8 **)FVar13;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_10e0) {
        FVar9 = (ForElementType<__int64>)&local_1088;
        if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar9 = local_1088.SecondaryData;
        }
        if ((&local_10e0 < (undefined8 *)((longlong)FVar9 + (longlong)local_87c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      if (local_880 == local_87c) {
        local_880 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1088,&local_87c);
      }
      lVar10 = (longlong)local_880;
      FVar9 = (ForElementType<__int64>)&local_1088;
      if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar9 = local_1088.SecondaryData;
      }
      FVar13 = (ForElementType<__int64_const_*>)((longlong)FVar13 + 8);
      local_880 = local_880 + 1;
      *(undefined8 *)((longlong)FVar9 + lVar10 * 8) = local_10e0;
      uVar12 = (ulonglong)(uint)local_878.ArrayNum;
    }
    this_00 = this->Attribute;
    pbVar3 = param_1->DataPtr;
    uVar4._0_4_ = param_1->ArrayNum;
    uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_10c8 = (ForElementType<__int64>)&local_1088;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      local_10c8 = local_1088.SecondaryData;
    }
    if ((local_880 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_1098._12_4_ = uStack_10bc;
    local_1098.ArrayNum = iVar5;
    local_1098.DataPtr = (long64 *)local_10c8;
    iStack_10c0 = iVar5;
    local_10a8.DataPtr = pbVar3;
    local_10a8._8_8_ = uVar4;
    FPCGMetadataAttribute<bool>::GetValuesFromItemKeys(this_00,&local_1098,&local_10a8);
    bVar8 = true;
    if (local_1088.SecondaryData != (ForElementType<__int64>)0x0) {
      FMemory::Free((void *)local_1088.SecondaryData);
    }
  }
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<__int64_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// IsAttribute @ 149e77a90

bool __thiscall FPCGAttributeAccessor<int>::IsAttribute(FPCGAttributeAccessor<int> *this)

{
  return true;
}

// IsAttribute @ 149e77aa0

bool __thiscall FPCGAttributeAccessor<float>::IsAttribute(FPCGAttributeAccessor<float> *this)

{
  return true;
}

// IsAttribute @ 149e77ab0

bool __thiscall FPCGAttributeAccessor<double>::IsAttribute(FPCGAttributeAccessor<double> *this)

{
  return true;
}

// IsAttribute @ 149e77ac0

bool __thiscall
FPCGAttributeAccessor<UE::Math::TQuat<double>_>::IsAttribute
          (FPCGAttributeAccessor<UE::Math::TQuat<double>_> *this)

{
  return true;
}

// IsAttribute @ 149e77ad0

bool __thiscall
FPCGAttributeAccessor<UE::Math::TRotator<double>_>::IsAttribute
          (FPCGAttributeAccessor<UE::Math::TRotator<double>_> *this)

{
  return true;
}

// IsAttribute @ 149e77ae0

bool __thiscall
FPCGAttributeAccessor<UE::Math::TTransform<double>_>::IsAttribute
          (FPCGAttributeAccessor<UE::Math::TTransform<double>_> *this)

{
  return true;
}

// IsAttribute @ 149e77af0

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector2<double>_>::IsAttribute
          (FPCGAttributeAccessor<UE::Math::TVector2<double>_> *this)

{
  return true;
}

// IsAttribute @ 149e77b00

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector4<double>_>::IsAttribute
          (FPCGAttributeAccessor<UE::Math::TVector4<double>_> *this)

{
  return true;
}

// IsAttribute @ 149e77b10

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector<double>_>::IsAttribute
          (FPCGAttributeAccessor<UE::Math::TVector<double>_> *this)

{
  return true;
}

// IsAttribute @ 149e77b20

bool __thiscall
FPCGAttributeAccessor<FSoftClassPath>::IsAttribute(FPCGAttributeAccessor<FSoftClassPath> *this)

{
  return true;
}

// IsAttribute @ 149e77b30

bool __thiscall
FPCGAttributeAccessor<FSoftObjectPath>::IsAttribute(FPCGAttributeAccessor<FSoftObjectPath> *this)

{
  return true;
}

// IsAttribute @ 149e77b40

bool __thiscall FPCGAttributeAccessor<FName>::IsAttribute(FPCGAttributeAccessor<FName> *this)

{
  return true;
}

// IsAttribute @ 149e77b50

bool __thiscall FPCGAttributeAccessor<FString>::IsAttribute(FPCGAttributeAccessor<FString> *this)

{
  return true;
}

// IsAttribute @ 149e77b60

bool __thiscall FPCGAttributeAccessor<__int64>::IsAttribute(FPCGAttributeAccessor<__int64> *this)

{
  return true;
}

// IsAttribute @ 149e77b70

bool __thiscall FPCGAttributeAccessor<bool>::IsAttribute(FPCGAttributeAccessor<bool> *this)

{
  return true;
}

// Prepare @ 149e7a4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<int>::Prepare
          (FPCGAttributeAccessor<int> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<int> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<int>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7abd6;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<int>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<int>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7a9e9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7a9e9:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7abd6:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7ac30

void __thiscall
FPCGAttributeAccessor<int>::Prepare
          (FPCGAttributeAccessor<int> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<int> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7ad30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<float>::Prepare
          (FPCGAttributeAccessor<float> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<float> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<float>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7b446;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<float>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<float>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7b259;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7b259:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7b446:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7b4a0

void __thiscall
FPCGAttributeAccessor<float>::Prepare
          (FPCGAttributeAccessor<float> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<float> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7b5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<double>::Prepare
          (FPCGAttributeAccessor<double> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<double> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<double>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7bcb6;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<double>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<double>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7bac9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7bac9:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7bcb6:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7bd10

void __thiscall
FPCGAttributeAccessor<double>::Prepare
          (FPCGAttributeAccessor<double> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<double> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7be10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TQuat<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TQuat<double>_> *this,IPCGAttributeAccessorKeys *param_1,
          int param_2,bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,
          int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TQuat<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7c526;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TQuat<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TQuat<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7c339;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7c339:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->field_0x58;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->field_0x8,
              (*(int *)&pFVar4->field_0x10 - *(int *)&pFVar4->field_0x3c) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->field_0x8,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7c526:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7c580

void __thiscall
FPCGAttributeAccessor<UE::Math::TQuat<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TQuat<double>_> *this,IPCGAttributeAccessorKeys *param_1,
          int param_2,bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->field_0x8,
            (*(int *)&pFVar2->field_0x10 - *(int *)&pFVar2->field_0x3c) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,
                 &(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7c690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TRotator<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TRotator<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3,int param_4,bool param_5,
          TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TRotator<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7cda6;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TRotator<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TRotator<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7cbb9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7cbb9:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7cda6:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7ce00

void __thiscall
FPCGAttributeAccessor<UE::Math::TRotator<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TRotator<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7cf10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TTransform<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TTransform<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3,int param_4,bool param_5,
          TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TTransform<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7d626;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TTransform<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TTransform<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7d439;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7d439:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->field_0x58;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->field_0x8,
              (*(int *)&pFVar4->field_0x10 - *(int *)&pFVar4->field_0x3c) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->field_0x8,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7d626:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7d680

void __thiscall
FPCGAttributeAccessor<UE::Math::TTransform<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TTransform<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->field_0x8,
            (*(int *)&pFVar2->field_0x10 - *(int *)&pFVar2->field_0x3c) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,
                 &(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7d790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector2<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TVector2<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3,int param_4,bool param_5,
          TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector2<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7dea6;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector2<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector2<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7dcb9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7dcb9:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7dea6:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7df00

void __thiscall
FPCGAttributeAccessor<UE::Math::TVector2<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TVector2<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7e010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector4<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TVector4<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3,int param_4,bool param_5,
          TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector4<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7e726;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector4<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector4<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7e539;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7e539:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->field_0x58;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->field_0x8,
              (*(int *)&pFVar4->field_0x10 - *(int *)&pFVar4->field_0x3c) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->field_0x8,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7e726:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7e780

void __thiscall
FPCGAttributeAccessor<UE::Math::TVector4<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TVector4<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->field_0x8,
            (*(int *)&pFVar2->field_0x10 - *(int *)&pFVar2->field_0x3c) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,
                 &(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7e890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TVector<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3,int param_4,bool param_5,
          TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7efa6;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<UE::Math::TVector<double>_>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7edb9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7edb9:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7efa6:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7f000

void __thiscall
FPCGAttributeAccessor<UE::Math::TVector<double>_>::Prepare
          (FPCGAttributeAccessor<UE::Math::TVector<double>_> *this,
          IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7f110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FSoftClassPath>::Prepare
          (FPCGAttributeAccessor<FSoftClassPath> *this,IPCGAttributeAccessorKeys *param_1,
          int param_2,bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,
          int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 auStackY_2158 [32];
  longlong *local_20e8;
  int *local_20e0;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  ForElementType<__int64_*> local_20c8;
  int iStack_20c0;
  undefined4 uStack_20bc;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  ForElementType<__int64_*> local_2078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2158;
  local_20e0 = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<FSoftClassPath>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar17 = local_1068.ArrayNum;
    iStack_20d0 = local_1068.ArrayNum;
    local_20d8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20d8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar15 = local_20d8._0_4_;
    uVar16 = local_20d8._4_4_;
  }
  else {
    uVar15 = *(undefined4 *)&param_6->DataPtr;
    uVar16 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar17 = param_6->ArrayNum;
    uStack_20cc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2098.DataPtr._0_4_ = uVar15;
  local_2098.DataPtr._4_4_ = uVar16;
  local_2098.ArrayNum = iVar17;
  local_2098._12_4_ = uStack_20cc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7f73d;
  }
  local_2078.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,&local_2078,0,&local_106c);
  }
  FVar12 = local_2078.SecondaryData;
  if (0 < iVar17) {
    puVar14 = (undefined8 *)CONCAT44(uVar16,uVar15);
    do {
      uVar9 = 0;
      if ((int)uVar13 < iVar17) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_2078.SecondaryData, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar14;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)&local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_20e8 = plVar3;
        if ((ulonglong)FVar10 <= &local_20e8) {
          FVar10 = (ForElementType<__int64_*>)&local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_20e8 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_2078.SecondaryData, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,&local_2078,&local_106c);
          FVar12 = local_2078.SecondaryData;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)&local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_20e8;
        FVar12 = local_2078.SecondaryData;
      }
      uVar13 = uVar13 + 1;
      puVar14 = puVar14 + 1;
    } while ((int)uVar13 < iVar17);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<FSoftClassPath>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<FSoftClassPath>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7f639;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)&local_2078;
        if (local_2078.SecondaryData != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_2078.SecondaryData;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7f639:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20c8 = (ForElementType<__int64_*>)&local_2078;
      if (local_2078.SecondaryData != (ForElementType<__int64_*>)0x0) {
        local_20c8 = local_2078.SecondaryData;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20c0 = iVar1;
      local_2088._12_4_ = uStack_20bc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20c8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_2078.SecondaryData;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_2078.SecondaryData;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->_padding_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar17);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->_padding_);
      FVar12 = local_2078.SecondaryData;
      if (local_20e0 != (int *)0x0) {
        *local_20e0 = -1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_2078.SecondaryData;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7f73d:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7f790

void __thiscall
FPCGAttributeAccessor<FSoftClassPath>::Prepare
          (FPCGAttributeAccessor<FSoftClassPath> *this,IPCGAttributeAccessorKeys *param_1,
          int param_2,bool param_3)

{
  FPCGMetadataAttribute<FSoftClassPath> *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bWasPrepared == false) {
    pFVar1 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar1->_padding_,
            ((int)pFVar1->_padding_ - *(int *)((longlong)&pFVar1->_padding_ + 4)) + param_2);
    bVar3 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar3;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7f840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FSoftObjectPath>::Prepare
          (FPCGAttributeAccessor<FSoftObjectPath> *this,IPCGAttributeAccessorKeys *param_1,
          int param_2,bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,
          int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 auStackY_2158 [32];
  longlong *local_20e8;
  int *local_20e0;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  ForElementType<__int64_*> local_20c8;
  int iStack_20c0;
  undefined4 uStack_20bc;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  ForElementType<__int64_*> local_2078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2158;
  local_20e0 = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<FSoftObjectPath>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar17 = local_1068.ArrayNum;
    iStack_20d0 = local_1068.ArrayNum;
    local_20d8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20d8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar15 = local_20d8._0_4_;
    uVar16 = local_20d8._4_4_;
  }
  else {
    uVar15 = *(undefined4 *)&param_6->DataPtr;
    uVar16 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar17 = param_6->ArrayNum;
    uStack_20cc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2098.DataPtr._0_4_ = uVar15;
  local_2098.DataPtr._4_4_ = uVar16;
  local_2098.ArrayNum = iVar17;
  local_2098._12_4_ = uStack_20cc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e7fe6d;
  }
  local_2078.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,&local_2078,0,&local_106c);
  }
  FVar12 = local_2078.SecondaryData;
  if (0 < iVar17) {
    puVar14 = (undefined8 *)CONCAT44(uVar16,uVar15);
    do {
      uVar9 = 0;
      if ((int)uVar13 < iVar17) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_2078.SecondaryData, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar14;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)&local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_20e8 = plVar3;
        if ((ulonglong)FVar10 <= &local_20e8) {
          FVar10 = (ForElementType<__int64_*>)&local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_20e8 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_2078.SecondaryData, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,&local_2078,&local_106c);
          FVar12 = local_2078.SecondaryData;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)&local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_20e8;
        FVar12 = local_2078.SecondaryData;
      }
      uVar13 = uVar13 + 1;
      puVar14 = puVar14 + 1;
    } while ((int)uVar13 < iVar17);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<FSoftObjectPath>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<FSoftObjectPath>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e7fd69;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)&local_2078;
        if (local_2078.SecondaryData != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_2078.SecondaryData;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e7fd69:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20c8 = (ForElementType<__int64_*>)&local_2078;
      if (local_2078.SecondaryData != (ForElementType<__int64_*>)0x0) {
        local_20c8 = local_2078.SecondaryData;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20c0 = iVar1;
      local_2088._12_4_ = uStack_20bc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20c8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_2078.SecondaryData;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_2078.SecondaryData;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->_padding_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar17);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->_padding_);
      FVar12 = local_2078.SecondaryData;
      if (local_20e0 != (int *)0x0) {
        *local_20e0 = -1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_2078.SecondaryData;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e7fe6d:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e7fec0

void __thiscall
FPCGAttributeAccessor<FSoftObjectPath>::Prepare
          (FPCGAttributeAccessor<FSoftObjectPath> *this,IPCGAttributeAccessorKeys *param_1,
          int param_2,bool param_3)

{
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bWasPrepared == false) {
    pFVar1 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar1->_padding_,
            ((int)pFVar1->_padding_ - *(int *)((longlong)&pFVar1->_padding_ + 4)) + param_2);
    bVar3 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar3;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Prepare @ 149e7ff70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FName>::Prepare
          (FPCGAttributeAccessor<FName> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<FName> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<FName>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e80686;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<FName>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<FName>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e80499;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e80499:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<FName,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e80686:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e806e0

void __thiscall
FPCGAttributeAccessor<FName>::Prepare
          (FPCGAttributeAccessor<FName> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<FName> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e807f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FString>::Prepare
          (FPCGAttributeAccessor<FString> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<FString> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 auStackY_2158 [32];
  longlong *local_20e8;
  int *local_20e0;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  ForElementType<__int64_*> local_20c8;
  int iStack_20c0;
  undefined4 uStack_20bc;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  ForElementType<__int64_*> local_2078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2158;
  local_20e0 = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<FString>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar17 = local_1068.ArrayNum;
    iStack_20d0 = local_1068.ArrayNum;
    local_20d8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20d8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar15 = local_20d8._0_4_;
    uVar16 = local_20d8._4_4_;
  }
  else {
    uVar15 = *(undefined4 *)&param_6->DataPtr;
    uVar16 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar17 = param_6->ArrayNum;
    uStack_20cc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2098.DataPtr._0_4_ = uVar15;
  local_2098.DataPtr._4_4_ = uVar16;
  local_2098.ArrayNum = iVar17;
  local_2098._12_4_ = uStack_20cc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e80e1d;
  }
  local_2078.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,&local_2078,0,&local_106c);
  }
  FVar12 = local_2078.SecondaryData;
  if (0 < iVar17) {
    puVar14 = (undefined8 *)CONCAT44(uVar16,uVar15);
    do {
      uVar9 = 0;
      if ((int)uVar13 < iVar17) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_2078.SecondaryData, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar14;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)&local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_20e8 = plVar3;
        if ((ulonglong)FVar10 <= &local_20e8) {
          FVar10 = (ForElementType<__int64_*>)&local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_20e8 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_2078.SecondaryData, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,&local_2078,&local_106c);
          FVar12 = local_2078.SecondaryData;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)&local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_20e8;
        FVar12 = local_2078.SecondaryData;
      }
      uVar13 = uVar13 + 1;
      puVar14 = puVar14 + 1;
    } while ((int)uVar13 < iVar17);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<FString>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<FString>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e80d19;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)&local_2078;
        if (local_2078.SecondaryData != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_2078.SecondaryData;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e80d19:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20c8 = (ForElementType<__int64_*>)&local_2078;
      if (local_2078.SecondaryData != (ForElementType<__int64_*>)0x0) {
        local_20c8 = local_2078.SecondaryData;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20c0 = iVar1;
      local_2088._12_4_ = uStack_20bc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20c8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_2078.SecondaryData;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_2078.SecondaryData;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->_padding_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar17);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->_padding_);
      FVar12 = local_2078.SecondaryData;
      if (local_20e0 != (int *)0x0) {
        *local_20e0 = -1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_2078.SecondaryData;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e80e1d:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e80e70

void __thiscall
FPCGAttributeAccessor<FString>::Prepare
          (FPCGAttributeAccessor<FString> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3)

{
  FPCGMetadataAttribute<FString> *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bWasPrepared == false) {
    pFVar1 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar1->_padding_,
            ((int)pFVar1->_padding_ - *(int *)((longlong)&pFVar1->_padding_ + 4)) + param_2);
    bVar3 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar3;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Prepare @ 149e80f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<__int64>::Prepare
          (FPCGAttributeAccessor<__int64> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<__int64> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<__int64>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e81636;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<__int64>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<__int64>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e81449;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e81449:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e81636:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e81690

void __thiscall
FPCGAttributeAccessor<__int64>::Prepare
          (FPCGAttributeAccessor<__int64> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<__int64> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Prepare @ 149e81790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<bool>::Prepare
          (FPCGAttributeAccessor<bool> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3,int param_4,bool param_5,TArrayView<__int64_*,int> *param_6,int *param_7)

{
  int iVar1;
  FPCGMetadataDomain *pFVar2;
  longlong *plVar3;
  FPCGMetadataAttribute<bool> *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<__int64_*> FVar10;
  longlong lVar11;
  ForElementType<__int64_*> FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 auStackY_2178 [32];
  undefined8 local_2118;
  longlong *local_2108;
  int local_2100;
  undefined1 local_20fc [20];
  ForElementType<__int64_*> local_20e8;
  int iStack_20e0;
  undefined4 uStack_20dc;
  ForElementType<__int64_*> local_20d8;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined8 local_20c8;
  int *local_20c0;
  undefined8 local_20b8;
  FName FStack_20b0;
  FString local_20a8;
  TArrayView<__int64_*,int> local_2098;
  TArrayView<__int64_*,int> local_2088;
  undefined1 local_2078 [4096];
  ForElementType<__int64_*> local_1078;
  int local_1070;
  int local_106c;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  local_20fc._12_8_ = param_7;
  pFVar2 = this->MetadataDomain;
  bVar8 = pFVar2->bSupportMultiEntries;
  if ((bVar8 == false) && (1 < param_2)) {
    if (2 < (byte)LogPCG._0_1_) {
      local_20b8._0_1_ = (pFVar2->DomainID).Flag;
      local_20b8._1_3_ = *(undefined3 *)&(pFVar2->DomainID).field_0x1;
      local_20b8._4_4_ = (pFVar2->DomainID).CustomFlag;
      FStack_20b0 = (pFVar2->DomainID).DebugName;
      ::FName::ToString(&FStack_20b0,&local_20a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPCGAttributeAccessor<bool>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((param_6 != (TArrayView<__int64_*,int> *)0x0) && (param_6->ArrayNum != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutEntryKeys || OutEntryKeys->Num() == Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  local_1068.ArrayMax = 0x200;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  uVar14 = 0;
  local_1068.ArrayNum = 0;
  if (param_6 == (TArrayView<__int64_*,int> *)0x0) {
    TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_1068,param_2,Default);
    iVar18 = local_1068.ArrayNum;
    iStack_20e0 = local_1068.ArrayNum;
    local_20e8 = (ForElementType<__int64_*>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_20e8 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar16 = local_20e8._0_4_;
    uVar17 = local_20e8._4_4_;
  }
  else {
    uVar16 = *(undefined4 *)&param_6->DataPtr;
    uVar17 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
    iVar18 = param_6->ArrayNum;
    uStack_20dc = *(undefined4 *)&param_6->field_0xc;
  }
  local_2118 = (undefined8 *)CONCAT44(uVar17,uVar16);
  local_2098.DataPtr._0_4_ = uVar16;
  local_2098.DataPtr._4_4_ = uVar17;
  local_2098.ArrayNum = iVar18;
  local_2098._12_4_ = uStack_20dc;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<__int64>(param_1,param_4,&local_2098);
  if (!bVar6) {
    bVar8 = false;
    goto LAB_149e81ea6;
  }
  local_1078 = (ForElementType<__int64_*>)0x0;
  local_1070 = 0;
  local_106c = 0x200;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (0x200 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_2,(ForElementType<__int64_*> *)local_2078,0,&local_106c);
  }
  FVar12 = local_1078;
  if (0 < iVar18) {
    puVar15 = (undefined8 *)CONCAT44(uVar17,uVar16);
    do {
      uVar9 = uVar14;
      if ((int)uVar13 < iVar18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         FVar12 = local_1078, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar3 = (longlong *)*puVar15;
      if ((*plVar3 == -1) || ((*plVar3 < this->MetadataDomain->ItemKeyOffset && (!param_3)))) {
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_2108 = plVar3;
        if ((ulonglong)FVar10 <= &local_2108) {
          FVar10 = (ForElementType<__int64_*>)local_2078;
          if (FVar12 != (ForElementType<__int64_*>)0x0) {
            FVar10 = FVar12;
          }
          if ((&local_2108 < (longlong **)((longlong)FVar10 + (longlong)local_106c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_1078, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (local_1070 == local_106c) {
          local_1070 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                                 (0x808,(ForElementType<__int64_*> *)local_2078,&local_106c);
          FVar12 = local_1078;
        }
        lVar11 = (longlong)local_1070;
        FVar10 = (ForElementType<__int64_*>)local_2078;
        if (FVar12 != (ForElementType<__int64_*>)0x0) {
          FVar10 = FVar12;
        }
        local_1070 = local_1070 + 1;
        *(longlong **)((longlong)FVar10 + lVar11 * 8) = local_2108;
        FVar12 = local_1078;
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)uVar13 < iVar18);
  }
  if (local_1070 != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FPCGAttributeAccessor<bool>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                  ::__l45::__CpuProfilerEventSpecId158,
                 "FPCGAttributeAccessor::Prepare::AddEntriesInPlace",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FPCGAttributeAccessor<bool>::Prepare(IPCGAttributeAccessorKeys&___ptr64,int,bool,int,bool,TArrayView<__int64*___ptr64,int>*___ptr64,int*___ptr64)___ptr64'
                 ::__l45::__CpuProfilerEventSpecId158);
    }
    if (bVar8 == false) {
      pFVar2 = this->MetadataDomain;
      AcquireSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      iVar1 = (pFVar2->ParentKeys).ArrayNum;
      lVar11 = pFVar2->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar2->ItemLock);
      if (lVar11 + iVar1 == 0) {
        if (local_1070 == 1) goto LAB_149e81cb9;
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0x9f,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_1070 == 1) {
        FVar12 = (ForElementType<__int64_*>)local_2078;
        if (local_1078 != (ForElementType<__int64_*>)0x0) {
          FVar12 = local_1078;
        }
        **(undefined8 **)FVar12 = 0;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8937215185014227107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                           ,0xa3,"EntriesToSet.Num() == 1");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else {
LAB_149e81cb9:
      iVar1 = local_1070;
      pFVar2 = this->MetadataDomain;
      local_20d8 = (ForElementType<__int64_*>)local_2078;
      if (local_1078 != (ForElementType<__int64_*>)0x0) {
        local_20d8 = local_1078;
      }
      if ((local_1070 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iStack_20d0 = iVar1;
      local_2088._12_4_ = uStack_20cc;
      local_2088.ArrayNum = iVar1;
      local_2088.DataPtr = (long64 **)local_20d8;
      FPCGMetadataDomain::AddEntriesInPlace(pFVar2,&local_2088);
    }
    FVar12 = local_1078;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar12 = local_1078;
    }
  }
  if (param_5) {
    if (this->bWasPrepared == false) {
      pFVar4 = this->Attribute;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      iVar1 = (pFVar4->Values).ArrayNum;
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar4->Values,iVar18 + iVar1,No);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ValueLock);
      local_20fc._4_8_ = &pFVar4->_padding_;
      AcquireSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
               *)&pFVar4->_padding_,
              ((int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4)) + iVar18);
      if (0 < iVar18) {
        do {
          local_2100 = uVar14 + iVar1 + pFVar4->ValueKeyOffset;
          uVar13 = 0;
          if ((int)uVar14 < iVar18) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_20c8 = *local_2118;
          local_20c0 = &local_2100;
          TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<__int64_&,int_const_&>_>
                    ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar4->_padding_,(TPairInitializer<__int64_&,int_const_&> *)local_20fc,
                     (bool *)&local_20c8);
          uVar14 = uVar14 + 1;
          local_2118 = local_2118 + 1;
        } while ((int)uVar14 < iVar18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_20fc._4_8_);
      FVar12 = local_1078;
      if ((int *)local_20fc._12_8_ != (int *)0x0) {
        *(int *)local_20fc._12_8_ = iVar1;
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8937215185014227113>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                         ,0xa9,"!bWasPrepared");
      FVar12 = local_1078;
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  bVar8 = true;
  if (FVar12 != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_149e81ea6:
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return bVar8;
}

// Prepare @ 149e81f00

void __thiscall
FPCGAttributeAccessor<bool>::Prepare
          (FPCGAttributeAccessor<bool> *this,IPCGAttributeAccessorKeys *param_1,int param_2,
          bool param_3)

{
  int iVar1;
  FPCGMetadataAttribute<bool> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bWasPrepared == false) {
    pFVar2 = this->Attribute;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
             *)&pFVar2->_padding_,
            ((int)pFVar2->_padding_ - *(int *)((longlong)&pFVar2->_padding_ + 4)) + param_2);
    iVar1 = (pFVar2->Values).ArrayNum;
    uVar5 = iVar1 + param_2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((pFVar2->Values).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar5,&(pFVar2->Values).AllocatorInstance,iVar1,&(pFVar2->Values).ArrayMax);
    }
    bVar4 = Prepare(this,param_1,param_2,param_3,0,true,(TArrayView<__int64_*,int> *)0x0,(int *)0x0)
    ;
    this->bWasPrepared = bVar4;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8937215185014227127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                       ,0xb7,"!bWasPrepared");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetRangeImpl @ 149e9d2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<int>::SetRangeImpl
          (FPCGAttributeAccessor<int> *this,TArrayView<int_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<int> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  int *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9d2dd;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      piVar7 = TArrayView<int_const_,int>::operator[](param_1,0);
      pFVar1->DefaultValue = *piVar7;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar5 = local_1058.ArrayNum;
    if (!bVar3) {
      bVar3 = false;
      goto LAB_149e9d572;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar8 = FPCGMetadataAttribute<int>::AddValues<int,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar8->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar8->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar5 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar6 = param_2 + -1 + iVar5, iVar6 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 4,local_10a8,
           (longlong)iVar5 << 2);
  }
  bVar3 = true;
LAB_149e9d572:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SetRangeImpl @ 149e9d5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<float>::SetRangeImpl
          (FPCGAttributeAccessor<float> *this,TArrayView<float_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<float> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  float *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9d5cd;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      pfVar7 = TArrayView<float_const_,int>::operator[](param_1,0);
      pFVar1->DefaultValue = *pfVar7;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar5 = local_1058.ArrayNum;
    if (!bVar3) {
      bVar3 = false;
      goto LAB_149e9d862;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar8 = FPCGMetadataAttribute<float>::AddValues<float,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar8->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar8->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar5 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar6 = param_2 + -1 + iVar5, iVar6 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 4,local_10a8,
           (longlong)iVar5 << 2);
  }
  bVar3 = true;
LAB_149e9d862:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SetRangeImpl @ 149e9d8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<double>::SetRangeImpl
          (FPCGAttributeAccessor<double> *this,TArrayView<double_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<double> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  double *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9d8bd;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      pdVar7 = TArrayView<double_const_,int>::operator[](param_1,0);
      pFVar1->DefaultValue = *pdVar7;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar5 = local_1058.ArrayNum;
    if (!bVar3) {
      bVar3 = false;
      goto LAB_149e9db54;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar8 = FPCGMetadataAttribute<double>::AddValues<double,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar8->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar8->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar5 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar6 = param_2 + -1 + iVar5, iVar6 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 8,local_10a8,
           (longlong)iVar5 << 3);
  }
  bVar3 = true;
LAB_149e9db54:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SetRangeImpl @ 149e9db90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TQuat<double>_>::SetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TQuat<double> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  TQuat<double> *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9dbad;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar6 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar6 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = this->Attribute;
      pTVar8 = TArrayView<UE::Math::TQuat<double>_const_,int>::operator[](param_1,0);
      dVar3 = pTVar8->Y;
      (pFVar1->DefaultValue).X = pTVar8->X;
      (pFVar1->DefaultValue).Y = dVar3;
      dVar3 = pTVar8->W;
      (pFVar1->DefaultValue).Z = pTVar8->Z;
      (pFVar1->DefaultValue).W = dVar3;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar4 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar6 = local_1058.ArrayNum;
    if (!bVar4) {
      bVar4 = false;
      goto LAB_149e9de56;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_1078.ArrayNum = iVar6;
    pTVar9 = FPCGMetadataAttribute<UE::Math::TQuat<double>_>::AddValues<UE::Math::TQuat<double>,0>
                       (pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar9->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar9->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar6 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar7 = param_2 + -1 + iVar6, iVar7 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 0x20,local_10a8,
           (longlong)iVar6 << 5);
  }
  bVar4 = true;
LAB_149e9de56:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar4;
}

// SetRangeImpl @ 149e9dea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TRotator<double>_>::SetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TRotator<double>_> *this,
          TArrayView<UE::Math::TRotator<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TRotator<double> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  TRotator<double> *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9debd;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar6 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar6 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = this->Attribute;
      pTVar8 = TArrayView<UE::Math::TRotator<double>_const_,int>::operator[](param_1,0);
      dVar3 = pTVar8->Yaw;
      (pFVar1->DefaultValue).Pitch = pTVar8->Pitch;
      (pFVar1->DefaultValue).Yaw = dVar3;
      (pFVar1->DefaultValue).Roll = pTVar8->Roll;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar4 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar6 = local_1058.ArrayNum;
    if (!bVar4) {
      bVar4 = false;
      goto LAB_149e9e16d;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_1078.ArrayNum = iVar6;
    pTVar9 = FPCGMetadataAttribute<UE::Math::TRotator<double>_>::
             AddValues<UE::Math::TRotator<double>,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar9->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar9->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar6 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar7 = param_2 + -1 + iVar6, iVar7 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 0x18,local_10a8,
           (longlong)iVar6 * 0x18);
  }
  bVar4 = true;
LAB_149e9e16d:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar4;
}

// SetRangeImpl @ 149e9e1b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TTransform<double>_>::SetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TTransform<double> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  TTransform<double> *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9e1cd;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar6 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar6 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = this->Attribute;
      pTVar8 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_1,0);
      dVar3 = (pTVar8->Rotation).XY.m128d_f64[1];
      (pFVar1->DefaultValue).Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (pFVar1->DefaultValue).Rotation.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (pFVar1->DefaultValue).Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (pFVar1->DefaultValue).Rotation.ZW.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Translation).XY.m128d_f64[1];
      (pFVar1->DefaultValue).Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
      (pFVar1->DefaultValue).Translation.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Translation).ZW.m128d_f64[1];
      (pFVar1->DefaultValue).Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
      (pFVar1->DefaultValue).Translation.ZW.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (pFVar1->DefaultValue).Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (pFVar1->DefaultValue).Scale3D.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      (pFVar1->DefaultValue).Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      (pFVar1->DefaultValue).Scale3D.ZW.m128d_f64[1] = dVar3;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar4 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar6 = local_1058.ArrayNum;
    if (!bVar4) {
      bVar4 = false;
      goto LAB_149e9e4b3;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_1078.ArrayNum = iVar6;
    pTVar9 = FPCGMetadataAttribute<UE::Math::TTransform<double>_>::
             AddValues<UE::Math::TTransform<double>,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar9->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar9->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar6 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar7 = param_2 + -1 + iVar6, iVar7 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 0x60,local_10a8,
           (longlong)iVar6 * 0x60);
  }
  bVar4 = true;
LAB_149e9e4b3:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar4;
}

// SetRangeImpl @ 149e9e4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector2<double>_>::SetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TVector2<double> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  TVector2<double> *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9e50d;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar6 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar6 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = this->Attribute;
      pTVar8 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[](param_1,0);
      dVar3 = (pTVar8->field0_0x0)._s_0.Y;
      (pFVar1->DefaultValue).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
      (pFVar1->DefaultValue).field0_0x0._s_0.Y = dVar3;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar4 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar6 = local_1058.ArrayNum;
    if (!bVar4) {
      bVar4 = false;
      goto LAB_149e9e7a7;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_1078.ArrayNum = iVar6;
    pTVar9 = FPCGMetadataAttribute<UE::Math::TVector2<double>_>::
             AddValues<UE::Math::TVector2<double>,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar9->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar9->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar6 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar7 = param_2 + -1 + iVar6, iVar7 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 0x10,local_10a8,
           (longlong)iVar6 << 4);
  }
  bVar4 = true;
LAB_149e9e7a7:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar4;
}

// SetRangeImpl @ 149e9e7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector4<double>_>::SetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TVector4<double> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  TVector4<double> *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9e80d;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar6 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar6 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = this->Attribute;
      pTVar8 = TArrayView<UE::Math::TVector4<double>_const_,int>::operator[](param_1,0);
      dVar3 = (pTVar8->field0_0x0)._s_0.Y;
      (pFVar1->DefaultValue).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
      (pFVar1->DefaultValue).field0_0x0._s_0.Y = dVar3;
      dVar3 = (pTVar8->field0_0x0)._s_0.W;
      (pFVar1->DefaultValue).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
      (pFVar1->DefaultValue).field0_0x0._s_0.W = dVar3;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar4 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar6 = local_1058.ArrayNum;
    if (!bVar4) {
      bVar4 = false;
      goto LAB_149e9eab6;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_1078.ArrayNum = iVar6;
    pTVar9 = FPCGMetadataAttribute<UE::Math::TVector4<double>_>::
             AddValues<UE::Math::TVector4<double>,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar9->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar9->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar6 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar7 = param_2 + -1 + iVar6, iVar7 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 0x20,local_10a8,
           (longlong)iVar6 << 5);
  }
  bVar4 = true;
LAB_149e9eab6:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar4;
}

// SetRangeImpl @ 149e9eb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<UE::Math::TVector<double>_>::SetRangeImpl
          (FPCGAttributeAccessor<UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TVector<double> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  TVector<double> *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9eb1d;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar6 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar6 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = this->Attribute;
      pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,0);
      dVar3 = (pTVar8->field0_0x0)._s_0.Y;
      (pFVar1->DefaultValue).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
      (pFVar1->DefaultValue).field0_0x0._s_0.Y = dVar3;
      (pFVar1->DefaultValue).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar4 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar6 = local_1058.ArrayNum;
    if (!bVar4) {
      bVar4 = false;
      goto LAB_149e9edcd;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_1078.ArrayNum = iVar6;
    pTVar9 = FPCGMetadataAttribute<UE::Math::TVector<double>_>::
             AddValues<UE::Math::TVector<double>,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar9->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar9->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar6 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar7 = param_2 + -1 + iVar6, iVar7 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 0x18,local_10a8,
           (longlong)iVar6 * 0x18);
  }
  bVar4 = true;
LAB_149e9edcd:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar4;
}

// SetRangeImpl @ 149e9ee10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FSoftClassPath>::SetRangeImpl
          (FPCGAttributeAccessor<FSoftClassPath> *this,
          TArrayView<FSoftClassPath_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<FSoftClassPath> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FSoftObjectPath *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 auStackY_10e8 [32];
  int local_10a8 [2];
  long64 *local_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9ee2d;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10e8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10a0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10a0);
    if ((local_10a0 != (longlong *)0x0) && (*local_10a0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      pFVar6 = (FSoftObjectPath *)TArrayView<FSoftClassPath_const_,int>::operator[](param_1,0);
      FSoftObjectPath::operator=((FSoftObjectPath *)&pFVar1->DefaultValue,pFVar6);
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10a8[0] = param_2;
  bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                  &local_1098,local_10a8);
  iVar5 = local_1058.ArrayNum;
  if (bVar3) {
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar7 = FPCGMetadataAttribute<FSoftClassPath>::AddValues<FSoftClassPath,0>
                       (pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar7->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar7->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SetRangeImpl @ 149e9f0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FSoftObjectPath>::SetRangeImpl
          (FPCGAttributeAccessor<FSoftObjectPath> *this,
          TArrayView<FSoftObjectPath_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FSoftObjectPath *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 auStackY_10e8 [32];
  int local_10a8 [2];
  long64 *local_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9f0bd;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10e8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10a0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10a0);
    if ((local_10a0 != (longlong *)0x0) && (*local_10a0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      pFVar6 = TArrayView<FSoftObjectPath_const_,int>::operator[](param_1,0);
      FSoftObjectPath::operator=(&pFVar1->DefaultValue,pFVar6);
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10a8[0] = param_2;
  bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                  &local_1098,local_10a8);
  iVar5 = local_1058.ArrayNum;
  if (bVar3) {
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar7 = FPCGMetadataAttribute<FSoftObjectPath>::AddValues<FSoftObjectPath,0>
                       (pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar7->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar7->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SetRangeImpl @ 149e9f330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FName>::SetRangeImpl
          (FPCGAttributeAccessor<FName> *this,TArrayView<FName_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<FName> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  FName *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  FName *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9f34d;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      pFVar7 = TArrayView<FName_const_,int>::operator[](param_1,0);
      pFVar1->DefaultValue = *pFVar7;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar5 = local_1058.ArrayNum;
    if (!bVar3) {
      bVar3 = false;
      goto LAB_149e9f5e4;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar8 = FPCGMetadataAttribute<FName>::AddValues<FName,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar8->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar8->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar5 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar6 = param_2 + -1 + iVar5, iVar6 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 8,local_10a8,
           (longlong)iVar5 << 3);
  }
  bVar3 = true;
LAB_149e9f5e4:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SetRangeImpl @ 149e9f620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<FString>::SetRangeImpl
          (FPCGAttributeAccessor<FString> *this,TArrayView<FString_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<FString> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 auStackY_10e8 [32];
  int local_10a8 [2];
  long64 *local_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9f63d;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10e8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10a0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10a0);
    if ((local_10a0 != (longlong *)0x0) && (*local_10a0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      pFVar6 = TArrayView<FString_const_,int>::operator[](param_1,0);
      ::FString::operator=(&pFVar1->DefaultValue,pFVar6);
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10a8[0] = param_2;
  bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                  &local_1098,local_10a8);
  iVar5 = local_1058.ArrayNum;
  if (bVar3) {
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar7 = FPCGMetadataAttribute<FString>::AddValues<FString,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar7->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar7->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SetRangeImpl @ 149e9f8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<__int64>::SetRangeImpl
          (FPCGAttributeAccessor<__int64> *this,TArrayView<__int64_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<__int64> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  long64 *plVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  long64 *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9f8cd;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      plVar7 = TArrayView<__int64_const_,int>::operator[](param_1,0);
      pFVar1->DefaultValue = *plVar7;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar5 = local_1058.ArrayNum;
    if (!bVar3) {
      bVar3 = false;
      goto LAB_149e9fb64;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar8 = FPCGMetadataAttribute<__int64>::AddValues<__int64,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar8->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar8->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar5 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar6 = param_2 + -1 + iVar5, iVar6 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + (longlong)param_2 * 8,local_10a8,
           (longlong)iVar5 << 3);
  }
  bVar3 = true;
LAB_149e9fb64:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SetRangeImpl @ 149e9fba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessor<bool>::SetRangeImpl
          (FPCGAttributeAccessor<bool> *this,TArrayView<bool_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FPCGMetadataAttribute<bool> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  bool *pbVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStackY_10f8 [32];
  int local_10b8 [2];
  long64 *local_10b0;
  bool *local_10a8;
  undefined8 uStack_10a0;
  TArrayView<__int64_*,int> local_1098;
  TArrayView<int_const_,int> local_1088;
  TArrayView<__int64_const_*_const,int> local_1078;
  TArray<int,TSizedDefaultAllocator<32>_> local_1068;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_1058;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149e9fbbd;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  if (((param_4 & AllowSetDefaultValue) != 0) &&
     (iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3), iVar5 == 1)) {
    local_10b0 = (longlong *)0x0;
    IPCGAttributeAccessorKeys::GetKey<__int64>(param_3,&local_10b0);
    if ((local_10b0 != (longlong *)0x0) && (*local_10b0 == -1)) {
      if ((param_1->ArrayNum == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InValues.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessor.h"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = this->Attribute;
      pbVar7 = TArrayView<bool_const_,int>::operator[](param_1,0);
      pFVar1->DefaultValue = *pbVar7;
      return true;
    }
  }
  local_1058.AllocatorInstance.SecondaryData = (ForElementType<__int64_*>)0x0;
  local_1058.ArrayNum = 0;
  local_1058.ArrayMax = 0x200;
  TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            (&local_1058,param_1->ArrayNum,Default);
  local_1098.ArrayNum = local_1058.ArrayNum;
  local_1098.DataPtr = (long64 **)&local_1058;
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    local_1098.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
  }
  if ((local_1058.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_10b8[0] = param_2;
  if (this->bWasPrepared == false) {
    bVar3 = Prepare(this,param_3,param_1->ArrayNum,(bool)((byte)(param_4 >> 4) & 1),param_2,false,
                    &local_1098,local_10b8);
    iVar5 = local_1058.ArrayNum;
    if (!bVar3) {
      bVar3 = false;
      goto LAB_149e9fe4e;
    }
    pFVar1 = this->Attribute;
    local_1078.DataPtr = (long64 **)&local_1058;
    if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
      local_1078.DataPtr = (long64 **)local_1058.AllocatorInstance.SecondaryData;
    }
    if ((local_1058.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_1078.ArrayNum = iVar5;
    pTVar8 = FPCGMetadataAttribute<bool>::AddValues<bool,0>(pFVar1,&local_1068,param_1);
    local_1088.DataPtr = (int *)(pTVar8->AllocatorInstance).Data;
    local_1088.ArrayNum = pTVar8->ArrayNum;
    if ((local_1088.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)pFVar1,&local_1078,&local_1088,true);
    if (local_1068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.AllocatorInstance.Data);
    }
  }
  else {
    pFVar1 = this->Attribute;
    local_10a8 = param_1->DataPtr;
    uStack_10a0 = *(undefined8 *)&param_1->ArrayNum;
    iVar5 = (int)*(undefined8 *)&param_1->ArrayNum;
    if ((((param_2 == -1) || (iVar6 = param_2 + -1 + iVar5, iVar6 < 0)) ||
        ((pFVar1->Values).ArrayNum <= iVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex != INDEX_NONE && Values.IsValidIndex(StartIndex + InValues.Num() - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x392,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    memcpy((pFVar1->Values).AllocatorInstance.Data + param_2,local_10a8,(longlong)iVar5);
  }
  bVar3 = true;
LAB_149e9fe4e:
  if (local_1058.AllocatorInstance.SecondaryData != (ForElementType<__int64_*>)0x0) {
    FMemory::Free((void *)local_1058.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

