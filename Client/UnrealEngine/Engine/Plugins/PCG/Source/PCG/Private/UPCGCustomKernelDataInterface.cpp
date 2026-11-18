// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 14972cf10

UClass * __cdecl UPCGCustomKernelDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomKernelDataInterface",
               &Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGCustomKernelDataInterface,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCustomKernelDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCustomKernelDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton;
}

// UPCGCustomKernelDataInterface @ 14973b340

UPCGCustomKernelDataInterface * __thiscall
UPCGCustomKernelDataInterface::UPCGCustomKernelDataInterface
          (UPCGCustomKernelDataInterface *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  this_00 = &(this->Settings).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGCustomKernelDataInterface__6B_;
  (this->Kernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Settings).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->ResolvedSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  return this;
}

// UPCGCustomKernelDataInterface @ 14973b3d0

UPCGCustomKernelDataInterface * __thiscall
UPCGCustomKernelDataInterface::UPCGCustomKernelDataInterface
          (UPCGCustomKernelDataInterface *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  this_00 = &(this->Settings).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGCustomKernelDataInterface__6B_;
  (this->Kernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Settings).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->ResolvedSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  return this;
}

// ~UPCGCustomKernelDataInterface @ 14973dde0

void __thiscall
UPCGCustomKernelDataInterface::~UPCGCustomKernelDataInterface(UPCGCustomKernelDataInterface *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGCustomKernelDataInterface__6B_;
  pvVar1 = *(void **)&(this->Settings).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// AddReferencedObjects @ 149745f90

void __cdecl
UPCGCustomKernelDataInterface::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UPCGComputeDataInterface::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGCustomKernelDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000149745fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[4].field_0x20,0,0);
    return;
  }
  pFVar3 = GetTypeName<UPCGCustomKernelDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CanSupportUnifiedDispatch @ 149749620

bool __thiscall
UPCGCustomKernelDataInterface::CanSupportUnifiedDispatch(UPCGCustomKernelDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14974afd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UPCGCustomKernelDataInterface::CreateDataProvider(UPCGCustomKernelDataInterface *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UPCGCustomComputeKernelDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UComputeDataProvider *)pUVar1;
}

// GetClassName @ 149754850

wchar_t * __thiscall
UPCGCustomKernelDataInterface::GetClassName(UPCGCustomKernelDataInterface *this)

{
  return L"PCGCustomKernel";
}

// GetHLSL @ 1497580c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGCustomKernelDataInterface::GetHLSL
          (UPCGCustomKernelDataInterface *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_c8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FString local_78;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar1 = ::FString::FString(&local_78,param_2);
  FStringFormatArg::FStringFormatArg(&local_98,pFVar1);
  ::FString::FString(&local_b8.StringValue,L"DataInterfaceName");
  local_c8.Key = &local_b8.StringValue;
  local_c8.Value = &local_98;
  local_b8._0_8_ = &local_c8;
  local_b8.field1_0x8.StringLiteralANSIValue = (char *)&local_b8;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_68,
             (initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> *)
             &local_b8);
  if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::FormatImpl
            ((FString *)&local_c8,
             L"uint3 {DataInterfaceName}_NumThreads;\nuint {DataInterfaceName}_ThreadCountMultiplier;\nuint {DataInterfaceName}_Seed;\nuint {DataInterfaceName}_SeedSettings;\nuint {DataInterfaceName}_SeedComponent;\nfloat3 {DataInterfaceName}_ComponentBoundsMin;\nfloat3 {DataInterfaceName}_ComponentBoundsMax;\n\nuint3 GetNumThreads_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_NumThreads;\n}\n\nuint GetThreadCountMultiplier_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_ThreadCountMultiplier;\n}\n\nuint GetSeed_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_Seed;\n}\n\nuint GetSettingsSeed_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_SeedSettings;\n}\n\nuint GetComponentSeed_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_SeedComponent;\n}\n\nfloat3 GetComponentBoundsMin_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_ComponentBoundsMin;\n}\n\nfloat3 GetComponentBoundsMax_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_ComponentBoundsMax;\n}\n\n"
             ,(TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
               *)local_68);
  iVar2 = (int)local_c8.Value + -1;
  if ((int)local_c8.Value == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_c8.Key,iVar2);
  if (local_c8.Key != (FString *)0x0) {
    FMemory::Free(local_c8.Key);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// GetPrivateStaticClass @ 14975b500

UClass * __cdecl UPCGCustomKernelDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomKernelDataInterface",
               &Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGCustomKernelDataInterface,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCustomKernelDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCustomKernelDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton;
}

