// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4ad4f0

UScriptStruct * __cdecl FRigUnit_ParentConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ParentConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ParentConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint,(UObject *)pUVar1,
                         L"RigUnit_ParentConstraint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ParentConstraint.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ParentConstraint.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ad570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ParentConstraint::GetExecuteContextStruct(FRigUnit_ParentConstraint *this)

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

// Execute @ 14a4adab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ParentConstraint::Execute(FRigUnit_ParentConstraint *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2c8 [32];
  TArrayView<FConstraintParent_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Child,this->bMaintainOffset,
                &this->Filter,&local_278,&this->AdvancedSettings,this->Weight,&this->ChildCache,
                &this->ParentCaches);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_ParentConstraint @ 14a512c20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_ParentConstraint * __thiscall
FRigUnit_ParentConstraint::FRigUnit_ParentConstraint(FRigUnit_ParentConstraint *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRigUnit_ParentConstraint *pFVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_ParentConstraint__6B_;
  (this->Child).Name.ComparisonIndex = 0;
  (this->Child).Name.Number = 0;
  (this->Child).Type = Bone;
  this->bMaintainOffset = true;
  (this->Filter).TranslationFilter.bX = true;
  (this->Filter).TranslationFilter.bY = true;
  (this->Filter).TranslationFilter.bZ = true;
  (this->Filter).RotationFilter.bX = true;
  (this->Filter).RotationFilter.bY = true;
  (this->Filter).RotationFilter.bZ = true;
  (this->Filter).ScaleFilter.bX = true;
  (this->Filter).ScaleFilter.bY = true;
  (this->Filter).ScaleFilter.bZ = true;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  (this->Parents).ArrayMax = 0;
  (this->AdvancedSettings).InterpolationType = Average;
  (this->AdvancedSettings).RotationOrderForFilter = XZY;
  this->Weight = 1.0;
  (this->ChildCache).Key.Type = None;
  (this->ChildCache).Key.Name.ComparisonIndex = 0;
  (this->ChildCache).Key.Name.Number = 0;
  (this->ChildCache).Index = 0xffff;
  (this->ChildCache).ContainerVersion = -1;
  (this->ChildCache).Element = (FRigBaseElement *)0x0;
  (this->ParentCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentCaches).ArrayNum = 0;
  (this->ParentCaches).ArrayMax = 0;
  pFVar1 = (this->Parents).AllocatorInstance.Data;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
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
      pFVar5 = (FRigUnit_ParentConstraint *)(*pcVar2)();
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

// Execute @ 14a52b160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ParentConstraint::Execute
          (FRigUnit_ParentConstraint *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&this->Child,this->bMaintainOffset,&this->Filter,&local_18,
                &this->AdvancedSettings,this->Weight,&this->ChildCache,&this->ParentCaches);
  return;
}

// RigVMExecute @ 14a54bf70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ParentConstraint::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FTransformFilter *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  FRigUnit_ParentConstraint_AdvancedSettings *pFVar10;
  float *pfVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar14;
  FControlRigExecuteContext *pFVar15;
  TArrayView<FConstraintParent_const_,int> local_48 [2];
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar9[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  bVar4 = (bool)*puVar7;
  if (iVar2 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FTransformFilter *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FTransformFilter *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FRigUnit_ParentConstraint_AdvancedSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar14 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  local_48[0].DataPtr = *(FConstraintParent **)puVar7;
  local_48[0].ArrayNum = *(int *)(puVar7 + 8);
  if (local_48[0].ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar6,bVar4,pFVar8,local_48,pFVar10,fVar1,pFVar13,pTVar14);
  return;
}

// StaticExecute @ 14a586370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_ParentConstraint::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FTransformFilter *param_4,TArrayView<FConstraintParent_const_,int> *param_5,
          FRigUnit_ParentConstraint_AdvancedSettings *param_6,float param_7,
          FCachedRigElement *param_8,TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_9)

