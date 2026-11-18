// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// StaticClass @ 141e47de0

UClass * __cdecl UBoolProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoolProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"BoolProperty",
               &Z_Registration_Info_UClass_UBoolProperty.InnerSingleton,
               StaticRegisterNativesUBoolProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FBoolProperty,
               L"Engine",InternalConstructor<UBoolProperty>,
               InternalVTableHelperCtorCaller<UBoolProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoolProperty.InnerSingleton;
}

// UBoolProperty @ 141e56770

UBoolProperty * __thiscall UBoolProperty::UBoolProperty(UBoolProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UBoolProperty__6B_;
  return this;
}

// ~UBoolProperty @ 141e57720

void __thiscall UBoolProperty::~UBoolProperty(UBoolProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5b600

UClass * __cdecl UBoolProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoolProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"BoolProperty",
               &Z_Registration_Info_UClass_UBoolProperty.InnerSingleton,
               StaticRegisterNativesUBoolProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FBoolProperty,
               L"Engine",InternalConstructor<UBoolProperty>,
               InternalVTableHelperCtorCaller<UBoolProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoolProperty.InnerSingleton;
}

// Serialize @ 141e5fd80

void __thiscall UBoolProperty::Serialize(UBoolProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUBoolProperty @ 141e60600

void __cdecl UBoolProperty::StaticRegisterNativesUBoolProperty(void)

{
  return;
}

// UBoolProperty @ 142162b70

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x000142162bd3 */
/* WARNING: Removing unreachable block (ram,0x000142162bdf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

UBoolProperty * __thiscall
UBoolProperty::UBoolProperty(UBoolProperty *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UBoolProperty *pUVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UBoolProperty__6B_;
  this->FieldMask = '\x01';
  this->_padding_ = this->_padding_ & 0xffffffffbffffdff;
  this->_padding_ = this->_padding_ | 0x1000000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->FieldSize = '\x01';
  this->ByteOffset = '\0';
  this->ByteMask = '\x01';
  this->FieldMask = '\x01';
  if (((uint)this->FieldSize != *(uint *)((longlong)&this->_padding_ + 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int32)FieldSize == ElementSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                         ,0x10b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UBoolProperty *)(*pcVar1)();
    return pUVar3;
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                         ,0x10c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UBoolProperty *)(*pcVar1)();
    return pUVar3;
  }
  if ((this->FieldMask == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                         ,0x10d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UBoolProperty *)(*pcVar1)();
    return pUVar3;
  }
  if ((this->ByteMask == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ByteMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                         ,0x10e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UBoolProperty *)(*pcVar1)();
    return pUVar3;
  }
  return this;
}

// UBoolProperty @ 142162cb0

UBoolProperty * __thiscall
UBoolProperty::UBoolProperty
          (UBoolProperty *this,FObjectInitializer *param_1,ECppProperty param_2,int param_3,
          EPropertyFlags param_4,uint param_5,uint param_6,bool param_7)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = param_4 | CPF_HasGetValueTypeHash;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UBoolProperty__6B_;
  *(undefined4 *)&this->_padding_ = 1;
  *(int *)((longlong)&this->_padding_ + 4) = param_3;
  this->FieldSize = '\0';
  this->ByteOffset = '\0';
  this->ByteMask = '\x01';
  this->FieldMask = '\x01';
  SetBoolSize(this,param_6,param_7,param_5);
  return this;
}

// UBoolProperty @ 142162d30

UBoolProperty * __thiscall
UBoolProperty::UBoolProperty
          (UBoolProperty *this,ECppProperty param_1,int param_2,EPropertyFlags param_3,uint param_4,
          uint param_5,bool param_6)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UBoolProperty__6B_;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = param_3 | CPF_HasGetValueTypeHash;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  this->FieldSize = '\0';
  this->ByteOffset = '\0';
  this->ByteMask = '\x01';
  this->FieldMask = '\x01';
  SetBoolSize(this,param_5,param_6,param_4);
  return this;
}

// Serialize @ 14218aa70

void __thiscall UBoolProperty::Serialize(UBoolProperty *this,FArchive *param_1)

{
  longlong *plVar1;
  char local_res8 [8];
  byte local_res10 [8];
  
  UProperty::Serialize((UProperty *)this,param_1);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = *(byte *)((longlong)&this->_padding_ + 4);
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  local_res8[0] = '\0';
  if ((param_1->field_0x28 & 1) == 0) {
    if ((((this->_padding_ & 0x10) == 0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
       ((param_1->field_0x28 & 4) != 0)) {
      local_res8[0] = this->FieldMask == 0xff;
    }
    else {
      local_res8[0] = false;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if (*plVar1 + 1U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 1;
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(char *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
      SetBoolSize(this,(uint)local_res10[0],local_res8[0] != '\0',0);
      return;
    }
  }
  return;
}

// SetBoolSize @ 142191510

void __thiscall
UBoolProperty::SetBoolSize(UBoolProperty *this,uint param_1,bool param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  uchar uVar3;
  bool bVar4;
  ulonglong uVar5;
  uint local_res18 [4];
  
  uVar5 = this->_padding_ & 0xffffffffbffffdffU | 0x1000000000;
  if (param_2) {
    uVar5 = this->_padding_ | 0x1040000200;
  }
  this->_padding_ = uVar5;
  local_res18[0] = 1;
  if (param_3 != 0) {
    local_res18[0] = param_3;
  }
  *(uint *)((longlong)&this->_padding_ + 4) = param_1;
  this->FieldSize = (uchar)param_1;
  this->ByteOffset = '\0';
  if (param_2) {
    this->ByteMask = '\x01';
    uVar3 = 0xff;
  }
  else {
    if (param_1 != 0) {
      uVar5 = 0;
      do {
        uVar3 = *(uchar *)((longlong)local_res18 + uVar5);
        this->ByteMask = uVar3;
        if (uVar3 != '\0') break;
        bVar2 = (char)uVar5 + 1;
        uVar5 = (ulonglong)bVar2;
        this->ByteOffset = bVar2;
      } while (bVar2 < param_1);
    }
    uVar3 = this->ByteMask;
  }
  this->FieldMask = uVar3;
  if (this->FieldSize != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int32)FieldSize == ElementSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                       ,0x10b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                       ,0x10c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->FieldMask == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldMask != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                       ,0x10d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ByteMask == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ByteMask != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                       ,0x10e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

