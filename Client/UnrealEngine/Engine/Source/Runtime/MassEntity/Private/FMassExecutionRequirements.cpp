// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 7

// FMassExecutionRequirements @ 1471d9270

FMassExecutionRequirements * __thiscall
FMassExecutionRequirements::FMassExecutionRequirements(FMassExecutionRequirements *this)

{
  *(undefined8 *)&(this->Fragments).Read.field_0x10 = 0;
  *(undefined4 *)&(this->Fragments).Read.field_0x18 = 0;
  *(undefined4 *)&(this->Fragments).Read.field_0x1c = 0x80;
  *(undefined8 *)&(this->Fragments).Write.field_0x10 = 0;
  *(undefined4 *)&(this->Fragments).Write.field_0x18 = 0;
  *(undefined4 *)&(this->Fragments).Write.field_0x1c = 0x80;
  *(undefined8 *)&(this->ChunkFragments).Read.field_0x10 = 0;
  *(undefined4 *)&(this->ChunkFragments).Read.field_0x18 = 0;
  *(undefined4 *)&(this->ChunkFragments).Read.field_0x1c = 0x80;
  *(undefined8 *)&(this->ChunkFragments).Write.field_0x10 = 0;
  *(undefined4 *)&(this->ChunkFragments).Write.field_0x18 = 0;
  *(undefined4 *)&(this->ChunkFragments).Write.field_0x1c = 0x80;
  *(undefined8 *)&(this->SharedFragments).Read.field_0x10 = 0;
  *(undefined4 *)&(this->SharedFragments).Read.field_0x18 = 0;
  *(undefined4 *)&(this->SharedFragments).Read.field_0x1c = 0x80;
  *(undefined8 *)&(this->SharedFragments).Write.field_0x10 = 0;
  *(undefined4 *)&(this->SharedFragments).Write.field_0x18 = 0;
  *(undefined4 *)&(this->SharedFragments).Write.field_0x1c = 0x80;
  *(undefined8 *)&(this->ConstSharedFragments).Read.field_0x10 = 0;
  *(undefined4 *)&(this->ConstSharedFragments).Read.field_0x18 = 0;
  *(undefined4 *)&(this->ConstSharedFragments).Read.field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredSubsystems).Read.field_0x10 = 0;
  *(undefined4 *)&(this->RequiredSubsystems).Read.field_0x18 = 0;
  *(undefined4 *)&(this->RequiredSubsystems).Read.field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredSubsystems).Write.field_0x10 = 0;
  *(undefined4 *)&(this->RequiredSubsystems).Write.field_0x18 = 0;
  *(undefined4 *)&(this->RequiredSubsystems).Write.field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x1c = 0x80;
  this->ResourcesUsedCount = -1;
  return this;
}

// ~FMassExecutionRequirements @ 1471e0230

void __thiscall
FMassExecutionRequirements::~FMassExecutionRequirements(FMassExecutionRequirements *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->RequiredNoneTags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAnyTags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAllTags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredSubsystems).Write.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredSubsystems).Read.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ConstSharedFragments).Read.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SharedFragments).Write.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SharedFragments).Read.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ChunkFragments).Write.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ChunkFragments).Read.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Fragments).Write.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Fragments).Read.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// Append @ 1471f1d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471f1d42) */
/* WARNING: Removing unreachable block (ram,0x0001471f1d67) */

void __thiscall
FMassExecutionRequirements::Append
          (FMassExecutionRequirements *this,FMassExecutionRequirements *param_1)

