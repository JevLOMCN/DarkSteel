// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a491a90

UScriptStruct * __cdecl FRigUnit_HierarchyAddSocket::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddSocket.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddSocket.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddSocket,(UObject *)pUVar1,
                         L"RigUnit_HierarchyAddSocket");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_HierarchyAddSocket_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddSocket.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddSocket.OuterSingleton;
}

// GetExecuteContextStruct @ 14a491b20

UScriptStruct * __thiscall
FRigUnit_HierarchyAddSocket::GetExecuteContextStruct(FRigUnit_HierarchyAddSocket *this)

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

// GetElementTypeToSpawn @ 14a493510

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ERigElementType __thiscall
FRigUnit_HierarchyAddSocket::GetElementTypeToSpawn(FRigUnit_HierarchyAddSocket *this)

{
  return Last;
}

// Execute @ 14a493520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_HierarchyAddSocket::Execute(FRigUnit_HierarchyAddSocket *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Transform,this->Space,&this->Color,
                &this->Description,(FRigElementKey *)&this->field_0x10,(FName *)&this->field_0x1c,
                (FRigElementKey *)&this->field_0x24);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_HierarchyAddSocket @ 14a511100

FRigUnit_HierarchyAddSocket * __thiscall
FRigUnit_HierarchyAddSocket::FRigUnit_HierarchyAddSocket(FRigUnit_HierarchyAddSocket *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  __m128d _Var11;
  FName local_res8;
  uint local_28;
  undefined8 local_18 [2];
  
  local_28 = CONCAT31(local_28._1_3_,1);
  pFVar1 = &this->Description;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(ulonglong *)&this->field_0x24 = (ulonglong)local_28;
  *(ulonglong *)&this->field_0x10 = (ulonglong)local_28;
  *(undefined8 *)&this->field_0x1c = 0;
  *(undefined ***)this = &___7FRigUnit_HierarchyAddSocket__6B_;
  *(undefined4 *)&this->field_0x2c = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar10;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  ::FName::FName(&local_res8,L"NewSocket");
  *(uint *)&this->field_0x1c = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0x20 = local_res8.Number;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var11 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  this->Space = LocalSpace;
  *&(this->Transform).Scale3D.ZW.m128d_f64 = _Var11.m128d_f64;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  if (pFVar1 != (FString *)local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Description).Data.ArrayNum = 0;
    (this->Description).Data.ArrayMax = 0;
  }
  return this;
}

// Execute @ 14a5295e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyAddSocket::Execute
          (FRigUnit_HierarchyAddSocket *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Transform,this->Space,&this->Color,&this->Description,
                (FRigElementKey *)&this->field_0x10,(FName *)&this->field_0x1c,
                (FRigElementKey *)&this->field_0x24);
  return;
}

// RigVMExecute @ 14a547390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddSocket::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  ERigVMTransformSpace *pEVar6;
  FLinearColor *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  FString *pFVar9;
  FRigElementKey *pFVar10;
  FName *pFVar11;
  FRigElementKey *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TTransform<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar8[1].Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  EVar1 = *pEVar6;
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FLinearColor *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = (FString *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pTVar5,EVar1,pFVar7,pFVar9,pFVar10,pFVar11,pFVar12);
  return;
}

// StaticExecute @ 14a57f9c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyAddSocket::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          ERigVMTransformSpace param_3,FLinearColor *param_4,FString *param_5,
          FRigElementKey *param_6,FName *param_7,FRigElementKey *param_8)

{
  int iVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  bool bVar4;
  URigHierarchyController *this;
  FRigElementKey *pFVar5;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TTransform<double> local_88;
  
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    bVar4 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
    if (bVar4) {
      if ((param_1->Hierarchy->Elements).ArrayNum <
          (param_1->UnitContext).HierarchySettings.ProceduralElementLimit) {
        param_8->Type = Curve;
        (param_8->Name).ComparisonIndex = 0;
        (param_8->Name).Number = 0;
        this = URigHierarchy::GetController(param_1->Hierarchy,true);
        if (this != (URigHierarchyController *)0x0) {
          iVar1 = this->CurrentInstructionIndex;
          this->CurrentInstructionIndex = *(int *)&param_1->field_0x18;
          local_88.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
          local_88.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
          local_88.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
          local_88.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
          local_88.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
          local_88.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
          local_88.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
          local_88.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
          local_88.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
          local_88.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
          local_a8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_6;
          local_a8.Data.ArrayNum = (param_6->Name).Number;
          local_88.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
          local_88.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
          pFVar5 = URigHierarchyController::AddSocket
                             (this,(FRigElementKey *)&local_b8,*param_7,(FRigElementKey *)&local_a8,
                              &local_88,param_3 == GlobalSpace,param_4,param_5,false,false);
          uVar2 = *(undefined3 *)&pFVar5->field_0x1;
          FVar3.Value = (pFVar5->Name).ComparisonIndex.Value;
          param_8->Type = pFVar5->Type;
          *(undefined3 *)&param_8->field_0x1 = uVar2;
          (param_8->Name).ComparisonIndex = (FNameEntryId)FVar3.Value;
          (param_8->Name).Number = (pFVar5->Name).Number;
          this->CurrentInstructionIndex = iVar1;
        }
      }
      else {
        ::FString::operator=
                  (&local_c8,
                   L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                  );
      }
    }
    else {
      FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_98);
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_a8);
      ::FString::PrintfImpl(&local_b8,L"Node can only run in %s or %s Event");
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
      local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

