// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 25

// Call @ 14a081810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``URigVM::CacheMemoryHandlesIfRequired'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FRigVMExtendedExecuteContext_&,FRigVMRegistryHandle_&,int,FRigVMBranchInfoKey_const_&,FRigVMOperand_const_&>
::Call(void *param_1,FRigVMExtendedExecuteContext *param_2,FRigVMRegistryHandle *param_3,
      int *param_4,FRigVMBranchInfoKey *param_5,FRigVMOperand *param_6)

{
  URigVM::CacheSingleMemoryHandle
            (*(URigVM **)param_1,param_2,param_3,*param_4,param_5,param_6,false);
  return;
}

// Call @ 14a081850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigVM::CacheMemoryHandlesIfRequired'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `URigVM::CacheMemoryHandlesIfRequired'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14a081860

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_>'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
::Call(void *param_1,TRigVMTypeIndex *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  FRigVMRegistry_NoLock *pFVar6;
  longlong *plVar7;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  lVar1 = *(longlong *)param_1;
  local_28 = param_2->Name;
  local_20 = param_2->Index;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x20);
  CheckCallable(*(void **)(lVar1 + 0x40));
  pcVar3 = *(code **)(lVar1 + 0x40);
  plVar7 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
    plVar7 = *(longlong **)(lVar1 + 0x68);
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  cVar4 = (*pcVar3)(uVar5,&local_28,uVar2);
  local_10 = local_20;
  local_18 = local_28;
  if (cVar4 != '\0') {
    pFVar6 = FRigVMRegistryHandle::operator->(*(FRigVMRegistryHandle **)((longlong)param_1 + 0x18));
    cVar4 = (**(code **)(pFVar6->_padding_ + 0x110))(pFVar6,&local_18);
    if (cVar4 != '\0') {
      **(undefined1 **)((longlong)param_1 + 0x10) = 1;
      return false;
    }
    **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  }
  return true;
}

// Call @ 14a081940

UObject * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,UObject_*,FString_const_&>
::Call(void *param_1,FString *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = URigVMHost::ResolveUserDefinedTypeById(*(URigVMHost **)param_1,param_2);
  return pUVar1;
}

// Call @ 14a081950

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>,bool,TRigVMTypeIndex>
::Call(void *param_1,TRigVMTypeIndex *param_2)

{
  bool bVar1;
  TRigVMTypeIndex local_18 [2];
  
  local_18[0].Name = param_2->Name;
  local_18[0].Index = param_2->Index;
  bVar1 = `FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>::
          operator()(param_1,local_18);
  return bVar1;
}

// Call @ 14a081980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigVM::PrepareMemoryForExecution'::__l10::<lambda_2>,void,FRigVMExtendedExecuteContext_&,FRigVMRegistryHandle_&,int,FRigVMBranchInfoKey_const_&,FRigVMOperand_const_&>
::Call(void *param_1,FRigVMExtendedExecuteContext *param_2,FRigVMRegistryHandle *param_3,
      int *param_4,FRigVMBranchInfoKey *param_5,FRigVMOperand *param_6)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 14a0cece0

FRigVMTemplateArgument * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
::Call(FRigVMTemplateArgument *__return_storage_ptr__,void *param_1,FName *param_2,
      ERigVMPinDirection *param_3,FRigVMRegistryHandle *param_4)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2,*param_3,param_4);
  return __return_storage_ptr__;
}

// Call @ 14a0ced10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GetTypeHash_NoLock'::__l2::<lambda_1>,bool,TRigVMTypeIndex>::Call
          (void *param_1,TRigVMTypeIndex *param_2)

{
  bool bVar1;
  TRigVMTypeIndex local_18 [2];
  
  local_18[0].Name = param_2->Name;
  local_18[0].Index = param_2->Index;
  bVar1 = `GetTypeHash_NoLock'::__l2::<lambda_1>::operator()(param_1,local_18);
  return bVar1;
}

// Call @ 14a0ced40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>,bool,TRigVMTypeIndex>
::Call(void *param_1,TRigVMTypeIndex *param_2)

