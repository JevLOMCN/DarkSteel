// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4c09f0

UScriptStruct * __cdecl FRigUnit_PositionConstraintLocalSpaceOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset,
                         (UObject *)pUVar1,L"RigUnit_PositionConstraintLocalSpaceOffset");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset.
         OuterSingleton;
}

// FRigUnit_PositionConstraintLocalSpaceOffset @ 14a5150a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_PositionConstraintLocalSpaceOffset * __thiscall
FRigUnit_PositionConstraintLocalSpaceOffset::FRigUnit_PositionConstraintLocalSpaceOffset
          (FRigUnit_PositionConstraintLocalSpaceOffset *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRigUnit_PositionConstraintLocalSpaceOffset *pFVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_PositionConstraintLocalSpaceOffset__6B_;
  (this->Child).Name.ComparisonIndex = 0;
  (this->Child).Name.Number = 0;
  (this->Child).Type = Bone;
  this->bMaintainOffset = true;
  (this->Filter).bX = true;
  (this->Filter).bY = true;
  (this->Filter).bZ = true;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  (this->Parents).ArrayMax = 0;
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
      pFVar5 = (FRigUnit_PositionConstraintLocalSpaceOffset *)(*pcVar2)();
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

// Execute @ 14a52bac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PositionConstraintLocalSpaceOffset::Execute
          (FRigUnit_PositionConstraintLocalSpaceOffset *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&this->Child,this->bMaintainOffset,&this->Filter,&local_18,this->Weight,
                &this->ChildCache,&this->ParentCaches);
  return;
}

// Execute @ 14a52bb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PositionConstraintLocalSpaceOffset::Execute
          (FRigUnit_PositionConstraintLocalSpaceOffset *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FConstraintParent_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
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
                &this->Filter,&local_278,this->Weight,&this->ChildCache,&this->ParentCaches);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a531060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_PositionConstraintLocalSpaceOffset::GetExecuteContextStruct
          (FRigUnit_PositionConstraintLocalSpaceOffset *this)

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

// RigVMExecute @ 14a54df20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PositionConstraintLocalSpaceOffset::RigVMExecute
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
  FFilterOptionPerAxis *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  float *pfVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar13;
  FControlRigExecuteContext *pFVar14;
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
    pFVar8 = (FFilterOptionPerAxis *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FFilterOptionPerAxis *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar13 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
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
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,pFVar6,bVar4,pFVar8,local_48,fVar1,pFVar12,pTVar13);
  return;
}

// StaticExecute @ 14a58a110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_PositionConstraintLocalSpaceOffset::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FFilterOptionPerAxis *param_4,TArrayView<FConstraintParent_const_,int> *param_5,
          float param_6,FCachedRigElement *param_7,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_8)

