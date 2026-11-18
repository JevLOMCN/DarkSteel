// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 21

// operator_new @ 141f692c0

void * __cdecl FByteProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FByteProperty__6B_;
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
  }
  return this;
}

// GetFieldSize @ 141f81c00

ulong64 __thiscall FByteProperty::GetFieldSize(FByteProperty *this)

{
  return 0x78;
}

// FByteProperty @ 14215fc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FByteProperty * __thiscall
FByteProperty::FByteProperty(FByteProperty *this,FFieldVariant param_1,FBytePropertyParams *param_2)

{
  ulonglong uVar1;
  UEnum *pUVar2;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_14215fcab:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_14215fcbc;
LAB_14215fcd1:
    if ((uVar1 & 1) == 0) goto LAB_14215fcf2;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14215fc71;
LAB_14215fc88:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14215fcab;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14215fc71:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14215fc88;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14215fcab;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14215fcbc:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14215fcd1;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14215fcf2:
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  this->_padding_ = (longlong)&___7__TProperty_EVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,1);
  pUVar2 = (UEnum *)0x0;
  this->_padding_ = (longlong)&___7FByteProperty__6B_;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  if (param_2->EnumFunc != (_func___cdecl_UEnum_ptr *)0x0) {
    pUVar2 = (*param_2->EnumFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Enum).field0_0x0.DebugPtr = pUVar2;
  return this;
}

// FByteProperty @ 14215fd80

FByteProperty * __thiscall
FByteProperty::FByteProperty
          (FByteProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_14215fe10:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_14215fe21;
LAB_14215fe36:
    if ((uVar1 & 1) == 0) goto LAB_14215fe57;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14215fdd6;
LAB_14215fded:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14215fe10;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14215fdd6:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14215fded;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14215fe10;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14215fe21:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14215fe36;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14215fe57:
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_EVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,1);
  this->_padding_ = (longlong)&___7FByteProperty__6B_;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// AddReferencedObjects @ 142166a00

void __thiscall
FByteProperty::AddReferencedObjects(FByteProperty *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Enum,0,0);
  FField::AddReferencedObjects((FField *)this,param_1);
  return;
}

// CanSerializeFromTypeName @ 1421691a0

bool __thiscall
FByteProperty::CanSerializeFromTypeName(FByteProperty *this,FPropertyTypeName param_1)

{
  longlong lVar1;
  UEnum *pUVar2;
  bool bVar3;
  uint uVar4;
  
  bVar3 = FProperty::CanSerializeFromTypeName((FProperty *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (*(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + 8 +
              (ulonglong)(param_1.Index & 0x1fff) * 0xc) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1.Index + 1;
  }
  lVar1 = *(longlong *)
           ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar4 >> 0xd] +
           (ulonglong)(uVar4 & 0x1fff) * 0xc);
  pUVar2 = (this->Enum).field0_0x0.DebugPtr;
  if (pUVar2 != (UEnum *)0x0) {
    return lVar1 == pUVar2->_padding_;
  }
  return lVar1 == 0;
}

// Construct @ 14216a1a0

