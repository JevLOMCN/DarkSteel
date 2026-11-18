// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 63

// CloneToEmptyStorage @ 14a082170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::`22'::<lambda_1>_>'::`8'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a0821d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::`8'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a0821f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::`2'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 14a085430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a085460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a085465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a085470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a0941a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0941b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0941c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),0,0> @ 14a0c2210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),0,0>
::
~TFunction_OwnedObject<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14a0cf980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a0cf9a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`GetTypeHash_NoLock'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`GetTypeHash_NoLock'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a0cf9c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a0cf9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::`2'::<lambda_1>_>'::`8'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a0cfa40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::`8'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a0cfaa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::`8'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  puVar2[9] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar3)();
  }
  puVar2[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a0cfb30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::`8'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a0cfb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::`8'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a0cfbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::`11'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a0cfc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_25_>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  void *_Src;
  
  puVar1 = param_1->InlineAllocation + 8;
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_25_>,0,0>
        ::_vftable_;
  *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
  puVar2 = param_1->InlineAllocation + 0x14;
  iVar3 = *(int *)((longlong)this + 0x10);
  _Src = *(void **)((longlong)this + 8);
  *(int *)(param_1->InlineAllocation + 0x10) = iVar3;
  if (iVar3 == 0) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    return puVar1;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar3,0,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
  memcpy(*(FScriptContainerElement **)puVar1,_Src,(longlong)iVar3 * 0xc);
  return puVar1;
}

// CloneToEmptyStorage @ 14a0cfcf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_26_>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a0cfd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_27_>,0,1>
             ::_vftable_;
  `FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>::<lambda_27_>
            (puVar1 + 2,(<lambda_27_> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14a0cfd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::__l2::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::`2'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a0cfde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14a0d5020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a0d5025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a0d5030

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`GetTypeHash_NoLock'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a0d5035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a0d5040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a0d5045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a0d5050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a0d5080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::__l8::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a0d50b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::__l8::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a0d50e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a0d5110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a0d5140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a0d5170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_25_>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a0d5175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a0d5180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a0d5185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a0d5190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a0d51c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::__l2::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a0d51f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a0d51f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14a0df230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df240

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`GetTypeHash_NoLock'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::__l8::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::__l8::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a0df290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df2c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_25_>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a0df2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::__l2::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a0df300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1> @ 14a1915c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1>::
~TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1>
          (TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0> @ 14a1915e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0>::
~TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0>
          (TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14a195260

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1>::
CloneToEmptyStorage(TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1> *this,
                   FFunctionStorage *param_1)

{
  TVector<double> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = (this->Obj).TwistAxis;
  puVar2[1] = *(undefined8 *)&this->Obj;
  puVar2[2] = pTVar1;
  *(SmoothingKernelFunctor *)(puVar2 + 3) = (this->Obj).SmoothingKernel;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a1952c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0> *this,
                   FFunctionStorage *param_1)

{
  uchar *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ERBFKernelType EVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = param_1->InlineAllocation + 8;
  uVar2 = (this->Obj).field_0x1;
  uVar3 = (this->Obj).field_0x2;
  uVar4 = (this->Obj).field_0x3;
  EVar5 = (this->Obj).SmoothingKernel.KernelType;
  uVar6 = (this->Obj).SmoothingKernel.field_0x1;
  uVar7 = (this->Obj).SmoothingKernel.field_0x2;
  uVar8 = (this->Obj).SmoothingKernel.field_0x3;
  puVar1[0] = (this->Obj).DistanceType;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = EVar5;
  puVar1[5] = uVar6;
  puVar1[6] = uVar7;
  puVar1[7] = uVar8;
  *(float *)(param_1->InlineAllocation + 0x10) = (this->Obj).SmoothingKernel.Sigma;
  return puVar1;
}

// CloneToEmptyStorage @ 14a1952f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`URigVMHost::Execute'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigVMHost::Execute'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14a195930

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1>::
Destroy(TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1> *this)

{
  (**(code **)(this->_padding_ + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a195960

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0>::
Destroy(TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a195965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a195970

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`URigVMHost::Execute'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a195975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14a1aac70

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1>::
GetAddress(TFunction_OwnedObject<FRigVMFunction_MathRBFQuatWeightFunctor,0,1> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a1aac80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0>::
GetAddress(TFunction_OwnedObject<FRigVMFunction_MathRBFVectorWeightFunctor,0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a1aac90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`URigVMHost::Execute'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