{
  ERigElementType EVar1;
  ushort uVar2;
  URigHierarchy *this;
  FScriptContainerElement *pFVar3;
  FRigTransformElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FConstraintParent *pFVar17;
  FRigControlElement *pFVar18;
  TTransform<double> *pTVar19;
  UScriptStruct *pUVar20;
  URigHierarchy *pUVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
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
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined4 uVar73;
  undefined1 auVar69 [16];
  double dVar68;
  double dVar74;
  undefined4 uVar75;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined4 uVar82;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar103;
  undefined4 uVar104;
  undefined1 auVar102 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar111;
  undefined4 uVar112;
  undefined4 uVar113;
  undefined4 uVar114;
  undefined4 uVar115;
  undefined1 auStackY_748 [32];
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  double local_6d8;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  double local_6a0;
  longlong local_698;
  double local_678;
  double dStack_670;
  FRigElementKey local_658;
  double local_648;
  double dStack_640;
  double local_638;
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  double local_608 [2];
  double local_5f8 [2];
  double local_5e8 [2];
  double local_5d8 [2];
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  double local_598 [2];
  double local_588;
  double local_570;
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
  
  fVar13 = __real_38d1b717;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_748;
  if (((__real_38d1b717 <= param_6) && (this = param_1->Hierarchy, this != (URigHierarchy *)0x0)) &&
     (bVar14 = FCachedRigElement::UpdateCache(param_7,param_2,this), bVar14)) {
    if (param_8->ArrayNum != param_5->ArrayNum) {
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (param_8,param_5->ArrayNum,Default);
    }
    uVar23 = 0;
    fVar88 = 0.0;
    if (0 < param_5->ArrayNum) {
      do {
        pFVar17 = TArrayView<FConstraintParent_const_,int>::operator[](param_5,uVar23);
        uVar16 = 0;
        if ((int)uVar23 < param_8->ArrayNum) {
          uVar16 = ~uVar23 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar14 = FCachedRigElement::UpdateCache
                           ((FCachedRigElement *)
                            ((param_8->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x20),
                            &pFVar17->Item,this);
        if (bVar14) {
          fVar111 = pFVar17->Weight;
          if (fVar111 <= 0.0) {
            fVar111 = 0.0;
          }
          if (fVar13 <= fVar111) {
            fVar88 = fVar88 + fVar111;
          }
        }
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < param_5->ArrayNum);
    }
    fVar111 = __real_3f800000 / fVar88;
    if (fVar13 < fVar88) {
      local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_4a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      EVar1 = param_2->Type;
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
      if (EVar1 == Control) {
        uVar23 = 0xffffffff;
        if (param_7->Index != 0xffff) {
          uVar23 = (uint)param_7->Index;
        }
        pFVar18 = URigHierarchy::Get<FRigControlElement>(this,uVar23);
        if (pFVar18 != (FRigControlElement *)0x0) {
          pTVar19 = URigHierarchy::GetControlOffsetTransform(this,&local_208,pFVar18,InitialLocal);
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
        }
      }
      local_6e8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uStack_6e0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (param_3) {
        uVar23 = 0;
        local_6d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_6e8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        uStack_6e0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        uVar82 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar104 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar112 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar113 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        if (0 < param_5->ArrayNum) {
          lVar24 = 0;
          do {
            uVar16 = 0;
            if ((int)uVar23 < param_8->ArrayNum) {
              uVar16 = ~uVar23 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar14 = FCachedRigElement::IsValid
                               ((FCachedRigElement *)((param_8->AllocatorInstance).Data + lVar24));
            if (bVar14) {
              pFVar17 = TArrayView<FConstraintParent_const_,int>::operator[](param_5,uVar23);
              fVar88 = pFVar17->Weight;
              if (fVar88 <= 0.0) {
                fVar88 = 0.0;
              }
              if (fVar13 <= fVar88) {
                uVar16 = 0;
                if ((int)uVar23 < param_8->ArrayNum) {
                  uVar16 = ~uVar23 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar16 = 0xffffffff;
                uVar2 = *(ushort *)((param_8->AllocatorInstance).Data + lVar24 + 0xc);
                if (uVar2 != 0xffff) {
                  uVar16 = (uint)uVar2;
                }
                URigHierarchy::GetGlobalTransformByIndex(this,&local_268,uVar16,true);
                dVar67 = (double)(fVar88 * fVar111);
                local_5c8 = local_268.Translation.XY.m128d_f64[0];
                dStack_5c0 = local_268.Translation.XY.m128d_f64[1];
                local_6e8 = local_6e8 + local_268.Translation.XY.m128d_f64[0] * dVar67;
                local_5b8 = local_268.Translation.ZW.m128d_f64[0];
                in_XMM4._0_8_ = local_268.Translation.ZW.m128d_f64[0] * dVar67;
                in_XMM4._8_8_ = local_268.Translation.ZW.m128d_f64[1];
                uStack_6e0 = uStack_6e0 + local_268.Translation.XY.m128d_f64[1] * dVar67;
                local_6d8 = local_6d8 + in_XMM4._0_8_;
              }
            }
            uVar23 = uVar23 + 1;
            lVar24 = lVar24 + 0x20;
          } while ((int)uVar23 < param_5->ArrayNum);
          uVar82 = (undefined4)local_6e8;
          uVar104 = local_6e8._4_4_;
          uVar112 = (undefined4)uStack_6e0;
          uVar113 = uStack_6e0._4_4_;
        }
        uVar16 = 0xffffffff;
        uVar23 = 0xffffffff;
        if (param_7->Index != 0xffff) {
          uVar23 = (uint)param_7->Index;
        }
        pUVar21 = this;
        pTVar19 = URigHierarchy::GetParentTransformByIndex(this,&local_3e8,uVar23,true);
        auVar59._0_8_ =
             (double)CONCAT44(local_3e8.Scale3D.ZW.m128d_f64[0]._4_4_ &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_3e8.Scale3D.ZW.m128d_f64[0]._0_4_ &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar59._8_4_ = local_3e8.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88;
        auVar59._12_4_ = local_3e8.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
        auVar85._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar59._8_8_);
        auVar85._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar59._0_8_);
        uVar23 = movmskpd((int)pUVar21,auVar85);
        auVar46._0_8_ =
             (double)CONCAT44(local_3e8.Scale3D.XY.m128d_f64[0]._4_4_ &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_3e8.Scale3D.XY.m128d_f64[0]._0_4_ &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar46._8_4_ = local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
        auVar46._12_4_ = local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
        auVar47._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar46._8_8_);
        auVar47._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar46._0_8_);
        iVar15 = movmskpd((int)pTVar19,auVar47);
        if ((uVar23 & 0x3fffffff) == 0 && iVar15 == 0) {
          local_3e8.Rotation.XY.m128d_f64[0] =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_3e8.Rotation.XY.m128d_f64[1] =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_3e8.Rotation.ZW.m128d_f64[0] =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_3e8.Rotation.ZW.m128d_f64[1] =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_608[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_608[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_5e8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_5d8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_5f8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        }
        else {
          auVar9._4_8_ = in_XMM4._8_8_;
          auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar76._0_8_ = auVar9._0_8_ << 0x20;
          auVar76._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar76._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar77._8_8_ = auVar76._8_8_;
          auVar77._0_8_ = local_3e8.Scale3D.ZW.m128d_f64[0];
          local_3e8.Rotation.XY.m128d_f64[0] =
               local_3e8.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          local_3e8.Rotation.XY.m128d_f64[1] =
               local_3e8.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar114 = (undefined4)((ulonglong)local_3e8.Rotation.XY.m128d_f64[1] >> 0x20);
          local_3e8.Rotation.ZW.m128d_f64[0] =
               local_3e8.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          local_3e8.Rotation.ZW.m128d_f64[1] =
               local_3e8.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar75 = (undefined4)((ulonglong)local_3e8.Rotation.ZW.m128d_f64[1] >> 0x20);
          lVar24 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                      local_3e8.Scale3D.ZW.m128d_f64[0]._4_4_,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                      local_3e8.Scale3D.ZW.m128d_f64[0]._0_4_) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          (undefined1  [16])local_3e8.Scale3D.XY.m128d_f64);
          auVar83._0_8_ =
               (double)CONCAT44(local_3e8.Scale3D.XY.m128d_f64[0]._4_4_ &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_3e8.Scale3D.XY.m128d_f64[0]._0_4_ &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar83._8_4_ = local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
          auVar83._12_4_ = local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
          auVar93._8_4_ = SUB84(local_3e8.Rotation.ZW.m128d_f64[1],0);
          auVar93._0_8_ = local_3e8.Rotation.ZW.m128d_f64[0];
          auVar93._12_4_ = uVar75;
          lVar25 = -(ulonglong)
                    (auVar83._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar28 = -(ulonglong)
                    (auVar83._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          local_5e8[0] = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar47._4_4_,
                                          ~(uint)lVar25 & auVar47._0_4_);
          local_5e8[1]._0_4_ = ~(uint)lVar28 & auVar47._8_4_;
          local_5e8[1]._4_4_ = ~(uint)((ulonglong)lVar28 >> 0x20) & auVar47._12_4_;
          auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar77);
          local_3e8.Translation.XY.m128d_f64[0] =
               local_3e8.Translation.XY.m128d_f64[0] * local_5e8[0];
          local_3e8.Translation.XY.m128d_f64[1] =
               local_3e8.Translation.XY.m128d_f64[1] * local_5e8[1];
          dVar67 = (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar47._4_4_,
                                    ~(uint)lVar24 & auVar47._0_4_);
          auVar78._8_4_ = SUB84(local_3e8.Rotation.XY.m128d_f64[1],0);
          auVar78._0_8_ = local_3e8.Rotation.XY.m128d_f64[0];
          auVar78._12_4_ = uVar114;
          auVar105._0_8_ = local_3e8.Translation.ZW.m128d_f64[0] * dVar67;
          auVar105._8_8_ = local_3e8.Translation.ZW.m128d_f64[1] * 0.0;
          auVar98._8_4_ = SUB84(local_3e8.Translation.XY.m128d_f64[1],0);
          auVar98._0_8_ = local_3e8.Translation.XY.m128d_f64[0];
          uVar73 = (undefined4)((ulonglong)local_3e8.Translation.XY.m128d_f64[1] >> 0x20);
          auVar98._12_4_ = uVar73;
          auVar84._8_4_ = SUB84(local_3e8.Rotation.XY.m128d_f64[1],0);
          auVar84._0_8_ = local_3e8.Rotation.XY.m128d_f64[0];
          auVar84._12_4_ = uVar114;
          dVar97 = auVar78._8_8_;
          auVar48._8_4_ = SUB84(local_3e8.Translation.XY.m128d_f64[1],0);
          auVar48._0_8_ = local_3e8.Translation.XY.m128d_f64[0];
          auVar48._12_4_ = uVar73;
          auVar47 = blendpd(auVar48,auVar105,2);
          auVar31._8_4_ = SUB84(local_3e8.Rotation.ZW.m128d_f64[0],0);
          auVar31._0_8_ = dVar97;
          auVar31._12_4_ = (int)((ulonglong)local_3e8.Rotation.ZW.m128d_f64[0] >> 0x20);
          auVar7._8_4_ = SUB84(local_3e8.Rotation.ZW.m128d_f64[1],0);
          auVar7._0_8_ = local_3e8.Rotation.ZW.m128d_f64[0];
          auVar7._12_4_ = uVar75;
          auVar85 = blendpd(auVar84,auVar7,2);
          auVar99._0_8_ =
               auVar98._8_8_ * local_3e8.Rotation.XY.m128d_f64[0] -
               dVar97 * local_3e8.Translation.XY.m128d_f64[0];
          auVar99._8_8_ =
               auVar105._0_8_ * local_3e8.Rotation.XY.m128d_f64[1] -
               auVar31._8_8_ * local_3e8.Translation.XY.m128d_f64[1];
          auVar69._8_4_ = SUB84(auVar99._8_8_,0);
          auVar69._0_8_ = auVar99._0_8_;
          auVar69._12_4_ = (int)((ulonglong)auVar99._8_8_ >> 0x20);
          auVar49._0_8_ =
               auVar47._0_8_ * local_3e8.Rotation.ZW.m128d_f64[0] - auVar85._0_8_ * auVar105._0_8_;
          auVar49._8_8_ =
               auVar47._8_8_ * local_3e8.Rotation.ZW.m128d_f64[1] - auVar85._8_8_ * auVar105._8_8_;
          auVar47 = blendpd(auVar99,auVar49,2);
          dVar68 = auVar69._8_8_ + auVar69._8_8_;
          dVar74 = auVar49._0_8_ + auVar49._0_8_;
          auVar100._0_8_ = auVar47._0_8_ + auVar47._0_8_;
          auVar100._8_8_ = auVar47._8_8_ + auVar47._8_8_;
          uVar73 = SUB84(dVar74,0);
          auVar60._8_4_ = uVar73;
          auVar60._0_8_ = dVar68;
          uVar75 = (undefined4)((ulonglong)dVar74 >> 0x20);
          auVar60._12_4_ = uVar75;
          auVar32._8_4_ = uVar73;
          auVar32._0_8_ = dVar68;
          auVar32._12_4_ = uVar75;
          auVar50._8_4_ = uVar73;
          auVar50._0_8_ = dVar68;
          auVar50._12_4_ = uVar75;
          auVar47 = blendpd(auVar50,auVar100,2);
          auVar61._0_8_ = auVar60._8_8_ * local_3e8.Rotation.XY.m128d_f64[0] - dVar68 * dVar97;
          auVar61._8_8_ =
               auVar100._0_8_ * local_3e8.Rotation.XY.m128d_f64[1] -
               auVar32._8_8_ * local_3e8.Rotation.ZW.m128d_f64[0];
          auVar33._8_4_ = SUB84(auVar100._8_8_,0);
          auVar33._0_8_ = auVar100._0_8_;
          auVar33._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
          auVar51._0_8_ =
               auVar47._0_8_ * local_3e8.Rotation.ZW.m128d_f64[0] - auVar100._0_8_ * auVar85._0_8_;
          auVar51._8_8_ =
               auVar47._8_8_ * local_3e8.Rotation.ZW.m128d_f64[1] - auVar33._8_8_ * auVar85._8_8_;
          auVar34._8_4_ = SUB84(auVar61._8_8_,0);
          auVar34._0_8_ = auVar61._0_8_;
          auVar34._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
          auVar47 = blendpd(auVar61,auVar51,2);
          local_5d8[1] = 0.0;
          local_5d8[0] = dVar67;
          local_608[1] = 0.0 - (dVar74 * local_3e8.Rotation.ZW.m128d_f64[1] +
                                local_3e8.Translation.XY.m128d_f64[1] + auVar51._0_8_);
          local_608[0] = 0.0 - (dVar68 * auVar93._8_8_ + local_3e8.Translation.XY.m128d_f64[0] +
                               auVar34._8_8_);
          local_5f8[1] = 0.0;
          local_5f8[0] = 0.0 - (auVar100._0_8_ * auVar93._8_8_ + auVar105._0_8_ + auVar47._0_8_);
        }
        uVar75 = (undefined4)((ulonglong)local_3e8.Rotation.ZW.m128d_f64[1] >> 0x20);
        uVar73 = SUB84(local_3e8.Rotation.ZW.m128d_f64[1],0);
        uVar115 = (undefined4)((ulonglong)local_3e8.Rotation.XY.m128d_f64[1] >> 0x20);
        uVar114 = SUB84(local_3e8.Rotation.XY.m128d_f64[1],0);
        auVar70._8_4_ = uVar114;
        auVar70._0_8_ = local_3e8.Rotation.XY.m128d_f64[0];
        auVar70._12_4_ = uVar115;
        auVar79._8_4_ = uVar114;
        auVar79._0_8_ = local_3e8.Rotation.XY.m128d_f64[0];
        auVar79._12_4_ = uVar115;
        auVar86._8_4_ = uVar73;
        auVar86._0_8_ = local_3e8.Rotation.ZW.m128d_f64[0];
        auVar86._12_4_ = uVar75;
        dVar74 = auVar70._8_8_;
        local_618._8_4_ = uVar73;
        local_618._0_8_ = local_3e8.Rotation.ZW.m128d_f64[0];
        local_618._12_4_ = uVar75;
        local_628._8_4_ = uVar114;
        local_628._0_8_ = local_3e8.Rotation.XY.m128d_f64[0];
        local_628._12_4_ = uVar115;
        dVar67 = (double)CONCAT44(uVar104,uVar82) * local_5e8[0];
        dVar68 = (double)CONCAT44(uVar113,uVar112) * local_5e8[1];
        uVar82 = (undefined4)((ulonglong)dVar68 >> 0x20);
        auVar35._8_4_ = SUB84(local_3e8.Rotation.ZW.m128d_f64[0],0);
        auVar35._0_8_ = dVar74;
        auVar35._12_4_ = (int)((ulonglong)local_3e8.Rotation.ZW.m128d_f64[0] >> 0x20);
        auVar89._8_4_ = SUB84(dVar68,0);
        auVar89._0_8_ = dVar67;
        auVar89._12_4_ = uVar82;
        auVar94._0_8_ = local_6d8 * local_5d8[0];
        auVar94._8_8_ = local_5d8[1] * 0.0;
        auVar52._8_4_ = SUB84(dVar68,0);
        auVar52._0_8_ = dVar67;
        auVar52._12_4_ = uVar82;
        auVar47 = blendpd(auVar52,auVar94,2);
        auVar90._0_8_ = auVar89._8_8_ * local_3e8.Rotation.XY.m128d_f64[0] - dVar74 * dVar67;
        auVar90._8_8_ = auVar94._0_8_ * local_3e8.Rotation.XY.m128d_f64[1] - auVar35._8_8_ * dVar68;
        auVar101._8_4_ = SUB84(auVar90._8_8_,0);
        auVar101._0_8_ = auVar90._0_8_;
        auVar101._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
        auVar8._8_4_ = uVar73;
        auVar8._0_8_ = local_3e8.Rotation.ZW.m128d_f64[0];
        auVar8._12_4_ = uVar75;
        auVar85 = blendpd(auVar79,auVar8,2);
        auVar53._0_8_ =
             auVar47._0_8_ * local_3e8.Rotation.ZW.m128d_f64[0] - auVar85._0_8_ * auVar94._0_8_;
        auVar53._8_8_ =
             auVar47._8_8_ * local_3e8.Rotation.ZW.m128d_f64[1] - auVar85._8_8_ * auVar94._8_8_;
        auVar47 = blendpd(auVar90,auVar53,2);
        dVar97 = auVar101._8_8_ + auVar101._8_8_;
        dVar103 = auVar53._0_8_ + auVar53._0_8_;
        auVar91._0_8_ = auVar47._0_8_ + auVar47._0_8_;
        auVar91._8_8_ = auVar47._8_8_ + auVar47._8_8_;
        uVar82 = SUB84(dVar103,0);
        auVar62._8_4_ = uVar82;
        auVar62._0_8_ = dVar97;
        uVar104 = (undefined4)((ulonglong)dVar103 >> 0x20);
        auVar62._12_4_ = uVar104;
        auVar36._8_4_ = uVar82;
        auVar36._0_8_ = dVar97;
        auVar36._12_4_ = uVar104;
        auVar54._8_4_ = uVar82;
        auVar54._0_8_ = dVar97;
        auVar54._12_4_ = uVar104;
        auVar47 = blendpd(auVar54,auVar91,2);
        auVar63._0_8_ = auVar62._8_8_ * local_3e8.Rotation.XY.m128d_f64[0] - dVar97 * dVar74;
        auVar63._8_8_ =
             auVar91._0_8_ * local_3e8.Rotation.XY.m128d_f64[1] -
             auVar36._8_8_ * local_3e8.Rotation.ZW.m128d_f64[0];
        auVar37._8_4_ = SUB84(auVar91._8_8_,0);
        auVar37._0_8_ = auVar91._0_8_;
        auVar37._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
        auVar55._0_8_ =
             auVar47._0_8_ * local_3e8.Rotation.ZW.m128d_f64[0] - auVar91._0_8_ * auVar85._0_8_;
        auVar55._8_8_ =
             auVar47._8_8_ * local_3e8.Rotation.ZW.m128d_f64[1] - auVar37._8_8_ * auVar85._8_8_;
        auVar38._8_4_ = SUB84(auVar63._8_8_,0);
        auVar38._0_8_ = auVar63._0_8_;
        auVar38._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
        auVar47 = blendpd(auVar63,auVar55,2);
        local_678 = local_608[0];
        local_678 = dVar97 * auVar86._8_8_ + dVar67 + auVar38._8_8_ + local_678;
        dStack_670 = local_608[1];
        dStack_670 = dVar103 * local_3e8.Rotation.ZW.m128d_f64[1] + dVar68 + auVar55._0_8_ +
                     dStack_670;
        local_638 = auVar91._0_8_ * auVar86._8_8_ + auVar94._0_8_ + auVar47._0_8_ + local_5f8[0];
        if (param_7->Index != 0xffff) {
          uVar16 = (uint)param_7->Index;
        }
        local_648 = local_678;
        dStack_640 = dStack_670;
        URigHierarchy::GetLocalTransformByIndex(this,&local_2c8,uVar16,true);
        if (EVar1 == Control) {
          UE::Math::TTransform<double>::Multiply(&local_2c8,&local_2c8,&local_4a8);
        }
        local_6e8 = local_2c8.Translation.XY.m128d_f64[0] - local_678;
        local_5b0 = local_2c8.Translation.XY.m128d_f64[0];
        dStack_5a8 = local_2c8.Translation.XY.m128d_f64[1];
        local_5a0 = local_2c8.Translation.ZW.m128d_f64[0];
        uStack_6e0 = local_2c8.Translation.XY.m128d_f64[1] - dStack_670;
        uVar10 = local_2c8.Translation.ZW.m128d_f64[0] - local_638;
      }
      uVar23 = 0;
      local_6a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_6b0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uStack_6a8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      uVar82 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar104 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar112 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar113 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      if (0 < param_5->ArrayNum) {
        lVar24 = 0;
        local_698 = 0;
        do {
          uVar22 = ~uVar23 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar23 < param_8->ArrayNum) {
            uVar16 = uVar22;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (param_8->AllocatorInstance).Data;
          if ((((*(short *)(pFVar3 + lVar24 + 0xc) != -1) &&
               (bVar14 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar3 + lVar24 + 4)),
               bVar14)) && (*(longlong *)(pFVar3 + lVar24 + 4) != 0)) &&
             (pFVar3[lVar24] != (FScriptContainerElement)0x0)) {
            uVar16 = 0;
            if ((int)uVar23 < param_5->ArrayNum) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar88 = *(float *)((longlong)&param_5->DataPtr->Weight + local_698);
            if (fVar88 <= 0.0) {
              fVar88 = 0.0;
            }
            if (fVar13 <= fVar88) {
              uVar16 = 0;
              if ((int)uVar23 < param_8->ArrayNum) {
                uVar16 = uVar22;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar2 = *(ushort *)((param_8->AllocatorInstance).Data + lVar24 + 0xc);
              if ((uVar2 == 0xffff) || ((this->Elements).ArrayNum <= (int)(uint)uVar2)) {
LAB_14a58abcb:
                local_588 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
                local_388.Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                local_388.Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                local_388.Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                local_388.Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                local_598 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              }
              else {
                if (((this->Elements).ArrayNum <= (int)(uint)uVar2) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = *(FRigTransformElement **)
                          ((this->Elements).AllocatorInstance.Data + (ulonglong)uVar2 * 8);
                if (pFVar4 == (FRigTransformElement *)0x0) goto LAB_14a58abcb;
                lVar25 = (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4);
                pUVar20 = FRigTransformElement::StaticStruct();
                if (pUVar20 == (UScriptStruct *)0x0) goto LAB_14a58abcb;
                iVar15 = (int)pUVar20->_padding_;
                if ((*(int *)(lVar25 + 0x38) < iVar15) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(lVar25 + 0x30) + (longlong)iVar15 * 8) !=
                    &pUVar20->_padding_)) {
                  bVar14 = false;
                }
                else {
                  bVar14 = true;
                }
                if (!bVar14) goto LAB_14a58abcb;
                URigHierarchy::GetTransform(this,&local_388,pFVar4,CurrentGlobal);
                local_598 = local_388.Translation.XY.m128d_f64;
                local_588 = local_388.Translation.ZW.m128d_f64[0];
              }
              dVar67 = (double)(fVar88 * fVar111);
              local_6b0 = local_6b0 + local_598[0] * dVar67;
              uStack_6a8 = uStack_6a8 + local_598[1] * dVar67;
              local_6a0 = local_6a0 + local_588 * dVar67;
            }
          }
          local_698 = local_698 + 0x10;
          uVar23 = uVar23 + 1;
          lVar24 = lVar24 + 0x20;
        } while ((int)uVar23 < param_5->ArrayNum);
        uVar82 = (undefined4)local_6b0;
        uVar104 = local_6b0._4_4_;
        uVar112 = (undefined4)uStack_6a8;
        uVar113 = uStack_6a8._4_4_;
      }
      local_658.Type = param_2->Type;
      local_658._1_3_ = *(undefined3 *)&param_2->field_0x1;
      local_658.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
      local_658.Name.Number = (param_2->Name).Number;
      iVar15 = URigHierarchy::GetIndex(this,&local_658,true);
      URigHierarchy::GetLocalTransformByIndex(this,&local_448,iVar15,false);
      if (EVar1 == Control) {
        UE::Math::TTransform<double>::Multiply(&local_448,&local_448,&local_4a8);
      }
      uVar16 = 0xffffffff;
      uVar23 = 0xffffffff;
      local_508.Rotation.XY.m128d_f64[1] = local_448.Rotation.XY.m128d_f64[1];
      local_508.Rotation.XY.m128d_f64[0] = local_448.Rotation.XY.m128d_f64[0];
      local_508.Rotation.ZW.m128d_f64[1] = local_448.Rotation.ZW.m128d_f64[1];
      local_508.Rotation.ZW.m128d_f64[0] = local_448.Rotation.ZW.m128d_f64[0];
      local_508.Translation.XY.m128d_f64[0] = local_448.Translation.XY.m128d_f64[0];
      local_508.Translation.XY.m128d_f64[1] = local_448.Translation.XY.m128d_f64[1];
      local_508.Translation.ZW.m128d_f64[0] = local_448.Translation.ZW.m128d_f64[0];
      local_508.Translation.ZW.m128d_f64[1] = local_448.Translation.ZW.m128d_f64[1];
      local_508.Scale3D.XY.m128d_f64[0] = local_448.Scale3D.XY.m128d_f64[0];
      local_508.Scale3D.XY.m128d_f64[1] = local_448.Scale3D.XY.m128d_f64[1];
      local_508.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
      local_508.Scale3D.ZW.m128d_f64[1] = local_448.Scale3D.ZW.m128d_f64[1];
      if (param_7->Index != 0xffff) {
        uVar23 = (uint)param_7->Index;
      }
      URigHierarchy::GetParentTransformByIndex(this,&local_328,uVar23,false);
      local_328.Translation.XY.m128d_f64[0] =
           (double)CONCAT44(uVar104,uVar82) - local_328.Translation.XY.m128d_f64[0];
      local_328.Translation.XY.m128d_f64[1] =
           (double)CONCAT44(uVar113,uVar112) - local_328.Translation.XY.m128d_f64[1];
      uVar104 = (undefined4)((ulonglong)local_328.Translation.XY.m128d_f64[1] >> 0x20);
      local_328.Translation.ZW.m128d_f64[0] = local_6a0 - local_328.Translation.ZW.m128d_f64[0];
      local_328.Rotation.XY.m128d_f64[0] =
           local_328.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_328.Rotation.XY.m128d_f64[1] =
           local_328.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar87._0_8_ =
           local_328.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar87._8_8_ =
           local_328.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar64._8_4_ = SUB84(local_328.Rotation.XY.m128d_f64[1],0);
      auVar64._0_8_ = local_328.Rotation.XY.m128d_f64[0];
      uVar82 = (undefined4)((ulonglong)local_328.Rotation.XY.m128d_f64[1] >> 0x20);
      auVar64._12_4_ = uVar82;
      auVar71._8_4_ = SUB84(local_328.Rotation.XY.m128d_f64[1],0);
      auVar71._0_8_ = local_328.Rotation.XY.m128d_f64[0];
      auVar71._12_4_ = uVar82;
      auVar85 = blendpd(auVar71,auVar87,2);
      dVar67 = auVar64._8_8_;
      auVar39._8_4_ = SUB84(auVar87._0_8_,0);
      auVar39._0_8_ = dVar67;
      auVar39._12_4_ = (int)((ulonglong)auVar87._0_8_ >> 0x20);
      auVar108._8_4_ = SUB84(local_328.Translation.XY.m128d_f64[1],0);
      auVar108._0_8_ = local_328.Translation.XY.m128d_f64[0];
      auVar108._12_4_ = uVar104;
      auVar56._8_4_ = SUB84(local_328.Translation.XY.m128d_f64[1],0);
      auVar56._0_8_ = local_328.Translation.XY.m128d_f64[0];
      auVar56._12_4_ = uVar104;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_328.Translation.ZW.m128d_f64[0];
      auVar47 = blendpd(auVar56,auVar6,2);
      auVar109._0_8_ =
           auVar108._8_8_ * local_328.Rotation.XY.m128d_f64[0] -
           dVar67 * local_328.Translation.XY.m128d_f64[0];
      auVar109._8_8_ =
           local_328.Translation.ZW.m128d_f64[0] * local_328.Rotation.XY.m128d_f64[1] -
           auVar39._8_8_ * local_328.Translation.XY.m128d_f64[1];
      auVar102._8_4_ = SUB84(auVar109._8_8_,0);
      auVar102._0_8_ = auVar109._0_8_;
      auVar102._12_4_ = (int)((ulonglong)auVar109._8_8_ >> 0x20);
      auVar57._0_8_ =
           auVar47._0_8_ * auVar87._0_8_ - auVar85._0_8_ * local_328.Translation.ZW.m128d_f64[0];
      auVar57._8_8_ = auVar47._8_8_ * auVar87._8_8_ - auVar85._8_8_ * 0.0;
      dVar68 = auVar102._8_8_ + auVar102._8_8_;
      dVar74 = auVar57._0_8_ + auVar57._0_8_;
      auVar47 = blendpd(auVar109,auVar57,2);
      auVar110._0_8_ = auVar47._0_8_ + auVar47._0_8_;
      auVar110._8_8_ = auVar47._8_8_ + auVar47._8_8_;
      uVar82 = SUB84(dVar74,0);
      auVar106._8_4_ = uVar82;
      auVar106._0_8_ = dVar68;
      uVar104 = (undefined4)((ulonglong)dVar74 >> 0x20);
      auVar106._12_4_ = uVar104;
      auVar40._8_4_ = uVar82;
      auVar40._0_8_ = dVar68;
      auVar40._12_4_ = uVar104;
      auVar95._8_4_ = uVar82;
      auVar95._0_8_ = dVar68;
      auVar95._12_4_ = uVar104;
      auVar107._0_8_ = auVar106._8_8_ * local_328.Rotation.XY.m128d_f64[0] - dVar68 * dVar67;
      auVar107._8_8_ =
           auVar110._0_8_ * local_328.Rotation.XY.m128d_f64[1] - auVar40._8_8_ * auVar87._0_8_;
      auVar47 = blendpd(auVar95,auVar110,2);
      auVar41._8_4_ = SUB84(auVar110._8_8_,0);
      auVar41._0_8_ = auVar110._0_8_;
      auVar41._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
      auVar96._0_8_ = auVar47._0_8_ * auVar87._0_8_ - auVar110._0_8_ * auVar85._0_8_;
      auVar96._8_8_ = auVar47._8_8_ * auVar87._8_8_ - auVar41._8_8_ * auVar85._8_8_;
      auVar92._8_8_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
      auVar92._0_8_ = local_328.Scale3D.ZW.m128d_f64[0];
      auVar80._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_328.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_328.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar80._8_4_ = _UNK_15061cc88 & local_328.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar80._12_4_ = _UNK_15061cc8c & local_328.Scale3D.XY.m128d_f64[1]._4_4_;
      lVar24 = -(ulonglong)(auVar80._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar28 = -(ulonglong)(auVar80._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar12._4_4_ = local_328.Scale3D.XY.m128d_f64[0]._4_4_;
      auVar12._0_4_ = local_328.Scale3D.XY.m128d_f64[0]._0_4_;
      auVar12._8_4_ = local_328.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar12._12_4_ = local_328.Scale3D.XY.m128d_f64[1]._4_4_;
      auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar12);
      lVar25 = -(ulonglong)
                ((double)CONCAT44(local_328.Scale3D.ZW.m128d_f64[0]._4_4_ &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  local_328.Scale3D.ZW.m128d_f64[0]._0_4_ &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar81._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar47._4_4_,
                            ~(uint)lVar24 & auVar47._0_4_);
      auVar81._8_4_ = ~(uint)lVar28 & auVar47._8_4_;
      auVar81._12_4_ = ~(uint)((ulonglong)lVar28 >> 0x20) & auVar47._12_4_;
      auVar42._8_4_ = SUB84(auVar107._8_8_,0);
      auVar42._0_8_ = auVar107._0_8_;
      auVar42._12_4_ = (int)((ulonglong)auVar107._8_8_ >> 0x20);
      auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar92);
      local_6c8 = auVar81._0_8_ *
                  (dVar68 * auVar87._8_8_ + local_328.Translation.XY.m128d_f64[0] + auVar42._8_8_);
      dStack_6c0 = auVar81._8_8_ *
                   (dVar74 * auVar87._8_8_ + local_328.Translation.XY.m128d_f64[1] + auVar96._0_8_);
      auVar85 = blendpd(auVar107,auVar96,2);
      local_6b8 = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar47._4_4_,
                                   ~(uint)lVar25 & auVar47._0_4_) *
                  (auVar110._0_8_ * auVar87._8_8_ + local_328.Translation.ZW.m128d_f64[0] +
                  auVar85._0_8_);
      if (param_3) {
        dStack_6c0 = dStack_6c0 + uStack_6e0;
        local_6c8 = local_6c8 + local_6e8;
        local_6b8 = local_6b8 + (double)uVar10;
      }
      if (((param_4->bX == false) || (param_4->bY == false)) || (param_4->bZ == false)) {
        local_570 = local_448.Translation.ZW.m128d_f64[0];
        if (param_4->bX == false) {
          local_6c8 = local_448.Translation.XY.m128d_f64[0];
        }
        if (param_4->bY == false) {
          dStack_6c0 = local_448.Translation.XY.m128d_f64[1];
        }
        if (param_4->bZ == false) {
          local_6b8 = local_448.Translation.ZW.m128d_f64[0];
        }
      }
      local_508.Translation.XY.m128d_f64[0] = local_6c8;
      local_508.Translation.XY.m128d_f64[1] = dStack_6c0;
      local_508.Translation.ZW.m128d_f64[0] = local_6b8;
      local_508.Translation.ZW.m128d_f64[1] = 0.0;
      if (param_6 < __real_3f7ff972) {
        pTVar19 = FRigVMMathLibrary::LerpTransform(&local_1a8,&local_448,&local_508,param_6);
        local_508.Rotation.XY.m128d_f64 = *&(pTVar19->Rotation).XY.m128d_f64;
        local_508.Rotation.ZW.m128d_f64 = *&(pTVar19->Rotation).ZW.m128d_f64;
        local_6c8 = (pTVar19->Translation).XY.m128d_f64[0];
        dStack_6c0 = (pTVar19->Translation).XY.m128d_f64[1];
        local_6b8 = (pTVar19->Translation).ZW.m128d_f64[0];
        local_508.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
        local_508.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
        local_508.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
        local_508.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
        local_508.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
      }
      local_508.Translation.XY.m128d_f64[0] = local_6c8;
      local_508.Translation.XY.m128d_f64[1] = dStack_6c0;
      local_508.Translation.ZW.m128d_f64[0] = local_6b8;
      if (param_2->Type == Control) {
        pTVar19 = UE::Math::TTransform<double>::GetRelativeTransform
                            (&local_508,&local_148,&local_4a8);
        dVar67 = (pTVar19->Rotation).XY.m128d_f64[0];
        dVar68 = (pTVar19->Rotation).XY.m128d_f64[1];
        dVar74 = (pTVar19->Rotation).ZW.m128d_f64[0];
        dVar97 = (pTVar19->Rotation).ZW.m128d_f64[1];
        local_508.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
        local_508.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
        local_508.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
        local_508.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
        auVar58._0_8_ = dVar67 * dVar67 + dVar74 * dVar74;
        auVar58._8_8_ = dVar68 * dVar68 + dVar97 * dVar97;
        local_508.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
        local_508.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
        auVar43._8_4_ = SUB84(auVar58._8_8_,0);
        auVar43._0_8_ = auVar58._0_8_;
        auVar43._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
        auVar44._0_8_ = auVar43._8_8_ + auVar58._0_8_;
        auVar44._8_8_ = auVar58._0_8_ + auVar58._8_8_;
        local_508.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
        local_508.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
        uVar26 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar44._0_8_);
        uVar29 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar44._8_8_);
        auVar85 = sqrtpd(auVar58,auVar44);
        uVar27 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar44._0_8_);
        uVar30 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar44._8_8_);
        auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar85);
        auVar45._0_8_ = (ulonglong)(auVar47._0_8_ * dVar67) & uVar26;
        uVar11 = uVar29 & (ulonglong)(auVar47._8_8_ * dVar68);
        auVar45._8_4_ = (undefined4)uVar11;
        auVar45._12_4_ = (undefined4)(uVar11 >> 0x20);
        auVar65._0_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar65._4_4_ =
             ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar65._8_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar65._12_4_ =
             ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        local_508.Rotation.XY.m128d_f64 = (double  [2])(auVar45 | auVar65);
        auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar85);
        auVar66._0_8_ = (ulonglong)(auVar47._0_8_ * dVar74) & uVar27;
        uVar11 = uVar30 & (ulonglong)(auVar47._8_8_ * dVar97);
        auVar66._8_4_ = (undefined4)uVar11;
        auVar66._12_4_ = (undefined4)(uVar11 >> 0x20);
        auVar72._0_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar72._4_4_ =
             ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar72._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar72._12_4_ =
             ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        local_508.Rotation.ZW.m128d_f64 = (double  [2])(auVar66 | auVar72);
      }
      if (param_7->Index != 0xffff) {
        uVar16 = (uint)param_7->Index;
      }
      local_568.Rotation.XY.m128d_f64 = local_508.Rotation.XY.m128d_f64;
      local_568.Rotation.ZW.m128d_f64 = local_508.Rotation.ZW.m128d_f64;
      local_568.Translation.XY.m128d_f64[0] = local_508.Translation.XY.m128d_f64[0];
      local_568.Translation.XY.m128d_f64[1] = local_508.Translation.XY.m128d_f64[1];
      local_568.Translation.ZW.m128d_f64[0] = local_508.Translation.ZW.m128d_f64[0];
      local_568.Translation.ZW.m128d_f64[1] = local_508.Translation.ZW.m128d_f64[1];
      local_568.Scale3D.XY.m128d_f64[0] = local_508.Scale3D.XY.m128d_f64[0];
      local_568.Scale3D.XY.m128d_f64[1] = local_508.Scale3D.XY.m128d_f64[1];
      local_568.Scale3D.ZW.m128d_f64[0] = local_508.Scale3D.ZW.m128d_f64[0];
      local_568.Scale3D.ZW.m128d_f64[1] = local_508.Scale3D.ZW.m128d_f64[1];
      URigHierarchy::SetLocalTransformByIndex(this,uVar16,&local_568,false,true,false,false);
    }
  }
  return;
}

