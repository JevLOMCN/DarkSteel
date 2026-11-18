// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4d22b0

UScriptStruct * __cdecl FRigUnit_TwistBonesPerItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TwistBonesPerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TwistBonesPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem,(UObject *)pUVar1,
                         L"RigUnit_TwistBonesPerItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TwistBonesPerItem.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TwistBonesPerItem.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4d2370

UScriptStruct * __thiscall
FRigUnit_TwistBonesPerItem::GetExecuteContextStruct(FRigUnit_TwistBonesPerItem *this)

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

// Execute @ 14a4d2580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_TwistBonesPerItem::Execute(FRigUnit_TwistBonesPerItem *this)

{
  undefined1 auStackY_2a8 [32];
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Items,&this->TwistAxis,&this->PoleAxis
                ,this->TwistEaseType,this->Weight,this->bPropagateToChildren,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4d27e0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_TwistBonesPerItem::GetUpgradeInfo
          (FRigUnit_TwistBonesPerItem *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a52f0c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TwistBonesPerItem::Execute
          (FRigUnit_TwistBonesPerItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Items,&this->TwistAxis,&this->PoleAxis,this->TwistEaseType,
                this->Weight,this->bPropagateToChildren,&this->WorkData);
  return;
}

// RigVMExecute @ 14a55a430

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwistBonesPerItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMAnimEasingType EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKeyCollection *pFVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  FRigVMMemoryHandle *pFVar9;
  ERigVMAnimEasingType *pEVar10;
  float *pfVar11;
  uchar *puVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_TwistBones_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKeyCollection *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar3 < 2) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar9[1].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar3 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TVector<double> *)pFVar9[2].Ptr;
  }
  else {
    pTVar8 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  EVar2 = *pEVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar5 = (bool)*puVar12;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_TwistBones_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar13->Offset + pFVar13->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar6,pTVar7,pTVar8,EVar2,fVar1,bVar5,pFVar14);
  return;
}

