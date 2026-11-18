// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// NotifyUObjectDeleted @ 148073430

void __thiscall
FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> *this,UObjectBase *param_1,
          int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FObjectIdAnnotation FStackX_8;
  
  lpCriticalSection = &this->InverseAnnotationMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FUObjectAnnotationSparse<FObjectIdAnnotation,1>::GetAndRemoveAnnotation
            ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)this,(UObjectBase *)&FStackX_8);
  if ((FStackX_8.Id != 0) &&
     (*(int *)&(this->InverseAnnotationMap).field_0x8 !=
      *(int *)&(this->InverseAnnotationMap).field_0x34)) {
    TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FObjectIdAnnotation>
              ((TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
                *)&this->InverseAnnotationMap,(int)(FStackX_8.Id >> 0x20) * 0x17 + (int)FStackX_8.Id
               ,&FStackX_8);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnUObjectArrayShutdown @ 148073440

void __thiscall
FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 148073470

ulong64 __thiscall
FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::GetAllocatedSize
          (FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> *this)

{
  longlong *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  ulong64 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar1 = *(uint *)&(this->InverseAnnotationMap).field_0x48;
  lVar10 = 0;
  lVar9 = lVar10;
  if (1 < uVar1) {
    lVar9 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->InverseAnnotationMap).field_0x2c;
  SRWLock = &this->_padding_;
  iVar3 = *(int *)&(this->InverseAnnotationMap).field_0xc;
  if ((SRWLock == (longlong *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return uVar8;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = (uint)this->_padding_;
  if (1 < uVar1) {
    lVar10 = (longlong)(int)uVar1 << 2;
  }
  iVar4 = *(int *)((longlong)&this->_padding_ + 4);
  iVar5 = *(int *)((longlong)&this->_padding_ + 4);
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return (ulonglong)((iVar4 + 0x1fU >> 5) << 2) + ((longlong)iVar5 + (longlong)iVar3) * 0x18 +
         (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + lVar10 + lVar9;
}

// AddAnnotationInternal<FObjectIdAnnotation> @ 1480784d0

void __thiscall
FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::
AddAnnotationInternal<FObjectIdAnnotation>
          (FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> *this,UObjectBase *param_1,
          FObjectIdAnnotation *param_2)

{
  longlong *SRWLock;
  longlong *SRWLock_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FObjectIdAnnotation,UObjectBase_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>_>
  *this_00;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TPairInitializer<UObjectBase_const_*_const_&,FObjectIdAnnotation_const_&> local_res8;
  TPairInitializer<FObjectIdAnnotation_&&,UObjectBase_const_*_const_&> local_res18;
  UObjectBase local_88;
  FObjectIdAnnotation *local_60;
  FObjectIdAnnotation **local_58;
  
  lpCriticalSection = &this->InverseAnnotationMapCritical;
  local_res8.Value = (FObjectIdAnnotation *)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_2->Id == 0) {
    RemoveAnnotation(this,(UObjectBase *)local_res8.Value);
  }
  else {
    FUObjectAnnotationSparse<FObjectIdAnnotation,1>::GetAnnotation
              ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)this,&local_88);
    this_00 = &this->InverseAnnotationMap;
    if (*(int *)&(this->InverseAnnotationMap).field_0x8 !=
        *(int *)&(this->InverseAnnotationMap).field_0x34) {
      TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FObjectIdAnnotation>
                ((TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
                  *)this_00,
                 (int)((ulonglong)local_88._padding_ >> 0x20) * 0x17 + (int)local_88._padding_,
                 (FObjectIdAnnotation *)&local_88);
    }
    local_res18.Value = (UObjectBase **)local_res8.Value;
    if ((UClass *)local_res8.Value == (UClass *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x5f,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_88._8_8_ = param_2->Id;
    if (local_88._8_8_ == 0) {
      FUObjectAnnotationSparse<FObjectIdAnnotation,1>::RemoveAnnotation
                ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)this,
                 (UObjectBase *)local_res18.Value);
    }
    else {
      SRWLock = &this->_padding_;
      if (SRWLock == (longlong *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar3 = this->_padding_;
      local_88.NamePrivate.Name = (FName)&local_res18.Value;
      local_88.OuterPrivate.ObjectPtr.field0_0x0 = (TObjectPtr<UObject>)&local_88.ObjectFlags;
      TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FObjectIdAnnotation_const_&>_>
                ((TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
                  *)&this->_padding_,&local_res8,(bool *)&local_88.NamePrivate);
      SRWLock_00 = &this->_padding_;
      local_88.ClassPrivate.ObjectPtr.field0_0x0 =
           (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_res18.Value;
      if (SRWLock_00 == (longlong *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
      this->_padding_ = (longlong)local_88.ClassPrivate.ObjectPtr.field0_0x0;
      this->_padding_ = local_88._8_8_;
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      if ((int)lVar3 == iVar1) {
        FUObjectAnnotationSparse<FObjectIdAnnotation,1>::ProcessRegistration
                  ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)this);
      }
    }
    if (*(int *)&(this->InverseAnnotationMap).field_0x8 !=
        *(int *)&(this->InverseAnnotationMap).field_0x34) {
      TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FObjectIdAnnotation>
                ((TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
                  *)this_00,(int)(param_2->Id >> 0x20) * 0x17 + (int)param_2->Id,param_2);
    }
    local_58 = &local_res8.Value;
    local_60 = param_2;
    TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FObjectIdAnnotation_&&,UObjectBase_const_*_const_&>_>
              ((TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
                *)this_00,&local_res18,(bool *)&local_60);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ~FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> @ 14808cae0

void __thiscall
FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::
~FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>
          (FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> *this)

{
  void *pvVar1;
  
  this->_padding_ =
       (longlong)&___7__FUObjectAnnotationSparseSearchable_UFObjectIdAnnotation___00__6B_;
  RemoveAllAnnotations(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InverseAnnotationMapCritical);
  *(undefined4 *)&(this->InverseAnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InverseAnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectIdAnnotation,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectIdAnnotation,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectIdAnnotation,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InverseAnnotationMap);
  FUObjectAnnotationSparse<FObjectIdAnnotation,1>::~FUObjectAnnotationSparse<FObjectIdAnnotation,1>
            ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)this);
  return;
}

// RemoveAllAnnotations @ 1480c9400

void __thiscall
FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TMap<FObjectIdAnnotation,UObjectBase_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>_>
  *this_00;
  
  lpCriticalSection = &this->InverseAnnotationMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FUObjectAnnotationSparse<FObjectIdAnnotation,1>::RemoveAllAnnotations
            ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)this);
  this_00 = &this->InverseAnnotationMap;
  bVar4 = 1 < *(int *)&(this->InverseAnnotationMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->InverseAnnotationMap).field_0xc;
  *(undefined4 *)&(this->InverseAnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InverseAnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InverseAnnotationMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->InverseAnnotationMap).field_0x2c;
  *(undefined4 *)&(this->InverseAnnotationMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InverseAnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InverseAnnotationMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->InverseAnnotationMap).field_0x48 = 1;
    TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveAnnotation @ 1480c9810

void __thiscall
FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::RemoveAnnotation
          (FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> *this,UObjectBase *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FObjectIdAnnotation local_res8;
  
  lpCriticalSection = &this->InverseAnnotationMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FUObjectAnnotationSparse<FObjectIdAnnotation,1>::GetAndRemoveAnnotation
            ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)this,(UObjectBase *)&local_res8);
  if ((local_res8.Id != 0) &&
     (*(int *)&(this->InverseAnnotationMap).field_0x8 !=
      *(int *)&(this->InverseAnnotationMap).field_0x34)) {
    TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FObjectIdAnnotation>
              ((TSet<TTuple<FObjectIdAnnotation,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FObjectIdAnnotation,UObjectBase_const_*,0>,FDefaultSetAllocator>
                *)&this->InverseAnnotationMap,
               (int)(local_res8.Id >> 0x20) * 0x17 + (int)local_res8.Id,&local_res8);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

