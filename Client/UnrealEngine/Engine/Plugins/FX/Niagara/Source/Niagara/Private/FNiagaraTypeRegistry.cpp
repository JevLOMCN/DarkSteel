// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 31

// FNiagaraTypeRegistry @ 1493ce7d0

FNiagaraTypeRegistry * __thiscall
FNiagaraTypeRegistry::FNiagaraTypeRegistry(FNiagaraTypeRegistry *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  pTVar2 = (TNode *)0x0;
  this->_padding_ = (longlong)&___7FNiagaraTypeRegistry__6B_;
  (this->RegisteredTypesLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->RegisteredTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredTypes).ArrayNum = 0;
  (this->RegisteredTypes).ArrayMax = 0;
  this->RegisteredTypesGeneration = (atomic<unsigned_int>)0x0;
  (this->RegistrationLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->RegisteredUserVariableTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredUserVariableTypes).ArrayNum = 0;
  (this->RegisteredUserVariableTypes).ArrayMax = 0;
  (this->RegisteredSystemVariableTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredSystemVariableTypes).ArrayNum = 0;
  (this->RegisteredSystemVariableTypes).ArrayMax = 0;
  (this->RegisteredEmitterVariableTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEmitterVariableTypes).ArrayNum = 0;
  (this->RegisteredEmitterVariableTypes).ArrayMax = 0;
  (this->RegisteredParticleVariableTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredParticleVariableTypes).ArrayNum = 0;
  (this->RegisteredParticleVariableTypes).ArrayMax = 0;
  (this->RegisteredParamTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredParamTypes).ArrayNum = 0;
  (this->RegisteredParamTypes).ArrayMax = 0;
  (this->RegisteredPayloadTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredPayloadTypes).ArrayNum = 0;
  (this->RegisteredPayloadTypes).ArrayMax = 0;
  (this->RegisteredUserDefinedTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredUserDefinedTypes).ArrayNum = 0;
  (this->RegisteredUserDefinedTypes).ArrayMax = 0;
  (this->RegisteredNumericTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredNumericTypes).ArrayNum = 0;
  (this->RegisteredNumericTypes).ArrayMax = 0;
  (this->RegisteredIndexTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredIndexTypes).ArrayNum = 0;
  (this->RegisteredIndexTypes).ArrayMax = 0;
  *(undefined8 *)&this->RegisteredTypeIndexMap = 0;
  *(undefined8 *)&(this->RegisteredTypeIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTypeIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredTypeIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTypeIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTypeIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredTypeIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredTypeIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredTypeIndexMap).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredStructConversionMap = 0;
  *(undefined8 *)&(this->RegisteredStructConversionMap).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredStructConversionMap).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredStructConversionMap).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredStructConversionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredStructConversionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredStructConversionMap).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredStructConversionMap).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredStructConversionMap).field_0x48 = 0;
  (this->RegisteredSoftObjectPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredSoftObjectPaths).ArrayNum = 0;
  (this->RegisteredSoftObjectPaths).ArrayMax = 0;
  this->bModuleInitialized = false;
  pTVar1 = ::operator_new(0x28);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).NewType.ClassStructOrEnum.field0_0x0.DebugPtr = (UObject *)0x0;
    (pTVar1->Item).NewType.UnderlyingType = 0;
    (pTVar1->Item).NewType.Flags = '\0';
    (pTVar1->Item).NewType.field_0xb = 0;
    (pTVar1->Item).NewType.Size = 0;
    (pTVar1->Item).NewType.Alignment = 0;
    (pTVar1->Item).NewType.RegisteredTypeDefIndex = 0;
    (pTVar1->Item).NewType.UnderlyingTypePathNameHash = 0;
    *(undefined8 *)&(pTVar1->Item).Flags = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).NewType.ClassStructOrEnum.field0_0x0.DebugPtr = (UObject *)0x0;
    (pTVar1->Item).NewType.UnderlyingType = 0;
    (pTVar1->Item).NewType.Flags = '\0';
    (pTVar1->Item).NewType.Size = -1;
    (pTVar1->Item).NewType.Alignment = -1;
    (pTVar1->Item).NewType.RegisteredTypeDefIndex = -1;
    (pTVar1->Item).NewType.UnderlyingTypePathNameHash = 0xffffffff;
    pTVar2 = pTVar1;
  }
  (this->RegistryQueue).Tail = pTVar2;
  (this->RegistryQueue).Head = pTVar2;
  NiagaraDebugVisHelper::GCoreTypeRegistrySingletonPtr = this;
  return this;
}

// ~FNiagaraTypeRegistry @ 1493d1980

void __thiscall FNiagaraTypeRegistry::~FNiagaraTypeRegistry(FNiagaraTypeRegistry *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&___7FNiagaraTypeRegistry__6B_;
  NiagaraDebugVisHelper::GCoreTypeRegistrySingletonPtr = (FNiagaraTypeRegistry *)0x0;
  pTVar1 = (this->RegistryQueue).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->RegistryQueue).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x28);
    pTVar1 = (this->RegistryQueue).Tail;
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->RegisteredSoftObjectPaths).AllocatorInstance.Data,
             (this->RegisteredSoftObjectPaths).ArrayNum);
  pFVar2 = (this->RegisteredSoftObjectPaths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->RegisteredStructConversionMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RegisteredStructConversionMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNiagaraLwcStructConverter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNiagaraLwcStructConverter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNiagaraLwcStructConverter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredStructConversionMap);
  *(undefined4 *)&(this->RegisteredTypeIndexMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RegisteredTypeIndexMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredTypeIndexMap);
  pFVar2 = (this->RegisteredIndexTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RegisteredNumericTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RegisteredUserDefinedTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RegisteredPayloadTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RegisteredParamTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RegisteredParticleVariableTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RegisteredEmitterVariableTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RegisteredSystemVariableTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RegisteredUserVariableTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RegistrationLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RegistrationLock);
  }
  DestructItems<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,int>
            ((TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_> *)
             (this->RegisteredTypes).AllocatorInstance.Data,(this->RegisteredTypes).ArrayNum);
  pFVar2 = (this->RegisteredTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RegisteredTypesLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RegisteredTypesLock);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 1493d3320

bool __thiscall
`FNiagaraTypeRegistry::
ForAllSelectedRegisteredTypes<`FNiagaraTypeRegistry::GetTypeForStruct'::__l2::<lambda_1>,`FNiagaraTypeRegistry::GetTypeForStruct'::__l2::<lambda_2>_>'
::__l3::<lambda_1>::operator()
          (void *this,
          TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_> *param_1)

{
  FNiagaraTypeDefinition *this_00;
  bool bVar1;
  UClass *pUVar2;
  UScriptStruct *pUVar3;
  
  this_00 = param_1->Ptr;
  if (this_00 == (FNiagaraTypeDefinition *)0x0) {
    return false;
  }
  if (((FObjectPtr_u_0 *)&this_00->ClassStructOrEnum)->Handle == (UObject *)0x0) {
    return false;
  }
  pUVar3 = FNiagaraTypeDefinition::IntStruct;
  if (this_00->UnderlyingType != 3) {
    pUVar2 = Z_Construct_UClass_UStruct_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      pUVar3 = (UScriptStruct *)((FObjectPtr_u_0 *)&this_00->ClassStructOrEnum)->Handle;
    }
    else {
      pUVar3 = (UScriptStruct *)0x0;
    }
  }
  if (pUVar3 == (UScriptStruct *)0x0) {
    return false;
  }
  pUVar3 = FNiagaraTypeDefinition::IntStruct;
  if (this_00->UnderlyingType != 3) {
    if (((FObjectPtr_u_0 *)&this_00->ClassStructOrEnum)->Handle != (UObject *)0x0) {
      pUVar2 = Z_Construct_UClass_UStruct_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if (bVar1) {
        pUVar3 = (UScriptStruct *)((FObjectPtr_u_0 *)&this_00->ClassStructOrEnum)->Handle;
        goto LAB_1493d339d;
      }
    }
    pUVar3 = (UScriptStruct *)0x0;
  }
LAB_1493d339d:
  if (*(UScriptStruct **)this != pUVar3) {
    return false;
  }
  return true;
}

// AddReferencedObjects @ 1493d6790

void __thiscall
FNiagaraTypeRegistry::AddReferencedObjects(FNiagaraTypeRegistry *this,FReferenceCollector *param_1)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  SRWLock = &this->RegisteredTypesLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar5 = (this->RegisteredTypes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredTypes).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredTypes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(longlong *)pFVar5 != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,*(longlong *)pFVar5,0,0);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// ClearUserDefinedRegistry @ 1493da400

