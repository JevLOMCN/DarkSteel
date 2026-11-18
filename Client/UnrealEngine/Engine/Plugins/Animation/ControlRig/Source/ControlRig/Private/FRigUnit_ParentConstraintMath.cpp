// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4be780

UScriptStruct * __cdecl FRigUnit_ParentConstraintMath::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ParentConstraintMath.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ParentConstraintMath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath,(UObject *)pUVar1,
                         L"RigUnit_ParentConstraintMath");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ParentConstraintMath.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ParentConstraintMath.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4be890

UScriptStruct * __thiscall
FRigUnit_ParentConstraintMath::GetExecuteContextStruct(FRigUnit_ParentConstraintMath *this)

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

// Execute @ 14a4be900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ParentConstraintMath::Execute(FRigUnit_ParentConstraintMath *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2a8 [32];
  TArrayView<FConstraintParent_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  local_278.DataPtr = (FConstraintParent *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Input,&local_278,
                &this->AdvancedSettings,&this->Output,&this->ParentCaches);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_ParentConstraintMath @ 14a512d70

FRigUnit_ParentConstraintMath * __thiscall
FRigUnit_ParentConstraintMath::FRigUnit_ParentConstraintMath(FRigUnit_ParentConstraintMath *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRigUnit_ParentConstraintMath *pFVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigUnit_ParentConstraintMath__6B_;
  *&(this->Input).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  uStack_14 = 0;
  uStack_10 = 0;
  *&(this->Input).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Input).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  uStack_c = 0x3f800000;
  *&(this->Input).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Input).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Input).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  (this->Parents).ArrayMax = 0;
  (this->AdvancedSettings).InterpolationType = Average;
  *&(this->Output).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Output).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Output).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Output).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Output).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Output).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->ParentCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentCaches).ArrayNum = 0;
  (this->ParentCaches).ArrayMax = 0;
  pFVar1 = (this->Parents).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)(this->Parents).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRigUnit_ParentConstraintMath *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Parents).ArrayNum;
  if (iVar4 == (this->Parents).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->Parents).AllocatorInstance,&(this->Parents).ArrayMax);
  }
  (this->Parents).ArrayNum = iVar4 + 1;
  pFVar1 = (this->Parents).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_c,uStack_10);
  return this;
}

// Execute @ 14a52b210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ParentConstraintMath::Execute
          (FRigUnit_ParentConstraintMath *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FConstraintParent_const_,int> local_18;
  
  local_18.DataPtr = (FConstraintParent *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
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
  StaticExecute(param_1,&this->Input,&local_18,&this->AdvancedSettings,&this->Output,
                &this->ParentCaches);
  return;
}

// RigVMExecute @ 14a54c220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ParentConstraintMath::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  uchar *puVar5;
  FRigUnit_ParentConstraintMath_AdvancedSettings *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  TTransform<double> *pTVar8;
  FRigVMSlice *pFVar9;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar10;
  FControlRigExecuteContext *pFVar11;
  TArrayView<FConstraintParent_const_,int> local_28;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar4 = (TTransform<double> *)pFVar7->Ptr;
  }
  else {
    pTVar4 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar5 = pFVar7[1].Ptr;
  }
  else {
    puVar5 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigUnit_ParentConstraintMath_AdvancedSettings *)pFVar7[2].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_ParentConstraintMath_AdvancedSettings *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar10 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  local_28.DataPtr = *(FConstraintParent **)puVar5;
  local_28.ArrayNum = *(int *)(puVar5 + 8);
  if (local_28.ArrayNum < 0) {
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
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pTVar4,&local_28,pFVar6,pTVar8,pTVar10);
  return;
}

// StaticExecute @ 14a587550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_ParentConstraintMath::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          TArrayView<FConstraintParent_const_,int> *param_3,
          FRigUnit_ParentConstraintMath_AdvancedSettings *param_4,TTransform<double> *param_5,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_6)

