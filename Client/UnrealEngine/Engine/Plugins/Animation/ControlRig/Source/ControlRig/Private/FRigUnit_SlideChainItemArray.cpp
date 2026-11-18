// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f3d60

UScriptStruct * __cdecl FRigUnit_SlideChainItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SlideChainItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SlideChainItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray,(UObject *)pUVar1,
                         L"RigUnit_SlideChainItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SlideChainItemArray.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SlideChainItemArray.OuterSingleton;
}

// Execute @ 14a52df40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SlideChainItemArray::Execute
          (FRigUnit_SlideChainItemArray *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&local_18,this->SlideAmount,this->bPropagateToChildren,&this->WorkData);
  return;
}

// Execute @ 14a52dfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SlideChainItemArray::Execute(FRigUnit_SlideChainItemArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2a8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,this->SlideAmount,
                this->bPropagateToChildren,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a531260

UScriptStruct * __thiscall
FRigUnit_SlideChainItemArray::GetExecuteContextStruct(FRigUnit_SlideChainItemArray *this)

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

// RigVMExecute @ 14a556920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SlideChainItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  float *pfVar7;
  uchar *puVar8;
  FRigVMMemoryHandle *pFVar9;
  FRigVMSlice *pFVar10;
  FRigUnit_SlideChain_WorkData *pFVar11;
  FControlRigExecuteContext *pFVar12;
  TArrayView<FRigElementKey_const_,int> local_28 [2];
  
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
    puVar6 = pFVar9->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
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
    pfVar7 = (float *)pFVar9[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  fVar1 = *pfVar7;
  if (iVar2 < 3) {
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
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar9[2].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  bVar4 = (bool)*puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FRigUnit_SlideChain_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar10->Offset + pFVar10->Index);
  local_28[0].DataPtr = *(FRigElementKey **)puVar6;
  local_28[0].ArrayNum = *(int *)(puVar6 + 8);
  if (local_28[0].ArrayNum < 0) {
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
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,local_28,fVar1,bVar4,pFVar11);
  return;
}