void __cdecl FNiagaraTypeRegistry::ClearUserDefinedRegistry(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  FNiagaraTypeRegistry *pFVar5;
  ulonglong uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  byte bVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  FNiagaraTypeRegistry *local_res18;
  FScriptContainerElement *local_res20;
  
  pFVar5 = Get();
  local_res18 = pFVar5;
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar5->RegistrationLock);
  local_res10 = (pFVar5->RegisteredUserDefinedTypes).ArrayNum;
  uVar6 = (ulonglong)(int)local_res10;
  pFVar12 = (pFVar5->RegisteredUserDefinedTypes).AllocatorInstance.Data;
  local_res20 = pFVar12 + uVar6 * 0x18;
  do {
    pFVar1 = local_res20;
    if ((pFVar5->RegisteredUserDefinedTypes).ArrayNum != (int)uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraTypeDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      (pFVar5->RegisteredUserDefinedTypes).ArrayNum = 0;
      if ((pFVar5->RegisteredUserDefinedTypes).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(pFVar5->RegisteredUserDefinedTypes).AllocatorInstance,0,
                   &(pFVar5->RegisteredUserDefinedTypes).ArrayMax);
      }
                    /* WARNING: Could not recover jumptable at 0x0001493daa8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar5->RegistrationLock);
      return;
    }
    pFVar1 = (pFVar5->RegisteredPayloadTypes).AllocatorInstance.Data;
    if (((pFVar1 <= pFVar12) &&
        (pFVar12 < pFVar1 + (longlong)(pFVar5->RegisteredPayloadTypes).ArrayMax * 0x18)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = (pFVar5->RegisteredPayloadTypes).ArrayNum;
    lVar7 = (longlong)iVar10;
    if (iVar10 != 0) {
      pFVar1 = (pFVar5->RegisteredPayloadTypes).AllocatorInstance.Data;
      iVar13 = 0;
      iVar10 = 0;
      lVar9 = 0;
      if (((*(longlong *)pFVar1 == *(longlong *)pFVar12) &&
          (*(short *)(pFVar1 + 8) == *(short *)(pFVar12 + 8))) && (pFVar1[10] == pFVar12[10])) {
        bVar14 = 0;
      }
      else {
        bVar14 = 1;
      }
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar10 + 1;
        if (lVar9 < lVar7) {
          pFVar8 = pFVar1 + lVar9 * 0x18 + 10;
          do {
            if (((*(longlong *)(pFVar8 + -10) == *(longlong *)pFVar12) &&
                (*(short *)(pFVar8 + -2) == *(short *)(pFVar12 + 8))) && (*pFVar8 == pFVar12[10])) {
              bVar4 = 0;
            }
            else {
              bVar4 = 1;
            }
            if (bVar14 != bVar4) break;
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 1;
            pFVar8 = pFVar8 + 0x18;
          } while (lVar9 < lVar7);
        }
        if (bVar14 != 0) {
          if (iVar13 != iVar10) {
            memmove(pFVar1 + (longlong)iVar13 * 0x18,pFVar1 + (longlong)iVar10 * 0x18,
                    (longlong)(iVar11 - iVar10) * 0x18);
          }
          iVar13 = iVar13 + (iVar11 - iVar10);
        }
        bVar14 = bVar14 ^ 1;
        iVar10 = iVar11;
      } while (lVar9 < lVar7);
      (local_res18->RegisteredPayloadTypes).ArrayNum = iVar13;
      pFVar5 = local_res18;
    }
    pFVar1 = (pFVar5->RegisteredParamTypes).AllocatorInstance.Data;
    if (((pFVar1 <= pFVar12) &&
        (pFVar12 < pFVar1 + (longlong)(pFVar5->RegisteredParamTypes).ArrayMax * 0x18)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = (pFVar5->RegisteredParamTypes).ArrayNum;
    lVar7 = (longlong)iVar10;
    if (iVar10 != 0) {
      pFVar1 = (pFVar5->RegisteredParamTypes).AllocatorInstance.Data;
      iVar13 = 0;
      iVar10 = 0;
      lVar9 = 0;
      if (((*(longlong *)pFVar1 == *(longlong *)pFVar12) &&
          (*(short *)(pFVar1 + 8) == *(short *)(pFVar12 + 8))) && (pFVar1[10] == pFVar12[10])) {
        bVar14 = 0;
      }
      else {
        bVar14 = 1;
      }
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar10 + 1;
        if (lVar9 < lVar7) {
          pFVar8 = pFVar1 + lVar9 * 0x18 + 10;
          do {
            if (((*(longlong *)(pFVar8 + -10) == *(longlong *)pFVar12) &&
                (*(short *)(pFVar8 + -2) == *(short *)(pFVar12 + 8))) && (*pFVar8 == pFVar12[10])) {
              bVar4 = 0;
            }
            else {
              bVar4 = 1;
            }
            if (bVar14 != bVar4) break;
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 1;
            pFVar8 = pFVar8 + 0x18;
          } while (lVar9 < lVar7);
        }
        if (bVar14 != 0) {
          if (iVar13 != iVar10) {
            memmove(pFVar1 + (longlong)iVar13 * 0x18,pFVar1 + (longlong)iVar10 * 0x18,
                    (longlong)(iVar11 - iVar10) * 0x18);
          }
          iVar13 = iVar13 + (iVar11 - iVar10);
        }
        bVar14 = bVar14 ^ 1;
        iVar10 = iVar11;
      } while (lVar9 < lVar7);
      (local_res18->RegisteredParamTypes).ArrayNum = iVar13;
      pFVar5 = local_res18;
    }
    pFVar1 = (pFVar5->RegisteredNumericTypes).AllocatorInstance.Data;
    if (((pFVar1 <= pFVar12) &&
        (pFVar12 < pFVar1 + (longlong)(pFVar5->RegisteredNumericTypes).ArrayMax * 0x18)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = (pFVar5->RegisteredNumericTypes).ArrayNum;
    lVar7 = (longlong)iVar10;
    if (iVar10 != 0) {
      pFVar1 = (pFVar5->RegisteredNumericTypes).AllocatorInstance.Data;
      iVar13 = 0;
      iVar10 = 0;
      lVar9 = 0;
      if (((*(longlong *)pFVar1 == *(longlong *)pFVar12) &&
          (*(short *)(pFVar1 + 8) == *(short *)(pFVar12 + 8))) && (pFVar1[10] == pFVar12[10])) {
        bVar14 = 0;
      }
      else {
        bVar14 = 1;
      }
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar10 + 1;
        if (lVar9 < lVar7) {
          pFVar8 = pFVar1 + lVar9 * 0x18 + 10;
          do {
            if (((*(longlong *)(pFVar8 + -10) == *(longlong *)pFVar12) &&
                (*(short *)(pFVar8 + -2) == *(short *)(pFVar12 + 8))) && (*pFVar8 == pFVar12[10])) {
              bVar4 = 0;
            }
            else {
              bVar4 = 1;
            }
            if (bVar14 != bVar4) break;
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 1;
            pFVar8 = pFVar8 + 0x18;
          } while (lVar9 < lVar7);
        }
        if (bVar14 != 0) {
          if (iVar13 != iVar10) {
            memmove(pFVar1 + (longlong)iVar13 * 0x18,pFVar1 + (longlong)iVar10 * 0x18,
                    (longlong)(iVar11 - iVar10) * 0x18);
          }
          iVar13 = iVar13 + (iVar11 - iVar10);
        }
        bVar14 = bVar14 ^ 1;
        iVar10 = iVar11;
      } while (lVar9 < lVar7);
      (local_res18->RegisteredNumericTypes).ArrayNum = iVar13;
      pFVar5 = local_res18;
    }
    pFVar1 = (pFVar5->RegisteredIndexTypes).AllocatorInstance.Data;
    if (((pFVar1 <= pFVar12) &&
        (pFVar12 < pFVar1 + (longlong)(pFVar5->RegisteredIndexTypes).ArrayMax * 0x18)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = (pFVar5->RegisteredIndexTypes).ArrayNum;
    lVar7 = (longlong)iVar10;
    if (iVar10 != 0) {
      pFVar1 = (pFVar5->RegisteredIndexTypes).AllocatorInstance.Data;
      iVar13 = 0;
      iVar10 = 0;
      lVar9 = 0;
      if (((*(longlong *)pFVar1 == *(longlong *)pFVar12) &&
          (*(short *)(pFVar1 + 8) == *(short *)(pFVar12 + 8))) && (pFVar1[10] == pFVar12[10])) {
        bVar14 = 0;
      }
      else {
        bVar14 = 1;
      }
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar10 + 1;
        if (lVar9 < lVar7) {
          pFVar8 = pFVar1 + lVar9 * 0x18 + 10;
          do {
            if (((*(longlong *)(pFVar8 + -10) == *(longlong *)pFVar12) &&
                (*(short *)(pFVar8 + -2) == *(short *)(pFVar12 + 8))) && (*pFVar8 == pFVar12[10])) {
              bVar4 = 0;
            }
            else {
              bVar4 = 1;
            }
            if (bVar14 != bVar4) break;
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 1;
            pFVar8 = pFVar8 + 0x18;
          } while (lVar9 < lVar7);
        }
        if (bVar14 != 0) {
          if (iVar13 != iVar10) {
            memmove(pFVar1 + (longlong)iVar13 * 0x18,pFVar1 + (longlong)iVar10 * 0x18,
                    (longlong)(iVar11 - iVar10) * 0x18);
          }
          iVar13 = iVar13 + (iVar11 - iVar10);
        }
        bVar14 = bVar14 ^ 1;
        iVar10 = iVar11;
      } while (lVar9 < lVar7);
      (local_res18->RegisteredIndexTypes).ArrayNum = iVar13;
      pFVar5 = local_res18;
    }
    uVar6 = (ulonglong)local_res10;
    pFVar12 = pFVar12 + 0x18;
  } while( true );
}

// Get @ 1493e6610

FNiagaraTypeRegistry * __cdecl FNiagaraTypeRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraTypeRegistry *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FNiagaraTypeRegistry
              ((FNiagaraTypeRegistry *)
               &`private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_15527c7f0 =
         &`private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FNiagaraTypeRegistry>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FNiagaraTypeRegistry *)DAT_15527c7f0 == (FNiagaraTypeRegistry *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraTypeRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (FNiagaraTypeRegistry *)DAT_15527c7f0;
}

// GetDefaultDataInterfaceByName @ 1493e6ec0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

UNiagaraDataInterfaceBase * __cdecl
FNiagaraTypeRegistry::GetDefaultDataInterfaceByName(FString *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  FObjectPtr_u_0 *this;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeRegistry *pFVar7;
  UNiagaraDataInterfaceBase *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  UObject *pUVar11;
  ulonglong uVar12;
  UObjectBaseUtility *this_00;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined4 local_res10 [2];
  uint local_res18;
  undefined8 local_res20;
  FCoreRedirectObjectName local_120;
  FName local_108;
  FNiagaraTypeRegistry *local_100;
  FScriptContainerElement *local_f8;
  UObjectBaseUtility *local_f0;
  FName local_e8;
  FString local_e0;
  FCoreRedirectObjectName local_d0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar5 = false;
  bVar3 = false;
  local_res10[0] = 0;
  local_f0 = (UObjectBaseUtility *)0x0;
  pFVar7 = Get();
  pwVar14 = L"";
  SRWLock = &pFVar7->RegisteredTypesLock;
  local_100 = pFVar7;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar8 = (UNiagaraDataInterfaceBase *)(*pcVar2)();
    return pUVar8;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_res18 = (pFVar7->RegisteredTypes).ArrayNum;
  uVar12 = (ulonglong)(int)local_res18;
  pFVar16 = (pFVar7->RegisteredTypes).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar12 * 8;
  local_f8 = pFVar15;
  while( true ) {
    if ((pFVar7->RegisteredTypes).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = local_f0;
    if (pFVar16 == pFVar15) break;
    if ((*(FNiagaraTypeDefinition **)pFVar16 != (FNiagaraTypeDefinition *)0x0) &&
       (bVar4 = FNiagaraTypeDefinition::IsDataInterface(*(FNiagaraTypeDefinition **)pFVar16), bVar4)
       ) {
      this = *(FObjectPtr_u_0 **)pFVar16;
      if (*(short *)(this + 1) == 1) {
        if (this->Handle == (UObject *)0x0) {
          pFVar10 = GetTypeName<UClass>(&local_78);
          if ((pFVar10->Data).ArrayNum != 0) {
            pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar14);
        }
        pUVar9 = Z_Construct_UClass_UClass_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar9);
        if ((!bVar5) ||
           (this_00 = (UObjectBaseUtility *)this->Handle, this_00 == (UObjectBaseUtility *)0x0)) {
          pFVar10 = GetTypeName<UClass>(&local_98);
          if ((pFVar10->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
          pFVar10 = GetFullNameForCastLogError<UObject>(&local_88,this->Handle);
          if ((pFVar10->Data).ArrayNum != 0) {
            pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar14,pwVar13);
        }
        local_108.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
        local_108.Number = *(uint *)&this_00->field_0x1c;
        ::FName::ToString(&local_108,&local_e0);
        iVar6 = (param_1->Data).ArrayNum;
        if (local_e0.Data.ArrayNum == iVar6) {
          if (1 < local_e0.Data.ArrayNum) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_e0.Data.AllocatorInstance.Data,
                               (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar5 = iVar6 == 0;
            goto LAB_1493e6ff4;
          }
        }
        else {
          bVar5 = local_e0.Data.ArrayNum + iVar6 == 1;
LAB_1493e6ff4:
          if (!bVar5) {
            bVar5 = true;
            bVar3 = true;
            pFVar10 = UObjectBaseUtility::GetFullName(this_00,&local_b8,(UObject *)0x0,None);
            iVar6 = (param_1->Data).ArrayNum;
            iVar1 = (pFVar10->Data).ArrayNum;
            if (iVar1 == iVar6) {
              if (iVar1 < 2) goto LAB_1493e703d;
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                                 (wchar_t *)(param_1->Data).AllocatorInstance.Data);
              bVar4 = iVar6 == 0;
            }
            else {
              bVar4 = iVar6 + iVar1 == 1;
            }
            if (!bVar4) goto LAB_1493e7045;
          }
        }
LAB_1493e703d:
        bVar5 = true;
        bVar4 = true;
      }
      else {
        this_00 = (UObjectBaseUtility *)0x0;
LAB_1493e7045:
        bVar4 = false;
      }
      if ((bVar3) &&
         (bVar3 = false, local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      pFVar7 = local_100;
      pFVar15 = local_f8;
      if (bVar4) break;
    }
    uVar12 = (ulonglong)local_res18;
    pFVar16 = pFVar16 + 8;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (this_00 == (UObjectBaseUtility *)0x0) {
    local_120.OuterName.ComparisonIndex.Value = 0;
    local_120.OuterName.Number = 0;
    local_120.PackageName.ComparisonIndex.Value = 0;
    local_120.PackageName.Number = 0;
    if ((param_1->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_e8,pwVar14);
    local_120.ObjectName = local_e8;
    FCoreRedirects::GetRedirectedName(&local_d0,Type_Class,&local_120,None);
    local_res20 = 0;
    if (((local_d0.ObjectName == (FName)0x0) && (local_d0.PackageName == (FName)0x0)) ||
       ((local_120.ObjectName == local_d0.ObjectName &&
        ((local_120.OuterName == local_d0.OuterName &&
         (local_120.PackageName == local_d0.PackageName)))))) {
      pUVar11 = (UObject *)0x0;
    }
    else {
      pFVar10 = ::FName::ToString(&local_d0.ObjectName,&local_a8);
      pUVar11 = (UObject *)GetDefaultDataInterfaceByName(pFVar10);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar11 = *(UObject **)&this_00[6].field_0x20;
    if (pUVar11 == (UObject *)0x0) {
      pFVar10 = GetTypeName<UNiagaraDataInterfaceBase>(&local_68);
      if ((pFVar10->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar14);
    }
    pUVar9 = Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister();
    iVar6 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar9->_padding_)) {
      pFVar10 = GetTypeName<UNiagaraDataInterfaceBase>(&local_58);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      pFVar10 = GetFullNameForCastLogError<UObject>(&local_48,pUVar11);
      if ((pFVar10->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar14,pwVar13);
    }
  }
  return (UNiagaraDataInterfaceBase *)pUVar11;
}

// GetIndexTypes @ 1493e7a80

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetIndexTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredIndexTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// GetNumericTypes @ 1493e8470

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetNumericTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredNumericTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// GetReferencerName @ 1493e8a60

FString * __thiscall
FNiagaraTypeRegistry::GetReferencerName(FNiagaraTypeRegistry *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNiagaraTypeRegistry");
  return __return_storage_ptr__;
}

// GetRegisteredEmitterVariableTypes @ 1493e8a90

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetRegisteredEmitterVariableTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredEmitterVariableTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// GetRegisteredParameterTypes @ 1493e8af0

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetRegisteredParameterTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredParamTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// GetRegisteredParticleVariableTypes @ 1493e8b50

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetRegisteredParticleVariableTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredParticleVariableTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// GetRegisteredPayloadTypes @ 1493e8bb0

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetRegisteredPayloadTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredPayloadTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// GetRegisteredSystemVariableTypes @ 1493e8c10

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetRegisteredSystemVariableTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredSystemVariableTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// GetRegisteredType @ 1493e8c70

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeRegistry::GetRegisteredType(FNiagaraTypeRegistry *this,int param_1)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FNiagaraTypeDefinition *pFVar8;
  FNiagaraTypeRegistry *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  
  lVar12 = (longlong)param_1;
  if (param_1 != -1) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (((*(int *)(lVar3 + 0x9040) != 0) && (-1 < param_1)) && (param_1 < *(int *)(lVar3 + 0x9050)))
    {
      if ((param_1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FNiagaraTypeDefinition *)(*pcVar4)();
        return pFVar8;
      }
      if (*(longlong *)(*(longlong *)(lVar3 + 0x9048) + lVar12 * 0x18) != 0) {
        return (FNiagaraTypeDefinition *)(*(longlong *)(lVar3 + 0x9048) + lVar12 * 0x18);
      }
    }
    pFVar9 = Get();
    SRWLock = &pFVar9->RegisteredTypesLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FNiagaraTypeDefinition *)(*pcVar4)();
      return pFVar8;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    if ((-1 < param_1) && (param_1 < (pFVar9->RegisteredTypes).ArrayNum)) {
      uVar11 = 0;
      if (param_1 < (pFVar9->RegisteredTypes).ArrayNum) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FNiagaraTypeDefinition *)(*pcVar4)();
        return pFVar8;
      }
      pFVar2 = (pFVar9->RegisteredTypes).AllocatorInstance.Data + lVar12 * 8;
      if ((*(longlong **)pFVar2 != (longlong *)0x0) && (**(longlong **)pFVar2 != 0)) {
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(int *)(lVar3 + 0x9040) != 0) {
          pFVar13 = (ForAnyElementType *)(lVar3 + 0x9048);
          iVar7 = *(int *)(lVar3 + 0x9050);
          piVar1 = (int *)(lVar3 + 0x9050);
          if (iVar7 <= param_1) {
            uVar11 = param_1 + 1;
            if (iVar7 < (int)uVar11) {
              iVar6 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x18,8,uVar11 - iVar7,pFVar13,piVar1,(int *)(lVar3 + 0x9054));
              DefaultConstructItems<FNiagaraTypeDefinition,int>
                        (pFVar13->Data + (longlong)iVar6 * 0x18,uVar11 - iVar7);
            }
            else {
              if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
              }
              if ((int)uVar11 < iVar7) {
                uVar10 = iVar7 - uVar11;
                if (((int)(uVar10 | uVar11) < 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FNiagaraTypeDefinition *)(*pcVar4)();
                  return pFVar8;
                }
                if (uVar10 != 0) {
                  iVar7 = (*piVar1 - uVar10) - uVar11;
                  if (iVar7 != 0) {
                    memmove(pFVar13->Data + (longlong)(int)uVar11 * 0x18,
                            pFVar13->Data + (longlong)(int)uVar11 * 0x18 +
                            (longlong)(int)uVar10 * 0x18,(longlong)iVar7 * 0x18);
                  }
                  *piVar1 = *piVar1 - uVar10;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,pFVar13,*piVar1,(int *)(lVar3 + 0x9054));
                }
              }
            }
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          pFVar8 = *(FNiagaraTypeDefinition **)pFVar2;
          uVar11 = 0;
          if (param_1 < *(int *)(lVar3 + 0x9050)) {
            uVar11 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FNiagaraTypeDefinition *)(*pcVar4)();
            return pFVar8;
          }
          FNiagaraTypeDefinition::operator=
                    ((FNiagaraTypeDefinition *)(*(longlong *)(lVar3 + 0x9048) + lVar12 * 0x18),
                     pFVar8);
        }
        pFVar8 = *(FNiagaraTypeDefinition **)pFVar2;
        if (SRWLock == (FPlatformRWLock *)0x0) {
          return pFVar8;
        }
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        return pFVar8;
      }
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  return &::Dummy;
}

// GetRegisteredTypeByName @ 1493e8ff0

TOptional<FNiagaraTypeDefinition> * __cdecl
FNiagaraTypeRegistry::GetRegisteredTypeByName
          (TOptional<FNiagaraTypeDefinition> *__return_storage_ptr__,FName param_1)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  UObject *pUVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FNiagaraTypeRegistry *pFVar6;
  TOptional<FNiagaraTypeDefinition> *pTVar7;
  <lambda_2> local_res8;
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->bIsSet = false;
  pFVar6 = Get();
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SRWLock = &pFVar6->RegisteredTypesLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TOptional<FNiagaraTypeDefinition> *)(*pcVar3)();
      return pTVar7;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = (pFVar6->RegisteredTypes).ArrayNum;
  if (-1 < (int)uVar1) {
    if (local_18.ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,&local_18.AllocatorInstance,local_18.ArrayNum,&local_18.ArrayMax);
    }
    Algo::
    TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::GetRegisteredTypeByName_::__l2::<lambda_1>,_FNiagaraTypeRegistry::GetRegisteredTypeByName_::__l2::<lambda_2>_>_::__l3::<lambda_1>,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::GetRegisteredTypeByName_::__l2::<lambda_1>,_FNiagaraTypeRegistry::GetRegisteredTypeByName_::__l2::<lambda_2>_>_::__l3::<lambda_2>_>
              (&pFVar6->RegisteredTypes,&local_18,(<lambda_1>)param_1,local_res8);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    FVar4.Data = local_18.AllocatorInstance.Data;
    if (((TOptional<FNiagaraTypeDefinition> *)local_18.AllocatorInstance.Data !=
         (TOptional<FNiagaraTypeDefinition> *)
         (local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x18)) &&
       ((TOptional<FNiagaraTypeDefinition> *)local_18.AllocatorInstance.Data !=
        __return_storage_ptr__)) {
      pUVar2 = *(UObject **)local_18.AllocatorInstance.Data;
      (__return_storage_ptr__->TypedValue).ClassStructOrEnum.field0_0x0.DebugPtr = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      (__return_storage_ptr__->TypedValue).UnderlyingType = *(ushort *)(FVar4.Data + 8);
      (__return_storage_ptr__->TypedValue).Flags = (uchar)FVar4.Data[10];
      (__return_storage_ptr__->TypedValue).Size = *(short *)(FVar4.Data + 0xc);
      (__return_storage_ptr__->TypedValue).Alignment = *(short *)(FVar4.Data + 0xe);
      (__return_storage_ptr__->TypedValue).RegisteredTypeDefIndex = *(int *)(FVar4.Data + 0x10);
      (__return_storage_ptr__->TypedValue).UnderlyingTypePathNameHash = *(uint *)(FVar4.Data + 0x14)
      ;
      __return_storage_ptr__->bIsSet = true;
    }
    if ((TOptional<FNiagaraTypeDefinition> *)local_18.AllocatorInstance.Data !=
        (TOptional<FNiagaraTypeDefinition> *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetRegisteredTypes @ 1493e9160

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetRegisteredTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FNiagaraTypeRegistry *pFVar5;
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *pTVar6;
  <lambda_1> local_res8;
  
  pFVar5 = Get();
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  SRWLock = &pFVar5->RegisteredTypesLock;
  *piVar1 = 0;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar2 = (pFVar5->RegisteredTypes).ArrayNum;
  if (-1 < (int)uVar2) {
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar2,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    Algo::
    TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,_FNiagaraTypeRegistry::GetRegisteredTypes_::__l3::<lambda_1>,_FNiagaraTypeRegistry::GetRegisteredTypes_::__l3::<lambda_2>_>
              (&pFVar5->RegisteredTypes,__return_storage_ptr__,local_res8,(<lambda_2>)local_res8);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetRegisteredUserVariableTypes @ 1493e9240

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetRegisteredUserVariableTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredUserVariableTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// GetStructConverter @ 1493e9900

FNiagaraLwcStructConverter * __cdecl
FNiagaraTypeRegistry::GetStructConverter
          (FNiagaraLwcStructConverter *__return_storage_ptr__,FNiagaraTypeDefinition *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FNiagaraTypeRegistry *pFVar5;
  uint *puVar6;
  undefined1 *puVar7;
  FNiagaraLwcStructConverter *pFVar8;
  
  pFVar5 = Get();
  AcquireSRWLockShared((PSRWLOCK)&pFVar5->RegistrationLock);
  uVar2 = ::GetTypeHash(param_1);
  if (*(int *)&(pFVar5->RegisteredTypeIndexMap).field_0x8 !=
      *(int *)&(pFVar5->RegisteredTypeIndexMap).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar5->RegisteredTypeIndexMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar5->RegisteredTypeIndexMap).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(pFVar5->RegisteredTypeIndexMap).field_0x48 - 1U & uVar2) *
                               4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&pFVar5->RegisteredTypeIndexMap
                         );
        if (*puVar6 == uVar2) {
          pFVar8 = (FNiagaraLwcStructConverter *)(puVar6 + 1);
          if (puVar6 == (uint *)0x0) {
            pFVar8 = (FNiagaraLwcStructConverter *)0x0;
          }
          if ((pFVar8 != (FNiagaraLwcStructConverter *)0x0) &&
             (*(int *)&(pFVar5->RegisteredStructConversionMap).field_0x8 !=
              *(int *)&(pFVar5->RegisteredStructConversionMap).field_0x34)) {
            puVar7 = *(undefined1 **)&(pFVar5->RegisteredStructConversionMap).field_0x40;
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &(pFVar5->RegisteredStructConversionMap).field_0x38;
            }
            iVar4 = *(int *)(puVar7 + (ulonglong)
                                      (*(int *)&(pFVar5->RegisteredStructConversionMap).field_0x48 -
                                       1U & pFVar8->LWCSize) * 4);
            if (iVar4 != -1) {
              goto LAB_1493e9a20;
            }
          }
          break;
        }
        uVar3 = puVar6[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  goto LAB_1493e9997;
  while (iVar4 = *(int *)(lVar1 + 0x20), iVar4 != -1) {
LAB_1493e9a20:
    lVar1 = *(longlong *)&pFVar5->RegisteredStructConversionMap + (longlong)iVar4 * 0x28;
    if (*(uint *)(*(longlong *)&pFVar5->RegisteredStructConversionMap + (longlong)iVar4 * 0x28) ==
        pFVar8->LWCSize) {
      pFVar8 = (FNiagaraLwcStructConverter *)(lVar1 + 8);
      if (lVar1 == 0) {
        pFVar8 = (FNiagaraLwcStructConverter *)0x0;
      }
      if (pFVar8 != (FNiagaraLwcStructConverter *)0x0) {
        FNiagaraLwcStructConverter::FNiagaraLwcStructConverter(__return_storage_ptr__,pFVar8);
        goto LAB_1493e99a2;
      }
      break;
    }
  }
LAB_1493e9997:
  __return_storage_ptr__->LWCSize = 0;
  __return_storage_ptr__->SWCSize = 0;
  (__return_storage_ptr__->ConversionSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ConversionSteps).ArrayNum = 0;
  (__return_storage_ptr__->ConversionSteps).ArrayMax = 0;
LAB_1493e99a2:
  ReleaseSRWLockShared((PSRWLOCK)&pFVar5->RegistrationLock);
  return __return_storage_ptr__;
}

// GetTypeForStruct @ 1493e9f00

FNiagaraTypeDefinition * __cdecl
FNiagaraTypeRegistry::GetTypeForStruct
          (FNiagaraTypeDefinition *__return_storage_ptr__,UScriptStruct *param_1)

{
  FPlatformRWLock *SRWLock;
  short sVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FNiagaraTypeRegistry *pFVar5;
  FNiagaraTypeDefinition *pFVar6;
  uint *puVar7;
  uint uVar8;
  ushort *puVar9;
  FScriptContainerElement *pFVar10;
  ushort uVar11;
  TObjectPtr<UObject>_u_0 TVar12;
  short *psVar13;
  FScriptContainerElement FVar14;
  int *piVar15;
  short sVar16;
  short *psVar17;
  int local_res20;
  UScriptStruct *local_90;
  UScriptStruct **local_88;
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> local_80;
  TObjectPtr<UObject>_u_0 local_70;
  ushort local_68;
  FScriptContainerElement local_66 [2];
  short local_64 [2];
  int aiStack_60 [2];
  TObjectPtr<UObject>_u_0 local_58;
  ushort local_50;
  FScriptContainerElement local_4e [2];
  short local_4c;
  short local_4a;
  int local_48;
  uint local_44 [3];
  
  pFVar5 = Get();
  TVar12.DebugPtr = (UObject *)0x0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  FVar14 = (FScriptContainerElement)0x0;
  uVar11 = 0;
  sVar1 = -1;
  SRWLock = &pFVar5->RegisteredTypesLock;
  local_res20 = -1;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraTypeDefinition *)(*pcVar2)();
      return pFVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar8 = (pFVar5->RegisteredTypes).ArrayNum;
  if (-1 < (int)uVar8) {
    if (local_80.ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar8,&local_80.AllocatorInstance,local_80.ArrayNum,&local_80.ArrayMax);
    }
    Algo::
    TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::GetTypeForStruct_::__l2::<lambda_1>,_FNiagaraTypeRegistry::GetTypeForStruct_::__l2::<lambda_2>_>_::__l3::<lambda_1>,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::GetTypeForStruct_::__l2::<lambda_1>,_FNiagaraTypeRegistry::GetTypeForStruct_::__l2::<lambda_2>_>_::__l3::<lambda_2>_>
              (&pFVar5->RegisteredTypes,&local_80,(<lambda_1>)param_1,(<lambda_2>)0xff);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    FVar3.Data = local_80.AllocatorInstance.Data;
    if (local_80.AllocatorInstance.Data ==
        local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 0x18) {
      sVar16 = -1;
      uVar8 = 0xffffffff;
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)local_80.AllocatorInstance.Data != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)local_80.AllocatorInstance.Data);
      }
      sVar1 = *(short *)(FVar3.Data + 0xe);
      TVar12.DebugPtr = *(UObject **)FVar3.Data;
      uVar11 = *(ushort *)(FVar3.Data + 8);
      FVar14 = FVar3.Data[10];
      sVar16 = *(short *)(FVar3.Data + 0xc);
      local_res20 = *(int *)(FVar3.Data + 0x10);
      uVar8 = *(uint *)(FVar3.Data + 0x14);
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    if ((UScriptStruct *)TVar12.DebugPtr == (UScriptStruct *)0x0) {
      local_90 = param_1;
      local_70 = (TObjectPtr<UObject>_u_0)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_66[0] = (FScriptContainerElement)0x0;
      local_68 = 2;
      _local_64 = 0xffffffffffffffff;
      aiStack_60[1] = 0xffffffff;
      bVar4 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_90,UserFacing);
      if (!bVar4) {
        local_88 = &local_90;
        `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_88);
      }
      FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_70.ObjectPtr);
      puVar7 = (uint *)(aiStack_60 + 1);
      puVar9 = &local_68;
      pFVar10 = local_66;
      psVar17 = local_64;
      psVar13 = local_64 + 1;
      piVar15 = (int *)(local_64 + 2);
      TVar12 = local_70;
    }
    else {
      local_58.DebugPtr = TVar12.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar12.DebugPtr);
      }
      pFVar10 = local_4e;
      local_4a = sVar1;
      local_48 = local_res20;
      puVar7 = local_44;
      local_50 = uVar11;
      psVar13 = &local_4a;
      local_4e[0] = FVar14;
      piVar15 = &local_48;
      local_4c = sVar16;
      psVar17 = &local_4c;
      puVar9 = &local_50;
      local_44[0] = uVar8;
    }
    (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)TVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UScriptStruct *)TVar12.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable(TVar12.DebugPtr);
    }
    __return_storage_ptr__->UnderlyingType = *puVar9;
    __return_storage_ptr__->Flags = (uchar)*pFVar10;
    __return_storage_ptr__->Size = *psVar17;
    __return_storage_ptr__->Alignment = *psVar13;
    __return_storage_ptr__->RegisteredTypeDefIndex = *piVar15;
    __return_storage_ptr__->UnderlyingTypePathNameHash = *puVar7;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}

// GetUserDefinedTypes @ 1493ea560

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraTypeRegistry::GetUserDefinedTypes
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNiagaraTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&pFVar1->RegisteredUserDefinedTypes);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->RegistrationLock);
  return __return_storage_ptr__;
}

// Init @ 1493eb880

void __cdecl FNiagaraTypeRegistry::Init(void)

{
  IPluginManager *pIVar1;
  TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *this;
  FDelegateHandle FVar2;
  undefined1 local_res8 [32];
  
  pIVar1 = IPluginManager::Get();
  this = (TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
         (**(code **)((longlong)*pIVar1 + 0x138))(pIVar1);
  FVar2 = TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::
          AddStatic<>(this,(_func___cdecl_void_IPlugin_ptr *)local_res8);
                    /* WARNING: Load size is inaccurate */
  NiagaraTypeRegistryLocal::PluginUnmountedHandle.ID = *FVar2.ID;
  return;
}

