// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 21

// operator()<int> @ 149905ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<int>(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<int> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_4a8 [32];
  undefined4 uStack_46c;
  undefined4 uStack_45c;
  TArrayView<int,int> local_458;
  TArrayView<int_const_,int> local_448;
  ForElementType<int> local_438;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))
                    ((longlong *)**(undefined8 **)((longlong)this + 0x10),
                     CONCAT44(in_register_00000014,param_1));
  local_30[1] = 0x100;
  iVar8 = 0;
  local_438.SecondaryData = (ForElementType<int>)0x0;
  local_30[0] = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,0x100,&local_438,local_30,local_30 + 1);
  FVar7 = (ForElementType<int>)&local_438;
  if (local_438.SecondaryData != (ForElementType<int>)0x0) {
    FVar7 = local_438.SecondaryData;
  }
  memset((void *)((longlong)FVar7 + (longlong)iVar5 * 4),0,0x400);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<int>)&local_438;
      if (local_438.SecondaryData != (ForElementType<int>)0x0) {
        FVar7 = local_438.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_458._12_4_ = uStack_46c;
      local_458.ArrayNum = iVar5;
      local_458.DataPtr = (int *)FVar7;
      IPCGAttributeAccessor::GetRange<int>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_458,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_448._12_4_ = uStack_45c;
      local_448.ArrayNum = iVar5;
      local_448.DataPtr = (int *)FVar7;
      IPCGAttributeAccessor::SetRange<int>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_448,iVar8
                 ,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_438.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_438.SecondaryData);
  }
  return true;
}

// operator()<float> @ 1499078b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<float>
          (void *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<float> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_4a8 [32];
  undefined4 uStack_46c;
  undefined4 uStack_45c;
  TArrayView<float,int> local_458;
  TArrayView<float_const_,int> local_448;
  ForElementType<float> local_438;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  local_30[1] = 0x100;
  iVar8 = 0;
  local_438.SecondaryData = (ForElementType<float>)0x0;
  local_30[0] = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                    (4,4,0x100,&local_438,local_30,local_30 + 1);
  FVar7 = (ForElementType<float>)&local_438;
  if (local_438.SecondaryData != (ForElementType<float>)0x0) {
    FVar7 = local_438.SecondaryData;
  }
  memset((void *)((longlong)FVar7 + (longlong)iVar5 * 4),0,0x400);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<float>)&local_438;
      if (local_438.SecondaryData != (ForElementType<float>)0x0) {
        FVar7 = local_438.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_458._12_4_ = uStack_46c;
      local_458.ArrayNum = iVar5;
      local_458.DataPtr = (float *)FVar7;
      IPCGAttributeAccessor::GetRange<float>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_458,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_448._12_4_ = uStack_45c;
      local_448.ArrayNum = iVar5;
      local_448.DataPtr = (float *)FVar7;
      IPCGAttributeAccessor::SetRange<float>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_448,iVar8
                 ,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_438.SecondaryData != (ForElementType<float>)0x0) {
    FMemory::Free((void *)local_438.SecondaryData);
  }
  return true;
}

// operator()<double> @ 149909630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<double>
          (void *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<double> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_8a8 [32];
  undefined4 uStack_86c;
  undefined4 uStack_85c;
  TArrayView<double,int> local_858;
  TArrayView<double_const_,int> local_848;
  ForElementType<double> local_838;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  local_30[1] = 0x100;
  iVar8 = 0;
  local_838.SecondaryData = (ForElementType<double>)0x0;
  local_30[0] = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                    (8,8,0x100,&local_838,local_30,local_30 + 1);
  FVar7 = (ForElementType<double>)&local_838;
  if (local_838.SecondaryData != (ForElementType<double>)0x0) {
    FVar7 = local_838.SecondaryData;
  }
  memset((void *)((longlong)FVar7 + (longlong)iVar5 * 8),0,0x800);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<double>)&local_838;
      if (local_838.SecondaryData != (ForElementType<double>)0x0) {
        FVar7 = local_838.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_858._12_4_ = uStack_86c;
      local_858.ArrayNum = iVar5;
      local_858.DataPtr = (double *)FVar7;
      IPCGAttributeAccessor::GetRange<double>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_858,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_848._12_4_ = uStack_85c;
      local_848.ArrayNum = iVar5;
      local_848.DataPtr = (double *)FVar7;
      IPCGAttributeAccessor::SetRange<double>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_848,iVar8
                 ,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_838.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_838.SecondaryData);
  }
  return true;
}

