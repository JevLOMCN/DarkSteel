// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4d0fb0

UScriptStruct * __cdecl FRigUnit_AimConstraintLocalSpaceOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset,
                         (UObject *)pUVar1,L"RigUnit_AimConstraintLocalSpaceOffset");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4d18a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_AimConstraintLocalSpaceOffset::GetExecuteContextStruct
          (FRigUnit_AimConstraintLocalSpaceOffset *this)

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

// Execute @ 14a4d21e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_AimConstraintLocalSpaceOffset::Execute(FRigUnit_AimConstraintLocalSpaceOffset *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
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
  Execute(this,(FControlRigExecuteContext *)local_268);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_AimConstraintLocalSpaceOffset @ 14a50bb60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_AimConstraintLocalSpaceOffset * __thiscall
FRigUnit_AimConstraintLocalSpaceOffset::FRigUnit_AimConstraintLocalSpaceOffset
          (FRigUnit_AimConstraintLocalSpaceOffset *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  bool bVar12;
  int iVar13;
  FRigUnit_AimConstraintLocalSpaceOffset *pFVar14;
  uint local_28;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  (this->Child).Type = None;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_AimConstraintLocalSpaceOffset__6B_;
  (this->Child).Name.ComparisonIndex = 0;
  (this->Child).Name.Number = 0;
  (this->AimAxis).field0_0x0._s_0.X = 1.0;
  (this->UpAxis).field0_0x0._s_0.Z = 1.0;
  this->bMaintainOffset = true;
  (this->Filter).bX = true;
  (this->Filter).bY = true;
  (this->Filter).bZ = true;
  (this->AimAxis).field0_0x0._s_0.Y = 0.0;
  (this->AimAxis).field0_0x0._s_0.Z = 0.0;
  (this->UpAxis).field0_0x0._s_0.X = 0.0;
  (this->UpAxis).field0_0x0._s_0.Y = 0.0;
  (this->WorldUp).Target.field0_0x0._s_0.X = 0.0;
  (this->WorldUp).Target.field0_0x0._s_0.Y = 0.0;
  (this->WorldUp).Target.field0_0x0._s_0.Z = 1.0;
  (this->WorldUp).Kind = Direction;
  local_28 = local_28 & 0xffffff00;
  uVar11 = (ulonglong)local_28;
  (this->WorldUp).Space.Type = (char)uVar11;
  *(int3 *)&(this->WorldUp).Space.field_0x1 = (int3)(uVar11 >> 8);
  (this->WorldUp).Space.Name.ComparisonIndex = (FNameEntryId)(int)(uVar11 >> 0x20);
  (this->WorldUp).Space.Name.Number = 0;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  (this->Parents).ArrayMax = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_1c = CONCAT31(local_1c._1_3_,1);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0x3f800000;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AdvancedSettings).DebugSettings.WorldOffset.Rotation.XY.m128d_f64 =
       auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->AdvancedSettings).DebugSettings.WorldOffset.Rotation.ZW.m128d_f64 =
       auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AdvancedSettings).DebugSettings.WorldOffset.Translation.XY.m128d_f64
       = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->AdvancedSettings).DebugSettings.WorldOffset.Translation.ZW.m128d_f64
       = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AdvancedSettings).DebugSettings.WorldOffset.Scale3D.XY.m128d_f64 =
       auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->AdvancedSettings).DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64 =
       auVar10;
  (this->AdvancedSettings).DebugSettings.bEnabled = false;
  (this->AdvancedSettings).DebugSettings.Scale = 10.0;
  *&(this->AdvancedSettings).DebugSettings.WorldOffset.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->AdvancedSettings).DebugSettings.WorldOffset.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->AdvancedSettings).DebugSettings.WorldOffset.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->AdvancedSettings).DebugSettings.WorldOffset.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->AdvancedSettings).DebugSettings.WorldOffset.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->AdvancedSettings).DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->AdvancedSettings).RotationOrderForFilter = XZY;
  (this->WorldUpSpaceCache).Key.Type = None;
  this->Weight = 1.0;
  (this->WorldUpSpaceCache).Key.Name.ComparisonIndex = 0;
  (this->WorldUpSpaceCache).Key.Name.Number = 0;
  (this->WorldUpSpaceCache).Index = 0xffff;
  (this->WorldUpSpaceCache).ContainerVersion = -1;
  (this->WorldUpSpaceCache).Element = (FRigBaseElement *)0x0;
  (this->ChildCache).Key.Type = None;
  (this->ChildCache).Key.Name.ComparisonIndex = 0;
  (this->ChildCache).Key.Name.Number = 0;
  (this->ChildCache).Index = 0xffff;
  (this->ChildCache).ContainerVersion = -1;
  (this->ChildCache).Element = (FRigBaseElement *)0x0;
  (this->ParentCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentCaches).ArrayNum = 0;
  (this->ParentCaches).ArrayMax = 0;
  this->bIsInitialized = false;
  pFVar1 = (this->Parents).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_1c) &&
     ((FScriptContainerElement *)&local_1c < pFVar1 + (longlong)(this->Parents).ArrayMax * 0x10)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FRigUnit_AimConstraintLocalSpaceOffset *)(*pcVar2)();
      return pFVar14;
    }
  }
  iVar13 = (this->Parents).ArrayNum;
  if (iVar13 == (this->Parents).ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&(this->Parents).AllocatorInstance,&(this->Parents).ArrayMax);
  }
  (this->Parents).ArrayNum = iVar13 + 1;
  pFVar1 = (this->Parents).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_18,local_1c);
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_10,uStack_14);
  return this;
}

// Execute @ 14a524540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_AimConstraintLocalSpaceOffset::Execute
          (FRigUnit_AimConstraintLocalSpaceOffset *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&this->Child,this->bMaintainOffset,&this->Filter,&this->AimAxis,
                &this->UpAxis,&this->WorldUp,&local_18,&this->AdvancedSettings,this->Weight,
                &this->WorldUpSpaceCache,&this->ChildCache,&this->ParentCaches,&this->bIsInitialized
               );
  return;
}

// RigVMExecute @ 14a535160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimConstraintLocalSpaceOffset::RigVMExecute
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
  TVector<double> *pTVar10;
  TVector<double> *pTVar11;
  FRigUnit_AimConstraint_WorldUp *pFVar12;
  FRigUnit_AimConstraint_AdvancedSettings *pFVar13;
  float *pfVar14;
  FRigVMSlice *pFVar15;
  FCachedRigElement *pFVar16;
  FCachedRigElement *pFVar17;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar18;
  bool *pbVar19;
  FControlRigExecuteContext *pFVar20;
  TArrayView<FConstraintParent_const_,int> local_58 [2];
  
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
  pTVar10 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar11 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = (FRigUnit_AimConstraint_WorldUp *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar13 = (FRigUnit_AimConstraint_AdvancedSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar14 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar14;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar15 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar16 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar15->Offset + pFVar15->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar15 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar17 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar15->Offset + pFVar15->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar15 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar18 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar15->Offset + pFVar15->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  pFVar15 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar19 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar9,false,pFVar15->Offset + pFVar15->Index);
  local_58[0].DataPtr = *(FConstraintParent **)puVar7;
  local_58[0].ArrayNum = *(int *)(puVar7 + 8);
  if (local_58[0].ArrayNum < 0) {
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
  pFVar20 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar20,pFVar6,bVar4,pFVar8,pTVar10,pTVar11,pFVar12,local_58,pFVar13,fVar1,pFVar16,
                pFVar17,pTVar18,pbVar19);
  return;
}

