// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// StaticClass @ 141e4f080

UClass * __cdecl UProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Property",
               &Z_Registration_Info_UClass_UProperty.InnerSingleton,StaticRegisterNativesUProperty,
               0x70,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_FProperty,L"Engine",
               InternalConstructor<UProperty>,InternalVTableHelperCtorCaller<UProperty>,local_res8,
               UField::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProperty.InnerSingleton;
}

// UProperty @ 141e57220

UProperty * __thiscall UProperty::UProperty(UProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7UProperty__6B_;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  return this;
}

// ~UProperty @ 141e57c30

void __thiscall UProperty::~UProperty(UProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d1c0

UClass * __cdecl UProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Property",
               &Z_Registration_Info_UClass_UProperty.InnerSingleton,StaticRegisterNativesUProperty,
               0x70,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_FProperty,L"Engine",
               InternalConstructor<UProperty>,InternalVTableHelperCtorCaller<UProperty>,local_res8,
               UField::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProperty.InnerSingleton;
}

// Serialize @ 141e5ff30

void __thiscall UProperty::Serialize(UProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUProperty @ 141e60860

void __cdecl UProperty::StaticRegisterNativesUProperty(void)

{
  return;
}

// UProperty @ 142162f20

UProperty * __thiscall UProperty::UProperty(UProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ArrayDim = 1;
  this->_padding_ = (longlong)&___7UProperty__6B_;
  this->_padding_ = 0;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  return this;
}

// UProperty @ 142162f60

UProperty * __thiscall
UProperty::UProperty
          (UProperty *this,FObjectInitializer *param_1,ECppProperty param_2,int param_3,
          EPropertyFlags param_4)

{
  UObject::UObject((UObject *)this,param_1);
  this->Offset_Internal = param_3;
  this->_padding_ = (longlong)&___7UProperty__6B_;
  this->PropertyFlags = param_4;
  this->_padding_ = 0;
  this->ArrayDim = 1;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  return this;
}

// UProperty @ 142162fb0

UProperty * __thiscall
UProperty::UProperty(UProperty *this,ECppProperty param_1,int param_2,EPropertyFlags param_3)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->PropertyFlags = param_3;
  this->_padding_ = (longlong)&___7UProperty__6B_;
  this->_padding_ = 0;
  this->ArrayDim = 1;
  this->Offset_Internal = param_2;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  return this;
}

// Serialize @ 14218af60

void __thiscall UProperty::Serialize(UProperty *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  EPropertyFlags local_res8;
  
  UField::Serialize((UField *)this,param_1);
  piVar1 = &this->ArrayDim;
  local_res8 = this->PropertyFlags &
               ~(CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((EPropertyFlags *)plVar3[1] < (EPropertyFlags *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_res8);
    }
  }
  else {
    local_res8 = *(EPropertyFlags *)*plVar3;
    *plVar3 = *plVar3 + 8;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->PropertyFlags =
         this->PropertyFlags &
         (CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
    this->PropertyFlags =
         this->PropertyFlags |
         local_res8 &
         ~(CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  }
  if (((this->PropertyFlags & CPF_EditorOnly) != CPF_None) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsEditorOnlyProperty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyPrivate.cpp"
                         ,0x57,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->RepNotifyFunc);
  if ((param_1->field_0x28 & 1) != 0) {
    this->Offset_Internal = 0;
    this->DestructorLinkNext = (UProperty *)0x0;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  if (((param_1->field_0x28 & 4) == 0) &&
     (iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID),
     iVar7 < 0x15)) {
    return;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->BlueprintReplicationCondition,1);
    return;
  }
  (this->BlueprintReplicationCondition).Value = *puVar4;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  return;
}

