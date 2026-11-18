// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// FFXSystemSet @ 1480f3240

FFXSystemSet * __thiscall FFXSystemSet::FFXSystemSet(FFXSystemSet *this,FGPUSortManager *param_1)

{
  this->_padding_ = (longlong)&___7FFXSystemSet__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->FXSystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FXSystems).ArrayNum = 0;
  (this->FXSystems).ArrayMax = 0;
  (this->GPUSortManager).Reference = param_1;
  if (param_1 != (FGPUSortManager *)0x0) {
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  }
  return this;
}

// ~FFXSystemSet @ 1480f67c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFXSystemSet::~FFXSystemSet(FFXSystemSet *this)

{
  int *piVar1;
  int iVar2;
  FGPUSortManager *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FFXSystemSet__6B_;
  DestructItems<TSharedRef<FFXSystemInterface,1>,int>
            ((TSharedRef<FFXSystemInterface,1> *)(this->FXSystems).AllocatorInstance.Data,
             (this->FXSystems).ArrayNum);
  piVar1 = &(this->FXSystems).ArrayMax;
  (this->FXSystems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->FXSystems).AllocatorInstance,0,piVar1);
  }
  pFVar3 = (this->GPUSortManager).Reference;
  if (pFVar3 != (FGPUSortManager *)0x0) {
    plVar5 = &pFVar3->_padding_;
    *(int *)plVar5 = (int)*plVar5 + -1;
    if ((int)*plVar5 == 0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  DestructItems<TSharedRef<FFXSystemInterface,1>,int>
            ((TSharedRef<FFXSystemInterface,1> *)(this->FXSystems).AllocatorInstance.Data,
             (this->FXSystems).ArrayNum);
  pFVar4 = (this->FXSystems).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7FFXSystemInterface__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AddVectorField @ 1480fcdf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFXSystemSet::AddVectorField(FFXSystemSet *this,UVectorFieldComponent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x48))(*(longlong **)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// DestroyGPUSimulation @ 148107180

void __thiscall FFXSystemSet::DestroyGPUSimulation(FFXSystemSet *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x10))();
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// DrawDebug @ 148107980

void __thiscall FFXSystemSet::DrawDebug(FFXSystemSet *this,FCanvas *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x28))(*(longlong **)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// DrawDebug_RenderThread @ 148107a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFXSystemSet::DrawDebug_RenderThread
          (FFXSystemSet *this,FRDGBuilder *param_1,FSceneView *param_2,
          FScreenPassRenderTarget *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x38))(*(longlong **)pFVar2,param_1,param_2,param_3);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// DrawSceneDebug_RenderThread @ 148107a90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FFXSystemSet::DrawSceneDebug_RenderThread
          (FFXSystemSet *this,FRDGBuilder *param_1,FSceneView *param_2,FRDGTexture *param_3,
          FRDGTexture *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x40))
              (*(longlong **)pFVar2,param_1,param_2,param_3,param_4);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetGPUSortManager @ 148116030

FGPUSortManager * __thiscall FFXSystemSet::GetGPUSortManager(FFXSystemSet *this)

{
  return (this->GPUSortManager).Reference;
}

// GetInterface @ 1481160d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFXSystemInterface * __thiscall FFXSystemSet::GetInterface(FFXSystemSet *this,FName *param_1)