{
  __m128d *p_Var1;
  undefined8 uVar2;
  double adVar3 [2];
  double adVar4 [2];
  undefined8 uVar5;
  ERigElementType EVar6;
  ushort uVar7;
  URigHierarchy *this;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double *pdVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  FConstraintParent *pFVar17;
  FRigControlElement *pFVar18;
  TTransform<double> *pTVar19;
  TQuat<double> *pTVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  URigHierarchy *pUVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  double dVar52;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar63;
  undefined1 auVar56 [16];
  double dVar53;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar79;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  __m128d _Var90;
  undefined1 auVar91 [16];
  __m128d _Var92;
  undefined1 auVar93 [16];
  float fVar94;
  double dVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  double dVar98;
  float fVar99;
  double dVar100;
  undefined1 auVar101 [16];
  double dVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  undefined4 uVar110;
  uint uVar111;
  uint uVar112;
  undefined1 auStackY_8d8 [32];
  double local_858;
  double dStack_850;
  TVector<double>_u_0 local_840;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  double local_7e8 [2];
  double local_7d8;
  double dStack_7d0;
  TVector<double>_u_0 local_7c8;
  double local_7a8 [2];
  double local_798 [2];
  double local_788;
  double local_778 [2];
  double local_768 [2];
  TQuat<double> local_758;
  TQuat<double> local_738;
  double local_708;
  double local_6f0;
  TTransform<double> local_6e8;
  double local_688 [2];
  double local_678 [2];
  TQuat<double> local_668;
  TQuat<double> local_648;
  TTransform<double> local_628;
  TTransform<double> local_5c8;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  fVar51 = __real_38d1b717;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  if (param_7 < __real_38d1b717) {
    return;
  }
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  bVar14 = FCachedRigElement::UpdateCache(param_8,param_2,this);
  if (!bVar14) {
    return;
  }
  if (param_9->ArrayNum != param_5->ArrayNum) {
    TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_9,param_5->ArrayNum,Default);
  }
  EVar6 = param_2->Type;
  uVar25 = 0;
  auVar55 = ZEXT816(0);
  if (param_5->ArrayNum < 1) {
    return;
  }
  do {
    pFVar17 = TArrayView<FConstraintParent_const_,int>::operator[](param_5,uVar25);
    uVar21 = 0;
    if ((int)uVar25 < param_9->ArrayNum) {
      uVar21 = ~uVar25 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar14 = FCachedRigElement::UpdateCache
                       ((FCachedRigElement *)
                        ((param_9->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x20),
                        &pFVar17->Item,this);
    if (bVar14) {
      fVar94 = pFVar17->Weight;
      if (fVar94 <= 0.0) {
        fVar94 = 0.0;
      }
      if (fVar51 <= fVar94) {
        auVar55._0_4_ = auVar55._0_4_ + fVar94;
      }
    }
    uVar25 = uVar25 + 1;
  } while ((int)uVar25 < param_5->ArrayNum);
  if (auVar55._0_4_ <= fVar51) {
    return;
  }
  uVar26 = 0;
  local_628.Translation.ZW.m128d_f64[1] = 0.0;
  local_628.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_628.Rotation.XY.m128d_f64 = (double  [2])ZEXT816(0);
  local_628.Rotation.ZW.m128d_f64 = (double  [2])ZEXT816(0);
  uVar16 = 0xffffffff;
  fVar94 = 0.0;
  uVar103 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
  uVar104 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
  uVar105 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
  uVar106 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
  uVar107 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
  uVar108 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
  uVar109 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
  uVar110 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
  uVar25 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar111 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar112 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  local_628.Translation.XY.m128d_f64[0] =
       (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  local_628.Translation.XY.m128d_f64[1] =
       (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_628.Scale3D.XY.m128d_f64[0] = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_
  ;
  local_628.Scale3D.XY.m128d_f64[1] = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_
  ;
  fVar99 = __real_3f800000 / auVar55._0_4_;
  _Var90 = GlobalVectorConstants::DoubleOne.ZW;
  _Var92 = GlobalVectorConstants::DoubleOne.XY;
  local_628.Scale3D.ZW.m128d_f64 = local_628.Translation.ZW.m128d_f64;
  if (0 < param_5->ArrayNum) {
    lVar28 = 0;
LAB_14a5865e2:
    uVar27 = ~uVar26 >> 0x1f;
    uVar15 = 0;
    if ((int)uVar26 < param_9->ArrayNum) {
      uVar15 = uVar27;
    }
    if (uVar15 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar107 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
      uVar108 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
      uVar109 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
      uVar110 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
      uVar103 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
      uVar104 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
      uVar105 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
      uVar106 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
      uVar25 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar111 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar112 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      _Var90 = GlobalVectorConstants::DoubleOne.ZW;
      _Var92 = GlobalVectorConstants::DoubleOne.XY;
    }
    pFVar8 = (param_9->AllocatorInstance).Data;
    if (*(short *)(pFVar8 + lVar28 + 0xc) != -1) {
      bVar14 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar8 + lVar28 + 4));
      if (((bVar14) && (*(longlong *)(pFVar8 + lVar28 + 4) != 0)) &&
         (pFVar8[lVar28] != (FScriptContainerElement)0x0)) {
        pFVar17 = TArrayView<FConstraintParent_const_,int>::operator[](param_5,uVar26);
        fVar86 = pFVar17->Weight;
        if (fVar86 <= 0.0) {
          fVar86 = 0.0;
        }
        if (fVar51 <= fVar86) {
          fVar86 = fVar86 * fVar99;
          uVar25 = 0;
          if ((int)uVar26 < param_9->ArrayNum) {
            uVar25 = uVar27;
          }
          fVar94 = fVar94 + fVar86;
          if ((uVar25 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar25 = 0xffffffff;
          uVar21 = 0xffffffff;
          uVar7 = *(ushort *)((param_9->AllocatorInstance).Data + lVar28 + 0xc);
          if (uVar7 != 0xffff) {
            uVar21 = (uint)uVar7;
          }
          pUVar24 = this;
          URigHierarchy::GetGlobalTransformByIndex(this,&local_568,uVar21,false);
          uVar22 = SUB84(pUVar24,0);
          if (param_3) {
            if (param_8->Index != 0xffff) {
              uVar25 = (uint)param_8->Index;
            }
            URigHierarchy::GetGlobalTransformByIndex(this,&local_388,uVar25,true);
            uVar25 = 0;
            if ((int)uVar26 < param_9->ArrayNum) {
              uVar25 = uVar27;
            }
            if ((uVar25 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar25 = 0xffffffff;
            uVar7 = *(ushort *)((param_9->AllocatorInstance).Data + lVar28 + 0xc);
            if (uVar7 != 0xffff) {
              uVar25 = (uint)uVar7;
            }
            URigHierarchy::GetGlobalTransformByIndex(this,&local_3e8,uVar25,true);
            UE::Math::TTransform<double>::GetRelativeTransform(&local_388,&local_328,&local_3e8);
            pTVar19 = &local_508;
            local_508.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_508.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_508.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_508.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_508.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_508.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_508.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_508.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_508.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_508.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_508.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_508.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply(pTVar19,&local_328,&local_568);
            uVar22 = SUB84(pTVar19,0);
            uVar107 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
            uVar108 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
            uVar109 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
            uVar110 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
            uVar103 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
            uVar104 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
            uVar105 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
            uVar106 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
            uVar25 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            uVar111 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            uVar112 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            local_7e8[1] = local_508.Scale3D.XY.m128d_f64[1];
            local_7e8[0] = local_508.Scale3D.XY.m128d_f64[0];
            local_568.Scale3D.XY.m128d_f64[0] = local_508.Scale3D.XY.m128d_f64[0];
            local_568.Scale3D.XY.m128d_f64[1] = local_508.Scale3D.XY.m128d_f64[1];
            auVar54._0_8_ =
                 local_508.Rotation.ZW.m128d_f64[0] * local_508.Rotation.ZW.m128d_f64[0] +
                 local_508.Rotation.XY.m128d_f64[0] * local_508.Rotation.XY.m128d_f64[0];
            auVar54._8_8_ =
                 local_508.Rotation.ZW.m128d_f64[1] * local_508.Rotation.ZW.m128d_f64[1] +
                 local_508.Rotation.XY.m128d_f64[1] * local_508.Rotation.XY.m128d_f64[1];
            local_568.Scale3D.ZW.m128d_f64[0] = local_508.Scale3D.ZW.m128d_f64[0];
            local_568.Scale3D.ZW.m128d_f64[1] = local_508.Scale3D.ZW.m128d_f64[1];
            auVar96._8_4_ = SUB84(auVar54._8_8_,0);
            auVar96._0_8_ = auVar54._0_8_;
            auVar96._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
            auVar34._0_8_ = auVar96._8_8_ + auVar54._0_8_;
            auVar34._8_8_ = auVar54._0_8_ + auVar54._8_8_;
            local_568.Translation.XY.m128d_f64[0]._0_4_ =
                 local_508.Translation.XY.m128d_f64[0]._0_4_;
            local_568.Translation.XY.m128d_f64[0]._4_4_ =
                 local_508.Translation.XY.m128d_f64[0]._4_4_;
            local_568.Translation.XY.m128d_f64[1]._0_4_ =
                 local_508.Translation.XY.m128d_f64[1]._0_4_;
            local_568.Translation.XY.m128d_f64[1]._4_4_ =
                 local_508.Translation.XY.m128d_f64[1]._4_4_;
            auVar55 = sqrtpd(auVar54,auVar34);
            uVar29 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar34._0_8_);
            uVar31 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar34._8_8_);
            auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55)
            ;
            auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55)
            ;
            auVar97._0_8_ = uVar29 & (ulonglong)(auVar96._0_8_ * local_508.Rotation.XY.m128d_f64[0])
            ;
            uVar30 = uVar31 & (ulonglong)(auVar96._8_8_ * local_508.Rotation.XY.m128d_f64[1]);
            auVar97._8_4_ = (undefined4)uVar30;
            auVar97._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar65._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
            auVar65._4_4_ =
                 ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar65._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
            auVar65._12_4_ =
                 ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            uVar29 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar34._0_8_);
            uVar31 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar34._8_8_);
            auVar101._0_8_ =
                 uVar29 & (ulonglong)(auVar55._0_8_ * local_508.Rotation.ZW.m128d_f64[0]);
            uVar30 = uVar31 & (ulonglong)(auVar55._8_8_ * local_508.Rotation.ZW.m128d_f64[1]);
            auVar101._8_4_ = (undefined4)uVar30;
            auVar101._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar74._0_4_ = ~(uint)uVar29 & uVar25;
            auVar74._4_4_ = ~(uint)(uVar29 >> 0x20) & uVar21;
            auVar74._8_4_ = ~(uint)uVar31 & uVar111;
            auVar74._12_4_ = ~(uint)(uVar31 >> 0x20) & uVar112;
            local_568.Translation.ZW.m128d_f64[0]._0_4_ =
                 local_508.Translation.ZW.m128d_f64[0]._0_4_;
            local_568.Translation.ZW.m128d_f64[0]._4_4_ =
                 local_508.Translation.ZW.m128d_f64[0]._4_4_;
            local_568.Translation.ZW.m128d_f64[1]._0_4_ =
                 local_508.Translation.ZW.m128d_f64[1]._0_4_;
            local_568.Translation.ZW.m128d_f64[1]._4_4_ =
                 local_508.Translation.ZW.m128d_f64[1]._4_4_;
            local_568.Rotation.XY.m128d_f64 = (double  [2])(auVar97 | auVar65);
            local_568.Rotation.ZW.m128d_f64 = (double  [2])(auVar101 | auVar74);
            uVar82 = local_508.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar83 = local_508.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar84 = local_508.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar85 = local_508.Scale3D.ZW.m128d_f64[1]._4_4_;
          }
          else {
            local_7e8[1] = local_568.Scale3D.XY.m128d_f64[1];
            local_7e8[0] = local_568.Scale3D.XY.m128d_f64[0];
            uVar25 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            uVar111 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            uVar112 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            uVar103 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
            uVar104 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
            uVar105 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
            uVar106 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
            uVar107 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
            uVar108 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
            uVar109 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
            uVar110 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
            uVar82 = local_568.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar83 = local_568.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar84 = local_568.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar85 = local_568.Scale3D.ZW.m128d_f64[1]._4_4_;
          }
          dVar79 = local_628.Rotation.XY.m128d_f64[0];
          dVar10 = local_628.Rotation.XY.m128d_f64[1];
          dVar53 = local_628.Rotation.ZW.m128d_f64[0];
          dVar64 = local_628.Rotation.ZW.m128d_f64[1];
          fVar51 = __real_38d1b717;
          _Var90.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
          _Var92.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
          local_808 = local_568.Translation.XY.m128d_f64[0]._0_4_;
          uStack_804 = local_568.Translation.XY.m128d_f64[0]._4_4_;
          uStack_800 = local_568.Translation.XY.m128d_f64[1]._0_4_;
          uStack_7fc = local_568.Translation.XY.m128d_f64[1]._4_4_;
          local_7f8 = local_568.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_7f4 = local_568.Translation.ZW.m128d_f64[0]._4_4_;
          uStack_7f0 = local_568.Translation.ZW.m128d_f64[1]._0_4_;
          uStack_7ec = local_568.Translation.ZW.m128d_f64[1]._4_4_;
          local_7d8 = local_568.Scale3D.ZW.m128d_f64[0];
          dStack_7d0 = local_568.Scale3D.ZW.m128d_f64[1];
          if (param_6->InterpolationType == Average) {
            dVar79 = (double)fVar86;
            dVar10 = (double)fVar86;
            dVar53 = (double)fVar86;
            dVar64 = (double)fVar86;
            dVar95 = local_568.Rotation.XY.m128d_f64[0] * dVar79;
            dVar98 = local_568.Rotation.XY.m128d_f64[1] * dVar10;
            dVar100 = local_568.Rotation.ZW.m128d_f64[0] * dVar53;
            dVar102 = local_568.Rotation.ZW.m128d_f64[1] * dVar64;
            dVar52 = local_628.Rotation.ZW.m128d_f64[0] * dVar100 +
                     local_628.Rotation.XY.m128d_f64[0] * dVar95;
            dVar63 = local_628.Rotation.ZW.m128d_f64[1] * dVar102 +
                     local_628.Rotation.XY.m128d_f64[1] * dVar98;
            auVar35._8_4_ = SUB84(dVar63,0);
            auVar35._0_8_ = dVar52;
            auVar35._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
            uVar30 = -(ulonglong)(0.0 <= auVar35._8_8_ + dVar52);
            uVar29 = -(ulonglong)(0.0 <= dVar52 + dVar63);
            uVar15 = (uint)(uVar30 >> 0x20);
            uVar27 = (uint)(uVar29 >> 0x20);
            auVar66._0_4_ = ~(uint)uVar30 & SUB84(0.0 - dVar95,0);
            auVar66._4_4_ = ~uVar15 & (uint)((ulonglong)(0.0 - dVar95) >> 0x20);
            auVar66._8_4_ = ~(uint)uVar29 & SUB84(0.0 - dVar98,0);
            auVar66._12_4_ = ~uVar27 & (uint)((ulonglong)(0.0 - dVar98) >> 0x20);
            auVar56._0_8_ = uVar30 & (ulonglong)dVar95;
            auVar56._8_4_ = (undefined4)((ulonglong)dVar98 & uVar29);
            auVar56._12_4_ = (undefined4)(((ulonglong)dVar98 & uVar29) >> 0x20);
            auVar36._0_4_ = ~(uint)uVar30 & SUB84(0.0 - dVar100,0);
            auVar36._4_4_ = ~uVar15 & (uint)((ulonglong)(0.0 - dVar100) >> 0x20);
            auVar36._8_4_ = ~(uint)uVar29 & SUB84(0.0 - dVar102,0);
            auVar36._12_4_ = ~uVar27 & (uint)((ulonglong)(0.0 - dVar102) >> 0x20);
            local_628.Rotation.XY.m128d_f64[0] =
                 local_628.Rotation.XY.m128d_f64[0] + SUB168(auVar66 | auVar56,0);
            local_628.Rotation.XY.m128d_f64[1] =
                 local_628.Rotation.XY.m128d_f64[1] + SUB168(auVar66 | auVar56,8);
            auVar75._0_8_ = uVar30 & (ulonglong)dVar100;
            auVar75._8_4_ = (undefined4)(uVar29 & (ulonglong)dVar102);
            auVar75._12_4_ = (undefined4)((uVar29 & (ulonglong)dVar102) >> 0x20);
            local_628.Rotation.ZW.m128d_f64[0] =
                 local_628.Rotation.ZW.m128d_f64[0] + SUB168(auVar36 | auVar75,0);
            local_628.Rotation.ZW.m128d_f64[1] =
                 local_628.Rotation.ZW.m128d_f64[1] + SUB168(auVar36 | auVar75,8);
            local_628.Translation.XY.m128d_f64[1] =
                 local_628.Translation.XY.m128d_f64[1] +
                 (double)CONCAT44(local_568.Translation.XY.m128d_f64[1]._4_4_,
                                  local_568.Translation.XY.m128d_f64[1]._0_4_) * dVar10;
            local_628.Translation.XY.m128d_f64[0] =
                 local_628.Translation.XY.m128d_f64[0] +
                 (double)CONCAT44(local_568.Translation.XY.m128d_f64[0]._4_4_,
                                  local_568.Translation.XY.m128d_f64[0]._0_4_) * dVar79;
            local_628.Translation.ZW.m128d_f64[1] =
                 local_628.Translation.ZW.m128d_f64[1] +
                 (double)CONCAT44(local_568.Translation.ZW.m128d_f64[1]._4_4_,
                                  local_568.Translation.ZW.m128d_f64[1]._0_4_) * dVar64;
            local_628.Translation.ZW.m128d_f64[0] =
                 local_628.Translation.ZW.m128d_f64[0] +
                 (double)CONCAT44(local_568.Translation.ZW.m128d_f64[0]._4_4_,
                                  local_568.Translation.ZW.m128d_f64[0]._0_4_) * dVar53;
            local_628.Scale3D.XY.m128d_f64[1] =
                 local_628.Scale3D.XY.m128d_f64[1] + local_7e8[1] * dVar10;
            local_628.Scale3D.XY.m128d_f64[0] =
                 local_628.Scale3D.XY.m128d_f64[0] + local_7e8[0] * dVar79;
            local_628.Scale3D.ZW.m128d_f64[0] =
                 local_628.Scale3D.ZW.m128d_f64[0] + local_568.Scale3D.ZW.m128d_f64[0] * dVar53;
            local_628.Scale3D.ZW.m128d_f64[1] =
                 local_628.Scale3D.ZW.m128d_f64[1] + local_568.Scale3D.ZW.m128d_f64[1] * dVar64;
            goto LAB_14a586d26;
          }
          if (param_6->InterpolationType != Shortest) {
            bVar14 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5743640656631299805>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                                ,0x123,"false");
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar25 = 0xffffffff;
            if (param_8->Index != 0xffff) {
              uVar25 = (uint)param_8->Index;
            }
            pTVar19 = URigHierarchy::GetGlobalTransformByIndex(this,&local_268,uVar25,false);
            uVar25 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            uVar111 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            uVar112 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            uVar103 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
            uVar104 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
            uVar105 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
            uVar106 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
            uVar107 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
            uVar108 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
            uVar109 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
            uVar110 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
            local_628.Rotation.XY.m128d_f64 = *&(pTVar19->Rotation).XY.m128d_f64;
            local_628.Rotation.ZW.m128d_f64 = *&(pTVar19->Rotation).ZW.m128d_f64;
            local_628.Translation.XY.m128d_f64 = *&(pTVar19->Translation).XY.m128d_f64;
            local_628.Translation.ZW.m128d_f64 = *&(pTVar19->Translation).ZW.m128d_f64;
            local_628.Scale3D.XY.m128d_f64 = *&(pTVar19->Scale3D).XY.m128d_f64;
            local_628.Scale3D.ZW.m128d_f64 = *&(pTVar19->Scale3D).ZW.m128d_f64;
            _Var90 = GlobalVectorConstants::DoubleOne.ZW;
            _Var92 = GlobalVectorConstants::DoubleOne.XY;
            goto LAB_14a586d51;
          }
          adVar3[0] = local_628.Rotation.ZW.m128d_f64[0];
          adVar3[1] = local_628.Rotation.ZW.m128d_f64[1];
          adVar4[0] = local_628.Rotation.XY.m128d_f64[0];
          adVar4[1] = local_628.Rotation.XY.m128d_f64[1];
          auVar37._8_8_ = -(ulonglong)(dVar64 == 0.0);
          auVar37._0_8_ = -(ulonglong)(dVar53 == 0.0);
          iVar23 = movmskpd(uVar22,auVar37);
          auVar67._8_8_ = -(ulonglong)(dVar10 == 0.0);
          auVar67._0_8_ = -(ulonglong)(dVar79 == 0.0);
          uVar15 = movmskpd(1,auVar67);
          local_7a8[0] = local_628.Rotation.XY.m128d_f64[0];
          local_7a8[1] = local_628.Rotation.XY.m128d_f64[1];
          local_798[0] = local_628.Rotation.ZW.m128d_f64[0];
          local_798[1] = local_628.Rotation.ZW.m128d_f64[1];
          if ((iVar23 << 2 | uVar15) != 0xf) {
            fVar51 = fVar86 / fVar94;
            dVar64 = (double)fVar51;
            dVar52 = (double)fVar51;
            dVar63 = (double)fVar51;
            dVar79 = (double)fVar51;
            dVar100 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar64;
            dVar102 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar52;
            dVar95 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar63;
            dVar98 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar79;
            auVar38._8_4_ = SUB84(dVar102,0);
            auVar38._0_8_ = dVar100;
            auVar38._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
            dVar10 = (double)CONCAT44(local_568.Translation.XY.m128d_f64[1]._4_4_,
                                      local_568.Translation.XY.m128d_f64[1]._0_4_) * dVar52 +
                     auVar38._8_8_ * local_628.Translation.XY.m128d_f64[1];
            auVar39._8_4_ = SUB84(dVar98,0);
            auVar39._0_8_ = dVar95;
            auVar39._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
            dVar53 = (double)CONCAT44(local_568.Translation.ZW.m128d_f64[1]._4_4_,
                                      local_568.Translation.ZW.m128d_f64[1]._0_4_) * dVar79 +
                     auVar39._8_8_ * local_628.Translation.ZW.m128d_f64[1];
            dVar79 = (double)CONCAT44(uVar85,uVar84) * dVar79 +
                     dVar98 * local_628.Scale3D.ZW.m128d_f64[1];
            auVar76._0_8_ = (double)fVar86;
            auVar76._8_8_ = 0;
            local_628.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar53,0);
            local_628.Translation.ZW.m128d_f64[0] =
                 (double)CONCAT44(local_568.Translation.ZW.m128d_f64[0]._4_4_,
                                  local_568.Translation.ZW.m128d_f64[0]._0_4_) * dVar63 +
                 dVar95 * local_628.Translation.ZW.m128d_f64[0];
            local_628.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar53 >> 0x20);
            local_628.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
            local_628.Translation.XY.m128d_f64[0] =
                 (double)CONCAT44(local_568.Translation.XY.m128d_f64[0]._4_4_,
                                  local_568.Translation.XY.m128d_f64[0]._0_4_) * dVar64 +
                 dVar100 * local_628.Translation.XY.m128d_f64[0];
            local_628.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
            local_628.Scale3D.XY.m128d_f64[1] =
                 local_7e8[1] * dVar52 + dVar102 * local_628.Scale3D.XY.m128d_f64[1];
            local_628.Scale3D.XY.m128d_f64[0] =
                 local_7e8[0] * dVar64 + dVar100 * local_628.Scale3D.XY.m128d_f64[0];
            local_628.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar79,0);
            local_628.Scale3D.ZW.m128d_f64[0] =
                 (double)CONCAT44(uVar83,uVar82) * dVar63 +
                 dVar95 * local_628.Scale3D.ZW.m128d_f64[0];
            local_628.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar79 >> 0x20);
            local_778 = local_568.Rotation.XY.m128d_f64;
            local_768 = local_568.Rotation.ZW.m128d_f64;
            pTVar20 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (&local_668,(TQuat<double> *)local_7a8,(TQuat<double> *)local_778,
                                 auVar76._0_8_);
            dVar79 = pTVar20->X;
            dVar10 = pTVar20->Y;
            uVar2 = pTVar20->Z;
            uVar5 = pTVar20->W;
            dVar53 = (double)uVar2 * (double)uVar2 + dVar79 * dVar79;
            dVar64 = (double)uVar5 * (double)uVar5 + dVar10 * dVar10;
            auVar40._8_4_ = SUB84(dVar64,0);
            auVar40._0_8_ = dVar53;
            auVar40._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
            auVar41._0_8_ = auVar40._8_8_ + dVar53;
            auVar41._8_8_ = dVar53 + dVar64;
            auVar55 = sqrtpd(auVar76,auVar41);
            local_788 = __real_3e45798ee0000000;
            auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55)
            ;
            uVar31 = -(ulonglong)(__real_3e45798ee0000000 <= auVar41._0_8_);
            uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= auVar41._8_8_);
            uVar25 = (uint)(uVar31 >> 0x20);
            uVar21 = (uint)(uVar29 >> 0x20);
            auVar80._0_8_ = uVar31 & (ulonglong)(auVar96._0_8_ * dVar79);
            uVar30 = uVar29 & (ulonglong)(auVar96._8_8_ * dVar10);
            auVar80._8_4_ = (undefined4)uVar30;
            auVar80._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar57._0_4_ =
                 ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar57._4_4_ =
                 ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar57._8_4_ =
                 ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar57._12_4_ =
                 ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            local_7a8 = (double  [2])(auVar80 | auVar57);
            auVar58._0_4_ =
                 ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar58._4_4_ =
                 ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar58._8_4_ =
                 ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar58._12_4_ =
                 ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55)
            ;
            auVar42._0_8_ = (ulonglong)(auVar55._0_8_ * (double)uVar2) & uVar31;
            uVar29 = (ulonglong)(auVar55._8_8_ * (double)uVar5) & uVar29;
            auVar42._8_4_ = (undefined4)uVar29;
            auVar42._12_4_ = (undefined4)(uVar29 >> 0x20);
            local_798 = (double  [2])(auVar58 | auVar42);
            fVar51 = __real_38d1b717;
            local_688 = local_7a8;
            local_678 = local_798;
            local_628.Rotation.XY.m128d_f64 = local_7a8;
            local_628.Rotation.ZW.m128d_f64 = local_798;
            goto LAB_14a586d09;
          }
          local_628.Translation.XY.m128d_f64[0]._4_4_ = local_568.Translation.XY.m128d_f64[0]._4_4_;
          local_628.Translation.XY.m128d_f64[0]._0_4_ = local_568.Translation.XY.m128d_f64[0]._0_4_;
          local_628.Translation.XY.m128d_f64[1]._0_4_ = local_568.Translation.XY.m128d_f64[1]._0_4_;
          local_628.Translation.XY.m128d_f64[1]._4_4_ = local_568.Translation.XY.m128d_f64[1]._4_4_;
          local_628.Translation.ZW.m128d_f64[0]._4_4_ = local_568.Translation.ZW.m128d_f64[0]._4_4_;
          local_628.Translation.ZW.m128d_f64[0]._0_4_ = local_568.Translation.ZW.m128d_f64[0]._0_4_;
          local_628.Translation.ZW.m128d_f64[1]._0_4_ = local_568.Translation.ZW.m128d_f64[1]._0_4_;
          local_628.Translation.ZW.m128d_f64[1]._4_4_ = local_568.Translation.ZW.m128d_f64[1]._4_4_;
          local_628.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar83;
          local_628.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar82;
          local_628.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar84;
          local_628.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar85;
          local_7a8 = adVar4;
          local_798 = adVar3;
          local_628.Rotation.XY.m128d_f64 = local_568.Rotation.XY.m128d_f64;
          local_628.Rotation.ZW.m128d_f64 = local_568.Rotation.ZW.m128d_f64;
          local_628.Scale3D.XY.m128d_f64 = local_7e8;
          goto LAB_14a586d26;
        }
      }
