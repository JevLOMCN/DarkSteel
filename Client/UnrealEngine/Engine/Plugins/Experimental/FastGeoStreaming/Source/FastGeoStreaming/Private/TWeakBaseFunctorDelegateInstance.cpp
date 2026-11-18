// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 48

// CreateCopy @ 14da25400

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da25490

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14da254e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14da25590

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da25620

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14da25670

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14da25720

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da257b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14da25800

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14da258b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da25940

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14da25990

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14da27b60

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::Execute(void *this,TBox<double> *param_1,
         TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FInstancedStaticMeshComponentHelper::
  GetNavigationPerInstanceTransforms<FFastGeoInstancedStaticMeshComponent>
            (*(FFastGeoInstancedStaticMeshComponent **)((longlong)this + 0x20),param_1,param_2);
  return;
}

// Execute @ 14da27b70

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::Execute(void *this,TBox<double> *param_1,
         TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FInstancedStaticMeshComponentHelper::
  GetNavigationPerInstanceTransforms<FFastGeoInstancedStaticMeshComponent>
            (*(FFastGeoInstancedStaticMeshComponent **)((longlong)this + 0x20),param_1,param_2);
  return;
}

// Execute @ 14da27b80

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::Execute(void *this,FNavigationElement *param_1,FNavigableGeometryExport *param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(**(code **)(**(longlong **)((longlong)this + 0x20) + 0x98))
                          (*(longlong **)((longlong)this + 0x20),param_2);
  *param_3 = bVar1;
  return;
}

// Execute @ 14da27bb0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::Execute(void *this,FNavigationElement *param_1,FNavigationRelevantData *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014da27bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x88))
            (*(longlong **)((longlong)this + 0x20),param_2);
  return;
}

// ExecuteIfSafe @ 14da28840

/* WARNING: Removing unreachable block (ram,0x00014da288b6) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TBox<double> *param_1,
               TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    FInstancedStaticMeshComponentHelper::
    GetNavigationPerInstanceTransforms<FFastGeoInstancedStaticMeshComponent>
              (*(FFastGeoInstancedStaticMeshComponent **)((longlong)this + 0x20),param_1,param_2);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14da28920

/* WARNING: Removing unreachable block (ram,0x00014da28996) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TBox<double> *param_1,
               TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    FInstancedStaticMeshComponentHelper::
    GetNavigationPerInstanceTransforms<FFastGeoInstancedStaticMeshComponent>
              (*(FFastGeoInstancedStaticMeshComponent **)((longlong)this + 0x20),param_1,param_2);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14da28a00

/* WARNING: Removing unreachable block (ram,0x00014da28a76) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::ExecuteIfSafe(void *this,FNavigationElement *param_1,FNavigableGeometryExport *param_2,
               bool *param_3)

{
  bool bVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  UObject *local_res8;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar3 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    bVar2 = (bool)(**(code **)(**(longlong **)((longlong)this + 0x20) + 0x98))
                            (*(longlong **)((longlong)this + 0x20),param_2);
    *param_3 = bVar2;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14da28ae0

/* WARNING: Removing unreachable block (ram,0x00014da28b4e) */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,FNavigationElement *param_1,FNavigationRelevantData *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x88))
              (*(longlong **)((longlong)this + 0x20),param_2);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14da299d0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14da299e0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14da299f0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14da29a00

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14da2af30

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2af40

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2af50

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2af60

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14da2bc70

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14da2bc80

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14da2bc90

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14da2bca0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14da2c2a0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c2d0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c300

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c330

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14da2d780

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d7a0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d7c0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d7e0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14da2e090

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14da2e0a0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14da2e0b0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14da2e0c0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14da389d0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da389e0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da389f0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da38a00

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

