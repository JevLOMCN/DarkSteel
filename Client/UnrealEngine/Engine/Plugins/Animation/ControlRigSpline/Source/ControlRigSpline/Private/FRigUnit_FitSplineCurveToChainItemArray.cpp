// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 6

// StaticStruct @ 14dec00c0

UScriptStruct * __cdecl FRigUnit_FitSplineCurveToChainItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray,
                         (UObject *)pUVar1,L"RigUnit_FitSplineCurveToChainItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray.OuterSingleton;
}

// Execute @ 14dec3e90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FitSplineCurveToChainItemArray::Execute
          (FRigUnit_FitSplineCurveToChainItemArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&local_18,&this->Spline);
  return;
}

// Execute @ 14dec3f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FitSplineCurveToChainItemArray::Execute(FRigUnit_FitSplineCurveToChainItemArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_278.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Spline);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14dec4c50

UScriptStruct * __thiscall
FRigUnit_FitSplineCurveToChainItemArray::GetExecuteContextStruct
          (FRigUnit_FitSplineCurveToChainItemArray *this)

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

// RigVMExecute @ 14dec6ce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FitSplineCurveToChainItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FControlRigSpline *pFVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  FControlRigExecuteContext *pFVar7;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar2->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *(int *)(puVar6 + 8);
  pFVar3 = (FControlRigSpline *)param_2->DataPtr[1].Ptr;
  local_18.DataPtr = *(FRigElementKey **)puVar6;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,&local_18,pFVar3);
  return;
}

// StaticExecute @ 14decfad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_FitSplineCurveToChainItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          FControlRigSpline *param_3)

