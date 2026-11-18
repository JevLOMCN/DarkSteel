// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 148a27320

UClass * __cdecl UDataLayerAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerAsset",
               &Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton,
               StaticRegisterNativesUDataLayerAsset,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerAsset>,InternalVTableHelperCtorCaller<UDataLayerAsset>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton;
}

// UDataLayerAsset @ 148a426f0

UDataLayerAsset * __thiscall
UDataLayerAsset::UDataLayerAsset(UDataLayerAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
  return this;
}

// UDataLayerAsset @ 148a42720

UDataLayerAsset * __thiscall
UDataLayerAsset::UDataLayerAsset(UDataLayerAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->DataLayerType = Editor;
  this->bSupportsActorFilters = false;
  this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
  (this->DebugColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  return this;
}

// ~UDataLayerAsset @ 148a44670

void __thiscall UDataLayerAsset::~UDataLayerAsset(UDataLayerAsset *this)

{
  this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 148a5a0f0

UClass * __cdecl UDataLayerAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerAsset",
               &Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton,
               StaticRegisterNativesUDataLayerAsset,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerAsset>,InternalVTableHelperCtorCaller<UDataLayerAsset>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton;
}

// GetType @ 148a5b400

EDataLayerType __thiscall UDataLayerAsset::GetType(UDataLayerAsset *this)

{
  return this->DataLayerType;
}

// IsPrivate @ 148a5eae0

bool __thiscall UDataLayerAsset::IsPrivate(UDataLayerAsset *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = UDataLayerInstance::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2 != (UObject *)0x0;
}

// StaticRegisterNativesUDataLayerAsset @ 148a6a370

void __cdecl UDataLayerAsset::StaticRegisterNativesUDataLayerAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UDataLayerAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDebugColor @ 148a6fad0

void __cdecl UDataLayerAsset::execGetDebugColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0xc;
  return;
}

// execGetType @ 148a6fe60

void __cdecl UDataLayerAsset::execGetType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsClientOnly @ 148a6fee0

void __cdecl UDataLayerAsset::execIsClientOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UDataLayerInstance::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
  if (((pUVar2 == (UObject *)0x0) && (param_1[1].field_0x8 == '\0')) &&
     (param_1[1].field_0x10 == '\x01')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsRuntime @ 148a700b0

void __cdecl UDataLayerAsset::execIsRuntime(UObject *param_1,FFrame *param_2,void *param_3)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UDataLayerInstance::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
  if ((pUVar2 == (UObject *)0x0) && (param_1[1].field_0x8 == '\0')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsServerOnly @ 148a70160

void __cdecl UDataLayerAsset::execIsServerOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UDataLayerInstance::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
  if (((pUVar2 == (UObject *)0x0) && (param_1[1].field_0x8 == '\0')) &&
     (param_1[1].field_0x10 == '\x02')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

