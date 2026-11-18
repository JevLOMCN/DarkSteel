// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 190

// CanHoldDoubleValueInternal @ 141f71aa0

bool __thiscall
TProperty_Numeric<unsigned_char>::CanHoldDoubleValueInternal
          (TProperty_Numeric<unsigned_char> *this,double param_1)

{
  if ((double)((int)param_1 & 0xff) == param_1) {
    return true;
  }
  return false;
}

// CanHoldDoubleValueInternal @ 141f71ad0

bool __thiscall
TProperty_Numeric<int>::CanHoldDoubleValueInternal(TProperty_Numeric<int> *this,double param_1)

{
  if ((double)(int)param_1 == param_1) {
    return true;
  }
  return false;
}

// CanHoldDoubleValueInternal @ 141f71af0

bool __thiscall
TProperty_Numeric<unsigned_int>::CanHoldDoubleValueInternal
          (TProperty_Numeric<unsigned_int> *this,double param_1)

{
  if ((double)((longlong)param_1 & 0xffffffff) == param_1) {
    return true;
  }
  return false;
}

// CanHoldDoubleValueInternal @ 141f71b20

bool __thiscall
TProperty_Numeric<float>::CanHoldDoubleValueInternal(TProperty_Numeric<float> *this,double param_1)

{
  if ((double)(float)param_1 == param_1) {
    return true;
  }
  return false;
}

// CanHoldDoubleValueInternal @ 141f71b40

bool __thiscall
TProperty_Numeric<double>::CanHoldDoubleValueInternal
          (TProperty_Numeric<double> *this,double param_1)

{
  return true;
}

// CanHoldDoubleValueInternal @ 141f71b50

bool __thiscall
TProperty_Numeric<__int64>::CanHoldDoubleValueInternal
          (TProperty_Numeric<__int64> *this,double param_1)

{
  if ((double)(longlong)param_1 == param_1) {
    return true;
  }
  return false;
}

// CanHoldDoubleValueInternal @ 141f71b70

bool __thiscall
TProperty_Numeric<unsigned___int64>::CanHoldDoubleValueInternal
          (TProperty_Numeric<unsigned___int64> *this,double param_1)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = 0;
  dVar2 = param_1;
  if ((__real_43e0000000000000 <= param_1) &&
     (dVar2 = param_1 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  if ((double)(ulonglong)((longlong)dVar2 + lVar1) == param_1) {
    return true;
  }
  return false;
}

// CanHoldSignedValueInternal @ 141f71c10

bool __thiscall
TProperty_Numeric<unsigned_char>::CanHoldSignedValueInternal
          (TProperty_Numeric<unsigned_char> *this,long64 param_1)

{
  return (param_1 & 0xffU) == param_1;
}

// CanHoldSignedValueInternal @ 141f71c20

bool __thiscall
TProperty_Numeric<int>::CanHoldSignedValueInternal(TProperty_Numeric<int> *this,long64 param_1)

{
  return (int)param_1 == param_1;
}

// CanHoldSignedValueInternal @ 141f71c30

bool __thiscall
TProperty_Numeric<unsigned_int>::CanHoldSignedValueInternal
          (TProperty_Numeric<unsigned_int> *this,long64 param_1)

{
  return (param_1 & 0xffffffffU) == param_1;
}

// CanHoldSignedValueInternal @ 141f71c40

bool __thiscall
TProperty_Numeric<float>::CanHoldSignedValueInternal(TProperty_Numeric<float> *this,long64 param_1)

{
  return (longlong)(float)param_1 == param_1;
}

// CanHoldSignedValueInternal @ 141f71c60

bool __thiscall
TProperty_Numeric<double>::CanHoldSignedValueInternal
          (TProperty_Numeric<double> *this,long64 param_1)

{
  return (longlong)(double)param_1 == param_1;
}

// CanHoldSignedValueInternal @ 141f71c80

bool __thiscall
TProperty_Numeric<__int64>::CanHoldSignedValueInternal
          (TProperty_Numeric<__int64> *this,long64 param_1)

{
  return true;
}

// CanHoldSignedValueInternal @ 141f71c90

bool __thiscall
TProperty_Numeric<unsigned___int64>::CanHoldSignedValueInternal
          (TProperty_Numeric<unsigned___int64> *this,long64 param_1)

{
  return true;
}

// CanHoldUnsignedValueInternal @ 141f71cd0

bool __thiscall
TProperty_Numeric<unsigned_char>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<unsigned_char> *this,ulong64 param_1)

{
  return (param_1 & 0xff) == param_1;
}

// CanHoldUnsignedValueInternal @ 141f71ce0

bool __thiscall
TProperty_Numeric<int>::CanHoldUnsignedValueInternal(TProperty_Numeric<int> *this,ulong64 param_1)

{
  return (longlong)(int)param_1 == param_1;
}

// CanHoldUnsignedValueInternal @ 141f71cf0

bool __thiscall
TProperty_Numeric<unsigned_int>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<unsigned_int> *this,ulong64 param_1)

{
  return (param_1 & 0xffffffff) == param_1;
}

// CanHoldUnsignedValueInternal @ 141f71d00

bool __thiscall
TProperty_Numeric<float>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<float> *this,ulong64 param_1)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = (float)param_1;
  lVar1 = 0;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)fVar2 + lVar1 == param_1;
}

// CanHoldUnsignedValueInternal @ 141f71d70

bool __thiscall
TProperty_Numeric<double>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<double> *this,ulong64 param_1)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)param_1;
  lVar1 = 0;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)dVar2 + lVar1 == param_1;
}

// CanHoldUnsignedValueInternal @ 141f71de0

bool __thiscall
TProperty_Numeric<__int64>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<__int64> *this,ulong64 param_1)

{
  return true;
}

// CanHoldUnsignedValueInternal @ 141f71df0

bool __thiscall
TProperty_Numeric<unsigned___int64>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<unsigned___int64> *this,ulong64 param_1)

{
  return true;
}

// ConvertFromType @ 141f73750

