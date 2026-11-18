// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1472ddbc0

UClass * __cdecl UMaterialFunctionInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionInstance",
               &Z_Registration_Info_UClass_UMaterialFunctionInstance.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionInstance,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMaterialFunctionInstance>,
               InternalVTableHelperCtorCaller<UMaterialFunctionInstance>,local_res8,
               UMaterialFunctionInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionInstance.InnerSingleton;
}

// UMaterialFunctionInstance @ 1472e3160

UMaterialFunctionInstance * __thiscall
UMaterialFunctionInstance::UMaterialFunctionInstance
          (UMaterialFunctionInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialFunctionInstance__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->Parent).field0_0x0.DebugPtr = (UMaterialFunctionInterface *)0x0;
  (this->Base).field0_0x0.DebugPtr = (UMaterialFunctionInterface *)0x0;
  (this->ScalarParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterValues).ArrayNum = 0;
  (this->ScalarParameterValues).ArrayMax = 0;
  (this->VectorParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameterValues).ArrayNum = 0;
  (this->VectorParameterValues).ArrayMax = 0;
  (this->DoubleVectorParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleVectorParameterValues).ArrayNum = 0;
  (this->DoubleVectorParameterValues).ArrayMax = 0;
  (this->TextureParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameterValues).ArrayNum = 0;
  (this->TextureParameterValues).ArrayMax = 0;
  (this->TextureCollectionParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCollectionParameterValues).ArrayNum = 0;
  (this->TextureCollectionParameterValues).ArrayMax = 0;
  (this->ParameterCollectionParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ParameterCollectionParameterValues).ArrayNum = 0;
  (this->ParameterCollectionParameterValues).ArrayMax = 0;
  (this->FontParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontParameterValues).ArrayNum = 0;
  (this->FontParameterValues).ArrayMax = 0;
  (this->StaticSwitchParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticSwitchParameterValues).ArrayNum = 0;
  (this->StaticSwitchParameterValues).ArrayMax = 0;
  (this->StaticComponentMaskParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->StaticComponentMaskParameterValues).ArrayNum = 0;
  (this->StaticComponentMaskParameterValues).ArrayMax = 0;
  (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextureParameterValues).ArrayNum = 0;
  (this->RuntimeVirtualTextureParameterValues).ArrayMax = 0;
  (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SparseVolumeTextureParameterValues).ArrayNum = 0;
  (this->SparseVolumeTextureParameterValues).ArrayMax = 0;
  return this;
}

// ~UMaterialFunctionInstance @ 1472e39f0

