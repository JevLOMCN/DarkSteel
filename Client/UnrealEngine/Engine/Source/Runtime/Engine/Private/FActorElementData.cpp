// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FActorElementData @ 147b38a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorElementData * __thiscall
FActorElementData::FActorElementData(FActorElementData *this,FActorElementData *param_1)

{
  this->Actor = (AActor *)0x0;
  (this->ActorWeak).WeakPtr = (FWeakObjectPtr)0x0;
  this->Actor = param_1->Actor;
  (this->ActorWeak).WeakPtr = (param_1->ActorWeak).WeakPtr;
  return this;
}

// FActorElementData @ 147b38a80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorElementData * __thiscall
FActorElementData::FActorElementData(FActorElementData *this,FActorElementData *param_1)

{
  this->Actor = (AActor *)0x0;
  (this->ActorWeak).WeakPtr = (FWeakObjectPtr)0x0;
  this->Actor = param_1->Actor;
  (this->ActorWeak).WeakPtr = (param_1->ActorWeak).WeakPtr;
  return this;
}

// FActorElementData @ 147b38ab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorElementData * __thiscall FActorElementData::FActorElementData(FActorElementData *this)

{
  this->Actor = (AActor *)0x0;
  (this->ActorWeak).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~FActorElementData @ 147b3ca30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FActorElementData::~FActorElementData(FActorElementData *this)

{
  return;
}

// operator= @ 147b3ddf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorElementData * __thiscall
FActorElementData::operator=(FActorElementData *this,FActorElementData *param_1)

{
  if (this != param_1) {
    this->Actor = param_1->Actor;
    (this->ActorWeak).WeakPtr = (param_1->ActorWeak).WeakPtr;
  }
  return this;
}

// operator= @ 147b3de10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorElementData * __thiscall
FActorElementData::operator=(FActorElementData *this,FActorElementData *param_1)

{
  if (this != param_1) {
    this->Actor = param_1->Actor;
    (this->ActorWeak).WeakPtr = (param_1->ActorWeak).WeakPtr;
  }
  return this;
}

// StaticTypeName @ 147b8edc0

FName __cdecl FActorElementData::StaticTypeName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'::
                      __l2::TypeName,"FActorElementData");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RCX =
       `public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'::__l2::TypeName;
  return in_RCX;
}

