// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// EnqueuePositionsChanged @ 1449cd4b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsViewStateData::EnqueuePositionsChanged
          (FHairStrandsViewStateData *this,FRDGBuilder *param_1,FRDGBuffer *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PositionsChangedDatas).ArrayNum;
  pFVar2 = (this->PositionsChangedDatas).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PositionsChangedDatas).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairStrandsViewStateData::FPositionChangedData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[8] == (FScriptContainerElement)0x0) {
      AddEnqueueCopyPass(param_1,*(FRHIGPUBufferReadback **)pFVar2,param_2,4);
      pFVar2[8] = (FScriptContainerElement)0x1;
      return;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// Init @ 1449f35c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsViewStateData::Init(FHairStrandsViewStateData *this)

{
  longlong *plVar1;
  int *piVar2;
  FRDGPooledBuffer *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FRHIGPUBufferReadback *pFVar8;
  FName *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  
  pFVar3 = (this->VoxelFeedbackBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->VoxelFeedbackBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  iVar11 = (this->PositionsChangedDatas).ArrayNum;
  piVar2 = &(this->PositionsChangedDatas).ArrayNum;
  if (iVar11 < 4) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,4 - iVar11,&(this->PositionsChangedDatas).AllocatorInstance,piVar2,
                       &(this->PositionsChangedDatas).ArrayMax);
    DefaultConstructItems<FHairStrandsViewStateData::FPositionChangedData,int>
              ((this->PositionsChangedDatas).AllocatorInstance.Data + (longlong)iVar7 * 0x10,
               4 - iVar11);
  }
  else if (4 < iVar11) {
    iVar11 = iVar11 + -4;
    if (iVar11 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar11 == 0) goto LAB_1449f36ea;
    pFVar10 = (this->PositionsChangedDatas).AllocatorInstance.Data + 0x40;
    iVar7 = (*piVar2 - iVar11) + -4;
    if (iVar7 != 0) {
      memmove(pFVar10,pFVar10 + (longlong)iVar11 * 0x10,(longlong)iVar7 << 4);
    }
    *piVar2 = *piVar2 - iVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->PositionsChangedDatas).AllocatorInstance,*piVar2,
               &(this->PositionsChangedDatas).ArrayMax);
  }
LAB_1449f36ea:
  iVar11 = *piVar2;
  pFVar10 = (this->PositionsChangedDatas).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar11 * 0x10;
  while( true ) {
    if (*piVar2 != iVar11) {
      `TCheckedPointerIterator<FHairStrandsViewStateData::FPositionChangedData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar12) break;
    pFVar8 = ::operator_new(0x58);
    if (pFVar8 == (FRHIGPUBufferReadback *)0x0) {
      *(undefined8 *)pFVar10 = 0;
      pFVar10[8] = (FScriptContainerElement)0x0;
      pFVar10 = pFVar10 + 0x10;
    }
    else {
      pFVar9 = ::FName::FName(&local_res10,L"Hair.PositionsChangedReadback");
      pFVar8 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar8,*pFVar9);
      *(FRHIGPUBufferReadback **)pFVar10 = pFVar8;
      pFVar10[8] = (FScriptContainerElement)0x0;
      pFVar10 = pFVar10 + 0x10;
    }
  }
  return;
}

// ReadPositionsChanged @ 1449f9170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FHairStrandsViewStateData::ReadPositionsChanged(FHairStrandsViewStateData *this)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PositionsChangedDatas).ArrayNum;
  pFVar5 = (this->PositionsChangedDatas).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PositionsChangedDatas).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairStrandsViewStateData::FPositionChangedData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (pFVar5[8] != (FScriptContainerElement)0x0) {
      lVar2 = *(longlong *)(*(longlong *)pFVar5 + 8);
      if ((lVar2 == 0) ||
         ((*(int *)(lVar2 + 0x18) == 0 &&
          (cVar3 = (**(code **)(**(longlong **)(*(longlong *)pFVar5 + 8) + 0x20))(), cVar3 != '\0'))
         )) {
        piVar4 = FRHIGPUBufferReadback::Lock(*(FRHIGPUBufferReadback **)pFVar5,4);
        iVar1 = *piVar4;
        FRHIGPUBufferReadback::Unlock(*(FRHIGPUBufferReadback **)pFVar5);
        pFVar5[8] = (FScriptContainerElement)0x0;
        return iVar1 != 0;
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return false;
}

// Release @ 1449f94e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsViewStateData::Release(FHairStrandsViewStateData *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  FRDGPooledBuffer *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->VoxelFeedbackBuffer).Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    (this->VoxelFeedbackBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  iVar4 = (this->PositionsChangedDatas).ArrayNum;
  pFVar9 = (this->PositionsChangedDatas).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((this->PositionsChangedDatas).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FHairStrandsViewStateData::FPositionChangedData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    puVar6 = *(undefined8 **)pFVar9;
    if (puVar6 != (undefined8 *)0x0) {
      puVar10 = puVar6 + 0xb;
      lVar7 = 8;
      do {
        puVar2 = puVar10 + -1;
        puVar10 = puVar10 + -1;
        lVar7 = lVar7 + -1;
        if ((FRHIResource *)*puVar2 != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)*puVar2);
        }
      } while (lVar7 != 0);
      *puVar6 = &___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)puVar6[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar6[1]);
      }
      ::operator_delete(puVar6,0x58);
    }
    *(undefined8 *)pFVar9 = 0;
    pFVar9[8] = (FScriptContainerElement)0x0;
    pFVar9 = pFVar9 + 0x10;
  }
  piVar3 = &(this->PositionsChangedDatas).ArrayMax;
  (this->PositionsChangedDatas).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->PositionsChangedDatas).AllocatorInstance,0,piVar3);
  }
  return;
}

