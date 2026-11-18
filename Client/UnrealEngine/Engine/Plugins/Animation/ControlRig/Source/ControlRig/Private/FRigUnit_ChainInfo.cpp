// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4bc990

UScriptStruct * __cdecl FRigUnit_ChainInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ChainInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ChainInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainInfo,(UObject *)pUVar1,
                         L"RigUnit_ChainInfo");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ChainInfo_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ChainInfo.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ChainInfo.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4bca10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_ChainInfo::GetExecuteContextStruct(FRigUnit_ChainInfo *this)

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

// Execute @ 14a4bcdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ChainInfo::Execute(FRigUnit_ChainInfo *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2e8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,this->Param,
                this->bCalculateStretch,this->bInitial,this->bDebug,this->DebugScale,
                &this->InterpolatedTransform,&this->ChainLength,&this->ParamLength,
                &this->ChainStretchFactor,&this->SegmentInfo,&this->CachedElements);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_ChainInfo @ 14a50d220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_ChainInfo * __thiscall FRigUnit_ChainInfo::FRigUnit_ChainInfo(FRigUnit_ChainInfo *this)

{
  this->bCalculateStretch = true;
  this->bInitial = false;
  this->_padding_ = (longlong)&___7FRigUnit_ChainInfo__6B_;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  this->Param = 0.0;
  this->bDebug = false;
  this->DebugScale = 1.0;
  *&(this->InterpolatedTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->InterpolatedTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->InterpolatedTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->InterpolatedTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->InterpolatedTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->InterpolatedTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->ChainLength = 0.0;
  this->ParamLength = 0.0;
  this->ChainStretchFactor = 1.0;
  (this->SegmentInfo).SegmentIndex = 0;
  (this->SegmentInfo).SegmentLength = 0.0;
  (this->SegmentInfo).SegmentParam = 0.0;
  (this->SegmentInfo).SegmentParamLength = 0.0;
  (this->SegmentInfo).SegmentStartItem.Type = Bone;
  (this->SegmentInfo).SegmentStartItem.Name.ComparisonIndex = 0;
  (this->SegmentInfo).SegmentStartItem.Name.Number = 0;
  (this->SegmentInfo).SegmentStartItemIndex = 0;
  (this->SegmentInfo).SegmentEndItem.Type = Bone;
  (this->SegmentInfo).SegmentEndItem.Name.ComparisonIndex = 0;
  (this->SegmentInfo).SegmentEndItem.Name.Number = 0;
  (this->SegmentInfo).SegmentEndItemIndex = 0;
  (this->SegmentInfo).SegmentStretchFactor = 1.0;
  (this->CachedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedElements).ArrayNum = 0;
  (this->CachedElements).ArrayMax = 0;
  return this;
}

// Execute @ 14a525150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ChainInfo::Execute(FRigUnit_ChainInfo *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&local_18,this->Param,this->bCalculateStretch,this->bInitial,this->bDebug,
                this->DebugScale,&this->InterpolatedTransform,&this->ChainLength,&this->ParamLength,
                &this->ChainStretchFactor,&this->SegmentInfo,&this->CachedElements);
  return;
}

