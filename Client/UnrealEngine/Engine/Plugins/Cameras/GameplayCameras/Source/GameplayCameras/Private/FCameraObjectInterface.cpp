// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticStruct @ 14d570cf0

UScriptStruct * __cdecl FCameraObjectInterface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraObjectInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraObjectInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraObjectInterface,(UObject *)pUVar1,
                         L"CameraObjectInterface");
  }
  return Z_Registration_Info_UScriptStruct_FCameraObjectInterface.OuterSingleton;
}

// FindBlendableParameterByGuid @ 14d5a3e50

UCameraObjectInterfaceBlendableParameter * __thiscall
FCameraObjectInterface::FindBlendableParameterByGuid(FCameraObjectInterface *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  UCameraObjectInterfaceBlendableParameter *pUVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->BlendableParameters).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->BlendableParameters).ArrayNum * 8;
  if (pFVar3 != pFVar1) {
    do {
      pUVar2 = *(UCameraObjectInterfaceBlendableParameter **)pFVar3;
      if (((param_1->D == *(uint *)((longlong)&pUVar2->_padding_ + 4) &&
           param_1->C == (uint)pUVar2->_padding_) &&
          param_1->B == *(uint *)((longlong)&pUVar2->_padding_ + 4)) &&
          param_1->A == (uint)pUVar2->_padding_) {
        if ((UE::GC::GIsIncrementalReachabilityPending) &&
           (pUVar2 != (UCameraObjectInterfaceBlendableParameter *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        return pUVar2;
      }
      pFVar3 = pFVar3 + 8;
    } while (pFVar3 != pFVar1);
  }
  return (UCameraObjectInterfaceBlendableParameter *)0x0;
}

// FindBlendableParameterByName @ 14d5a3ef0

UCameraObjectInterfaceBlendableParameter * __thiscall
FCameraObjectInterface::FindBlendableParameterByName(FCameraObjectInterface *this,FString *param_1)

{
  TObjectPtr<UCameraObjectInterfaceBlendableParameter> TVar1;
  TObjectPtr<UCameraObjectInterfaceBlendableParameter>_u_0 *pTVar2;
  
  pTVar2 = &TArray<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,TSizedDefaultAllocator<32>_>
            ::
            FindByPredicate<_FCameraObjectInterface::FindBlendableParameterByName_::__l2::<lambda_1>_>
                      (&this->BlendableParameters,(<lambda_1>)param_1)->field0_0x0;
  if (pTVar2 != (TObjectPtr<UCameraObjectInterfaceBlendableParameter>_u_0 *)0x0) {
    TVar1.field0_0x0 = (TObjectPtr<UCameraObjectInterfaceBlendableParameter>_u_0)pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.field0_0x0 != (UCameraObjectInterfaceBlendableParameter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    return (UCameraObjectInterfaceBlendableParameter *)TVar1.field0_0x0;
  }
  return (UCameraObjectInterfaceBlendableParameter *)0x0;
}

// FindDataParameterByGuid @ 14d5a4000

UCameraObjectInterfaceDataParameter * __thiscall
FCameraObjectInterface::FindDataParameterByGuid(FCameraObjectInterface *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  UCameraObjectInterfaceDataParameter *pUVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->DataParameters).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->DataParameters).ArrayNum * 8;
  if (pFVar3 != pFVar1) {
    do {
      pUVar2 = *(UCameraObjectInterfaceDataParameter **)pFVar3;
      if (((param_1->D == *(uint *)((longlong)&pUVar2->_padding_ + 4) &&
           param_1->C == (uint)pUVar2->_padding_) &&
          param_1->B == *(uint *)((longlong)&pUVar2->_padding_ + 4)) &&
          param_1->A == (uint)pUVar2->_padding_) {
        if ((UE::GC::GIsIncrementalReachabilityPending) &&
           (pUVar2 != (UCameraObjectInterfaceDataParameter *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        return pUVar2;
      }
      pFVar3 = pFVar3 + 8;
    } while (pFVar3 != pFVar1);
  }
  return (UCameraObjectInterfaceDataParameter *)0x0;
}

// FindDataParameterByName @ 14d5a40a0

UCameraObjectInterfaceDataParameter * __thiscall
FCameraObjectInterface::FindDataParameterByName(FCameraObjectInterface *this,FString *param_1)

{
  TObjectPtr<UCameraObjectInterfaceDataParameter> TVar1;
  TObjectPtr<UCameraObjectInterfaceDataParameter>_u_0 *pTVar2;
  
  pTVar2 = &TArray<TObjectPtr<UCameraObjectInterfaceDataParameter>,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_FCameraObjectInterface::FindDataParameterByName_::__l2::<lambda_1>_>
                      (&this->DataParameters,(<lambda_1>)param_1)->field0_0x0;
  if (pTVar2 != (TObjectPtr<UCameraObjectInterfaceDataParameter>_u_0 *)0x0) {
    TVar1.field0_0x0 = (TObjectPtr<UCameraObjectInterfaceDataParameter>_u_0)pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.field0_0x0 != (UCameraObjectInterfaceDataParameter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    return (UCameraObjectInterfaceDataParameter *)TVar1.field0_0x0;
  }
  return (UCameraObjectInterfaceDataParameter *)0x0;
}

// HasBlendableParameter @ 14d5ad230

bool __thiscall
FCameraObjectInterface::HasBlendableParameter(FCameraObjectInterface *this,FString *param_1)

{
  TObjectPtr<UCameraObjectInterfaceBlendableParameter> *pTVar1;
  UCameraObjectInterfaceBlendableParameter *pUVar2;
  bool bVar3;
  
  pTVar1 = TArray<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,TSizedDefaultAllocator<32>_>
           ::
           FindByPredicate<_FCameraObjectInterface::FindBlendableParameterByName_::__l2::<lambda_1>_>
                     (&this->BlendableParameters,(<lambda_1>)param_1);
  if (pTVar1 == (TObjectPtr<UCameraObjectInterfaceBlendableParameter> *)0x0) {
    pUVar2 = (UCameraObjectInterfaceBlendableParameter *)0x0;
  }
  else {
    pUVar2 = (pTVar1->field0_0x0).DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      bVar3 = pUVar2 == (UCameraObjectInterfaceBlendableParameter *)0x0;
      if (!bVar3) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
        return pUVar2 != (UCameraObjectInterfaceBlendableParameter *)0x0;
      }
      goto LAB_14d5ad26a;
    }
  }
  bVar3 = pUVar2 == (UCameraObjectInterfaceBlendableParameter *)0x0;
LAB_14d5ad26a:
  return !bVar3;
}