FField * __cdecl
FByteProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  if (this == (FProperty *)0x0) {
    return (FField *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FByteProperty",0x40,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FByteProperty|
                 CASTCLASS_UField,pFVar2,Construct);
      atexit(`FByteProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
  this->_padding_ = (longlong)&___7FByteProperty__6B_;
  this->PropertyLinkNext = (FProperty *)0x0;
  this->NextRef = (FProperty *)0x0;
  this->DestructorLinkNext = (FProperty *)0x0;
  this->PostConstructLinkNext = (FProperty *)0x0;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  this[1]._padding_ = 0;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_14216a2ac:
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216a2c0;
      goto LAB_14216a2ce;
    }
LAB_14216a2f0:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216a311;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216a26f;
LAB_14216a286:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216a2ac;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216a26f:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216a286;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216a2ac;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216a2c0:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
LAB_14216a2ce:
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) goto LAB_14216a2f0;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216a311:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_EVFNumericProperty____6B_;
  FProperty::SetElementSize(this,1);
  this->_padding_ = (longlong)&___7FByteProperty__6B_;
  this[1]._padding_ = 0;
  return (FField *)this;
}

// ConvertFromType @ 14216e0c0

EConvertFromTypeResult __thiscall
FByteProperty::ConvertFromType
          (FByteProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  UEnum *pUVar5;
  schar *psVar6;
  ushort *puVar7;
  uint *puVar8;
  ulong64 *puVar9;
  code *pcVar10;
  bool bVar11;
  EConvertFromTypeResult EVar12;
  EName *pEVar13;
  FProperty *pFVar14;
  FArchiveState *pFVar15;
  long64 lVar16;
  FArchive *pFVar17;
  ulonglong uVar18;
  longlong lVar19;
  uchar local_res10 [8];
  FSlotBase local_res18;
  schar local_58 [4];
  ushort local_54 [2];
  ushort local_50 [2];
  TConvertAndSet<signed_char,unsigned_char> local_4c;
  TConvertAndSet<short,unsigned_char> local_4b;
  TConvertAndSet<int,unsigned_char> local_4a;
  TConvertAndSet<__int64,unsigned_char> local_49;
  TConvertAndSet<unsigned_short,unsigned_char> local_48;
  TConvertAndSet<unsigned_int,unsigned_char> local_47;
  TConvertAndSet<unsigned___int64,unsigned_char> local_46 [2];
  uint local_44;
  uint local_40 [2];
  ulong64 local_38;
  ulong64 local_30;
  FName local_28;
  ulonglong local_20;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  pEVar13 = ::FName::ToEName(&param_1->Type);
  if (((param_1->Type).Number != 0) || (pEVar13 == (EName *)0x0)) goto switchD_14216e125_caseD_4;
  switch(*pEVar13) {
  case ByteProperty:
    uVar2 = (param_1->TypeName).Index;
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if ((*(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar2 >> 0xd] + 8 +
                 (ulonglong)(uVar2 & 0x1fff) * 0xc) == 0) != (pUVar5 == (UEnum *)0x0)) {
      local_res10[0] = '\0';
      if (pUVar5 == (UEnum *)0x0) {
        lVar16 = FNumericProperty::ReadEnumAsInt64
                           ((FStructuredArchiveSlot)local_res18.StructuredArchive,param_4,param_1);
        local_res10[0] = (uchar)lVar16;
LAB_14216e1ef:
        uVar1 = local_res10[0];
        iVar3 = param_1->ArrayIndex;
        if (((iVar3 < 0) || ((int)this->_padding_ <= iVar3)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar10 = (code *)swi(3);
          EVar12 = (*pcVar10)();
          return EVar12;
        }
        if ((param_3 == (uchar *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          EVar12 = (*pcVar10)();
          return EVar12;
        }
        param_3[(longlong)*(int *)((longlong)&this->_padding_ + 4) +
                (longlong)iVar3 * (longlong)*(int *)((longlong)&this->_padding_ + 4)] = uVar1;
        return Converted;
      }
      pFVar14 = FField::GetOwner<FProperty>((FField *)this);
      if ((pFVar14 == (FProperty *)0x0) ||
         (pFVar15 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res18),
         0x3f3 < (pFVar15->ArUEVer).FileVersionUE5)) {
        pFVar17 = (local_res18.StructuredArchive)->Formatter->Inner;
        puVar4 = (uchar *)**(undefined8 **)&pFVar17->field_0x8;
        if ((uchar *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar4 + 1) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,local_res10,1);
        }
        else {
          local_res10[0] = *puVar4;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 1;
        }
        goto LAB_14216e1ef;
      }
    }
  default:
switchD_14216e125_caseD_4:
    EVar12 = UseSerializeItem;
    break;
  case IntProperty:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      TProperty_Numeric<unsigned_char>::TConvertAndSet<int,unsigned_char>::
      TConvertAndSet<int,unsigned_char>
                (&local_4a,(TProperty_Numeric<unsigned_char> *)this,
                 (FStructuredArchiveSlot)local_res18.StructuredArchive,param_3,param_1);
      EVar12 = Converted;
    }
    else {
      pFVar17 = (local_res18.StructuredArchive)->Formatter->Inner;
      puVar8 = (uint *)**(undefined8 **)&pFVar17->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar8 + 1) {
        if ((pFVar17->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,&local_44,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar17,&local_44);
        }
      }
      else {
        local_44 = *puVar8;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
      }
      TConvertIntToEnumProperty<int>::ConvertValue(local_44,this,pUVar5,param_3,param_1);
      EVar12 = Converted;
    }
    break;
  case BoolProperty:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      iVar3 = param_1->ArrayIndex;
      uVar1 = param_1->BoolVal;
      if (((iVar3 < 0) || ((int)this->_padding_ <= iVar3)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        EVar12 = (*pcVar10)();
        return EVar12;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        EVar12 = (*pcVar10)();
        return EVar12;
      }
      param_3[(longlong)*(int *)((longlong)&this->_padding_ + 4) +
              (longlong)iVar3 * (longlong)*(int *)((longlong)&this->_padding_ + 4)] = uVar1;
      EVar12 = Converted;
    }
    else {
      TConvertIntToEnumProperty<unsigned___int64>::ConvertValue
                ((ulonglong)param_1->BoolVal,this,pUVar5,param_3,param_1);
      EVar12 = Converted;
    }
    break;
  case Int64Property:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      TProperty_Numeric<unsigned_char>::TConvertAndSet<__int64,unsigned_char>::
      TConvertAndSet<__int64,unsigned_char>
                (&local_49,(TProperty_Numeric<unsigned_char> *)this,
                 (FStructuredArchiveSlot)local_res18.StructuredArchive,param_3,param_1);
      EVar12 = Converted;
    }
    else {
      pFVar17 = (local_res18.StructuredArchive)->Formatter->Inner;
      puVar9 = (ulong64 *)**(longlong **)&pFVar17->field_0x8;
      if ((ulong64 *)(*(longlong **)&pFVar17->field_0x8)[1] < puVar9 + 1) {
        if ((pFVar17->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,&local_38,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar17,&local_38);
        }
      }
      else {
        local_38 = *puVar9;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 8;
      }
      TConvertIntToEnumProperty<__int64>::ConvertValue(local_38,this,pUVar5,param_3,param_1);
      EVar12 = Converted;
    }
    break;
  case Int16Property:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      TProperty_Numeric<unsigned_char>::TConvertAndSet<short,unsigned_char>::
      TConvertAndSet<short,unsigned_char>
                (&local_4b,(TProperty_Numeric<unsigned_char> *)this,
                 (FStructuredArchiveSlot)local_res18.StructuredArchive,param_3,param_1);
      EVar12 = Converted;
    }
    else {
      pFVar17 = (local_res18.StructuredArchive)->Formatter->Inner;
      puVar7 = (ushort *)**(undefined8 **)&pFVar17->field_0x8;
      if ((ushort *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar7 + 1) {
        if ((pFVar17->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,local_54,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar17,local_54);
        }
      }
      else {
        local_54[0] = *puVar7;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 2;
      }
      TConvertIntToEnumProperty<short>::ConvertValue(local_54[0],this,pUVar5,param_3,param_1);
      EVar12 = Converted;
    }
    break;
  case Int8Property:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      TProperty_Numeric<unsigned_char>::TConvertAndSet<signed_char,unsigned_char>::
      TConvertAndSet<signed_char,unsigned_char>
                (&local_4c,(TProperty_Numeric<unsigned_char> *)this,
                 (FStructuredArchiveSlot)local_res18.StructuredArchive,param_3,param_1);
      EVar12 = Converted;
    }
    else {
      pFVar17 = (local_res18.StructuredArchive)->Formatter->Inner;
      psVar6 = (schar *)**(undefined8 **)&pFVar17->field_0x8;
      if ((schar *)(*(undefined8 **)&pFVar17->field_0x8)[1] < psVar6 + 1) {
        (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,local_58,1);
      }
      else {
        local_58[0] = *psVar6;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 1;
      }
      TConvertIntToEnumProperty<signed_char>::ConvertValue(local_58[0],this,pUVar5,param_3,param_1);
      EVar12 = Converted;
    }
    break;
  case UInt64Property:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned___int64,unsigned_char>::
      TConvertAndSet<unsigned___int64,unsigned_char>
                (local_46,(TProperty_Numeric<unsigned_char> *)this,
                 (FStructuredArchiveSlot)local_res18.StructuredArchive,param_3,param_1);
      EVar12 = Converted;
    }
    else {
      pFVar17 = (local_res18.StructuredArchive)->Formatter->Inner;
      puVar9 = (ulong64 *)**(longlong **)&pFVar17->field_0x8;
      if ((ulong64 *)(*(longlong **)&pFVar17->field_0x8)[1] < puVar9 + 1) {
        if ((pFVar17->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,&local_30,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar17,&local_30);
        }
      }
      else {
        local_30 = *puVar9;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 8;
      }
      TConvertIntToEnumProperty<unsigned___int64>::ConvertValue
                (local_30,this,pUVar5,param_3,param_1);
      EVar12 = Converted;
    }
    break;
  case UInt32Property:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned_int,unsigned_char>::
      TConvertAndSet<unsigned_int,unsigned_char>
                (&local_47,(TProperty_Numeric<unsigned_char> *)this,
                 (FStructuredArchiveSlot)local_res18.StructuredArchive,param_3,param_1);
      EVar12 = Converted;
    }
    else {
      pFVar17 = (local_res18.StructuredArchive)->Formatter->Inner;
      puVar8 = (uint *)**(undefined8 **)&pFVar17->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar8 + 1) {
        if ((pFVar17->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,local_40,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar17,local_40);
        }
      }
      else {
        local_40[0] = *puVar8;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
      }
      TConvertIntToEnumProperty<unsigned_int>::ConvertValue(local_40[0],this,pUVar5,param_3,param_1)
      ;
      EVar12 = Converted;
    }
    break;
  case UInt16Property:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned_short,unsigned_char>::
      TConvertAndSet<unsigned_short,unsigned_char>
                (&local_48,(TProperty_Numeric<unsigned_char> *)this,
                 (FStructuredArchiveSlot)local_res18.StructuredArchive,param_3,param_1);
      EVar12 = Converted;
    }
    else {
      pFVar17 = (local_res18.StructuredArchive)->Formatter->Inner;
      puVar7 = (ushort *)**(undefined8 **)&pFVar17->field_0x8;
      if ((ushort *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar7 + 1) {
        if ((pFVar17->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,local_50,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar17,local_50);
        }
      }
      else {
        local_50[0] = *puVar7;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 2;
      }
      TConvertIntToEnumProperty<unsigned_short>::ConvertValue
                (local_50[0],this,pUVar5,param_3,param_1);
      EVar12 = Converted;
    }
    break;
  case EnumProperty:
    pUVar5 = (this->Enum).field0_0x0.DebugPtr;
    if (pUVar5 == (UEnum *)0x0) {
      uVar18 = FNumericProperty::ReadEnumAsInt64
                         ((FStructuredArchiveSlot)local_res18.StructuredArchive,param_4,param_1);
      lVar19 = (longlong)param_1->ArrayIndex;
    }
    else {
      local_28.ComparisonIndex.Value = 0;
      local_28.Number = 0;
      local_20 = 0;
      pFVar17 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
      TryLoadEnumValueByName
                ((FStructuredArchiveSlot)local_res18.StructuredArchive,pFVar17,pUVar5,&local_28,
                 (long64 *)&local_20);
      lVar19 = (longlong)param_1->ArrayIndex;
      uVar18 = local_20 & 0xff;
      if (((local_20 != uVar18) || ((longlong)local_20 < 0)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        EVar12 = (*pcVar10)();
        return EVar12;
      }
    }
    if ((((int)lVar19 < 0) || ((int)this->_padding_ <= (int)lVar19)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      EVar12 = (*pcVar10)();
      return EVar12;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      EVar12 = (*pcVar10)();
      return EVar12;
    }
    param_3[(longlong)*(int *)((longlong)&this->_padding_ + 4) +
            lVar19 * *(int *)((longlong)&this->_padding_ + 4)] = (uchar)uVar18;
    EVar12 = Converted;
  }
  return EVar12;
}

// ExportText_Internal @ 142175e20

void __thiscall
FByteProperty::ExportText_Internal
          (FByteProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  UEnum *pUVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  void *local_18 [2];
  
  pUVar1 = (this->Enum).field0_0x0.DebugPtr;
  if ((pUVar1 == (UEnum *)0x0) || (((uint)param_6 >> 0x1a & 1) != 0)) {
    if ((param_3 == Container) &&
       (cVar2 = (**(code **)(this->_padding_ + 0x78))(this), cVar2 != '\0')) {
      puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x240))(this,local_18,param_2);
    }
    else {
      if (param_3 == Container) {
        param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
      }
      puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x238))(this,local_18,param_2);
    }
    iVar4 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)*puVar3,iVar4);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  else {
    UE::CoreUObject::Private::ExportEnumToBuffer
              (pUVar1,(FProperty *)this,(FNumericProperty *)this,param_1,param_2,param_3,param_4,
               param_5,param_6,param_7);
  }
  return;
}

// GetCPPType @ 14217a150

FString * __thiscall
FByteProperty::GetCPPType
          (FByteProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  ECppForm EVar1;
  int iVar2;
  UEnum *pUVar3;
  UClass *pUVar4;
  bool bVar5;
  bool bVar6;
  UClass *pUVar7;
  FString *pFVar8;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pUVar3 = (this->Enum).field0_0x0.DebugPtr;
  if (pUVar3 != (UEnum *)0x0) {
    pUVar4 = (UClass *)pUVar3->_padding_;
    EVar1 = pUVar3->CppForm;
    pUVar7 = Z_Construct_UClass_UEnum_NoRegister();
    if (((param_2 & 2) == 0) ||
       (((((ulonglong)this->_padding_ >> 10 & 1) == 0 &&
         (((ulonglong)this->_padding_ >> 8 & 1) != 0)) && (pUVar4 == pUVar7)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((param_2 & 0x80) == 0) || (pUVar4 == pUVar7)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pUVar3 = (this->Enum).field0_0x0.DebugPtr;
    iVar2 = (pUVar3->CppType).Data.ArrayNum;
    if (iVar2 < 2) {
      if (((param_2 & 0x80) == 0) || (pUVar4 == pUVar7)) {
        local_res8 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_res8,&local_48);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        local_58.Data.ArrayNum = local_48.Data.ArrayNum;
        local_58.Data.ArrayMax = local_48.Data.ArrayMax;
      }
      else {
        local_res8 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_res8,&local_48);
        pFVar8 = UnicodeToCPPIdentifier(&local_38,&local_48,false,L"E__");
        if (&local_58 != pFVar8) {
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          local_58.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          local_58.Data.ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      ::FString::AssignRange
                (&local_58,(wchar_t *)(pUVar3->CppType).Data.AllocatorInstance.Data,iVar2 + -1);
    }
    if (((EVar1 == EnumClass) || (bVar5)) || (bVar6)) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
    }
    else {
      ::FString::PrintfImpl(__return_storage_ptr__,L"TEnumAsByte<%s>");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"uint8");
  return __return_storage_ptr__;
}

// GetIntPropertyEnum @ 14217c380

UEnum * __thiscall FByteProperty::GetIntPropertyEnum(FByteProperty *this)

{
  return (this->Enum).field0_0x0.DebugPtr;
}

// GetMaxNetSerializeBits @ 14217c3a0

ulong64 __thiscall FByteProperty::GetMaxNetSerializeBits(FByteProperty *this)

{
  UEnum *this_00;
  long64 lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  this_00 = (this->Enum).field0_0x0.DebugPtr;
  if (this_00 != (UEnum *)0x0) {
    lVar1 = UEnum::GetMaxEnumValue(this_00);
    lVar3 = 1;
    if (lVar1 + 1 != 0) {
      lVar3 = lVar1 + 1;
    }
    uVar4 = lVar3 - 1;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = (int)lVar3;
    if (uVar4 == 0) {
      iVar5 = -1;
    }
    uVar2 = 0x40 - (ulonglong)(0x3f - iVar5);
    uVar4 = 8;
    if (uVar2 < 8) {
      uVar4 = uVar2;
    }
    return uVar4;
  }
  return 8;
}

// GetPreloadDependencies @ 14217d3c0

void __thiscall
FByteProperty::GetPreloadDependencies
          (FByteProperty *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UEnum>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UEnum>_u_0 local_18 [2];
  
  FField::GetPreloadDependencies((FField *)this,param_1);
  local_18[0] = (this->Enum).field0_0x0;
  pTVar1 = (TObjectPtr<UEnum>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_1->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(TObjectPtr<UEnum>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// ImportText_Internal @ 14217fde0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
FByteProperty::ImportText_Internal
          (FByteProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  UEnum *pUVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FCoreTexts *pFVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pUVar1 = (this->Enum).field0_0x0.DebugPtr;
  if ((pUVar1 != (UEnum *)0x0) && ((param_5 & 0x4000000U) == 0)) {
    pwVar4 = UE::CoreUObject::Private::ImportEnumFromBuffer
                       (pUVar1,(FProperty *)this,(FNumericProperty *)this,L"FByteProperty",param_1,
                        param_2,param_3,param_6);
    return pwVar4;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pwVar5 = FPropertyHelpers::ReadToken(param_1,&local_58,false);
  pwVar4 = (wchar_t *)0x0;
  if (pwVar5 != (wchar_t *)0x0) {
    pFVar6 = FCoreTexts::Get();
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"True");
    pwVar4 = pwVar5;
    if (iVar3 != 0) {
      pFVar7 = FText::ToString(pFVar6->True);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,pwVar5);
      if (iVar3 != 0) {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar8.Data = local_58.Data.AllocatorInstance.Data;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"False");
        if (iVar3 != 0) {
          pFVar7 = FText::ToString(pFVar6->False);
          if ((pFVar7->Data).ArrayNum == 0) {
            pwVar5 = L"";
          }
          else {
            pwVar5 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_58.Data.ArrayNum != 0) {
            FVar8.Data = local_58.Data.AllocatorInstance.Data;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,pwVar5);
          if (iVar3 != 0) {
            pwVar4 = FNumericProperty::ImportText_Internal
                               ((FNumericProperty *)this,param_1,param_2,param_3,param_4,param_5,
                                param_6);
            goto LAB_142180107;
          }
        }
        if ((param_3 == Container) &&
           (cVar2 = (**(code **)(this->_padding_ + 0x70))(this), cVar2 != '\0')) {
          local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
          FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_res8);
        }
        else {
          if (param_3 == Container) {
            param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) +
                              (longlong)param_2);
          }
          (**(code **)(this->_padding_ + 0x1f0))(this,param_2);
        }
        pUVar1 = (this->Enum).field0_0x0.DebugPtr;
        if ((pUVar1 != (UEnum *)0x0) && (2 < (byte)LogClass._0_1_)) {
          local_res8 = (FName)pUVar1->_padding_;
          ::FName::ToString(&local_res8,&local_48);
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)(this->Enum).field0_0x0.DebugPtr,&local_38,(UObject *)0x0
                    );
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_142180107;
      }
    }
    if ((param_3 == Container) &&
       (cVar2 = (**(code **)(this->_padding_ + 0x70))(this), cVar2 != '\0')) {
      local_res8.ComparisonIndex.Value._0_1_ = 1;
      FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_res8);
    }
    else {
      if (param_3 == Container) {
        param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
      }
      (**(code **)(this->_padding_ + 0x1f0))(this,param_2);
    }
    pUVar1 = (this->Enum).field0_0x0.DebugPtr;
    if ((pUVar1 != (UEnum *)0x0) && (2 < (byte)LogClass._0_1_)) {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)(this->Enum).field0_0x0.DebugPtr,&local_38,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_142180107:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return pwVar4;
}

// LoadTypeName @ 142186150

bool __thiscall
FByteProperty::LoadTypeName(FByteProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  UEnum *pUVar3;
  
  bVar1 = FProperty::LoadTypeName((FProperty *)this,param_1,param_2);
  if (!bVar1) {
    return false;
  }
  if ((0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + 8
                   + (ulonglong)(param_1.Index & 0x1fff) * 0xc)) && (param_1.Index + 1 != 0)) {
    pUVar2 = Z_Construct_UClass_UEnum_NoRegister();
    pUVar3 = (UEnum *)UE::FindObjectByTypePath(pUVar2,(FPropertyTypeName)(param_1.Index + 1));
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UEnum *)0x0)) {
      (this->Enum).field0_0x0.DebugPtr = pUVar3;
      return pUVar3 != (UEnum *)0x0;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->Enum).field0_0x0.DebugPtr = pUVar3;
  }
  return true;
}

// NetSerializeItem @ 142186ae0

bool __thiscall
FByteProperty::NetSerializeItem
          (FByteProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  UEnum *this_00;
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long64 lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  this_00 = (this->Enum).field0_0x0.DebugPtr;
  pcVar1 = *(code **)(*(longlong *)param_1 + 400);
  if (uVar2 < 0x11) {
    if (this_00 == (UEnum *)0x0) {
      uVar7 = 8;
    }
    else {
      lVar4 = UEnum::GetMaxEnumValue(this_00);
      lVar6 = 1;
      if (lVar4 != 0) {
        lVar6 = lVar4;
      }
      uVar5 = lVar6 - 1;
      lVar6 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar3 = (int)lVar6;
      if (uVar5 == 0) {
        iVar3 = -1;
      }
      uVar7 = 0x40 - (ulonglong)(0x3f - iVar3);
    }
  }
  else {
    if (this_00 == (UEnum *)0x0) {
      uVar5 = 8;
    }
    else {
      lVar4 = UEnum::GetMaxEnumValue(this_00);
      lVar6 = 1;
      if (lVar4 + 1 != 0) {
        lVar6 = lVar4 + 1;
      }
      uVar5 = lVar6 - 1;
      lVar6 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar3 = (int)lVar6;
      if (uVar5 == 0) {
        iVar3 = -1;
      }
      uVar5 = 0x40 - (ulonglong)(0x3f - iVar3);
    }
    uVar7 = 8;
    if (uVar5 < 8) {
      uVar7 = uVar5;
    }
  }
  (*pcVar1)(param_1,param_3,uVar7);
  return true;
}

// PostDuplicate @ 142187020

void __thiscall FByteProperty::PostDuplicate(FByteProperty *this,FField *param_1)

{
  UObject *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = param_1[2].Owner.Container.Object, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->Enum).field0_0x0 = (TObjectPtr<UEnum>_u_0)param_1[2].Owner.Container;
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// SaveTypeName @ 142189b80

void __thiscall FByteProperty::SaveTypeName(FByteProperty *this,FPropertyTypeNameBuilder *param_1)

{
  UEnum *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  FProperty::SaveTypeName((FProperty *)this,param_1);
  pUVar1 = (this->Enum).field0_0x0.DebugPtr;
  if (pUVar1 != (UEnum *)0x0) {
    if ((param_1->Nodes).ArrayNum == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Nodes.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                         ,0x1ca,L"A type name must be added prior to setting type parameters.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    param_1->ActiveIndex = (param_1->Nodes).ArrayNum + -1;
    UE::FPropertyTypeNameBuilder::AddPath(param_1,(UField *)pUVar1);
    UE::FPropertyTypeNameBuilder::EndParameters(param_1);
  }
  return;
}

// Serialize @ 14218a140

void __thiscall FByteProperty::Serialize(FByteProperty *this,FArchive *param_1)

{
  FProperty::Serialize((FProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Enum);
  if ((this->Enum).field0_0x0.DebugPtr != (UEnum *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
  }
  return;
}

// SerializeItem @ 14218b570

void __thiscall
FByteProperty::SerializeItem
          (FByteProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  UEnum *pUVar1;
  undefined1 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  FArchive *pFVar8;
  FName FVar9;
  FName local_res8;
  FSlotBase local_res10;
  ulonglong local_38 [3];
  undefined1 local_20 [8];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if (((this->Enum).field0_0x0.DebugPtr == (UEnum *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)pFVar8 + 0x90))(pFVar8), cVar5 == '\0')) {
    pUVar1 = (this->Enum).field0_0x0.DebugPtr;
    if ((pUVar1 == (UEnum *)0x0) || ((pFVar8->field_0x28 & 5) == 0)) {
      pFVar8 = (local_res10.StructuredArchive)->Formatter->Inner;
      puVar2 = (undefined1 *)**(undefined8 **)&pFVar8->field_0x8;
      if ((undefined1 *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
        (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,param_2,1);
      }
      else {
        *(undefined1 *)param_2 = *puVar2;
        **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 1;
      }
    }
    else if ((pFVar8->field_0x28 & 1) == 0) {
      bVar7 = UEnum::IsValidEnumValue(pUVar1,(ulonglong)*(byte *)param_2);
      if (bVar7) {
        FVar9 = UEnum::GetNameByValue((this->Enum).field0_0x0.DebugPtr,(long64)local_20);
        local_38[2] = *(ulonglong *)FVar9;
      }
      else {
        local_38[1] = 0;
        local_38[2] = 0;
      }
      pFVar8 = (local_res10.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar8 + 0x178))(pFVar8,local_38 + 2);
    }
    else {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_38[0] = 0;
      TryLoadEnumValueByName
                ((FStructuredArchiveSlot)local_res10.StructuredArchive,pFVar8,pUVar1,&local_res8,
                 (long64 *)local_38);
      uVar4 = local_38[0];
      if (((local_38[0] != (local_38[0] & 0xff)) || ((longlong)local_38[0] < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7
         )) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(char *)param_2 = (char)uVar4;
    }
  }
  else {
    pUVar1 = (this->Enum).field0_0x0.DebugPtr;
    uVar6 = (**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,pFVar8,*(undefined1 *)param_2);
    *(undefined1 *)param_2 = uVar6;
  }
  return;
}

// StaticClass @ 142193030

FFieldClass * __cdecl FByteProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FByteProperty",0x40,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FByteProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FByteProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

