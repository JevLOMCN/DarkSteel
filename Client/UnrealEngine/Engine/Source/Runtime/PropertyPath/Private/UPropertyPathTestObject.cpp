// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 22

// GetFloat_WrapperImpl @ 14446d950

void __cdecl UPropertyPathTestObject::GetFloat_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x179) = 1;
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x48);
  return;
}

// SetFloat_WrapperImpl @ 14446d970

void __cdecl UPropertyPathTestObject::SetFloat_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  return;
}

// GetStruct_WrapperImpl @ 14446d990

void __cdecl UPropertyPathTestObject::GetStruct_WrapperImpl(void *param_1,void *param_2)

{
  FPropertyPathTestStruct local_68;
  
  *(undefined1 *)((longlong)param_1 + 0x179) = 1;
  FPropertyPathTestStruct::FPropertyPathTestStruct
            (&local_68,(FPropertyPathTestStruct *)((longlong)param_1 + 0x50));
  FPropertyPathTestStruct::operator=(param_2,&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  return;
}

// SetStruct_WrapperImpl @ 14446d9e0

void __cdecl UPropertyPathTestObject::SetStruct_WrapperImpl(void *param_1,void *param_2)

{
  FPropertyPathTestStruct *this;
  FPropertyPathTestStruct local_68;
  
  this = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,param_2);
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  FPropertyPathTestStruct::operator=((FPropertyPathTestStruct *)((longlong)param_1 + 0x50),this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(this);
  return;
}

// GetStructRef_WrapperImpl @ 14446da30

void __cdecl UPropertyPathTestObject::GetStructRef_WrapperImpl(void *param_1,void *param_2)

{
  FPropertyPathTestStruct *pFVar1;
  FPropertyPathTestStruct local_68;
  
  *(undefined1 *)((longlong)param_1 + 0x179) = 1;
  pFVar1 = FPropertyPathTestStruct::FPropertyPathTestStruct
                     (&local_68,(FPropertyPathTestStruct *)((longlong)param_1 + 0xb0));
  FPropertyPathTestStruct::operator=(param_2,pFVar1);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  return;
}

// SetStructRef_WrapperImpl @ 14446da80

void __cdecl UPropertyPathTestObject::SetStructRef_WrapperImpl(void *param_1,void *param_2)

{
  FPropertyPathTestStruct *this;
  FPropertyPathTestStruct local_68;
  
  this = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,param_2);
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  FPropertyPathTestStruct::operator=((FPropertyPathTestStruct *)((longlong)param_1 + 0xb0),this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(this);
  return;
}

// GetStructConstRef_WrapperImpl @ 14446dae0

void __cdecl UPropertyPathTestObject::GetStructConstRef_WrapperImpl(void *param_1,void *param_2)

{
  FPropertyPathTestStruct *pFVar1;
  FPropertyPathTestStruct local_68;
  
  *(undefined1 *)((longlong)param_1 + 0x179) = 1;
  pFVar1 = FPropertyPathTestStruct::FPropertyPathTestStruct
                     (&local_68,(FPropertyPathTestStruct *)((longlong)param_1 + 0x110));
  FPropertyPathTestStruct::operator=(param_2,pFVar1);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  return;
}

// SetStructConstRef_WrapperImpl @ 14446db30

void __cdecl UPropertyPathTestObject::SetStructConstRef_WrapperImpl(void *param_1,void *param_2)

{
  FPropertyPathTestStruct *this;
  FPropertyPathTestStruct local_68;
  
  this = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,param_2);
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  FPropertyPathTestStruct::operator=((FPropertyPathTestStruct *)((longlong)param_1 + 0x110),this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(this);
  return;
}

// StaticClass @ 14446db90

UClass * __cdecl UPropertyPathTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyPathTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PropertyPath",L"PropertyPathTestObject",
               &Z_Registration_Info_UClass_UPropertyPathTestObject.InnerSingleton,
               StaticRegisterNativesUPropertyPathTestObject,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyPathTestObject>,
               InternalVTableHelperCtorCaller<UPropertyPathTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyPathTestObject.InnerSingleton;
}

// UPropertyPathTestObject @ 14448a700

UPropertyPathTestObject * __thiscall
UPropertyPathTestObject::UPropertyPathTestObject
          (UPropertyPathTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Bool = false;
  this->EnumOne = '\0';
  this->EnumTwo = '\0';
  this->EnumThree = '\0';
  this->_padding_ = (longlong)&___7UPropertyPathTestObject__6B_;
  (this->EnumFour).Value = '\0';
  this->Integer = 0;
  ::FString::FString(&this->String,"Default");
  this->Float = 0.0;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&this->Struct);
  FPropertyPathTestStruct::FPropertyPathTestStruct(&this->StructRef);
  FPropertyPathTestStruct::FPropertyPathTestStruct(&this->StructConstRef);
  (this->InnerObject).field0_0x0.DebugPtr = (UPropertyPathTestObject *)0x0;
  this->bSetterCalled = false;
  this->bGetterCalled = false;
  return this;
}

