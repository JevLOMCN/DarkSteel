// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 11

// StaticClass @ 14e10a870

UClass * __cdecl UOptimusImplicitPersistentBufferDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusImplicitPersistentBufferDataInterface",
               &Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.
                InnerSingleton,StaticRegisterNativesUOptimusImplicitPersistentBufferDataInterface,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusImplicitPersistentBufferDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusImplicitPersistentBufferDataInterface>,
               local_res8,UOptimusRawBufferDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.InnerSingleton;
}

// UOptimusImplicitPersistentBufferDataInterface @ 14e15a2f0

UOptimusImplicitPersistentBufferDataInterface * __thiscall
UOptimusImplicitPersistentBufferDataInterface::UOptimusImplicitPersistentBufferDataInterface
          (UOptimusImplicitPersistentBufferDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataInterface__6B_;
  this->_padding_ = 0;
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UOptimusImplicitPersistentBufferDataInterface__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bZeroInitForAtomicWrites = false;
  return this;
}

// UOptimusImplicitPersistentBufferDataInterface @ 14e15a360

UOptimusImplicitPersistentBufferDataInterface * __thiscall
UOptimusImplicitPersistentBufferDataInterface::UOptimusImplicitPersistentBufferDataInterface
          (UOptimusImplicitPersistentBufferDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataInterface__6B_;
  this->_padding_ = 0;
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UOptimusImplicitPersistentBufferDataInterface__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bZeroInitForAtomicWrites = false;
  return this;
}

// ~UOptimusImplicitPersistentBufferDataInterface @ 14e162cf0

void __thiscall
UOptimusImplicitPersistentBufferDataInterface::~UOptimusImplicitPersistentBufferDataInterface
          (UOptimusImplicitPersistentBufferDataInterface *this)

{
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181b40

bool __thiscall
UOptimusImplicitPersistentBufferDataInterface::CanSupportUnifiedDispatch
          (UOptimusImplicitPersistentBufferDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19d240

UComputeDataProvider * __thiscall
UOptimusImplicitPersistentBufferDataInterface::CreateDataProvider
          (UOptimusImplicitPersistentBufferDataInterface *this,TObjectPtr<UObject> param_1,
          ulong64 param_2,ulong64 param_3)

{
  undefined4 uVar1;
  UOptimusImplicitPersistentBufferDataProvider *pUVar2;
  UObject *local_res8 [4];
  
  local_res8[0] = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  pUVar2 = UOptimusRawBufferDataInterface::
           CreateProvider<UOptimusImplicitPersistentBufferDataProvider>
                     ((UOptimusRawBufferDataInterface *)this,(TObjectPtr<UObject>)local_res8);
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (pUVar2->DataInterfaceName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (pUVar2->DataInterfaceName).Number = uVar1;
  pUVar2->bZeroInitForAtomicWrites = this->bZeroInitForAtomicWrites;
  return (UComputeDataProvider *)pUVar2;
}

// GetClassName @ 14e1bcbb0

wchar_t * __thiscall
UOptimusImplicitPersistentBufferDataInterface::GetClassName
          (UOptimusImplicitPersistentBufferDataInterface *this)

{
  return L"ImplicitPersistentBuffer";
}

// GetDisplayName @ 14e1c4150

FString * __thiscall
UOptimusImplicitPersistentBufferDataInterface::GetDisplayName
          (UOptimusImplicitPersistentBufferDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ImplicitPersistent");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d6370

UClass * __cdecl UOptimusImplicitPersistentBufferDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusImplicitPersistentBufferDataInterface",
               &Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.
                InnerSingleton,StaticRegisterNativesUOptimusImplicitPersistentBufferDataInterface,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusImplicitPersistentBufferDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusImplicitPersistentBufferDataInterface>,
               local_res8,UOptimusRawBufferDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.InnerSingleton;
}

// GetShaderParameters @ 14e1e2080

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusImplicitPersistentBufferDataInterface::GetShaderParameters
          (UOptimusImplicitPersistentBufferDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FImplicitPersistentBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FImplicitPersistentBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FImplicitPersistentBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FImplicitPersistentBufferDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FImplicitPersistentBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FImplicitPersistentBufferDataInterfaceParameters",
                 L"FImplicitPersistentBufferDataInterfaceParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceRawBuffer.cpp"
                 ,0x91,0x20,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FImplicitPersistentBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2
             ::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FImplicitPersistentBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FImplicitPersistentBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x20;
  return;
}

// StaticRegisterNativesUOptimusImplicitPersistentBufferDataInterface @ 14e225a80

void __cdecl
UOptimusImplicitPersistentBufferDataInterface::
StaticRegisterNativesUOptimusImplicitPersistentBufferDataInterface(void)

{
  return;
}