// RigVMExecute @ 14a536e30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ChainInfo::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uchar *puVar9;
  float *pfVar10;
  uchar *puVar11;
  FRigVMMemoryHandle *pFVar12;
  TTransform<double> *pTVar13;
  float *pfVar14;
  float *pfVar15;
  FRigUnit_ChainInfo_SegmentInfo *pFVar16;
  FRigVMSlice *pFVar17;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar18;
  FControlRigExecuteContext *pFVar19;
  TArrayView<FRigElementKey_const_,int> local_68 [3];
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
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
  pFVar12 = param_2->DataPtr;
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar12->Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar12->PropertyPath,pFVar12->Ptr,pFVar12->Property);
  }
  if (iVar5 < 2) {
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
  pFVar12 = param_2->DataPtr;
  if (pFVar12[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar10 = (float *)pFVar12[1].Ptr;
  }
  else {
    pfVar10 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar12[1].PropertyPath,pFVar12[1].Ptr,pFVar12[1].Property);
  }
  fVar1 = *pfVar10;
  if (iVar5 < 3) {
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
  pFVar12 = param_2->DataPtr;
  if (pFVar12[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar11 = pFVar12[2].Ptr;
  }
  else {
    puVar11 = FRigVMPropertyPath::GetData_Internal
                        (pFVar12[2].PropertyPath,pFVar12[2].Ptr,pFVar12[2].Property);
  }
  bVar7 = (bool)*puVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar3 = (bool)*puVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar4 = (bool)*puVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar2 = *pfVar10;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar13 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar14 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar16 = (FRigUnit_ChainInfo_SegmentInfo *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1)
  ;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar17 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar18 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar12,false,pFVar17->Offset + pFVar17->Index);
  local_68[0].DataPtr = *(FRigElementKey **)puVar9;
  local_68[0].ArrayNum = *(int *)(puVar9 + 8);
  if (local_68[0].ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar19,local_68,fVar1,bVar7,bVar3,bVar4,fVar2,pTVar13,pfVar10,pfVar14,pfVar15,
                pFVar16,pTVar18);
  return;
}

// StaticExecute @ 14a566e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_ChainInfo::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          float param_3,bool param_4,bool param_5,bool param_6,float param_7,
          TTransform<double> *param_8,float *param_9,float *param_10,float *param_11,
          FRigUnit_ChainInfo_SegmentInfo *param_12,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_13)

