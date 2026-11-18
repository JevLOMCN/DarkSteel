// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a1568c0

UScriptStruct * __cdecl FRigVMFunction_MathTransformInverse::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformInverse.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformInverse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformInverse");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformInverse.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformInverse.OuterSingleton;
}

// GetExecuteContextStruct @ 14a156940

UScriptStruct * __thiscall
FRigVMFunction_MathTransformInverse::GetExecuteContextStruct
          (FRigVMFunction_MathTransformInverse *this)

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

// Execute @ 14a156c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRigVMFunction_MathTransformInverse::Execute(FRigVMFunction_MathTransformInverse *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  longlong extraout_RAX;
  longlong extraout_RAX_00;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  TTransform<double> local_68;
  
  uVar5 = 0x9d4c;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar4 + 0x9d4c) <
      `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      _thread_safe_static_guard_0__) {
    uVar5 = 0x552a063c;
    _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    lVar4 = extraout_RAX;
    if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__ == -1) {
      atexit(`FRigVMExecuteContext::Initialize'::__l5::
             _dynamic_atexit_destructor_for__StaticNameCache__);
      uVar5 = 0x552a063c;
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      lVar4 = extraout_RAX_00;
    }
  }
  auVar8._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)&this->field_0x54,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)&this->field_0x50);
  auVar8._8_4_ = _UNK_15061cc88 & *(uint *)&this->field_0x58;
  auVar8._12_4_ = _UNK_15061cc8c & *(uint *)&this->field_0x5c;
  lVar7 = -(ulonglong)
           ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
           (double)CONCAT44(_UNK_15061cc8c & *(uint *)&this->field_0x6c,
                            _UNK_15061cc88 & *(uint *)&this->field_0x68));
  auVar2._8_4_ = (int)lVar7;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)&this->field_0x64,
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   *(uint *)&this->field_0x60));
  auVar2._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
  uVar6 = movmskpd(uVar5,auVar2);
  lVar7 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar8._8_8_);
  auVar1._8_4_ = (int)lVar7;
  auVar1._0_8_ = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar8._0_8_)
  ;
  auVar1._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
  iVar3 = movmskpd((int)lVar4,auVar1);
  if ((uVar6 & 0x3fffffff) == 0 && iVar3 == 0) {
    local_68.Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_68.Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_68.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_68.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_68.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_68.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_68.Translation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_68.Translation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_68.Scale3D.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    local_68.Scale3D.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    local_68.Scale3D.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    local_68.Scale3D.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_68.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_68.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_68.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast((TTransform<double> *)&this->field_0x10,&local_68);
  }
  *(undefined4 *)&this->field_0x70 = local_68.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)&this->field_0x74 = local_68.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)&this->field_0x78 = local_68.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)&this->field_0x7c = local_68.Rotation.XY.m128d_f64[1]._4_4_;
  *(double *)&this->field_0x80 = local_68.Rotation.ZW.m128d_f64[0];
  *(double *)&this->field_0x88 = local_68.Rotation.ZW.m128d_f64[1];
  *(undefined4 *)&this->field_0x90 = local_68.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)&this->field_0x94 = local_68.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)&this->field_0x98 = local_68.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)&this->field_0x9c = local_68.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)&this->field_0xa0 = local_68.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)&this->field_0xa4 = local_68.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)&this->field_0xa8 = local_68.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)&this->field_0xac = local_68.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)&this->field_0xb0 = local_68.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)&this->field_0xb4 = local_68.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)&this->field_0xb8 = local_68.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)&this->field_0xbc = local_68.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)&this->field_0xc0 = local_68.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)&this->field_0xc4 = local_68.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)&this->field_0xc8 = local_68.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)&this->field_0xcc = local_68.Scale3D.ZW.m128d_f64[1]._4_4_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a2380

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
FRigVMFunction_MathTransformInverse::Execute
          (FRigVMFunction_MathTransformInverse *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,(TTransform<double> *)&this->field_0x10,
                (TTransform<double> *)&this->field_0x70);
  return;
}

// RigVMExecute @ 14a1cbf20

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
FRigVMFunction_MathTransformInverse::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  FRigVMExecuteContext *pFVar7;
  
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
    pTVar6 = (TTransform<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  pTVar3 = (TTransform<double> *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar7,pTVar6,pTVar3);
  return;
}

// StaticExecute @ 14a1e3910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FRigVMFunction_MathTransformInverse::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TTransform<double> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  TTransform<double> local_68;
  
  auVar6._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)(param_2->Scale3D).XY.m128d_f64);
  auVar6._8_4_ = _UNK_15061cc88 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
  auVar6._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
  lVar5 = -(ulonglong)
           ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
           (double)CONCAT44(_UNK_15061cc8c &
                            *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc),
                            _UNK_15061cc88 & *(uint *)((param_2->Scale3D).ZW.m128d_f64 + 1)));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4),
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   *(uint *)(param_2->Scale3D).ZW.m128d_f64));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)param_1,auVar2);
  lVar5 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar6._8_8_);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar6._0_8_)
  ;
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar1);
  if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
    local_68.Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_68.Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_68.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_68.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_68.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_68.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_68.Translation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_68.Translation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_68.Scale3D.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    local_68.Scale3D.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    local_68.Scale3D.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    local_68.Scale3D.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_68.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_68.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_68.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(param_2,&local_68);
  }
  *(undefined4 *)(param_3->Rotation).XY.m128d_f64 = local_68.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 4) =
       local_68.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((param_3->Rotation).XY.m128d_f64 + 1) = local_68.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 0xc) =
       local_68.Rotation.XY.m128d_f64[1]._4_4_;
  *&(param_3->Rotation).ZW.m128d_f64 = local_68.Rotation.ZW.m128d_f64;
  *(undefined4 *)(param_3->Translation).XY.m128d_f64 = local_68.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(param_3->Translation).XY.m128d_f64 + 4) =
       local_68.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((param_3->Translation).XY.m128d_f64 + 1) =
       local_68.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(param_3->Translation).XY.m128d_f64 + 0xc) =
       local_68.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)(param_3->Translation).ZW.m128d_f64 = local_68.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(param_3->Translation).ZW.m128d_f64 + 4) =
       local_68.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((param_3->Translation).ZW.m128d_f64 + 1) =
       local_68.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(param_3->Translation).ZW.m128d_f64 + 0xc) =
       local_68.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)(param_3->Scale3D).XY.m128d_f64 = local_68.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4) =
       local_68.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1) = local_68.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc) =
       local_68.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64 = local_68.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4) =
       local_68.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1) = local_68.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc) =
       local_68.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

