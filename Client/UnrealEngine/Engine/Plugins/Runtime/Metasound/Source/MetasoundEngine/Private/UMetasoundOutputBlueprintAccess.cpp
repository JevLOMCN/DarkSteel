// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 26

// StaticClass @ 14b2fd690

UClass * __cdecl UMetasoundOutputBlueprintAccess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetasoundOutputBlueprintAccess",
               &Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.InnerSingleton,
               StaticRegisterNativesUMetasoundOutputBlueprintAccess,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetasoundOutputBlueprintAccess>,
               InternalVTableHelperCtorCaller<UMetasoundOutputBlueprintAccess>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.InnerSingleton;
}

// UMetasoundOutputBlueprintAccess @ 14b34d2a0

UMetasoundOutputBlueprintAccess * __thiscall
UMetasoundOutputBlueprintAccess::UMetasoundOutputBlueprintAccess
          (UMetasoundOutputBlueprintAccess *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMetasoundOutputBlueprintAccess__6B_;
  return this;
}

// UMetasoundOutputBlueprintAccess @ 14b34d2d0

UMetasoundOutputBlueprintAccess * __thiscall
UMetasoundOutputBlueprintAccess::UMetasoundOutputBlueprintAccess
          (UMetasoundOutputBlueprintAccess *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMetasoundOutputBlueprintAccess__6B_;
  return this;
}

// ~UMetasoundOutputBlueprintAccess @ 14b352ae0

void __thiscall
UMetasoundOutputBlueprintAccess::~UMetasoundOutputBlueprintAccess
          (UMetasoundOutputBlueprintAccess *this)

{
  *(undefined ***)this = &___7UMetasoundOutputBlueprintAccess__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetBool @ 14b3ae190

bool __cdecl UMetasoundOutputBlueprintAccess::GetBool(FMetaSoundOutput *param_1,bool *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  
  bVar2 = FMetaSoundOutput::IsType<bool>(param_1);
  if (!bVar2) {
    *param_2 = false;
    return false;
  }
  uVar1 = *(undefined1 *)((param_1->Data).Ptr + 1);
  *param_2 = true;
  return (bool)uVar1;
}

// GetFloat @ 14b3b4170

float __cdecl UMetasoundOutputBlueprintAccess::GetFloat(FMetaSoundOutput *param_1,bool *param_2)

{
  float fVar1;
  bool bVar2;
  
  bVar2 = FMetaSoundOutput::IsType<float>(param_1);
  if (!bVar2) {
    *param_2 = false;
    return 0.0;
  }
  fVar1 = *(float *)((param_1->Data).Ptr + 1);
  *param_2 = true;
  return fVar1;
}

// GetInt32 @ 14b3b4e50

int __cdecl UMetasoundOutputBlueprintAccess::GetInt32(FMetaSoundOutput *param_1,bool *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = FMetaSoundOutput::IsType<int>(param_1);
  if (!bVar2) {
    *param_2 = false;
    return 0;
  }
  iVar1 = *(int *)((param_1->Data).Ptr + 1);
  *param_2 = true;
  return iVar1;
}

// GetPrivateStaticClass @ 14b3bfab0

UClass * __cdecl UMetasoundOutputBlueprintAccess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetasoundOutputBlueprintAccess",
               &Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.InnerSingleton,
               StaticRegisterNativesUMetasoundOutputBlueprintAccess,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetasoundOutputBlueprintAccess>,
               InternalVTableHelperCtorCaller<UMetasoundOutputBlueprintAccess>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.InnerSingleton;
}

// GetString @ 14b3c0b80

FString * __cdecl
UMetasoundOutputBlueprintAccess::GetString
          (FString *__return_storage_ptr__,FMetaSoundOutput *param_1,bool *param_2)

{
  bool bVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar1 = FMetaSoundOutput::IsType<FString>(param_1);
  if (!bVar1) {
    *param_2 = false;
    return __return_storage_ptr__;
  }
  ::FString::operator=(__return_storage_ptr__,(FString *)((param_1->Data).Ptr + 1));
  *param_2 = true;
  return __return_storage_ptr__;
}

// GetTimeSeconds @ 14b3c0e70

double __cdecl
UMetasoundOutputBlueprintAccess::GetTimeSeconds(FMetaSoundOutput *param_1,bool *param_2)

{
  IOutputStorage IVar1;
  bool bVar2;
  
  bVar2 = FMetaSoundOutput::IsType<Metasound::FTime>(param_1);
  if (!bVar2) {
    *param_2 = false;
    return 0.0;
  }
  IVar1 = (param_1->Data).Ptr[1];
  *param_2 = true;
  return (double)IVar1;
}

// IsBool @ 14b3c7f60

