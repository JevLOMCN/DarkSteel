// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Submit @ 145dd0480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGExternalAccessQueue::Submit(FRDGExternalAccessQueue *this,FRDGBuilder *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  ERHIPipeline EVar5;
  FRDGViewableResource *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FResource *pFVar10;
  FResource *pFVar11;
  undefined1 local_res8 [8];
  
  uVar3 = (this->Resources).ArrayNum;
  uVar9 = (ulonglong)(int)uVar3;
  pFVar10 = (this->Resources).AllocatorInstance.Data;
  pFVar11 = pFVar10 + uVar9;
  while( true ) {
    if ((this->Resources).ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRDGExternalAccessQueue::FResource,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    uVar4 = pFVar10->Access;
    EVar5 = pFVar10->Pipelines;
    this_00 = pFVar10->Resource;
    if (param_1->bSupportsAsyncCompute == false) {
      EVar5 = Graphics;
    }
    FRDGUserValidation::ValidateUseExternalAccessMode(&param_1->UserValidation,this_00,uVar4,EVar5);
    if ((this_00->AccessModeState).Mode == Internal && (this_00->AccessModeState).bLocked == '\0') {
      if ((this_00->AccessModeState).bQueued != '\0') {
        FRDGBuilder::FlushAccessModeQueue(param_1);
      }
      if ((this_00->AccessModeState).bQueued != '\0') {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AccessModeState.bQueued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphBuilder.cpp"
                           ,0x391,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = (param_1->AccessModeQueue).ArrayNum;
      piVar2 = &(param_1->AccessModeQueue).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_>
                          (0x808,&(param_1->AccessModeQueue).AllocatorInstance,piVar2);
      }
      (param_1->AccessModeQueue).ArrayNum = iVar8 + 1;
      (param_1->AccessModeQueue).AllocatorInstance.Data[iVar8] = this_00;
      (this_00->AccessModeState).bQueued = '\x01';
      FRDGViewableResource::SetExternalAccessMode(this_00,uVar4,EVar5);
    }
    uVar9 = (ulonglong)uVar3;
    pFVar10 = pFVar10 + 1;
  }
  piVar2 = &(this->Resources).ArrayMax;
  (this->Resources).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
              (0x10,8,0,(ForElementType<FRDGExternalAccessQueue::FResource> *)this,0,piVar2);
  }
  return;
}

