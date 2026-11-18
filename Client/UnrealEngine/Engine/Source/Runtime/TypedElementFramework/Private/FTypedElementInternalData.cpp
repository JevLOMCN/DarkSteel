// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// AddRef @ 142c7d7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FTypedElementInternalData::AddRef(FTypedElementInternalData *this,bool param_1)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  int iVar3;
  int iVar4;
  FTypedElementReferences *lpCriticalSection;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong64 uVar7;
  int iVar8;
  ulong64 *puVar9;
  longlong lVar10;
  undefined1 auStackY_168 [32];
  FSparseArrayAllocationInfo local_138;
  ulong64 local_128 [32];
  uint local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  LOCK();
  this->RefCount = this->RefCount + 1;
  UNLOCK();
  if (param_1) {
    lpCriticalSection = (this->References).Ptr;
    if (lpCriticalSection == (FTypedElementReferences *)0x0) {
      local_138.Index = -1;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_28 = 0;
      local_28 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_128,0x20,(void *)0x0);
      iVar3 = *(int *)&(lpCriticalSection->References).field_0x34;
      if (iVar3 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x108,8,1,(ForAnyElementType *)&lpCriticalSection->References,
                           (int *)&(lpCriticalSection->References).field_0x8,
                           (int *)&(lpCriticalSection->References).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(lpCriticalSection->References).field_0x10,false);
      }
      else {
        iVar8 = *(int *)&(lpCriticalSection->References).field_0x30;
        iVar3 = iVar3 + -1;
        lVar10 = *(longlong *)&(lpCriticalSection->References).field_0x0;
        iVar4 = *(int *)((longlong)iVar8 * 0x108 + 4 + lVar10);
        *(int *)&(lpCriticalSection->References).field_0x30 = iVar4;
        *(int *)&(lpCriticalSection->References).field_0x34 = iVar3;
        if (iVar3 != 0) {
          *(undefined4 *)((longlong)iVar4 * 0x108 + lVar10) = 0xffffffff;
        }
      }
      TSparseArrayBase<264,8,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<264,8,FDefaultSparseArrayAllocator> *)
                 &lpCriticalSection->References,&local_138,iVar8);
      if (local_138.Pointer != (ulong64 *)0x0) {
        lVar10 = 2;
        puVar9 = local_128;
        do {
          puVar1 = (ulong64 *)((longlong)local_138.Pointer + 0x80);
          uVar7 = puVar9[1];
          puVar2 = puVar9 + 0x10;
          *(ulong64 *)local_138.Pointer = *puVar9;
          *(ulong64 *)((longlong)local_138.Pointer + 8) = uVar7;
          uVar7 = puVar9[3];
          *(ulong64 *)((longlong)local_138.Pointer + 0x10) = puVar9[2];
          *(ulong64 *)((longlong)local_138.Pointer + 0x18) = uVar7;
          uVar7 = puVar9[5];
          *(ulong64 *)((longlong)local_138.Pointer + 0x20) = puVar9[4];
          *(ulong64 *)((longlong)local_138.Pointer + 0x28) = uVar7;
          uVar7 = puVar9[7];
          *(ulong64 *)((longlong)local_138.Pointer + 0x30) = puVar9[6];
          *(ulong64 *)((longlong)local_138.Pointer + 0x38) = uVar7;
          uVar7 = puVar9[9];
          *(ulong64 *)((longlong)local_138.Pointer + 0x40) = puVar9[8];
          *(ulong64 *)((longlong)local_138.Pointer + 0x48) = uVar7;
          uVar7 = puVar9[0xb];
          *(ulong64 *)((longlong)local_138.Pointer + 0x50) = puVar9[10];
          *(ulong64 *)((longlong)local_138.Pointer + 0x58) = uVar7;
          uVar5 = *(undefined4 *)((longlong)puVar9 + 100);
          uVar7 = puVar9[0xd];
          uVar6 = *(undefined4 *)((longlong)puVar9 + 0x6c);
          *(int *)((longlong)local_138.Pointer + 0x60) = (int)puVar9[0xc];
          *(undefined4 *)((longlong)local_138.Pointer + 100) = uVar5;
          *(int *)((longlong)local_138.Pointer + 0x68) = (int)uVar7;
          *(undefined4 *)((longlong)local_138.Pointer + 0x6c) = uVar6;
          uVar7 = puVar9[0xf];
          *(ulong64 *)((longlong)local_138.Pointer + 0x70) = puVar9[0xe];
          *(ulong64 *)((longlong)local_138.Pointer + 0x78) = uVar7;
          lVar10 = lVar10 + -1;
          puVar9 = puVar2;
          local_138.Pointer = puVar1;
        } while (lVar10 != 0);
        *puVar1 = *puVar2;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return local_138.Index;
  }
  return -1;
}

// ReleaseRef @ 142c7e150

