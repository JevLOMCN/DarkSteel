// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 6

// StaticStruct @ 148b87320

UScriptStruct * __cdecl FStructSerializerBuiltinTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerBuiltinTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerBuiltinTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct,
                         (UObject *)pUVar1,L"StructSerializerBuiltinTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerBuiltinTestStruct.OuterSingleton;
}

// FStructSerializerBuiltinTestStruct @ 148b9c6a0

FStructSerializerBuiltinTestStruct * __thiscall
FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
          (FStructSerializerBuiltinTestStruct *this,FStructSerializerBuiltinTestStruct *param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_1->Guid).B;
  uVar3 = (param_1->Guid).C;
  uVar4 = (param_1->Guid).D;
  (this->Guid).A = (param_1->Guid).A;
  (this->Guid).B = uVar2;
  (this->Guid).C = uVar3;
  (this->Guid).D = uVar4;
  this->Name = param_1->Name;
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.AllocatorInstance.Data = (param_1->String).Data.AllocatorInstance.Data;
  (param_1->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = (param_1->String).Data.ArrayNum;
  (this->String).Data.ArrayMax = (param_1->String).Data.ArrayMax;
  (param_1->String).Data.ArrayNum = 0;
  (param_1->String).Data.ArrayMax = 0;
  FText::FText(&this->Text,&param_1->Text);
  (this->Datetime).Ticks = (param_1->Datetime).Ticks;
  (this->Timespan).Ticks = (param_1->Timespan).Ticks;
  dVar1 = (param_1->Vector).field0_0x0._s_0.Y;
  (this->Vector).field0_0x0._s_0.X = (param_1->Vector).field0_0x0._s_0.X;
  (this->Vector).field0_0x0._s_0.Y = dVar1;
  (this->Vector).field0_0x0._s_0.Z = (param_1->Vector).field0_0x0._s_0.Z;
  dVar1 = (param_1->Vector4).field0_0x0._s_0.Y;
  (this->Vector4).field0_0x0._s_0.X = (param_1->Vector4).field0_0x0._s_0.X;
  (this->Vector4).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Vector4).field0_0x0._s_0.W;
  (this->Vector4).field0_0x0._s_0.Z = (param_1->Vector4).field0_0x0._s_0.Z;
  (this->Vector4).field0_0x0._s_0.W = dVar1;
  dVar1 = (param_1->Rotator).Yaw;
  (this->Rotator).Pitch = (param_1->Rotator).Pitch;
  (this->Rotator).Yaw = dVar1;
  (this->Rotator).Roll = (param_1->Rotator).Roll;
  dVar1 = (param_1->Quat).Y;
  (this->Quat).X = (param_1->Quat).X;
  (this->Quat).Y = dVar1;
  dVar1 = (param_1->Quat).W;
  (this->Quat).Z = (param_1->Quat).Z;
  (this->Quat).W = dVar1;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  return this;
}

// FStructSerializerBuiltinTestStruct @ 148b9c780

FStructSerializerBuiltinTestStruct * __thiscall
FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
          (FStructSerializerBuiltinTestStruct *this,FStructSerializerBuiltinTestStruct *param_1)

