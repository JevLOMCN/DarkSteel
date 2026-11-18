// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 29

// GetAnnotation @ 141f32d00

FDuplicatedObject * __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::GetAnnotation
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this,
          FDuplicatedObject *__return_storage_ptr__,UObjectBase *param_1)

{
  FPlatformRWLock *pFVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  undefined3 uVar5;
  int iVar6;
  bool bVar7;
  FDuplicatedObject *pFVar8;
  undefined8 *puVar9;
  FDuplicatedObject local_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  FDuplicatedObject local_20;
  undefined8 local_14;
  int local_c;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x11d,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FDuplicatedObject *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar1 = &this->AnnotationCacheCritical;
  if (pFVar1 == (FPlatformRWLock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FDuplicatedObject *)(*pcVar4)();
      return pFVar8;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar1);
  if (param_1 == this->AnnotationCacheKey) {
    uVar5 = *(undefined3 *)&(this->AnnotationCacheValue).field_0x1;
    iVar6 = (this->AnnotationCacheValue).DuplicatedObject.WeakPtr.ObjectIndex;
    iVar3 = (this->AnnotationCacheValue).DuplicatedObject.WeakPtr.ObjectSerialNumber;
    __return_storage_ptr__->bIsDefault = (this->AnnotationCacheValue).bIsDefault;
    *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar5;
    (__return_storage_ptr__->DuplicatedObject).WeakPtr.ObjectIndex = iVar6;
    (__return_storage_ptr__->DuplicatedObject).WeakPtr.ObjectSerialNumber = iVar3;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    pFVar1 = &this->AnnotationMapCritical;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FDuplicatedObject *)(*pcVar4)();
        return pFVar8;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)pFVar1);
    pFVar8 = TMapBase<UObjectBase_const_*,FDuplicatedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>_>
             ::Find((TMapBase<UObjectBase_const_*,FDuplicatedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>_>
                     *)&this->AnnotationMap,param_1);
    if (pFVar8 == (FDuplicatedObject *)0x0) {
      local_38.bIsDefault = true;
      local_38.DuplicatedObject.WeakPtr.ObjectIndex = 0;
      local_38.DuplicatedObject.WeakPtr.ObjectSerialNumber = 0;
      SetAnnotationCacheKeyAndValue(this,param_1,&local_38);
      puVar9 = (undefined8 *)local_2c;
      local_2c[0] = 1;
      local_28 = 0;
    }
    else {
      local_20.DuplicatedObject.WeakPtr.ObjectSerialNumber =
           (pFVar8->DuplicatedObject).WeakPtr.ObjectSerialNumber;
      local_20.bIsDefault = pFVar8->bIsDefault;
      local_20._1_3_ = *(undefined3 *)&pFVar8->field_0x1;
      local_20.DuplicatedObject.WeakPtr.ObjectIndex = (pFVar8->DuplicatedObject).WeakPtr.ObjectIndex
      ;
      SetAnnotationCacheKeyAndValue(this,param_1,&local_20);
      local_c = (pFVar8->DuplicatedObject).WeakPtr.ObjectSerialNumber;
      puVar9 = &local_14;
      local_14._0_1_ = pFVar8->bIsDefault;
      local_14._1_3_ = *(undefined3 *)&pFVar8->field_0x1;
      local_14._4_4_ = (pFVar8->DuplicatedObject).WeakPtr.ObjectIndex;
    }
    uVar2 = *puVar9;
    iVar3 = *(int *)(puVar9 + 1);
    __return_storage_ptr__->bIsDefault = (bool)(char)uVar2;
    *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)((ulonglong)uVar2 >> 8);
    (__return_storage_ptr__->DuplicatedObject).WeakPtr.ObjectIndex = (int)((ulonglong)uVar2 >> 0x20)
    ;
    (__return_storage_ptr__->DuplicatedObject).WeakPtr.ObjectSerialNumber = iVar3;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  }
  return __return_storage_ptr__;
}

