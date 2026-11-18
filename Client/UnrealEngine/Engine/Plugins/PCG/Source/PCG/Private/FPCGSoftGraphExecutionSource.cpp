// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticStruct @ 149ee0a40

UScriptStruct * __cdecl FPCGSoftGraphExecutionSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSoftGraphExecutionSource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSoftGraphExecutionSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSoftGraphExecutionSource,(UObject *)pUVar1,
                         L"PCGSoftGraphExecutionSource");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSoftGraphExecutionSource.OuterSingleton;
}

// FPCGSoftGraphExecutionSource @ 149eed5e0

FPCGSoftGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::FPCGSoftGraphExecutionSource
          (FPCGSoftGraphExecutionSource *this,FPCGSoftGraphExecutionSource *param_1)

{
  undefined1 *this_00;
  
  this_00 = &(this->SoftObjectPtr).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SpinLock).bFlag = (atomic<bool>)0x0;
  (this->CachedWeakPtr).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedWeakPtr).InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)this,
             (TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  return this;
}

// FPCGSoftGraphExecutionSource @ 149eed650

FPCGSoftGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::FPCGSoftGraphExecutionSource
          (FPCGSoftGraphExecutionSource *this,FPCGSoftGraphExecutionSource *param_1)

{
  undefined1 *this_00;
  
  this_00 = &(this->SoftObjectPtr).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SpinLock).bFlag = (atomic<bool>)0x0;
  (this->CachedWeakPtr).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedWeakPtr).InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr =
       *(undefined8 *)&(param_1->SoftObjectPtr).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).SoftObjectPtr.field_0x8);
  return this;
}

// FPCGSoftGraphExecutionSource @ 149eed6d0

FPCGSoftGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::FPCGSoftGraphExecutionSource
          (FPCGSoftGraphExecutionSource *this,TSoftObjectPtr<UObject> *param_1)

{
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  (this->SpinLock).bFlag = (atomic<bool>)0x0;
  (this->CachedWeakPtr).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedWeakPtr).InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
  return this;
}

// FPCGSoftGraphExecutionSource @ 149eed710

FPCGSoftGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::FPCGSoftGraphExecutionSource
          (FPCGSoftGraphExecutionSource *this,IPCGGraphExecutionSource *param_1)

{
  undefined1 *this_00;
  UObject *pUVar1;
  UObject *local_res8;
  
  if (param_1 != (IPCGGraphExecutionSource *)0x0) {
    pUVar1 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar1 != (UObject *)0x0) goto LAB_149eed73d;
  }
  pUVar1 = (UObject *)0x0;
LAB_149eed73d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this_00 = &(this->SoftObjectPtr).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->SpinLock).bFlag = (atomic<bool>)0x0;
  (this->CachedWeakPtr).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedWeakPtr).InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
  return this;
}

// FPCGSoftGraphExecutionSource @ 149eed7c0

FPCGSoftGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::FPCGSoftGraphExecutionSource
          (FPCGSoftGraphExecutionSource *this,IPCGGraphExecutionSource *param_1)

{
  undefined1 *this_00;
  UObject *pUVar1;
  UObject *local_res8;
  
  if (param_1 != (IPCGGraphExecutionSource *)0x0) {
    pUVar1 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar1 != (UObject *)0x0) goto LAB_149eed7ed;
  }
  pUVar1 = (UObject *)0x0;
LAB_149eed7ed:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this_00 = &(this->SoftObjectPtr).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->SpinLock).bFlag = (atomic<bool>)0x0;
  (this->CachedWeakPtr).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedWeakPtr).InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
  return this;
}

// operator= @ 149ef0260

FPCGSoftGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::operator=
          (FPCGSoftGraphExecutionSource *this,FPCGSoftGraphExecutionSource *param_1)

{
  Reset(this);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)this,
             (TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  return this;
}

// operator= @ 149ef02a0

FPCGSoftGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::operator=
          (FPCGSoftGraphExecutionSource *this,FPCGSoftGraphExecutionSource *param_1)

{
  Reset(this);
  *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr =
       *(undefined8 *)&(param_1->SoftObjectPtr).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).SoftObjectPtr.field_0x8);
  return this;
}

// operator= @ 149ef02e0

FPCGSoftGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::operator=
          (FPCGSoftGraphExecutionSource *this,IPCGGraphExecutionSource *param_1)

{
  UObject *pUVar1;
  UObject *local_res8;
  TPersistentObjectPtr<FSoftObjectPath> local_48;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  Reset(this);
  if (param_1 != (IPCGGraphExecutionSource *)0x0) {
    pUVar1 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar1 != (UObject *)0x0) goto LAB_149ef0315;
  }
  pUVar1 = (UObject *)0x0;
LAB_149ef0315:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_48.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_48.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_48.WeakPtr.ObjectIndex = 0;
  local_48.WeakPtr.ObjectSerialNumber = 0;
  local_48.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_48.ObjectID.AssetPath.AssetName.Number = 0;
  local_48.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_48.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_48.ObjectID.SubPathString,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_48,(FObjectPtr)&local_res8);
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  Reset(this);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)this,&local_48);
  if (local_48.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_48.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator== @ 149ef05e0

bool __thiscall
FPCGSoftGraphExecutionSource::operator==
          (FPCGSoftGraphExecutionSource *this,FPCGSoftGraphExecutionSource *param_1)

{
  bool bVar1;
  
  bVar1 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(param_1->SoftObjectPtr).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8);
  return bVar1;
}

// Get @ 149efe520

