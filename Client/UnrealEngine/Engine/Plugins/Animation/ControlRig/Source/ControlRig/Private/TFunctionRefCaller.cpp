// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 180

// Call @ 14a243cb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::ExecuteEventOnAllModules'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
::Call(void *param_1,FRigModuleInstance **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRig::ExecuteEventOnAllModules'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a243cc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::FindModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>::Call
          (void *param_1,FRigModuleInstance **param_2)

{
  FRigModuleInstance *pFVar1;
  UControlRig *pUVar2;
  
  pFVar1 = *param_2;
  pUVar2 = (pFVar1->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    pUVar2 = (UControlRig *)0x0;
    (pFVar1->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar2 = (pFVar1->RigPtr).field0_0x0.DebugPtr;
  }
  if (pUVar2 == *(UControlRig **)param_1) {
    **(longlong **)((longlong)param_1 + 8) = (longlong)pFVar1;
    return false;
  }
  return true;
}

// Call @ 14a243d00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  bool bVar1;
  
  bVar1 = `FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a243d10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>::Call
          (void *param_1,FRigModuleInstance **param_2)

{
  undefined1 uVar1;
  FRigModuleInstance *local_res8 [4];
  
  local_res8[0] = *param_2;
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],local_res8);
  return (bool)uVar1;
}

// Call @ 14a243d40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigController::GetAllModules'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRigController::GetAllModules'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a243d50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::GetControlsInOrder'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `UModularRig::GetControlsInOrder'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14a243d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::GetEventsForAllModules'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
::Call(void *param_1,FRigModuleInstance **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRig::GetEventsForAllModules'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a243d70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRig::GetMappableNodeData'::__l2::<lambda_1>,bool,FRigBoneElement_*>::
Call(void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRig::GetMappableNodeData'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a243d80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::GetModuleNames'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
::Call(void *param_1,FRigModuleInstance **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRig::GetModuleNames'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a243d90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::GetModulePaths'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
::Call(void *param_1,FRigModuleInstance **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRig::GetModulePaths'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a243da0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRigController::GetPossibleBindings'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a243db0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::GetPreloadDependencies'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *this;
  UClass *local_res8 [4];
  
  this = *(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)param_1;
  local_res8[0] = TSoftClassPtr<UControlRig>::Get(&(*param_2)->Class);
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>
            (this,(UObject **)local_res8);
  return true;
}

// Call @ 14a243df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigController::ImportModuleSettingsFromString'::__l2::<lambda_1>,void,wchar_t_const_*,enum_ELogVerbosity::Type>
::Call(void *param_1,wchar_t **param_2,Type *param_3)

{
  if (2 < (byte)LogControlRig._0_1_) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Error_during_im_1520f56c0,
               (FLogCategoryBase *)&LogControlRig);
    return;
  }
  return;
}

// Call @ 14a243e20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::InitializeVMs'::__l2::<lambda_1>,bool,FRigModuleInstance_*>::Call
          (void *param_1,FRigModuleInstance **param_2)

{
  FRigModuleInstance *pFVar1;
  UControlRig *pUVar2;
  
  pFVar1 = *param_2;
  pUVar2 = (pFVar1->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    (pFVar1->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar2 = (pFVar1->RigPtr).field0_0x0.DebugPtr;
    if (pUVar2 != (UControlRig *)0x0) {
      (**(code **)(pUVar2->_padding_ + 0x3b0))(pUVar2,*(undefined1 *)param_1);
      return true;
    }
  }
  return true;
}

// Call @ 14a243e70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::InitializeVMs'::__l2::<lambda_1>,bool,FRigModuleInstance_*>::Call
          (void *param_1,FRigModuleInstance **param_2)

{
  FRigModuleInstance *pFVar1;
  UControlRig *pUVar2;
  
  pFVar1 = *param_2;
  pUVar2 = (pFVar1->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    (pFVar1->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar2 = (pFVar1->RigPtr).field0_0x0.DebugPtr;
    if (pUVar2 != (UControlRig *)0x0) {
      (**(code **)(pUVar2->_padding_ + 0x3a8))(pUVar2,*(undefined8 *)param_1);
      return true;
    }
  }
  return true;
}

// Call @ 14a243ec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,void,enum_EMessageSeverity::Type,FName_const_&,FString_const_&>
::Call(void *param_1,Type *param_2,FName *param_3,FString *param_4)

{
  `UControlRigReplay::PerformTest'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14a243ed0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a243ee0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  FRigModuleReference *pFVar3;
  
  lVar2 = *(longlong *)param_1;
  pFVar3 = *param_2;
  uVar1 = *(undefined1 *)(lVar2 + 0x50);
  *(undefined1 *)(lVar2 + 0x50) = 1;
  UModularRigController::RefreshModuleVariables
            (*(UModularRigController **)param_1,pFVar3,*(bool *)((longlong)param_1 + 8));
  *(undefined1 *)(lVar2 + 0x50) = uVar1;
  return true;
}

// Call @ 14a243f20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>,void,FRigBaseComponent_*,bool_&>
::Call(void *param_1,FRigBaseComponent **param_2,bool *param_3)

{
  `FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a243f30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a243f40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3)
  ;
  return;
}

// Call @ 14a243f50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14a243f60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRig::SetBoneInitialTransformsFromCompactPose'::__l2::<lambda_1>,bool,FRigBoneElement_*>
::Call(void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRig::SetBoneInitialTransformsFromCompactPose'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a243f70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRig::SetBoneInitialTransformsFromRefSkeleton'::__l2::<lambda_1>,bool,FRigBoneElement_*>
::Call(void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRig::SetBoneInitialTransformsFromRefSkeleton'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a243f80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimNodeControlRigLibrary::SetControlRigClass'::__l2::<lambda_1>,void,FAnimNode_ControlRig_&>
::Call(void *param_1,FAnimNode_ControlRig *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  
  pUVar2 = *(UClass **)param_1;
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_2->DefaultControlRigClass).Class.field0_0x0.DebugPtr;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && ((param_2->DefaultControlRigClass).Class.field0_0x0.DebugPtr != (UClass *)0x0))
      goto LAB_14a22c467;
    }
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_2->ControlRigClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  (param_2->DefaultControlRigClass).Class.field0_0x0 = (param_2->ControlRigClass).Class.field0_0x0;
LAB_14a22c467:
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_2->ControlRigClass).Class.field0_0x0.DebugPtr = pUVar2;
  return;
}

// Call @ 14a243f90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FModularRigModel::SortModuleNames'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  pFVar2 = (FName *)**(longlong **)param_1;
  local_res8[0] = (*param_2)->Name;
  pFVar1 = pFVar2 + (int)(*(longlong **)param_1)[1];
  if (pFVar2 != pFVar1) {
    while (*pFVar2 != local_res8[0]) {
      pFVar2 = pFVar2 + 1;
      if (pFVar2 == pFVar1) {
        return true;
      }
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              (*(TArray<FName,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8),local_res8);
  }
  return true;
}

// Call @ 14a243ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::StoreComponents'::__l2::<lambda_1>,void,FRigBaseComponent_*,bool_&>
::Call(void *param_1,FRigBaseComponent **param_2,bool *param_3)

{
  FControlRigReplayTracks::StoreComponent
            (*(FControlRigReplayTracks **)param_1,*(URigHierarchy **)((longlong)param_1 + 8),
             *param_2);
  return;
}

// Call @ 14a244010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14a244020

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::StoreMetaData'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  FControlRigReplayTracks::StoreMetaData
            (*(FControlRigReplayTracks **)param_1,*(URigHierarchy **)((longlong)param_1 + 8),
             *param_2);
  return;
}

// Call @ 14a244040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::StorePose'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  FControlRigReplayTracks::StorePose
            (*(FControlRigReplayTracks **)param_1,*(URigHierarchy **)((longlong)param_1 + 8),
             *param_2);
  return;
}

// Call @ 14a244060

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a244070

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a244080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a244090

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2440a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2440b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigCurveElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetElementsOfType<FRigCurveElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2440c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRig::CreateRigControlsForCurveContainer'::__l5::<lambda_1>,bool,FRigCurveElement_*>
::Call(void *param_1,FRigCurveElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRig::CreateRigControlsForCurveContainer'::__l5::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a2440d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRig::Evaluate_AnyThread'::__l5::<lambda_1>,bool,FRigBaseElement_*>::Call
          (void *param_1,FRigBaseElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRig::Evaluate_AnyThread'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2440e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::Execute_Internal'::__l5::<lambda_1>,bool,FRigModuleInstance_*>::
Call(void *param_1,FRigModuleInstance **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRig::Execute_Internal'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2440f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::ForEachElement'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FRigBaseElement *local_res8;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x30);
  local_res8 = *param_2;
  CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res8,uVar1);
  *param_3 = true;
  return;
}

// Call @ 14a244170

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>,void,FRigBaseComponent_*,bool_&>
::Call(void *param_1,FRigBaseComponent **param_2,bool *param_3)

