// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 106

// TRotator<float> @ 14179d860

TRotator<float> * __thiscall
UE::Math::TRotator<float>::TRotator<float>(TRotator<float> *this,TQuat<float> *param_1)

{
  float fVar1;
  TRotator<float> *pTVar2;
  TRotator<float> local_18;
  
  pTVar2 = TQuat<float>::Rotator(param_1,&local_18);
  fVar1 = pTVar2->Yaw;
  this->Pitch = pTVar2->Pitch;
  this->Yaw = fVar1;
  this->Roll = pTVar2->Roll;
  return this;
}

// TRotator<float> @ 14179d8a0

TRotator<float> * __thiscall
UE::Math::TRotator<float>::TRotator<float>(TRotator<float> *this,float param_1)

{
  this->Pitch = param_1;
  this->Yaw = param_1;
  this->Roll = param_1;
  return this;
}

// TRotator<float> @ 14179d8c0

TRotator<float> * __thiscall
UE::Math::TRotator<float>::TRotator<float>
          (TRotator<float> *this,float param_1,float param_2,float param_3)

{
  this->Pitch = param_1;
  this->Yaw = param_2;
  this->Roll = param_3;
  return this;
}

// TRotator<float> @ 14179d8e0

TRotator<float> * __thiscall
UE::Math::TRotator<float>::TRotator<float>(TRotator<float> *this,EForceInit param_1)

{
  this->Pitch = 0.0;
  this->Yaw = 0.0;
  this->Roll = 0.0;
  return this;
}

// TRotator<double> @ 14179d900

TRotator<double> * __thiscall
UE::Math::TRotator<double>::TRotator<double>(TRotator<double> *this,TQuat<double> *param_1)

{
  double dVar1;
  TRotator<double> *pTVar2;
  TRotator<double> local_28;
  
  pTVar2 = TQuat<double>::Rotator(param_1,&local_28);
  dVar1 = pTVar2->Yaw;
  this->Pitch = pTVar2->Pitch;
  this->Yaw = dVar1;
  this->Roll = pTVar2->Roll;
  return this;
}

// TRotator<double> @ 14179d940

TRotator<double> * __thiscall
UE::Math::TRotator<double>::TRotator<double>(TRotator<double> *this,double param_1)

{
  this->Roll = param_1;
  this->Pitch = param_1;
  this->Yaw = param_1;
  return this;
}

// TRotator<double> @ 14179d960

TRotator<double> * __thiscall
UE::Math::TRotator<double>::TRotator<double>
          (TRotator<double> *this,double param_1,double param_2,double param_3)

{
  this->Pitch = param_1;
  this->Yaw = param_2;
  this->Roll = param_3;
  return this;
}

// TRotator<double> @ 14179d980

TRotator<double> * __thiscall
UE::Math::TRotator<double>::TRotator<double>(TRotator<double> *this,EForceInit param_1)

{
  this->Pitch = 0.0;
  this->Yaw = 0.0;
  this->Roll = 0.0;
  return this;
}

// operator== @ 1417a9ea0

bool __thiscall
UE::Math::TRotator<float>::operator==(TRotator<float> *this,TRotator<float> *param_1)

{
  if (((param_1->Pitch == this->Pitch) && (param_1->Yaw == this->Yaw)) &&
     (param_1->Roll == this->Roll)) {
    return true;
  }
  return false;
}

// operator== @ 1417a9ed0

bool __thiscall
UE::Math::TRotator<double>::operator==(TRotator<double> *this,TRotator<double> *param_1)

{
  if (((param_1->Pitch == this->Pitch) && (param_1->Yaw == this->Yaw)) &&
     (param_1->Roll == this->Roll)) {
    return true;
  }
  return false;
}

// operator!= @ 1417aa2f0

bool __thiscall
UE::Math::TRotator<float>::operator!=(TRotator<float> *this,TRotator<float> *param_1)

{
  if (((param_1->Pitch == this->Pitch) && (param_1->Yaw == this->Yaw)) &&
     (param_1->Roll == this->Roll)) {
    return false;
  }
  return true;
}

// operator!= @ 1417aa320

bool __thiscall
UE::Math::TRotator<double>::operator!=(TRotator<double> *this,TRotator<double> *param_1)

{
  if (((param_1->Pitch == this->Pitch) && (param_1->Yaw == this->Yaw)) &&
     (param_1->Roll == this->Roll)) {
    return false;
  }
  return true;
}

// operator- @ 1417ab960

TRotator<float> * __thiscall
UE::Math::TRotator<float>::operator-
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__,TRotator<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->Yaw;
  fVar2 = param_1->Yaw;
  __return_storage_ptr__->Pitch = this->Pitch - param_1->Pitch;
  fVar3 = this->Roll;
  fVar4 = param_1->Roll;
  __return_storage_ptr__->Yaw = fVar1 - fVar2;
  __return_storage_ptr__->Roll = fVar3 - fVar4;
  return __return_storage_ptr__;
}

// operator- @ 1417ab9a0

TRotator<double> * __thiscall
UE::Math::TRotator<double>::operator-
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar4 = this->Pitch - param_1->Pitch;
  dVar5 = this->Yaw - param_1->Yaw;
  dVar1 = this->Roll;
  dVar2 = param_1->Roll;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  __return_storage_ptr__->Pitch = dVar4;
  __return_storage_ptr__->Yaw = (double)auVar3._8_8_;
  __return_storage_ptr__->Roll = dVar1 - dVar2;
  return __return_storage_ptr__;
}

// operator+ @ 1417abd70

TRotator<float> * __thiscall
UE::Math::TRotator<float>::operator+
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__,TRotator<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1->Yaw;
  fVar2 = this->Yaw;
  __return_storage_ptr__->Pitch = param_1->Pitch + this->Pitch;
  fVar3 = param_1->Roll;
  fVar4 = this->Roll;
  __return_storage_ptr__->Yaw = fVar1 + fVar2;
  __return_storage_ptr__->Roll = fVar3 + fVar4;
  return __return_storage_ptr__;
}

// operator+ @ 1417abdb0

TRotator<double> * __thiscall
UE::Math::TRotator<double>::operator+
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar4 = param_1->Pitch + this->Pitch;
  dVar5 = param_1->Yaw + this->Yaw;
  dVar1 = param_1->Roll;
  dVar2 = this->Roll;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  __return_storage_ptr__->Pitch = dVar4;
  __return_storage_ptr__->Yaw = (double)auVar3._8_8_;
  __return_storage_ptr__->Roll = dVar1 + dVar2;
  return __return_storage_ptr__;
}

// operator+= @ 1417afbb0

TRotator<float> * __thiscall
UE::Math::TRotator<float>::operator+=
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__,TRotator<float> *param_1)

{
  float fVar1;
  float fVar2;
  
  this->Pitch = param_1->Pitch + this->Pitch;
  this->Yaw = param_1->Yaw + this->Yaw;
  this->Roll = param_1->Roll + this->Roll;
  fVar1 = this->Roll;
  fVar2 = this->Yaw;
  __return_storage_ptr__->Pitch = this->Pitch;
  __return_storage_ptr__->Yaw = fVar2;
  __return_storage_ptr__->Roll = fVar1;
  return __return_storage_ptr__;
}

// operator+= @ 1417afc00

TRotator<double> * __thiscall
UE::Math::TRotator<double>::operator+=
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  
  this->Pitch = param_1->Pitch + this->Pitch;
  this->Yaw = param_1->Yaw + this->Yaw;
  this->Roll = param_1->Roll + this->Roll;
  dVar2 = this->Yaw;
  dVar1 = this->Roll;
  __return_storage_ptr__->Pitch = this->Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// operator-= @ 1417b0180

TRotator<float> * __thiscall
UE::Math::TRotator<float>::operator-=
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__,TRotator<float> *param_1)

{
  float fVar1;
  float fVar2;
  
  this->Pitch = this->Pitch - param_1->Pitch;
  this->Yaw = this->Yaw - param_1->Yaw;
  this->Roll = this->Roll - param_1->Roll;
  fVar1 = this->Roll;
  fVar2 = this->Yaw;
  __return_storage_ptr__->Pitch = this->Pitch;
  __return_storage_ptr__->Yaw = fVar2;
  __return_storage_ptr__->Roll = fVar1;
  return __return_storage_ptr__;
}

// operator-= @ 1417b01d0

TRotator<double> * __thiscall
UE::Math::TRotator<double>::operator-=
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  
  this->Pitch = this->Pitch - param_1->Pitch;
  this->Yaw = this->Yaw - param_1->Yaw;
  this->Roll = this->Roll - param_1->Roll;
  dVar2 = this->Yaw;
  dVar1 = this->Roll;
  __return_storage_ptr__->Pitch = this->Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// Add @ 1417b27f0

TRotator<float> * __thiscall
UE::Math::TRotator<float>::Add
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__,float param_1,float param_2
          ,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2 + this->Yaw;
  fVar2 = param_1 + this->Pitch;
  this->Roll = param_3 + this->Roll;
  this->Pitch = fVar2;
  this->Yaw = fVar3;
  fVar1 = this->Roll;
  __return_storage_ptr__->Pitch = fVar2;
  __return_storage_ptr__->Yaw = fVar3;
  __return_storage_ptr__->Roll = fVar1;
  return __return_storage_ptr__;
}

// Add @ 1417b2840

TRotator<double> * __thiscall
UE::Math::TRotator<double>::Add
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__,double param_1,
          double param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  dVar3 = param_2 + this->Yaw;
  uVar5 = SUB84(dVar3,0);
  uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = param_1 + this->Pitch;
  this->Roll = param_3 + this->Roll;
  auVar1._8_4_ = uVar5;
  auVar1._0_8_ = dVar4;
  auVar1._12_4_ = uVar6;
  this->Pitch = dVar4;
  this->Yaw = (double)auVar1._8_8_;
  dVar3 = this->Roll;
  auVar2._8_4_ = uVar5;
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = uVar6;
  __return_storage_ptr__->Pitch = dVar4;
  __return_storage_ptr__->Yaw = (double)auVar2._8_8_;
  __return_storage_ptr__->Roll = dVar3;
  return __return_storage_ptr__;
}

// Clamp @ 1417b8260

TRotator<float> * __thiscall
UE::Math::TRotator<float>::Clamp(TRotator<float> *this,TRotator<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = __real_43b40000;
  fVar2 = FGenericPlatformMath::Fmod(this->Roll,__real_43b40000);
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + fVar1;
  }
  fVar3 = FGenericPlatformMath::Fmod(this->Yaw,fVar1);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + fVar1;
  }
  fVar4 = FGenericPlatformMath::Fmod(this->Pitch,fVar1);
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + fVar1;
  }
  __return_storage_ptr__->Yaw = fVar3;
  __return_storage_ptr__->Roll = fVar2;
  __return_storage_ptr__->Pitch = fVar4;
  return __return_storage_ptr__;
}

// Clamp @ 1417b8320

TRotator<double> * __thiscall
UE::Math::TRotator<double>::Clamp(TRotator<double> *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = __real_4076800000000000;
  dVar2 = FGenericPlatformMath::Fmod(this->Roll,__real_4076800000000000);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + dVar1;
  }
  dVar3 = FGenericPlatformMath::Fmod(this->Yaw,dVar1);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar1;
  }
  dVar4 = FGenericPlatformMath::Fmod(this->Pitch,dVar1);
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + dVar1;
  }
  __return_storage_ptr__->Yaw = dVar3;
  __return_storage_ptr__->Roll = dVar2;
  __return_storage_ptr__->Pitch = dVar4;
  return __return_storage_ptr__;
}

// ClampAxis @ 1417b84b0

float __cdecl UE::Math::TRotator<float>::ClampAxis(float param_1)

{
  float fVar1;
  
  fVar1 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + __real_43b40000;
  }
  return fVar1;
}

// ClampAxis @ 1417b84e0

double __cdecl UE::Math::TRotator<double>::ClampAxis(double param_1)

{
  double dVar1;
  
  dVar1 = FGenericPlatformMath::Fmod(param_1,__real_4076800000000000);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + __real_4076800000000000;
  }
  return dVar1;
}

// CompressAxisToByte @ 1417bad80

uchar __cdecl UE::Math::TRotator<float>::CompressAxisToByte(float param_1)

{
  return (uchar)((int)ROUND(param_1 * __real_3fb60b61 + __real_3f000000) >> 1);
}

// CompressAxisToByte @ 1417bada0

uchar __cdecl UE::Math::TRotator<double>::CompressAxisToByte(double param_1)

{
  return (uchar)((longlong)ROUND(param_1 * __real_3ff6c16c16c16c17 + __real_3fe0000000000000) >> 1);
}

// CompressAxisToShort @ 1417badc0

ushort __cdecl UE::Math::TRotator<float>::CompressAxisToShort(float param_1)

{
  return (ushort)((int)ROUND(param_1 * __real_43b60b61 + __real_3f000000) >> 1);
}

// CompressAxisToShort @ 1417bade0

ushort __cdecl UE::Math::TRotator<double>::CompressAxisToShort(double param_1)

{
  return (ushort)((longlong)ROUND(param_1 * __real_4076c16c16c16c17 + __real_3fe0000000000000) >> 1)
  ;
}

