// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a149f20

UScriptStruct * __cdecl FRigVMFunction_MathVectorMakeBezierFourPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint,
                         (UObject *)pUVar1,L"RigVMFunction_MathVectorMakeBezierFourPoint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a149fe0

UScriptStruct * __thiscall
FRigVMFunction_MathVectorMakeBezierFourPoint::GetExecuteContextStruct
          (FRigVMFunction_MathVectorMakeBezierFourPoint *this)

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

// Execute @ 14a14a1a0

void __thiscall
FRigVMFunction_MathVectorMakeBezierFourPoint::Execute
          (FRigVMFunction_MathVectorMakeBezierFourPoint *this)

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

// GetUpgradeInfo @ 14a14a220

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathVectorMakeBezierFourPoint::GetUpgradeInfo
          (FRigVMFunction_MathVectorMakeBezierFourPoint *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigVMFunction_MathVectorMakeBezierFourPoint @ 14a190650

FRigVMFunction_MathVectorMakeBezierFourPoint * __thiscall
FRigVMFunction_MathVectorMakeBezierFourPoint::FRigVMFunction_MathVectorMakeBezierFourPoint
          (FRigVMFunction_MathVectorMakeBezierFourPoint *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathVectorMakeBezierFourPoint__6B_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Bezier).D.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).D.field0_0x0._s_0.Y = (double)uVar4;
  (this->Bezier).D.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  dVar1 = (this->Bezier).D.field0_0x0._s_0.Z;
  dVar2 = (this->Bezier).D.field0_0x0._s_0.X;
  dVar3 = (this->Bezier).D.field0_0x0._s_0.Y;
  (this->Bezier).C.field0_0x0._s_0.X = dVar2;
  (this->Bezier).C.field0_0x0._s_0.Y = dVar3;
  (this->Bezier).B.field0_0x0._s_0.X = dVar2;
  (this->Bezier).B.field0_0x0._s_0.Y = dVar3;
  (this->Bezier).A.field0_0x0._s_0.X = dVar2;
  (this->Bezier).A.field0_0x0._s_0.Y = dVar3;
  (this->Bezier).C.field0_0x0._s_0.Z = dVar1;
  (this->Bezier).B.field0_0x0._s_0.Z = dVar1;
  (this->Bezier).A.field0_0x0._s_0.Z = dVar1;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).A.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).A.field0_0x0._s_0.Y = (double)uVar5;
  local_50 = (undefined4)uVar4;
  uStack_4c = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_48 = (undefined4)uVar5;
  uStack_44 = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)((longlong)&(this->Bezier).A.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->Bezier).A.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)&(this->Bezier).B.field0_0x0 = local_50;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 4) = uStack_4c;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 8) = uStack_48;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0xc) = uStack_44;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0x14) = uVar7;
  (this->Bezier).C.field0_0x0._s_0.X = (double)uVar4;
  (this->Bezier).C.field0_0x0._s_0.Y = (double)uVar5;
  *(undefined4 *)((longlong)&(this->Bezier).C.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->Bezier).C.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)&(this->Bezier).D.field0_0x0 = local_50;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 4) = uStack_4c;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 8) = uStack_48;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0xc) = uStack_44;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0x14) = uVar7;
  return this;
}

// Execute @ 14a1a2fc0

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
FRigVMFunction_MathVectorMakeBezierFourPoint::Execute
          (FRigVMFunction_MathVectorMakeBezierFourPoint *this,FRigVMExecuteContext *param_1)

{
  return;
}

// RigVMExecute @ 14a1cf780

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
FRigVMFunction_MathVectorMakeBezierFourPoint::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  return;
}

// StaticExecute @ 14a1e56f0

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
FRigVMFunction_MathVectorMakeBezierFourPoint::StaticExecute
          (FRigVMExecuteContext *param_1,FRigVMFourPointBezier *param_2)

{
  return;
}