// UPropertyPathTestObject @ 14448a790

UPropertyPathTestObject * __thiscall
UPropertyPathTestObject::UPropertyPathTestObject
          (UPropertyPathTestObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Bool = false;
  this->EnumOne = '\0';
  this->EnumTwo = '\0';
  this->EnumThree = '\0';
  this->_padding_ = (longlong)&___7UPropertyPathTestObject__6B_;
  (this->EnumFour).Value = '\0';
  this->Integer = 0;
  ::FString::FString(&this->String,"Default");
  this->Float = 0.0;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&this->Struct);
  FPropertyPathTestStruct::FPropertyPathTestStruct(&this->StructRef);
  FPropertyPathTestStruct::FPropertyPathTestStruct(&this->StructConstRef);
  (this->InnerObject).field0_0x0.DebugPtr = (UPropertyPathTestObject *)0x0;
  this->bSetterCalled = false;
  this->bGetterCalled = false;
  return this;
}

// operator== @ 14448ac00

bool __thiscall
UPropertyPathTestObject::operator==(UPropertyPathTestObject *this,UPropertyPathTestObject *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  do {
    if ((((this->Bool != param_1->Bool) || (this->Integer != param_1->Integer)) ||
        ((this->EnumOne).Value != (param_1->EnumOne).Value)) ||
       ((((this->EnumTwo).Value != (param_1->EnumTwo).Value ||
         ((this->EnumThree).Value != (param_1->EnumThree).Value)) ||
        ((this->EnumFour).Value != (param_1->EnumFour).Value)))) {
      return true;
    }
    iVar2 = (this->String).Data.ArrayNum;
    iVar1 = (param_1->String).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->String).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->String).Data.AllocatorInstance.Data);
        bVar3 = iVar2 == 0;
        goto LAB_14448ac82;
      }
    }
    else {
      bVar3 = iVar2 + iVar1 == 1;
LAB_14448ac82:
      if (!bVar3) {
        return true;
      }
    }
    if (param_1->Float != this->Float) {
      return true;
    }
    bVar3 = FPropertyPathTestStruct::operator==(&this->Struct,&param_1->Struct);
    if (!bVar3) {
      return true;
    }
    bVar3 = FPropertyPathTestStruct::operator==(&this->StructRef,&param_1->StructRef);
    if (!bVar3) {
      return true;
    }
    bVar3 = FPropertyPathTestStruct::operator==(&this->StructConstRef,&param_1->StructConstRef);
    if (!bVar3) {
      return true;
    }
    if (this->bSetterCalled != param_1->bSetterCalled) {
      return true;
    }
    if (this->bGetterCalled != param_1->bGetterCalled) {
      return true;
    }
    this = (this->InnerObject).field0_0x0.DebugPtr;
    if (this == (UPropertyPathTestObject *)0x0) {
      return true;
    }
    param_1 = (param_1->InnerObject).field0_0x0.DebugPtr;
  } while( true );
}

// GetPrivateStaticClass @ 14448de70

UClass * __cdecl UPropertyPathTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyPathTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PropertyPath",L"PropertyPathTestObject",
               &Z_Registration_Info_UClass_UPropertyPathTestObject.InnerSingleton,
               StaticRegisterNativesUPropertyPathTestObject,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyPathTestObject>,
               InternalVTableHelperCtorCaller<UPropertyPathTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyPathTestObject.InnerSingleton;
}

// StaticRegisterNativesUPropertyPathTestObject @ 144495310

void __cdecl UPropertyPathTestObject::StaticRegisterNativesUPropertyPathTestObject(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UPropertyPathTestObject_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFloat @ 144495ab0

void __cdecl UPropertyPathTestObject::execGetFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined4 *)&param_1[1].field_0x20;
  param_1[9].field_0x11 = 1;
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetStruct @ 144495ae0

void __cdecl UPropertyPathTestObject::execGetStruct(UObject *param_1,FFrame *param_2,void *param_3)

{
  FPropertyPathTestStruct local_68;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[9].field_0x11 = 1;
  FPropertyPathTestStruct::FPropertyPathTestStruct
            (&local_68,(FPropertyPathTestStruct *)(param_1 + 2));
  FPropertyPathTestStruct::operator=(param_3,&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  return;
}

// execGetStructConstRef @ 144495b40

void __cdecl
UPropertyPathTestObject::execGetStructConstRef(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[9].field_0x11 = 1;
  FPropertyPathTestStruct::operator=(param_3,(FPropertyPathTestStruct *)&param_1[6].field_0x20);
  return;
}

// execGetStructRef @ 144495b80

void __cdecl
UPropertyPathTestObject::execGetStructRef(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[9].field_0x11 = 1;
  FPropertyPathTestStruct::operator=(param_3,(FPropertyPathTestStruct *)&param_1[4].field_0x10);
  return;
}

// execSetFloat @ 144495bc0

void __cdecl UPropertyPathTestObject::execSetFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[1].field_0x20 = local_res8[0];
  param_1[9].field_0x10 = 1;
  return;
}

