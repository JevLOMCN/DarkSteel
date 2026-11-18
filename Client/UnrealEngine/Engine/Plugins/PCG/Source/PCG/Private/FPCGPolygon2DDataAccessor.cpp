// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// GetRangeImpl @ 1498c16c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<int,5>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<int,5> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_e8 [32];
  longlong *local_b8 [2];
  TArrayView<void_const_*,int> local_a8;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = local_b8;
  local_b8[0] = (longlong *)0x0;
  bVar3 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_a8);
  if (bVar3) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar4 = (*pcVar1)(param_3);
    plVar2 = local_b8[0];
    if (cVar4 != '\0') {
      (**(code **)(*local_b8[0] + 0x498))(local_b8[0],local_98);
      iVar10 = param_1->ArrayNum;
      uVar8 = 0;
      if (0 < iVar10) {
        lVar9 = 0;
        do {
          uVar6 = (**(code **)(*plVar2 + 0x4a0))();
          uVar7 = 0;
          if ((int)uVar8 < iVar10) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          uVar8 = uVar8 + 1;
          iVar10 = param_1->ArrayNum;
          *(undefined4 *)(lVar9 + (longlong)param_1->DataPtr) = uVar6;
          lVar9 = lVar9 + 4;
        } while ((int)uVar8 < iVar10);
      }
      return true;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5660170522739080995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                       ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c1850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<int,6>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<int,6> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStackY_e8 [32];
  longlong *local_b8 [2];
  TArrayView<void_const_*,int> local_a8;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = local_b8;
  local_b8[0] = (longlong *)0x0;
  bVar4 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_a8);
  if (bVar4) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar5 = (*pcVar1)(param_3);
    plVar3 = local_b8[0];
    if (cVar5 != '\0') {
      (**(code **)(*local_b8[0] + 0x498))(local_b8[0],local_98);
      iVar8 = param_1->ArrayNum;
      uVar9 = 0;
      if (0 < iVar8) {
        lVar10 = 0;
        do {
          lVar2 = plVar3[0x23];
          uVar7 = 0;
          if ((int)uVar9 < iVar8) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          uVar9 = uVar9 + 1;
          iVar8 = param_1->ArrayNum;
          *(int *)(lVar10 + (longlong)param_1->DataPtr) = (int)lVar2;
          lVar10 = lVar10 + 4;
        } while ((int)uVar9 < iVar8);
      }
      return true;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5660170522739080995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                       ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c19d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<int,7>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<int,7> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStackY_e8 [32];
  longlong *local_b8 [2];
  TArrayView<void_const_*,int> local_a8;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = local_b8;
  local_b8[0] = (longlong *)0x0;
  bVar4 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_a8);
  if (bVar4) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar5 = (*pcVar1)(param_3);
    plVar3 = local_b8[0];
    if (cVar5 != '\0') {
      (**(code **)(*local_b8[0] + 0x498))(local_b8[0],local_98);
      iVar8 = param_1->ArrayNum;
      uVar9 = 0;
      if (0 < iVar8) {
        lVar10 = 0;
        do {
          lVar2 = plVar3[0x26];
          uVar7 = 0;
          if ((int)uVar9 < iVar8) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          uVar9 = uVar9 + 1;
          iVar8 = param_1->ArrayNum;
          *(int *)(lVar10 + (longlong)param_1->DataPtr) = (int)lVar2;
          lVar10 = lVar10 + 4;
        } while ((int)uVar9 < iVar8);
      }
      return true;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5660170522739080995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                       ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c1b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<int,8>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<int,8> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStackY_148 [32];
  longlong *local_118 [2];
  TArrayView<void_const_*,int> local_108;
  TSegment2<double> local_f8;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_108.ArrayNum = 1;
  local_108.DataPtr = local_118;
  local_118[0] = (longlong *)0x0;
  bVar7 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_108);
  if (bVar7) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar8 = (*pcVar2)(param_3);
    plVar6 = local_118[0];
    if (cVar8 != '\0') {
      (**(code **)(*local_118[0] + 0x498))(local_118[0],local_c8);
      dVar5 = __real_ffefffffffffffff;
      uVar13 = 0;
      if (0 < param_1->ArrayNum) {
        lVar15 = 0;
        do {
          iVar1 = (int)plVar6[0x23];
          iVar14 = 0;
          iVar12 = -1;
          iVar11 = -1;
          dVar3 = dVar5;
          if (0 < iVar1) {
            do {
              UE::Geometry::TPolygon2<double>::Segment
                        ((TPolygon2<double> *)(plVar6 + 0x22),&local_f8,iVar14);
              iVar11 = iVar14;
              dVar4 = local_f8.Extent + local_f8.Extent;
              if (local_f8.Extent + local_f8.Extent <= dVar3) {
                iVar11 = iVar12;
                dVar4 = dVar3;
              }
              iVar14 = iVar14 + 1;
              dVar3 = dVar4;
              iVar12 = iVar11;
            } while (iVar14 < iVar1);
          }
          uVar10 = 0;
          if ((int)uVar13 < param_1->ArrayNum) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          uVar13 = uVar13 + 1;
          *(int *)(lVar15 + (longlong)param_1->DataPtr) = iVar11;
          lVar15 = lVar15 + 4;
        } while ((int)uVar13 < param_1->ArrayNum);
      }
      return true;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5660170522739080995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                       ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c1d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<double,1>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<double,1> *this,TArrayView<double,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  double dVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_f8 [32];
  longlong *local_c8 [2];
  TArrayView<void_const_*,int> local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b8.ArrayNum = 1;
  local_b8.DataPtr = local_c8;
  local_c8[0] = (longlong *)0x0;
  bVar4 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_b8);
  if (bVar4) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar5 = (*pcVar1)(param_3);
    plVar3 = local_c8[0];
    if (cVar5 != '\0') {
      (**(code **)(*local_c8[0] + 0x498))(local_c8[0],local_a8);
      iVar10 = param_1->ArrayNum;
      uVar8 = 0;
      if (0 < iVar10) {
        lVar9 = 0;
        do {
          dVar2 = UE::Geometry::TGeneralPolygon2<double>::SignedArea
                            ((TGeneralPolygon2<double> *)(plVar3 + 0x22));
          uVar7 = 0;
          if ((int)uVar8 < iVar10) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          uVar8 = uVar8 + 1;
          iVar10 = param_1->ArrayNum;
          *(double *)(lVar9 + (longlong)param_1->DataPtr) = dVar2;
          lVar9 = lVar9 + 8;
        } while ((int)uVar8 < iVar10);
      }
      return true;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5660170522739080995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                       ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c1f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<double,2>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<double,2> *this,TArrayView<double,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  longlong *local_f0;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_e8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_d8;
  TArrayView<void_const_*,int> local_c8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_e8.ArrayNum = 1;
  local_e8.DataPtr = (TVector2<double> *)&local_f0;
  local_f0 = (longlong *)0x0;
  local_c8._12_4_ = local_e8._12_4_;
  local_c8.ArrayNum = 1;
  local_c8.DataPtr = (void **)local_e8.DataPtr;
  bVar7 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_c8);
  if (bVar7) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar8 = (*pcVar2)(param_3);
    plVar6 = local_f0;
    if (cVar8 != '\0') {
      (**(code **)(*local_f0 + 0x498))(local_f0,local_b8);
      uVar14 = 0;
      if (0 < param_1->ArrayNum) {
        lVar13 = 0;
        do {
          local_e8.DataPtr = (TVector2<double> *)plVar6[0x22];
          lVar5 = plVar6[0x23];
          if (((int)lVar5 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          local_e8.ArrayNum = (int)lVar5;
          dVar3 = UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector2<double>_>
                            (&local_e8,true);
          lVar5 = plVar6[0x26];
          puVar11 = (undefined8 *)plVar6[0x25];
          puVar12 = puVar11 + (longlong)(int)lVar5 * 2;
          while( true ) {
            if ((int)plVar6[0x26] != (int)lVar5) {
              local_f8[0] = 0;
              `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_f8);
            }
            if (puVar11 == puVar12) break;
            local_d8.DataPtr = (TVector2<double> *)*puVar11;
            iVar1 = *(int *)(puVar11 + 1);
            if ((iVar1 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar9 = (*pcVar2)();
              return (bool)uVar9;
            }
            local_d8.ArrayNum = iVar1;
            dVar4 = UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector2<double>_>
                              (&local_d8,true);
            dVar3 = dVar3 + dVar4;
            puVar11 = puVar11 + 2;
          }
          uVar10 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          uVar14 = uVar14 + 1;
          *(double *)((longlong)param_1->DataPtr + lVar13) = dVar3;
          lVar13 = lVar13 + 8;
        } while ((int)uVar14 < param_1->ArrayNum);
      }
      return true;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5660170522739080995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                       ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c21b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<UE::Math::TTransform<double>,0>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<UE::Math::TTransform<double>,0> *this,
          TArrayView<UE::Math::TTransform<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  TTransform<double> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  char cVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStackY_138 [32];
  longlong *local_108 [2];
  TArrayView<void_const_*,int> local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8.ArrayNum = 1;
  local_f8.DataPtr = local_108;
  local_108[0] = (longlong *)0x0;
  bVar16 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_f8);
  if (bVar16) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar17 = (*pcVar2)(param_3);
    if (cVar17 != '\0') {
      (**(code **)(*local_108[0] + 0x498))(local_108[0],&local_e8);
      iVar20 = param_1->ArrayNum;
      uVar21 = 0;
      if (0 < iVar20) {
        lVar22 = 0;
        do {
          uVar15 = uStack_90;
          uVar14 = local_98;
          uVar13 = uStack_a0;
          uVar12 = local_a8;
          uVar11 = uStack_b0;
          uVar10 = local_b8;
          uVar9 = uStack_c0;
          uVar8 = local_c8;
          uVar7 = uStack_d0;
          uVar6 = local_d8;
          uVar5 = uStack_e0;
          uVar4 = local_e8;
          uVar19 = 0;
          if ((int)uVar21 < iVar20) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar16)) {
            pcVar2 = (code *)swi(3);
            uVar18 = (*pcVar2)();
            return (bool)uVar18;
          }
          pTVar3 = param_1->DataPtr;
          uVar21 = uVar21 + 1;
          iVar20 = param_1->ArrayNum;
          puVar1 = (undefined8 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + lVar22);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + lVar22);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + lVar22);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          puVar1 = (undefined8 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + lVar22);
          *puVar1 = uVar10;
          puVar1[1] = uVar11;
          puVar1 = (undefined8 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + lVar22);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1 = (undefined8 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + lVar22);
          *puVar1 = uVar14;
          puVar1[1] = uVar15;
          lVar22 = lVar22 + 0x60;
        } while ((int)uVar21 < iVar20);
      }
      return true;
    }
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5660170522739080995>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                        ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      uVar18 = (*pcVar2)();
      return (bool)uVar18;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c23c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,3>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,3> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  void *_Src;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  TArrayView<UE::Math::TVector2<double>,int> *pTVar9;
  bool bVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [15];
  ForAnyElementType local_1a8;
  int iStack_1a0;
  int iStack_19c;
  uint local_198;
  uint local_194;
  longlong *local_190;
  longlong local_188;
  TVector2<double>_u_0 local_180;
  undefined8 local_170;
  undefined8 local_168;
  TArrayView<UE::Math::TVector2<double>,int> *local_160;
  TArrayView<void_const_*,int> local_158;
  undefined1 local_148 [96];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a8.Data = (FScriptContainerElement *)&local_190;
  iStack_1a0 = 1;
  local_158._12_4_ = iStack_19c;
  local_158.ArrayNum = 1;
  local_190 = (longlong *)0x0;
  local_160 = param_1;
  local_158.DataPtr = (void **)local_1a8.Data;
  bVar10 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_158);
  if (bVar10) {
    pcVar4 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar11 = (*pcVar4)(param_3);
    plVar8 = local_190;
    if (cVar11 != '\0') {
      (**(code **)(*local_190 + 0x498))(local_190,local_148);
      local_198 = 0;
      if (0 < param_1->ArrayNum) {
        uVar39 = (undefined4)__real_7fefffffffffffff;
        uVar40 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
        uVar41 = (undefined4)__real_ffefffffffffffff;
        uVar42 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
        local_188 = 0;
        do {
          UE::Geometry::TPolygon2<double>::Bounds
                    ((TPolygon2<double> *)(plVar8 + 0x22),
                     (TAxisAlignedBox2<double> *)&local_180._s_0);
          local_194 = *(uint *)(plVar8 + 0x26);
          uVar14 = (ulonglong)(int)local_194;
          puVar21 = (undefined8 *)plVar8[0x25];
          uVar31 = (undefined4)local_168;
          uVar32 = (undefined4)((ulonglong)local_168 >> 0x20);
          uVar33 = (undefined4)local_170;
          uVar34 = (undefined4)((ulonglong)local_170 >> 0x20);
          uVar35 = SUB84(local_180._s_0.Y,0);
          uVar36 = (undefined4)((ulonglong)local_180._8_8_ >> 0x20);
          uVar37 = SUB84(local_180._s_0.X,0);
          uVar38 = (undefined4)((ulonglong)local_180._0_8_ >> 0x20);
          puVar20 = puVar21 + uVar14 * 2;
          while( true ) {
            if ((int)plVar8[0x26] != (int)uVar14) {
              local_1b8 = 0;
              `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_1b8);
            }
            pTVar9 = local_160;
            uVar7 = local_198;
            if (puVar21 == puVar20) break;
            iStack_1a0 = *(int *)(puVar21 + 1);
            lVar17 = (longlong)iStack_1a0;
            _Src = (void *)*puVar21;
            local_1a8.Data = (FScriptContainerElement *)0x0;
            if (iStack_1a0 == 0) {
              iStack_19c = 0;
              iVar15 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iStack_1a0,0,&local_1a8,iStack_1a0,&iStack_19c);
              memcpy(local_1a8.Data,_Src,lVar17 << 4);
              iVar15 = iStack_1a0;
            }
            pFVar18 = local_1a8.Data + (longlong)iVar15 * 0x10;
            FVar19.Data = local_1a8.Data;
            uVar22 = uVar39;
            uVar23 = uVar40;
            uVar24 = uVar39;
            uVar26 = uVar40;
            uVar27 = uVar41;
            uVar28 = uVar42;
            uVar29 = uVar41;
            uVar30 = uVar42;
            iVar16 = iVar15;
            while( true ) {
              if (iVar16 != iVar15) {
                local_1b7[0] = 0;
                `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_1b7);
                iVar16 = iStack_1a0;
              }
              if (FVar19.Data == pFVar18) break;
              plVar2 = *(longlong **)FVar19.Data;
              plVar3 = *(longlong **)(FVar19.Data + 8);
              uVar25 = (undefined4)((ulonglong)plVar2 >> 0x20);
              if ((double)plVar2 <= (double)CONCAT44(uVar23,uVar22)) {
                uVar22 = (int)plVar2;
                uVar23 = uVar25;
              }
              if ((double)CONCAT44(uVar28,uVar27) <= (double)plVar2) {
                uVar27 = (int)plVar2;
                uVar28 = uVar25;
              }
              FVar19.Data = FVar19.Data + 0x10;
              uVar25 = (undefined4)((ulonglong)plVar3 >> 0x20);
              if ((double)plVar3 <= (double)CONCAT44(uVar26,uVar24)) {
                uVar24 = (int)plVar3;
                uVar26 = uVar25;
              }
              if ((double)CONCAT44(uVar30,uVar29) <= (double)plVar3) {
                uVar29 = (int)plVar3;
                uVar30 = uVar25;
              }
            }
            if ((double)CONCAT44(uVar23,uVar22) <= (double)CONCAT44(uVar38,uVar37)) {
              uVar37 = uVar22;
              uVar38 = uVar23;
            }
            if ((double)CONCAT44(uVar26,uVar24) <= (double)CONCAT44(uVar36,uVar35)) {
              uVar35 = uVar24;
              uVar36 = uVar26;
            }
            if ((double)CONCAT44(uVar34,uVar33) < (double)CONCAT44(uVar28,uVar27) ||
                (double)CONCAT44(uVar34,uVar33) == (double)CONCAT44(uVar28,uVar27)) {
              uVar33 = uVar27;
              uVar34 = uVar28;
            }
            if ((double)CONCAT44(uVar32,uVar31) < (double)CONCAT44(uVar30,uVar29) ||
                (double)CONCAT44(uVar32,uVar31) == (double)CONCAT44(uVar30,uVar29)) {
              uVar31 = uVar29;
              uVar32 = uVar30;
            }
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data);
            }
            uVar14 = (ulonglong)local_194;
            puVar21 = puVar21 + 2;
          }
          dVar5 = (double)CONCAT44(uVar36,uVar35);
          dVar6 = (double)CONCAT44(uVar38,uVar37);
          local_168 = CONCAT44(uVar32,uVar31);
          uVar13 = 0;
          if ((int)local_198 < local_160->ArrayNum) {
            uVar13 = ~local_198 >> 0x1f;
          }
          local_170 = CONCAT44(uVar34,uVar33);
          local_180._s_0.X = dVar6;
          local_180._s_0.Y = dVar5;
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          local_198 = uVar7 + 1;
          pdVar1 = (double *)((longlong)&pTVar9->DataPtr->field0_0x0 + local_188);
          *pdVar1 = dVar6;
          pdVar1[1] = dVar5;
          local_188 = local_188 + 0x10;
        } while ((int)local_198 < pTVar9->ArrayNum);
      }
      return true;
    }
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5660170522739080995>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                        ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c27c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,4>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,4> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  TArrayView<UE::Math::TVector2<double>,int> *pTVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [15];
  ForAnyElementType local_1a8;
  int iStack_1a0;
  int iStack_19c;
  uint local_198;
  uint local_194;
  longlong *local_190;
  longlong local_188;
  TVector2<double>_u_0 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  TArrayView<UE::Math::TVector2<double>,int> *local_160;
  TArrayView<void_const_*,int> local_158;
  undefined1 local_148 [96];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a8.Data = (FScriptContainerElement *)&local_190;
  iStack_1a0 = 1;
  local_158._12_4_ = iStack_19c;
  local_158.ArrayNum = 1;
  local_190 = (longlong *)0x0;
  local_160 = param_1;
  local_158.DataPtr = (void **)local_1a8.Data;
  bVar9 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_158);
  if (bVar9) {
    pcVar3 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar10 = (*pcVar3)(param_3);
    plVar7 = local_190;
    if (cVar10 != '\0') {
      (**(code **)(*local_190 + 0x498))(local_190,local_148);
      local_198 = 0;
      if (0 < param_1->ArrayNum) {
        uVar38 = (undefined4)__real_7fefffffffffffff;
        uVar39 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
        uVar40 = (undefined4)__real_ffefffffffffffff;
        uVar41 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
        local_188 = 0;
        do {
          UE::Geometry::TPolygon2<double>::Bounds
                    ((TPolygon2<double> *)(plVar7 + 0x22),
                     (TAxisAlignedBox2<double> *)&local_180._s_0);
          local_194 = *(uint *)(plVar7 + 0x26);
          uVar13 = (ulonglong)(int)local_194;
          puVar20 = (undefined8 *)plVar7[0x25];
          uVar30 = (undefined4)uStack_168;
          uVar31 = (undefined4)((ulonglong)uStack_168 >> 0x20);
          uVar32 = (undefined4)local_170;
          uVar33 = (undefined4)((ulonglong)local_170 >> 0x20);
          uVar34 = SUB84(local_180._s_0.Y,0);
          uVar35 = (undefined4)((ulonglong)local_180._8_8_ >> 0x20);
          uVar36 = SUB84(local_180._s_0.X,0);
          uVar37 = (undefined4)((ulonglong)local_180._0_8_ >> 0x20);
          puVar19 = puVar20 + uVar13 * 2;
          while( true ) {
            if ((int)plVar7[0x26] != (int)uVar13) {
              local_1b8 = 0;
              `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_1b8);
            }
            pTVar8 = local_160;
            uVar6 = local_198;
            if (puVar20 == puVar19) break;
            iStack_1a0 = *(int *)(puVar20 + 1);
            lVar16 = (longlong)iStack_1a0;
            _Src = (void *)*puVar20;
            local_1a8.Data = (FScriptContainerElement *)0x0;
            if (iStack_1a0 == 0) {
              iStack_19c = 0;
              iVar14 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iStack_1a0,0,&local_1a8,iStack_1a0,&iStack_19c);
              memcpy(local_1a8.Data,_Src,lVar16 << 4);
              iVar14 = iStack_1a0;
            }
            pFVar17 = local_1a8.Data + (longlong)iVar14 * 0x10;
            FVar18.Data = local_1a8.Data;
            uVar21 = uVar38;
            uVar22 = uVar39;
            uVar23 = uVar38;
            uVar25 = uVar39;
            uVar26 = uVar40;
            uVar27 = uVar41;
            uVar28 = uVar40;
            uVar29 = uVar41;
            iVar15 = iVar14;
            while( true ) {
              if (iVar15 != iVar14) {
                local_1b7[0] = 0;
                `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_1b7);
                iVar15 = iStack_1a0;
              }
              if (FVar18.Data == pFVar17) break;
              plVar1 = *(longlong **)FVar18.Data;
              plVar2 = *(longlong **)(FVar18.Data + 8);
              uVar24 = (undefined4)((ulonglong)plVar1 >> 0x20);
              if ((double)plVar1 <= (double)CONCAT44(uVar22,uVar21)) {
                uVar21 = (int)plVar1;
                uVar22 = uVar24;
              }
              if ((double)CONCAT44(uVar27,uVar26) <= (double)plVar1) {
                uVar26 = (int)plVar1;
                uVar27 = uVar24;
              }
              FVar18.Data = FVar18.Data + 0x10;
              uVar24 = (undefined4)((ulonglong)plVar2 >> 0x20);
              if ((double)plVar2 <= (double)CONCAT44(uVar25,uVar23)) {
                uVar23 = (int)plVar2;
                uVar25 = uVar24;
              }
              if ((double)CONCAT44(uVar29,uVar28) <= (double)plVar2) {
                uVar28 = (int)plVar2;
                uVar29 = uVar24;
              }
            }
            if ((double)CONCAT44(uVar22,uVar21) <= (double)CONCAT44(uVar37,uVar36)) {
              uVar36 = uVar21;
              uVar37 = uVar22;
            }
            if ((double)CONCAT44(uVar25,uVar23) <= (double)CONCAT44(uVar35,uVar34)) {
              uVar34 = uVar23;
              uVar35 = uVar25;
            }
            if ((double)CONCAT44(uVar33,uVar32) < (double)CONCAT44(uVar27,uVar26) ||
                (double)CONCAT44(uVar33,uVar32) == (double)CONCAT44(uVar27,uVar26)) {
              uVar32 = uVar26;
              uVar33 = uVar27;
            }
            if ((double)CONCAT44(uVar31,uVar30) < (double)CONCAT44(uVar29,uVar28) ||
                (double)CONCAT44(uVar31,uVar30) == (double)CONCAT44(uVar29,uVar28)) {
              uVar30 = uVar28;
              uVar31 = uVar29;
            }
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data);
            }
            uVar13 = (ulonglong)local_194;
            puVar20 = puVar20 + 2;
          }
          uVar4 = CONCAT44(uVar31,uVar30);
          uVar5 = CONCAT44(uVar33,uVar32);
          local_180._s_0.Y = (double)CONCAT44(uVar35,uVar34);
          uVar12 = 0;
          if ((int)local_198 < local_160->ArrayNum) {
            uVar12 = ~local_198 >> 0x1f;
          }
          local_180._s_0.X = (double)CONCAT44(uVar37,uVar36);
          local_170 = uVar5;
          uStack_168 = uVar4;
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          local_198 = uVar6 + 1;
          puVar20 = (undefined8 *)((longlong)&pTVar8->DataPtr->field0_0x0 + local_188);
          *puVar20 = uVar5;
          puVar20[1] = uVar4;
          local_188 = local_188 + 0x10;
        } while ((int)local_198 < pTVar8->ArrayNum);
      }
      return true;
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5660170522739080995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                       ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
  }
  return false;
}

// GetRangeImpl @ 1498c2bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DDataAccessor<bool,9>::GetRangeImpl
          (FPCGPolygon2DDataAccessor<bool,9> *this,TArrayView<bool,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStackY_e8 [32];
  longlong *local_b8 [2];
  TArrayView<void_const_*,int> local_a8;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = local_b8;
  local_b8[0] = (longlong *)0x0;
  bVar4 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_a8);
  if (bVar4) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar5 = (*pcVar1)(param_3);
    plVar3 = local_b8[0];
    if (cVar5 != '\0') {
      (**(code **)(*local_b8[0] + 0x498))(local_b8[0],local_98);
      iVar8 = param_1->ArrayNum;
      uVar9 = 0;
      if (0 < iVar8) {
        lVar10 = 0;
        do {
          lVar2 = plVar3[0x24];
          uVar7 = 0;
          if ((int)uVar9 < iVar8) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          uVar9 = uVar9 + 1;
          iVar8 = param_1->ArrayNum;
          param_1->DataPtr[lVar10] = SUB81(lVar2,0);
          lVar10 = lVar10 + 1;
        } while ((int)uVar9 < iVar8);
      }
      return true;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5660170522739080995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                       ,0xdd,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  return false;
}

// SetRangeImpl @ 1498e7f80

bool __thiscall
FPCGPolygon2DDataAccessor<UE::Math::TTransform<double>,0>::SetRangeImpl
          (FPCGPolygon2DDataAccessor<UE::Math::TTransform<double>,0> *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
  code *pcVar4;
  TTransform<double> *pTVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  bool bVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  void *local_118 [2];
  TArrayView<void_*,int> local_108;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TQuat<double> local_88;
  TQuat<double> local_68 [2];
  
  local_108.ArrayNum = 1;
  local_108.DataPtr = local_118;
  local_118[0] = (void *)0x0;
  bVar10 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_108);
  if (bVar10) {
    pcVar4 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar11 = (*pcVar4)(param_3);
    pvVar9 = local_118[0];
    dVar8 = __real_bff0000000000000;
    dVar7 = __real_3ff0000000000000;
    if (cVar11 != '\0') {
      iVar3 = param_1->ArrayNum;
      uVar15 = 0;
      if (0 < iVar3) {
        lVar14 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar15 < iVar3) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          pTVar5 = param_1->DataPtr;
          local_c8._s_0.Z = dVar7;
          pdVar2 = (double *)((longlong)(pTVar5->Rotation).ZW.m128d_f64 + lVar14);
          local_88.Z = *pdVar2;
          local_88.W = pdVar2[1];
          pdVar2 = (double *)((longlong)(pTVar5->Rotation).XY.m128d_f64 + lVar14);
          local_88.X = *pdVar2;
          local_88.Y = pdVar2[1];
          local_c8._s_0.X = 0.0;
          local_c8._s_0.Y = 0.0;
          UE::Math::TQuat<double>::RotateVector
                    (&local_88,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_c8._s_0);
          local_68[0].Z = *(double *)((longlong)pvVar9 + 0x160);
          local_68[0].W = *(double *)((longlong)pvVar9 + 0x168);
          local_68[0].X = *(double *)((longlong)pvVar9 + 0x150);
          local_68[0].Y = *(double *)((longlong)pvVar9 + 0x158);
          local_a8._s_0.Z = dVar7;
          local_a8._s_0.X = 0.0;
          local_a8._s_0.Y = 0.0;
          UE::Math::TQuat<double>::RotateVector
                    (local_68,(TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_a8._s_0);
          dVar16 = local_f8._s_0.Y * local_e0._s_0.Y + local_f8._s_0.X * local_e0._s_0.X +
                   local_f8._s_0.Z * local_e0._s_0.Z;
          dVar17 = dVar7;
          if ((dVar16 <= 0.0) && (dVar17 = dVar8, 0.0 <= dVar16)) {
            dVar17 = 0.0;
          }
          puVar1 = (undefined8 *)((longlong)(pTVar5->Rotation).XY.m128d_f64 + lVar14);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)pvVar9 + 0x150) = *puVar1;
          *(undefined8 *)((longlong)pvVar9 + 0x158) = uVar6;
          puVar1 = (undefined8 *)((longlong)(pTVar5->Rotation).ZW.m128d_f64 + lVar14);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)pvVar9 + 0x160) = *puVar1;
          *(undefined8 *)((longlong)pvVar9 + 0x168) = uVar6;
          puVar1 = (undefined8 *)((longlong)(pTVar5->Translation).XY.m128d_f64 + lVar14);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)pvVar9 + 0x170) = *puVar1;
          *(undefined8 *)((longlong)pvVar9 + 0x178) = uVar6;
          puVar1 = (undefined8 *)((longlong)(pTVar5->Translation).ZW.m128d_f64 + lVar14);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)pvVar9 + 0x180) = *puVar1;
          *(undefined8 *)((longlong)pvVar9 + 0x188) = uVar6;
          puVar1 = (undefined8 *)((longlong)(pTVar5->Scale3D).XY.m128d_f64 + lVar14);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)pvVar9 + 400) = *puVar1;
          *(undefined8 *)((longlong)pvVar9 + 0x198) = uVar6;
          puVar1 = (undefined8 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + lVar14);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)pvVar9 + 0x1a0) = *puVar1;
          *(undefined8 *)((longlong)pvVar9 + 0x1a8) = uVar6;
          if (dVar17 < 0.0) {
            PCGPolygon2DData::ReversePolygon
                      ((TGeneralPolygon2<double> *)((longlong)pvVar9 + 0x110),
                       (TArray<__int64,TSizedDefaultAllocator<32>_> *)((longlong)pvVar9 + 0x138));
          }
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 0x60;
        } while ((int)uVar15 < iVar3);
      }
      return true;
    }
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5660170522739080900>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                        ,0x13c,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  return false;
}