// ProcessRegistration @ 141f40890

void __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::ProcessRegistration
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34) {
    if (this->bRegistered != false) {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
      this->bRegistered = false;
    }
  }
  else if (this->bRegistered == false) {
    FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    this->bRegistered = true;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
                    /* WARNING: Could not recover jumptable at 0x000141f4093d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAnnotation @ 141f43820

void __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAnnotation
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FDuplicatedObject local_18;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0xda,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.bIsDefault = true;
  local_18.DuplicatedObject.WeakPtr.ObjectIndex = 0;
  local_18.DuplicatedObject.WeakPtr.ObjectSerialNumber = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_18);
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
            *)&this->AnnotationMap,param_1);
  if ((iVar1 - iVar2 < 1) ||
     (*(int *)&(this->AnnotationMap).field_0x8 != *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
  }
  return;
}

// SetAnnotationCacheKeyAndValue @ 141f4d1e0

void __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this,UObjectBase *param_1,
          FDuplicatedObject *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  undefined3 uVar2;
  int iVar3;
  bool bVar4;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  uVar2 = *(undefined3 *)&param_2->field_0x1;
  iVar3 = (param_2->DuplicatedObject).WeakPtr.ObjectIndex;
  (this->AnnotationCacheValue).bIsDefault = param_2->bIsDefault;
  *(undefined3 *)&(this->AnnotationCacheValue).field_0x1 = uVar2;
  (this->AnnotationCacheValue).DuplicatedObject.WeakPtr.ObjectIndex = iVar3;
  (this->AnnotationCacheValue).DuplicatedObject.WeakPtr.ObjectSerialNumber =
       (param_2->DuplicatedObject).WeakPtr.ObjectSerialNumber;
                    /* WARNING: Could not recover jumptable at 0x000141f4d25f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// NotifyUObjectDeleted @ 142093c60

void __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  FGuid FStack_18;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_18.A = 0;
  FStack_18.B = 0;
  FStack_18.C = 0;
  FStack_18.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,(FUniqueObjectGuid *)&FStack_18);
  SRWLock = &this->AnnotationMapCritical;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  if (iVar1 != iVar2) {
    puVar7 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->AnnotationMap).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (((ulonglong)(uVar5 >> 0x10) ^ (longlong)(int)uVar5) &
                              (longlong)*(int *)&(this->AnnotationMap).field_0x48 - 1U) * 4);
    if (iVar6 != -1) {
      do {
        if (*(UObjectBase **)((longlong)iVar6 * 0x20 + *(longlong *)&this->AnnotationMap) == param_1
           ) {
          TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
                           *)&this->AnnotationMap,iVar6);
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&this->AnnotationMap);
      } while (iVar6 != -1);
    }
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 142093c70

void __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 142093ca0

ulong64 __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return (longlong)iVar3 * 0x20 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + lVar7;
}

// ~FUObjectAnnotationSparse<FUniqueObjectGuid,1> @ 1420a3750

void __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::~FUObjectAnnotationSparse<FUniqueObjectGuid,1>
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_UFUniqueObjectGuid___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FUniqueObjectGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FUniqueObjectGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FUniqueObjectGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// GetAndRemoveAnnotation @ 1420c6080

FUniqueObjectGuid * __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAndRemoveAnnotation
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this,
          FUniqueObjectGuid *__return_storage_ptr__,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  FUniqueObjectGuid *pFVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  FGuid local_18;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xb5,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FUniqueObjectGuid *)(*pcVar5)();
    return pFVar9;
  }
  (__return_storage_ptr__->Guid).A = 0;
  (__return_storage_ptr__->Guid).B = 0;
  (__return_storage_ptr__->Guid).C = 0;
  (__return_storage_ptr__->Guid).D = 0;
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,(FUniqueObjectGuid *)&local_18);
  SRWLock = &this->AnnotationMapCritical;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FUniqueObjectGuid *)(*pcVar5)();
    return pFVar9;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  if (iVar2 != iVar3) {
    puVar13 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->AnnotationMap).field_0x38;
    }
    iVar12 = *(int *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->AnnotationMap).field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) *
                     4);
    if (iVar12 != -1) {
      lVar4 = *(longlong *)&this->AnnotationMap;
      do {
        lVar11 = (longlong)iVar12 * 0x20;
        if (*(UObjectBase **)(lVar11 + lVar4) == param_1) {
          puVar1 = (undefined8 *)(lVar11 + 8 + lVar4);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          (__return_storage_ptr__->Guid).A = (int)uVar6;
          (__return_storage_ptr__->Guid).B = (int)((ulonglong)uVar6 >> 0x20);
          (__return_storage_ptr__->Guid).C = (int)uVar7;
          (__return_storage_ptr__->Guid).D = (int)((ulonglong)uVar7 >> 0x20);
          TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
                           *)&this->AnnotationMap,iVar12);
          break;
        }
        iVar12 = *(int *)(lVar11 + 0x18 + lVar4);
      } while (iVar12 != -1);
    }
    if ((0 < iVar2 - iVar3) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return __return_storage_ptr__;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetAnnotation @ 1420c6210

FUniqueObjectGuid * __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAnnotation
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this,
          FUniqueObjectGuid *__return_storage_ptr__,UObjectBase *param_1)

{
  FPlatformRWLock *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FUniqueObjectGuid *pFVar7;
  uint *puVar8;
  FGuid local_48;
  uint local_38 [4];
  FGuid local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x11d,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FUniqueObjectGuid *)(*pcVar2)();
      return pFVar7;
    }
  }
  pFVar1 = &this->AnnotationCacheCritical;
  if (pFVar1 == (FPlatformRWLock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FUniqueObjectGuid *)(*pcVar2)();
      return pFVar7;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar1);
  if (param_1 == this->AnnotationCacheKey) {
    uVar3 = (this->AnnotationCacheValue).Guid.B;
    uVar4 = (this->AnnotationCacheValue).Guid.C;
    uVar5 = (this->AnnotationCacheValue).Guid.D;
    (__return_storage_ptr__->Guid).A = (this->AnnotationCacheValue).Guid.A;
    (__return_storage_ptr__->Guid).B = uVar3;
    (__return_storage_ptr__->Guid).C = uVar4;
    (__return_storage_ptr__->Guid).D = uVar5;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    pFVar1 = &this->AnnotationMapCritical;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FUniqueObjectGuid *)(*pcVar2)();
        return pFVar7;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)pFVar1);
    pFVar7 = TMapBase<UObjectBase_const_*,FUniqueObjectGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>_>
             ::Find((TMapBase<UObjectBase_const_*,FUniqueObjectGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>_>
                     *)&this->AnnotationMap,param_1);
    if (pFVar7 == (FUniqueObjectGuid *)0x0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
      SetAnnotationCacheKeyAndValue(this,param_1,(FUniqueObjectGuid *)&local_48);
      puVar8 = local_38;
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
    }
    else {
      local_28.A = (pFVar7->Guid).A;
      local_28.B = (pFVar7->Guid).B;
      local_28.C = (pFVar7->Guid).C;
      local_28.D = (pFVar7->Guid).D;
      SetAnnotationCacheKeyAndValue(this,param_1,(FUniqueObjectGuid *)&local_28);
      puVar8 = (uint *)&local_18;
      local_18._0_4_ = (pFVar7->Guid).A;
      local_18._4_4_ = (pFVar7->Guid).B;
      uStack_10._0_4_ = (pFVar7->Guid).C;
      uStack_10._4_4_ = (pFVar7->Guid).D;
    }
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    (__return_storage_ptr__->Guid).A = *puVar8;
    (__return_storage_ptr__->Guid).B = uVar3;
    (__return_storage_ptr__->Guid).C = uVar4;
    (__return_storage_ptr__->Guid).D = uVar5;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  }
  return __return_storage_ptr__;
}

// ProcessRegistration @ 1420ce350

void __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34) {
    if (this->bRegistered != false) {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
      this->bRegistered = false;
    }
  }
  else if (this->bRegistered == false) {
    FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    this->bRegistered = true;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
                    /* WARNING: Could not recover jumptable at 0x0001420ce406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 1420d0ef0

void __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FGuid local_28;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,(FUniqueObjectGuid *)&local_28);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAnnotation @ 1420d1140

void __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  FGuid local_18;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,(FUniqueObjectGuid *)&local_18);
  SRWLock = &this->AnnotationMapCritical;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  if (iVar1 != iVar2) {
    puVar7 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->AnnotationMap).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (((ulonglong)(uVar5 >> 0x10) ^ (longlong)(int)uVar5) &
                              (longlong)*(int *)&(this->AnnotationMap).field_0x48 - 1U) * 4);
    if (iVar6 != -1) {
      do {
        if (*(UObjectBase **)((longlong)iVar6 * 0x20 + *(longlong *)&this->AnnotationMap) == param_1
           ) {
          TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
                           *)&this->AnnotationMap,iVar6);
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&this->AnnotationMap);
      } while (iVar6 != -1);
    }
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 1420d9ac0

void __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this,UObjectBase *param_1,
          FUniqueObjectGuid *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  uVar2 = (param_2->Guid).B;
  uVar3 = (param_2->Guid).C;
  uVar4 = (param_2->Guid).D;
  (this->AnnotationCacheValue).Guid.A = (param_2->Guid).A;
  (this->AnnotationCacheValue).Guid.B = uVar2;
  (this->AnnotationCacheValue).Guid.C = uVar3;
  (this->AnnotationCacheValue).Guid.D = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001420d9b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// ~FUObjectAnnotationSparse<FBoolAnnotation,1> @ 1420eae80

void __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::~FUObjectAnnotationSparse<FBoolAnnotation,1>
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_UFBoolAnnotation___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FBoolAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FBoolAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FBoolAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// AddAnnotation @ 1420f0e50

void __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this,UObjectBase *param_1,
          FBoolAnnotation *param_2)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  int iVar1;
  int iVar2;
  code *pcVar3;
  FBoolAnnotation *pFVar4;
  bool bVar5;
  FBoolAnnotation local_res10 [8];
  TPairInitializer<UObjectBase_const_*_const_&,FBoolAnnotation_const_&> local_res18;
  FBoolAnnotation **local_38;
  FBoolAnnotation *local_30;
  
  local_res18.Value = (FBoolAnnotation *)param_1;
  if (param_1 == (UObjectBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x5f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res10[0] = (FBoolAnnotation)param_2->Mark;
  if (local_res10[0].Mark == false) {
    RemoveAnnotation(this,(UObjectBase *)local_res18.Value);
    return;
  }
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x34;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  local_38 = &local_res18.Value;
  local_30 = local_res10;
  TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FBoolAnnotation_const_&>_>
            ((TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap,&local_res18,(bool *)&local_38);
  pFVar4 = local_res18.Value;
  SRWLock_00 = &this->AnnotationCacheCritical;
  if (SRWLock_00 == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
  (this->AnnotationCacheValue).Mark = local_res10[0].Mark;
  this->AnnotationCacheKey = (UObjectBase *)pFVar4;
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (iVar2 == iVar1) {
    ProcessRegistration(this);
  }
  return;
}

// GetAllocatedSize @ 1420f8120

ulong64 __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x18;
}

// GetAnnotation @ 1420f81c0

FBoolAnnotation __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::GetAnnotation
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FBoolAnnotation *pFVar5;
  UObjectBase *in_R8;
  FBoolAnnotation local_res18 [8];
  FBoolAnnotation local_res20 [8];
  
  if (in_R8 == (UObjectBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x11d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (FBoolAnnotation)(bool)uVar4;
    }
  }
  pFVar1 = &this->AnnotationCacheCritical;
  if (pFVar1 == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (FBoolAnnotation)(bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar1);
  if (in_R8 == this->AnnotationCacheKey) {
    *(bool *)&param_1->_padding_ = (this->AnnotationCacheValue).Mark;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    return (FBoolAnnotation)SUB81(param_1,0);
  }
  ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  pFVar1 = &this->AnnotationMapCritical;
  if (pFVar1 == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (FBoolAnnotation)(bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar1);
  pFVar5 = TMapBase<UObjectBase_const_*,FBoolAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>_>
           ::Find((TMapBase<UObjectBase_const_*,FBoolAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>_>
                   *)&this->AnnotationMap,in_R8);
  if (pFVar5 == (FBoolAnnotation *)0x0) {
    local_res20[0].Mark = false;
    SetAnnotationCacheKeyAndValue(this,in_R8,local_res20);
    uVar4 = 0;
  }
  else {
    local_res18[0].Mark = pFVar5->Mark;
    SetAnnotationCacheKeyAndValue(this,in_R8,local_res18);
    uVar4 = pFVar5->Mark;
  }
  *(undefined1 *)&param_1->_padding_ = uVar4;
  ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  return (FBoolAnnotation)SUB81(param_1,0);
}

// NotifyUObjectDeleted @ 142104990

void __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBoolAnnotation aFStackX_8 [8];
  UObjectBase *pUStackX_10;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0xda,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  aFStackX_8[0].Mark = false;
  SetAnnotationCacheKeyAndValue(this,param_1,aFStackX_8);
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  pUStackX_10 = param_1;
  if (iVar1 != iVar2) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_10);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142108f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 142104b90

void __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// ProcessRegistration @ 142107950

void __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34) {
    if (this->bRegistered != false) {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
      this->bRegistered = false;
    }
  }
  else if (this->bRegistered == false) {
    FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    this->bRegistered = true;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
                    /* WARNING: Could not recover jumptable at 0x0001421079fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 142108cf0

void __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FBoolAnnotation local_res8 [8];
  
  local_res8[0].Mark = false;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,local_res8);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAnnotation @ 142108e20

void __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBoolAnnotation local_res8 [8];
  UObjectBase *local_res10;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0xda,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8[0].Mark = false;
  SetAnnotationCacheKeyAndValue(this,param_1,local_res8);
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  local_res10 = param_1;
  if (iVar1 != iVar2) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res10);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142108f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 142110190

void __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this,UObjectBase *param_1,
          FBoolAnnotation *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  (this->AnnotationCacheValue).Mark = param_2->Mark;
                    /* WARNING: Could not recover jumptable at 0x000142110206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// ~FUObjectAnnotationSparse<FDuplicatedObject,0> @ 142258ea0

void __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::~FUObjectAnnotationSparse<FDuplicatedObject,0>
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_UFDuplicatedObject___0A___6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FDuplicatedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FDuplicatedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FDuplicatedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// GetAllocatedSize @ 14226e490

ulong64 __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::GetAllocatedSize
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return (longlong)iVar3 * 0x20 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + lVar7;
}

// NotifyUObjectDeleted @ 142279870

void __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  FDuplicatedObject *pFVar3;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar3 = TMapBase<UObjectBase_const_*,FDuplicatedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>_>
           ::Find((TMapBase<UObjectBase_const_*,FDuplicatedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>_>
                   *)&this->AnnotationMap,param_1);
  if (pFVar3 != (FDuplicatedObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AnnotationMap.Find(Object)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142279906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 142279990

void __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// RemoveAllAnnotations @ 142282270

void __thiscall
FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FDuplicatedObject,0> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FDuplicatedObject local_28;
  
  local_28.bIsDefault = true;
  local_28.DuplicatedObject.WeakPtr.ObjectIndex = 0;
  local_28.DuplicatedObject.WeakPtr.ObjectSerialNumber = 0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_28);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