{
  float fVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  URigHierarchy *pUVar10;
  float *pfVar11;
  FControlRigExecuteContext *pFVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FRigElementKey *pFVar16;
  TTransform<double> *pTVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_678 [32];
  TArray<FRigUnit_ChainInfo_Segment,TSizedDefaultAllocator<32>_> local_630;
  int local_620;
  URigHierarchy *local_618;
  longlong local_610;
  float *local_608;
  FRigUnit_ChainInfo_SegmentInfo *local_600;
  TArrayView<FRigElementKey_const_,int> *local_5f8;
  longlong local_5f0;
  float *local_5e8;
  FScriptContainerElement *local_5e0;
  float *local_5d8;
  TTransform<double> *local_5d0;
  FControlRigExecuteContext *local_5c8;
  FRigElementKey local_5b8;
  FRigElementKey local_5a8;
  FRigElementKey local_598;
  FRigElementKey local_588;
  double local_578;
  double dStack_570;
  double local_568;
  double local_560;
  double dStack_558;
  double local_550;
  double local_548;
  double dStack_540;
  double local_538;
  double local_530;
  double dStack_528;
  double local_520;
  TTransform<double> local_4b8;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_5d0 = param_8;
  local_5d8 = param_11;
  local_618 = param_1->Hierarchy;
  local_600 = param_12;
  local_5e8 = param_9;
  local_608 = param_10;
  if ((local_618 != (URigHierarchy *)0x0) && (1 < param_2->ArrayNum)) {
    uVar24 = 0;
    local_5f8 = param_2;
    local_5c8 = param_1;
    if (param_13->ArrayNum != param_2->ArrayNum) {
      param_13->ArrayNum = 0;
      if (param_13->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_13->AllocatorInstance,0,&param_13->ArrayMax);
      }
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNum
                (param_13,param_2->ArrayNum,Default);
    }
    *param_9 = 0.0;
    local_630.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    fVar27 = 0.0;
    local_630.ArrayNum = 0;
    local_630.ArrayMax = 0;
    TArray<FRigUnit_ChainInfo_Segment,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_630,param_13->ArrayNum + -1,Default);
    uVar25 = 0;
    if (0 < local_630.ArrayNum) {
      local_610 = 0;
      local_5f0 = 0;
      local_620 = 1;
      uVar20 = uVar24;
      uVar23 = uVar24;
      do {
        lVar19 = local_5f0;
        uVar22 = (uint)uVar23;
        uVar21 = 0;
        if ((int)uVar22 < local_630.ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar9.Data = local_630.AllocatorInstance.Data;
        if (uVar22 == 0) {
          if ((param_13->ArrayNum < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (param_13->AllocatorInstance).Data;
          pFVar16 = TArrayView<FRigElementKey_const_,int>::operator[](local_5f8,0);
          FCachedRigElement::UpdateCache((FCachedRigElement *)(pFVar3 + lVar19),pFVar16,local_618);
          lVar19 = local_5f0;
        }
        uVar21 = uVar25;
        if ((int)uVar22 < param_13->ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar15 = local_620;
        pFVar4 = (param_13->AllocatorInstance).Data;
        pFVar3 = pFVar4 + lVar19;
        uVar2 = *(undefined8 *)(pFVar3 + 8);
        *(undefined8 *)(FVar9.Data + uVar20) = *(undefined8 *)pFVar3;
        *(undefined8 *)(FVar9.Data + uVar20 + 8) = uVar2;
        pFVar4 = pFVar4 + lVar19 + 0x10;
        uVar2 = *(undefined8 *)pFVar4;
        uVar8 = *(undefined8 *)(pFVar4 + 8);
        *(uint *)(FVar9.Data + uVar20 + 0x20) = uVar22;
        uVar18 = ~(uVar22 + 1) >> 0x1f;
        *(undefined8 *)(FVar9.Data + uVar20 + 0x10) = uVar2;
        *(undefined8 *)(FVar9.Data + uVar20 + 0x10 + 8) = uVar8;
        uVar21 = uVar25;
        if ((int)(uVar22 + 1) < param_13->ArrayNum) {
          uVar21 = uVar18;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_5e0 = (param_13->AllocatorInstance).Data;
        uVar21 = uVar25;
        if ((int)(uVar22 + 1) < local_5f8->ArrayNum) {
          uVar21 = uVar18;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FCachedRigElement::UpdateCache
                  ((FCachedRigElement *)(local_5e0 + (longlong)iVar15 * 0x20),
                   local_5f8->DataPtr + iVar15,local_618);
        uVar21 = uVar25;
        if ((int)(uVar22 + 1) < param_13->ArrayNum) {
          uVar21 = uVar18;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar19 = local_5f0;
        pUVar10 = local_618;
        pFVar4 = (param_13->AllocatorInstance).Data;
        pFVar3 = pFVar4 + local_5f0 + 0x20;
        uVar2 = *(undefined8 *)(pFVar3 + 8);
        *(undefined8 *)(FVar9.Data + uVar20 + 0x28) = *(undefined8 *)pFVar3;
        *(undefined8 *)(FVar9.Data + uVar20 + 0x28 + 8) = uVar2;
        pFVar4 = pFVar4 + local_5f0 + 0x30;
        uVar2 = *(undefined8 *)pFVar4;
        uVar8 = *(undefined8 *)(pFVar4 + 8);
        *(uint *)(FVar9.Data + uVar20 + 0x48) = uVar22 + 1;
        *(undefined8 *)(FVar9.Data + uVar20 + 0x38) = uVar2;
        *(undefined8 *)(FVar9.Data + uVar20 + 0x38 + 8) = uVar8;
        if ((param_4) || (param_5)) {
          uVar21 = 0xffffffff;
          if (*(ushort *)(FVar9.Data + uVar20 + 0x34) != 0xffff) {
            uVar21 = (uint)*(ushort *)(FVar9.Data + uVar20 + 0x34);
          }
          URigHierarchy::GetGlobalTransformByIndex(local_618,&local_278,uVar21,true);
          dVar7 = local_278.Translation.XY.m128d_f64[1];
          dVar6 = local_278.Translation.XY.m128d_f64[0];
          uVar21 = 0xffffffff;
          local_568 = local_278.Translation.ZW.m128d_f64[0];
          local_578 = local_278.Translation.XY.m128d_f64[0];
          dStack_570 = local_278.Translation.XY.m128d_f64[1];
          if (*(ushort *)(FVar9.Data + uVar20 + 0xc) != 0xffff) {
            uVar21 = (uint)*(ushort *)(FVar9.Data + uVar20 + 0xc);
          }
          URigHierarchy::GetGlobalTransformByIndex(pUVar10,&local_218,uVar21,true);
          local_548 = local_218.Translation.XY.m128d_f64[0];
          dStack_540 = local_218.Translation.XY.m128d_f64[1];
          local_538 = local_218.Translation.ZW.m128d_f64[0];
          fVar26 = (float)SQRT((dVar7 - local_218.Translation.XY.m128d_f64[1]) *
                               (dVar7 - local_218.Translation.XY.m128d_f64[1]) +
                               (dVar6 - local_218.Translation.XY.m128d_f64[0]) *
                               (dVar6 - local_218.Translation.XY.m128d_f64[0]) +
                               (local_568 - local_218.Translation.ZW.m128d_f64[0]) *
                               (local_568 - local_218.Translation.ZW.m128d_f64[0]));
          *(float *)(FVar9.Data + uVar20 + 0x4c) = fVar26;
          fVar27 = fVar26 + fVar27;
          *(float *)(FVar9.Data + uVar20 + 0x50) = fVar27;
          if (!param_5) goto LAB_14a5672d0;
        }
        else {
LAB_14a5672d0:
          uVar21 = 0xffffffff;
          if (*(ushort *)(FVar9.Data + uVar20 + 0x34) != 0xffff) {
            uVar21 = (uint)*(ushort *)(FVar9.Data + uVar20 + 0x34);
          }
          URigHierarchy::GetGlobalTransformByIndex(pUVar10,&local_1b8,uVar21,false);
          dVar7 = local_1b8.Translation.XY.m128d_f64[1];
          dVar6 = local_1b8.Translation.XY.m128d_f64[0];
          uVar21 = 0xffffffff;
          local_550 = local_1b8.Translation.ZW.m128d_f64[0];
          local_560 = local_1b8.Translation.XY.m128d_f64[0];
          dStack_558 = local_1b8.Translation.XY.m128d_f64[1];
          if (*(ushort *)(FVar9.Data + uVar20 + 0xc) != 0xffff) {
            uVar21 = (uint)*(ushort *)(FVar9.Data + uVar20 + 0xc);
          }
          URigHierarchy::GetGlobalTransformByIndex(pUVar10,&local_158,uVar21,false);
          local_530 = local_158.Translation.XY.m128d_f64[0];
          dStack_528 = local_158.Translation.XY.m128d_f64[1];
          local_520 = local_158.Translation.ZW.m128d_f64[0];
          fVar26 = (float)SQRT((dVar7 - local_158.Translation.XY.m128d_f64[1]) *
                               (dVar7 - local_158.Translation.XY.m128d_f64[1]) +
                               (dVar6 - local_158.Translation.XY.m128d_f64[0]) *
                               (dVar6 - local_158.Translation.XY.m128d_f64[0]) +
                               (local_550 - local_158.Translation.ZW.m128d_f64[0]) *
                               (local_550 - local_158.Translation.ZW.m128d_f64[0]));
        }
        local_5f0 = lVar19 + 0x20;
        uVar23 = (ulonglong)(uVar22 + 1);
        *(float *)(FVar9.Data + uVar20 + 0x54) = fVar26;
        local_610 = local_610 + 1;
        fVar1 = *local_5e8;
        *(float *)(FVar9.Data + uVar20 + 0x58) = fVar26 + fVar1;
        uVar20 = uVar20 + 0x60;
        local_620 = local_620 + 1;
        *local_5e8 = fVar26 + fVar1;
        param_9 = local_5e8;
        param_10 = local_608;
        param_12 = local_600;
      } while ((int)(uVar22 + 1) < local_630.ArrayNum);
    }
    uVar21 = local_630.ArrayNum - 1;
    *param_10 = param_3 * *param_9;
    param_12->SegmentIndex = 0;
    iVar15 = local_630.ArrayNum;
    if (uVar21 != 0) {
      do {
        iVar14 = uVar21 - (int)uVar24;
        if (iVar14 < 0) {
          iVar14 = iVar14 + 1;
        }
        uVar18 = (iVar14 >> 1) + (int)uVar24;
        uVar22 = uVar25;
        if ((int)uVar18 < iVar15) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if (uVar22 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar15 = local_630.ArrayNum;
        }
        if (*(float *)(local_630.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x60 + 0x58) <
            *local_608 ||
            *(float *)(local_630.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x60 + 0x58) ==
            *local_608) {
          uVar22 = uVar25;
          if ((int)uVar18 < iVar15) {
            uVar22 = ~uVar18 >> 0x1f;
          }
          if (uVar22 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar15 = local_630.ArrayNum;
          }
          pfVar11 = local_608;
          if (*(float *)(local_630.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x60 + 0x58) <
              *local_608 ||
              *(float *)(local_630.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x60 + 0x58) ==
              *local_608) {
            uVar22 = uVar25;
            if ((int)uVar18 < iVar15) {
              uVar22 = ~uVar18 >> 0x1f;
            }
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar15 = local_630.ArrayNum;
            }
            if ((*pfVar11 ==
                 *(float *)(local_630.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x60 + 0x58))
               || (uVar18 + 1 == uVar21)) {
              local_600->SegmentIndex = uVar18 + 1;
              param_12 = local_600;
              break;
            }
            uVar24 = (ulonglong)uVar18;
          }
        }
        else {
          uVar21 = uVar18;
          if (uVar18 == 0) {
            local_600->SegmentIndex = 0;
            param_12 = local_600;
            break;
          }
        }
        param_12 = local_600;
      } while ((uint)uVar24 != uVar21);
    }
    uVar21 = param_12->SegmentIndex;
    uVar22 = uVar25;
    if ((int)uVar21 < iVar15) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if (uVar22 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar15 = local_630.ArrayNum;
    }
    FVar9.Data = local_630.AllocatorInstance.Data;
    iVar14 = param_12->SegmentIndex;
    lVar19 = (longlong)(int)uVar21 * 0x60;
    uVar2 = *(undefined8 *)(local_630.AllocatorInstance.Data + lVar19);
    (param_12->SegmentStartItem).Type = (char)uVar2;
    *(int3 *)&(param_12->SegmentStartItem).field_0x1 = (int3)((ulonglong)uVar2 >> 8);
    (param_12->SegmentStartItem).Name.ComparisonIndex =
         (FNameEntryId)(int)((ulonglong)uVar2 >> 0x20);
    (param_12->SegmentStartItem).Name.Number =
         *(uint *)(local_630.AllocatorInstance.Data + lVar19 + 8);
    param_12->SegmentStartItemIndex = *(int *)(local_630.AllocatorInstance.Data + lVar19 + 0x20);
    uVar2 = *(undefined8 *)(local_630.AllocatorInstance.Data + lVar19 + 0x28);
    (param_12->SegmentEndItem).Type = (char)uVar2;
    *(int3 *)&(param_12->SegmentEndItem).field_0x1 = (int3)((ulonglong)uVar2 >> 8);
    (param_12->SegmentEndItem).Name.ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar2 >> 0x20);
    (param_12->SegmentEndItem).Name.Number =
         *(uint *)(local_630.AllocatorInstance.Data + lVar19 + 0x30);
    param_12->SegmentEndItemIndex = *(int *)(local_630.AllocatorInstance.Data + lVar19 + 0x48);
    if (iVar14 == 0) {
      fVar26 = *local_608;
    }
    else {
      uVar21 = iVar14 - 1;
      if ((int)uVar21 < iVar15) {
        uVar25 = ~uVar21 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar26 = *local_608 -
               *(float *)(local_630.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x60 + 0x58);
    }
    pUVar10 = local_618;
    param_12->SegmentParamLength = fVar26;
    fVar1 = *(float *)(FVar9.Data + lVar19 + 0x54);
    param_12->SegmentLength = fVar1;
    if (fVar1 != 0.0) {
      param_12->SegmentParam = fVar26 / fVar1;
    }
    if (param_4) {
      if (fVar27 != 0.0) {
        *local_5d8 = *local_5e8 / fVar27;
      }
      if (*(float *)(FVar9.Data + lVar19 + 0x4c) != 0.0) {
        param_12->SegmentStretchFactor =
             *(float *)(FVar9.Data + lVar19 + 0x54) / *(float *)(FVar9.Data + lVar19 + 0x4c);
      }
    }
    uVar2._0_1_ = (param_12->SegmentStartItem).Type;
    uVar2._1_3_ = *(undefined3 *)&(param_12->SegmentStartItem).field_0x1;
    uVar2._4_4_ = (param_12->SegmentStartItem).Name.ComparisonIndex.Value;
    uVar25 = (param_12->SegmentStartItem).Name.Number;
    if (param_5) {
      local_5b8._0_8_ = uVar2;
      local_5b8.Name.Number = uVar25;
      iVar15 = URigHierarchy::GetIndex(local_618,&local_5b8,true);
      URigHierarchy::GetGlobalTransformByIndex(pUVar10,&local_3f8,iVar15,true);
      local_5a8.Name.Number = (param_12->SegmentEndItem).Name.Number;
      local_4b8.Rotation.XY.m128d_f64[0] = local_3f8.Rotation.XY.m128d_f64[0];
      local_4b8.Rotation.XY.m128d_f64[1] = local_3f8.Rotation.XY.m128d_f64[1];
      local_4b8.Translation.XY.m128d_f64[0] = local_3f8.Translation.XY.m128d_f64[0];
      local_4b8.Translation.XY.m128d_f64[1] = local_3f8.Translation.XY.m128d_f64[1];
      local_4b8.Rotation.ZW.m128d_f64[0] = local_3f8.Rotation.ZW.m128d_f64[0];
      local_4b8.Rotation.ZW.m128d_f64[1] = local_3f8.Rotation.ZW.m128d_f64[1];
      local_4b8.Scale3D.XY.m128d_f64[1] = local_3f8.Scale3D.XY.m128d_f64[1];
      local_4b8.Scale3D.XY.m128d_f64[0] = local_3f8.Scale3D.XY.m128d_f64[0];
      local_5a8.Type = (param_12->SegmentEndItem).Type;
      local_5a8._1_3_ = *(undefined3 *)&(param_12->SegmentEndItem).field_0x1;
      local_5a8.Name.ComparisonIndex.Value = (param_12->SegmentEndItem).Name.ComparisonIndex.Value;
      local_4b8.Translation.ZW.m128d_f64[0] = local_3f8.Translation.ZW.m128d_f64[0];
      local_4b8.Translation.ZW.m128d_f64[1] = local_3f8.Translation.ZW.m128d_f64[1];
      local_4b8.Scale3D.ZW.m128d_f64[0] = local_3f8.Scale3D.ZW.m128d_f64[0];
      local_4b8.Scale3D.ZW.m128d_f64[1] = local_3f8.Scale3D.ZW.m128d_f64[1];
      iVar15 = URigHierarchy::GetIndex(pUVar10,&local_5a8,true);
      URigHierarchy::GetGlobalTransformByIndex(pUVar10,&local_398,iVar15,true);
      local_458.Rotation.XY.m128d_f64[0] = local_398.Rotation.XY.m128d_f64[0];
      local_458.Rotation.XY.m128d_f64[1] = local_398.Rotation.XY.m128d_f64[1];
      local_458.Rotation.ZW.m128d_f64[0] = local_398.Rotation.ZW.m128d_f64[0];
      local_458.Rotation.ZW.m128d_f64[1] = local_398.Rotation.ZW.m128d_f64[1];
      local_458.Translation.XY.m128d_f64[0] = local_398.Translation.XY.m128d_f64[0];
      local_458.Translation.XY.m128d_f64[1] = local_398.Translation.XY.m128d_f64[1];
      local_458.Translation.ZW.m128d_f64[0] = local_398.Translation.ZW.m128d_f64[0];
      local_458.Translation.ZW.m128d_f64[1] = local_398.Translation.ZW.m128d_f64[1];
    }
    else {
      local_598._0_8_ = uVar2;
      local_598.Name.Number = uVar25;
      iVar15 = URigHierarchy::GetIndex(local_618,&local_598,true);
      URigHierarchy::GetGlobalTransformByIndex(pUVar10,&local_338,iVar15,false);
      local_588.Name.Number = (param_12->SegmentEndItem).Name.Number;
      local_4b8.Rotation.XY.m128d_f64[0] = local_338.Rotation.XY.m128d_f64[0];
      local_4b8.Rotation.XY.m128d_f64[1] = local_338.Rotation.XY.m128d_f64[1];
      local_4b8.Translation.XY.m128d_f64[0] = local_338.Translation.XY.m128d_f64[0];
      local_4b8.Translation.XY.m128d_f64[1] = local_338.Translation.XY.m128d_f64[1];
      local_4b8.Rotation.ZW.m128d_f64[0] = local_338.Rotation.ZW.m128d_f64[0];
      local_4b8.Rotation.ZW.m128d_f64[1] = local_338.Rotation.ZW.m128d_f64[1];
      local_4b8.Scale3D.XY.m128d_f64[1] = local_338.Scale3D.XY.m128d_f64[1];
      local_4b8.Scale3D.XY.m128d_f64[0] = local_338.Scale3D.XY.m128d_f64[0];
      local_588.Type = (param_12->SegmentEndItem).Type;
      local_588._1_3_ = *(undefined3 *)&(param_12->SegmentEndItem).field_0x1;
      local_588.Name.ComparisonIndex.Value = (param_12->SegmentEndItem).Name.ComparisonIndex.Value;
      local_4b8.Translation.ZW.m128d_f64[0] = local_338.Translation.ZW.m128d_f64[0];
      local_4b8.Translation.ZW.m128d_f64[1] = local_338.Translation.ZW.m128d_f64[1];
      local_4b8.Scale3D.ZW.m128d_f64[0] = local_338.Scale3D.ZW.m128d_f64[0];
      local_4b8.Scale3D.ZW.m128d_f64[1] = local_338.Scale3D.ZW.m128d_f64[1];
      iVar15 = URigHierarchy::GetIndex(pUVar10,&local_588,true);
      URigHierarchy::GetGlobalTransformByIndex(pUVar10,&local_2d8,iVar15,false);
      local_458.Rotation.XY.m128d_f64[0] = local_2d8.Rotation.XY.m128d_f64[0];
      local_458.Rotation.XY.m128d_f64[1] = local_2d8.Rotation.XY.m128d_f64[1];
      local_458.Rotation.ZW.m128d_f64[0] = local_2d8.Rotation.ZW.m128d_f64[0];
      local_458.Rotation.ZW.m128d_f64[1] = local_2d8.Rotation.ZW.m128d_f64[1];
      local_458.Translation.XY.m128d_f64[0] = local_2d8.Translation.XY.m128d_f64[0];
      local_458.Translation.XY.m128d_f64[1] = local_2d8.Translation.XY.m128d_f64[1];
      local_458.Translation.ZW.m128d_f64[0] = local_2d8.Translation.ZW.m128d_f64[0];
      local_458.Translation.ZW.m128d_f64[1] = local_2d8.Translation.ZW.m128d_f64[1];
      local_398.Scale3D.XY.m128d_f64[0]._0_4_ = local_2d8.Scale3D.XY.m128d_f64[0]._0_4_;
      local_398.Scale3D.XY.m128d_f64[0]._4_4_ = local_2d8.Scale3D.XY.m128d_f64[0]._4_4_;
      local_398.Scale3D.XY.m128d_f64[1]._0_4_ = local_2d8.Scale3D.XY.m128d_f64[1]._0_4_;
      local_398.Scale3D.XY.m128d_f64[1]._4_4_ = local_2d8.Scale3D.XY.m128d_f64[1]._4_4_;
      local_398.Scale3D.ZW.m128d_f64[0]._0_4_ = local_2d8.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_398.Scale3D.ZW.m128d_f64[0]._4_4_ = local_2d8.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_398.Scale3D.ZW.m128d_f64[1]._0_4_ = local_2d8.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_398.Scale3D.ZW.m128d_f64[1]._4_4_ = local_2d8.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    local_458.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(local_398.Scale3D.ZW.m128d_f64[0]._4_4_,
                          local_398.Scale3D.ZW.m128d_f64[0]._0_4_);
    local_458.Scale3D.ZW.m128d_f64[1] =
         (double)CONCAT44(local_398.Scale3D.ZW.m128d_f64[1]._4_4_,
                          local_398.Scale3D.ZW.m128d_f64[1]._0_4_);
    local_458.Scale3D.XY.m128d_f64[0]._4_4_ = local_398.Scale3D.XY.m128d_f64[0]._4_4_;
    local_458.Scale3D.XY.m128d_f64[0]._0_4_ = local_398.Scale3D.XY.m128d_f64[0]._0_4_;
    local_458.Scale3D.XY.m128d_f64[1]._0_4_ = local_398.Scale3D.XY.m128d_f64[1]._0_4_;
    local_458.Scale3D.XY.m128d_f64[1]._4_4_ = local_398.Scale3D.XY.m128d_f64[1]._4_4_;
    pTVar17 = FRigVMMathLibrary::LerpTransform
                        (&local_f8,&local_4b8,&local_458,param_12->SegmentParam);
    pFVar12 = local_5c8;
    dVar6 = (pTVar17->Rotation).XY.m128d_f64[1];
    (local_5d0->Rotation).XY.m128d_f64[0] = (pTVar17->Rotation).XY.m128d_f64[0];
    (local_5d0->Rotation).XY.m128d_f64[1] = dVar6;
    dVar6 = (pTVar17->Rotation).ZW.m128d_f64[1];
    (local_5d0->Rotation).ZW.m128d_f64[0] = (pTVar17->Rotation).ZW.m128d_f64[0];
    (local_5d0->Rotation).ZW.m128d_f64[1] = dVar6;
    dVar6 = (pTVar17->Translation).XY.m128d_f64[1];
    (local_5d0->Translation).XY.m128d_f64[0] = (pTVar17->Translation).XY.m128d_f64[0];
    (local_5d0->Translation).XY.m128d_f64[1] = dVar6;
    dVar6 = (pTVar17->Translation).ZW.m128d_f64[1];
    (local_5d0->Translation).ZW.m128d_f64[0] = (pTVar17->Translation).ZW.m128d_f64[0];
    (local_5d0->Translation).ZW.m128d_f64[1] = dVar6;
    dVar6 = (pTVar17->Scale3D).XY.m128d_f64[1];
    (local_5d0->Scale3D).XY.m128d_f64[0] = (pTVar17->Scale3D).XY.m128d_f64[0];
    (local_5d0->Scale3D).XY.m128d_f64[1] = dVar6;
    dVar6 = (pTVar17->Scale3D).ZW.m128d_f64[1];
    (local_5d0->Scale3D).ZW.m128d_f64[0] = (pTVar17->Scale3D).ZW.m128d_f64[0];
    (local_5d0->Scale3D).ZW.m128d_f64[1] = dVar6;
    fVar27 = __real_bf800000;
    if (param_6) {
      FRigVMDrawInterface::DrawAxes
                (*(FRigVMDrawInterface **)&local_5c8->field_0x58,
                 &UE::Math::TTransform<double>::Identity,local_5d0,param_7,0.0,SDPG_Foreground,
                 __real_bf800000);
      dVar7 = (double)param_7;
      dVar6 = local_4b8.Scale3D.XY.m128d_f64[1] * dVar7;
      local_4b8.Scale3D.ZW.m128d_f64[0] = local_4b8.Scale3D.ZW.m128d_f64[0] * dVar7;
      local_4b8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
      local_4b8.Scale3D.XY.m128d_f64[0] = local_4b8.Scale3D.XY.m128d_f64[0] * dVar7;
      local_4b8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_4b8.Scale3D.ZW.m128d_f64[1] = 0.0;
      FRigVMDrawInterface::DrawBox
                (*(FRigVMDrawInterface **)&pFVar12->field_0x58,
                 &UE::Math::TTransform<double>::Identity,&local_4b8,&FLinearColor::Green,0.0,
                 SDPG_Foreground,fVar27);
      dVar6 = local_458.Scale3D.XY.m128d_f64[1] * dVar7;
      local_458.Scale3D.ZW.m128d_f64[0] = local_458.Scale3D.ZW.m128d_f64[0] * dVar7;
      local_458.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
      local_458.Scale3D.XY.m128d_f64[0] = local_458.Scale3D.XY.m128d_f64[0] * dVar7;
      local_458.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_458.Scale3D.ZW.m128d_f64[1] = 0.0;
      FRigVMDrawInterface::DrawBox
                (*(FRigVMDrawInterface **)&pFVar12->field_0x58,
                 &UE::Math::TTransform<double>::Identity,&local_458,&FLinearColor::Red,0.0,
                 SDPG_Foreground,fVar27);
    }
    if (local_630.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_630.AllocatorInstance.Data);
    }
  }
  return;
}