// StaticExecute @ 14a5959d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_SlideChainItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          float param_3,bool param_4,FRigUnit_SlideChain_WorkData *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this_01;
  FRigElementKey *pFVar2;
  ushort uVar3;
  URigHierarchy *this_02;
  FCachedRigElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  bool bVar37;
  int iVar38;
  TTransform<double> *pTVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  FRigElementKey *pFVar43;
  uint uVar44;
  uint uVar45;
  FScriptContainerElement *pFVar46;
  longlong lVar47;
  uint uVar48;
  longlong lVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStackY_498 [32];
  longlong local_440;
  longlong local_438;
  FCachedRigElement local_3f8;
  FRigElementKey local_3d8;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_378;
  TQuat<double> local_358;
  TQuat<double> local_338;
  double local_318;
  double dStack_310;
  double local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  TVector<double> local_2e8;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_498;
  this_02 = param_1->Hierarchy;
  if (this_02 != (URigHierarchy *)0x0) {
    this = &param_5->ItemSegments;
    this_00 = &param_5->Transforms;
    pTVar1 = &param_5->CachedItems;
    this_01 = &param_5->BlendedTransforms;
    if (((param_5->CachedItems).ArrayNum == 0) && (1 < param_2->ArrayNum)) {
      (param_5->ItemSegments).ArrayNum = 0;
      if ((param_5->ItemSegments).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&this->AllocatorInstance,0,&(param_5->ItemSegments).ArrayMax);
      }
      (param_5->Transforms).ArrayNum = 0;
      if ((param_5->Transforms).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&this_00->AllocatorInstance,0,&(param_5->Transforms).ArrayMax);
      }
      (param_5->BlendedTransforms).ArrayNum = 0;
      if ((param_5->BlendedTransforms).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&this_01->AllocatorInstance,0,&(param_5->BlendedTransforms).ArrayMax)
        ;
      }
      param_5->ChainLength = 0.0;
      pFVar43 = param_2->DataPtr;
      local_440 = 0x20;
      pFVar2 = pFVar43 + param_2->ArrayNum;
      for (; pFVar43 != pFVar2; pFVar43 = pFVar43 + 1) {
        local_3d8.Type = pFVar43->Type;
        local_3d8._1_3_ = *(undefined3 *)&pFVar43->field_0x1;
        local_3d8.Name.ComparisonIndex.Value = (pFVar43->Name).ComparisonIndex.Value;
        local_3d8.Name.Number = (pFVar43->Name).Number;
        local_3f8.Key._0_4_ = local_3f8.Key._0_4_ & 0xffffff00;
        local_3f8.Key.Name.ComparisonIndex.Value = 0;
        local_3f8.Key.Name.Number = 0;
        local_3f8.Index = 0xffff;
        local_3f8.ContainerVersion = -1;
        local_3f8.Element = (FRigBaseElement *)0x0;
        FCachedRigElement::UpdateCache(&local_3f8,&local_3d8,this_02);
        pFVar4 = (FCachedRigElement *)(pTVar1->AllocatorInstance).Data;
        if (((pFVar4 <= &local_3f8) && (&local_3f8 < pFVar4 + (param_5->CachedItems).ArrayMax)) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar37)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar38 = (param_5->CachedItems).ArrayNum;
        if (iVar38 == (param_5->CachedItems).ArrayMax) {
          iVar38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar1->AllocatorInstance,&(param_5->CachedItems).ArrayMax);
        }
        (param_5->CachedItems).ArrayNum = iVar38 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar46 = pFVar5 + (longlong)iVar38 * 0x20;
        *(ulonglong *)pFVar46 =
             CONCAT44(local_3f8.Key.Name.ComparisonIndex.Value,local_3f8.Key._0_4_);
        *(ulonglong *)(pFVar46 + 8) =
             CONCAT26(local_3f8._14_2_,CONCAT24(local_3f8.Index,local_3f8.Key.Name.Number));
        pFVar5 = pFVar5 + (longlong)iVar38 * 0x20 + 0x10;
        *(ulonglong *)pFVar5 = CONCAT44(local_3f8._20_4_,local_3f8.ContainerVersion);
        *(FRigBaseElement **)(pFVar5 + 8) = local_3f8.Element;
      }
      iVar38 = (param_5->CachedItems).ArrayNum;
      if (iVar38 < 2) {
        return;
      }
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(this,iVar38,Default);
      if (((param_5->ItemSegments).ArrayNum < 1) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar37)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar41 = 1;
      *(undefined4 *)(this->AllocatorInstance).Data = 0;
      iVar38 = (param_5->CachedItems).ArrayNum;
      if (1 < iVar38) {
        lVar47 = 1;
        do {
          uVar42 = 0;
          if ((int)(uVar41 - 1) < iVar38) {
            uVar42 = -uVar41 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar42 = 0xffffffff;
          uVar3 = *(ushort *)((pTVar1->AllocatorInstance).Data + local_440 + -0x14);
          if (uVar3 != 0xffff) {
            uVar42 = (uint)uVar3;
          }
          URigHierarchy::GetGlobalTransformByIndex(this_02,&local_208,uVar42,false);
          uVar44 = ~uVar41 >> 0x1f;
          local_3b8 = local_208.Translation.ZW.m128d_f64[0];
          local_3c8 = local_208.Translation.XY.m128d_f64[0];
          dStack_3c0 = local_208.Translation.XY.m128d_f64[1];
          uVar42 = 0;
          if ((int)uVar41 < (param_5->CachedItems).ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar42 = 0xffffffff;
          uVar3 = *(ushort *)((pTVar1->AllocatorInstance).Data + local_440 + 0xc);
          if (uVar3 != 0xffff) {
            uVar42 = (uint)uVar3;
          }
          URigHierarchy::GetGlobalTransformByIndex(this_02,&local_1a8,uVar42,false);
          local_318 = local_1a8.Translation.XY.m128d_f64[0];
          dStack_310 = local_1a8.Translation.XY.m128d_f64[1];
          auVar50._8_8_ = local_1a8.Translation.XY.m128d_f64[1];
          auVar50._0_8_ = local_1a8.Translation.XY.m128d_f64[1];
          uVar42 = 0;
          if ((int)uVar41 < (param_5->ItemSegments).ArrayNum) {
            uVar42 = uVar44;
          }
          local_308 = local_1a8.Translation.ZW.m128d_f64[0];
          auVar16._8_8_ = 0;
          auVar16._0_8_ =
               (dStack_3c0 - local_1a8.Translation.XY.m128d_f64[1]) *
               (dStack_3c0 - local_1a8.Translation.XY.m128d_f64[1]) +
               (local_3c8 - local_1a8.Translation.XY.m128d_f64[0]) *
               (local_3c8 - local_1a8.Translation.XY.m128d_f64[0]) +
               (local_3b8 - local_1a8.Translation.ZW.m128d_f64[0]) *
               (local_3b8 - local_1a8.Translation.ZW.m128d_f64[0]);
          auVar50 = sqrtpd(auVar50,auVar16);
          if ((uVar42 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)((this->AllocatorInstance).Data + lVar47 * 4) = (float)auVar50._0_8_;
          uVar42 = 0;
          if ((int)uVar41 < (param_5->ItemSegments).ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar41 = uVar41 + 1;
          local_440 = local_440 + 0x20;
          lVar49 = lVar47 * 4;
          lVar47 = lVar47 + 1;
          param_5->ChainLength =
               *(float *)((this->AllocatorInstance).Data + lVar49) + param_5->ChainLength;
          iVar38 = (param_5->CachedItems).ArrayNum;
        } while ((int)uVar41 < iVar38);
      }
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,iVar38,Default);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (this_01,(param_5->CachedItems).ArrayNum,Default);
    }
    fVar35 = __real_322bcc77;
    iVar38 = (param_5->CachedItems).ArrayNum;
    if ((1 < iVar38) &&
       (__real_322bcc77 < param_5->ChainLength || __real_322bcc77 == param_5->ChainLength)) {
      uVar41 = 0;
      lVar47 = 0;
      lVar49 = 0;
      do {
        uVar42 = 0;
        if ((int)uVar41 < iVar38) {
          uVar42 = ~uVar41 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar37)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar42 = 0xffffffff;
        uVar3 = *(ushort *)((pTVar1->AllocatorInstance).Data + lVar49 + 0xc);
        if (uVar3 != 0xffff) {
          uVar42 = (uint)uVar3;
        }
        URigHierarchy::GetGlobalTransformByIndex(this_02,&local_268,uVar42,false);
        dVar34 = local_268.Scale3D.ZW.m128d_f64[1];
        dVar19 = local_268.Scale3D.ZW.m128d_f64[0];
        dVar18 = local_268.Scale3D.XY.m128d_f64[1];
        dVar17 = local_268.Scale3D.XY.m128d_f64[0];
        dVar15 = local_268.Translation.ZW.m128d_f64[1];
        dVar14 = local_268.Translation.ZW.m128d_f64[0];
        dVar12 = local_268.Translation.XY.m128d_f64[1];
        dVar10 = local_268.Translation.XY.m128d_f64[0];
        dVar9 = local_268.Rotation.ZW.m128d_f64[1];
        dVar8 = local_268.Rotation.ZW.m128d_f64[0];
        dVar33 = local_268.Rotation.XY.m128d_f64[1];
        dVar32 = local_268.Rotation.XY.m128d_f64[0];
        uVar42 = 0;
        if ((int)uVar41 < (param_5->Transforms).ArrayNum) {
          uVar42 = ~uVar41 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar37)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar46 = (this_00->AllocatorInstance).Data;
        uVar41 = uVar41 + 1;
        lVar49 = lVar49 + 0x20;
        *(double *)(pFVar46 + lVar47) = dVar32;
        *(double *)(pFVar46 + lVar47 + 8) = dVar33;
        *(double *)(pFVar46 + lVar47 + 0x10) = dVar8;
        *(double *)(pFVar46 + lVar47 + 0x10 + 8) = dVar9;
        *(double *)(pFVar46 + lVar47 + 0x20) = dVar10;
        *(double *)(pFVar46 + lVar47 + 0x20 + 8) = dVar12;
        *(double *)(pFVar46 + lVar47 + 0x30) = dVar14;
        *(double *)(pFVar46 + lVar47 + 0x30 + 8) = dVar15;
        *(double *)(pFVar46 + lVar47 + 0x40) = dVar17;
        *(double *)(pFVar46 + lVar47 + 0x40 + 8) = dVar18;
        *(double *)(pFVar46 + lVar47 + 0x50) = dVar19;
        *(double *)(pFVar46 + lVar47 + 0x50 + 8) = dVar34;
        fVar36 = __real_b22bcc77;
        lVar47 = lVar47 + 0x60;
        iVar38 = (param_5->CachedItems).ArrayNum;
      } while ((int)uVar41 < iVar38);
      if (0 < (param_5->Transforms).ArrayNum) {
        uVar41 = 0;
        lVar47 = 0;
        local_438 = 0;
        fVar54 = __real_3f800000;
        do {
          uVar44 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          fVar53 = 0.0;
          fVar52 = (float)((uint)(param_3 * param_5->ChainLength) ^
                          __xmm_80000000800000008000000080000000);
          uVar42 = uVar41;
          lVar49 = local_438;
          if (fVar52 <= 0.0) {
            for (; (fVar52 < fVar36 && (0 < (int)uVar42)); uVar42 = uVar42 - 1) {
              uVar45 = 0;
              if ((int)uVar42 < (param_5->ItemSegments).ArrayNum) {
                uVar45 = ~uVar42 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar37)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar52 = fVar52 + *(float *)((this->AllocatorInstance).Data + lVar49 * 4);
              lVar49 = lVar49 + -1;
            }
          }
          else {
            while ((fVar35 < fVar52 && ((int)uVar42 < (param_5->Transforms).ArrayNum + -1))) {
              uVar42 = uVar42 + 1;
              uVar45 = 0;
              if ((int)uVar42 < (param_5->ItemSegments).ArrayNum) {
                uVar45 = ~uVar42 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar37)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar52 = fVar52 - *(float *)((this->AllocatorInstance).Data + (lVar49 + 1) * 4);
              lVar49 = lVar49 + 1;
            }
          }
          if ((int)uVar42 < (param_5->Transforms).ArrayNum + -1) {
            uVar48 = uVar42 + 1;
            uVar40 = ~uVar48 >> 0x1f;
            uVar45 = 0;
            if ((int)uVar48 < (param_5->ItemSegments).ArrayNum) {
              uVar45 = uVar40;
            }
            if ((uVar45 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (fVar35 < *(float *)((this->AllocatorInstance).Data + lVar49 * 4 + 4)) {
              iVar38 = (param_5->ItemSegments).ArrayNum;
              if (fVar36 <= param_3) {
                uVar44 = 0;
                if ((int)uVar48 < iVar38) {
                  uVar44 = uVar40;
                }
                if ((uVar44 == 0) &&
                   (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar37)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                fVar53 = fVar52 / *(float *)((this->AllocatorInstance).Data + lVar49 * 4 + 4);
              }
              else {
                uVar45 = 0;
                if ((int)uVar48 < iVar38) {
                  uVar45 = uVar40;
                }
                if ((uVar45 == 0) &&
                   (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar37)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                fVar53 = fVar54 - (float)((uint)(fVar52 / *(float *)((this->AllocatorInstance).Data
                                                                    + lVar49 * 4 + 4)) & uVar44);
              }
              if (fVar54 <= fVar53) {
                fVar53 = fVar54;
              }
              if (fVar53 <= 0.0) {
                fVar53 = 0.0;
              }
            }
          }
          uVar44 = 0;
          if ((int)uVar42 < (param_5->Transforms).ArrayNum) {
            uVar44 = ~uVar42 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar46 = (this_00->AllocatorInstance).Data;
          lVar49 = lVar49 * 0x60;
          uVar45 = ~uVar41 >> 0x1f;
          uVar20 = *(undefined8 *)(pFVar46 + lVar49);
          uVar21 = *(undefined8 *)(pFVar46 + lVar49 + 8);
          uVar22 = *(undefined8 *)(pFVar46 + lVar49 + 0x10);
          uVar23 = *(undefined8 *)(pFVar46 + lVar49 + 0x10 + 8);
          uVar24 = *(undefined8 *)(pFVar46 + lVar49 + 0x20);
          uVar25 = *(undefined8 *)(pFVar46 + lVar49 + 0x20 + 8);
          uVar26 = *(undefined8 *)(pFVar46 + lVar49 + 0x30);
          uVar27 = *(undefined8 *)(pFVar46 + lVar49 + 0x30 + 8);
          uVar28 = *(undefined8 *)(pFVar46 + lVar49 + 0x40);
          uVar29 = *(undefined8 *)(pFVar46 + lVar49 + 0x40 + 8);
          uVar30 = *(undefined8 *)(pFVar46 + lVar49 + 0x50);
          uVar31 = *(undefined8 *)(pFVar46 + lVar49 + 0x50 + 8);
          uVar44 = 0;
          if ((int)uVar41 < (param_5->BlendedTransforms).ArrayNum) {
            uVar44 = uVar45;
          }
          if ((uVar44 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar46 = (this_01->AllocatorInstance).Data;
          *(undefined8 *)(pFVar46 + lVar47) = uVar20;
          *(undefined8 *)(pFVar46 + lVar47 + 8) = uVar21;
          *(undefined8 *)(pFVar46 + lVar47 + 0x10) = uVar22;
          *(undefined8 *)(pFVar46 + lVar47 + 0x10 + 8) = uVar23;
          fVar54 = __real_3f800000;
          *(undefined8 *)(pFVar46 + lVar47 + 0x20) = uVar24;
          *(undefined8 *)(pFVar46 + lVar47 + 0x20 + 8) = uVar25;
          *(undefined8 *)(pFVar46 + lVar47 + 0x30) = uVar26;
          *(undefined8 *)(pFVar46 + lVar47 + 0x30 + 8) = uVar27;
          *(undefined8 *)(pFVar46 + lVar47 + 0x40) = uVar28;
          *(undefined8 *)(pFVar46 + lVar47 + 0x40 + 8) = uVar29;
          *(undefined8 *)(pFVar46 + lVar47 + 0x50) = uVar30;
          *(undefined8 *)(pFVar46 + lVar47 + 0x50 + 8) = uVar31;
          iVar38 = (param_5->Transforms).ArrayNum;
          if ((((int)uVar42 < iVar38 + -1) && (fVar35 < fVar53)) && (fVar53 < fVar54)) {
            uVar42 = uVar42 + 1;
            uVar44 = 0;
            if ((int)uVar42 < iVar38) {
              uVar44 = ~uVar42 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar46 = (this_00->AllocatorInstance).Data;
            uVar44 = 0;
            if ((int)uVar41 < (param_5->BlendedTransforms).ArrayNum) {
              uVar44 = uVar45;
            }
            if ((uVar44 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pTVar39 = FRigVMMathLibrary::LerpTransform
                                (&local_148,
                                 (TTransform<double> *)
                                 ((this_01->AllocatorInstance).Data + (longlong)(int)uVar41 * 0x60),
                                 (TTransform<double> *)(pFVar46 + (longlong)(int)uVar42 * 0x60),
                                 fVar53);
            dVar32 = (pTVar39->Rotation).XY.m128d_f64[0];
            dVar33 = (pTVar39->Rotation).XY.m128d_f64[1];
            dVar8 = (pTVar39->Rotation).ZW.m128d_f64[0];
            dVar9 = (pTVar39->Rotation).ZW.m128d_f64[1];
            dVar10 = (pTVar39->Translation).XY.m128d_f64[0];
            dVar12 = (pTVar39->Translation).XY.m128d_f64[1];
            dVar14 = (pTVar39->Translation).ZW.m128d_f64[0];
            dVar15 = (pTVar39->Translation).ZW.m128d_f64[1];
            dVar17 = (pTVar39->Scale3D).XY.m128d_f64[0];
            dVar18 = (pTVar39->Scale3D).XY.m128d_f64[1];
            dVar19 = (pTVar39->Scale3D).ZW.m128d_f64[0];
            dVar34 = (pTVar39->Scale3D).ZW.m128d_f64[1];
            uVar42 = 0;
            if ((int)uVar41 < (param_5->BlendedTransforms).ArrayNum) {
              uVar42 = uVar45;
            }
            if ((uVar42 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar46 = (this_01->AllocatorInstance).Data;
            *(double *)(pFVar46 + lVar47) = dVar32;
            *(double *)(pFVar46 + lVar47 + 8) = dVar33;
            *(double *)(pFVar46 + lVar47 + 0x10) = dVar8;
            *(double *)(pFVar46 + lVar47 + 0x10 + 8) = dVar9;
            *(double *)(pFVar46 + lVar47 + 0x20) = dVar10;
            *(double *)(pFVar46 + lVar47 + 0x20 + 8) = dVar12;
            fVar54 = __real_3f800000;
            *(double *)(pFVar46 + lVar47 + 0x30) = dVar14;
            *(double *)(pFVar46 + lVar47 + 0x30 + 8) = dVar15;
            *(double *)(pFVar46 + lVar47 + 0x40) = dVar17;
            *(double *)(pFVar46 + lVar47 + 0x40 + 8) = dVar18;
            *(double *)(pFVar46 + lVar47 + 0x50) = dVar19;
            *(double *)(pFVar46 + lVar47 + 0x50 + 8) = dVar34;
          }
          uVar41 = uVar41 + 1;
          local_438 = local_438 + 1;
          lVar47 = lVar47 + 0x60;
        } while ((int)uVar41 < (param_5->Transforms).ArrayNum);
      }
      dVar33 = _UNK_150689518;
      dVar32 = ___xmm_00000000000000003ff0000000000000;
      iVar38 = (param_5->CachedItems).ArrayNum;
      uVar41 = 0;
      if (0 < iVar38) {
        local_438 = 0;
        lVar47 = 0;
        do {
          if ((int)uVar41 < iVar38 + -1) {
            uVar44 = ~uVar41 >> 0x1f;
            uVar42 = 0;
            if ((int)uVar41 < (param_5->BlendedTransforms).ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (this_01->AllocatorInstance).Data;
            local_378._s_0.Z = 0.0;
            local_378._s_0.X = dVar32;
            local_378._s_0.Y = dVar33;
            pFVar46 = pFVar5 + lVar47;
            local_358.X = *(double *)pFVar46;
            local_358.Y = *(double *)(pFVar46 + 8);
            pFVar5 = pFVar5 + lVar47 + 0x10;
            local_358.Z = *(double *)pFVar5;
            local_358.W = *(double *)(pFVar5 + 8);
            UE::Math::TQuat<double>::RotateVector
                      (&local_358,&local_2e8,(TVector<double> *)&local_378._s_0);
            uVar42 = 0;
            if ((int)(uVar41 + 1) < (param_5->BlendedTransforms).ArrayNum) {
              uVar42 = ~(uVar41 + 1) >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (this_01->AllocatorInstance).Data;
            pFVar46 = pFVar5 + lVar47 + 0x80;
            local_3b0 = *(double *)pFVar46;
            dStack_3a8 = *(double *)(pFVar46 + 8);
            local_3a0 = *(double *)(pFVar5 + lVar47 + 0x90);
            uVar42 = 0;
            if ((int)uVar41 < (param_5->BlendedTransforms).ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (this_01->AllocatorInstance).Data;
            pFVar46 = pFVar5 + lVar47 + 0x20;
            local_300 = *(double *)pFVar46;
            dStack_2f8 = *(double *)(pFVar46 + 8);
            local_2f0 = *(double *)(pFVar5 + lVar47 + 0x30);
            local_398._s_0.X = local_3b0 - local_300;
            local_398._s_0.Y = dStack_3a8 - dStack_2f8;
            local_398._s_0.Z = local_3a0 - local_2f0;
            UE::Math::TQuat<double>::FindBetweenVectors
                      (&local_338,&local_2e8,(TVector<double> *)&local_398._s_0);
            uVar42 = 0;
            if ((int)uVar41 < (param_5->BlendedTransforms).ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar46 = (this_01->AllocatorInstance).Data;
            uVar42 = 0;
            if ((int)uVar41 < (param_5->BlendedTransforms).ArrayNum) {
              uVar42 = uVar44;
            }
            if ((uVar42 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (this_01->AllocatorInstance).Data;
            pFVar5 = pFVar6 + lVar47;
            dVar18 = *(double *)pFVar5;
            dVar19 = *(double *)(pFVar5 + 8);
            auVar50 = *(undefined1 (*) [16])(pFVar6 + lVar47 + 0x10);
            dVar17 = auVar50._0_8_;
            dVar14 = auVar50._8_8_;
            dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
            auVar51._8_4_ = auVar50._0_4_;
            auVar51._0_8_ = dVar14;
            auVar51._12_4_ = auVar50._4_4_;
            dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
            dVar15 = dVar17 * local_338.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar19 * local_338.W +
                     dVar14 * local_338.Y *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     local_338.Z * dVar18 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar12 = local_338.X * dVar18 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar14 * local_338.W +
                     dVar19 * local_338.Y *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     auVar51._8_8_ * local_338.Z *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar13._8_4_ = SUB84(dVar15,0);
            auVar13._0_8_ =
                 dVar14 * local_338.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar18 * local_338.W +
                 dVar17 * local_338.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_338.Z * dVar19 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            *(undefined1 (*) [16])(pFVar46 + lVar47) = auVar13;
            auVar11._8_4_ = SUB84(dVar12,0);
            auVar11._0_8_ =
                 local_338.X * dVar19 * dVar8 + dVar17 * local_338.W + dVar18 * local_338.Y * dVar10
                 + dVar14 * local_338.Z * dVar9;
            auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            *(undefined1 (*) [16])(pFVar46 + lVar47 + 0x10) = auVar11;
            lVar49 = local_438;
          }
          else {
            lVar49 = (longlong)(int)uVar41;
          }
          uVar44 = ~uVar41 >> 0x1f;
          uVar42 = 0;
          if ((int)uVar41 < (param_5->BlendedTransforms).ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar46 = (this_01->AllocatorInstance).Data + lVar49 * 0x60;
          uVar42 = 0;
          if ((int)uVar41 < (param_5->CachedItems).ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar42 = 0xffffffff;
          uVar3 = *(ushort *)((pTVar1->AllocatorInstance).Data + lVar49 * 0x20 + 0xc);
          if (uVar3 != 0xffff) {
            uVar42 = (uint)uVar3;
          }
          local_2c8.Rotation.XY.m128d_f64[0] = *(double *)pFVar46;
          local_2c8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar46 + 8);
          local_2c8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar46 + 0x10);
          local_2c8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar46 + 0x18);
          local_2c8.Translation.XY.m128d_f64[0] = *(double *)(pFVar46 + 0x20);
          local_2c8.Translation.XY.m128d_f64[1] = *(double *)(pFVar46 + 0x28);
          local_2c8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar46 + 0x30);
          local_2c8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar46 + 0x38);
          local_2c8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar46 + 0x40);
          local_2c8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar46 + 0x48);
          local_2c8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar46 + 0x50);
          local_2c8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar46 + 0x58);
          URigHierarchy::SetGlobalTransformByIndex
                    (this_02,uVar42,&local_2c8,false,param_4,false,false);
          uVar41 = uVar41 + 1;
          iVar38 = (param_5->CachedItems).ArrayNum;
          local_438 = local_438 + 1;
          lVar47 = lVar47 + 0x60;
        } while ((int)uVar41 < iVar38);
      }
    }
  }
  return;
}