{
  ushort uVar1;
  URigHierarchy *this;
  FScriptContainerElement *pFVar2;
  FRigTransformElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  FRigElementKey *pFVar9;
  UScriptStruct *pUVar10;
  TQuat<double> *pTVar11;
  int iVar12;
  TTransform<double> *pTVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar46;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 auVar53 [16];
  double dVar55;
  double dVar56;
  uint uVar57;
  double dVar58;
  double dVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  double adVar63 [2];
  undefined1 auVar64 [16];
  double adVar65 [2];
  double dVar66;
  double dVar70;
  __m128d _Var67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  __m128d _Var71;
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar84;
  float fVar85;
  double dVar86;
  undefined1 auVar87 [16];
  double dVar88;
  uint uVar89;
  uint uVar90;
  undefined1 auStackY_428 [32];
  longlong local_3f8;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_358 [2];
  double local_348 [2];
  double local_338;
  double local_328 [2];
  double local_318 [2];
  double local_308 [2];
  double local_2f8 [2];
  TQuat<double> local_2e8;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    if (param_6->ArrayNum != param_3->ArrayNum) {
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (param_6,param_3->ArrayNum,Default);
    }
    fVar85 = __real_38d1b717;
    iVar12 = param_3->ArrayNum;
    uVar14 = 0;
    fVar60 = 0.0;
    if (0 < iVar12) {
      lVar18 = 0;
      lVar17 = 0;
      do {
        uVar57 = 0;
        if ((int)uVar14 < iVar12) {
          uVar57 = ~uVar14 >> 0x1f;
        }
        if ((uVar57 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (FRigElementKey *)(&(param_3->DataPtr->Item).Type + lVar17);
        uVar57 = 0;
        if ((int)uVar14 < param_6->ArrayNum) {
          uVar57 = ~uVar14 >> 0x1f;
        }
        if ((uVar57 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar7 = FCachedRigElement::UpdateCache
                          ((FCachedRigElement *)((param_6->AllocatorInstance).Data + lVar18),pFVar9,
                           this);
        if (bVar7) {
          fVar61 = *(float *)(pFVar9 + 1);
          if (fVar61 <= 0.0) {
            fVar61 = 0.0;
          }
          if (fVar85 <= fVar61) {
            fVar60 = fVar60 + fVar61;
          }
        }
        uVar14 = uVar14 + 1;
        iVar12 = param_3->ArrayNum;
        lVar17 = lVar17 + 0x10;
        lVar18 = lVar18 + 0x20;
      } while ((int)uVar14 < iVar12);
      if (fVar85 < fVar60) {
        uVar15 = 0;
        local_3a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dStack_3a0 = 0.0;
        adVar63 = (double  [2])ZEXT816(0);
        adVar65 = (double  [2])ZEXT816(0);
        uVar73 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
        uVar74 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
        uVar75 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
        uVar76 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
        uVar77 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
        uVar78 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
        uVar79 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
        uVar80 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
        fVar85 = 0.0;
        uVar14 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        uVar57 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        uVar89 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        uVar90 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        fVar60 = __real_3f800000 / fVar60;
        local_3b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
        local_398 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
        _Var67 = GlobalVectorConstants::DoubleOne.XY;
        _Var71 = GlobalVectorConstants::DoubleOne.ZW;
        local_388 = local_3a8;
        dStack_380 = dStack_3a0;
        if (0 < iVar12) {
          lVar17 = 0;
          local_3f8 = 0;
          do {
            uVar16 = ~uVar15 >> 0x1f;
            uVar8 = 0;
            if ((int)uVar15 < param_6->ArrayNum) {
              uVar8 = uVar16;
            }
            if (uVar8 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar77 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
              uVar78 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
              uVar79 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
              uVar80 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
              uVar73 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
              uVar74 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
              uVar75 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
              uVar76 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
              uVar14 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
              uVar57 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
              uVar89 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
              uVar90 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
              _Var67 = GlobalVectorConstants::DoubleOne.XY;
              _Var71 = GlobalVectorConstants::DoubleOne.ZW;
            }
            pFVar2 = (param_6->AllocatorInstance).Data;
            if (*(short *)(pFVar2 + lVar17 + 0xc) == -1) goto LAB_14a587ffe;
            bVar7 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar2 + lVar17 + 4));
            if (((bVar7) && (*(longlong *)(pFVar2 + lVar17 + 4) != 0)) &&
               (pFVar2[lVar17] != (FScriptContainerElement)0x0)) {
              uVar14 = 0;
              if ((int)uVar15 < param_3->ArrayNum) {
                uVar14 = uVar16;
              }
              if ((uVar14 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              fVar61 = *(float *)((longlong)&param_3->DataPtr->Weight + local_3f8);
              if (fVar61 <= 0.0) {
                fVar61 = 0.0;
              }
              if (fVar61 < __real_38d1b717) goto LAB_14a587fdc;
              fVar61 = fVar61 * fVar60;
              fVar85 = fVar85 + fVar61;
              uVar14 = 0;
              if ((int)uVar15 < param_6->ArrayNum) {
                uVar14 = uVar16;
              }
              if ((uVar14 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar1 = *(ushort *)((param_6->AllocatorInstance).Data + lVar17 + 0xc);
              if (uVar1 == 0xffff) {
LAB_14a587a5a:
                local_268.Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                local_268.Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                local_268.Translation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                local_268.Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                local_268.Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                local_268.Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              }
              else {
                uVar14 = (uint)uVar1;
                if ((this->Elements).ArrayNum <= (int)uVar14) goto LAB_14a587a5a;
                uVar57 = 0;
                if ((int)uVar14 < (this->Elements).ArrayNum) {
                  uVar57 = ~uVar14 >> 0x1f;
                }
                if ((uVar57 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar3 = *(FRigTransformElement **)
                          ((this->Elements).AllocatorInstance.Data + (ulonglong)uVar14 * 8);
                if (pFVar3 == (FRigTransformElement *)0x0) goto LAB_14a587a5a;
                lVar18 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
                pUVar10 = FRigTransformElement::StaticStruct();
                if (pUVar10 == (UScriptStruct *)0x0) goto LAB_14a587a5a;
                iVar12 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar18 + 0x38) < iVar12) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar12 * 8) !=
                    &pUVar10->_padding_)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (!bVar7) goto LAB_14a587a5a;
                URigHierarchy::GetTransform(this,&local_268,pFVar3,CurrentGlobal);
              }
              local_208.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
              local_208.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
              local_208.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
              local_208.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
              local_208.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
              local_208.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
              uVar14 = 0;
              if ((int)uVar15 < param_6->ArrayNum) {
                uVar14 = uVar16;
              }
              local_208.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
              local_208.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
              local_208.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
              local_208.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
              local_208.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
              local_208.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
              if ((uVar14 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar14 = 0xffffffff;
              uVar1 = *(ushort *)((param_6->AllocatorInstance).Data + lVar17 + 0xc);
              if (uVar1 != 0xffff) {
                uVar14 = (uint)uVar1;
              }
              URigHierarchy::GetGlobalTransformByIndex(this,&local_1a8,uVar14,true);
              UE::Math::TTransform<double>::GetRelativeTransform(&local_208,&local_148,&local_1a8);
              pTVar13 = &local_2c8;
              local_2c8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_2c8.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_2c8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_2c8.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_2c8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_2c8.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_2c8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_2c8.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_2c8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_2c8.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_2c8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_2c8.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              UE::Math::TTransform<double>::Multiply(pTVar13,&local_148,&local_268);
              uVar77 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
              uVar78 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
              uVar79 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
              uVar80 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
              uVar73 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
              uVar74 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
              uVar75 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
              uVar76 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
              uVar14 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
              uVar57 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
              uVar89 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
              uVar90 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
              local_268.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
              local_268.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
              local_268.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
              local_268.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
              local_268.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
              local_268.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
              local_268.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
              local_268.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
              auVar82._0_8_ =
                   local_2c8.Rotation.ZW.m128d_f64[0] * local_2c8.Rotation.ZW.m128d_f64[0] +
                   local_2c8.Rotation.XY.m128d_f64[0] * local_2c8.Rotation.XY.m128d_f64[0];
              auVar82._8_8_ =
                   local_2c8.Rotation.ZW.m128d_f64[1] * local_2c8.Rotation.ZW.m128d_f64[1] +
                   local_2c8.Rotation.XY.m128d_f64[1] * local_2c8.Rotation.XY.m128d_f64[1];
              auVar37._8_4_ = SUB84(auVar82._8_8_,0);
              auVar37._0_8_ = auVar82._0_8_;
              auVar37._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
              auVar68._0_8_ = auVar37._8_8_ + auVar82._0_8_;
              auVar68._8_8_ = auVar82._0_8_ + auVar82._8_8_;
              auVar37 = sqrtpd(auVar82,auVar68);
              uVar19 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                        auVar68._0_8_);
              uVar21 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                        auVar68._8_8_);
              auVar82 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar37);
              auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar37);
              auVar83._0_8_ =
                   uVar19 & (ulonglong)(auVar82._0_8_ * local_2c8.Rotation.XY.m128d_f64[0]);
              uVar20 = uVar21 & (ulonglong)(auVar82._8_8_ * local_2c8.Rotation.XY.m128d_f64[1]);
              auVar83._8_4_ = (undefined4)uVar20;
              auVar83._12_4_ = (undefined4)(uVar20 >> 0x20);
              auVar47._0_4_ =
                   ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
              auVar47._4_4_ =
                   ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
              ;
              auVar47._8_4_ =
                   ~(uint)uVar21 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
              auVar47._12_4_ =
                   ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
              ;
              local_268.Rotation.XY.m128d_f64 = (double  [2])(auVar83 | auVar47);
              uVar19 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                        auVar68._0_8_);
              uVar21 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                        auVar68._8_8_);
              auVar87._0_8_ =
                   uVar19 & (ulonglong)(auVar37._0_8_ * local_2c8.Rotation.ZW.m128d_f64[0]);
              uVar20 = uVar21 & (ulonglong)(auVar37._8_8_ * local_2c8.Rotation.ZW.m128d_f64[1]);
              auVar87._8_4_ = (undefined4)uVar20;
              auVar87._12_4_ = (undefined4)(uVar20 >> 0x20);
              auVar51._0_4_ = ~(uint)uVar19 & uVar14;
              auVar51._4_4_ = ~(uint)(uVar19 >> 0x20) & uVar57;
              auVar51._8_4_ = ~(uint)uVar21 & uVar89;
              auVar51._12_4_ = ~(uint)(uVar21 >> 0x20) & uVar90;
              local_268.Rotation.ZW.m128d_f64 = (double  [2])(auVar87 | auVar51);
              dVar50 = adVar63[0];
              dVar54 = adVar63[1];
              dVar55 = adVar65[0];
              dVar56 = adVar65[1];
              _Var67 = GlobalVectorConstants::DoubleOne.XY;
              _Var71 = GlobalVectorConstants::DoubleOne.ZW;
              if (param_4->InterpolationType == Average) {
                dVar58 = (double)fVar61;
                dVar59 = (double)fVar61;
                dVar66 = (double)fVar61;
                dVar70 = (double)fVar61;
                dVar81 = local_268.Rotation.XY.m128d_f64[0] * dVar58;
                dVar84 = local_268.Rotation.XY.m128d_f64[1] * dVar59;
                dVar86 = local_268.Rotation.ZW.m128d_f64[0] * dVar66;
                dVar88 = local_268.Rotation.ZW.m128d_f64[1] * dVar70;
                auVar24._8_4_ = SUB84(dVar84,0);
                auVar24._0_8_ = dVar81;
                auVar24._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
                auVar38._8_4_ = SUB84(dVar88,0);
                auVar38._0_8_ = dVar86;
                auVar38._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
                dVar36 = dVar86 * dVar55 + dVar81 * dVar50;
                dVar46 = auVar38._8_8_ * dVar56 + auVar24._8_8_ * dVar54;
                auVar25._8_4_ = SUB84(dVar46,0);
                auVar25._0_8_ = dVar36;
                auVar25._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                uVar20 = -(ulonglong)(0.0 <= auVar25._8_8_ + dVar36);
                uVar19 = -(ulonglong)(0.0 <= dVar36 + dVar46);
                uVar8 = (uint)(uVar20 >> 0x20);
                uVar16 = (uint)(uVar19 >> 0x20);
                auVar48._0_4_ = ~(uint)uVar20 & SUB84(0.0 - dVar81,0);
                auVar48._4_4_ = ~uVar8 & (uint)((ulonglong)(0.0 - dVar81) >> 0x20);
                auVar48._8_4_ = ~(uint)uVar19 & SUB84(0.0 - dVar84,0);
                auVar48._12_4_ = ~uVar16 & (uint)((ulonglong)(0.0 - dVar84) >> 0x20);
                auVar39._0_8_ = uVar20 & (ulonglong)dVar81;
                auVar39._8_4_ = (undefined4)((ulonglong)dVar84 & uVar19);
                auVar39._12_4_ = (undefined4)(((ulonglong)dVar84 & uVar19) >> 0x20);
                auVar26._0_4_ = ~(uint)uVar20 & SUB84(0.0 - dVar86,0);
                auVar26._4_4_ = ~uVar8 & (uint)((ulonglong)(0.0 - dVar86) >> 0x20);
                auVar26._8_4_ = ~(uint)uVar19 & SUB84(0.0 - dVar88,0);
                auVar26._12_4_ = ~uVar16 & (uint)((ulonglong)(0.0 - dVar88) >> 0x20);
                auVar40._8_4_ = SUB84(dVar59,0);
                auVar40._0_8_ = dVar58;
                auVar40._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
                auVar52._0_8_ = uVar20 & (ulonglong)dVar86;
                auVar52._8_4_ = (undefined4)(uVar19 & (ulonglong)dVar88);
                auVar52._12_4_ = (undefined4)((uVar19 & (ulonglong)dVar88) >> 0x20);
                adVar65[0] = dVar55 + SUB168(auVar26 | auVar52,0);
                adVar65[1] = dVar56 + SUB168(auVar26 | auVar52,8);
                auVar41._8_4_ = SUB84(dVar70,0);
                auVar41._0_8_ = dVar66;
                auVar41._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
                local_3b8._8_8_ =
                     (double)local_3b8._8_8_ + auVar40._8_8_ * local_2c8.Translation.XY.m128d_f64[1]
                ;
                local_3b8._0_8_ =
                     (double)local_3b8._0_8_ + dVar58 * local_2c8.Translation.XY.m128d_f64[0];
                local_3a8 = local_3a8 + dVar66 * local_2c8.Translation.ZW.m128d_f64[0];
                dStack_3a0 = dStack_3a0 + auVar41._8_8_ * local_2c8.Translation.ZW.m128d_f64[1];
                adVar63[0] = dVar50 + SUB168(auVar48 | auVar39,0);
                adVar63[1] = dVar54 + SUB168(auVar48 | auVar39,8);
                local_398._8_8_ =
                     (double)local_398._8_8_ + dVar59 * local_2c8.Scale3D.XY.m128d_f64[1];
                local_398._0_8_ =
                     (double)local_398._0_8_ + dVar58 * local_2c8.Scale3D.XY.m128d_f64[0];
                local_388 = local_388 + dVar66 * local_2c8.Scale3D.ZW.m128d_f64[0];
                dStack_380 = dStack_380 + dVar70 * local_2c8.Scale3D.ZW.m128d_f64[1];
              }
              else {
                if (param_4->InterpolationType != Shortest) {
                  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_5743640656631299555>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                                     ,0x21d,"false");
                  if (bVar7) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_3b8 = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
                  local_3a8 = (param_2->Translation).ZW.m128d_f64[0];
                  dStack_3a0 = (param_2->Translation).ZW.m128d_f64[1];
                  adVar63 = *&(param_2->Rotation).XY.m128d_f64;
                  adVar65 = *&(param_2->Rotation).ZW.m128d_f64;
                  uVar14 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                  uVar57 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                  uVar89 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                  uVar90 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                  uVar73 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
                  uVar74 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
                  uVar75 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
                  uVar76 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
                  uVar77 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
                  uVar78 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
                  uVar79 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
                  uVar80 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
                  local_398 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
                  local_388 = (param_2->Scale3D).ZW.m128d_f64[0];
                  dStack_380 = (param_2->Scale3D).ZW.m128d_f64[1];
                  _Var67 = GlobalVectorConstants::DoubleOne.XY;
                  _Var71 = GlobalVectorConstants::DoubleOne.ZW;
                  break;
                }
                auVar27._8_8_ = -(ulonglong)(dVar56 == 0.0);
                auVar27._0_8_ = -(ulonglong)(dVar55 == 0.0);
                iVar12 = movmskpd((int)pTVar13,auVar27);
                auVar42._8_8_ = -(ulonglong)(dVar54 == 0.0);
                auVar42._0_8_ = -(ulonglong)(dVar50 == 0.0);
                uVar8 = movmskpd(1,auVar42);
                local_358 = adVar63;
                local_348 = adVar65;
                if ((iVar12 << 2 | uVar8) != 0xf) {
                  fVar35 = fVar61 / fVar85;
                  dVar50 = (double)fVar35;
                  dVar54 = (double)fVar35;
                  dVar55 = (double)fVar35;
                  dVar56 = (double)fVar35;
                  dVar66 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar50;
                  dVar70 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar54;
                  dVar36 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar55;
                  dVar46 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar56;
                  auVar43._8_4_ = SUB84(dVar70,0);
                  auVar43._0_8_ = dVar66;
                  auVar43._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
                  auVar28._8_4_ = SUB84(dVar54,0);
                  auVar28._0_8_ = dVar50;
                  auVar28._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
                  auVar49._8_4_ = SUB84(dVar46,0);
                  auVar49._0_8_ = dVar36;
                  auVar49._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                  auVar29._8_4_ = SUB84(dVar56,0);
                  auVar29._0_8_ = dVar55;
                  auVar29._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                  local_3a8 = dVar36 * local_3a8 + dVar55 * local_2c8.Translation.ZW.m128d_f64[0];
                  dStack_3a0 = auVar49._8_8_ * dStack_3a0 +
                               auVar29._8_8_ * local_2c8.Translation.ZW.m128d_f64[1];
                  local_388 = dVar36 * local_388 + dVar55 * local_2c8.Scale3D.ZW.m128d_f64[0];
                  dStack_380 = dVar46 * dStack_380 + dVar56 * local_2c8.Scale3D.ZW.m128d_f64[1];
                  auVar53._0_8_ = (double)fVar61;
                  auVar53._8_8_ = 0;
                  local_3b8._8_8_ =
                       auVar43._8_8_ * (double)local_3b8._8_8_ +
                       auVar28._8_8_ * local_2c8.Translation.XY.m128d_f64[1];
                  local_3b8._0_8_ =
                       dVar66 * (double)local_3b8._0_8_ +
                       dVar50 * local_2c8.Translation.XY.m128d_f64[0];
                  local_398._8_8_ =
                       dVar70 * (double)local_398._8_8_ + dVar54 * local_2c8.Scale3D.XY.m128d_f64[1]
                  ;
                  local_398._0_8_ =
                       dVar66 * (double)local_398._0_8_ + dVar50 * local_2c8.Scale3D.XY.m128d_f64[0]
                  ;
                  local_328 = local_268.Rotation.XY.m128d_f64;
                  local_318 = local_268.Rotation.ZW.m128d_f64;
                  pTVar11 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                      (&local_2e8,(TQuat<double> *)local_358,
                                       (TQuat<double> *)local_328,auVar53._0_8_);
                  dVar50 = pTVar11->X;
                  dVar54 = pTVar11->Y;
                  dVar55 = pTVar11->Z;
                  dVar56 = pTVar11->W;
                  local_338 = __real_3e45798ee0000000;
                  dVar66 = dVar55 * dVar55 + dVar50 * dVar50;
                  dVar70 = dVar56 * dVar56 + dVar54 * dVar54;
                  auVar30._8_4_ = SUB84(dVar70,0);
                  auVar30._0_8_ = dVar66;
                  auVar30._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
                  auVar31._0_8_ = auVar30._8_8_ + dVar66;
                  auVar31._8_8_ = dVar66 + dVar70;
                  auVar37 = sqrtpd(auVar53,auVar31);
                  uVar21 = -(ulonglong)(__real_3e45798ee0000000 <= auVar31._0_8_);
                  uVar19 = -(ulonglong)(__real_3e45798ee0000000 <= auVar31._8_8_);
                  auVar68 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar37);
                  uVar14 = (uint)(uVar21 >> 0x20);
                  uVar57 = (uint)(uVar19 >> 0x20);
                  auVar62._0_8_ = uVar21 & (ulonglong)(auVar68._0_8_ * dVar50);
                  uVar20 = uVar19 & (ulonglong)(auVar68._8_8_ * dVar54);
                  auVar62._8_4_ = (undefined4)uVar20;
                  auVar62._12_4_ = (undefined4)(uVar20 >> 0x20);
                  auVar44._0_4_ =
                       ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
                  ;
                  auVar44._4_4_ =
                       ~uVar14 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
                  auVar44._8_4_ =
                       ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
                  ;
                  auVar44._12_4_ =
                       ~uVar57 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                                       );
                  adVar63 = (double  [2])(auVar62 | auVar44);
                  auVar64._0_4_ =
                       ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
                  ;
                  auVar64._4_4_ =
                       ~uVar14 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                                       );
                  auVar64._8_4_ =
                       ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
                  ;
                  auVar64._12_4_ =
                       ~uVar57 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                                       );
                  auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar37);
                  auVar32._0_8_ = (ulonglong)(auVar37._0_8_ * dVar55) & uVar21;
                  uVar19 = (ulonglong)(auVar37._8_8_ * dVar56) & uVar19;
                  auVar32._8_4_ = (undefined4)uVar19;
                  auVar32._12_4_ = (undefined4)(uVar19 >> 0x20);
                  adVar65 = (double  [2])(auVar64 | auVar32);
                  local_358 = adVar63;
                  local_348 = adVar65;
                  local_308 = adVar63;
                  local_2f8 = adVar65;
                  goto LAB_14a587fdc;
                }
                local_3b8._8_8_ = local_2c8.Translation.XY.m128d_f64[1];
                local_3b8._0_8_ = local_2c8.Translation.XY.m128d_f64[0];
                local_3a8 = local_2c8.Translation.ZW.m128d_f64[0];
                dStack_3a0 = local_2c8.Translation.ZW.m128d_f64[1];
                local_398._8_8_ = local_2c8.Scale3D.XY.m128d_f64[1];
                local_398._0_8_ = local_2c8.Scale3D.XY.m128d_f64[0];
                local_388 = local_2c8.Scale3D.ZW.m128d_f64[0];
                dStack_380 = local_2c8.Scale3D.ZW.m128d_f64[1];
                adVar63 = local_268.Rotation.XY.m128d_f64;
                adVar65 = local_268.Rotation.ZW.m128d_f64;
              }
            }
            else {
LAB_14a587fdc:
              uVar77 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
              uVar78 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
              uVar79 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
              uVar80 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
              uVar73 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
              uVar74 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
              uVar75 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
              uVar76 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
              uVar14 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
              uVar57 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
              uVar89 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
              uVar90 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
              _Var67.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
              _Var71.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
            }
