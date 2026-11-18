// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// ~FIoStoreTocResourceStorage @ 142a565e0

void __thiscall
FIoStoreTocResourceStorage::~FIoStoreTocResourceStorage(FIoStoreTocResourceStorage *this)

{
  byte bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  *pTVar6;
  longlong *plVar7;
  
  bVar1 = (this->Data).TypeIndex;
  if (2 < bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    pTVar6 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
              *)(this->Data)._padding_;
    if (pTVar6 == (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                   *)0x0) {
      pTVar6 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                *)&(this->Data)._padding_;
    }
    break;
  case 2:
    pTVar6 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
              *)(this->Data)._padding_;
    if (pTVar6 == (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                   *)0x0) {
      pTVar6 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                *)&(this->Data)._padding_;
    }
    DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
              (pTVar6,(int)(this->Data)._padding_);
    pvVar2 = (void *)(this->Data)._padding_;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    puVar3 = (undefined8 *)(this->Data)._padding_;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    return;
  }
  DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
            (pTVar6,(int)(this->Data)._padding_);
  pvVar2 = (void *)(this->Data)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  plVar7 = (longlong *)(this->Data)._padding_;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = &(this->Data)._padding_;
  }
  DestructItems<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,int>
            ((TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)plVar7,
             (int)(this->Data)._padding_);
  pvVar2 = (void *)(this->Data)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  puVar3 = (undefined8 *)(this->Data)._padding_;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return;
}