void __thiscall
UMaterialFunctionInstance::~UMaterialFunctionInstance(UMaterialFunctionInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialFunctionInstance__6B_;
  pFVar1 = (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticComponentMaskParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticSwitchParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FontParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterCollectionParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureCollectionParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleVectorParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMaterialFunctionInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472e74a0

UClass * __cdecl UMaterialFunctionInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionInstance",
               &Z_Registration_Info_UClass_UMaterialFunctionInstance.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionInstance,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMaterialFunctionInstance>,
               InternalVTableHelperCtorCaller<UMaterialFunctionInstance>,local_res8,
               UMaterialFunctionInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionInstance.InnerSingleton;
}

// StaticRegisterNativesUMaterialFunctionInstance @ 1472e7a70

void __cdecl UMaterialFunctionInstance::StaticRegisterNativesUMaterialFunctionInstance(void)

{
  return;
}

// UMaterialFunctionInstance @ 148affc50

UMaterialFunctionInstance * __thiscall
UMaterialFunctionInstance::UMaterialFunctionInstance
          (UMaterialFunctionInstance *this,FObjectInitializer *param_1)

{
  UMaterialFunctionInterface::UMaterialFunctionInterface((UMaterialFunctionInterface *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMaterialFunctionInstance__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UMaterialFunctionInterface *)0x0;
  (this->Base).field0_0x0.DebugPtr = (UMaterialFunctionInterface *)0x0;
  (this->ScalarParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterValues).ArrayNum = 0;
  (this->ScalarParameterValues).ArrayMax = 0;
  (this->VectorParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameterValues).ArrayNum = 0;
  (this->VectorParameterValues).ArrayMax = 0;
  (this->DoubleVectorParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleVectorParameterValues).ArrayNum = 0;
  (this->DoubleVectorParameterValues).ArrayMax = 0;
  (this->TextureParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameterValues).ArrayNum = 0;
  (this->TextureParameterValues).ArrayMax = 0;
  (this->TextureCollectionParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCollectionParameterValues).ArrayNum = 0;
  (this->TextureCollectionParameterValues).ArrayMax = 0;
  (this->ParameterCollectionParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ParameterCollectionParameterValues).ArrayNum = 0;
  (this->ParameterCollectionParameterValues).ArrayMax = 0;
  (this->FontParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontParameterValues).ArrayNum = 0;
  (this->FontParameterValues).ArrayMax = 0;
  (this->StaticSwitchParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticSwitchParameterValues).ArrayNum = 0;
  (this->StaticSwitchParameterValues).ArrayMax = 0;
  (this->StaticComponentMaskParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->StaticComponentMaskParameterValues).ArrayNum = 0;
  (this->StaticComponentMaskParameterValues).ArrayMax = 0;
  (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextureParameterValues).ArrayNum = 0;
  (this->RuntimeVirtualTextureParameterValues).ArrayMax = 0;
  (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SparseVolumeTextureParameterValues).ArrayNum = 0;
  (this->SparseVolumeTextureParameterValues).ArrayMax = 0;
  return this;
}

// GetBaseFunction @ 148b00610

UMaterialFunction * __thiscall
UMaterialFunctionInstance::GetBaseFunction
          (UMaterialFunctionInstance *this,
          TMaterialRecursionGuard<UMaterialFunctionInterface> *param_1)

{
  TMaterialRecursionGuard<UMaterialFunctionInterface> **ppTVar1;
  UMaterialFunctionInterface *pUVar2;
  TMaterialRecursionGuard<UMaterialFunctionInterface> *pTVar3;
  UMaterialFunction *pUVar4;
  undefined8 local_18;
  TMaterialRecursionGuard<UMaterialFunctionInterface> *local_10;
  
  pTVar3 = param_1;
  if ((this->Parent).field0_0x0.DebugPtr != (UMaterialFunctionInterface *)0x0) {
    while ((UMaterialFunctionInstance *)pTVar3->Value != this) {
      ppTVar1 = &pTVar3->PreviousLink;
      pTVar3 = *ppTVar1;
      if (*ppTVar1 == (TMaterialRecursionGuard<UMaterialFunctionInterface> *)0x0) {
        TMaterialRecursionGuard<UMaterialFunctionInterface>::Set
                  (param_1,(UMaterialFunctionInterface *)this);
        pUVar2 = (this->Parent).field0_0x0.DebugPtr;
        local_18 = 0;
        local_10 = param_1;
        pUVar4 = (UMaterialFunction *)(**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,&local_18);
        return pUVar4;
      }
    }
  }
  return (UMaterialFunction *)0x0;
}

// GetBaseFunction @ 148b00690

UMaterialFunction * __thiscall
UMaterialFunctionInstance::GetBaseFunction
          (UMaterialFunctionInstance *this,
          TMaterialRecursionGuard<UMaterialFunctionInterface> *param_1)

{
  TMaterialRecursionGuard<UMaterialFunctionInterface> **ppTVar1;
  UMaterialFunctionInterface *pUVar2;
  TMaterialRecursionGuard<UMaterialFunctionInterface> *pTVar3;
  UMaterialFunction *pUVar4;
  undefined8 local_18;
  TMaterialRecursionGuard<UMaterialFunctionInterface> *local_10;
  
  pTVar3 = param_1;
  if ((this->Parent).field0_0x0.DebugPtr != (UMaterialFunctionInterface *)0x0) {
    while ((UMaterialFunctionInstance *)pTVar3->Value != this) {
      ppTVar1 = &pTVar3->PreviousLink;
      pTVar3 = *ppTVar1;
      if (*ppTVar1 == (TMaterialRecursionGuard<UMaterialFunctionInterface> *)0x0) {
        TMaterialRecursionGuard<UMaterialFunctionInterface>::Set
                  (param_1,(UMaterialFunctionInterface *)this);
        pUVar2 = (this->Parent).field0_0x0.DebugPtr;
        local_18 = 0;
        local_10 = param_1;
        pUVar4 = (UMaterialFunction *)(**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,&local_18);
        return pUVar4;
      }
    }
  }
  return (UMaterialFunction *)0x0;
}

// GetMaterialFunctionUsage @ 148b00ef0

EMaterialFunctionUsage __thiscall
UMaterialFunctionInstance::GetMaterialFunctionUsage(UMaterialFunctionInstance *this)

{
  EMaterialFunctionUsage EVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2c8))(0,&local_18);
  if (plVar2 != (longlong *)0x0) {
    EVar1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    return EVar1;
  }
  return Default;
}