{
  `FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a244180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,void,FRigBaseComponent_*,bool_&>
::Call(void *param_1,FRigBaseComponent **param_2,bool *param_3)

{
  FControlRigReplayTracks::StoreComponent
            (*(FControlRigReplayTracks **)param_1,*(URigHierarchy **)((longlong)param_1 + 8),
             *param_2);
  return;
}

// Call @ 14a2441a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a2441b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>,bool,FRigModuleReference_const_*>
::Call(void *param_1,FRigModuleReference **param_2)

{
  bool bVar1;
  
  bVar1 = `FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2441c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRigComponent::CalcBounds'::__l17::<lambda_1>,bool,FRigTransformElement_*>
::Call(void *param_1,FRigTransformElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRigComponent::CalcBounds'::__l17::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2441d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,void>::Call
          (void *param_1)

{
  TSet<UControlRig_*,DefaultKeyFuncs<UControlRig_*,0>,FDefaultSetAllocator>::Remove
            (&UE::Private::NotifyingRigs,*(UControlRig **)param_1);
  return;
}

// Call @ 14a2441f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRigComponent::AddMappedSkeletalMesh'::__l20::<lambda_1>,bool,FRigBoneElement_*>
::Call(void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRigComponent::AddMappedSkeletalMesh'::__l20::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a244200

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigSceneProxy::GetDynamicMeshElements'::__l22::<lambda_1>,bool,FRigBoneElement_*>
::Call(void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `FControlRigSceneProxy::GetDynamicMeshElements'::__l22::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a244210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>,void,enum_EMessageSeverity::Type,FString_const_&>
::Call(void *param_1,Type *param_2,FString *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,param_3);
  ``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>::operator()
            (param_1,*param_2,pFVar1);
  return;
}

// Call @ 14a244250

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AControlRigControlActor::Refresh'::__l11::<lambda_1>,bool,FRigControlElement_*>
::Call(void *param_1,FRigControlElement **param_2)

{
  bool bVar1;
  
  bVar1 = `AControlRigControlActor::Refresh'::__l11::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a244260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>,void>::Call
          (void *param_1)

{
  double *pdVar1;
  bool bVar2;
  URigHierarchy *this;
  undefined1 auStack_98 [32];
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0xc));
  if (bVar2) {
    this = (URigHierarchy *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xc));
    if ((this != (URigHierarchy *)0x0) && (-1 < *(int *)((longlong)param_1 + 8))) {
      URigHierarchy::GetGlobalTransformByIndex
                (this,&TStack_78,*(int *)((longlong)param_1 + 8),false);
      pdVar1 = *(double **)param_1;
      *pdVar1 = TStack_78.Rotation.XY.m128d_f64[0];
      pdVar1[1] = TStack_78.Rotation.XY.m128d_f64[1];
      pdVar1[2] = TStack_78.Rotation.ZW.m128d_f64[0];
      pdVar1[3] = TStack_78.Rotation.ZW.m128d_f64[1];
      pdVar1[4] = TStack_78.Translation.XY.m128d_f64[0];
      pdVar1[5] = TStack_78.Translation.XY.m128d_f64[1];
      pdVar1[6] = TStack_78.Translation.ZW.m128d_f64[0];
      pdVar1[7] = TStack_78.Translation.ZW.m128d_f64[1];
      pdVar1[8] = TStack_78.Scale3D.XY.m128d_f64[0];
      pdVar1[9] = TStack_78.Scale3D.XY.m128d_f64[1];
      pdVar1[10] = TStack_78.Scale3D.ZW.m128d_f64[0];
      pdVar1[0xb] = TStack_78.Scale3D.ZW.m128d_f64[1];
    }
  }
  return;
}

// Call @ 14a244270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRig::Execute'::__l2::<lambda_2>,void,FName_const_&>::Call
          (void *param_1,FName *param_2)

{
  URigVMHost::HandleExecutionReachedExit(*(URigVMHost **)param_1,param_2);
  return;
}

// Call @ 14a244280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::GetControlsInOrder'::__l2::<lambda_2>,bool,FRigModuleInstance_const_*>
::Call(void *param_1,FRigModuleInstance **param_2)

{
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find(*(TMapBase<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,0>_>
                    **)param_1,(*param_2)->Name);
  if (pTVar1 != (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>::
    Append<FRigControlElement_*,TSizedDefaultAllocator<32>_>
              (*(TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8)
               ,pTVar1);
  }
  return true;
}

// Call @ 14a2442c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_2>,bool,FRigModuleInstance_*>
::Call(void *param_1,FRigModuleInstance **param_2)

{
  bool bVar1;
  
  bVar1 = `UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_2>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a2442d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,void>::Call
          (void *param_1)

{
  TSet<UControlRig_*,DefaultKeyFuncs<UControlRig_*,0>,FDefaultSetAllocator>::Remove
            (&UE::Private::NotifyingRigs,*(UControlRig **)param_1);
  return;
}

// Call @ 14a2442f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRigComponent::AddMappedSkeletalMesh'::__l31::<lambda_2>,bool,FRigCurveElement_*>
::Call(void *param_1,FRigCurveElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRigComponent::AddMappedSkeletalMesh'::__l31::<lambda_2>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a244300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>,void,enum_EMessageSeverity::Type,FName_const_&,FString_const_&>
::Call(void *param_1,Type *param_2,FName *param_3,FString *param_4)

{
  `UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14a244310

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UTransformableHandle * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,UTransformableHandle_*,UObject_*,FName_const_&>
::Call(void *param_1,UObject **param_2,FName *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UControlRig *this;
  UTransformableControlHandle *pUVar4;
  
  pUVar2 = *param_2;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = AControlRigShapeActor::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      this = (UControlRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar2[0x12].field_0xc);
      if (this != (UControlRig *)0x0) {
        pUVar3 = UControlRig::StaticClass();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) {
          pUVar4 = UControlRig::CreateTransformableControlHandle
                             (this,(FName *)&pUVar2[0x12].field_0x14);
          return (UTransformableHandle *)pUVar4;
        }
      }
      return (UTransformableHandle *)0x0;
    }
  }
  return (UTransformableHandle *)0x0;
}

// Call @ 14a2443c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigController::ImportModuleSettingsFromString'::__l105::<lambda_3>,void,wchar_t_const_*,enum_ELogVerbosity::Type>
::Call(void *param_1,wchar_t **param_2,Type *param_3)

{
  FString local_18;
  
  if (2 < (byte)LogControlRig._0_1_) {
    ::FName::ToString(param_1,&local_18);
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Problem_during__1520f59c8,
               (FLogCategoryBase *)&LogControlRig);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 14a244440

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UControlRig::Execute'::__l244::<lambda_3>,bool,FRigControlElement_*>::Call
          (void *param_1,FRigControlElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UControlRig::Execute'::__l244::<lambda_3>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a244450

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,unsigned_int,UObject_const_*,FName_const_&>
::Call(void *param_1,UObject **param_2,FName *param_3)

{
  int iVar1;
  UObject *pUVar2;
  uint uVar3;
  UClass *pUVar4;
  UControlRig *pUVar5;
  
  pUVar2 = *param_2;
  if (pUVar2 != (UObject *)0x0) {
    pUVar4 = AControlRigShapeActor::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pUVar5 = (UControlRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar2[0x12].field_0xc);
      if (pUVar5 != (UControlRig *)0x0) {
        pUVar4 = UControlRig::StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          uVar3 = UTransformableControlHandle::ComputeHash(pUVar5,(FName *)&pUVar2[0x12].field_0x14)
          ;
          return uVar3;
        }
      }
      return 0;
    }
  }
  return 0;
}

// Call @ 14a244500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigController::ImportModuleSettingsFromString'::__l149::<lambda_4>,void,wchar_t_const_*,enum_ELogVerbosity::Type>
::Call(void *param_1,wchar_t **param_2,Type *param_3)

{
  FString local_18;
  
  if (2 < (byte)LogControlRig._0_1_) {
    ::FName::ToString(param_1,&local_18);
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Problem_during__1520f5b08,
               (FLogCategoryBase *)&LogControlRig);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 14a2f3fc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FRigElementResolveResult_&),void,FRigElementResolveResult_&>::
Call(void *param_1,FRigElementResolveResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2f3fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14a2f3fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),void,int,URigHierarchy::FMetadataStorage_*>
::Call(void *param_1,int *param_2,FMetadataStorage **param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2f3fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 14a2f3ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  URigHierarchy *pUVar1;
  
  pUVar1 = (URigHierarchy *)FWeakObjectPtr::Get(param_1);
  TMulticastDelegate<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
               *)((longlong)param_1 + 8),pUVar1,(FRigEventContext *)((longlong)param_1 + 0x28));
  return false;
}

// Call @ 14a2f4020

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_1>,bool,FRigTransformElement_*>
::Call(void *param_1,FRigTransformElement **param_2)

