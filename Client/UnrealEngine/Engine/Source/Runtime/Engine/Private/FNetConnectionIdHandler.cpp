// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FNetConnectionIdHandler @ 148014350

FNetConnectionIdHandler * __thiscall
FNetConnectionIdHandler::FNetConnectionIdHandler(FNetConnectionIdHandler *this)

{
  (this->UsedIds).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->UsedIds).NumBits = 0;
  *(undefined8 *)&(this->UsedIds).MaxBits = 0x80;
  return this;
}

// ~FNetConnectionIdHandler @ 148017e10

void __thiscall FNetConnectionIdHandler::~FNetConnectionIdHandler(FNetConnectionIdHandler *this)

{
  ForElementType<unsigned_int> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->UsedIds).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<unsigned_int>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// Allocate @ 148021ef0

uint __thiscall FNetConnectionIdHandler::Allocate(FNetConnectionIdHandler *this)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  FNetConnectionIdHandler *local_res10;
  
  uVar9 = this->IdHint;
  iVar1 = (this->UsedIds).NumBits;
  uVar10 = -1 << ((byte)uVar9 & 0x1f);
  FVar2 = (this->UsedIds).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar11 = FVar2;
  }
  uVar12 = iVar1 + 0x1fU >> 5;
  iVar6 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
  if ((int)uVar12 <= iVar6) {
LAB_148021f5b:
    uVar9 = 0xffffffff;
LAB_148021f60:
    local_res10 = this;
    `FNetConnectionIdHandler::Allocate'::__l2::<lambda_1>::operator()(&local_res10);
LAB_148021f6f:
    this->IdHint = uVar9 + 1;
    uVar10 = 0;
    if (uVar9 != 0xffffffff) {
      uVar10 = uVar9;
    }
    return uVar10;
  }
  puVar7 = (uint *)((longlong)FVar11 + (longlong)iVar6 * 4);
LAB_148021f40:
  if ((uVar10 & *puVar7) == uVar10) goto code_r0x000148021f4a;
  uVar10 = ~*(uint *)((longlong)FVar11 + (longlong)iVar6 * 4) & uVar10;
  iVar3 = 0;
  if (uVar10 != 0) {
    for (; (uVar10 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  iVar8 = 0x20;
  if (uVar10 != 0) {
    iVar8 = iVar3;
  }
  uVar9 = iVar8 + iVar6 * 0x20;
  if (iVar1 <= (int)uVar9) goto LAB_148021f5b;
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
    }
    FVar2 = (this->UsedIds).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar2;
    }
    puVar7 = (uint *)((longlong)FVar11 +
                     (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar7 = *puVar7 | 1 << ((byte)uVar9 & 0x1f);
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&this->UsedIds);
    goto LAB_148021f6f;
  }
  goto LAB_148021f60;
code_r0x000148021f4a:
  iVar6 = iVar6 + 1;
  puVar7 = puVar7 + 1;
  uVar10 = 0xffffffff;
  if ((int)uVar12 <= iVar6) goto LAB_148021f5b;
  goto LAB_148021f40;
}

// Free @ 148034ef0

void __thiscall FNetConnectionIdHandler::Free(FNetConnectionIdHandler *this,uint param_1)

{
  int *piVar1;
  longlong lVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  
  piVar1 = &(this->UsedIds).NumBits;
  if (((param_1 == 0) || ((uint)*piVar1 <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Id != 0 && Id < uint32(UsedIds.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetConnectionIdHandler.cpp"
                         ,0x20,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((int)param_1 < 0) || (*piVar1 <= (int)param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->UsedIds).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_int>)this;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar3;
  }
  lVar2 = (longlong)((int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
  uVar6 = *(uint *)(lVar2 + (longlong)FVar7);
  if (param_1 == 0) {
    uVar6 = uVar6 | 1;
  }
  else {
    uVar6 = ~(1 << ((byte)param_1 & 0x1f)) & uVar6;
  }
  *(uint *)(lVar2 + (longlong)FVar7) = uVar6;
  if (this->IdHint < param_1) {
    param_1 = this->IdHint;
  }
  this->IdHint = param_1;
  return;
}

// GetMaxConnectionIdCount @ 148035f80

uint __thiscall FNetConnectionIdHandler::GetMaxConnectionIdCount(FNetConnectionIdHandler *this)

{
  return (this->UsedIds).NumBits;
}

// Init @ 14803cf50

void __thiscall FNetConnectionIdHandler::Init(FNetConnectionIdHandler *this,uint param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IdCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetConnectionIdHandler.cpp"
                         ,0x10,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = param_1 + 0x20 >> 5;
  (this->UsedIds).NumBits = param_1 + 1;
  if (param_1 + 0x20 >> 5 != 0) {
    if ((this->UsedIds).MaxBits + 0x1fU >> 5 < uVar8) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this,0,uVar8,4);
      (this->UsedIds).MaxBits = uVar8 << 5;
    }
    FVar2 = (this->UsedIds).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = FVar2;
    }
    memset((void *)FVar6,0,(ulonglong)uVar8 << 2);
    iVar5 = (this->UsedIds).NumBits;
    uVar7 = iVar5 >> 0x1f & 0x1f;
    uVar8 = iVar5 + uVar7;
    iVar5 = (uVar8 & 0x1f) - uVar7;
    if (iVar5 != 0) {
      FVar2 = (this->UsedIds).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<unsigned_int>)this;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar6 = FVar2;
      }
      puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)uVar8 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
    }
  }
  if (((this->UsedIds).NumBits < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar2 = (this->UsedIds).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (FNetConnectionIdHandler *)FVar2;
  }
  *(uint *)this = *(uint *)this | 1;
  return;
}

// operator() @ 150520000

bool __thiscall `FNetConnectionIdHandler::Allocate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4599900628167163929>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4599900628167163929>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