{
  int iVar1;
  FFXSystemInterface *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar3 = (this->FXSystems).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pFVar2 = (FFXSystemInterface *)
             (**(code **)**(undefined8 **)pFVar3)(*(undefined8 **)pFVar3,param_1);
    if (pFVar2 != (FFXSystemInterface *)0x0) {
      return pFVar2;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return (FFXSystemInterface *)0x0;
}

// OnMarkPendingKill @ 1481248d0

void __thiscall FFXSystemSet::OnMarkPendingKill(FFXSystemSet *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 8))();
    pFVar2 = pFVar2 + 0x10;
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// PostInitViews @ 148126090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFXSystemSet::PostInitViews
          (FFXSystemSet *this,FRDGBuilder *param_1,TStridedView<FSceneView_const_,int> *param_2,
          bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_38 = *(undefined4 *)&param_2->FirstElementPtr;
    uStack_34 = *(undefined4 *)((longlong)&param_2->FirstElementPtr + 4);
    iStack_30 = param_2->BytesBetweenElements;
    iStack_2c = param_2->NumElements;
    (**(code **)(**(longlong **)pFVar2 + 0x68))(*(longlong **)pFVar2,param_1,&local_38,param_3);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// PostRenderOpaque @ 148126c40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFXSystemSet::PostRenderOpaque
          (FFXSystemSet *this,FRDGBuilder *param_1,TStridedView<FSceneView_const_,int> *param_2,
          FSceneUniformBuffer *param_3,bool param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_38 = *(undefined4 *)&param_2->FirstElementPtr;
    uStack_34 = *(undefined4 *)((longlong)&param_2->FirstElementPtr + 4);
    iStack_30 = param_2->BytesBetweenElements;
    iStack_2c = param_2->NumElements;
    (**(code **)(**(longlong **)pFVar2 + 0x98))
              (*(longlong **)pFVar2,param_1,&local_38,param_3,param_4);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// PreInitViews @ 1481274f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FFXSystemSet::PreInitViews
          (FFXSystemSet *this,FRDGBuilder *param_1,bool param_2,
          TArrayView<FSceneViewFamily_const_*,int> *param_3,FSceneViewFamily *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x60))
              (*(longlong **)pFVar2,param_1,param_2,param_3,param_4);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// PreRender @ 148127a10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFXSystemSet::PreRender
          (FFXSystemSet *this,FRDGBuilder *param_1,TStridedView<FSceneView_const_,int> *param_2,
          FSceneUniformBuffer *param_3,bool param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_38 = *(undefined4 *)&param_2->FirstElementPtr;
    uStack_34 = *(undefined4 *)((longlong)&param_2->FirstElementPtr + 4);
    iStack_30 = param_2->BytesBetweenElements;
    iStack_2c = param_2->NumElements;
    (**(code **)(**(longlong **)pFVar2 + 0x90))
              (*(longlong **)pFVar2,param_1,&local_38,param_3,param_4);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// RemoveVectorField @ 148129ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFXSystemSet::RemoveVectorField(FFXSystemSet *this,UVectorFieldComponent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x50))(*(longlong **)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// RequiresEarlyViewUniformBuffer @ 14812a300

bool __thiscall FFXSystemSet::RequiresEarlyViewUniformBuffer(FFXSystemSet *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar3 = (this->FXSystems).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)(**(longlong **)pFVar3 + 0x80))();
    if (cVar2 != '\0') {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// RequiresRayTracingScene @ 14812a3a0

bool __thiscall FFXSystemSet::RequiresRayTracingScene(FFXSystemSet *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar3 = (this->FXSystems).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)(**(longlong **)pFVar3 + 0x88))();
    if (cVar2 != '\0') {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// SetSceneTexturesUniformBuffer @ 148131090

void __thiscall
FFXSystemSet::SetSceneTexturesUniformBuffer
          (FFXSystemSet *this,TUniformBufferRef<FSceneTextureUniformParameters> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0xa8))(*(longlong **)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// ShouldDebugDraw_RenderThread @ 148132480

bool __thiscall FFXSystemSet::ShouldDebugDraw_RenderThread(FFXSystemSet *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar3 = (this->FXSystems).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)(**(longlong **)pFVar3 + 0x30))();
    if (cVar2 != '\0') {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// Tick @ 148138240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FFXSystemSet::Tick(FFXSystemSet *this,UWorld *param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x18))(*(longlong **)pFVar2,param_1,param_2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// UpdateVectorField @ 148142c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFXSystemSet::UpdateVectorField(FFXSystemSet *this,UVectorFieldComponent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar2 = (this->FXSystems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x58))(*(longlong **)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// UsesDepthBuffer @ 148143390

bool __thiscall FFXSystemSet::UsesDepthBuffer(FFXSystemSet *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar3 = (this->FXSystems).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)(**(longlong **)pFVar3 + 0x78))();
    if (cVar2 != '\0') {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// UsesGlobalDistanceField @ 148143540

bool __thiscall FFXSystemSet::UsesGlobalDistanceField(FFXSystemSet *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FXSystems).ArrayNum;
  pFVar3 = (this->FXSystems).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FXSystems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FFXSystemInterface,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)(**(longlong **)pFVar3 + 0x70))();
    if (cVar2 != '\0') {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

