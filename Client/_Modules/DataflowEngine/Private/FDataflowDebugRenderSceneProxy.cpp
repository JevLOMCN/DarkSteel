// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 7

// FDataflowDebugRenderSceneProxy @ 1462cdfb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDataflowDebugRenderSceneProxy * __thiscall
FDataflowDebugRenderSceneProxy::FDataflowDebugRenderSceneProxy
          (FDataflowDebugRenderSceneProxy *this,UPrimitiveComponent *param_1)

{
  FDebugRenderSceneProxy::FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this,param_1);
  this->_padding_ = (longlong)&___7FDataflowDebugRenderSceneProxy__6B_;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  return this;
}

// AddObject @ 1462d20a0

void __thiscall
FDataflowDebugRenderSceneProxy::AddObject
          (FDataflowDebugRenderSceneProxy *this,TRefCountPtr<IDataflowDebugDrawObject> *param_1)

{
  int *piVar1;
  TArray<TRefCountPtr<IDataflowDebugDrawObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  IDataflowDebugDrawObject *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pTVar2 = &this->Objects;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Objects).ArrayMax * 8)) {
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
  iVar7 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar7 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
  pIVar4 = param_1->Reference;
  *(IDataflowDebugDrawObject **)(pFVar3 + (longlong)iVar7 * 8) = pIVar4;
  if (pIVar4 != (IDataflowDebugDrawObject *)0x0) {
    *(int *)&pIVar4->field_0x8 = *(int *)&pIVar4->field_0x8 + 1;
  }
  return;
}

// AddPoint @ 1462d2170

void __thiscall
FDataflowDebugRenderSceneProxy::AddPoint(FDataflowDebugRenderSceneProxy *this,FDebugPoint *param_1)

{
  int *piVar1;
  TArray<FDataflowDebugRenderSceneProxy::FDebugPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  FDebugPoint *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  
  pTVar2 = &this->Points;
  pFVar3 = (FDebugPoint *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Points).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->Points).ArrayNum;
  piVar1 = &(this->Points).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar10 = (longlong)iVar9;
  (this->Points).ArrayNum = iVar9 + 1;
  dVar6 = (param_1->Position).field0_0x0._s_0.Y;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar10 * 0x30) = (param_1->Position).field0_0x0._s_0.X;
  *(double *)(pFVar4 + lVar10 * 0x30 + 8) = dVar6;
  uVar7 = *(undefined8 *)&param_1->Size;
  *(double *)(pFVar4 + lVar10 * 0x30 + 0x10) = (param_1->Position).field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar4 + lVar10 * 0x30 + 0x10 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 0xc);
  *(undefined8 *)(pFVar4 + lVar10 * 0x30 + 0x20) =
       *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar10 * 0x30 + 0x20 + 8) = uVar7;
  return;
}

// ClearAll @ 1462d4f50

void __thiscall FDataflowDebugRenderSceneProxy::ClearAll(FDataflowDebugRenderSceneProxy *this)

{
  int *piVar1;
  int iVar2;
  FText3d *pFVar3;
  FMesh *pFVar4;
  FScriptContainerElement *pFVar5;
  
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  pFVar3 = (FText3d *)this->_padding_;
  iVar2 = (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar3,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar3,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  pFVar4 = (FMesh *)this->_padding_;
  iVar2 = (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<FDebugRenderSceneProxy::FMesh,int>(pFVar4,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<FDebugRenderSceneProxy::FMesh,int>(pFVar4,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  (this->Points).ArrayNum = 0;
  if ((this->Points).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->Points).AllocatorInstance,0,&(this->Points).ArrayMax);
  }
  piVar1 = &(this->Objects).ArrayMax;
  pFVar5 = (this->Objects).AllocatorInstance.Data;
  iVar2 = (this->Objects).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TRefCountPtr<IDataflowDebugDrawObject>,int>
              ((TRefCountPtr<IDataflowDebugDrawObject> *)pFVar5,iVar2);
    (this->Objects).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Objects).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TRefCountPtr<IDataflowDebugDrawObject>,int>
              ((TRefCountPtr<IDataflowDebugDrawObject> *)pFVar5,iVar2);
    (this->Objects).ArrayNum = 0;
  }
  return;
}

// GetDynamicMeshElementsForView @ 1462dcd90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDataflowDebugRenderSceneProxy::GetDynamicMeshElementsForView
          (FDataflowDebugRenderSceneProxy *this,FSceneView *param_1,int param_2,
          FSceneViewFamily *param_3,uint param_4,FMeshElementCollector *param_5,
          FMaterialCache *param_6,FMaterialCache *param_7)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  FPrimitiveDrawInterface *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FName local_38 [2];
  
  FDebugRenderSceneProxy::GetDynamicMeshElementsForView
            ((FDebugRenderSceneProxy *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  pFVar5 = FMeshElementCollector::GetPDI(param_5,param_2);
  iVar1 = (this->Points).ArrayNum;
  pFVar6 = (this->Points).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->Points).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDataflowDebugRenderSceneProxy::FDebugPoint_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    (**(code **)(pFVar5->_padding_ + 0x40))
              (pFVar5,pFVar6,pFVar6 + 0x1c,*(undefined4 *)(pFVar6 + 0x18),pFVar6[0x2c]);
    pFVar6 = pFVar6 + 0x30;
  }
  pFVar7 = (this->Objects).AllocatorInstance.Data;
  iVar1 = (this->Objects).ArrayNum;
  pFVar6 = pFVar7 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Objects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TRefCountPtr<IDataflowDebugDrawObject>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    plVar2 = *(longlong **)pFVar7;
    if (plVar2 != (longlong *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 8);
      ::FName::FName(local_38,"FDataflowDebugDrawBaseObject");
      cVar4 = (*pcVar3)(plVar2,local_38[0]);
      if (cVar4 != '\0') {
        (**(code **)(**(longlong **)pFVar7 + 0x18))(*(longlong **)pFVar7,pFVar5);
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  return;
}

// GetViewRelevance @ 1462df220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FDataflowDebugRenderSceneProxy::GetViewRelevance
          (FDataflowDebugRenderSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2 | 2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 0x80;
  return __return_storage_ptr__;
}

// ReservePoints @ 1462e3dc0

void __thiscall
FDataflowDebugRenderSceneProxy::ReservePoints(FDataflowDebugRenderSceneProxy *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (this->Points).ArrayNum;
  uVar1 = iVar2 + param_1;
  if (-1 < (int)uVar1) {
    if ((this->Points).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar1,&(this->Points).AllocatorInstance,iVar2,&(this->Points).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