LAB_14a586d09:
      uVar107 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
      uVar108 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
      uVar109 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
      uVar110 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
      uVar103 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
      uVar104 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
      uVar105 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
      uVar106 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
      uVar25 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar111 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar112 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      _Var90.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
      _Var92.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
    }
LAB_14a586d26:
    uVar26 = uVar26 + 1;
    lVar28 = lVar28 + 0x20;
    if (param_5->ArrayNum <= (int)uVar26) goto LAB_14a586d51;
    goto LAB_14a5865e2;
  }
LAB_14a586d51:
  uVar15 = 0xffffffff;
  uVar26 = 0xffffffff;
  auVar59._0_8_ =
       local_628.Rotation.ZW.m128d_f64[0] * local_628.Rotation.ZW.m128d_f64[0] +
       local_628.Rotation.XY.m128d_f64[0] * local_628.Rotation.XY.m128d_f64[0];
  auVar59._8_8_ =
       local_628.Rotation.ZW.m128d_f64[1] * local_628.Rotation.ZW.m128d_f64[1] +
       local_628.Rotation.XY.m128d_f64[1] * local_628.Rotation.XY.m128d_f64[1];
  auVar43._8_4_ = SUB84(auVar59._8_8_,0);
  auVar43._0_8_ = auVar59._0_8_;
  auVar43._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
  auVar44._0_8_ = auVar43._8_8_ + auVar59._0_8_;
  auVar44._8_8_ = auVar59._0_8_ + auVar59._8_8_;
  auVar55 = sqrtpd(auVar59,auVar44);
  uVar29 = -(ulonglong)((double)CONCAT44(uVar108,uVar107) <= auVar44._0_8_);
  uVar31 = -(ulonglong)((double)CONCAT44(uVar110,uVar109) <= auVar44._8_8_);
  auVar96 = divpd((undefined1  [16])_Var92.m128d_f64,auVar55);
  auVar55 = divpd((undefined1  [16])_Var90.m128d_f64,auVar55);
  auVar93._0_8_ = uVar29 & (ulonglong)(auVar96._0_8_ * local_628.Rotation.XY.m128d_f64[0]);
  uVar30 = uVar31 & (ulonglong)(auVar96._8_8_ * local_628.Rotation.XY.m128d_f64[1]);
  auVar93._8_4_ = (undefined4)uVar30;
  auVar93._12_4_ = (undefined4)(uVar30 >> 0x20);
  auVar12._4_4_ = ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar12._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar12._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar12._12_4_ = ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  local_628.Rotation.XY.m128d_f64 = (double  [2])(auVar93 | auVar12);
  uVar29 = -(ulonglong)((double)CONCAT44(uVar104,uVar103) <= auVar44._0_8_);
  uVar31 = -(ulonglong)((double)CONCAT44(uVar106,uVar105) <= auVar44._8_8_);
  auVar91._0_8_ = uVar29 & (ulonglong)(auVar55._0_8_ * local_628.Rotation.ZW.m128d_f64[0]);
  uVar30 = uVar31 & (ulonglong)(auVar55._8_8_ * local_628.Rotation.ZW.m128d_f64[1]);
  auVar91._8_4_ = (undefined4)uVar30;
  auVar91._12_4_ = (undefined4)(uVar30 >> 0x20);
  auVar11._4_4_ = ~(uint)(uVar29 >> 0x20) & uVar21;
  auVar11._0_4_ = ~(uint)uVar29 & uVar25;
  auVar11._8_4_ = ~(uint)uVar31 & uVar111;
  auVar11._12_4_ = ~(uint)(uVar31 >> 0x20) & uVar112;
  local_628.Rotation.ZW.m128d_f64 = (double  [2])(auVar91 | auVar11);
  if (param_8->Index != 0xffff) {
    uVar26 = (uint)param_8->Index;
  }
  URigHierarchy::GetParentTransformByIndex(this,&local_2c8,uVar26,false);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_628,&local_5c8,&local_2c8);
  uVar25 = uVar15;
  if (param_8->Index != 0xffff) {
    uVar25 = (uint)param_8->Index;
  }
  URigHierarchy::GetLocalTransformByIndex(this,&local_448,uVar25,false);
  local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_4a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_4a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_4a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_4a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_4a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_4a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  if (EVar6 == Control) {
    if (param_8->Index != 0xffff) {
      uVar15 = (uint)param_8->Index;
    }
    pFVar18 = URigHierarchy::Get<FRigControlElement>(this,uVar15);
    if (pFVar18 != (FRigControlElement *)0x0) {
      pTVar19 = URigHierarchy::GetControlOffsetTransform(this,&local_208,pFVar18,CurrentLocal);
      local_4a8.Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
      local_4a8.Rotation.XY.m128d_f64[1] = (pTVar19->Rotation).XY.m128d_f64[1];
      local_4a8.Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
      local_4a8.Rotation.ZW.m128d_f64[1] = (pTVar19->Rotation).ZW.m128d_f64[1];
      local_4a8.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
      local_4a8.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
      local_4a8.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
      local_4a8.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
      local_4a8.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
      local_4a8.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
      local_4a8.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
      local_4a8.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply(&local_448,&local_448,&local_4a8);
    }
  }
  bVar14 = (param_4->TranslationFilter).bX;
  if (((bVar14 == false) || ((param_4->TranslationFilter).bY == false)) ||
     ((param_4->TranslationFilter).bZ == false)) {
    local_708 = local_448.Translation.ZW.m128d_f64[0];
    local_858 = local_5c8.Translation.XY.m128d_f64[0];
    dStack_850 = local_5c8.Translation.XY.m128d_f64[1];
    if (bVar14 == false) {
      local_858 = local_448.Translation.XY.m128d_f64[0];
    }
    if ((param_4->TranslationFilter).bY == false) {
      dStack_850 = local_448.Translation.XY.m128d_f64[1];
    }
    if ((param_4->TranslationFilter).bZ == false) {
      local_5c8.Translation.ZW.m128d_f64[0] = local_448.Translation.ZW.m128d_f64[0];
    }
    local_5c8.Translation.XY.m128d_f64[0] = local_858;
    local_5c8.Translation.XY.m128d_f64[1] = dStack_850;
    local_5c8.Translation.ZW.m128d_f64[1] = 0.0;
  }
  if ((((param_4->RotationFilter).bX == false) || ((param_4->RotationFilter).bY == false)) ||
     ((param_4->RotationFilter).bZ == false)) {
    local_758.X = local_448.Rotation.XY.m128d_f64[0];
    local_758.Y = local_448.Rotation.XY.m128d_f64[1];
    local_758.Z = local_448.Rotation.ZW.m128d_f64[0];
    local_758.W = local_448.Rotation.ZW.m128d_f64[1];
    AnimationCore::EulerFromQuat
              ((TVector<double> *)&local_7c8._s_0,&local_758,param_6->RotationOrderForFilter,false);
    local_738.X = local_5c8.Rotation.XY.m128d_f64[0];
    local_738.Y = local_5c8.Rotation.XY.m128d_f64[1];
    local_738.Z = local_5c8.Rotation.ZW.m128d_f64[0];
    local_738.W = local_5c8.Rotation.ZW.m128d_f64[1];
    AnimationCore::EulerFromQuat
              ((TVector<double> *)&local_840._s_0,&local_738,param_6->RotationOrderForFilter,false);
    if ((param_4->RotationFilter).bX == false) {
      local_840._s_0.X = local_7c8._s_0.X;
    }
    if ((param_4->RotationFilter).bY == false) {
      local_840._s_0.Y = local_7c8._s_0.Y;
    }
    if ((param_4->RotationFilter).bZ == false) {
      local_840._s_0.Z = local_7c8._s_0.Z;
    }
    pTVar20 = AnimationCore::QuatFromEuler
                        (&local_648,(TVector<double> *)&local_840._s_0,
                         param_6->RotationOrderForFilter,false);
    dVar79 = pTVar20->X;
    dVar10 = pTVar20->Y;
    dVar53 = pTVar20->Z;
    dVar64 = pTVar20->W;
    auVar60._0_8_ = dVar53 * dVar53 + dVar79 * dVar79;
    auVar60._8_8_ = dVar64 * dVar64 + dVar10 * dVar10;
    auVar45._8_4_ = SUB84(auVar60._8_8_,0);
    auVar45._0_8_ = auVar60._0_8_;
    auVar45._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
    auVar46._0_8_ = auVar45._8_8_ + auVar60._0_8_;
    auVar46._8_8_ = auVar60._0_8_ + auVar60._8_8_;
    auVar55 = sqrtpd(auVar60,auVar46);
    uVar29 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar46._0_8_);
    uVar32 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar46._8_8_);
    auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55);
    uVar31 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar46._0_8_);
    uVar33 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar46._8_8_);
    auVar87._0_8_ = uVar29 & (ulonglong)(auVar96._0_8_ * dVar79);
    uVar30 = uVar32 & (ulonglong)(auVar96._8_8_ * dVar10);
    auVar87._8_4_ = (undefined4)uVar30;
    auVar87._12_4_ = (undefined4)(uVar30 >> 0x20);
    auVar68._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar68._4_4_ =
         ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar68._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar68._12_4_ =
         ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    local_5c8.Rotation.XY.m128d_f64 = (double  [2])(auVar87 | auVar68);
    auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
    auVar69._0_8_ = (ulonglong)(auVar55._0_8_ * dVar53) & uVar31;
    uVar30 = uVar33 & (ulonglong)(auVar55._8_8_ * dVar64);
    auVar69._8_4_ = (undefined4)uVar30;
    auVar69._12_4_ = (undefined4)(uVar30 >> 0x20);
    auVar81._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar81._4_4_ =
         ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar81._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar81._12_4_ =
         ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_5c8.Rotation.ZW.m128d_f64 = (double  [2])(auVar69 | auVar81);
  }
  bVar14 = (param_4->ScaleFilter).bX;
  if (((bVar14 == false) || ((param_4->ScaleFilter).bY == false)) ||
     ((param_4->ScaleFilter).bZ == false)) {
    local_828 = (double)CONCAT44(local_5c8.Scale3D.XY.m128d_f64[0]._4_4_,
                                 local_5c8.Scale3D.XY.m128d_f64[0]._0_4_);
    uStack_820 = (double)CONCAT44(local_5c8.Scale3D.XY.m128d_f64[1]._4_4_,
                                  local_5c8.Scale3D.XY.m128d_f64[1]._0_4_);
    local_6f0 = local_448.Scale3D.ZW.m128d_f64[0];
    if (bVar14 == false) {
      local_828 = local_448.Scale3D.XY.m128d_f64[0];
    }
    if ((param_4->ScaleFilter).bY == false) {
      uStack_820 = local_448.Scale3D.XY.m128d_f64[1];
    }
    if ((param_4->ScaleFilter).bZ == false) {
      local_5c8.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
    }
    local_6e8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         (undefined4)((ulonglong)local_5c8.Scale3D.ZW.m128d_f64[0] >> 0x20);
    local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_ = 0;
    local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_ = 0;
    local_5c8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ = (undefined4)local_828;
    local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ = local_828._4_4_;
    local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ = (undefined4)uStack_820;
    local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ = uStack_820._4_4_;
  }
  else {
    local_6e8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_5c8.Scale3D.ZW.m128d_f64[0]._4_4_;
  }
  local_6e8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_5c8.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_6e8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_6e8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_;
  if (__real_3f7ff972 <= param_7) {
LAB_14a5873a8:
    if (EVar6 != Control) goto LAB_14a58748f;
  }
  else {
    pTVar19 = FRigVMMathLibrary::LerpTransform(&local_1a8,&local_448,&local_5c8,param_7);
    dVar79 = (pTVar19->Rotation).XY.m128d_f64[0];
    dVar10 = (pTVar19->Rotation).XY.m128d_f64[1];
    local_5c8.Rotation.XY.m128d_f64 = *&(pTVar19->Rotation).XY.m128d_f64;
    p_Var1 = &(pTVar19->Rotation).ZW;
    dVar53 = p_Var1->m128d_f64[0];
    dVar64 = (pTVar19->Rotation).ZW.m128d_f64[1];
    local_5c8.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
    local_5c8.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
    local_5c8.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
    local_5c8.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
    local_5c8.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
    local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar19->Scale3D).XY.m128d_f64;
    local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar19->Scale3D).XY.m128d_f64 + 4);
    local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar19->Scale3D).XY.m128d_f64 + 1);
    local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar19->Scale3D).XY.m128d_f64 + 0xc);
    p_Var1 = &(pTVar19->Scale3D).ZW;
    local_6e8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)p_Var1->m128d_f64;
    local_6e8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 4);
    local_5c8.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
    pdVar13 = (pTVar19->Scale3D).ZW.m128d_f64 + 1;
    local_6e8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)pdVar13;
    local_6e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 0xc);
    local_5c8.Scale3D.ZW.m128d_f64[1] = *pdVar13;
    if (EVar6 != Control) {
      auVar61._0_8_ = dVar79 * dVar79 + dVar53 * dVar53;
      auVar61._8_8_ = dVar10 * dVar10 + dVar64 * dVar64;
      auVar47._8_4_ = SUB84(auVar61._8_8_,0);
      auVar47._0_8_ = auVar61._0_8_;
      auVar47._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
      auVar48._0_8_ = auVar47._8_8_ + auVar61._0_8_;
      auVar48._8_8_ = auVar61._0_8_ + auVar61._8_8_;
      auVar55 = sqrtpd(auVar61,auVar48);
      uVar29 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar48._0_8_)
      ;
      uVar32 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar48._8_8_)
      ;
      auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55);
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar48._0_8_)
      ;
      uVar33 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar48._8_8_)
      ;
      auVar88._0_8_ = uVar29 & (ulonglong)(auVar96._0_8_ * dVar79);
      uVar30 = uVar32 & (ulonglong)(auVar96._8_8_ * dVar10);
      auVar88._8_4_ = (undefined4)uVar30;
      auVar88._12_4_ = (undefined4)(uVar30 >> 0x20);
      auVar70._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar70._4_4_ =
           ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar70._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar70._12_4_ =
           ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_5c8.Rotation.XY.m128d_f64 = (double  [2])(auVar88 | auVar70);
      auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
      auVar71._0_8_ = (ulonglong)(auVar55._0_8_ * dVar53) & uVar31;
      uVar30 = uVar33 & (ulonglong)(auVar55._8_8_ * dVar64);
      auVar71._8_4_ = (undefined4)uVar30;
      auVar71._12_4_ = (undefined4)(uVar30 >> 0x20);
      auVar77._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar77._4_4_ =
           ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar77._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar77._12_4_ =
           ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_5c8.Rotation.ZW.m128d_f64 = (double  [2])(auVar71 | auVar77);
      goto LAB_14a5873a8;
    }
  }
  pTVar19 = UE::Math::TTransform<double>::GetRelativeTransform(&local_5c8,&local_148,&local_4a8);
  dVar79 = (pTVar19->Rotation).XY.m128d_f64[0];
  dVar10 = (pTVar19->Rotation).XY.m128d_f64[1];
  dVar53 = (pTVar19->Rotation).ZW.m128d_f64[0];
  dVar64 = (pTVar19->Rotation).ZW.m128d_f64[1];
  local_5c8.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
  local_5c8.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
  local_5c8.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
  local_5c8.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
  local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar19->Scale3D).XY.m128d_f64;
  local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar19->Scale3D).XY.m128d_f64 + 4);
  local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar19->Scale3D).XY.m128d_f64 + 1);
  local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar19->Scale3D).XY.m128d_f64 + 0xc);
  p_Var1 = &(pTVar19->Scale3D).ZW;
  local_6e8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)p_Var1->m128d_f64;
  local_6e8.Scale3D.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 4);
  local_5c8.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
  pdVar13 = (pTVar19->Scale3D).ZW.m128d_f64 + 1;
  local_6e8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)pdVar13;
  local_6e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 0xc);
  local_5c8.Scale3D.ZW.m128d_f64[1] = *pdVar13;
  auVar62._0_8_ = dVar79 * dVar79 + dVar53 * dVar53;
  auVar62._8_8_ = dVar10 * dVar10 + dVar64 * dVar64;
  auVar49._8_4_ = SUB84(auVar62._8_8_,0);
  auVar49._0_8_ = auVar62._0_8_;
  auVar49._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
  auVar50._0_8_ = auVar49._8_8_ + auVar62._0_8_;
  auVar50._8_8_ = auVar62._0_8_ + auVar62._8_8_;
  auVar55 = sqrtpd(auVar62,auVar50);
  uVar29 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar50._0_8_);
  uVar32 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar50._8_8_);
  auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55);
  uVar31 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar50._0_8_);
  uVar33 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar50._8_8_);
  auVar89._0_8_ = uVar29 & (ulonglong)(auVar96._0_8_ * dVar79);
  uVar30 = uVar32 & (ulonglong)(auVar96._8_8_ * dVar10);
  auVar89._8_4_ = (undefined4)uVar30;
  auVar89._12_4_ = (undefined4)(uVar30 >> 0x20);
  auVar72._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar72._4_4_ = ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar72._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar72._12_4_ = ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  local_5c8.Rotation.XY.m128d_f64 = (double  [2])(auVar89 | auVar72);
  auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
  auVar73._0_8_ = (ulonglong)(auVar55._0_8_ * dVar53) & uVar31;
  uVar30 = uVar33 & (ulonglong)(auVar55._8_8_ * dVar64);
  auVar73._8_4_ = (undefined4)uVar30;
  auVar73._12_4_ = (undefined4)(uVar30 >> 0x20);
  auVar78._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar78._4_4_ = ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar78._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar78._12_4_ = ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  local_5c8.Rotation.ZW.m128d_f64 = (double  [2])(auVar73 | auVar78);
