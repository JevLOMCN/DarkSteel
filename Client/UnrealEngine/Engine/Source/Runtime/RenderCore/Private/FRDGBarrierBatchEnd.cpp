// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// AddDependency @ 145d9cf20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGBarrierBatchEnd::AddDependency(FRDGBarrierBatchEnd *this,FRDGBarrierBatchBegin *param_1)

{
  int *piVar1;
  ERHIPipeline EVar2;
  ERDGBarrierLocation EVar3;
  ERDGBarrierLocation EVar4;
  uint uVar5;
  uint uVar6;
  FRDGBarrierBatchEnd *pFVar7;
  code *pcVar8;
  uint uVar9;
  byte bVar10;
  FRDGBarrierBatchBegin *pFVar11;
  bool bVar12;
  int iVar13;
  FRDGBarrierBatchEnd *pFVar14;
  ERDGBarrierLocation EVar15;
  longlong lVar16;
  byte bVar17;
  longlong lVar18;
  undefined4 uStackX_c;
  FRDGBarrierBatchBegin *local_res10;
  
  local_res10 = param_1;
  if ((param_1 == (FRDGBarrierBatchBegin *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BeginBatch",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphPass.cpp"
                          ,0x131,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar17 = 3;
  lVar18 = 0;
  do {
    bVar10 = ~bVar17 + 1 & bVar17;
    if ((bVar10 == 1) || (lVar16 = 8, bVar10 != 2)) {
      lVar16 = lVar18;
    }
    lVar16 = *(longlong *)(&(local_res10->DebugPasses).field_0x0 + lVar16);
    if (lVar16 != 0) {
      uVar5 = *(uint *)(lVar16 + 0x4c);
      uVar6 = (this->Pass->Handle).Index;
      if (((uVar5 == 0xffffffff) || (uVar6 == 0xffffffff)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && Other.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,0x16c,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((uVar6 < uVar5) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("BeginPass->GetHandle() <= Pass->GetHandle()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphPass.cpp"
                              ,0x138,
                              L"A transition end batch for pass %s is dependent on begin batch for pass %s."
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar11 = local_res10;
    bVar17 = bVar17 & ~(~bVar17 + 1);
  } while (bVar17 != 0);
  EVar2 = this->Pass->Pipeline;
  uVar5 = (this->Pass->Handle).Index;
  EVar3 = this->BarrierLocation;
  if ((EVar2 != Graphics) && (EVar2 == AsyncCompute)) {
    lVar18 = 8;
  }
  uVar6 = *(uint *)(&(local_res10->BarriersToEnd).field_0x0 + lVar18);
  if ((uVar6 != uVar5) || ((&(local_res10->BarriersToEnd).field_0x4)[lVar18] != EVar3)) {
    EVar4 = (&(local_res10->BarriersToEnd).field_0x4)[lVar18];
    uVar9 = uVar5;
    if (uVar6 < uVar5) {
      uVar9 = uVar6;
    }
    EVar15 = EVar3;
    if (EVar4 < EVar3) {
      EVar15 = EVar4;
    }
    uStackX_c = CONCAT31(uStackX_c._1_3_,EVar15);
    if ((uVar9 == uVar5) && (EVar15 == EVar3)) {
      pFVar7 = (FRDGBarrierBatchEnd *)(this->Dependencies).AllocatorInstance.SecondaryData.Data;
      pFVar14 = this;
      if (pFVar7 != (FRDGBarrierBatchEnd *)0x0) {
        pFVar14 = pFVar7;
      }
      if (pFVar14 <= (FRDGBarrierBatchEnd *)&local_res10) {
        pFVar14 = this;
        if (pFVar7 != (FRDGBarrierBatchEnd *)0x0) {
          pFVar14 = pFVar7;
        }
        if ((&local_res10 <
             (pFVar14->Dependencies).AllocatorInstance.InlineData +
             (longlong)(this->Dependencies).ArrayMax * 8) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = (this->Dependencies).ArrayNum;
      piVar1 = &(this->Dependencies).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGBarrierBatchBegin_*>_>
                           (0x808,(ForElementType<FRDGBarrierBatchBegin_*> *)this,piVar1);
      }
      (this->Dependencies).ArrayNum = iVar13 + 1;
      pFVar7 = (FRDGBarrierBatchEnd *)(this->Dependencies).AllocatorInstance.SecondaryData.Data;
      if (pFVar7 != (FRDGBarrierBatchEnd *)0x0) {
        this = pFVar7;
      }
      *(FRDGBarrierBatchBegin **)
       ((this->Dependencies).AllocatorInstance.InlineData + (longlong)iVar13 * 8) = local_res10;
      *(ulonglong *)(&(pFVar11->BarriersToEnd).field_0x0 + lVar18) = CONCAT44(uStackX_c,uVar9);
    }
  }
  return;
}

// GetId @ 145db9860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchEndId __thiscall FRDGBarrierBatchEnd::GetId(FRDGBarrierBatchEnd *this)

{
  uint uVar1;
  FRDGBarrierBatchEndId in_RDX;
  
  uVar1 = (this->Pass->Handle).Index;
  *(ERDGBarrierLocation *)((longlong)in_RDX + 4) = this->BarrierLocation;
  *(uint *)in_RDX = uVar1;
  return in_RDX;
}

// IsPairedWith @ 145dc1330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FRDGBarrierBatchEnd::IsPairedWith(FRDGBarrierBatchEnd *this,FRDGBarrierBatchBegin *param_1)

{
  ERHIPipeline EVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  EVar1 = this->Pass->Pipeline;
  if ((EVar1 == Graphics) || (lVar3 = 0x18, EVar1 != AsyncCompute)) {
    lVar3 = 0x10;
  }
  uVar2 = *(undefined8 *)((longlong)&param_1->Transition + lVar3);
  if (((this->Pass->Handle).Index == (uint)uVar2) &&
     (this->BarrierLocation == (ERDGBarrierLocation)((ulonglong)uVar2 >> 0x20))) {
    return true;
  }
  return false;
}

// Submit @ 145dd0220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGBarrierBatchEnd::Submit
          (FRDGBarrierBatchEnd *this,FRHIComputeCommandList *param_1,ERHIPipeline param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  FRHITransition **ppFVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ForElementType<FRHITransition_const_*> FVar10;
  ForElementType<FRHITransition_const_*> FVar11;
  uint uVar12;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8;
  ERHIPipeline local_c7;
  TArrayView<FRHITransition_const_*,int> local_b8;
  ForElementType<FRHITransition_const_*> local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FRHIComputeCommandList *local_98;
  ForElementType<FRHITransition_const_*> local_90;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  piVar1 = &(this->Dependencies).ArrayNum;
  uVar12 = *piVar1;
  uVar2 = (this->Pass->Handle).Index;
  local_90.SecondaryData = (ForElementType<FRHITransition_const_*>)0x0;
  local_48 = 0;
  local_44 = 8;
  local_b8.DataPtr._0_5_ = CONCAT14(this->BarrierLocation,uVar2);
  local_c7 = param_2;
  local_98 = param_1;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (8 < (int)uVar12) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_>
              (8,8,uVar12,&local_90,0,&local_44);
    uVar12 = *piVar1;
  }
  ppFVar5 = local_b8.DataPtr;
  FVar11 = (ForElementType<FRHITransition_const_*>)
           (this->Dependencies).AllocatorInstance.SecondaryData.Data;
  if (FVar11 != (ForElementType<FRHITransition_const_*>)0x0) {
    this = (FRDGBarrierBatchEnd *)FVar11;
  }
  local_a8 = (ForElementType<FRHITransition_const_*>)((longlong)this + (longlong)(int)uVar12 * 8);
  FVar11 = local_90.SecondaryData;
  iVar7 = local_48;
  while( true ) {
    FVar10 = local_a8;
    if (*piVar1 != uVar12) {
      local_c8 = 0;
      `TCheckedPointerIterator<FRDGBarrierBatchBegin_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c8);
      FVar11 = local_90.SecondaryData;
      iVar7 = local_48;
    }
    if ((ForElementType<FRHITransition_const_*>)this == FVar10) break;
    plVar3 = *(longlong **)this;
    if ((local_c7 == Graphics) || (local_c7 != AsyncCompute)) {
      lVar8 = 0x10;
      lVar9 = 0x14;
    }
    else {
      lVar8 = 0x18;
      lVar9 = 0x1c;
    }
    if ((*(uint *)((longlong)plVar3 + lVar8) == uVar2) &&
       (*(char *)((longlong)plVar3 + lVar9) == (char)((ulonglong)ppFVar5 >> 0x20))) {
      if (plVar3[1] != 0) {
        if (iVar7 == local_44) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_>
                            (0x808,&local_90,&local_44);
          FVar11 = local_90.SecondaryData;
        }
        local_48 = iVar7 + 1;
        FVar10 = (ForElementType<FRHITransition_const_*>)&local_90;
        if (FVar11 != (ForElementType<FRHITransition_const_*>)0x0) {
          FVar10 = FVar11;
        }
        *(longlong *)((longlong)FVar10 + (longlong)iVar7 * 8) = plVar3[1];
        FVar11 = local_90.SecondaryData;
        iVar7 = local_48;
      }
      if (iVar7 == local_44) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_>
                          (0x808,&local_90,&local_44);
        FVar11 = local_90.SecondaryData;
      }
      local_48 = iVar7 + 1;
      FVar10 = (ForElementType<FRHITransition_const_*>)&local_90;
      if (FVar11 != (ForElementType<FRHITransition_const_*>)0x0) {
        FVar10 = FVar11;
      }
      *(longlong *)((longlong)FVar10 + (longlong)iVar7 * 8) = *plVar3;
      FVar11 = local_90.SecondaryData;
      iVar7 = local_48;
    }
    this = (FRDGBarrierBatchEnd *)((longlong)this + 8);
  }
  if (iVar7 != 0) {
    local_a8 = (ForElementType<FRHITransition_const_*>)&local_90;
    if (FVar11 != (ForElementType<FRHITransition_const_*>)0x0) {
      local_a8 = FVar11;
    }
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b8._12_4_ = uStack_9c;
    local_b8.ArrayNum = iVar7;
    local_b8.DataPtr = (FRHITransition **)local_a8;
    iStack_a0 = iVar7;
    FRHIComputeCommandList::EndTransitions(local_98,&local_b8);
    FVar11 = local_90.SecondaryData;
  }
  if (FVar11 != (ForElementType<FRHITransition_const_*>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  return;
}