// ContainsNaN @ 1417bccb0

bool __thiscall UE::Math::TRotator<float>::ContainsNaN(TRotator<float> *this)

{
  int iVar1;
  
  iVar1 = _finite((double)this->Pitch);
  if (iVar1 != 0) {
    iVar1 = _finite((double)this->Yaw);
    if (iVar1 != 0) {
      iVar1 = _finite((double)this->Roll);
      if (iVar1 != 0) {
        return false;
      }
    }
  }
  return true;
}

// ContainsNaN @ 1417bcd10

bool __thiscall UE::Math::TRotator<double>::ContainsNaN(TRotator<double> *this)

{
  int iVar1;
  
  iVar1 = _finite(this->Pitch);
  if (iVar1 != 0) {
    iVar1 = _finite(this->Yaw);
    if (iVar1 != 0) {
      iVar1 = _finite(this->Roll);
      if (iVar1 != 0) {
        return false;
      }
    }
  }
  return true;
}

// DecompressAxisFromByte @ 1417c2ce0

float __cdecl UE::Math::TRotator<float>::DecompressAxisFromByte(uchar param_1)

{
  return (float)param_1 * __real_3fb40000;
}

// DecompressAxisFromByte @ 1417c2d00

double __cdecl UE::Math::TRotator<double>::DecompressAxisFromByte(uchar param_1)

{
  return (double)param_1 * __real_3ff6800000000000;
}

// DecompressAxisFromShort @ 1417c2d20

float __cdecl UE::Math::TRotator<float>::DecompressAxisFromShort(ushort param_1)

{
  return (float)param_1 * __real_3bb40000;
}

// DecompressAxisFromShort @ 1417c2d40

double __cdecl UE::Math::TRotator<double>::DecompressAxisFromShort(ushort param_1)

{
  return (double)param_1 * __real_3f76800000000000;
}

// DiagnosticCheckNaN @ 1417c43d0

void __thiscall
UE::Math::TRotator<float>::DiagnosticCheckNaN(TRotator<float> *this,wchar_t *param_1)

{
  return;
}

// DiagnosticCheckNaN @ 1417c43e0

void __thiscall UE::Math::TRotator<float>::DiagnosticCheckNaN(TRotator<float> *this)

{
  return;
}

// DiagnosticCheckNaN @ 1417c43f0

void __thiscall
UE::Math::TRotator<double>::DiagnosticCheckNaN(TRotator<double> *this,wchar_t *param_1)

{
  return;
}

// DiagnosticCheckNaN @ 1417c4400

void __thiscall UE::Math::TRotator<double>::DiagnosticCheckNaN(TRotator<double> *this)

{
  return;
}

// Equals @ 1417c59b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TRotator<float>::Equals(TRotator<float> *this,TRotator<float> *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar1 = param_1->Pitch;
  uVar3 = param_1->Yaw;
  uVar2 = this->Pitch;
  uVar4 = this->Yaw;
  fVar18 = this->Roll - param_1->Roll;
  fVar5 = GlobalVectorConstants::Float360.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float360.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float360.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float360.m128_f32[3];
  auVar14._4_4_ = (float)uVar4 - (float)uVar3;
  auVar14._0_4_ = (float)uVar2 - (float)uVar1;
  auVar14._8_4_ = fVar18;
  auVar14._12_4_ = 0;
  auVar14 = divps(auVar14,(undefined1  [16])GlobalVectorConstants::Float360);
  auVar14 = roundps(in_XMM1,auVar14,3);
  fVar16 = ((float)uVar2 - (float)uVar1) - auVar14._0_4_ * fVar5;
  fVar17 = ((float)uVar4 - (float)uVar3) - auVar14._4_4_ * fVar6;
  fVar18 = fVar18 - auVar14._8_4_ * fVar7;
  fVar19 = 0.0 - auVar14._12_4_ * fVar8;
  fVar16 = (float)(~-(uint)(0.0 <= fVar16) & (uint)(fVar16 + fVar5) |
                  -(uint)(0.0 <= fVar16) & (uint)fVar16);
  fVar17 = (float)(~-(uint)(0.0 <= fVar17) & (uint)(fVar17 + fVar6) |
                  -(uint)(0.0 <= fVar17) & (uint)fVar17);
  fVar18 = (float)(~-(uint)(0.0 <= fVar18) & (uint)(fVar18 + fVar7) |
                  -(uint)(0.0 <= fVar18) & (uint)fVar18);
  fVar19 = (float)(~-(uint)(0.0 <= fVar19) & (uint)(fVar19 + fVar8) |
                  -(uint)(0.0 <= fVar19) & (uint)fVar19);
  uVar10 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar16);
  uVar11 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar17);
  uVar12 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar18);
  uVar13 = -(uint)(GlobalVectorConstants::Float180.m128_f32[3] < fVar19);
  auVar15._4_4_ =
       -(uint)(param_2 <
              (float)(((uint)(fVar17 - fVar6) & uVar11 | ~uVar11 & (uint)fVar17) & _UNK_15061cc74));
  auVar15._0_4_ =
       -(uint)(param_2 <
              (float)(((uint)(fVar16 - fVar5) & uVar10 | ~uVar10 & (uint)fVar16) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar15._8_4_ =
       -(uint)(param_2 <
              (float)(((uint)(fVar18 - fVar7) & uVar12 | ~uVar12 & (uint)fVar18) & _UNK_15061cc78));
  auVar15._12_4_ =
       -(uint)(param_2 <
              (float)(((uint)(fVar19 - fVar8) & uVar13 | ~uVar13 & (uint)fVar19) & _UNK_15061cc7c));
  iVar9 = movmskps(in_EAX,auVar15);
  return iVar9 == 0;
}

// Equals @ 1417c5a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TRotator<double>::Equals(TRotator<double> *this,TRotator<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  
  dVar31 = this->Pitch - param_1->Pitch;
  dVar33 = this->Yaw - param_1->Yaw;
  dVar2 = this->Roll - param_1->Roll;
  auVar17._8_4_ = SUB84(dVar33,0);
  auVar17._0_8_ = dVar31;
  auVar17._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar18 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar18 = roundpd(in_XMM1,auVar18,3);
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar25._0_8_ = auVar18._0_8_ * dVar7;
  dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar25._8_8_ = auVar18._8_8_ * dVar8;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar2;
  dVar31 = dVar31 - auVar25._0_8_;
  dVar33 = dVar33 - auVar25._8_8_;
  auVar18 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar18 = roundpd(auVar25,auVar18,3);
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar20._8_4_ = SUB84(dVar33,0);
  auVar20._0_8_ = dVar31;
  auVar20._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  dVar2 = dVar2 - auVar18._0_8_ * dVar5;
  dVar3 = 0.0 - auVar18._8_8_ * dVar6;
  uVar11 = -(ulonglong)(0.0 <= dVar31);
  uVar13 = -(ulonglong)(0.0 <= dVar33);
  auVar26._0_8_ = uVar11 & (ulonglong)dVar31;
  auVar26._8_4_ = (undefined4)(uVar13 & (ulonglong)dVar33);
  auVar26._12_4_ = (undefined4)((uVar13 & (ulonglong)dVar33) >> 0x20);
  dVar33 = auVar20._8_8_ + dVar8;
  uVar12 = -(ulonglong)(0.0 <= dVar2);
  uVar14 = -(ulonglong)(0.0 <= dVar3);
  auVar34._0_4_ = ~(uint)uVar11 & SUB84(dVar31 + dVar7,0);
  auVar34._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar31 + dVar7) >> 0x20);
  auVar34._8_4_ = ~(uint)uVar13 & SUB84(dVar33,0);
  auVar34._12_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)dVar33 >> 0x20);
  auVar34 = auVar34 | auVar26;
  auVar21._8_4_ = SUB84(dVar3,0);
  auVar21._0_8_ = dVar2;
  auVar21._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar33 = auVar21._8_8_ + dVar6;
  auVar32._0_4_ = ~(uint)uVar12 & SUB84(dVar2 + dVar5,0);
  auVar32._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar5) >> 0x20);
  auVar32._8_4_ = ~(uint)uVar14 & SUB84(dVar33,0);
  auVar32._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar33 >> 0x20);
  auVar18._8_4_ = (int)((ulonglong)dVar3 & uVar14);
  auVar18._0_8_ = (ulonglong)dVar2 & uVar12;
  auVar18._12_4_ = (int)(((ulonglong)dVar3 & uVar14) >> 0x20);
  auVar32 = auVar32 | auVar18;
  uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar32._0_8_);
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar32._8_8_);
  uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar34._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar34._8_8_);
  auVar27._0_8_ = uVar12 & (ulonglong)(auVar32._0_8_ - dVar5);
  uVar11 = uVar14 & (ulonglong)(auVar32._8_8_ - dVar6);
  auVar27._8_4_ = (undefined4)uVar11;
  auVar27._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar12 & auVar32._0_4_;
  auVar22._4_4_ = ~(uint)(uVar12 >> 0x20) & auVar32._4_4_;
  auVar22._8_4_ = ~(uint)uVar14 & auVar32._8_4_;
  auVar22._12_4_ = ~(uint)(uVar14 >> 0x20) & auVar32._12_4_;
  auVar27 = auVar27 | auVar22;
  auVar23._8_4_ = SUB84(param_2,0);
  auVar23._0_8_ = param_2;
  auVar23._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar28._0_8_ =
       (double)CONCAT44(auVar27._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar27._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar28._8_4_ = auVar27._8_4_ & _UNK_15061cc88;
  auVar28._12_4_ = auVar27._12_4_ & _UNK_15061cc8c;
  auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < auVar28._8_8_);
  auVar24._0_8_ = -(ulonglong)(param_2 < auVar28._0_8_);
  uVar10 = movmskpd((int)this,auVar24);
  auVar29._0_8_ = uVar13 & (ulonglong)(auVar34._0_8_ - dVar7);
  uVar11 = uVar15 & (ulonglong)(auVar34._8_8_ - dVar8);
  auVar29._8_4_ = (undefined4)uVar11;
  auVar29._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar4._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar34._4_4_;
  auVar4._0_4_ = ~(uint)uVar13 & auVar34._0_4_;
  auVar4._8_4_ = ~(uint)uVar15 & auVar34._8_4_;
  auVar4._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar34._12_4_;
  auVar29 = auVar29 | auVar4;
  auVar30._0_8_ =
       (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar30._8_4_ = auVar29._8_4_ & _UNK_15061cc88;
  auVar30._12_4_ = auVar29._12_4_ & _UNK_15061cc8c;
  lVar16 = -(ulonglong)(param_2 < auVar30._8_8_);
  auVar1._8_4_ = (int)lVar16;
  auVar1._0_8_ = -(ulonglong)(param_2 < auVar30._0_8_);
  auVar1._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar1);
  return (uVar10 & 0x3fffffff) == 0 && iVar9 == 0;
}

// EqualsOrientation @ 1417c6010

bool __thiscall
UE::Math::TRotator<float>::EqualsOrientation
          (TRotator<float> *this,TRotator<float> *param_1,float param_2)

{
  TQuat<float> *pTVar1;
  TQuat<float> *pTVar2;
  float fVar3;
  float fVar4;
  TQuat<float> local_38;
  TQuat<float> local_28 [2];
  
  pTVar1 = Quaternion(this,&local_38);
  pTVar2 = Quaternion(param_1,local_28);
  fVar4 = pTVar2->W * pTVar1->W + pTVar2->Z * pTVar1->Z +
          pTVar2->Y * pTVar1->Y + pTVar2->X * pTVar1->X;
  fVar3 = (fVar4 + fVar4) * fVar4 - __real_3f800000;
  fVar4 = __real_bf800000;
  if ((__real_bf800000 <= fVar3) && (fVar4 = fVar3, __real_3f800000 <= fVar3)) {
    fVar4 = __real_3f800000;
  }
  fVar4 = acosf(fVar4);
  return fVar4 <= param_2;
}

// EqualsOrientation @ 1417c60c0

bool __thiscall
UE::Math::TRotator<double>::EqualsOrientation
          (TRotator<double> *this,TRotator<double> *param_1,double param_2)

{
  TQuat<double> *pTVar1;
  TQuat<double> *pTVar2;
  double dVar3;
  double dVar4;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  pTVar1 = Quaternion(this,&local_58);
  pTVar2 = Quaternion(param_1,&local_38);
  dVar4 = pTVar2->W * pTVar1->W + pTVar2->Z * pTVar1->Z +
          pTVar2->Y * pTVar1->Y + pTVar2->X * pTVar1->X;
  dVar3 = (dVar4 + dVar4) * dVar4 - __real_3ff0000000000000;
  dVar4 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar3) && (dVar4 = dVar3, __real_3ff0000000000000 <= dVar3)) {
    dVar4 = __real_3ff0000000000000;
  }
  dVar4 = acos(dVar4);
  return dVar4 <= param_2;
}

// Euler @ 1417c6840

TVector<float> * __thiscall
UE::Math::TRotator<float>::Euler(TRotator<float> *this,TVector<float> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = this->Roll;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = this->Pitch;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = this->Yaw;
  return __return_storage_ptr__;
}

