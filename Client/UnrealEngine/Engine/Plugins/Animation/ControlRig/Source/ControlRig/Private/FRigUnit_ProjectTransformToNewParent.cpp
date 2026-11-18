// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f10d0

UScriptStruct * __cdecl FRigUnit_ProjectTransformToNewParent::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ProjectTransformToNewParent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ProjectTransformToNewParent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent,
                         (UObject *)pUVar1,L"RigUnit_ProjectTransformToNewParent");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ProjectTransformToNewParent.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ProjectTransformToNewParent.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f1150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ProjectTransformToNewParent::GetExecuteContextStruct
          (FRigUnit_ProjectTransformToNewParent *this)

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

// Execute @ 14a4f16a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ProjectTransformToNewParent::Execute(FRigUnit_ProjectTransformToNewParent *this)

{
  undefined1 auStackY_2c8 [32];
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Child,this->bChildInitial,
                &this->OldParent,this->bOldParentInitial,&this->NewParent,this->bNewParentInitial,
                &this->Transform,&this->CachedChild,&this->CachedOldParent,&this->CachedNewParent);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_ProjectTransformToNewParent @ 14a5151e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_ProjectTransformToNewParent * __thiscall
FRigUnit_ProjectTransformToNewParent::FRigUnit_ProjectTransformToNewParent
          (FRigUnit_ProjectTransformToNewParent *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  uint local_18;
  
  (this->Child).Type = None;
  this->_padding_ = (longlong)&___7FRigUnit_ProjectTransformToNewParent__6B_;
  (this->Child).Name.ComparisonIndex = 0;
  (this->Child).Name.Number = 0;
  (this->OldParent).Type = None;
  (this->OldParent).Name.ComparisonIndex = 0;
  (this->OldParent).Name.Number = 0;
  (this->NewParent).Type = None;
  (this->NewParent).Name.ComparisonIndex = 0;
  (this->NewParent).Name.Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_18 = CONCAT31(local_18._1_3_,1);
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  uVar4 = (ulonglong)local_18;
  (this->CachedChild).Key.Type = None;
  (this->CachedChild).Key.Name.ComparisonIndex = 0;
  (this->CachedChild).Key.Name.Number = 0;
  (this->CachedChild).Index = 0xffff;
  (this->CachedChild).ContainerVersion = -1;
  (this->CachedChild).Element = (FRigBaseElement *)0x0;
  (this->CachedOldParent).Key.Type = None;
  (this->CachedOldParent).Key.Name.ComparisonIndex = 0;
  (this->CachedOldParent).Key.Name.Number = 0;
  (this->CachedOldParent).Index = 0xffff;
  (this->CachedOldParent).ContainerVersion = -1;
  (this->CachedOldParent).Element = (FRigBaseElement *)0x0;
  (this->CachedNewParent).Key.Type = None;
  (this->CachedNewParent).Key.Name.ComparisonIndex = 0;
  (this->CachedNewParent).Key.Name.Number = 0;
  (this->CachedNewParent).Index = 0xffff;
  (this->CachedNewParent).ContainerVersion = -1;
  (this->CachedNewParent).Element = (FRigBaseElement *)0x0;
  (this->Child).Type = (char)uVar4;
  *(int3 *)&(this->Child).field_0x1 = (int3)(uVar4 >> 8);
  (this->Child).Name.ComparisonIndex = (FNameEntryId)(int)(uVar4 >> 0x20);
  local_18 = CONCAT31(local_18._1_3_,1);
  uVar4 = (ulonglong)local_18;
  (this->OldParent).Type = (char)uVar4;
  *(int3 *)&(this->OldParent).field_0x1 = (int3)(uVar4 >> 8);
  (this->OldParent).Name.ComparisonIndex = (FNameEntryId)(int)(uVar4 >> 0x20);
  local_18 = CONCAT31(local_18._1_3_,1);
  uVar4 = (ulonglong)local_18;
  (this->NewParent).Type = (char)uVar4;
  *(int3 *)&(this->NewParent).field_0x1 = (int3)(uVar4 >> 8);
  (this->NewParent).Name.ComparisonIndex = (FNameEntryId)(int)(uVar4 >> 0x20);
  (this->NewParent).Name.Number = 0;
  (this->Child).Name.Number = 0;
  this->bChildInitial = true;
  (this->OldParent).Name.Number = 0;
  this->bOldParentInitial = true;
  this->bNewParentInitial = false;
  return this;
}

// Execute @ 14a52bd80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ProjectTransformToNewParent::Execute
          (FRigUnit_ProjectTransformToNewParent *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Child,this->bChildInitial,&this->OldParent,this->bOldParentInitial,
                &this->NewParent,this->bNewParentInitial,&this->Transform,&this->CachedChild,
                &this->CachedOldParent,&this->CachedNewParent);
  return;
}

// RigVMExecute @ 14a54e2a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ProjectTransformToNewParent::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FRigElementKey *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  FRigElementKey *pFVar10;
  TTransform<double> *pTVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  FCachedRigElement *pFVar14;
  FCachedRigElement *pFVar15;
  FControlRigExecuteContext *pFVar16;
  
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
    pFVar8 = (FRigElementKey *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar5 = (bool)*puVar7;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar1 = (bool)*puVar7;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar11 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar15 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pFVar6,bVar4,pFVar8,bVar5,pFVar10,bVar1,pTVar11,pFVar13,pFVar14,pFVar15);
  return;
}

// StaticExecute @ 14a58b2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
FRigUnit_ProjectTransformToNewParent::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FRigElementKey *param_4,bool param_5,FRigElementKey *param_6,bool param_7,
          TTransform<double> *param_8,FCachedRigElement *param_9,FCachedRigElement *param_10,
          FCachedRigElement *param_11)

{
  undefined1 auStackY_1f8 [32];
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_168.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_168.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_168.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_168.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_168.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_168.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_1c8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_1c8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_1c8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_1c8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_1c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_1c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_108.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_108.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_108.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_108.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_a8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_a8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_a8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_a8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FRigUnit_GetTransform::StaticExecute(param_1,param_2,GlobalSpace,param_3,&local_168,param_9);
  FRigUnit_GetTransform::StaticExecute(param_1,param_4,GlobalSpace,param_5,&local_1c8,param_10);
  FRigUnit_GetTransform::StaticExecute(param_1,param_6,GlobalSpace,param_7,&local_108,param_11);
  FRigVMFunction_MathTransformMakeRelative::StaticExecute
            ((FRigVMExecuteContext *)param_1,&local_168,&local_1c8,&local_a8);
  FRigVMFunction_MathTransformMakeAbsolute::StaticExecute
            ((FRigVMExecuteContext *)param_1,&local_a8,&local_108,param_8);
  return;
}