{
  bool bVar1;
  
  bVar1 = `URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f4030

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,void,FRigElementResolveResult_&>
::Call(void *param_1,FRigElementResolveResult *param_2)

{
  int iVar1;
  ITextData *pIVar2;
  URigHierarchy *this;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FRigBaseComponent *pFVar7;
  FRigBaseElement *pFVar8;
  FText *pFVar9;
  FRigElementKey *pFVar10;
  undefined1 auStackX_8 [8];
  FName FStackX_10;
  undefined1 auStack_58 [36];
  char cStack_34;
  
  URigHierarchy::GetModuleFName
            (*(URigHierarchy **)((longlong)param_1 + 8),(FRigElementKey *)&FStackX_10);
  if (FStackX_10 == *(FName *)param_1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&CannotConnectWithinNameSpaceMessage,L"ModularRigRuleManager",
                 L"CannotConnectWithinNameSpace",L"Cannot connect within the same namespace.");
      atexit(``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l5::
             _dynamic_atexit_destructor_for__CannotConnectWithinNameSpaceMessage__);
      _Init_thread_footer(&::_TSS0);
    }
    param_2->State = InvalidTarget;
    TVar3 = CannotConnectWithinNameSpaceMessage.TextData;
    pIVar2 = (param_2->Message).TextData.Reference;
    if (pIVar2 != CannotConnectWithinNameSpaceMessage.TextData.Reference) {
      (param_2->Message).TextData.Reference = CannotConnectWithinNameSpaceMessage.TextData.Reference
      ;
      if (TVar3.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,auStackX_8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (param_2->Message).Flags = CannotConnectWithinNameSpaceMessage.Flags;
    return;
  }
  if (*(longlong *)((longlong)param_1 + 0x20) == 0) {
    return;
  }
  if ((*(char *)(*(longlong *)((longlong)param_1 + 0x10) + 0x70) != '\x01') ||
     (lVar6 = 0xbc, *(char *)(*(longlong *)((longlong)param_1 + 0x10) + 0x73) == '\0')) {
    lVar6 = 0xb8;
  }
  iVar1 = *(int *)(*(longlong *)((longlong)param_1 + 0x20) + lVar6);
  this = *(URigHierarchy **)((longlong)param_1 + 8);
  auStack_58[0xc] = Unknown;
  cStack_34 = '\0';
  bVar4 = ::FName::IsWithinBounds((FNameEntryId)(param_2->Key).Name.ComparisonIndex.Value);
  if ((((bVar4) && ((param_2->Key).Name != (FName)0x0)) && ((param_2->Key).Type != None)) &&
     (param_2 != (FRigElementResolveResult *)auStack_58)) {
    auStack_58._8_4_ = (param_2->Key).Name.Number;
    auStack_58[0] = (param_2->Key).Type;
    auStack_58._1_3_ = *(undefined3 *)&(param_2->Key).field_0x1;
    auStack_58._4_4_ = (param_2->Key).Name.ComparisonIndex.Value;
    auStack_58[0xc] = InvalidTarget;
  }
  if (cStack_34 == '\0') {
    if (auStack_58[0xc] == Unknown) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
        ::__l2::InvalidKey.Type = None;
        `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
        ::__l2::InvalidKey.Name.ComparisonIndex.Value = 0;
        `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
        ::__l2::InvalidKey.Name.Number = 0;
        _Init_thread_footer(&`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pFVar10 = &`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                 ::__l2::InvalidKey;
    }
    else {
      pFVar10 = (FRigElementKey *)auStack_58;
    }
    iVar5 = URigHierarchy::GetIndex(this,pFVar10,true);
    pFVar8 = URigHierarchy::Get(this,iVar5);
    if (pFVar8 != (FRigBaseElement *)0x0) {
      iVar5 = pFVar8->SpawnIndex;
      goto LAB_14a2e2eb5;
    }
  }
  else {
    iVar5 = URigHierarchy::GetComponentIndex(this,(FRigComponentKey *)(auStack_58 + 0x10),true);
    if ((iVar5 != -1) &&
       (pFVar7 = URigHierarchy::GetComponent(this,iVar5), pFVar7 != (FRigBaseComponent *)0x0)) {
      iVar5 = pFVar7->SpawnIndex;
      goto LAB_14a2e2eb5;
    }
  }
  iVar5 = -1;
LAB_14a2e2eb5:
  if (iVar1 == -1) {
    bVar4 = FRigModuleInstance::HasChildModule
                      (*(FRigModuleInstance **)((longlong)param_1 + 0x20),&FStackX_10,true);
    if (!bVar4) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&CannotConnectBelowNameSpaceMessage,L"ModularRigRuleManager",
                 L"CannotConnectBelowNameSpace",
                 L"Cannot connect to element below the connector\'s namespace.");
      atexit(``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l16::
             _dynamic_atexit_destructor_for__CannotConnectBelowNameSpaceMessage__);
      _Init_thread_footer(&::_TSS2);
    }
    pFVar9 = &CannotConnectBelowNameSpaceMessage;
  }
  else {
    if (iVar5 < iVar1) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&CannotConnectBelowNameSpaceMessage,L"ModularRigRuleManager",
                 L"CannotConnectLaterSpawnElement",
                 L"Cannot connect to an element spawn later than the connector\'s module.");
      atexit(``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l13::
             _dynamic_atexit_destructor_for__CannotConnectBelowNameSpaceMessage__);
      _Init_thread_footer(&::_TSS1);
    }
    pFVar9 = &CannotConnectBelowNameSpaceMessage;
  }
  FRigElementResolveResult::SetInvalidTarget(param_2,pFVar9);
  return;
}

// Call @ 14a2f4040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `UModularRigRuleManager::FindMatches'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f4050

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigConnectionRuleInput::FindPrimaryConnector'::__l2::<lambda_1>,bool,FRigConnectorElement_*>
::Call(void *param_1,FRigConnectorElement **param_2)

{
  FRigConnectorElement *pFVar1;
  FRigElementKey local_res10 [2];
  
  pFVar1 = *param_2;
  if ((pFVar1->Settings).Type == Primary) {
    URigHierarchy::GetModuleFName((URigHierarchy *)**(undefined8 **)param_1,local_res10);
    if (**(longlong **)(*(longlong *)param_1 + 8) == local_res10[0]._0_8_) {
      **(longlong **)((longlong)param_1 + 8) = (longlong)pFVar1;
      return false;
    }
  }
  return true;
}

// Call @ 14a2f40d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigConnectionRuleInput::FindSecondaryConnectors'::__l2::<lambda_1>,bool,FRigConnectorElement_*>
::Call(void *param_1,FRigConnectorElement **param_2)

{
  bool bVar1;
  
  bVar1 = `FRigConnectionRuleInput::FindSecondaryConnectors'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f40e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetAllKeys'::__l2::<lambda_1>,bool,FRigBaseElement_const_&>::Call
          (void *param_1,FRigBaseElement *param_2)

{
  ERigElementType EVar1;
  
  EVar1 = (param_2->Key).Type;
  return (*(ERigElementType *)param_1 & EVar1) == EVar1;
}

// Call @ 14a2f4100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetRootElementKeys'::__l2::<lambda_1>,bool,FRigBaseElement_const_&>
::Call(void *param_1,FRigBaseElement *param_2)

{
  bool bVar1;
  FRigBaseElement *this;
  
  this = URigHierarchy::Get(*(URigHierarchy **)param_1,param_2->Index);
  if (this != (FRigBaseElement *)0x0) {
    bVar1 = FRigBaseElement::IsA<FRigSingleParentElement>(this);
    if (bVar1) {
      return this[3]._padding_ == 0;
    }
    bVar1 = FRigBaseElement::IsA<FRigMultiParentElement>(this);
    if (bVar1) {
      return *(int *)&this[4].CachedNameString.Data.AllocatorInstance.Data == 0;
    }
  }
  return true;
}

// Call @ 14a2f4170

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetRootElements'::__l2::<lambda_1>,bool,FRigBaseElement_*>::Call
          (void *param_1,FRigBaseElement **param_2)

{
  FRigBaseElement *this;
  bool bVar1;
  
  this = *param_2;
  if (this != (FRigBaseElement *)0x0) {
    bVar1 = FRigBaseElement::IsA<FRigSingleParentElement>(this);
    if (bVar1) {
      return this[3]._padding_ == 0;
    }
    bVar1 = FRigBaseElement::IsA<FRigMultiParentElement>(this);
    if (bVar1) {
      return *(int *)&this[4].CachedNameString.Data.AllocatorInstance.Data == 0;
    }
  }
  return true;
}

// Call @ 14a2f41e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetSafeNewComponentName'::__l2::<lambda_1>,bool,FName_const_&>::
Call(void *param_1,FName *param_2)

{
  URigHierarchy *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  FRigBaseElement *pFVar6;
  FRigBaseComponent *pFVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FName FVar13;
  FRigElementKey FStack_68;
  FRigElementKey FStack_58;
  FName aFStack_48 [4];
  
  this = *(URigHierarchy **)param_1;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  FVar11.Value = 0xffffffff;
  aFStack_48[0].ComparisonIndex.Value = 0xffffffff;
  aFStack_48[0].Number = 0;
  if (param_2 == aFStack_48) {
    FVar12.ComparisonIndex.Value = 0xffffffff;
    FVar12.Number = 0;
  }
  else {
    FVar12 = *param_2;
    FVar11 = FVar12.ComparisonIndex.Value;
    if ((FVar11.Value == 0xffffffff) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FStack_68._0_8_ = *(undefined8 *)((longlong)param_1 + 8);
  FStack_68.Name.Number = *(uint *)((longlong)param_1 + 0x10);
  iVar4 = URigHierarchy::GetIndex(this,&FStack_68,true);
  pFVar6 = URigHierarchy::Get(this,iVar4);
  if ((pFVar6 != (FRigBaseElement *)0x0) &&
     (iVar4 = (pFVar6->ComponentIndices).ArrayNum, FVar10 = FVar13, 0 < iVar4)) {
    do {
      FStack_58._0_8_ = *(undefined8 *)((longlong)param_1 + 8);
      FStack_58.Name.Number = *(uint *)((longlong)param_1 + 0x10);
      iVar5 = URigHierarchy::GetIndex(this,&FStack_58,true);
      pFVar6 = URigHierarchy::Get(this,iVar5);
      FVar9 = FVar13;
      if ((pFVar6 != (FRigBaseElement *)0x0) &&
         (pFVar7 = FRigBaseElement::GetComponent(pFVar6,FVar10.ComparisonIndex.Value.Value),
         pFVar7 != (FRigBaseComponent *)0x0)) {
        FVar9 = (pFVar7->Key).Name;
      }
      FVar8 = FRigName::EmptyName;
      if (FVar11.Value != 0xffffffff) {
        FVar8 = FVar12;
      }
      if (FVar8 == FVar9) {
        return false;
      }
      FVar10.ComparisonIndex.Value = FVar10.ComparisonIndex.Value.Value + 1;
      FVar10.Number = 0;
    } while ((int)FVar10.ComparisonIndex.Value < iVar4);
  }
  return true;
}

// Call @ 14a2f41f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetSafeNewName'::__l2::<lambda_1>,bool,FName_const_&>::Call
          (void *param_1,FName *param_2)

{
  ERigElementType EVar1;
  URigHierarchy *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRigName FStack_28;
  
  this = *(URigHierarchy **)param_1;
  EVar1 = *(ERigElementType *)((longlong)param_1 + 8);
  FStack_28.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  FStack_28.Name.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
  FStack_28.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  FStack_28.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
  if ((((FRigName *)param_2 != &FStack_28) &&
      (FStack_28.Name.field0_0x0 = *(TOptional<FName>_u_0 *)param_2,
      FStack_28.Name.field0_0x0._0_4_ == 0xffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (FStack_28.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
    if (FStack_28.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)FStack_28.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
    }
    FStack_28.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    FStack_28.NameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    FStack_28.NameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
  }
  bVar3 = URigHierarchy::IsNameAvailable(this,&FStack_28,EVar1,(FString *)0x0);
  if ((FStack_28.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (FStack_28.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)FStack_28.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// Call @ 14a2f4200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchyController::ImportCurves'::__l2::<lambda_1>,void,FName,FCurveMetaData_const_&>
::Call(void *param_1,FName *param_2,FCurveMetaData *param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FNameEntryId FVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FName FVar10;
  FName FStackX_8;
  FRigElementKey FStack_78;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  FRigElementKey FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  FVar10 = *param_2;
  if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
    ::FName::ToString(param_2,&FStack_28);
    ::FName::ToString((FName *)((longlong)param_1 + 0x10),&FStack_38);
    ::FString::PrintfImpl(&FStack_48,L"%s::%s");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_48.Data.ArrayNum != 0) {
      FVar9.Data = FStack_48.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&FStackX_8,(wchar_t *)FVar9.Data);
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    FVar10 = FStackX_8;
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  FStack_78.Type = Curve;
  FStack_78.Name.ComparisonIndex = FVar10.ComparisonIndex.Value;
  FVar5.Value = FStack_78.Name.ComparisonIndex.Value;
  FStack_78.Name.Number = FVar10.Number;
  uVar6 = FStack_78.Name.Number;
  iVar8 = URigHierarchy::GetIndex(*(URigHierarchy **)((longlong)param_1 + 8),&FStack_78,true);
  if (iVar8 != -1) {
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
    if ((((FRigElementKey *)pFVar2->Data <= &FStack_78) &&
        (&FStack_78 < (FRigElementKey *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar8 + 1;
    pFVar3 = pFVar2->Data;
    *(ulonglong *)(pFVar3 + (longlong)iVar8 * 0xc) =
         CONCAT44(FStack_78.Name.ComparisonIndex.Value,FStack_78._0_4_);
    *(uint *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = FStack_78.Name.Number;
    return;
  }
  URigHierarchyController::AddCurve
            (*(URigHierarchyController **)param_1,&FStack_58,FVar10,0.0,
             *(bool *)((longlong)param_1 + 0x20),false);
  pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
  uStack_68 = CONCAT31(uStack_68._1_3_,8);
  uStack_64 = FVar5.Value;
  uStack_60 = uVar6;
  if (((pFVar2->Data <= (FScriptContainerElement *)&uStack_68) &&
      ((FScriptContainerElement *)&uStack_68 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0xc)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar8 + 1;
  pFVar3 = pFVar2->Data;
  *(ulonglong *)(pFVar3 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_64,uStack_68);
  *(uint *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = uStack_60;
  return;
}

// Call @ 14a2f4210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f4220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::SortKeys'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>::Call
          (void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  ERigElementType *pEVar1;
  FRigBaseElement *pFVar2;
  ERigElementType *pEVar3;
  
  pEVar3 = *(ERigElementType **)param_1;
  pFVar2 = *param_2;
  pEVar1 = pEVar3 + (longlong)*(int *)((longlong)param_1 + 8) * 0xc;
  if (pEVar3 == pEVar1) {
    return;
  }
  while ((*(FName *)(pEVar3 + 4) != (pFVar2->Key).Name || (*pEVar3 != (pFVar2->Key).Type))) {
    pEVar3 = pEVar3 + 0xc;
    if (pEVar3 == pEVar1) {
      return;
    }
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
            (*(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
             &pFVar2->Key);
  return;
}

// Call @ 14a2f4270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::RemoveAllMetadata'::__l3::<lambda_1>,bool,FRigBaseElement_*>::
Call(void *param_1,FRigBaseElement **param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = **(byte **)((longlong)param_1 + 8);
  bVar2 = URigHierarchy::RemoveAllMetadataForElement(*(URigHierarchy **)param_1,*param_2);
  **(byte **)((longlong)param_1 + 8) = bVar2 & bVar1;
  return true;
}

// Call @ 14a2f42b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigNullElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetElementsOfType<FRigNullElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f42c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigReferenceElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetElementsOfType<FRigReferenceElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f42d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigSocketElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetElementsOfType<FRigSocketElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f42e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetFilteredElements<FRigBaseElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetFilteredElements<FRigBaseElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f42f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetFilteredElements<FRigControlElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetFilteredElements<FRigControlElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f4300

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchyController::AddDefaultRootSocket'::__l5::<lambda_1>,bool,FRigBoneElement_*>
::Call(void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `URigHierarchyController::AddDefaultRootSocket'::__l5::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f4310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::Execute_Internal'::__l5::<lambda_1>,bool,FRigBoneElement_*>::Call
          (void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UFKControlRig::Execute_Internal'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f4320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigDependenciesProviderForControlRig::GetRigHierarchyDependencies'::__l5::<lambda_1>,bool,FRigModuleInstance_const_*>
::Call(void *param_1,FRigModuleInstance **param_2)

{
  UControlRig *this;
  
  this = FRigModuleInstance::GetRig(*param_2);
  if (this != (UControlRig *)0x0) {
    URigVMHost::GetVM((URigVMHost *)this);
  }
  return true;
}

// Call @ 14a2f4350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::ShrinkElementStorage'::__l5::<lambda_1>,void,FRigTransformElement_*,enum_ERigTransformType::Type,enum_ERigTransformStorageType::Type,FRigComputedTransform_*,FRigTransformDirtyState_*>
::Call(void *param_1,FRigTransformElement **param_2,Type *param_3,Type *param_4,
      FRigComputedTransform **param_5,FRigTransformDirtyState **param_6)

{
  `URigHierarchy::ShrinkElementStorage'::__l5::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 14a2f4380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAdditiveControlRig::CreateRigElements'::__l8::<lambda_1>,void,FName,FCurveMetaData_const_&>
::Call(void *param_1,FName *param_2,FCurveMetaData *param_3)

{
  FRigElementKey local_18 [2];
  
  URigHierarchyController::AddCurve
            (*(URigHierarchyController **)param_1,local_18,*param_2,0.0,false,false);
  return;
}

// Call @ 14a2f43b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::ResetPoseToInitial'::__l8::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::ResetPoseToInitial'::__l8::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f43c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  ``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f43d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::CreateRigElements'::__l10::<lambda_1>,void,FName,FCurveMetaData_const_&>
::Call(void *param_1,FName *param_2,FCurveMetaData *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = ::FName::GetStringLength(param_2);
  piVar1 = *(int **)param_1;
  iVar3 = uVar2 + 0xe;
  if ((int)(uVar2 + 0xe) < *piVar1) {
    iVar3 = *piVar1;
  }
  *piVar1 = iVar3;
  return;
}

// Call @ 14a2f4400

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetActiveChildren'::__l10::<lambda_1>,bool,FRigBaseElement_*>::
Call(void *param_1,FRigBaseElement **param_2)

{
  ERigElementType EVar1;
  FRigBaseElement *pFVar2;
  
  EVar1 = ((*param_2)->Key).Type;
  if ((EVar1 & Reference) != EVar1) {
    pFVar2 = URigHierarchy::GetActiveParent(*(URigHierarchy **)param_1,*param_2);
    if (pFVar2 == (FRigBaseElement *)0x0) {
      return true;
    }
  }
  return false;
}

// Call @ 14a2f4440

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::SetApplyMode'::__l11::<lambda_1>,bool,FRigControlElement_*>::Call
          (void *param_1,FRigControlElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UFKControlRig::SetApplyMode'::__l11::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f4450

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAdditiveControlRig::Execute_Internal'::__l13::<lambda_1>,bool,FRigBoneElement_*>
::Call(void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UAdditiveControlRig::Execute_Internal'::__l13::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f4460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,void,FRigElementResolveResult_&>
::Call(void *param_1,FRigElementResolveResult *param_2)

{
  undefined8 uVar1;
  URigHierarchy *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRigBaseElement *pFVar5;
  undefined8 *puVar6;
  undefined1 auStack_28 [16];
  longlong *plStack_18;
  
  this = *(URigHierarchy **)((longlong)param_1 + 8);
  iVar4 = URigHierarchy::GetIndex(this,&param_2->Key,true);
  pFVar5 = URigHierarchy::Get(this,iVar4);
  if (pFVar5 == (FRigBaseElement *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRigRuleManager.cpp"
                       ,0x11a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar6 = (undefined8 *)
           (**(code **)(**(longlong **)param_1 + 0x10))
                     (*(longlong **)param_1,auStack_28,pFVar5,(longlong)param_1 + 8);
  uVar1 = *puVar6;
  (param_2->Key).Type = (char)uVar1;
  *(int3 *)&(param_2->Key).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (param_2->Key).Name.ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar1 >> 0x20);
  (param_2->Key).Name.Number = *(uint *)(puVar6 + 1);
  param_2->State = *(ERigElementResolveState *)((longlong)puVar6 + 0xc);
  FText::operator=(&param_2->Message,(FText *)(puVar6 + 2));
  if (plStack_18 != (longlong *)0x0) {
    (**(code **)(*plStack_18 + 0x10))();
  }
  return;
}

// Call @ 14a2f4470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigElementKeyCollection::MakeFromName'::__l15::<lambda_1>,bool,FRigBaseElement_const_&>
::Call(void *param_1,FRigBaseElement *param_2)

{
  ERigElementType EVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  EVar1 = (param_2->Key).Type;
  if ((*(ERigElementType *)((longlong)param_1 + 0x10) & EVar1) == EVar1) {
    pFVar3 = FRigBaseElement::GetName(param_2);
    pwVar4 = L"";
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    if (*(int *)((longlong)param_1 + 8) != 0) {
      pwVar4 = *(wchar_t **)param_1;
    }
    bVar2 = FWildcardString::IsMatch(pwVar4,pwVar5);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// Call @ 14a2f44d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_2>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_2>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f44e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetKeysByPredicate'::__l2::<lambda_2>,void,FRigBaseElement_const_&>
::Call(void *param_1,FRigBaseElement *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 14a2f44f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetSafeNewDisplayName'::__l2::<lambda_2>,bool,FName_const_&>::
Call(void *param_1,FName *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  FString *pFVar6;
  FString *pFVar7;
  undefined4 uStack_3c;
  TStringView<wchar_t> TStack_38;
  FString FStack_28;
  
  pFVar6 = (FString *)**(longlong **)((longlong)param_1 + 8);
  pFVar7 = pFVar6 + (int)(*(longlong **)((longlong)param_1 + 8))[1];
  while( true ) {
    if (pFVar6 == pFVar7) {
      return true;
    }
    pFVar4 = ::FString::FString(&FStack_28,pFVar6);
    TStack_38.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    TStack_38._12_4_ = uStack_3c;
    TStack_38.Size = iVar5;
    bVar3 = ::FName::Equals(*param_2,&TStack_38);
    pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (bVar3) break;
    pFVar6 = pFVar6 + 1;
  }
  return false;
}

// Call @ 14a2f4500

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigElementKeyCollection::MakeFromName'::__l2::<lambda_2>,bool,FRigBaseElement_const_&>
::Call(void *param_1,FRigBaseElement *param_2)

{
  ERigElementType EVar1;
  int iVar2;
  FString *this;
  size_t sVar3;
  wchar_t *_Str;
  
  EVar1 = (param_2->Key).Type;
  if ((*(ERigElementType *)((longlong)param_1 + 0x10) & EVar1) == EVar1) {
    this = FRigBaseElement::GetName(param_2);
    if (*(int *)((longlong)param_1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)param_1;
      if (_Str == (wchar_t *)0x0) {
        return false;
      }
    }
    sVar3 = wcslen(_Str);
    iVar2 = ::FString::Find(this,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
    if (iVar2 != -1) {
      return true;
    }
  }
  return false;
}

// Call @ 14a2f4510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::SortElementStorage'::__l2::<lambda_2>,void,FRigTransformElement_*,enum_ERigTransformType::Type,enum_ERigTransformStorageType::Type,FRigComputedTransform_*,FRigTransformDirtyState_*>
::Call(void *param_1,FRigTransformElement **param_2,Type *param_3,Type *param_4,
      FRigComputedTransform **param_5,FRigTransformDirtyState **param_6)

{
  `URigHierarchy::SortElementStorage'::__l2::<lambda_2>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 14a2f4540

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAdditiveControlRig::CreateRigElements'::__l5::<lambda_2>,bool,FRigBoneElement_*>
::Call(void *param_1,FRigBoneElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UAdditiveControlRig::CreateRigElements'::__l5::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f4550

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::Execute_Internal'::__l5::<lambda_2>,bool,FRigCurveElement_*>::
Call(void *param_1,FRigCurveElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UFKControlRig::Execute_Internal'::__l5::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f4560

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetAnimationChannels'::__l8::<lambda_2>,bool,FRigControlElement_*>
::Call(void *param_1,FRigControlElement **param_2)

{
  FScriptContainerElement *pFVar1;
  FRigControlElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = *param_2;
  if ((pFVar2->Settings).AnimationType == AnimationChannel) {
    pFVar3 = (pFVar2->Settings).Customization.AvailableSpaces.AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)(pFVar2->Settings).Customization.AvailableSpaces.ArrayNum * 0x14;
    if (pFVar3 != pFVar1) {
      do {
        if ((*(longlong *)(*(longlong *)param_1 + 0x14) == *(longlong *)(pFVar3 + 4)) &&
           (*(FScriptContainerElement *)(*(longlong *)param_1 + 0x10) == *pFVar3)) {
          return true;
        }
        pFVar3 = pFVar3 + 0x14;
      } while (pFVar3 != pFVar1);
    }
  }
  return false;
}

// Call @ 14a2f45c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::CreateRigElements'::__l26::<lambda_2>,void,FName,FCurveMetaData_const_&>
::Call(void *param_1,FName *param_2,FCurveMetaData *param_3)

{
  FRigElementKey local_18 [2];
  
  URigHierarchyController::AddCurve
            (*(URigHierarchyController **)param_1,local_18,*param_2,0.0,false,false);
  return;
}

// Call @ 14a2f45f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetActiveChildren'::__l12::<lambda_2>,bool,FRigBaseElement_*>::
Call(void *param_1,FRigBaseElement **param_2)

{
  ERigElementType EVar1;
  FRigBaseElement *pFVar2;
  
  EVar1 = ((*param_2)->Key).Type;
  if ((EVar1 & Reference) != EVar1) {
    pFVar2 = URigHierarchy::GetActiveParent(*(URigHierarchy **)param_1,*param_2);
    if (pFVar2 == (FRigBaseElement *)0x0) {
      return true;
    }
  }
  return false;
}

// Call @ 14a2f4630

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::SetApplyMode'::__l13::<lambda_2>,bool,FRigControlElement_*>::Call
          (void *param_1,FRigControlElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UFKControlRig::SetApplyMode'::__l13::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f4640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetKeysByPredicate'::__l2::<lambda_3>,void,FRigBaseElement_const_&>
::Call(void *param_1,FRigBaseElement *param_2)

{
  FRigElementKey *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pFVar3 = *(ForAnyElementType **)param_1;
  pFVar1 = &param_2->Key;
  if ((pFVar3->Data <= pFVar1) &&
     (pFVar1 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0xc)) {
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
  iVar7 = *(int *)&pFVar3[1].Data;
  piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar7 == *piVar2) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar3,piVar2);
  }
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  pFVar4 = pFVar3->Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = *(undefined8 *)pFVar1;
  *(uint *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = (param_2->Key).Name.Number;
  return;
}

// Call @ 14a2f4650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::SortElementStorage'::__l2::<lambda_3>,void,FRigTransformElement_*,enum_ERigTransformType::Type,enum_ERigTransformStorageType::Type,FRigComputedTransform_*,FRigTransformDirtyState_*>
::Call(void *param_1,FRigTransformElement **param_2,Type *param_3,Type *param_4,
      FRigComputedTransform **param_5,FRigTransformDirtyState **param_6)

{
  `URigHierarchy::SortElementStorage'::__l2::<lambda_3>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 14a2f4680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::Execute_Internal'::__l9::<lambda_3>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `UFKControlRig::Execute_Internal'::__l9::<lambda_3>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14a2f4690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::SortElementStorage'::__l2::<lambda_4>,void,FRigTransformElement_*,enum_ERigTransformType::Type,enum_ERigTransformStorageType::Type,FRigComputedTransform_*,FRigTransformDirtyState_*>
::Call(void *param_1,FRigTransformElement **param_2,Type *param_3,Type *param_4,
      FRigComputedTransform **param_5,FRigTransformDirtyState **param_6)

{
  `URigHierarchy::SortElementStorage'::__l2::<lambda_4>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 14a2f46c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::Execute_Internal'::__l9::<lambda_4>,bool,FRigCurveElement_*>::
Call(void *param_1,FRigCurveElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UFKControlRig::Execute_Internal'::__l9::<lambda_4>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a2f46d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::CreateRigElements'::__l41::<lambda_4>,bool,FRigBoneElement_*>::
Call(void *param_1,FRigBoneElement **param_2)

{
  `UFKControlRig::CreateRigElements'::__l29::<lambda_3>::operator()(*(void **)param_1,*param_2);
  return true;
}

// Call @ 14a2f46f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFKControlRig::CreateRigElements'::__l44::<lambda_5>,bool,FRigCurveElement_*>::
Call(void *param_1,FRigCurveElement **param_2)

{
  bool bVar1;
  
  bVar1 = `UFKControlRig::CreateRigElements'::__l44::<lambda_5>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a3efd30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l46::<lambda_10>,void>
::Call(void *param_1)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  
  _Src = *(void **)((longlong)param_1 + 8);
  _Dst = *(void **)((longlong)param_1 + 0x38);
  plVar1 = *(longlong **)param_1;
  if (_Dst == _Src) {
    return;
  }
  if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) != 0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a3efd6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf0))(plVar1,_Dst,_Src,(int)plVar1[6]);
  return;
}

// Call @ 14a3efd80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l46::<lambda_10>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l46::<lambda_10>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3efda0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l53::<lambda_11>,void>
::Call(void *param_1)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  
  _Src = *(void **)((longlong)param_1 + 8);
  _Dst = *(void **)((longlong)param_1 + 0x38);
  plVar1 = *(longlong **)param_1;
  if (_Dst == _Src) {
    return;
  }
  if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) != 0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a3efddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf0))(plVar1,_Dst,_Src,(int)plVar1[6]);
  return;
}

// Call @ 14a3efdf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l53::<lambda_11>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l53::<lambda_11>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3efe10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l60::<lambda_12>,void>
::Call(void *param_1)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  
  _Src = *(void **)((longlong)param_1 + 8);
  _Dst = *(void **)((longlong)param_1 + 0x38);
  plVar1 = *(longlong **)param_1;
  if (_Dst == _Src) {
    return;
  }
  if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) != 0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a3efe4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf0))(plVar1,_Dst,_Src,(int)plVar1[6]);
  return;
}

// Call @ 14a3efe60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l60::<lambda_12>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l60::<lambda_12>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3efe80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l67::<lambda_13>,void>
::Call(void *param_1)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  
  _Src = *(void **)((longlong)param_1 + 8);
  _Dst = *(void **)((longlong)param_1 + 0x38);
  plVar1 = *(longlong **)param_1;
  if (_Dst == _Src) {
    return;
  }
  if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) != 0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a3efebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf0))(plVar1,_Dst,_Src,(int)plVar1[6]);
  return;
}

// Call @ 14a3efed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l67::<lambda_13>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l67::<lambda_13>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3efef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>::ScheduleImpl<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::FInstanceRegistry_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14a3eff20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>::ScheduleImpl<UE::MovieScene::FEvaluateControlRigSpaceChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14a3eff50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::FAccumulatedControlRigValues_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14a3eff80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>::ScheduleImpl<UE::MovieScene::FResetDoNotKey>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>
  ::ScheduleImpl<UE::MovieScene::FResetDoNotKey>'::__l2::<lambda_1>::operator()
            (param_1,&local_18,param_3);
  return;
}

// Call @ 14a3effb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigTransformElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `URigHierarchy::GetElementsOfType<FRigTransformElement>'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a3effc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  FRigVMExternalVariable::SetValue<bool>
            ((FRigVMExternalVariable *)((longlong)param_1 + 8),*(bool **)param_1);
  return;
}

// Call @ 14a3effe0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l5::<lambda_1>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l5::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0000

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
::Call(void *param_1,TRigVMTypeIndex *param_2,FRigVMRegistryHandle *param_3)

{
  bool bVar1;
  
  bVar1 = FRigDispatch_AnimAttributeBase::IsTypeSupported
                    (*(FRigDispatch_AnimAttributeBase **)param_1,param_2,param_3);
  return bVar1;
}

// Call @ 14a3f0010

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigDispatch_SetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
::Call(void *param_1,TRigVMTypeIndex *param_2,FRigVMRegistryHandle *param_3)

{
  bool bVar1;
  
  bVar1 = FRigDispatch_AnimAttributeBase::IsTypeSupported
                    (*(FRigDispatch_AnimAttributeBase **)param_1,param_2,param_3);
  return bVar1;
}

// Call @ 14a3f0020

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l8::<lambda_1>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l8::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l8::<lambda_1>,void>::
Call(void *param_1)

{
  FRigControlValue FStack_98;
  
  FStack_98.FloatStorage.Float02 = 0.0;
  FStack_98.FloatStorage.Float03 = 0.0;
  FStack_98.FloatStorage.Float10 = 0.0;
  FStack_98.FloatStorage.Float11 = 0.0;
  FStack_98.FloatStorage.Float12 = 0.0;
  FStack_98.FloatStorage.Float13 = 0.0;
  FStack_98.FloatStorage.Float20 = 0.0;
  FStack_98.FloatStorage.Float21 = 0.0;
  FStack_98.FloatStorage.Float22 = 0.0;
  FStack_98.FloatStorage.Float23 = 0.0;
  FStack_98.FloatStorage.Float30 = 0.0;
  FStack_98.FloatStorage.Float31 = 0.0;
  FStack_98.FloatStorage.Float32 = 0.0;
  FStack_98.FloatStorage.Float33 = 0.0;
  FStack_98.FloatStorage.Float00_2 = 0.0;
  FStack_98.FloatStorage.Float01_2 = 0.0;
  FStack_98.FloatStorage.Float02_2 = 0.0;
  FStack_98.FloatStorage.Float03_2 = 0.0;
  FStack_98.FloatStorage.bValid = true;
  FStack_98.FloatStorage._129_3_ = 0;
  FStack_98.FloatStorage.Float10_2 = 0.0;
  FStack_98.FloatStorage.Float11_2 = 0.0;
  FStack_98.FloatStorage.Float12_2 = 0.0;
  FStack_98.FloatStorage.Float13_2 = 0.0;
  FStack_98.FloatStorage.Float20_2 = 0.0;
  FStack_98.FloatStorage.Float21_2 = 0.0;
  FStack_98.FloatStorage.Float22_2 = 0.0;
  FStack_98.FloatStorage.Float23_2 = 0.0;
  FStack_98.FloatStorage.Float30_2 = 0.0;
  FStack_98.FloatStorage.Float31_2 = 0.0;
  FStack_98.FloatStorage.Float32_2 = 0.0;
  FStack_98.FloatStorage.Float33_2 = 0.0;
  FStack_98.FloatStorage._1_7_ = 0;
  FStack_98.FloatStorage.Float00._0_1_ = **(byte **)param_1;
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)param_1 + 8),
             *(FRigControlElement **)((longlong)param_1 + 0x10),&FStack_98,Current,false,false,false
             ,false);
  return;
}

// Call @ 14a3f0050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneControlRigParameterSection::RecreateWithThisControlRig'::__l24::<lambda_1>,void,FBaseParameterNameAndValue_*>
::Call(void *param_1,FBaseParameterNameAndValue **param_2)

{
  FName *pFVar1;
  longlong lVar2;
  
  pFVar1 = &(*param_2)->ParameterName;
  lVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x3c8))
                    (*(longlong **)((longlong)param_1 + 8),pFVar1);
  if ((lVar2 != 0) && (*(FName *)(lVar2 + 0x14) != *pFVar1)) {
    *pFVar1 = *(FName *)(lVar2 + 0x14);
  }
  return;
}

// Call @ 14a3f0090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneControlRigParameterTrack::RenameParameterName'::__l12::<lambda_1>,void,FBaseParameterNameAndValue_*>
::Call(void *param_1,FBaseParameterNameAndValue **param_2)

{
  if ((*param_2)->ParameterName == *(FName *)param_1) {
    (*param_2)->ParameterName = *(FName *)((longlong)param_1 + 8);
    **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  }
  return;
}

// Call @ 14a3f00b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_2>,bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
::Call(void *param_1,TRigVMTypeIndex *param_2,FRigVMRegistryHandle *param_3)

{
  bool bVar1;
  
  bVar1 = FRigDispatch_AnimAttributeBase::IsTypeSupported
                    (*(FRigDispatch_AnimAttributeBase **)param_1,param_2,param_3);
  return bVar1;
}

// Call @ 14a3f00c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l9::<lambda_2>,void>::
Call(void *param_1)

{
  FRigControlValue FStack_98;
  
  FStack_98.FloatStorage.Float02 = 0.0;
  FStack_98.FloatStorage.Float03 = 0.0;
  FStack_98.FloatStorage.Float10 = 0.0;
  FStack_98.FloatStorage.Float11 = 0.0;
  FStack_98.FloatStorage.Float12 = 0.0;
  FStack_98.FloatStorage.Float13 = 0.0;
  FStack_98.FloatStorage.Float20 = 0.0;
  FStack_98.FloatStorage.Float21 = 0.0;
  FStack_98.FloatStorage.Float22 = 0.0;
  FStack_98.FloatStorage.Float23 = 0.0;
  FStack_98.FloatStorage.Float30 = 0.0;
  FStack_98.FloatStorage.Float31 = 0.0;
  FStack_98.FloatStorage.Float32 = 0.0;
  FStack_98.FloatStorage.Float33 = 0.0;
  FStack_98.FloatStorage.Float00_2 = 0.0;
  FStack_98.FloatStorage.Float01_2 = 0.0;
  FStack_98.FloatStorage.Float02_2 = 0.0;
  FStack_98.FloatStorage.Float03_2 = 0.0;
  FStack_98.FloatStorage.bValid = true;
  FStack_98.FloatStorage._129_3_ = 0;
  FStack_98.FloatStorage.Float10_2 = 0.0;
  FStack_98.FloatStorage.Float11_2 = 0.0;
  FStack_98.FloatStorage.Float12_2 = 0.0;
  FStack_98.FloatStorage.Float13_2 = 0.0;
  FStack_98.FloatStorage.Float20_2 = 0.0;
  FStack_98.FloatStorage.Float21_2 = 0.0;
  FStack_98.FloatStorage.Float22_2 = 0.0;
  FStack_98.FloatStorage.Float23_2 = 0.0;
  FStack_98.FloatStorage.Float30_2 = 0.0;
  FStack_98.FloatStorage.Float31_2 = 0.0;
  FStack_98.FloatStorage.Float32_2 = 0.0;
  FStack_98.FloatStorage.Float33_2 = 0.0;
  FStack_98.FloatStorage.Float01 = 0.0;
  FStack_98.FloatStorage.Float00 = (float)**(uint **)param_1;
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)param_1 + 8),
             *(FRigControlElement **)((longlong)param_1 + 0x10),&FStack_98,Current,false,false,false
             ,false);
  return;
}