{
  bool bVar1;
  TRigVMTypeIndex local_18 [2];
  
  local_18[0].Name = param_2->Name;
  local_18[0].Index = param_2->Index;
  bVar1 = `FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>::operator()
                    (param_1,local_18);
  return bVar1;
}

// Call @ 14a0ced70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_>'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
::Call(void *param_1,TRigVMTypeIndex *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  lVar1 = *(longlong *)param_1;
  local_28 = param_2->Name;
  local_20 = param_2->Index;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x20);
  CheckCallable(*(void **)(lVar1 + 0x40));
  pcVar3 = *(code **)(lVar1 + 0x40);
  plVar6 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0x68);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar3)(uVar5,&local_28,uVar2);
  if (cVar4 != '\0') {
    local_18 = local_28;
    local_10 = local_20;
    cVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)param_1 + 0x18) + 0x110))
                      ((longlong *)**(undefined8 **)((longlong)param_1 + 0x18),&local_18);
    if (cVar4 == '\0') {
      **(undefined1 **)((longlong)param_1 + 0x10) = 1;
      return false;
    }
    **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  }
  return true;
}

// Call @ 14a0cee30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgument::FindTypeIndex'::__l8::<lambda_1>,bool,TRigVMTypeIndex>::
Call(void *param_1,TRigVMTypeIndex *param_2)

{
  bool bVar1;
  
  if (param_2->Index == *(int *)((longlong)param_1 + 0x20)) {
    **(undefined1 **)((longlong)param_1 + 0x10) = 1;
    return false;
  }
  bVar1 = TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)>
          ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)>
                        *)(*(longlong *)param_1 + 0x40),param_2,
                       *(FRigVMRegistryHandle **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  }
  return true;
}

// Call @ 14a0cee80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgument::ForEachType'::__l8::<lambda_1>,bool,TRigVMTypeIndex>::
Call(void *param_1,TRigVMTypeIndex *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  lVar1 = *(longlong *)param_1;
  local_28 = param_2->Name;
  local_20 = param_2->Index;
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x40);
  CheckCallable(*(void **)(lVar1 + 0x40));
  pcVar2 = *(code **)(lVar1 + 0x40);
  plVar7 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
    plVar7 = *(longlong **)(lVar1 + 0x68);
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar2)(uVar5,&local_28,uVar6);
  if (cVar3 == '\0') {
    uVar4 = 1;
  }
  else {
    local_18 = local_28;
    local_10 = local_20;
    CheckCallable(*(void **)((longlong)param_1 + 0x10));
    pcVar2 = *(code **)((longlong)param_1 + 0x10);
    plVar7 = (longlong *)((longlong)param_1 + 0x20);
    if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
      plVar7 = *(longlong **)((longlong)param_1 + 0x38);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    uVar4 = (*pcVar2)(uVar6,&local_18);
  }
  return (bool)uVar4;
}

// Call @ 14a0cef50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>,bool,TRigVMTypeIndex>::
Call(void *param_1,TRigVMTypeIndex *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x10);
  CheckCallable(*(void **)(lVar1 + 0x40));
  pcVar3 = *(code **)(lVar1 + 0x40);
  plVar6 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0x68);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar3)(uVar5,param_2,uVar2);
  if (cVar4 != '\0') {
    **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  }
  return true;
}

// Call @ 14a0cef60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
::Call(void *param_1,TRigVMTypeIndex *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x10);
  CheckCallable(*(void **)(lVar1 + 0x40));
  pcVar3 = *(code **)(lVar1 + 0x40);
  plVar6 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0x68);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar3)(uVar5,param_2,uVar2);
  if (cVar4 != '\0') {
    **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  }
  return true;
}

// Call @ 14a0cef70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMRegistry_NoLock::OnModulesUnloadedInternal'::__l48::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FRigVMRegistry_NoLock::OnModulesUnloadedInternal'::__l48::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14a0cef80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>,bool,TRigVMTypeIndex>
::Call(void *param_1,TRigVMTypeIndex *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  FName *pFVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  lVar2 = *(longlong *)param_1;
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x20);
  CheckCallable(*(void **)(lVar2 + 0x40));
  pcVar4 = *(code **)(lVar2 + 0x40);
  plVar8 = (longlong *)(lVar2 + 0x50);
  if (*(longlong **)(lVar2 + 0x68) != (longlong *)0x0) {
    plVar8 = *(longlong **)(lVar2 + 0x68);
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar6 = (*pcVar4)(uVar7,param_2,uVar3);
  if (cVar6 != '\0') {
    iVar1 = **(int **)((longlong)param_1 + 8);
    if (iVar1 == *(int *)((longlong)param_1 + 0x10)) {
      pFVar5 = *(FName **)((longlong)param_1 + 0x18);
      *pFVar5 = param_2->Name;
      pFVar5[1].ComparisonIndex.Value = param_2->Index;
      return false;
    }
    **(int **)((longlong)param_1 + 8) = iVar1 + 1;
  }
  return true;
}

// Call @ 14a0cef90

FRigVMTemplateArgument * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_25_>,FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
::Call(FRigVMTemplateArgument *__return_storage_ptr__,void *param_1,FName *param_2,
      ERigVMPinDirection *param_3,FRigVMRegistryHandle *param_4)

{
  FName local_res8 [4];
  
  local_res8[0] = *param_2;
  FRigVMTemplateArgument::FRigVMTemplateArgument
            (__return_storage_ptr__,local_res8,*param_3,param_1,param_4);
  return __return_storage_ptr__;
}

// Call @ 14a0cefd0

FRigVMTemplateArgument * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
::Call(FRigVMTemplateArgument *__return_storage_ptr__,void *param_1,FName *param_2,
      ERigVMPinDirection *param_3,FRigVMRegistryHandle *param_4)

{
  `FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>::operator()
            (param_1,__return_storage_ptr__,*param_2,*param_3,param_4);
  return __return_storage_ptr__;
}

