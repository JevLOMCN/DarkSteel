// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a131ac0

UScriptStruct * __cdecl FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace,
                         (UObject *)pUVar1,L"RigVMFunction_VisualDebugVectorNoSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace.OuterSingleton;
}

// Execute @ 14a1a4680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_VisualDebugVectorNoSpace::Execute
          (FRigVMFunction_VisualDebugVectorNoSpace *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->bEnabled,this->Mode,&this->Color,this->Thickness,
                this->Scale,(FRigVMDebugDrawSettings *)&this->_padding_);
  return;
}

// Execute @ 14a1a46d0

void __thiscall
FRigVMFunction_VisualDebugVectorNoSpace::Execute(FRigVMFunction_VisualDebugVectorNoSpace *this)

{
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
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetExecuteContextStruct @ 14a1ab8a0

UScriptStruct * __thiscall
FRigVMFunction_VisualDebugVectorNoSpace::GetExecuteContextStruct
          (FRigVMFunction_VisualDebugVectorNoSpace *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// RigVMExecute @ 14a1d5fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_VisualDebugVectorNoSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ERigUnitVisualDebugPointMode EVar3;
  int iVar4;
  TVector<double> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uchar *puVar9;
  ERigUnitVisualDebugPointMode *pEVar10;
  FRigVMMemoryHandle *pFVar11;
  FLinearColor *pFVar12;
  float *pfVar13;
  FRigVMDebugDrawSettings *pFVar14;
  FRigVMExecuteContext *pFVar15;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar5 = (TVector<double> *)param_2->DataPtr->Ptr;
  if (iVar4 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar11[1].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  bVar7 = (bool)*puVar9;
  if (iVar4 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar10 = pFVar11[2].Ptr;
  }
  else {
    pEVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  EVar3 = *pEVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar12 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar14 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar15,pTVar5,bVar7,EVar3,pFVar12,fVar1,fVar2,pFVar14);
  return;
}

// StaticExecute @ 14a1e9f40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_VisualDebugVectorNoSpace::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,bool param_3,
          ERigUnitVisualDebugPointMode param_4,FLinearColor *param_5,float param_6,float param_7,
          FRigVMDebugDrawSettings *param_8)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  TVector<double>_u_0 local_28;
  
  if ((param_1->DrawInterfacePtr != (FRigVMDrawInterface *)0x0) && (param_3)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        WorldOffset.Rotation.XY = UE::Math::TTransform<double>::Identity.Rotation.XY;
        WorldOffset.Rotation.ZW = UE::Math::TTransform<double>::Identity.Rotation.ZW;
        WorldOffset.Translation.XY = UE::Math::TTransform<double>::Identity.Translation.XY;
        WorldOffset.Translation.ZW = UE::Math::TTransform<double>::Identity.Translation.ZW;
        WorldOffset.Scale3D.XY = UE::Math::TTransform<double>::Identity.Scale3D.XY;
        WorldOffset.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (param_4 == Point) {
      FRigVMDrawInterface::DrawPoint
                (param_1->DrawInterfacePtr,&WorldOffset,param_2,param_6,param_5,
                 (uint)(param_8->DepthPriority).Value,param_8->Lifetime);
    }
    else {
      if (param_4 == Vector) {
        dVar4 = (double)param_7;
        local_28._s_0.Z = dVar4 * (param_2->field0_0x0)._s_0.Z;
        dVar2 = dVar4 * (param_2->field0_0x0)._s_0.Y;
        local_28._8_4_ = SUB84(dVar2,0);
        local_28._0_8_ = dVar4 * (param_2->field0_0x0)._s_0.X;
        local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        FRigVMDrawInterface::DrawLine
                  (param_1->DrawInterfacePtr,&WorldOffset,&UE::Math::TVector<double>::ZeroVector,
                   (TVector<double> *)&local_28._s_0,param_5,param_6,
                   (uint)(param_8->DepthPriority).Value,param_8->Lifetime);
        return;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Debug\\RigVMFunction_VisualDebug.cpp"
                         ,0x31,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