// InvalidateTypesByPath @ 1493ee880

void __cdecl FNiagaraTypeRegistry::InvalidateTypesByPath(FString *param_1)

{
  FPlatformRWLock *pFVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  code *pcVar10;
  FPlatformRWLock *SRWLock;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FNiagaraTypeRegistry *pFVar15;
  FString *pFVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  FPlatformRWLock *local_res20;
  uint local_b8 [2];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FString local_90;
  FString local_80;
  FName local_70;
  FNiagaraTypeRegistry *local_68;
  FString local_60;
  FName local_50;
  FName FStack_48;
  
  bVar20 = false;
  bVar12 = false;
  local_res10[0] = 0;
  pFVar15 = Get();
  if (pFVar15->bModuleInitialized != false) {
    pFVar1 = &pFVar15->RegistrationLock;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    local_res20 = pFVar1;
    local_68 = pFVar15;
    AcquireSRWLockShared((PSRWLOCK)pFVar1);
    iVar4 = (pFVar15->RegisteredSoftObjectPaths).ArrayNum;
    local_b8[0] = 0;
    if (0 < iVar4) {
      do {
        uVar6 = local_b8[0];
        uVar13 = 0;
        if ((int)local_b8[0] < (pFVar15->RegisteredSoftObjectPaths).ArrayNum) {
          uVar13 = ~local_b8[0] >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar2 = (FName *)((pFVar15->RegisteredSoftObjectPaths).AllocatorInstance.Data +
                          (longlong)(int)uVar6 * 0x20);
        local_70 = *pFVar2;
        local_50 = local_70;
        FStack_48 = pFVar2[1];
        if (local_70 == (FName)0x0) {
          bVar20 = true;
          local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_80.Data.ArrayNum = 0;
          local_80.Data.ArrayMax = 0;
          pFVar16 = &local_80;
        }
        else {
          bVar12 = true;
          pFVar16 = ::FName::ToString(&local_70,&local_60);
        }
        local_90.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_90.Data.ArrayNum = (pFVar16->Data).ArrayNum;
        local_90.Data.ArrayMax = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if ((bVar12) &&
           (bVar12 = false, local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if ((bVar20) &&
           (bVar20 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        iVar5 = (param_1->Data).ArrayNum;
        iVar14 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar14 = 0;
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar11 = ::FString::StartsWith(&local_90,pwVar18,iVar14,IgnoreCase);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          if (((local_a0.Data <= (FScriptContainerElement *)local_b8) &&
              ((FScriptContainerElement *)local_b8 < local_a0.Data + (longlong)local_98._4_4_ * 4))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar14 = (int)local_98;
          if ((int)local_98 == local_98._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_a0,(int *)((longlong)&local_98 + 4));
          }
          local_98 = CONCAT44(local_98._4_4_,iVar14 + 1);
          *(uint *)(local_a0.Data + (longlong)iVar14 * 4) = local_b8[0];
        }
        local_b8[0] = local_b8[0] + 1;
      } while ((int)local_b8[0] < iVar4);
    }
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    if ((int)local_98 != 0) {
      LOCK();
      pFVar15->RegisteredTypesGeneration =
           (atomic<unsigned_int>)((int)pFVar15->RegisteredTypesGeneration + 1);
      UNLOCK();
      local_b0.Data = (FScriptContainerElement *)0x0;
      local_a8 = 0;
      if ((int)local_98 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_98 & 0xffffffff);
      }
      if (0 < (int)local_98) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_98,&local_b0,0,(int *)((longlong)&local_a8 + 4));
      }
      pFVar1 = &pFVar15->RegisteredTypesLock;
      if ((pFVar1 == (FPlatformRWLock *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                              ,0x43,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
      iVar4 = (int)local_98;
      uVar17 = (ulonglong)(int)local_98;
      pFVar21 = local_a0.Data + uVar17 * 4;
      FVar23.Data = local_a0.Data;
      while( true ) {
        if ((int)uVar17 != iVar4) {
          local_res10[0] = local_res10[0] & 0xffffff00;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        SRWLock = local_res20;
        if (FVar23.Data == pFVar21) break;
        uVar6 = *(uint *)FVar23.Data;
        uVar13 = 0;
        if ((int)uVar6 < (pFVar15->RegisteredTypes).ArrayNum) {
          uVar13 = ~uVar6 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar22 = (pFVar15->RegisteredTypes).AllocatorInstance.Data;
        pFVar7 = *(FScriptContainerElement **)(pFVar22 + (longlong)(int)uVar6 * 8);
        if (((local_b0.Data <= pFVar7) && (pFVar7 < local_b0.Data + (longlong)local_a8._4_4_ * 0x18)
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = (int)local_a8;
        if ((int)local_a8 == local_a8._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_b0,(int *)((longlong)&local_a8 + 4));
        }
        local_a8 = CONCAT44(local_a8._4_4_,iVar14 + 1);
        pFVar3 = local_b0.Data + (longlong)iVar14 * 0x18;
        pUVar8 = *(UObject **)pFVar7;
        *(UObject **)pFVar3 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        *(undefined2 *)(pFVar3 + 8) = *(undefined2 *)(pFVar7 + 8);
        FVar23.Data = FVar23.Data + 4;
        pFVar3[10] = pFVar7[10];
        *(undefined2 *)(pFVar3 + 0xc) = *(undefined2 *)(pFVar7 + 0xc);
        *(undefined2 *)(pFVar3 + 0xe) = *(undefined2 *)(pFVar7 + 0xe);
        *(undefined4 *)(pFVar3 + 0x10) = *(undefined4 *)(pFVar7 + 0x10);
        *(undefined4 *)(pFVar3 + 0x14) = *(undefined4 *)(pFVar7 + 0x14);
        puVar9 = *(undefined8 **)(pFVar22 + (longlong)(int)uVar6 * 8);
        *puVar9 = 0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
        uVar17 = local_98 & 0xffffffff;
        pFVar15 = local_68;
      }
      if (pFVar1 != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
      }
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      iVar4 = (int)local_a8;
      pFVar21 = local_b0.Data + 8;
      pFVar7 = local_b0.Data + (longlong)(int)local_a8 * 0x18;
      pFVar22 = local_b0.Data + 10;
      FVar23.Data = local_b0.Data;
      while( true ) {
        if ((int)local_a8 != iVar4) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FNiagaraTypeDefinition,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar23.Data == pFVar7) break;
        pFVar19 = (pFVar15->RegisteredUserVariableTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredUserVariableTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)pFVar21)) && (pFVar19[10] == *pFVar22)) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330830>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xce,
                                  "!Registry.RegisteredUserVariableTypes.Contains(TypeToRemove)");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredUserVariableTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredUserVariableTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330831>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xcf,
                                  "!Registry.RegisteredUserVariableTypes.Contains(TypeToRemove)");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredSystemVariableTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredSystemVariableTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330832>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xd0,
                                  "!Registry.RegisteredSystemVariableTypes.Contains(TypeToRemove)");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredEmitterVariableTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredEmitterVariableTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330833>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xd1,
                                  "!Registry.RegisteredEmitterVariableTypes.Contains(TypeToRemove)")
              ;
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredParticleVariableTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredParticleVariableTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330834>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xd2,
                                  "!Registry.RegisteredParticleVariableTypes.Contains(TypeToRemove)"
                                 );
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredParamTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredParamTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330835>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xd3,"!Registry.RegisteredParamTypes.Contains(TypeToRemove)");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredPayloadTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredPayloadTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330836>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xd4,"!Registry.RegisteredPayloadTypes.Contains(TypeToRemove)");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredUserDefinedTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredUserDefinedTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330837>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xd5,
                                  "!Registry.RegisteredUserDefinedTypes.Contains(TypeToRemove)");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredNumericTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredNumericTypes).ArrayNum * 0x18;
        if (pFVar19 != pFVar3) {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330838>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xd6,"!Registry.RegisteredNumericTypes.Contains(TypeToRemove)");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              break;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
        }
        pFVar19 = (pFVar15->RegisteredIndexTypes).AllocatorInstance.Data;
        pFVar3 = pFVar19 + (longlong)(pFVar15->RegisteredIndexTypes).ArrayNum * 0x18;
        if (pFVar19 == pFVar3) {
LAB_1493ef18f:
          FVar23.Data = FVar23.Data + 0x18;
          pFVar21 = pFVar21 + 0x18;
          pFVar22 = pFVar22 + 0x18;
        }
        else {
          do {
            if (((*(longlong *)pFVar19 == *(longlong *)FVar23.Data) &&
                (*(short *)(pFVar19 + 8) == *(short *)(FVar23.Data + 8))) &&
               (pFVar19[10] == FVar23.Data[10])) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6416974353346330839>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                                  ,0xd7,"!Registry.RegisteredIndexTypes.Contains(TypeToRemove)");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              goto LAB_1493ef18f;
            }
            pFVar19 = pFVar19 + 0x18;
          } while (pFVar19 != pFVar3);
          FVar23.Data = FVar23.Data + 0x18;
          pFVar21 = pFVar21 + 0x18;
          pFVar22 = pFVar22 + 0x18;
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)local_res20);
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return;
}

