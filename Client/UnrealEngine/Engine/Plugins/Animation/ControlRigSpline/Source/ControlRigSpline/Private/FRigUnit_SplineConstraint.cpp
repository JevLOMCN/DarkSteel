// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 8

// StaticStruct @ 14debf940

UScriptStruct * __cdecl FRigUnit_SplineConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SplineConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_SplineConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint,(UObject *)pUVar1,
                         L"RigUnit_SplineConstraint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SplineConstraint.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SplineConstraint.OuterSingleton;
}

// GetExecuteContextStruct @ 14debf9c0

UScriptStruct * __thiscall
FRigUnit_SplineConstraint::GetExecuteContextStruct(FRigUnit_SplineConstraint *this)

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

// Execute @ 14debf9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SplineConstraint::Execute(FRigUnit_SplineConstraint *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2c8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Spline,this->Alignment,
                this->Minimum,this->Maximum,&this->PrimaryAxis,&this->SecondaryAxis,
                this->bPropagateToChildren,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_SplineConstraint @ 14dec25b0

FRigUnit_SplineConstraint * __thiscall
FRigUnit_SplineConstraint::FRigUnit_SplineConstraint(FRigUnit_SplineConstraint *this)

{
  undefined8 uVar1;
  
  this->Alignment = Stretched;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  (this->Spline).SplineData.Object = (FControlRigSplineImpl *)0x0;
  (this->Spline).SplineData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WorkData).ItemTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ItemTransforms.ArrayNum = 0;
  (this->WorkData).ItemTransforms.ArrayMax = 0;
  (this->WorkData).ItemSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ItemSegments.ArrayNum = 0;
  (this->WorkData).ItemSegments.ArrayMax = 0;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  (this->WorkData).ChainLength = 0.0;
  this->_padding_ = (longlong)&___7FRigUnit_SplineConstraint__6B_;
  (this->Spline)._padding_ = (longlong)&___7FControlRigSpline__6B_;
  this->Minimum = 0.0;
  this->Maximum = 1.0;
  this->bPropagateToChildren = true;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrimaryAxis).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrimaryAxis).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrimaryAxis).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SecondaryAxis).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SecondaryAxis).field0_0x0._s_0.Y = (double)uVar1;
  (this->SecondaryAxis).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~FRigUnit_SplineConstraint @ 14dec2900

void __thiscall
FRigUnit_SplineConstraint::~FRigUnit_SplineConstraint(FRigUnit_SplineConstraint *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = (this->WorkData).CachedItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).ItemSegments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).ItemTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->Spline).SplineData.SharedReferenceCount.ReferenceController;
  (this->Spline)._padding_ = (longlong)&___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14dec4250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SplineConstraint::Execute
          (FRigUnit_SplineConstraint *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&local_18,&this->Spline,this->Alignment,this->Minimum,this->Maximum,
                &this->PrimaryAxis,&this->SecondaryAxis,this->bPropagateToChildren,&this->WorkData);
  return;
}

// RigVMExecute @ 14dec75b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SplineConstraint::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  EControlRigCurveAlignment EVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  FControlRigSpline *pFVar9;
  EControlRigCurveAlignment *pEVar10;
  FRigVMMemoryHandle *pFVar11;
  float *pfVar12;
  TVector<double> *pTVar13;
  TVector<double> *pTVar14;
  uchar *puVar15;
  FRigVMSlice *pFVar16;
  FRigUnit_SplineConstraint_WorkData *pFVar17;
  FControlRigExecuteContext *pFVar18;
  TArrayView<FRigElementKey_const_,int> local_58 [3];
  
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
    pFVar9 = (FControlRigSpline *)pFVar11[1].Ptr;
  }
  else {
    pFVar9 = (FControlRigSpline *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
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
    pEVar10 = pFVar11[2].Ptr;
  }
  else {
    pEVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  EVar3 = *pEVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar13 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar14 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  bVar6 = (bool)*puVar15;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar16 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar17 = (FRigUnit_SplineConstraint_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar11,false,pFVar16->Offset + pFVar16->Index);
  local_58[0].DataPtr = *(FRigElementKey **)puVar8;
  local_58[0].ArrayNum = *(int *)(puVar8 + 8);
  if (local_58[0].ArrayNum < 0) {
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
  pFVar18 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar18,local_58,pFVar9,EVar3,fVar1,fVar2,pTVar13,pTVar14,bVar6,pFVar17);
  return;
}

// StaticExecute @ 14ded0990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_SplineConstraint::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          FControlRigSpline *param_3,EControlRigCurveAlignment param_4,float param_5,float param_6,
          TVector<double> *param_7,TVector<double> *param_8,bool param_9,
          FRigUnit_SplineConstraint_WorkData *param_10)

