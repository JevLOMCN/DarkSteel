// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// StaticClass @ 14a78bf70

UClass * __cdecl UCommonBorderStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBorderStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBorderStyle",
               &Z_Registration_Info_UClass_UCommonBorderStyle.InnerSingleton,
               StaticRegisterNativesUCommonBorderStyle,0xe0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonBorderStyle>,
               InternalVTableHelperCtorCaller<UCommonBorderStyle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBorderStyle.InnerSingleton;
}

// UCommonBorderStyle @ 14a7ac130

UCommonBorderStyle * __thiscall
UCommonBorderStyle::UCommonBorderStyle(UCommonBorderStyle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonBorderStyle__6B_;
  FSlateBrush::FSlateBrush(&this->Background);
  return this;
}

// UCommonBorderStyle @ 14a7ac160

UCommonBorderStyle * __thiscall UCommonBorderStyle::UCommonBorderStyle(UCommonBorderStyle *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UCommonBorderStyle__6B_;
  FSlateBrush::FSlateBrush(&this->Background);
  return this;
}

// ~UCommonBorderStyle @ 14a7b2050

void __thiscall UCommonBorderStyle::~UCommonBorderStyle(UCommonBorderStyle *this)

{
  this->_padding_ = (longlong)&___7UCommonBorderStyle__6B_;
  (this->Background)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Background).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// GetBackgroundBrush @ 14a7e0670

void __thiscall
UCommonBorderStyle::GetBackgroundBrush(UCommonBorderStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->Background);
  return;
}

// GetPrivateStaticClass @ 14a7e4dc0

UClass * __cdecl UCommonBorderStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBorderStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBorderStyle",
               &Z_Registration_Info_UClass_UCommonBorderStyle.InnerSingleton,
               StaticRegisterNativesUCommonBorderStyle,0xe0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonBorderStyle>,
               InternalVTableHelperCtorCaller<UCommonBorderStyle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBorderStyle.InnerSingleton;
}

// StaticRegisterNativesUCommonBorderStyle @ 14a81e3c0

void __cdecl UCommonBorderStyle::StaticRegisterNativesUCommonBorderStyle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCommonBorderStyle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBackgroundBrush @ 14a82d4a0

void __cdecl
UCommonBorderStyle::execGetBackgroundBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)&param_1[1].field_0x8);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

