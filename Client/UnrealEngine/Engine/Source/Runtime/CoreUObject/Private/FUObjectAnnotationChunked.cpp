// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 17

// GetAllocatedSize @ 14223d700

ulong64 __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::GetAllocatedSize
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulong64 uVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Chunks).ArrayNum;
  pFVar3 = (this->Chunks).AllocatorInstance.Data;
  pFVar5 = pFVar3;
  uVar4 = (longlong)(this->Chunks).ArrayMax << 4;
  while( true ) {
    uVar7 = uVar4;
    if ((this->Chunks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::TAnnotationChunk_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar3 + (longlong)iVar2 * 0x10) break;
    pFVar6 = pFVar5 + 0x10;
    pFVar1 = pFVar5 + 8;
    pFVar5 = pFVar6;
    uVar4 = uVar7 + 0x10000;
    if (*(longlong *)pFVar1 == 0) {
      uVar4 = uVar7;
    }
  }
  return uVar7;
}

// NotifyUObjectDeleted @ 14223d790

void __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::NotifyUObjectDeleted
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
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
  FreeAnnotation(this,param_2);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// OnUObjectArrayShutdown @ 14223d830

void __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::OnUObjectArrayShutdown
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// ~FUObjectAnnotationChunked<FArchetypeInfo,1,8192> @ 142258d70

void __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::~FUObjectAnnotationChunked<FArchetypeInfo,1,8192>
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationChunked_UFArchetypeInfo___00_0CAAA___6B_;
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
  pFVar1 = (this->Chunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// AddAnnotation @ 14225dd40

void __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::AddAnnotation
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this,UObjectBase *param_1,
          FArchetypeInfo *param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FArchetypeInfo *pFVar4;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x36b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->InternalIndex;
  SRWLock = &this->AnnotationArrayCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x334,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArchetypeIndex == -1) {
    FreeAnnotation(this,iVar1);
  }
  else {
    if ((this->NumAnnotations == 0) && ((this->Chunks).ArrayNum == 0)) {
      FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    }
    pFVar4 = AllocateAnnotation(this,iVar1);
    *pFVar4 = *param_2;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// AllocateAnnotation @ 1422606e0

FArchetypeInfo * __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::AllocateAnnotation
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FArchetypeInfo *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x2d2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FArchetypeInfo *)(*pcVar2)();
      return pFVar7;
    }
  }
  piVar1 = &(this->Chunks).ArrayNum;
  uVar4 = (int)(param_1 + (param_1 >> 0x1f & 0x1fffU)) >> 0xd;
  if (*piVar1 <= (int)uVar4) {
    iVar11 = (uVar4 - *piVar1) + 1;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar11,&(this->Chunks).AllocatorInstance,piVar1,
                       &(this->Chunks).ArrayMax);
    memset((this->Chunks).AllocatorInstance.Data + (longlong)iVar5 * 0x10,0,(longlong)iVar11 << 4);
  }
  if (*piVar1 <= (int)uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkIndex < Chunks.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x2d8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FArchetypeInfo *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar5 = *piVar1;
  this->MaxAnnotations = iVar5 << 0xd;
  uVar13 = param_1 & 0x80001fff;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xffffe000) + 1;
  }
  uVar6 = 0;
  if ((int)uVar4 < iVar5) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FArchetypeInfo *)(*pcVar2)();
      return pFVar7;
    }
  }
  pFVar12 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
  if (*(longlong *)(pFVar12 + 8) == 0) {
    puVar8 = operator_new__(0x10000);
    if (puVar8 != (undefined8 *)0x0) {
      lVar10 = 0x2000;
      puVar9 = puVar8;
      do {
        *puVar9 = 0xffffffffffffffff;
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    *(undefined8 **)(pFVar12 + 8) = puVar8;
    this->CurrentAllocatedMemory = this->CurrentAllocatedMemory + 0x10000;
    uVar4 = this->MaxAllocatedMemory;
    if (this->MaxAllocatedMemory < this->CurrentAllocatedMemory) {
      uVar4 = this->CurrentAllocatedMemory;
    }
    this->MaxAllocatedMemory = uVar4;
  }
  if (*(int *)((longlong)(int)uVar13 * 8 + *(longlong *)(pFVar12 + 8)) == -1) {
    *(int *)pFVar12 = *(int *)pFVar12 + 1;
    if (0x2000 < *(int *)pFVar12) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chunk.Num <= NumAnnotationsPerChunk",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x2f0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FArchetypeInfo *)(*pcVar2)();
        return pFVar7;
      }
    }
    this->NumAnnotations = this->NumAnnotations + 1;
  }
  return (FArchetypeInfo *)(*(longlong *)(pFVar12 + 8) + (longlong)(int)uVar13 * 8);
}

