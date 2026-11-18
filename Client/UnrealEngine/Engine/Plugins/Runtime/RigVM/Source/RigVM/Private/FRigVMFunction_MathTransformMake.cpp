// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a14df30

UScriptStruct * __cdecl FRigVMFunction_MathTransformMake::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMake.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMake.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformMake");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMake.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMake.OuterSingleton;
}

// GetExecuteContextStruct @ 14a14e030

UScriptStruct * __thiscall
FRigVMFunction_MathTransformMake::GetExecuteContextStruct(FRigVMFunction_MathTransformMake *this)

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

// Execute @ 14a14e2e0

void __thiscall FRigVMFunction_MathTransformMake::Execute(FRigVMFunction_MathTransformMake *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
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
  dVar3 = (this->Translation).field0_0x0._s_0.X;
  dVar4 = (this->Translation).field0_0x0._s_0.Y;
  dVar5 = (this->Rotation).Y;
  dVar6 = (this->Rotation).Z;
  dVar7 = (this->Rotation).W;
  dVar1 = (this->Translation).field0_0x0._s_0.Z;
  dVar8 = (this->Scale).field0_0x0._s_0.X;
  dVar9 = (this->Scale).field0_0x0._s_0.Y;
  dVar2 = (this->Scale).field0_0x0._s_0.Z;
  (this->Result).Rotation.XY.m128d_f64[0] = (this->Rotation).X;
  (this->Result).Rotation.XY.m128d_f64[1] = dVar5;
  (this->Result).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar7;
  (this->Result).Translation.XY.m128d_f64[0] = dVar3;
  (this->Result).Translation.XY.m128d_f64[1] = dVar4;
  (this->Result).Translation.ZW.m128d_f64[0] = dVar1;
  (this->Result).Translation.ZW.m128d_f64[1] = 0.0;
  (this->Result).Scale3D.XY.m128d_f64[0] = dVar8;
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar9;
  (this->Result).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Result).Scale3D.ZW.m128d_f64[1] = 0.0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a14e510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathTransformMake::GetUpgradeInfo
          (FRigVMFunction_MathTransformMake *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *this_00;
  undefined1 auStack_c8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  FName local_70;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  ::FName::FName((FName *)(local_88 + 0x10),L"Result");
  ::FName::FName((FName *)(local_88 + 0x18),L"Value");
  local_88._0_8_ = local_88 + 0x10;
  local_88._8_8_ = local_88 + 0x18;
  local_98._0_8_ = local_88;
  local_98._8_8_ = local_88 + 0x10;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
            ((TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *)
             local_68,(initializer_list<TPairInitializer<FName_const_&,FName_const_&>_> *)local_98);
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_Constant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_Constant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_Constant,(UObject *)pUVar2,
                         L"RigVMDispatch_Constant");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FRigVMDispatch_Constant.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMake.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMake.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake,
                         (UObject *)pUVar2,L"RigVMFunction_MathTransformMake");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_98._8_4_ = 1;
    local_98._0_8_ =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMake.
                       OuterSingleton,(TArrayView<FRigVMCompiledInFunction_const_,int> *)local_98);
  }
  FRigVMStructUpgradeInfo::MakeFromStructToFactory
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMake.OuterSingleton,
             pUVar1,(TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)local_68);
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  ::FString::FString((FString *)local_88,L"Value.Translation");
  ::FString::FString((FString *)local_98,L"Translation");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_98,(FString *)local_88,true,true);
  if ((FRigVMCompiledInFunction *)local_98._0_8_ != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  ::FString::FString((FString *)local_88,L"Value.Rotation");
  ::FString::FString((FString *)local_98,L"Rotation");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_98,(FString *)local_88,true,true);
  if ((FRigVMCompiledInFunction *)local_98._0_8_ != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  ::FString::FString((FString *)local_88,L"Value.Scale");
  ::FString::FString((FString *)local_98,L"Scale");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_98,(FString *)local_88,true,true);
  if ((FRigVMCompiledInFunction *)local_98._0_8_ != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// FRigVMFunction_MathTransformMake @ 14a18f650

FRigVMFunction_MathTransformMake * __thiscall
FRigVMFunction_MathTransformMake::FRigVMFunction_MathTransformMake
          (FRigVMFunction_MathTransformMake *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformMake__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.ZW.m128d_f64 = auVar8;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Translation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Translation).field0_0x0._s_0.Y = (double)uVar9;
  (this->Translation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  (this->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->Rotation).Y = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  (this->Rotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Rotation).W = dVar10;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = (double)uVar9;
  (this->Scale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *&(this->Result).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Result).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Result).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Result).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Result).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Result).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// Execute @ 14a1a2420

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
FRigVMFunction_MathTransformMake::Execute
          (FRigVMFunction_MathTransformMake *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar3 = (this->Translation).field0_0x0._s_0.X;
  dVar4 = (this->Translation).field0_0x0._s_0.Y;
  dVar5 = (this->Rotation).Y;
  dVar6 = (this->Rotation).Z;
  dVar7 = (this->Rotation).W;
  dVar1 = (this->Translation).field0_0x0._s_0.Z;
  dVar8 = (this->Scale).field0_0x0._s_0.X;
  dVar9 = (this->Scale).field0_0x0._s_0.Y;
  dVar2 = (this->Scale).field0_0x0._s_0.Z;
  (this->Result).Rotation.XY.m128d_f64[0] = (this->Rotation).X;
  (this->Result).Rotation.XY.m128d_f64[1] = dVar5;
  (this->Result).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar7;
  (this->Result).Translation.XY.m128d_f64[0] = dVar3;
  (this->Result).Translation.XY.m128d_f64[1] = dVar4;
  (this->Result).Translation.ZW.m128d_f64[0] = dVar1;
  (this->Result).Translation.ZW.m128d_f64[1] = 0.0;
  (this->Result).Scale3D.XY.m128d_f64[0] = dVar8;
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar9;
  (this->Result).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Result).Scale3D.ZW.m128d_f64[1] = 0.0;
  return;
}

