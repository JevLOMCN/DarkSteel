// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// ~FUObjectAnnotationDense<FObjectMemoryUsage,1> @ 1420eade0

void __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::~FUObjectAnnotationDense<FObjectMemoryUsage,1>
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationDense_UFObjectMemoryUsage___00__6B_;
  RemoveAllAnnotations(this);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationArrayCritical);
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
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationArrayCritical);
  }
  DestructItems<FObjectMemoryUsage,int>
            ((FObjectMemoryUsage *)(this->AnnotationArray).AllocatorInstance.Data,
             (this->AnnotationArray).ArrayNum);
  pFVar1 = (this->AnnotationArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// GetAllocatedSize @ 1420f8100

ulong64 __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAllocatedSize
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this)

{
  return (longlong)(this->AnnotationArray).ArrayMax * 0x50;
}

// GetAnnotationRef @ 1420f8310

FObjectMemoryUsage * __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this,int param_1)

{
  FPlatformRWLock *SRWLock;
  TArray<FObjectMemoryUsage,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FObjectMemoryUsage *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  FObjectMemoryUsage local_78;
  
  bVar5 = false;
  SRWLock = &this->AnnotationArrayCritical;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FObjectMemoryUsage *)(*pcVar3)();
    return pFVar8;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pTVar1 = &this->AnnotationArray;
  piVar2 = &(this->AnnotationArray).ArrayNum;
  if ((this->AnnotationArray).ArrayNum <= param_1) {
    local_78.InclusiveMemoryUsage = 0;
    local_78.ExclusiveMemoryUsage = 0;
    local_78.Flags = 0;
    local_78.RootReferencer.ArrayNum = 0;
    local_78.RootReferencer.ArrayMax = 0;
    local_78.NonRootReferencer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.NonRootReferencer.ArrayNum = 0;
    local_78.NonRootReferencer.ArrayMax = 0;
    local_78.Object = (UObject *)0x0;
    local_78.RootReferencer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((param_1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                           ,0x500,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FObjectMemoryUsage *)(*pcVar3)();
      return pFVar8;
    }
    iVar6 = (this->AnnotationArray).ArrayNum;
    bVar5 = iVar6 == 0;
    if (iVar6 <= param_1) {
      iVar11 = (param_1 - iVar6) + 1;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,iVar11,&pTVar1->AllocatorInstance,piVar2,
                         &(this->AnnotationArray).ArrayMax);
      if (iVar11 != 0) {
        lVar10 = (longlong)iVar6 * 0x50;
        do {
          pFVar9 = (pTVar1->AllocatorInstance).Data + lVar10;
          lVar10 = lVar10 + 0x50;
          *(undefined8 *)pFVar9 = 0;
          *(undefined8 *)(pFVar9 + 8) = 0;
          *(undefined4 *)(pFVar9 + 0x20) = 0;
          *(undefined8 *)(pFVar9 + 0x28) = 0;
          *(undefined8 *)(pFVar9 + 0x30) = 0;
          *(undefined8 *)(pFVar9 + 0x38) = 0;
          *(undefined8 *)(pFVar9 + 0x40) = 0;
          *(undefined8 *)(pFVar9 + 0x48) = 0;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    uVar7 = 0;
    if (param_1 < *piVar2) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FObjectMemoryUsage *)(*pcVar3)();
      return pFVar8;
    }
    FObjectMemoryUsage::operator=
              ((FObjectMemoryUsage *)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x50),
               &local_78);
    if (local_78.NonRootReferencer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.NonRootReferencer.AllocatorInstance.Data);
    }
    if (local_78.RootReferencer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.RootReferencer.AllocatorInstance.Data);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (bVar5) {
    ProcessRegistration(this);
  }
  uVar7 = 0;
  if (param_1 < *piVar2) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FObjectMemoryUsage *)(*pcVar3)();
    return pFVar8;
  }
  return (FObjectMemoryUsage *)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x50);
}

// NotifyUObjectDeleted @ 142104910

