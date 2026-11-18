// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 11

// FDefinitionProvider @ 14d421300

FDefinitionProvider * __thiscall
TraceServices::FDefinitionProvider::FDefinitionProvider
          (FDefinitionProvider *this,IAnalysisSession *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->Pages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pages).ArrayNum = 0;
  (this->Pages).ArrayMax = 0;
  this->PageRemain = 0;
  *(undefined8 *)&this->Definitions = 0;
  *(undefined8 *)&(this->Definitions).field_0x8 = 0;
  *(undefined8 *)&(this->Definitions).field_0x20 = 0;
  *(undefined4 *)&(this->Definitions).field_0x28 = 0;
  *(undefined4 *)&(this->Definitions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Definitions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Definitions).field_0x34 = 0;
  *(undefined8 *)&(this->Definitions).field_0x40 = 0;
  *(undefined4 *)&(this->Definitions).field_0x48 = 0;
  return this;
}

// ~FDefinitionProvider @ 14d42b7e0

void __thiscall TraceServices::FDefinitionProvider::~FDefinitionProvider(FDefinitionProvider *this)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  pFVar7 = (this->Pages).AllocatorInstance.Data;
  iVar1 = (this->Pages).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Pages).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar3) break;
    FMemory::Free(*(void **)pFVar7);
    pFVar7 = pFVar7 + 8;
  }
  *(undefined4 *)&(this->Definitions).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Definitions).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Definitions);
  pFVar3 = (this->Pages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
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
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// AddEntry @ 14d43a460

void __thiscall
TraceServices::FDefinitionProvider::AddEntry
          (FDefinitionProvider *this,ulong64 param_1,void *param_2)

{
  TPairInitializer<unsigned___int64_const_&,void_const_*_const_&> local_res8;
  void *local_res18 [2];
  void ***local_18;
  void **local_10;
  
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  local_res8.Value = (void **)param_1;
  local_res18[0] = param_2;
  TSet<TTuple<unsigned___int64,void_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,void_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,void_const_*_const_&>_>
            ((TSet<TTuple<unsigned___int64,void_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,void_const_*,0>,FDefaultSetAllocator>
              *)&this->Definitions,&local_res8,(bool *)&local_18);
  return;
}

// Allocate @ 14d43e920

void * __thiscall
TraceServices::FDefinitionProvider::Allocate(FDefinitionProvider *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  void *local_18 [2];
  
  uVar8 = 0x400;
  if (param_1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\DefinitionProvider.cpp"
                       ,0x2d,L"");
    if (bVar4) {
code_r0x00014d43e991:
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else if ((0x400 < param_1) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size <= PageSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\DefinitionProvider.cpp"
                              ,0x2e,L""), bVar4)) goto code_r0x00014d43e991;
  if (param_1 < this->PageRemain) {
    iVar5 = (this->Pages).ArrayNum;
    uVar7 = iVar5 - 1;
    uVar8 = 0;
    if ((int)uVar7 < iVar5) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
    uVar8 = this->PageRemain;
    local_18[0] = (void *)((ulonglong)(0x400 - uVar8) +
                          *(longlong *)
                           ((this->Pages).AllocatorInstance.Data +
                           (longlong)(this->Pages).ArrayNum * 8 + -8));
  }
  else {
    local_18[0] = FMemory::MallocZeroed(0x400,0);
    pFVar2 = (this->Pages).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Pages).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
    iVar5 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Pages).AllocatorInstance,piVar1);
    }
    (this->Pages).ArrayNum = iVar5 + 1;
    *(void **)((this->Pages).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  }
  this->PageRemain = uVar8 - param_1;
  return local_18[0];
}

// BeginEdit @ 14d441a30

void __thiscall TraceServices::FDefinitionProvider::BeginEdit(FDefinitionProvider *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d441a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// BeginRead @ 14d442040

void __thiscall TraceServices::FDefinitionProvider::BeginRead(FDefinitionProvider *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d442044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockShared((PSRWLOCK)&this->Lock);
  return;
}

// EditAccessCheck @ 14d44ffe0

void __thiscall TraceServices::FDefinitionProvider::EditAccessCheck(FDefinitionProvider *this)

{
  return;
}

// EndEdit @ 14d451510

void __thiscall TraceServices::FDefinitionProvider::EndEdit(FDefinitionProvider *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d451514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// EndRead @ 14d451990

void __thiscall TraceServices::FDefinitionProvider::EndRead(FDefinitionProvider *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d451994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->Lock);
  return;
}

// FindEntry @ 14d4603f0

void * __thiscall
TraceServices::FDefinitionProvider::FindEntry(FDefinitionProvider *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->Definitions).field_0x8 != *(int *)&(this->Definitions).field_0x34) {
    puVar3 = *(undefined1 **)&(this->Definitions).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Definitions).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->Definitions).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->Definitions + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->Definitions + (longlong)iVar2 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (void *)0x0;
          }
          return *(void **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (void *)0x0;
}

// ReadAccessCheck @ 14d481120

void __thiscall TraceServices::FDefinitionProvider::ReadAccessCheck(FDefinitionProvider *this)

{
  return;
}

