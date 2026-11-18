// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// FPropertyTag @ 142161f20

FPropertyTag * __thiscall
FPropertyTag::FPropertyTag(FPropertyTag *this,FProperty *param_1,int param_2,uchar *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FPropertyTypeName *pFVar4;
  FPropertyTag *pFVar5;
  FPropertyTypeName local_res18 [4];
  
  this->Prop = param_1;
  this->TypeName = 0;
  (this->Type).ComparisonIndex = 0;
  (this->Type).Number = 0;
  bVar3 = IsThisNotNull(param_1,"FField::GetFName");
  if (bVar3) {
    uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->Name).Number = uVar2;
  }
  else {
    (this->Name).ComparisonIndex = 0;
    (this->Name).Number = 0;
  }
  (this->StructName).ComparisonIndex = 0;
  (this->StructName).Number = 0;
  (this->EnumName).ComparisonIndex = 0;
  (this->EnumName).Number = 0;
  (this->InnerType).ComparisonIndex = 0;
  (this->InnerType).Number = 0;
  (this->ValueType).ComparisonIndex = 0;
  (this->ValueType).Number = 0;
  this->Size = 0;
  this->ArrayIndex = param_2;
  this->SizeOffset = -1;
  (this->StructGuid).A = 0;
  (this->StructGuid).B = 0;
  (this->StructGuid).C = 0;
  (this->StructGuid).D = 0;
  (this->PropertyGuid).A = 0;
  (this->PropertyGuid).B = 0;
  (this->PropertyGuid).C = 0;
  (this->PropertyGuid).D = 0;
  this->HasPropertyGuid = '\0';
  this->BoolVal = '\0';
  this->SerializeType = Unknown;
  this->OverrideOperation = None;
  this->bExperimentalOverridableLogic = false;
  pFVar4 = UE::FPropertyTypeName::FPropertyTypeName(local_res18,param_1);
  SetType(this,(FPropertyTypeName)pFVar4->Index);
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
    if ((char)param_1[1]._padding_ == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa4b,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FPropertyTag *)(*pcVar1)();
        return pFVar5;
      }
    }
    this->BoolVal =
         (*(byte *)((longlong)&param_1[1]._padding_ + 3) &
         param_3[*(byte *)((longlong)&param_1[1]._padding_ + 1)]) != 0;
  }
  return this;
}

// FPropertyTag @ 142162030

FPropertyTag * __thiscall FPropertyTag::FPropertyTag(FPropertyTag *this)

{
  this->ArrayIndex = -1;
  this->Prop = (FProperty *)0x0;
  this->TypeName = 0;
  (this->Type).ComparisonIndex = 0;
  *(undefined8 *)&(this->Type).Number = 0;
  *(undefined8 *)&(this->Name).Number = 0;
  *(undefined8 *)&(this->StructName).Number = 0;
  *(undefined8 *)&(this->EnumName).Number = 0;
  *(undefined8 *)&(this->InnerType).Number = 0;
  *(undefined8 *)&(this->ValueType).Number = 0;
  (this->StructGuid).A = 0;
  (this->StructGuid).B = 0;
  (this->StructGuid).C = 0;
  (this->StructGuid).D = 0;
  (this->PropertyGuid).A = 0;
  (this->PropertyGuid).B = 0;
  (this->PropertyGuid).C = 0;
  (this->PropertyGuid).D = 0;
  this->HasPropertyGuid = '\0';
  this->BoolVal = '\0';
  this->SerializeType = Unknown;
  this->OverrideOperation = None;
  this->bExperimentalOverridableLogic = false;
  this->SizeOffset = -1;
  return this;
}

// SerializeTaggedProperty @ 1421910d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPropertyTag::SerializeTaggedProperty
          (FPropertyTag *this,FArchive *param_1,FProperty *param_2,uchar *param_3,uchar *param_4)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStackY_1f8 [32];
  FStructuredArchiveFromArchive local_1c0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1c0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  SerializeTaggedProperty(this,*(FStructuredArchiveSlot *)FVar1,param_2,param_3,param_4);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1c0);
  return;
}

// SerializeTaggedProperty @ 142191160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPropertyTag::SerializeTaggedProperty
          (FPropertyTag *this,FStructuredArchiveSlot param_1,FProperty *param_2,uchar *param_3,
          uchar *param_4)