// execSetStruct @ 144495c50

void __cdecl UPropertyPathTestObject::execSetStruct(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPropertyPathTestStruct *this;
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  local_c8.Bool = false;
  local_c8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  local_c8.Integer = 0;
  local_c8.EnumOne.Value = '\0';
  local_c8.EnumTwo.Value = '\0';
  local_c8.EnumThree.Value = '\0';
  local_c8.EnumFour.Value = '\0';
  ::FString::FString(&local_c8.String,"Default");
  local_c8.Float = 0.0;
  local_c8.InnerStruct.String.Data.ArrayNum = 0;
  local_c8.InnerStruct.String.Data.ArrayMax = 0;
  local_c8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  local_c8.InnerStruct.Float = 0.5;
  local_c8.InnerStruct.Bool = false;
  local_c8.InnerStruct.EnumOne.Value = '\x02';
  local_c8.InnerStruct.EnumTwo.Value = '\x02';
  local_c8.InnerStruct.EnumThree.Value = '\x02';
  local_c8.InnerStruct.EnumFour.Value = '\x02';
  local_c8.InnerStruct._17_3_ = 0;
  local_c8.InnerStruct.Integer = 0;
  ::FString::FString(&local_c8.InnerStruct.String,"Default");
  local_c8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_c8);
  param_1[9].field_0x10 = 1;
  FPropertyPathTestStruct::operator=((FPropertyPathTestStruct *)(param_1 + 2),this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  return;
}

// execSetStructConstRef @ 144495d80

void __cdecl
UPropertyPathTestObject::execSetStructConstRef(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPropertyPathTestStruct *this;
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  local_c8.Bool = false;
  local_c8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  local_c8.Integer = 0;
  local_c8.EnumOne.Value = '\0';
  local_c8.EnumTwo.Value = '\0';
  local_c8.EnumThree.Value = '\0';
  local_c8.EnumFour.Value = '\0';
  ::FString::FString(&local_c8.String,"Default");
  local_c8.Float = 0.0;
  local_c8.InnerStruct.String.Data.ArrayNum = 0;
  local_c8.InnerStruct.String.Data.ArrayMax = 0;
  local_c8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  local_c8.InnerStruct.Float = 0.5;
  local_c8.InnerStruct.Bool = false;
  local_c8.InnerStruct.EnumOne.Value = '\x02';
  local_c8.InnerStruct.EnumTwo.Value = '\x02';
  local_c8.InnerStruct.EnumThree.Value = '\x02';
  local_c8.InnerStruct.EnumFour.Value = '\x02';
  local_c8.InnerStruct._17_3_ = 0;
  local_c8.InnerStruct.Integer = 0;
  ::FString::FString(&local_c8.InnerStruct.String,"Default");
  local_c8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_c8);
  param_1[9].field_0x10 = 1;
  FPropertyPathTestStruct::operator=((FPropertyPathTestStruct *)&param_1[6].field_0x20,this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  return;
}

// execSetStructRef @ 144495eb0

void __cdecl
UPropertyPathTestObject::execSetStructRef(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPropertyPathTestStruct *this;
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  local_c8.Bool = false;
  local_c8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  local_c8.Integer = 0;
  local_c8.EnumOne.Value = '\0';
  local_c8.EnumTwo.Value = '\0';
  local_c8.EnumThree.Value = '\0';
  local_c8.EnumFour.Value = '\0';
  ::FString::FString(&local_c8.String,"Default");
  local_c8.Float = 0.0;
  local_c8.InnerStruct.String.Data.ArrayNum = 0;
  local_c8.InnerStruct.String.Data.ArrayMax = 0;
  local_c8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  local_c8.InnerStruct.Float = 0.5;
  local_c8.InnerStruct.Bool = false;
  local_c8.InnerStruct.EnumOne.Value = '\x02';
  local_c8.InnerStruct.EnumTwo.Value = '\x02';
  local_c8.InnerStruct.EnumThree.Value = '\x02';
  local_c8.InnerStruct.EnumFour.Value = '\x02';
  local_c8.InnerStruct._17_3_ = 0;
  local_c8.InnerStruct.Integer = 0;
  ::FString::FString(&local_c8.InnerStruct.String,"Default");
  local_c8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_c8);
  param_1[9].field_0x10 = 1;
  FPropertyPathTestStruct::operator=((FPropertyPathTestStruct *)&param_1[4].field_0x10,this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(this);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  return;
}

