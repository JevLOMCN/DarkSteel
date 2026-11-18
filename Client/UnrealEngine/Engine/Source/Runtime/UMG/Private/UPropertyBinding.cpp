// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticClass @ 1468dd390

UClass * __cdecl UPropertyBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PropertyBinding",
               &Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton,
               StaticRegisterNativesUPropertyBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPropertyBinding>,
               InternalVTableHelperCtorCaller<UPropertyBinding>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton;
}

// UPropertyBinding @ 146902010

UPropertyBinding * __thiscall
UPropertyBinding::UPropertyBinding(UPropertyBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  (this->SourceObject).WeakPtr = (FWeakObjectPtr)0x0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->SourcePath);
  (this->DestinationProperty).ComparisonIndex = 0;
  (this->DestinationProperty).Number = 0;
  return this;
}

// UPropertyBinding @ 146902060

UPropertyBinding * __thiscall UPropertyBinding::UPropertyBinding(UPropertyBinding *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  (this->SourceObject).WeakPtr = (FWeakObjectPtr)0x0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->SourcePath);
  (this->DestinationProperty).ComparisonIndex = 0;
  (this->DestinationProperty).Number = 0;
  return this;
}

// ~UPropertyBinding @ 146904c80

void __thiscall UPropertyBinding::~UPropertyBinding(UPropertyBinding *this)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->SourcePath);
  UObject::~UObject((UObject *)this);
  return;
}

// Bind @ 14690cca0

void __thiscall
UPropertyBinding::Bind
          (UPropertyBinding *this,FProperty *param_1,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_2)

{
  UPropertyBinding *local_res8;
  FDestructionSentinel local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&BinderFunction,L"GetValue");
      _Init_thread_footer(&::_TSS0);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FWriteAccessScope *)&local_28);
  local_res8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UPropertyBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&param_2->Object,(FObjectPtr)&local_res8);
  param_2->FunctionName = BinderFunction;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// GetPrivateStaticClass @ 1469229b0

UClass * __cdecl UPropertyBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PropertyBinding",
               &Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton,
               StaticRegisterNativesUPropertyBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPropertyBinding>,
               InternalVTableHelperCtorCaller<UPropertyBinding>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton;
}

// IsSupportedDestination @ 14692d150

bool __thiscall UPropertyBinding::IsSupportedDestination(UPropertyBinding *this,FProperty *param_1)

{
  return false;
}

// IsSupportedSource @ 14692d490

bool __thiscall UPropertyBinding::IsSupportedSource(UPropertyBinding *this,FProperty *param_1)

{
  return false;
}

// StaticRegisterNativesUPropertyBinding @ 146945a00

void __cdecl UPropertyBinding::StaticRegisterNativesUPropertyBinding(void)

{
  return;
}