{
  int iVar1;
  TMassExecutionAccess<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *pTVar2;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  FMassExecutionRequirements *this_00;
  ForElementType<unsigned_int> FVar9;
  TMassExecutionAccess<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *this_01;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar10;
  FMassExecutionRequirements *pFVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStackY_178 [32];
  <lambda_1> local_148;
  <lambda_1> local_147;
  <lambda_1> local_146;
  <lambda_1> local_145;
  <lambda_1> local_144;
  <lambda_1> local_143;
  <lambda_1> local_142;
  <lambda_1> local_141;
  undefined1 local_140 [16];
  ForElementType<unsigned_int> local_130;
  int local_128;
  int local_124;
  TBitArray<FDefaultBitArrayAllocator> local_120;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  TBitArray<FDefaultBitArrayAllocator> local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar13 = 0;
  do {
    pFVar11 = param_1;
    if (uVar13 != 0) {
      pFVar11 = (FMassExecutionRequirements *)&(param_1->Fragments).Write;
    }
    if ((2 < uVar13) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OpIndex <= EMassAccessOperation::MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                           ,0x22,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = this;
    if (uVar13 != 0) {
      this_00 = (FMassExecutionRequirements *)&(this->Fragments).Write;
    }
    if ((this_00 == pFVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&A != &B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x52d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_124 = 0x80;
    local_130 = (ForElementType<unsigned_int>)0x0;
    local_128 = 0;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
               (TBitArray<FDefaultBitArrayAllocator> *)pFVar11,
               (TBitArray<FDefaultBitArrayAllocator> *)local_140,MaxSize,&local_148);
    if (this_00 != (FMassExecutionRequirements *)local_140) {
      iVar1 = *(int *)&(this_00->Fragments).Read.field_0x1c;
      *(undefined4 *)&(this_00->Fragments).Read.field_0x18 = 0;
      uVar7 = local_128 + 0x1fU & 0xffffffe0;
      if ((iVar1 < (int)uVar7) || (0x80 < iVar1)) {
        uVar6 = 0x80;
        if (0x80 < (int)uVar7) {
          uVar6 = uVar7;
        }
        *(uint *)&(this_00->Fragments).Read.field_0x1c = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
      }
      *(int *)&(this_00->Fragments).Read.field_0x18 = local_128;
      if (local_128 != 0) {
        FVar8 = (ForElementType<unsigned_int>)local_140;
        if (local_130 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_130;
        }
        pFVar11 = *(FMassExecutionRequirements **)&(this_00->Fragments).Read.field_0x10;
        if (pFVar11 != (FMassExecutionRequirements *)0x0) {
          this_00 = pFVar11;
        }
        memcpy(this_00,(void *)FVar8,(ulonglong)(local_128 + 0x1fU >> 5) << 2);
      }
    }
    if (local_130 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_130);
    }
    if ((2 < uVar13) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OpIndex <= EMassAccessOperation::MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                           ,0x28,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = 0x40;
    if (uVar13 != 0) {
      lVar12 = 0x60;
    }
    FVar8 = (ForElementType<unsigned_int>)((longlong)&(param_1->Fragments).Read.field_0x0 + lVar12);
    if (uVar13 < 3) {
      FVar9 = (ForElementType<unsigned_int>)&this->ChunkFragments;
      if (uVar13 != 0) goto LAB_1471f1f0b;
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpIndex <= EMassAccessOperation::MAX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                         ,0x22,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_1471f1f0b:
      FVar9 = (ForElementType<unsigned_int>)&(this->ChunkFragments).Write;
    }
    if ((FVar9 == FVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&A != &B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x52d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_120.MaxBits = 0x80;
    local_120.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_120.NumBits = 0;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              ((TBitArray<FDefaultBitArrayAllocator> *)FVar9,
               (TBitArray<FDefaultBitArrayAllocator> *)FVar8,&local_120,MaxSize,&local_147);
    if (FVar9 != (ForElementType<unsigned_int>)&local_120) {
      *(int *)((longlong)FVar9 + 0x18) = 0;
      uVar7 = local_120.NumBits + 0x1fU & 0xffffffe0;
      if ((*(int *)((longlong)FVar9 + 0x1c) < (int)uVar7) ||
         (0x80 < *(int *)((longlong)FVar9 + 0x1c))) {
        uVar6 = 0x80;
        if (0x80 < (int)uVar7) {
          uVar6 = uVar7;
        }
        *(uint *)((longlong)FVar9 + 0x1c) = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)FVar9,0);
      }
      *(int *)((longlong)FVar9 + 0x18) = local_120.NumBits;
      if (local_120.NumBits != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_120;
        if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_120.AllocatorInstance.SecondaryData;
        }
        if (*(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar9 = *(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10);
        }
        memcpy((void *)FVar9,(void *)FVar8,(ulonglong)(local_120.NumBits + 0x1fU >> 5) << 2);
      }
    }
    if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_120.AllocatorInstance.SecondaryData);
    }
    if (uVar13 < 3) {
      if (uVar13 != 0) goto LAB_1471f2037;
      FVar8 = (ForElementType<unsigned_int>)&param_1->SharedFragments;
      FVar9 = (ForElementType<unsigned_int>)&this->SharedFragments;
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpIndex <= EMassAccessOperation::MAX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                         ,0x28,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_1471f2037:
      FVar8 = (ForElementType<unsigned_int>)&(param_1->SharedFragments).Write;
      if ((2 < uVar13) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OpIndex <= EMassAccessOperation::MAX",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                             ,0x22,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar9 = (ForElementType<unsigned_int>)&(this->SharedFragments).Write;
    }
    if ((FVar9 == FVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&A != &B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x52d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_100.MaxBits = 0x80;
    local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_100.NumBits = 0;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              ((TBitArray<FDefaultBitArrayAllocator> *)FVar9,
               (TBitArray<FDefaultBitArrayAllocator> *)FVar8,&local_100,MaxSize,&local_146);
    if (FVar9 != (ForElementType<unsigned_int>)&local_100) {
      *(int *)((longlong)FVar9 + 0x18) = 0;
      uVar7 = local_100.NumBits + 0x1fU & 0xffffffe0;
      if ((*(int *)((longlong)FVar9 + 0x1c) < (int)uVar7) ||
         (0x80 < *(int *)((longlong)FVar9 + 0x1c))) {
        uVar6 = 0x80;
        if (0x80 < (int)uVar7) {
          uVar6 = uVar7;
        }
        *(uint *)((longlong)FVar9 + 0x1c) = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)FVar9,0);
      }
      *(int *)((longlong)FVar9 + 0x18) = local_100.NumBits;
      if (local_100.NumBits != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_100;
        if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_100.AllocatorInstance.SecondaryData;
        }
        if (*(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar9 = *(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10);
        }
        memcpy((void *)FVar9,(void *)FVar8,(ulonglong)(local_100.NumBits + 0x1fU >> 5) << 2);
      }
    }
    if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
    }
    if (uVar13 < 3) {
      if (uVar13 != 0) goto LAB_1471f2192;
      FVar8 = (ForElementType<unsigned_int>)&param_1->RequiredSubsystems;
      FVar9 = (ForElementType<unsigned_int>)&this->RequiredSubsystems;
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpIndex <= EMassAccessOperation::MAX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                         ,0x28,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_1471f2192:
      FVar8 = (ForElementType<unsigned_int>)&(param_1->RequiredSubsystems).Write;
      if ((2 < uVar13) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OpIndex <= EMassAccessOperation::MAX",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                             ,0x22,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar9 = (ForElementType<unsigned_int>)&(this->RequiredSubsystems).Write;
    }
    if ((FVar9 == FVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&A != &B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x52d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_e0.MaxBits = 0x80;
    local_e0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_e0.NumBits = 0;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              ((TBitArray<FDefaultBitArrayAllocator> *)FVar9,
               (TBitArray<FDefaultBitArrayAllocator> *)FVar8,&local_e0,MaxSize,&local_145);
    if (FVar9 != (ForElementType<unsigned_int>)&local_e0) {
      *(int *)((longlong)FVar9 + 0x18) = 0;
      uVar7 = local_e0.NumBits + 0x1fU & 0xffffffe0;
      if ((*(int *)((longlong)FVar9 + 0x1c) < (int)uVar7) ||
         (0x80 < *(int *)((longlong)FVar9 + 0x1c))) {
        uVar6 = 0x80;
        if (0x80 < (int)uVar7) {
          uVar6 = uVar7;
        }
        *(uint *)((longlong)FVar9 + 0x1c) = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)FVar9,0);
      }
      *(int *)((longlong)FVar9 + 0x18) = local_e0.NumBits;
      if (local_e0.NumBits != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_e0;
        if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_e0.AllocatorInstance.SecondaryData;
        }
        if (*(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar9 = *(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10);
        }
        memcpy((void *)FVar9,(void *)FVar8,(ulonglong)(local_e0.NumBits + 0x1fU >> 5) << 2);
      }
    }
    if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e0.AllocatorInstance.SecondaryData);
    }
    uVar13 = uVar13 + 1;
    if (1 < uVar13) {
      this_01 = &this->ConstSharedFragments;
      if ((this_01 == &param_1->ConstSharedFragments) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("&A != &B",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x52d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_c0.MaxBits = 0x80;
      local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_c0.NumBits = 0;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ConstSharedFragments,&local_c0,
                 MaxSize,&local_144);
      if ((TBitArray<FDefaultBitArrayAllocator> *)this_01 != &local_c0) {
        iVar1 = *(int *)&(this->ConstSharedFragments).Read.field_0x1c;
        *(undefined4 *)&(this->ConstSharedFragments).Read.field_0x18 = 0;
        uVar13 = local_c0.NumBits + 0x1fU & 0xffffffe0;
        if ((iVar1 < (int)uVar13) || (0x80 < iVar1)) {
          uVar7 = 0x80;
          if (0x80 < (int)uVar13) {
            uVar7 = uVar13;
          }
          *(uint *)&(this->ConstSharedFragments).Read.field_0x1c = uVar7;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)this_01,0);
        }
        *(int *)&(this->ConstSharedFragments).Read.field_0x18 = local_c0.NumBits;
        if (local_c0.NumBits != 0) {
          FVar8 = (ForElementType<unsigned_int>)&local_c0;
          if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar8 = local_c0.AllocatorInstance.SecondaryData;
          }
          pTVar2 = *(TMassExecutionAccess<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                     **)&(this->ConstSharedFragments).Read.field_0x10;
          if (pTVar2 != (TMassExecutionAccess<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                         *)0x0) {
            this_01 = pTVar2;
          }
          memcpy(this_01,(void *)FVar8,(ulonglong)(local_c0.NumBits + 0x1fU >> 5) << 2);
        }
      }
      if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
      }
      pTVar10 = &this->RequiredAllTags;
      if ((pTVar10 == &param_1->RequiredAllTags) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("&A != &B",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x52d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_a0.NumBits = 0;
      local_a0.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAllTags,&local_a0,MaxSize
                 ,&local_143);
      if ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10 != &local_a0) {
        iVar1 = *(int *)&(this->RequiredAllTags).field_0x1c;
        *(undefined4 *)&(this->RequiredAllTags).field_0x18 = 0;
        uVar13 = local_a0.NumBits + 0x1fU & 0xffffffe0;
        if ((iVar1 < (int)uVar13) || (0x80 < iVar1)) {
          uVar7 = 0x80;
          if (0x80 < (int)uVar13) {
            uVar7 = uVar13;
          }
          *(uint *)&(this->RequiredAllTags).field_0x1c = uVar7;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10,0);
        }
        *(int *)&(this->RequiredAllTags).field_0x18 = local_a0.NumBits;
        if (local_a0.NumBits != 0) {
          FVar8 = (ForElementType<unsigned_int>)&local_a0;
          if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar8 = local_a0.AllocatorInstance.SecondaryData;
          }
          pTVar3 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **
                    )&(this->RequiredAllTags).field_0x10;
          if (pTVar3 != (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                         *)0x0) {
            pTVar10 = pTVar3;
          }
          memcpy(pTVar10,(void *)FVar8,(ulonglong)(local_a0.NumBits + 0x1fU >> 5) << 2);
        }
      }
      if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a0.AllocatorInstance.SecondaryData);
      }
      pTVar10 = &this->RequiredAnyTags;
      if ((pTVar10 == &param_1->RequiredAnyTags) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("&A != &B",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x52d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_80.NumBits = 0;
      local_80.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAnyTags,&local_80,MaxSize
                 ,&local_142);
      if ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10 != &local_80) {
        iVar1 = *(int *)&(this->RequiredAnyTags).field_0x1c;
        *(undefined4 *)&(this->RequiredAnyTags).field_0x18 = 0;
        uVar13 = local_80.NumBits + 0x1fU & 0xffffffe0;
        if ((iVar1 < (int)uVar13) || (0x80 < iVar1)) {
          uVar7 = 0x80;
          if (0x80 < (int)uVar13) {
            uVar7 = uVar13;
          }
          *(uint *)&(this->RequiredAnyTags).field_0x1c = uVar7;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10,0);
        }
        *(int *)&(this->RequiredAnyTags).field_0x18 = local_80.NumBits;
        if (local_80.NumBits != 0) {
          FVar8 = (ForElementType<unsigned_int>)&local_80;
          if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar8 = local_80.AllocatorInstance.SecondaryData;
          }
          pTVar3 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **
                    )&(this->RequiredAnyTags).field_0x10;
          if (pTVar3 != (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                         *)0x0) {
            pTVar10 = pTVar3;
          }
          memcpy(pTVar10,(void *)FVar8,(ulonglong)(local_80.NumBits + 0x1fU >> 5) << 2);
        }
      }
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
      }
      pTVar10 = &this->RequiredNoneTags;
      if ((pTVar10 == &param_1->RequiredNoneTags) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("&A != &B",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x52d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_60.NumBits = 0;
      local_60.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneTags,&local_60,
                 MaxSize,&local_141);
      if ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10 != &local_60) {
        iVar1 = *(int *)&(this->RequiredNoneTags).field_0x1c;
        *(undefined4 *)&(this->RequiredNoneTags).field_0x18 = 0;
        uVar13 = local_60.NumBits + 0x1fU & 0xffffffe0;
        if ((iVar1 < (int)uVar13) || (0x80 < iVar1)) {
          uVar7 = 0x80;
          if (0x80 < (int)uVar13) {
            uVar7 = uVar13;
          }
          *(uint *)&(this->RequiredNoneTags).field_0x1c = uVar7;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)pTVar10,0);
        }
        *(int *)&(this->RequiredNoneTags).field_0x18 = local_60.NumBits;
        if (local_60.NumBits != 0) {
          FVar8 = (ForElementType<unsigned_int>)&local_60;
          if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar8 = local_60.AllocatorInstance.SecondaryData;
          }
          pTVar3 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **
                    )&(this->RequiredNoneTags).field_0x10;
          if (pTVar3 != (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                         *)0x0) {
            pTVar10 = pTVar3;
          }
          memcpy(pTVar10,(void *)FVar8,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
        }
      }
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
      }
      this->ResourcesUsedCount = -1;
      return;
    }
  } while( true );
}