// FreeAnnotation @ 14226ce50

void __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::FreeAnnotation
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  uVar7 = param_1 >> 0x1f & 0x1fff;
  uVar6 = param_1 + uVar7;
  uVar9 = (int)uVar6 >> 0xd;
  iVar2 = (this->Chunks).ArrayNum;
  lVar8 = (longlong)(int)((uVar6 & 0x1fff) - uVar7);
  if ((int)uVar9 < iVar2) {
    uVar6 = 0;
    if ((int)uVar9 < iVar2) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    lVar3 = *(longlong *)(pFVar10 + 8);
    if ((lVar3 != 0) && (*(int *)(lVar3 + lVar8 * 8) != -1)) {
      *(undefined8 *)(lVar3 + lVar8 * 8) = 0xffffffffffffffff;
      *(int *)pFVar10 = *(int *)pFVar10 + -1;
      if (*(int *)pFVar10 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk.Num >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                           ,0x311,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(int *)pFVar10 == 0) {
        operator_delete__(*(void **)(pFVar10 + 8));
        *(undefined8 *)(pFVar10 + 8) = 0;
        if (this->CurrentAllocatedMemory < 0x10000) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentAllocatedMemory >= ChunkMemory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                             ,0x317,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this->CurrentAllocatedMemory = this->CurrentAllocatedMemory - 0x10000;
      }
      piVar1 = &this->NumAnnotations;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumAnnotations >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                           ,0x31b,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  return;
}

// GetAnnotation @ 14226e5c0

FArchetypeInfo __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::GetAnnotation
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this,int param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FArchetypeInfo FVar7;
  uint uVar8;
  int in_register_00000014;
  uint uVar9;
  int in_R8D;
  
  FVar7.SerialNumber = in_register_00000014;
  FVar7.ArchetypeIndex = param_1;
  if (in_R8D < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x3d9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FArchetypeInfo)(*pcVar3)();
      return FVar7;
    }
  }
  SRWLock = &this->AnnotationArrayCritical;
  *(undefined8 *)FVar7 = 0xffffffffffffffff;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FArchetypeInfo)(*pcVar3)();
      return FVar7;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar8 = in_R8D >> 0x1f & 0x1fff;
  uVar5 = in_R8D + uVar8;
  uVar9 = (int)uVar5 >> 0xd;
  iVar1 = (this->Chunks).ArrayNum;
  if ((int)uVar9 < iVar1) {
    uVar6 = 0;
    if ((int)uVar9 < iVar1) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar7 = (FArchetypeInfo)(*pcVar3)();
        return FVar7;
      }
    }
    lVar2 = *(longlong *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10 + 8);
    if (lVar2 != 0) {
      *(undefined8 *)FVar7 = *(undefined8 *)(lVar2 + (longlong)(int)((uVar5 & 0x1fff) - uVar8) * 8);
    }
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return FVar7;
}

// RemoveAllAnnotations @ 1422820c0

void __thiscall
FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::RemoveAllAnnotations
          (FUObjectAnnotationChunked<FArchetypeInfo,1,8192> *this)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = this->NumAnnotations;
  SRWLock = &this->AnnotationArrayCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar3 = (this->Chunks).ArrayNum;
  pFVar7 = (this->Chunks).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::TAnnotationChunk,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    operator_delete__(*(void **)(pFVar7 + 8));
    pFVar7 = pFVar7 + 0x10;
  }
  piVar1 = &(this->Chunks).ArrayMax;
  (this->Chunks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Chunks).AllocatorInstance,0,piVar1);
  }
  this->NumAnnotations = 0;
  this->MaxAnnotations = 0;
  this->CurrentAllocatedMemory = 0;
  this->MaxAllocatedMemory = 0;
  if (0 < iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// GetAllocatedSize @ 14228f6a0

ulong64 __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::GetAllocatedSize
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulong64 uVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Chunks).ArrayNum;
  pFVar3 = (this->Chunks).AllocatorInstance.Data;
  pFVar5 = pFVar3;
  uVar4 = (longlong)(this->Chunks).ArrayMax << 4;
  while( true ) {
    uVar7 = uVar4;
    if ((this->Chunks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::TAnnotationChunk_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar3 + (longlong)iVar2 * 0x10) break;
    pFVar6 = pFVar5 + 0x10;
    pFVar1 = pFVar5 + 8;
    pFVar5 = pFVar6;
    uVar4 = uVar7 + 0x100000;
    if (*(longlong *)pFVar1 == 0) {
      uVar4 = uVar7;
    }
  }
  return uVar7;
}