IPCGGraphExecutionSource * __thiscall
FPCGSoftGraphExecutionSource::Get(FPCGSoftGraphExecutionSource *this)

{
  TWeakInterfacePtr<IPCGGraphExecutionSource> *this_00;
  atomic<bool> aVar1;
  UClass *this_01;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  IPCGGraphExecutionSource *pIVar6;
  UObject *pUVar7;
  FSpinLock *pFVar8;
  FGCScopeGuard local_res8 [8];
  UObject *local_res10;
  FWeakObjectPtr local_28;
  IPCGGraphExecutionSource *pIStack_20;
  
  this_00 = &this->CachedWeakPtr;
  pUVar7 = (UObject *)0x0;
  if (((this->CachedWeakPtr).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar3)) {
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
    if ((pUVar4 != (UObject *)0x0) &&
       (this_01 = *(UClass **)&pUVar4->field_0x10, this_01 != (UClass *)0x0)) {
      pUVar5 = Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister();
      bVar3 = UClass::ImplementsInterface(this_01,pUVar5);
      if (bVar3) {
        CastChecked<IPCGGraphExecutionSource,UObject>(pUVar4);
        pFVar8 = &this->SpinLock;
        if ((pFVar8 == (FSpinLock *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pIVar6 = (IPCGGraphExecutionSource *)(*pcVar2)();
          return pIVar6;
        }
        LOCK();
        aVar1 = pFVar8->bFlag;
        pFVar8->bFlag = (atomic<bool>)0x1;
        UNLOCK();
        while (aVar1 != (atomic<bool>)0x0) {
          aVar1 = pFVar8->bFlag;
          while (aVar1 != (atomic<bool>)0x0) {
            aVar1 = pFVar8->bFlag;
          }
          LOCK();
          aVar1 = pFVar8->bFlag;
          pFVar8->bFlag = (atomic<bool>)0x1;
          UNLOCK();
        }
        if (((this->CachedWeakPtr).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
           (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar3)) {
          pIVar6 = CastChecked<IPCGGraphExecutionSource,UObject>(pUVar4);
          local_28.ObjectIndex = 0;
          local_28.ObjectSerialNumber = 0;
          pIStack_20 = (IPCGGraphExecutionSource *)0x0;
          if ((pIVar6 == (IPCGGraphExecutionSource *)0x0) ||
             (local_res10 = (UObject *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6),
             local_res10 == (UObject *)0x0)) {
            local_res10 = pUVar7;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res10 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_res10);
          }
          FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res10);
          bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_28,(void *)0x0);
          if (!bVar3) {
            pIStack_20 = pIVar6;
          }
          (this_00->ObjectInstance).WeakPtr = local_28;
          (this->CachedWeakPtr).InterfaceInstance = pIStack_20;
        }
        if (pFVar8 != (FSpinLock *)0x0) {
          pFVar8->bFlag = (atomic<bool>)0x0;
        }
        FGCScopeGuard::~FGCScopeGuard(local_res8);
        goto LAB_149efe695;
      }
    }
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    pUVar7 = (UObject *)0x0;
  }
  else {
LAB_149efe695:
    if (((this->CachedWeakPtr).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), bVar3)) {
      pUVar7 = (UObject *)(this->CachedWeakPtr).InterfaceInstance;
    }
  }
  return (IPCGGraphExecutionSource *)pUVar7;
}

// GetObject @ 149f024f0

UObject * __thiscall FPCGSoftGraphExecutionSource::GetObject(FPCGSoftGraphExecutionSource *this)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UObject *pUVar4;
  UObject *pUStackX_8;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    return pUVar2;
  }
  if (*(longlong *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8 == 0) {
    return (UObject *)0x0;
  }
  pUVar2 = FSoftObjectPath::ResolveObject
                     ((FSoftObjectPath *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  bVar1 = (*IsInAsyncLoadingThread)();
  if (((bVar1) && (pUVar2 != (UObject *)0x0)) &&
     (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
     ((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1421790a9:
    bVar1 = true;
    if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) goto LAB_1421790b9;
  }
  else {
    pUStackX_8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&pUStackX_8);
    if (pUVar2 != (UObject *)0x0) goto LAB_1421790a9;
  }
  bVar1 = false;
LAB_1421790b9:
  pUVar4 = (UObject *)0x0;
  if (bVar1) {
    pUVar4 = pUVar2;
  }
  return pUVar4;
}

// Reset @ 149f10d50

void __thiscall FPCGSoftGraphExecutionSource::Reset(FPCGSoftGraphExecutionSource *this)

{
  atomic<bool> aVar1;
  code *pcVar2;
  bool bVar3;
  FSpinLock *pFVar4;
  undefined8 local_res8;
  
  local_res8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  if (((this->CachedWeakPtr).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->CachedWeakPtr), bVar3)) {
    pFVar4 = &this->SpinLock;
    if ((pFVar4 == (FSpinLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    aVar1 = pFVar4->bFlag;
    pFVar4->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar1 != (atomic<bool>)0x0) {
      aVar1 = pFVar4->bFlag;
      while (aVar1 != (atomic<bool>)0x0) {
        aVar1 = pFVar4->bFlag;
      }
      LOCK();
      aVar1 = pFVar4->bFlag;
      pFVar4->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    (this->CachedWeakPtr).InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
    (this->CachedWeakPtr).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    if (pFVar4 != (FSpinLock *)0x0) {
      pFVar4->bFlag = (atomic<bool>)0x0;
    }
  }
  return;
}

