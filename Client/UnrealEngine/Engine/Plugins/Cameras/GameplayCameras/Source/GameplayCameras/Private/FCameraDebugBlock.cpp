// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 11

// ~FCameraDebugBlock @ 14d544550

void __thiscall UE::Cameras::FCameraDebugBlock::~FCameraDebugBlock(FCameraDebugBlock *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attachments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetTypeID @ 14d558d00

FCameraObjectTypeID * __thiscall UE::Cameras::FCameraDebugBlock::GetTypeID(FCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d55a490

bool __thiscall
UE::Cameras::FCameraDebugBlock::IsKindOf(FCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  return (TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID == PrivateTypeID;
}

// OnDebugDraw @ 14d55bb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugBlock::OnDebugDraw
          (FCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  return;
}

// OnPostDebugDraw @ 14d55ccd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugBlock::OnPostDebugDraw
          (FCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  return;
}

// OnSerialize @ 14d55d4a0

void __thiscall
UE::Cameras::FCameraDebugBlock::OnSerialize(FCameraDebugBlock *this,FArchive *param_1)

{
  return;
}

// RegisterField @ 14d55f0c0

int __cdecl
UE::Cameras::FCameraDebugBlock::RegisterField
          (FCameraDebugBlockField *param_1,
          TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCameraDebugBlockField *local_res8 [4];
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_res8[0] = param_1;
  if ((pFVar1 <= (FScriptContainerElement *)local_res8) &&
     ((FScriptContainerElement *)local_res8 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(FCameraDebugBlockField **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_res8[0];
  return param_2->ArrayNum + -1;
}

// AddChild @ 14d597ba0

void __thiscall
UE::Cameras::FCameraDebugBlock::AddChild(FCameraDebugBlock *this,FCameraDebugBlock *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCameraDebugBlock *local_res10 [3];
  
  pFVar2 = (this->Children).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  *(FCameraDebugBlock **)((this->Children).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}

// Attach @ 14d59a820

void __thiscall
UE::Cameras::FCameraDebugBlock::Attach(FCameraDebugBlock *this,FCameraDebugBlock *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCameraDebugBlock *local_res10 [3];
  
  pFVar2 = (this->Attachments).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Attachments).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Attachments).ArrayNum;
  piVar1 = &(this->Attachments).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Attachments).AllocatorInstance,piVar1);
  }
  (this->Attachments).ArrayNum = iVar5 + 1;
  *(FCameraDebugBlock **)((this->Attachments).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}

// DebugDraw @ 14d59cf30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugBlock::DebugDraw
          (FCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  FScriptContainerElement *pFVar1;
  ECameraDebugDrawVisitFlags EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  param_2->VisitFlags = None;
  (**(code **)(this->_padding_ + 0x18))();
  EVar2 = param_2->VisitFlags;
  if ((EVar2 & SkipAttachedBlocks) == None) {
    iVar3 = (this->Attachments).ArrayNum;
    if (iVar3 != 0) {
      pFVar4 = (this->Attachments).AllocatorInstance.Data;
      pFVar1 = pFVar4 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->Attachments).ArrayNum != iVar3) {
          `TCheckedPointerIterator<UE::Cameras::FCameraDebugBlock_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar1) break;
        DebugDraw(*(FCameraDebugBlock **)pFVar4,param_1,param_2);
        pFVar4 = pFVar4 + 8;
      }
    }
  }
  if (((EVar2 & SkipChildrenBlocks) == None) && ((this->Children).ArrayNum != 0)) {
    FCameraDebugRenderer::AddIndent(param_2);
    pFVar4 = (this->Children).AllocatorInstance.Data;
    iVar3 = (this->Children).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Children).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::Cameras::FCameraDebugBlock_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      DebugDraw(*(FCameraDebugBlock **)pFVar4,param_1,param_2);
      pFVar4 = pFVar4 + 8;
    }
    FCameraDebugRenderer::RemoveIndent(param_2);
  }
  else {
    FCameraDebugRenderer::FlushText(param_2);
    fVar5 = (float)(param_2->IndentLevel * GGameplayCamerasDebugIndent +
                   GGameplayCamerasDebugLeftMargin);
    if (__real_322bcc77 <
        (float)((uint)((param_2->NextDrawPosition).field0_0x0._s_0.X - fVar5) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      iVar3 = param_2->MaxCharHeight;
      (param_2->NextDrawPosition).field0_0x0._s_0.X = fVar5;
      (param_2->NextDrawPosition).field0_0x0._s_0.Y =
           (float)iVar3 + (param_2->NextDrawPosition).field0_0x0._s_0.Y;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d59d07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))(this,param_1,param_2);
  return;
}

// Serialize @ 14d5ccd20

void __thiscall UE::Cameras::FCameraDebugBlock::Serialize(FCameraDebugBlock *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5ccd23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))();
  return;
}