// PostLoad @ 148b032a0

void __thiscall UMaterialFunctionInstance::PostLoad(UMaterialFunctionInstance *this)

{
  int iVar1;
  UMaterialFunctionInterface *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FGuid local_28;
  FString local_18;
  
  UObject::PostLoad((UObject *)this);
  if (((*(int *)((longlong)&this->_padding_ + 4) == 0 && (int)this->_padding_ == 0) &&
      *(int *)((longlong)&this->_padding_ + 4) == 0) && (int)this->_padding_ == 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    FGuid::NewGuid(&local_28);
    this->_padding_ = local_28._0_8_;
    this->_padding_ = local_28._8_8_;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this_00 = (this->Parent).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialFunctionInterface *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  iVar1 = (this->TextureParameterValues).ArrayNum;
  pFVar2 = (this->TextureParameterValues).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x28;
  while( true ) {
    if ((this->TextureParameterValues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextureParameterValue,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UObject **)(pFVar2 + 0x10) != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)(pFVar2 + 0x10));
    }
    pFVar2 = pFVar2 + 0x28;
  }
  iVar1 = (this->TextureCollectionParameterValues).ArrayNum;
  pFVar2 = (this->TextureCollectionParameterValues).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x28;
  while( true ) {
    if ((this->TextureCollectionParameterValues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextureCollectionParameterValue,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UObject **)(pFVar2 + 0x10) != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)(pFVar2 + 0x10));
    }
    pFVar2 = pFVar2 + 0x28;
  }
  iVar1 = (this->FontParameterValues).ArrayNum;
  pFVar3 = (this->FontParameterValues).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->FontParameterValues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFontParameterValue,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(UObject **)(pFVar3 + 0x10) != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)(pFVar3 + 0x10));
    }
    pFVar3 = pFVar3 + 0x30;
  }
  iVar1 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
  pFVar2 = (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x28;
  while( true ) {
    if ((this->RuntimeVirtualTextureParameterValues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRuntimeVirtualTextureParameterValue,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UObject **)(pFVar2 + 0x10) != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)(pFVar2 + 0x10));
    }
    pFVar2 = pFVar2 + 0x28;
  }
  iVar1 = (this->SparseVolumeTextureParameterValues).ArrayNum;
  pFVar2 = (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x28;
  while( true ) {
    if ((this->SparseVolumeTextureParameterValues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSparseVolumeTextureParameterValue,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UObject **)(pFVar2 + 0x10) != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)(pFVar2 + 0x10));
    }
    pFVar2 = pFVar2 + 0x28;
  }
  return;
}

// SetParent @ 148b04780

void __thiscall
UMaterialFunctionInstance::SetParent
          (UMaterialFunctionInstance *this,UMaterialFunctionInterface *param_1)

{
  undefined1 uVar1;
  UMaterialFunctionInterface *pUVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialFunctionInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Parent).field0_0x0.DebugPtr = param_1;
  uVar1 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  *(undefined1 *)&this->_padding_ = uVar1;
  local_18 = 0;
  uStack_10 = 0;
  pUVar2 = (UMaterialFunctionInterface *)(**(code **)(this->_padding_ + 0x2c8))(this,&local_18);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMaterialFunctionInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Base).field0_0x0.DebugPtr = pUVar2;
  return;
}

// ValidateFunctionUsage @ 148b048a0

bool __thiscall
UMaterialFunctionInstance::ValidateFunctionUsage
          (UMaterialFunctionInstance *this,FMaterialCompiler *param_1,
          FFunctionExpressionOutput *param_2)

{
  UMaterialFunctionInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialFunctionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b048ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2b8))();
    return (bool)uVar2;
  }
  return false;
}

