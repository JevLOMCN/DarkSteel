// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// FOpenGLProgramBinary @ 145be25f0

/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLProgramBinary * __thiscall
FOpenGLProgramBinary::FOpenGLProgramBinary
          (FOpenGLProgramBinary *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FOpenGLProgramBinary *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  (this->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnedData).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OwnedData).ArrayNum = param_1->ArrayNum;
  (this->OwnedData).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->DataView).DataPtr = (uchar *)(this->OwnedData).AllocatorInstance.Data;
  iVar1 = (this->OwnedData).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FOpenGLProgramBinary *)(*pcVar3)();
    return pFVar5;
  }
  (this->DataView).ArrayNum = iVar1;
  if (iVar1 != 0) {
    FVar7 = StatPtr_STAT_OpenGLShaderLRUProgramMemory;
    if (StatPtr_STAT_OpenGLShaderLRUProgramMemory ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemory>)0x0) {
      pFVar6 = ::FName::FName(local_res18,"STAT_OpenGLShaderLRUProgramMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUProgramMemory,
                         *pFVar6,L"Program LRU memory (evicted, heap)","STATGROUP_OpenGLRHI",
                         "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar2 = *(FName *)FVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res10 = FVar2;
      local_38.StatData.Pad = (uchar  [8])(longlong)iVar1;
      local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add(&local_res10,(longlong)iVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (((this->OwnedData).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOwned()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.h"
                         ,0x11,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FOpenGLProgramBinary *)(*pcVar3)();
    return pFVar5;
  }
  if (((this->DataView).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.h"
                         ,0x12,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FOpenGLProgramBinary *)(*pcVar3)();
    return pFVar5;
  }
  return this;
}

// FOpenGLProgramBinary @ 145be2850

/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLProgramBinary * __thiscall
FOpenGLProgramBinary::FOpenGLProgramBinary
          (FOpenGLProgramBinary *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  FName FVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemoryMapped> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FOpenGLProgramBinary *pFVar10;
  uchar auVar11 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  uVar3 = *(undefined4 *)&param_1->DataPtr;
  uVar4 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iVar5 = param_1->ArrayNum;
  uVar6 = *(undefined4 *)&param_1->field_0xc;
  (this->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnedData).ArrayNum = 0;
  (this->OwnedData).ArrayMax = 0;
  *(undefined4 *)&(this->DataView).DataPtr = uVar3;
  *(undefined4 *)((longlong)&(this->DataView).DataPtr + 4) = uVar4;
  (this->DataView).ArrayNum = iVar5;
  *(undefined4 *)&(this->DataView).field_0xc = uVar6;
  auVar11 = (uchar  [8])(longlong)(this->DataView).ArrayNum;
  if (auVar11 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped;
    if (StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemoryMapped>)0x0) {
      pFVar8 = ::FName::FName(&local_res10,"STAT_OpenGLShaderLRUProgramMemoryMapped");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemoryMapped>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped,*pFVar8,
                         L"Program LRU mem mapped (evicted, filemapped)","STATGROUP_OpenGLRHI",
                         "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar9;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar11;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar11);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((0 < (this->OwnedData).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsOwned()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.h"
                         ,0x19,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FOpenGLProgramBinary *)(*pcVar2)();
    return pFVar10;
  }
  if (((this->DataView).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.h"
                         ,0x1a,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FOpenGLProgramBinary *)(*pcVar2)();
    return pFVar10;
  }
  return this;
}

// ~FOpenGLProgramBinary @ 145be97f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLProgramBinary::~FOpenGLProgramBinary(FOpenGLProgramBinary *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemoryMapped> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemory> *this_02;
  uchar auVar5 [8];
  wchar_t *pwVar6;
  FName local_res8;
  FStatMessage local_28;
  
  auVar5 = (uchar  [8])(longlong)(this->DataView).ArrayNum;
  if ((this->OwnedData).ArrayNum < 1) {
    if (auVar5 == (uchar  [8])0x0) goto LAB_145be99e4;
    FVar4 = StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped;
    if (StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemoryMapped>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_OpenGLShaderLRUProgramMemoryMapped");
      pwVar6 = L"Program LRU mem mapped (evicted, filemapped)";
      this_02 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemory> *)
                &StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped;
      goto LAB_145be9903;
    }
  }
  else {
    if (auVar5 == (uchar  [8])0x0) goto LAB_145be99e4;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemoryMapped>)
            StatPtr_STAT_OpenGLShaderLRUProgramMemory;
    if (StatPtr_STAT_OpenGLShaderLRUProgramMemory ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_OpenGLShaderLRUProgramMemory");
      pwVar6 = L"Program LRU memory (evicted, heap)";
      this_02 = &StatPtr_STAT_OpenGLShaderLRUProgramMemory;
LAB_145be9903:
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemoryMapped>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)this_02,*pFVar3,pwVar6,"STATGROUP_OpenGLRHI",
                         "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
  }
  FVar1 = *(FName *)FVar4;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_res8 = FVar1;
    local_28.StatData.Pad = auVar5;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-(longlong)auVar5);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
LAB_145be99e4:
  pFVar2 = (this->OwnedData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