// Call @ 14a3f00d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigHierarchyMappings::UpdateOutput'::__l88::<lambda_2>,bool,FRigCurveElement_*>
::Call(void *param_1,FRigCurveElement **param_2)

{
  FRigCurveElement *this;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this_00;
  float *pfVar1;
  
  this = *param_2;
  if (this->bIsValueSet != false) {
    this_00 = *(TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> **)param_1;
    pfVar1 = FRigCurveElement::Get(this);
    Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
    Add<FName_const_&,float_const_&>(this_00,(FName *)((longlong)&this->_padding_ + 4),pfVar1);
  }
  return true;
}

// Call @ 14a3f0120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l12::<lambda_2>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l12::<lambda_2>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0140

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l12::<lambda_2>,void>
::Call(void *param_1)

{
  FRigVMExternalVariable::SetValue<float>
            ((FRigVMExternalVariable *)((longlong)param_1 + 8),*(float **)param_1);
  return;
}

// Call @ 14a3f0160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l12::<lambda_2>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l12::<lambda_2>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l10::<lambda_3>,void>
::Call(void *param_1)

{
  FRigControlValue FStack_98;
  
  FStack_98.FloatStorage.Float02 = 0.0;
  FStack_98.FloatStorage.Float03 = 0.0;
  FStack_98.FloatStorage.Float10 = 0.0;
  FStack_98.FloatStorage.Float11 = 0.0;
  FStack_98.FloatStorage.Float12 = 0.0;
  FStack_98.FloatStorage.Float13 = 0.0;
  FStack_98.FloatStorage.Float20 = 0.0;
  FStack_98.FloatStorage.Float21 = 0.0;
  FStack_98.FloatStorage.Float22 = 0.0;
  FStack_98.FloatStorage.Float23 = 0.0;
  FStack_98.FloatStorage.Float30 = 0.0;
  FStack_98.FloatStorage.Float31 = 0.0;
  FStack_98.FloatStorage.Float32 = 0.0;
  FStack_98.FloatStorage.Float33 = 0.0;
  FStack_98.FloatStorage.Float00_2 = 0.0;
  FStack_98.FloatStorage.Float01_2 = 0.0;
  FStack_98.FloatStorage.Float02_2 = 0.0;
  FStack_98.FloatStorage.Float03_2 = 0.0;
  FStack_98.FloatStorage.bValid = true;
  FStack_98.FloatStorage._129_3_ = 0;
  FStack_98.FloatStorage.Float10_2 = 0.0;
  FStack_98.FloatStorage.Float11_2 = 0.0;
  FStack_98.FloatStorage.Float12_2 = 0.0;
  FStack_98.FloatStorage.Float13_2 = 0.0;
  FStack_98.FloatStorage.Float20_2 = 0.0;
  FStack_98.FloatStorage.Float21_2 = 0.0;
  FStack_98.FloatStorage.Float22_2 = 0.0;
  FStack_98.FloatStorage.Float23_2 = 0.0;
  FStack_98.FloatStorage.Float30_2 = 0.0;
  FStack_98.FloatStorage.Float31_2 = 0.0;
  FStack_98.FloatStorage.Float32_2 = 0.0;
  FStack_98.FloatStorage.Float33_2 = 0.0;
  FStack_98.FloatStorage.Float01 = 0.0;
  FStack_98.FloatStorage.Float00 = (float)**(uint **)param_1;
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)param_1 + 8),
             *(FRigControlElement **)((longlong)param_1 + 0x10),&FStack_98,Current,false,false,false
             ,false);
  return;
}