LAB_14a58748f:
  if (param_8->Index != 0xffff) {
    uVar16 = (uint)param_8->Index;
  }
  local_6e8.Translation.XY.m128d_f64[0] = local_5c8.Translation.XY.m128d_f64[0];
  local_6e8.Translation.XY.m128d_f64[1] = local_5c8.Translation.XY.m128d_f64[1];
  local_6e8.Translation.ZW.m128d_f64[0] = local_5c8.Translation.ZW.m128d_f64[0];
  local_6e8.Translation.ZW.m128d_f64[1] = local_5c8.Translation.ZW.m128d_f64[1];
  local_6e8.Rotation.XY.m128d_f64 = local_5c8.Rotation.XY.m128d_f64;
  local_6e8.Rotation.ZW.m128d_f64 = local_5c8.Rotation.ZW.m128d_f64;
  local_6e8.Scale3D.XY.m128d_f64[0]._0_4_ = local_5c8.Scale3D.XY.m128d_f64[0]._0_4_;
  local_6e8.Scale3D.XY.m128d_f64[0]._4_4_ = local_5c8.Scale3D.XY.m128d_f64[0]._4_4_;
  local_6e8.Scale3D.XY.m128d_f64[1]._0_4_ = local_5c8.Scale3D.XY.m128d_f64[1]._0_4_;
  local_6e8.Scale3D.XY.m128d_f64[1]._4_4_ = local_5c8.Scale3D.XY.m128d_f64[1]._4_4_;
  URigHierarchy::SetLocalTransformByIndex(this,uVar16,&local_6e8,false,true,false,false);
  return;
}