void __thiscall FTypedElementInternalData::ReleaseRef(FTypedElementInternalData *this,int param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  LOCK();
  this->RefCount = this->RefCount + -1;
  UNLOCK();
  lpCriticalSection = (this->References).Ptr;
  if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (param_1 != -1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar3 = *(longlong *)&(lpCriticalSection->References).field_0x0;
    puVar1 = &(lpCriticalSection->References).field_0x10;
    bVar5 = (byte)param_1 & 0x1f;
    uVar10 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    if ((param_1 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= param_1)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar8 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
    lVar2 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = puVar1;
    }
    if ((*(uint *)(puVar8 + lVar2) & uVar10) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
      *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar3) =
           param_1;
    }
    uVar7 = 0xffffffff;
    puVar9 = (undefined4 *)((longlong)param_1 * 0x108 + lVar3);
    *puVar9 = 0xffffffff;
    if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
      uVar7 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
    }
    puVar9[1] = uVar7;
    puVar8 = &(lpCriticalSection->References).field_0x34;
    *(int *)puVar8 = *(int *)puVar8 + 1;
    *(int *)&(lpCriticalSection->References).field_0x30 = param_1;
    if ((param_1 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= param_1)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar8 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = puVar1;
    }
    *(uint *)(puVar8 + lVar2) = *(uint *)(puVar8 + lVar2) & ~uVar10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ~FTypedElementInternalData @ 142c9a6f0

void __thiscall
FTypedElementInternalData::~FTypedElementInternalData(FTypedElementInternalData *this)

{
  FTypedElementReferences *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  (this->Id).field0_0x0.CombinedId = 0;
  this->_padding_ = (longlong)&___7FTypedElementInternalData__6B_;
  lpCriticalSection = (this->References).Ptr;
  if (lpCriticalSection != (FTypedElementReferences *)0x0) {
    ::operator_delete((lpCriticalSection->DestructionRequestCallstack).Ptr,0x108);
    TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>::
    ~TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>
              (&lpCriticalSection->References);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x68);
  }
  if ((this->Id).field0_0x0._s_0.TypeId != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementId.h"
                       ,0x2e,
                       L"Element ID was still set during destruction! This will leak an element reference, and you should release this ID prior to destruction!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetDebugId @ 142cad3a0

FString * __thiscall
FTypedElementInternalData::GetDebugId
          (FTypedElementInternalData *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"ID: %d");
  return __return_storage_ptr__;
}

// GetUntypedData @ 142caef00

void * __thiscall FTypedElementInternalData::GetUntypedData(FTypedElementInternalData *this)

{
  return (void *)0x0;
}

// Initialize @ 142caf3a0

/* WARNING: Removing unreachable block (ram,0x000142caf47c) */

void __thiscall
FTypedElementInternalData::Initialize(FTypedElementInternalData *this,uchar param_1,int param_2)

{
  TUniquePtr<FTypedElementReferences,TDefaultDelete<FTypedElementReferences>_> *pTVar1;
  FTypedElementReferences *pFVar2;
  FTypedElementReferences *pFVar3;
  longlong local_28 [2];
  
  (this->Id).field0_0x0._s_0.TypeId = param_1;
  pTVar1 = &this->References;
  pFVar3 = (FTypedElementReferences *)0x0;
  (this->Id).field0_0x0.CombinedId =
       (this->Id).field0_0x0.CombinedId ^ ((this->Id).field0_0x0.CombinedId ^ param_2) & 0xffffff;
  if (pTVar1->Ptr == (FTypedElementReferences *)0x0) {
    if ((TypedElementReferences::GEnableReferenceTracking != 0) &&
       (pFVar2 = ::operator_new(0x68), pFVar2 != (FTypedElementReferences *)0x0)) {
      (pFVar2->ReferencesCS).CriticalSection.Opaque1[0] = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      *(undefined8 *)(pFVar2->ReferencesCS).CriticalSection.Opaque2 = 0;
      (pFVar2->ReferencesCS).CriticalSection.Opaque3[0] = (HANDLE)0x0;
      (pFVar2->ReferencesCS).CriticalSection.Opaque3[1] = (HANDLE)0x0;
      (pFVar2->ReferencesCS).CriticalSection.Opaque3[2] = (void *)0x0;
      *(undefined8 *)&(pFVar2->References).field_0x0 = 0;
      *(undefined8 *)&(pFVar2->References).field_0x8 = 0;
      *(undefined8 *)&(pFVar2->References).field_0x10 = 0;
      *(undefined8 *)&(pFVar2->References).field_0x18 = 0;
      *(undefined8 *)&(pFVar2->References).field_0x20 = 0;
      *(undefined8 *)&(pFVar2->References).field_0x28 = 0;
      *(undefined8 *)&(pFVar2->References).field_0x30 = 0;
      (pFVar2->DestructionRequestCallstack).Ptr = (FTypedElementReference *)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)pFVar2,4000);
      *(undefined8 *)&(pFVar2->References).field_0x0 = 0;
      *(undefined8 *)&(pFVar2->References).field_0x8 = 0;
      *(undefined8 *)&(pFVar2->References).field_0x20 = 0;
      *(undefined4 *)&(pFVar2->References).field_0x28 = 0;
      *(undefined4 *)&(pFVar2->References).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar2->References).field_0x34 = 0;
      *(undefined4 *)&(pFVar2->References).field_0x30 = 0xffffffff;
      (pFVar2->DestructionRequestCallstack).Ptr = (FTypedElementReference *)0x0;
      pFVar3 = pFVar2;
    }
    pFVar2 = pFVar3;
    if (pTVar1 != (TUniquePtr<FTypedElementReferences,TDefaultDelete<FTypedElementReferences>_> *)
                  local_28) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
    }
    if (pFVar2 != (FTypedElementReferences *)0x0) {
      ::operator_delete((pFVar2->DestructionRequestCallstack).Ptr,0x108);
      TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>::
      ~TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>(&pFVar2->References);
      DeleteCriticalSection((LPCRITICAL_SECTION)pFVar2);
      ::operator_delete(pFVar2,0x68);
    }
  }
  return;
}

