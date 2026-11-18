// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FComponentElementData @ 147b38b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentElementData * __thiscall
FComponentElementData::FComponentElementData
          (FComponentElementData *this,FComponentElementData *param_1)

{
  undefined8 local_res8;
  
  this->Component = (UActorComponent *)0x0;
  (this->ComponentWeak).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ComponentWeak).WeakPtr,(FObjectPtr)&local_res8);
  this->Component = param_1->Component;
  (this->ComponentWeak).WeakPtr = (param_1->ComponentWeak).WeakPtr;
  return this;
}

// FComponentElementData @ 147b38b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentElementData * __thiscall
FComponentElementData::FComponentElementData
          (FComponentElementData *this,FComponentElementData *param_1)

{
  undefined8 local_res8;
  
  this->Component = (UActorComponent *)0x0;
  (this->ComponentWeak).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ComponentWeak).WeakPtr,(FObjectPtr)&local_res8);
  this->Component = param_1->Component;
  (this->ComponentWeak).WeakPtr = (param_1->ComponentWeak).WeakPtr;
  return this;
}

// FComponentElementData @ 147b38bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentElementData * __thiscall
FComponentElementData::FComponentElementData(FComponentElementData *this)

{
  undefined8 local_res8 [4];
  
  this->Component = (UActorComponent *)0x0;
  local_res8[0] = 0;
  (this->ComponentWeak).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ComponentWeak).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~FComponentElementData @ 147b3ca40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FComponentElementData::~FComponentElementData(FComponentElementData *this)

{
  return;
}

// operator= @ 147b3de30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentElementData * __thiscall
FComponentElementData::operator=(FComponentElementData *this,FComponentElementData *param_1)

{
  if (this != param_1) {
    this->Component = param_1->Component;
    (this->ComponentWeak).WeakPtr = (param_1->ComponentWeak).WeakPtr;
  }
  return this;
}

// operator= @ 147b3de50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentElementData * __thiscall
FComponentElementData::operator=(FComponentElementData *this,FComponentElementData *param_1)

{
  if (this != param_1) {
    this->Component = param_1->Component;
    (this->ComponentWeak).WeakPtr = (param_1->ComponentWeak).WeakPtr;
  }
  return this;
}

// StaticTypeName @ 147b8ee40

FName __cdecl FComponentElementData::StaticTypeName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'
                      ::__l2::TypeName,"FComponentElementData");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RCX =
       `public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'::__l2::
       TypeName;
  return in_RCX;
}