// Euler @ 1417c6860

TVector<double> * __thiscall
UE::Math::TRotator<double>::Euler(TRotator<double> *this,TVector<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = this->Roll;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = this->Pitch;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = this->Yaw;
  return __return_storage_ptr__;
}

// GetComponentForAxis @ 1417d2af0

float __thiscall UE::Math::TRotator<float>::GetComponentForAxis(TRotator<float> *this,Type param_1)

{
  if (param_1 != None) {
    if (param_1 == X) {
      return this->Roll;
    }
    if (param_1 == Y) {
      return this->Pitch;
    }
    if (param_1 == Z) {
      return this->Yaw;
    }
  }
  return 0.0;
}

// GetComponentForAxis @ 1417d2b20

double __thiscall
UE::Math::TRotator<double>::GetComponentForAxis(TRotator<double> *this,Type param_1)

{
  if (param_1 != None) {
    if (param_1 == X) {
      return this->Roll;
    }
    if (param_1 == Y) {
      return this->Pitch;
    }
    if (param_1 == Z) {
      return this->Yaw;
    }
  }
  return 0.0;
}

// GetDenormalized @ 1417d2ed0

TRotator<float> * __thiscall
UE::Math::TRotator<float>::GetDenormalized
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_43b40000;
  fVar1 = this->Yaw;
  fVar3 = this->Roll;
  __return_storage_ptr__->Pitch = this->Pitch;
  __return_storage_ptr__->Yaw = fVar1;
  __return_storage_ptr__->Roll = fVar3;
  fVar3 = FGenericPlatformMath::Fmod(__return_storage_ptr__->Pitch,fVar2);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + fVar2;
  }
  __return_storage_ptr__->Pitch = fVar3;
  fVar3 = FGenericPlatformMath::Fmod(__return_storage_ptr__->Yaw,fVar2);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + fVar2;
  }
  __return_storage_ptr__->Yaw = fVar3;
  fVar3 = FGenericPlatformMath::Fmod(__return_storage_ptr__->Roll,fVar2);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + fVar2;
  }
  __return_storage_ptr__->Roll = fVar3;
  return __return_storage_ptr__;
}

// GetDenormalized @ 1417d2f70

TRotator<double> * __thiscall
UE::Math::TRotator<double>::GetDenormalized
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = __real_4076800000000000;
  dVar2 = this->Yaw;
  dVar1 = this->Roll;
  __return_storage_ptr__->Pitch = this->Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  dVar1 = FGenericPlatformMath::Fmod(__return_storage_ptr__->Pitch,dVar3);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + dVar3;
  }
  __return_storage_ptr__->Pitch = dVar1;
  dVar1 = FGenericPlatformMath::Fmod(__return_storage_ptr__->Yaw,dVar3);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + dVar3;
  }
  __return_storage_ptr__->Yaw = dVar1;
  dVar1 = FGenericPlatformMath::Fmod(__return_storage_ptr__->Roll,dVar3);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + dVar3;
  }
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetEquivalentRotator @ 1417d38c0

TRotator<float> * __thiscall
UE::Math::TRotator<float>::GetEquivalentRotator
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_43340000;
  fVar3 = this->Yaw + __real_43340000;
  __return_storage_ptr__->Pitch = __real_43340000 - this->Pitch;
  fVar1 = this->Roll;
  __return_storage_ptr__->Yaw = fVar3;
  __return_storage_ptr__->Roll = fVar1 + fVar2;
  return __return_storage_ptr__;
}

// GetEquivalentRotator @ 1417d3900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRotator<double> * __thiscall
UE::Math::TRotator<double>::GetEquivalentRotator
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  
  dVar2 = this->Yaw + ___xmm_40668000000000004066800000000000;
  dVar3 = this->Roll + _UNK_1506896b8;
  __return_storage_ptr__->Pitch = ___xmm_40668000000000004066800000000000 - this->Pitch;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = (double)auVar1._8_8_;
  return __return_storage_ptr__;
}

// GetInverse @ 1417d4040

TRotator<float> * __thiscall
UE::Math::TRotator<float>::GetInverse(TRotator<float> *this,TRotator<float> *__return_storage_ptr__)

{
  TQuat<float> *pTVar1;
  TQuat<float> local_28;
  TQuat<float> local_18;
  
  pTVar1 = Quaternion(this,&local_18);
  local_28.X = pTVar1->X * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  local_28.Y = pTVar1->Y * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  local_28.Z = pTVar1->Z * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  local_28.W = pTVar1->W * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  TQuat<float>::Rotator(&local_28,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInverse @ 1417d4080

TRotator<double> * __thiscall
UE::Math::TRotator<double>::GetInverse
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  TQuat<double> *pTVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  TQuat<double> local_28;
  
  pTVar3 = Quaternion(this,&local_28);
  dVar2 = pTVar3->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar1 = pTVar3->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_48._8_4_ = SUB84(dVar2,0);
  local_48._0_8_ = pTVar3->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_48._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_38._8_4_ = SUB84(dVar1,0);
  local_38._0_8_ = pTVar3->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  TQuat<double>::Rotator((TQuat<double> *)local_48,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetManhattanDistance @ 1417d4450

float __thiscall
UE::Math::TRotator<float>::GetManhattanDistance(TRotator<float> *this,TRotator<float> *param_1)

{
  return (float)((uint)(this->Yaw - param_1->Yaw) & __xmm_7fffffff7fffffff7fffffff7fffffff) +
         (float)((uint)(this->Pitch - param_1->Pitch) & __xmm_7fffffff7fffffff7fffffff7fffffff) +
         (float)((uint)(this->Roll - param_1->Roll) & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// GetManhattanDistance @ 1417d4490

double __thiscall
UE::Math::TRotator<double>::GetManhattanDistance(TRotator<double> *this,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = this->Yaw - param_1->Yaw;
  dVar2 = this->Pitch - param_1->Pitch;
  dVar3 = this->Roll - param_1->Roll;
  return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// GetNormalized @ 1417d4b80

TRotator<float> * __thiscall
UE::Math::TRotator<float>::GetNormalized
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar3 = this->Yaw;
  __return_storage_ptr__->Pitch = this->Pitch;
  __return_storage_ptr__->Yaw = fVar3;
  __return_storage_ptr__->Roll = this->Roll;
  fVar3 = GlobalVectorConstants::Float360.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float360.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float360.m128_f32[2];
  uVar1 = __return_storage_ptr__->Pitch;
  uVar2 = __return_storage_ptr__->Yaw;
  auVar9._12_4_ = 0;
  auVar9._0_4_ = __return_storage_ptr__->Pitch;
  auVar9._4_4_ = __return_storage_ptr__->Yaw;
  auVar9._8_4_ = __return_storage_ptr__->Roll;
  auVar9 = divps(auVar9,(undefined1  [16])GlobalVectorConstants::Float360);
  auVar9 = roundps(in_XMM1,auVar9,3);
  fVar10 = (float)uVar1 - auVar9._0_4_ * fVar3;
  fVar11 = (float)uVar2 - auVar9._4_4_ * fVar4;
  fVar12 = __return_storage_ptr__->Roll - auVar9._8_4_ * fVar5;
  fVar10 = (float)(~-(uint)(0.0 <= fVar10) & (uint)(fVar10 + fVar3) |
                  -(uint)(0.0 <= fVar10) & (uint)fVar10);
  fVar11 = (float)(~-(uint)(0.0 <= fVar11) & (uint)(fVar11 + fVar4) |
                  -(uint)(0.0 <= fVar11) & (uint)fVar11);
  fVar12 = (float)(~-(uint)(0.0 <= fVar12) & (uint)(fVar12 + fVar5) |
                  -(uint)(0.0 <= fVar12) & (uint)fVar12);
  uVar6 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar10);
  uVar7 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar11);
  uVar8 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar12);
  __return_storage_ptr__->Pitch = (float)((uint)(fVar10 - fVar3) & uVar6 | ~uVar6 & (uint)fVar10);
  __return_storage_ptr__->Yaw = (float)((uint)(fVar11 - fVar4) & uVar7 | ~uVar7 & (uint)fVar11);
  __return_storage_ptr__->Roll = (float)((uint)(fVar12 - fVar5) & uVar8 | ~uVar8 & (uint)fVar12);
  return __return_storage_ptr__;
}

// GetNormalized @ 1417d4c00

TRotator<double> * __thiscall
UE::Math::TRotator<double>::GetNormalized
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar16;
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  dVar1 = this->Yaw;
  __return_storage_ptr__->Pitch = this->Pitch;
  __return_storage_ptr__->Yaw = dVar1;
  dVar1 = this->Roll;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar1;
  __return_storage_ptr__->Roll = dVar1;
  auVar20._0_8_ = __return_storage_ptr__->Pitch;
  auVar20._8_8_ = __return_storage_ptr__->Yaw;
  auVar11 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar11 = roundpd(auVar18,auVar11,3);
  dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar19._0_8_ = auVar11._0_8_ * dVar5;
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar19._8_8_ = auVar11._8_8_ * dVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar1;
  auVar11 = divpd(auVar12,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar17 = (double)auVar20._0_8_ - auVar19._0_8_;
  dVar2 = (double)auVar20._8_8_ - auVar19._8_8_;
  auVar20 = roundpd(auVar19,auVar11,3);
  dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar17;
  auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar16 = auVar13._8_8_ + dVar6;
  dVar1 = dVar1 - auVar20._0_8_ * dVar3;
  dVar4 = 0.0 - auVar20._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar7 = -(ulonglong)(0.0 <= dVar17);
  uVar9 = -(ulonglong)(0.0 <= dVar2);
  uVar8 = -(ulonglong)(0.0 <= dVar1);
  uVar10 = -(ulonglong)(0.0 <= dVar4);
  auVar21._0_8_ = uVar7 & (ulonglong)dVar17;
  auVar21._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar2);
  auVar21._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar2) >> 0x20);
  auVar24._0_4_ = ~(uint)uVar7 & SUB84(dVar17 + dVar5,0);
  auVar24._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar17 + dVar5) >> 0x20);
  auVar24._8_4_ = ~(uint)uVar9 & SUB84(dVar16,0);
  auVar24._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar16 >> 0x20);
  auVar24 = auVar24 | auVar21;
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar17 = auVar14._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar23._0_8_ = (ulonglong)dVar1 & uVar8;
  auVar23._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar4);
  auVar23._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar4) >> 0x20);
  auVar22._0_4_ = ~(uint)uVar8 & SUB84(dVar1 + dVar3,0);
  auVar22._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar3) >> 0x20);
  auVar22._8_4_ = ~(uint)uVar10 & SUB84(dVar17,0);
  auVar22._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar17 >> 0x20);
  auVar22 = auVar22 | auVar23;
  uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar22._0_8_);
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar24._0_8_);
  uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar24._8_8_);
  auVar15._0_8_ = uVar9 & (ulonglong)(auVar24._0_8_ - dVar5);
  uVar7 = uVar10 & (ulonglong)(auVar24._8_8_ - dVar6);
  auVar15._8_4_ = (undefined4)uVar7;
  auVar15._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar11._4_4_ = ~(uint)(uVar9 >> 0x20) & auVar24._4_4_;
  auVar11._0_4_ = ~(uint)uVar9 & auVar24._0_4_;
  auVar11._8_4_ = ~(uint)uVar10 & auVar24._8_4_;
  auVar11._12_4_ = ~(uint)(uVar10 >> 0x20) & auVar24._12_4_;
  __return_storage_ptr__->Pitch = (double)SUB168(auVar15 | auVar11,0);
  __return_storage_ptr__->Yaw = (double)SUB168(auVar15 | auVar11,8);
  __return_storage_ptr__->Roll =
       (double)(uVar8 & (ulonglong)(auVar22._0_8_ - dVar3) |
               CONCAT44(~(uint)(uVar8 >> 0x20) & auVar22._4_4_,~(uint)uVar8 & auVar22._0_4_));
  return __return_storage_ptr__;
}

// GetWindingAndRemainder @ 1417d91f0

void __thiscall
UE::Math::TRotator<float>::GetWindingAndRemainder
          (TRotator<float> *this,TRotator<float> *param_1,TRotator<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_43b40000;
  fVar2 = FGenericPlatformMath::Fmod(this->Yaw,__real_43b40000);
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + fVar1;
  }
  if (__real_43340000 < fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  param_2->Yaw = fVar2;
  param_1->Yaw = this->Yaw - fVar2;
  fVar2 = FGenericPlatformMath::Fmod(this->Pitch,fVar1);
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + fVar1;
  }
  if (__real_43340000 < fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  param_2->Pitch = fVar2;
  param_1->Pitch = this->Pitch - fVar2;
  fVar2 = FGenericPlatformMath::Fmod(this->Roll,fVar1);
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + fVar1;
  }
  if (__real_43340000 < fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  param_2->Roll = fVar2;
  param_1->Roll = this->Roll - fVar2;
  return;
}

// GetWindingAndRemainder @ 1417d92f0