// Call @ 14a0cf010

FRigVMTemplateArgument * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>,FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
::Call(FRigVMTemplateArgument *__return_storage_ptr__,void *param_1,FName *param_2,
      ERigVMPinDirection *param_3,FRigVMRegistryHandle *param_4)

{
  `FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>::operator()
            (param_1,__return_storage_ptr__,*param_2,*param_3,param_4);
  return __return_storage_ptr__;
}

// Call @ 14a0cf050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::__l2::<lambda_2>,bool,TRigVMTypeIndex>
::Call(void *param_1,TRigVMTypeIndex *param_2)

{
  bool bVar1;
  TRigVMTypeIndex local_18;
  
  local_18.Index = param_2->Index;
  local_18.Name = param_2->Name;
  bVar1 = FRigVMTemplate::UpdateArgumentTypes_Impl
                    (*(FRigVMTemplate **)param_1,*(FRigVMTemplateArgument **)((longlong)param_1 + 8)
                     ,&local_18,*(FRigVMRegistryHandle **)((longlong)param_1 + 0x10),
                     (FRigVMDispatchFactory *)**(undefined8 **)((longlong)param_1 + 0x18),
                     *(TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                       **)((longlong)param_1 + 0x20));
  if (!bVar1) {
    **(undefined1 **)((longlong)param_1 + 0x28) = 0;
  }
  return true;
}

// Call @ 14a0cf0b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,bool,TRigVMTypeIndex>
::Call(void *param_1,TRigVMTypeIndex *param_2)

{
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *this;
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  TRigVMTypeIndex local_28;
  FName local_18;
  int local_10;
  
  local_18 = param_2->Name;
  if (param_2->Index != -1) {
    this = *(TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> **)param_1;
    if (local_18 == (FName)0x0) {
      local_10 = param_2->Index;
      plVar1 = *(longlong **)**(undefined8 **)((longlong)param_1 + 8);
      lVar2 = *plVar1;
      uVar3 = (**(code **)(lVar2 + 0xe8))(plVar1,&local_18);
      (**(code **)(lVar2 + 0xe0))(plVar1,&local_28,uVar3);
    }
    else {
      local_28.Index = param_2->Index;
      local_28.Name = local_18;
    }
    TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex>
              (this,&local_28);
  }
  return true;
}

// Call @ 14a0cf150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigVMRegistry_NoLock::OnModulesUnloadedInternal'::__l56::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `FRigVMRegistry_NoLock::OnModulesUnloadedInternal'::__l56::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14a194940

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
::Call(void *param_1,TQuat<double> *param_2,TQuat<double> *param_3)

{
  char cVar1;
  TVector<double> *pTVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> TStack_78;
  TQuat<double> TStack_58;
  TQuat<double> TStack_38;
  
  cVar1 = *(char *)param_1;
  dVar4 = 0.0;
  if (cVar1 == '\0') {
    dVar4 = param_2->Z - param_3->Z;
    dVar5 = param_2->W - param_3->W;
    dVar6 = param_2->X - param_3->X;
    dVar7 = param_2->Y - param_3->Y;
    dVar4 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
  }
  else if (cVar1 == '\x01') {
    dVar4 = RBFDistanceMetric::ArcLength(param_2,param_3);
  }
  else if (cVar1 == '\x02') {
    pTVar2 = *(TVector<double> **)((longlong)param_1 + 8);
    UE::Math::TQuat<double>::ToSwingTwist(param_2,pTVar2,&TStack_58,&TStack_38);
    UE::Math::TQuat<double>::ToSwingTwist(param_3,pTVar2,&TStack_78,&TStack_38);
    dVar4 = TStack_78.W * TStack_58.W + TStack_78.Z * TStack_58.Z +
            TStack_78.Y * TStack_58.Y + TStack_78.X * TStack_58.X;
    dVar5 = (dVar4 + dVar4) * dVar4 - __real_3ff0000000000000;
    dVar4 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar5) && (dVar4 = dVar5, __real_3ff0000000000000 <= dVar5)) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar4 = acos(dVar4);
  }
  else if (cVar1 == '\x03') {
    pTVar2 = *(TVector<double> **)((longlong)param_1 + 8);
    dVar4 = UE::Math::TQuat<double>::GetTwistAngle(param_2,pTVar2);
    dVar5 = UE::Math::TQuat<double>::GetTwistAngle(param_3,pTVar2);
    dVar4 = (double)CONCAT44((uint)((ulonglong)(dVar4 - dVar5) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar4 - dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  fVar3 = SmoothingKernelFunctor::operator()
                    ((SmoothingKernelFunctor *)((longlong)param_1 + 0x10),(float)dVar4);
  return fVar3;
}

// Call @ 14a194950

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  
  cVar2 = *(char *)param_1;
  dVar9 = 0.0;
  if (cVar2 == '\0') {
    dVar13 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar12 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
    dVar9 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    auVar14._0_8_ = dVar13 * dVar13 + dVar12 * dVar12 + dVar9 * dVar9;
    auVar14._8_8_ = 0;
    auVar14 = sqrtpd(ZEXT816(0),auVar14);
    dVar9 = auVar14._0_8_;
  }
  else if (cVar2 == '\x01') {
    dVar13 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    dVar9 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    dVar12 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    dVar9 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  else if (cVar2 == '\x02') {
    dVar9 = (param_3->field0_0x0)._s_0.Z;
    dVar12 = (param_2->field0_0x0)._s_0.X;
    dVar13 = (param_2->field0_0x0)._s_0.Z;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    dVar5 = (param_3->field0_0x0)._s_0.X;
    dVar6 = (param_3->field0_0x0)._s_0.Y;
    dVar11 = dVar1 * dVar1 + dVar12 * dVar12 + dVar13 * dVar13;
    if (dVar11 == __real_3ff0000000000000) {
      uVar15 = (param_2->field0_0x0)._s_0.X;
      uVar3 = (param_2->field0_0x0)._s_0.Y;
      uVar4 = (param_2->field0_0x0)._s_0.Z;
    }
    else {
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
        uVar15 = dVar12 * dVar11;
        uVar3 = dVar1 * dVar11;
        uVar4 = dVar13 * dVar11;
      }
    }
    dVar12 = dVar6 * dVar6 + dVar5 * dVar5 + dVar9 * dVar9;
    if (dVar12 == __real_3ff0000000000000) {
      uVar8 = dVar6;
      uVar10 = dVar5;
      uVar16 = (param_3->field0_0x0)._s_0.Z;
    }
    else {
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar8 = dVar6 * dVar12;
        uVar10 = dVar5 * dVar12;
        uVar16 = dVar9 * dVar12;
      }
    }
    dVar12 = (double)uVar15 * (double)uVar10 + (double)uVar8 * (double)uVar3 +
             (double)uVar16 * (double)uVar4;
    dVar9 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar12) && (dVar9 = dVar12, __real_3ff0000000000000 <= dVar12))
    {
      dVar9 = __real_3ff0000000000000;
    }
    dVar9 = acos(dVar9);
  }
  fVar7 = SmoothingKernelFunctor::operator()
                    ((SmoothingKernelFunctor *)((longlong)param_1 + 4),(float)dVar9);
  return fVar7;
}

// Call @ 14a194960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigVMHost::Execute'::__l2::<lambda_1>,void,FName_const_&>::Call
          (void *param_1,FName *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  if (*(char *)(lVar1 + 0x54) != '\0') {
    *(float *)(lVar1 + 0x4c) = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0x4c);
  }
  return;
}