{
  ITextData *pIVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  uVar3 = (param_1->Guid).B;
  uVar4 = (param_1->Guid).C;
  uVar5 = (param_1->Guid).D;
  (this->Guid).A = (param_1->Guid).A;
  (this->Guid).B = uVar3;
  (this->Guid).C = uVar4;
  (this->Guid).D = uVar5;
  this->Name = param_1->Name;
  ::FString::FString(&this->String,&param_1->String);
  (this->Text).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Text).TextData.Reference;
  (this->Text).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Text).Flags = (param_1->Text).Flags;
  (this->Datetime).Ticks = (param_1->Datetime).Ticks;
  (this->Timespan).Ticks = (param_1->Timespan).Ticks;
  dVar2 = (param_1->Vector).field0_0x0._s_0.Y;
  (this->Vector).field0_0x0._s_0.X = (param_1->Vector).field0_0x0._s_0.X;
  (this->Vector).field0_0x0._s_0.Y = dVar2;
  (this->Vector).field0_0x0._s_0.Z = (param_1->Vector).field0_0x0._s_0.Z;
  dVar2 = (param_1->Vector4).field0_0x0._s_0.Y;
  (this->Vector4).field0_0x0._s_0.X = (param_1->Vector4).field0_0x0._s_0.X;
  (this->Vector4).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Vector4).field0_0x0._s_0.W;
  (this->Vector4).field0_0x0._s_0.Z = (param_1->Vector4).field0_0x0._s_0.Z;
  (this->Vector4).field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->Rotator).Yaw;
  (this->Rotator).Pitch = (param_1->Rotator).Pitch;
  (this->Rotator).Yaw = dVar2;
  (this->Rotator).Roll = (param_1->Rotator).Roll;
  dVar2 = (param_1->Quat).Y;
  (this->Quat).X = (param_1->Quat).X;
  (this->Quat).Y = dVar2;
  dVar2 = (param_1->Quat).W;
  (this->Quat).Z = (param_1->Quat).Z;
  (this->Quat).W = dVar2;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  return this;
}

// FStructSerializerBuiltinTestStruct @ 148b9c860

FStructSerializerBuiltinTestStruct * __thiscall
FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
          (FStructSerializerBuiltinTestStruct *this)

{
  FGuid::NewGuid(&this->Guid);
  ::FName::FName(&this->Name,L"Test FName");
  ::FString::FString(&this->String,"Test String");
  FText::FromString(&this->Text,"Test Text");
  FDateTime::FDateTime(&this->Datetime,0x800,2,4,8,0x10,0x20,0x40);
  FTimespan::Assign(&this->Timespan,1,2,3,4,5);
  (this->Color).field0_0x0.Bits = 0xff03ff3c;
  (this->Vector4).field0_0x0._s_0.X = 4.0;
  (this->Vector).field0_0x0._s_0.X = 1.0;
  (this->Vector4).field0_0x0._s_0.Y = 5.0;
  (this->Vector).field0_0x0._s_0.Y = 2.0;
  (this->Vector4).field0_0x0._s_0.Z = 6.0;
  (this->Vector).field0_0x0._s_0.Z = 3.0;
  (this->Vector4).field0_0x0._s_0.W = 7.0;
  (this->Rotator).Pitch = 4096.0;
  (this->Rotator).Yaw = 8192.0;
  (this->Rotator).Roll = 16384.0;
  (this->Quat).W = 0.46000000834465027;
  (this->Quat).X = 1.0;
  (this->Quat).Y = 2.0;
  (this->Quat).Z = 3.0;
  return this;
}

// operator= @ 148ba14c0

FStructSerializerBuiltinTestStruct * __thiscall
FStructSerializerBuiltinTestStruct::operator=
          (FStructSerializerBuiltinTestStruct *this,FStructSerializerBuiltinTestStruct *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  uVar4 = (param_1->Guid).B;
  uVar5 = (param_1->Guid).C;
  uVar6 = (param_1->Guid).D;
  (this->Guid).A = (param_1->Guid).A;
  (this->Guid).B = uVar4;
  (this->Guid).C = uVar5;
  (this->Guid).D = uVar6;
  this->Name = param_1->Name;
  ::FString::operator=(&this->String,&param_1->String);
  pIVar1 = (param_1->Text).TextData.Reference;
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Text).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Text).Flags = (param_1->Text).Flags;
  (this->Datetime).Ticks = (param_1->Datetime).Ticks;
  (this->Timespan).Ticks = (param_1->Timespan).Ticks;
  dVar3 = (param_1->Vector).field0_0x0._s_0.Y;
  (this->Vector).field0_0x0._s_0.X = (param_1->Vector).field0_0x0._s_0.X;
  (this->Vector).field0_0x0._s_0.Y = dVar3;
  (this->Vector).field0_0x0._s_0.Z = (param_1->Vector).field0_0x0._s_0.Z;
  dVar3 = (param_1->Vector4).field0_0x0._s_0.Y;
  (this->Vector4).field0_0x0._s_0.X = (param_1->Vector4).field0_0x0._s_0.X;
  (this->Vector4).field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->Vector4).field0_0x0._s_0.W;
  (this->Vector4).field0_0x0._s_0.Z = (param_1->Vector4).field0_0x0._s_0.Z;
  (this->Vector4).field0_0x0._s_0.W = dVar3;
  dVar3 = (param_1->Rotator).Yaw;
  (this->Rotator).Pitch = (param_1->Rotator).Pitch;
  (this->Rotator).Yaw = dVar3;
  (this->Rotator).Roll = (param_1->Rotator).Roll;
  dVar3 = (param_1->Quat).Y;
  (this->Quat).X = (param_1->Quat).X;
  (this->Quat).Y = dVar3;
  dVar3 = (param_1->Quat).W;
  (this->Quat).Z = (param_1->Quat).Z;
  (this->Quat).W = dVar3;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  return this;
}