// GetSettings @ 14975fca0

UPCGSettings * __thiscall
UPCGCustomKernelDataInterface::GetSettings(UPCGCustomKernelDataInterface *this)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  FGCScopeGuard local_res8 [8];
  
  if ((this->ResolvedSettings).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    return (this->ResolvedSettings).field0_0x0.DebugPtr;
  }
  FGCScopeGuard::FGCScopeGuard(local_res8);
  pUVar2 = (UPCGSettings *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Settings);
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGSettings_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14975fcff;
  }
  pUVar2 = (UPCGSettings *)0x0;
LAB_14975fcff:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ResolvedSettings).field0_0x0.DebugPtr = pUVar2;
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return (this->ResolvedSettings).field0_0x0.DebugPtr;
}

// GetShaderParameters @ 149760840

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UPCGCustomKernelDataInterface::GetShaderParameters
          (UPCGCustomKernelDataInterface *this,wchar_t *param_1,
          FShaderParametersMetadataBuilder *param_2,FShaderParametersMetadataAllocations *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_28;
  
  uVar5 = (ulonglong)_tls_index;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0xf & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FPCGCustomKernelDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FPCGCustomKernelDataInterfaceParameters",
                 L"FPCGCustomKernelDataInterfaceParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGCustomKernelDataInterface.cpp"
                 ,0x4c,0x40,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar3 = (param_2->Members).ArrayNum;
  piVar1 = &(param_2->Members).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_2,piVar1);
  }
  (param_2->Members).ArrayNum = iVar3 + 1;
  uVar2 = param_2->NextMemberOffset;
  pFVar6 = (param_2->Members).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
  *(wchar_t **)pFVar6 = param_1;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x40;
  return;
}

// GetSupportedInputs @ 149762d30

void __thiscall
UPCGCustomKernelDataInterface::GetSupportedInputs
          (UPCGCustomKernelDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FString *pFVar2;
  FShaderFunctionDefinition *pFVar3;
  FShaderValueTypeHandle FVar4;
  FString local_18;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetNumThreads");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FVar4 = FShaderValueType::Get(Uint,3);
  FShaderFunctionDefinition::AddReturnType(pFVar3,FVar4);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetThreadCountMultiplier");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FVar4 = FShaderValueType::Get(Uint);
  FShaderFunctionDefinition::AddReturnType(pFVar3,FVar4);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetSeed");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FVar4 = FShaderValueType::Get(Uint);
  FShaderFunctionDefinition::AddReturnType(pFVar3,FVar4);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetSettingsSeed");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FVar4 = FShaderValueType::Get(Uint);
  FShaderFunctionDefinition::AddReturnType(pFVar3,FVar4);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetComponentSeed");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FVar4 = FShaderValueType::Get(Uint);
  FShaderFunctionDefinition::AddReturnType(pFVar3,FVar4);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetComponentBoundsMin");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,0);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetComponentBoundsMax");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,0);
  return;
}

// IsExecutionInterface @ 14976b8b0

bool __thiscall
UPCGCustomKernelDataInterface::IsExecutionInterface(UPCGCustomKernelDataInterface *this)

{
  return true;
}

// SetSettings @ 149776ba0

void __thiscall
UPCGCustomKernelDataInterface::SetSettings
          (UPCGCustomKernelDataInterface *this,UPCGSettings *param_1)

{
  UPCGSettings *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ResolvedSettings).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->Settings).SoftObjectPtr,(FObjectPtr)&local_res8);
  return;
}

// StaticRegisterNativesUPCGCustomKernelDataInterface @ 1497786a0

void __cdecl UPCGCustomKernelDataInterface::StaticRegisterNativesUPCGCustomKernelDataInterface(void)

{
  return;
}

