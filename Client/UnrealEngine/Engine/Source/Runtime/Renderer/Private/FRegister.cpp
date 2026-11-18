// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRegister<FPrimitiveSceneProxy,FPrimitiveSceneDesc> @ 1453c98e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRegister * __thiscall
FSimpleStreamableAssetManager::FRegister::FRegister<FPrimitiveSceneProxy,FPrimitiveSceneDesc>
          (FRegister *this,FPrimitiveSceneProxy *param_1,FPrimitiveSceneDesc *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined1 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  bool bVar12;
  FRegister *pFVar13;
  float fVar14;
  
  fVar1 = param_1->MaxDrawDistance;
  fVar2 = param_1->PrimitiveSceneInfo->LastRenderTime;
  fVar3 = param_1->MinDrawDistance;
  fVar14 = GetStreamingScaleFactor<FPrimitiveSceneProxy>(param_1,&param_2->RenderMatrix);
  this->_padding_ = (longlong)(param_1->SimpleStreamableAssetManagerIndex).Object;
  pTVar6 = (param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController;
  this->_padding_ = (longlong)pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  dVar4 = (param_2->Bounds).Origin.field0_0x0._s_0.Y;
  lVar11 = this->_padding_;
  this->_padding_ = (longlong)(param_2->Bounds).Origin.field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar4;
  dVar4 = (param_2->Bounds).BoxExtent.field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_2->Bounds).Origin.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar4;
  uVar8 = *(undefined4 *)((longlong)&(param_2->Bounds).BoxExtent.field0_0x0 + 0xc);
  uVar9 = *(undefined4 *)((longlong)&(param_2->Bounds).BoxExtent.field0_0x0 + 0x10);
  uVar10 = *(undefined4 *)((longlong)&(param_2->Bounds).BoxExtent.field0_0x0 + 0x14);
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)((longlong)&(param_2->Bounds).BoxExtent.field0_0x0 + 8);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar8;
  *(undefined4 *)&this->_padding_ = uVar9;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar10;
  dVar4 = (param_2->Bounds).SphereRadius;
  *(byte *)&this->_padding_ =
       (byte)this->_padding_ ^ ((byte)lVar11 ^ param_1->bForceMipStreaming) & 1;
  this->_padding_ = (longlong)dVar4;
  (this->Assets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Assets).ArrayNum = 0;
  (this->Assets).ArrayMax = 0;
  *(float *)&this->_padding_ = fVar14;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3;
  *(float *)&this->_padding_ = fVar1;
  *(float *)((longlong)&this->_padding_ + 4) = fVar2;
  this->_padding_ = (longlong)param_1;
  if (param_1->bImplementsStreamableAssetGathering == '\0') {
    if (param_2->PrimitiveComponentInterface == (IPrimitiveComponent *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\SimpleStreamableAssetManager.h"
                          ,0x1f6,L"");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FRegister *)(*pcVar7)();
        return pFVar13;
      }
    }
    else {
      (**(code **)((longlong)*param_2->PrimitiveComponentInterface + 0xc0))();
    }
  }
  else {
    (**(code **)(param_1->_padding_ + 0x98))(param_1,&param_2->Bounds,&this->Assets);
  }
  return this;
}

// FRegister<FPrimitiveSceneProxy,UPrimitiveComponent> @ 1453c9a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRegister * __thiscall
FSimpleStreamableAssetManager::FRegister::FRegister<FPrimitiveSceneProxy,UPrimitiveComponent>
          (FRegister *this,FPrimitiveSceneProxy *param_1,UPrimitiveComponent *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  bool bVar12;
  TMatrix<double> *pTVar13;
  FRegister *pFVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  fVar1 = param_1->MaxDrawDistance;
  fVar2 = param_1->MinDrawDistance;
  fVar3 = param_1->PrimitiveSceneInfo->LastRenderTime;
  pTVar13 = (TMatrix<double> *)(**(code **)(*(longlong *)param_2 + 0x808))(param_2,local_d8);
  fVar15 = GetStreamingScaleFactor<FPrimitiveSceneProxy>(param_1,pTVar13);
  this->_padding_ = (longlong)(param_1->SimpleStreamableAssetManagerIndex).Object;
  pTVar6 = (param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController;
  this->_padding_ = (longlong)pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar4 = *(longlong *)&param_2->field_0x118;
  lVar11 = this->_padding_;
  this->_padding_ = *(longlong *)&param_2->field_0x110;
  this->_padding_ = lVar4;
  lVar4 = *(longlong *)&param_2->field_0x128;
  this->_padding_ = *(longlong *)&param_2->field_0x120;
  this->_padding_ = lVar4;
  uVar8 = *(undefined4 *)&param_2->field_0x134;
  uVar9 = *(undefined4 *)&param_2->field_0x138;
  uVar10 = *(undefined4 *)&param_2->field_0x13c;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&param_2->field_0x130;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar8;
  *(undefined4 *)&this->_padding_ = uVar9;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar10;
  lVar4 = *(longlong *)&param_2->field_0x140;
  *(byte *)&this->_padding_ =
       (byte)this->_padding_ ^ ((byte)lVar11 ^ param_1->bForceMipStreaming) & 1;
  this->_padding_ = lVar4;
  (this->Assets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Assets).ArrayNum = 0;
  (this->Assets).ArrayMax = 0;
  *(float *)&this->_padding_ = fVar15;
  *(float *)((longlong)&this->_padding_ + 4) = fVar2;
  *(float *)&this->_padding_ = fVar1;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3;
  this->_padding_ = (longlong)param_1;
  if (param_1->bImplementsStreamableAssetGathering == '\0') {
    if (&param_2->PrimitiveComponentInterface == (FActorPrimitiveComponentInterface *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\SimpleStreamableAssetManager.h"
                          ,0x1f6,L"");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FRegister *)(*pcVar7)();
        return pFVar14;
      }
    }
    else {
      (**(code **)((longlong)param_2->PrimitiveComponentInterface + 0xc0))();
    }
  }
  else {
    (**(code **)(param_1->_padding_ + 0x98))(param_1,&param_2->field_0x110,&this->Assets);
  }
  return this;
}