void __thiscall
UE::Math::TRotator<double>::GetWindingAndRemainder
          (TRotator<double> *this,TRotator<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = __real_4076800000000000;
  dVar2 = FGenericPlatformMath::Fmod(this->Yaw,__real_4076800000000000);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + dVar1;
  }
  if (__real_4066800000000000 < dVar2) {
    dVar2 = dVar2 - dVar1;
  }
  param_2->Yaw = dVar2;
  param_1->Yaw = this->Yaw - dVar2;
  dVar2 = FGenericPlatformMath::Fmod(this->Pitch,dVar1);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + dVar1;
  }
  if (__real_4066800000000000 < dVar2) {
    dVar2 = dVar2 - dVar1;
  }
  param_2->Pitch = dVar2;
  param_1->Pitch = this->Pitch - dVar2;
  dVar2 = FGenericPlatformMath::Fmod(this->Roll,dVar1);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + dVar1;
  }
  if (__real_4066800000000000 < dVar2) {
    dVar2 = dVar2 - dVar1;
  }
  param_2->Roll = dVar2;
  param_1->Roll = this->Roll - dVar2;
  return;
}

// GridSnap @ 1417d9570

TRotator<float> * __thiscall
UE::Math::TRotator<float>::GridSnap
          (TRotator<float> *this,TRotator<float> *__return_storage_ptr__,TRotator<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  fVar1 = param_1->Roll;
  fVar4 = this->Roll;
  if (fVar1 != 0.0) {
    auVar5 = roundps(ZEXT416((uint)fVar4),ZEXT416((uint)((fVar1 * __real_3f000000 + fVar4) / fVar1))
                     ,1);
    fVar4 = auVar5._0_4_ * fVar1;
  }
  fVar1 = param_1->Yaw;
  fVar3 = this->Yaw;
  if (fVar1 != 0.0) {
    auVar5 = roundps(ZEXT416((uint)fVar3),ZEXT416((uint)((fVar1 * __real_3f000000 + fVar3) / fVar1))
                     ,1);
    fVar3 = auVar5._0_4_ * fVar1;
  }
  fVar1 = param_1->Pitch;
  fVar2 = this->Pitch;
  if (fVar1 != 0.0) {
    auVar5 = roundps(ZEXT416((uint)fVar2),ZEXT416((uint)((fVar1 * __real_3f000000 + fVar2) / fVar1))
                     ,1);
    fVar2 = auVar5._0_4_ * fVar1;
  }
  __return_storage_ptr__->Pitch = fVar2;
  __return_storage_ptr__->Yaw = fVar3;
  __return_storage_ptr__->Roll = fVar4;
  return __return_storage_ptr__;
}

// GridSnap @ 1417d9610

TRotator<double> * __thiscall
UE::Math::TRotator<double>::GridSnap
          (TRotator<double> *this,TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  
  dVar1 = param_1->Roll;
  dVar9 = this->Roll;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar9;
  if (dVar1 != 0.0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (dVar1 * __real_3fe0000000000000 + dVar9) / dVar1;
    auVar10 = roundpd(auVar10,auVar2,1);
    dVar9 = auVar10._0_8_ * dVar1;
  }
  dVar1 = param_1->Yaw;
  dVar7 = this->Yaw;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar7;
  if (dVar1 != 0.0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (dVar1 * __real_3fe0000000000000 + dVar7) / dVar1;
    auVar10 = roundpd(auVar8,auVar3,1);
    dVar7 = auVar10._0_8_ * dVar1;
  }
  dVar1 = param_1->Pitch;
  dVar5 = this->Pitch;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar5;
  if (dVar1 != 0.0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (dVar1 * __real_3fe0000000000000 + dVar5) / dVar1;
    auVar10 = roundpd(auVar6,auVar4,1);
    dVar5 = auVar10._0_8_ * dVar1;
  }
  __return_storage_ptr__->Pitch = dVar5;
  __return_storage_ptr__->Yaw = dVar7;
  __return_storage_ptr__->Roll = dVar9;
  return __return_storage_ptr__;
}

// InitFromString @ 1417da450

bool __thiscall UE::Math::TRotator<float>::InitFromString(TRotator<float> *this,FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  this->Roll = 0.0;
  this->Yaw = 0.0;
  pwVar3 = L"";
  this->Pitch = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FParse::Value(pwVar2,L"P=",&this->Pitch);
  if (bVar1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(pwVar2,L"Y=",&this->Yaw);
    if (bVar1) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar1 = FParse::Value(pwVar3,L"R=",&this->Roll);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// InitFromString @ 1417da510

bool __thiscall UE::Math::TRotator<double>::InitFromString(TRotator<double> *this,FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  this->Roll = 0.0;
  this->Yaw = 0.0;
  pwVar3 = L"";
  this->Pitch = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FParse::Value(pwVar2,L"P=",&this->Pitch);
  if (bVar1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(pwVar2,L"Y=",&this->Yaw);
    if (bVar1) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar1 = FParse::Value(pwVar3,L"R=",&this->Roll);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// IsNearlyZero @ 1417de080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TRotator<float>::IsNearlyZero(TRotator<float> *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_register_00001244 [12];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  auVar14._4_12_ = in_register_00001244;
  auVar14._0_4_ = param_1;
  uVar1 = this->Pitch;
  uVar2 = this->Yaw;
  fVar3 = GlobalVectorConstants::Float360.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float360.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float360.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float360.m128_f32[3];
  auVar12._12_4_ = 0;
  auVar12._0_4_ = this->Pitch;
  auVar12._4_4_ = this->Yaw;
  auVar12._8_4_ = this->Roll;
  auVar12 = divps(auVar12,(undefined1  [16])GlobalVectorConstants::Float360);
  auVar12 = roundps(auVar14,auVar12,3);
  fVar15 = (float)uVar1 - auVar12._0_4_ * fVar3;
  fVar16 = (float)uVar2 - auVar12._4_4_ * fVar4;
  fVar17 = this->Roll - auVar12._8_4_ * fVar5;
  fVar18 = 0.0 - auVar12._12_4_ * fVar6;
  fVar15 = (float)(~-(uint)(0.0 <= fVar15) & (uint)(fVar15 + fVar3) |
                  -(uint)(0.0 <= fVar15) & (uint)fVar15);
  fVar16 = (float)(~-(uint)(0.0 <= fVar16) & (uint)(fVar16 + fVar4) |
                  -(uint)(0.0 <= fVar16) & (uint)fVar16);
  fVar17 = (float)(~-(uint)(0.0 <= fVar17) & (uint)(fVar17 + fVar5) |
                  -(uint)(0.0 <= fVar17) & (uint)fVar17);
  fVar18 = (float)(~-(uint)(0.0 <= fVar18) & (uint)(fVar18 + fVar6) |
                  -(uint)(0.0 <= fVar18) & (uint)fVar18);
  uVar8 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar15);
  uVar9 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar16);
  uVar10 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar17);
  uVar11 = -(uint)(GlobalVectorConstants::Float180.m128_f32[3] < fVar18);
  auVar13._4_4_ =
       -(uint)(param_1 <
              (float)(((uint)(fVar16 - fVar4) & uVar9 | ~uVar9 & (uint)fVar16) & _UNK_15061cc74));
  auVar13._0_4_ =
       -(uint)(param_1 <
              (float)(((uint)(fVar15 - fVar3) & uVar8 | ~uVar8 & (uint)fVar15) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar13._8_4_ =
       -(uint)(param_1 <
              (float)(((uint)(fVar17 - fVar5) & uVar10 | ~uVar10 & (uint)fVar17) & _UNK_15061cc78));
  auVar13._12_4_ =
       -(uint)(param_1 <
              (float)(((uint)(fVar18 - fVar6) & uVar11 | ~uVar11 & (uint)fVar18) & _UNK_15061cc7c));
  iVar7 = movmskps(in_EAX,auVar13);
  return iVar7 == 0;
}

// IsNearlyZero @ 1417de100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TRotator<double>::IsNearlyZero(TRotator<double> *this,double param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  
  auVar28._0_8_ = this->Pitch;
  auVar28._8_8_ = this->Yaw;
  auVar17 = divpd(auVar28,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar17 = roundpd(in_XMM2,auVar17,3);
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar27._0_8_ = auVar17._0_8_ * dVar7;
  dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar27._8_8_ = auVar17._8_8_ * dVar8;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = this->Roll;
  auVar17 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar32 = (double)auVar28._0_8_ - auVar27._0_8_;
  dVar34 = (double)auVar28._8_8_ - auVar27._8_8_;
  auVar28 = roundpd(auVar27,auVar17,3);
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar19._8_4_ = SUB84(dVar34,0);
  auVar19._0_8_ = dVar32;
  auVar19._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  dVar2 = this->Roll - auVar28._0_8_ * dVar5;
  dVar3 = 0.0 - auVar28._8_8_ * dVar6;
  dVar24 = auVar19._8_8_ + dVar8;
  uVar11 = -(ulonglong)(0.0 <= dVar32);
  uVar12 = -(ulonglong)(0.0 <= dVar34);
  auVar29._0_8_ = uVar11 & (ulonglong)dVar32;
  auVar29._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar34);
  auVar29._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar34) >> 0x20);
  auVar35._0_4_ = ~(uint)uVar11 & SUB84(dVar32 + dVar7,0);
  auVar35._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar7) >> 0x20);
  auVar35._8_4_ = ~(uint)uVar12 & SUB84(dVar24,0);
  auVar35._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
  auVar20._8_4_ = SUB84(dVar3,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar35 = auVar35 | auVar29;
  dVar24 = auVar20._8_8_ + dVar6;
  uVar11 = -(ulonglong)(0.0 <= dVar2);
  uVar13 = -(ulonglong)(0.0 <= dVar3);
  uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar35._0_8_);
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar35._8_8_);
  auVar33._0_4_ = ~(uint)uVar11 & SUB84(dVar2 + dVar5,0);
  auVar33._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar5) >> 0x20);
  auVar33._8_4_ = ~(uint)uVar13 & SUB84(dVar24,0);
  auVar33._12_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
  auVar17._8_4_ = (int)((ulonglong)dVar3 & uVar13);
  auVar17._0_8_ = (ulonglong)dVar2 & uVar11;
  auVar17._12_4_ = (int)(((ulonglong)dVar3 & uVar13) >> 0x20);
  auVar33 = auVar33 | auVar17;
  uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar33._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar33._8_8_);
  auVar25._0_8_ = uVar12 & (ulonglong)(auVar35._0_8_ - dVar7);
  uVar11 = uVar14 & (ulonglong)(auVar35._8_8_ - dVar8);
  auVar25._8_4_ = (undefined4)uVar11;
  auVar25._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar30._0_8_ = uVar13 & (ulonglong)(auVar33._0_8_ - dVar5);
  uVar11 = uVar15 & (ulonglong)(auVar33._8_8_ - dVar6);
  auVar30._8_4_ = (undefined4)uVar11;
  auVar30._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar21._0_4_ = ~(uint)uVar13 & auVar33._0_4_;
  auVar21._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar33._4_4_;
  auVar21._8_4_ = ~(uint)uVar15 & auVar33._8_4_;
  auVar21._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar33._12_4_;
  auVar30 = auVar30 | auVar21;
  auVar4._4_4_ = ~(uint)(uVar12 >> 0x20) & auVar35._4_4_;
  auVar4._0_4_ = ~(uint)uVar12 & auVar35._0_4_;
  auVar4._8_4_ = ~(uint)uVar14 & auVar35._8_4_;
  auVar4._12_4_ = ~(uint)(uVar14 >> 0x20) & auVar35._12_4_;
  auVar25 = auVar25 | auVar4;
  auVar31._0_8_ =
       (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
  auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
  auVar22._8_4_ = SUB84(param_1,0);
  auVar22._0_8_ = param_1;
  auVar22._12_4_ = (int)((ulonglong)param_1 >> 0x20);
  auVar26._0_8_ =
       (double)CONCAT44(auVar25._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar25._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar26._8_4_ = auVar25._8_4_ & _UNK_15061cc88;
  auVar26._12_4_ = auVar25._12_4_ & _UNK_15061cc8c;
  auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < auVar31._8_8_);
  auVar23._0_8_ = -(ulonglong)(param_1 < auVar31._0_8_);
  uVar10 = movmskpd((int)this,auVar23);
  lVar16 = -(ulonglong)(param_1 < auVar26._8_8_);
  auVar1._8_4_ = (int)lVar16;
  auVar1._0_8_ = -(ulonglong)(param_1 < auVar26._0_8_);
  auVar1._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar1);
  return (uVar10 & 0x3fffffff) == 0 && iVar9 == 0;
}

// IsZero @ 1417deb20

bool __thiscall UE::Math::TRotator<float>::IsZero(TRotator<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_43b40000;
  fVar2 = FGenericPlatformMath::Fmod(this->Pitch,__real_43b40000);
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + fVar1;
  }
  if (fVar2 == 0.0) {
    fVar2 = FGenericPlatformMath::Fmod(this->Yaw,fVar1);
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + fVar1;
    }
    if (fVar2 == 0.0) {
      fVar2 = FGenericPlatformMath::Fmod(this->Roll,fVar1);
      if (fVar2 < 0.0) {
        fVar2 = fVar2 + fVar1;
      }
      if (fVar2 == 0.0) {
        return true;
      }
    }
  }
  return false;
}

