// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetTypeID @ 14d61e480

FCameraObjectTypeID * __thiscall
UE::Cameras::FArrayCameraNodeEvaluator::GetTypeID(FArrayCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d620f80

bool __thiscall
UE::Cameras::FArrayCameraNodeEvaluator::IsKindOf
          (FArrayCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FArrayCameraNodeEvaluator>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d623c70

void __thiscall
UE::Cameras::FArrayCameraNodeEvaluator::OnBuild
          (FArrayCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  FCameraNodeEvaluator *local_38 [2];
  
  if (this->_padding_ != 0) {
    pUVar8 = UArrayCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar6) {
      lVar9 = this->_padding_;
      goto LAB_14d623cb0;
    }
  }
  lVar9 = 0;
LAB_14d623cb0:
  puVar10 = *(undefined8 **)(lVar9 + 0x38);
  iVar3 = *(int *)(lVar9 + 0x40);
  puVar2 = puVar10 + iVar3;
  while( true ) {
    if (*(int *)(lVar9 + 0x40) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UCameraNode>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar10 == puVar2) break;
    if ((UCameraNode *)*puVar10 != (UCameraNode *)0x0) {
      local_38[0] = FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,(UCameraNode *)*puVar10)
      ;
      pFVar4 = (this->Children).AllocatorInstance.Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)(this->Children).ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (this->Children).ArrayNum;
      piVar1 = &(this->Children).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Children).AllocatorInstance,piVar1);
      }
      (this->Children).ArrayNum = iVar7 + 1;
      *(FCameraNodeEvaluator **)((this->Children).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           local_38[0];
    }
    puVar10 = puVar10 + 1;
  }
  return;
}

// OnGetChildren @ 14d627580

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FArrayCameraNodeEvaluator::OnGetChildren
          (FArrayCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar5;
  undefined4 uStack_c;
  
  pFVar2 = (this->Children).AllocatorInstance.Data;
  iVar1 = (this->Children).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->Storage)._padding_ = (longlong)pFVar2;
  (__return_storage_ptr__->Storage)._padding_ = CONCAT44(uStack_c,iVar1);
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// OnRun @ 14d629440

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FArrayCameraNodeEvaluator::OnRun
          (FArrayCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Children).AllocatorInstance.Data;
  iVar2 = (this->Children).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Children).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(FCameraNodeEvaluator **)pFVar3 != (FCameraNodeEvaluator *)0x0) {
      FCameraNodeEvaluator::Run(*(FCameraNodeEvaluator **)pFVar3,param_1,param_2);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