// LogExternalReferencesOnDestruction @ 142cb00f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTypedElementInternalData::LogExternalReferencesOnDestruction(FTypedElementInternalData *this)

{
  FTypedElementReferences *this_00;
  void *local_18 [2];
  
  if (1 < this->RefCount) {
    if (2 < (byte)LogCore._0_1_) {
      (**(code **)(this->_padding_ + 0x18))(this,local_18);
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_FTypedElementInternalData::LogExternalReferencesOnDestruction(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    this_00 = (this->References).Ptr;
    if (this_00 != (FTypedElementReferences *)0x0) {
      FTypedElementReferences::LogReferences(this_00);
      return;
    }
    if (2 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_FTypedElementInternalData::LogExternalReferencesOnDestruction(void)const___ptr64'
                  ::__l29::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
  }
  return;
}

// Reset @ 142cb9530

void __thiscall FTypedElementInternalData::Reset(FTypedElementInternalData *this)

{
  FTypedElementReferences *lpCriticalSection;
  FTypedElementReference *pFVar1;
  
  (this->Id).field0_0x0.CombinedId = 0;
  LOCK();
  this->RefCount = 0;
  UNLOCK();
  lpCriticalSection = (this->References).Ptr;
  if (lpCriticalSection != (FTypedElementReferences *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(undefined4 *)&(lpCriticalSection->References).field_0x8 = 0;
    if (*(int *)&(lpCriticalSection->References).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x108,8,0,(ForAnyElementType *)&lpCriticalSection->References,0,
                 (int *)&(lpCriticalSection->References).field_0xc);
    }
    *(undefined4 *)&(lpCriticalSection->References).field_0x30 = 0xffffffff;
    *(undefined4 *)&(lpCriticalSection->References).field_0x34 = 0;
    *(undefined4 *)&(lpCriticalSection->References).field_0x28 = 0;
    pFVar1 = (lpCriticalSection->DestructionRequestCallstack).Ptr;
    if (pFVar1 != (FTypedElementReference *)0x0) {
      (lpCriticalSection->DestructionRequestCallstack).Ptr = (FTypedElementReference *)0x0;
      ::operator_delete(pFVar1,0x108);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// StoreDestructionRequestCallstack @ 142cbc3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTypedElementInternalData::StoreDestructionRequestCallstack(FTypedElementInternalData *this)

{
  TUniquePtr<FTypedElementReference,TDefaultDelete<FTypedElementReference>_> *pTVar1;
  FTypedElementReferences *lpCriticalSection;
  FTypedElementReference *pFVar2;
  uint uVar3;
  FTypedElementReference *pFVar4;
  undefined1 local_18 [16];
  
  lpCriticalSection = (this->References).Ptr;
  if (lpCriticalSection != (FTypedElementReferences *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &lpCriticalSection->DestructionRequestCallstack;
    if ((lpCriticalSection->DestructionRequestCallstack).Ptr != (FTypedElementReference *)0x0) {
      if (1 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FTypedElementReferences::StoreDestructionRequestCallstack(void)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
        if (1 < (byte)LogCore._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FTypedElementReferences::StoreDestructionRequestCallstack(void)___ptr64'
                      ::__l24::LOG_Static,(FLogCategoryBase *)&LogCore);
        }
      }
      FTypedElementReference::LogReference(pTVar1->Ptr);
      if (1 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FTypedElementReferences::StoreDestructionRequestCallstack(void)___ptr64'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FTypedElementReferences::StoreDestructionRequestCallstack(void)___ptr64'
                  ::__l60::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    pFVar4 = ::operator_new(0x108);
    if (pFVar4 == (FTypedElementReference *)0x0) {
      pFVar4 = (FTypedElementReference *)0x0;
    }
    else {
      pFVar4->CallstackDepth = 0;
      uVar3 = FWindowsPlatformStackWalk::CaptureStackBackTrace(pFVar4->Callstack,0x20,(void *)0x0);
      pFVar4->CallstackDepth = uVar3;
    }
    if (pTVar1 != (TUniquePtr<FTypedElementReference,TDefaultDelete<FTypedElementReference>_> *)
                  local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar4;
      pFVar4 = (FTypedElementReference *)0x0;
      ::operator_delete(pFVar2,0x108);
    }
    ::operator_delete(pFVar4,0x108);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

