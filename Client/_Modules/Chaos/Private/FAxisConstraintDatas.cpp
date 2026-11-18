// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// ApplyMaxLambda @ 143b8f1e0

void __thiscall
Chaos::FAxisConstraintDatas::ApplyMaxLambda
          (FAxisConstraintDatas *this,int param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  
  lVar4 = (longlong)param_1;
  if ((2 < (uint)param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0.0 < *(double *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8)) {
    if ((2 < (uint)param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar5 = *(double *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8);
    if (*param_3 <= dVar5) {
      if ((2 < (uint)param_1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined8 *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8);
      uVar6 = (uint)__xmm_80000000000000008000000000000000;
      uVar7 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      dVar5 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar7,(uint)uVar1 ^ uVar6);
      if (*param_3 <= dVar5 && dVar5 != *param_3) {
        if ((uint)param_1 < 3) {
          uVar1 = *(undefined8 *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8);
          *param_2 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar7,(uint)uVar1 ^ uVar6)
                     - *(double *)((longlong)&this->field0_0x0 + lVar4 * 8 + 0x210);
        }
        else {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar1 = *(undefined8 *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8);
          *param_2 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar7,(uint)uVar1 ^ uVar6)
                     - *(double *)((longlong)&this->field0_0x0 + lVar4 * 8 + 0x210);
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar1 = *(undefined8 *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8);
        *param_3 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar7,(uint)uVar1 ^ uVar6);
      }
    }
    else if ((uint)param_1 < 3) {
      *param_2 = dVar5 - *(double *)((longlong)&this->field0_0x0 + lVar4 * 8 + 0x210);
      *param_3 = *(double *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8);
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *param_2 = *(double *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8) -
                 *(double *)((longlong)&this->field0_0x0 + lVar4 * 8 + 0x210);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *param_3 = *(double *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8);
    }
  }
  return;
}

// GetLimitsCheck @ 143ba2660

bool __thiscall Chaos::FAxisConstraintDatas::GetLimitsCheck(FAxisConstraintDatas *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == 0) {
    return this->bLimitsCheck0;
  }
  if (param_1 == 1) {
    return this->bLimitsCheck1;
  }
  if (param_1 == 2) {
    return this->bLimitsCheck2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                     ,0x97,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetMotionType @ 143ba26e0

EJointMotionType __thiscall
Chaos::FAxisConstraintDatas::GetMotionType(FAxisConstraintDatas *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EJointMotionType EVar3;
  
  if (param_1 == 0) {
    return this->MotionType0;
  }
  if (param_1 == 1) {
    return this->MotionType1;
  }
  if (param_1 == 2) {
    return this->MotionType2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                     ,0xad,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Free;
}

// GetSoftLimit @ 143ba2d30

bool __thiscall Chaos::FAxisConstraintDatas::GetSoftLimit(FAxisConstraintDatas *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == 0) {
    return this->bSoftLimit0;
  }
  if (param_1 == 1) {
    return this->bSoftLimit1;
  }
  if (param_1 == 2) {
    return this->bSoftLimit2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                     ,0xa2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetValidDatas @ 143ba2db0

bool __thiscall Chaos::FAxisConstraintDatas::GetValidDatas(FAxisConstraintDatas *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == 0) {
    return this->bValidDatas0;
  }
  if (param_1 == 1) {
    return this->bValidDatas1;
  }
  if (param_1 == 2) {
    return this->bValidDatas2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                     ,0x8c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// InitDatas @ 143ba42b0

void __thiscall
Chaos::FAxisConstraintDatas::InitDatas
          (FAxisConstraintDatas *this,int param_1,bool param_2,double param_3,double param_4,
          double param_5,bool param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  byte bVar6;
  
  lVar5 = (longlong)param_1;
  if (param_1 == 0) {
    this->bSoftLimit0 = '\0';
    bVar6 = param_2 << 6;
LAB_143ba4494:
    this->field_0x2c0 = this->field_0x2c0 | bVar6;
LAB_143ba449b:
    *(double *)((longlong)&this->field0_0x0 + lVar5 * 8) = param_5;
  }
  else {
    if (param_1 == 1) {
      this->bSoftLimit1 = '\0';
      bVar6 = param_2 << 7;
      goto LAB_143ba4494;
    }
    if (param_1 == 2) {
      this->bSoftLimit2 = '\0';
      this->field_0x2c1 = this->field_0x2c1 | param_2;
      goto LAB_143ba449b;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xce,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (uint)param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)((longlong)&this->field0_0x0 + lVar5 * 8) = param_5;
    if (2 < (uint)param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(double *)((longlong)&this->field0_0x0 + lVar5 * 8 + 0x18) = param_3;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(double *)((longlong)&this->field0_0x0 + lVar5 * 8 + 0x30) = param_4;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined8 *)(&(this->ConstraintMaxLambda).field_0x0 + lVar5 * 8) = 0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(double *)(&(this->SettingsSoftStiffness).field_0x0 + lVar5 * 8) = param_3;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_143ba44c8;
    }
  }
  *(double *)((longlong)&this->field0_0x0 + lVar5 * 8 + 0x18) = param_3;
  *(double *)((longlong)&this->field0_0x0 + lVar5 * 8 + 0x30) = param_4;
  *(undefined8 *)(&(this->ConstraintMaxLambda).field_0x0 + lVar5 * 8) = 0;
  *(double *)(&(this->SettingsSoftStiffness).field_0x0 + lVar5 * 8) = param_3;
LAB_143ba44c8:
  *(double *)(&(this->SettingsSoftDamping).field_0x0 + lVar5 * 8) = param_4;
  SetValidDatas(this,param_1,false);
  SetLimitsCheck(this,param_1,true);
  SetMotionType(this,param_1,Free);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_6) {
    *(double *)((longlong)&this->field0_0x0 + 0x210) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x218) = uVar2;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x220) = uVar3;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this->ConstraintLambdaVelocity =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&(this->ConstraintLambdaVelocity).field_0x8 = uVar2;
    *(undefined8 *)&(this->ConstraintLambdaVelocity).field_0x10 = uVar3;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)((longlong)&this->field0_0x0 + 0x120) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x128) = uVar2;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x130) = uVar3;
  }
  return;
}