// operator== @ 148ba1a90

bool __thiscall
FStructSerializerBuiltinTestStruct::operator==
          (FStructSerializerBuiltinTestStruct *this,FStructSerializerBuiltinTestStruct *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  FText *this_00;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((((param_1->Guid).D != (this->Guid).D || (param_1->Guid).C != (this->Guid).C) ||
      (param_1->Guid).B != (this->Guid).B) || (param_1->Guid).A != (this->Guid).A) {
    return false;
  }
  if (this->Name != param_1->Name) {
    return false;
  }
  iVar6 = (this->String).Data.ArrayNum;
  iVar1 = (param_1->String).Data.ArrayNum;
  if (iVar6 == iVar1) {
    if (iVar6 < 2) goto LAB_148ba1b05;
    iVar6 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->String).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->String).Data.AllocatorInstance.Data);
    bVar7 = iVar6 == 0;
  }
  else {
    bVar7 = iVar6 + iVar1 == 1;
  }
  if (!bVar7) {
    return false;
  }
LAB_148ba1b05:
  this_00 = &this->Text;
  bVar7 = FText::EqualTo(this_00,&param_1->Text,Default);
  if ((((((bVar7) && ((this->Datetime).Ticks == (param_1->Datetime).Ticks)) &&
        (lVar2 = (param_1->Timespan).Ticks, (this->Timespan).Ticks == lVar2)) &&
       ((((param_1->Vector).field0_0x0._s_0.X == (this->Vector).field0_0x0._s_0.X &&
         ((param_1->Vector).field0_0x0._s_0.Y == (this->Vector).field0_0x0._s_0.Y)) &&
        (((param_1->Vector).field0_0x0._s_0.Z == (this->Vector).field0_0x0._s_0.Z &&
         (((param_1->Vector4).field0_0x0._s_0.X == (this->Vector4).field0_0x0._s_0.X &&
          ((param_1->Vector4).field0_0x0._s_0.Y == (this->Vector4).field0_0x0._s_0.Y)))))))) &&
      ((param_1->Vector4).field0_0x0._s_0.Z == (this->Vector4).field0_0x0._s_0.Z)) &&
     (((((param_1->Vector4).field0_0x0._s_0.W == (this->Vector4).field0_0x0._s_0.W &&
        ((param_1->Rotator).Pitch == (this->Rotator).Pitch)) &&
       ((param_1->Rotator).Yaw == (this->Rotator).Yaw)) &&
      ((param_1->Rotator).Roll == (this->Rotator).Roll)))) {
    lVar8 = -(ulonglong)((param_1->Quat).W == (this->Quat).W);
    lVar9 = -(ulonglong)((this->Quat).Y == (param_1->Quat).Y);
    auVar3._8_4_ = (int)lVar8;
    auVar3._0_8_ = -(ulonglong)((param_1->Quat).Z == (this->Quat).Z);
    auVar3._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    iVar6 = movmskpd((int)this_00,auVar3);
    auVar4._8_4_ = (int)lVar9;
    auVar4._0_8_ = -(ulonglong)((this->Quat).X == (param_1->Quat).X);
    auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar5 = movmskpd((int)lVar2,auVar4);
    if (((iVar6 << 2 | uVar5) == 0xf) &&
       ((this->Color).field0_0x0.Bits == (param_1->Color).field0_0x0.Bits)) {
      return true;
    }
  }
  return false;
}