// NotifyUObjectDeleted @ 14228f730

void __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::NotifyUObjectDeleted
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this,UObjectBase *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  FLinkerIndexPair *pFVar3;
  FLinkerIndexPair local_18;
  
  if (param_2 < this->MaxAnnotations) {
    pFVar3 = GetAnnotation(this,&local_18,param_2);
    if ((pFVar3->LinkerIndex == -1) != (pFVar3->Linker == (FLinkerLoad *)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                         ,0x39,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (pFVar3->Linker != (FLinkerLoad *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= MaxAnnotations || GetAnnotation(Index).IsDefault()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x462,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// OnUObjectArrayShutdown @ 14228f7d0

void __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::OnUObjectArrayShutdown
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// ~FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> @ 142295170

void __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::
~FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationChunked_UFLinkerIndexPair___0A__0BAAAA___6B_;
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
  pFVar1 = (this->Chunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// AllocateAnnotation @ 1422979b0

FLinkerIndexPair * __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::AllocateAnnotation
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FLinkerIndexPair *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x2d2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FLinkerIndexPair *)(*pcVar2)();
    return pFVar7;
  }
  piVar1 = &(this->Chunks).ArrayNum;
  uVar4 = (int)(param_1 + (param_1 >> 0x1f & 0xffffU)) >> 0x10;
  if (*piVar1 <= (int)uVar4) {
    iVar12 = (uVar4 - *piVar1) + 1;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar12,&(this->Chunks).AllocatorInstance,piVar1,
                       &(this->Chunks).ArrayMax);
    memset((this->Chunks).AllocatorInstance.Data + (longlong)iVar5 * 0x10,0,(longlong)iVar12 << 4);
  }
  if ((*piVar1 <= (int)uVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < Chunks.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x2d8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FLinkerIndexPair *)(*pcVar2)();
    return pFVar7;
  }
  iVar5 = *piVar1;
  this->MaxAnnotations = iVar5 << 0x10;
  uVar13 = param_1 & 0x8000ffff;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xffff0000) + 1;
  }
  uVar6 = 0;
  if ((int)uVar4 < iVar5) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FLinkerIndexPair *)(*pcVar2)();
    return pFVar7;
  }
  pFVar15 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
  if (*(longlong *)(pFVar15 + 8) == 0) {
    puVar8 = operator_new__(0x100000);
    puVar9 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      lVar11 = 0x10000;
      puVar10 = puVar8;
      do {
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0xffffffff;
        puVar10 = puVar10 + 2;
        lVar11 = lVar11 + -1;
        puVar9 = puVar8;
      } while (lVar11 != 0);
    }
    *(undefined8 **)(pFVar15 + 8) = puVar9;
    this->CurrentAllocatedMemory = this->CurrentAllocatedMemory + 0x100000;
    uVar4 = this->MaxAllocatedMemory;
    if (this->MaxAllocatedMemory < this->CurrentAllocatedMemory) {
      uVar4 = this->CurrentAllocatedMemory;
    }
    this->MaxAllocatedMemory = uVar4;
  }
  lVar11 = *(longlong *)(pFVar15 + 8);
  lVar14 = (longlong)(int)uVar13 * 0x10;
  if (((*(int *)(lVar11 + 8 + lVar14) == -1) != (*(longlong *)(lVar11 + lVar14) == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                         ,0x39,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FLinkerIndexPair *)(*pcVar2)();
    return pFVar7;
  }
  if (*(longlong *)(lVar11 + lVar14) == 0) {
    iVar5 = *(int *)pFVar15;
    *(int *)pFVar15 = iVar5 + 1;
    if ((0x10000 < iVar5 + 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk.Num <= NumAnnotationsPerChunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                           ,0x2f0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FLinkerIndexPair *)(*pcVar2)();
      return pFVar7;
    }
    this->NumAnnotations = this->NumAnnotations + 1;
  }
  return (FLinkerIndexPair *)(*(longlong *)(pFVar15 + 8) + lVar14);
}