// Call @ 14a3f0190

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l16::<lambda_3>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l16::<lambda_3>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f01b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l14::<lambda_3>,void>
::Call(void *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  
  fVar1 = **(float **)param_1;
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)param_1 + 8));
  if (((((!bVar3) || (*(longlong *)((longlong)param_1 + 8) == 0)) ||
       (bVar3 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)param_1 + 0x18)), !bVar3))
      || (((*(longlong *)((longlong)param_1 + 0x18) == 0 ||
           (*(longlong *)((longlong)param_1 + 0x30) == 0)) ||
          (*(char *)((longlong)param_1 + 0x28) != '\0')))) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2446534962325749315>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                         ,0x1bd,"IsValid() && !bIsArray"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  **(double **)((longlong)param_1 + 0x30) = (double)fVar1;
  return;
}

// Call @ 14a3f01c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l14::<lambda_3>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l14::<lambda_3>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f01e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l21::<lambda_4>,void>
::Call(void *param_1)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  
  dVar1 = **(double **)param_1;
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)param_1 + 8));
  if (((((!bVar3) || (*(longlong *)((longlong)param_1 + 8) == 0)) ||
       (bVar3 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)param_1 + 0x18)), !bVar3))
      || (((*(longlong *)((longlong)param_1 + 0x18) == 0 ||
           (*(longlong *)((longlong)param_1 + 0x30) == 0)) ||
          (*(char *)((longlong)param_1 + 0x28) != '\0')))) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2446534962325749315>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                         ,0x1bd,"IsValid() && !bIsArray"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  **(float **)((longlong)param_1 + 0x30) = (float)dVar1;
  return;
}