// operator()<UE::Math::TQuat<double>_> @ 14990aeb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<UE::Math::TQuat<double>_>
          (void *this,TQuat<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<UE::Math::TQuat<double>_> FVar8;
  ulonglong uVar9;
  undefined1 auStackY_20d8 [32];
  undefined4 uStack_209c;
  undefined4 uStack_208c;
  TArrayView<UE::Math::TQuat<double>,int> local_2088;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_2078;
  undefined8 local_2068;
  undefined8 uStack_2060;
  undefined8 local_2058;
  undefined8 uStack_2050;
  ForElementType<UE::Math::TQuat<double>_> local_2048;
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_20d8;
  local_2068 = 0;
  uStack_2060 = 0;
  local_2058 = 0;
  uStack_2050 = 0;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  iVar7 = 0;
  local_38[1] = 0x100;
  local_2048.SecondaryData = (ForElementType<UE::Math::TQuat<double>_>)0x0;
  local_38[0] = 0;
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
            (0x20,0x10,0x100,&local_2048,local_38,local_38 + 1);
  uVar5 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar5) {
    uVar9 = (ulonglong)uVar5;
    do {
      iVar6 = 0x100;
      if (iVar4 < 0x100) {
        iVar6 = iVar4;
      }
      FVar8 = (ForElementType<UE::Math::TQuat<double>_>)&local_2048;
      if (local_2048.SecondaryData != (ForElementType<UE::Math::TQuat<double>_>)0x0) {
        FVar8 = local_2048.SecondaryData;
      }
      if ((iVar6 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_2088._12_4_ = uStack_209c;
      local_2088.ArrayNum = iVar6;
      local_2088.DataPtr = (TQuat<double> *)FVar8;
      IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_2088,iVar7,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_2078._12_4_ = uStack_208c;
      local_2078.ArrayNum = iVar6;
      local_2078.DataPtr = (TQuat<double> *)FVar8;
      IPCGAttributeAccessor::SetRange<UE::Math::TQuat<double>_>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_2078,
                 iVar7,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar7 = iVar7 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_2048.SecondaryData != (ForElementType<UE::Math::TQuat<double>_>)0x0) {
    FMemory::Free((void *)local_2048.SecondaryData);
  }
  return true;
}

// operator()<UE::Math::TRotator<double>_> @ 14990c8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<UE::Math::TRotator<double>_>
          (void *this,TRotator<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<UE::Math::TRotator<double>_> FVar8;
  ulonglong uVar9;
  undefined1 auStackY_18b8 [32];
  undefined4 uStack_187c;
  undefined4 uStack_186c;
  TArrayView<UE::Math::TRotator<double>,int> local_1868;
  TArrayView<UE::Math::TRotator<double>_const_,int> local_1858;
  undefined8 local_1848;
  undefined8 uStack_1840;
  undefined8 local_1838;
  ForElementType<UE::Math::TRotator<double>_> local_1830;
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_18b8;
  local_1838 = 0;
  local_1848 = 0;
  uStack_1840 = 0;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  iVar7 = 0;
  local_28[1] = 0x100;
  local_1830.SecondaryData = (ForElementType<UE::Math::TRotator<double>_>)0x0;
  local_28[0] = 0;
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
            (0x18,8,0x100,&local_1830,local_28,local_28 + 1);
  uVar5 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar5) {
    uVar9 = (ulonglong)uVar5;
    do {
      iVar6 = 0x100;
      if (iVar4 < 0x100) {
        iVar6 = iVar4;
      }
      FVar8 = (ForElementType<UE::Math::TRotator<double>_>)&local_1830;
      if (local_1830.SecondaryData != (ForElementType<UE::Math::TRotator<double>_>)0x0) {
        FVar8 = local_1830.SecondaryData;
      }
      if ((iVar6 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_1868._12_4_ = uStack_187c;
      local_1868.ArrayNum = iVar6;
      local_1868.DataPtr = (TRotator<double> *)FVar8;
      IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_1868,iVar7,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_1858._12_4_ = uStack_186c;
      local_1858.ArrayNum = iVar6;
      local_1858.DataPtr = (TRotator<double> *)FVar8;
      IPCGAttributeAccessor::SetRange<UE::Math::TRotator<double>_>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_1858,
                 iVar7,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar7 = iVar7 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_1830.SecondaryData != (ForElementType<UE::Math::TRotator<double>_>)0x0) {
    FMemory::Free((void *)local_1830.SecondaryData);
  }
  return true;
}

// operator()<UE::Math::TTransform<double>_> @ 14990e1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<UE::Math::TTransform<double>_>
          (void *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<UE::Math::TTransform<double>_> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_60b8 [32];
  undefined4 uStack_607c;
  undefined4 uStack_606c;
  TArrayView<UE::Math::TTransform<double>,int> local_6068;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_6058;
  ForElementType<UE::Math::TTransform<double>_> local_6048;
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_60b8;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  iVar8 = 0;
  local_38[1] = 0x100;
  local_6048.SecondaryData = (ForElementType<UE::Math::TTransform<double>_>)0x0;
  local_38[0] = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                    (0x60,0x10,0x100,&local_6048,local_38,local_38 + 1);
  FVar7 = (ForElementType<UE::Math::TTransform<double>_>)&local_6048;
  if (local_6048.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FVar7 = local_6048.SecondaryData;
  }
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((void *)((longlong)iVar5 * 0x60 + (longlong)FVar7),0x100);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<UE::Math::TTransform<double>_>)&local_6048;
      if (local_6048.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
        FVar7 = local_6048.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_6068._12_4_ = uStack_607c;
      local_6068.ArrayNum = iVar5;
      local_6068.DataPtr = (TTransform<double> *)FVar7;
      IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_6068,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_6058._12_4_ = uStack_606c;
      local_6058.ArrayNum = iVar5;
      local_6058.DataPtr = (TTransform<double> *)FVar7;
      IPCGAttributeAccessor::SetRange<UE::Math::TTransform<double>_>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_6058,
                 iVar8,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_6048.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FMemory::Free((void *)local_6048.SecondaryData);
  }
  return true;
}

// operator()<UE::Math::TVector2<double>_> @ 14990ff70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<UE::Math::TVector2<double>_>
          (void *this,TVector2<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<UE::Math::TVector2<double>_> FVar8;
  ulonglong uVar9;
  undefined1 auStackY_10b8 [32];
  undefined4 uStack_107c;
  undefined4 uStack_106c;
  TArrayView<UE::Math::TVector2<double>,int> local_1068;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_1058;
  undefined8 local_1048;
  undefined8 uStack_1040;
  ForElementType<UE::Math::TVector2<double>_> local_1038;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_10b8;
  local_1048 = 0;
  uStack_1040 = 0;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  iVar7 = 0;
  local_30[1] = 0x100;
  local_1038.SecondaryData = (ForElementType<UE::Math::TVector2<double>_>)0x0;
  local_30[0] = 0;
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
            (0x10,8,0x100,&local_1038,local_30,local_30 + 1);
  uVar5 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar5) {
    uVar9 = (ulonglong)uVar5;
    do {
      iVar6 = 0x100;
      if (iVar4 < 0x100) {
        iVar6 = iVar4;
      }
      FVar8 = (ForElementType<UE::Math::TVector2<double>_>)&local_1038;
      if (local_1038.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
        FVar8 = local_1038.SecondaryData;
      }
      if ((iVar6 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_1068._12_4_ = uStack_107c;
      local_1068.ArrayNum = iVar6;
      local_1068.DataPtr = (TVector2<double> *)FVar8;
      IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_1068,iVar7,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_1058._12_4_ = uStack_106c;
      local_1058.ArrayNum = iVar6;
      local_1058.DataPtr = (TVector2<double> *)FVar8;
      IPCGAttributeAccessor::SetRange<UE::Math::TVector2<double>_>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_1058,
                 iVar7,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar7 = iVar7 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_1038.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
    FMemory::Free((void *)local_1038.SecondaryData);
  }
  return true;
}

// operator()<UE::Math::TVector4<double>_> @ 149911a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<UE::Math::TVector4<double>_>
          (void *this,TVector4<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<UE::Math::TVector4<double>_> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_20b8 [32];
  undefined4 uStack_207c;
  undefined4 uStack_206c;
  TArrayView<UE::Math::TVector4<double>,int> local_2068;
  TArrayView<UE::Math::TVector4<double>_const_,int> local_2058;
  ForElementType<UE::Math::TVector4<double>_> local_2048;
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_20b8;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  iVar8 = 0;
  local_38[1] = 0x100;
  local_2048.SecondaryData = (ForElementType<UE::Math::TVector4<double>_>)0x0;
  local_38[0] = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                    (0x20,0x10,0x100,&local_2048,local_38,local_38 + 1);
  FVar7 = (ForElementType<UE::Math::TVector4<double>_>)&local_2048;
  if (local_2048.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
    FVar7 = local_2048.SecondaryData;
  }
  DefaultConstructItems<UE::Math::TVector4<double>,int>
            ((void *)((longlong)iVar5 * 0x20 + (longlong)FVar7),0x100);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<UE::Math::TVector4<double>_>)&local_2048;
      if (local_2048.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
        FVar7 = local_2048.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_2068._12_4_ = uStack_207c;
      local_2068.ArrayNum = iVar5;
      local_2068.DataPtr = (TVector4<double> *)FVar7;
      IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_2068,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_2058._12_4_ = uStack_206c;
      local_2058.ArrayNum = iVar5;
      local_2058.DataPtr = (TVector4<double> *)FVar7;
      IPCGAttributeAccessor::SetRange<UE::Math::TVector4<double>_>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_2058,
                 iVar8,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_2048.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
    FMemory::Free((void *)local_2048.SecondaryData);
  }
  return true;
}

// operator()<UE::Math::TVector<double>_> @ 1499135f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<UE::Math::TVector<double>_>
          (void *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<UE::Math::TVector<double>_> FVar8;
  ulonglong uVar9;
  undefined1 auStackY_18b8 [32];
  undefined4 uStack_187c;
  undefined4 uStack_186c;
  TArrayView<UE::Math::TVector<double>,int> local_1868;
  TArrayView<UE::Math::TVector<double>_const_,int> local_1858;
  undefined8 local_1848;
  undefined8 uStack_1840;
  undefined8 local_1838;
  ForElementType<UE::Math::TVector<double>_> local_1830;
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_18b8;
  local_1838 = 0;
  local_1848 = 0;
  uStack_1840 = 0;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  iVar7 = 0;
  local_28[1] = 0x100;
  local_1830.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
  local_28[0] = 0;
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
            (0x18,8,0x100,&local_1830,local_28,local_28 + 1);
  uVar5 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar5) {
    uVar9 = (ulonglong)uVar5;
    do {
      iVar6 = 0x100;
      if (iVar4 < 0x100) {
        iVar6 = iVar4;
      }
      FVar8 = (ForElementType<UE::Math::TVector<double>_>)&local_1830;
      if (local_1830.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar8 = local_1830.SecondaryData;
      }
      if ((iVar6 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_1868._12_4_ = uStack_187c;
      local_1868.ArrayNum = iVar6;
      local_1868.DataPtr = (TVector<double> *)FVar8;
      IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_1868,iVar7,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_1858._12_4_ = uStack_186c;
      local_1858.ArrayNum = iVar6;
      local_1858.DataPtr = (TVector<double> *)FVar8;
      IPCGAttributeAccessor::SetRange<UE::Math::TVector<double>_>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_1858,
                 iVar7,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar7 = iVar7 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_1830.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FMemory::Free((void *)local_1830.SecondaryData);
  }
  return true;
}

// operator()<FSoftClassPath> @ 149914f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001499151bb) */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FSoftClassPath> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_20e8 [32];
  undefined4 uStack_208c;
  undefined4 uStack_207c;
  TArrayView<FSoftClassPath,int> local_2078;
  TArrayView<FSoftClassPath_const_,int> local_2068;
  ForElementType<FSoftClassPath> local_2058;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_20e8;
  iVar8 = 0;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  local_2058.SecondaryData = (ForElementType<FSoftClassPath>)0x0;
  local_50[0] = 0;
  local_50[1] = 0x100;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
                    (0x20,8,0x100,&local_2058,local_50,local_50 + 1);
  FVar7 = (ForElementType<FSoftClassPath>)&local_2058;
  if (local_2058.SecondaryData != (ForElementType<FSoftClassPath>)0x0) {
    FVar7 = local_2058.SecondaryData;
  }
  DefaultConstructItems<FSoftClassPath,int>
            ((FSoftClassPath *)((longlong)iVar5 * 0x20 + (longlong)FVar7),0x100);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<FSoftClassPath>)&local_2058;
      if (local_2058.SecondaryData != (ForElementType<FSoftClassPath>)0x0) {
        FVar7 = local_2058.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_2078._12_4_ = uStack_208c;
      local_2078.ArrayNum = iVar5;
      local_2078.DataPtr = (FSoftClassPath *)FVar7;
      IPCGAttributeAccessor::GetRange<FSoftClassPath>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_2078,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_2068._12_4_ = uStack_207c;
      local_2068.ArrayNum = iVar5;
      local_2068.DataPtr = (FSoftClassPath *)FVar7;
      IPCGAttributeAccessor::SetRange<FSoftClassPath>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_2068,
                 iVar8,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FVar7 = (ForElementType<FSoftClassPath>)&local_2058;
  if (local_2058.SecondaryData != (ForElementType<FSoftClassPath>)0x0) {
    FVar7 = local_2058.SecondaryData;
  }
  DestructItems<FSoftClassPath,int>((FSoftClassPath *)FVar7,local_50[0]);
  if (local_2058.SecondaryData != (ForElementType<FSoftClassPath>)0x0) {
    FMemory::Free((void *)local_2058.SecondaryData);
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return true;
}

// operator()<FSoftObjectPath> @ 149916a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149916c7b) */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FSoftObjectPath> FVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStackY_20e8 [32];
  undefined4 uStack_208c;
  undefined4 uStack_207c;
  TArrayView<FSoftObjectPath,int> local_2078;
  TArrayView<FSoftObjectPath_const_,int> local_2068;
  ForElementType<FSoftObjectPath> local_2058;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_20e8;
  iVar9 = 0;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  local_2058.SecondaryData = (ForElementType<FSoftObjectPath>)0x0;
  local_50[0] = 0;
  local_50[1] = 0x100;
  iVar6 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                    (0x20,8,0x100,&local_2058,local_50,local_50 + 1);
  FVar8 = (ForElementType<FSoftObjectPath>)&local_2058;
  if (local_2058.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FVar8 = local_2058.SecondaryData;
  }
  DefaultConstructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)((longlong)iVar6 * 0x20 + (longlong)FVar8),0x100);
  uVar7 = (int)(iVar5 + 0xff + (iVar5 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar7) {
    uVar10 = (ulonglong)uVar7;
    do {
      iVar6 = 0x100;
      if (iVar5 < 0x100) {
        iVar6 = iVar5;
      }
      FVar8 = (ForElementType<FSoftObjectPath>)&local_2058;
      if (local_2058.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
        FVar8 = local_2058.SecondaryData;
      }
      if ((iVar6 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_2078._12_4_ = uStack_208c;
      local_2078.ArrayNum = iVar6;
      local_2078.DataPtr = (FSoftObjectPath *)FVar8;
      IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_2078,iVar9,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_2068._12_4_ = uStack_207c;
      local_2068.ArrayNum = iVar6;
      local_2068.DataPtr = (FSoftObjectPath *)FVar8;
      IPCGAttributeAccessor::SetRange<FSoftObjectPath>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_2068,
                 iVar9,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar9 = iVar9 + 0x100;
      iVar5 = iVar5 + -0x100;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FVar8 = (ForElementType<FSoftObjectPath>)&local_2058;
  if (local_2058.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FVar8 = local_2058.SecondaryData;
  }
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)FVar8,local_50[0]);
  if (local_2058.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
    FMemory::Free((void *)local_2058.SecondaryData);
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return true;
}

// operator()<FName> @ 149918b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<FName>
          (void *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FName> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_8a8 [32];
  undefined4 uStack_86c;
  undefined4 uStack_85c;
  TArrayView<FName,int> local_858;
  TArrayView<FName_const_,int> local_848;
  ForElementType<FName> local_838;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  iVar8 = 0;
  local_30[1] = 0x100;
  local_838.SecondaryData = (ForElementType<FName>)0x0;
  local_30[0] = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,0x100,&local_838,local_30,local_30 + 1);
  FVar7 = (ForElementType<FName>)&local_838;
  if (local_838.SecondaryData != (ForElementType<FName>)0x0) {
    FVar7 = local_838.SecondaryData;
  }
  memset((void *)((longlong)FVar7 + (longlong)iVar5 * 8),0,0x800);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<FName>)&local_838;
      if (local_838.SecondaryData != (ForElementType<FName>)0x0) {
        FVar7 = local_838.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_858._12_4_ = uStack_86c;
      local_858.ArrayNum = iVar5;
      local_858.DataPtr = (FName *)FVar7;
      IPCGAttributeAccessor::GetRange<FName>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_858,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_848._12_4_ = uStack_85c;
      local_848.ArrayNum = iVar5;
      local_848.DataPtr = (FName *)FVar7;
      IPCGAttributeAccessor::SetRange<FName>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_848,iVar8
                 ,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_838.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_838.SecondaryData);
  }
  return true;
}

// operator()<FString> @ 14991a7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<FString>
          (void *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FString> FVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStackY_10b8 [32];
  undefined4 uStack_107c;
  undefined4 uStack_106c;
  TArrayView<FString,int> local_1068;
  TArrayView<FString_const_,int> local_1058;
  ForElementType<FString> local_1048;
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_10b8;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  iVar9 = 0;
  local_40[1] = 0x100;
  local_1048.SecondaryData = (ForElementType<FString>)0x0;
  local_40[0] = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                    (0x10,8,0x100,&local_1048,local_40,local_40 + 1);
  FVar8 = (ForElementType<FString>)&local_1048;
  if (local_1048.SecondaryData != (ForElementType<FString>)0x0) {
    FVar8 = local_1048.SecondaryData;
  }
  memset((FString *)((longlong)iVar6 * 0x10 + (longlong)FVar8),0,0x1000);
  uVar7 = (int)(iVar5 + 0xff + (iVar5 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar7) {
    uVar10 = (ulonglong)uVar7;
    do {
      iVar6 = 0x100;
      if (iVar5 < 0x100) {
        iVar6 = iVar5;
      }
      FVar8 = (ForElementType<FString>)&local_1048;
      if (local_1048.SecondaryData != (ForElementType<FString>)0x0) {
        FVar8 = local_1048.SecondaryData;
      }
      if ((iVar6 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_1068._12_4_ = uStack_107c;
      local_1068.ArrayNum = iVar6;
      local_1068.DataPtr = (FString *)FVar8;
      IPCGAttributeAccessor::GetRange<FString>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_1068,iVar9,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_1058._12_4_ = uStack_106c;
      local_1058.ArrayNum = iVar6;
      local_1058.DataPtr = (FString *)FVar8;
      IPCGAttributeAccessor::SetRange<FString>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_1058,
                 iVar9,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar9 = iVar9 + 0x100;
      iVar5 = iVar5 + -0x100;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FVar8 = (ForElementType<FString>)&local_1048;
  if (local_1048.SecondaryData != (ForElementType<FString>)0x0) {
    FVar8 = local_1048.SecondaryData;
  }
  DestructItems<FString,int>((FString *)FVar8,local_40[0]);
  if (local_1048.SecondaryData != (ForElementType<FString>)0x0) {
    FMemory::Free((void *)local_1048.SecondaryData);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return true;
}

// operator()<__int64> @ 14991c710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<__int64>
          (void *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<__int64> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_8a8 [32];
  undefined4 uStack_86c;
  undefined4 uStack_85c;
  TArrayView<__int64,int> local_858;
  TArrayView<__int64_const_,int> local_848;
  ForElementType<__int64> local_838;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))();
  local_30[1] = 0x100;
  iVar8 = 0;
  local_838.SecondaryData = (ForElementType<__int64>)0x0;
  local_30[0] = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                    (8,8,0x100,&local_838,local_30,local_30 + 1);
  FVar7 = (ForElementType<__int64>)&local_838;
  if (local_838.SecondaryData != (ForElementType<__int64>)0x0) {
    FVar7 = local_838.SecondaryData;
  }
  memset((void *)((longlong)FVar7 + (longlong)iVar5 * 8),0,0x800);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<__int64>)&local_838;
      if (local_838.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar7 = local_838.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_858._12_4_ = uStack_86c;
      local_858.ArrayNum = iVar5;
      local_858.DataPtr = (long64 *)FVar7;
      IPCGAttributeAccessor::GetRange<__int64>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_858,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_848._12_4_ = uStack_85c;
      local_848.ArrayNum = iVar5;
      local_848.DataPtr = (long64 *)FVar7;
      IPCGAttributeAccessor::SetRange<__int64>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_848,iVar8
                 ,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_838.SecondaryData != (ForElementType<__int64>)0x0) {
    FMemory::Free((void *)local_838.SecondaryData);
  }
  return true;
}

// operator()<bool> @ 14991e5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<bool>(void *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined7 in_register_00000011;
  ForElementType<bool> FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_1a8 [32];
  undefined4 uStack_16c;
  undefined4 uStack_15c;
  TArrayView<bool,int> local_158;
  TArrayView<bool_const_,int> local_148;
  ForElementType<bool> local_138;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x10))
                    ((longlong *)**(undefined8 **)((longlong)this + 0x10),
                     CONCAT71(in_register_00000011,param_1));
  local_30[1] = 0x100;
  iVar8 = 0;
  local_138.SecondaryData = (ForElementType<bool>)0x0;
  local_30[0] = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                    (1,1,0x100,&local_138,local_30,local_30 + 1);
  FVar7 = (ForElementType<bool>)&local_138;
  if (local_138.SecondaryData != (ForElementType<bool>)0x0) {
    FVar7 = local_138.SecondaryData;
  }
  memset((void *)((longlong)iVar5 + (longlong)FVar7),0,0x100);
  uVar6 = (int)(iVar4 + 0xff + (iVar4 + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      iVar5 = 0x100;
      if (iVar4 < 0x100) {
        iVar5 = iVar4;
      }
      FVar7 = (ForElementType<bool>)&local_138;
      if (local_138.SecondaryData != (ForElementType<bool>)0x0) {
        FVar7 = local_138.SecondaryData;
      }
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_158._12_4_ = uStack_16c;
      local_158.ArrayNum = iVar5;
      local_158.DataPtr = (bool *)FVar7;
      IPCGAttributeAccessor::GetRange<bool>
                ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_158,iVar8,
                 (IPCGAttributeAccessorKeys *)**(undefined8 **)this,AllowBroadcast);
      local_148._12_4_ = uStack_15c;
      local_148.ArrayNum = iVar5;
      local_148.DataPtr = (bool *)FVar7;
      IPCGAttributeAccessor::SetRange<bool>
                (*(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 8),&local_148,iVar8
                 ,(IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                 AllowBroadcast);
      iVar8 = iVar8 + 0x100;
      iVar4 = iVar4 + -0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_138.SecondaryData != (ForElementType<bool>)0x0) {
    FMemory::Free((void *)local_138.SecondaryData);
  }
  return true;
}

// CanExecuteOnlyOnMainThread @ 1499da3f0

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
FPCGExternalDataElement::CanExecuteOnlyOnMainThread
          (FPCGExternalDataElement *this,FPCGContext *param_1)

{
  return true;
}

// CreateContext @ 1499daf60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall FPCGExternalDataElement::CreateContext(FPCGExternalDataElement *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGExternalDataContext::_vftable__for__FPCGContext__;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1]._padding_ =
         (longlong)&FPCGExternalDataContext::_vftable__for__IPCGAsyncLoadingContext__;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 1499e6d30

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
FPCGExternalDataElement::ExecuteInternal(FPCGExternalDataElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId28,"FPCGExternalDataElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExternalData.cpp"
               ,0x1c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId28);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExternalData.cpp"
                         ,0x1e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((char)param_1[1].OutputData.TaggedData.ArrayNum == '\0') {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)((longlong)*this + 0xc0))(this,param_1);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar3;
}

// ExecuteLoad @ 1499f0830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FPCGExternalDataElement::ExecuteLoad(FPCGExternalDataElement *this,FPCGExternalDataContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  FText *this_00;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  FScriptContainerElement *local_228;
  longlong local_220;
  undefined1 *local_218;
  undefined1 local_208 [40];
  ulong64 local_1e0;
  FSoftObjectPath local_1d8;
  FSoftClassPath local_1b8;
  TVector2<double>_u_0 local_198;
  FString local_188;
  FString local_178;
  FText local_168;
  TVector<double>_u_0 local_158;
  TRotator<double> local_138;
  TVector4<double>_u_0 local_118;
  TQuat<double> local_f8;
  undefined8 local_c8;
  undefined8 local_b0;
  TTransform<double> local_a8;
  
  bVar3 = false;
  bVar2 = false;
  local_res10[0] = 0;
  if ((param_1 == (FPCGExternalDataContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExternalData.cpp"
                         ,0x2a,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return (bool)uVar8;
  }
  dVar5 = _UNK_15061cbc8;
  dVar4 = ___xmm_3ff00000000000000000000000000000;
  local_res20 = (param_1->PointDataAccessorsMapping).ArrayNum;
  uVar9 = (ulonglong)(int)local_res20;
  pFVar10 = (param_1->PointDataAccessorsMapping).AllocatorInstance.Data;
  local_208._24_8_ = pFVar10 + uVar9 * 0x28;
  pFVar11 = pFVar10 + 0x18;
  do {
    uVar6 = local_208._24_8_;
    local_208._16_8_ = pFVar10;
    if ((param_1->PointDataAccessorsMapping).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<FPCGExternalDataContext::FPointDataAccessorsMapping,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == (FScriptContainerElement *)uVar6) {
      return true;
    }
    local_res10[0] = *(uint *)pFVar11;
    uVar9 = (ulonglong)(int)local_res10[0];
    local_208._8_8_ = *(undefined8 *)pFVar10;
    lVar13 = *(longlong *)(pFVar11 + -8);
    lVar12 = uVar9 * 0x50 + lVar13;
    while( true ) {
      if (*(int *)pFVar11 != (int)uVar9) {
        `TCheckedPointerIterator<FPCGExternalDataContext::FRowToPointAccessors,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (lVar13 == lVar12) break;
      PCGAttributeAccessorHelpers::CreateKeys
                ((UPCGData *)local_208,(FPCGAttributePropertySelector *)local_208._8_8_);
      local_228 = pFVar11 + 8;
      local_218 = local_208;
      local_220 = lVar13;
      switch(*(undefined2 *)(*(longlong *)(lVar13 + 8) + 10)) {
      case 0:
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<float>
                          (&local_228,0.0);
        break;
      case 1:
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<double>
                          (&local_228,0.0);
        break;
      case 2:
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<int>
                          (&local_228,0);
        break;
      case 3:
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<__int64>
                          (&local_228,0);
        break;
      case 4:
        local_198._s_0.X = 0.0;
        local_198._s_0.Y = 0.0;
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::
                operator()<UE::Math::TVector2<double>_>
                          (&local_228,(TVector2<double> *)&local_198._s_0);
        break;
      case 5:
        local_158._s_0.X = 0.0;
        local_158._s_0.Y = 0.0;
        local_c8 = 0;
        local_158._s_0.Z = 0.0;
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::
                operator()<UE::Math::TVector<double>_>
                          (&local_228,(TVector<double> *)&local_158._s_0);
        break;
      case 6:
        local_118._s_0.Z = dVar4;
        local_118._s_0.W = dVar5;
        local_118._s_0.X = 0.0;
        local_118._s_0.Y = 0.0;
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::
                operator()<UE::Math::TVector4<double>_>
                          (&local_228,(TVector4<double> *)&local_118._s_0);
        break;
      case 7:
        local_f8.X = 0.0;
        local_f8.Y = 0.0;
        local_f8.Z = 0.0;
        local_f8.W = 0.0;
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::
                operator()<UE::Math::TQuat<double>_>(&local_228,&local_f8);
        break;
      case 8:
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::
                operator()<UE::Math::TTransform<double>_>(&local_228,&local_a8);
        break;
      case 9:
        local_208._32_8_ = 0;
        local_1e0 = 0;
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<FString>
                          (&local_228,(FString *)(local_208 + 0x20));
        break;
      case 10:
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<bool>
                          (&local_228,false);
        break;
      case 0xb:
        local_138.Pitch = 0.0;
        local_138.Yaw = 0.0;
        local_b0 = 0;
        local_138.Roll = 0.0;
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::
                operator()<UE::Math::TRotator<double>_>(&local_228,&local_138);
        break;
      case 0xc:
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::operator()<FName>
                          (&local_228,(FName)0x0);
        break;
      case 0xd:
        local_1d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_1d8.AssetPath.PackageName.Number = 0;
        local_1d8.AssetPath.AssetName = (FName)0x0;
        local_1d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.SubPathString.Data.ArrayNum = 0;
        local_1d8.SubPathString.Data.ArrayMax = 0;
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::
                operator()<FSoftObjectPath>(&local_228,&local_1d8);
        break;
      case 0xe:
        local_1b8._0_8_ = 0;
        local_1b8._8_8_ = 0;
        local_1b8._16_8_ = 0;
        local_1b8._24_8_ = 0;
        bVar7 = `FPCGExternalDataElement::ExecuteLoad'::__l17::<lambda_1>::
                operator()<FSoftClassPath>(&local_228,&local_1b8);
        break;
      default:
        goto switchD_1499f0969_default;
      }
      if (bVar7 == false) {
switchD_1499f0969_default:
        if (2 < (byte)LogPCG._0_1_) {
          this_00 = FText::AsLocalizable_Advanced_LocText
                              (&local_168,L"PCGExternalData",L"ErrorGettingSettingValues",
                               L"Error while getting/setting values");
          FText::ToString(this_00);
          if (param_1 != (FPCGExternalDataContext *)0x0) {
            FPCGContext::GetTaskName((FPCGContext *)param_1,&local_178);
            bVar3 = true;
            bVar2 = true;
            FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_188);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if ((bVar2) &&
             (bVar2 = false, local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if ((bVar3) &&
             (bVar3 = false, local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (local_168.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
          }
        }
      }
      if ((undefined8 *)local_208._0_8_ != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_208._0_8_)(local_208._0_8_,1);
      }
      uVar9 = (ulonglong)local_res10[0];
      lVar13 = lVar13 + 0x50;
    }
    uVar9 = (ulonglong)local_res20;
    pFVar10 = (FScriptContainerElement *)(local_208._16_8_ + 0x28);
    pFVar11 = pFVar11 + 0x28;
  } while( true );
}

// PostExecuteLoad @ 149a04b90

bool __thiscall
FPCGExternalDataElement::PostExecuteLoad
          (FPCGExternalDataElement *this,FPCGExternalDataContext *param_1)

{
  return true;
}

// PrepareDataInternal @ 149a04cd0

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
FPCGExternalDataElement::PrepareDataInternal(FPCGExternalDataElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId19,"FPCGExternalDataElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExternalData.cpp"
               ,0x13);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId19);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExternalData.cpp"
                         ,0x15,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar3 = (**(code **)((longlong)*this + 0xb8))(this,param_1);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar3;
}