// IsZero @ 1417debc0

bool __thiscall UE::Math::TRotator<double>::IsZero(TRotator<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = __real_4076800000000000;
  dVar2 = FGenericPlatformMath::Fmod(this->Pitch,__real_4076800000000000);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + dVar1;
  }
  if (dVar2 == 0.0) {
    dVar2 = FGenericPlatformMath::Fmod(this->Yaw,dVar1);
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + dVar1;
    }
    if (dVar2 == 0.0) {
      dVar2 = FGenericPlatformMath::Fmod(this->Roll,dVar1);
      if (dVar2 < 0.0) {
        dVar2 = dVar2 + dVar1;
      }
      if (dVar2 == 0.0) {
        return true;
      }
    }
  }
  return false;
}

// MakeFromEuler @ 1417e1a10

TRotator<float> * __cdecl
UE::Math::TRotator<float>::MakeFromEuler
          (TRotator<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  __return_storage_ptr__->Pitch = (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->Yaw = (param_1->field0_0x0)._s_0.Z;
  __return_storage_ptr__->Roll = (param_1->field0_0x0)._s_0.X;
  return __return_storage_ptr__;
}

// MakeFromEuler @ 1417e1a30

TRotator<double> * __cdecl
UE::Math::TRotator<double>::MakeFromEuler
          (TRotator<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  __return_storage_ptr__->Pitch = (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->Yaw = (param_1->field0_0x0)._s_0.Z;
  __return_storage_ptr__->Roll = (param_1->field0_0x0)._s_0.X;
  return __return_storage_ptr__;
}

// NetSerialize @ 1417e66c0

bool __thiscall
UE::Math::TRotator<float>::NetSerialize
          (TRotator<float> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  SerializeCompressedShort(this,param_1);
  *param_3 = true;
  return true;
}

// NetSerialize @ 1417e66e0

bool __thiscall
UE::Math::TRotator<double>::NetSerialize
          (TRotator<double> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  SerializeCompressedShort(this,param_1);
  *param_3 = true;
  return true;
}

// Normalize @ 1417e7410

void __thiscall UE::Math::TRotator<float>::Normalize(TRotator<float> *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar3 = GlobalVectorConstants::Float360.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float360.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float360.m128_f32[2];
  uVar1 = this->Pitch;
  uVar2 = this->Yaw;
  auVar9._12_4_ = 0;
  auVar9._0_4_ = this->Pitch;
  auVar9._4_4_ = this->Yaw;
  auVar9._8_4_ = this->Roll;
  auVar9 = divps(auVar9,(undefined1  [16])GlobalVectorConstants::Float360);
  auVar9 = roundps(in_XMM1,auVar9,3);
  fVar10 = (float)uVar1 - auVar9._0_4_ * fVar3;
  fVar11 = (float)uVar2 - auVar9._4_4_ * fVar4;
  fVar12 = this->Roll - auVar9._8_4_ * fVar5;
  fVar10 = (float)(~-(uint)(0.0 <= fVar10) & (uint)(fVar10 + fVar3) |
                  -(uint)(0.0 <= fVar10) & (uint)fVar10);
  fVar11 = (float)(~-(uint)(0.0 <= fVar11) & (uint)(fVar11 + fVar4) |
                  -(uint)(0.0 <= fVar11) & (uint)fVar11);
  fVar12 = (float)(~-(uint)(0.0 <= fVar12) & (uint)(fVar12 + fVar5) |
                  -(uint)(0.0 <= fVar12) & (uint)fVar12);
  uVar6 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar10);
  uVar7 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar11);
  uVar8 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar12);
  this->Pitch = (float)((uint)(fVar10 - fVar3) & uVar6 | ~uVar6 & (uint)fVar10);
  this->Yaw = (float)((uint)(fVar11 - fVar4) & uVar7 | ~uVar7 & (uint)fVar11);
  this->Roll = (float)((uint)(fVar12 - fVar5) & uVar8 | ~uVar8 & (uint)fVar12);
  return;
}

// Normalize @ 1417e7480

void __thiscall UE::Math::TRotator<double>::Normalize(TRotator<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar16;
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar19._0_8_ = this->Pitch;
  auVar19._8_8_ = this->Yaw;
  auVar11 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar11 = roundpd(in_XMM1,auVar11,3);
  dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar18._0_8_ = auVar11._0_8_ * dVar5;
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar18._8_8_ = auVar11._8_8_ * dVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = this->Roll;
  auVar11 = divpd(auVar12,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar17 = (double)auVar19._0_8_ - auVar18._0_8_;
  dVar1 = (double)auVar19._8_8_ - auVar18._8_8_;
  auVar19 = roundpd(auVar18,auVar11,3);
  dVar2 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar13._8_4_ = SUB84(dVar1,0);
  auVar13._0_8_ = dVar17;
  auVar13._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar16 = auVar13._8_8_ + dVar6;
  dVar3 = this->Roll - auVar19._0_8_ * dVar2;
  dVar4 = 0.0 - auVar19._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar7 = -(ulonglong)(0.0 <= dVar17);
  uVar9 = -(ulonglong)(0.0 <= dVar1);
  uVar8 = -(ulonglong)(0.0 <= dVar3);
  uVar10 = -(ulonglong)(0.0 <= dVar4);
  auVar20._0_8_ = uVar7 & (ulonglong)dVar17;
  auVar20._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar1);
  auVar20._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar1) >> 0x20);
  auVar23._0_4_ = ~(uint)uVar7 & SUB84(dVar17 + dVar5,0);
  auVar23._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar17 + dVar5) >> 0x20);
  auVar23._8_4_ = ~(uint)uVar9 & SUB84(dVar16,0);
  auVar23._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar16 >> 0x20);
  auVar23 = auVar23 | auVar20;
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar17 = auVar14._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar22._0_8_ = (ulonglong)dVar3 & uVar8;
  auVar22._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar4);
  auVar22._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar4) >> 0x20);
  auVar21._0_4_ = ~(uint)uVar8 & SUB84(dVar3 + dVar2,0);
  auVar21._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar3 + dVar2) >> 0x20);
  auVar21._8_4_ = ~(uint)uVar10 & SUB84(dVar17,0);
  auVar21._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar17 >> 0x20);
  auVar21 = auVar21 | auVar22;
  uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar21._0_8_);
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar23._0_8_);
  uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar23._8_8_);
  auVar15._0_8_ = uVar9 & (ulonglong)(auVar23._0_8_ - dVar5);
  uVar7 = uVar10 & (ulonglong)(auVar23._8_8_ - dVar6);
  auVar15._8_4_ = (undefined4)uVar7;
  auVar15._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar11._4_4_ = ~(uint)(uVar9 >> 0x20) & auVar23._4_4_;
  auVar11._0_4_ = ~(uint)uVar9 & auVar23._0_4_;
  auVar11._8_4_ = ~(uint)uVar10 & auVar23._8_4_;
  auVar11._12_4_ = ~(uint)(uVar10 >> 0x20) & auVar23._12_4_;
  this->Pitch = (double)SUB168(auVar15 | auVar11,0);
  this->Yaw = (double)SUB168(auVar15 | auVar11,8);
  this->Roll = (double)(uVar8 & (ulonglong)(auVar21._0_8_ - dVar2) |
                       CONCAT44(~(uint)(uVar8 >> 0x20) & auVar21._4_4_,~(uint)uVar8 & auVar21._0_4_)
                       );
  return;
}

// NormalizeAxis @ 1417e7730

float __cdecl UE::Math::TRotator<float>::NormalizeAxis(float param_1)

{
  float fVar1;
  
  fVar1 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + __real_43b40000;
  }
  if (__real_43340000 < fVar1) {
    fVar1 = fVar1 - __real_43b40000;
  }
  return fVar1;
}

// NormalizeAxis @ 1417e7770

double __cdecl UE::Math::TRotator<double>::NormalizeAxis(double param_1)

{
  double dVar1;
  
  dVar1 = FGenericPlatformMath::Fmod(param_1,__real_4076800000000000);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + __real_4076800000000000;
  }
  if (__real_4066800000000000 < dVar1) {
    dVar1 = dVar1 - __real_4076800000000000;
  }
  return dVar1;
}

// Quaternion @ 1417eed80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TQuat<float> * __thiscall
UE::Math::TRotator<float>::Quaternion(TRotator<float> *this,TQuat<float> *__return_storage_ptr__)