// Call @ 14a3f01f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l21::<lambda_4>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l21::<lambda_4>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l23::<lambda_4>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l23::<lambda_4>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0230

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l11::<lambda_4>,void>
::Call(void *param_1)

{
  FRigControlValue FStack_98;
  
  FStack_98.FloatStorage.Float10 = 0.0;
  FStack_98.FloatStorage.Float11 = 0.0;
  FStack_98.FloatStorage.Float12 = 0.0;
  FStack_98.FloatStorage.Float13 = 0.0;
  FStack_98.FloatStorage.Float20 = 0.0;
  FStack_98.FloatStorage.Float21 = 0.0;
  FStack_98.FloatStorage.Float22 = 0.0;
  FStack_98.FloatStorage.Float23 = 0.0;
  FStack_98.FloatStorage.Float30 = 0.0;
  FStack_98.FloatStorage.Float31 = 0.0;
  FStack_98.FloatStorage.Float32 = 0.0;
  FStack_98.FloatStorage.Float33 = 0.0;
  FStack_98.FloatStorage.Float00_2 = 0.0;
  FStack_98.FloatStorage.Float01_2 = 0.0;
  FStack_98.FloatStorage.Float02_2 = 0.0;
  FStack_98.FloatStorage.Float03_2 = 0.0;
  FStack_98.FloatStorage.bValid = true;
  FStack_98.FloatStorage._129_3_ = 0;
  FStack_98.FloatStorage.Float10_2 = 0.0;
  FStack_98.FloatStorage.Float11_2 = 0.0;
  FStack_98.FloatStorage.Float12_2 = 0.0;
  FStack_98.FloatStorage.Float13_2 = 0.0;
  FStack_98.FloatStorage.Float20_2 = 0.0;
  FStack_98.FloatStorage.Float21_2 = 0.0;
  FStack_98.FloatStorage.Float22_2 = 0.0;
  FStack_98.FloatStorage.Float23_2 = 0.0;
  FStack_98.FloatStorage.Float30_2 = 0.0;
  FStack_98.FloatStorage.Float31_2 = 0.0;
  FStack_98.FloatStorage.Float32_2 = 0.0;
  FStack_98.FloatStorage.Float33_2 = 0.0;
  FStack_98.FloatStorage.Float02 = 0.0;
  FStack_98.FloatStorage.Float03 = 0.0;
  FStack_98.FloatStorage.Float01 = (float)(*(double **)param_1)[1];
  FStack_98.FloatStorage.Float00 = (float)**(double **)param_1;
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)param_1 + 8),
             *(FRigControlElement **)((longlong)param_1 + 0x10),&FStack_98,Current,false,false,false
             ,false);
  return;
}

