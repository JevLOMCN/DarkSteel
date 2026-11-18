// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// Created @ 14b408ff0

void __thiscall UDS_DataBase::Created(UDS_DataBase *this)

{
  return;
}

// Deleted @ 14b409000

void __thiscall UDS_DataBase::Deleted(UDS_DataBase *this)

{
  return;
}

// InitByEntityInfo @ 14b40abd0

void __thiscall UDS_DataBase::InitByEntityInfo(UDS_DataBase *this)

{
  return;
}

// ResetData @ 14b40ac70

void __thiscall UDS_DataBase::ResetData(UDS_DataBase *this)

{
  return;
}

// StaticClass @ 14b40ad50

UClass * __cdecl UDS_DataBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DataBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DataBase",
               &Z_Registration_Info_UClass_UDS_DataBase.InnerSingleton,
               StaticRegisterNativesUDS_DataBase,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_DataBase>,InternalVTableHelperCtorCaller<UDS_DataBase>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DataBase.InnerSingleton;
}

// UDS_DataBase @ 14b47d770

UDS_DataBase * __thiscall UDS_DataBase::UDS_DataBase(UDS_DataBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsDirty = true;
  this->_padding_ = (longlong)&___7UDS_DataBase__6B_;
  *(undefined8 *)&this->OnDirty = 0;
  *(undefined8 *)&(this->OnDirty).field_0x8 = 0;
  *(undefined8 *)&(this->OnDirty).field_0x10 = 0;
  this->UniqueKey = 0;
  (this->MyDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_DataBase @ 14b47df20

void __thiscall UDS_DataBase::~UDS_DataBase(UDS_DataBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_DataBase__6B_;
  pvVar1 = *(void **)&(this->OnDirty).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDirty);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b47f3b0

UClass * __cdecl UDS_DataBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DataBase",
               &Z_Registration_Info_UClass_UDS_DataBase.InnerSingleton,
               StaticRegisterNativesUDS_DataBase,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_DataBase>,InternalVTableHelperCtorCaller<UDS_DataBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DataBase.InnerSingleton;
}

// StaticRegisterNativesUDS_DataBase @ 14b47f600

void __cdecl UDS_DataBase::StaticRegisterNativesUDS_DataBase(void)

{
  return;
}

// UDS_DataBase @ 14ba32a30

UDS_DataBase * __thiscall UDS_DataBase::UDS_DataBase(UDS_DataBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsDirty = true;
  this->_padding_ = (longlong)&___7UDS_DataBase__6B_;
  *(undefined8 *)&this->OnDirty = 0;
  *(undefined8 *)&(this->OnDirty).field_0x8 = 0;
  *(undefined8 *)&(this->OnDirty).field_0x10 = 0;
  this->UniqueKey = 0;
  (this->MyDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// CheckDirty @ 14ba387a0

void __thiscall UDS_DataBase::CheckDirty(UDS_DataBase *this)

{
  if (this->bIsDirty == true) {
    this->bIsDirty = false;
    FDS_DataDirtyDelegate_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDirty,this);
    return;
  }
  return;
}

// GetDataContainerKey @ 14ba4a2b0

ulong64 __thiscall UDS_DataBase::GetDataContainerKey(UDS_DataBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals(&this->MyDataSet,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSet).WeakPtr);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      return *(ulong64 *)(pUVar2 + 1);
    }
  }
  return 0;
}

// GetEntityID @ 14ba4a900

ulong64 __thiscall UDS_DataBase::GetEntityID(UDS_DataBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals(&this->MyDataSet,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSet).WeakPtr);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      return *(ulong64 *)(pUVar2 + 1);
    }
  }
  return 0;
}

// GetEntityTableID @ 14ba4a9b0

int __thiscall UDS_DataBase::GetEntityTableID(UDS_DataBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals(&this->MyDataSet,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSet).WeakPtr);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      return *(int *)&pUVar2[1].field_0xc;
    }
  }
  return 0;
}

// GetEntityType @ 14ba4aa60

EDS_EntityType __thiscall UDS_DataBase::GetEntityType(UDS_DataBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals(&this->MyDataSet,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSet).WeakPtr);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      return pUVar2[1].field_0x8;
    }
  }
  return None;
}

// GetIsDirty @ 14ba4c5b0

bool __thiscall UDS_DataBase::GetIsDirty(UDS_DataBase *this)

{
  return this->bIsDirty;
}

// GetMyDataSet @ 14ba4d4e0

TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> __thiscall
UDS_DataBase::GetMyDataSet(UDS_DataBase *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->MyDataSet).WeakPtr;
  return (TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>)in_RDX;
}

// GetUniqueKey @ 14ba51000

ulong64 __thiscall UDS_DataBase::GetUniqueKey(UDS_DataBase *this)

{
  return this->UniqueKey;
}

// SetIsDirty @ 14ba71880

void __thiscall UDS_DataBase::SetIsDirty(UDS_DataBase *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->bIsDirty = param_1;
  if (param_1) {
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals(&this->MyDataSet,(void *)0x0)
    ;
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSet).WeakPtr);
      pUVar2[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
        pUVar2[3].field_0x20 = 1;
      }
    }
  }
  return;
}

// SetMyDataSet @ 14ba72f20

void __thiscall UDS_DataBase::SetMyDataSet(UDS_DataBase *this,UDS_DataSetBase *param_1)

{
  UDS_DataSetBase *local_res10 [3];
  
  if (param_1 != (UDS_DataSetBase *)0x0) {
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->MyDataSet).WeakPtr,(FObjectPtr)local_res10);
  }
  return;
}

// SetUniqueKey @ 14ba751b0

void __thiscall UDS_DataBase::SetUniqueKey(UDS_DataBase *this,ulong64 param_1)

{
  this->UniqueKey = param_1;
  return;
}

