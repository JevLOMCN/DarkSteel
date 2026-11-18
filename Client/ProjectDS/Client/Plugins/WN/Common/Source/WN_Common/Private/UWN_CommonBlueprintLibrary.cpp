// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 20

// StaticClass @ 149484390

UClass * __cdecl UWN_CommonBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_CommonBlueprintLibrary",
               &Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUWN_CommonBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UWN_CommonBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UWN_CommonBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton;
}

// UWN_CommonBlueprintLibrary @ 14948e0b0

UWN_CommonBlueprintLibrary * __thiscall
UWN_CommonBlueprintLibrary::UWN_CommonBlueprintLibrary
          (UWN_CommonBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWN_CommonBlueprintLibrary__6B_;
  return this;
}

// UWN_CommonBlueprintLibrary @ 14948e0e0

UWN_CommonBlueprintLibrary * __thiscall
UWN_CommonBlueprintLibrary::UWN_CommonBlueprintLibrary
          (UWN_CommonBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWN_CommonBlueprintLibrary__6B_;
  return this;
}

// ~UWN_CommonBlueprintLibrary @ 1494905b0

void __thiscall
UWN_CommonBlueprintLibrary::~UWN_CommonBlueprintLibrary(UWN_CommonBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UWN_CommonBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CanEverRender @ 149497db0

bool __cdecl UWN_CommonBlueprintLibrary::CanEverRender(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 1494a1910

UClass * __cdecl UWN_CommonBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_CommonBlueprintLibrary",
               &Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUWN_CommonBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UWN_CommonBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UWN_CommonBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton;
}

// IsInPIE @ 1494a58e0

bool __cdecl UWN_CommonBlueprintLibrary::IsInPIE(UObject *param_1)

{
  return false;
}

// IsUnattended @ 1494a5d50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UWN_CommonBlueprintLibrary::IsUnattended(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (FCommandLine::bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bIsUnattended = FParse::Param(FCommandLine::CmdLine,L"UNATTENDED");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((bIsUnattended == false) && (GIsAutomationTesting == false)) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUWN_CommonBlueprintLibrary @ 1494ae250

void __cdecl UWN_CommonBlueprintLibrary::StaticRegisterNativesUWN_CommonBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UWN_CommonBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WN_LoadAsset_Blocking_EditorOnly @ 1494b17c0

UObject * __cdecl
UWN_CommonBlueprintLibrary::WN_LoadAsset_Blocking_EditorOnly(TSoftObjectPtr<UObject> *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  UObject *pUVar3;
  undefined1 local_38 [48];
  
  local_38._8_8_ = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x8;
  local_38._16_8_ = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x10;
  local_38._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  puVar1 = &(param_1->SoftObjectPtr).field_0x18;
  FUtf8String::FUtf8String((FUtf8String *)(local_38 + 0x18),(FUtf8String *)puVar1);
  pUVar3 = UKismetSystemLibrary::LoadAsset_Blocking((TSoftObjectPtr<UObject> *)local_38);
  pvVar2 = *(void **)puVar1;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return pUVar3;
}

// WN_LoadAsset_Blocking_UsedInGame @ 1494b1820

UObject * __cdecl
UWN_CommonBlueprintLibrary::WN_LoadAsset_Blocking_UsedInGame(TSoftObjectPtr<UObject> *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  UObject *pUVar3;
  undefined1 local_38 [48];
  
  local_38._8_8_ = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x8;
  local_38._16_8_ = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x10;
  local_38._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  puVar1 = &(param_1->SoftObjectPtr).field_0x18;
  FUtf8String::FUtf8String((FUtf8String *)(local_38 + 0x18),(FUtf8String *)puVar1);
  pUVar3 = UKismetSystemLibrary::LoadAsset_Blocking((TSoftObjectPtr<UObject> *)local_38);
  pvVar2 = *(void **)puVar1;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return pUVar3;
}

// WN_LoadClassAsset_Blocking_EditorOnly @ 1494b1880

UClass * __cdecl
UWN_CommonBlueprintLibrary::WN_LoadClassAsset_Blocking_EditorOnly(TSoftClassPtr<UObject> *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  UClass *pUVar3;
  undefined1 local_38 [48];
  
  local_38._8_8_ = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x8;
  local_38._16_8_ = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x10;
  local_38._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  puVar1 = &(param_1->SoftObjectPtr).field_0x18;
  FUtf8String::FUtf8String((FUtf8String *)(local_38 + 0x18),(FUtf8String *)puVar1);
  pUVar3 = UKismetSystemLibrary::LoadClassAsset_Blocking((TSoftClassPtr<UObject> *)local_38);
  pvVar2 = *(void **)puVar1;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return pUVar3;
}

// WN_LoadClassAsset_Blocking_UsedInGame @ 1494b18e0

UClass * __cdecl
UWN_CommonBlueprintLibrary::WN_LoadClassAsset_Blocking_UsedInGame(TSoftClassPtr<UObject> *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  UClass *pUVar3;
  undefined1 local_38 [48];
  
  local_38._8_8_ = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x8;
  local_38._16_8_ = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x10;
  local_38._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  puVar1 = &(param_1->SoftObjectPtr).field_0x18;
  FUtf8String::FUtf8String((FUtf8String *)(local_38 + 0x18),(FUtf8String *)puVar1);
  pUVar3 = UKismetSystemLibrary::LoadClassAsset_Blocking((TSoftClassPtr<UObject> *)local_38);
  pvVar2 = *(void **)puVar1;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return pUVar3;
}

// execCanEverRender @ 1494b2e30

void __cdecl
UWN_CommonBlueprintLibrary::execCanEverRender(UObject *param_1,FFrame *param_2,void *param_3)

{
  void *pvVar1;
  wchar_t *pwVar2;
  
  pvVar1 = ThreadLocalStoragePointer;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar2 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar2,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsInPIE @ 1494b4a20

void __cdecl UWN_CommonBlueprintLibrary::execIsInPIE(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsUnattended @ 1494b4ab0

void __cdecl
UWN_CommonBlueprintLibrary::execIsUnattended(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FApp::IsUnattended();
  *(bool *)param_3 = bVar1;
  return;
}

// execWN_LoadAsset_Blocking_EditorOnly @ 1494b4b70

void __cdecl
UWN_CommonBlueprintLibrary::execWN_LoadAsset_Blocking_EditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType _Src;
  UObject *pUVar2;
  size_t _Size;
  undefined1 local_88 [24];
  FUtf8String local_70;
  undefined1 local_60 [24];
  FUtf8String local_48;
  undefined1 local_38 [48];
  
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_88._0_8_ = 0;
  local_88._16_8_ = 0;
  local_88._8_8_ = 0;
  FUtf8String::Reset(&local_70,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  _Src.Data = local_70.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_70.Data.ArrayNum;
  local_60._0_8_ = local_88._0_8_;
  local_48.Data.ArrayNum = local_70.Data.ArrayNum;
  local_60._8_4_ = local_88._8_4_;
  local_60._12_4_ = local_88._12_4_;
  local_60._16_4_ = local_88._16_4_;
  local_60._20_4_ = local_88._20_4_;
  if (local_70.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_70.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,_Size);
  }
  local_38._0_8_ = local_60._0_8_;
  local_38._8_4_ = local_60._8_4_;
  local_38._12_4_ = local_60._12_4_;
  local_38._16_4_ = local_60._16_4_;
  local_38._20_4_ = local_60._20_4_;
  FUtf8String::FUtf8String((FUtf8String *)(local_38 + 0x18),&local_48);
  pUVar2 = UKismetSystemLibrary::LoadAsset_Blocking((TSoftObjectPtr<UObject> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(UObject **)param_3 = pUVar2;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

// execWN_LoadAsset_Blocking_UsedInGame @ 1494b4cd0

void __cdecl
UWN_CommonBlueprintLibrary::execWN_LoadAsset_Blocking_UsedInGame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType _Src;
  UObject *pUVar2;
  size_t _Size;
  undefined1 local_88 [24];
  FUtf8String local_70;
  undefined1 local_60 [24];
  FUtf8String local_48;
  undefined1 local_38 [48];
  
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_88._0_8_ = 0;
  local_88._16_8_ = 0;
  local_88._8_8_ = 0;
  FUtf8String::Reset(&local_70,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  _Src.Data = local_70.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_70.Data.ArrayNum;
  local_60._0_8_ = local_88._0_8_;
  local_48.Data.ArrayNum = local_70.Data.ArrayNum;
  local_60._8_4_ = local_88._8_4_;
  local_60._12_4_ = local_88._12_4_;
  local_60._16_4_ = local_88._16_4_;
  local_60._20_4_ = local_88._20_4_;
  if (local_70.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_70.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,_Size);
  }
  local_38._0_8_ = local_60._0_8_;
  local_38._8_4_ = local_60._8_4_;
  local_38._12_4_ = local_60._12_4_;
  local_38._16_4_ = local_60._16_4_;
  local_38._20_4_ = local_60._20_4_;
  FUtf8String::FUtf8String((FUtf8String *)(local_38 + 0x18),&local_48);
  pUVar2 = UKismetSystemLibrary::LoadAsset_Blocking((TSoftObjectPtr<UObject> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(UObject **)param_3 = pUVar2;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

// execWN_LoadClassAsset_Blocking_EditorOnly @ 1494b4e30

void __cdecl
UWN_CommonBlueprintLibrary::execWN_LoadClassAsset_Blocking_EditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType _Src;
  UClass *pUVar2;
  size_t _Size;
  undefined1 local_88 [24];
  FUtf8String local_70;
  undefined1 local_60 [24];
  FUtf8String local_48;
  undefined1 local_38 [48];
  
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_88._0_8_ = 0;
  local_88._16_8_ = 0;
  local_88._8_8_ = 0;
  FUtf8String::Reset(&local_70,0);
  FSoftClassProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  _Src.Data = local_70.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_70.Data.ArrayNum;
  local_60._0_8_ = local_88._0_8_;
  local_48.Data.ArrayNum = local_70.Data.ArrayNum;
  local_60._8_4_ = local_88._8_4_;
  local_60._12_4_ = local_88._12_4_;
  local_60._16_4_ = local_88._16_4_;
  local_60._20_4_ = local_88._20_4_;
  if (local_70.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_70.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,_Size);
  }
  local_38._0_8_ = local_60._0_8_;
  local_38._8_4_ = local_60._8_4_;
  local_38._12_4_ = local_60._12_4_;
  local_38._16_4_ = local_60._16_4_;
  local_38._20_4_ = local_60._20_4_;
  FUtf8String::FUtf8String((FUtf8String *)(local_38 + 0x18),&local_48);
  pUVar2 = UKismetSystemLibrary::LoadClassAsset_Blocking((TSoftClassPtr<UObject> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(UClass **)param_3 = pUVar2;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

// execWN_LoadClassAsset_Blocking_UsedInGame @ 1494b4f90

void __cdecl
UWN_CommonBlueprintLibrary::execWN_LoadClassAsset_Blocking_UsedInGame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType _Src;
  UClass *pUVar2;
  size_t _Size;
  undefined1 local_88 [24];
  FUtf8String local_70;
  undefined1 local_60 [24];
  FUtf8String local_48;
  undefined1 local_38 [48];
  
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_88._0_8_ = 0;
  local_88._16_8_ = 0;
  local_88._8_8_ = 0;
  FUtf8String::Reset(&local_70,0);
  FSoftClassProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  _Src.Data = local_70.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_70.Data.ArrayNum;
  local_60._0_8_ = local_88._0_8_;
  local_48.Data.ArrayNum = local_70.Data.ArrayNum;
  local_60._8_4_ = local_88._8_4_;
  local_60._12_4_ = local_88._12_4_;
  local_60._16_4_ = local_88._16_4_;
  local_60._20_4_ = local_88._20_4_;
  if (local_70.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_70.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,_Size);
  }
  local_38._0_8_ = local_60._0_8_;
  local_38._8_4_ = local_60._8_4_;
  local_38._12_4_ = local_60._12_4_;
  local_38._16_4_ = local_60._16_4_;
  local_38._20_4_ = local_60._20_4_;
  FUtf8String::FUtf8String((FUtf8String *)(local_38 + 0x18),&local_48);
  pUVar2 = UKismetSystemLibrary::LoadClassAsset_Blocking((TSoftClassPtr<UObject> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(UClass **)param_3 = pUVar2;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