{
  TSharedPtr<FControlRigSplineImpl,1> *this;
  longlong lVar1;
  FRigElementKey *pFVar2;
  FScriptContainerElement *pFVar3;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar4;
  ushort uVar5;
  URigHierarchy *this_00;
  FCachedRigElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  uint uVar20;
  TVector<double> *pTVar21;
  TVector<double> *pTVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  TTransform<double> *pTVar27;
  FControlRigSplineImpl *pFVar28;
  uint uVar29;
  undefined4 uVar30;
  FControlRigSpline *pFVar31;
  uint uVar32;
  uint uVar33;
  FRigElementKey *pFVar34;
  TTransform<double> *pTVar35;
  uint uVar36;
  longlong lVar37;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar38;
  uint uVar39;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar40;
  uint uVar41;
  longlong lVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  undefined1 auStackY_5f8 [32];
  int local_5a4;
  TTransform<double> *local_570;
  FCachedRigElement local_558;
  TArray<float,TSizedDefaultAllocator<32>_> *local_538;
  TVector<double> *local_530;
  TVector<double> *local_528;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_520;
  FRigElementKey local_518;
  double local_508;
  double dStack_500;
  double local_4f8;
  TVector<double>_u_0 local_4f0;
  TVector<double>_u_0 local_4d8;
  TQuat<double> local_4b8;
  double local_498;
  double dStack_490;
  double local_488;
  double local_480;
  double dStack_478;
  double local_470;
  double local_468;
  double dStack_460;
  double local_458;
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
  TQuat<double> *this_01;
  
  fVar19 = __real_3f800000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  local_530 = param_7;
  local_528 = param_8;
  this_00 = param_1->Hierarchy;
  if (this_00 != (URigHierarchy *)0x0) {
    pFVar28 = (param_3->SplineData).Object;
    this = &param_3->SplineData;
    if (pFVar28 != (FControlRigSplineImpl *)0x0) {
      if (pFVar28->Spline == (ControlRigBaseSpline *)0x0) {
        if (1 < (byte)LogControlRig._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        }
      }
      else {
        iVar24 = (param_10->CachedItems).ArrayNum;
        pTVar38 = &param_10->ItemSegments;
        local_520 = &param_10->ItemTransforms;
        pTVar4 = &param_10->CachedItems;
        fVar53 = 0.0;
        if (param_6 <= 0.0) {
          param_6 = 0.0;
        }
        if (param_5 <= 0.0) {
          param_5 = 0.0;
        }
        uVar41 = 1;
        if (__real_3f800000 <= param_6) {
          param_6 = __real_3f800000;
        }
        if (__real_3f800000 <= param_5) {
          param_5 = __real_3f800000;
        }
        if (param_6 <= param_5) {
          param_6 = param_5;
        }
        local_538 = pTVar38;
        if (iVar24 == 0) {
          if (param_2->ArrayNum < 2) {
            return;
          }
          (param_10->ItemTransforms).ArrayNum = 0;
          if ((param_10->ItemTransforms).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,0,&local_520->AllocatorInstance,0,
                       &(param_10->ItemTransforms).ArrayMax);
          }
          (param_10->ItemSegments).ArrayNum = 0;
          if ((param_10->ItemSegments).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&pTVar38->AllocatorInstance,0,&(param_10->ItemSegments).ArrayMax);
          }
          pFVar34 = param_2->DataPtr;
          lVar42 = 0x20;
          pFVar2 = pFVar34 + param_2->ArrayNum;
          for (; pFVar34 != pFVar2; pFVar34 = pFVar34 + 1) {
            local_518.Type = pFVar34->Type;
            local_518._1_3_ = *(undefined3 *)&pFVar34->field_0x1;
            local_518.Name.ComparisonIndex.Value = (pFVar34->Name).ComparisonIndex.Value;
            local_518.Name.Number = (pFVar34->Name).Number;
            local_558.Key._0_4_ = local_558.Key._0_4_ & 0xffffff00;
            local_558.Key.Name.ComparisonIndex.Value = 0;
            local_558.Key.Name.Number = 0;
            local_558.Index = 0xffff;
            local_558.ContainerVersion = -1;
            local_558.Element = (FRigBaseElement *)0x0;
            FCachedRigElement::UpdateCache(&local_558,&local_518,this_00);
            pFVar6 = (FCachedRigElement *)(pTVar4->AllocatorInstance).Data;
            if (((pFVar6 <= &local_558) && (&local_558 < pFVar6 + (param_10->CachedItems).ArrayMax))
               && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar23)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar24 = (param_10->CachedItems).ArrayNum;
            if (iVar24 == (param_10->CachedItems).ArrayMax) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&pTVar4->AllocatorInstance,&(param_10->CachedItems).ArrayMax
                                 );
            }
            (param_10->CachedItems).ArrayNum = iVar24 + 1;
            pFVar7 = (pTVar4->AllocatorInstance).Data;
            pFVar3 = pFVar7 + (longlong)iVar24 * 0x20;
            *(ulonglong *)pFVar3 =
                 CONCAT44(local_558.Key.Name.ComparisonIndex.Value,local_558.Key._0_4_);
            *(ulonglong *)(pFVar3 + 8) =
                 CONCAT26(local_558._14_2_,CONCAT24(local_558.Index,local_558.Key.Name.Number));
            pFVar7 = pFVar7 + (longlong)iVar24 * 0x20 + 0x10;
            *(ulonglong *)pFVar7 = CONCAT44(local_558._20_4_,local_558.ContainerVersion);
            *(FRigBaseElement **)(pFVar7 + 8) = local_558.Element;
          }
          iVar24 = (param_10->CachedItems).ArrayNum;
          if (iVar24 < 2) {
            return;
          }
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                    (&param_10->ItemTransforms,iVar24,Default);
          TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                    (&param_10->ItemSegments,(param_10->CachedItems).ArrayNum,Default);
          param_10->ChainLength = 0.0;
          if (((param_10->ItemSegments).ArrayNum < 1) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined4 *)(param_10->ItemSegments).AllocatorInstance.Data = 0;
          iVar24 = (param_10->CachedItems).ArrayNum;
          uVar32 = 1;
          if (1 < iVar24) {
            lVar37 = 1;
            do {
              uVar29 = 0;
              if ((int)(uVar32 - 1) < iVar24) {
                uVar29 = -uVar32 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar29 = 0xffffffff;
              uVar5 = *(ushort *)((pTVar4->AllocatorInstance).Data + lVar42 + -0x14);
              if (uVar5 != 0xffff) {
                uVar29 = (uint)uVar5;
              }
              URigHierarchy::GetGlobalTransformByIndex(this_00,&local_1a8,uVar29,false);
              uVar39 = ~uVar32 >> 0x1f;
              local_4f8 = local_1a8.Translation.ZW.m128d_f64[0];
              local_508 = local_1a8.Translation.XY.m128d_f64[0];
              dStack_500 = local_1a8.Translation.XY.m128d_f64[1];
              uVar29 = 0;
              if ((int)uVar32 < (param_10->CachedItems).ArrayNum) {
                uVar29 = uVar39;
              }
              if ((uVar29 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar29 = 0xffffffff;
              uVar5 = *(ushort *)((pTVar4->AllocatorInstance).Data + lVar42 + 0xc);
              if (uVar5 != 0xffff) {
                uVar29 = (uint)uVar5;
              }
              URigHierarchy::GetGlobalTransformByIndex(this_00,&local_148,uVar29,false);
              local_498 = local_148.Translation.XY.m128d_f64[0];
              dStack_490 = local_148.Translation.XY.m128d_f64[1];
              auVar45._8_8_ = local_148.Translation.XY.m128d_f64[1];
              auVar45._0_8_ = local_148.Translation.XY.m128d_f64[1];
              uVar29 = 0;
              if ((int)uVar32 < (param_10->ItemSegments).ArrayNum) {
                uVar29 = uVar39;
              }
              local_488 = local_148.Translation.ZW.m128d_f64[0];
              auVar10._8_8_ = 0;
              auVar10._0_8_ =
                   (dStack_500 - local_148.Translation.XY.m128d_f64[1]) *
                   (dStack_500 - local_148.Translation.XY.m128d_f64[1]) +
                   (local_508 - local_148.Translation.XY.m128d_f64[0]) *
                   (local_508 - local_148.Translation.XY.m128d_f64[0]) +
                   (local_4f8 - local_148.Translation.ZW.m128d_f64[0]) *
                   (local_4f8 - local_148.Translation.ZW.m128d_f64[0]);
              auVar45 = sqrtpd(auVar45,auVar10);
              if ((uVar29 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(float *)((param_10->ItemSegments).AllocatorInstance.Data + lVar37 * 4) =
                   (float)auVar45._0_8_;
              uVar29 = 0;
              if ((int)uVar32 < (param_10->ItemSegments).ArrayNum) {
                uVar29 = uVar39;
              }
              if ((uVar29 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar32 = uVar32 + 1;
              lVar42 = lVar42 + 0x20;
              lVar1 = lVar37 * 4;
              lVar37 = lVar37 + 1;
              param_10->ChainLength =
                   *(float *)((param_10->ItemSegments).AllocatorInstance.Data + lVar1) +
                   param_10->ChainLength;
              iVar24 = (param_10->CachedItems).ArrayNum;
            } while ((int)uVar32 < iVar24);
          }
        }
        pTVar40 = &param_10->ItemTransforms;
        if (1 < iVar24) {
          if (param_4 == Front) {
            pTVar27 = FControlRigSpline::TransformAtParam(param_3,&local_3e8,param_5);
            dVar11 = (pTVar27->Rotation).XY.m128d_f64[0];
            dVar12 = (pTVar27->Rotation).XY.m128d_f64[1];
            dVar51 = (pTVar27->Rotation).ZW.m128d_f64[0];
            dVar48 = (pTVar27->Rotation).ZW.m128d_f64[1];
            dVar50 = (pTVar27->Translation).XY.m128d_f64[0];
            dVar49 = (pTVar27->Translation).XY.m128d_f64[1];
            dVar13 = (pTVar27->Translation).ZW.m128d_f64[0];
            dVar14 = (pTVar27->Translation).ZW.m128d_f64[1];
            dVar15 = (pTVar27->Scale3D).XY.m128d_f64[0];
            dVar16 = (pTVar27->Scale3D).XY.m128d_f64[1];
            dVar17 = (pTVar27->Scale3D).ZW.m128d_f64[0];
            dVar18 = (pTVar27->Scale3D).ZW.m128d_f64[1];
            if (((param_10->ItemTransforms).ArrayNum < 1) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar3 = (pTVar40->AllocatorInstance).Data;
            *(double *)pFVar3 = dVar11;
            *(double *)(pFVar3 + 8) = dVar12;
            *(double *)(pFVar3 + 0x10) = dVar51;
            *(double *)(pFVar3 + 0x18) = dVar48;
            *(double *)(pFVar3 + 0x20) = dVar50;
            *(double *)(pFVar3 + 0x28) = dVar49;
            *(double *)(pFVar3 + 0x30) = dVar13;
            *(double *)(pFVar3 + 0x38) = dVar14;
            *(double *)(pFVar3 + 0x40) = dVar15;
            *(double *)(pFVar3 + 0x48) = dVar16;
            *(double *)(pFVar3 + 0x50) = dVar17;
            *(double *)(pFVar3 + 0x58) = dVar18;
            FControlRigSpline::LengthAtParam(param_3,param_5);
            fVar53 = FControlRigSpline::LengthAtParam(param_3,fVar19);
            pFVar28 = TSharedPtr<FControlRigSplineImpl,1>::operator->(this);
            iVar25 = (ushort)(pFVar28->SamplesArray).ArrayNum - 1;
            fVar43 = FControlRigSpline::LengthAtParam(param_3,param_5);
            dVar12 = _UNK_150689518;
            dVar11 = ___xmm_00000000000000003ff0000000000000;
            uVar20 = _UNK_15061cc8c;
            uVar39 = _UNK_15061cc88;
            uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar32 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            iVar24 = (param_10->ItemSegments).ArrayNum;
            if (1 < iVar24) {
              lVar42 = 0x60;
              local_570 = (TTransform<double> *)&DAT_00000001;
              local_5a4 = 0;
              pTVar38 = &param_10->ItemSegments;
              fVar47 = param_5;
              do {
                uVar33 = 0;
                if ((int)uVar41 < iVar24) {
                  uVar33 = ~uVar41 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar3 = (pTVar38->AllocatorInstance).Data;
                fVar43 = fVar43 + *(float *)(pFVar3 + (longlong)local_570 * 4);
                uVar33 = 0;
                if ((int)uVar41 < (param_10->ItemTransforms).ArrayNum) {
                  uVar33 = ~uVar41 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar7 = (pTVar40->AllocatorInstance).Data;
                if (fVar43 < fVar53) {
                  uVar33 = (uint)((float)iVar25 * fVar47);
                  if ((int)uVar33 <= iVar25) {
                    lVar37 = (longlong)(int)uVar33 * 4;
                    do {
                      if ((this->Object == (FControlRigSplineImpl *)0x0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar23)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pFVar28 = this->Object;
                      uVar36 = 0;
                      if ((int)uVar33 < (pFVar28->AccumulatedLenth).ArrayNum) {
                        uVar36 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar23)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      if (fVar43 < *(float *)((pFVar28->AccumulatedLenth).AllocatorInstance.Data +
                                             lVar37)) {
                        uVar36 = uVar33 - 1;
                        if ((this->Object == (FControlRigSplineImpl *)0x0) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar23)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar28 = this->Object;
                        uVar26 = 0;
                        if ((int)uVar36 < (pFVar28->AccumulatedLenth).ArrayNum) {
                          uVar26 = ~uVar36 >> 0x1f;
                        }
                        if ((uVar26 == 0) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar23)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar3 = (pFVar28->AccumulatedLenth).AllocatorInstance.Data;
                        if ((this->Object == (FControlRigSplineImpl *)0x0) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar23)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar28 = this->Object;
                        uVar26 = 0;
                        if ((int)uVar33 < (pFVar28->AccumulatedLenth).ArrayNum) {
                          uVar26 = ~uVar33 >> 0x1f;
                        }
                        if ((uVar26 == 0) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar23)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        fVar47 = *(float *)(pFVar3 + (longlong)(int)uVar36 * 4);
                        fVar52 = (fVar43 - fVar47) /
                                 (*(float *)((pFVar28->AccumulatedLenth).AllocatorInstance.Data +
                                            (longlong)(int)uVar33 * 4) - fVar47);
                        if (((fVar52 < 0.0) || (fVar19 < fVar52)) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ULocal >= 0.f && ULocal <= 1.f",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineUnits.cpp"
                                                ,0x352,L""), bVar23)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        fVar44 = fVar19 / (float)iVar25;
                        fVar47 = (float)(int)uVar36 * fVar44;
                        fVar47 = ((float)(int)uVar33 * fVar44 - fVar47) * fVar52 + fVar47;
                        if (((fVar47 < param_5) || (fVar19 < fVar47)) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("PrevParam >= ClampedMin && PrevParam <= 1.f",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineUnits.cpp"
                                                ,0x356,L""), bVar23)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar31 = param_3;
                        pTVar27 = FControlRigSpline::TransformAtParam(param_3,&local_388,fVar47);
                        uVar30 = SUB84(pFVar31,0);
                        dVar51 = (pTVar27->Rotation).XY.m128d_f64[1];
                        *(double *)(pFVar7 + lVar42) = (pTVar27->Rotation).XY.m128d_f64[0];
                        *(double *)(pFVar7 + lVar42 + 8) = dVar51;
                        dVar51 = (pTVar27->Rotation).ZW.m128d_f64[1];
                        *(double *)(pFVar7 + lVar42 + 0x10) = (pTVar27->Rotation).ZW.m128d_f64[0];
                        *(double *)(pFVar7 + lVar42 + 0x10 + 8) = dVar51;
                        dVar51 = (pTVar27->Translation).XY.m128d_f64[1];
                        *(double *)(pFVar7 + lVar42 + 0x20) = (pTVar27->Translation).XY.m128d_f64[0]
                        ;
                        *(double *)(pFVar7 + lVar42 + 0x20 + 8) = dVar51;
                        dVar51 = (pTVar27->Translation).ZW.m128d_f64[1];
                        *(double *)(pFVar7 + lVar42 + 0x30) = (pTVar27->Translation).ZW.m128d_f64[0]
                        ;
                        *(double *)(pFVar7 + lVar42 + 0x30 + 8) = dVar51;
                        dVar51 = (pTVar27->Scale3D).XY.m128d_f64[1];
                        *(double *)(pFVar7 + lVar42 + 0x40) = (pTVar27->Scale3D).XY.m128d_f64[0];
                        *(double *)(pFVar7 + lVar42 + 0x40 + 8) = dVar51;
                        dVar51 = (pTVar27->Scale3D).ZW.m128d_f64[1];
                        *(double *)(pFVar7 + lVar42 + 0x50) = (pTVar27->Scale3D).ZW.m128d_f64[0];
                        *(double *)(pFVar7 + lVar42 + 0x50 + 8) = dVar51;
                        goto LAB_14ded1582;
                      }
                      uVar33 = uVar33 + 1;
                      lVar37 = lVar37 + 4;
                    } while ((int)uVar33 <= iVar25);
                  }
                }
                if ((local_5a4 < 0) || ((param_10->ItemTransforms).ArrayNum <= (int)(uVar41 - 1))) {
                  pTVar27 = &UE::Math::TTransform<double>::Identity;
                }
                else {
                  if ((-1 < (int)-uVar41) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pTVar27 = (TTransform<double> *)
                            ((pTVar40->AllocatorInstance).Data + (longlong)(int)(uVar41 - 1) * 0x60)
                  ;
                }
                dVar51 = (pTVar27->Rotation).XY.m128d_f64[1];
                *(double *)(pFVar7 + lVar42) = (pTVar27->Rotation).XY.m128d_f64[0];
                *(double *)(pFVar7 + lVar42 + 8) = dVar51;
                dVar51 = (pTVar27->Rotation).ZW.m128d_f64[1];
                *(double *)(pFVar7 + lVar42 + 0x10) = (pTVar27->Rotation).ZW.m128d_f64[0];
                *(double *)(pFVar7 + lVar42 + 0x10 + 8) = dVar51;
                dVar51 = (pTVar27->Translation).XY.m128d_f64[1];
                *(double *)(pFVar7 + lVar42 + 0x20) = (pTVar27->Translation).XY.m128d_f64[0];
                *(double *)(pFVar7 + lVar42 + 0x20 + 8) = dVar51;
                dVar51 = (pTVar27->Translation).ZW.m128d_f64[1];
                *(double *)(pFVar7 + lVar42 + 0x30) = (pTVar27->Translation).ZW.m128d_f64[0];
                *(double *)(pFVar7 + lVar42 + 0x30 + 8) = dVar51;
                dVar51 = (pTVar27->Scale3D).XY.m128d_f64[1];
                *(double *)(pFVar7 + lVar42 + 0x40) = (pTVar27->Scale3D).XY.m128d_f64[0];
                *(double *)(pFVar7 + lVar42 + 0x40 + 8) = dVar51;
                dVar51 = (pTVar27->Scale3D).ZW.m128d_f64[1];
                this_01 = &local_4b8;
                *(double *)(pFVar7 + lVar42 + 0x50) = (pTVar27->Scale3D).ZW.m128d_f64[0];
                *(double *)(pFVar7 + lVar42 + 0x50 + 8) = dVar51;
                local_4b8.Z = *(double *)(pFVar7 + lVar42 + 0x10);
                local_4b8.W = *(double *)(pFVar7 + lVar42 + 0x10 + 8);
                local_4b8.X = *(double *)(pFVar7 + lVar42);
                local_4b8.Y = *(double *)(pFVar7 + lVar42 + 8);
                dVar48 = *(double *)(pFVar7 + lVar42 + 0x20);
                dVar50 = *(double *)(pFVar7 + lVar42 + 0x20 + 8);
                dVar49 = *(double *)(pFVar7 + lVar42 + 0x30);
                local_4d8._s_0.Z = 0.0;
                local_4d8._s_0.X = dVar11;
                local_4d8._s_0.Y = dVar12;
                local_480 = dVar48;
                dStack_478 = dVar50;
                UE::Math::TQuat<double>::RotateVector
                          (this_01,(TVector<double> *)&local_4f0._s_0,
                           (TVector<double> *)&local_4d8._s_0);
                uVar30 = SUB84(this_01,0);
                dVar51 = (double)*(float *)(pFVar3 + (longlong)local_570 * 4);
                local_458 = local_4f0._s_0.Z * dVar51 + dVar49;
                local_468 = local_4f0._s_0.X * dVar51 + dVar48;
                dStack_460 = local_4f0._s_0.Y * dVar51 + dVar50;
                *(double *)(pFVar7 + lVar42 + 0x20) = local_468;
                *(double *)(pFVar7 + lVar42 + 0x20 + 8) = dStack_460;
                *(double *)(pFVar7 + lVar42 + 0x30) = local_458;
                *(double *)(pFVar7 + lVar42 + 0x30 + 8) = 0.0;
                pTVar27 = local_570;
                local_470 = dVar49;
LAB_14ded1582:
                dVar51 = *(double *)(pFVar7 + lVar42);
                dVar48 = *(double *)(pFVar7 + lVar42 + 8);
                dVar50 = *(double *)(pFVar7 + lVar42 + 0x10);
                dVar49 = *(double *)(pFVar7 + lVar42 + 0x10 + 8);
                dVar51 = dVar50 * dVar50 + dVar51 * dVar51;
                dVar48 = dVar49 * dVar49 + dVar48 * dVar48;
                dVar50 = dVar48 + dVar51;
                dVar51 = dVar51 + dVar48;
                dVar48 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar50;
                dVar49 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar51;
                lVar37 = -(ulonglong)
                          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                          (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & uVar20,
                                           SUB84(dVar49,0) & uVar39));
                dVar50 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar50;
                dVar51 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar51;
                auVar9._8_4_ = (int)lVar37;
                auVar9._0_8_ = -(ulonglong)
                                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                                (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar29,
                                                 SUB84(dVar48,0) & uVar32));
                auVar9._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
                uVar33 = movmskpd(uVar30,auVar9);
                auVar46._8_8_ =
                     -(ulonglong)
                      ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                      (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & uVar20,
                                       SUB84(dVar51,0) & uVar39));
                auVar46._0_8_ =
                     -(ulonglong)
                      ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar29,
                                       SUB84(dVar50,0) & uVar32));
                iVar24 = movmskpd((int)pTVar27,auVar46);
                if (((uVar33 & 0x3fffffff) != 0 || iVar24 != 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Transform.GetRotation().IsNormalized()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineUnits.cpp"
                                        ,0x364,L""), bVar23)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar42 = lVar42 + 0x60;
                uVar41 = uVar41 + 1;
                local_570 = (TTransform<double> *)((longlong)(local_570->Rotation).XY.m128d_f64 + 1)
                ;
                local_5a4 = local_5a4 + 1;
                iVar24 = local_538->ArrayNum;
                pTVar38 = local_538;
              } while ((int)uVar41 < iVar24);
            }
          }
          else if (param_4 == Stretched) {
            pTVar27 = FControlRigSpline::TransformAtParam(param_3,&local_328,param_5);
            dVar11 = (pTVar27->Rotation).XY.m128d_f64[0];
            dVar12 = (pTVar27->Rotation).XY.m128d_f64[1];
            dVar51 = (pTVar27->Rotation).ZW.m128d_f64[0];
            dVar48 = (pTVar27->Rotation).ZW.m128d_f64[1];
            dVar50 = (pTVar27->Translation).XY.m128d_f64[0];
            dVar49 = (pTVar27->Translation).XY.m128d_f64[1];
            dVar13 = (pTVar27->Translation).ZW.m128d_f64[0];
            dVar14 = (pTVar27->Translation).ZW.m128d_f64[1];
            dVar15 = (pTVar27->Scale3D).XY.m128d_f64[0];
            dVar16 = (pTVar27->Scale3D).XY.m128d_f64[1];
            dVar17 = (pTVar27->Scale3D).ZW.m128d_f64[0];
            dVar18 = (pTVar27->Scale3D).ZW.m128d_f64[1];
            if (((param_10->ItemTransforms).ArrayNum < 1) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar3 = (pTVar40->AllocatorInstance).Data;
            *(double *)pFVar3 = dVar11;
            *(double *)(pFVar3 + 8) = dVar12;
            *(double *)(pFVar3 + 0x10) = dVar51;
            *(double *)(pFVar3 + 0x18) = dVar48;
            *(double *)(pFVar3 + 0x20) = dVar50;
            *(double *)(pFVar3 + 0x28) = dVar49;
            *(double *)(pFVar3 + 0x30) = dVar13;
            *(double *)(pFVar3 + 0x38) = dVar14;
            *(double *)(pFVar3 + 0x40) = dVar15;
            *(double *)(pFVar3 + 0x48) = dVar16;
            *(double *)(pFVar3 + 0x50) = dVar17;
            *(double *)(pFVar3 + 0x58) = dVar18;
            pTVar27 = FControlRigSpline::TransformAtParam(param_3,&local_2c8,param_6);
            iVar24 = (param_10->ItemTransforms).ArrayNum;
            dVar11 = (pTVar27->Rotation).XY.m128d_f64[0];
            dVar12 = (pTVar27->Rotation).XY.m128d_f64[1];
            dVar51 = (pTVar27->Rotation).ZW.m128d_f64[0];
            dVar48 = (pTVar27->Rotation).ZW.m128d_f64[1];
            uVar32 = iVar24 - 1;
            dVar50 = (pTVar27->Translation).XY.m128d_f64[0];
            dVar49 = (pTVar27->Translation).XY.m128d_f64[1];
            dVar13 = (pTVar27->Translation).ZW.m128d_f64[0];
            dVar14 = (pTVar27->Translation).ZW.m128d_f64[1];
            dVar15 = (pTVar27->Scale3D).XY.m128d_f64[0];
            dVar16 = (pTVar27->Scale3D).XY.m128d_f64[1];
            dVar17 = (pTVar27->Scale3D).ZW.m128d_f64[0];
            dVar18 = (pTVar27->Scale3D).ZW.m128d_f64[1];
            uVar41 = 0;
            if ((int)uVar32 < iVar24) {
              uVar41 = ~uVar32 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar41 = 0;
            pFVar3 = (pTVar40->AllocatorInstance).Data;
            lVar42 = (longlong)(param_10->ItemTransforms).ArrayNum * 0x60;
            *(double *)(pFVar3 + lVar42 + -0x60) = dVar11;
            *(double *)(pFVar3 + lVar42 + -0x60 + 8) = dVar12;
            *(double *)(pFVar3 + lVar42 + -0x50) = dVar51;
            *(double *)(pFVar3 + lVar42 + -0x50 + 8) = dVar48;
            *(double *)(pFVar3 + lVar42 + -0x40) = dVar50;
            *(double *)(pFVar3 + lVar42 + -0x40 + 8) = dVar49;
            *(double *)(pFVar3 + lVar42 + -0x30) = dVar13;
            *(double *)(pFVar3 + lVar42 + -0x30 + 8) = dVar14;
            *(double *)(pFVar3 + lVar42 + -0x20) = dVar15;
            *(double *)(pFVar3 + lVar42 + -0x20 + 8) = dVar16;
            *(double *)(pFVar3 + lVar42 + -0x10) = dVar17;
            *(double *)(pFVar3 + lVar42 + -0x10 + 8) = dVar18;
            iVar24 = (param_10->ItemSegments).ArrayNum;
            if (0 < iVar24) {
              lVar42 = 0;
              lVar37 = 0;
              do {
                uVar32 = 0;
                if ((int)uVar41 < iVar24) {
                  uVar32 = ~uVar41 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                fVar53 = fVar53 + *(float *)((param_10->ItemSegments).AllocatorInstance.Data +
                                            lVar37);
                fVar43 = (fVar53 * param_6) / param_10->ChainLength;
                pTVar27 = FControlRigSpline::TransformAtParam
                                    (param_3,&local_268,
                                     (fVar19 - fVar43) * param_5 + fVar43 * param_6);
                dVar11 = (pTVar27->Rotation).XY.m128d_f64[0];
                dVar12 = (pTVar27->Rotation).XY.m128d_f64[1];
                dVar51 = (pTVar27->Rotation).ZW.m128d_f64[0];
                dVar48 = (pTVar27->Rotation).ZW.m128d_f64[1];
                dVar50 = (pTVar27->Translation).XY.m128d_f64[0];
                dVar49 = (pTVar27->Translation).XY.m128d_f64[1];
                dVar13 = (pTVar27->Translation).ZW.m128d_f64[0];
                dVar14 = (pTVar27->Translation).ZW.m128d_f64[1];
                dVar15 = (pTVar27->Scale3D).XY.m128d_f64[0];
                dVar16 = (pTVar27->Scale3D).XY.m128d_f64[1];
                dVar17 = (pTVar27->Scale3D).ZW.m128d_f64[0];
                dVar18 = (pTVar27->Scale3D).ZW.m128d_f64[1];
                uVar32 = 0;
                if ((int)uVar41 < (param_10->ItemTransforms).ArrayNum) {
                  uVar32 = ~uVar41 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar3 = (pTVar40->AllocatorInstance).Data;
                uVar41 = uVar41 + 1;
                lVar37 = lVar37 + 4;
                *(double *)(pFVar3 + lVar42) = dVar11;
                *(double *)(pFVar3 + lVar42 + 8) = dVar12;
                *(double *)(pFVar3 + lVar42 + 0x10) = dVar51;
                *(double *)(pFVar3 + lVar42 + 0x10 + 8) = dVar48;
                *(double *)(pFVar3 + lVar42 + 0x20) = dVar50;
                *(double *)(pFVar3 + lVar42 + 0x20 + 8) = dVar49;
                *(double *)(pFVar3 + lVar42 + 0x30) = dVar13;
                *(double *)(pFVar3 + lVar42 + 0x30 + 8) = dVar14;
                *(double *)(pFVar3 + lVar42 + 0x40) = dVar15;
                *(double *)(pFVar3 + lVar42 + 0x40 + 8) = dVar16;
                *(double *)(pFVar3 + lVar42 + 0x50) = dVar17;
                *(double *)(pFVar3 + lVar42 + 0x50 + 8) = dVar18;
                lVar42 = lVar42 + 0x60;
                iVar24 = (param_10->ItemSegments).ArrayNum;
              } while ((int)uVar41 < iVar24);
            }
          }
          pTVar22 = local_528;
          pTVar21 = local_530;
          iVar24 = (param_10->ItemTransforms).ArrayNum;
          uVar41 = 0;
          if (0 < iVar24) {
            lVar42 = 0;
            do {
              uVar32 = 0;
              if ((int)uVar41 < iVar24) {
                uVar32 = ~uVar41 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pTVar35 = (TTransform<double> *)((pTVar40->AllocatorInstance).Data + lVar42);
              pTVar27 = ApplyPrimarySecondaryAxis(&local_208,pTVar35,pTVar21,pTVar22);
              uVar41 = uVar41 + 1;
              lVar42 = lVar42 + 0x60;
              dVar11 = (pTVar27->Rotation).XY.m128d_f64[1];
              (pTVar35->Rotation).XY.m128d_f64[0] = (pTVar27->Rotation).XY.m128d_f64[0];
              (pTVar35->Rotation).XY.m128d_f64[1] = dVar11;
              dVar11 = (pTVar27->Rotation).ZW.m128d_f64[1];
              (pTVar35->Rotation).ZW.m128d_f64[0] = (pTVar27->Rotation).ZW.m128d_f64[0];
              (pTVar35->Rotation).ZW.m128d_f64[1] = dVar11;
              dVar11 = (pTVar27->Translation).XY.m128d_f64[1];
              (pTVar35->Translation).XY.m128d_f64[0] = (pTVar27->Translation).XY.m128d_f64[0];
              (pTVar35->Translation).XY.m128d_f64[1] = dVar11;
              dVar11 = (pTVar27->Translation).ZW.m128d_f64[1];
              (pTVar35->Translation).ZW.m128d_f64[0] = (pTVar27->Translation).ZW.m128d_f64[0];
              (pTVar35->Translation).ZW.m128d_f64[1] = dVar11;
              dVar11 = (pTVar27->Scale3D).XY.m128d_f64[1];
              (pTVar35->Scale3D).XY.m128d_f64[0] = (pTVar27->Scale3D).XY.m128d_f64[0];
              (pTVar35->Scale3D).XY.m128d_f64[1] = dVar11;
              dVar11 = (pTVar27->Scale3D).ZW.m128d_f64[1];
              (pTVar35->Scale3D).ZW.m128d_f64[0] = (pTVar27->Scale3D).ZW.m128d_f64[0];
              (pTVar35->Scale3D).ZW.m128d_f64[1] = dVar11;
              iVar24 = (param_10->ItemTransforms).ArrayNum;
            } while ((int)uVar41 < iVar24);
          }
          uVar41 = 0;
          if (0 < (param_10->CachedItems).ArrayNum) {
            lVar37 = 0;
            lVar42 = 0;
            do {
              pTVar40 = local_520;
              uVar32 = 0;
              if ((int)uVar41 < local_520->ArrayNum) {
                uVar32 = ~uVar41 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar3 = (pTVar40->AllocatorInstance).Data;
              uVar32 = 0;
              if ((int)uVar41 < (param_10->CachedItems).ArrayNum) {
                uVar32 = ~uVar41 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar32 = 0xffffffff;
              uVar5 = *(ushort *)((pTVar4->AllocatorInstance).Data + lVar37 + 0xc);
              if (uVar5 != 0xffff) {
                uVar32 = (uint)uVar5;
              }
              local_448.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar42);
              local_448.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar42 + 8);
              local_448.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar42 + 0x10);
              local_448.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar42 + 0x10 + 8);
              local_448.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar42 + 0x20);
              local_448.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar42 + 0x20 + 8);
              local_448.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar42 + 0x30);
              local_448.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar42 + 0x30 + 8);
              local_448.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar42 + 0x40);
              local_448.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar42 + 0x40 + 8);
              local_448.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar42 + 0x50);
              local_448.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar42 + 0x50 + 8);
              URigHierarchy::SetGlobalTransformByIndex
                        (this_00,uVar32,&local_448,false,param_9,false,false);
              uVar41 = uVar41 + 1;
              lVar42 = lVar42 + 0x60;
              lVar37 = lVar37 + 0x20;
            } while ((int)uVar41 < (param_10->CachedItems).ArrayNum);
          }
        }
      }
    }
  }
  return;
}