// IsStaticPossible @ 1493ef790

bool __cdecl FNiagaraTypeRegistry::IsStaticPossible(FNiagaraTypeDefinition *param_1)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraTypeRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  <lambda_2> local_res8;
  TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1->Flags & 1) != 0) {
    return true;
  }
  pFVar5 = Get();
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SRWLock = &pFVar5->RegisteredTypesLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = (pFVar5->RegisteredTypes).ArrayNum;
  if (-1 < (int)uVar1) {
    if (local_18.ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,&local_18.AllocatorInstance,local_18.ArrayNum,&local_18.ArrayMax);
    }
    Algo::
    TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::IsStaticPossible_::__l2::<lambda_1>,_FNiagaraTypeRegistry::IsStaticPossible_::__l2::<lambda_2>_>_::__l3::<lambda_1>,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::IsStaticPossible_::__l2::<lambda_1>,_FNiagaraTypeRegistry::IsStaticPossible_::__l2::<lambda_2>_>_::__l3::<lambda_2>_>
              (&pFVar5->RegisteredTypes,&local_18,(<lambda_1>)param_1,local_res8);
    if (SRWLock == (FPlatformRWLock *)0x0) {
      pFVar6 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x18;
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      pFVar6 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x18;
    }
    bVar3 = local_18.AllocatorInstance.Data != pFVar6;
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// ProcessRegistryQueue @ 1493f2930