{
  FFieldClass *pFVar1;
  undefined8 uVar2;
  FArchive *pFVar3;
  longlong lVar4;
  FFieldClass *pFVar5;
  longlong lVar6;
  FSlotBase local_res10;
  FSerializedPropertyScope local_58;
  void *local_48 [2];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  lVar4 = (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3);
  pFVar1 = (FFieldClass *)param_2->_padding_;
  pFVar5 = FBoolProperty::StaticClass();
  local_58.Ar = pFVar3;
  local_58.Property = param_2;
  if (pFVar1 == pFVar5) {
    FSerializedPropertyScope::PushProperty(&local_58);
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,0,0);
    if ((pFVar3->field_0x28 & 1) != 0) {
      FBoolProperty::SetPropertyValue((FBoolProperty *)param_2,param_3,this->BoolVal != '\0');
    }
  }
  else {
    FSerializedPropertyScope::PushProperty(&local_58);
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar6 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar2 = *(undefined8 *)(lVar6 + 0xce0);
    if (*(char *)(lVar6 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(FPropertyTag **)(lVar6 + 0xce0) = this;
    (**(code **)(param_2->_padding_ + 0xc0))(param_2,local_res10.StructuredArchive,param_3,param_4);
    if (*(char *)(lVar6 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined8 *)(lVar6 + 0xce0) = uVar2;
  }
  FSerializedPropertyScope::PopProperty(&local_58);
  lVar6 = (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3);
  if ((this->Size != 0) && (lVar6 - lVar4 != (longlong)this->Size)) {
    if (1 < (byte)LogClass._0_1_) {
      (**(code **)(*(longlong *)pFVar3 + 0x18))(pFVar3,local_48);
      GetFullNameSafe((FString *)&local_58,(FField *)param_2);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_58.Ar != (FArchive *)0x0) {
        FMemory::Free(local_58.Ar);
      }
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    (**(code **)(*(longlong *)pFVar3 + 0x1b8))(pFVar3);
    if ((param_2->PropertyFlags & (CPF_NoDestructor|CPF_ZeroConstructor)) ==
        (CPF_NoDestructor|CPF_ZeroConstructor)) {
      memset(param_3,0,(longlong)param_2->ElementSize);
    }
    else {
      (**(code **)(param_2->_padding_ + 0x130))(param_2,param_3);
    }
  }
  return;
}

// SetProperty @ 142192a10

void __thiscall FPropertyTag::SetProperty(FPropertyTag *this,FProperty *param_1)

{
  this->Prop = param_1;
  return;
}

// SetPropertyGuid @ 142192a20

void __thiscall FPropertyTag::SetPropertyGuid(FPropertyTag *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->HasPropertyGuid =
       ((param_1->D != 0 || param_1->C != 0) || param_1->B != 0) || param_1->A != 0;
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->PropertyGuid).A = param_1->A;
  (this->PropertyGuid).B = uVar1;
  (this->PropertyGuid).C = uVar2;
  (this->PropertyGuid).D = uVar3;
  return;
}

// SetType @ 142192b10

void __thiscall FPropertyTag::SetType(FPropertyTag *this,FPropertyTypeName param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  EName *pEVar4;
  FString *pFVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  FName local_res8;
  undefined4 local_res10;
  FString local_38;
  
  (this->TypeName).Index = param_1.Index;
  uVar10 = 0;
  local_res10 = 0;
  this->Type = *(FName *)((longlong)
                          UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] +
                         (ulonglong)(param_1.Index & 0x1fff) * 0xc);
  pEVar4 = ::FName::ToEName(&this->Type);
  if (pEVar4 == (EName *)0x0) {
    return;
  }
  if ((this->Type).Number != 0) {
    return;
  }
  uVar7 = 0;
  switch(*pEVar4) {
  case ByteProperty:
  case EnumProperty:
    uVar7 = (this->TypeName).Index;
    if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar7 >> 0xd] + 8 +
                    (ulonglong)(uVar7 & 0x1fff) * 0xc)) {
      uVar10 = (this->TypeName).Index + 1;
    }
    this->EnumName =
         *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar10 >> 0xd] +
                   (ulonglong)(uVar10 & 0x1fff) * 0xc);
    return;
  case IntProperty:
  case BoolProperty:
  case FloatProperty:
  case ObjectProperty:
  case NameProperty:
  case DelegateProperty:
  case DoubleProperty:
  case VectorProperty:
  case RotatorProperty:
  case StrProperty:
  case TextProperty:
  case InterfaceProperty:
  case MulticastDelegateProperty:
  case MulticastDelegateProperty|ByteProperty:
  case LazyObjectProperty:
  case SoftObjectProperty:
  case Int64Property:
  case Int32Property:
  case Int16Property:
  case Int8Property:
  case UInt64Property:
  case UInt32Property:
  case UInt16Property:
  case UInt16Property|ByteProperty:
  case Core:
  case Engine:
  case Editor:
  case CoreUObject:
    goto switchD_142192b8f_default;
  case ArrayProperty:
  case SetProperty:
  case OptionalProperty:
    uVar7 = (this->TypeName).Index;
    if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar7 >> 0xd] + 8 +
                    (ulonglong)(uVar7 & 0x1fff) * 0xc)) {
      uVar10 = (this->TypeName).Index + 1;
    }
    this->InnerType =
         *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar10 >> 0xd] +
                   (ulonglong)(uVar10 & 0x1fff) * 0xc);
    return;
  case StructProperty:
    break;
  case MapProperty:
    uVar1 = (this->TypeName).Index;
    if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar1 >> 0xd] + 8 +
                    (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
      uVar7 = (this->TypeName).Index + 1;
    }
    this->InnerType =
         *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar7 >> 0xd] +
                   (ulonglong)(uVar7 & 0x1fff) * 0xc);
    uVar7 = (this->TypeName).Index;
    uVar8 = (ulonglong)(uVar7 & 0x1fff);
    lVar9 = (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar7 >> 0xd] + uVar8 * 0xc;
    if (1 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar7 >> 0xd] + 8 +
                    uVar8 * 0xc)) {
      lVar6 = lVar9 + 0xc;
      iVar11 = 1;
      do {
        iVar11 = iVar11 + -1 + *(int *)(lVar6 + 8);
        lVar6 = lVar6 + 0xc;
      } while (0 < iVar11);
      lVar6 = lVar6 - lVar9;
      lVar9 = lVar6 / 6 + (lVar6 >> 0x3f);
      uVar10 = ((int)(lVar9 >> 1) - (int)(lVar9 >> 0x3f)) + (this->TypeName).Index;
    }
    this->ValueType =
         *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar10 >> 0xd] +
                   (ulonglong)(uVar10 & 0x1fff) * 0xc);
    return;
  default:
    return;
  }
  uVar1 = (this->TypeName).Index;
  if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar1 >> 0xd] + 8 +
                  (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
    uVar10 = (this->TypeName).Index + 1;
  }
  this->StructName =
       *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar10 >> 0xd] +
                 (ulonglong)(uVar10 & 0x1fff) * 0xc);
  uVar10 = (this->TypeName).Index;
  uVar8 = (ulonglong)(uVar10 & 0x1fff);
  lVar9 = (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar10 >> 0xd] + uVar8 * 0xc;
  if (1 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar10 >> 0xd] + 8 +
                  uVar8 * 0xc)) {
    lVar6 = lVar9 + 0xc;
    iVar11 = 1;
    do {
      iVar11 = iVar11 + -1 + *(int *)(lVar6 + 8);
      lVar6 = lVar6 + 0xc;
    } while (0 < iVar11);
    uVar7 = (int)((lVar6 - lVar9) / 0xc) + (this->TypeName).Index;
  }
  local_res8 = *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar7 >> 0xd] +
                         (ulonglong)(uVar7 & 0x1fff) * 0xc);
  bVar2 = false;
  if (local_res8 == (FName)0x0) {
LAB_142192ca4:
    bVar12 = bVar2;
    bVar2 = true;
  }
  else {
    bVar12 = true;
    pFVar5 = ::FName::ToString(&local_res8,&local_38);
    bVar3 = FGuid::Parse(pFVar5,&this->StructGuid);
    bVar2 = true;
    if (!bVar3) goto LAB_142192ca4;
    bVar2 = false;
  }
  if ((bVar12) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    (this->StructGuid).C = 0;
    (this->StructGuid).D = 0;
    (this->StructGuid).A = 0;
    (this->StructGuid).B = 0;
  }
switchD_142192b8f_default:
  return;
}