{
  int iVar1;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  undefined1 in_XMM3 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FString local_28;
  undefined1 local_18 [16];
  
  auVar2._12_4_ = 0;
  auVar2._0_4_ = this->Pitch;
  auVar2._4_4_ = this->Yaw;
  auVar2._8_4_ = this->Roll;
  auVar2 = divps(auVar2,(undefined1  [16])GlobalVectorConstants::Float360);
  roundps(in_XMM3,auVar2,3);
  __vdecl_sincosf4();
  fVar8 = auVar2._0_4_;
  fVar3 = auVar2._4_4_;
  fVar4 = auVar2._8_4_;
  fVar9 = (float)((uint)(fVar3 * extraout_XMM0_Da * fVar4) ^ _UNK_150689524);
  fVar10 = (float)((uint)(extraout_XMM0_Db * fVar8 * fVar4) ^ _UNK_150689528);
  fVar11 = (float)((uint)(fVar3 * fVar8 * fVar4) ^ _UNK_15068952c);
  fVar5 = (float)((uint)(extraout_XMM0_Db * fVar8 * extraout_XMM0_Dc) ^ _UNK_150689554);
  fVar6 = (float)((uint)(fVar3 * extraout_XMM0_Da * extraout_XMM0_Dc) ^ _UNK_150689558);
  fVar7 = (float)((uint)(extraout_XMM0_Db * extraout_XMM0_Da * extraout_XMM0_Dc) ^ _UNK_15068955c);
  fVar8 = (float)((uint)(extraout_XMM0_Db * extraout_XMM0_Da * fVar4) ^
                 ___xmm_00000000000000008000000000000000) +
          (float)((uint)(fVar3 * fVar8 * extraout_XMM0_Dc) ^ ___xmm_00000000800000008000000080000000
                 );
  __return_storage_ptr__->X = fVar8;
  __return_storage_ptr__->Y = fVar9 + fVar5;
  __return_storage_ptr__->Z = fVar10 + fVar6;
  __return_storage_ptr__->W = fVar11 + fVar7;
  iVar1 = _finite((double)fVar8);
  if ((((iVar1 == 0) || (iVar1 = _finite((double)__return_storage_ptr__->Y), iVar1 == 0)) ||
      (iVar1 = _finite((double)__return_storage_ptr__->Z), iVar1 == 0)) ||
     (iVar1 = _finite((double)__return_storage_ptr__->W), iVar1 == 0)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (::OnceOnly == false) {
        ::FString::PrintfImpl((FString *)local_18,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
        ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (L"Invalid input %s to FRotator::Quaternion - generated NaN output: %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if ((TRotator<float> *)local_18._0_8_ != (TRotator<float> *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
        ::OnceOnly = true;
      }
    }
    else {
      local_18._0_8_ = this;
      local_18._8_8_ = __return_storage_ptr__;
      `UE::Math::TRotator<float>::Quaternion'::__l13::<lambda_1>::operator()(local_18);
    }
    *__return_storage_ptr__ = TQuat<float>::Identity;
    ::FDebug::DumpStackTraceToLog(Warning);
  }
  return __return_storage_ptr__;
}

// Quaternion @ 1417eefa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TQuat<double> * __thiscall
UE::Math::TRotator<double>::Quaternion(TRotator<double> *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  uint uVar5;
  undefined4 extraout_XMM0_Dd;
  uint uVar6;
  double dVar7;
  double dVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TVar9;
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 in_XMM3 [16];
  double dVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  FString local_88;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_b8;
  auVar14._0_8_ = this->Pitch;
  auVar14._8_8_ = this->Yaw;
  dVar1 = this->Roll;
  TVar9 = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)
          divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  roundpd(in_XMM3,(undefined1  [16])TVar9,3);
  __vdecl_sincos2();
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar1;
  auVar14 = divpd(auVar13,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar14 = roundpd((undefined1  [16])TVar9,auVar14,3);
  dVar7 = auVar14._0_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  local_78._0_16_ = (undefined1  [16])TVar9;
  __vdecl_sincos2();
  dVar17 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  auVar15._4_4_ = extraout_XMM0_Db;
  auVar15._0_4_ = extraout_XMM0_Da;
  auVar15._8_4_ = extraout_XMM0_Dc;
  auVar15._12_4_ = extraout_XMM0_Dd;
  dVar16 = auVar15._8_8_;
  auVar10._8_4_ = extraout_XMM0_Dc;
  auVar10._0_8_ = local_78._8_8_;
  auVar10._12_4_ = extraout_XMM0_Dd;
  dVar1 = dVar16 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar7;
  dVar2 = (double)local_78._8_8_ * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar7;
  dVar8 = (double)local_78._8_8_ * (double)local_78._0_8_ * dVar17;
  dVar12 = auVar10._8_8_ * (double)local_78._0_8_ * dVar17;
  uVar5 = SUB84(dVar2,0) ^ _UNK_150689718;
  uVar6 = (uint)((ulonglong)dVar2 >> 0x20) ^ _UNK_15068971c;
  auVar11._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
  auVar11._8_4_ = SUB84(dVar12,0) ^ _UNK_15066df78;
  auVar11._12_4_ = (uint)((ulonglong)dVar12 >> 0x20) ^ _UNK_15066df7c;
  dVar2 = (double)local_78._8_8_ * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar17;
  dVar17 = dVar16 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar17;
  uVar18 = SUB84(dVar2,0) ^ ___xmm_00000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)dVar2 >> 0x20) ^ _UNK_150689524;
  uVar20 = SUB84(dVar17,0) ^ _UNK_150689528;
  uVar21 = (uint)((ulonglong)dVar17 >> 0x20) ^ _UNK_15068952c;
  __return_storage_ptr__->X =
       auVar11._0_8_ +
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ _UNK_150689714,
                        SUB84(dVar1,0) ^ ___xmm_80000000000000000000000000000000);
  __return_storage_ptr__->Y = auVar11._8_8_ + (double)CONCAT44(uVar6,uVar5);
  dVar1 = (double)CONCAT44(uVar19,uVar18) + dVar16 * (double)local_78._0_8_ * dVar7;
  dVar2 = (double)CONCAT44(uVar21,uVar20) + (double)local_78._8_8_ * (double)local_78._0_8_ * dVar7;
  auVar3._8_4_ = SUB84(dVar2,0);
  auVar3._0_8_ = dVar1;
  auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->Z = dVar1;
  __return_storage_ptr__->W = (double)auVar3._8_8_;
  iVar4 = _finite(__return_storage_ptr__->X);
  if ((((iVar4 == 0) || (iVar4 = _finite(__return_storage_ptr__->Y), iVar4 == 0)) ||
      (iVar4 = _finite(__return_storage_ptr__->Z), iVar4 == 0)) ||
     (iVar4 = _finite(__return_storage_ptr__->W), iVar4 == 0)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (::OnceOnly == false) {
        local_98 = __return_storage_ptr__->Z;
        dStack_90 = __return_storage_ptr__->W;
        ::FString::PrintfImpl((FString *)local_78,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
        local_98 = this->Roll;
        ::FString::PrintfImpl(&local_88,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (L"Invalid input %s to FRotator::Quaternion - generated NaN output: %s");
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._0_8_);
        }
        ::OnceOnly = true;
      }
    }
    else {
      local_78._8_8_ = __return_storage_ptr__;
      local_78._0_8_ = this;
      `UE::Math::TRotator<double>::Quaternion'::__l13::<lambda_1>::operator()(local_78);
    }
    dVar1 = TQuat<double>::Identity.Y;
    __return_storage_ptr__->X = TQuat<double>::Identity.X;
    __return_storage_ptr__->Y = dVar1;
    dVar1 = TQuat<double>::Identity.W;
    __return_storage_ptr__->Z = TQuat<double>::Identity.Z;
    __return_storage_ptr__->W = dVar1;
    ::FDebug::DumpStackTraceToLog(Warning);
  }
  return __return_storage_ptr__;
}

// RotateVector @ 1417f7020

TVector<float> * __thiscall
UE::Math::TRotator<float>::RotateVector
          (TRotator<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TRotationMatrix<float> *pTVar12;
  TRotationMatrix<float> local_48;
  
  pTVar12 = TRotationMatrix<float>::TRotationMatrix<float>(&local_48,this);
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = *(float *)&pTVar12->field_0x14;
  fVar5 = *(float *)&pTVar12->field_0x18;
  fVar6 = *(float *)&pTVar12->field_0x4;
  fVar7 = *(float *)&pTVar12->field_0x8;
  fVar8 = *(float *)&pTVar12->field_0x24;
  fVar9 = *(float *)&pTVar12->field_0x28;
  fVar10 = *(float *)&pTVar12->field_0x34;
  fVar11 = *(float *)&pTVar12->field_0x38;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar2 * *(float *)&pTVar12->field_0x10 + fVar1 * *(float *)pTVar12 +
       fVar3 * *(float *)&pTVar12->field_0x20 + *(float *)&pTVar12->field_0x30 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar2 * fVar5 + fVar1 * fVar7 + fVar3 * fVar9 + fVar11 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar2 * fVar4 + fVar1 * fVar6 + fVar3 * fVar8 + fVar10 * 0.0;
  return __return_storage_ptr__;
}

// RotateVector @ 1417f70e0

TVector<double> * __thiscall
UE::Math::TRotator<double>::RotateVector
          (TRotator<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TRotationMatrix<double> *pTVar12;
  TRotationMatrix<double> local_a8;
  
  pTVar12 = TRotationMatrix<double>::TRotationMatrix<double>(&local_a8,this);
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = *(double *)&pTVar12->field_0x28;
  dVar5 = *(double *)&pTVar12->field_0x8;
  dVar6 = *(double *)&pTVar12->field_0x10;
  dVar7 = *(double *)&pTVar12->field_0x48;
  dVar8 = *(double *)&pTVar12->field_0x68;
  dVar9 = *(double *)&pTVar12->field_0x30;
  dVar10 = *(double *)&pTVar12->field_0x50;
  dVar11 = *(double *)&pTVar12->field_0x70;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar3 * *(double *)&pTVar12->field_0x20 + dVar2 * *(double *)pTVar12 +
       dVar1 * *(double *)&pTVar12->field_0x40 + *(double *)&pTVar12->field_0x60 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar3 * dVar4 + dVar2 * dVar5 + dVar1 * dVar7 + dVar8 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar6 * dVar2 + dVar9 * dVar3 + dVar10 * dVar1 + dVar11 * 0.0;
  return __return_storage_ptr__;
}

// Serialize @ 1417f8d80

bool __thiscall UE::Math::TRotator<float>::Serialize(TRotator<float> *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->Pitch = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->Yaw;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->Roll;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return true;
}

// Serialize @ 1417f8eb0

bool __thiscall UE::Math::TRotator<double>::Serialize(TRotator<double> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// SerializeCompressed @ 1417f9620

void __thiscall
UE::Math::TRotator<float>::SerializeCompressed(TRotator<float> *this,FArchive *param_1)

{
  longlong *plVar1;
  float fVar2;
  byte bVar3;
  char local_res10 [8];
  byte local_res18 [8];
  byte local_res20 [8];
  byte local_28 [16];
  
  local_28[0] = 0;
  local_res20[0] = 0;
  local_res18[0] = 0;
  bVar3 = param_1->field_0x28 & 1;
  if (bVar3 == 0) {
    local_28[0] = (byte)((int)ROUND(this->Pitch * __real_3fb60b61 + __real_3f000000) >> 1);
    local_res20[0] = (byte)((int)ROUND(this->Yaw * __real_3fb60b61 + __real_3f000000) >> 1);
    local_res18[0] = (byte)((int)ROUND(this->Roll * __real_3fb60b61 + __real_3f000000) >> 1);
  }
  local_res10[0] = local_28[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_28[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_28,1);
    }
    else {
      local_28[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  local_res10[0] = local_res20[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res20[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,1);
    }
    else {
      local_res20[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  local_res10[0] = local_res18[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res18[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
    }
    else {
      local_res18[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  fVar2 = __real_3fb40000;
  if (bVar3 != 0) {
    this->Pitch = (float)local_28[0] * __real_3fb40000;
    this->Yaw = (float)local_res20[0] * fVar2;
    this->Roll = (float)local_res18[0] * fVar2;
  }
  return;
}

// SerializeCompressed @ 1417f9810

void __thiscall
UE::Math::TRotator<double>::SerializeCompressed(TRotator<double> *this,FArchive *param_1)

{
  longlong *plVar1;
  double dVar2;
  byte bVar3;
  char local_res10 [8];
  byte local_res18 [8];
  byte local_res20 [8];
  byte local_28 [16];
  
  local_28[0] = 0;
  local_res20[0] = 0;
  local_res18[0] = 0;
  bVar3 = param_1->field_0x28 & 1;
  if (bVar3 == 0) {
    local_28[0] = (byte)((longlong)
                         ROUND(this->Pitch * __real_3ff6c16c16c16c17 + __real_3fe0000000000000) >> 1
                        );
    local_res20[0] =
         (byte)((longlong)ROUND(this->Yaw * __real_3ff6c16c16c16c17 + __real_3fe0000000000000) >> 1)
    ;
    local_res18[0] =
         (byte)((longlong)ROUND(this->Roll * __real_3ff6c16c16c16c17 + __real_3fe0000000000000) >> 1
               );
  }
  local_res10[0] = local_28[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_28[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_28,1);
    }
    else {
      local_28[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  local_res10[0] = local_res20[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res20[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,1);
    }
    else {
      local_res20[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  local_res10[0] = local_res18[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res18[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
    }
    else {
      local_res18[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  dVar2 = __real_3ff6800000000000;
  if (bVar3 != 0) {
    this->Pitch = (double)local_28[0] * __real_3ff6800000000000;
    this->Yaw = (double)local_res20[0] * dVar2;
    this->Roll = (double)local_res18[0] * dVar2;
  }
  return;
}

// SerializeCompressedShort @ 1417f9a10

void __thiscall
UE::Math::TRotator<float>::SerializeCompressedShort(TRotator<float> *this,FArchive *param_1)

{
  longlong *plVar1;
  float fVar2;
  byte bVar3;
  char local_res10 [8];
  ushort local_res18 [4];
  ushort local_res20 [4];
  ushort local_38 [8];
  
  local_38[0] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  bVar3 = param_1->field_0x28 & 1;
  if (bVar3 == 0) {
    local_38[0] = (ushort)((int)ROUND(this->Pitch * __real_43b60b61 + __real_3f000000) >> 1);
    local_res18[0] = (ushort)((int)ROUND(this->Yaw * __real_43b60b61 + __real_3f000000) >> 1);
    local_res20[0] = (ushort)((int)ROUND(this->Roll * __real_43b60b61 + __real_3f000000) >> 1);
  }
  local_res10[0] = local_38[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_38[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_38);
      }
    }
    else {
      local_38[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
  }
  local_res10[0] = local_res18[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res18[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
  }
  local_res10[0] = local_res20[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res20[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
  }
  fVar2 = __real_3bb40000;
  if (bVar3 != 0) {
    this->Pitch = (float)local_38[0] * __real_3bb40000;
    this->Yaw = (float)local_res18[0] * fVar2;
    this->Roll = (float)local_res20[0] * fVar2;
  }
  return;
}

// SerializeCompressedShort @ 1417f9c70

void __thiscall
UE::Math::TRotator<double>::SerializeCompressedShort(TRotator<double> *this,FArchive *param_1)

{
  longlong *plVar1;
  double dVar2;
  byte bVar3;
  char local_res10 [8];
  ushort local_res18 [4];
  ushort local_res20 [4];
  ushort local_38 [8];
  
  local_38[0] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  bVar3 = param_1->field_0x28 & 1;
  if (bVar3 == 0) {
    local_38[0] = (ushort)((longlong)
                           ROUND(this->Pitch * __real_4076c16c16c16c17 + __real_3fe0000000000000) >>
                          1);
    local_res18[0] =
         (ushort)((longlong)ROUND(this->Yaw * __real_4076c16c16c16c17 + __real_3fe0000000000000) >>
                 1);
    local_res20[0] =
         (ushort)((longlong)ROUND(this->Roll * __real_4076c16c16c16c17 + __real_3fe0000000000000) >>
                 1);
  }
  local_res10[0] = local_38[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_38[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_38);
      }
    }
    else {
      local_38[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
  }
  local_res10[0] = local_res18[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res18[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
  }
  local_res10[0] = local_res20[0] != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res20[0] = 0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
  }
  dVar2 = __real_3f76800000000000;
  if (bVar3 != 0) {
    this->Pitch = (double)local_38[0] * __real_3f76800000000000;
    this->Yaw = (double)local_res18[0] * dVar2;
    this->Roll = (double)local_res20[0] * dVar2;
  }
  return;
}

// SerializeFromMismatchedTag @ 1417fa790

bool __thiscall
UE::Math::TRotator<float>::SerializeFromMismatchedTag
          (TRotator<float> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  uint uVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint local_res10 [2];
  TRotator<double> local_20;
  
  FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar2 = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
  FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var_01,FVar7.Value);
  local_res10[1] = 0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = uVar2;
  if ((param_1 != FVar4) &&
     ((FVar3.Number = 0, FVar3.ComparisonIndex.Value = local_res10[0], param_1 != FVar3 ||
      (0x3eb < (int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20))))) {
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = uVar1;
    if ((param_1 != FVar5) && (param_1 != FVar3)) {
      return false;
    }
    Math::operator<<(param_2,&local_20);
    this->Pitch = (float)local_20.Pitch;
    this->Yaw = (float)local_20.Yaw;
    this->Roll = (float)local_20.Roll;
    return true;
  }
  bVar6 = Serialize(this,param_2);
  return bVar6;
}

// SerializeFromMismatchedTag @ 1417fa8b0

bool __thiscall
UE::Math::TRotator<double>::SerializeFromMismatchedTag
          (TRotator<double> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint local_res10 [2];
  TRotator<float> local_18;
  
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  local_18.Yaw = 0.0;
  local_18.Pitch = *(float *)CONCAT44(extraout_var,FVar6.Value);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var_01,FVar6.Value);
  local_res10[1] = 0;
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = uVar1;
  if ((param_1 != FVar3) &&
     (FVar2.Number = 0, FVar2.ComparisonIndex.Value = local_res10[0], param_1 != FVar2)) {
    FVar4.Number = (uint)local_18.Yaw;
    FVar4.ComparisonIndex.Value = (uint)local_18.Pitch;
    if (param_1 != FVar4) {
      return false;
    }
    bVar5 = TRotator<float>::Serialize(&local_18,param_2);
    this->Pitch = (double)local_18.Pitch;
    this->Yaw = (double)local_18.Yaw;
    this->Roll = (double)local_18.Roll;
    return bVar5;
  }
  Math::operator<<(param_2,this);
  return true;
}

// SetClosestToMe @ 1417fc2d0

void __thiscall
UE::Math::TRotator<float>::SetClosestToMe(TRotator<float> *this,TRotator<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_43340000 - param_1->Pitch;
  fVar2 = param_1->Yaw + __real_43340000;
  fVar3 = param_1->Roll + __real_43340000;
  if ((float)((uint)(this->Yaw - fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff) +
      (float)((uint)(this->Pitch - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) +
      (float)((uint)(this->Roll - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)(this->Yaw - param_1->Yaw) & __xmm_7fffffff7fffffff7fffffff7fffffff) +
      (float)((uint)(this->Pitch - param_1->Pitch) & __xmm_7fffffff7fffffff7fffffff7fffffff) +
      (float)((uint)(this->Roll - param_1->Roll) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    param_1->Pitch = fVar1;
    param_1->Yaw = fVar2;
    param_1->Roll = fVar3;
  }
  return;
}

// SetClosestToMe @ 1417fc3c0

void __thiscall
UE::Math::TRotator<double>::SetClosestToMe(TRotator<double> *this,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = this->Yaw - param_1->Yaw;
  dVar2 = this->Roll - param_1->Roll;
  dVar3 = __real_4066800000000000 - param_1->Pitch;
  dVar4 = param_1->Yaw + __real_4066800000000000;
  dVar5 = param_1->Roll + __real_4066800000000000;
  dVar8 = this->Pitch - param_1->Pitch;
  dVar6 = this->Pitch - dVar3;
  dVar9 = this->Yaw - dVar4;
  dVar7 = this->Roll - dVar5;
  if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
      (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    param_1->Pitch = dVar3;
    param_1->Yaw = dVar4;
    param_1->Roll = dVar5;
  }
  return;
}

// SetComponentForAxis @ 1417fc510

void __thiscall
UE::Math::TRotator<float>::SetComponentForAxis(TRotator<float> *this,Type param_1,float param_2)

{
  if (param_1 == X) {
    this->Roll = param_2;
  }
  else {
    if (param_1 == Y) {
      this->Pitch = param_2;
      return;
    }
    if (param_1 == Z) {
      this->Yaw = param_2;
      return;
    }
  }
  return;
}

// SetComponentForAxis @ 1417fc540

void __thiscall
UE::Math::TRotator<double>::SetComponentForAxis(TRotator<double> *this,Type param_1,double param_2)

{
  if (param_1 == X) {
    this->Roll = param_2;
  }
  else {
    if (param_1 == Y) {
      this->Pitch = param_2;
      return;
    }
    if (param_1 == Z) {
      this->Yaw = param_2;
      return;
    }
  }
  return;
}

// ToCompactString @ 1418025d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
UE::Math::TRotator<float>::ToCompactString(TRotator<float> *this,FString *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined4 in_EAX;
  int iVar8;
  FString *pFVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  FString local_28;
  FString local_18;
  
  fVar3 = GlobalVectorConstants::Float360.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float360.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float360.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float360.m128_f32[3];
  uVar1 = this->Pitch;
  uVar2 = this->Yaw;
  auVar16._12_4_ = 0;
  auVar16._0_4_ = this->Pitch;
  auVar16._4_4_ = this->Yaw;
  auVar16._8_4_ = this->Roll;
  auVar16 = divps(auVar16,(undefined1  [16])GlobalVectorConstants::Float360);
  auVar16 = roundps(in_XMM1,auVar16,3);
  fVar18 = (float)uVar1 - auVar16._0_4_ * fVar3;
  fVar19 = (float)uVar2 - auVar16._4_4_ * fVar4;
  fVar20 = this->Roll - auVar16._8_4_ * fVar5;
  fVar21 = 0.0 - auVar16._12_4_ * fVar6;
  fVar18 = (float)(~-(uint)(0.0 <= fVar18) & (uint)(fVar18 + fVar3) |
                  -(uint)(0.0 <= fVar18) & (uint)fVar18);
  fVar19 = (float)(~-(uint)(0.0 <= fVar19) & (uint)(fVar19 + fVar4) |
                  -(uint)(0.0 <= fVar19) & (uint)fVar19);
  fVar20 = (float)(~-(uint)(0.0 <= fVar20) & (uint)(fVar20 + fVar5) |
                  -(uint)(0.0 <= fVar20) & (uint)fVar20);
  fVar21 = (float)(~-(uint)(0.0 <= fVar21) & (uint)(fVar21 + fVar6) |
                  -(uint)(0.0 <= fVar21) & (uint)fVar21);
  uVar12 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar18);
  uVar13 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar19);
  uVar14 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar20);
  uVar15 = -(uint)(GlobalVectorConstants::Float180.m128_f32[3] < fVar21);
  auVar17._4_4_ =
       -(uint)(_UNK_1506895e4 <
              (float)(((uint)(fVar19 - fVar4) & uVar13 | ~uVar13 & (uint)fVar19) & _UNK_15061cc74));
  auVar17._0_4_ =
       -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
              (float)(((uint)(fVar18 - fVar3) & uVar12 | ~uVar12 & (uint)fVar18) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar17._8_4_ =
       -(uint)(_UNK_1506895e8 <
              (float)(((uint)(fVar20 - fVar5) & uVar14 | ~uVar14 & (uint)fVar20) & _UNK_15061cc78));
  auVar17._12_4_ =
       -(uint)(_UNK_1506895ec <
              (float)(((uint)(fVar21 - fVar6) & uVar15 | ~uVar15 & (uint)fVar21) & _UNK_15061cc7c));
  iVar8 = movmskps(in_EAX,auVar17);
  if (iVar8 == 0) {
    ::FString::FString(__return_storage_ptr__,L"R(0)");
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_28,L"R(");
  bVar7 = true;
  iVar8 = 0;
  if (__real_322bcc77 < (float)((uint)this->Pitch & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    ::FString::PrintfImpl(&local_18,L"P=%.2f");
    iVar10 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar10 = iVar8;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar10);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar7 = false;
  }
  if (__real_322bcc77 < (float)((uint)this->Yaw & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (!bVar7) {
      pFVar9 = ::FString::FString(&local_18,L", ");
      iVar10 = (pFVar9->Data).ArrayNum;
      iVar11 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar11 = iVar8;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar11);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_18,L"Y=%.2f");
    iVar10 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar10 = iVar8;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar10);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar7 = false;
  }
  if (__real_322bcc77 < (float)((uint)this->Roll & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (!bVar7) {
      pFVar9 = ::FString::FString(&local_18,L", ");
      iVar10 = (pFVar9->Data).ArrayNum;
      iVar11 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar11 = iVar8;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar11);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_18,L"R=%.2f");
    iVar10 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar10 = iVar8;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar10);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = ::FString::FString(&local_18,L")");
  iVar10 = (pFVar9->Data).ArrayNum;
  iVar11 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar11 = iVar8;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar11);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  return __return_storage_ptr__;
}

// ToCompactString @ 1418028a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
UE::Math::TRotator<double>::ToCompactString(TRotator<double> *this,FString *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  undefined4 in_EAX;
  int iVar10;
  FString *pFVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  FString local_58;
  FString local_48 [4];
  
  auVar23._0_8_ = this->Pitch;
  auVar23._8_8_ = this->Yaw;
  auVar21 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar21 = roundpd(in_XMM1,auVar21,3);
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar29._0_8_ = auVar21._0_8_ * dVar6;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar29._8_8_ = auVar21._8_8_ * dVar7;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = this->Roll;
  dVar35 = (double)auVar23._0_8_ - auVar29._0_8_;
  dVar37 = (double)auVar23._8_8_ - auVar29._8_8_;
  auVar23 = divpd(auVar22,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar23 = roundpd(auVar29,auVar23,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar24._8_4_ = SUB84(dVar37,0);
  auVar24._0_8_ = dVar35;
  auVar24._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  dVar2 = this->Roll - auVar23._0_8_ * dVar4;
  dVar3 = 0.0 - auVar23._8_8_ * dVar5;
  uVar15 = -(ulonglong)(0.0 <= dVar35);
  uVar17 = -(ulonglong)(0.0 <= dVar37);
  auVar30._0_8_ = uVar15 & (ulonglong)dVar35;
  auVar30._8_4_ = (undefined4)(uVar17 & (ulonglong)dVar37);
  auVar30._12_4_ = (undefined4)((uVar17 & (ulonglong)dVar37) >> 0x20);
  dVar37 = auVar24._8_8_ + dVar7;
  uVar16 = -(ulonglong)(0.0 <= dVar2);
  uVar18 = -(ulonglong)(0.0 <= dVar3);
  auVar38._0_4_ = ~(uint)uVar15 & SUB84(dVar35 + dVar6,0);
  auVar38._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar6) >> 0x20);
  auVar38._8_4_ = ~(uint)uVar17 & SUB84(dVar37,0);
  auVar38._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
  auVar38 = auVar38 | auVar30;
  auVar25._8_4_ = SUB84(dVar3,0);
  auVar25._0_8_ = dVar2;
  auVar25._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar37 = auVar25._8_8_ + dVar5;
  auVar36._0_4_ = ~(uint)uVar16 & SUB84(dVar2 + dVar4,0);
  auVar36._4_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
  auVar36._8_4_ = ~(uint)uVar18 & SUB84(dVar37,0);
  auVar36._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
  auVar21._8_4_ = (int)((ulonglong)dVar3 & uVar18);
  auVar21._0_8_ = (ulonglong)dVar2 & uVar16;
  auVar21._12_4_ = (int)(((ulonglong)dVar3 & uVar18) >> 0x20);
  auVar36 = auVar36 | auVar21;
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar36._0_8_);
  uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar36._8_8_);
  uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar38._0_8_);
  uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar38._8_8_);
  auVar31._0_8_ = uVar16 & (ulonglong)(auVar36._0_8_ - dVar4);
  uVar15 = uVar18 & (ulonglong)(auVar36._8_8_ - dVar5);
  auVar31._8_4_ = (undefined4)uVar15;
  auVar31._12_4_ = (undefined4)(uVar15 >> 0x20);
  auVar26._0_4_ = ~(uint)uVar16 & auVar36._0_4_;
  auVar26._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar36._4_4_;
  auVar26._8_4_ = ~(uint)uVar18 & auVar36._8_4_;
  auVar26._12_4_ = ~(uint)(uVar18 >> 0x20) & auVar36._12_4_;
  auVar31 = auVar31 | auVar26;
  auVar27._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar27._0_8_ = __real_3f1a36e2e0000000;
  auVar27._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar32._0_8_ =
       (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
  auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < auVar32._8_8_);
  auVar28._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar32._0_8_);
  uVar12 = movmskpd((int)this,auVar28);
  auVar33._0_8_ = uVar17 & (ulonglong)(auVar38._0_8_ - dVar6);
  uVar15 = uVar19 & (ulonglong)(auVar38._8_8_ - dVar7);
  auVar33._8_4_ = (undefined4)uVar15;
  auVar33._12_4_ = (undefined4)(uVar15 >> 0x20);
  auVar1._4_4_ = ~(uint)(uVar17 >> 0x20) & auVar38._4_4_;
  auVar1._0_4_ = ~(uint)uVar17 & auVar38._0_4_;
  auVar1._8_4_ = ~(uint)uVar19 & auVar38._8_4_;
  auVar1._12_4_ = ~(uint)(uVar19 >> 0x20) & auVar38._12_4_;
  auVar33 = auVar33 | auVar1;
  auVar34._0_8_ =
       (double)CONCAT44(auVar33._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar33._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar34._8_4_ = auVar33._8_4_ & _UNK_15061cc88;
  auVar34._12_4_ = auVar33._12_4_ & _UNK_15061cc8c;
  lVar20 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._8_8_);
  auVar8._8_4_ = (int)lVar20;
  auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
  iVar10 = movmskpd(in_EAX,auVar8);
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    ::FString::FString(__return_storage_ptr__,L"R(0)");
  }
  else {
    ::FString::FString(&local_58,L"R(");
    dVar2 = __real_3e45798ee2308c3a;
    bVar9 = true;
    iVar10 = 0;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)this->Pitch >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(this->Pitch,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      ::FString::PrintfImpl(local_48,L"P=%.2f");
      iVar13 = local_48[0].Data.ArrayNum + -1;
      if (local_48[0].Data.ArrayNum == 0) {
        iVar13 = iVar10;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48[0].Data.AllocatorInstance.Data,iVar13);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      bVar9 = false;
    }
    if (dVar2 < (double)CONCAT44((uint)((ulonglong)this->Yaw >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(this->Yaw,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    {
      if (!bVar9) {
        pFVar11 = ::FString::FString(local_48,L", ");
        iVar13 = (pFVar11->Data).ArrayNum;
        iVar14 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar14 = iVar10;
        }
        ::FString::AppendChars(&local_58,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar14);
        if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(local_48,L"Y=%.2f");
      iVar13 = local_48[0].Data.ArrayNum + -1;
      if (local_48[0].Data.ArrayNum == 0) {
        iVar13 = iVar10;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48[0].Data.AllocatorInstance.Data,iVar13);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      bVar9 = false;
    }
    if (dVar2 < (double)CONCAT44((uint)((ulonglong)this->Roll >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(this->Roll,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
       ) {
      if (!bVar9) {
        pFVar11 = ::FString::FString(local_48,L", ");
        iVar13 = (pFVar11->Data).ArrayNum;
        iVar14 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar14 = iVar10;
        }
        ::FString::AppendChars(&local_58,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar14);
        if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(local_48,L"R=%.2f");
      iVar13 = local_48[0].Data.ArrayNum + -1;
      if (local_48[0].Data.ArrayNum == 0) {
        iVar13 = iVar10;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48[0].Data.AllocatorInstance.Data,iVar13);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
    }
    pFVar11 = ::FString::FString(local_48,L")");
    iVar13 = (pFVar11->Data).ArrayNum;
    iVar14 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar14 = iVar10;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar14);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// ToString @ 141806bd0

FString * __thiscall
UE::Math::TRotator<float>::ToString(TRotator<float> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"P=%f Y=%f R=%f");
  return __return_storage_ptr__;
}

// ToString @ 141806c20

FString * __thiscall
UE::Math::TRotator<double>::ToString(TRotator<double> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"P=%f Y=%f R=%f");
  return __return_storage_ptr__;
}

// UnrotateVector @ 14180b800

TVector<float> * __thiscall
UE::Math::TRotator<float>::UnrotateVector
          (TRotator<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TRotationMatrix<float> *pTVar12;
  TRotationMatrix<float> local_e8 [3];
  
  pTVar12 = TRotationMatrix<float>::TRotationMatrix<float>(local_e8,this);
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = *(float *)&pTVar12->field_0x10;
  fVar5 = *(float *)&pTVar12->field_0x14;
  fVar6 = *(float *)&pTVar12->field_0x20;
  fVar7 = *(float *)&pTVar12->field_0x24;
  fVar8 = *(float *)&pTVar12->field_0x18;
  fVar9 = *(float *)&pTVar12->field_0x28;
  fVar10 = *(float *)&pTVar12->field_0x1c;
  fVar11 = *(float *)&pTVar12->field_0x2c;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar2 * *(float *)&pTVar12->field_0x4 + fVar1 * *(float *)pTVar12 +
       fVar3 * *(float *)&pTVar12->field_0x8 + *(float *)&pTVar12->field_0xc * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar2 * fVar7 + fVar1 * fVar6 + fVar3 * fVar9 + fVar11 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar2 * fVar5 + fVar1 * fVar4 + fVar3 * fVar8 + fVar10 * 0.0;
  return __return_storage_ptr__;
}

// UnrotateVector @ 14180ba20

TVector<double> * __thiscall
UE::Math::TRotator<double>::UnrotateVector
          (TRotator<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TRotationMatrix<double> *pTVar12;
  TRotationMatrix<double> local_118 [2];
  
  pTVar12 = TRotationMatrix<double>::TRotationMatrix<double>(local_118,this);
  dVar10 = (param_1->field0_0x0)._s_0.X;
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = *(double *)&pTVar12->field_0x28;
  dVar3 = *(double *)&pTVar12->field_0x20;
  dVar4 = *(double *)&pTVar12->field_0x30;
  dVar5 = *(double *)&pTVar12->field_0x38;
  dVar6 = *(double *)&pTVar12->field_0x48;
  dVar7 = *(double *)&pTVar12->field_0x50;
  dVar8 = *(double *)&pTVar12->field_0x40;
  dVar9 = *(double *)&pTVar12->field_0x58;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       *(double *)&pTVar12->field_0x8 * dVar11 + *(double *)pTVar12 * dVar10 +
       *(double *)&pTVar12->field_0x10 * dVar1 + *(double *)&pTVar12->field_0x18 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar2 * dVar11 + dVar3 * dVar10 + dVar4 * dVar1 + dVar5 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar6 * dVar11 + dVar8 * dVar10 + dVar7 * dVar1 + dVar9 * 0.0;
  return __return_storage_ptr__;
}

// Vector @ 14180c9b0

TVector<float> * __thiscall
UE::Math::TRotator<float>::Vector(TRotator<float> *this,TVector<float> *__return_storage_ptr__)

{
  int iVar1;
  float fVar2;
  TRotator<float> *local_res8;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  FString local_48;
  undefined1 local_38 [16];
  
  if (((__real_4b000000 < (float)((uint)this->Pitch & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_4b000000 < (float)((uint)this->Yaw & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_4b000000 < (float)((uint)this->Roll & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (!`public:_struct_UE::Math::TVector<float>___cdecl_UE::Math::TRotator<float>::Vector(void)const___ptr64'
           ::__l8::OnceOnly) {
        ::FString::PrintfImpl(&local_48,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (
                  L"FRotator::Vector() provided with unreasonably large input values (%s), possible use of uninitialized variable?"
                  );
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        `public:_struct_UE::Math::TVector<float>___cdecl_UE::Math::TRotator<float>::Vector(void)const___ptr64'
        ::__l8::OnceOnly = true;
      }
    }
    else {
      local_res8 = this;
      `UE::Math::TRotator<float>::Vector'::__l13::<lambda_1>::operator()(&local_res8);
    }
  }
  fVar2 = FGenericPlatformMath::Fmod(this->Pitch,__real_43b40000);
  FMath::SinCos<float>(local_res20,local_res10,fVar2 * __real_3c8efa35);
  fVar2 = FGenericPlatformMath::Fmod(this->Yaw,__real_43b40000);
  FMath::SinCos<float>(local_res18,(float *)&local_res8,fVar2 * __real_3c8efa35);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_res18[0] * local_res10[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_res20[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_res8._0_4_ * local_res10[0];
  iVar1 = _finite((double)(local_res8._0_4_ * local_res10[0]));
  if (((iVar1 == 0) ||
      (iVar1 = _finite((double)(__return_storage_ptr__->field0_0x0)._s_0.Y), iVar1 == 0)) ||
     (iVar1 = _finite((double)(__return_storage_ptr__->field0_0x0)._s_0.Z), iVar1 == 0)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (`public:_struct_UE::Math::TVector<float>___cdecl_UE::Math::TRotator<float>::Vector(void)const___ptr64'
          ::__l19::OnceOnly == false) {
        ::FString::PrintfImpl((FString *)local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_48,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (L"FRotator::Vector() resulted in NaN/Inf with input: %s output: %s");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_38._0_8_);
        }
        `public:_struct_UE::Math::TVector<float>___cdecl_UE::Math::TRotator<float>::Vector(void)const___ptr64'
        ::__l19::OnceOnly = true;
      }
    }
    else {
      local_38._0_8_ = this;
      local_38._8_8_ = __return_storage_ptr__;
      `UE::Math::TRotator<float>::Vector'::__l24::<lambda_2>::operator()(local_38);
    }
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         TVector<float>::ForwardVector.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// Vector @ 14180cc50

TVector<double> * __thiscall
UE::Math::TRotator<double>::Vector(TRotator<double> *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  uint uVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  double _X;
  undefined1 auVar5 [16];
  TRotator<double> *local_res8;
  FString local_48;
  undefined1 local_38 [48];
  
  uVar3 = SUB84(this->Pitch,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)this->Pitch >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_4160000000000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_4160000000000000) ||
      (uVar3 = SUB84(this->Yaw,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar4 = (uint)((ulonglong)this->Yaw >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_4160000000000000 <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_4160000000000000)) ||
     (uVar3 = SUB84(this->Roll,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar4 = (uint)((ulonglong)this->Roll >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_4160000000000000 <= (double)CONCAT44(uVar4,uVar3) &&
     (double)CONCAT44(uVar4,uVar3) != __real_4160000000000000)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (!`public:_struct_UE::Math::TVector<double>___cdecl_UE::Math::TRotator<double>::Vector(void)const___ptr64'
           ::__l8::OnceOnly) {
        ::FString::PrintfImpl(&local_48,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (
                  L"FRotator::Vector() provided with unreasonably large input values (%s), possible use of uninitialized variable?"
                  );
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        `public:_struct_UE::Math::TVector<double>___cdecl_UE::Math::TRotator<double>::Vector(void)const___ptr64'
        ::__l8::OnceOnly = true;
      }
    }
    else {
      local_res8 = this;
      `UE::Math::TRotator<double>::Vector'::__l13::<lambda_1>::operator()(&local_res8);
    }
  }
  FGenericPlatformMath::Fmod(this->Pitch,__real_4076800000000000);
  __libm_sse2_sincos_();
  FGenericPlatformMath::Fmod(this->Yaw,__real_4076800000000000);
  __libm_sse2_sincos_();
  auVar5._4_4_ = extraout_XMM0_Db_00;
  auVar5._0_4_ = extraout_XMM0_Da_00;
  auVar5._8_4_ = extraout_XMM0_Dc_00;
  auVar5._12_4_ = extraout_XMM0_Dd_00;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  _X = auVar5._8_8_ * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
       (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  (__return_storage_ptr__->field0_0x0)._s_0.X = _X;
  iVar2 = _finite(_X);
  if (((iVar2 == 0) || (iVar2 = _finite((__return_storage_ptr__->field0_0x0)._s_0.Y), iVar2 == 0))
     || (iVar2 = _finite((__return_storage_ptr__->field0_0x0)._s_0.Z), iVar2 == 0)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (`public:_struct_UE::Math::TVector<double>___cdecl_UE::Math::TRotator<double>::Vector(void)const___ptr64'
          ::__l19::OnceOnly == false) {
        ::FString::PrintfImpl((FString *)local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_48,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (L"FRotator::Vector() resulted in NaN/Inf with input: %s output: %s");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_38._0_8_);
        }
        `public:_struct_UE::Math::TVector<double>___cdecl_UE::Math::TRotator<double>::Vector(void)const___ptr64'
        ::__l19::OnceOnly = true;
      }
    }
    else {
      local_38._0_8_ = this;
      local_38._8_8_ = __return_storage_ptr__;
      `UE::Math::TRotator<double>::Vector'::__l24::<lambda_2>::operator()(local_38);
    }
    uVar1 = TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = TVector<double>::ForwardVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// operator() @ 15047c3e0

bool __thiscall `UE::Math::TRotator<float>::Quaternion'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954520>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954520>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047c4e7;
    }
  }
  bVar4 = false;
LAB_15047c4e7:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15047c540

bool __thiscall `UE::Math::TRotator<double>::Quaternion'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954590>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954590>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047c625;
    }
  }
  bVar4 = false;
LAB_15047c625:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15047cbb0

bool __thiscall `UE::Math::TRotator<float>::Vector'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954427>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_18,L"P=%f Y=%f R=%f");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954427>,
                       &`public:___cdecl_`public:_struct_UE::Math::TVector<float>___cdecl_UE::Math::TRotator<float>::Vector(void)const___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047cc45;
    }
  }
  bVar2 = false;
LAB_15047cc45:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047cc80

bool __thiscall `UE::Math::TRotator<double>::Vector'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954427>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_18,L"P=%f Y=%f R=%f");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954427>,
                       &`public:___cdecl_`public:_struct_UE::Math::TVector<double>___cdecl_UE::Math::TRotator<double>::Vector(void)const___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047cd0c;
    }
  }
  bVar2 = false;
LAB_15047cd0c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047cd40

bool __thiscall `UE::Math::TRotator<float>::Vector'::__l24::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954444>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954444>,
                       &`public:___cdecl_`public:_struct_UE::Math::TVector<float>___cdecl_UE::Math::TRotator<float>::Vector(void)const___ptr64'::`24'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047ce39;
    }
  }
  bVar4 = false;
LAB_15047ce39:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15047ce90

bool __thiscall `UE::Math::TRotator<double>::Vector'::__l24::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954444>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954444>,
                       &`public:___cdecl_`public:_struct_UE::Math::TVector<double>___cdecl_UE::Math::TRotator<double>::Vector(void)const___ptr64'::`24'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047cf77;
    }
  }
  bVar4 = false;
LAB_15047cf77:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