bool __cdecl UMetasoundOutputBlueprintAccess::IsBool(FMetaSoundOutput *param_1)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 auStackX_8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<bool>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::__l2::TypeName =
           *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (param_1->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<bool>(void)const___ptr64'::__l2::TypeName ==
        *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsFloat @ 14b3c82e0

bool __cdecl UMetasoundOutputBlueprintAccess::IsFloat(FMetaSoundOutput *param_1)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 auStackX_8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<float>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::__l2::TypeName =
           *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (param_1->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<float>(void)const___ptr64'::__l2::TypeName ==
        *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsInt32 @ 14b3c8300

bool __cdecl UMetasoundOutputBlueprintAccess::IsInt32(FMetaSoundOutput *param_1)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 auStackX_8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<int>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::__l2::TypeName =
           *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (param_1->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<int>(void)const___ptr64'::__l2::TypeName ==
        *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsString @ 14b3c8f20

bool __cdecl UMetasoundOutputBlueprintAccess::IsString(FMetaSoundOutput *param_1)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 auStackX_8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<FString>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'::__l2::TypeName =
           *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (param_1->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<FString>(void)const___ptr64'::__l2::TypeName
        == *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsTime @ 14b3c8f30

bool __cdecl UMetasoundOutputBlueprintAccess::IsTime(FMetaSoundOutput *param_1)

{
  IOutputStorage *pIVar1;
  FName *pFVar2;
  undefined1 auStackX_8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar2 = Metasound::GetMetasoundDataTypeName<Metasound::FTime>();
      `public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'::__l2::
      TypeName = *pFVar2;
      _Init_thread_footer(&`public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = (param_1->Data).Ptr;
  if (pIVar1 != (IOutputStorage *)0x0) {
    pFVar2 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
    if (`public:_bool___cdecl_FMetaSoundOutput::IsType<Metasound::FTime>(void)const___ptr64'::__l2::
        TypeName == *pFVar2) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUMetasoundOutputBlueprintAccess @ 14b3e1670

void __cdecl
UMetasoundOutputBlueprintAccess::StaticRegisterNativesUMetasoundOutputBlueprintAccess(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBool @ 14b3f0840

void __cdecl
UMetasoundOutputBlueprintAccess::execGetBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetaSoundOutput *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetaSoundOutput *this;
  uchar *puVar5;
  uchar local_res10 [8];
  FMetaSoundOutput local_28;
  
  local_28._padding_ = 0;
  local_28.Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_28;
  if (pFVar1 != (FMetaSoundOutput *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar4 = 0;
  bVar3 = FMetaSoundOutput::IsType<bool>(this);
  if (bVar3) {
    uVar4 = *(undefined1 *)((this->Data).Ptr + 1);
  }
  *puVar5 = bVar3;
  *(undefined1 *)param_3 = uVar4;
  if (local_28.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_28.Data.Ptr)(local_28.Data.Ptr,1);
  }
  return;
}

// execGetFloat @ 14b3f0dc0

void __cdecl
UMetasoundOutputBlueprintAccess::execGetFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetaSoundOutput *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FMetaSoundOutput *this;
  uchar *puVar4;
  undefined4 uVar5;
  uchar local_res10 [8];
  FMetaSoundOutput local_38 [2];
  
  local_38[0]._padding_ = 0;
  local_38[0].Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pFVar1 = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_38;
  if (pFVar1 != (FMetaSoundOutput *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar5 = 0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundOutput::IsType<float>(this);
  if (bVar3) {
    uVar5 = *(undefined4 *)((this->Data).Ptr + 1);
  }
  *puVar4 = bVar3;
  *(undefined4 *)param_3 = uVar5;
  if (local_38[0].Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_38[0].Data.Ptr)(local_38[0].Data.Ptr,1);
  }
  return;
}

// execGetInt32 @ 14b3f1850

void __cdecl
UMetasoundOutputBlueprintAccess::execGetInt32(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetaSoundOutput *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FMetaSoundOutput *this;
  undefined4 uVar4;
  uchar *puVar5;
  uchar local_res10 [8];
  FMetaSoundOutput local_28;
  
  uVar4 = 0;
  local_28._padding_ = 0;
  local_28.Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_28;
  if (pFVar1 != (FMetaSoundOutput *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetaSoundOutput::IsType<int>(this);
  if (bVar3) {
    uVar4 = *(undefined4 *)((this->Data).Ptr + 1);
  }
  *puVar5 = bVar3;
  *(undefined4 *)param_3 = uVar4;
  if (local_28.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_28.Data.Ptr)(local_28.Data.Ptr,1);
  }
  return;
}

// execGetString @ 14b3f38c0

void __cdecl
UMetasoundOutputBlueprintAccess::execGetString(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FMetaSoundOutput *pFVar2;
  FProperty *pFVar3;
  IOutputStorage *pIVar4;
  ForAnyElementType _Src;
  bool bVar5;
  uchar uVar6;
  IOutputStorage *pIVar7;
  FMetaSoundOutput *this;
  uchar *puVar8;
  uchar local_res10 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  FMetaSoundOutput local_28;
  
  local_28._padding_ = 0;
  local_28.Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_28;
  if (pFVar2 != (FMetaSoundOutput *)0x0) {
    this = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  puVar8 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = FMetaSoundOutput::IsType<FString>(this);
  uVar6 = '\0';
  if (bVar5) {
    pIVar4 = (this->Data).Ptr;
    pIVar7 = pIVar4 + 1;
    if ((IOutputStorage *)&local_38 != pIVar7) {
      iVar1 = *(int *)(pIVar4 + 2);
      _Src.Data = *(FScriptContainerElement **)pIVar7;
      local_30 = CONCAT44(local_30._4_4_,iVar1);
      if (((iVar1 != 0) || (local_30._4_4_ != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,local_30._4_4_,&local_38,iVar1,(int *)((longlong)&local_30 + 4)),
         iVar1 != 0)) {
        memcpy(local_38.Data,_Src.Data,(longlong)iVar1 * 2);
      }
    }
    uVar6 = '\x01';
  }
  *puVar8 = uVar6;
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_30;
    *(int *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if ((IOutputStorage)local_38.Data != (IOutputStorage)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_28.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_28.Data.Ptr)(local_28.Data.Ptr,1);
  }
  return;
}

// execGetTimeSeconds @ 14b3f3e70

void __cdecl
UMetasoundOutputBlueprintAccess::execGetTimeSeconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  IOutputStorage IVar1;
  FMetaSoundOutput *pFVar2;
  FProperty *pFVar3;
  bool bVar4;
  FMetaSoundOutput *this;
  uchar *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uchar local_res10 [8];
  FMetaSoundOutput local_38 [2];
  
  local_38[0]._padding_ = 0;
  local_38[0].Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pFVar2 = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_38;
  if (pFVar2 != (FMetaSoundOutput *)0x0) {
    this = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = FMetaSoundOutput::IsType<Metasound::FTime>(this);
  if (bVar4) {
    IVar1 = (this->Data).Ptr[1];
    uVar6 = IVar1._0_4_;
    uVar7 = IVar1._4_4_;
  }
  *puVar5 = bVar4;
  *(ulonglong *)param_3 = CONCAT44(uVar7,uVar6);
  if (local_38[0].Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_38[0].Data.Ptr)(local_38[0].Data.Ptr,1);
  }
  return;
}

// execIsBool @ 14b3f4170

void __cdecl
UMetasoundOutputBlueprintAccess::execIsBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMetaSoundOutput *this;
  FMetaSoundOutput local_18;
  
  local_18._padding_ = 0;
  local_18.Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FMetaSoundOutput *)param_2->MostRecentPropertyAddress != (FMetaSoundOutput *)0x0) {
    this = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundOutput::IsType<bool>(this);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_18.Data.Ptr)(local_18.Data.Ptr,1);
  }
  return;
}

// execIsFloat @ 14b3f4230

void __cdecl
UMetasoundOutputBlueprintAccess::execIsFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMetaSoundOutput *this;
  FMetaSoundOutput local_18;
  
  local_18._padding_ = 0;
  local_18.Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FMetaSoundOutput *)param_2->MostRecentPropertyAddress != (FMetaSoundOutput *)0x0) {
    this = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundOutput::IsType<float>(this);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_18.Data.Ptr)(local_18.Data.Ptr,1);
  }
  return;
}

// execIsInt32 @ 14b3f42f0

void __cdecl
UMetasoundOutputBlueprintAccess::execIsInt32(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMetaSoundOutput *this;
  FMetaSoundOutput local_18;
  
  local_18._padding_ = 0;
  local_18.Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FMetaSoundOutput *)param_2->MostRecentPropertyAddress != (FMetaSoundOutput *)0x0) {
    this = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundOutput::IsType<int>(this);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_18.Data.Ptr)(local_18.Data.Ptr,1);
  }
  return;
}

// execIsString @ 14b3f4520

void __cdecl
UMetasoundOutputBlueprintAccess::execIsString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMetaSoundOutput *this;
  FMetaSoundOutput local_18;
  
  local_18._padding_ = 0;
  local_18.Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FMetaSoundOutput *)param_2->MostRecentPropertyAddress != (FMetaSoundOutput *)0x0) {
    this = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundOutput::IsType<FString>(this);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_18.Data.Ptr)(local_18.Data.Ptr,1);
  }
  return;
}

// execIsTime @ 14b3f45e0

void __cdecl
UMetasoundOutputBlueprintAccess::execIsTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMetaSoundOutput *this;
  FMetaSoundOutput local_18;
  
  local_18._padding_ = 0;
  local_18.Data.Ptr = (IOutputStorage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FMetaSoundOutput *)param_2->MostRecentPropertyAddress != (FMetaSoundOutput *)0x0) {
    this = (FMetaSoundOutput *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetaSoundOutput::IsType<Metasound::FTime>(this);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_18.Data.Ptr)(local_18.Data.Ptr,1);
  }
  return;
}

