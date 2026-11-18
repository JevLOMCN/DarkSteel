// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// IsMergeAllowed @ 145dc1210

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
FRDGSubresourceState::IsMergeAllowed
          (ERDGViewableResourceType param_1,FRDGSubresourceState *param_2,
          FRDGSubresourceState *param_3)

{
  ERHIAccess EVar1;
  ERHIAccess EVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ERHIAccess EVar6;
  TRDGHandleUniqueFilter<TRDGHandle<FRDGView,unsigned_int>_> *pTVar7;
  
  EVar1 = param_2->Access;
  EVar2 = param_3->Access;
  EVar6 = EVar1 | EVar2;
  if ((EVar1 != EVar2) &&
     (((((((EVar1 & ReadOnlyExclusiveMask) != None && ((EVar2 & WritableMask) != None)) ||
         (((EVar1 & WriteOnlyExclusiveMask) != None && ((EVar2 & ReadableMask) != None)))) ||
        (((EVar6 & UAVMask) != None && ((EVar6 & ~UAVMask) != None)))) ||
       (((EVar6 & (DSVWrite|DSVRead)) == (DSVWrite|DSVRead) &&
        ((EVar6 & ~(DSVWrite|DSVRead)) != None)))) || ((EVar6 & ~GRHIMergeableAccessMask) != None)))
     ) {
    return false;
  }
  if ((EVar2 & UAVMask) != None) {
    uVar5 = 0xffffffff;
    if ((param_3->NoUAVBarrierFilter).Handle.Index !=
        TRDGHandleUniqueFilter<TRDGHandle<FRDGView,unsigned_int>_>::NotUniqueHandle.Index) {
      uVar5 = (param_3->NoUAVBarrierFilter).Handle.Index;
    }
    pTVar7 = (TRDGHandleUniqueFilter<TRDGHandle<FRDGView,unsigned_int>_> *)
             &TRDGHandle<FRDGView,unsigned_int>::Null;
    if ((param_2->NoUAVBarrierFilter).Handle.Index !=
        TRDGHandleUniqueFilter<TRDGHandle<FRDGView,unsigned_int>_>::NotUniqueHandle.Index) {
      pTVar7 = &param_2->NoUAVBarrierFilter;
    }
    if (GRDGOverlapUAVs == 0) {
      return false;
    }
    if (uVar5 == 0xffffffff) {
      return false;
    }
    if ((pTVar7->Handle).Index != uVar5) {
      return false;
    }
  }
  if ((EVar6 & ~GRHIMultiPipelineMergeableAccessMask) != None) {
    bVar3 = 0;
    if (*(int *)&(param_2->FirstPass).field_0x4 != -1) {
      bVar3 = 2;
    }
    bVar4 = 0;
    if (*(int *)&(param_3->FirstPass).field_0x4 != -1) {
      bVar4 = 2;
    }
    if ((bVar3 | *(int *)&param_2->FirstPass != -1) != (bVar4 | *(int *)&param_3->FirstPass != -1))
    {
      return false;
    }
  }
  return param_2->Flags == param_3->Flags;
}

// IsTransitionRequired @ 145dc1620

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
FRDGSubresourceState::IsTransitionRequired
          (FRDGSubresourceState *param_1,FRDGSubresourceState *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  
  if ((param_2->Access == None) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Next.Access != ERHIAccess::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResources.cpp"
                         ,0x8d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (param_1->Access == param_2->Access) {
    bVar4 = 0;
    if (*(int *)&(param_1->FirstPass).field_0x4 != -1) {
      bVar4 = 2;
    }
    bVar5 = 0;
    if (*(int *)&(param_2->FirstPass).field_0x4 != -1) {
      bVar5 = 2;
    }
    if (((bVar4 | *(int *)&param_1->FirstPass != -1) == (bVar5 | *(int *)&param_2->FirstPass != -1))
       && (param_1->Flags == param_2->Flags)) {
      if (((param_2->Access & UAVMask) != None) && (bVar2 = SkipUAVBarrier(param_1,param_2), !bVar2)
         ) {
        return true;
      }
      return false;
    }
  }
  return true;
}

// SetPass @ 145dcc820

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGSubresourceState::SetPass
          (FRDGSubresourceState *this,ERHIPipeline param_1,TRDGHandle<FRDGPass,unsigned_int> param_2
          )

{
  this->FirstPass = (TRHIPipelineArray<TRDGHandle<FRDGPass,unsigned_int>_>)0xffffffffffffffff;
  this->LastPass = (TRHIPipelineArray<TRDGHandle<FRDGPass,unsigned_int>_>)0xffffffffffffffff;
  if ((param_1 != Graphics) && (param_1 == AsyncCompute)) {
    *(uint *)&(this->FirstPass).field_0x4 = param_2.Index;
    *(uint *)&(this->LastPass).field_0x4 = param_2.Index;
    return;
  }
  *(uint *)&this->FirstPass = param_2.Index;
  if ((param_1 != Graphics) && (param_1 == AsyncCompute)) {
    *(uint *)&(this->LastPass).field_0x4 = param_2.Index;
    return;
  }
  *(uint *)&this->LastPass = param_2.Index;
  return;
}

// Validate @ 145dd4450

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGSubresourceState::Validate(FRDGSubresourceState *this)

{
  code *pcVar1;
  ERHIPipeline EVar2;
  longlong lVar3;
  ERHIPipeline EVar4;
  bool bVar5;
  FString local_18;
  
  EVar4 = All;
  do {
    EVar2 = ~EVar4 + Graphics & EVar4;
    if ((EVar2 == Graphics) || (EVar2 != AsyncCompute)) {
      bVar5 = *(int *)&this->LastPass != -1;
      if ((EVar2 == Graphics) || (EVar2 != AsyncCompute)) {
        lVar3 = 4;
      }
      else {
        lVar3 = 8;
      }
    }
    else {
      bVar5 = *(int *)&(this->LastPass).field_0x4 != -1;
      lVar3 = 8;
    }
    if ((*(int *)((longlong)&this->Access + lVar3) != -1) != bVar5) {
      GetRHIPipelineName(&local_18,EVar2);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstPass[Pipeline].IsValid() == LastPass[Pipeline].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.inl"
                         ,0x14,L"Subresource state has unset first or last pass on \'%s.");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar4 = EVar4 & ~(~EVar4 + Graphics);
    if (EVar4 == None) {
      return;
    }
  } while( true );
}

