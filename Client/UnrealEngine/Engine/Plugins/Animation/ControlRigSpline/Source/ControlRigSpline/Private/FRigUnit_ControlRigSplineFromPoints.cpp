// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 6

// StaticStruct @ 14debd3a0

UScriptStruct * __cdecl FRigUnit_ControlRigSplineFromPoints::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ControlRigSplineFromPoints.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_ControlRigSplineFromPoints.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints,
                         (UObject *)pUVar1,L"RigUnit_ControlRigSplineFromPoints");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ControlRigSplineFromPoints.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ControlRigSplineFromPoints.OuterSingleton;
}

// GetExecuteContextStruct @ 14debd420

UScriptStruct * __thiscall
FRigUnit_ControlRigSplineFromPoints::GetExecuteContextStruct
          (FRigUnit_ControlRigSplineFromPoints *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14debd430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ControlRigSplineFromPoints::Execute(FRigUnit_ControlRigSplineFromPoints *this)

{
  float fVar1;
  float fVar2;
  ESplineType EVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 auStackY_2f8 [32];
  TArrayView<UE::Math::TVector<double>_const_,int> local_2b8;
  FControlRigSplineImpl *local_2a8;
  TReferenceControllerBase<1> *pTStack_2a0;
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_298);
  if ((FRigVMNameCache *)local_298._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_298._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  iVar4 = (this->Points).ArrayNum;
  pFVar6 = (this->Points).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_2a8 = (this->Spline).SplineData.Object;
  pTStack_2a0 = (this->Spline).SplineData.SharedReferenceCount.ReferenceController;
  iVar5 = this->SamplesPerSegment;
  fVar1 = this->Stretch;
  fVar2 = this->Compression;
  bVar8 = this->bClosed;
  EVar3 = this->SplineMode;
  (this->Spline).SplineData.Object = (FControlRigSplineImpl *)0x0;
  (this->Spline).SplineData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (3 < iVar4) {
    local_2b8.DataPtr = (TVector<double> *)pFVar6;
    local_2b8.ArrayNum = iVar4;
    FControlRigSpline::SetControlPoints(&this->Spline,&local_2b8,EVar3,bVar8,iVar5,fVar2,fVar1);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_298);
  return;
}

// Execute @ 14dec37d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ControlRigSplineFromPoints::Execute
          (FRigUnit_ControlRigSplineFromPoints *this,FControlRigExecuteContext *param_1)

{
  float fVar1;
  float fVar2;
  ESplineType EVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_58;
  FControlRigSplineImpl *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  iVar4 = (this->Points).ArrayNum;
  pFVar6 = (this->Points).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_48 = (this->Spline).SplineData.Object;
  pTStack_40 = (this->Spline).SplineData.SharedReferenceCount.ReferenceController;
  iVar5 = this->SamplesPerSegment;
  fVar1 = this->Stretch;
  fVar2 = this->Compression;
  bVar8 = this->bClosed;
  EVar3 = this->SplineMode;
  (this->Spline).SplineData.Object = (FControlRigSplineImpl *)0x0;
  (this->Spline).SplineData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (3 < iVar4) {
    local_58.DataPtr = (TVector<double> *)pFVar6;
    local_58.ArrayNum = iVar4;
    FControlRigSpline::SetControlPoints(&this->Spline,&local_58,EVar3,bVar8,iVar5,fVar2,fVar1);
  }
  return;
}

// RigVMExecute @ 14dec5d10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ControlRigSplineFromPoints::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ESplineType EVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  ESplineType *pEVar9;
  uchar *puVar10;
  FRigVMMemoryHandle *pFVar11;
  int *piVar12;
  float *pfVar13;
  FControlRigSpline *pFVar14;
  FControlRigExecuteContext *pFVar15;
  TArrayView<UE::Math::TVector<double>_const_,int> local_48 [3];
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar11->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
  }
  if (iVar4 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar11[1].Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  EVar3 = *pEVar9;
  if (iVar4 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar10 = pFVar11[2].Ptr;
  }
  else {
    puVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  bVar6 = (bool)*puVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  piVar12 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  iVar4 = *piVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar14 = (FControlRigSpline *)FRigVMMemoryHandle::GetData_Internal(pFVar11,false,-1);
  local_48[0].DataPtr = *(TVector<double> **)puVar8;
  local_48[0].ArrayNum = *(int *)(puVar8 + 8);
  if (local_48[0].ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,local_48,EVar3,bVar6,iVar4,fVar1,fVar2,pFVar14);
  return;
}

// StaticExecute @ 14decad60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ControlRigSplineFromPoints::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,ESplineType param_3,bool param_4
          ,int param_5,float param_6,float param_7,FControlRigSpline *param_8)

{
  TArrayView<UE::Math::TVector<double>_const_,int> local_28;
  FControlRigSplineImpl *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (param_8->SplineData).Object;
  pTStack_10 = (param_8->SplineData).SharedReferenceCount.ReferenceController;
  (param_8->SplineData).Object = (FControlRigSplineImpl *)0x0;
  (param_8->SplineData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_28.ArrayNum = param_2->ArrayNum;
  if (3 < local_28.ArrayNum) {
    local_28.DataPtr = param_2->DataPtr;
    FControlRigSpline::SetControlPoints(param_8,&local_28,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

