// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// GetAllocatedSize @ 14a410c70

ulong64 __thiscall
FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>::
GetAllocatedSize(void *this)

{
  PSRWLOCK SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  longlong lVar6;
  
  SRWLock = (PSRWLOCK)((longlong)this + 8);
  if (SRWLock == (PSRWLOCK)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  AcquireSRWLockShared(SRWLock);
  if (*(uint *)((longlong)this + 0x60) < 2) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)(int)*(uint *)((longlong)this + 0x60) << 2;
  }
  iVar1 = *(int *)((longlong)this + 0x44);
  iVar2 = *(int *)((longlong)this + 0x24);
  ReleaseSRWLockShared(SRWLock);
  return (longlong)iVar2 * 0x20 + (ulonglong)((iVar1 + 0x1fU >> 5) << 2) + lVar6;
}

// GetAnnotation @ 14a411170

FControlRigAnimTypeIDsAnnotation * __thiscall
FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>::
GetAnnotation(void *this,FControlRigAnimTypeIDsAnnotation *__return_storage_ptr__,
             UObjectBase *param_1)

{
  PSRWLOCK pRVar1;
  TReferenceControllerBase<1> *pTVar2;
  FControlRigAnimTypeIDs *pFVar3;
  code *pcVar4;
  bool bVar5;
  FControlRigAnimTypeIDsAnnotation *pFVar6;
  FControlRigAnimTypeIDsAnnotation local_38;
  FControlRigAnimTypeIDsAnnotation local_28;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x11d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FControlRigAnimTypeIDsAnnotation *)(*pcVar4)();
      return pFVar6;
    }
  }
  pRVar1 = (PSRWLOCK)((longlong)this + 0x10);
  if (pRVar1 == (PSRWLOCK)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FControlRigAnimTypeIDsAnnotation *)(*pcVar4)();
      return pFVar6;
    }
  }
  AcquireSRWLockShared(pRVar1);
  if (param_1 == *(UObjectBase **)((longlong)this + 0x68)) {
    (__return_storage_ptr__->Ptr).Object = *(FControlRigAnimTypeIDs **)((longlong)this + 0x70);
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x78);
    (__return_storage_ptr__->Ptr).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    ReleaseSRWLockShared(pRVar1);
    return __return_storage_ptr__;
  }
  ReleaseSRWLockShared(pRVar1);
  pRVar1 = (PSRWLOCK)((longlong)this + 8);
  if (pRVar1 == (PSRWLOCK)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FControlRigAnimTypeIDsAnnotation *)(*pcVar4)();
      return pFVar6;
    }
  }
  AcquireSRWLockShared(pRVar1);
  pFVar6 = TMapBase<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,0>_>
           ::Find((void *)((longlong)this + 0x18),param_1);
  if (pFVar6 == (FControlRigAnimTypeIDsAnnotation *)0x0) {
    local_28.Ptr.Object = (FControlRigAnimTypeIDs *)0x0;
    local_28.Ptr.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SetAnnotationCacheKeyAndValue(this,param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Ptr.SharedReferenceCount.ReferenceController);
    (__return_storage_ptr__->Ptr).Object = (FControlRigAnimTypeIDs *)0x0;
    (__return_storage_ptr__->Ptr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_38.Ptr.Object = (pFVar6->Ptr).Object;
    local_38.Ptr.SharedReferenceCount.ReferenceController =
         (pFVar6->Ptr).SharedReferenceCount.ReferenceController;
    if (local_38.Ptr.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_38.Ptr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.Ptr.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetAnnotationCacheKeyAndValue(this,param_1,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.Ptr.SharedReferenceCount.ReferenceController);
    pTVar2 = (pFVar6->Ptr).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar6->Ptr).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->Ptr).Object = pFVar3;
    (__return_storage_ptr__->Ptr).SharedReferenceCount.ReferenceController = pTVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  ReleaseSRWLockShared(pRVar1);
  return __return_storage_ptr__;
}

// NotifyUObjectDeleted @ 14a42e860