// FreeAnnotation @ 14229c8f0

void __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::FreeAnnotation
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uStack_c;
  
  uVar8 = param_1 >> 0x1f & 0xffff;
  uVar7 = param_1 + uVar8;
  uVar10 = (int)uVar7 >> 0x10;
  iVar3 = (this->Chunks).ArrayNum;
  lVar9 = (longlong)(int)((uVar7 & 0xffff) - uVar8);
  if ((int)uVar10 < iVar3) {
    uVar7 = 0;
    if ((int)uVar10 < iVar3) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar11 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
    lVar4 = *(longlong *)(pFVar11 + 8);
    if (lVar4 != 0) {
      if (((*(int *)(lVar4 + 8 + lVar9 * 0x10) == -1) != (*(longlong *)(lVar4 + lVar9 * 0x10) == 0))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                                ,0x39,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(lVar4 + lVar9 * 0x10) != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(pFVar11 + 8) + lVar9 * 0x10);
        *puVar2 = 0;
        puVar2[1] = CONCAT44(uStack_c,0xffffffff);
        *(int *)pFVar11 = *(int *)pFVar11 + -1;
        if ((*(int *)pFVar11 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Chunk.Num >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                               ,0x311,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)pFVar11 == 0) {
          operator_delete__(*(void **)(pFVar11 + 8));
          *(undefined8 *)(pFVar11 + 8) = 0;
          if ((this->CurrentAllocatedMemory < 0x100000) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentAllocatedMemory >= ChunkMemory",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                                 ,0x317,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this->CurrentAllocatedMemory = this->CurrentAllocatedMemory - 0x100000;
        }
        piVar1 = &this->NumAnnotations;
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumAnnotations >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                               ,0x31b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
  }
  return;
}

// GetAnnotation @ 14229ceb0

FLinkerIndexPair * __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::GetAnnotation
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this,
          FLinkerIndexPair *__return_storage_ptr__,int param_1)

{
  FPlatformRWLock *SRWLock;
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FLinkerIndexPair *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x3d9,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FLinkerIndexPair *)(*pcVar4)();
      return pFVar8;
    }
  }
  __return_storage_ptr__->LinkerIndex = -1;
  SRWLock = &this->AnnotationArrayCritical;
  __return_storage_ptr__->Linker = (FLinkerLoad *)0x0;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FLinkerIndexPair *)(*pcVar4)();
      return pFVar8;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar9 = param_1 >> 0x1f & 0xffff;
  uVar7 = param_1 + uVar9;
  uVar11 = (int)uVar7 >> 0x10;
  iVar2 = (this->Chunks).ArrayNum;
  if ((int)uVar11 < iVar2) {
    uVar10 = 0;
    if ((int)uVar11 < iVar2) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FLinkerIndexPair *)(*pcVar4)();
        return pFVar8;
      }
    }
    lVar3 = *(longlong *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10 + 8);
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(lVar3 + (longlong)(int)((uVar7 & 0xffff) - uVar9) * 0x10);
      uVar5 = puVar1[1];
      __return_storage_ptr__->Linker = (FLinkerLoad *)*puVar1;
      *(undefined8 *)&__return_storage_ptr__->LinkerIndex = uVar5;
    }
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// RemoveAllAnnotations @ 1422a57c0

void __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::RemoveAllAnnotations
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = this->NumAnnotations;
  SRWLock = &this->AnnotationArrayCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar3 = (this->Chunks).ArrayNum;
  pFVar7 = (this->Chunks).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::TAnnotationChunk,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    operator_delete__(*(void **)(pFVar7 + 8));
    pFVar7 = pFVar7 + 0x10;
  }
  piVar1 = &(this->Chunks).ArrayMax;
  (this->Chunks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Chunks).AllocatorInstance,0,piVar1);
  }
  this->NumAnnotations = 0;
  this->MaxAnnotations = 0;
  this->CurrentAllocatedMemory = 0;
  this->MaxAllocatedMemory = 0;
  if (0 < iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