EConvertFromTypeResult __thiscall
TProperty_Numeric<unsigned_char>::ConvertFromType
          (TProperty_Numeric<unsigned_char> *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2,uchar *param_3,UStruct *param_4,uchar *param_5)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EConvertFromTypeResult EVar5;
  EName *pEVar6;
  long64 lVar7;
  TConvertAndSet<signed_char,unsigned_char> local_res10 [8];
  TConvertAndSet<short,unsigned_char> local_28;
  TConvertAndSet<int,unsigned_char> local_27;
  TConvertAndSet<__int64,unsigned_char> local_26;
  TConvertAndSet<signed_char,unsigned_char> local_25;
  TConvertAndSet<unsigned_short,unsigned_char> local_24;
  TConvertAndSet<unsigned_int,unsigned_char> local_23;
  TConvertAndSet<unsigned___int64,unsigned_char> local_22;
  TConvertAndSet<float,unsigned_char> local_21;
  TConvertAndSet<double,unsigned_char> local_20 [4];
  FPropertyTypeName local_1c;
  
  pEVar6 = ::FName::ToEName(&param_1->Type);
  if ((pEVar6 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_141f737b0_caseD_5:
    EVar5 = UseSerializeItem;
  }
  else {
    switch(*pEVar6) {
    case ByteProperty:
      local_1c.Index = (param_1->TypeName).Index;
      iVar4 = UE::FPropertyTypeName::GetParameterCount(&local_1c);
      if (iVar4 < 1) {
        TConvertAndSet<signed_char,unsigned_char>::TConvertAndSet<signed_char,unsigned_char>
                  (&local_25,this,param_2,param_3,param_1);
        return Serialized;
      }
    case EnumProperty:
      lVar7 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      param_3[(longlong)*(int *)&this->field_0x44 +
              (longlong)iVar4 * (longlong)*(int *)&this->field_0x34] = (uchar)lVar7;
      EVar5 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,unsigned_char>::TConvertAndSet<int,unsigned_char>
                (&local_27,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case BoolProperty:
      iVar4 = param_1->ArrayIndex;
      uVar1 = param_1->BoolVal;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      param_3[(longlong)*(int *)&this->field_0x44 +
              (longlong)iVar4 * (longlong)*(int *)&this->field_0x34] = uVar1;
      EVar5 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,unsigned_char>::TConvertAndSet<float,unsigned_char>
                (&local_21,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    default:
      goto switchD_141f737b0_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,unsigned_char>::TConvertAndSet<double,unsigned_char>
                (local_20,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,unsigned_char>::TConvertAndSet<__int64,unsigned_char>
                (&local_26,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,unsigned_char>::TConvertAndSet<short,unsigned_char>
                (&local_28,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,unsigned_char>::TConvertAndSet<signed_char,unsigned_char>
                (local_res10,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,unsigned_char>::TConvertAndSet<unsigned___int64,unsigned_char>
                (&local_22,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,unsigned_char>::TConvertAndSet<unsigned_int,unsigned_char>
                (&local_23,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,unsigned_char>::TConvertAndSet<unsigned_short,unsigned_char>
                (&local_24,this,param_2,param_3,param_1);
      EVar5 = Converted;
    }
  }
  return EVar5;
}

// ConvertFromType @ 141f73ac0

EConvertFromTypeResult __thiscall
TProperty_Numeric<int>::ConvertFromType
          (TProperty_Numeric<int> *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EConvertFromTypeResult EVar5;
  EName *pEVar6;
  long64 lVar7;
  TConvertAndSet<signed_char,int> local_res10 [8];
  TConvertAndSet<short,int> local_28;
  TConvertAndSet<int,int> local_27;
  TConvertAndSet<__int64,int> local_26;
  TConvertAndSet<signed_char,int> local_25;
  TConvertAndSet<unsigned_short,int> local_24;
  TConvertAndSet<unsigned_int,int> local_23;
  TConvertAndSet<unsigned___int64,int> local_22;
  TConvertAndSet<float,int> local_21;
  TConvertAndSet<double,int> local_20 [4];
  FPropertyTypeName local_1c;
  
  pEVar6 = ::FName::ToEName(&param_1->Type);
  if ((pEVar6 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_141f73b20_caseD_5:
    EVar5 = UseSerializeItem;
  }
  else {
    switch(*pEVar6) {
    case ByteProperty:
      local_1c.Index = (param_1->TypeName).Index;
      iVar4 = UE::FPropertyTypeName::GetParameterCount(&local_1c);
      if (iVar4 < 1) {
        TConvertAndSet<signed_char,int>::TConvertAndSet<signed_char,int>
                  (&local_25,this,param_2,param_3,param_1);
        return Converted;
      }
    case EnumProperty:
      lVar7 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(int *)(param_3 +
              (longlong)*(int *)&this->field_0x44 +
              (longlong)iVar4 * (longlong)*(int *)&this->field_0x34) = (int)lVar7;
      EVar5 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,int>::TConvertAndSet<int,int>(&local_27,this,param_2,param_3,param_1);
      EVar5 = Serialized;
      break;
    case BoolProperty:
      iVar4 = param_1->ArrayIndex;
      bVar1 = param_1->BoolVal;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)(param_3 +
               (longlong)*(int *)&this->field_0x44 +
               (longlong)iVar4 * (longlong)*(int *)&this->field_0x34) = (uint)bVar1;
      EVar5 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,int>::TConvertAndSet<float,int>(&local_21,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    default:
      goto switchD_141f73b20_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,int>::TConvertAndSet<double,int>(local_20,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,int>::TConvertAndSet<__int64,int>
                (&local_26,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,int>::TConvertAndSet<short,int>(&local_28,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,int>::TConvertAndSet<signed_char,int>
                (local_res10,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,int>::TConvertAndSet<unsigned___int64,int>
                (&local_22,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,int>::TConvertAndSet<unsigned_int,int>
                (&local_23,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,int>::TConvertAndSet<unsigned_short,int>
                (&local_24,this,param_2,param_3,param_1);
      EVar5 = Converted;
    }
  }
  return EVar5;
}

// ConvertFromType @ 141f73e30

EConvertFromTypeResult __thiscall
TProperty_Numeric<unsigned_int>::ConvertFromType
          (TProperty_Numeric<unsigned_int> *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2,uchar *param_3,UStruct *param_4,uchar *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EConvertFromTypeResult EVar5;
  EName *pEVar6;
  long64 lVar7;
  TConvertAndSet<signed_char,unsigned_int> local_res10 [8];
  TConvertAndSet<short,unsigned_int> local_28;
  TConvertAndSet<int,unsigned_int> local_27;
  TConvertAndSet<__int64,unsigned_int> local_26;
  TConvertAndSet<signed_char,unsigned_int> local_25;
  TConvertAndSet<unsigned_short,unsigned_int> local_24;
  TConvertAndSet<unsigned_int,unsigned_int> local_23;
  TConvertAndSet<unsigned___int64,unsigned_int> local_22;
  TConvertAndSet<float,unsigned_int> local_21;
  TConvertAndSet<double,unsigned_int> local_20 [4];
  FPropertyTypeName local_1c;
  
  pEVar6 = ::FName::ToEName(&param_1->Type);
  if ((pEVar6 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_141f73e90_caseD_5:
    EVar5 = UseSerializeItem;
  }
  else {
    switch(*pEVar6) {
    case ByteProperty:
      local_1c.Index = (param_1->TypeName).Index;
      iVar4 = UE::FPropertyTypeName::GetParameterCount(&local_1c);
      if (iVar4 < 1) {
        TConvertAndSet<signed_char,unsigned_int>::TConvertAndSet<signed_char,unsigned_int>
                  (&local_25,this,param_2,param_3,param_1);
        return Converted;
      }
    case EnumProperty:
      lVar7 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(int *)(param_3 +
              (longlong)*(int *)&this->field_0x44 +
              (longlong)iVar4 * (longlong)*(int *)&this->field_0x34) = (int)lVar7;
      EVar5 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,unsigned_int>::TConvertAndSet<int,unsigned_int>
                (&local_27,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case BoolProperty:
      iVar4 = param_1->ArrayIndex;
      bVar1 = param_1->BoolVal;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)(param_3 +
               (longlong)*(int *)&this->field_0x44 +
               (longlong)iVar4 * (longlong)*(int *)&this->field_0x34) = (uint)bVar1;
      EVar5 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,unsigned_int>::TConvertAndSet<float,unsigned_int>
                (&local_21,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    default:
      goto switchD_141f73e90_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,unsigned_int>::TConvertAndSet<double,unsigned_int>
                (local_20,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,unsigned_int>::TConvertAndSet<__int64,unsigned_int>
                (&local_26,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,unsigned_int>::TConvertAndSet<short,unsigned_int>
                (&local_28,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,unsigned_int>::TConvertAndSet<signed_char,unsigned_int>
                (local_res10,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,unsigned_int>::TConvertAndSet<unsigned___int64,unsigned_int>
                (&local_22,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,unsigned_int>::TConvertAndSet<unsigned_int,unsigned_int>
                (&local_23,this,param_2,param_3,param_1);
      EVar5 = Serialized;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,unsigned_int>::TConvertAndSet<unsigned_short,unsigned_int>
                (&local_24,this,param_2,param_3,param_1);
      EVar5 = Converted;
    }
  }
  return EVar5;
}

// ConvertFromType @ 141f741a0

EConvertFromTypeResult __thiscall
TProperty_Numeric<float>::ConvertFromType
          (TProperty_Numeric<float> *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EConvertFromTypeResult EVar5;
  EName *pEVar6;
  long64 lVar7;
  TConvertAndSet<signed_char,float> local_res10 [8];
  TConvertAndSet<short,float> local_38;
  TConvertAndSet<int,float> local_37;
  TConvertAndSet<__int64,float> local_36;
  TConvertAndSet<signed_char,float> local_35;
  TConvertAndSet<unsigned_short,float> local_34;
  TConvertAndSet<unsigned_int,float> local_33;
  TConvertAndSet<unsigned___int64,float> local_32;
  TConvertAndSet<float,float> local_31;
  TConvertAndSet<double,float> local_30 [4];
  FPropertyTypeName local_2c [5];
  
  pEVar6 = ::FName::ToEName(&param_1->Type);
  if ((pEVar6 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_141f74200_caseD_5:
    EVar5 = UseSerializeItem;
  }
  else {
    switch(*pEVar6) {
    case ByteProperty:
      local_2c[0].Index = (param_1->TypeName).Index;
      iVar4 = UE::FPropertyTypeName::GetParameterCount(local_2c);
      if (iVar4 < 1) {
        TConvertAndSet<signed_char,float>::TConvertAndSet<signed_char,float>
                  (&local_35,this,param_2,param_3,param_1);
        return Converted;
      }
    case EnumProperty:
      lVar7 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(float *)(param_3 +
                (longlong)*(int *)&this->field_0x44 +
                (longlong)iVar4 * (longlong)*(int *)&this->field_0x34) = (float)lVar7;
      EVar5 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,float>::TConvertAndSet<int,float>(&local_37,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case BoolProperty:
      bVar1 = param_1->BoolVal;
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(float *)(param_3 +
                (longlong)*(int *)&this->field_0x44 +
                (longlong)iVar4 * (longlong)*(int *)&this->field_0x34) = (float)bVar1;
      EVar5 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,float>::TConvertAndSet<float,float>
                (&local_31,this,param_2,param_3,param_1);
      EVar5 = Serialized;
      break;
    default:
      goto switchD_141f74200_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,float>::TConvertAndSet<double,float>
                (local_30,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,float>::TConvertAndSet<__int64,float>
                (&local_36,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,float>::TConvertAndSet<short,float>
                (&local_38,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,float>::TConvertAndSet<signed_char,float>
                (local_res10,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,float>::TConvertAndSet<unsigned___int64,float>
                (&local_32,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,float>::TConvertAndSet<unsigned_int,float>
                (&local_33,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,float>::TConvertAndSet<unsigned_short,float>
                (&local_34,this,param_2,param_3,param_1);
      EVar5 = Converted;
    }
  }
  return EVar5;
}

// ConvertFromType @ 141f74530

EConvertFromTypeResult __thiscall
TProperty_Numeric<double>::ConvertFromType
          (TProperty_Numeric<double> *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EConvertFromTypeResult EVar5;
  EName *pEVar6;
  long64 lVar7;
  TConvertAndSet<signed_char,double> local_res10 [8];
  TConvertAndSet<short,double> local_38;
  TConvertAndSet<int,double> local_37;
  TConvertAndSet<__int64,double> local_36;
  TConvertAndSet<signed_char,double> local_35;
  TConvertAndSet<unsigned_short,double> local_34;
  TConvertAndSet<unsigned_int,double> local_33;
  TConvertAndSet<unsigned___int64,double> local_32;
  TConvertAndSet<float,double> local_31;
  TConvertAndSet<double,double> local_30 [4];
  FPropertyTypeName local_2c [5];
  
  pEVar6 = ::FName::ToEName(&param_1->Type);
  if ((pEVar6 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_141f74590_caseD_5:
    EVar5 = UseSerializeItem;
  }
  else {
    switch(*pEVar6) {
    case ByteProperty:
      local_2c[0].Index = (param_1->TypeName).Index;
      iVar4 = UE::FPropertyTypeName::GetParameterCount(local_2c);
      if (iVar4 < 1) {
        TConvertAndSet<signed_char,double>::TConvertAndSet<signed_char,double>
                  (&local_35,this,param_2,param_3,param_1);
        return Converted;
      }
    case EnumProperty:
      lVar7 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(double *)
       (param_3 +
       (longlong)*(int *)&this->field_0x44 + (longlong)iVar4 * (longlong)*(int *)&this->field_0x34)
           = (double)lVar7;
      EVar5 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,double>::TConvertAndSet<int,double>(&local_37,this,param_2,param_3,param_1)
      ;
      EVar5 = Converted;
      break;
    case BoolProperty:
      bVar1 = param_1->BoolVal;
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(double *)
       (param_3 +
       (longlong)*(int *)&this->field_0x44 + (longlong)iVar4 * (longlong)*(int *)&this->field_0x34)
           = (double)bVar1;
      EVar5 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,double>::TConvertAndSet<float,double>
                (&local_31,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    default:
      goto switchD_141f74590_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,double>::TConvertAndSet<double,double>
                (local_30,this,param_2,param_3,param_1);
      EVar5 = Serialized;
      break;
    case Int64Property:
      TConvertAndSet<__int64,double>::TConvertAndSet<__int64,double>
                (&local_36,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,double>::TConvertAndSet<short,double>
                (&local_38,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,double>::TConvertAndSet<signed_char,double>
                (local_res10,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,double>::TConvertAndSet<unsigned___int64,double>
                (&local_32,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,double>::TConvertAndSet<unsigned_int,double>
                (&local_33,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,double>::TConvertAndSet<unsigned_short,double>
                (&local_34,this,param_2,param_3,param_1);
      EVar5 = Converted;
    }
  }
  return EVar5;
}

// ConvertFromType @ 141f748c0

EConvertFromTypeResult __thiscall
TProperty_Numeric<__int64>::ConvertFromType
          (TProperty_Numeric<__int64> *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EConvertFromTypeResult EVar5;
  EName *pEVar6;
  long64 lVar7;
  TConvertAndSet<signed_char,__int64> local_res10 [8];
  TConvertAndSet<short,__int64> local_28;
  TConvertAndSet<int,__int64> local_27;
  TConvertAndSet<__int64,__int64> local_26;
  TConvertAndSet<signed_char,__int64> local_25;
  TConvertAndSet<unsigned_short,__int64> local_24;
  TConvertAndSet<unsigned_int,__int64> local_23;
  TConvertAndSet<unsigned___int64,__int64> local_22;
  TConvertAndSet<float,__int64> local_21;
  TConvertAndSet<double,__int64> local_20 [4];
  FPropertyTypeName local_1c;
  
  pEVar6 = ::FName::ToEName(&param_1->Type);
  if ((pEVar6 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_141f74920_caseD_5:
    EVar5 = UseSerializeItem;
  }
  else {
    switch(*pEVar6) {
    case ByteProperty:
      local_1c.Index = (param_1->TypeName).Index;
      iVar4 = UE::FPropertyTypeName::GetParameterCount(&local_1c);
      if (iVar4 < 1) {
        TConvertAndSet<signed_char,__int64>::TConvertAndSet<signed_char,__int64>
                  (&local_25,this,param_2,param_3,param_1);
        return Converted;
      }
    case EnumProperty:
      lVar7 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(long64 *)
       (param_3 +
       (longlong)*(int *)&this->field_0x44 + (longlong)iVar4 * (longlong)*(int *)&this->field_0x34)
           = lVar7;
      EVar5 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,__int64>::TConvertAndSet<int,__int64>
                (&local_27,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case BoolProperty:
      iVar4 = param_1->ArrayIndex;
      bVar1 = param_1->BoolVal;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(ulonglong *)
       (param_3 +
       (longlong)*(int *)&this->field_0x44 + (longlong)iVar4 * (longlong)*(int *)&this->field_0x34)
           = (ulonglong)bVar1;
      EVar5 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,__int64>::TConvertAndSet<float,__int64>
                (&local_21,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    default:
      goto switchD_141f74920_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,__int64>::TConvertAndSet<double,__int64>
                (local_20,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,__int64>::TConvertAndSet<__int64,__int64>
                (&local_26,this,param_2,param_3,param_1);
      EVar5 = Serialized;
      break;
    case Int16Property:
      TConvertAndSet<short,__int64>::TConvertAndSet<short,__int64>
                (&local_28,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,__int64>::TConvertAndSet<signed_char,__int64>
                (local_res10,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,__int64>::TConvertAndSet<unsigned___int64,__int64>
                (&local_22,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,__int64>::TConvertAndSet<unsigned_int,__int64>
                (&local_23,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,__int64>::TConvertAndSet<unsigned_short,__int64>
                (&local_24,this,param_2,param_3,param_1);
      EVar5 = Converted;
    }
  }
  return EVar5;
}

// ConvertFromType @ 141f74c30

EConvertFromTypeResult __thiscall
TProperty_Numeric<unsigned___int64>::ConvertFromType
          (TProperty_Numeric<unsigned___int64> *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2,uchar *param_3,UStruct *param_4,uchar *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EConvertFromTypeResult EVar5;
  EName *pEVar6;
  long64 lVar7;
  TConvertAndSet<signed_char,unsigned___int64> local_res10 [8];
  TConvertAndSet<short,unsigned___int64> local_28;
  TConvertAndSet<int,unsigned___int64> local_27;
  TConvertAndSet<__int64,unsigned___int64> local_26;
  TConvertAndSet<signed_char,unsigned___int64> local_25;
  TConvertAndSet<unsigned_short,unsigned___int64> local_24;
  TConvertAndSet<unsigned_int,unsigned___int64> local_23;
  TConvertAndSet<unsigned___int64,unsigned___int64> local_22;
  TConvertAndSet<float,unsigned___int64> local_21;
  TConvertAndSet<double,unsigned___int64> local_20 [4];
  FPropertyTypeName local_1c;
  
  pEVar6 = ::FName::ToEName(&param_1->Type);
  if ((pEVar6 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_141f74c90_caseD_5:
    EVar5 = UseSerializeItem;
  }
  else {
    switch(*pEVar6) {
    case ByteProperty:
      local_1c.Index = (param_1->TypeName).Index;
      iVar4 = UE::FPropertyTypeName::GetParameterCount(&local_1c);
      if (iVar4 < 1) {
        TConvertAndSet<signed_char,unsigned___int64>::TConvertAndSet<signed_char,unsigned___int64>
                  (&local_25,this,param_2,param_3,param_1);
        return Converted;
      }
    case EnumProperty:
      lVar7 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar4 = param_1->ArrayIndex;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(long64 *)
       (param_3 +
       (longlong)*(int *)&this->field_0x44 + (longlong)iVar4 * (longlong)*(int *)&this->field_0x34)
           = lVar7;
      EVar5 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,unsigned___int64>::TConvertAndSet<int,unsigned___int64>
                (&local_27,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case BoolProperty:
      iVar4 = param_1->ArrayIndex;
      bVar1 = param_1->BoolVal;
      if (((iVar4 < 0) || (*(int *)&this->field_0x30 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(ulonglong *)
       (param_3 +
       (longlong)*(int *)&this->field_0x44 + (longlong)iVar4 * (longlong)*(int *)&this->field_0x34)
           = (ulonglong)bVar1;
      EVar5 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,unsigned___int64>::TConvertAndSet<float,unsigned___int64>
                (&local_21,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    default:
      goto switchD_141f74c90_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,unsigned___int64>::TConvertAndSet<double,unsigned___int64>
                (local_20,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,unsigned___int64>::TConvertAndSet<__int64,unsigned___int64>
                (&local_26,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,unsigned___int64>::TConvertAndSet<short,unsigned___int64>
                (&local_28,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,unsigned___int64>::TConvertAndSet<signed_char,unsigned___int64>
                (local_res10,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,unsigned___int64>::
      TConvertAndSet<unsigned___int64,unsigned___int64>(&local_22,this,param_2,param_3,param_1);
      EVar5 = Serialized;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,unsigned___int64>::TConvertAndSet<unsigned_int,unsigned___int64>
                (&local_23,this,param_2,param_3,param_1);
      EVar5 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,unsigned___int64>::
      TConvertAndSet<unsigned_short,unsigned___int64>(&local_24,this,param_2,param_3,param_1);
      EVar5 = Converted;
    }
  }
  return EVar5;
}

// GetFloatingPointPropertyValue @ 141f81d90

double __thiscall
TProperty_Numeric<unsigned_char>::GetFloatingPointPropertyValue
          (TProperty_Numeric<unsigned_char> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x859,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)*(byte *)param_1;
}

// GetFloatingPointPropertyValue @ 141f81de0

double __thiscall
TProperty_Numeric<int>::GetFloatingPointPropertyValue(TProperty_Numeric<int> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x859,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)*(int *)param_1;
}

// GetFloatingPointPropertyValue @ 141f81e30

double __thiscall
TProperty_Numeric<unsigned_int>::GetFloatingPointPropertyValue
          (TProperty_Numeric<unsigned_int> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x859,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)*(uint *)param_1;
}

// GetFloatingPointPropertyValue @ 141f81e80

double __thiscall
TProperty_Numeric<float>::GetFloatingPointPropertyValue
          (TProperty_Numeric<float> *this,void *param_1)

{
  return (double)*(float *)param_1;
}

// GetFloatingPointPropertyValue @ 141f81e90

double __thiscall
TProperty_Numeric<double>::GetFloatingPointPropertyValue
          (TProperty_Numeric<double> *this,void *param_1)

{
  return *(double *)param_1;
}

// GetFloatingPointPropertyValue @ 141f81ea0

double __thiscall
TProperty_Numeric<__int64>::GetFloatingPointPropertyValue
          (TProperty_Numeric<__int64> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x859,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)*(longlong *)param_1;
}

// GetFloatingPointPropertyValue @ 141f81ef0

double __thiscall
TProperty_Numeric<unsigned___int64>::GetFloatingPointPropertyValue
          (TProperty_Numeric<unsigned___int64> *this,void *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x859,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    dVar4 = (double)(*pcVar2)();
    return dVar4;
  }
  uVar1 = *(ulonglong *)param_1;
  if (-1 < (longlong)uVar1) {
    return (double)(longlong)uVar1;
  }
  return (double)uVar1;
}

// GetNumericPropertyValueToString @ 141f827e0

FString * __thiscall
TProperty_Numeric<unsigned_char>::GetNumericPropertyValueToString
          (TProperty_Numeric<unsigned_char> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString @ 141f82810

FString * __thiscall
TProperty_Numeric<int>::GetNumericPropertyValueToString
          (TProperty_Numeric<int> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString @ 141f82840

FString * __thiscall
TProperty_Numeric<unsigned_int>::GetNumericPropertyValueToString
          (TProperty_Numeric<unsigned_int> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString @ 141f82870

FString * __thiscall
TProperty_Numeric<float>::GetNumericPropertyValueToString
          (TProperty_Numeric<float> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString @ 141f828b0

FString * __thiscall
TProperty_Numeric<double>::GetNumericPropertyValueToString
          (TProperty_Numeric<double> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString @ 141f828f0

FString * __thiscall
TProperty_Numeric<__int64>::GetNumericPropertyValueToString
          (TProperty_Numeric<__int64> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString @ 141f82920

FString * __thiscall
TProperty_Numeric<unsigned___int64>::GetNumericPropertyValueToString
          (TProperty_Numeric<unsigned___int64> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llu");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 141f82950

FString * __thiscall
TProperty_Numeric<unsigned_char>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<unsigned_char> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 141f829a0

FString * __thiscall
TProperty_Numeric<int>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<int> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 141f829f0

FString * __thiscall
TProperty_Numeric<unsigned_int>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<unsigned_int> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 141f82a40

FString * __thiscall
TProperty_Numeric<float>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<float> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 141f82a90

FString * __thiscall
TProperty_Numeric<double>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<double> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 141f82ae0

FString * __thiscall
TProperty_Numeric<__int64>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<__int64> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 141f82b30

FString * __thiscall
TProperty_Numeric<unsigned___int64>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<unsigned___int64> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llu");
  return __return_storage_ptr__;
}

// GetSignedIntPropertyValue @ 141f86950

long64 __thiscall
TProperty_Numeric<unsigned_char>::GetSignedIntPropertyValue
          (TProperty_Numeric<unsigned_char> *this,void *param_1)

{
  return (ulonglong)*(byte *)param_1;
}

// GetSignedIntPropertyValue @ 141f86960

long64 __thiscall
TProperty_Numeric<int>::GetSignedIntPropertyValue(TProperty_Numeric<int> *this,void *param_1)

{
  return (longlong)*(int *)param_1;
}

// GetSignedIntPropertyValue @ 141f86970

long64 __thiscall
TProperty_Numeric<unsigned_int>::GetSignedIntPropertyValue
          (TProperty_Numeric<unsigned_int> *this,void *param_1)

{
  return (ulonglong)*(uint *)param_1;
}

// GetSignedIntPropertyValue @ 141f86980

long64 __thiscall
TProperty_Numeric<float>::GetSignedIntPropertyValue(TProperty_Numeric<float> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x841,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return (longlong)*(float *)param_1;
}

// GetSignedIntPropertyValue @ 141f869c0

long64 __thiscall
TProperty_Numeric<double>::GetSignedIntPropertyValue(TProperty_Numeric<double> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x841,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return (longlong)*(double *)param_1;
}

// GetSignedIntPropertyValue @ 141f86a00

long64 __thiscall
TProperty_Numeric<__int64>::GetSignedIntPropertyValue
          (TProperty_Numeric<__int64> *this,void *param_1)

{
  return *(long64 *)param_1;
}

// GetSignedIntPropertyValue @ 141f86a10

long64 __thiscall
TProperty_Numeric<unsigned___int64>::GetSignedIntPropertyValue
          (TProperty_Numeric<unsigned___int64> *this,void *param_1)

{
  return *(long64 *)param_1;
}

// GetSignedIntPropertyValue_InContainer @ 141f86a20

long64 __thiscall
TProperty_Numeric<unsigned_char>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<unsigned_char> *this,void *param_1)

{
  byte local_res18 [16];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (ulonglong)local_res18[0];
}

// GetSignedIntPropertyValue_InContainer @ 141f86a50

long64 __thiscall
TProperty_Numeric<int>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<int> *this,void *param_1)

{
  int local_res18 [4];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (longlong)local_res18[0];
}

// GetSignedIntPropertyValue_InContainer @ 141f86a80

long64 __thiscall
TProperty_Numeric<unsigned_int>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<unsigned_int> *this,void *param_1)

{
  uint local_res18 [4];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (ulonglong)local_res18[0];
}

// GetSignedIntPropertyValue_InContainer @ 141f86ab0

long64 __thiscall
TProperty_Numeric<float>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<float> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  float local_res18 [4];
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x846,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  local_res18[0] = 0.0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (longlong)local_res18[0];
}

// GetSignedIntPropertyValue_InContainer @ 141f86b20

long64 __thiscall
TProperty_Numeric<double>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<double> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  double local_res18 [2];
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x846,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  local_res18[0] = 0.0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (longlong)local_res18[0];
}

// GetSignedIntPropertyValue_InContainer @ 141f86b90

long64 __thiscall
TProperty_Numeric<__int64>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<__int64> *this,void *param_1)

{
  long64 local_res18 [2];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return local_res18[0];
}

// GetSignedIntPropertyValue_InContainer @ 141f86bc0

long64 __thiscall
TProperty_Numeric<unsigned___int64>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<unsigned___int64> *this,void *param_1)

{
  long64 local_res18 [2];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return local_res18[0];
}

// GetUnsignedIntPropertyValue @ 141f878c0

ulong64 __thiscall
TProperty_Numeric<unsigned_char>::GetUnsignedIntPropertyValue
          (TProperty_Numeric<unsigned_char> *this,void *param_1)

{
  return (ulonglong)*(byte *)param_1;
}

// GetUnsignedIntPropertyValue @ 141f878d0

ulong64 __thiscall
TProperty_Numeric<int>::GetUnsignedIntPropertyValue(TProperty_Numeric<int> *this,void *param_1)

{
  return (longlong)*(int *)param_1;
}

// GetUnsignedIntPropertyValue @ 141f878e0

ulong64 __thiscall
TProperty_Numeric<unsigned_int>::GetUnsignedIntPropertyValue
          (TProperty_Numeric<unsigned_int> *this,void *param_1)

{
  return (ulonglong)*(uint *)param_1;
}

// GetUnsignedIntPropertyValue @ 141f878f0

ulong64 __thiscall
TProperty_Numeric<float>::GetUnsignedIntPropertyValue(TProperty_Numeric<float> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  longlong lVar4;
  float fVar5;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x84d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  fVar5 = *(float *)param_1;
  lVar4 = 0;
  if ((__real_5f000000 <= fVar5) && (fVar5 = fVar5 - __real_5f000000, fVar5 < __real_5f000000)) {
    lVar4 = -0x8000000000000000;
  }
  return (longlong)fVar5 + lVar4;
}

// GetUnsignedIntPropertyValue @ 141f87960

ulong64 __thiscall
TProperty_Numeric<double>::GetUnsignedIntPropertyValue
          (TProperty_Numeric<double> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  longlong lVar4;
  double dVar5;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x84d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  dVar5 = *(double *)param_1;
  lVar4 = 0;
  if ((__real_43e0000000000000 <= dVar5) &&
     (dVar5 = dVar5 - __real_43e0000000000000, dVar5 < __real_43e0000000000000)) {
    lVar4 = -0x8000000000000000;
  }
  return (longlong)dVar5 + lVar4;
}

// GetUnsignedIntPropertyValue @ 141f879d0

ulong64 __thiscall
TProperty_Numeric<__int64>::GetUnsignedIntPropertyValue
          (TProperty_Numeric<__int64> *this,void *param_1)

{
  return *(ulong64 *)param_1;
}

// GetUnsignedIntPropertyValue @ 141f879e0

ulong64 __thiscall
TProperty_Numeric<unsigned___int64>::GetUnsignedIntPropertyValue
          (TProperty_Numeric<unsigned___int64> *this,void *param_1)

{
  return *(ulong64 *)param_1;
}

// GetUnsignedIntPropertyValue_InContainer @ 141f879f0

ulong64 __thiscall
TProperty_Numeric<unsigned_char>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<unsigned_char> *this,void *param_1)

{
  byte local_res18 [16];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (ulonglong)local_res18[0];
}

// GetUnsignedIntPropertyValue_InContainer @ 141f87a20

ulong64 __thiscall
TProperty_Numeric<int>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<int> *this,void *param_1)

{
  int local_res18 [4];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (longlong)local_res18[0];
}

// GetUnsignedIntPropertyValue_InContainer @ 141f87a50

ulong64 __thiscall
TProperty_Numeric<unsigned_int>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<unsigned_int> *this,void *param_1)

{
  uint local_res18 [4];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (ulonglong)local_res18[0];
}

// GetUnsignedIntPropertyValue_InContainer @ 141f87a80

ulong64 __thiscall
TProperty_Numeric<float>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<float> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  longlong lVar4;
  float local_res18 [4];
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x852,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  local_res18[0] = 0.0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  lVar4 = 0;
  if ((__real_5f000000 <= local_res18[0]) &&
     (local_res18[0] = local_res18[0] - __real_5f000000, local_res18[0] < __real_5f000000)) {
    lVar4 = -0x8000000000000000;
  }
  return (longlong)local_res18[0] + lVar4;
}

// GetUnsignedIntPropertyValue_InContainer @ 141f87b20

ulong64 __thiscall
TProperty_Numeric<double>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<double> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  longlong lVar4;
  double local_res18 [2];
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x852,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  local_res18[0] = 0.0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  lVar4 = 0;
  if ((__real_43e0000000000000 <= local_res18[0]) &&
     (local_res18[0] = local_res18[0] - __real_43e0000000000000,
     local_res18[0] < __real_43e0000000000000)) {
    lVar4 = -0x8000000000000000;
  }
  return (longlong)local_res18[0] + lVar4;
}

// GetUnsignedIntPropertyValue_InContainer @ 141f87bc0

ulong64 __thiscall
TProperty_Numeric<__int64>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<__int64> *this,void *param_1)

{
  ulong64 local_res18 [2];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return local_res18[0];
}

// GetUnsignedIntPropertyValue_InContainer @ 141f87bf0

ulong64 __thiscall
TProperty_Numeric<unsigned___int64>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<unsigned___int64> *this,void *param_1)

{
  ulong64 local_res18 [2];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return local_res18[0];
}

// GetValueTypeHashInternal @ 141f8ac00

uint __thiscall
TProperty_Numeric<unsigned_char>::GetValueTypeHashInternal
          (TProperty_Numeric<unsigned_char> *this,void *param_1)

{
  return (uint)*(byte *)param_1;
}

// GetValueTypeHashInternal @ 141f8ac10

uint __thiscall
TProperty_Numeric<int>::GetValueTypeHashInternal(TProperty_Numeric<int> *this,void *param_1)

{
  return *(uint *)param_1;
}

// GetValueTypeHashInternal @ 141f8ac20

uint __thiscall
TProperty_Numeric<unsigned_int>::GetValueTypeHashInternal
          (TProperty_Numeric<unsigned_int> *this,void *param_1)

{
  return *(uint *)param_1;
}

// GetValueTypeHashInternal @ 141f8ac30

uint __thiscall
TProperty_Numeric<float>::GetValueTypeHashInternal(TProperty_Numeric<float> *this,void *param_1)

{
  return *(uint *)param_1;
}

// GetValueTypeHashInternal @ 141f8ac40

uint __thiscall
TProperty_Numeric<double>::GetValueTypeHashInternal(TProperty_Numeric<double> *this,void *param_1)

{
  return (int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0x17 + (int)*(undefined8 *)param_1;
}

// GetValueTypeHashInternal @ 141f8ac60

uint __thiscall
TProperty_Numeric<__int64>::GetValueTypeHashInternal(TProperty_Numeric<__int64> *this,void *param_1)

{
  return (int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0x17 + (int)*(undefined8 *)param_1;
}

// GetValueTypeHashInternal @ 141f8ac80

uint __thiscall
TProperty_Numeric<unsigned___int64>::GetValueTypeHashInternal
          (TProperty_Numeric<unsigned___int64> *this,void *param_1)

{
  return (int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0x17 + (int)*(undefined8 *)param_1;
}

// IsFloatingPoint @ 141f90030

bool __thiscall
TProperty_Numeric<unsigned_char>::IsFloatingPoint(TProperty_Numeric<unsigned_char> *this)

{
  return false;
}

// IsFloatingPoint @ 141f90040

bool __thiscall TProperty_Numeric<int>::IsFloatingPoint(TProperty_Numeric<int> *this)

{
  return false;
}

// IsFloatingPoint @ 141f90050

bool __thiscall
TProperty_Numeric<unsigned_int>::IsFloatingPoint(TProperty_Numeric<unsigned_int> *this)

{
  return false;
}

// IsFloatingPoint @ 141f90060

bool __thiscall TProperty_Numeric<float>::IsFloatingPoint(TProperty_Numeric<float> *this)

{
  return true;
}

// IsFloatingPoint @ 141f90070

bool __thiscall TProperty_Numeric<double>::IsFloatingPoint(TProperty_Numeric<double> *this)

{
  return true;
}

// IsFloatingPoint @ 141f90080

bool __thiscall TProperty_Numeric<__int64>::IsFloatingPoint(TProperty_Numeric<__int64> *this)

{
  return false;
}

// IsFloatingPoint @ 141f90090

bool __thiscall
TProperty_Numeric<unsigned___int64>::IsFloatingPoint(TProperty_Numeric<unsigned___int64> *this)

{
  return false;
}

// IsInteger @ 141f900f0

bool __thiscall TProperty_Numeric<unsigned_char>::IsInteger(TProperty_Numeric<unsigned_char> *this)

{
  return true;
}

// IsInteger @ 141f90100

bool __thiscall TProperty_Numeric<int>::IsInteger(TProperty_Numeric<int> *this)

{
  return true;
}

// IsInteger @ 141f90110

bool __thiscall TProperty_Numeric<unsigned_int>::IsInteger(TProperty_Numeric<unsigned_int> *this)

{
  return true;
}

// IsInteger @ 141f90120

bool __thiscall TProperty_Numeric<float>::IsInteger(TProperty_Numeric<float> *this)

{
  return false;
}

// IsInteger @ 141f90130

bool __thiscall TProperty_Numeric<double>::IsInteger(TProperty_Numeric<double> *this)

{
  return false;
}

// IsInteger @ 141f90140

bool __thiscall TProperty_Numeric<__int64>::IsInteger(TProperty_Numeric<__int64> *this)

{
  return true;
}

// IsInteger @ 141f90150

bool __thiscall
TProperty_Numeric<unsigned___int64>::IsInteger(TProperty_Numeric<unsigned___int64> *this)

{
  return true;
}

// SetFloatingPointPropertyValue @ 141fa9750

void __thiscall
TProperty_Numeric<unsigned_char>::SetFloatingPointPropertyValue
          (TProperty_Numeric<unsigned_char> *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x828,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(char *)param_1 = (char)(int)param_2;
  return;
}

// SetFloatingPointPropertyValue @ 141fa97a0

void __thiscall
TProperty_Numeric<int>::SetFloatingPointPropertyValue
          (TProperty_Numeric<int> *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x828,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)param_1 = (int)param_2;
  return;
}

// SetFloatingPointPropertyValue @ 141fa97f0

void __thiscall
TProperty_Numeric<unsigned_int>::SetFloatingPointPropertyValue
          (TProperty_Numeric<unsigned_int> *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x828,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)param_1 = (int)(longlong)param_2;
  return;
}

// SetFloatingPointPropertyValue @ 141fa9840

void __thiscall
TProperty_Numeric<float>::SetFloatingPointPropertyValue
          (TProperty_Numeric<float> *this,void *param_1,double param_2)

{
  *(float *)param_1 = (float)param_2;
  return;
}

// SetFloatingPointPropertyValue @ 141fa9860

void __thiscall
TProperty_Numeric<double>::SetFloatingPointPropertyValue
          (TProperty_Numeric<double> *this,void *param_1,double param_2)

{
  *(double *)param_1 = param_2;
  return;
}

// SetFloatingPointPropertyValue @ 141fa9870

void __thiscall
TProperty_Numeric<__int64>::SetFloatingPointPropertyValue
          (TProperty_Numeric<__int64> *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x828,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(longlong *)param_1 = (longlong)param_2;
  return;
}

// SetFloatingPointPropertyValue @ 141fa98c0

void __thiscall
TProperty_Numeric<unsigned___int64>::SetFloatingPointPropertyValue
          (TProperty_Numeric<unsigned___int64> *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x828,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar3 = 0;
  if ((__real_43e0000000000000 <= param_2) &&
     (param_2 = param_2 - __real_43e0000000000000, param_2 < __real_43e0000000000000)) {
    lVar3 = -0x8000000000000000;
  }
  *(longlong *)param_1 = (longlong)param_2 + lVar3;
  return;
}

// SetIntPropertyValue @ 141fa9940

void __thiscall
TProperty_Numeric<unsigned_char>::SetIntPropertyValue
          (TProperty_Numeric<unsigned_char> *this,void *param_1,long64 param_2)

{
  *(char *)param_1 = (char)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9950

void __thiscall
TProperty_Numeric<unsigned_char>::SetIntPropertyValue
          (TProperty_Numeric<unsigned_char> *this,void *param_1,ulong64 param_2)

{
  *(char *)param_1 = (char)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9960

void __thiscall
TProperty_Numeric<int>::SetIntPropertyValue
          (TProperty_Numeric<int> *this,void *param_1,long64 param_2)

{
  *(int *)param_1 = (int)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9970

void __thiscall
TProperty_Numeric<int>::SetIntPropertyValue
          (TProperty_Numeric<int> *this,void *param_1,ulong64 param_2)

{
  *(int *)param_1 = (int)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9980

void __thiscall
TProperty_Numeric<unsigned_int>::SetIntPropertyValue
          (TProperty_Numeric<unsigned_int> *this,void *param_1,long64 param_2)

{
  *(int *)param_1 = (int)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9990

void __thiscall
TProperty_Numeric<unsigned_int>::SetIntPropertyValue
          (TProperty_Numeric<unsigned_int> *this,void *param_1,ulong64 param_2)

{
  *(int *)param_1 = (int)param_2;
  return;
}

// SetIntPropertyValue @ 141fa99a0

void __thiscall
TProperty_Numeric<float>::SetIntPropertyValue
          (TProperty_Numeric<float> *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x823,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(float *)param_1 = (float)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9a00

void __thiscall
TProperty_Numeric<float>::SetIntPropertyValue
          (TProperty_Numeric<float> *this,void *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x81e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (-1 < (longlong)param_2) {
    *(float *)param_1 = (float)(longlong)param_2;
    return;
  }
  *(float *)param_1 = (float)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9a80

void __thiscall
TProperty_Numeric<double>::SetIntPropertyValue
          (TProperty_Numeric<double> *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x823,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(double *)param_1 = (double)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9ae0

void __thiscall
TProperty_Numeric<double>::SetIntPropertyValue
          (TProperty_Numeric<double> *this,void *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_integral_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x81e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (-1 < (longlong)param_2) {
    *(double *)param_1 = (double)(longlong)param_2;
    return;
  }
  *(double *)param_1 = (double)param_2;
  return;
}

// SetIntPropertyValue @ 141fa9b60

void __thiscall
TProperty_Numeric<__int64>::SetIntPropertyValue
          (TProperty_Numeric<__int64> *this,void *param_1,long64 param_2)

{
  *(long64 *)param_1 = param_2;
  return;
}

// SetIntPropertyValue @ 141fa9b70

void __thiscall
TProperty_Numeric<__int64>::SetIntPropertyValue
          (TProperty_Numeric<__int64> *this,void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// SetIntPropertyValue @ 141fa9b80

void __thiscall
TProperty_Numeric<unsigned___int64>::SetIntPropertyValue
          (TProperty_Numeric<unsigned___int64> *this,void *param_1,long64 param_2)

{
  *(long64 *)param_1 = param_2;
  return;
}

// SetIntPropertyValue @ 141fa9b90

void __thiscall
TProperty_Numeric<unsigned___int64>::SetIntPropertyValue
          (TProperty_Numeric<unsigned___int64> *this,void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// SetNumericPropertyValueFromString @ 141fa9c70

void __thiscall
TProperty_Numeric<unsigned_char>::SetNumericPropertyValueFromString
          (TProperty_Numeric<unsigned_char> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = _wtoi(param_2);
  *(char *)param_1 = (char)iVar1;
  return;
}

// SetNumericPropertyValueFromString @ 141fa9c90

void __thiscall
TProperty_Numeric<int>::SetNumericPropertyValueFromString
          (TProperty_Numeric<int> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = _wtoi(param_2);
  *(int *)param_1 = iVar1;
  return;
}

// SetNumericPropertyValueFromString @ 141fa9cb0

void __thiscall
TProperty_Numeric<unsigned_int>::SetNumericPropertyValueFromString
          (TProperty_Numeric<unsigned_int> *this,void *param_1,wchar_t *param_2)

{
  longlong lVar1;
  
  lVar1 = _wtoi64(param_2);
  *(int *)param_1 = (int)lVar1;
  return;
}

// SetNumericPropertyValueFromString @ 141fa9cd0

void __thiscall
TProperty_Numeric<float>::SetNumericPropertyValueFromString
          (TProperty_Numeric<float> *this,void *param_1,wchar_t *param_2)

{
  double dVar1;
  
  dVar1 = _wtof(param_2);
  *(float *)param_1 = (float)dVar1;
  return;
}

// SetNumericPropertyValueFromString @ 141fa9d00

void __thiscall
TProperty_Numeric<double>::SetNumericPropertyValueFromString
          (TProperty_Numeric<double> *this,void *param_1,wchar_t *param_2)

{
  double dVar1;
  
  dVar1 = wcstod(param_2,(wchar_t **)0x0);
  *(double *)param_1 = dVar1;
  return;
}

// SetNumericPropertyValueFromString @ 141fa9d30

void __thiscall
TProperty_Numeric<__int64>::SetNumericPropertyValueFromString
          (TProperty_Numeric<__int64> *this,void *param_1,wchar_t *param_2)

{
  longlong lVar1;
  
  lVar1 = _wtoi64(param_2);
  *(longlong *)param_1 = lVar1;
  return;
}

// SetNumericPropertyValueFromString @ 141fa9d60

void __thiscall
TProperty_Numeric<unsigned___int64>::SetNumericPropertyValueFromString
          (TProperty_Numeric<unsigned___int64> *this,void *param_1,wchar_t *param_2)

{
  ulonglong uVar1;
  
  uVar1 = _wcstoui64(param_2,(wchar_t **)0x0,0);
  *(ulonglong *)param_1 = uVar1;
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 141fa9d90

void __thiscall
TProperty_Numeric<unsigned_char>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<unsigned_char> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  undefined1 local_res20 [8];
  
  iVar1 = _wtoi(param_2);
  local_res20[0] = (char)iVar1;
  FProperty::SetValue_InContainer((FProperty *)this,param_1,local_res20);
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 141fa9dd0

void __thiscall
TProperty_Numeric<int>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<int> *this,void *param_1,wchar_t *param_2)

{
  int local_res20 [2];
  
  local_res20[0] = _wtoi(param_2);
  FProperty::SetValue_InContainer((FProperty *)this,param_1,local_res20);
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 141fa9e10

void __thiscall
TProperty_Numeric<unsigned_int>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<unsigned_int> *this,void *param_1,wchar_t *param_2)

{
  longlong lVar1;
  undefined4 local_res20 [2];
  
  lVar1 = _wtoi64(param_2);
  local_res20[0] = (int)lVar1;
  FProperty::SetValue_InContainer((FProperty *)this,param_1,local_res20);
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 141fa9e50

void __thiscall
TProperty_Numeric<float>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<float> *this,void *param_1,wchar_t *param_2)

{
  double dVar1;
  float local_res20 [2];
  
  dVar1 = _wtof(param_2);
  local_res20[0] = (float)dVar1;
  FProperty::SetValue_InContainer((FProperty *)this,param_1,local_res20);
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 141fa9ea0

void __thiscall
TProperty_Numeric<double>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<double> *this,void *param_1,wchar_t *param_2)

{
  double local_res20;
  
  local_res20 = wcstod(param_2,(wchar_t **)0x0);
  FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_res20);
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 141fa9ef0

void __thiscall
TProperty_Numeric<__int64>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<__int64> *this,void *param_1,wchar_t *param_2)

{
  longlong local_res20;
  
  local_res20 = _wtoi64(param_2);
  FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_res20);
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 141fa9f30

void __thiscall
TProperty_Numeric<unsigned___int64>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<unsigned___int64> *this,void *param_1,wchar_t *param_2)

{
  ulonglong local_res20;
  
  local_res20 = _wcstoui64(param_2,(wchar_t **)0x0,0);
  FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_res20);
  return;
}

// CanHoldDoubleValueInternal @ 142169070

bool __thiscall
TProperty_Numeric<signed_char>::CanHoldDoubleValueInternal
          (TProperty_Numeric<signed_char> *this,double param_1)

{
  if ((double)(int)(char)(int)param_1 == param_1) {
    return true;
  }
  return false;
}

// CanHoldDoubleValueInternal @ 1421690a0

bool __thiscall
TProperty_Numeric<short>::CanHoldDoubleValueInternal(TProperty_Numeric<short> *this,double param_1)

{
  if ((double)(int)(short)(int)param_1 == param_1) {
    return true;
  }
  return false;
}

// CanHoldDoubleValueInternal @ 1421690d0

bool __thiscall
TProperty_Numeric<unsigned_short>::CanHoldDoubleValueInternal
          (TProperty_Numeric<unsigned_short> *this,double param_1)

{
  if ((double)((int)param_1 & 0xffff) == param_1) {
    return true;
  }
  return false;
}

// CanHoldSignedValueInternal @ 142169100

bool __thiscall
TProperty_Numeric<signed_char>::CanHoldSignedValueInternal
          (TProperty_Numeric<signed_char> *this,long64 param_1)

{
  return (char)param_1 == param_1;
}

// CanHoldSignedValueInternal @ 142169120

bool __thiscall
TProperty_Numeric<short>::CanHoldSignedValueInternal(TProperty_Numeric<short> *this,long64 param_1)

{
  return (short)param_1 == param_1;
}

// CanHoldSignedValueInternal @ 142169140

bool __thiscall
TProperty_Numeric<unsigned_short>::CanHoldSignedValueInternal
          (TProperty_Numeric<unsigned_short> *this,long64 param_1)

{
  return (param_1 & 0xffffU) == param_1;
}

// CanHoldUnsignedValueInternal @ 142169150

bool __thiscall
TProperty_Numeric<signed_char>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<signed_char> *this,ulong64 param_1)

{
  return (longlong)(char)param_1 == param_1;
}

// CanHoldUnsignedValueInternal @ 142169170

bool __thiscall
TProperty_Numeric<short>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<short> *this,ulong64 param_1)

{
  return (longlong)(short)param_1 == param_1;
}

// CanHoldUnsignedValueInternal @ 142169190

bool __thiscall
TProperty_Numeric<unsigned_short>::CanHoldUnsignedValueInternal
          (TProperty_Numeric<unsigned_short> *this,ulong64 param_1)

{
  return (param_1 & 0xffff) == param_1;
}

// ConvertFromType @ 14216d270

EConvertFromTypeResult __thiscall
TProperty_Numeric<signed_char>::ConvertFromType
          (TProperty_Numeric<signed_char> *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2
          ,uchar *param_3,UStruct *param_4,uchar *param_5)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  EConvertFromTypeResult EVar8;
  EName *pEVar9;
  long64 lVar10;
  uchar local_res10 [8];
  uchar local_28;
  TConvertAndSet<short,signed_char> local_27;
  TConvertAndSet<int,signed_char> local_26;
  TConvertAndSet<__int64,signed_char> local_25;
  TConvertAndSet<unsigned_short,signed_char> local_24;
  TConvertAndSet<unsigned_int,signed_char> local_23;
  TConvertAndSet<unsigned___int64,signed_char> local_22;
  TConvertAndSet<float,signed_char> local_21;
  TConvertAndSet<double,signed_char> local_20 [8];
  
  pEVar9 = ::FName::ToEName(&param_1->Type);
  if ((pEVar9 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_14216d2d2_caseD_5:
    EVar8 = UseSerializeItem;
  }
  else {
    switch(*pEVar9) {
    case ByteProperty:
      uVar2 = (param_1->TypeName).Index;
      if (*(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar2 >> 0xd] + 8 +
                  (ulonglong)(uVar2 & 0x1fff) * 0xc) < 1) {
        plVar4 = *(longlong **)(*(longlong *)param_2 + 8);
        puVar5 = *(uchar **)plVar4[1];
        if ((uchar *)((undefined8 *)plVar4[1])[1] < puVar5 + 1) {
          (**(code **)(*plVar4 + 0x188))(plVar4,&local_28,1);
        }
        else {
          local_28 = *puVar5;
          *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
        }
        uVar1 = local_28;
        iVar3 = param_1->ArrayIndex;
        if (((iVar3 < 0) || (*(int *)&this->field_0x30 <= iVar3)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          EVar8 = (*pcVar6)();
          return EVar8;
        }
        if ((param_3 == (uchar *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          EVar8 = (*pcVar6)();
          return EVar8;
        }
        param_3[(longlong)*(int *)&this->field_0x44 +
                (longlong)iVar3 * (longlong)*(int *)&this->field_0x34] = uVar1;
        return Converted;
      }
    case EnumProperty:
      lVar10 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar3 = param_1->ArrayIndex;
      if (((iVar3 < 0) || (*(int *)&this->field_0x30 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      param_3[(longlong)*(int *)&this->field_0x44 +
              (longlong)iVar3 * (longlong)*(int *)&this->field_0x34] = (uchar)lVar10;
      EVar8 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,signed_char>::TConvertAndSet<int,signed_char>
                (&local_26,this,param_2,param_3,param_1);
      EVar8 = Converted;
      break;
    case BoolProperty:
      iVar3 = param_1->ArrayIndex;
      uVar1 = param_1->BoolVal;
      if (((iVar3 < 0) || (*(int *)&this->field_0x30 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      param_3[(longlong)*(int *)&this->field_0x44 +
              (longlong)iVar3 * (longlong)*(int *)&this->field_0x34] = uVar1;
      EVar8 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,signed_char>::TConvertAndSet<float,signed_char>
                (&local_21,this,param_2,param_3,param_1);
      EVar8 = Converted;
      break;
    default:
      goto switchD_14216d2d2_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,signed_char>::TConvertAndSet<double,signed_char>
                (local_20,this,param_2,param_3,param_1);
      EVar8 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,signed_char>::TConvertAndSet<__int64,signed_char>
                (&local_25,this,param_2,param_3,param_1);
      EVar8 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,signed_char>::TConvertAndSet<short,signed_char>
                (&local_27,this,param_2,param_3,param_1);
      EVar8 = Converted;
      break;
    case Int8Property:
      plVar4 = *(longlong **)(*(longlong *)param_2 + 8);
      puVar5 = *(uchar **)plVar4[1];
      if ((uchar *)((undefined8 *)plVar4[1])[1] < puVar5 + 1) {
        (**(code **)(*plVar4 + 0x188))(plVar4,local_res10,1);
      }
      else {
        local_res10[0] = *puVar5;
        *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
      }
      uVar1 = local_res10[0];
      iVar3 = param_1->ArrayIndex;
      if (((iVar3 < 0) || (*(int *)&this->field_0x30 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      EVar8 = Serialized;
      param_3[(longlong)*(int *)&this->field_0x44 +
              (longlong)iVar3 * (longlong)*(int *)&this->field_0x34] = uVar1;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,signed_char>::TConvertAndSet<unsigned___int64,signed_char>
                (&local_22,this,param_2,param_3,param_1);
      EVar8 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,signed_char>::TConvertAndSet<unsigned_int,signed_char>
                (&local_23,this,param_2,param_3,param_1);
      EVar8 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,signed_char>::TConvertAndSet<unsigned_short,signed_char>
                (&local_24,this,param_2,param_3,param_1);
      EVar8 = Converted;
    }
  }
  return EVar8;
}

// ConvertFromType @ 14216d740

EConvertFromTypeResult __thiscall
TProperty_Numeric<short>::ConvertFromType
          (TProperty_Numeric<short> *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  EConvertFromTypeResult EVar6;
  EName *pEVar7;
  long64 lVar8;
  TConvertAndSet<signed_char,short> local_res10 [8];
  TConvertAndSet<short,short> local_28;
  TConvertAndSet<int,short> local_27;
  TConvertAndSet<__int64,short> local_26;
  TConvertAndSet<signed_char,short> local_25;
  TConvertAndSet<unsigned_short,short> local_24;
  TConvertAndSet<unsigned_int,short> local_23;
  TConvertAndSet<unsigned___int64,short> local_22;
  TConvertAndSet<float,short> local_21;
  TConvertAndSet<double,short> local_20 [8];
  
  pEVar7 = ::FName::ToEName(&param_1->Type);
  if ((pEVar7 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_14216d7a2_caseD_5:
    EVar6 = UseSerializeItem;
  }
  else {
    switch(*pEVar7) {
    case ByteProperty:
      uVar2 = (param_1->TypeName).Index;
      if (*(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar2 >> 0xd] + 8 +
                  (ulonglong)(uVar2 & 0x1fff) * 0xc) < 1) {
        TConvertAndSet<signed_char,short>::TConvertAndSet<signed_char,short>
                  (&local_25,this,param_2,param_3,param_1);
        return Converted;
      }
    case EnumProperty:
      lVar8 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar3 = param_1->ArrayIndex;
      if (((iVar3 < 0) || (*(int *)&this->field_0x30 <= iVar3)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      *(short *)(param_3 +
                (longlong)*(int *)&this->field_0x44 +
                (longlong)iVar3 * (longlong)*(int *)&this->field_0x34) = (short)lVar8;
      EVar6 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,short>::TConvertAndSet<int,short>(&local_27,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case BoolProperty:
      iVar3 = param_1->ArrayIndex;
      bVar1 = param_1->BoolVal;
      if (((iVar3 < 0) || (*(int *)&this->field_0x30 <= iVar3)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      *(ushort *)
       (param_3 +
       (longlong)*(int *)&this->field_0x44 + (longlong)iVar3 * (longlong)*(int *)&this->field_0x34)
           = (ushort)bVar1;
      EVar6 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,short>::TConvertAndSet<float,short>
                (&local_21,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    default:
      goto switchD_14216d7a2_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,short>::TConvertAndSet<double,short>
                (local_20,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,short>::TConvertAndSet<__int64,short>
                (&local_26,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,short>::TConvertAndSet<short,short>
                (&local_28,this,param_2,param_3,param_1);
      EVar6 = Serialized;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,short>::TConvertAndSet<signed_char,short>
                (local_res10,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,short>::TConvertAndSet<unsigned___int64,short>
                (&local_22,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,short>::TConvertAndSet<unsigned_int,short>
                (&local_23,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,short>::TConvertAndSet<unsigned_short,short>
                (&local_24,this,param_2,param_3,param_1);
      EVar6 = Converted;
    }
  }
  return EVar6;
}

// ConvertFromType @ 14216dac0

EConvertFromTypeResult __thiscall
TProperty_Numeric<unsigned_short>::ConvertFromType
          (TProperty_Numeric<unsigned_short> *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2,uchar *param_3,UStruct *param_4,uchar *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  EConvertFromTypeResult EVar6;
  EName *pEVar7;
  long64 lVar8;
  TConvertAndSet<signed_char,unsigned_short> local_res10 [8];
  TConvertAndSet<short,unsigned_short> local_28;
  TConvertAndSet<int,unsigned_short> local_27;
  TConvertAndSet<__int64,unsigned_short> local_26;
  TConvertAndSet<signed_char,unsigned_short> local_25;
  TConvertAndSet<unsigned_short,unsigned_short> local_24;
  TConvertAndSet<unsigned_int,unsigned_short> local_23;
  TConvertAndSet<unsigned___int64,unsigned_short> local_22;
  TConvertAndSet<float,unsigned_short> local_21;
  TConvertAndSet<double,unsigned_short> local_20 [8];
  
  pEVar7 = ::FName::ToEName(&param_1->Type);
  if ((pEVar7 == (EName *)0x0) || ((param_1->Type).Number != 0)) {
switchD_14216db22_caseD_5:
    EVar6 = UseSerializeItem;
  }
  else {
    switch(*pEVar7) {
    case ByteProperty:
      uVar2 = (param_1->TypeName).Index;
      if (*(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar2 >> 0xd] + 8 +
                  (ulonglong)(uVar2 & 0x1fff) * 0xc) < 1) {
        TConvertAndSet<signed_char,unsigned_short>::TConvertAndSet<signed_char,unsigned_short>
                  (&local_25,this,param_2,param_3,param_1);
        return Converted;
      }
    case EnumProperty:
      lVar8 = FNumericProperty::ReadEnumAsInt64(param_2,param_4,param_1);
      iVar3 = param_1->ArrayIndex;
      if (((iVar3 < 0) || (*(int *)&this->field_0x30 <= iVar3)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      *(short *)(param_3 +
                (longlong)*(int *)&this->field_0x44 +
                (longlong)iVar3 * (longlong)*(int *)&this->field_0x34) = (short)lVar8;
      EVar6 = Converted;
      break;
    case IntProperty:
      TConvertAndSet<int,unsigned_short>::TConvertAndSet<int,unsigned_short>
                (&local_27,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case BoolProperty:
      iVar3 = param_1->ArrayIndex;
      bVar1 = param_1->BoolVal;
      if (((iVar3 < 0) || (*(int *)&this->field_0x30 <= iVar3)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      *(ushort *)
       (param_3 +
       (longlong)*(int *)&this->field_0x44 + (longlong)iVar3 * (longlong)*(int *)&this->field_0x34)
           = (ushort)bVar1;
      EVar6 = Converted;
      break;
    case FloatProperty:
      TConvertAndSet<float,unsigned_short>::TConvertAndSet<float,unsigned_short>
                (&local_21,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    default:
      goto switchD_14216db22_caseD_5;
    case DoubleProperty:
      TConvertAndSet<double,unsigned_short>::TConvertAndSet<double,unsigned_short>
                (local_20,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case Int64Property:
      TConvertAndSet<__int64,unsigned_short>::TConvertAndSet<__int64,unsigned_short>
                (&local_26,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case Int16Property:
      TConvertAndSet<short,unsigned_short>::TConvertAndSet<short,unsigned_short>
                (&local_28,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case Int8Property:
      TConvertAndSet<signed_char,unsigned_short>::TConvertAndSet<signed_char,unsigned_short>
                (local_res10,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case UInt64Property:
      TConvertAndSet<unsigned___int64,unsigned_short>::
      TConvertAndSet<unsigned___int64,unsigned_short>(&local_22,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case UInt32Property:
      TConvertAndSet<unsigned_int,unsigned_short>::TConvertAndSet<unsigned_int,unsigned_short>
                (&local_23,this,param_2,param_3,param_1);
      EVar6 = Converted;
      break;
    case UInt16Property:
      TConvertAndSet<unsigned_short,unsigned_short>::TConvertAndSet<unsigned_short,unsigned_short>
                (&local_24,this,param_2,param_3,param_1);
      EVar6 = Serialized;
    }
  }
  return EVar6;
}

// GetFloatingPointPropertyValue @ 14217bcd0

double __thiscall
TProperty_Numeric<signed_char>::GetFloatingPointPropertyValue
          (TProperty_Numeric<signed_char> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x859,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)(int)*(char *)param_1;
}

// GetFloatingPointPropertyValue @ 14217bd20

double __thiscall
TProperty_Numeric<short>::GetFloatingPointPropertyValue
          (TProperty_Numeric<short> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x859,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)(int)*(short *)param_1;
}

// GetFloatingPointPropertyValue @ 14217bd70

double __thiscall
TProperty_Numeric<unsigned_short>::GetFloatingPointPropertyValue
          (TProperty_Numeric<unsigned_short> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x859,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)*(ushort *)param_1;
}

// GetNumericPropertyValueToString @ 14217c790

FString * __thiscall
TProperty_Numeric<signed_char>::GetNumericPropertyValueToString
          (TProperty_Numeric<signed_char> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString @ 14217c7c0

FString * __thiscall
TProperty_Numeric<short>::GetNumericPropertyValueToString
          (TProperty_Numeric<short> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString @ 14217c7f0

FString * __thiscall
TProperty_Numeric<unsigned_short>::GetNumericPropertyValueToString
          (TProperty_Numeric<unsigned_short> *this,FString *__return_storage_ptr__,void *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 14217c870

FString * __thiscall
TProperty_Numeric<signed_char>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<signed_char> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 14217c8c0

FString * __thiscall
TProperty_Numeric<short>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<short> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined2 local_res10 [12];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 14217c910

FString * __thiscall
TProperty_Numeric<unsigned_short>::GetNumericPropertyValueToString_InContainer
          (TProperty_Numeric<unsigned_short> *this,FString *__return_storage_ptr__,void *param_1)

{
  undefined2 local_res10 [12];
  
  local_res10[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// GetSignedIntPropertyValue @ 14217d6e0

long64 __thiscall
TProperty_Numeric<signed_char>::GetSignedIntPropertyValue
          (TProperty_Numeric<signed_char> *this,void *param_1)

{
  return (longlong)*(char *)param_1;
}

// GetSignedIntPropertyValue @ 14217d6f0

long64 __thiscall
TProperty_Numeric<short>::GetSignedIntPropertyValue(TProperty_Numeric<short> *this,void *param_1)

{
  return (longlong)*(short *)param_1;
}

// GetSignedIntPropertyValue @ 14217d700

long64 __thiscall
TProperty_Numeric<unsigned_short>::GetSignedIntPropertyValue
          (TProperty_Numeric<unsigned_short> *this,void *param_1)

{
  return (ulonglong)*(ushort *)param_1;
}

// GetSignedIntPropertyValue_InContainer @ 14217d750

long64 __thiscall
TProperty_Numeric<signed_char>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<signed_char> *this,void *param_1)

{
  char local_res18 [16];
  
  local_res18[0] = '\0';
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (longlong)local_res18[0];
}

// GetSignedIntPropertyValue_InContainer @ 14217d780

long64 __thiscall
TProperty_Numeric<short>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<short> *this,void *param_1)

{
  short local_res18 [8];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (longlong)local_res18[0];
}

// GetSignedIntPropertyValue_InContainer @ 14217d7b0

long64 __thiscall
TProperty_Numeric<unsigned_short>::GetSignedIntPropertyValue_InContainer
          (TProperty_Numeric<unsigned_short> *this,void *param_1)

{
  ushort local_res18 [8];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (ulonglong)local_res18[0];
}

// GetUnsignedIntPropertyValue @ 14217daa0

ulong64 __thiscall
TProperty_Numeric<signed_char>::GetUnsignedIntPropertyValue
          (TProperty_Numeric<signed_char> *this,void *param_1)

{
  return (longlong)*(char *)param_1;
}

// GetUnsignedIntPropertyValue @ 14217dab0

ulong64 __thiscall
TProperty_Numeric<short>::GetUnsignedIntPropertyValue(TProperty_Numeric<short> *this,void *param_1)

{
  return (longlong)*(short *)param_1;
}

// GetUnsignedIntPropertyValue @ 14217dac0

ulong64 __thiscall
TProperty_Numeric<unsigned_short>::GetUnsignedIntPropertyValue
          (TProperty_Numeric<unsigned_short> *this,void *param_1)

{
  return (ulonglong)*(ushort *)param_1;
}

// GetUnsignedIntPropertyValue_InContainer @ 14217db10

ulong64 __thiscall
TProperty_Numeric<signed_char>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<signed_char> *this,void *param_1)

{
  char local_res18 [16];
  
  local_res18[0] = '\0';
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (longlong)local_res18[0];
}

// GetUnsignedIntPropertyValue_InContainer @ 14217db40

ulong64 __thiscall
TProperty_Numeric<short>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<short> *this,void *param_1)

{
  short local_res18 [8];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (longlong)local_res18[0];
}

// GetUnsignedIntPropertyValue_InContainer @ 14217db70

ulong64 __thiscall
TProperty_Numeric<unsigned_short>::GetUnsignedIntPropertyValue_InContainer
          (TProperty_Numeric<unsigned_short> *this,void *param_1)

{
  ushort local_res18 [8];
  
  local_res18[0] = 0;
  FProperty::GetValue_InContainer((FProperty *)this,param_1,local_res18);
  return (ulonglong)local_res18[0];
}

// GetValueTypeHashInternal @ 14217ddc0

uint __thiscall
TProperty_Numeric<signed_char>::GetValueTypeHashInternal
          (TProperty_Numeric<signed_char> *this,void *param_1)

{
  return (int)*(char *)param_1;
}

// GetValueTypeHashInternal @ 14217ddd0

uint __thiscall
TProperty_Numeric<short>::GetValueTypeHashInternal(TProperty_Numeric<short> *this,void *param_1)

{
  return (int)*(short *)param_1;
}

// GetValueTypeHashInternal @ 14217dde0

uint __thiscall
TProperty_Numeric<unsigned_short>::GetValueTypeHashInternal
          (TProperty_Numeric<unsigned_short> *this,void *param_1)

{
  return (uint)*(ushort *)param_1;
}

// IsFloatingPoint @ 142183f40

bool __thiscall
TProperty_Numeric<signed_char>::IsFloatingPoint(TProperty_Numeric<signed_char> *this)

{
  return false;
}

// IsFloatingPoint @ 142183f50

bool __thiscall TProperty_Numeric<short>::IsFloatingPoint(TProperty_Numeric<short> *this)

{
  return false;
}

// IsFloatingPoint @ 142183f60

bool __thiscall
TProperty_Numeric<unsigned_short>::IsFloatingPoint(TProperty_Numeric<unsigned_short> *this)

{
  return false;
}

// IsInteger @ 142183f80

bool __thiscall TProperty_Numeric<signed_char>::IsInteger(TProperty_Numeric<signed_char> *this)

{
  return true;
}

// IsInteger @ 142183f90

bool __thiscall TProperty_Numeric<short>::IsInteger(TProperty_Numeric<short> *this)

{
  return true;
}

// IsInteger @ 142183fa0

bool __thiscall
TProperty_Numeric<unsigned_short>::IsInteger(TProperty_Numeric<unsigned_short> *this)

{
  return true;
}

// SetFloatingPointPropertyValue @ 142191670

void __thiscall
TProperty_Numeric<signed_char>::SetFloatingPointPropertyValue
          (TProperty_Numeric<signed_char> *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x828,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(char *)param_1 = (char)(int)param_2;
  return;
}

// SetFloatingPointPropertyValue @ 1421916c0

void __thiscall
TProperty_Numeric<short>::SetFloatingPointPropertyValue
          (TProperty_Numeric<short> *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x828,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(short *)param_1 = (short)(int)param_2;
  return;
}

// SetFloatingPointPropertyValue @ 142191710

void __thiscall
TProperty_Numeric<unsigned_short>::SetFloatingPointPropertyValue
          (TProperty_Numeric<unsigned_short> *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("std::is_floating_point_v<TCppType>",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x828,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(short *)param_1 = (short)(int)param_2;
  return;
}

// SetIntPropertyValue @ 1421917a0

void __thiscall
TProperty_Numeric<signed_char>::SetIntPropertyValue
          (TProperty_Numeric<signed_char> *this,void *param_1,long64 param_2)

{
  *(char *)param_1 = (char)param_2;
  return;
}

// SetIntPropertyValue @ 1421917b0

void __thiscall
TProperty_Numeric<signed_char>::SetIntPropertyValue
          (TProperty_Numeric<signed_char> *this,void *param_1,ulong64 param_2)

{
  *(char *)param_1 = (char)param_2;
  return;
}

// SetIntPropertyValue @ 1421917c0

void __thiscall
TProperty_Numeric<short>::SetIntPropertyValue
          (TProperty_Numeric<short> *this,void *param_1,long64 param_2)

{
  *(short *)param_1 = (short)param_2;
  return;
}

// SetIntPropertyValue @ 1421917d0

void __thiscall
TProperty_Numeric<short>::SetIntPropertyValue
          (TProperty_Numeric<short> *this,void *param_1,ulong64 param_2)

{
  *(short *)param_1 = (short)param_2;
  return;
}

// SetIntPropertyValue @ 1421917e0

void __thiscall
TProperty_Numeric<unsigned_short>::SetIntPropertyValue
          (TProperty_Numeric<unsigned_short> *this,void *param_1,long64 param_2)

{
  *(short *)param_1 = (short)param_2;
  return;
}

// SetIntPropertyValue @ 1421917f0

void __thiscall
TProperty_Numeric<unsigned_short>::SetIntPropertyValue
          (TProperty_Numeric<unsigned_short> *this,void *param_1,ulong64 param_2)

{
  *(short *)param_1 = (short)param_2;
  return;
}

// SetNumericPropertyValueFromString @ 142192120

void __thiscall
TProperty_Numeric<signed_char>::SetNumericPropertyValueFromString
          (TProperty_Numeric<signed_char> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = _wtoi(param_2);
  *(char *)param_1 = (char)iVar1;
  return;
}

// SetNumericPropertyValueFromString @ 142192140

void __thiscall
TProperty_Numeric<short>::SetNumericPropertyValueFromString
          (TProperty_Numeric<short> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = _wtoi(param_2);
  *(short *)param_1 = (short)iVar1;
  return;
}

// SetNumericPropertyValueFromString @ 142192170

void __thiscall
TProperty_Numeric<unsigned_short>::SetNumericPropertyValueFromString
          (TProperty_Numeric<unsigned_short> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = _wtoi(param_2);
  *(short *)param_1 = (short)iVar1;
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 1421921e0

void __thiscall
TProperty_Numeric<signed_char>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<signed_char> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  undefined1 local_res20 [8];
  
  iVar1 = _wtoi(param_2);
  local_res20[0] = (char)iVar1;
  FProperty::SetValue_InContainer((FProperty *)this,param_1,local_res20);
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 142192220

void __thiscall
TProperty_Numeric<short>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<short> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  undefined2 local_res20 [4];
  
  iVar1 = _wtoi(param_2);
  local_res20[0] = (short)iVar1;
  FProperty::SetValue_InContainer((FProperty *)this,param_1,local_res20);
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 142192260

void __thiscall
TProperty_Numeric<unsigned_short>::SetNumericPropertyValueFromString_InContainer
          (TProperty_Numeric<unsigned_short> *this,void *param_1,wchar_t *param_2)

{
  int iVar1;
  undefined2 local_res20 [4];
  
  iVar1 = _wtoi(param_2);
  local_res20[0] = (short)iVar1;
  FProperty::SetValue_InContainer((FProperty *)this,param_1,local_res20);
  return;
}