// StaticExecute @ 14a55fe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_AimConstraintLocalSpaceOffset::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FFilterOptionPerAxis *param_4,TVector<double> *param_5,TVector<double> *param_6,
          FRigUnit_AimConstraint_WorldUp *param_7,TArrayView<FConstraintParent_const_,int> *param_8,
          FRigUnit_AimConstraint_AdvancedSettings *param_9,float param_10,
          FCachedRigElement *param_11,FCachedRigElement *param_12,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_13,bool *param_14)

{
  ERigElementType EVar1;
  ushort uVar2;
  int iVar3;
  URigHierarchy *this;
  FScriptContainerElement *pFVar4;
  FRigTransformElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong uVar31;
  float fVar32;
  FRigUnit_AimConstraint_AdvancedSettings *pFVar33;
  FFilterOptionPerAxis *pFVar34;
  bool bVar35;
  uint uVar36;
  FConstraintParent *pFVar37;
  FRigControlElement *pFVar38;
  TTransform<double> *pTVar39;
  longlong lVar40;
  UScriptStruct *pUVar41;
  TVector<double> *pTVar42;
  TQuat<double> *pTVar43;
  uint uVar44;
  uint uVar45;
  longlong lVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar65;
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
  undefined1 auVar76 [16];
  float fVar77;
  double dVar78;
  double dVar79;
  double dVar81;
  double dVar82;
  undefined1 auVar80 [16];
  undefined8 uVar83;
  double dVar87;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auStackY_be8 [32];
  longlong local_b80;
  uint local_b38;
  uint local_b2c;
  uint local_b20;
  uint local_b14;
  TVector<double>_u_0 local_b08;
  FRigUnit_AimConstraint_AdvancedSettings *local_af0;
  FFilterOptionPerAxis *local_ae8;
  uint local_ae0;
  undefined4 uStack_adc;
  FCachedRigElement local_ad0;
  FCachedRigElement local_ab0;
  double local_a88 [2];
  double local_a78 [2];
  FCachedRigElement local_a68;
  TVector<double>_u_0 local_a48;
  undefined1 local_a28 [16];
  undefined1 local_a18 [16];
  undefined1 local_a08 [16];
  double local_9f8;
  undefined4 local_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined8 local_9e0;
  FRigUnit_AimItem_Target local_9d8;
  FRigUnit_AimItem_Target local_988;
  FRigUnit_AimItem_Target local_938;
  TVector<double> local_8e8;
  FRigUnit_AimItem_Target local_8c8;
  TQuat<double> local_878;
  TTransform<double> local_858;
  TTransform<double> local_7f8;
  TVector<double> local_798;
  undefined1 local_780 [16];
  double local_770;
  undefined1 local_768 [16];
  double local_758;
  double local_750;
  double dStack_748;
  double local_740;
  TTransform<double> local_738;
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [16];
  TQuat<double> local_6b8;
  TTransform<double> local_698;
  TTransform<double> local_638;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  FRigUnit_AimBone_DebugSettings local_4b8;
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
  
  fVar32 = __real_38d1b717;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_be8;
  local_af0 = param_9;
  if (__real_38d1b717 <= param_10) {
    local_ae8 = param_4;
    if (*param_14 == false) {
      param_11->Index = 0xffff;
      param_11->ContainerVersion = -1;
      param_11->Element = (FRigBaseElement *)0x0;
      local_b38 = local_b38 & 0xffffff00;
      uVar31 = (ulonglong)local_b38;
      (param_11->Key).Type = (char)uVar31;
      *(int3 *)&(param_11->Key).field_0x1 = (int3)(uVar31 >> 8);
      (param_11->Key).Name.ComparisonIndex = (FNameEntryId)(int)(uVar31 >> 0x20);
      (param_11->Key).Name.Number = 0;
      param_12->Index = 0xffff;
      local_b2c = local_b2c & 0xffffff00;
      uVar31 = (ulonglong)local_b2c;
      (param_12->Key).Type = (char)uVar31;
      *(int3 *)&(param_12->Key).field_0x1 = (int3)(uVar31 >> 8);
      (param_12->Key).Name.ComparisonIndex = (FNameEntryId)(int)(uVar31 >> 0x20);
      (param_12->Key).Name.Number = 0;
      param_12->ContainerVersion = -1;
      param_12->Element = (FRigBaseElement *)0x0;
      param_13->ArrayNum = 0;
      if (param_13->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_13->AllocatorInstance,0,&param_13->ArrayMax);
      }
      *param_14 = true;
    }
    this = param_1->Hierarchy;
    if (this != (URigHierarchy *)0x0) {
      FCachedRigElement::UpdateCache(param_11,&param_7->Space,this);
      bVar35 = FCachedRigElement::UpdateCache(param_12,param_2,this);
      if (bVar35) {
        if (param_13->ArrayNum != param_8->ArrayNum) {
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
                    (param_13,param_8->ArrayNum,Default);
        }
        uVar44 = 0;
        auVar73 = ZEXT816(0);
        if (0 < param_8->ArrayNum) {
          do {
            pFVar37 = TArrayView<FConstraintParent_const_,int>::operator[](param_8,uVar44);
            uVar36 = 0;
            if ((int)uVar44 < param_13->ArrayNum) {
              uVar36 = ~uVar44 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar35 = FCachedRigElement::UpdateCache
                               ((FCachedRigElement *)
                                ((param_13->AllocatorInstance).Data + (longlong)(int)uVar44 * 0x20),
                                &pFVar37->Item,this);
            if (bVar35) {
              fVar51 = pFVar37->Weight;
              if (fVar51 <= 0.0) {
                fVar51 = 0.0;
              }
              if (fVar32 <= fVar51) {
                auVar73._0_4_ = auVar73._0_4_ + fVar51;
              }
            }
            uVar44 = uVar44 + 1;
          } while ((int)uVar44 < param_8->ArrayNum);
        }
        fVar51 = __real_3f800000 / auVar73._0_4_;
        if (fVar32 < auVar73._0_4_) {
          EVar1 = param_2->Type;
          local_638.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_638.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_638.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_638.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_638.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_638.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_638.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_638.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_638.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_638.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_638.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_638.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_638.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_638.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_638.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_638.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          if (EVar1 == Control) {
            uVar44 = 0xffffffff;
            if (param_12->Index != 0xffff) {
              uVar44 = (uint)param_12->Index;
            }
            pFVar38 = URigHierarchy::Get<FRigControlElement>(this,uVar44);
            if (pFVar38 != (FRigControlElement *)0x0) {
              pTVar39 = URigHierarchy::GetControlOffsetTransform
                                  (this,&local_208,pFVar38,InitialLocal);
              local_638.Rotation.XY.m128d_f64 = *&(pTVar39->Rotation).XY.m128d_f64;
              local_638.Rotation.ZW.m128d_f64 = *&(pTVar39->Rotation).ZW.m128d_f64;
              local_638.Translation.XY.m128d_f64[0] = (pTVar39->Translation).XY.m128d_f64[0];
              local_638.Translation.XY.m128d_f64[1] = (pTVar39->Translation).XY.m128d_f64[1];
              local_638.Translation.ZW.m128d_f64 = *&(pTVar39->Translation).ZW.m128d_f64;
              local_638.Scale3D.XY.m128d_f64[0] = (pTVar39->Scale3D).XY.m128d_f64[0];
              local_638.Scale3D.XY.m128d_f64[1] = (pTVar39->Scale3D).XY.m128d_f64[1];
              local_638.Scale3D.ZW.m128d_f64 = *&(pTVar39->Scale3D).ZW.m128d_f64;
            }
          }
          local_a28._8_8_ = UE::Math::TQuat<double>::Identity.Y;
          local_a28._0_8_ = UE::Math::TQuat<double>::Identity.X;
          local_a18._8_8_ = UE::Math::TQuat<double>::Identity.W;
          local_a18._0_8_ = UE::Math::TQuat<double>::Identity.Z;
          dVar65 = UE::Math::TQuat<double>::Identity.X;
          dVar20 = UE::Math::TQuat<double>::Identity.Y;
          dVar30 = UE::Math::TQuat<double>::Identity.Z;
          dVar27 = UE::Math::TQuat<double>::Identity.W;
          if (param_3) {
            uVar44 = 0;
            uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar83 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            if (0 < param_8->ArrayNum) {
              lVar46 = 0;
              do {
                uVar36 = 0;
                if ((int)uVar44 < param_13->ArrayNum) {
                  uVar36 = ~uVar44 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar35)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                bVar35 = FCachedRigElement::IsValid
                                   ((FCachedRigElement *)
                                    ((param_13->AllocatorInstance).Data + lVar46));
                if (bVar35) {
                  pFVar37 = TArrayView<FConstraintParent_const_,int>::operator[](param_8,uVar44);
                  fVar77 = pFVar37->Weight;
                  if (fVar77 <= 0.0) {
                    fVar77 = 0.0;
                  }
                  if (fVar32 <= fVar77) {
                    uVar36 = 0;
                    if ((int)uVar44 < param_13->ArrayNum) {
                      uVar36 = ~uVar44 >> 0x1f;
                    }
                    if ((uVar36 == 0) &&
                       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar35)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar36 = 0xffffffff;
                    uVar2 = *(ushort *)((param_13->AllocatorInstance).Data + lVar46 + 0xc);
                    if (uVar2 != 0xffff) {
                      uVar36 = (uint)uVar2;
                    }
                    URigHierarchy::GetGlobalTransformByIndex(this,&local_2c8,uVar36,true);
                    dVar65 = (double)(fVar77 * fVar51);
                    local_750 = local_2c8.Translation.XY.m128d_f64[0];
                    dStack_748 = local_2c8.Translation.XY.m128d_f64[1];
                    local_740 = local_2c8.Translation.ZW.m128d_f64[0];
                    uVar83 = (double)uVar83 + dVar65 * local_2c8.Translation.XY.m128d_f64[0];
                    uVar16 = (double)uVar16 + dVar65 * local_2c8.Translation.XY.m128d_f64[1];
                    uVar19 = (double)uVar19 + dVar65 * local_2c8.Translation.ZW.m128d_f64[0];
                  }
                }
                uVar44 = uVar44 + 1;
                lVar46 = lVar46 + 0x20;
              } while ((int)uVar44 < param_8->ArrayNum);
            }
            auVar73 = *(undefined1 (*) [16])&(param_7->Target).field0_0x0;
            uVar44 = 0xffffffff;
            local_b20 = local_b20 & 0xffffff00;
            dVar65 = (param_7->Target).field0_0x0._s_0.Z;
            local_988.Axis.field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
            local_988.Axis.field0_0x0._s_0.Y = (param_5->field0_0x0)._s_0.Y;
            local_988.Axis.field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
            local_988.Weight = 1.0;
            local_988.Space._0_8_ = ZEXT48(local_b20);
            local_9d8.Axis.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
            local_9d8.Axis.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
            local_988.Kind = Location;
            local_9d8.Axis.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
            local_988.Space.Name.Number = 0;
            local_ab0.Key.Type = None;
            local_ab0.Key.Name.ComparisonIndex.Value = 0;
            local_ab0.Key.Name.Number = 0;
            local_ab0.Index = 0xffff;
            local_ab0.ContainerVersion = -1;
            local_ab0.Element = (FRigBaseElement *)0x0;
            local_9d8.Weight = 1.0;
            local_9d8.Kind = Location;
            if (param_11->Index != 0xffff) {
              uVar44 = (uint)param_11->Index;
            }
            local_988.Target.field0_0x0._s_0.X = (double)uVar83;
            local_988.Target.field0_0x0._s_0.Y = (double)uVar16;
            local_988.Target.field0_0x0._s_0.Z = (double)uVar19;
            URigHierarchy::GetGlobalTransformByIndex(this,&local_448,uVar44,true);
            dVar87 = auVar73._8_8_;
            dVar78 = local_448.Rotation.ZW.m128d_f64[0];
            dVar81 = local_448.Rotation.ZW.m128d_f64[1];
            dVar23 = local_448.Rotation.XY.m128d_f64[1];
            auVar55._8_8_ = 0;
            auVar55._0_8_ = dVar65;
            auVar55 = blendpd(auVar73,auVar55,2);
            dVar29 = auVar73._0_8_;
            dVar27 = local_448.Rotation.XY.m128d_f64[0];
            auVar73 = blendpd((undefined1  [16])local_448.Rotation.XY.m128d_f64,
                              (undefined1  [16])local_448.Rotation.ZW.m128d_f64,2);
            auVar84._0_8_ = dVar87 * dVar27 - dVar23 * dVar29;
            auVar84._8_8_ = dVar65 * dVar23 - dVar78 * dVar87;
            dVar20 = auVar73._0_8_;
            dVar30 = auVar73._8_8_;
            auVar56._0_8_ = auVar55._0_8_ * dVar78 - dVar20 * dVar65;
            auVar56._8_8_ = auVar55._8_8_ * dVar81 - dVar30 * 0.0;
            if (local_9d8.Kind == Direction) {
              auVar73 = blendpd(auVar84,auVar56,2);
              dVar21 = auVar84._8_8_ + auVar84._8_8_;
              dVar24 = auVar56._0_8_ + auVar56._0_8_;
              uVar52 = (undefined4)((ulonglong)dVar24 >> 0x20);
              auVar85._0_8_ = auVar73._0_8_ + auVar73._0_8_;
              auVar85._8_8_ = auVar73._8_8_ + auVar73._8_8_;
              auVar66._8_4_ = SUB84(dVar24,0);
              auVar66._0_8_ = dVar21;
              auVar66._12_4_ = uVar52;
              auVar57._8_4_ = SUB84(dVar24,0);
              auVar57._0_8_ = dVar21;
              auVar57._12_4_ = uVar52;
              auVar73 = blendpd(auVar57,auVar85,2);
              auVar67._0_8_ = auVar66._8_8_ * dVar27 - dVar21 * dVar23;
              auVar67._8_8_ = auVar85._0_8_ * dVar23 - dVar24 * dVar78;
              auVar58._0_8_ = auVar73._0_8_ * dVar78 - auVar85._0_8_ * dVar20;
              auVar58._8_8_ = auVar73._8_8_ * dVar81 - auVar85._8_8_ * dVar30;
              local_448.Translation.XY.m128d_f64[0] = dVar21 * dVar81 + dVar29 + auVar67._8_8_;
              local_448.Translation.XY.m128d_f64[1] = dVar24 * dVar81 + dVar87 + auVar58._0_8_;
              auVar73 = blendpd(auVar67,auVar58,2);
              local_9f8 = auVar85._0_8_ * dVar81 + dVar65 + auVar73._0_8_;
              local_768._8_4_ = SUB84(local_448.Translation.XY.m128d_f64[1],0);
              local_768._0_8_ = local_448.Translation.XY.m128d_f64[0];
              local_768._12_4_ = (int)((ulonglong)local_448.Translation.XY.m128d_f64[1] >> 0x20);
              local_758 = local_9f8;
            }
            else {
              dVar21 = auVar84._8_8_ + auVar84._8_8_;
              dVar24 = auVar56._0_8_ + auVar56._0_8_;
              uVar52 = (undefined4)((ulonglong)dVar24 >> 0x20);
              auVar73 = blendpd(auVar84,auVar56,2);
              auVar86._0_8_ = auVar73._0_8_ + auVar73._0_8_;
              auVar86._8_8_ = auVar73._8_8_ + auVar73._8_8_;
              auVar68._8_4_ = SUB84(dVar24,0);
              auVar68._0_8_ = dVar21;
              auVar68._12_4_ = uVar52;
              auVar59._8_4_ = SUB84(dVar24,0);
              auVar59._0_8_ = dVar21;
              auVar59._12_4_ = uVar52;
              auVar73 = blendpd(auVar59,auVar86,2);
              auVar69._0_8_ = auVar68._8_8_ * dVar27 - dVar23 * dVar21;
              auVar69._8_8_ = auVar86._0_8_ * dVar23 - dVar78 * dVar24;
              auVar60._0_8_ = auVar73._0_8_ * dVar78 - dVar20 * auVar86._0_8_;
              auVar60._8_8_ = auVar73._8_8_ * dVar81 - dVar30 * auVar86._8_8_;
              auVar73 = blendpd(auVar69,auVar60,2);
              local_448.Translation.XY.m128d_f64[0] =
                   dVar81 * dVar21 + dVar29 + auVar69._8_8_ + local_448.Translation.XY.m128d_f64[0];
              local_448.Translation.XY.m128d_f64[1] =
                   dVar81 * dVar24 + dVar87 + auVar60._0_8_ + local_448.Translation.XY.m128d_f64[1];
              local_780._8_4_ = SUB84(local_448.Translation.XY.m128d_f64[1],0);
              local_780._0_8_ = local_448.Translation.XY.m128d_f64[0];
              local_780._12_4_ = (int)((ulonglong)local_448.Translation.XY.m128d_f64[1] >> 0x20);
              local_9f8 = dVar81 * auVar86._0_8_ + dVar65 + auVar73._0_8_ +
                          local_448.Translation.ZW.m128d_f64[0];
              local_770 = local_9f8;
            }
            uVar52 = (undefined4)((ulonglong)local_448.Translation.XY.m128d_f64[1] >> 0x20);
            local_9d8.Kind = param_7->Kind;
            uVar36 = 0xffffffff;
            local_9d8.Space.Name.Number = 0;
            local_ad0.Key.Type = None;
            local_ad0.Key.Name.ComparisonIndex.Value = 0;
            local_ad0.Key.Name.Number = 0;
            local_ad0.Element = (FRigBaseElement *)0x0;
            local_b14 = local_b14 & 0xffffff00;
            local_9d8.Space._0_8_ = ZEXT48(local_b14);
            local_9d8.Target.field0_0x0._8_4_ = SUB84(local_448.Translation.XY.m128d_f64[1],0);
            local_9d8.Target.field0_0x0._0_8_ = local_448.Translation.XY.m128d_f64[0];
            local_9d8.Target.field0_0x0._12_4_ = uVar52;
            local_ad0.Index = 0xffff;
            local_ad0.ContainerVersion = -1;
            local_a08._8_4_ = SUB84(local_448.Translation.XY.m128d_f64[1],0);
            local_a08._0_8_ = local_448.Translation.XY.m128d_f64[0];
            local_a08._12_4_ = uVar52;
            uVar44 = uVar36;
            if (param_12->Index != 0xffff) {
              uVar44 = (uint)param_12->Index;
            }
            local_9d8.Target.field0_0x0._s_0.Z = local_9f8;
            URigHierarchy::GetGlobalTransformByIndex(this,&local_578,uVar44,true);
            local_858.Rotation.XY.m128d_f64[0] = local_578.Rotation.XY.m128d_f64[0];
            local_858.Rotation.XY.m128d_f64[1] = local_578.Rotation.XY.m128d_f64[1];
            local_858.Rotation.ZW.m128d_f64[0] = local_578.Rotation.ZW.m128d_f64[0];
            local_858.Rotation.ZW.m128d_f64[1] = local_578.Rotation.ZW.m128d_f64[1];
            local_858.Translation.XY.m128d_f64[0] = local_578.Translation.XY.m128d_f64[0];
            local_858.Translation.XY.m128d_f64[1] = local_578.Translation.XY.m128d_f64[1];
            local_858.Translation.ZW.m128d_f64[0] = local_578.Translation.ZW.m128d_f64[0];
            local_858.Translation.ZW.m128d_f64[1] = local_578.Translation.ZW.m128d_f64[1];
            local_858.Scale3D.XY.m128d_f64[0] = local_578.Scale3D.XY.m128d_f64[0];
            local_858.Scale3D.XY.m128d_f64[1] = local_578.Scale3D.XY.m128d_f64[1];
            local_858.Scale3D.ZW.m128d_f64[0] = local_578.Scale3D.ZW.m128d_f64[0];
            local_858.Scale3D.ZW.m128d_f64[1] = local_578.Scale3D.ZW.m128d_f64[1];
            local_4b8.WorldOffset.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_4b8.WorldOffset.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_4b8.WorldOffset.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_4b8.WorldOffset.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_4b8.WorldOffset.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_4b8.WorldOffset.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            local_4b8.bEnabled = false;
            local_4b8.Scale = 10.0;
            FRigUnit_AimBoneMath::StaticExecute
                      (param_1,&local_578,&local_988,&local_9d8,param_10,&local_858,&local_4b8,
                       &local_ab0,&local_ad0,param_14);
            uVar44 = uVar36;
            if (param_12->Index != 0xffff) {
              uVar44 = (uint)param_12->Index;
            }
            URigHierarchy::GetParentTransformByIndex(this,&local_388,uVar44,true);
            local_388.Rotation.XY.m128d_f64[0] =
                 local_388.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            local_388.Rotation.XY.m128d_f64[1] =
                 local_388.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            local_388.Rotation.ZW.m128d_f64[0] =
                 local_388.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            local_388.Rotation.ZW.m128d_f64[1] =
                 local_388.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            dVar22 = local_388.Rotation.XY.m128d_f64[0] * local_858.Rotation.XY.m128d_f64[1];
            dVar25 = local_388.Rotation.XY.m128d_f64[0] * local_858.Rotation.XY.m128d_f64[0];
            dVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
            dVar78 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
            dVar26 = local_388.Rotation.XY.m128d_f64[0] * local_858.Rotation.ZW.m128d_f64[1];
            dVar28 = local_388.Rotation.XY.m128d_f64[0] * local_858.Rotation.ZW.m128d_f64[0];
            dVar9 = local_858.Rotation.ZW.m128d_f64[0] * local_388.Rotation.ZW.m128d_f64[1];
            dVar11 = local_858.Rotation.ZW.m128d_f64[1] * local_388.Rotation.ZW.m128d_f64[1];
            dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
            dVar81 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
            dVar54 = local_858.Rotation.XY.m128d_f64[0] * local_388.Rotation.XY.m128d_f64[1];
            dVar64 = local_858.Rotation.XY.m128d_f64[1] * local_388.Rotation.XY.m128d_f64[1];
            dVar79 = local_858.Rotation.ZW.m128d_f64[0] * local_388.Rotation.XY.m128d_f64[1];
            dVar82 = local_858.Rotation.ZW.m128d_f64[1] * local_388.Rotation.XY.m128d_f64[1];
            dVar30 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
            dVar87 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
            dVar27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
            dVar21 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
            dVar14 = local_858.Rotation.XY.m128d_f64[0] * local_388.Rotation.ZW.m128d_f64[1];
            dVar15 = local_858.Rotation.XY.m128d_f64[1] * local_388.Rotation.ZW.m128d_f64[1];
            dVar10 = local_388.Rotation.ZW.m128d_f64[0] * local_858.Rotation.ZW.m128d_f64[1];
            dVar12 = local_388.Rotation.ZW.m128d_f64[0] * local_858.Rotation.ZW.m128d_f64[0];
            dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            dVar17 = local_388.Rotation.ZW.m128d_f64[0] * local_858.Rotation.XY.m128d_f64[1];
            dVar18 = local_388.Rotation.ZW.m128d_f64[0] * local_858.Rotation.XY.m128d_f64[0];
            dVar29 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            if (param_12->Index != 0xffff) {
              uVar36 = (uint)param_12->Index;
            }
            URigHierarchy::GetLocalTransformByIndex(this,&local_328,uVar36,true);
            if (EVar1 == Control) {
              UE::Math::TTransform<double>::Multiply(&local_328,&local_328,&local_638);
            }
            dVar23 = (dVar22 * dVar65 + dVar9 + dVar54 * dVar30 + dVar10 * dVar23) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar78 = (dVar25 * dVar78 + dVar11 + dVar64 * dVar87 + dVar12 * dVar24) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            dVar27 = (dVar26 * dVar20 + dVar14 + dVar79 * dVar27 + dVar17 * dVar29) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar29 = (dVar28 * dVar81 + dVar15 + dVar82 * dVar21 + dVar18 * dVar7) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            auVar74._8_4_ = SUB84(dVar78,0);
            auVar74._0_8_ = dVar23;
            auVar74._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
            dVar65 = local_328.Rotation.ZW.m128d_f64[1] * dVar27 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     local_328.Rotation.XY.m128d_f64[0] * auVar74._8_8_ +
                     local_328.Rotation.ZW.m128d_f64[0] * dVar29 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar23 * local_328.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar20 = local_328.Rotation.ZW.m128d_f64[0] * dVar27 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     local_328.Rotation.XY.m128d_f64[1] * dVar78 +
                     local_328.Rotation.ZW.m128d_f64[1] * dVar29 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar23 * local_328.Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            uVar52 = (undefined4)((ulonglong)dVar20 >> 0x20);
            local_6d8._8_4_ = SUB84(dVar20,0);
            local_6d8._0_8_ = dVar65;
            local_6d8._12_4_ = uVar52;
            dVar30 = dVar27 * local_328.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     local_328.Rotation.ZW.m128d_f64[0] * auVar74._8_8_ +
                     local_328.Rotation.XY.m128d_f64[0] * dVar29 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar23 * local_328.Rotation.ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar27 = dVar27 * local_328.Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_328.Rotation.ZW.m128d_f64[1] * dVar78 +
                     local_328.Rotation.XY.m128d_f64[1] * dVar29 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar23 * local_328.Rotation.ZW.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            uVar53 = (undefined4)((ulonglong)dVar27 >> 0x20);
            local_a28._8_4_ = SUB84(dVar20,0);
            local_a28._0_8_ = dVar65;
            local_a28._12_4_ = uVar52;
            local_6c8._8_4_ = SUB84(dVar27,0);
            local_6c8._0_8_ = dVar30;
            local_6c8._12_4_ = uVar53;
            local_a18._8_4_ = SUB84(dVar27,0);
            local_a18._0_8_ = dVar30;
            local_a18._12_4_ = uVar53;
          }
          uVar44 = 0;
          uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar83 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          if (0 < param_8->ArrayNum) {
            lVar46 = 0;
            local_b80 = 0;
            do {
              uVar45 = ~uVar44 >> 0x1f;
              uVar36 = 0;
              if ((int)uVar44 < param_13->ArrayNum) {
                uVar36 = uVar45;
              }
              if ((uVar36 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar4 = (param_13->AllocatorInstance).Data;
              if ((((*(short *)(pFVar4 + lVar46 + 0xc) != -1) &&
                   (bVar35 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar4 + lVar46 + 4)),
                   bVar35)) && (*(longlong *)(pFVar4 + lVar46 + 4) != 0)) &&
                 (pFVar4[lVar46] != (FScriptContainerElement)0x0)) {
                uVar36 = 0;
                if ((int)uVar44 < param_8->ArrayNum) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar35)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                fVar77 = *(float *)((longlong)&param_8->DataPtr->Weight + local_b80);
                if (fVar77 <= 0.0) {
                  fVar77 = 0.0;
                }
                if (fVar32 <= fVar77) {
                  uVar36 = 0;
                  if ((int)uVar44 < param_13->ArrayNum) {
                    uVar36 = uVar45;
                  }
                  if ((uVar36 == 0) &&
                     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar35)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar2 = *(ushort *)((param_13->AllocatorInstance).Data + lVar46 + 0xc);
                  if ((uVar2 == 0xffff) || ((this->Elements).ArrayNum <= (int)(uint)uVar2)) {
LAB_14a560c7e:
                    local_9f0 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0].
                                _0_4_;
                    uStack_9ec = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0].
                                 _4_4_;
                    uStack_9e8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1].
                                 _0_4_;
                    uStack_9e4 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1].
                                 _4_4_;
                    uVar52 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0].
                             _0_4_;
                    uVar53 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0].
                             _4_4_;
                    local_3e8.Rotation.XY.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                    local_3e8.Rotation.ZW.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                    local_3e8.Scale3D.XY.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                    local_3e8.Scale3D.ZW.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                  }
                  else {
                    if (((this->Elements).ArrayNum <= (int)(uint)uVar2) &&
                       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar35)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar5 = *(FRigTransformElement **)
                              ((this->Elements).AllocatorInstance.Data + (ulonglong)uVar2 * 8);
                    if (pFVar5 == (FRigTransformElement *)0x0) goto LAB_14a560c7e;
                    lVar40 = (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
                    pUVar41 = FRigTransformElement::StaticStruct();
                    if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a560c7e;
                    iVar3 = (int)pUVar41->_padding_;
                    if ((*(int *)(lVar40 + 0x38) < iVar3) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar3 * 8) !=
                        &pUVar41->_padding_)) {
                      bVar35 = false;
                    }
                    else {
                      bVar35 = true;
                    }
                    if (!bVar35) goto LAB_14a560c7e;
                    URigHierarchy::GetTransform(this,&local_3e8,pFVar5,CurrentGlobal);
                    local_9f0 = local_3e8.Translation.XY.m128d_f64[0]._0_4_;
                    uStack_9ec = local_3e8.Translation.XY.m128d_f64[0]._4_4_;
                    uStack_9e8 = local_3e8.Translation.XY.m128d_f64[1]._0_4_;
                    uStack_9e4 = local_3e8.Translation.XY.m128d_f64[1]._4_4_;
                    uVar52 = local_3e8.Translation.ZW.m128d_f64[0]._0_4_;
                    uVar53 = local_3e8.Translation.ZW.m128d_f64[0]._4_4_;
                  }
                  dVar65 = (double)(fVar77 * fVar51);
                  local_9e0 = CONCAT44(uVar53,uVar52);
                  uVar83 = (double)uVar83 + dVar65 * (double)CONCAT44(uStack_9ec,local_9f0);
                  uVar16 = (double)uVar16 + dVar65 * (double)CONCAT44(uStack_9e4,uStack_9e8);
                  uVar19 = (double)uVar19 + dVar65 * (double)CONCAT44(uVar53,uVar52);
                }
              }
              local_b80 = local_b80 + 0x10;
              uVar44 = uVar44 + 1;
              lVar46 = lVar46 + 0x20;
            } while ((int)uVar44 < param_8->ArrayNum);
            dVar65 = (double)local_a28._0_8_;
            dVar20 = (double)local_a28._8_8_;
            dVar30 = (double)local_a18._0_8_;
            dVar27 = (double)local_a18._8_8_;
          }
          uVar36 = 0xffffffff;
          local_ae0 = local_ae0 & 0xffffff00;
          uVar44 = 0xffffffff;
          local_938.Axis.field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
          local_938.Axis.field0_0x0._s_0.Y = (param_5->field0_0x0)._s_0.Y;
          local_938.Weight = 1.0;
          local_938.Axis.field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
          uStack_adc = 0;
          local_938.Space.Name.Number = 0;
          local_a68.Key.Type = None;
          local_a68.Key.Name.ComparisonIndex.Value = 0;
          local_a68.Key.Name.Number = 0;
          local_a68.Element = (FRigBaseElement *)0x0;
          local_938.Kind = Location;
          local_938.Space._0_8_ = ZEXT48(local_ae0);
          local_8c8.Axis.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
          local_8c8.Axis.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
          local_a68.Index = 0xffff;
          local_8c8.Axis.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
          local_8c8.Kind = param_7->Kind;
          local_8c8.Target.field0_0x0._s_0.X = (param_7->Target).field0_0x0._s_0.X;
          local_8c8.Target.field0_0x0._s_0.Y = (param_7->Target).field0_0x0._s_0.Y;
          local_8c8.Space.Name.Number = (param_7->Space).Name.Number;
          local_8c8.Space.Type = (param_7->Space).Type;
          local_8c8.Space._1_3_ = *(undefined3 *)&(param_7->Space).field_0x1;
          local_8c8.Space.Name.ComparisonIndex.Value = (param_7->Space).Name.ComparisonIndex.Value;
          local_8c8.Target.field0_0x0._s_0.Z = (param_7->Target).field0_0x0._s_0.Z;
          local_a68.ContainerVersion = -1;
          local_8c8.Weight = 1.0;
          if (param_12->Index != 0xffff) {
            uVar44 = (uint)param_12->Index;
          }
          local_938.Target.field0_0x0._s_0.X = (double)uVar83;
          local_938.Target.field0_0x0._s_0.Y = (double)uVar16;
          local_938.Target.field0_0x0._s_0.Z = (double)uVar19;
          URigHierarchy::GetGlobalTransformByIndex(this,&local_518,uVar44,false);
          pFVar33 = local_af0;
          local_7f8.Rotation.XY.m128d_f64[0] = local_518.Rotation.XY.m128d_f64[0];
          local_7f8.Rotation.XY.m128d_f64[1] = local_518.Rotation.XY.m128d_f64[1];
          local_7f8.Rotation.ZW.m128d_f64[0] = local_518.Rotation.ZW.m128d_f64[0];
          local_7f8.Rotation.ZW.m128d_f64[1] = local_518.Rotation.ZW.m128d_f64[1];
          local_7f8.Translation.XY.m128d_f64[0] = local_518.Translation.XY.m128d_f64[0];
          local_7f8.Translation.XY.m128d_f64[1] = local_518.Translation.XY.m128d_f64[1];
          local_7f8.Translation.ZW.m128d_f64[0] = local_518.Translation.ZW.m128d_f64[0];
          local_7f8.Translation.ZW.m128d_f64[1] = local_518.Translation.ZW.m128d_f64[1];
          local_7f8.Scale3D.XY.m128d_f64[0] = local_518.Scale3D.XY.m128d_f64[0];
          local_7f8.Scale3D.XY.m128d_f64[1] = local_518.Scale3D.XY.m128d_f64[1];
          local_7f8.Scale3D.ZW.m128d_f64[0] = local_518.Scale3D.ZW.m128d_f64[0];
          local_7f8.Scale3D.ZW.m128d_f64[1] = local_518.Scale3D.ZW.m128d_f64[1];
          FRigUnit_AimBoneMath::StaticExecute
                    (param_1,&local_518,&local_938,&local_8c8,param_10,&local_7f8,
                     &local_af0->DebugSettings,&local_a68,param_11,param_14);
          uVar45 = 0xffffffff;
          uVar44 = uVar45;
          if (param_12->Index != 0xffff) {
            uVar44 = (uint)param_12->Index;
          }
          URigHierarchy::GetParentTransformByIndex(this,&local_268,uVar44,false);
          local_268.Rotation.XY.m128d_f64[0] =
               local_268.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          local_268.Rotation.XY.m128d_f64[1] =
               local_268.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          local_268.Rotation.ZW.m128d_f64[0] =
               local_268.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          local_268.Rotation.ZW.m128d_f64[1] =
               local_268.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar75._8_4_ = SUB84(local_268.Rotation.ZW.m128d_f64[1],0);
          auVar75._0_8_ = local_268.Rotation.ZW.m128d_f64[0];
          auVar75._12_4_ = (int)((ulonglong)local_268.Rotation.ZW.m128d_f64[1] >> 0x20);
          auVar61._8_4_ = SUB84(local_268.Rotation.XY.m128d_f64[1],0);
          auVar61._0_8_ = local_268.Rotation.XY.m128d_f64[1];
          auVar61._12_4_ = (int)((ulonglong)local_268.Rotation.XY.m128d_f64[1] >> 0x20);
          dVar23 = local_268.Rotation.XY.m128d_f64[0] * local_7f8.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                   auVar75._8_8_ * local_7f8.Rotation.ZW.m128d_f64[0] +
                   local_268.Rotation.XY.m128d_f64[1] * local_7f8.Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                   local_268.Rotation.ZW.m128d_f64[0] * local_7f8.Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar29 = local_268.Rotation.XY.m128d_f64[0] * local_7f8.Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   local_268.Rotation.ZW.m128d_f64[1] * local_7f8.Rotation.ZW.m128d_f64[1] +
                   local_268.Rotation.XY.m128d_f64[1] * local_7f8.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   local_268.Rotation.ZW.m128d_f64[0] * local_7f8.Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar78 = local_268.Rotation.XY.m128d_f64[0] * local_7f8.Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   auVar75._8_8_ * local_7f8.Rotation.XY.m128d_f64[0] +
                   local_268.Rotation.XY.m128d_f64[1] * local_7f8.Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   local_268.Rotation.ZW.m128d_f64[0] * local_7f8.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar81 = local_268.Rotation.XY.m128d_f64[0] * local_7f8.Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   local_268.Rotation.ZW.m128d_f64[1] * local_7f8.Rotation.XY.m128d_f64[1] +
                   auVar61._8_8_ * local_7f8.Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   local_268.Rotation.ZW.m128d_f64[0] * local_7f8.Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          uVar52 = (undefined4)((ulonglong)dVar81 >> 0x20);
          local_a78[1]._0_4_ = SUB84(dVar29,0);
          local_a78[0] = dVar23;
          local_a78[1]._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
          local_a88[1]._0_4_ = SUB84(dVar81,0);
          local_a88[0] = dVar78;
          local_a88[1]._4_4_ = uVar52;
          if (param_3) {
            auVar70._8_4_ = SUB84(dVar20,0);
            auVar70._0_8_ = dVar65;
            auVar70._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
            auVar76._8_4_ = SUB84(dVar27,0);
            auVar76._0_8_ = dVar30;
            auVar76._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            auVar62._8_4_ = SUB84(dVar81,0);
            auVar62._0_8_ = dVar81;
            auVar62._12_4_ = uVar52;
            dVar87 = dVar78 * dVar30 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar20 * dVar29 +
                     auVar62._8_8_ * dVar27 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar65 * dVar23 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            local_a88[1]._0_4_ = SUB84(dVar87,0);
            local_a88[0] = dVar78 * auVar76._8_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                           dVar65 * dVar29 +
                           dVar81 * dVar30 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                           auVar70._8_8_ * dVar23 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_a88[1]._4_4_ = (int)((ulonglong)dVar87 >> 0x20);
            local_a78[1] = dVar78 * dVar65 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                           dVar29 * dVar27 +
                           dVar20 * dVar81 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                           dVar30 * dVar23 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            local_a78[0] = dVar78 * auVar70._8_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           dVar29 * dVar30 +
                           dVar65 * dVar81 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                           auVar76._8_8_ * dVar23 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          }
          if (param_12->Index != 0xffff) {
            uVar45 = (uint)param_12->Index;
          }
          URigHierarchy::GetLocalTransformByIndex(this,&local_5d8,uVar45,false);
          if (EVar1 == Control) {
            UE::Math::TTransform<double>::Multiply(&local_5d8,&local_5d8,&local_638);
          }
          pFVar34 = local_ae8;
          if (((local_ae8->bX == false) || (local_ae8->bY == false)) ||
             (local_698.Rotation.ZW.m128d_f64 = local_a78,
             local_698.Rotation.XY.m128d_f64 = local_a88, local_ae8->bZ == false)) {
            AnimationCore::EulerFromQuat
                      (&local_8e8,(TQuat<double> *)local_a88,pFVar33->RotationOrderForFilter,false);
            FRigVMMathLibrary::GetEquivalentEulerAngle
                      (&local_798,&local_8e8,&pFVar33->RotationOrderForFilter);
            local_878.X = local_5d8.Rotation.XY.m128d_f64[0];
            local_878.Y = local_5d8.Rotation.XY.m128d_f64[1];
            local_878.Z = local_5d8.Rotation.ZW.m128d_f64[0];
            local_878.W = local_5d8.Rotation.ZW.m128d_f64[1];
            AnimationCore::EulerFromQuat
                      ((TVector<double> *)&local_a48._s_0,&local_878,pFVar33->RotationOrderForFilter
                       ,false);
            pTVar42 = FRigVMMathLibrary::ChooseBetterEulerAngleForAxisFilter
                                ((TVector<double> *)&local_a48._s_0,&local_8e8,&local_798);
            local_9e0 = *(undefined8 *)((longlong)&pTVar42->field0_0x0 + 0x10);
            local_b08._s_0.X = (pTVar42->field0_0x0)._s_0.X;
            local_b08._s_0.Y = (pTVar42->field0_0x0)._s_0.Y;
            if (pFVar34->bX == false) {
              local_b08._s_0.X = local_a48._s_0.X;
            }
            if (pFVar34->bY == false) {
              local_b08._s_0.Y = local_a48._s_0.Y;
            }
            if (pFVar34->bZ == false) {
              uVar52 = SUB84(local_a48._s_0.Z,0);
              uVar53 = (undefined4)((ulonglong)local_a48._16_8_ >> 0x20);
            }
            else {
              uVar52 = (undefined4)local_9e0;
              uVar53 = (undefined4)((ulonglong)local_9e0 >> 0x20);
            }
            local_b08._s_0.Z = (double)CONCAT44(uVar53,uVar52);
            pTVar43 = AnimationCore::QuatFromEuler
                                (&local_6b8,(TVector<double> *)&local_b08._s_0,
                                 pFVar33->RotationOrderForFilter,false);
            local_698.Rotation.XY.m128d_f64[0] = pTVar43->X;
            local_698.Rotation.XY.m128d_f64[1] = pTVar43->Y;
            local_698.Rotation.ZW.m128d_f64[0] = pTVar43->Z;
            local_698.Rotation.ZW.m128d_f64[1] = pTVar43->W;
          }
          local_698.Translation.XY.m128d_f64[0] = local_5d8.Translation.XY.m128d_f64[0];
          local_698.Translation.XY.m128d_f64[1] = local_5d8.Translation.XY.m128d_f64[1];
          local_698.Translation.ZW.m128d_f64[0]._0_4_ = local_5d8.Translation.ZW.m128d_f64[0]._0_4_;
          local_698.Translation.ZW.m128d_f64[0]._4_4_ = local_5d8.Translation.ZW.m128d_f64[0]._4_4_;
          local_698.Translation.ZW.m128d_f64[1]._0_4_ = local_5d8.Translation.ZW.m128d_f64[1]._0_4_;
          local_698.Translation.ZW.m128d_f64[1]._4_4_ = local_5d8.Translation.ZW.m128d_f64[1]._4_4_;
          local_698.Scale3D.XY.m128d_f64[0]._0_4_ = local_5d8.Scale3D.XY.m128d_f64[0]._0_4_;
          local_698.Scale3D.XY.m128d_f64[0]._4_4_ = local_5d8.Scale3D.XY.m128d_f64[0]._4_4_;
          local_698.Scale3D.XY.m128d_f64[1]._0_4_ = local_5d8.Scale3D.XY.m128d_f64[1]._0_4_;
          local_698.Scale3D.XY.m128d_f64[1]._4_4_ = local_5d8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_698.Scale3D.ZW.m128d_f64[0]._0_4_ = local_5d8.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_698.Scale3D.ZW.m128d_f64[0]._4_4_ = local_5d8.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_698.Scale3D.ZW.m128d_f64[1]._0_4_ = local_5d8.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_698.Scale3D.ZW.m128d_f64[1]._4_4_ = local_5d8.Scale3D.ZW.m128d_f64[1]._4_4_;
          if (param_10 < __real_3f7ff972) {
            pTVar39 = FRigVMMathLibrary::LerpTransform(&local_1a8,&local_5d8,&local_698,param_10);
            local_698.Rotation.XY.m128d_f64 = *&(pTVar39->Rotation).XY.m128d_f64;
            local_698.Rotation.ZW.m128d_f64 = *&(pTVar39->Rotation).ZW.m128d_f64;
            local_5d8.Translation.XY.m128d_f64[0] = (pTVar39->Translation).XY.m128d_f64[0];
            local_5d8.Translation.XY.m128d_f64[1] = (pTVar39->Translation).XY.m128d_f64[1];
            local_5d8.Translation.ZW.m128d_f64[0]._0_4_ =
                 *(undefined4 *)(pTVar39->Translation).ZW.m128d_f64;
            local_5d8.Translation.ZW.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Translation).ZW.m128d_f64 + 4);
            local_5d8.Translation.ZW.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((pTVar39->Translation).ZW.m128d_f64 + 1);
            local_5d8.Translation.ZW.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Translation).ZW.m128d_f64 + 0xc);
            local_5d8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar39->Scale3D).XY.m128d_f64
            ;
            local_5d8.Scale3D.XY.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Scale3D).XY.m128d_f64 + 4);
            local_5d8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((pTVar39->Scale3D).XY.m128d_f64 + 1);
            local_5d8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Scale3D).XY.m128d_f64 + 0xc);
            local_5d8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar39->Scale3D).ZW.m128d_f64
            ;
            local_5d8.Scale3D.ZW.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Scale3D).ZW.m128d_f64 + 4);
            local_5d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((pTVar39->Scale3D).ZW.m128d_f64 + 1);
            local_5d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Scale3D).ZW.m128d_f64 + 0xc);
          }
          local_698.Translation.XY.m128d_f64[0] = local_5d8.Translation.XY.m128d_f64[0];
          local_698.Translation.XY.m128d_f64[1] = local_5d8.Translation.XY.m128d_f64[1];
          local_698.Translation.ZW.m128d_f64[0]._0_4_ = local_5d8.Translation.ZW.m128d_f64[0]._0_4_;
          local_698.Translation.ZW.m128d_f64[0]._4_4_ = local_5d8.Translation.ZW.m128d_f64[0]._4_4_;
          local_698.Translation.ZW.m128d_f64[1]._0_4_ = local_5d8.Translation.ZW.m128d_f64[1]._0_4_;
          local_698.Translation.ZW.m128d_f64[1]._4_4_ = local_5d8.Translation.ZW.m128d_f64[1]._4_4_;
          local_698.Scale3D.XY.m128d_f64[0]._0_4_ = local_5d8.Scale3D.XY.m128d_f64[0]._0_4_;
          local_698.Scale3D.XY.m128d_f64[0]._4_4_ = local_5d8.Scale3D.XY.m128d_f64[0]._4_4_;
          local_698.Scale3D.XY.m128d_f64[1]._0_4_ = local_5d8.Scale3D.XY.m128d_f64[1]._0_4_;
          local_698.Scale3D.XY.m128d_f64[1]._4_4_ = local_5d8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_698.Scale3D.ZW.m128d_f64[0]._0_4_ = local_5d8.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_698.Scale3D.ZW.m128d_f64[0]._4_4_ = local_5d8.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_698.Scale3D.ZW.m128d_f64[1]._0_4_ = local_5d8.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_698.Scale3D.ZW.m128d_f64[1]._4_4_ = local_5d8.Scale3D.ZW.m128d_f64[1]._4_4_;
          if (param_2->Type == Control) {
            pTVar39 = UE::Math::TTransform<double>::GetRelativeTransform
                                (&local_698,&local_148,&local_638);
            dVar30 = (pTVar39->Rotation).XY.m128d_f64[0];
            dVar27 = (pTVar39->Rotation).XY.m128d_f64[1];
            dVar23 = (pTVar39->Rotation).ZW.m128d_f64[0];
            dVar29 = (pTVar39->Rotation).ZW.m128d_f64[1];
            local_698.Translation.XY.m128d_f64[0] = (pTVar39->Translation).XY.m128d_f64[0];
            local_698.Translation.XY.m128d_f64[1] = (pTVar39->Translation).XY.m128d_f64[1];
            local_698.Translation.ZW.m128d_f64[0]._0_4_ =
                 *(undefined4 *)(pTVar39->Translation).ZW.m128d_f64;
            local_698.Translation.ZW.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Translation).ZW.m128d_f64 + 4);
            local_698.Translation.ZW.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((pTVar39->Translation).ZW.m128d_f64 + 1);
            local_698.Translation.ZW.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Translation).ZW.m128d_f64 + 0xc);
            auVar63._0_8_ = dVar30 * dVar30 + dVar23 * dVar23;
            auVar63._8_8_ = dVar27 * dVar27 + dVar29 * dVar29;
            local_698.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar39->Scale3D).XY.m128d_f64
            ;
            local_698.Scale3D.XY.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Scale3D).XY.m128d_f64 + 4);
            local_698.Scale3D.XY.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((pTVar39->Scale3D).XY.m128d_f64 + 1);
            local_698.Scale3D.XY.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Scale3D).XY.m128d_f64 + 0xc);
            dVar65 = auVar63._8_8_ + auVar63._0_8_;
            dVar20 = auVar63._0_8_ + auVar63._8_8_;
            local_698.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar39->Scale3D).ZW.m128d_f64
            ;
            local_698.Scale3D.ZW.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Scale3D).ZW.m128d_f64 + 4);
            local_698.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((pTVar39->Scale3D).ZW.m128d_f64 + 1);
            local_698.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar39->Scale3D).ZW.m128d_f64 + 0xc);
            auVar8._8_4_ = SUB84(dVar20,0);
            auVar8._0_8_ = dVar65;
            auVar8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
            auVar73 = sqrtpd(auVar63,auVar8);
            uVar47 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar65);
            uVar49 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar20);
            auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar73)
            ;
            uVar48 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar65);
            uVar50 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar20);
            auVar80._0_8_ = uVar47 & (ulonglong)(auVar55._0_8_ * dVar30);
            uVar31 = uVar49 & (ulonglong)(auVar55._8_8_ * dVar27);
            auVar80._8_4_ = (undefined4)uVar31;
            auVar80._12_4_ = (undefined4)(uVar31 >> 0x20);
            auVar71._0_4_ = ~(uint)uVar47 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
            auVar71._4_4_ =
                 ~(uint)(uVar47 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar71._8_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
            auVar71._12_4_ =
                 ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            local_698.Rotation.XY.m128d_f64 = (double  [2])(auVar80 | auVar71);
            auVar73 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar73)
            ;
            auVar72._0_8_ = uVar48 & (ulonglong)(auVar73._0_8_ * dVar23);
            uVar31 = uVar50 & (ulonglong)(auVar73._8_8_ * dVar29);
            auVar72._8_4_ = (undefined4)uVar31;
            auVar72._12_4_ = (undefined4)(uVar31 >> 0x20);
            auVar13._4_4_ =
                 ~(uint)(uVar48 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            auVar13._0_4_ = ~(uint)uVar48 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            auVar13._8_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            auVar13._12_4_ =
                 ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            local_698.Rotation.ZW.m128d_f64 = (double  [2])(auVar72 | auVar13);
          }
          if (param_12->Index != 0xffff) {
            uVar36 = (uint)param_12->Index;
          }
          local_738.Rotation.XY.m128d_f64 = local_698.Rotation.XY.m128d_f64;
          local_738.Rotation.ZW.m128d_f64 = local_698.Rotation.ZW.m128d_f64;
          local_738.Translation.XY.m128d_f64[0] = local_698.Translation.XY.m128d_f64[0];
          local_738.Translation.XY.m128d_f64[1] = local_698.Translation.XY.m128d_f64[1];
          local_738.Translation.ZW.m128d_f64[0]._0_4_ = local_698.Translation.ZW.m128d_f64[0]._0_4_;
          local_738.Translation.ZW.m128d_f64[0]._4_4_ = local_698.Translation.ZW.m128d_f64[0]._4_4_;
          local_738.Translation.ZW.m128d_f64[1]._0_4_ = local_698.Translation.ZW.m128d_f64[1]._0_4_;
          local_738.Translation.ZW.m128d_f64[1]._4_4_ = local_698.Translation.ZW.m128d_f64[1]._4_4_;
          local_738.Scale3D.XY.m128d_f64[0]._0_4_ = local_698.Scale3D.XY.m128d_f64[0]._0_4_;
          local_738.Scale3D.XY.m128d_f64[0]._4_4_ = local_698.Scale3D.XY.m128d_f64[0]._4_4_;
          local_738.Scale3D.XY.m128d_f64[1]._0_4_ = local_698.Scale3D.XY.m128d_f64[1]._0_4_;
          local_738.Scale3D.XY.m128d_f64[1]._4_4_ = local_698.Scale3D.XY.m128d_f64[1]._4_4_;
          local_738.Scale3D.ZW.m128d_f64[0]._0_4_ = local_698.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_738.Scale3D.ZW.m128d_f64[0]._4_4_ = local_698.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_738.Scale3D.ZW.m128d_f64[1]._0_4_ = local_698.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_738.Scale3D.ZW.m128d_f64[1]._4_4_ = local_698.Scale3D.ZW.m128d_f64[1]._4_4_;
          URigHierarchy::SetLocalTransformByIndex(this,uVar36,&local_738,false,true,false,false);
        }
      }
    }
  }
  return;
}