// AsCompositionDescriptor @ 1471f4030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMassArchetypeCompositionDescriptor * __thiscall
FMassExecutionRequirements::AsCompositionDescriptor
          (FMassExecutionRequirements *this,
          FMassArchetypeCompositionDescriptor *__return_storage_ptr__)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FMassArchetypeCompositionDescriptor *pFVar6;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar7;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar13;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar14;
  ForElementType<unsigned_int> FVar15;
  undefined1 auStackY_188 [32];
  <lambda_1> local_158;
  <lambda_1> local_157 [3];
  uint local_154;
  FMassExecutionRequirements *local_150;
  uchar local_148 [8];
  uchar auStack_140 [8];
  ForElementType<unsigned_int> local_138;
  int local_130;
  int local_12c;
  uchar local_128 [8];
  uchar auStack_120 [8];
  ForElementType<unsigned_int> local_118;
  int local_110;
  uint local_10c;
  TBitArray<FDefaultBitArrayAllocator> local_108;
  TBitArray<FDefaultBitArrayAllocator> local_e8;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar14 = &(this->SharedFragments).Write;
  local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_108.MaxBits = 0x80;
  local_150 = this;
  if (&this->SharedFragments ==
      (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
       *)pTVar14) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMassArchetypeCompositionDescriptor *)(*pcVar1)();
      return pFVar6;
    }
  }
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)&this->SharedFragments,
             (TBitArray<FDefaultBitArrayAllocator> *)pTVar14,&local_c8,MaxSize,&local_158);
  uVar9 = local_c8.NumBits + 0x1fU & 0xffffffe0;
  if ((local_108.MaxBits < (int)uVar9) || (0x80 < local_108.MaxBits)) {
    local_108.MaxBits = 0x80;
    if (0x80 < (int)uVar9) {
      local_108.MaxBits = uVar9;
    }
    local_108.NumBits = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_108,0);
  }
  local_108.NumBits = local_c8.NumBits;
  if (local_c8.NumBits != 0) {
    FVar15 = (ForElementType<unsigned_int>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_c8.AllocatorInstance.SecondaryData;
    }
    FVar11 = (ForElementType<unsigned_int>)&local_108;
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_108.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar11,(void *)FVar15,(ulonglong)(local_c8.NumBits + 0x1fU >> 5) << 2);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  FVar15 = local_108.AllocatorInstance.SecondaryData;
  if (local_108.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
    local_148[0] = local_108.AllocatorInstance.InlineData[0];
    local_148[1] = local_108.AllocatorInstance.InlineData[1];
    local_148[2] = local_108.AllocatorInstance.InlineData[2];
    local_148[3] = local_108.AllocatorInstance.InlineData[3];
    local_148[4] = local_108.AllocatorInstance.InlineData[4];
    local_148[5] = local_108.AllocatorInstance.InlineData[5];
    local_148[6] = local_108.AllocatorInstance.InlineData[6];
    local_148[7] = local_108.AllocatorInstance.InlineData[7];
    auStack_140[0] = local_108.AllocatorInstance.InlineData[8];
    auStack_140[1] = local_108.AllocatorInstance.InlineData[9];
    auStack_140[2] = local_108.AllocatorInstance.InlineData[10];
    auStack_140[3] = local_108.AllocatorInstance.InlineData[0xb];
    auStack_140[4] = local_108.AllocatorInstance.InlineData[0xc];
    auStack_140[5] = local_108.AllocatorInstance.InlineData[0xd];
    auStack_140[6] = local_108.AllocatorInstance.InlineData[0xe];
    auStack_140[7] = local_108.AllocatorInstance.InlineData[0xf];
  }
  iVar3 = local_108.NumBits;
  pTVar13 = &(this->ChunkFragments).Write;
  local_138 = local_108.AllocatorInstance.SecondaryData;
  local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_130 = local_108.NumBits;
  local_12c = local_108.MaxBits;
  local_108.NumBits = 0;
  local_108.MaxBits = 0;
  local_e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8.MaxBits = 0x80;
  if (&this->ChunkFragments ==
      (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
       *)pTVar13) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMassArchetypeCompositionDescriptor *)(*pcVar1)();
      return pFVar6;
    }
  }
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.NumBits = 0;
  uVar9 = 0x80;
  local_a8.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)&this->ChunkFragments,
             (TBitArray<FDefaultBitArrayAllocator> *)pTVar13,&local_a8,MaxSize,local_157);
  local_e8.NumBits = 0;
  uVar10 = local_a8.NumBits + 0x1fU & 0xffffffe0;
  if ((local_e8.MaxBits < (int)uVar10) || (0x80 < local_e8.MaxBits)) {
    local_e8.MaxBits = uVar9;
    if (0x80 < (int)uVar10) {
      local_e8.MaxBits = uVar10;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_e8,0);
  }
  local_e8.NumBits = local_a8.NumBits;
  if (local_a8.NumBits != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_a8.AllocatorInstance.SecondaryData;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_e8;
    if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_e8.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar12,(void *)FVar11,(ulonglong)(local_a8.NumBits + 0x1fU >> 5) << 2);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  iVar4 = local_e8.NumBits;
  FVar11 = local_e8.AllocatorInstance.SecondaryData;
  if (local_e8.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
    local_128[0] = local_e8.AllocatorInstance.InlineData[0];
    local_128[1] = local_e8.AllocatorInstance.InlineData[1];
    local_128[2] = local_e8.AllocatorInstance.InlineData[2];
    local_128[3] = local_e8.AllocatorInstance.InlineData[3];
    local_128[4] = local_e8.AllocatorInstance.InlineData[4];
    local_128[5] = local_e8.AllocatorInstance.InlineData[5];
    local_128[6] = local_e8.AllocatorInstance.InlineData[6];
    local_128[7] = local_e8.AllocatorInstance.InlineData[7];
    auStack_120[0] = local_e8.AllocatorInstance.InlineData[8];
    auStack_120[1] = local_e8.AllocatorInstance.InlineData[9];
    auStack_120[2] = local_e8.AllocatorInstance.InlineData[10];
    auStack_120[3] = local_e8.AllocatorInstance.InlineData[0xb];
    auStack_120[4] = local_e8.AllocatorInstance.InlineData[0xc];
    auStack_120[5] = local_e8.AllocatorInstance.InlineData[0xd];
    auStack_120[6] = local_e8.AllocatorInstance.InlineData[0xe];
    auStack_120[7] = local_e8.AllocatorInstance.InlineData[0xf];
  }
  local_118 = local_e8.AllocatorInstance.SecondaryData;
  local_10c = local_e8.MaxBits;
  local_110 = local_e8.NumBits;
  pTVar7 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::operator+
                     (&local_150->RequiredAllTags,
                      (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                       *)local_68,&local_150->RequiredAnyTags);
  pTVar8 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           operator+((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)local_150,
                     (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)local_88,&(local_150->Fragments).Write);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)__return_storage_ptr__,(FBitSetContainer *)pTVar8);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&__return_storage_ptr__->Tags,(FBitSetContainer *)pTVar7);
  local_154 = iVar4 + 0x1fU >> 5;
  *(undefined8 *)&(__return_storage_ptr__->ChunkFragments).field_0x10 = 0;
  uVar10 = local_154 << 5;
  *(undefined8 *)&(__return_storage_ptr__->ChunkFragments).field_0x18 = 0;
  if (0 < (int)uVar10) {
    uVar2 = uVar9;
    if (0x80 < (int)uVar10) {
      uVar2 = uVar10;
    }
    *(uint *)&(__return_storage_ptr__->ChunkFragments).field_0x1c = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->ChunkFragments,0);
  }
  *(int *)&(__return_storage_ptr__->ChunkFragments).field_0x18 = iVar4;
  if (iVar4 != 0) {
    pTVar13 = *(TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                **)&(__return_storage_ptr__->ChunkFragments).field_0x10;
    FVar12 = (ForElementType<unsigned_int>)local_128;
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = FVar11;
    }
    if (pTVar13 ==
        (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
         *)0x0) {
      pTVar13 = &__return_storage_ptr__->ChunkFragments;
    }
    memcpy(pTVar13,(void *)FVar12,(ulonglong)local_154 << 2);
  }
  uVar10 = iVar3 + 0x1fU >> 5;
  *(undefined8 *)&(__return_storage_ptr__->SharedFragments).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SharedFragments).field_0x18 = 0;
  if (0 < (int)(uVar10 << 5)) {
    if (0x80 < (int)(uVar10 << 5)) {
      uVar9 = uVar10 << 5;
    }
    *(uint *)&(__return_storage_ptr__->SharedFragments).field_0x1c = uVar9;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->SharedFragments,0);
  }
  *(int *)&(__return_storage_ptr__->SharedFragments).field_0x18 = iVar3;
  if (iVar3 != 0) {
    pTVar14 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                **)&(__return_storage_ptr__->SharedFragments).field_0x10;
    FVar12 = (ForElementType<unsigned_int>)local_148;
    if (FVar15 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = FVar15;
    }
    if (pTVar14 ==
        (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
         *)0x0) {
      pTVar14 = &__return_storage_ptr__->SharedFragments;
    }
    memcpy(pTVar14,(void *)FVar12,(ulonglong)uVar10 << 2);
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&__return_storage_ptr__->ConstSharedFragments,
             (FBitSetContainer *)&local_150->ConstSharedFragments);
  if ((void *)local_88._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._16_8_);
  }
  if ((void *)local_68._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._16_8_);
  }
  if (FVar11 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  if (FVar15 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar15);
  }
  return __return_storage_ptr__;
}