// operator= @ 142a57e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStoreTocResourceStorage * __thiscall
FIoStoreTocResourceStorage::operator=
          (FIoStoreTocResourceStorage *this,FIoStoreTocResourceStorage *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  FIoStoreTocResourceStorage *pFVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_298 [32];
  longlong local_278 [37];
  longlong local_150 [36];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  if (param_1 != this) {
    local_30 = (param_1->Data).TypeIndex;
    uVar13 = (ulonglong)local_30;
    if (2 < uVar13) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FIoStoreTocResourceStorage *)(*pcVar1)();
        return pFVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar13])(local_150,param_1);
    lVar14 = 2;
    lVar11 = 2;
    plVar5 = local_150;
    plVar6 = local_278;
    do {
      plVar10 = plVar6;
      plVar9 = plVar5;
      lVar2 = plVar9[1];
      lVar3 = plVar9[2];
      lVar4 = plVar9[3];
      *plVar10 = *plVar9;
      plVar10[1] = lVar2;
      lVar2 = plVar9[4];
      lVar12 = plVar9[5];
      plVar10[2] = lVar3;
      plVar10[3] = lVar4;
      lVar3 = plVar9[6];
      lVar4 = plVar9[7];
      plVar10[4] = lVar2;
      plVar10[5] = lVar12;
      lVar2 = plVar9[8];
      lVar12 = plVar9[9];
      plVar10[6] = lVar3;
      plVar10[7] = lVar4;
      lVar3 = plVar9[10];
      lVar4 = plVar9[0xb];
      plVar10[8] = lVar2;
      plVar10[9] = lVar12;
      lVar2 = plVar9[0xc];
      lVar12 = plVar9[0xd];
      plVar10[10] = lVar3;
      plVar10[0xb] = lVar4;
      lVar3 = plVar9[0xe];
      lVar4 = plVar9[0xf];
      plVar10[0xc] = lVar2;
      plVar10[0xd] = lVar12;
      plVar10[0xe] = lVar3;
      plVar10[0xf] = lVar4;
      lVar11 = lVar11 + -1;
      plVar5 = plVar9 + 0x10;
      plVar6 = plVar10 + 0x10;
    } while (lVar11 != 0);
    lVar2 = plVar9[0x11];
    lVar12 = 2;
    lVar3 = plVar9[0x12];
    lVar4 = plVar9[0x13];
    lVar11 = plVar9[0x14];
    plVar10[0x10] = plVar9[0x10];
    plVar10[0x11] = lVar2;
    plVar10[0x12] = lVar3;
    plVar10[0x13] = lVar4;
    plVar10[0x14] = lVar11;
    plVar5 = (longlong *)this;
    plVar6 = local_150;
    do {
      plVar10 = plVar6;
      plVar9 = plVar5;
      lVar11 = plVar9[1];
      lVar2 = plVar9[2];
      lVar3 = plVar9[3];
      *plVar10 = *plVar9;
      plVar10[1] = lVar11;
      lVar11 = plVar9[4];
      lVar4 = plVar9[5];
      plVar10[2] = lVar2;
      plVar10[3] = lVar3;
      lVar2 = plVar9[6];
      lVar3 = plVar9[7];
      plVar10[4] = lVar11;
      plVar10[5] = lVar4;
      lVar11 = plVar9[8];
      lVar4 = plVar9[9];
      plVar10[6] = lVar2;
      plVar10[7] = lVar3;
      lVar2 = plVar9[10];
      lVar3 = plVar9[0xb];
      plVar10[8] = lVar11;
      plVar10[9] = lVar4;
      lVar11 = plVar9[0xc];
      lVar4 = plVar9[0xd];
      plVar10[10] = lVar2;
      plVar10[0xb] = lVar3;
      lVar2 = plVar9[0xe];
      lVar3 = plVar9[0xf];
      plVar10[0xc] = lVar11;
      plVar10[0xd] = lVar4;
      plVar10[0xe] = lVar2;
      plVar10[0xf] = lVar3;
      lVar12 = lVar12 + -1;
      plVar5 = plVar9 + 0x10;
      plVar6 = plVar10 + 0x10;
    } while (lVar12 != 0);
    lVar2 = plVar9[0x11];
    lVar3 = plVar9[0x12];
    lVar4 = plVar9[0x13];
    lVar11 = plVar9[0x14];
    plVar10[0x10] = plVar9[0x10];
    plVar10[0x11] = lVar2;
    plVar10[0x12] = lVar3;
    plVar10[0x13] = lVar4;
    plVar10[0x14] = lVar11;
    plVar5 = local_278;
    plVar6 = (longlong *)this;
    do {
      plVar10 = plVar6;
      plVar9 = plVar5;
      lVar11 = plVar9[1];
      lVar2 = plVar9[2];
      lVar3 = plVar9[3];
      *plVar10 = *plVar9;
      plVar10[1] = lVar11;
      lVar11 = plVar9[4];
      lVar4 = plVar9[5];
      plVar10[2] = lVar2;
      plVar10[3] = lVar3;
      lVar2 = plVar9[6];
      lVar3 = plVar9[7];
      plVar10[4] = lVar11;
      plVar10[5] = lVar4;
      lVar11 = plVar9[8];
      lVar4 = plVar9[9];
      plVar10[6] = lVar2;
      plVar10[7] = lVar3;
      lVar2 = plVar9[10];
      lVar3 = plVar9[0xb];
      plVar10[8] = lVar11;
      plVar10[9] = lVar4;
      lVar11 = plVar9[0xc];
      lVar4 = plVar9[0xd];
      plVar10[10] = lVar2;
      plVar10[0xb] = lVar3;
      lVar2 = plVar9[0xe];
      lVar3 = plVar9[0xf];
      plVar10[0xc] = lVar11;
      plVar10[0xd] = lVar4;
      plVar10[0xe] = lVar2;
      plVar10[0xf] = lVar3;
      lVar14 = lVar14 + -1;
      plVar5 = plVar9 + 0x10;
      plVar6 = plVar10 + 0x10;
    } while (lVar14 != 0);
    lVar14 = plVar9[0x11];
    uVar13 = (ulonglong)local_30;
    lVar2 = plVar9[0x12];
    lVar3 = plVar9[0x13];
    lVar11 = plVar9[0x14];
    plVar10[0x10] = plVar9[0x10];
    plVar10[0x11] = lVar14;
    plVar10[0x12] = lVar2;
    plVar10[0x13] = lVar3;
    plVar10[0x14] = lVar11;
    if (2 < uVar13) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FIoStoreTocResourceStorage *)(*pcVar1)();
        return pFVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(local_150);
  }
  return this;
}

