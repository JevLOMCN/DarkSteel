// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// StaticClass @ 142c7ae00

UClass * __cdecl UTypedElementHandleLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementHandleLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementHandleLibrary",
               &Z_Registration_Info_UClass_UTypedElementHandleLibrary.InnerSingleton,
               StaticRegisterNativesUTypedElementHandleLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UTypedElementHandleLibrary>,
               InternalVTableHelperCtorCaller<UTypedElementHandleLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementHandleLibrary.InnerSingleton;
}

// UTypedElementHandleLibrary @ 142c7d5b0

UTypedElementHandleLibrary * __thiscall
UTypedElementHandleLibrary::UTypedElementHandleLibrary
          (UTypedElementHandleLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UTypedElementHandleLibrary__6B_;
  return this;
}

// UTypedElementHandleLibrary @ 142c7d5e0

UTypedElementHandleLibrary * __thiscall
UTypedElementHandleLibrary::UTypedElementHandleLibrary
          (UTypedElementHandleLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UTypedElementHandleLibrary__6B_;
  return this;
}

// ~UTypedElementHandleLibrary @ 142c7d680

void __thiscall
UTypedElementHandleLibrary::~UTypedElementHandleLibrary(UTypedElementHandleLibrary *this)

{
  *(undefined ***)this = &___7UTypedElementHandleLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142c7df40

UClass * __cdecl UTypedElementHandleLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementHandleLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementHandleLibrary",
               &Z_Registration_Info_UClass_UTypedElementHandleLibrary.InnerSingleton,
               StaticRegisterNativesUTypedElementHandleLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UTypedElementHandleLibrary>,
               InternalVTableHelperCtorCaller<UTypedElementHandleLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementHandleLibrary.InnerSingleton;
}

// StaticRegisterNativesUTypedElementHandleLibrary @ 142c7e3b0

void __cdecl UTypedElementHandleLibrary::StaticRegisterNativesUTypedElementHandleLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementHandleLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEqual @ 142c80920

void __cdecl UTypedElementHandleLibrary::execEqual(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10);
  }
  ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  local_18 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar3 = &local_10;
  if (ppvVar2 != (void **)0x0) {
    ppvVar3 = ppvVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar2 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *ppvVar3 == *ppvVar2;
  if (local_18 != (void *)0x0) {
    *(int *)((longlong)local_18 + 8) = *(int *)((longlong)local_18 + 8) + -1;
    if (*(int *)((longlong)local_18 + 8) == 0) {
      ::operator_delete(local_18,0x10);
      local_18 = (void *)0x0;
    }
  }
  if (local_10 != (void *)0x0) {
    *(int *)((longlong)local_10 + 8) = *(int *)((longlong)local_10 + 8) + -1;
    if (*(int *)((longlong)local_10 + 8) == 0) {
      ::operator_delete(local_10,0x10);
    }
  }
  return;
}

// execIsSet @ 142c81250

void __cdecl UTypedElementHandleLibrary::execIsSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_res10;
  
  local_res10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  ppvVar3 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*ppvVar3 == (longlong *)0x0) || (*(longlong *)*ppvVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_res10 != (void *)0x0) {
    *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
    if (*(int *)((longlong)local_res10 + 8) == 0) {
      ::operator_delete(local_res10,0x10);
    }
  }
  return;
}

// execNotEqual @ 142c81440

void __cdecl
UTypedElementHandleLibrary::execNotEqual(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10);
  }
  ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  local_18 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar3 = &local_10;
  if (ppvVar2 != (void **)0x0) {
    ppvVar3 = ppvVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar2 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *ppvVar3 != *ppvVar2;
  if (local_18 != (void *)0x0) {
    *(int *)((longlong)local_18 + 8) = *(int *)((longlong)local_18 + 8) + -1;
    if (*(int *)((longlong)local_18 + 8) == 0) {
      ::operator_delete(local_18,0x10);
      local_18 = (void *)0x0;
    }
  }
  if (local_10 != (void *)0x0) {
    *(int *)((longlong)local_10 + 8) = *(int *)((longlong)local_10 + 8) + -1;
    if (*(int *)((longlong)local_10 + 8) == 0) {
      ::operator_delete(local_10,0x10);
    }
  }
  return;
}

// execRelease @ 142c81660

void __cdecl UTypedElementHandleLibrary::execRelease(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  void **ppvVar3;
  void *local_res10;
  
  local_res10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  ppvVar3 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*ppvVar3 != (void *)0x0) {
    piVar1 = (int *)((longlong)*ppvVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if (*(int *)((longlong)*ppvVar3 + 8) == 0) {
      ::operator_delete(*ppvVar3,0x10);
    }
  }
  *ppvVar3 = (void *)0x0;
  if (local_res10 != (void *)0x0) {
    *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
    if (*(int *)((longlong)local_res10 + 8) == 0) {
      ::operator_delete(local_res10,0x10);
    }
  }
  return;
}