// CountResourcesUsed @ 147206f30

void __thiscall FMassExecutionRequirements::CountResourcesUsed(FMassExecutionRequirements *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->ConstSharedFragments,0,-1);
  this->ResourcesUsedCount = iVar1;
  iVar2 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)this,0,-1);
  this->ResourcesUsedCount = iVar1 + iVar2;
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->ChunkFragments,0,-1);
  iVar3 = iVar1 + iVar2 + iVar3;
  this->ResourcesUsedCount = iVar3;
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->SharedFragments,0,-1);
  iVar3 = iVar3 + iVar1;
  this->ResourcesUsedCount = iVar3;
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredSubsystems,0,-1);
  iVar3 = iVar3 + iVar1;
  this->ResourcesUsedCount = iVar3;
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Fragments).Write,0,-1);
  iVar3 = iVar3 + iVar1;
  this->ResourcesUsedCount = iVar3;
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChunkFragments).Write,0,-1);
  iVar3 = iVar3 + iVar1;
  this->ResourcesUsedCount = iVar3;
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SharedFragments).Write,0,-1);
  iVar3 = iVar3 + iVar1;
  this->ResourcesUsedCount = iVar3;
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RequiredSubsystems).Write,0,-1)
  ;
  this->ResourcesUsedCount = iVar1 + iVar3;
  return;
}