LAB_14a587ffe:
            local_3f8 = local_3f8 + 0x10;
            uVar15 = uVar15 + 1;
            lVar17 = lVar17 + 0x20;
          } while ((int)uVar15 < param_3->ArrayNum);
        }
        dVar55 = adVar65[0];
        dVar50 = adVar63[0];
        dVar54 = adVar63[1];
        dVar56 = adVar65[1];
        auVar45._0_8_ = dVar55 * dVar55 + dVar50 * dVar50;
        auVar45._8_8_ = dVar56 * dVar56 + dVar54 * dVar54;
        auVar33._8_4_ = SUB84(auVar45._8_8_,0);
        auVar33._0_8_ = auVar45._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
        auVar34._0_8_ = auVar33._8_8_ + auVar45._0_8_;
        auVar34._8_8_ = auVar45._0_8_ + auVar45._8_8_;
        auVar37 = sqrtpd(auVar45,auVar34);
        uVar19 = -(ulonglong)((double)CONCAT44(uVar78,uVar77) <= auVar34._0_8_);
        uVar22 = -(ulonglong)((double)CONCAT44(uVar80,uVar79) <= auVar34._8_8_);
        auVar68 = divpd((undefined1  [16])_Var67.m128d_f64,auVar37);
        auVar37 = divpd((undefined1  [16])_Var71.m128d_f64,auVar37);
        uVar21 = -(ulonglong)((double)CONCAT44(uVar74,uVar73) <= auVar34._0_8_);
        uVar23 = -(ulonglong)((double)CONCAT44(uVar76,uVar75) <= auVar34._8_8_);
        auVar72._0_8_ = uVar21 & (ulonglong)(auVar37._0_8_ * dVar55);
        uVar20 = uVar23 & (ulonglong)(auVar37._8_8_ * dVar56);
        auVar72._8_4_ = (undefined4)uVar20;
        auVar72._12_4_ = (undefined4)(uVar20 >> 0x20);
        auVar5._4_4_ = ~(uint)(uVar21 >> 0x20) & uVar57;
        auVar5._0_4_ = ~(uint)uVar21 & uVar14;
        auVar5._8_4_ = ~(uint)uVar23 & uVar89;
        auVar5._12_4_ = ~(uint)(uVar23 >> 0x20) & uVar90;
        auVar69._0_8_ = uVar19 & (ulonglong)(auVar68._0_8_ * dVar50);
        uVar20 = uVar22 & (ulonglong)(auVar68._8_8_ * dVar54);
        auVar69._8_4_ = (undefined4)uVar20;
        auVar69._12_4_ = (undefined4)(uVar20 >> 0x20);
        auVar6._4_4_ = ~(uint)(uVar19 >> 0x20) &
                       GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar6._0_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar6._8_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar6._12_4_ =
             ~(uint)(uVar22 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64 = auVar69 | auVar6;
        *(undefined1 (*) [16])(param_5->Rotation).ZW.m128d_f64 = auVar72 | auVar5;
        (param_5->Translation).XY.m128d_f64[0] = (double)local_3b8._0_8_;
        (param_5->Translation).XY.m128d_f64[1] = (double)local_3b8._8_8_;
        (param_5->Translation).ZW.m128d_f64[0] = local_3a8;
        (param_5->Translation).ZW.m128d_f64[1] = dStack_3a0;
        (param_5->Scale3D).XY.m128d_f64[0] = (double)local_398._0_8_;
        (param_5->Scale3D).XY.m128d_f64[1] = (double)local_398._8_8_;
        (param_5->Scale3D).ZW.m128d_f64[0] = local_388;
        (param_5->Scale3D).ZW.m128d_f64[1] = dStack_380;
      }
    }
  }
  return;
}