// RigVMExecute @ 14a1cc1c0

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
FRigVMFunction_MathTransformMake::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uchar *puVar13;
  uchar *puVar14;
  uchar *puVar15;
  FRigVMMemoryHandle *pFVar16;
  uchar *puVar17;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar16 = param_2->DataPtr;
  if (pFVar16->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar13 = pFVar16->Ptr;
  }
  else {
    puVar13 = FRigVMPropertyPath::GetData_Internal
                        (pFVar16->PropertyPath,pFVar16->Ptr,pFVar16->Property);
  }
  if (iVar3 < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar16 = param_2->DataPtr;
  if (pFVar16[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar14 = pFVar16[1].Ptr;
  }
  else {
    puVar14 = FRigVMPropertyPath::GetData_Internal
                        (pFVar16[1].PropertyPath,pFVar16[1].Ptr,pFVar16[1].Property);
  }
  if (iVar3 < 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar16 = param_2->DataPtr;
  if (pFVar16[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar15 = pFVar16[2].Ptr;
  }
  else {
    puVar15 = FRigVMPropertyPath::GetData_Internal
                        (pFVar16[2].PropertyPath,pFVar16[2].Ptr,pFVar16[2].Property);
  }
  pFVar16 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar17 = FRigVMMemoryHandle::GetData_Internal(pFVar16,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar5 = *(undefined8 *)(puVar14 + 8);
  uVar6 = *(undefined8 *)(puVar14 + 0x10);
  uVar7 = *(undefined8 *)(puVar14 + 0x18);
  uVar8 = *(undefined8 *)puVar13;
  uVar9 = *(undefined8 *)(puVar13 + 8);
  uVar1 = *(undefined8 *)(puVar13 + 0x10);
  uVar10 = *(undefined8 *)puVar15;
  uVar11 = *(undefined8 *)(puVar15 + 8);
  uVar2 = *(undefined8 *)(puVar15 + 0x10);
  *(undefined8 *)puVar17 = *(undefined8 *)puVar14;
  *(undefined8 *)(puVar17 + 8) = uVar5;
  *(undefined8 *)(puVar17 + 0x10) = uVar6;
  *(undefined8 *)(puVar17 + 0x18) = uVar7;
  *(undefined8 *)(puVar17 + 0x20) = uVar8;
  *(undefined8 *)(puVar17 + 0x28) = uVar9;
  *(undefined8 *)(puVar17 + 0x30) = uVar1;
  puVar17[0x38] = '\0';
  puVar17[0x39] = '\0';
  puVar17[0x3a] = '\0';
  puVar17[0x3b] = '\0';
  puVar17[0x3c] = '\0';
  puVar17[0x3d] = '\0';
  puVar17[0x3e] = '\0';
  puVar17[0x3f] = '\0';
  *(undefined8 *)(puVar17 + 0x40) = uVar10;
  *(undefined8 *)(puVar17 + 0x48) = uVar11;
  *(undefined8 *)(puVar17 + 0x50) = uVar2;
  puVar17[0x58] = '\0';
  puVar17[0x59] = '\0';
  puVar17[0x5a] = '\0';
  puVar17[0x5b] = '\0';
  puVar17[0x5c] = '\0';
  puVar17[0x5d] = '\0';
  puVar17[0x5e] = '\0';
  puVar17[0x5f] = '\0';
  return;
}

// StaticExecute @ 14a1e3a40

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
FRigVMFunction_MathTransformMake::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TQuat<double> *param_3,
          TVector<double> *param_4,TTransform<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = param_3->Y;
  dVar6 = param_3->Z;
  dVar7 = param_3->W;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar8 = (param_4->field0_0x0)._s_0.X;
  dVar9 = (param_4->field0_0x0)._s_0.Y;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  (param_5->Rotation).XY.m128d_f64[0] = param_3->X;
  (param_5->Rotation).XY.m128d_f64[1] = dVar5;
  (param_5->Rotation).ZW.m128d_f64[0] = dVar6;
  (param_5->Rotation).ZW.m128d_f64[1] = dVar7;
  (param_5->Translation).XY.m128d_f64[0] = dVar3;
  (param_5->Translation).XY.m128d_f64[1] = dVar4;
  (param_5->Translation).ZW.m128d_f64[0] = dVar1;
  (param_5->Translation).ZW.m128d_f64[1] = 0.0;
  (param_5->Scale3D).XY.m128d_f64[0] = dVar8;
  (param_5->Scale3D).XY.m128d_f64[1] = dVar9;
  (param_5->Scale3D).ZW.m128d_f64[0] = dVar2;
  (param_5->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