// Call @ 14a3f0240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l23::<lambda_5>,void>
::Call(void *param_1)

{
  FRigVMExternalVariable::SetValue<double>
            ((FRigVMExternalVariable *)((longlong)param_1 + 8),*(double **)param_1);
  return;
}

// Call @ 14a3f0260

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l23::<lambda_5>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l23::<lambda_5>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l30::<lambda_5>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l30::<lambda_5>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f02a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l12::<lambda_5>,void>
::Call(void *param_1)

{
  double *pdVar1;
  FRigControlValue FStack_b8;
  
  pdVar1 = *(double **)param_1;
  FStack_b8.FloatStorage.Float10 = 0.0;
  FStack_b8.FloatStorage.Float11 = 0.0;
  FStack_b8.FloatStorage.Float12 = 0.0;
  FStack_b8.FloatStorage.Float13 = 0.0;
  FStack_b8.FloatStorage.Float20 = 0.0;
  FStack_b8.FloatStorage.Float21 = 0.0;
  FStack_b8.FloatStorage.Float22 = 0.0;
  FStack_b8.FloatStorage.Float23 = 0.0;
  FStack_b8.FloatStorage.Float30 = 0.0;
  FStack_b8.FloatStorage.Float31 = 0.0;
  FStack_b8.FloatStorage.Float32 = 0.0;
  FStack_b8.FloatStorage.Float33 = 0.0;
  FStack_b8.FloatStorage.Float00_2 = 0.0;
  FStack_b8.FloatStorage.Float01_2 = 0.0;
  FStack_b8.FloatStorage.Float02_2 = 0.0;
  FStack_b8.FloatStorage.Float03_2 = 0.0;
  FStack_b8.FloatStorage.bValid = true;
  FStack_b8.FloatStorage._129_3_ = 0;
  FStack_b8.FloatStorage.Float10_2 = 0.0;
  FStack_b8.FloatStorage.Float11_2 = 0.0;
  FStack_b8.FloatStorage.Float12_2 = 0.0;
  FStack_b8.FloatStorage.Float13_2 = 0.0;
  FStack_b8.FloatStorage.Float20_2 = 0.0;
  FStack_b8.FloatStorage.Float21_2 = 0.0;
  FStack_b8.FloatStorage.Float22_2 = 0.0;
  FStack_b8.FloatStorage.Float23_2 = 0.0;
  FStack_b8.FloatStorage.Float30_2 = 0.0;
  FStack_b8.FloatStorage.Float31_2 = 0.0;
  FStack_b8.FloatStorage.Float32_2 = 0.0;
  FStack_b8.FloatStorage.Float33_2 = 0.0;
  FStack_b8.FloatStorage.Float01 = (float)pdVar1[1];
  FStack_b8.FloatStorage.Float00 = (float)*pdVar1;
  FStack_b8.FloatStorage.Float03 = 0.0;
  FStack_b8.FloatStorage.Float02 = (float)pdVar1[2];
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)param_1 + 8),
             *(FRigControlElement **)((longlong)param_1 + 0x10),&FStack_b8,Current,false,false,false
             ,false);
  return;
}

// Call @ 14a3f02b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l27::<lambda_6>,void>
::Call(void *param_1)

{
  FRigVMExternalVariable::SetValue<int>
            ((FRigVMExternalVariable *)((longlong)param_1 + 8),*(int **)param_1);
  return;
}

// Call @ 14a3f02d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l27::<lambda_6>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l27::<lambda_6>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f02f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l37::<lambda_6>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l37::<lambda_6>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0310

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l13::<lambda_6>,void>
::Call(void *param_1)

{
  double *pdVar1;
  URigHierarchy *this;
  FRigControlElement *pFVar2;
  TVector<double> *pTVar3;
  TRotator<double> TStack_d8;
  FRigControlValue FStack_b8;
  TVector<double> TStack_28;
  
  pdVar1 = *(double **)param_1;
  this = *(URigHierarchy **)((longlong)param_1 + 8);
  pFVar2 = *(FRigControlElement **)((longlong)param_1 + 0x10);
  TStack_d8.Pitch = *pdVar1;
  TStack_d8.Yaw = pdVar1[1];
  TStack_d8.Roll = pdVar1[2];
  pTVar3 = UE::Math::TRotator<double>::Euler(&TStack_d8,&TStack_28);
  FStack_b8.FloatStorage.bValid = true;
  FStack_b8.FloatStorage._129_3_ = 0;
  FStack_b8.FloatStorage.Float01 = (float)(pTVar3->field0_0x0)._s_0.Y;
  FStack_b8.FloatStorage.Float00 = (float)(pTVar3->field0_0x0)._s_0.X;
  FStack_b8.FloatStorage.Float03 = 0.0;
  FStack_b8.FloatStorage.Float02 = (float)(pTVar3->field0_0x0)._s_0.Z;
  FStack_b8.FloatStorage.Float10 = 0.0;
  FStack_b8.FloatStorage.Float11 = 0.0;
  FStack_b8.FloatStorage.Float12 = 0.0;
  FStack_b8.FloatStorage.Float13 = 0.0;
  FStack_b8.FloatStorage.Float20 = 0.0;
  FStack_b8.FloatStorage.Float21 = 0.0;
  FStack_b8.FloatStorage.Float22 = 0.0;
  FStack_b8.FloatStorage.Float23 = 0.0;
  FStack_b8.FloatStorage.Float30 = 0.0;
  FStack_b8.FloatStorage.Float31 = 0.0;
  FStack_b8.FloatStorage.Float32 = 0.0;
  FStack_b8.FloatStorage.Float33 = 0.0;
  FStack_b8.FloatStorage.Float00_2 = 0.0;
  FStack_b8.FloatStorage.Float01_2 = 0.0;
  FStack_b8.FloatStorage.Float02_2 = 0.0;
  FStack_b8.FloatStorage.Float03_2 = 0.0;
  FStack_b8.FloatStorage.Float10_2 = 0.0;
  FStack_b8.FloatStorage.Float11_2 = 0.0;
  FStack_b8.FloatStorage.Float12_2 = 0.0;
  FStack_b8.FloatStorage.Float13_2 = 0.0;
  FStack_b8.FloatStorage.Float20_2 = 0.0;
  FStack_b8.FloatStorage.Float21_2 = 0.0;
  FStack_b8.FloatStorage.Float22_2 = 0.0;
  FStack_b8.FloatStorage.Float23_2 = 0.0;
  FStack_b8.FloatStorage.Float30_2 = 0.0;
  FStack_b8.FloatStorage.Float31_2 = 0.0;
  FStack_b8.FloatStorage.Float32_2 = 0.0;
  FStack_b8.FloatStorage.Float33_2 = 0.0;
  URigHierarchy::SetControlValue(this,pFVar2,&FStack_b8,Current,false,false,false,false);
  return;
}

// Call @ 14a3f0320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l31::<lambda_7>,void>
::Call(void *param_1)

{
  FRigVMExternalVariable::SetValue<FName>
            ((FRigVMExternalVariable *)((longlong)param_1 + 8),*(FName **)param_1);
  return;
}

// Call @ 14a3f0340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l31::<lambda_7>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l31::<lambda_7>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0360

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l44::<lambda_7>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l44::<lambda_7>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l14::<lambda_7>,void>
::Call(void *param_1)

{
  double *pdVar1;
  FRigControlValue FStack_a8;
  
  pdVar1 = *(double **)param_1;
  FStack_a8.FloatStorage.Float30 = 0.0;
  FStack_a8.FloatStorage.Float31 = 0.0;
  FStack_a8.FloatStorage.Float32 = 0.0;
  FStack_a8.FloatStorage.Float33 = 0.0;
  FStack_a8.FloatStorage.Float00_2 = 0.0;
  FStack_a8.FloatStorage.Float01_2 = 0.0;
  FStack_a8.FloatStorage.Float02_2 = 0.0;
  FStack_a8.FloatStorage.Float03_2 = 0.0;
  FStack_a8.FloatStorage.Float10_2 = 0.0;
  FStack_a8.FloatStorage.Float11_2 = 0.0;
  FStack_a8.FloatStorage.Float12_2 = 0.0;
  FStack_a8.FloatStorage.Float13_2 = 0.0;
  FStack_a8.FloatStorage.Float20_2 = 0.0;
  FStack_a8.FloatStorage.Float21_2 = 0.0;
  FStack_a8.FloatStorage.Float22_2 = 0.0;
  FStack_a8.FloatStorage.Float23_2 = 0.0;
  FStack_a8.FloatStorage.Float30_2 = 0.0;
  FStack_a8.FloatStorage.Float31_2 = 0.0;
  FStack_a8.FloatStorage.Float32_2 = 0.0;
  FStack_a8.FloatStorage.Float33_2 = 0.0;
  FStack_a8.FloatStorage.bValid = true;
  FStack_a8.FloatStorage._129_3_ = 0;
  FStack_a8.FloatStorage.Float01 = (float)pdVar1[1];
  FStack_a8.FloatStorage.Float00 = (float)*pdVar1;
  FStack_a8.FloatStorage.Float03 = (float)pdVar1[3];
  FStack_a8.FloatStorage.Float02 = (float)pdVar1[2];
  FStack_a8.FloatStorage.Float11 = (float)pdVar1[5];
  FStack_a8.FloatStorage.Float10 = (float)pdVar1[4];
  FStack_a8.FloatStorage.Float13 = 0.0;
  FStack_a8.FloatStorage.Float12 = (float)pdVar1[6];
  FStack_a8.FloatStorage.Float21 = (float)pdVar1[9];
  FStack_a8.FloatStorage.Float20 = (float)pdVar1[8];
  FStack_a8.FloatStorage.Float23 = 0.0;
  FStack_a8.FloatStorage.Float22 = (float)pdVar1[10];
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)param_1 + 8),
             *(FRigControlElement **)((longlong)param_1 + 0x10),&FStack_a8,Current,false,false,false
             ,false);
  return;
}