void __cdecl FNiagaraTypeRegistry::ProcessRegistryQueue(void)

{
  TNode *pTVar1;
  UObject *pUVar2;
  TNode *pTVar3;
  FNiagaraTypeRegistry *pFVar4;
  TObjectPtr<UObject>_u_0 local_48;
  ushort local_40;
  uchar local_3e;
  undefined8 local_3c;
  uint local_34;
  ENiagaraTypeRegistryFlags local_30;
  
  pFVar4 = Get();
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->RegistrationLock);
  pFVar4->bModuleInitialized = true;
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->RegistrationLock);
  local_3c = 0xffffffffffffffff;
  local_48.DebugPtr = (UObject *)0x0;
  local_40 = 0;
  local_3e = '\0';
  local_34 = 0xffffffff;
  while (pTVar1 = ((pFVar4->RegistryQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pTVar1->Item).NewType.ClassStructOrEnum.field0_0x0.DebugPtr,
       pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_48 = (pTVar1->Item).NewType.ClassStructOrEnum.field0_0x0;
    local_40 = (pTVar1->Item).NewType.UnderlyingType;
    local_3e = (pTVar1->Item).NewType.Flags;
    local_3c._0_2_ = (pTVar1->Item).NewType.Size;
    local_3c._2_2_ = (pTVar1->Item).NewType.Alignment;
    local_3c._4_4_ = (pTVar1->Item).NewType.RegisteredTypeDefIndex;
    local_34 = (pTVar1->Item).NewType.UnderlyingTypePathNameHash;
    local_30 = (pTVar1->Item).Flags;
    pTVar3 = (pFVar4->RegistryQueue).Tail;
    (pFVar4->RegistryQueue).Tail = pTVar1;
    (pTVar1->Item).NewType.ClassStructOrEnum.field0_0x0.DebugPtr = (UObject *)0x0;
    (pTVar1->Item).NewType.UnderlyingType = 0;
    (pTVar1->Item).NewType.Flags = '\0';
    (pTVar1->Item).NewType.Size = -1;
    (pTVar1->Item).NewType.Alignment = -1;
    (pTVar1->Item).NewType.RegisteredTypeDefIndex = -1;
    (pTVar1->Item).NewType.UnderlyingTypePathNameHash = 0xffffffff;
    (pTVar1->Item).Flags = None;
    ::operator_delete(pTVar3,0x28);
    Register((FNiagaraTypeDefinition *)&local_48.ObjectPtr,local_30);
  }
  return;
}

