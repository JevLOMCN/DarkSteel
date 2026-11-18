// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 16

// NotifyUObjectDeleted @ 1461e70e0

void __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIsSpawnable aFStackX_8 [8];
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
  aFStackX_8[0].bIsSpawnable = false;
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
    TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_10);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014622ed42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 1461e70f0

void __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 1461e71e0

ulong64 __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this)

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

// NotifyUObjectDeleted @ 1461e9220

void __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this,UObjectBase *param_1,
          int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  FMovieSceneSpawnableAnnotation FStack_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_28.SequenceID.Value = 0xffffffff;
  FStack_28.ObjectBindingID.A = 0;
  FStack_28.ObjectBindingID.B = 0;
  FStack_28.ObjectBindingID.C = 0;
  FStack_28.ObjectBindingID.D = 0;
  FStack_28.OriginatingSequence.WeakPtr.ObjectIndex = 0;
  FStack_28.OriginatingSequence.WeakPtr.ObjectSerialNumber = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStack_28);
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
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 1461e9230

void __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 1461e9260

ulong64 __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this)

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
  return (longlong)iVar3 * 0x30 + lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2);
}

// ~FUObjectAnnotationSparse<FIsSpawnable,1> @ 1461fe9c0

void __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::~FUObjectAnnotationSparse<FIsSpawnable,1>
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_UFIsSpawnable___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FIsSpawnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FIsSpawnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FIsSpawnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> @ 1461feaa0

void __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::
~FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ =
       (longlong)&___7__FUObjectAnnotationSparse_UFMovieSceneSpawnableAnnotation___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ProcessRegistration @ 146229d00

void __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x000146229dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// ProcessRegistration @ 146229dc0

void __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x000146229e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 14622e9d0

void __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FIsSpawnable local_res8 [8];
  
  local_res8[0].bIsSpawnable = false;
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
    TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
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
    TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAllAnnotations @ 14622eb00

void __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FMovieSceneSpawnableAnnotation local_38;
  
  local_38.SequenceID.Value = 0xffffffff;
  local_38.ObjectBindingID.A = 0;
  local_38.ObjectBindingID.B = 0;
  local_38.ObjectBindingID.C = 0;
  local_38.ObjectBindingID.D = 0;
  local_38.OriginatingSequence.WeakPtr.ObjectIndex = 0;
  local_38.OriginatingSequence.WeakPtr.ObjectSerialNumber = 0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_38);
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
    TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
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
    TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAnnotation @ 14622ec40

void __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIsSpawnable local_res8 [8];
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
  local_res8[0].bIsSpawnable = false;
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
    TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res10);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014622ed42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// RemoveAnnotation @ 14622ed50

void __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  FMovieSceneSpawnableAnnotation local_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.SequenceID.Value = 0xffffffff;
  local_28.ObjectBindingID.A = 0;
  local_28.ObjectBindingID.B = 0;
  local_28.ObjectBindingID.C = 0;
  local_28.ObjectBindingID.D = 0;
  local_28.OriginatingSequence.WeakPtr.ObjectIndex = 0;
  local_28.OriginatingSequence.WeakPtr.ObjectSerialNumber = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_28);
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
  local_res8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 146234490

void __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this,UObjectBase *param_1,FIsSpawnable *param_2
          )

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
  (this->AnnotationCacheValue).bIsSpawnable = param_2->bIsSpawnable;
                    /* WARNING: Could not recover jumptable at 0x000146234506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 146234520

void __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this,UObjectBase *param_1,
          FMovieSceneSpawnableAnnotation *param_2)

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
  uVar2 = (param_2->ObjectBindingID).B;
  uVar3 = (param_2->ObjectBindingID).C;
  uVar4 = (param_2->ObjectBindingID).D;
  (this->AnnotationCacheValue).ObjectBindingID.A = (param_2->ObjectBindingID).A;
  (this->AnnotationCacheValue).ObjectBindingID.B = uVar2;
  (this->AnnotationCacheValue).ObjectBindingID.C = uVar3;
  (this->AnnotationCacheValue).ObjectBindingID.D = uVar4;
  (this->AnnotationCacheValue).OriginatingSequence.WeakPtr = (param_2->OriginatingSequence).WeakPtr;
  (this->AnnotationCacheValue).SequenceID.Value = (param_2->SequenceID).Value;
                    /* WARNING: Could not recover jumptable at 0x0001462345ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