// StaticExecute @ 14a59e4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwistBonesPerItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,
          TVector<double> *param_3,TVector<double> *param_4,ERigVMAnimEasingType param_5,
          float param_6,bool param_7,FRigUnit_TwistBones_WorkData *param_8)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  ushort uVar4;
  FCachedRigElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  URigHierarchy *pUVar11;
  bool bVar12;
  int iVar13;
  TTransform<double> *pTVar14;
  TQuat<double> *pTVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar22;
  uint uVar23;
  longlong lVar24;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float fVar29;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar64;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar79;
  undefined4 uVar80;
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar85;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar86;
  double dVar90;
  undefined1 auVar89 [16];
  undefined4 uVar91;
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar97;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar98 [16];
  double dVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auStackY_548 [32];
  longlong local_4f8;
  undefined1 local_4f0 [4];
  uint local_4ec;
  URigHierarchy *local_4e8;
  FScriptContainerElement *local_4e0;
  TVector<double> *local_4d8;
  TVector<double> *local_4d0;
  longlong local_4c8;
  FCachedRigElement local_4c0;
  undefined1 local_4a0 [16];
  double local_490;
  TVector<double>_u_0 local_488;
  FRigElementKey local_470;
  undefined1 local_460 [16];
  double local_450;
  undefined1 local_448 [16];
  double local_438;
  TVector<double>_u_0 local_430;
  double local_418;
  double local_410;
  double local_408;
  TVector<double>_u_0 local_400;
  TVector<double>_u_0 local_3e8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  TQuat<double> local_388;
  undefined1 local_368 [32];
  TQuat<double> local_348;
  TTransform<double> local_328;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  TQuat<double> local_268;
  TQuat<double> local_248;
  TQuat<double> local_228;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  undefined8 uVar50;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_548;
  local_4e8 = param_1->Hierarchy;
  if (local_4e8 != (URigHierarchy *)0x0) {
    local_4c8 = 0x20;
    local_4d8 = param_3;
    local_4d0 = param_4;
    if (((param_8->CachedItems).ArrayNum == 0) && (0 < (param_2->Keys).ArrayNum)) {
      (param_8->ItemRatios).ArrayNum = 0;
      if ((param_8->ItemRatios).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(param_8->ItemRatios).AllocatorInstance,0,&(param_8->ItemRatios).ArrayMax)
        ;
      }
      (param_8->ItemTransforms).ArrayNum = 0;
      if ((param_8->ItemTransforms).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(param_8->ItemTransforms).AllocatorInstance,0,
                   &(param_8->ItemTransforms).ArrayMax);
      }
      pUVar11 = local_4e8;
      iVar16 = (param_2->Keys).ArrayNum;
      pFVar21 = (param_2->Keys).AllocatorInstance.Data;
      pFVar1 = pFVar21 + (longlong)iVar16 * 0xc;
      while( true ) {
        if ((param_2->Keys).ArrayNum != iVar16) {
          local_4f0[0] = 0;
          `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_4f0);
        }
        if (pFVar21 == pFVar1) break;
        local_470.Name.Number = *(uint *)(pFVar21 + 8);
        local_470._0_8_ = *(undefined8 *)pFVar21;
        local_4c0.Index = 0xffff;
        local_4c0.Key.Name.ComparisonIndex.Value = 0;
        local_4c0.Key.Name.Number = 0;
        local_4c0.Element = (FRigBaseElement *)0x0;
        local_4c0.Key._0_4_ = local_4c0.Key._0_4_ & 0xffffff00;
        local_4c0.ContainerVersion = -1;
        FCachedRigElement::UpdateCache(&local_4c0,&local_470,pUVar11);
        pFVar5 = (FCachedRigElement *)(param_8->CachedItems).AllocatorInstance.Data;
        if (((pFVar5 <= &local_4c0) && (&local_4c0 < pFVar5 + (param_8->CachedItems).ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = (param_8->CachedItems).ArrayNum;
        if (iVar13 == (param_8->CachedItems).ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,(ForAnyElementType *)param_8,&(param_8->CachedItems).ArrayMax);
        }
        (param_8->CachedItems).ArrayNum = iVar13 + 1;
        pFVar6 = (param_8->CachedItems).AllocatorInstance.Data;
        pFVar21 = pFVar21 + 0xc;
        pFVar2 = pFVar6 + (longlong)iVar13 * 0x20;
        *(ulonglong *)pFVar2 =
             CONCAT44(local_4c0.Key.Name.ComparisonIndex.Value,local_4c0.Key._0_4_);
        *(ulonglong *)(pFVar2 + 8) =
             CONCAT26(local_4c0._14_2_,CONCAT24(local_4c0.Index,local_4c0.Key.Name.Number));
        pFVar6 = pFVar6 + (longlong)iVar13 * 0x20 + 0x10;
        *(ulonglong *)pFVar6 = CONCAT44(local_4c0._20_4_,local_4c0.ContainerVersion);
        *(FRigBaseElement **)(pFVar6 + 8) = local_4c0.Element;
      }
      iVar16 = (param_8->CachedItems).ArrayNum;
      if (iVar16 < 3) {
        return;
      }
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&param_8->ItemRatios,iVar16);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,(param_8->CachedItems).ArrayNum,
                 &(param_8->ItemTransforms).AllocatorInstance,&(param_8->ItemTransforms).ArrayNum,
                 &(param_8->ItemTransforms).ArrayMax);
    }
    pUVar11 = local_4e8;
    dVar69 = __real_3f1a36e2e0000000;
    pTVar25 = &param_8->ItemTransforms;
    pTVar22 = &param_8->ItemRatios;
    if (((2 < (param_8->CachedItems).ArrayNum) && ((param_8->ItemRatios).ArrayNum != 0)) &&
       (((param_8->ItemTransforms).ArrayNum != 0 &&
        ((bVar12 = UE::Math::TVector<double>::IsNearlyZero(local_4d8,__real_3f1a36e2e0000000),
         !bVar12 && (bVar12 = UE::Math::TVector<double>::IsNearlyZero(param_4,dVar69), !bVar12))))))
    {
      uVar26 = 0xffffffff;
      uVar4 = *(ushort *)((param_8->CachedItems).AllocatorInstance.Data + 0xc);
      if (uVar4 != 0xffff) {
        uVar26 = (uint)uVar4;
      }
      URigHierarchy::GetGlobalTransformByIndex(pUVar11,&local_208,uVar26,false);
      if (((param_8->ItemTransforms).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (pTVar25->AllocatorInstance).Data;
      *(double *)pFVar1 = local_208.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar1 + 8) = local_208.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar1 + 0x10) = local_208.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar1 + 0x18) = local_208.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar1 + 0x20) = local_208.Translation.XY.m128d_f64[0];
      *(double *)(pFVar1 + 0x28) = local_208.Translation.XY.m128d_f64[1];
      *(double *)(pFVar1 + 0x30) = local_208.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar1 + 0x38) = local_208.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar1 + 0x40) = local_208.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar1 + 0x48) = local_208.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar1 + 0x50) = local_208.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar1 + 0x58) = local_208.Scale3D.ZW.m128d_f64[1];
      if (((param_8->ItemRatios).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(pTVar22->AllocatorInstance).Data = 0;
      if (((param_8->ItemTransforms).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar11 = local_4e8;
      pFVar1 = (pTVar25->AllocatorInstance).Data;
      iVar16 = (param_8->CachedItems).ArrayNum;
      uVar26 = 1;
      local_4a0 = *(undefined1 (*) [16])(pFVar1 + 0x20);
      local_490 = *(double *)(pFVar1 + 0x30);
      if (1 < iVar16) {
        local_4f8 = 1;
        lVar24 = 0x60;
        lVar19 = 0x20;
        do {
          local_4ec = ~uVar26 >> 0x1f;
          uVar17 = 0;
          if ((int)uVar26 < iVar16) {
            uVar17 = local_4ec;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = 0xffffffff;
          uVar4 = *(ushort *)((param_8->CachedItems).AllocatorInstance.Data + lVar19 + 0xc);
          if (uVar4 != 0xffff) {
            uVar17 = (uint)uVar4;
          }
          URigHierarchy::GetGlobalTransformByIndex(pUVar11,&local_1a8,uVar17,false);
          dVar102 = local_1a8.Scale3D.ZW.m128d_f64[1];
          dVar97 = local_1a8.Scale3D.ZW.m128d_f64[0];
          dVar90 = local_1a8.Scale3D.XY.m128d_f64[1];
          dVar85 = local_1a8.Scale3D.XY.m128d_f64[0];
          dVar86 = local_1a8.Translation.ZW.m128d_f64[1];
          dVar64 = local_1a8.Translation.ZW.m128d_f64[0];
          dVar51 = local_1a8.Translation.XY.m128d_f64[1];
          dVar92 = local_1a8.Translation.XY.m128d_f64[0];
          dVar81 = local_1a8.Rotation.ZW.m128d_f64[1];
          dVar99 = local_1a8.Rotation.ZW.m128d_f64[0];
          dVar72 = local_1a8.Rotation.XY.m128d_f64[1];
          dVar69 = local_1a8.Rotation.XY.m128d_f64[0];
          uVar50 = extraout_XMM0._8_8_;
          uVar17 = 0;
          if ((int)uVar26 < (param_8->ItemTransforms).ArrayNum) {
            uVar17 = local_4ec;
          }
          if (uVar17 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar50 = extraout_XMM0_00._8_8_;
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (pTVar25->AllocatorInstance).Data;
          *(double *)(pFVar1 + lVar24) = dVar69;
          *(double *)(pFVar1 + lVar24 + 8) = dVar72;
          *(double *)(pFVar1 + lVar24 + 0x10) = dVar99;
          *(double *)(pFVar1 + lVar24 + 0x10 + 8) = dVar81;
          *(double *)(pFVar1 + lVar24 + 0x20) = dVar92;
          *(double *)(pFVar1 + lVar24 + 0x20 + 8) = dVar51;
          *(double *)(pFVar1 + lVar24 + 0x30) = dVar64;
          *(double *)(pFVar1 + lVar24 + 0x30 + 8) = dVar86;
          *(double *)(pFVar1 + lVar24 + 0x40) = dVar85;
          *(double *)(pFVar1 + lVar24 + 0x40 + 8) = dVar90;
          *(double *)(pFVar1 + lVar24 + 0x50) = dVar97;
          *(double *)(pFVar1 + lVar24 + 0x50 + 8) = dVar102;
          uVar17 = 0;
          if ((int)uVar26 < (param_8->ItemTransforms).ArrayNum) {
            uVar17 = local_4ec;
          }
          if (uVar17 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar50 = extraout_XMM0_01._8_8_;
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (pTVar25->AllocatorInstance).Data;
          auVar75 = *(undefined1 (*) [16])(pFVar1 + lVar24 + 0x20);
          local_450 = *(double *)(pFVar1 + lVar24 + 0x30);
          dVar69 = (double)local_4a0._0_8_ - auVar75._0_8_;
          auVar9._4_8_ = uVar50;
          auVar9._0_4_ = auVar75._4_4_;
          auVar30._0_8_ = auVar9._0_8_ << 0x20;
          auVar30._8_4_ = auVar75._8_4_;
          auVar30._12_4_ = auVar75._12_4_;
          auVar31._8_8_ = auVar75._8_8_;
          auVar31._0_8_ = auVar30._8_8_;
          dVar72 = (double)local_4a0._8_8_ - auVar30._8_8_;
          uVar17 = 0;
          if ((int)(uVar26 - 1) < (param_8->ItemRatios).ArrayNum) {
            uVar17 = -uVar26 >> 0x1f;
          }
          auVar65._0_8_ =
               dVar72 * dVar72 + dVar69 * dVar69 + (local_490 - local_450) * (local_490 - local_450)
          ;
          auVar65._8_8_ = 0;
          auVar30 = sqrtpd(auVar31,auVar65);
          local_460 = auVar75;
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar29 = *(float *)((pTVar22->AllocatorInstance).Data + local_4f8 * 4 + -4);
          uVar17 = 0;
          if ((int)uVar26 < (param_8->ItemRatios).ArrayNum) {
            uVar17 = local_4ec;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar26 = uVar26 + 1;
          lVar19 = lVar19 + 0x20;
          lVar24 = lVar24 + 0x60;
          local_490 = local_450;
          *(float *)((pTVar22->AllocatorInstance).Data + local_4f8 * 4) =
               (float)auVar30._0_8_ + fVar29;
          local_4f8 = local_4f8 + 1;
          iVar16 = (param_8->CachedItems).ArrayNum;
          local_4a0 = auVar75;
        } while ((int)uVar26 < iVar16);
      }
      uVar20 = 1;
      lVar19 = 0x60;
      iVar16 = (param_8->ItemRatios).ArrayNum;
      uVar17 = iVar16 - 1;
      uVar26 = 0;
      if ((int)uVar17 < iVar16) {
        uVar26 = ~uVar17 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = (param_8->ItemRatios).ArrayNum;
      uVar18 = (ulonglong)iVar16;
      if (__real_322bcc77 < *(float *)((pTVar22->AllocatorInstance).Data + uVar18 * 4 + -4)) {
        uVar26 = 1;
        if (1 < iVar16) {
          local_4f8 = 1;
          do {
            iVar16 = (int)uVar18;
            uVar17 = 0;
            if (iVar16 + -1 < iVar16) {
              uVar17 = (uint)-iVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_4e0 = (pTVar22->AllocatorInstance).Data;
            local_4ec = (param_8->ItemRatios).ArrayNum;
            uVar23 = ~uVar26 >> 0x1f;
            uVar17 = 0;
            if ((int)uVar26 < (int)local_4ec) {
              uVar17 = uVar23;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar29 = *(float *)((pTVar22->AllocatorInstance).Data + local_4f8 * 4);
            fVar3 = *(float *)(local_4e0 + (longlong)(int)local_4ec * 4 + -4);
            uVar17 = 0;
            if ((int)uVar26 < (param_8->ItemRatios).ArrayNum) {
              uVar17 = uVar23;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(float *)((pTVar22->AllocatorInstance).Data + local_4f8 * 4) = fVar29 / fVar3;
            uVar17 = 0;
            if ((int)uVar26 < (param_8->ItemRatios).ArrayNum) {
              uVar17 = uVar23;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar29 = FRigVMMathLibrary::EaseFloat
                               (*(float *)((pTVar22->AllocatorInstance).Data + local_4f8 * 4),
                                param_5);
            uVar17 = 0;
            if ((int)uVar26 < (param_8->ItemRatios).ArrayNum) {
              uVar17 = uVar23;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar26 = uVar26 + 1;
            *(float *)((pTVar22->AllocatorInstance).Data + local_4f8 * 4) = fVar29;
            local_4f8 = local_4f8 + 1;
            uVar17 = (param_8->ItemRatios).ArrayNum;
            uVar18 = (ulonglong)uVar17;
          } while ((int)uVar26 < (int)uVar17);
        }
        dVar69 = __real_3e45798ee0000000;
        UE::Math::TVector<double>::GetSafeNormal
                  (local_4d8,(TVector<double> *)&local_400._s_0,__real_3e45798ee0000000,
                   &UE::Math::TVector<double>::ZeroVector);
        UE::Math::TVector<double>::GetSafeNormal
                  (local_4d0,(TVector<double> *)&local_488._s_0,dVar69,
                   &UE::Math::TVector<double>::ZeroVector);
        iVar16 = (param_8->ItemTransforms).ArrayNum;
        uVar17 = iVar16 - 1;
        uVar26 = 0;
        if ((int)uVar17 < iVar16) {
          uVar26 = ~uVar17 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar16 = (param_8->ItemTransforms).ArrayNum;
        pFVar1 = (pTVar25->AllocatorInstance).Data;
        if ((iVar16 < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar14 = UE::Math::TTransform<double>::GetRelativeTransform
                            ((TTransform<double> *)(pFVar1 + ((longlong)iVar16 + -1) * 0x60),
                             &local_148,(TTransform<double> *)(pTVar25->AllocatorInstance).Data);
        local_388.X = (pTVar14->Rotation).XY.m128d_f64[0];
        local_388.Y = (pTVar14->Rotation).XY.m128d_f64[1];
        local_388.Z = (pTVar14->Rotation).ZW.m128d_f64[0];
        local_388.W = (pTVar14->Rotation).ZW.m128d_f64[1];
        if (1 < (param_8->ItemRatios).ArrayNum + -1) {
          if (__real_3f800000 <= param_6) {
            param_6 = __real_3f800000;
          }
          local_4f8 = 1;
          if (param_6 <= 0.0) {
            param_6 = 0.0;
          }
          local_4e0 = (FScriptContainerElement *)(double)param_6;
          do {
            uVar17 = ~uVar20 >> 0x1f;
            uVar26 = 0;
            if ((int)uVar20 < (param_8->ItemTransforms).ArrayNum) {
              uVar26 = uVar17;
            }
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = (pTVar25->AllocatorInstance).Data;
            auVar93._8_8_ = 0;
            auVar93._0_8_ = local_400._s_0.Z;
            auVar75 = *(undefined1 (*) [16])(pFVar1 + lVar19 + 0x10);
            dVar99 = auVar75._0_8_;
            local_288 = *(undefined1 (*) [16])(pFVar1 + lVar19);
            auVar30 = *(undefined1 (*) [16])(pFVar1 + lVar19);
            dVar72 = *(double *)(pFVar1 + lVar19 + 0x18);
            dVar81 = local_400._8_8_;
            uVar26 = 0;
            if ((int)uVar20 < (param_8->ItemTransforms).ArrayNum) {
              uVar26 = uVar17;
            }
            auVar65 = blendpd(local_288,auVar75,2);
            auVar87._0_8_ = dVar81 * local_288._0_8_ - local_288._8_8_ * local_400._0_8_;
            auVar87._8_8_ = local_400._s_0.Z * local_288._8_8_ - dVar99 * dVar81;
            auVar31 = blendpd(local_400._0_16_,auVar93,2);
            auVar32._0_8_ = auVar31._0_8_ * dVar99 - auVar65._0_8_ * local_400._s_0.Z;
            auVar32._8_8_ = auVar31._8_8_ * auVar75._8_8_ - auVar65._8_8_ * 0.0;
            auVar31 = blendpd(auVar87,auVar32,2);
            dVar92 = auVar87._8_8_ + auVar87._8_8_;
            dVar51 = auVar32._0_8_ + auVar32._0_8_;
            uVar80 = (undefined4)((ulonglong)dVar51 >> 0x20);
            auVar88._0_8_ = auVar31._0_8_ + auVar31._0_8_;
            auVar88._8_8_ = auVar31._8_8_ + auVar31._8_8_;
            auVar73._8_4_ = SUB84(dVar51,0);
            auVar73._0_8_ = dVar92;
            auVar73._12_4_ = uVar80;
            auVar52._8_4_ = SUB84(dVar51,0);
            auVar52._0_8_ = dVar92;
            auVar52._12_4_ = uVar80;
            auVar31 = blendpd(auVar52,auVar88,2);
            auVar74._0_8_ = auVar73._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar92;
            auVar74._8_8_ = auVar88._0_8_ * auVar30._8_8_ - dVar99 * dVar51;
            auVar30 = blendpd(auVar30,auVar75,2);
            auVar33._8_4_ = SUB84(auVar74._8_8_,0);
            auVar33._0_8_ = auVar74._0_8_;
            auVar33._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
            auVar53._0_8_ = auVar31._0_8_ * dVar99 - auVar30._0_8_ * auVar88._0_8_;
            auVar53._8_8_ = auVar31._8_8_ * auVar75._8_8_ - auVar30._8_8_ * auVar88._8_8_;
            auVar75 = blendpd(auVar74,auVar53,2);
            dVar99 = dVar51 * dVar72 + dVar81 + auVar53._0_8_;
            local_438 = auVar88._0_8_ * dVar72 + local_400._s_0.Z + auVar75._0_8_;
            local_448._8_4_ = SUB84(dVar99,0);
            local_448._0_8_ = dVar92 * dVar72 + local_400._0_8_ + auVar33._8_8_;
            local_448._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = (pTVar25->AllocatorInstance).Data;
            auVar75 = *(undefined1 (*) [16])(pFVar1 + lVar19 + 0x10);
            dVar99 = auVar75._0_8_;
            local_288 = *(undefined1 (*) [16])(pFVar1 + lVar19);
            auVar30 = *(undefined1 (*) [16])(pFVar1 + lVar19);
            dVar72 = *(double *)(pFVar1 + lVar19 + 0x18);
            dVar81 = local_488._0_8_;
            dVar92 = local_488._8_8_;
            uVar26 = 0;
            if ((int)uVar20 < (param_8->ItemRatios).ArrayNum) {
              uVar26 = uVar17;
            }
            auVar65 = blendpd(local_288,auVar75,2);
            auVar82._0_8_ = dVar92 * local_288._0_8_ - local_288._8_8_ * dVar81;
            auVar82._8_8_ = local_488._s_0.Z * local_288._8_8_ - dVar99 * dVar92;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = local_488._s_0.Z;
            auVar31 = blendpd(local_488._0_16_,auVar8,2);
            auVar34._0_8_ = auVar31._0_8_ * dVar99 - auVar65._0_8_ * local_488._s_0.Z;
            auVar34._8_8_ = auVar31._8_8_ * auVar75._8_8_ - auVar65._8_8_ * 0.0;
            auVar31 = blendpd(auVar82,auVar34,2);
            dVar51 = auVar82._8_8_ + auVar82._8_8_;
            dVar64 = auVar34._0_8_ + auVar34._0_8_;
            uVar80 = (undefined4)((ulonglong)dVar64 >> 0x20);
            auVar83._0_8_ = auVar31._0_8_ + auVar31._0_8_;
            auVar83._8_8_ = auVar31._8_8_ + auVar31._8_8_;
            auVar76._8_4_ = SUB84(dVar64,0);
            auVar76._0_8_ = dVar51;
            auVar76._12_4_ = uVar80;
            auVar54._8_4_ = SUB84(dVar64,0);
            auVar54._0_8_ = dVar51;
            auVar54._12_4_ = uVar80;
            auVar31 = blendpd(auVar54,auVar83,2);
            auVar77._0_8_ = auVar76._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar51;
            auVar77._8_8_ = auVar83._0_8_ * auVar30._8_8_ - dVar99 * dVar64;
            auVar30 = blendpd(auVar30,auVar75,2);
            auVar35._8_4_ = SUB84(auVar77._8_8_,0);
            auVar35._0_8_ = auVar77._0_8_;
            auVar35._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
            auVar55._0_8_ = auVar31._0_8_ * dVar99 - auVar30._0_8_ * auVar83._0_8_;
            auVar55._8_8_ = auVar31._8_8_ * auVar75._8_8_ - auVar30._8_8_ * auVar83._8_8_;
            auVar30 = blendpd(auVar77,auVar55,2);
            dVar99 = dVar64 * dVar72 + dVar92 + auVar55._0_8_;
            local_3e8._s_0.Z = auVar83._0_8_ * dVar72 + local_488._s_0.Z + auVar30._0_8_;
            local_3e8._8_4_ = SUB84(dVar99,0);
            local_3e8._0_8_ = dVar51 * dVar72 + dVar81 + auVar35._8_8_;
            local_3e8._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pTVar15 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (&local_268,&UE::Math::TQuat<double>::Identity,&local_388,
                                 (double)*(float *)((pTVar22->AllocatorInstance).Data +
                                                   local_4f8 * 4));
            local_3c8 = pTVar15->X;
            dStack_3c0 = pTVar15->Y;
            dVar72 = pTVar15->Z;
            dVar99 = pTVar15->W;
            local_3b8._0_8_ = pTVar15->Z;
            local_3b8._8_8_ = pTVar15->W;
            local_3d0 = dVar69;
            dVar51 = local_3c8 * local_3c8 + dVar72 * dVar72;
            dVar64 = dStack_3c0 * dStack_3c0 + dVar99 * dVar99;
            auVar36._8_4_ = SUB84(dVar64,0);
            auVar36._0_8_ = dVar51;
            auVar36._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
            auVar37._0_8_ = auVar36._8_8_ + dVar51;
            auVar37._8_8_ = dVar51 + dVar64;
            auVar30 = sqrtpd(auVar75,auVar37);
            uVar27 = -(ulonglong)(dVar69 <= auVar37._0_8_);
            uVar28 = -(ulonglong)(dVar69 <= auVar37._8_8_);
            uVar26 = (uint)(uVar27 >> 0x20);
            uVar23 = (uint)(uVar28 >> 0x20);
            auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30)
            ;
            auVar75._0_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar75._4_4_ =
                 ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar75._8_4_ =
                 ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar75._12_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar94._0_8_ = uVar27 & (ulonglong)(auVar31._0_8_ * local_3c8);
            uVar18 = uVar28 & (ulonglong)(auVar31._8_8_ * dStack_3c0);
            auVar94._8_4_ = (undefined4)uVar18;
            auVar94._12_4_ = (undefined4)(uVar18 >> 0x20);
            auVar94 = auVar94 | auVar75;
            auVar101._0_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar101._4_4_ =
                 ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar101._8_4_ =
                 ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar101._12_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar75 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30)
            ;
            auVar38._0_8_ = (ulonglong)(auVar75._0_8_ * dVar72) & uVar27;
            uVar28 = (ulonglong)(auVar75._8_8_ * dVar99) & uVar28;
            auVar38._8_4_ = (undefined4)uVar28;
            auVar38._12_4_ = (undefined4)(uVar28 >> 0x20);
            if (((param_8->ItemTransforms).ArrayNum < 1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = (pTVar25->AllocatorInstance).Data;
            dVar99 = auVar94._0_8_;
            dVar97 = auVar94._8_8_;
            auVar66._8_8_ = dVar99;
            auVar66._0_8_ = dVar97;
            dVar51 = SUB168(auVar101 | auVar38,0);
            dVar102 = SUB168(auVar101 | auVar38,8);
            local_418 = dVar69;
            auVar75 = *(undefined1 (*) [16])pFVar1;
            auVar30 = *(undefined1 (*) [16])(pFVar1 + 0x10);
            dVar64 = auVar75._0_8_;
            dVar86 = auVar75._8_8_;
            auVar78._8_4_ = auVar75._0_4_;
            auVar78._0_8_ = dVar64;
            auVar78._12_4_ = auVar75._4_4_;
            dVar85 = auVar30._0_8_;
            dVar90 = auVar30._8_8_;
            auVar39._8_4_ = auVar30._8_4_;
            auVar39._0_8_ = dVar90;
            auVar39._12_4_ = auVar30._12_4_;
            auVar40._8_4_ = auVar94._0_4_;
            auVar40._0_8_ = dVar97;
            auVar40._12_4_ = auVar94._4_4_;
            auVar56._8_4_ = auVar75._8_4_;
            auVar56._0_8_ = dVar86;
            auVar56._12_4_ = auVar75._12_4_;
            local_3c8 = dVar64 * dVar102 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                        dVar90 * dVar99 +
                        dVar86 * dVar51 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                        dVar97 * dVar85 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dStack_3c0 = auVar78._8_8_ * dVar51 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                         auVar39._8_8_ * dVar97 +
                         auVar56._8_8_ * dVar102 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                         auVar40._8_8_ * dVar85 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            auVar41._8_4_ = SUB84(dStack_3c0,0);
            auVar41._0_8_ = local_3c8;
            auVar41._12_4_ = (int)((ulonglong)dStack_3c0 >> 0x20);
            dVar72 = dVar64 * dVar97 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar90 * dVar51 +
                     dVar86 * dVar99 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar102 * dVar85 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar99 = dVar64 * dVar99 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar90 * dVar102 +
                     dVar86 * dVar97 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar51 * dVar85 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            uVar80 = SUB84(dVar99,0);
            uVar91 = (undefined4)((ulonglong)dVar99 >> 0x20);
            auVar57._8_4_ = uVar80;
            auVar57._0_8_ = dVar72;
            auVar57._12_4_ = uVar91;
            local_2b8._8_4_ = uVar80;
            local_2b8._0_8_ = dVar72;
            local_2b8._12_4_ = uVar91;
            local_3b8._8_4_ = uVar80;
            local_3b8._0_8_ = dVar72;
            local_3b8._12_4_ = uVar91;
            dVar51 = dVar72 * dVar72 + local_3c8 * local_3c8;
            dVar64 = auVar57._8_8_ * dVar99 + auVar41._8_8_ * dStack_3c0;
            auVar42._8_4_ = SUB84(dVar64,0);
            auVar42._0_8_ = dVar51;
            auVar42._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
            auVar43._0_8_ = auVar42._8_8_ + dVar51;
            auVar43._8_8_ = dVar51 + dVar64;
            auVar75 = sqrtpd(auVar66,auVar43);
            uVar27 = -(ulonglong)(dVar69 <= auVar43._0_8_);
            uVar28 = -(ulonglong)(dVar69 <= auVar43._8_8_);
            auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar75)
            ;
            auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar75)
            ;
            uVar26 = (uint)(uVar27 >> 0x20);
            uVar23 = (uint)(uVar28 >> 0x20);
            auVar58._0_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar58._4_4_ =
                 ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar58._8_4_ =
                 ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar58._12_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar100._0_8_ = uVar27 & (ulonglong)(auVar30._0_8_ * local_3c8);
            uVar18 = uVar28 & (ulonglong)(auVar30._8_8_ * dStack_3c0);
            auVar100._8_4_ = (undefined4)uVar18;
            auVar100._12_4_ = (undefined4)(uVar18 >> 0x20);
            auVar95._0_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar95._4_4_ =
                 ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar95._8_4_ =
                 ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar95._12_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar103._0_8_ = (ulonglong)(auVar31._0_8_ * dVar72) & uVar27;
            uVar28 = (ulonglong)(auVar31._8_8_ * dVar99) & uVar28;
            auVar103._8_4_ = (undefined4)uVar28;
            auVar103._12_4_ = (undefined4)(uVar28 >> 0x20);
            auVar95 = auVar95 | auVar103;
            dVar72 = SUB168(auVar100 | auVar58,8);
            dVar85 = auVar95._0_8_;
            dVar86 = local_488._s_0.Z * dVar72 - dVar92 * dVar85;
            dVar86 = dVar86 + dVar86;
            dVar90 = SUB168(auVar100 | auVar58,0);
            auVar10._4_8_ = auVar75._8_8_;
            auVar10._0_4_ = auVar95._4_4_;
            auVar67._0_8_ = auVar10._0_8_ << 0x20;
            auVar67._8_4_ = auVar95._8_4_;
            auVar67._12_4_ = auVar95._12_4_;
            dVar99 = auVar67._8_8_;
            dVar64 = dVar81 * dVar85 - local_488._s_0.Z * dVar90;
            dVar64 = dVar64 + dVar64;
            dVar51 = dVar92 * dVar90 - dVar81 * dVar72;
            dVar51 = dVar51 + dVar51;
            dVar81 = (dVar72 * dVar51 - dVar85 * dVar64) + dVar99 * dVar86 + dVar81;
            dVar92 = (dVar85 * dVar86 - dVar90 * dVar51) + dVar99 * dVar64 + dVar92;
            dVar99 = (dVar90 * dVar64 - dVar72 * dVar86) + dVar99 * dVar51 + local_488._s_0.Z;
            dVar72 = (double)local_448._8_8_ * dVar92 + (double)local_448._0_8_ * dVar81 +
                     local_438 * dVar99;
            auVar70._0_8_ = local_438 * dVar72;
            auVar70._8_8_ = 0;
            local_430._s_0.X = dVar81 - (double)local_448._0_8_ * dVar72;
            local_430._s_0.Y = dVar92 - (double)local_448._8_8_ * dVar72;
            local_430._s_0.Z = dVar99 - auVar70._0_8_;
            local_2c8 = local_3c8;
            dStack_2c0 = dStack_3c0;
            pTVar15 = UE::Math::TQuat<double>::FindBetweenVectors
                                (&local_248,(TVector<double> *)&local_3e8._s_0,
                                 (TVector<double> *)&local_430._s_0);
            local_410 = dVar69;
            dVar72 = pTVar15->X;
            dVar99 = pTVar15->Y;
            local_3a8._0_8_ = pTVar15->X;
            local_3a8._8_8_ = pTVar15->Y;
            dVar81 = pTVar15->Z;
            dVar92 = pTVar15->W;
            local_398._0_8_ = pTVar15->Z;
            local_398._8_8_ = pTVar15->W;
            dVar51 = dVar72 * dVar72 + dVar81 * dVar81;
            dVar64 = dVar99 * dVar99 + dVar92 * dVar92;
            auVar44._8_4_ = SUB84(dVar64,0);
            auVar44._0_8_ = dVar51;
            auVar44._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
            auVar45._0_8_ = auVar44._8_8_ + dVar51;
            auVar45._8_8_ = dVar51 + dVar64;
            auVar75 = sqrtpd(auVar70,auVar45);
            uVar27 = -(ulonglong)(dVar69 <= auVar45._0_8_);
            uVar28 = -(ulonglong)(dVar69 <= auVar45._8_8_);
            auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar75)
            ;
            uVar23 = (uint)(uVar27 >> 0x20);
            auVar96._0_8_ = uVar27 & (ulonglong)(auVar30._0_8_ * dVar72);
            uVar18 = uVar28 & (ulonglong)(auVar30._8_8_ * dVar99);
            auVar96._8_4_ = (undefined4)uVar18;
            uVar79 = (uint)(uVar28 >> 0x20);
            auVar96._12_4_ = (undefined4)(uVar18 >> 0x20);
            uVar26 = 0;
            if ((int)uVar20 < (param_8->ItemTransforms).ArrayNum) {
              uVar26 = uVar17;
            }
            auVar59._0_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar59._4_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar59._8_4_ =
                 ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar59._12_4_ =
                 ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar96 = auVar96 | auVar59;
            auVar75 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar75)
            ;
            auVar98._0_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar98._4_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar98._8_4_ =
                 ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar98._12_4_ =
                 ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar60._0_8_ = (ulonglong)(auVar75._0_8_ * dVar81) & uVar27;
            uVar28 = (ulonglong)(auVar75._8_8_ * dVar92) & uVar28;
            auVar60._8_4_ = (undefined4)uVar28;
            auVar60._12_4_ = (undefined4)(uVar28 >> 0x20);
            auVar98 = auVar98 | auVar60;
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = (pTVar25->AllocatorInstance).Data;
            dVar81 = auVar98._0_8_;
            dVar51 = auVar96._0_8_;
            dVar64 = auVar96._8_8_;
            dVar86 = auVar98._8_8_;
            auVar75 = *(undefined1 (*) [16])(pFVar1 + lVar19 + 0x10);
            dVar92 = auVar75._0_8_;
            auVar46._8_4_ = auVar98._8_4_;
            auVar46._0_8_ = dVar86;
            auVar46._12_4_ = auVar98._12_4_;
            pFVar1 = pFVar1 + lVar19;
            dVar72 = *(double *)pFVar1;
            dVar99 = *(double *)(pFVar1 + 8);
            uVar26 = 0;
            if ((int)uVar20 < (param_8->ItemTransforms).ArrayNum) {
              uVar26 = uVar17;
            }
            dVar90 = auVar75._8_8_;
            auVar68._8_4_ = auVar75._0_4_;
            auVar68._0_8_ = dVar90;
            auVar68._12_4_ = auVar75._4_4_;
            auVar61._8_4_ = auVar96._8_4_;
            auVar61._0_8_ = dVar64;
            auVar61._12_4_ = auVar96._12_4_;
            auVar47._8_4_ = auVar98._0_4_;
            auVar47._0_8_ = dVar81;
            auVar47._12_4_ = auVar98._4_4_;
            local_368._0_8_ =
                 dVar90 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar86 * dVar72 +
                 dVar64 * dVar92 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar81 * dVar99 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_368._8_8_ =
                 auVar68._8_8_ * dVar51 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar46._8_8_ * dVar99 +
                 auVar61._8_8_ * dVar90 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar47._8_8_ * dVar72 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar85 = dVar51 * dVar72 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar86 * dVar90 +
                     dVar64 * dVar99 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar92 * dVar81 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            local_368._24_4_ = SUB84(dVar85,0);
            local_368._16_8_ =
                 dVar51 * dVar99 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar86 * dVar92 +
                 dVar64 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar90 * dVar81 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_368._28_4_ = (int)((ulonglong)dVar85 >> 0x20);
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar21 = (pTVar25->AllocatorInstance).Data;
            auVar71._8_8_ = 0;
            auVar71._0_8_ = local_4e0;
            pFVar1 = pFVar21 + lVar19;
            local_348.X = *(double *)pFVar1;
            local_348.Y = *(double *)(pFVar1 + 8);
            pFVar21 = pFVar21 + lVar19 + 0x10;
            local_348.Z = *(double *)pFVar21;
            local_348.W = *(double *)(pFVar21 + 8);
            pTVar15 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (&local_228,&local_348,(TQuat<double> *)local_368,(double)local_4e0)
            ;
            dVar72 = pTVar15->X;
            dVar99 = pTVar15->Y;
            dVar81 = pTVar15->Z;
            dVar92 = pTVar15->W;
            uVar26 = 0;
            if ((int)uVar20 < (param_8->ItemTransforms).ArrayNum) {
              uVar26 = uVar17;
            }
            local_408 = dVar69;
            dVar51 = dVar72 * dVar72 + dVar81 * dVar81;
            dVar64 = dVar99 * dVar99 + dVar92 * dVar92;
            auVar48._8_4_ = SUB84(dVar64,0);
            auVar48._0_8_ = dVar51;
            auVar48._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
            auVar49._0_8_ = auVar48._8_8_ + dVar51;
            auVar49._8_8_ = dVar51 + dVar64;
            auVar75 = sqrtpd(auVar71,auVar49);
            uVar27 = -(ulonglong)(dVar69 <= auVar49._0_8_);
            uVar28 = -(ulonglong)(dVar69 <= auVar49._8_8_);
            uVar23 = (uint)(uVar27 >> 0x20);
            uVar79 = (uint)(uVar28 >> 0x20);
            auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar75)
            ;
            auVar84._0_8_ = uVar27 & (ulonglong)(auVar30._0_8_ * dVar72);
            uVar18 = uVar28 & (ulonglong)(auVar30._8_8_ * dVar99);
            auVar84._8_4_ = (undefined4)uVar18;
            auVar84._12_4_ = (undefined4)(uVar18 >> 0x20);
            auVar62._0_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar62._4_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar62._8_4_ =
                 ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar62._12_4_ =
                 ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar84 = auVar84 | auVar62;
            auVar75 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar75)
            ;
            auVar89._0_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar89._4_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar89._8_4_ =
                 ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar89._12_4_ =
                 ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar63._0_8_ = (ulonglong)(auVar75._0_8_ * dVar81) & uVar27;
            uVar28 = (ulonglong)(auVar75._8_8_ * dVar92) & uVar28;
            auVar63._8_4_ = (undefined4)uVar28;
            auVar63._12_4_ = (undefined4)(uVar28 >> 0x20);
            auVar89 = auVar89 | auVar63;
            local_3a8 = auVar84;
            local_398 = auVar89;
            local_2a8 = auVar84;
            local_298 = auVar89;
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = (pTVar25->AllocatorInstance).Data;
            *(undefined1 (*) [16])(pFVar1 + lVar19) = auVar84;
            *(undefined1 (*) [16])(pFVar1 + lVar19 + 0x10) = auVar89;
            uVar26 = 0;
            if ((int)uVar20 < (param_8->ItemTransforms).ArrayNum) {
              uVar26 = uVar17;
            }
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = (pTVar25->AllocatorInstance).Data;
            uVar26 = 0;
            if ((int)uVar20 < (param_8->CachedItems).ArrayNum) {
              uVar26 = uVar17;
            }
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar24 = local_4c8;
            uVar26 = 0xffffffff;
            uVar4 = *(ushort *)((param_8->CachedItems).AllocatorInstance.Data + local_4c8 + 0xc);
            if (uVar4 != 0xffff) {
              uVar26 = (uint)uVar4;
            }
            local_328.Rotation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar19);
            local_328.Rotation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar19 + 8);
            local_328.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar19 + 0x10);
            local_328.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar19 + 0x10 + 8);
            local_328.Translation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar19 + 0x20);
            local_328.Translation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar19 + 0x20 + 8);
            local_328.Translation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar19 + 0x30);
            local_328.Translation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar19 + 0x30 + 8);
            local_328.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar19 + 0x40);
            local_328.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar19 + 0x40 + 8);
            local_328.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar19 + 0x50);
            local_328.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar19 + 0x50 + 8);
            URigHierarchy::SetGlobalTransformByIndex
                      (local_4e8,uVar26,&local_328,false,param_7,false,false);
            local_4c8 = lVar24 + 0x20;
            local_4f8 = local_4f8 + 1;
            uVar20 = uVar20 + 1;
            lVar19 = lVar19 + 0x60;
          } while ((int)uVar20 < (param_8->ItemRatios).ArrayNum + -1);
        }
      }
    }
  }
  return;
}