// Register @ 1493f4070

void __cdecl
FNiagaraTypeRegistry::Register(FNiagaraTypeDefinition *param_1,ENiagaraTypeRegistryFlags param_2)

{
  FPlatformRWLock *SRWLock;
  TQueue<FNiagaraTypeRegistry::FQueuedRegistryEntry,0> *pTVar1;
  TNode *pTVar2;
  uchar uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  bool bVar9;
  FNiagaraTypeRegistry *this;
  TNode *pTVar10;
  UClass *pUVar11;
  UScriptStruct *pUVar12;
  TObjectPtr<UObject>_u_0 local_res18;
  TObjectPtr<UObject>_u_0 *local_res20;
  TObjectPtr<UObject>_u_0 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  undefined4 local_3c;
  
  this = Get();
  SRWLock = &this->RegistrationLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (this->bModuleInitialized == false) {
    pTVar1 = &this->RegistryQueue;
    pUVar8 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    uVar4 = param_1->UnderlyingType;
    uVar3 = param_1->Flags;
    sVar5 = param_1->Size;
    local_res18._0_2_ = param_1->Alignment;
    local_res20 = (TObjectPtr<UObject>_u_0 *)
                  CONCAT44(local_res20._4_4_,param_1->RegisteredTypeDefIndex);
    uVar6 = param_1->UnderlyingTypePathNameHash;
    pTVar10 = ::operator_new(0x28);
    if (pTVar10 != (TNode *)0x0) {
      pTVar10->NextNode = (TNode *)0x0;
      (pTVar10->Item).NewType.ClassStructOrEnum.field0_0x0.DebugPtr = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      (pTVar10->Item).NewType.Alignment = local_res18._0_2_;
      (pTVar10->Item).NewType.RegisteredTypeDefIndex = (int)local_res20;
      (pTVar10->Item).NewType.UnderlyingTypePathNameHash = uVar6;
      (pTVar10->Item).NewType.UnderlyingType = uVar4;
      (pTVar10->Item).NewType.Flags = uVar3;
      (pTVar10->Item).NewType.Size = sVar5;
      (pTVar10->Item).Flags = param_2;
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar10;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar10;
      UNLOCK();
    }
                    /* WARNING: Could not recover jumptable at 0x0001493f41bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  bVar9 = FNiagaraTypeHelper::IsLWCType(param_1);
  if (!bVar9) goto LAB_1493f42bf;
  pUVar12 = FNiagaraTypeDefinition::IntStruct;
  if (param_1->UnderlyingType != 3) {
    if ((param_1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_UStruct_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar11);
      if (bVar9) {
        pUVar12 = (UScriptStruct *)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
        goto LAB_1493f420d;
      }
    }
    pUVar12 = (UScriptStruct *)0x0;
  }
LAB_1493f420d:
  if (pUVar12 == (UScriptStruct *)0x0) {
LAB_1493f4235:
    pUVar12 = (UScriptStruct *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar7 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar11->_padding_)) goto LAB_1493f4235;
  }
  local_res18.DebugPtr = (UObject *)FNiagaraTypeHelper::GetSWCStruct(pUVar12);
  local_50.DebugPtr = local_res18.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res18.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res18.DebugPtr);
  }
  local_46 = 0;
  local_48 = 2;
  local_44 = 0xffffffffffffffff;
  local_3c = 0xffffffff;
  bVar9 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res18.DebugPtr,UserFacing);
  if (!bVar9) {
    local_res20 = &local_res18;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res20);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_50.ObjectPtr);
LAB_1493f42bf:
  RegisterTypeInternal(this,param_1);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((param_2 & AllowUserVariable) != None) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredUserVariableTypes,param_1);
  }
  if ((param_2 >> 1 & 1) != 0) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredSystemVariableTypes,param_1);
  }
  if ((param_2 >> 2 & 1) != 0) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredEmitterVariableTypes,param_1);
  }
  if ((param_2 >> 3 & 1) != 0) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredParticleVariableTypes,param_1);
  }
  if ((param_2 >> 4 & 1) != 0) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredParamTypes,param_1);
  }
  if ((param_2 >> 5 & 1) != 0) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredPayloadTypes,param_1);
  }
  if ((param_2 >> 6 & 1) != 0) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredUserDefinedTypes,param_1);
  }
  bVar9 = FNiagaraTypeDefinition::IsValidNumericInput(param_1);
  if (bVar9) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredNumericTypes,param_1);
  }
  pUVar12 = (UScriptStruct *)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
  if (((FNiagaraTypeDefinition::IntStruct == pUVar12) ||
      (FNiagaraTypeDefinition::BoolStruct == pUVar12)) || (param_1->UnderlyingType == 3)) {
    TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraTypeDefinition_const_&>(&this->RegisteredIndexTypes,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001493f43e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// Register @ 1493f43f0

void __cdecl
FNiagaraTypeRegistry::Register
          (FNiagaraTypeDefinition *param_1,bool param_2,bool param_3,bool param_4)

{
  ENiagaraTypeRegistryFlags EVar1;
  ENiagaraTypeRegistryFlags EVar2;
  
  EVar2 = (uint)param_2 * 0x10 + (AllowEmitterVariable|AllowSystemVariable|AllowUserVariable);
  EVar1 = EVar2 | AllowPayload;
  if (!param_3) {
    EVar1 = EVar2;
  }
  EVar2 = EVar1 | IsUserDefined;
  if (!param_4) {
    EVar2 = EVar1;
  }
  Register(param_1,EVar2);
  return;
}

// RegisterStructConverter @ 1493f4420

void __cdecl
FNiagaraTypeRegistry::RegisterStructConverter
          (FNiagaraTypeDefinition *param_1,FNiagaraLwcStructConverter *param_2)

{
  int iVar1;
  FNiagaraTypeRegistry *this;
  int local_res10 [2];
  TPairInitializer<unsigned_int_&&,FNiagaraLwcStructConverter_const_&> local_res18;
  int *local_28;
  FNiagaraLwcStructConverter *local_20;
  
  this = Get();
  iVar1 = RegisterTypeInternal(this,param_1);
  AcquireSRWLockExclusive((PSRWLOCK)&this->RegistrationLock);
  local_28 = local_res10;
  local_res10[0] = iVar1;
  local_20 = param_2;
  TSet<TTuple<unsigned_int,FNiagaraLwcStructConverter>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraLwcStructConverter,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FNiagaraLwcStructConverter_const_&>_>
            ((TSet<TTuple<unsigned_int,FNiagaraLwcStructConverter>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraLwcStructConverter,0>,FDefaultSetAllocator>
              *)&this->RegisteredStructConversionMap,&local_res18,(bool *)&local_28);
                    /* WARNING: Could not recover jumptable at 0x0001493f448d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RegistrationLock);
  return;
}

// RegisterTypeInternal @ 1493f44a0

int __thiscall
FNiagaraTypeRegistry::RegisterTypeInternal
          (FNiagaraTypeRegistry *this,FNiagaraTypeDefinition *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  FSoftObjectPath *this_00;
  FPlatformRWLock *pFVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint *puVar17;
  int *piVar18;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,int_const_&> local_res10;
  uint *local_68;
  uint *local_60;
  int *local_58;
  uint *local_50;
  int *local_48;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(atomic<unsigned_int> *)(lVar1 + 0x9044) != this->RegisteredTypesGeneration) {
    *(atomic<unsigned_int> *)(lVar1 + 0x9044) = this->RegisteredTypesGeneration;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
             *)(lVar1 + 0x9060));
  }
  puVar17 = (uint *)0x0;
  uVar16 = 0;
  local_res8[0] = 0;
  if (param_1->RegisteredTypeDefIndex == -1) {
    local_res8[0] = ::GetTypeHash(param_1);
    if (*(int *)(lVar1 + 0x9068) != *(int *)(lVar1 + 0x9094)) {
      lVar14 = *(longlong *)(lVar1 + 0x90a0);
      if (*(longlong *)(lVar1 + 0x90a0) == 0) {
        lVar14 = lVar1 + 0x9098;
      }
      uVar8 = *(uint *)(lVar14 + (ulonglong)(*(int *)(lVar1 + 0x90a8) - 1U & local_res8[0]) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar12 = (uint *)((longlong)(int)uVar8 * 0x10 +
                            *(longlong *)
                             &((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                                *)(lVar1 + 0x9060))->Elements);
          if (*puVar12 == local_res8[0]) {
            puVar11 = puVar12 + 1;
            if (puVar12 == (uint *)0x0) {
              puVar11 = puVar17;
            }
            if ((puVar11 != (uint *)0x0) && (uVar8 = *puVar11, uVar8 != 0xffffffff)) {
              param_1->RegisteredTypeDefIndex = uVar8;
              return uVar8;
            }
            break;
          }
          uVar8 = puVar12[2];
        } while (uVar8 != 0xffffffff);
      }
    }
    AcquireSRWLockShared((PSRWLOCK)&this->RegistrationLock);
    if (*(int *)&(this->RegisteredTypeIndexMap).field_0x8 !=
        *(int *)&(this->RegisteredTypeIndexMap).field_0x34) {
      puVar15 = *(undefined1 **)&(this->RegisteredTypeIndexMap).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->RegisteredTypeIndexMap).field_0x38;
      }
      uVar8 = *(uint *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->RegisteredTypeIndexMap).field_0x48 - 1U & local_res8[0]) * 4
                       );
      if (uVar8 != 0xffffffff) {
        do {
          puVar12 = (uint *)((longlong)(int)uVar8 * 0x10 +
                            *(longlong *)&this->RegisteredTypeIndexMap);
          if (*puVar12 == local_res8[0]) {
            puVar11 = puVar12 + 1;
            if (puVar12 == (uint *)0x0) {
              puVar11 = puVar17;
            }
            if (puVar11 != (uint *)0x0) {
              param_1->RegisteredTypeDefIndex = *puVar11;
            }
            break;
          }
          uVar8 = puVar12[2];
        } while (uVar8 != 0xffffffff);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->RegistrationLock);
  }
  piVar18 = &param_1->RegisteredTypeDefIndex;
  if (*piVar18 == -1) {
    pFVar13 = &this->RegisteredTypesLock;
    if ((pFVar13 == (FPlatformRWLock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar13);
    *piVar18 = (this->RegisteredTypes).ArrayNum;
    puVar12 = ::operator_new(0x18);
    if (puVar12 != (uint *)0x0) {
      pUVar3 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
      *(UObject **)puVar12 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *(ushort *)(puVar12 + 2) = param_1->UnderlyingType;
      *(uchar *)((longlong)puVar12 + 10) = param_1->Flags;
      *(short *)(puVar12 + 3) = param_1->Size;
      *(short *)((longlong)puVar12 + 0xe) = param_1->Alignment;
      puVar12[4] = *piVar18;
      puVar12[5] = param_1->UnderlyingTypePathNameHash;
      puVar17 = puVar12;
    }
    pFVar4 = (this->RegisteredTypes).AllocatorInstance.Data;
    local_68 = puVar17;
    if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar4 + (longlong)(this->RegisteredTypes).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    iVar9 = (this->RegisteredTypes).ArrayNum;
    piVar18 = &(this->RegisteredTypes).ArrayMax;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->RegisteredTypes).AllocatorInstance,piVar18);
    }
    (this->RegisteredTypes).ArrayNum = iVar9 + 1;
    *(uint **)((this->RegisteredTypes).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_68;
    local_68 = (uint *)0x0;
    ::operator_delete((void *)0x0,0x18);
    if (pFVar13 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar13);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->RegistrationLock);
    iVar9 = (this->RegisteredSoftObjectPaths).ArrayNum;
    piVar18 = &(this->RegisteredSoftObjectPaths).ArrayMax;
    if (iVar9 == *piVar18) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->RegisteredSoftObjectPaths).AllocatorInstance,piVar18);
    }
    (this->RegisteredSoftObjectPaths).ArrayNum = iVar9 + 1;
    this_00 = (FSoftObjectPath *)
              ((this->RegisteredSoftObjectPaths).AllocatorInstance.Data + (longlong)iVar9 * 0x20);
    (this_00->AssetPath).PackageName.ComparisonIndex = 0;
    (this_00->AssetPath).PackageName.Number = 0;
    (this_00->AssetPath).AssetName.ComparisonIndex = 0;
    (this_00->AssetPath).AssetName.Number = 0;
    (this_00->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->SubPathString).Data.ArrayNum = 0;
    (this_00->SubPathString).Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(this_00,(param_1->ClassStructOrEnum).field0_0x0.DebugPtr);
    local_60 = local_res8;
    local_58 = &param_1->RegisteredTypeDefIndex;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)&this->RegisteredTypeIndexMap,&local_res10,(bool *)&local_60);
    pFVar13 = &this->RegistrationLock;
  }
  else {
    if ((param_1->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_1493f4aa9;
    bVar7 = false;
    pFVar13 = &this->RegisteredTypesLock;
    if ((pFVar13 == (FPlatformRWLock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    AcquireSRWLockShared((PSRWLOCK)pFVar13);
    uVar8 = *piVar18;
    if (((int)uVar8 < 0) || ((this->RegisteredTypes).ArrayNum <= (int)uVar8)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6416974353346330898>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                         ,0x112,"RegisteredTypes.IsValidIndex(NewType.RegisteredTypeDefIndex)");
LAB_1493f47ba:
      if (bVar6 != false) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
    }
    else {
      uVar10 = uVar16;
      if ((int)uVar8 < (this->RegisteredTypes).ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      lVar1 = **(longlong **)
                ((this->RegisteredTypes).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      bVar7 = lVar1 == 0;
      if (lVar1 != 0) {
        uVar8 = param_1->RegisteredTypeDefIndex;
        uVar10 = uVar16;
        if ((int)uVar8 < (this->RegisteredTypes).ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar9 = (*pcVar5)();
          return iVar9;
        }
        plVar2 = *(longlong **)
                  ((this->RegisteredTypes).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
        if ((((param_1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)*plVar2) ||
            (param_1->UnderlyingType != *(ushort *)(plVar2 + 1))) ||
           (param_1->Flags != *(uchar *)((longlong)plVar2 + 10))) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bNeedsRegistration || (NewType == *RegisteredTypes[NewType.RegisteredTypeDefIndex])"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                             ,0x115,L"");
          goto LAB_1493f47ba;
        }
      }
    }
    if (pFVar13 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)pFVar13);
    }
    if (!bVar7) goto LAB_1493f4aa9;
    pFVar13 = &this->RegisteredTypesLock;
    if ((pFVar13 == (FPlatformRWLock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar13);
    uVar8 = param_1->RegisteredTypeDefIndex;
    if (((int)uVar8 < 0) || ((this->RegisteredTypes).ArrayNum <= (int)uVar8)) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6416974353346330908>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                         ,0x11c,"RegisteredTypes.IsValidIndex(NewType.RegisteredTypeDefIndex)");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
    }
    else {
      if ((int)uVar8 < (this->RegisteredTypes).ArrayNum) {
        uVar16 = ~uVar8 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      FNiagaraTypeDefinition::operator=
                (*(FNiagaraTypeDefinition **)
                  ((this->RegisteredTypes).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
                 param_1);
    }
    if (pFVar13 == (FPlatformRWLock *)0x0) goto LAB_1493f4aa9;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)pFVar13);
LAB_1493f4aa9:
  local_50 = local_res8;
  local_48 = &param_1->RegisteredTypeDefIndex;
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
            ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9060),(TPairInitializer<unsigned_int_const_&,int_const_&> *)&local_res10.Value,
             (bool *)&local_50);
  return param_1->RegisteredTypeDefIndex;
}

// TearDown @ 1493fe970

void __cdecl FNiagaraTypeRegistry::TearDown(void)

{
  IPluginManager *pIVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  
  pIVar1 = IPluginManager::Get();
  this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
         (**(code **)((longlong)*pIVar1 + 0x138))(pIVar1);
  if (NiagaraTypeRegistryLocal::PluginUnmountedHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              (this,NiagaraTypeRegistryLocal::PluginUnmountedHandle);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_15527c7f0 = (undefined8 *)0x0;
      atexit(`TLazySingleton<FNiagaraTypeRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FNiagaraTypeRegistry>&___ptr64___cdecl_TLazySingleton<FNiagaraTypeRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_15527c7f0 != (undefined8 *)0x0) {
    (**(code **)*DAT_15527c7f0)(DAT_15527c7f0,0);
    DAT_15527c7f0 = (undefined8 *)0x0;
  }
  return;
}

