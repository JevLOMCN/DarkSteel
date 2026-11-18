// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// NotifyUObjectDeleted @ 142093d70

void __thiscall
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> *this,UObjectBase *param_1,
          int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  FUniqueObjectGuid FStack_18;
  
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
  FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAndRemoveAnnotation
            ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)this,&FStack_18,param_1);
  if ((((FStack_18.Guid.D != 0 || FStack_18.Guid.C != 0) || FStack_18.Guid.B != 0) ||
       FStack_18.Guid.A != 0) &&
     (*(int *)&(this->InverseAnnotationMap).field_0x8 !=
      *(int *)&(this->InverseAnnotationMap).field_0x34)) {
    uVar3 = CityHash64((char *)&FStack_18,0x10);
    TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FUniqueObjectGuid>
              ((TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
                *)&this->InverseAnnotationMap,(uint)uVar3,&FStack_18);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnUObjectArrayShutdown @ 142093d80

void __thiscall
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 142093db0

ulong64 __thiscall
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::GetAllocatedSize
          (FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> *this)

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
  return ((longlong)iVar5 + (longlong)iVar3) * 0x20 + (ulonglong)((iVar4 + 0x1fU >> 5) << 2) +
         (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + lVar10 + lVar9;
}

// AddAnnotationInternal<FUniqueObjectGuid_const_&> @ 142095e10

void __thiscall
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::
AddAnnotationInternal<FUniqueObjectGuid_const_&>
          (FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> *this,UObjectBase *param_1,
          FUniqueObjectGuid *param_2)

{
  longlong *SRWLock;
  longlong *SRWLock_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FUniqueObjectGuid,UObjectBase_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>_>
  *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong lVar5;
  UObjectBase **ppUVar6;
  bool bVar7;
  ulong64 uVar8;
  TPairInitializer<UObjectBase_const_*_const_&,FUniqueObjectGuid_const_&> local_res8;
  TPairInitializer<FUniqueObjectGuid_const_&,UObjectBase_const_*_const_&> local_res18;
  FUniqueObjectGuid local_90;
  UObjectBase ***local_80;
  uint *local_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  FUniqueObjectGuid *local_60;
  FUniqueObjectGuid **local_58;
  
  lpCriticalSection = &this->InverseAnnotationMapCritical;
  local_res8.Value = (FUniqueObjectGuid *)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((((param_2->Guid).D == 0 && (param_2->Guid).C == 0) && (param_2->Guid).B == 0) &&
      (param_2->Guid).A == 0) {
    RemoveAnnotation(this,(UObjectBase *)local_res8.Value);
  }
  else {
    FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAnnotation
              ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)this,&local_90,
               (UObjectBase *)local_res8.Value);
    this_00 = &this->InverseAnnotationMap;
    if (*(int *)&(this->InverseAnnotationMap).field_0x8 !=
        *(int *)&(this->InverseAnnotationMap).field_0x34) {
      uVar8 = CityHash64((char *)&local_90,0x10);
      TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FUniqueObjectGuid>
                ((TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
                  *)this_00,(uint)uVar8,&local_90);
    }
    local_res18.Value = (UObjectBase **)local_res8.Value;
    if ((UObjectBase *)local_res8.Value == (UObjectBase *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x5f,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_70 = (param_2->Guid).A;
    uStack_6c = (param_2->Guid).B;
    uStack_68 = (param_2->Guid).C;
    uStack_64 = (param_2->Guid).D;
    uVar2 = (param_2->Guid).C;
    uVar3 = (param_2->Guid).D;
    if (((uStack_6c == 0 && uVar3 == 0) && uVar2 == 0) && local_70 == 0) {
      FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAnnotation
                ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)this,
                 (UObjectBase *)local_res18.Value);
    }
    else {
      SRWLock = &this->_padding_;
      if (SRWLock == (longlong *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar5 = this->_padding_;
      local_80 = &local_res18.Value;
      local_78 = &local_70;
      TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FUniqueObjectGuid_const_&>_>
                ((TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
                  *)&this->_padding_,&local_res8,(bool *)&local_80);
      ppUVar6 = local_res18.Value;
      SRWLock_00 = &this->_padding_;
      if (SRWLock_00 == (longlong *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
      this->_padding_ = (longlong)ppUVar6;
      *(uint *)&this->_padding_ = local_70;
      *(uint *)((longlong)&this->_padding_ + 4) = uStack_6c;
      *(uint *)&this->_padding_ = uStack_68;
      *(uint *)((longlong)&this->_padding_ + 4) = uStack_64;
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      if ((int)lVar5 == iVar1) {
        FUObjectAnnotationSparse<FUniqueObjectGuid,1>::ProcessRegistration
                  ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)this);
      }
    }
    if (*(int *)&(this->InverseAnnotationMap).field_0x8 !=
        *(int *)&(this->InverseAnnotationMap).field_0x34) {
      uVar8 = CityHash64((char *)param_2,0x10);
      TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FUniqueObjectGuid>
                ((TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
                  *)this_00,(uint)uVar8,param_2);
    }
    local_58 = &local_res8.Value;
    local_60 = param_2;
    TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FUniqueObjectGuid_const_&,UObjectBase_const_*_const_&>_>
              ((TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
                *)this_00,&local_res18,(bool *)&local_60);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ~FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> @ 1420a3830

void __thiscall
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::
~FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>
          (FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparseSearchable_UFUniqueObjectGuid___00__6B_
  ;
  RemoveAllAnnotations(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InverseAnnotationMapCritical);
  *(undefined4 *)&(this->InverseAnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InverseAnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FUniqueObjectGuid,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FUniqueObjectGuid,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FUniqueObjectGuid,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InverseAnnotationMap);
  FUObjectAnnotationSparse<FUniqueObjectGuid,1>::~FUObjectAnnotationSparse<FUniqueObjectGuid,1>
            ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)this);
  return;
}

// RemoveAllAnnotations @ 1420d1030

void __thiscall
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TMap<FUniqueObjectGuid,UObjectBase_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>_>
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
  FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAllAnnotations
            ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)this);
  this_00 = &this->InverseAnnotationMap;
  bVar4 = 1 < *(int *)&(this->InverseAnnotationMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->InverseAnnotationMap).field_0xc;
  *(undefined4 *)&(this->InverseAnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
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
    TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveAnnotation @ 1420d12b0

void __thiscall
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::RemoveAnnotation
          (FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> *this,UObjectBase *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  FUniqueObjectGuid local_18;
  
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
  FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAndRemoveAnnotation
            ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)this,&local_18,param_1);
  if ((((local_18.Guid.D != 0 || local_18.Guid.C != 0) || local_18.Guid.B != 0) ||
       local_18.Guid.A != 0) &&
     (*(int *)&(this->InverseAnnotationMap).field_0x8 !=
      *(int *)&(this->InverseAnnotationMap).field_0x34)) {
    uVar3 = CityHash64((char *)&local_18,0x10);
    TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FUniqueObjectGuid>
              ((TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
                *)&this->InverseAnnotationMap,(uint)uVar3,&local_18);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