// GetTotalBitsUsedCount @ 147227bf0

int __thiscall FMassExecutionRequirements::GetTotalBitsUsedCount(FMassExecutionRequirements *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  CountResourcesUsed(this);
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredAnyTags,0,-1);
  iVar2 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredNoneTags,0,-1);
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredAllTags,0,-1);
  return iVar3 + this->ResourcesUsedCount + iVar2 + iVar1;
}

// IsEmpty @ 147232290

bool __thiscall FMassExecutionRequirements::IsEmpty(FMassExecutionRequirements *this)

{
  bool bVar1;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)this);
  if (bVar1) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&(this->Fragments).Write);
    if (bVar1) {
      bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                        ((FConstBitSetContainer *)&this->ChunkFragments);
      if (bVar1) {
        bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&(this->ChunkFragments).Write);
        if (bVar1) {
          bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->SharedFragments);
          if (bVar1) {
            bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                              ((FConstBitSetContainer *)&(this->SharedFragments).Write);
            if (bVar1) {
              bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                ((FConstBitSetContainer *)&this->ConstSharedFragments);
              if (bVar1) {
                bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                  ((FConstBitSetContainer *)&this->RequiredSubsystems);
                if (bVar1) {
                  bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                    ((FConstBitSetContainer *)&(this->RequiredSubsystems).Write);
                  if (bVar1) {
                    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                      ((FConstBitSetContainer *)&this->RequiredAllTags);
                    if (bVar1) {
                      bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                        ((FConstBitSetContainer *)&this->RequiredAnyTags);
                      if (bVar1) {
                        bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                          ((FConstBitSetContainer *)&this->RequiredNoneTags);
                        if (bVar1) {
                          return true;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