// Call @ 14a3f0390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l35::<lambda_8>,void>
::Call(void *param_1)

{
  FRigVMExternalVariable::SetValue<FString>
            ((FRigVMExternalVariable *)((longlong)param_1 + 8),*(FString **)param_1);
  return;
}

// Call @ 14a3f03b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l35::<lambda_8>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l35::<lambda_8>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f03d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l51::<lambda_8>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l51::<lambda_8>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f03f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l15::<lambda_8>,void>
::Call(void *param_1)

{
  double *pdVar1;
  FRigControlValue FStack_d8;
  
  pdVar1 = *(double **)param_1;
  FStack_d8.FloatStorage.Float20 = 0.0;
  FStack_d8.FloatStorage.Float21 = 0.0;
  FStack_d8.FloatStorage.Float22 = 0.0;
  FStack_d8.FloatStorage.Float23 = 0.0;
  FStack_d8.FloatStorage.Float30 = 0.0;
  FStack_d8.FloatStorage.Float31 = 0.0;
  FStack_d8.FloatStorage.Float32 = 0.0;
  FStack_d8.FloatStorage.Float33 = 0.0;
  FStack_d8.FloatStorage.Float00_2 = 0.0;
  FStack_d8.FloatStorage.Float01_2 = 0.0;
  FStack_d8.FloatStorage.Float02_2 = 0.0;
  FStack_d8.FloatStorage.Float03_2 = 0.0;
  FStack_d8.FloatStorage.Float10_2 = 0.0;
  FStack_d8.FloatStorage.Float11_2 = 0.0;
  FStack_d8.FloatStorage.Float12_2 = 0.0;
  FStack_d8.FloatStorage.Float13_2 = 0.0;
  FStack_d8.FloatStorage.Float20_2 = 0.0;
  FStack_d8.FloatStorage.Float21_2 = 0.0;
  FStack_d8.FloatStorage.Float22_2 = 0.0;
  FStack_d8.FloatStorage.Float23_2 = 0.0;
  FStack_d8.FloatStorage.bValid = true;
  FStack_d8.FloatStorage._129_3_ = 0;
  FStack_d8.FloatStorage.Float30_2 = 0.0;
  FStack_d8.FloatStorage.Float31_2 = 0.0;
  FStack_d8.FloatStorage.Float32_2 = 0.0;
  FStack_d8.FloatStorage.Float33_2 = 0.0;
  FStack_d8.FloatStorage.Float01 = (float)pdVar1[1];
  FStack_d8.FloatStorage.Float00 = (float)*pdVar1;
  FStack_d8.FloatStorage.Float03 = (float)pdVar1[3];
  FStack_d8.FloatStorage.Float02 = (float)pdVar1[2];
  FStack_d8.FloatStorage.Float11 = (float)pdVar1[5];
  FStack_d8.FloatStorage.Float10 = (float)pdVar1[4];
  FStack_d8.FloatStorage.Float13 = 0.0;
  FStack_d8.FloatStorage.Float12 = (float)pdVar1[6];
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)param_1 + 8),
             *(FRigControlElement **)((longlong)param_1 + 0x10),&FStack_d8,Current,false,false,false
             ,false);
  return;
}

// Call @ 14a3f0400

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomControlFunction'::__l16::<lambda_9>,void>
::Call(void *param_1)

{
  double *pdVar1;
  FRigControlValue FStack_108;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  TRotator<double> aTStack_60 [2];
  TQuat<double> TStack_28;
  
  pdVar1 = *(double **)param_1;
  dStack_78 = pdVar1[4];
  dStack_70 = pdVar1[5];
  dStack_68 = pdVar1[6];
  TStack_28.Z = pdVar1[2];
  TStack_28.W = pdVar1[3];
  TStack_28.X = *pdVar1;
  TStack_28.Y = pdVar1[1];
  UE::Math::TQuat<double>::Rotator(&TStack_28,aTStack_60);
  FStack_108.FloatStorage.Float21 = 0.0;
  FStack_108.FloatStorage.Float22 = 0.0;
  FStack_108.FloatStorage.Float23 = 0.0;
  FStack_108.FloatStorage.Float30 = 0.0;
  FStack_108.FloatStorage.Float31 = 0.0;
  FStack_108.FloatStorage.Float32 = 0.0;
  FStack_108.FloatStorage.Float33 = 0.0;
  FStack_108.FloatStorage.Float00_2 = 0.0;
  FStack_108.FloatStorage.Float01_2 = 0.0;
  FStack_108.FloatStorage.Float02_2 = 0.0;
  FStack_108.FloatStorage.Float03_2 = 0.0;
  FStack_108.FloatStorage.Float10_2 = 0.0;
  FStack_108.FloatStorage.Float11_2 = 0.0;
  FStack_108.FloatStorage.Float12_2 = 0.0;
  FStack_108.FloatStorage.Float13_2 = 0.0;
  FStack_108.FloatStorage.Float20_2 = 0.0;
  FStack_108.FloatStorage.Float31_2 = 0.0;
  FStack_108.FloatStorage.Float32_2 = 0.0;
  FStack_108.FloatStorage.Float21_2 = 0.0;
  FStack_108.FloatStorage.Float22_2 = 0.0;
  FStack_108.FloatStorage.Float23_2 = 0.0;
  FStack_108.FloatStorage.Float30_2 = 0.0;
  FStack_108.FloatStorage.Float33_2 = 0.0;
  FStack_108.FloatStorage.Float00 = (float)aTStack_60[0].Pitch;
  FStack_108.FloatStorage._129_2_ = 0;
  FStack_108.FloatStorage._131_1_ = 0;
  FStack_108.FloatStorage.bValid = true;
  FStack_108.FloatStorage.Float01 = (float)aTStack_60[0].Yaw;
  FStack_108.FloatStorage.Float02 = (float)aTStack_60[0].Roll;
  FStack_108.FloatStorage.Float10 = (float)dStack_70;
  FStack_108.FloatStorage.Float03 = (float)dStack_78;
  FStack_108.FloatStorage.Float12 = (float)pdVar1[8];
  FStack_108.FloatStorage.Float13 = (float)pdVar1[9];
  FStack_108.FloatStorage.Float11 = (float)dStack_68;
  FStack_108.FloatStorage.Float20 = (float)pdVar1[10];
  URigHierarchy::SetControlValue
            (*(URigHierarchy **)((longlong)param_1 + 8),
             *(FRigControlElement **)((longlong)param_1 + 0x10),&FStack_108,Current,false,false,
             false,false);
  return;
}

// Call @ 14a3f0410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddCustomVariableFunction'::__l39::<lambda_9>,void>
::Call(void *param_1)

{
  UScriptStruct::CopyScriptStruct
            (*(UScriptStruct **)(*(longlong *)param_1 + 0x70),*(void **)((longlong)param_1 + 0x38),
             *(void **)((longlong)param_1 + 8),1);
  return;
}

// Call @ 14a3f0440

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddVariableFunction'::__l39::<lambda_9>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddVariableFunction'::__l39::<lambda_9>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a3f0460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FControlRigVariableMappings::AddControlFunction'::__l58::<lambda_9>,void,URigHierarchy_*,UObject_const_*>
::Call(void *param_1,URigHierarchy **param_2,UObject **param_3)

{
  `FControlRigVariableMappings::AddControlFunction'::__l58::<lambda_9>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14a51ee30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
::Call(void *param_1,TRigVMTypeIndex *param_2,FRigVMRegistryHandle *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a51ee3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14a51ee50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_FindItemsWithMetadata::StaticExecute'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  FRigBaseElement *this;
  FRigBaseMetadata *pFVar1;
  
  this = *param_2;
  pFVar1 = FRigBaseElement::GetMetadata
                     (this,(FName *)((longlong)param_1 + 0x10),
                      *(ERigMetadataType *)((longlong)param_1 + 0x18));
  if (pFVar1 != (FRigBaseMetadata *)0x0) {
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (*(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> **)param_1,&this->Key);
  }
  *param_3 = true;
  return;
}

// Call @ 14a51eeb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_FindItemsWithMetadataTag::StaticExecute'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `FRigUnit_FindItemsWithMetadataTag::StaticExecute'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a51eec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a51eed0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  `FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14a51eef0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  `FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14a51ef10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_CollectionGetAll::StaticExecute'::__l10::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  FRigBaseElement *pFVar1;
  FRigElementKey local_18 [2];
  
  pFVar1 = *param_2;
  *param_3 = true;
  local_18[0].Type = (pFVar1->Key).Type;
  local_18[0]._1_3_ = *(undefined3 *)&(pFVar1->Key).field_0x1;
  local_18[0].Name.ComparisonIndex.Value = (pFVar1->Key).Name.ComparisonIndex.Value;
  local_18[0].Name.Number = (pFVar1->Key).Name.Number;
  if ((*(ERigElementType *)((longlong)param_1 + 8) & local_18[0].Type) == local_18[0].Type) {
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (*(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> **)param_1,local_18);
  }
  return;
}

// Call @ 14a51ef60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_DebugHierarchy::DrawHierarchy'::__l21::<lambda_1>,bool,FRigTransformElement_*>
::Call(void *param_1,FRigTransformElement **param_2)

{
  bool bVar1;
  
  bVar1 = `FRigUnit_DebugHierarchy::DrawHierarchy'::__l21::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14a51ef70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_GetItemsInModule::StaticExecute'::__l13::<lambda_1>,void,FRigBaseElement_*,bool_&>
::Call(void *param_1,FRigBaseElement **param_2,bool *param_3)

{
  `FRigUnit_GetItemsInModule::StaticExecute'::__l13::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14a51ef80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_SetControlVisibility::StaticExecute'::__l15::<lambda_1>,bool,FRigControlElement_*>
::Call(void *param_1,FRigControlElement **param_2)

{
  bool bVar1;
  
  bVar1 = `FRigUnit_SetControlVisibility::StaticExecute'::__l15::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