// SetLimitsCheck @ 143bac190

void __thiscall
Chaos::FAxisConstraintDatas::SetLimitsCheck(FAxisConstraintDatas *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    this->bLimitsCheck0 = '\0';
    this->field_0x2c0 = this->field_0x2c0 | param_2 << 3;
  }
  else {
    if (param_1 == 1) {
      this->bLimitsCheck1 = '\0';
      this->field_0x2c0 = this->field_0x2c0 | param_2 << 4;
      return;
    }
    if (param_1 == 2) {
      this->bLimitsCheck2 = '\0';
      this->field_0x2c0 = this->field_0x2c0 | param_2 << 5;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xc3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetMaxForce @ 143bac220

void __thiscall
Chaos::FAxisConstraintDatas::SetMaxForce
          (FAxisConstraintDatas *this,int param_1,double param_2,double param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  if (2 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8) = 0;
  if ((0.0 < param_2) && (param_2 < __real_47efffffe0000000)) {
    dVar2 = param_2 * param_3 * param_3;
    if (this->bAccelerationMode != '\0') {
      if (2 < (uint)param_1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      dVar2 = dVar2 / *(double *)((longlong)&this->field0_0x0 + lVar4 * 8 + 0x150);
    }
    if (2 < (uint)param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)(&(this->ConstraintMaxLambda).field_0x0 + lVar4 * 8) = dVar2;
  }
  return;
}

// SetMotionType @ 143bac330

void __thiscall
Chaos::FAxisConstraintDatas::SetMotionType
          (FAxisConstraintDatas *this,int param_1,EJointMotionType param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar4 = (byte)param_2;
  if ((3 < (int)param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(Value) <= 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) {
    bVar3 = this->field_0x2c1;
    bVar4 = (bVar4 << 3 ^ bVar3) & 0x18;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        this->field_0x2c2 = (this->MotionType2 ^ bVar4) & 3 ^ this->field_0x2c2;
        return;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0xda,L"");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar3 = this->field_0x2c1;
    bVar4 = (bVar4 << 5 ^ bVar3) & 0x60;
  }
  this->field_0x2c1 = bVar4 ^ bVar3;
  return;
}

// SetValidDatas @ 143bacac0

void __thiscall
Chaos::FAxisConstraintDatas::SetValidDatas(FAxisConstraintDatas *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    this->bValidDatas0 = '\0';
    this->field_0x2c0 = this->field_0x2c0 | param_2;
  }
  else {
    if (param_1 == 1) {
      this->bValidDatas1 = '\0';
      this->field_0x2c0 = this->field_0x2c0 | param_2 * '\x02';
      return;
    }
    if (param_1 == 2) {
      this->bValidDatas2 = '\0';
      this->field_0x2c0 = this->field_0x2c0 | param_2 << 2;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xb8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateDatas @ 143bae880

void __thiscall
Chaos::FAxisConstraintDatas::UpdateDatas
          (FAxisConstraintDatas *this,int param_1,TVector<double,3> *param_2,double param_3,
          double param_4,bool param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          double param_8)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  SetValidDatas(this,param_1,true);
  SetLimitsCheck(this,param_1,param_5);
  if ((uint)param_1 < 3) {
    *(double *)((longlong)&this->field0_0x0 + lVar5 * 8 + 0x1f8) = param_3;
    *(double *)(&(this->ConstraintVX).field_0x0 + lVar5 * 8) = param_8;
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(double *)((longlong)&this->field0_0x0 + lVar5 * 8 + 0x1f8) = param_3;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(double *)(&(this->ConstraintVX).field_0x0 + lVar5 * 8) = param_8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(double *)(&(this->ConstraintRestitution).field_0x0 + lVar5 * 8) = param_4;
  uVar3 = *(undefined8 *)&param_6->field_0x8;
  puVar1 = (undefined8 *)((longlong)&this->field0_0x0 + lVar5 * 0x30 + 0x48);
  *puVar1 = *(undefined8 *)param_6;
  puVar1[1] = uVar3;
  *(undefined8 *)((longlong)&this->field0_0x0 + lVar5 * 0x30 + 0x58) =
       *(undefined8 *)&param_6->field_0x10;
  uVar3 = *(undefined8 *)&param_7->field_0x8;
  puVar1 = (undefined8 *)((longlong)&this->field0_0x0 + lVar5 * 0x30 + 0x60);
  *puVar1 = *(undefined8 *)param_7;
  puVar1[1] = uVar3;
  *(undefined8 *)((longlong)&this->field0_0x0 + lVar5 * 0x30 + 0x70) =
       *(undefined8 *)&param_7->field_0x10;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  puVar1 = (undefined8 *)((longlong)&this->field0_0x0 + lVar5 * 0x18 + 0xd8);
  *puVar1 = *(undefined8 *)param_2;
  puVar1[1] = uVar3;
  *(undefined8 *)((longlong)&this->field0_0x0 + lVar5 * 0x18 + 0xe8) =
       *(undefined8 *)&param_2->field_0x10;
  return;
}

// UpdateMass @ 143bb0220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FAxisConstraintDatas::UpdateMass
          (FAxisConstraintDatas *this,int param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double param_5,bool param_6)

{
  double *pdVar1;
  uint *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  lVar11 = (longlong)param_1;
  if ((2 < (uint)param_1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x150) = param_4;
  uVar8 = *(undefined8 *)&param_2->field_0x8;
  puVar3 = (undefined8 *)((longlong)&this->field0_0x0 + lVar11 * 0x30 + 0x168);
  *puVar3 = *(undefined8 *)param_2;
  puVar3[1] = uVar8;
  *(undefined8 *)((longlong)&this->field0_0x0 + lVar11 * 0x30 + 0x178) =
       *(undefined8 *)&param_2->field_0x10;
  uVar7 = *(uint *)&param_3->field_0x8;
  uVar12 = *(uint *)&param_3->field_0xc;
  uVar13 = *(uint *)&param_3->field_0x10;
  uVar14 = *(uint *)&param_3->field_0x14;
  *(ulonglong *)((longlong)&this->field0_0x0 + lVar11 * 0x30 + 0x180) =
       CONCAT44((uint)((ulonglong)*(undefined8 *)param_3 >> 0x20) ^
                __xmm_80000000000000008000000000000000._4_4_,
                (uint)*(undefined8 *)param_3 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar12 = uVar12 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar13 = uVar13 ^ _UNK_15066df78;
  uVar14 = uVar14 ^ _UNK_15066df7c;
  puVar2 = (uint *)((longlong)&this->field0_0x0 + lVar11 * 0x30 + 0x188);
  *puVar2 = uVar7 ^ (uint)__xmm_80000000000000008000000000000000;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  bVar10 = GetSoftLimit(this,param_1);
  if (bVar10) {
    dVar5 = __real_3ff0000000000000;
    if (this->bAccelerationMode != '\0') {
      if ((2 < (uint)param_1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar5 = __real_3ff0000000000000 /
              *(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x150);
    }
    dVar9 = __real_3ff0000000000000;
    if ((uint)param_1 < 3) {
      dVar6 = dVar5 * *(double *)(&(this->SettingsSoftStiffness).field_0x0 + lVar11 * 8) *
              param_5 * param_5;
    }
    else {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar6 = dVar5 * *(double *)(&(this->SettingsSoftStiffness).field_0x0 + lVar11 * 8) *
              param_5 * param_5;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x18) = dVar6;
    if (param_6) {
      if ((2 < (uint)param_1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar5 = dVar5 * *(double *)(&(this->SettingsSoftDamping).field_0x0 + lVar11 * 8) * param_5;
    }
    else {
      dVar5 = 0.0;
    }
    if ((uint)param_1 < 3) {
      *(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x30) = dVar5;
      dVar5 = (*(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x18) +
              *(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x30)) *
              *(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x150);
    }
    else {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pdVar1 = (double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x30);
      *pdVar1 = dVar5;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar5 = (*(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x18) + *pdVar1) *
              *(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x150);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(double *)((longlong)&this->field0_0x0 + lVar11 * 8 + 0x138) = dVar5 + dVar9;
  }
  return;
}