{
  TSharedPtr<FControlRigSplineImpl,1> *this;
  float fVar1;
  bool bVar2;
  URigHierarchy *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  int iVar17;
  FControlRigSplineImpl *pFVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  float fVar25;
  undefined1 auStackY_258 [32];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_210;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_200;
  FControlRigSpline *local_1f0;
  FRigElementKey local_1e8;
  FControlRigSpline local_1d8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_1c0;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_1b0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1a0;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this_00 = param_1->Hierarchy;
  if (this_00 != (URigHierarchy *)0x0) {
    pFVar18 = (param_3->SplineData).Object;
    this = &param_3->SplineData;
    if (pFVar18 != (FControlRigSplineImpl *)0x0) {
      local_1f0 = param_3;
      if (pFVar18->Spline == (ControlRigBaseSpline *)0x0) {
        if (1 < (byte)LogControlRig._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        }
      }
      else if (3 < param_2->ArrayNum) {
        pFVar18 = TSharedPtr<FControlRigSplineImpl,1>::operator->(this);
        uVar20 = 0;
        bVar2 = pFVar18->bClosed;
        local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_200.ArrayNum = 0;
        local_200.ArrayMax = 0;
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_200,param_2->ArrayNum,Default);
        iVar17 = param_2->ArrayNum;
        if (0 < iVar17) {
          lVar24 = 0;
          uVar23 = uVar20;
          do {
            uVar21 = (uint)uVar23;
            uVar22 = 0;
            if ((int)uVar21 < iVar17) {
              uVar22 = ~uVar21 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_1e8._0_8_ = *(undefined8 *)(&param_2->DataPtr->Type + lVar24);
            local_1e8.Name.Number = *(uint *)((longlong)&(param_2->DataPtr->Name).Number + lVar24);
            iVar17 = URigHierarchy::GetIndex(this_00,&local_1e8,true);
            URigHierarchy::GetGlobalTransformByIndex(this_00,&local_128,iVar17,false);
            dVar15 = local_128.Scale3D.ZW.m128d_f64[1];
            dVar14 = local_128.Scale3D.ZW.m128d_f64[0];
            dVar13 = local_128.Scale3D.XY.m128d_f64[1];
            dVar12 = local_128.Scale3D.XY.m128d_f64[0];
            dVar11 = local_128.Translation.ZW.m128d_f64[1];
            dVar10 = local_128.Translation.ZW.m128d_f64[0];
            dVar9 = local_128.Translation.XY.m128d_f64[1];
            dVar8 = local_128.Translation.XY.m128d_f64[0];
            dVar7 = local_128.Rotation.ZW.m128d_f64[1];
            dVar6 = local_128.Rotation.ZW.m128d_f64[0];
            dVar5 = local_128.Rotation.XY.m128d_f64[1];
            dVar4 = local_128.Rotation.XY.m128d_f64[0];
            uVar22 = 0;
            if ((int)uVar21 < local_200.ArrayNum) {
              uVar22 = ~uVar21 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar23 = (ulonglong)(uVar21 + 1);
            lVar24 = lVar24 + 0xc;
            *(double *)(local_200.AllocatorInstance.Data + uVar20) = dVar4;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 8) = dVar5;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x10) = dVar6;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x10 + 8) = dVar7;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x20) = dVar8;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x20 + 8) = dVar9;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x30) = dVar10;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x30 + 8) = dVar11;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x40) = dVar12;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x40 + 8) = dVar13;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x50) = dVar14;
            *(double *)(local_200.AllocatorInstance.Data + uVar20 + 0x50 + 8) = dVar15;
            uVar20 = uVar20 + 0x60;
            iVar17 = param_2->ArrayNum;
          } while ((int)(uVar21 + 1) < iVar17);
        }
        uVar22 = 0;
        local_1d8._padding_ = (longlong)&___7FControlRigSpline__6B_;
        local_1c0.DataPtr = (TTransform<double> *)local_200.AllocatorInstance.Data;
        local_1c0.ArrayNum = local_200.ArrayNum;
        local_1d8.SplineData.Object = (FControlRigSplineImpl *)0x0;
        local_1d8.SplineData.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if ((local_200.ArrayNum < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this->Object == (FControlRigSplineImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar1 = __real_3f800000;
        FControlRigSpline::SetControlTransforms
                  (&local_1d8,&local_1c0,Hermite,bVar2,this->Object->SamplesPerSegment,
                   __real_3f800000,__real_3f800000);
        if ((this->Object == (FControlRigSplineImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FControlRigSplineImpl::GetControlTransformsWithoutDuplicates(this->Object,&local_1a0);
        lVar24 = (longlong)local_1a0.ArrayNum;
        local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_210.ArrayNum = 0;
        local_210.ArrayMax = 0;
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_210,local_1a0.ArrayNum,Default);
        fVar25 = 0.0;
        iVar17 = local_1a0.ArrayNum;
        if (bVar2 == false) {
          iVar17 = local_1a0.ArrayNum + -1;
        }
        if (0 < local_1a0.ArrayNum) {
          lVar19 = 0;
          do {
            FControlRigSpline::TransformAtParam(&local_1d8,&local_188,fVar25);
            dVar15 = local_188.Scale3D.ZW.m128d_f64[1];
            dVar14 = local_188.Scale3D.ZW.m128d_f64[0];
            dVar13 = local_188.Scale3D.XY.m128d_f64[1];
            dVar12 = local_188.Scale3D.XY.m128d_f64[0];
            dVar11 = local_188.Translation.ZW.m128d_f64[1];
            dVar10 = local_188.Translation.ZW.m128d_f64[0];
            dVar9 = local_188.Translation.XY.m128d_f64[1];
            dVar8 = local_188.Translation.XY.m128d_f64[0];
            dVar7 = local_188.Rotation.ZW.m128d_f64[1];
            dVar6 = local_188.Rotation.ZW.m128d_f64[0];
            dVar5 = local_188.Rotation.XY.m128d_f64[1];
            dVar4 = local_188.Rotation.XY.m128d_f64[0];
            uVar21 = 0;
            if ((int)uVar22 < local_210.ArrayNum) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar25 = fVar25 + fVar1 / (float)iVar17;
            uVar22 = uVar22 + 1;
            *(double *)(local_210.AllocatorInstance.Data + lVar19) = dVar4;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 8) = dVar5;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x10) = dVar6;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x10 + 8) = dVar7;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x20) = dVar8;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x20 + 8) = dVar9;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x30) = dVar10;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x30 + 8) = dVar11;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x40) = dVar12;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x40 + 8) = dVar13;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x50) = dVar14;
            *(double *)(local_210.AllocatorInstance.Data + lVar19 + 0x50 + 8) = dVar15;
            lVar19 = lVar19 + 0x60;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        local_1b0.DataPtr = (TTransform<double> *)local_210.AllocatorInstance.Data;
        local_1b0.ArrayNum = local_210.ArrayNum;
        if ((local_210.ArrayNum < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this->Object == (FControlRigSplineImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar1 = this->Object->Stretch;
        if ((this->Object == (FControlRigSplineImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar25 = this->Object->Compression;
        if ((this->Object == (FControlRigSplineImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar17 = this->Object->SamplesPerSegment;
        if ((this->Object == (FControlRigSplineImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FControlRigSpline::SetControlTransforms
                  (local_1f0,&local_1b0,this->Object->SplineMode,bVar2,iVar17,fVar25,fVar1);
        if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.AllocatorInstance.Data);
        }
        if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d8.SplineData.SharedReferenceCount.ReferenceController);
        if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