void __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::NotifyUObjectDeleted
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  SRWLock = &this->AnnotationArrayCritical;
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
  RemoveAnnotationInternal(this,param_2);
                    /* WARNING: Could not recover jumptable at 0x000142104979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 142104b60

void __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// ProcessRegistration @ 142107890

void __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::ProcessRegistration
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  SRWLock = &this->AnnotationArrayCritical;
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
  if ((this->AnnotationArray).ArrayNum == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014210793b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 142108c40

void __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::RemoveAllAnnotations
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  SRWLock = &this->AnnotationArrayCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  DestructItems<FObjectMemoryUsage,int>
            ((FObjectMemoryUsage *)(this->AnnotationArray).AllocatorInstance.Data,
             (this->AnnotationArray).ArrayNum);
  piVar1 = &(this->AnnotationArray).ArrayMax;
  (this->AnnotationArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->AnnotationArray).AllocatorInstance,0,piVar1);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  ProcessRegistration(this);
  return;
}

// RemoveAnnotationInternal @ 142108f30

void __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::RemoveAnnotationInternal
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FObjectMemoryUsage local_58;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x539,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 < (this->AnnotationArray).ArrayNum) {
    local_58.InclusiveMemoryUsage = 0;
    local_58.ExclusiveMemoryUsage = 0;
    local_58.Flags = 0;
    local_58.RootReferencer.ArrayNum = 0;
    local_58.RootReferencer.ArrayMax = 0;
    local_58.NonRootReferencer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.NonRootReferencer.ArrayNum = 0;
    local_58.NonRootReferencer.ArrayMax = 0;
    local_58.Object = (UObject *)0x0;
    local_58.RootReferencer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FObjectMemoryUsage::operator=
              ((FObjectMemoryUsage *)
               ((this->AnnotationArray).AllocatorInstance.Data + (longlong)param_1 * 0x50),&local_58
              );
    if (local_58.NonRootReferencer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.NonRootReferencer.AllocatorInstance.Data);
    }
    if (local_58.RootReferencer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.RootReferencer.AllocatorInstance.Data);
    }
  }
  return;
}

// NotifyUObjectDeleted @ 14223d340

void __thiscall
FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>::NotifyUObjectDeleted
          (FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> *this,UObjectBase *param_1,
          int param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  SRWLock = &this->AnnotationArrayCritical;
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
  RemoveAnnotationInternal(this,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014223d3a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 14223d3c0

void __thiscall
FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 14223d3f0

ulong64 __thiscall
FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>::GetAllocatedSize
          (FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> *this)

{
  return (longlong)(this->AnnotationArray).ArrayMax * 0x50;
}

// ~FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> @ 142258e00

void __thiscall
FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>::
~FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>
          (FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ =
       (longlong)&___7__FUObjectAnnotationDense_UFPerClassNumberSuffixAnnotation___00__6B_;
  RemoveAllAnnotations(this);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationArrayCritical);
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
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationArrayCritical);
  }
  DestructItems<FPerClassNumberSuffixAnnotation,int>
            ((FPerClassNumberSuffixAnnotation *)(this->AnnotationArray).AllocatorInstance.Data,
             (this->AnnotationArray).ArrayNum);
  pFVar1 = (this->AnnotationArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// GetAnnotationRef @ 14226e710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPerClassNumberSuffixAnnotation * __thiscall
FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>::GetAnnotationRef
          (FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> *this,int param_1)

{
  FPlatformRWLock *SRWLock;
  TArray<FPerClassNumberSuffixAnnotation,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FPerClassNumberSuffixAnnotation *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [24];
  undefined8 uStack_80;
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  void *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  SRWLock = &this->AnnotationArrayCritical;
  bVar5 = false;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPerClassNumberSuffixAnnotation *)(*pcVar3)();
    return pFVar8;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pTVar1 = &this->AnnotationArray;
  piVar2 = &(this->AnnotationArray).ArrayNum;
  if ((this->AnnotationArray).ArrayNum <= param_1) {
    local_60 = 0;
    local_98._16_8_ = 0;
    uStack_80 = 0;
    local_50 = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    if ((param_1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                           ,0x500,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPerClassNumberSuffixAnnotation *)(*pcVar3)();
      return pFVar8;
    }
    iVar6 = (this->AnnotationArray).ArrayNum;
    bVar5 = iVar6 == 0;
    if (iVar6 <= param_1) {
      iVar11 = (param_1 - iVar6) + 1;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,iVar11,&pTVar1->AllocatorInstance,piVar2,
                         &(this->AnnotationArray).ArrayMax);
      if (iVar11 != 0) {
        lVar10 = (longlong)iVar6 * 0x50;
        do {
          pFVar9 = (pTVar1->AllocatorInstance).Data + lVar10;
          lVar10 = lVar10 + 0x50;
          *(undefined8 *)(pFVar9 + 0x10) = 0;
          *(undefined8 *)(pFVar9 + 0x18) = 0;
          *(undefined8 *)(pFVar9 + 0x38) = 0;
          *(undefined8 *)(pFVar9 + 0x48) = 0;
          *(undefined8 *)pFVar9 = 0;
          *(undefined8 *)(pFVar9 + 8) = 0;
          *(undefined8 *)(pFVar9 + 0x20) = 0;
          *(undefined4 *)(pFVar9 + 0x28) = 0;
          *(undefined4 *)(pFVar9 + 0x2c) = 0x80;
          *(undefined4 *)(pFVar9 + 0x30) = 0xffffffff;
          *(undefined4 *)(pFVar9 + 0x34) = 0;
          *(undefined8 *)(pFVar9 + 0x40) = 0;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    uVar7 = 0;
    if (param_1 < *piVar2) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPerClassNumberSuffixAnnotation *)(*pcVar3)();
      return pFVar8;
    }
    FPerClassNumberSuffixAnnotation::operator=
              ((FPerClassNumberSuffixAnnotation *)
               ((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x50),
               (FPerClassNumberSuffixAnnotation *)local_98);
    local_50 = local_50 & 0xffffffff00000000;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    iVar6 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (bVar5) {
    ProcessRegistration(this);
  }
  uVar7 = 0;
  if (param_1 < *piVar2) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPerClassNumberSuffixAnnotation *)(*pcVar3)();
    return pFVar8;
  }
  return (FPerClassNumberSuffixAnnotation *)
         ((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x50);
}

// ProcessRegistration @ 14227ed00

void __thiscall
FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>::ProcessRegistration
          (FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  SRWLock = &this->AnnotationArrayCritical;
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
  if ((this->AnnotationArray).ArrayNum == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014227edab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 1422821c0

void __thiscall
FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>::RemoveAllAnnotations
          (FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> *this)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  SRWLock = &this->AnnotationArrayCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  DestructItems<FPerClassNumberSuffixAnnotation,int>
            ((FPerClassNumberSuffixAnnotation *)(this->AnnotationArray).AllocatorInstance.Data,
             (this->AnnotationArray).ArrayNum);
  piVar1 = &(this->AnnotationArray).ArrayMax;
  (this->AnnotationArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->AnnotationArray).AllocatorInstance,0,piVar1);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  ProcessRegistration(this);
  return;
}

// RemoveAnnotationInternal @ 1422823b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1>::RemoveAnnotationInternal
          (FUObjectAnnotationDense<FPerClassNumberSuffixAnnotation,1> *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x539,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 < (this->AnnotationArray).ArrayNum) {
    local_4c = 0x80;
    local_40 = 0;
    local_30 = 0;
    local_78._16_8_ = 0;
    uStack_60 = 0;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = (void *)0x0;
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FPerClassNumberSuffixAnnotation::operator=
              ((FPerClassNumberSuffixAnnotation *)
               ((this->AnnotationArray).AllocatorInstance.Data + (longlong)param_1 * 0x50),
               (FPerClassNumberSuffixAnnotation *)local_78);
    local_30 = local_30 & 0xffffffff00000000;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    iVar2 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  return;
}

