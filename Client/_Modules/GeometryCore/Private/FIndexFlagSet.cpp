// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 3

// ~FIndexFlagSet @ 14336a390

void __thiscall UE::Geometry::FIndexFlagSet::~FIndexFlagSet(FIndexFlagSet *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (*(int *)((longlong)&(this->Sparse).field0_0x0 + 0xc) != -1) {
    (this->Sparse).field0_0x0.TypedValue.HashSize = 0;
    pvVar1 = *(void **)((longlong)&(this->Sparse).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->Sparse);
  }
  if (((this->Dense).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar2 = (this->Dense).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  return;
}

// InitManual @ 1433b60e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FIndexFlagSet::InitManual(FIndexFlagSet *this,bool param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [12];
  int iStack_6c;
  TBitArray<FDefaultBitArrayAllocator> local_68 [2];
  undefined8 local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (param_1) {
    local_68[1].AllocatorInstance.InlineData._8_8_ = 0;
    local_68[1].NumBits = 0;
    local_68[1].MaxBits = 0;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_68[0].AllocatorInstance.InlineData[0] = '\0';
    local_68[0].AllocatorInstance.InlineData[1] = '\0';
    local_68[0].AllocatorInstance.InlineData[2] = '\0';
    local_68[0].AllocatorInstance.InlineData[3] = '\0';
    local_68[0].AllocatorInstance.InlineData[4] = '\0';
    local_68[0].AllocatorInstance.InlineData[5] = '\0';
    local_68[0].AllocatorInstance.InlineData[6] = '\0';
    local_68[0].AllocatorInstance.InlineData[7] = '\0';
    local_68[0].AllocatorInstance.InlineData[8] = '\0';
    local_68[0].AllocatorInstance.InlineData[9] = '\0';
    local_68[0].AllocatorInstance.InlineData[10] = '\0';
    local_68[0].AllocatorInstance.InlineData[0xb] = '\0';
    local_68[0].AllocatorInstance.InlineData[0xc] = '\0';
    local_68[0].AllocatorInstance.InlineData[0xd] = '\0';
    local_68[0].AllocatorInstance.InlineData[0xe] = '\0';
    local_68[0].AllocatorInstance.InlineData[0xf] = '\0';
    stack0xffffffffffffff90 = 0;
    local_68[0].AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68[0].NumBits = 0;
    local_68[0].MaxBits = 0x80;
    local_68[1].AllocatorInstance.InlineData[0] = 0xff;
    local_68[1].AllocatorInstance.InlineData[1] = 0xff;
    local_68[1].AllocatorInstance.InlineData[2] = 0xff;
    local_68[1].AllocatorInstance.InlineData[3] = 0xff;
    local_68[1].AllocatorInstance.InlineData[4] = 0;
    local_68[1].AllocatorInstance.InlineData[5] = 0;
    local_68[1].AllocatorInstance.InlineData[6] = 0;
    local_68[1].AllocatorInstance.InlineData[7] = 0;
    local_68[1].AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    if ((TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)local_78 !=
        &this->Sparse) {
      TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::
      Emplace<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (&this->Sparse,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_78);
    }
    local_68[1]._24_8_ = local_68[1]._24_8_ & 0xffffffff00000000;
    if (local_68[1].AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68[1].AllocatorInstance.SecondaryData);
    }
    uVar3 = (ulonglong)stack0xffffffffffffff90 >> 0x20;
    stack0xffffffffffffff90 = stack0xffffffffffffff90 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_78,0,&iStack_6c);
    }
    local_68[1].AllocatorInstance.InlineData[0] = 0xff;
    local_68[1].AllocatorInstance.InlineData[1] = 0xff;
    local_68[1].AllocatorInstance.InlineData[2] = 0xff;
    local_68[1].AllocatorInstance.InlineData[3] = 0xff;
    local_68[1].AllocatorInstance.InlineData[4] = 0;
    local_68[1].AllocatorInstance.InlineData[5] = 0;
    local_68[1].AllocatorInstance.InlineData[6] = 0;
    local_68[1].AllocatorInstance.InlineData[7] = 0;
    local_68[0].NumBits = 0;
    if (0x80 < (uint)local_68[0].MaxBits) {
      local_68[0].MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(local_68,0);
    }
    if (local_68[0].AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68[0].AllocatorInstance.SecondaryData);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  else {
    if ((FIndexFlagSet *)local_88 != this) {
      pFVar1 = (this->Dense).field0_0x0.TypedValue.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->Dense).field0_0x0.TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)((longlong)&(this->Dense).field0_0x0 + 8) = 0;
    }
    if (param_2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                         ,0x3f,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->Dense).field0_0x0.TypedValue.ArrayMax == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_2 < 0) {
      param_2 = 0;
    }
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)this,param_2,Default);
  }
  this->DenseCount = 0;
  return;
}

// Contains @ 14358a1e0

bool __thiscall UE::Geometry::FIndexFlagSet::Contains(FIndexFlagSet *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  
  if ((this->Dense).field0_0x0.TypedValue.ArrayMax != -1) {
    uVar5 = 0;
    if (param_1 < (this->Dense).field0_0x0.TypedValue.ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return (bool)(this->Dense).field0_0x0.TypedValue.AllocatorInstance.Data[param_1];
  }
  if (*(int *)((longlong)&(this->Sparse).field0_0x0 + 0xc) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sparse.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                       ,0x51,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)((longlong)&(this->Sparse).field0_0x0 + 0xc) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)((longlong)&(this->Sparse).field0_0x0 + 8) !=
      *(int *)((longlong)&(this->Sparse).field0_0x0 + 0x34)) {
    puVar7 = *(undefined1 **)((longlong)&(this->Sparse).field0_0x0 + 0x40);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((longlong)&(this->Sparse).field0_0x0 + 0x38);
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              ((this->Sparse).field0_0x0.TypedValue.HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->Sparse).field0_0x0;
      do {
        if (*(int *)(lVar1 + (longlong)iVar6 * 0xc) == param_1) goto LAB_14358a2fc;
        iVar6 = *(int *)(lVar1 + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_14358a2fc:
  return iVar6 != -1;
}