void __thiscall
FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>::
NotifyUObjectDeleted(void *this,UObjectBase *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  FControlRigAnimTypeIDsAnnotation FStack_18;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_18.Ptr.Object = (FControlRigAnimTypeIDs *)0x0;
  FStack_18.Ptr.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStack_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_18.Ptr.SharedReferenceCount.ReferenceController);
  SRWLock = (PSRWLOCK)((longlong)this + 8);
  if ((SRWLock == (PSRWLOCK)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive(SRWLock);
  iVar1 = *(int *)((longlong)this + 0x20);
  iVar2 = *(int *)((longlong)this + 0x4c);
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((void *)((longlong)this + 0x18),uVar5 >> 0x10 ^ uVar5,&pUStackX_8),
      0 < iVar1 - iVar2)) && (*(int *)((longlong)this + 0x20) == *(int *)((longlong)this + 0x4c))) {
    ReleaseSRWLockExclusive(SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive(SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 14a4317e0

void __thiscall
FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>::
OnUObjectArrayShutdown(void *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,this);
  return;
}

// ProcessRegistration @ 14a435ef0

void __thiscall
FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>::
ProcessRegistration(void *this)

{
  PSRWLOCK SRWLock;
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  SRWLock = (PSRWLOCK)((longlong)this + 8);
  if (SRWLock == (PSRWLOCK)0x0) {
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
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)((longlong)this + 0x20) == *(int *)((longlong)this + 0x4c)) {
    if (*(char *)((longlong)this + 0x80) != '\0') {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,this);
      *(undefined1 *)((longlong)this + 0x80) = 0;
    }
  }
  else if (*(char *)((longlong)this + 0x80) == '\0') {
    FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,this);
    *(undefined1 *)((longlong)this + 0x80) = 1;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a435fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 14a43c090

void __thiscall
FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>::
RemoveAllAnnotations(void *this)

{
  PSRWLOCK SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FControlRigAnimTypeIDsAnnotation local_28;
  
  local_28.Ptr.Object = (FControlRigAnimTypeIDs *)0x0;
  local_28.Ptr.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Ptr.SharedReferenceCount.ReferenceController);
  iVar1 = *(int *)((longlong)this + 0x20);
  SRWLock = (PSRWLOCK)((longlong)this + 8);
  iVar2 = *(int *)((longlong)this + 0x4c);
  if ((SRWLock == (PSRWLOCK)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive(SRWLock);
  bVar4 = 1 < *(int *)((longlong)this + 0x60);
  if (!bVar4) {
    TSet<TTuple<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,0>,FDefaultSetAllocator>
    ::UnhashElements((void *)((longlong)this + 0x18));
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((void *)((longlong)this + 0x18),0,*(int *)((longlong)this + 0x20));
  *(undefined4 *)((longlong)this + 0x20) = 0;
  if (*(int *)((longlong)this + 0x24) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)((longlong)this + 0x18),0,
               (int *)((longlong)this + 0x24));
  }
  *(undefined4 *)((longlong)this + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  if ((*(int *)((longlong)this + 0x44) < 0) || (0x80 < *(int *)((longlong)this + 0x44))) {
    *(undefined4 *)((longlong)this + 0x44) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x28),0);
  }
  if (bVar4) {
    *(undefined4 *)((longlong)this + 0x60) = 1;
    TSet<TTuple<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,0>,FDefaultSetAllocator>
    ::Rehash((void *)((longlong)this + 0x18));
  }
  ReleaseSRWLockExclusive(SRWLock);
  if (0 < iVar1 - iVar2) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAnnotation @ 14a43d8e0

void __thiscall
FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>::
RemoveAnnotation(void *this,UObjectBase *param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  FControlRigAnimTypeIDsAnnotation local_18;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_18.Ptr.Object = (FControlRigAnimTypeIDs *)0x0;
  local_18.Ptr.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Ptr.SharedReferenceCount.ReferenceController);
  SRWLock = (PSRWLOCK)((longlong)this + 8);
  if ((SRWLock == (PSRWLOCK)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive(SRWLock);
  iVar1 = *(int *)((longlong)this + 0x20);
  iVar2 = *(int *)((longlong)this + 0x4c);
  local_res8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((void *)((longlong)this + 0x18),uVar5 >> 0x10 ^ uVar5,&local_res8),
      0 < iVar1 - iVar2)) && (*(int *)((longlong)this + 0x20) == *(int *)((longlong)this + 0x4c))) {
    ReleaseSRWLockExclusive(SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive(SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 14a457d10

void __thiscall
FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>::
SetAnnotationCacheKeyAndValue
          (void *this,UObjectBase *param_1,FControlRigAnimTypeIDsAnnotation *param_2)

{
  PSRWLOCK SRWLock;
  code *pcVar1;
  bool bVar2;
  
  SRWLock = (PSRWLOCK)((longlong)this + 0x10);
  if (SRWLock == (PSRWLOCK)0x0) {
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
  AcquireSRWLockExclusive(SRWLock);
  *(UObjectBase **)((longlong)this + 0x68) = param_1;
  if ((FControlRigAnimTypeIDsAnnotation *)((longlong)this + 0x70) != param_2) {
    (((FControlRigAnimTypeIDsAnnotation *)((longlong)this + 0x70))->Ptr).Object =
         (param_2->Ptr).Object;
    (param_2->Ptr).Object = (FControlRigAnimTypeIDs *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 0x78),&(param_2->Ptr).SharedReferenceCount)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a457da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}

