// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 17

// StaticClass @ 141e605e0

UClass * __cdecl UField::StaticClass(void)

{
  <lambda_1> a<StackX_8 [8];
  FUObjectCppClassStaticFunctions aFStackX_10 [3];
  
  if (Z_Registration_Info_UClass_UField.InnerSingleton == (UClass *)0x0) {
    aFStackX_10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Field",&Z_Registration_Info_UClass_UField.InnerSingleton,
               StaticRegisterNativesUField,0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_UField,
               L"Engine",InternalConstructor<UField>,InternalVTableHelperCtorCaller<UField>,
               aFStackX_10,UObject::StaticClass,UObject::StaticClass,a<StackX_8);
  }
  return Z_Registration_Info_UClass_UField.InnerSingleton;
}

// UField @ 141f67920

UField * __thiscall UField::UField(UField *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UField__6B_;
  (this->Next).field0_0x0.DebugPtr = (UField *)0x0;
  return this;
}

// UField @ 141f67950

UField * __thiscall UField::UField(UField *this,EStaticConstructor param_1,EObjectFlags param_2)

{
  UObject::UObject((UObject *)this,EC_StaticConstructor,param_2);
  this->_padding_ = (longlong)&___7UField__6B_;
  (this->Next).field0_0x0.DebugPtr = (UField *)0x0;
  return this;
}

// AddCppProperty @ 141f6d0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UField::AddCppProperty(UField *this,FProperty *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
  return;
}

// Bind @ 141f71340

void __thiscall UField::Bind(UField *this)

{
  return;
}

// GetAuthoredName @ 141f80b60

FString * __thiscall UField::GetAuthoredName(UField *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UClass *pUVar2;
  UField *pUVar3;
  
  pUVar3 = this;
  if (this == (UField *)0x0) goto LAB_141f80ba1;
  while( true ) {
    pUVar2 = UStruct::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) break;
LAB_141f80ba1:
    pUVar3 = (UField *)pUVar3->_padding_;
    if (pUVar3 == (UField *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  (**(code **)(pUVar3->_padding_ + 0x330))(pUVar3,__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// GetOwnerClass @ 141f839a0

UClass * __thiscall UField::GetOwnerClass(UField *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UClass *)0x0;
  do {
    if (((UClass *)this == (UClass *)0x0) || (pUVar2 != (UClass *)0x0)) {
      return pUVar2;
    }
    if ((UClass *)this == (UClass *)0x0) {
LAB_141f839e2:
      pUVar2 = (UClass *)0x0;
    }
    else {
      pUVar3 = UClass::GetPrivateStaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(((UClass *)this)->_padding_ + 0x38) < iVar1) ||
         (pUVar2 = (UClass *)this,
         (longlong *)
         *(undefined1 **)(*(longlong *)(((UClass *)this)->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar3->_padding_)) goto LAB_141f839e2;
    }
    this = (UField *)((UClass *)this)->_padding_;
  } while( true );
}

// GetOwnerStruct @ 141f83a00

UStruct * __thiscall UField::GetOwnerStruct(UField *this)

{
  int iVar1;
  UClass *pUVar2;
  
  if (this == (UField *)0x0) goto LAB_141f83a31;
  while( true ) {
    pUVar2 = UStruct::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(((UStruct *)this)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(((UStruct *)this)->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) break;
LAB_141f83a31:
    this = (UField *)((UStruct *)this)->_padding_;
    if ((UStruct *)this == (UStruct *)0x0) {
      return (UStruct *)0x0;
    }
  }
  return (UStruct *)this;
}

// GetPrivateStaticClass @ 141f84d20

UClass * __cdecl UField::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UField.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Field",&Z_Registration_Info_UClass_UField.InnerSingleton,
               StaticRegisterNativesUField,0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_UField,
               L"Engine",InternalConstructor<UField>,InternalVTableHelperCtorCaller<UField>,
               local_res10,UObject::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UField.InnerSingleton;
}

// HasAllCastFlags @ 141f8b470

bool __thiscall UField::HasAllCastFlags(UField *this,ulong64 param_1)

{
  return (*(ulonglong *)(this->_padding_ + 0xd8) & param_1) == param_1;
}

// HasAnyCastFlags @ 141f8b4b0

bool __thiscall UField::HasAnyCastFlags(UField *this,ulong64 param_1)

{
  return (*(ulonglong *)(this->_padding_ + 0xd8) & param_1) != 0;
}

// NeedsLoadForClient @ 141f93a90

bool __thiscall UField::NeedsLoadForClient(UField *this)

{
  return true;
}

// NeedsLoadForServer @ 141f93aa0

bool __thiscall UField::NeedsLoadForServer(UField *this)

{
  return true;
}

// PostLoad @ 141f945f0

void __thiscall UField::PostLoad(UField *this)

{
  UObject::PostLoad((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x000141f94609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this);
  return;
}

// Serialize @ 141f9d8e0

void __thiscall UField::Serialize(UField *this,FArchive *param_1)

{
  int iVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar1 < 0x1d) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Next);
  }
  return;
}

// Serialize @ 141f9d940

void __thiscall UField::Serialize(UField *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFrameworkObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FFrameworkObjectVersion::GUID);
  if (iVar1 < 0x1d) {
    (**(code **)(this_00->_padding_ + 0x150))(this_00,&this->Next);
  }
  return;
}

// StaticRegisterNativesUField @ 141faddf0

void __cdecl UField::StaticRegisterNativesUField(void)

{
  return;
}

